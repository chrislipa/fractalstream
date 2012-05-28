//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // GRRegs Register Class...
  static const unsigned GRRegs[] = {
    XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::R4, XCore::R5, XCore::R6, XCore::R7, XCore::R8, XCore::R9, XCore::R10, 
  };

  // RRegs Register Class...
  static const unsigned RRegs[] = {
    XCore::CP, XCore::DP, XCore::SP, XCore::LR, 
  };

  // GRRegsVTs Register Class Value Types...
  static const MVT GRRegsVTs[] = {
    MVT::i32, MVT::Other
  };

  // RRegsVTs Register Class Value Types...
  static const MVT RRegsVTs[] = {
    MVT::i32, MVT::Other
  };

}  // end anonymous namespace

namespace XCore {   // Register class instances
  GRRegsClass	GRRegsRegClass;
  RRegsClass	RRegsRegClass;

  // GRRegs Register Class sub-classes...
  static const TargetRegisterClass* const GRRegsSubclasses [] = {
    NULL
  };

  // RRegs Register Class sub-classes...
  static const TargetRegisterClass* const RRegsSubclasses [] = {
    NULL
  };

  // GRRegs Register Class super-classes...
  static const TargetRegisterClass* const GRRegsSuperclasses [] = {
    NULL
  };

  // RRegs Register Class super-classes...
  static const TargetRegisterClass* const RRegsSuperclasses [] = {
    NULL
  };


    GRRegsClass::iterator
    GRRegsClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    GRRegsClass::iterator
    GRRegsClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      if (RI->hasFP(MF))
        return end()-1;  // don't allocate R10
      else
        return end();
    }
  
GRRegsClass::GRRegsClass()  : TargetRegisterClass(GRRegsRegClassID, GRRegsVTs, GRRegsSubclasses, GRRegsSuperclasses, 4, 4, 1, GRRegs, GRRegs + 12) {}

    RRegsClass::iterator
    RRegsClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    RRegsClass::iterator
    RRegsClass::allocation_order_end(const MachineFunction &MF) const {
      // No allocatable registers
      return begin();
    }
  
RRegsClass::RRegsClass()  : TargetRegisterClass(RRegsRegClassID, RRegsVTs, RRegsSubclasses, RRegsSuperclasses, 4, 4, 1, RRegs, RRegs + 4) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &XCore::GRRegsRegClass,
    &XCore::RRegsRegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { XCore::NoRegister, XCore::NoRegister, 
XCore::NoRegister, XCore::NoRegister };
  const unsigned SubregHashTableSize = 2;
  const unsigned Empty_AliasSet[] = { 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned CP_SubRegsSet[] = { 0 };
  const unsigned DP_SubRegsSet[] = { 0 };
  const unsigned LR_SubRegsSet[] = { 0 };
  const unsigned R0_SubRegsSet[] = { 0 };
  const unsigned R1_SubRegsSet[] = { 0 };
  const unsigned R10_SubRegsSet[] = { 0 };
  const unsigned R11_SubRegsSet[] = { 0 };
  const unsigned R2_SubRegsSet[] = { 0 };
  const unsigned R3_SubRegsSet[] = { 0 };
  const unsigned R4_SubRegsSet[] = { 0 };
  const unsigned R5_SubRegsSet[] = { 0 };
  const unsigned R6_SubRegsSet[] = { 0 };
  const unsigned R7_SubRegsSet[] = { 0 };
  const unsigned R8_SubRegsSet[] = { 0 };
  const unsigned R9_SubRegsSet[] = { 0 };
  const unsigned SP_SubRegsSet[] = { 0 };
  const unsigned Empty_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "cp",	"CP",	Empty_AliasSet,	CP_SubRegsSet,	Empty_SuperRegsSet },
    { "dp",	"DP",	Empty_AliasSet,	DP_SubRegsSet,	Empty_SuperRegsSet },
    { "lr",	"LR",	Empty_AliasSet,	LR_SubRegsSet,	Empty_SuperRegsSet },
    { "r0",	"R0",	Empty_AliasSet,	R0_SubRegsSet,	Empty_SuperRegsSet },
    { "r1",	"R1",	Empty_AliasSet,	R1_SubRegsSet,	Empty_SuperRegsSet },
    { "r10",	"R10",	Empty_AliasSet,	R10_SubRegsSet,	Empty_SuperRegsSet },
    { "r11",	"R11",	Empty_AliasSet,	R11_SubRegsSet,	Empty_SuperRegsSet },
    { "r2",	"R2",	Empty_AliasSet,	R2_SubRegsSet,	Empty_SuperRegsSet },
    { "r3",	"R3",	Empty_AliasSet,	R3_SubRegsSet,	Empty_SuperRegsSet },
    { "r4",	"R4",	Empty_AliasSet,	R4_SubRegsSet,	Empty_SuperRegsSet },
    { "r5",	"R5",	Empty_AliasSet,	R5_SubRegsSet,	Empty_SuperRegsSet },
    { "r6",	"R6",	Empty_AliasSet,	R6_SubRegsSet,	Empty_SuperRegsSet },
    { "r7",	"R7",	Empty_AliasSet,	R7_SubRegsSet,	Empty_SuperRegsSet },
    { "r8",	"R8",	Empty_AliasSet,	R8_SubRegsSet,	Empty_SuperRegsSet },
    { "r9",	"R9",	Empty_AliasSet,	R9_SubRegsSet,	Empty_SuperRegsSet },
    { "sp",	"SP",	Empty_AliasSet,	SP_SubRegsSet,	Empty_SuperRegsSet },
  };
}

unsigned XCoreGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

XCoreGenRegisterInfo::XCoreGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 17, RegisterClasses, RegisterClasses+2,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize) {
}

int XCoreGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case XCore::CP:
      return 12;
    case XCore::DP:
      return 13;
    case XCore::LR:
      return 15;
    case XCore::R0:
      return 0;
    case XCore::R1:
      return 1;
    case XCore::R10:
      return 10;
    case XCore::R11:
      return 11;
    case XCore::R2:
      return 2;
    case XCore::R3:
      return 3;
    case XCore::R4:
      return 4;
    case XCore::R5:
      return 5;
    case XCore::R6:
      return 6;
    case XCore::R7:
      return 7;
    case XCore::R8:
      return 8;
    case XCore::R9:
      return 9;
    case XCore::SP:
      return 14;
    };
  };
}

} // End llvm namespace 
