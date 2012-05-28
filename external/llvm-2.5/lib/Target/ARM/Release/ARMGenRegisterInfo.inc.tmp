//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // CCR Register Class...
  static const unsigned CCR[] = {
    ARM::CPSR, 
  };

  // DPR Register Class...
  static const unsigned DPR[] = {
    ARM::D0, ARM::D1, ARM::D2, ARM::D3, ARM::D4, ARM::D5, ARM::D6, ARM::D7, ARM::D8, ARM::D9, ARM::D10, ARM::D11, ARM::D12, ARM::D13, ARM::D14, ARM::D15, 
  };

  // GPR Register Class...
  static const unsigned GPR[] = {
    ARM::R0, ARM::R1, ARM::R2, ARM::R3, ARM::R4, ARM::R5, ARM::R6, ARM::R7, ARM::R8, ARM::R9, ARM::R10, ARM::R12, ARM::R11, ARM::LR, ARM::SP, ARM::PC, 
  };

  // SPR Register Class...
  static const unsigned SPR[] = {
    ARM::S0, ARM::S1, ARM::S2, ARM::S3, ARM::S4, ARM::S5, ARM::S6, ARM::S7, ARM::S8, ARM::S9, ARM::S10, ARM::S11, ARM::S12, ARM::S13, ARM::S14, ARM::S15, ARM::S16, ARM::S17, ARM::S18, ARM::S19, ARM::S20, ARM::S21, ARM::S22, ARM::S23, ARM::S24, ARM::S25, ARM::S26, ARM::S27, ARM::S28, ARM::S29, ARM::S30, ARM::S31, 
  };

  // CCRVTs Register Class Value Types...
  static const MVT CCRVTs[] = {
    MVT::i32, MVT::Other
  };

  // DPRVTs Register Class Value Types...
  static const MVT DPRVTs[] = {
    MVT::f64, MVT::Other
  };

  // GPRVTs Register Class Value Types...
  static const MVT GPRVTs[] = {
    MVT::i32, MVT::Other
  };

  // SPRVTs Register Class Value Types...
  static const MVT SPRVTs[] = {
    MVT::f32, MVT::Other
  };

}  // end anonymous namespace

namespace ARM {   // Register class instances
  CCRClass	CCRRegClass;
  DPRClass	DPRRegClass;
  GPRClass	GPRRegClass;
  SPRClass	SPRRegClass;

  // CCR Register Class sub-classes...
  static const TargetRegisterClass* const CCRSubclasses [] = {
    NULL
  };

  // DPR Register Class sub-classes...
  static const TargetRegisterClass* const DPRSubclasses [] = {
    NULL
  };

  // GPR Register Class sub-classes...
  static const TargetRegisterClass* const GPRSubclasses [] = {
    NULL
  };

  // SPR Register Class sub-classes...
  static const TargetRegisterClass* const SPRSubclasses [] = {
    NULL
  };

  // CCR Register Class super-classes...
  static const TargetRegisterClass* const CCRSuperclasses [] = {
    NULL
  };

  // DPR Register Class super-classes...
  static const TargetRegisterClass* const DPRSuperclasses [] = {
    NULL
  };

  // GPR Register Class super-classes...
  static const TargetRegisterClass* const GPRSuperclasses [] = {
    NULL
  };

  // SPR Register Class super-classes...
  static const TargetRegisterClass* const SPRSuperclasses [] = {
    NULL
  };


CCRClass::CCRClass()  : TargetRegisterClass(CCRRegClassID, CCRVTs, CCRSubclasses, CCRSuperclasses, 4, 4, 1, CCR, CCR + 1) {}

DPRClass::DPRClass()  : TargetRegisterClass(DPRRegClassID, DPRVTs, DPRSubclasses, DPRSuperclasses, 8, 8, 1, DPR, DPR + 16) {}

    // FP is R11, R9 is available.
    static const unsigned ARM_GPR_AO_1[] = {
      ARM::R3, ARM::R2, ARM::R1, ARM::R0,
      ARM::R12,ARM::LR,
      ARM::R4, ARM::R5, ARM::R6, ARM::R7,
      ARM::R8, ARM::R9, ARM::R10,
      ARM::R11 };
    // FP is R11, R9 is not available.
    static const unsigned ARM_GPR_AO_2[] = {
      ARM::R3, ARM::R2, ARM::R1, ARM::R0,
      ARM::R12,ARM::LR,
      ARM::R4, ARM::R5, ARM::R6, ARM::R7,
      ARM::R8, ARM::R10,
      ARM::R11 };
    // FP is R7, R9 is available.
    static const unsigned ARM_GPR_AO_3[] = {
      ARM::R3, ARM::R2, ARM::R1, ARM::R0,
      ARM::R12,ARM::LR,
      ARM::R4, ARM::R5, ARM::R6,
      ARM::R8, ARM::R9, ARM::R10,ARM::R11,
      ARM::R7 };
    // FP is R7, R9 is not available.
    static const unsigned ARM_GPR_AO_4[] = {
      ARM::R3, ARM::R2, ARM::R1, ARM::R0,
      ARM::R12,ARM::LR,
      ARM::R4, ARM::R5, ARM::R6,
      ARM::R8, ARM::R10,ARM::R11,
      ARM::R7 };

    // FP is R7, only low registers available.
    static const unsigned THUMB_GPR_AO[] = {
      ARM::R2, ARM::R1, ARM::R0,
      ARM::R4, ARM::R5, ARM::R6, ARM::R7 };

    GPRClass::iterator
    GPRClass::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const ARMSubtarget &Subtarget = TM.getSubtarget<ARMSubtarget>();
      if (Subtarget.isThumb())
        return THUMB_GPR_AO;
      if (Subtarget.useThumbBacktraces()) {
        if (Subtarget.isR9Reserved())
          return ARM_GPR_AO_4;
        else
          return ARM_GPR_AO_3;
      } else {
        if (Subtarget.isR9Reserved())
          return ARM_GPR_AO_2;
        else
          return ARM_GPR_AO_1;
      }
    }

    GPRClass::iterator
    GPRClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetRegisterInfo *RI = TM.getRegisterInfo();
      const ARMSubtarget &Subtarget = TM.getSubtarget<ARMSubtarget>();
      GPRClass::iterator I;
      if (Subtarget.isThumb())
        I = THUMB_GPR_AO + (sizeof(THUMB_GPR_AO)/sizeof(unsigned));
      else if (Subtarget.useThumbBacktraces()) {
        if (Subtarget.isR9Reserved()) {
          I = ARM_GPR_AO_4 + (sizeof(ARM_GPR_AO_4)/sizeof(unsigned));
        } else {
          I = ARM_GPR_AO_3 + (sizeof(ARM_GPR_AO_3)/sizeof(unsigned));
        }
      } else {
        if (Subtarget.isR9Reserved()) {
          I = ARM_GPR_AO_2 + (sizeof(ARM_GPR_AO_2)/sizeof(unsigned));
        } else {
          I = ARM_GPR_AO_1 + (sizeof(ARM_GPR_AO_1)/sizeof(unsigned));
        }
      }

      // Mac OS X requires FP not to be clobbered for backtracing purpose.
      return (Subtarget.isTargetDarwin() || RI->hasFP(MF)) ? I-1 : I;
    }
  
GPRClass::GPRClass()  : TargetRegisterClass(GPRRegClassID, GPRVTs, GPRSubclasses, GPRSuperclasses, 4, 4, 1, GPR, GPR + 16) {}

SPRClass::SPRClass()  : TargetRegisterClass(SPRRegClassID, SPRVTs, SPRSubclasses, SPRSuperclasses, 4, 4, 1, SPR, SPR + 32) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &ARM::CCRRegClass,
    &ARM::DPRRegClass,
    &ARM::GPRRegClass,
    &ARM::SPRRegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D3, ARM::S7, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D11, ARM::S23, 
                                       ARM::D1, ARM::S3, 
                                       ARM::D5, ARM::S10, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D8, ARM::S17, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D4, ARM::S8, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D12, ARM::S24, 
                                       ARM::D5, ARM::S11, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D15, ARM::S30, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D9, ARM::S18, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D4, ARM::S9, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D12, ARM::S25, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D6, ARM::S12, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D15, ARM::S31, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D9, ARM::S19, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D1, ARM::S2, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D13, ARM::S26, 
                                       ARM::D6, ARM::S13, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D2, ARM::S4, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D10, ARM::S20, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D13, ARM::S27, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D7, ARM::S14, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D2, ARM::S5, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D0, ARM::S0, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D10, ARM::S21, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D14, ARM::S28, 
                                       ARM::D7, ARM::S15, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D3, ARM::S6, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D0, ARM::S1, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D11, ARM::S22, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D14, ARM::S29, 
                                       ARM::NoRegister, ARM::NoRegister, 
                                       ARM::D8, ARM::S16, 
                                       ARM::NoRegister, ARM::NoRegister, 
ARM::NoRegister, ARM::NoRegister };
  const unsigned SubregHashTableSize = 256;


  // Register Alias Sets...
  const unsigned Empty_AliasSet[] = { 0 };
  const unsigned D0_AliasSet[] = { ARM::S0, ARM::S1, 0 };
  const unsigned D1_AliasSet[] = { ARM::S2, ARM::S3, 0 };
  const unsigned D10_AliasSet[] = { ARM::S20, ARM::S21, 0 };
  const unsigned D11_AliasSet[] = { ARM::S22, ARM::S23, 0 };
  const unsigned D12_AliasSet[] = { ARM::S24, ARM::S25, 0 };
  const unsigned D13_AliasSet[] = { ARM::S26, ARM::S27, 0 };
  const unsigned D14_AliasSet[] = { ARM::S28, ARM::S29, 0 };
  const unsigned D15_AliasSet[] = { ARM::S30, ARM::S31, 0 };
  const unsigned D2_AliasSet[] = { ARM::S4, ARM::S5, 0 };
  const unsigned D3_AliasSet[] = { ARM::S6, ARM::S7, 0 };
  const unsigned D4_AliasSet[] = { ARM::S8, ARM::S9, 0 };
  const unsigned D5_AliasSet[] = { ARM::S10, ARM::S11, 0 };
  const unsigned D6_AliasSet[] = { ARM::S12, ARM::S13, 0 };
  const unsigned D7_AliasSet[] = { ARM::S14, ARM::S15, 0 };
  const unsigned D8_AliasSet[] = { ARM::S16, ARM::S17, 0 };
  const unsigned D9_AliasSet[] = { ARM::S18, ARM::S19, 0 };
  const unsigned S0_AliasSet[] = { ARM::D0, 0 };
  const unsigned S1_AliasSet[] = { ARM::D0, 0 };
  const unsigned S10_AliasSet[] = { ARM::D5, 0 };
  const unsigned S11_AliasSet[] = { ARM::D5, 0 };
  const unsigned S12_AliasSet[] = { ARM::D6, 0 };
  const unsigned S13_AliasSet[] = { ARM::D6, 0 };
  const unsigned S14_AliasSet[] = { ARM::D7, 0 };
  const unsigned S15_AliasSet[] = { ARM::D7, 0 };
  const unsigned S16_AliasSet[] = { ARM::D8, 0 };
  const unsigned S17_AliasSet[] = { ARM::D8, 0 };
  const unsigned S18_AliasSet[] = { ARM::D9, 0 };
  const unsigned S19_AliasSet[] = { ARM::D9, 0 };
  const unsigned S2_AliasSet[] = { ARM::D1, 0 };
  const unsigned S20_AliasSet[] = { ARM::D10, 0 };
  const unsigned S21_AliasSet[] = { ARM::D10, 0 };
  const unsigned S22_AliasSet[] = { ARM::D11, 0 };
  const unsigned S23_AliasSet[] = { ARM::D11, 0 };
  const unsigned S24_AliasSet[] = { ARM::D12, 0 };
  const unsigned S25_AliasSet[] = { ARM::D12, 0 };
  const unsigned S26_AliasSet[] = { ARM::D13, 0 };
  const unsigned S27_AliasSet[] = { ARM::D13, 0 };
  const unsigned S28_AliasSet[] = { ARM::D14, 0 };
  const unsigned S29_AliasSet[] = { ARM::D14, 0 };
  const unsigned S3_AliasSet[] = { ARM::D1, 0 };
  const unsigned S30_AliasSet[] = { ARM::D15, 0 };
  const unsigned S31_AliasSet[] = { ARM::D15, 0 };
  const unsigned S4_AliasSet[] = { ARM::D2, 0 };
  const unsigned S5_AliasSet[] = { ARM::D2, 0 };
  const unsigned S6_AliasSet[] = { ARM::D3, 0 };
  const unsigned S7_AliasSet[] = { ARM::D3, 0 };
  const unsigned S8_AliasSet[] = { ARM::D4, 0 };
  const unsigned S9_AliasSet[] = { ARM::D4, 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned CPSR_SubRegsSet[] = { 0 };
  const unsigned D0_SubRegsSet[] = { ARM::S0, ARM::S1, 0 };
  const unsigned D1_SubRegsSet[] = { ARM::S2, ARM::S3, 0 };
  const unsigned D10_SubRegsSet[] = { ARM::S20, ARM::S21, 0 };
  const unsigned D11_SubRegsSet[] = { ARM::S22, ARM::S23, 0 };
  const unsigned D12_SubRegsSet[] = { ARM::S24, ARM::S25, 0 };
  const unsigned D13_SubRegsSet[] = { ARM::S26, ARM::S27, 0 };
  const unsigned D14_SubRegsSet[] = { ARM::S28, ARM::S29, 0 };
  const unsigned D15_SubRegsSet[] = { ARM::S30, ARM::S31, 0 };
  const unsigned D2_SubRegsSet[] = { ARM::S4, ARM::S5, 0 };
  const unsigned D3_SubRegsSet[] = { ARM::S6, ARM::S7, 0 };
  const unsigned D4_SubRegsSet[] = { ARM::S8, ARM::S9, 0 };
  const unsigned D5_SubRegsSet[] = { ARM::S10, ARM::S11, 0 };
  const unsigned D6_SubRegsSet[] = { ARM::S12, ARM::S13, 0 };
  const unsigned D7_SubRegsSet[] = { ARM::S14, ARM::S15, 0 };
  const unsigned D8_SubRegsSet[] = { ARM::S16, ARM::S17, 0 };
  const unsigned D9_SubRegsSet[] = { ARM::S18, ARM::S19, 0 };
  const unsigned LR_SubRegsSet[] = { 0 };
  const unsigned PC_SubRegsSet[] = { 0 };
  const unsigned R0_SubRegsSet[] = { 0 };
  const unsigned R1_SubRegsSet[] = { 0 };
  const unsigned R10_SubRegsSet[] = { 0 };
  const unsigned R11_SubRegsSet[] = { 0 };
  const unsigned R12_SubRegsSet[] = { 0 };
  const unsigned R2_SubRegsSet[] = { 0 };
  const unsigned R3_SubRegsSet[] = { 0 };
  const unsigned R4_SubRegsSet[] = { 0 };
  const unsigned R5_SubRegsSet[] = { 0 };
  const unsigned R6_SubRegsSet[] = { 0 };
  const unsigned R7_SubRegsSet[] = { 0 };
  const unsigned R8_SubRegsSet[] = { 0 };
  const unsigned R9_SubRegsSet[] = { 0 };
  const unsigned S0_SubRegsSet[] = { 0 };
  const unsigned S1_SubRegsSet[] = { 0 };
  const unsigned S10_SubRegsSet[] = { 0 };
  const unsigned S11_SubRegsSet[] = { 0 };
  const unsigned S12_SubRegsSet[] = { 0 };
  const unsigned S13_SubRegsSet[] = { 0 };
  const unsigned S14_SubRegsSet[] = { 0 };
  const unsigned S15_SubRegsSet[] = { 0 };
  const unsigned S16_SubRegsSet[] = { 0 };
  const unsigned S17_SubRegsSet[] = { 0 };
  const unsigned S18_SubRegsSet[] = { 0 };
  const unsigned S19_SubRegsSet[] = { 0 };
  const unsigned S2_SubRegsSet[] = { 0 };
  const unsigned S20_SubRegsSet[] = { 0 };
  const unsigned S21_SubRegsSet[] = { 0 };
  const unsigned S22_SubRegsSet[] = { 0 };
  const unsigned S23_SubRegsSet[] = { 0 };
  const unsigned S24_SubRegsSet[] = { 0 };
  const unsigned S25_SubRegsSet[] = { 0 };
  const unsigned S26_SubRegsSet[] = { 0 };
  const unsigned S27_SubRegsSet[] = { 0 };
  const unsigned S28_SubRegsSet[] = { 0 };
  const unsigned S29_SubRegsSet[] = { 0 };
  const unsigned S3_SubRegsSet[] = { 0 };
  const unsigned S30_SubRegsSet[] = { 0 };
  const unsigned S31_SubRegsSet[] = { 0 };
  const unsigned S4_SubRegsSet[] = { 0 };
  const unsigned S5_SubRegsSet[] = { 0 };
  const unsigned S6_SubRegsSet[] = { 0 };
  const unsigned S7_SubRegsSet[] = { 0 };
  const unsigned S8_SubRegsSet[] = { 0 };
  const unsigned S9_SubRegsSet[] = { 0 };
  const unsigned SP_SubRegsSet[] = { 0 };


  // Register Super-registers Sets...
  const unsigned Empty_SuperRegsSet[] = { 0 };
  const unsigned S0_SuperRegsSet[] = { ARM::D0, 0 };
  const unsigned S1_SuperRegsSet[] = { ARM::D0, 0 };
  const unsigned S10_SuperRegsSet[] = { ARM::D5, 0 };
  const unsigned S11_SuperRegsSet[] = { ARM::D5, 0 };
  const unsigned S12_SuperRegsSet[] = { ARM::D6, 0 };
  const unsigned S13_SuperRegsSet[] = { ARM::D6, 0 };
  const unsigned S14_SuperRegsSet[] = { ARM::D7, 0 };
  const unsigned S15_SuperRegsSet[] = { ARM::D7, 0 };
  const unsigned S16_SuperRegsSet[] = { ARM::D8, 0 };
  const unsigned S17_SuperRegsSet[] = { ARM::D8, 0 };
  const unsigned S18_SuperRegsSet[] = { ARM::D9, 0 };
  const unsigned S19_SuperRegsSet[] = { ARM::D9, 0 };
  const unsigned S2_SuperRegsSet[] = { ARM::D1, 0 };
  const unsigned S20_SuperRegsSet[] = { ARM::D10, 0 };
  const unsigned S21_SuperRegsSet[] = { ARM::D10, 0 };
  const unsigned S22_SuperRegsSet[] = { ARM::D11, 0 };
  const unsigned S23_SuperRegsSet[] = { ARM::D11, 0 };
  const unsigned S24_SuperRegsSet[] = { ARM::D12, 0 };
  const unsigned S25_SuperRegsSet[] = { ARM::D12, 0 };
  const unsigned S26_SuperRegsSet[] = { ARM::D13, 0 };
  const unsigned S27_SuperRegsSet[] = { ARM::D13, 0 };
  const unsigned S28_SuperRegsSet[] = { ARM::D14, 0 };
  const unsigned S29_SuperRegsSet[] = { ARM::D14, 0 };
  const unsigned S3_SuperRegsSet[] = { ARM::D1, 0 };
  const unsigned S30_SuperRegsSet[] = { ARM::D15, 0 };
  const unsigned S31_SuperRegsSet[] = { ARM::D15, 0 };
  const unsigned S4_SuperRegsSet[] = { ARM::D2, 0 };
  const unsigned S5_SuperRegsSet[] = { ARM::D2, 0 };
  const unsigned S6_SuperRegsSet[] = { ARM::D3, 0 };
  const unsigned S7_SuperRegsSet[] = { ARM::D3, 0 };
  const unsigned S8_SuperRegsSet[] = { ARM::D4, 0 };
  const unsigned S9_SuperRegsSet[] = { ARM::D4, 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "cpsr",	"CPSR",	Empty_AliasSet,	CPSR_SubRegsSet,	Empty_SuperRegsSet },
    { "d0",	"D0",	D0_AliasSet,	D0_SubRegsSet,	Empty_SuperRegsSet },
    { "d1",	"D1",	D1_AliasSet,	D1_SubRegsSet,	Empty_SuperRegsSet },
    { "d10",	"D10",	D10_AliasSet,	D10_SubRegsSet,	Empty_SuperRegsSet },
    { "d11",	"D11",	D11_AliasSet,	D11_SubRegsSet,	Empty_SuperRegsSet },
    { "d12",	"D12",	D12_AliasSet,	D12_SubRegsSet,	Empty_SuperRegsSet },
    { "d13",	"D13",	D13_AliasSet,	D13_SubRegsSet,	Empty_SuperRegsSet },
    { "d14",	"D14",	D14_AliasSet,	D14_SubRegsSet,	Empty_SuperRegsSet },
    { "d15",	"D15",	D15_AliasSet,	D15_SubRegsSet,	Empty_SuperRegsSet },
    { "d2",	"D2",	D2_AliasSet,	D2_SubRegsSet,	Empty_SuperRegsSet },
    { "d3",	"D3",	D3_AliasSet,	D3_SubRegsSet,	Empty_SuperRegsSet },
    { "d4",	"D4",	D4_AliasSet,	D4_SubRegsSet,	Empty_SuperRegsSet },
    { "d5",	"D5",	D5_AliasSet,	D5_SubRegsSet,	Empty_SuperRegsSet },
    { "d6",	"D6",	D6_AliasSet,	D6_SubRegsSet,	Empty_SuperRegsSet },
    { "d7",	"D7",	D7_AliasSet,	D7_SubRegsSet,	Empty_SuperRegsSet },
    { "d8",	"D8",	D8_AliasSet,	D8_SubRegsSet,	Empty_SuperRegsSet },
    { "d9",	"D9",	D9_AliasSet,	D9_SubRegsSet,	Empty_SuperRegsSet },
    { "lr",	"LR",	Empty_AliasSet,	LR_SubRegsSet,	Empty_SuperRegsSet },
    { "pc",	"PC",	Empty_AliasSet,	PC_SubRegsSet,	Empty_SuperRegsSet },
    { "r0",	"R0",	Empty_AliasSet,	R0_SubRegsSet,	Empty_SuperRegsSet },
    { "r1",	"R1",	Empty_AliasSet,	R1_SubRegsSet,	Empty_SuperRegsSet },
    { "r10",	"R10",	Empty_AliasSet,	R10_SubRegsSet,	Empty_SuperRegsSet },
    { "r11",	"R11",	Empty_AliasSet,	R11_SubRegsSet,	Empty_SuperRegsSet },
    { "r12",	"R12",	Empty_AliasSet,	R12_SubRegsSet,	Empty_SuperRegsSet },
    { "r2",	"R2",	Empty_AliasSet,	R2_SubRegsSet,	Empty_SuperRegsSet },
    { "r3",	"R3",	Empty_AliasSet,	R3_SubRegsSet,	Empty_SuperRegsSet },
    { "r4",	"R4",	Empty_AliasSet,	R4_SubRegsSet,	Empty_SuperRegsSet },
    { "r5",	"R5",	Empty_AliasSet,	R5_SubRegsSet,	Empty_SuperRegsSet },
    { "r6",	"R6",	Empty_AliasSet,	R6_SubRegsSet,	Empty_SuperRegsSet },
    { "r7",	"R7",	Empty_AliasSet,	R7_SubRegsSet,	Empty_SuperRegsSet },
    { "r8",	"R8",	Empty_AliasSet,	R8_SubRegsSet,	Empty_SuperRegsSet },
    { "r9",	"R9",	Empty_AliasSet,	R9_SubRegsSet,	Empty_SuperRegsSet },
    { "s0",	"S0",	S0_AliasSet,	S0_SubRegsSet,	S0_SuperRegsSet },
    { "s1",	"S1",	S1_AliasSet,	S1_SubRegsSet,	S1_SuperRegsSet },
    { "s10",	"S10",	S10_AliasSet,	S10_SubRegsSet,	S10_SuperRegsSet },
    { "s11",	"S11",	S11_AliasSet,	S11_SubRegsSet,	S11_SuperRegsSet },
    { "s12",	"S12",	S12_AliasSet,	S12_SubRegsSet,	S12_SuperRegsSet },
    { "s13",	"S13",	S13_AliasSet,	S13_SubRegsSet,	S13_SuperRegsSet },
    { "s14",	"S14",	S14_AliasSet,	S14_SubRegsSet,	S14_SuperRegsSet },
    { "s15",	"S15",	S15_AliasSet,	S15_SubRegsSet,	S15_SuperRegsSet },
    { "s16",	"S16",	S16_AliasSet,	S16_SubRegsSet,	S16_SuperRegsSet },
    { "s17",	"S17",	S17_AliasSet,	S17_SubRegsSet,	S17_SuperRegsSet },
    { "s18",	"S18",	S18_AliasSet,	S18_SubRegsSet,	S18_SuperRegsSet },
    { "s19",	"S19",	S19_AliasSet,	S19_SubRegsSet,	S19_SuperRegsSet },
    { "s2",	"S2",	S2_AliasSet,	S2_SubRegsSet,	S2_SuperRegsSet },
    { "s20",	"S20",	S20_AliasSet,	S20_SubRegsSet,	S20_SuperRegsSet },
    { "s21",	"S21",	S21_AliasSet,	S21_SubRegsSet,	S21_SuperRegsSet },
    { "s22",	"S22",	S22_AliasSet,	S22_SubRegsSet,	S22_SuperRegsSet },
    { "s23",	"S23",	S23_AliasSet,	S23_SubRegsSet,	S23_SuperRegsSet },
    { "s24",	"S24",	S24_AliasSet,	S24_SubRegsSet,	S24_SuperRegsSet },
    { "s25",	"S25",	S25_AliasSet,	S25_SubRegsSet,	S25_SuperRegsSet },
    { "s26",	"S26",	S26_AliasSet,	S26_SubRegsSet,	S26_SuperRegsSet },
    { "s27",	"S27",	S27_AliasSet,	S27_SubRegsSet,	S27_SuperRegsSet },
    { "s28",	"S28",	S28_AliasSet,	S28_SubRegsSet,	S28_SuperRegsSet },
    { "s29",	"S29",	S29_AliasSet,	S29_SubRegsSet,	S29_SuperRegsSet },
    { "s3",	"S3",	S3_AliasSet,	S3_SubRegsSet,	S3_SuperRegsSet },
    { "s30",	"S30",	S30_AliasSet,	S30_SubRegsSet,	S30_SuperRegsSet },
    { "s31",	"S31",	S31_AliasSet,	S31_SubRegsSet,	S31_SuperRegsSet },
    { "s4",	"S4",	S4_AliasSet,	S4_SubRegsSet,	S4_SuperRegsSet },
    { "s5",	"S5",	S5_AliasSet,	S5_SubRegsSet,	S5_SuperRegsSet },
    { "s6",	"S6",	S6_AliasSet,	S6_SubRegsSet,	S6_SuperRegsSet },
    { "s7",	"S7",	S7_AliasSet,	S7_SubRegsSet,	S7_SuperRegsSet },
    { "s8",	"S8",	S8_AliasSet,	S8_SubRegsSet,	S8_SuperRegsSet },
    { "s9",	"S9",	S9_AliasSet,	S9_SubRegsSet,	S9_SuperRegsSet },
    { "sp",	"SP",	Empty_AliasSet,	SP_SubRegsSet,	Empty_SuperRegsSet },
  };
}

unsigned ARMGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

ARMGenRegisterInfo::ARMGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 66, RegisterClasses, RegisterClasses+4,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize) {
}

int ARMGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case ARM::CPSR:
      return -1;
    case ARM::D0:
      return -1;
    case ARM::D1:
      return -1;
    case ARM::D10:
      return -1;
    case ARM::D11:
      return -1;
    case ARM::D12:
      return -1;
    case ARM::D13:
      return -1;
    case ARM::D14:
      return -1;
    case ARM::D15:
      return -1;
    case ARM::D2:
      return -1;
    case ARM::D3:
      return -1;
    case ARM::D4:
      return -1;
    case ARM::D5:
      return -1;
    case ARM::D6:
      return -1;
    case ARM::D7:
      return -1;
    case ARM::D8:
      return -1;
    case ARM::D9:
      return -1;
    case ARM::LR:
      return 14;
    case ARM::PC:
      return 15;
    case ARM::R0:
      return 0;
    case ARM::R1:
      return 1;
    case ARM::R10:
      return 10;
    case ARM::R11:
      return 11;
    case ARM::R12:
      return 12;
    case ARM::R2:
      return 2;
    case ARM::R3:
      return 3;
    case ARM::R4:
      return 4;
    case ARM::R5:
      return 5;
    case ARM::R6:
      return 6;
    case ARM::R7:
      return 7;
    case ARM::R8:
      return 8;
    case ARM::R9:
      return 9;
    case ARM::S0:
      return -1;
    case ARM::S1:
      return -1;
    case ARM::S10:
      return -1;
    case ARM::S11:
      return -1;
    case ARM::S12:
      return -1;
    case ARM::S13:
      return -1;
    case ARM::S14:
      return -1;
    case ARM::S15:
      return -1;
    case ARM::S16:
      return -1;
    case ARM::S17:
      return -1;
    case ARM::S18:
      return -1;
    case ARM::S19:
      return -1;
    case ARM::S2:
      return -1;
    case ARM::S20:
      return -1;
    case ARM::S21:
      return -1;
    case ARM::S22:
      return -1;
    case ARM::S23:
      return -1;
    case ARM::S24:
      return -1;
    case ARM::S25:
      return -1;
    case ARM::S26:
      return -1;
    case ARM::S27:
      return -1;
    case ARM::S28:
      return -1;
    case ARM::S29:
      return -1;
    case ARM::S3:
      return -1;
    case ARM::S30:
      return -1;
    case ARM::S31:
      return -1;
    case ARM::S4:
      return -1;
    case ARM::S5:
      return -1;
    case ARM::S6:
      return -1;
    case ARM::S7:
      return -1;
    case ARM::S8:
      return -1;
    case ARM::S9:
      return -1;
    case ARM::SP:
      return 13;
    };
  };
}

} // End llvm namespace 
