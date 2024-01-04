//===- Hello.cpp - Example code from "Writing an LLVM Pass" ---------------===//
//
// This is a modified version of LLVM's Hello World program to demonstrate 
// how to query IR2Vec.
//
//===----------------------------------------------------------------------===//

#include "llvm/ADT/Statistic.h"
#include "llvm/IR/Function.h"
#include "llvm/IR2Vec.h"
#include "llvm/Pass.h"
#include "llvm/Support/CommandLine.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Transforms/IPO/PassManagerBuilder.h"
#include "llvm/IR/LegacyPassManager.h"

#include <fstream>
#include <iostream>

using namespace llvm;

#define DEBUG_TYPE "hello_module"

STATISTIC(hellomodule, "Counts number of functions greeted");

static cl::opt<std::string>
    embeddings("vocab", cl::desc("<embedding vocab file>"), cl::Required);

namespace {
// Hello2 - The second implementation with getAnalysisUsage implemented.
struct HelloIR2Vec : public ModulePass {
  static char ID; // Pass identification, replacement for typeid

  void getAnalysisUsage(AnalysisUsage &AU) const override {
    AU.setPreservesAll();
  }

  HelloIR2Vec() : ModulePass(ID) {}

  bool runOnModule(Module &M) override {

  const std::string outputPath = "/home/nishu/nishant/output.txt";
	std::ofstream outputFile(outputPath, std::ios::app);

	if (!outputFile.is_open()) {
        std::cerr << "Error: Unable to open the file for writing." << std::endl;
        return false;
    }

	std::ostream& customOut = outputFile;

	customOut << "Hello IR2Vec Pass" << std::endl;
    auto ir2vec =
        IR2Vec::Embeddings(
          M,
          IR2Vec::IR2VecMode::FlowAware,
          embeddings
        );

    auto pgmVec = ir2vec.getProgramVector();

    for (auto val : pgmVec)
      customOut << val << "\t";

	customOut << std::endl;

	outputFile.close();

    return false;
  }
};

} // namespace

char HelloIR2Vec::ID = 0;
// static RegisterPass<HelloIR2Vec> Z("hello-IR2Vec",
//                                    "Hello World Pass (with IR2Vec)");


static RegisterPass<HelloIR2Vec> X("hello-IR2Vec", "Hello World Pass (with IR2Vec)");
static llvm::RegisterStandardPasses
    Y(llvm::PassManagerBuilder::EP_OptimizerLast,
      [](const llvm::PassManagerBuilder &Builder,
         llvm::legacy::PassManagerBase &PM) {
        // if (Builder.OptLevel >= 0)
          PM.add(new HelloIR2Vec());
      });