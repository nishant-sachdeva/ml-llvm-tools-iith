//===- Hello.cpp - Example code from "Writing an LLVM Pass" ---------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//
//
// This file implements two versions of the LLVM "Hello World" pass described
// in docs/WritingAnLLVMPass.html
//
//===----------------------------------------------------------------------===//

#include "grpc/RegisterAllocationInference.h"
#include "grpc/gRPCUtil.h"
#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Function.h"
#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"
using namespace llvm;

#define DEBUG_TYPE "hello"

STATISTIC(HelloCounter, "Counts number of functions greeted");

namespace {
// Hello - The first implementation, without getAnalysisUsage.
struct Hello : public FunctionPass {
  static char ID; // Pass identification, replacement for typeid
  Inference::RegisterAllocationInference::Stub *Stub = nullptr;
  gRPCUtil client;
  Inference::GraphList request;
  Inference::ColorData reply;
  Hello() : FunctionPass(ID) {
    client.SetStub<Inference::RegisterAllocationInference>();
    Stub = (Inference::RegisterAllocationInference::Stub *)client.getStub();
  }

  bool runOnFunction(Function &F) override {
    ++HelloCounter;
    errs() << "Hello: ";
    errs().write_escaped(F.getName()) << '\n';
    request.set_payload(F.getName());
    grpc::ClientContext context;
    grpc::Status status = Stub->getColouring(&context, request, &reply);

    outs() << reply.payload();
    return false;
  }
};
} // namespace

char Hello::ID = 0;
static RegisterPass<Hello> X("hello", "Hello World Pass");

namespace {
// Hello2 - The second implementation with getAnalysisUsage implemented.
struct Hello2 : public FunctionPass {
  static char ID; // Pass identification, replacement for typeid
  Hello2() : FunctionPass(ID) {}

  bool runOnFunction(Function &F) override {
    ++HelloCounter;
    errs() << "Hello: ";
    errs().write_escaped(F.getName()) << '\n';
    return false;
  }

  // We don't modify the program, so we preserve all analyses.
  void getAnalysisUsage(AnalysisUsage &AU) const override {
    AU.setPreservesAll();
  }
};
} // namespace

char Hello2::ID = 0;
static RegisterPass<Hello2>
    Y("hello2", "Hello World Pass (with getAnalysisUsage implemented)");
