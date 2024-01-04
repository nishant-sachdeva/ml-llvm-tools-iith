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

#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Function.h"
#include "llvm/Pass.h"
#include "llvm/Support/raw_ostream.h"

#include <fstream>
#include <iostream>
#include <cxxabi.h>
using namespace llvm;

#define DEBUG_TYPE "hello"

STATISTIC(HelloCounter, "Counts number of functions greeted");

// Function to get demanged instruction name
std::string getDemagledName(const llvm::Instruction *instruction) {
  auto instructionName = instruction->getName().str();
  std::size_t sz = 17;
  int status;
  char *const readable_name =
      abi::__cxa_demangle(instructionName.c_str(), 0, &sz, &status);
  auto demangledName =
      status == 0 ? std::string(readable_name) : std::string(instructionName);
  free(readable_name);
  return demangledName;
}

namespace {
// Hello - The first implementation, without getAnalysisUsage.
struct Hello : public FunctionPass {
  static char ID; // Pass identification, replacement for typeid
  Hello() : FunctionPass(ID) {}

  bool runOnFunction(Function &F) override {
    ++HelloCounter;
    errs() << "Hello: ";
    errs().write_escaped(F.getName()) << '\n';
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

    const std::string outputPath = "/home/nishu/nishant/instructionNames.txt";
    std::ofstream outputFile(outputPath, std::ios::app);

    if (!outputFile.is_open()) {
      std::cerr << "Error: Unable to open the file for writing." << std::endl;
      return false;
    }

    std::ostream& customOut = outputFile;

    // print instruction count
    customOut << "Instruction Count: " << F.getInstructionCount() << "\n";

    for (auto &BB : F) {
      for (auto &I : BB) {
        // customOut() << "Hello: ";
        customOut << "Normal Name: "; 
        customOut << I.getName().str() << "\t";
        customOut << "\t";
        customOut << "Demangled Name: ";
        customOut << getDemagledName(&I);
        customOut << "\n";
      }
    }
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
    Y("hello2", "Hello World Pass with instruction names printed");
