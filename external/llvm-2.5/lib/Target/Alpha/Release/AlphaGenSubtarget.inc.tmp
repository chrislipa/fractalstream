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
  FA =  1 << 0,
  FM =  1 << 1,
  FST0 =  1 << 2,
  FST1 =  1 << 3,
  L0 =  1 << 4,
  L1 =  1 << 5,
  U0 =  1 << 6,
  U1 =  1 << 7
};

enum {
  FeatureCIX =  1 << 0
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "cix", "Enable CIX extentions", FeatureCIX, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "ev6", "Select the ev6 processor", 0, 0 },
  { "ev67", "Select the ev67 processor", FeatureCIX, 0 },
  { "generic", "Select the generic processor", 0, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 29
};
static const llvm::InstrStage Stages[] = {
  { 0, 0 }, // No itinerary
  { 3, L0 | L1 }, // 1
  { 4, L0 | L1 }, // 2
  { 0, L0 | L1 }, // 3
  { 0, FST0 | FST1 | L0 | L1 }, // 4
  { 1, L0 | L1 | U0 | U1 }, // 5
  { 1, L1 }, // 6
  { 1, L0 | L1 }, // 7
  { 0, U0 | U1 }, // 8
  { 3, U0 | U1 }, // 9
  { 3, L0 }, // 10
  { 1, L0 | U0 | L1 | U1 }, // 11
  { 1, U0 | U1 }, // 12
  { 7, U1 }, // 13
  { 3, U0 }, // 14
  { 0, FA }, // 15
  { 6, FA }, // 16
  { 6, FM }, // 17
  { 12, FA }, // 18
  { 15, FA }, // 19
  { 18, FA }, // 20
  { 33, FA }, // 21
  { 3, FST0 | FST1 | L0 | L1 }, // 22
  { 0, 0 } // End itinerary
};

enum {
  StagesSize = sizeof(Stages)/sizeof(llvm::InstrStage)
};

static const llvm::InstrItinerary Alpha21264Itineraries[] = {
  { 0, 0 }, // 0
  { 11, 12 }, // 1
  { 16, 17 }, // 2
  { 15, 16 }, // 3
  { 16, 17 }, // 4
  { 18, 19 }, // 5
  { 19, 20 }, // 6
  { 2, 3 }, // 7
  { 17, 18 }, // 8
  { 20, 21 }, // 9
  { 21, 22 }, // 10
  { 4, 5 }, // 11
  { 22, 23 }, // 12
  { 11, 12 }, // 13
  { 8, 9 }, // 14
  { 1, 2 }, // 15
  { 11, 12 }, // 16
  { 14, 15 }, // 17
  { 13, 14 }, // 18
  { 12, 13 }, // 19
  { 3, 4 }, // 20
  { 2, 3 }, // 21
  { 10, 11 }, // 22
  { 5, 6 }, // 23
  { 7, 8 }, // 24
  { 0, 0 }, // 25
  { 6, 7 }, // 26
  { 6, 7 }, // 27
  { 9, 10 } // 28
};

// Sorted (by key) array of itineraries for CPU subtype.
static const llvm::SubtargetInfoKV ProcItinKV[] = {
  { "ev6", (void *)&Alpha21264Itineraries },
  { "ev67", (void *)&Alpha21264Itineraries },
  { "generic", (void *)&Alpha21264Itineraries }
};

enum {
  ProcItinKVSize = sizeof(ProcItinKV)/sizeof(llvm::SubtargetInfoKV)
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::AlphaSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & FeatureCIX) != 0) HasCT = true;

  InstrItinerary *Itinerary = (InstrItinerary *)Features.getInfo(ProcItinKV, ProcItinKVSize);
  InstrItins = InstrItineraryData(Stages, Itinerary);
}
