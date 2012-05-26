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
};

enum {
  FeatureXS1A =  1 << 0,
  FeatureXS1B =  1 << 1
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "xs1a", "Enable XS1A instructions", FeatureXS1A, 0 },
  { "xs1b", "Enable XS1B instructions", FeatureXS1B, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "generic", "Select the generic processor", FeatureXS1A, 0 },
  { "xs1a-generic", "Select the xs1a-generic processor", FeatureXS1A, 0 },
  { "xs1b-generic", "Select the xs1b-generic processor", FeatureXS1B, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 1
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::XCoreSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & FeatureXS1A) != 0) IsXS1A = true;
  if ((Bits & FeatureXS1B) != 0) IsXS1B = true;
}
