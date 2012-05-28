//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Header Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

#include "llvm/Target/TargetRegisterInfo.h"
#include <string>

namespace llvm {

struct IA64GenRegisterInfo : public TargetRegisterInfo {
  explicit IA64GenRegisterInfo(int CallFrameSetupOpcode = -1, int CallFrameDestroyOpcode = -1);
  virtual int getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const;
  virtual int getDwarfRegNum(unsigned RegNum, bool isEH) const = 0;
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned getSubReg(unsigned RegNo, unsigned Index) const;
};

namespace IA64 { // Register classes
  enum {
    FPRegClassID = 1,
    GRRegClassID = 2,
    PRRegClassID = 3
  };

  struct FPClass : public TargetRegisterClass {
    FPClass();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern FPClass	FPRegClass;
  static TargetRegisterClass * const FPRegisterClass = &FPRegClass;
  struct GRClass : public TargetRegisterClass {
    GRClass();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GRClass	GRRegClass;
  static TargetRegisterClass * const GRRegisterClass = &GRRegClass;
  struct PRClass : public TargetRegisterClass {
    PRClass();
  };
  extern PRClass	PRRegClass;
  static TargetRegisterClass * const PRRegisterClass = &PRRegClass;
} // end of namespace IA64

} // End llvm namespace 
