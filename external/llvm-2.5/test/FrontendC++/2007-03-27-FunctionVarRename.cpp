// RUN: %llvmgxx %s -emit-llvm -S -o - | not grep eprintf1
// RUN: %llvmgxx %s -emit-llvm -S -o - | grep eprintf

// Only one eprintf should exist in the output

extern "C" 


void foo() {


}

void *bar() {

  return 0;
}
