//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Subtarget Enumeration Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

#include "llvm/Target/SubtargetFeature.h"
#include "llvm/Target/TargetInstrItineraries.h"

enum {
  ALU =  1 << 0,
  IMULDIV =  1 << 1
};

enum {
  FeatureBitCount =  1 << 0,
  FeatureCondMov =  1 << 1,
  FeatureEABI =  1 << 2,
  FeatureFP64Bit =  1 << 3,
  FeatureGP64Bit =  1 << 4,
  FeatureMinMax =  1 << 5,
  FeatureMips2 =  1 << 6,
  FeatureMulDivAdd =  1 << 7,
  FeatureO32 =  1 << 8,
  FeatureSEInReg =  1 << 9,
  FeatureSingleFloat =  1 << 10,
  FeatureSwap =  1 << 11,
  FeatureVFPU =  1 << 12
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "bitcount", "Enable 'count leading bits' instructions.", FeatureBitCount, 0 },
  { "condmov", "Enable 'conditional move' instructions.", FeatureCondMov, 0 },
  { "eabi", "Enable eabi ABI", FeatureEABI, 0 },
  { "fp64", "Support 64-bit FP registers.", FeatureFP64Bit, 0 },
  { "gp64", "General Purpose Registers are 64-bit wide.", FeatureGP64Bit, 0 },
  { "minmax", "Enable 'min/max' instructions.", FeatureMinMax, 0 },
  { "mips2", "Mips2 ISA Support", FeatureMips2, 0 },
  { "muldivadd", "Enable 'multiply add/sub' instructions.", FeatureMulDivAdd, 0 },
  { "o32", "Enable o32 ABI", FeatureO32, 0 },
  { "seinreg", "Enable 'signext in register' instructions.", FeatureSEInReg, 0 },
  { "single-float", "Only supports single precision float", FeatureSingleFloat, 0 },
  { "swap", "Enable 'byte/half swap' instructions.", FeatureSwap, 0 },
  { "vfpu", "Enable vector FPU instructions.", FeatureVFPU, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "allegrex", "Select the allegrex processor", FeatureMips2 | FeatureSingleFloat | FeatureEABI | FeatureVFPU | FeatureSEInReg | FeatureCondMov | FeatureMulDivAdd | FeatureMinMax | FeatureSwap | FeatureBitCount, 0 },
  { "mips1", "Select the mips1 processor", 0, 0 },
  { "mips2", "Select the mips2 processor", FeatureMips2, 0 },
  { "r2000", "Select the r2000 processor", 0, 0 },
  { "r3000", "Select the r3000 processor", 0, 0 },
  { "r6000", "Select the r6000 processor", FeatureMips2, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 21
};
static const llvm::InstrStage Stages[] = {
  { 0, 0 }, // No itinerary
  { 1, ALU }, // 1
  { 3, ALU }, // 2
  { 2, ALU }, // 3
  { 1, IMULDIV }, // 4
  { 17, IMULDIV }, // 5
  { 38, IMULDIV }, // 6
  { 4, ALU }, // 7
  { 7, ALU }, // 8
  { 8, ALU }, // 9
  { 23, ALU }, // 10
  { 36, ALU }, // 11
  { 54, ALU }, // 12
  { 12, ALU }, // 13
  { 5, ALU }, // 14
  { 0, 0 } // End itinerary
};

enum {
  StagesSize = sizeof(Stages)/sizeof(llvm::InstrStage)
};

static const llvm::InstrItinerary MipsGenericItineraries[] = {
  { 1, 2 }, // 0
  { 1, 2 }, // 1
  { 7, 8 }, // 2
  { 2, 3 }, // 3
  { 1, 2 }, // 4
  { 11, 12 }, // 5
  { 10, 11 }, // 6
  { 3, 4 }, // 7
  { 9, 10 }, // 8
  { 8, 9 }, // 9
  { 14, 15 }, // 10
  { 13, 14 }, // 11
  { 12, 13 }, // 12
  { 4, 5 }, // 13
  { 6, 7 }, // 14
  { 5, 6 }, // 15
  { 2, 3 }, // 16
  { 0, 0 }, // 17
  { 1, 2 }, // 18
  { 3, 4 }, // 19
  { 0, 0 } // 20
};

// Sorted (by key) array of itineraries for CPU subtype.
static const llvm::SubtargetInfoKV ProcItinKV[] = {
  { "allegrex", (void *)&MipsGenericItineraries },
  { "mips1", (void *)&MipsGenericItineraries },
  { "mips2", (void *)&MipsGenericItineraries },
  { "r2000", (void *)&MipsGenericItineraries },
  { "r3000", (void *)&MipsGenericItineraries },
  { "r6000", (void *)&MipsGenericItineraries }
};

enum {
  ProcItinKVSize = sizeof(ProcItinKV)/sizeof(llvm::SubtargetInfoKV)
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::MipsSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & FeatureBitCount) != 0) HasBitCount = true;
  if ((Bits & FeatureCondMov) != 0) HasCondMov = true;
  if ((Bits & FeatureEABI) != 0 && MipsABI < EABI) MipsABI = EABI;
  if ((Bits & FeatureFP64Bit) != 0) IsFP64bit = true;
  if ((Bits & FeatureGP64Bit) != 0) IsGP64bit = true;
  if ((Bits & FeatureMinMax) != 0) HasMinMax = true;
  if ((Bits & FeatureMips2) != 0 && MipsArchVersion < Mips2) MipsArchVersion = Mips2;
  if ((Bits & FeatureMulDivAdd) != 0) HasMulDivAdd = true;
  if ((Bits & FeatureO32) != 0 && MipsABI < O32) MipsABI = O32;
  if ((Bits & FeatureSEInReg) != 0) HasSEInReg = true;
  if ((Bits & FeatureSingleFloat) != 0) IsSingleFloat = true;
  if ((Bits & FeatureSwap) != 0) HasSwap = true;
  if ((Bits & FeatureVFPU) != 0) HasVFPU = true;

  InstrItinerary *Itinerary = (InstrItinerary *)Features.getInfo(ProcItinKV, ProcItinKVSize);
  InstrItins = InstrItineraryData(Stages, Itinerary);
}
