#===-- LLVMBuild.cmake - LLVMBuild Configuration for LLVM -----*- CMake -*--===#
#
#                     The LLVM Compiler Infrastructure
#
# This file is distributed under the University of Illinois Open Source
# License. See LICENSE.TXT for details.
#
#===------------------------------------------------------------------------===#
#
# This file contains the LLVMBuild project information in a format easily
# consumed by the CMake based build system.
#
# This file is autogenerated by llvm-build, do not edit!
#
#===------------------------------------------------------------------------===#


# LLVMBuild CMake fragment dependencies.
#
# CMake has no builtin way to declare that the configuration depends on
# a particular file. However, a side effect of configure_file is to add
# said input file to CMake's internal dependency list. So, we use that
# and a dummy output file to communicate the dependency information to
# CMake.
#
# FIXME: File a CMake RFE to get a properly supported version of this
# feature.
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/bindings/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/docs/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/examples/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Analysis/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Analysis/IPA/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Archive/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/AsmParser/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Bitcode/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Bitcode/Reader/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Bitcode/Writer/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/CodeGen/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/CodeGen/AsmPrinter/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/CodeGen/SelectionDAG/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/DebugInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/ExecutionEngine/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/ExecutionEngine/Interpreter/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/ExecutionEngine/JIT/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/ExecutionEngine/MCJIT/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/ExecutionEngine/RuntimeDyld/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/ExecutionEngine/IntelJITEvents/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/ExecutionEngine/OProfileJIT/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Linker/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/MC/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/MC/MCDisassembler/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/MC/MCParser/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Object/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Support/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/TableGen/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/ARM/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/ARM/AsmParser/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/ARM/Disassembler/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/ARM/InstPrinter/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/ARM/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/ARM/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/CellSPU/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/CellSPU/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/CellSPU/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/CppBackend/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/CppBackend/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Hexagon/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Hexagon/InstPrinter/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Hexagon/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Hexagon/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/MBlaze/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/MBlaze/AsmParser/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/MBlaze/Disassembler/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/MBlaze/InstPrinter/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/MBlaze/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/MBlaze/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/MSP430/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/MSP430/InstPrinter/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/MSP430/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/MSP430/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Mips/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Mips/AsmParser/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Mips/Disassembler/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Mips/InstPrinter/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Mips/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Mips/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/PTX/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/PTX/InstPrinter/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/PTX/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/PTX/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/PowerPC/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/PowerPC/InstPrinter/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/PowerPC/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/PowerPC/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Sparc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Sparc/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/Sparc/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/X86/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/X86/AsmParser/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/X86/Disassembler/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/X86/InstPrinter/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/X86/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/X86/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/X86/Utils/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/XCore/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/XCore/MCTargetDesc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Target/XCore/TargetInfo/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Transforms/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Transforms/IPO/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Transforms/InstCombine/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Transforms/Instrumentation/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Transforms/Scalar/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Transforms/Utils/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/Transforms/Vectorize/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/lib/VMCore/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/projects/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/runtime/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/bugpoint/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/lli/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-ar/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-as/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-bcanalyzer/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-cov/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-diff/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-dis/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-dwarfdump/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-extract/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-ld/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-link/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-mc/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-nm/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-objdump/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-prof/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-ranlib/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-rtdyld/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-size/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/llvm-stub/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/macho-dump/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/tools/opt/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/utils/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/utils/TableGen/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/utils/unittest/LLVMBuild.txt"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/utils/llvm-build/llvmbuild/configutil.py"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/utils/llvm-build/llvm-build"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/utils/llvm-build/llvmbuild/__init__.py"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/utils/llvm-build/llvmbuild/main.py"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/utils/llvm-build/llvmbuild/componentinfo.py"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)
configure_file("/Users/lipa/fractalstream/external/llvm-proj/llvm-3.1/utils/llvm-build/llvmbuild/util.py"
               ${CMAKE_CURRENT_BINARY_DIR}/DummyConfigureOutput)

# Explicit library dependency information.
#
# The following property assignments effectively create a map from component
# names to required libraries, in a way that is easily accessed from CMake.
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSupport )
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMObject LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMC LLVMObject LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCParser LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCDisassembler LLVMMC LLVMMCParser LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTableGen LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCore LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTarget LLVMCore LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAnalysis LLVMCore LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMipa LLVMAnalysis LLVMCore LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMTransformUtils LLVMAnalysis LLVMCore LLVMSupport LLVMTarget LLVMipa)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMInstCombine LLVMAnalysis LLVMCore LLVMSupport LLVMTarget LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMScalarOpts LLVMAnalysis LLVMCore LLVMInstCombine LLVMSupport LLVMTarget LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCodeGen LLVMAnalysis LLVMCore LLVMMC LLVMScalarOpts LLVMSupport LLVMTarget LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMExecutionEngine LLVMCore LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMRuntimeDyld LLVMObject LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMJIT LLVMCodeGen LLVMCore LLVMExecutionEngine LLVMMC LLVMRuntimeDyld LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMBlazeInfo LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMBlazeAsmParser LLVMMBlazeInfo LLVMMC LLVMMCParser LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAsmPrinter LLVMAnalysis LLVMCodeGen LLVMCore LLVMMC LLVMMCParser LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSelectionDAG LLVMAnalysis LLVMCodeGen LLVMCore LLVMMC LLVMSupport LLVMTarget LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86Utils LLVMCore LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86AsmPrinter LLVMMC LLVMSupport LLVMX86Utils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86Info LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86Desc LLVMMC LLVMSupport LLVMX86AsmPrinter LLVMX86Info)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86CodeGen LLVMAnalysis LLVMAsmPrinter LLVMCodeGen LLVMCore LLVMMC LLVMSelectionDAG LLVMSupport LLVMTarget LLVMX86AsmPrinter LLVMX86Desc LLVMX86Info LLVMX86Utils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMAsmParser LLVMCore LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBitReader LLVMCore LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMBitWriter LLVMCore LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMArchive LLVMBitReader LLVMCore LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMLinker LLVMArchive LLVMBitReader LLVMCore LLVMSupport LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMAsmPrinter LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMInfo LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMDesc LLVMARMAsmPrinter LLVMARMInfo LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMCodeGen LLVMARMAsmPrinter LLVMARMDesc LLVMARMInfo LLVMAnalysis LLVMAsmPrinter LLVMCodeGen LLVMCore LLVMMC LLVMSelectionDAG LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMAsmParser LLVMARMDesc LLVMARMInfo LLVMMC LLVMMCParser LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86Disassembler LLVMMC LLVMSupport LLVMX86Desc LLVMX86Info)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMBlazeAsmPrinter LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMBlazeDesc LLVMMBlazeAsmPrinter LLVMMBlazeInfo LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMBlazeCodeGen LLVMAsmPrinter LLVMCodeGen LLVMCore LLVMMBlazeAsmPrinter LLVMMBlazeDesc LLVMMBlazeInfo LLVMMC LLVMSelectionDAG LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMARMDisassembler LLVMARMDesc LLVMARMInfo LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMDebugInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsAsmPrinter LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsInfo LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsDesc LLVMMC LLVMMipsAsmPrinter LLVMMipsInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsCodeGen LLVMAsmPrinter LLVMCodeGen LLVMCore LLVMMC LLVMMipsAsmPrinter LLVMMipsDesc LLVMMipsInfo LLVMSelectionDAG LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCellSPUInfo LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCellSPUDesc LLVMCellSPUInfo LLVMMC)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCellSPUCodeGen LLVMAsmPrinter LLVMCellSPUDesc LLVMCellSPUInfo LLVMCodeGen LLVMCore LLVMMC LLVMSelectionDAG LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMBlazeDisassembler LLVMMBlazeDesc LLVMMBlazeInfo LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCppBackendInfo LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMHexagonAsmPrinter LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMSP430AsmPrinter LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMSP430Info LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMSP430Desc LLVMMC LLVMMSP430AsmPrinter LLVMMSP430Info LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMSP430CodeGen LLVMAsmPrinter LLVMCodeGen LLVMCore LLVMMC LLVMMSP430AsmPrinter LLVMMSP430Desc LLVMMSP430Info LLVMSelectionDAG LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_gtest LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_gtest_main gtest)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMHexagonInfo LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMHexagonDesc LLVMHexagonInfo LLVMMC)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMInterpreter LLVMCodeGen LLVMCore LLVMExecutionEngine LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMCJIT LLVMCore LLVMExecutionEngine LLVMRuntimeDyld LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMVectorize LLVMAnalysis LLVMCore LLVMInstCombine LLVMSupport LLVMTarget LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMipo LLVMAnalysis LLVMCore LLVMInstCombine LLVMScalarOpts LLVMSupport LLVMTarget LLVMTransformUtils LLVMVectorize LLVMipa)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsAsmParser LLVMMC LLVMMCParser LLVMMipsDesc LLVMMipsInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMInstrumentation LLVMAnalysis LLVMCore LLVMSupport LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMMipsDisassembler LLVMMC LLVMMipsInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPTXAsmPrinter LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPTXInfo LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPTXDesc LLVMMC LLVMPTXAsmPrinter LLVMPTXInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPTXCodeGen LLVMAnalysis LLVMAsmPrinter LLVMCodeGen LLVMCore LLVMMC LLVMPTXDesc LLVMPTXInfo LLVMSelectionDAG LLVMSupport LLVMTarget LLVMTransformUtils)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMXCoreInfo LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPowerPCAsmPrinter LLVMMC LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPowerPCInfo LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPowerPCDesc LLVMMC LLVMPowerPCAsmPrinter LLVMPowerPCInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMPowerPCCodeGen LLVMAnalysis LLVMAsmPrinter LLVMCodeGen LLVMCore LLVMMC LLVMPowerPCAsmPrinter LLVMPowerPCDesc LLVMPowerPCInfo LLVMSelectionDAG LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMXCoreDesc LLVMMC LLVMXCoreInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMCppBackendCodeGen LLVMCore LLVMCppBackendInfo LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSparcInfo LLVMMC LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSparcDesc LLVMMC LLVMSparcInfo LLVMSupport)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMSparcCodeGen LLVMAsmPrinter LLVMCodeGen LLVMCore LLVMMC LLVMSelectionDAG LLVMSparcDesc LLVMSparcInfo LLVMSupport LLVMTarget)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMXCoreCodeGen LLVMAsmPrinter LLVMCodeGen LLVMCore LLVMMC LLVMSelectionDAG LLVMSupport LLVMTarget LLVMXCoreDesc LLVMXCoreInfo)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMX86AsmParser LLVMMC LLVMMCParser LLVMSupport LLVMX86Desc LLVMX86Info)
set_property(GLOBAL PROPERTY LLVMBUILD_LIB_DEPS_LLVMHexagonCodeGen LLVMAsmPrinter LLVMCodeGen LLVMCore LLVMHexagonAsmPrinter LLVMHexagonDesc LLVMHexagonInfo LLVMMC LLVMSelectionDAG LLVMSupport LLVMTarget)
