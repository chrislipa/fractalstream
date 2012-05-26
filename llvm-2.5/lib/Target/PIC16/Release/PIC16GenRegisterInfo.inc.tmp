//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // BSR Register Class...
  static const unsigned BSR[] = {
    PIC16::BS, 
  };

  // FSR16 Register Class...
  static const unsigned FSR16[] = {
    PIC16::FSR0, PIC16::FSR1, 
  };

  // GPR Register Class...
  static const unsigned GPR[] = {
    PIC16::W, 
  };

  // STATUSR Register Class...
  static const unsigned STATUSR[] = {
    PIC16::STATUS, 
  };

  // BSRVTs Register Class Value Types...
  static const MVT BSRVTs[] = {
    MVT::i8, MVT::Other
  };

  // FSR16VTs Register Class Value Types...
  static const MVT FSR16VTs[] = {
    MVT::i16, MVT::Other
  };

  // GPRVTs Register Class Value Types...
  static const MVT GPRVTs[] = {
    MVT::i8, MVT::Other
  };

  // STATUSRVTs Register Class Value Types...
  static const MVT STATUSRVTs[] = {
    MVT::i8, MVT::Other
  };

}  // end anonymous namespace

namespace PIC16 {   // Register class instances
  BSRClass	BSRRegClass;
  FSR16Class	FSR16RegClass;
  GPRClass	GPRRegClass;
  STATUSRClass	STATUSRRegClass;

  // BSR Register Class sub-classes...
  static const TargetRegisterClass* const BSRSubclasses [] = {
    NULL
  };

  // FSR16 Register Class sub-classes...
  static const TargetRegisterClass* const FSR16Subclasses [] = {
    NULL
  };

  // GPR Register Class sub-classes...
  static const TargetRegisterClass* const GPRSubclasses [] = {
    NULL
  };

  // STATUSR Register Class sub-classes...
  static const TargetRegisterClass* const STATUSRSubclasses [] = {
    NULL
  };

  // BSR Register Class super-classes...
  static const TargetRegisterClass* const BSRSuperclasses [] = {
    NULL
  };

  // FSR16 Register Class super-classes...
  static const TargetRegisterClass* const FSR16Superclasses [] = {
    NULL
  };

  // GPR Register Class super-classes...
  static const TargetRegisterClass* const GPRSuperclasses [] = {
    NULL
  };

  // STATUSR Register Class super-classes...
  static const TargetRegisterClass* const STATUSRSuperclasses [] = {
    NULL
  };


BSRClass::BSRClass()  : TargetRegisterClass(BSRRegClassID, BSRVTs, BSRSubclasses, BSRSuperclasses, 1, 1, 1, BSR, BSR + 1) {}

FSR16Class::FSR16Class()  : TargetRegisterClass(FSR16RegClassID, FSR16VTs, FSR16Subclasses, FSR16Superclasses, 2, 1, 1, FSR16, FSR16 + 2) {}

GPRClass::GPRClass()  : TargetRegisterClass(GPRRegClassID, GPRVTs, GPRSubclasses, GPRSuperclasses, 1, 1, 1, GPR, GPR + 1) {}

STATUSRClass::STATUSRClass()  : TargetRegisterClass(STATUSRRegClassID, STATUSRVTs, STATUSRSubclasses, STATUSRSuperclasses, 1, 1, 1, STATUSR, STATUSR + 1) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &PIC16::BSRRegClass,
    &PIC16::FSR16RegClass,
    &PIC16::GPRRegClass,
    &PIC16::STATUSRRegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { PIC16::NoRegister, PIC16::NoRegister, 
PIC16::NoRegister, PIC16::NoRegister };
  const unsigned SubregHashTableSize = 2;
  const unsigned Empty_AliasSet[] = { 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned BS_SubRegsSet[] = { 0 };
  const unsigned FSR0_SubRegsSet[] = { 0 };
  const unsigned FSR1_SubRegsSet[] = { 0 };
  const unsigned STATUS_SubRegsSet[] = { 0 };
  const unsigned W_SubRegsSet[] = { 0 };
  const unsigned Empty_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "BS",	"BS",	Empty_AliasSet,	BS_SubRegsSet,	Empty_SuperRegsSet },
    { "FSR0",	"FSR0",	Empty_AliasSet,	FSR0_SubRegsSet,	Empty_SuperRegsSet },
    { "FSR1",	"FSR1",	Empty_AliasSet,	FSR1_SubRegsSet,	Empty_SuperRegsSet },
    { "STATUS",	"STATUS",	Empty_AliasSet,	STATUS_SubRegsSet,	Empty_SuperRegsSet },
    { "W",	"W",	Empty_AliasSet,	W_SubRegsSet,	Empty_SuperRegsSet },
  };
}

unsigned PIC16GenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

PIC16GenRegisterInfo::PIC16GenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 6, RegisterClasses, RegisterClasses+4,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize) {
}

int PIC16GenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  };
}

} // End llvm namespace 
