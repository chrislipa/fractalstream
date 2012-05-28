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

struct PIC16GenRegisterInfo : public TargetRegisterInfo {
  explicit PIC16GenRegisterInfo(int CallFrameSetupOpcode = -1, int CallFrameDestroyOpcode = -1);
  virtual int getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const;
  virtual int getDwarfRegNum(unsigned RegNum, bool isEH) const = 0;
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned getSubReg(unsigned RegNo, unsigned Index) const;
};

namespace PIC16 { // Register classes
  enum {
    BSRRegClassID = 1,
    FSR16RegClassID = 2,
    GPRRegClassID = 3,
    STATUSRRegClassID = 4
  };

  struct BSRClass : public TargetRegisterClass {
    BSRClass();
  };
  extern BSRClass	BSRRegClass;
  static TargetRegisterClass * const BSRRegisterClass = &BSRRegClass;
  struct FSR16Class : public TargetRegisterClass {
    FSR16Class();
  };
  extern FSR16Class	FSR16RegClass;
  static TargetRegisterClass * const FSR16RegisterClass = &FSR16RegClass;
  struct GPRClass : public TargetRegisterClass {
    GPRClass();
  };
  extern GPRClass	GPRRegClass;
  static TargetRegisterClass * const GPRRegisterClass = &GPRRegClass;
  struct STATUSRClass : public TargetRegisterClass {
    STATUSRClass();
  };
  extern STATUSRClass	STATUSRRegClass;
  static TargetRegisterClass * const STATUSRRegisterClass = &STATUSRRegClass;
} // end of namespace PIC16

} // End llvm namespace 
