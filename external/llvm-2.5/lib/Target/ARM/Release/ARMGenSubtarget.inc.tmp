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
  ArchV4T =  1 << 0,
  ArchV5T =  1 << 1,
  ArchV5TE =  1 << 2,
  ArchV6 =  1 << 3,
  FeatureVFP2 =  1 << 4
};

// Sorted (by key) array of values for CPU features.
static const llvm::SubtargetFeatureKV FeatureKV[] = {
  { "v4t", "ARM v4T", ArchV4T, 0 },
  { "v5t", "ARM v5T", ArchV5T, 0 },
  { "v5te", "ARM v5TE, v5TEj, v5TExp", ArchV5TE, 0 },
  { "v6", "ARM v6", ArchV6, 0 },
  { "vfp2", "Enable VFP2 instructions ", FeatureVFP2, 0 }
};

enum {
  FeatureKVSize = sizeof(FeatureKV)/sizeof(llvm::SubtargetFeatureKV)
};

// Sorted (by key) array of values for CPU subtype.
static const llvm::SubtargetFeatureKV SubTypeKV[] = {
  { "arm1020e", "Select the arm1020e processor", ArchV5TE, 0 },
  { "arm1020t", "Select the arm1020t processor", ArchV5T, 0 },
  { "arm1022e", "Select the arm1022e processor", ArchV5TE, 0 },
  { "arm10e", "Select the arm10e processor", ArchV5TE, 0 },
  { "arm10tdmi", "Select the arm10tdmi processor", ArchV5T, 0 },
  { "arm1136j-s", "Select the arm1136j-s processor", ArchV6, 0 },
  { "arm1136jf-s", "Select the arm1136jf-s processor", ArchV6 | FeatureVFP2, 0 },
  { "arm1176jz-s", "Select the arm1176jz-s processor", ArchV6, 0 },
  { "arm1176jzf-s", "Select the arm1176jzf-s processor", ArchV6 | FeatureVFP2, 0 },
  { "arm710t", "Select the arm710t processor", ArchV4T, 0 },
  { "arm720t", "Select the arm720t processor", ArchV4T, 0 },
  { "arm7tdmi", "Select the arm7tdmi processor", ArchV4T, 0 },
  { "arm7tdmi-s", "Select the arm7tdmi-s processor", ArchV4T, 0 },
  { "arm8", "Select the arm8 processor", 0, 0 },
  { "arm810", "Select the arm810 processor", 0, 0 },
  { "arm9", "Select the arm9 processor", ArchV4T, 0 },
  { "arm920", "Select the arm920 processor", ArchV4T, 0 },
  { "arm920t", "Select the arm920t processor", ArchV4T, 0 },
  { "arm922t", "Select the arm922t processor", ArchV4T, 0 },
  { "arm926ej-s", "Select the arm926ej-s processor", ArchV5TE, 0 },
  { "arm940t", "Select the arm940t processor", ArchV4T, 0 },
  { "arm946e-s", "Select the arm946e-s processor", ArchV5TE, 0 },
  { "arm966e-s", "Select the arm966e-s processor", ArchV5TE, 0 },
  { "arm968e-s", "Select the arm968e-s processor", ArchV5TE, 0 },
  { "arm9e", "Select the arm9e processor", ArchV5TE, 0 },
  { "arm9tdmi", "Select the arm9tdmi processor", ArchV4T, 0 },
  { "ep9312", "Select the ep9312 processor", ArchV4T, 0 },
  { "generic", "Select the generic processor", 0, 0 },
  { "iwmmxt", "Select the iwmmxt processor", ArchV5TE, 0 },
  { "mpcore", "Select the mpcore processor", ArchV6 | FeatureVFP2, 0 },
  { "mpcorenovfp", "Select the mpcorenovfp processor", ArchV6, 0 },
  { "strongarm", "Select the strongarm processor", 0, 0 },
  { "strongarm110", "Select the strongarm110 processor", 0, 0 },
  { "strongarm1100", "Select the strongarm1100 processor", 0, 0 },
  { "strongarm1110", "Select the strongarm1110 processor", 0, 0 },
  { "xscale", "Select the xscale processor", ArchV5TE, 0 }
};

enum {
  SubTypeKVSize = sizeof(SubTypeKV)/sizeof(llvm::SubtargetFeatureKV)
};


enum {
  ItinClassesSize = 1
};

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::ARMSubtarget::ParseSubtargetFeatures(const std::string &FS,
                                  const std::string &CPU) {
  SubtargetFeatures Features(FS);
  Features.setCPUIfNone(CPU);
  uint32_t Bits =  Features.getBits(SubTypeKV, SubTypeKVSize,
                                    FeatureKV, FeatureKVSize);
  if ((Bits & ArchV4T) != 0 && ARMArchVersion < V4T) ARMArchVersion = V4T;
  if ((Bits & ArchV5T) != 0 && ARMArchVersion < V5T) ARMArchVersion = V5T;
  if ((Bits & ArchV5TE) != 0 && ARMArchVersion < V5TE) ARMArchVersion = V5TE;
  if ((Bits & ArchV6) != 0 && ARMArchVersion < V6) ARMArchVersion = V6;
  if ((Bits & FeatureVFP2) != 0) HasVFP2 = true;
}
