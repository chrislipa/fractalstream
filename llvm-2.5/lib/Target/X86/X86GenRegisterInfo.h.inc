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

struct X86GenRegisterInfo : public TargetRegisterInfo {
  explicit X86GenRegisterInfo(int CallFrameSetupOpcode = -1, int CallFrameDestroyOpcode = -1);
  virtual int getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const;
  virtual int getDwarfRegNum(unsigned RegNum, bool isEH) const = 0;
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned getSubReg(unsigned RegNo, unsigned Index) const;
};

namespace X86 { // Register classes
  enum {
    CCRRegClassID = 1,
    FR32RegClassID = 2,
    FR64RegClassID = 3,
    GR16RegClassID = 4,
    GR16_RegClassID = 5,
    GR32RegClassID = 6,
    GR32_RegClassID = 7,
    GR64RegClassID = 8,
    GR8RegClassID = 9,
    GRADRegClassID = 10,
    RFP32RegClassID = 11,
    RFP64RegClassID = 12,
    RFP80RegClassID = 13,
    RSTRegClassID = 14,
    VR128RegClassID = 15,
    VR64RegClassID = 16
  };

  struct CCRClass : public TargetRegisterClass {
    CCRClass();
  };
  extern CCRClass	CCRRegClass;
  static TargetRegisterClass * const CCRRegisterClass = &CCRRegClass;
  struct FR32Class : public TargetRegisterClass {
    FR32Class();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern FR32Class	FR32RegClass;
  static TargetRegisterClass * const FR32RegisterClass = &FR32RegClass;
  struct FR64Class : public TargetRegisterClass {
    FR64Class();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern FR64Class	FR64RegClass;
  static TargetRegisterClass * const FR64RegisterClass = &FR64RegClass;
  struct GR16Class : public TargetRegisterClass {
    GR16Class();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GR16Class	GR16RegClass;
  static TargetRegisterClass * const GR16RegisterClass = &GR16RegClass;
  struct GR16_Class : public TargetRegisterClass {
    GR16_Class();
  };
  extern GR16_Class	GR16_RegClass;
  static TargetRegisterClass * const GR16_RegisterClass = &GR16_RegClass;
  struct GR32Class : public TargetRegisterClass {
    GR32Class();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GR32Class	GR32RegClass;
  static TargetRegisterClass * const GR32RegisterClass = &GR32RegClass;
  struct GR32_Class : public TargetRegisterClass {
    GR32_Class();
  };
  extern GR32_Class	GR32_RegClass;
  static TargetRegisterClass * const GR32_RegisterClass = &GR32_RegClass;
  struct GR64Class : public TargetRegisterClass {
    GR64Class();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GR64Class	GR64RegClass;
  static TargetRegisterClass * const GR64RegisterClass = &GR64RegClass;
  struct GR8Class : public TargetRegisterClass {
    GR8Class();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GR8Class	GR8RegClass;
  static TargetRegisterClass * const GR8RegisterClass = &GR8RegClass;
  struct GRADClass : public TargetRegisterClass {
    GRADClass();
  };
  extern GRADClass	GRADRegClass;
  static TargetRegisterClass * const GRADRegisterClass = &GRADRegClass;
  struct RFP32Class : public TargetRegisterClass {
    RFP32Class();
  };
  extern RFP32Class	RFP32RegClass;
  static TargetRegisterClass * const RFP32RegisterClass = &RFP32RegClass;
  struct RFP64Class : public TargetRegisterClass {
    RFP64Class();
  };
  extern RFP64Class	RFP64RegClass;
  static TargetRegisterClass * const RFP64RegisterClass = &RFP64RegClass;
  struct RFP80Class : public TargetRegisterClass {
    RFP80Class();
  };
  extern RFP80Class	RFP80RegClass;
  static TargetRegisterClass * const RFP80RegisterClass = &RFP80RegClass;
  struct RSTClass : public TargetRegisterClass {
    RSTClass();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern RSTClass	RSTRegClass;
  static TargetRegisterClass * const RSTRegisterClass = &RSTRegClass;
  struct VR128Class : public TargetRegisterClass {
    VR128Class();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern VR128Class	VR128RegClass;
  static TargetRegisterClass * const VR128RegisterClass = &VR128RegClass;
  struct VR64Class : public TargetRegisterClass {
    VR64Class();
  };
  extern VR64Class	VR64RegClass;
  static TargetRegisterClass * const VR64RegisterClass = &VR64RegClass;
} // end of namespace X86

} // End llvm namespace 
