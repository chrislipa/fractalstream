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
  BPU =  1 << 0,
  FPU1 =  1 << 1,
  FPU2 =  1 << 2,
  IU1 =  1 << 3,
  IU2 =  1 << 4,
  IU3 =  1 << 5,
  IU4 =  1 << 6,
  SLU =  1 << 7,
  SRU =  1 << 8,
  VFPU =  1 << 9,
  VIU1 =  1 << 10,
  VIU2 =  1 << 11,
  VPU =  1 << 12
};

enum {
  Directive32 =  1 << 0,
  Directive601 =  1 << 1,
  Directive602 =  1 << 2,
  Directive603 =  1 << 3,
  Directive604 =  1 << 4,
  Directive620 =  1 << 5,
  Directive64 =  1 << 6,
  Directive7400 =  1 << 7,
  Directive750 =  1 << 8,
  Directive970 =  1 << 9,
  Feature64Bit =  1 << 10,
  Feature64BitRegs =  1 << 11,
  FeatureAltivec =  1 << 12,
  FeatureFSqrt =  1 << 13,
  FeatureGPUL =  1 << 14,
  FeatureSTFIWX =  1 << 15
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "64bit", "Enable 64-bit instructions", Feature64Bit, 0 },
  { "64bitregs", "Enable 64-bit registers usage for ppc32 [beta]", Feature64BitRegs, 0 },
  { "altivec", "Enable Altivec instructions", FeatureAltivec, 0 },
  { "fsqrt", "Enable the fsqrt instruction", FeatureFSqrt, 0 },
  { "gpul", "Enable GPUL instructions", FeatureGPUL, 0 },
  { "stfiwx", "Enable the stfiwx instruction", FeatureSTFIWX, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "601", "Select the 601 processor", Directive601, 0 },
  { "602", "Select the 602 processor", Directive602, 0 },
  { "603", "Select the 603 processor", Directive603, 0 },
  { "603e", "Select the 603e processor", Directive603, 0 },
  { "603ev", "Select the 603ev processor", Directive603, 0 },
  { "604", "Select the 604 processor", Directive604, 0 },
  { "604e", "Select the 604e processor", Directive604, 0 },
  { "620", "Select the 620 processor", Directive620, 0 },
  { "7400", "Select the 7400 processor", Directive7400 | FeatureAltivec, 0 },
  { "7450", "Select the 7450 processor", Directive7400 | FeatureAltivec, 0 },
  { "750", "Select the 750 processor", Directive750 | FeatureAltivec, 0 },
  { "970", "Select the 970 processor", Directive970 | FeatureAltivec | FeatureGPUL | FeatureFSqrt | FeatureSTFIWX | Feature64Bit, 0 },
  { "g3", "Select the g3 processor", Directive7400, 0 },
  { "g4", "Select the g4 processor", Directive7400 | FeatureAltivec, 0 },
  { "g4+", "Select the g4+ processor", Directive750 | FeatureAltivec, 0 },
  { "g5", "Select the g5 processor", Directive970 | FeatureAltivec | FeatureGPUL | FeatureFSqrt | FeatureSTFIWX | Feature64Bit, 0 },
  { "generic", "Select the generic processor", Directive32, 0 },
  { "ppc", "Select the ppc processor", Directive32, 0 },
  { "ppc64", "Select the ppc64 processor", Directive64 | FeatureAltivec | FeatureGPUL | FeatureFSqrt | FeatureSTFIWX | Feature64Bit, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 74
};
static const llvm::InstrStage Stages[] = {
  { 0, 0 }, // No itinerary
  { 1, IU1 | IU2 }, // 1
  { 19, IU1 }, // 2
  { 1, FPU1 }, // 3
  { 3, FPU1 }, // 4
  { 5, IU1 }, // 5
  { 6, IU1 }, // 6
  { 3, IU1 }, // 7
  { 2, IU1 | IU2 }, // 8
  { 1, BPU }, // 9
  { 1, SRU }, // 10
  { 2, SLU }, // 11
  { 3, SLU }, // 12
  { 34, SLU }, // 13
  { 8, SLU }, // 14
  { 2, SRU }, // 15
  { 3, SRU }, // 16
  { 31, FPU1 }, // 17
  { 17, FPU1 }, // 18
  { 2, FPU1 }, // 19
  { 10, FPU1 }, // 20
  { 1, VIU1 }, // 21
  { 5, SLU }, // 22
  { 8, SRU }, // 23
  { 4, VFPU }, // 24
  { 3, VIU2 }, // 25
  { 1, VPU }, // 26
  { 1, IU1 | IU2 | IU3 | IU4 }, // 27
  { 23, IU2 }, // 28
  { 5, FPU1 }, // 29
  { 2, VFPU }, // 30
  { 4, IU2 }, // 31
  { 3, IU2 }, // 32
  { 2, IU1 | IU2 | IU3 | IU4 }, // 33
  { 2, IU2 }, // 34
  { 4, SLU }, // 35
  { 37, SLU }, // 36
  { 35, SLU }, // 37
  { 0, IU1 | IU2 | IU3 | IU4 }, // 38
  { 5, IU2 }, // 39
  { 35, FPU1 }, // 40
  { 21, FPU1 }, // 41
  { 14, FPU1 }, // 42
  { 4, VIU2 }, // 43
  { 2, VPU }, // 44
  { 4, VIU1 }, // 45
  { 3, IU1 | IU2 }, // 46
  { 68, IU1 }, // 47
  { 36, IU1 }, // 48
  { 6, IU2 }, // 49
  { 1, VFPU }, // 50
  { 6, FPU1 | FPU2 }, // 51
  { 7, IU1 | IU2 }, // 52
  { 5, IU1 | IU2 }, // 53
  { 4, IU1 | IU2 }, // 54
  { 1, IU2 }, // 55
  { 4, BPU }, // 56
  { 2, BPU }, // 57
  { 3, BPU }, // 58
  { 10, SLU }, // 59
  { 40, SLU }, // 60
  { 11, SLU }, // 61
  { 64, SLU }, // 62
  { 10, IU2 }, // 63
  { 8, IU2 }, // 64
  { 8, FPU1 | FPU2 }, // 65
  { 33, FPU1 | FPU2 }, // 66
  { 40, FPU1 | FPU2 }, // 67
  { 2, VIU1 }, // 68
  { 8, VFPU }, // 69
  { 5, VIU2 }, // 70
  { 3, VPU }, // 71
  { 0, 0 } // End itinerary
};

enum {
  StagesSize = sizeof(Stages)/sizeof(llvm::InstrStage)
};

static const llvm::InstrItinerary G3Itineraries[] = {
  { 9, 10 }, // 0
  { 10, 11 }, // 1
  { 10, 11 }, // 2
  { 10, 11 }, // 3
  { 3, 4 }, // 4
  { 17, 18 }, // 5
  { 18, 19 }, // 6
  { 19, 20 }, // 7
  { 3, 4 }, // 8
  { 20, 21 }, // 9
  { 0, 0 }, // 10
  { 1, 2 }, // 11
  { 0, 0 }, // 12
  { 2, 3 }, // 13
  { 1, 2 }, // 14
  { 3, 4 }, // 15
  { 0, 0 }, // 16
  { 4, 5 }, // 17
  { 0, 0 }, // 18
  { 0, 0 }, // 19
  { 5, 6 }, // 20
  { 6, 7 }, // 21
  { 7, 8 }, // 22
  { 0, 0 }, // 23
  { 1, 2 }, // 24
  { 0, 0 }, // 25
  { 1, 2 }, // 26
  { 0, 0 }, // 27
  { 8, 9 }, // 28
  { 11, 12 }, // 29
  { 12, 13 }, // 30
  { 12, 13 }, // 31
  { 0, 0 }, // 32
  { 11, 12 }, // 33
  { 12, 13 }, // 34
  { 0, 0 }, // 35
  { 0, 0 }, // 36
  { 11, 12 }, // 37
  { 11, 12 }, // 38
  { 11, 12 }, // 39
  { 13, 14 }, // 40
  { 0, 0 }, // 41
  { 0, 0 }, // 42
  { 12, 13 }, // 43
  { 0, 0 }, // 44
  { 0, 0 }, // 45
  { 0, 0 }, // 46
  { 0, 0 }, // 47
  { 0, 0 }, // 48
  { 14, 15 }, // 49
  { 12, 13 }, // 50
  { 11, 12 }, // 51
  { 0, 0 }, // 52
  { 15, 16 }, // 53
  { 10, 11 }, // 54
  { 10, 11 }, // 55
  { 16, 17 }, // 56
  { 16, 17 }, // 57
  { 16, 17 }, // 58
  { 10, 11 }, // 59
  { 15, 16 }, // 60
  { 15, 16 }, // 61
  { 15, 16 }, // 62
  { 15, 16 }, // 63
  { 15, 16 }, // 64
  { 16, 17 }, // 65
  { 0, 0 }, // 66
  { 0, 0 }, // 67
  { 0, 0 }, // 68
  { 0, 0 }, // 69
  { 0, 0 }, // 70
  { 0, 0 }, // 71
  { 0, 0 }, // 72
  { 0, 0 } // 73
};

static const llvm::InstrItinerary G4Itineraries[] = {
  { 9, 10 }, // 0
  { 10, 11 }, // 1
  { 10, 11 }, // 2
  { 10, 11 }, // 3
  { 3, 4 }, // 4
  { 17, 18 }, // 5
  { 18, 19 }, // 6
  { 3, 4 }, // 7
  { 3, 4 }, // 8
  { 20, 21 }, // 9
  { 0, 0 }, // 10
  { 1, 2 }, // 11
  { 0, 0 }, // 12
  { 2, 3 }, // 13
  { 1, 2 }, // 14
  { 4, 5 }, // 15
  { 21, 22 }, // 16
  { 4, 5 }, // 17
  { 0, 0 }, // 18
  { 0, 0 }, // 19
  { 5, 6 }, // 20
  { 6, 7 }, // 21
  { 7, 8 }, // 22
  { 0, 0 }, // 23
  { 1, 2 }, // 24
  { 0, 0 }, // 25
  { 1, 2 }, // 26
  { 0, 0 }, // 27
  { 8, 9 }, // 28
  { 0, 0 }, // 29
  { 11, 12 }, // 30
  { 11, 12 }, // 31
  { 11, 12 }, // 32
  { 11, 12 }, // 33
  { 11, 12 }, // 34
  { 0, 0 }, // 35
  { 0, 0 }, // 36
  { 11, 12 }, // 37
  { 11, 12 }, // 38
  { 11, 12 }, // 39
  { 13, 14 }, // 40
  { 11, 12 }, // 41
  { 0, 0 }, // 42
  { 12, 13 }, // 43
  { 0, 0 }, // 44
  { 0, 0 }, // 45
  { 0, 0 }, // 46
  { 0, 0 }, // 47
  { 11, 12 }, // 48
  { 22, 23 }, // 49
  { 14, 15 }, // 50
  { 11, 12 }, // 51
  { 0, 0 }, // 52
  { 15, 16 }, // 53
  { 10, 11 }, // 54
  { 10, 11 }, // 55
  { 16, 17 }, // 56
  { 16, 17 }, // 57
  { 10, 11 }, // 58
  { 10, 11 }, // 59
  { 15, 16 }, // 60
  { 15, 16 }, // 61
  { 15, 16 }, // 62
  { 15, 16 }, // 63
  { 15, 16 }, // 64
  { 23, 24 }, // 65
  { 25, 26 }, // 66
  { 24, 25 }, // 67
  { 21, 22 }, // 68
  { 24, 25 }, // 69
  { 21, 22 }, // 70
  { 26, 27 }, // 71
  { 21, 22 }, // 72
  { 21, 22 } // 73
};

static const llvm::InstrItinerary G4PlusItineraries[] = {
  { 9, 10 }, // 0
  { 34, 35 }, // 1
  { 34, 35 }, // 2
  { 34, 35 }, // 3
  { 29, 30 }, // 4
  { 40, 41 }, // 5
  { 41, 42 }, // 6
  { 29, 30 }, // 7
  { 29, 30 }, // 8
  { 42, 43 }, // 9
  { 0, 0 }, // 10
  { 27, 28 }, // 11
  { 0, 0 }, // 12
  { 28, 29 }, // 13
  { 27, 28 }, // 14
  { 29, 30 }, // 15
  { 30, 31 }, // 16
  { 29, 30 }, // 17
  { 0, 0 }, // 18
  { 0, 0 }, // 19
  { 31, 32 }, // 20
  { 31, 32 }, // 21
  { 32, 33 }, // 22
  { 0, 0 }, // 23
  { 27, 28 }, // 24
  { 0, 0 }, // 25
  { 33, 34 }, // 26
  { 0, 0 }, // 27
  { 33, 34 }, // 28
  { 0, 0 }, // 29
  { 12, 13 }, // 30
  { 12, 13 }, // 31
  { 12, 13 }, // 32
  { 12, 13 }, // 33
  { 32, 33 }, // 34
  { 0, 0 }, // 35
  { 0, 0 }, // 36
  { 35, 36 }, // 37
  { 35, 36 }, // 38
  { 12, 13 }, // 39
  { 36, 37 }, // 40
  { 12, 13 }, // 41
  { 12, 13 }, // 42
  { 12, 13 }, // 43
  { 0, 0 }, // 44
  { 0, 0 }, // 45
  { 12, 13 }, // 46
  { 12, 13 }, // 47
  { 12, 13 }, // 48
  { 12, 13 }, // 49
  { 37, 38 }, // 50
  { 12, 13 }, // 51
  { 0, 0 }, // 52
  { 38, 39 }, // 53
  { 34, 35 }, // 54
  { 32, 33 }, // 55
  { 31, 32 }, // 56
  { 31, 32 }, // 57
  { 39, 40 }, // 58
  { 34, 35 }, // 59
  { 34, 35 }, // 60
  { 34, 35 }, // 61
  { 34, 35 }, // 62
  { 27, 28 }, // 63
  { 38, 39 }, // 64
  { 12, 13 }, // 65
  { 43, 44 }, // 66
  { 24, 25 }, // 67
  { 30, 31 }, // 68
  { 45, 46 }, // 69
  { 21, 22 }, // 70
  { 44, 45 }, // 71
  { 44, 45 }, // 72
  { 44, 45 } // 73
};

static const llvm::InstrItinerary G5Itineraries[] = {
  { 9, 10 }, // 0
  { 56, 57 }, // 1
  { 57, 58 }, // 2
  { 58, 59 }, // 3
  { 65, 66 }, // 4
  { 66, 67 }, // 5
  { 66, 67 }, // 6
  { 51, 52 }, // 7
  { 51, 52 }, // 8
  { 51, 52 }, // 9
  { 67, 68 }, // 10
  { 46, 47 }, // 11
  { 47, 48 }, // 12
  { 48, 49 }, // 13
  { 8, 9 }, // 14
  { 49, 50 }, // 15
  { 50, 51 }, // 16
  { 51, 52 }, // 17
  { 0, 0 }, // 18
  { 52, 53 }, // 19
  { 53, 54 }, // 20
  { 53, 54 }, // 21
  { 54, 55 }, // 22
  { 55, 56 }, // 23
  { 54, 55 }, // 24
  { 8, 9 }, // 25
  { 8, 9 }, // 26
  { 1, 2 }, // 27
  { 1, 2 }, // 28
  { 0, 0 }, // 29
  { 12, 13 }, // 30
  { 0, 0 }, // 31
  { 59, 60 }, // 32
  { 12, 13 }, // 33
  { 60, 61 }, // 34
  { 12, 13 }, // 35
  { 61, 62 }, // 36
  { 12, 13 }, // 37
  { 22, 23 }, // 38
  { 22, 23 }, // 39
  { 62, 63 }, // 40
  { 12, 13 }, // 41
  { 22, 23 }, // 42
  { 61, 62 }, // 43
  { 60, 61 }, // 44
  { 11, 12 }, // 45
  { 12, 13 }, // 46
  { 61, 62 }, // 47
  { 22, 23 }, // 48
  { 61, 62 }, // 49
  { 37, 38 }, // 50
  { 35, 36 }, // 51
  { 0, 0 }, // 52
  { 60, 61 }, // 53
  { 34, 35 }, // 54
  { 32, 33 }, // 55
  { 32, 33 }, // 56
  { 12, 13 }, // 57
  { 63, 64 }, // 58
  { 12, 13 }, // 59
  { 64, 65 }, // 60
  { 12, 13 }, // 61
  { 0, 0 }, // 62
  { 0, 0 }, // 63
  { 55, 56 }, // 64
  { 12, 13 }, // 65
  { 70, 71 }, // 66
  { 69, 70 }, // 67
  { 30, 31 }, // 68
  { 69, 70 }, // 69
  { 68, 69 }, // 70
  { 71, 72 }, // 71
  { 68, 69 }, // 72
  { 71, 72 } // 73
};

// Sorted (by key) array of itineraries for CPU subtype.
static const llvm::SubtargetInfoKV ProcItinKV[] = {
  { "601", (void *)&G3Itineraries },
  { "602", (void *)&G3Itineraries },
  { "603", (void *)&G3Itineraries },
  { "603e", (void *)&G3Itineraries },
  { "603ev", (void *)&G3Itineraries },
  { "604", (void *)&G3Itineraries },
  { "604e", (void *)&G3Itineraries },
  { "620", (void *)&G3Itineraries },
  { "7400", (void *)&G4Itineraries },
  { "7450", (void *)&G4PlusItineraries },
  { "750", (void *)&G4Itineraries },
  { "970", (void *)&G5Itineraries },
  { "g3", (void *)&G3Itineraries },
  { "g4", (void *)&G4Itineraries },
  { "g4+", (void *)&G4PlusItineraries },
  { "g5", (void *)&G5Itineraries },
  { "generic", (void *)&G3Itineraries },
  { "ppc", (void *)&G3Itineraries },
  { "ppc64", (void *)&G5Itineraries }
};

enum {
  ProcItinKVSize = sizeof(ProcItinKV)/sizeof(llvm::SubtargetInfoKV)
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::PPCSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & Directive32) != 0 && DarwinDirective < PPC::DIR_32) DarwinDirective = PPC::DIR_32;
  if ((Bits & Directive601) != 0 && DarwinDirective < PPC::DIR_601) DarwinDirective = PPC::DIR_601;
  if ((Bits & Directive602) != 0 && DarwinDirective < PPC::DIR_602) DarwinDirective = PPC::DIR_602;
  if ((Bits & Directive603) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & Directive604) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & Directive620) != 0 && DarwinDirective < PPC::DIR_603) DarwinDirective = PPC::DIR_603;
  if ((Bits & Directive64) != 0 && DarwinDirective < PPC::DIR_64) DarwinDirective = PPC::DIR_64;
  if ((Bits & Directive7400) != 0 && DarwinDirective < PPC::DIR_7400) DarwinDirective = PPC::DIR_7400;
  if ((Bits & Directive750) != 0 && DarwinDirective < PPC::DIR_750) DarwinDirective = PPC::DIR_750;
  if ((Bits & Directive970) != 0 && DarwinDirective < PPC::DIR_970) DarwinDirective = PPC::DIR_970;
  if ((Bits & Feature64Bit) != 0) Has64BitSupport = true;
  if ((Bits & Feature64BitRegs) != 0) Use64BitRegs = true;
  if ((Bits & FeatureAltivec) != 0) HasAltivec = true;
  if ((Bits & FeatureFSqrt) != 0) HasFSQRT = true;
  if ((Bits & FeatureGPUL) != 0) IsGigaProcessor = true;
  if ((Bits & FeatureSTFIWX) != 0) HasSTFIWX = true;

  InstrItinerary *Itinerary = (InstrItinerary *)Features.getInfo(ProcItinKV, ProcItinKVSize);
  InstrItins = InstrItineraryData(Stages, Itinerary);
}
