//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // FP Register Class...
  static const unsigned FP[] = {
    IA64::F6, IA64::F7, IA64::F8, IA64::F9, IA64::F10, IA64::F11, IA64::F12, IA64::F13, IA64::F14, IA64::F15, IA64::F32, IA64::F33, IA64::F34, IA64::F35, IA64::F36, IA64::F37, IA64::F38, IA64::F39, IA64::F40, IA64::F41, IA64::F42, IA64::F43, IA64::F44, IA64::F45, IA64::F46, IA64::F47, IA64::F48, IA64::F49, IA64::F50, IA64::F51, IA64::F52, IA64::F53, IA64::F54, IA64::F55, IA64::F56, IA64::F57, IA64::F58, IA64::F59, IA64::F60, IA64::F61, IA64::F62, IA64::F63, IA64::F64, IA64::F65, IA64::F66, IA64::F67, IA64::F68, IA64::F69, IA64::F70, IA64::F71, IA64::F72, IA64::F73, IA64::F74, IA64::F75, IA64::F76, IA64::F77, IA64::F78, IA64::F79, IA64::F80, IA64::F81, IA64::F82, IA64::F83, IA64::F84, IA64::F85, IA64::F86, IA64::F87, IA64::F88, IA64::F89, IA64::F90, IA64::F91, IA64::F92, IA64::F93, IA64::F94, IA64::F95, IA64::F96, IA64::F97, IA64::F98, IA64::F99, IA64::F100, IA64::F101, IA64::F102, IA64::F103, IA64::F104, IA64::F105, IA64::F106, IA64::F107, IA64::F108, IA64::F109, IA64::F110, IA64::F111, IA64::F112, IA64::F113, IA64::F114, IA64::F115, IA64::F116, IA64::F117, IA64::F118, IA64::F119, IA64::F120, IA64::F121, IA64::F122, IA64::F123, IA64::F124, IA64::F125, IA64::F126, IA64::F127, IA64::F0, IA64::F1, 
  };

  // GR Register Class...
  static const unsigned GR[] = {
    IA64::out7, IA64::out6, IA64::out5, IA64::out4, IA64::out3, IA64::out2, IA64::out1, IA64::out0, IA64::r3, IA64::r8, IA64::r9, IA64::r10, IA64::r11, IA64::r14, IA64::r15, IA64::r16, IA64::r17, IA64::r18, IA64::r19, IA64::r20, IA64::r21, IA64::r23, IA64::r24, IA64::r25, IA64::r26, IA64::r27, IA64::r28, IA64::r29, IA64::r30, IA64::r31, IA64::r32, IA64::r33, IA64::r34, IA64::r35, IA64::r36, IA64::r37, IA64::r38, IA64::r39, IA64::r40, IA64::r41, IA64::r42, IA64::r43, IA64::r44, IA64::r45, IA64::r46, IA64::r47, IA64::r48, IA64::r49, IA64::r50, IA64::r51, IA64::r52, IA64::r53, IA64::r54, IA64::r55, IA64::r56, IA64::r57, IA64::r58, IA64::r59, IA64::r60, IA64::r61, IA64::r62, IA64::r63, IA64::r64, IA64::r65, IA64::r66, IA64::r67, IA64::r68, IA64::r69, IA64::r70, IA64::r71, IA64::r72, IA64::r73, IA64::r74, IA64::r75, IA64::r76, IA64::r77, IA64::r78, IA64::r79, IA64::r80, IA64::r81, IA64::r82, IA64::r83, IA64::r84, IA64::r85, IA64::r86, IA64::r87, IA64::r88, IA64::r89, IA64::r90, IA64::r91, IA64::r92, IA64::r93, IA64::r94, IA64::r95, IA64::r96, IA64::r97, IA64::r98, IA64::r99, IA64::r100, IA64::r101, IA64::r102, IA64::r103, IA64::r104, IA64::r105, IA64::r106, IA64::r107, IA64::r108, IA64::r109, IA64::r110, IA64::r111, IA64::r112, IA64::r113, IA64::r114, IA64::r115, IA64::r116, IA64::r117, IA64::r118, IA64::r119, IA64::r120, IA64::r121, IA64::r122, IA64::r123, IA64::r124, IA64::r125, IA64::r126, IA64::r127, IA64::r0, IA64::r1, IA64::r2, IA64::r5, IA64::r12, IA64::r13, IA64::r22, IA64::rp, IA64::AR_PFS, 
  };

  // PR Register Class...
  static const unsigned PR[] = {
    IA64::p6, IA64::p7, IA64::p8, IA64::p9, IA64::p10, IA64::p11, IA64::p12, IA64::p13, IA64::p14, IA64::p15, 
  };

  // FPVTs Register Class Value Types...
  static const MVT FPVTs[] = {
    MVT::f64, MVT::Other
  };

  // GRVTs Register Class Value Types...
  static const MVT GRVTs[] = {
    MVT::i64, MVT::Other
  };

  // PRVTs Register Class Value Types...
  static const MVT PRVTs[] = {
    MVT::i1, MVT::Other
  };

}  // end anonymous namespace

namespace IA64 {   // Register class instances
  FPClass	FPRegClass;
  GRClass	GRRegClass;
  PRClass	PRRegClass;

  // FP Register Class sub-classes...
  static const TargetRegisterClass* const FPSubclasses [] = {
    NULL
  };

  // GR Register Class sub-classes...
  static const TargetRegisterClass* const GRSubclasses [] = {
    NULL
  };

  // PR Register Class sub-classes...
  static const TargetRegisterClass* const PRSubclasses [] = {
    NULL
  };

  // FP Register Class super-classes...
  static const TargetRegisterClass* const FPSuperclasses [] = {
    NULL
  };

  // GR Register Class super-classes...
  static const TargetRegisterClass* const GRSuperclasses [] = {
    NULL
  };

  // PR Register Class super-classes...
  static const TargetRegisterClass* const PRSuperclasses [] = {
    NULL
  };


    FPClass::iterator
    FPClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin(); // we don't hide any FP regs from the start
    }

    FPClass::iterator
    FPClass::allocation_order_end(const MachineFunction &MF) const {
      return end()-2; // we hide regs F0, F1 from the end 
    }
  
FPClass::FPClass()  : TargetRegisterClass(FPRegClassID, FPVTs, FPSubclasses, FPSuperclasses, 16, 16, 1, FP, FP + 108) {}

    GRClass::iterator
    GRClass::allocation_order_begin(const MachineFunction &MF) const {
        // hide the 8 out? registers appropriately:
        return begin()+(8-(MF.getInfo<IA64FunctionInfo>()->outRegsUsed));
      }

      GRClass::iterator
      GRClass::allocation_order_end(const MachineFunction &MF) const {
        // the 9 special registers r0,r1,r2,r5,r12,r13 etc
        int numReservedRegs=9;
        
        // we also can't allocate registers for use as locals if they're already
        // required as 'out' registers
        numReservedRegs+=MF.getInfo<IA64FunctionInfo>()->outRegsUsed;
        return end()-numReservedRegs; // hide registers appropriately
      }
  
GRClass::GRClass()  : TargetRegisterClass(GRRegClassID, GRVTs, GRSubclasses, GRSuperclasses, 8, 8, 1, GR, GR + 135) {}

PRClass::PRClass()  : TargetRegisterClass(PRRegClassID, PRVTs, PRSubclasses, PRSuperclasses, 8, 8, 1, PR, PR + 10) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &IA64::FPRegClass,
    &IA64::GRRegClass,
    &IA64::PRRegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { IA64::NoRegister, IA64::NoRegister, 
IA64::NoRegister, IA64::NoRegister };
  const unsigned SubregHashTableSize = 2;
  const unsigned Empty_AliasSet[] = { 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned AR_PFS_SubRegsSet[] = { 0 };
  const unsigned B6_SubRegsSet[] = { 0 };
  const unsigned F0_SubRegsSet[] = { 0 };
  const unsigned F1_SubRegsSet[] = { 0 };
  const unsigned F10_SubRegsSet[] = { 0 };
  const unsigned F100_SubRegsSet[] = { 0 };
  const unsigned F101_SubRegsSet[] = { 0 };
  const unsigned F102_SubRegsSet[] = { 0 };
  const unsigned F103_SubRegsSet[] = { 0 };
  const unsigned F104_SubRegsSet[] = { 0 };
  const unsigned F105_SubRegsSet[] = { 0 };
  const unsigned F106_SubRegsSet[] = { 0 };
  const unsigned F107_SubRegsSet[] = { 0 };
  const unsigned F108_SubRegsSet[] = { 0 };
  const unsigned F109_SubRegsSet[] = { 0 };
  const unsigned F11_SubRegsSet[] = { 0 };
  const unsigned F110_SubRegsSet[] = { 0 };
  const unsigned F111_SubRegsSet[] = { 0 };
  const unsigned F112_SubRegsSet[] = { 0 };
  const unsigned F113_SubRegsSet[] = { 0 };
  const unsigned F114_SubRegsSet[] = { 0 };
  const unsigned F115_SubRegsSet[] = { 0 };
  const unsigned F116_SubRegsSet[] = { 0 };
  const unsigned F117_SubRegsSet[] = { 0 };
  const unsigned F118_SubRegsSet[] = { 0 };
  const unsigned F119_SubRegsSet[] = { 0 };
  const unsigned F12_SubRegsSet[] = { 0 };
  const unsigned F120_SubRegsSet[] = { 0 };
  const unsigned F121_SubRegsSet[] = { 0 };
  const unsigned F122_SubRegsSet[] = { 0 };
  const unsigned F123_SubRegsSet[] = { 0 };
  const unsigned F124_SubRegsSet[] = { 0 };
  const unsigned F125_SubRegsSet[] = { 0 };
  const unsigned F126_SubRegsSet[] = { 0 };
  const unsigned F127_SubRegsSet[] = { 0 };
  const unsigned F13_SubRegsSet[] = { 0 };
  const unsigned F14_SubRegsSet[] = { 0 };
  const unsigned F15_SubRegsSet[] = { 0 };
  const unsigned F16_SubRegsSet[] = { 0 };
  const unsigned F17_SubRegsSet[] = { 0 };
  const unsigned F18_SubRegsSet[] = { 0 };
  const unsigned F19_SubRegsSet[] = { 0 };
  const unsigned F2_SubRegsSet[] = { 0 };
  const unsigned F20_SubRegsSet[] = { 0 };
  const unsigned F21_SubRegsSet[] = { 0 };
  const unsigned F22_SubRegsSet[] = { 0 };
  const unsigned F23_SubRegsSet[] = { 0 };
  const unsigned F24_SubRegsSet[] = { 0 };
  const unsigned F25_SubRegsSet[] = { 0 };
  const unsigned F26_SubRegsSet[] = { 0 };
  const unsigned F27_SubRegsSet[] = { 0 };
  const unsigned F28_SubRegsSet[] = { 0 };
  const unsigned F29_SubRegsSet[] = { 0 };
  const unsigned F3_SubRegsSet[] = { 0 };
  const unsigned F30_SubRegsSet[] = { 0 };
  const unsigned F31_SubRegsSet[] = { 0 };
  const unsigned F32_SubRegsSet[] = { 0 };
  const unsigned F33_SubRegsSet[] = { 0 };
  const unsigned F34_SubRegsSet[] = { 0 };
  const unsigned F35_SubRegsSet[] = { 0 };
  const unsigned F36_SubRegsSet[] = { 0 };
  const unsigned F37_SubRegsSet[] = { 0 };
  const unsigned F38_SubRegsSet[] = { 0 };
  const unsigned F39_SubRegsSet[] = { 0 };
  const unsigned F4_SubRegsSet[] = { 0 };
  const unsigned F40_SubRegsSet[] = { 0 };
  const unsigned F41_SubRegsSet[] = { 0 };
  const unsigned F42_SubRegsSet[] = { 0 };
  const unsigned F43_SubRegsSet[] = { 0 };
  const unsigned F44_SubRegsSet[] = { 0 };
  const unsigned F45_SubRegsSet[] = { 0 };
  const unsigned F46_SubRegsSet[] = { 0 };
  const unsigned F47_SubRegsSet[] = { 0 };
  const unsigned F48_SubRegsSet[] = { 0 };
  const unsigned F49_SubRegsSet[] = { 0 };
  const unsigned F5_SubRegsSet[] = { 0 };
  const unsigned F50_SubRegsSet[] = { 0 };
  const unsigned F51_SubRegsSet[] = { 0 };
  const unsigned F52_SubRegsSet[] = { 0 };
  const unsigned F53_SubRegsSet[] = { 0 };
  const unsigned F54_SubRegsSet[] = { 0 };
  const unsigned F55_SubRegsSet[] = { 0 };
  const unsigned F56_SubRegsSet[] = { 0 };
  const unsigned F57_SubRegsSet[] = { 0 };
  const unsigned F58_SubRegsSet[] = { 0 };
  const unsigned F59_SubRegsSet[] = { 0 };
  const unsigned F6_SubRegsSet[] = { 0 };
  const unsigned F60_SubRegsSet[] = { 0 };
  const unsigned F61_SubRegsSet[] = { 0 };
  const unsigned F62_SubRegsSet[] = { 0 };
  const unsigned F63_SubRegsSet[] = { 0 };
  const unsigned F64_SubRegsSet[] = { 0 };
  const unsigned F65_SubRegsSet[] = { 0 };
  const unsigned F66_SubRegsSet[] = { 0 };
  const unsigned F67_SubRegsSet[] = { 0 };
  const unsigned F68_SubRegsSet[] = { 0 };
  const unsigned F69_SubRegsSet[] = { 0 };
  const unsigned F7_SubRegsSet[] = { 0 };
  const unsigned F70_SubRegsSet[] = { 0 };
  const unsigned F71_SubRegsSet[] = { 0 };
  const unsigned F72_SubRegsSet[] = { 0 };
  const unsigned F73_SubRegsSet[] = { 0 };
  const unsigned F74_SubRegsSet[] = { 0 };
  const unsigned F75_SubRegsSet[] = { 0 };
  const unsigned F76_SubRegsSet[] = { 0 };
  const unsigned F77_SubRegsSet[] = { 0 };
  const unsigned F78_SubRegsSet[] = { 0 };
  const unsigned F79_SubRegsSet[] = { 0 };
  const unsigned F8_SubRegsSet[] = { 0 };
  const unsigned F80_SubRegsSet[] = { 0 };
  const unsigned F81_SubRegsSet[] = { 0 };
  const unsigned F82_SubRegsSet[] = { 0 };
  const unsigned F83_SubRegsSet[] = { 0 };
  const unsigned F84_SubRegsSet[] = { 0 };
  const unsigned F85_SubRegsSet[] = { 0 };
  const unsigned F86_SubRegsSet[] = { 0 };
  const unsigned F87_SubRegsSet[] = { 0 };
  const unsigned F88_SubRegsSet[] = { 0 };
  const unsigned F89_SubRegsSet[] = { 0 };
  const unsigned F9_SubRegsSet[] = { 0 };
  const unsigned F90_SubRegsSet[] = { 0 };
  const unsigned F91_SubRegsSet[] = { 0 };
  const unsigned F92_SubRegsSet[] = { 0 };
  const unsigned F93_SubRegsSet[] = { 0 };
  const unsigned F94_SubRegsSet[] = { 0 };
  const unsigned F95_SubRegsSet[] = { 0 };
  const unsigned F96_SubRegsSet[] = { 0 };
  const unsigned F97_SubRegsSet[] = { 0 };
  const unsigned F98_SubRegsSet[] = { 0 };
  const unsigned F99_SubRegsSet[] = { 0 };
  const unsigned out0_SubRegsSet[] = { 0 };
  const unsigned out1_SubRegsSet[] = { 0 };
  const unsigned out2_SubRegsSet[] = { 0 };
  const unsigned out3_SubRegsSet[] = { 0 };
  const unsigned out4_SubRegsSet[] = { 0 };
  const unsigned out5_SubRegsSet[] = { 0 };
  const unsigned out6_SubRegsSet[] = { 0 };
  const unsigned out7_SubRegsSet[] = { 0 };
  const unsigned p0_SubRegsSet[] = { 0 };
  const unsigned p1_SubRegsSet[] = { 0 };
  const unsigned p10_SubRegsSet[] = { 0 };
  const unsigned p11_SubRegsSet[] = { 0 };
  const unsigned p12_SubRegsSet[] = { 0 };
  const unsigned p13_SubRegsSet[] = { 0 };
  const unsigned p14_SubRegsSet[] = { 0 };
  const unsigned p15_SubRegsSet[] = { 0 };
  const unsigned p16_SubRegsSet[] = { 0 };
  const unsigned p17_SubRegsSet[] = { 0 };
  const unsigned p18_SubRegsSet[] = { 0 };
  const unsigned p19_SubRegsSet[] = { 0 };
  const unsigned p2_SubRegsSet[] = { 0 };
  const unsigned p20_SubRegsSet[] = { 0 };
  const unsigned p21_SubRegsSet[] = { 0 };
  const unsigned p22_SubRegsSet[] = { 0 };
  const unsigned p23_SubRegsSet[] = { 0 };
  const unsigned p24_SubRegsSet[] = { 0 };
  const unsigned p25_SubRegsSet[] = { 0 };
  const unsigned p26_SubRegsSet[] = { 0 };
  const unsigned p27_SubRegsSet[] = { 0 };
  const unsigned p28_SubRegsSet[] = { 0 };
  const unsigned p29_SubRegsSet[] = { 0 };
  const unsigned p3_SubRegsSet[] = { 0 };
  const unsigned p30_SubRegsSet[] = { 0 };
  const unsigned p31_SubRegsSet[] = { 0 };
  const unsigned p32_SubRegsSet[] = { 0 };
  const unsigned p33_SubRegsSet[] = { 0 };
  const unsigned p34_SubRegsSet[] = { 0 };
  const unsigned p35_SubRegsSet[] = { 0 };
  const unsigned p36_SubRegsSet[] = { 0 };
  const unsigned p37_SubRegsSet[] = { 0 };
  const unsigned p38_SubRegsSet[] = { 0 };
  const unsigned p39_SubRegsSet[] = { 0 };
  const unsigned p4_SubRegsSet[] = { 0 };
  const unsigned p40_SubRegsSet[] = { 0 };
  const unsigned p41_SubRegsSet[] = { 0 };
  const unsigned p42_SubRegsSet[] = { 0 };
  const unsigned p43_SubRegsSet[] = { 0 };
  const unsigned p44_SubRegsSet[] = { 0 };
  const unsigned p45_SubRegsSet[] = { 0 };
  const unsigned p46_SubRegsSet[] = { 0 };
  const unsigned p47_SubRegsSet[] = { 0 };
  const unsigned p48_SubRegsSet[] = { 0 };
  const unsigned p49_SubRegsSet[] = { 0 };
  const unsigned p5_SubRegsSet[] = { 0 };
  const unsigned p50_SubRegsSet[] = { 0 };
  const unsigned p51_SubRegsSet[] = { 0 };
  const unsigned p52_SubRegsSet[] = { 0 };
  const unsigned p53_SubRegsSet[] = { 0 };
  const unsigned p54_SubRegsSet[] = { 0 };
  const unsigned p55_SubRegsSet[] = { 0 };
  const unsigned p56_SubRegsSet[] = { 0 };
  const unsigned p57_SubRegsSet[] = { 0 };
  const unsigned p58_SubRegsSet[] = { 0 };
  const unsigned p59_SubRegsSet[] = { 0 };
  const unsigned p6_SubRegsSet[] = { 0 };
  const unsigned p60_SubRegsSet[] = { 0 };
  const unsigned p61_SubRegsSet[] = { 0 };
  const unsigned p62_SubRegsSet[] = { 0 };
  const unsigned p63_SubRegsSet[] = { 0 };
  const unsigned p7_SubRegsSet[] = { 0 };
  const unsigned p8_SubRegsSet[] = { 0 };
  const unsigned p9_SubRegsSet[] = { 0 };
  const unsigned r0_SubRegsSet[] = { 0 };
  const unsigned r1_SubRegsSet[] = { 0 };
  const unsigned r10_SubRegsSet[] = { 0 };
  const unsigned r100_SubRegsSet[] = { 0 };
  const unsigned r101_SubRegsSet[] = { 0 };
  const unsigned r102_SubRegsSet[] = { 0 };
  const unsigned r103_SubRegsSet[] = { 0 };
  const unsigned r104_SubRegsSet[] = { 0 };
  const unsigned r105_SubRegsSet[] = { 0 };
  const unsigned r106_SubRegsSet[] = { 0 };
  const unsigned r107_SubRegsSet[] = { 0 };
  const unsigned r108_SubRegsSet[] = { 0 };
  const unsigned r109_SubRegsSet[] = { 0 };
  const unsigned r11_SubRegsSet[] = { 0 };
  const unsigned r110_SubRegsSet[] = { 0 };
  const unsigned r111_SubRegsSet[] = { 0 };
  const unsigned r112_SubRegsSet[] = { 0 };
  const unsigned r113_SubRegsSet[] = { 0 };
  const unsigned r114_SubRegsSet[] = { 0 };
  const unsigned r115_SubRegsSet[] = { 0 };
  const unsigned r116_SubRegsSet[] = { 0 };
  const unsigned r117_SubRegsSet[] = { 0 };
  const unsigned r118_SubRegsSet[] = { 0 };
  const unsigned r119_SubRegsSet[] = { 0 };
  const unsigned r12_SubRegsSet[] = { 0 };
  const unsigned r120_SubRegsSet[] = { 0 };
  const unsigned r121_SubRegsSet[] = { 0 };
  const unsigned r122_SubRegsSet[] = { 0 };
  const unsigned r123_SubRegsSet[] = { 0 };
  const unsigned r124_SubRegsSet[] = { 0 };
  const unsigned r125_SubRegsSet[] = { 0 };
  const unsigned r126_SubRegsSet[] = { 0 };
  const unsigned r127_SubRegsSet[] = { 0 };
  const unsigned r13_SubRegsSet[] = { 0 };
  const unsigned r14_SubRegsSet[] = { 0 };
  const unsigned r15_SubRegsSet[] = { 0 };
  const unsigned r16_SubRegsSet[] = { 0 };
  const unsigned r17_SubRegsSet[] = { 0 };
  const unsigned r18_SubRegsSet[] = { 0 };
  const unsigned r19_SubRegsSet[] = { 0 };
  const unsigned r2_SubRegsSet[] = { 0 };
  const unsigned r20_SubRegsSet[] = { 0 };
  const unsigned r21_SubRegsSet[] = { 0 };
  const unsigned r22_SubRegsSet[] = { 0 };
  const unsigned r23_SubRegsSet[] = { 0 };
  const unsigned r24_SubRegsSet[] = { 0 };
  const unsigned r25_SubRegsSet[] = { 0 };
  const unsigned r26_SubRegsSet[] = { 0 };
  const unsigned r27_SubRegsSet[] = { 0 };
  const unsigned r28_SubRegsSet[] = { 0 };
  const unsigned r29_SubRegsSet[] = { 0 };
  const unsigned r3_SubRegsSet[] = { 0 };
  const unsigned r30_SubRegsSet[] = { 0 };
  const unsigned r31_SubRegsSet[] = { 0 };
  const unsigned r32_SubRegsSet[] = { 0 };
  const unsigned r33_SubRegsSet[] = { 0 };
  const unsigned r34_SubRegsSet[] = { 0 };
  const unsigned r35_SubRegsSet[] = { 0 };
  const unsigned r36_SubRegsSet[] = { 0 };
  const unsigned r37_SubRegsSet[] = { 0 };
  const unsigned r38_SubRegsSet[] = { 0 };
  const unsigned r39_SubRegsSet[] = { 0 };
  const unsigned r4_SubRegsSet[] = { 0 };
  const unsigned r40_SubRegsSet[] = { 0 };
  const unsigned r41_SubRegsSet[] = { 0 };
  const unsigned r42_SubRegsSet[] = { 0 };
  const unsigned r43_SubRegsSet[] = { 0 };
  const unsigned r44_SubRegsSet[] = { 0 };
  const unsigned r45_SubRegsSet[] = { 0 };
  const unsigned r46_SubRegsSet[] = { 0 };
  const unsigned r47_SubRegsSet[] = { 0 };
  const unsigned r48_SubRegsSet[] = { 0 };
  const unsigned r49_SubRegsSet[] = { 0 };
  const unsigned r5_SubRegsSet[] = { 0 };
  const unsigned r50_SubRegsSet[] = { 0 };
  const unsigned r51_SubRegsSet[] = { 0 };
  const unsigned r52_SubRegsSet[] = { 0 };
  const unsigned r53_SubRegsSet[] = { 0 };
  const unsigned r54_SubRegsSet[] = { 0 };
  const unsigned r55_SubRegsSet[] = { 0 };
  const unsigned r56_SubRegsSet[] = { 0 };
  const unsigned r57_SubRegsSet[] = { 0 };
  const unsigned r58_SubRegsSet[] = { 0 };
  const unsigned r59_SubRegsSet[] = { 0 };
  const unsigned r6_SubRegsSet[] = { 0 };
  const unsigned r60_SubRegsSet[] = { 0 };
  const unsigned r61_SubRegsSet[] = { 0 };
  const unsigned r62_SubRegsSet[] = { 0 };
  const unsigned r63_SubRegsSet[] = { 0 };
  const unsigned r64_SubRegsSet[] = { 0 };
  const unsigned r65_SubRegsSet[] = { 0 };
  const unsigned r66_SubRegsSet[] = { 0 };
  const unsigned r67_SubRegsSet[] = { 0 };
  const unsigned r68_SubRegsSet[] = { 0 };
  const unsigned r69_SubRegsSet[] = { 0 };
  const unsigned r7_SubRegsSet[] = { 0 };
  const unsigned r70_SubRegsSet[] = { 0 };
  const unsigned r71_SubRegsSet[] = { 0 };
  const unsigned r72_SubRegsSet[] = { 0 };
  const unsigned r73_SubRegsSet[] = { 0 };
  const unsigned r74_SubRegsSet[] = { 0 };
  const unsigned r75_SubRegsSet[] = { 0 };
  const unsigned r76_SubRegsSet[] = { 0 };
  const unsigned r77_SubRegsSet[] = { 0 };
  const unsigned r78_SubRegsSet[] = { 0 };
  const unsigned r79_SubRegsSet[] = { 0 };
  const unsigned r8_SubRegsSet[] = { 0 };
  const unsigned r80_SubRegsSet[] = { 0 };
  const unsigned r81_SubRegsSet[] = { 0 };
  const unsigned r82_SubRegsSet[] = { 0 };
  const unsigned r83_SubRegsSet[] = { 0 };
  const unsigned r84_SubRegsSet[] = { 0 };
  const unsigned r85_SubRegsSet[] = { 0 };
  const unsigned r86_SubRegsSet[] = { 0 };
  const unsigned r87_SubRegsSet[] = { 0 };
  const unsigned r88_SubRegsSet[] = { 0 };
  const unsigned r89_SubRegsSet[] = { 0 };
  const unsigned r9_SubRegsSet[] = { 0 };
  const unsigned r90_SubRegsSet[] = { 0 };
  const unsigned r91_SubRegsSet[] = { 0 };
  const unsigned r92_SubRegsSet[] = { 0 };
  const unsigned r93_SubRegsSet[] = { 0 };
  const unsigned r94_SubRegsSet[] = { 0 };
  const unsigned r95_SubRegsSet[] = { 0 };
  const unsigned r96_SubRegsSet[] = { 0 };
  const unsigned r97_SubRegsSet[] = { 0 };
  const unsigned r98_SubRegsSet[] = { 0 };
  const unsigned r99_SubRegsSet[] = { 0 };
  const unsigned rp_SubRegsSet[] = { 0 };
  const unsigned Empty_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "ar.pfs",	"AR_PFS",	Empty_AliasSet,	AR_PFS_SubRegsSet,	Empty_SuperRegsSet },
    { "b6",	"B6",	Empty_AliasSet,	B6_SubRegsSet,	Empty_SuperRegsSet },
    { "f0",	"F0",	Empty_AliasSet,	F0_SubRegsSet,	Empty_SuperRegsSet },
    { "f1",	"F1",	Empty_AliasSet,	F1_SubRegsSet,	Empty_SuperRegsSet },
    { "f10",	"F10",	Empty_AliasSet,	F10_SubRegsSet,	Empty_SuperRegsSet },
    { "f100",	"F100",	Empty_AliasSet,	F100_SubRegsSet,	Empty_SuperRegsSet },
    { "f101",	"F101",	Empty_AliasSet,	F101_SubRegsSet,	Empty_SuperRegsSet },
    { "f102",	"F102",	Empty_AliasSet,	F102_SubRegsSet,	Empty_SuperRegsSet },
    { "f103",	"F103",	Empty_AliasSet,	F103_SubRegsSet,	Empty_SuperRegsSet },
    { "f104",	"F104",	Empty_AliasSet,	F104_SubRegsSet,	Empty_SuperRegsSet },
    { "f105",	"F105",	Empty_AliasSet,	F105_SubRegsSet,	Empty_SuperRegsSet },
    { "f106",	"F106",	Empty_AliasSet,	F106_SubRegsSet,	Empty_SuperRegsSet },
    { "f107",	"F107",	Empty_AliasSet,	F107_SubRegsSet,	Empty_SuperRegsSet },
    { "f108",	"F108",	Empty_AliasSet,	F108_SubRegsSet,	Empty_SuperRegsSet },
    { "f109",	"F109",	Empty_AliasSet,	F109_SubRegsSet,	Empty_SuperRegsSet },
    { "f11",	"F11",	Empty_AliasSet,	F11_SubRegsSet,	Empty_SuperRegsSet },
    { "f110",	"F110",	Empty_AliasSet,	F110_SubRegsSet,	Empty_SuperRegsSet },
    { "f111",	"F111",	Empty_AliasSet,	F111_SubRegsSet,	Empty_SuperRegsSet },
    { "f112",	"F112",	Empty_AliasSet,	F112_SubRegsSet,	Empty_SuperRegsSet },
    { "f113",	"F113",	Empty_AliasSet,	F113_SubRegsSet,	Empty_SuperRegsSet },
    { "f114",	"F114",	Empty_AliasSet,	F114_SubRegsSet,	Empty_SuperRegsSet },
    { "f115",	"F115",	Empty_AliasSet,	F115_SubRegsSet,	Empty_SuperRegsSet },
    { "f116",	"F116",	Empty_AliasSet,	F116_SubRegsSet,	Empty_SuperRegsSet },
    { "f117",	"F117",	Empty_AliasSet,	F117_SubRegsSet,	Empty_SuperRegsSet },
    { "f118",	"F118",	Empty_AliasSet,	F118_SubRegsSet,	Empty_SuperRegsSet },
    { "f119",	"F119",	Empty_AliasSet,	F119_SubRegsSet,	Empty_SuperRegsSet },
    { "f12",	"F12",	Empty_AliasSet,	F12_SubRegsSet,	Empty_SuperRegsSet },
    { "f120",	"F120",	Empty_AliasSet,	F120_SubRegsSet,	Empty_SuperRegsSet },
    { "f121",	"F121",	Empty_AliasSet,	F121_SubRegsSet,	Empty_SuperRegsSet },
    { "f122",	"F122",	Empty_AliasSet,	F122_SubRegsSet,	Empty_SuperRegsSet },
    { "f123",	"F123",	Empty_AliasSet,	F123_SubRegsSet,	Empty_SuperRegsSet },
    { "f124",	"F124",	Empty_AliasSet,	F124_SubRegsSet,	Empty_SuperRegsSet },
    { "f125",	"F125",	Empty_AliasSet,	F125_SubRegsSet,	Empty_SuperRegsSet },
    { "f126",	"F126",	Empty_AliasSet,	F126_SubRegsSet,	Empty_SuperRegsSet },
    { "f127",	"F127",	Empty_AliasSet,	F127_SubRegsSet,	Empty_SuperRegsSet },
    { "f13",	"F13",	Empty_AliasSet,	F13_SubRegsSet,	Empty_SuperRegsSet },
    { "f14",	"F14",	Empty_AliasSet,	F14_SubRegsSet,	Empty_SuperRegsSet },
    { "f15",	"F15",	Empty_AliasSet,	F15_SubRegsSet,	Empty_SuperRegsSet },
    { "f16",	"F16",	Empty_AliasSet,	F16_SubRegsSet,	Empty_SuperRegsSet },
    { "f17",	"F17",	Empty_AliasSet,	F17_SubRegsSet,	Empty_SuperRegsSet },
    { "f18",	"F18",	Empty_AliasSet,	F18_SubRegsSet,	Empty_SuperRegsSet },
    { "f19",	"F19",	Empty_AliasSet,	F19_SubRegsSet,	Empty_SuperRegsSet },
    { "f2",	"F2",	Empty_AliasSet,	F2_SubRegsSet,	Empty_SuperRegsSet },
    { "f20",	"F20",	Empty_AliasSet,	F20_SubRegsSet,	Empty_SuperRegsSet },
    { "f21",	"F21",	Empty_AliasSet,	F21_SubRegsSet,	Empty_SuperRegsSet },
    { "f22",	"F22",	Empty_AliasSet,	F22_SubRegsSet,	Empty_SuperRegsSet },
    { "f23",	"F23",	Empty_AliasSet,	F23_SubRegsSet,	Empty_SuperRegsSet },
    { "f24",	"F24",	Empty_AliasSet,	F24_SubRegsSet,	Empty_SuperRegsSet },
    { "f25",	"F25",	Empty_AliasSet,	F25_SubRegsSet,	Empty_SuperRegsSet },
    { "f26",	"F26",	Empty_AliasSet,	F26_SubRegsSet,	Empty_SuperRegsSet },
    { "f27",	"F27",	Empty_AliasSet,	F27_SubRegsSet,	Empty_SuperRegsSet },
    { "f28",	"F28",	Empty_AliasSet,	F28_SubRegsSet,	Empty_SuperRegsSet },
    { "f29",	"F29",	Empty_AliasSet,	F29_SubRegsSet,	Empty_SuperRegsSet },
    { "f3",	"F3",	Empty_AliasSet,	F3_SubRegsSet,	Empty_SuperRegsSet },
    { "f30",	"F30",	Empty_AliasSet,	F30_SubRegsSet,	Empty_SuperRegsSet },
    { "f31",	"F31",	Empty_AliasSet,	F31_SubRegsSet,	Empty_SuperRegsSet },
    { "f32",	"F32",	Empty_AliasSet,	F32_SubRegsSet,	Empty_SuperRegsSet },
    { "f33",	"F33",	Empty_AliasSet,	F33_SubRegsSet,	Empty_SuperRegsSet },
    { "f34",	"F34",	Empty_AliasSet,	F34_SubRegsSet,	Empty_SuperRegsSet },
    { "f35",	"F35",	Empty_AliasSet,	F35_SubRegsSet,	Empty_SuperRegsSet },
    { "f36",	"F36",	Empty_AliasSet,	F36_SubRegsSet,	Empty_SuperRegsSet },
    { "f37",	"F37",	Empty_AliasSet,	F37_SubRegsSet,	Empty_SuperRegsSet },
    { "f38",	"F38",	Empty_AliasSet,	F38_SubRegsSet,	Empty_SuperRegsSet },
    { "f39",	"F39",	Empty_AliasSet,	F39_SubRegsSet,	Empty_SuperRegsSet },
    { "f4",	"F4",	Empty_AliasSet,	F4_SubRegsSet,	Empty_SuperRegsSet },
    { "f40",	"F40",	Empty_AliasSet,	F40_SubRegsSet,	Empty_SuperRegsSet },
    { "f41",	"F41",	Empty_AliasSet,	F41_SubRegsSet,	Empty_SuperRegsSet },
    { "f42",	"F42",	Empty_AliasSet,	F42_SubRegsSet,	Empty_SuperRegsSet },
    { "f43",	"F43",	Empty_AliasSet,	F43_SubRegsSet,	Empty_SuperRegsSet },
    { "f44",	"F44",	Empty_AliasSet,	F44_SubRegsSet,	Empty_SuperRegsSet },
    { "f45",	"F45",	Empty_AliasSet,	F45_SubRegsSet,	Empty_SuperRegsSet },
    { "f46",	"F46",	Empty_AliasSet,	F46_SubRegsSet,	Empty_SuperRegsSet },
    { "f47",	"F47",	Empty_AliasSet,	F47_SubRegsSet,	Empty_SuperRegsSet },
    { "f48",	"F48",	Empty_AliasSet,	F48_SubRegsSet,	Empty_SuperRegsSet },
    { "f49",	"F49",	Empty_AliasSet,	F49_SubRegsSet,	Empty_SuperRegsSet },
    { "f5",	"F5",	Empty_AliasSet,	F5_SubRegsSet,	Empty_SuperRegsSet },
    { "f50",	"F50",	Empty_AliasSet,	F50_SubRegsSet,	Empty_SuperRegsSet },
    { "f51",	"F51",	Empty_AliasSet,	F51_SubRegsSet,	Empty_SuperRegsSet },
    { "f52",	"F52",	Empty_AliasSet,	F52_SubRegsSet,	Empty_SuperRegsSet },
    { "f53",	"F53",	Empty_AliasSet,	F53_SubRegsSet,	Empty_SuperRegsSet },
    { "f54",	"F54",	Empty_AliasSet,	F54_SubRegsSet,	Empty_SuperRegsSet },
    { "f55",	"F55",	Empty_AliasSet,	F55_SubRegsSet,	Empty_SuperRegsSet },
    { "f56",	"F56",	Empty_AliasSet,	F56_SubRegsSet,	Empty_SuperRegsSet },
    { "f57",	"F57",	Empty_AliasSet,	F57_SubRegsSet,	Empty_SuperRegsSet },
    { "f58",	"F58",	Empty_AliasSet,	F58_SubRegsSet,	Empty_SuperRegsSet },
    { "f59",	"F59",	Empty_AliasSet,	F59_SubRegsSet,	Empty_SuperRegsSet },
    { "f6",	"F6",	Empty_AliasSet,	F6_SubRegsSet,	Empty_SuperRegsSet },
    { "f60",	"F60",	Empty_AliasSet,	F60_SubRegsSet,	Empty_SuperRegsSet },
    { "f61",	"F61",	Empty_AliasSet,	F61_SubRegsSet,	Empty_SuperRegsSet },
    { "f62",	"F62",	Empty_AliasSet,	F62_SubRegsSet,	Empty_SuperRegsSet },
    { "f63",	"F63",	Empty_AliasSet,	F63_SubRegsSet,	Empty_SuperRegsSet },
    { "f64",	"F64",	Empty_AliasSet,	F64_SubRegsSet,	Empty_SuperRegsSet },
    { "f65",	"F65",	Empty_AliasSet,	F65_SubRegsSet,	Empty_SuperRegsSet },
    { "f66",	"F66",	Empty_AliasSet,	F66_SubRegsSet,	Empty_SuperRegsSet },
    { "f67",	"F67",	Empty_AliasSet,	F67_SubRegsSet,	Empty_SuperRegsSet },
    { "f68",	"F68",	Empty_AliasSet,	F68_SubRegsSet,	Empty_SuperRegsSet },
    { "f69",	"F69",	Empty_AliasSet,	F69_SubRegsSet,	Empty_SuperRegsSet },
    { "f7",	"F7",	Empty_AliasSet,	F7_SubRegsSet,	Empty_SuperRegsSet },
    { "f70",	"F70",	Empty_AliasSet,	F70_SubRegsSet,	Empty_SuperRegsSet },
    { "f71",	"F71",	Empty_AliasSet,	F71_SubRegsSet,	Empty_SuperRegsSet },
    { "f72",	"F72",	Empty_AliasSet,	F72_SubRegsSet,	Empty_SuperRegsSet },
    { "f73",	"F73",	Empty_AliasSet,	F73_SubRegsSet,	Empty_SuperRegsSet },
    { "f74",	"F74",	Empty_AliasSet,	F74_SubRegsSet,	Empty_SuperRegsSet },
    { "f75",	"F75",	Empty_AliasSet,	F75_SubRegsSet,	Empty_SuperRegsSet },
    { "f76",	"F76",	Empty_AliasSet,	F76_SubRegsSet,	Empty_SuperRegsSet },
    { "f77",	"F77",	Empty_AliasSet,	F77_SubRegsSet,	Empty_SuperRegsSet },
    { "f78",	"F78",	Empty_AliasSet,	F78_SubRegsSet,	Empty_SuperRegsSet },
    { "f79",	"F79",	Empty_AliasSet,	F79_SubRegsSet,	Empty_SuperRegsSet },
    { "f8",	"F8",	Empty_AliasSet,	F8_SubRegsSet,	Empty_SuperRegsSet },
    { "f80",	"F80",	Empty_AliasSet,	F80_SubRegsSet,	Empty_SuperRegsSet },
    { "f81",	"F81",	Empty_AliasSet,	F81_SubRegsSet,	Empty_SuperRegsSet },
    { "f82",	"F82",	Empty_AliasSet,	F82_SubRegsSet,	Empty_SuperRegsSet },
    { "f83",	"F83",	Empty_AliasSet,	F83_SubRegsSet,	Empty_SuperRegsSet },
    { "f84",	"F84",	Empty_AliasSet,	F84_SubRegsSet,	Empty_SuperRegsSet },
    { "f85",	"F85",	Empty_AliasSet,	F85_SubRegsSet,	Empty_SuperRegsSet },
    { "f86",	"F86",	Empty_AliasSet,	F86_SubRegsSet,	Empty_SuperRegsSet },
    { "f87",	"F87",	Empty_AliasSet,	F87_SubRegsSet,	Empty_SuperRegsSet },
    { "f88",	"F88",	Empty_AliasSet,	F88_SubRegsSet,	Empty_SuperRegsSet },
    { "f89",	"F89",	Empty_AliasSet,	F89_SubRegsSet,	Empty_SuperRegsSet },
    { "f9",	"F9",	Empty_AliasSet,	F9_SubRegsSet,	Empty_SuperRegsSet },
    { "f90",	"F90",	Empty_AliasSet,	F90_SubRegsSet,	Empty_SuperRegsSet },
    { "f91",	"F91",	Empty_AliasSet,	F91_SubRegsSet,	Empty_SuperRegsSet },
    { "f92",	"F92",	Empty_AliasSet,	F92_SubRegsSet,	Empty_SuperRegsSet },
    { "f93",	"F93",	Empty_AliasSet,	F93_SubRegsSet,	Empty_SuperRegsSet },
    { "f94",	"F94",	Empty_AliasSet,	F94_SubRegsSet,	Empty_SuperRegsSet },
    { "f95",	"F95",	Empty_AliasSet,	F95_SubRegsSet,	Empty_SuperRegsSet },
    { "f96",	"F96",	Empty_AliasSet,	F96_SubRegsSet,	Empty_SuperRegsSet },
    { "f97",	"F97",	Empty_AliasSet,	F97_SubRegsSet,	Empty_SuperRegsSet },
    { "f98",	"F98",	Empty_AliasSet,	F98_SubRegsSet,	Empty_SuperRegsSet },
    { "f99",	"F99",	Empty_AliasSet,	F99_SubRegsSet,	Empty_SuperRegsSet },
    { "out0",	"out0",	Empty_AliasSet,	out0_SubRegsSet,	Empty_SuperRegsSet },
    { "out1",	"out1",	Empty_AliasSet,	out1_SubRegsSet,	Empty_SuperRegsSet },
    { "out2",	"out2",	Empty_AliasSet,	out2_SubRegsSet,	Empty_SuperRegsSet },
    { "out3",	"out3",	Empty_AliasSet,	out3_SubRegsSet,	Empty_SuperRegsSet },
    { "out4",	"out4",	Empty_AliasSet,	out4_SubRegsSet,	Empty_SuperRegsSet },
    { "out5",	"out5",	Empty_AliasSet,	out5_SubRegsSet,	Empty_SuperRegsSet },
    { "out6",	"out6",	Empty_AliasSet,	out6_SubRegsSet,	Empty_SuperRegsSet },
    { "out7",	"out7",	Empty_AliasSet,	out7_SubRegsSet,	Empty_SuperRegsSet },
    { "p0",	"p0",	Empty_AliasSet,	p0_SubRegsSet,	Empty_SuperRegsSet },
    { "p1",	"p1",	Empty_AliasSet,	p1_SubRegsSet,	Empty_SuperRegsSet },
    { "p10",	"p10",	Empty_AliasSet,	p10_SubRegsSet,	Empty_SuperRegsSet },
    { "p11",	"p11",	Empty_AliasSet,	p11_SubRegsSet,	Empty_SuperRegsSet },
    { "p12",	"p12",	Empty_AliasSet,	p12_SubRegsSet,	Empty_SuperRegsSet },
    { "p13",	"p13",	Empty_AliasSet,	p13_SubRegsSet,	Empty_SuperRegsSet },
    { "p14",	"p14",	Empty_AliasSet,	p14_SubRegsSet,	Empty_SuperRegsSet },
    { "p15",	"p15",	Empty_AliasSet,	p15_SubRegsSet,	Empty_SuperRegsSet },
    { "p16",	"p16",	Empty_AliasSet,	p16_SubRegsSet,	Empty_SuperRegsSet },
    { "p17",	"p17",	Empty_AliasSet,	p17_SubRegsSet,	Empty_SuperRegsSet },
    { "p18",	"p18",	Empty_AliasSet,	p18_SubRegsSet,	Empty_SuperRegsSet },
    { "p19",	"p19",	Empty_AliasSet,	p19_SubRegsSet,	Empty_SuperRegsSet },
    { "p2",	"p2",	Empty_AliasSet,	p2_SubRegsSet,	Empty_SuperRegsSet },
    { "p20",	"p20",	Empty_AliasSet,	p20_SubRegsSet,	Empty_SuperRegsSet },
    { "p21",	"p21",	Empty_AliasSet,	p21_SubRegsSet,	Empty_SuperRegsSet },
    { "p22",	"p22",	Empty_AliasSet,	p22_SubRegsSet,	Empty_SuperRegsSet },
    { "p23",	"p23",	Empty_AliasSet,	p23_SubRegsSet,	Empty_SuperRegsSet },
    { "p24",	"p24",	Empty_AliasSet,	p24_SubRegsSet,	Empty_SuperRegsSet },
    { "p25",	"p25",	Empty_AliasSet,	p25_SubRegsSet,	Empty_SuperRegsSet },
    { "p26",	"p26",	Empty_AliasSet,	p26_SubRegsSet,	Empty_SuperRegsSet },
    { "p27",	"p27",	Empty_AliasSet,	p27_SubRegsSet,	Empty_SuperRegsSet },
    { "p28",	"p28",	Empty_AliasSet,	p28_SubRegsSet,	Empty_SuperRegsSet },
    { "p29",	"p29",	Empty_AliasSet,	p29_SubRegsSet,	Empty_SuperRegsSet },
    { "p3",	"p3",	Empty_AliasSet,	p3_SubRegsSet,	Empty_SuperRegsSet },
    { "p30",	"p30",	Empty_AliasSet,	p30_SubRegsSet,	Empty_SuperRegsSet },
    { "p31",	"p31",	Empty_AliasSet,	p31_SubRegsSet,	Empty_SuperRegsSet },
    { "p32",	"p32",	Empty_AliasSet,	p32_SubRegsSet,	Empty_SuperRegsSet },
    { "p33",	"p33",	Empty_AliasSet,	p33_SubRegsSet,	Empty_SuperRegsSet },
    { "p34",	"p34",	Empty_AliasSet,	p34_SubRegsSet,	Empty_SuperRegsSet },
    { "p35",	"p35",	Empty_AliasSet,	p35_SubRegsSet,	Empty_SuperRegsSet },
    { "p36",	"p36",	Empty_AliasSet,	p36_SubRegsSet,	Empty_SuperRegsSet },
    { "p37",	"p37",	Empty_AliasSet,	p37_SubRegsSet,	Empty_SuperRegsSet },
    { "p38",	"p38",	Empty_AliasSet,	p38_SubRegsSet,	Empty_SuperRegsSet },
    { "p39",	"p39",	Empty_AliasSet,	p39_SubRegsSet,	Empty_SuperRegsSet },
    { "p4",	"p4",	Empty_AliasSet,	p4_SubRegsSet,	Empty_SuperRegsSet },
    { "p40",	"p40",	Empty_AliasSet,	p40_SubRegsSet,	Empty_SuperRegsSet },
    { "p41",	"p41",	Empty_AliasSet,	p41_SubRegsSet,	Empty_SuperRegsSet },
    { "p42",	"p42",	Empty_AliasSet,	p42_SubRegsSet,	Empty_SuperRegsSet },
    { "p43",	"p43",	Empty_AliasSet,	p43_SubRegsSet,	Empty_SuperRegsSet },
    { "p44",	"p44",	Empty_AliasSet,	p44_SubRegsSet,	Empty_SuperRegsSet },
    { "p45",	"p45",	Empty_AliasSet,	p45_SubRegsSet,	Empty_SuperRegsSet },
    { "p46",	"p46",	Empty_AliasSet,	p46_SubRegsSet,	Empty_SuperRegsSet },
    { "p47",	"p47",	Empty_AliasSet,	p47_SubRegsSet,	Empty_SuperRegsSet },
    { "p48",	"p48",	Empty_AliasSet,	p48_SubRegsSet,	Empty_SuperRegsSet },
    { "p49",	"p49",	Empty_AliasSet,	p49_SubRegsSet,	Empty_SuperRegsSet },
    { "p5",	"p5",	Empty_AliasSet,	p5_SubRegsSet,	Empty_SuperRegsSet },
    { "p50",	"p50",	Empty_AliasSet,	p50_SubRegsSet,	Empty_SuperRegsSet },
    { "p51",	"p51",	Empty_AliasSet,	p51_SubRegsSet,	Empty_SuperRegsSet },
    { "p52",	"p52",	Empty_AliasSet,	p52_SubRegsSet,	Empty_SuperRegsSet },
    { "p53",	"p53",	Empty_AliasSet,	p53_SubRegsSet,	Empty_SuperRegsSet },
    { "p54",	"p54",	Empty_AliasSet,	p54_SubRegsSet,	Empty_SuperRegsSet },
    { "p55",	"p55",	Empty_AliasSet,	p55_SubRegsSet,	Empty_SuperRegsSet },
    { "p56",	"p56",	Empty_AliasSet,	p56_SubRegsSet,	Empty_SuperRegsSet },
    { "p57",	"p57",	Empty_AliasSet,	p57_SubRegsSet,	Empty_SuperRegsSet },
    { "p58",	"p58",	Empty_AliasSet,	p58_SubRegsSet,	Empty_SuperRegsSet },
    { "p59",	"p59",	Empty_AliasSet,	p59_SubRegsSet,	Empty_SuperRegsSet },
    { "p6",	"p6",	Empty_AliasSet,	p6_SubRegsSet,	Empty_SuperRegsSet },
    { "p60",	"p60",	Empty_AliasSet,	p60_SubRegsSet,	Empty_SuperRegsSet },
    { "p61",	"p61",	Empty_AliasSet,	p61_SubRegsSet,	Empty_SuperRegsSet },
    { "p62",	"p62",	Empty_AliasSet,	p62_SubRegsSet,	Empty_SuperRegsSet },
    { "p63",	"p63",	Empty_AliasSet,	p63_SubRegsSet,	Empty_SuperRegsSet },
    { "p7",	"p7",	Empty_AliasSet,	p7_SubRegsSet,	Empty_SuperRegsSet },
    { "p8",	"p8",	Empty_AliasSet,	p8_SubRegsSet,	Empty_SuperRegsSet },
    { "p9",	"p9",	Empty_AliasSet,	p9_SubRegsSet,	Empty_SuperRegsSet },
    { "r0",	"r0",	Empty_AliasSet,	r0_SubRegsSet,	Empty_SuperRegsSet },
    { "r1",	"r1",	Empty_AliasSet,	r1_SubRegsSet,	Empty_SuperRegsSet },
    { "r10",	"r10",	Empty_AliasSet,	r10_SubRegsSet,	Empty_SuperRegsSet },
    { "r100",	"r100",	Empty_AliasSet,	r100_SubRegsSet,	Empty_SuperRegsSet },
    { "r101",	"r101",	Empty_AliasSet,	r101_SubRegsSet,	Empty_SuperRegsSet },
    { "r102",	"r102",	Empty_AliasSet,	r102_SubRegsSet,	Empty_SuperRegsSet },
    { "r103",	"r103",	Empty_AliasSet,	r103_SubRegsSet,	Empty_SuperRegsSet },
    { "r104",	"r104",	Empty_AliasSet,	r104_SubRegsSet,	Empty_SuperRegsSet },
    { "r105",	"r105",	Empty_AliasSet,	r105_SubRegsSet,	Empty_SuperRegsSet },
    { "r106",	"r106",	Empty_AliasSet,	r106_SubRegsSet,	Empty_SuperRegsSet },
    { "r107",	"r107",	Empty_AliasSet,	r107_SubRegsSet,	Empty_SuperRegsSet },
    { "r108",	"r108",	Empty_AliasSet,	r108_SubRegsSet,	Empty_SuperRegsSet },
    { "r109",	"r109",	Empty_AliasSet,	r109_SubRegsSet,	Empty_SuperRegsSet },
    { "r11",	"r11",	Empty_AliasSet,	r11_SubRegsSet,	Empty_SuperRegsSet },
    { "r110",	"r110",	Empty_AliasSet,	r110_SubRegsSet,	Empty_SuperRegsSet },
    { "r111",	"r111",	Empty_AliasSet,	r111_SubRegsSet,	Empty_SuperRegsSet },
    { "r112",	"r112",	Empty_AliasSet,	r112_SubRegsSet,	Empty_SuperRegsSet },
    { "r113",	"r113",	Empty_AliasSet,	r113_SubRegsSet,	Empty_SuperRegsSet },
    { "r114",	"r114",	Empty_AliasSet,	r114_SubRegsSet,	Empty_SuperRegsSet },
    { "r115",	"r115",	Empty_AliasSet,	r115_SubRegsSet,	Empty_SuperRegsSet },
    { "r116",	"r116",	Empty_AliasSet,	r116_SubRegsSet,	Empty_SuperRegsSet },
    { "r117",	"r117",	Empty_AliasSet,	r117_SubRegsSet,	Empty_SuperRegsSet },
    { "r118",	"r118",	Empty_AliasSet,	r118_SubRegsSet,	Empty_SuperRegsSet },
    { "r119",	"r119",	Empty_AliasSet,	r119_SubRegsSet,	Empty_SuperRegsSet },
    { "r12",	"r12",	Empty_AliasSet,	r12_SubRegsSet,	Empty_SuperRegsSet },
    { "r120",	"r120",	Empty_AliasSet,	r120_SubRegsSet,	Empty_SuperRegsSet },
    { "r121",	"r121",	Empty_AliasSet,	r121_SubRegsSet,	Empty_SuperRegsSet },
    { "r122",	"r122",	Empty_AliasSet,	r122_SubRegsSet,	Empty_SuperRegsSet },
    { "r123",	"r123",	Empty_AliasSet,	r123_SubRegsSet,	Empty_SuperRegsSet },
    { "r124",	"r124",	Empty_AliasSet,	r124_SubRegsSet,	Empty_SuperRegsSet },
    { "r125",	"r125",	Empty_AliasSet,	r125_SubRegsSet,	Empty_SuperRegsSet },
    { "r126",	"r126",	Empty_AliasSet,	r126_SubRegsSet,	Empty_SuperRegsSet },
    { "r127",	"r127",	Empty_AliasSet,	r127_SubRegsSet,	Empty_SuperRegsSet },
    { "r13",	"r13",	Empty_AliasSet,	r13_SubRegsSet,	Empty_SuperRegsSet },
    { "r14",	"r14",	Empty_AliasSet,	r14_SubRegsSet,	Empty_SuperRegsSet },
    { "r15",	"r15",	Empty_AliasSet,	r15_SubRegsSet,	Empty_SuperRegsSet },
    { "r16",	"r16",	Empty_AliasSet,	r16_SubRegsSet,	Empty_SuperRegsSet },
    { "r17",	"r17",	Empty_AliasSet,	r17_SubRegsSet,	Empty_SuperRegsSet },
    { "r18",	"r18",	Empty_AliasSet,	r18_SubRegsSet,	Empty_SuperRegsSet },
    { "r19",	"r19",	Empty_AliasSet,	r19_SubRegsSet,	Empty_SuperRegsSet },
    { "r2",	"r2",	Empty_AliasSet,	r2_SubRegsSet,	Empty_SuperRegsSet },
    { "r20",	"r20",	Empty_AliasSet,	r20_SubRegsSet,	Empty_SuperRegsSet },
    { "r21",	"r21",	Empty_AliasSet,	r21_SubRegsSet,	Empty_SuperRegsSet },
    { "r22",	"r22",	Empty_AliasSet,	r22_SubRegsSet,	Empty_SuperRegsSet },
    { "r23",	"r23",	Empty_AliasSet,	r23_SubRegsSet,	Empty_SuperRegsSet },
    { "r24",	"r24",	Empty_AliasSet,	r24_SubRegsSet,	Empty_SuperRegsSet },
    { "r25",	"r25",	Empty_AliasSet,	r25_SubRegsSet,	Empty_SuperRegsSet },
    { "r26",	"r26",	Empty_AliasSet,	r26_SubRegsSet,	Empty_SuperRegsSet },
    { "r27",	"r27",	Empty_AliasSet,	r27_SubRegsSet,	Empty_SuperRegsSet },
    { "r28",	"r28",	Empty_AliasSet,	r28_SubRegsSet,	Empty_SuperRegsSet },
    { "r29",	"r29",	Empty_AliasSet,	r29_SubRegsSet,	Empty_SuperRegsSet },
    { "r3",	"r3",	Empty_AliasSet,	r3_SubRegsSet,	Empty_SuperRegsSet },
    { "r30",	"r30",	Empty_AliasSet,	r30_SubRegsSet,	Empty_SuperRegsSet },
    { "r31",	"r31",	Empty_AliasSet,	r31_SubRegsSet,	Empty_SuperRegsSet },
    { "r32",	"r32",	Empty_AliasSet,	r32_SubRegsSet,	Empty_SuperRegsSet },
    { "r33",	"r33",	Empty_AliasSet,	r33_SubRegsSet,	Empty_SuperRegsSet },
    { "r34",	"r34",	Empty_AliasSet,	r34_SubRegsSet,	Empty_SuperRegsSet },
    { "r35",	"r35",	Empty_AliasSet,	r35_SubRegsSet,	Empty_SuperRegsSet },
    { "r36",	"r36",	Empty_AliasSet,	r36_SubRegsSet,	Empty_SuperRegsSet },
    { "r37",	"r37",	Empty_AliasSet,	r37_SubRegsSet,	Empty_SuperRegsSet },
    { "r38",	"r38",	Empty_AliasSet,	r38_SubRegsSet,	Empty_SuperRegsSet },
    { "r39",	"r39",	Empty_AliasSet,	r39_SubRegsSet,	Empty_SuperRegsSet },
    { "r4",	"r4",	Empty_AliasSet,	r4_SubRegsSet,	Empty_SuperRegsSet },
    { "r40",	"r40",	Empty_AliasSet,	r40_SubRegsSet,	Empty_SuperRegsSet },
    { "r41",	"r41",	Empty_AliasSet,	r41_SubRegsSet,	Empty_SuperRegsSet },
    { "r42",	"r42",	Empty_AliasSet,	r42_SubRegsSet,	Empty_SuperRegsSet },
    { "r43",	"r43",	Empty_AliasSet,	r43_SubRegsSet,	Empty_SuperRegsSet },
    { "r44",	"r44",	Empty_AliasSet,	r44_SubRegsSet,	Empty_SuperRegsSet },
    { "r45",	"r45",	Empty_AliasSet,	r45_SubRegsSet,	Empty_SuperRegsSet },
    { "r46",	"r46",	Empty_AliasSet,	r46_SubRegsSet,	Empty_SuperRegsSet },
    { "r47",	"r47",	Empty_AliasSet,	r47_SubRegsSet,	Empty_SuperRegsSet },
    { "r48",	"r48",	Empty_AliasSet,	r48_SubRegsSet,	Empty_SuperRegsSet },
    { "r49",	"r49",	Empty_AliasSet,	r49_SubRegsSet,	Empty_SuperRegsSet },
    { "r5",	"r5",	Empty_AliasSet,	r5_SubRegsSet,	Empty_SuperRegsSet },
    { "r50",	"r50",	Empty_AliasSet,	r50_SubRegsSet,	Empty_SuperRegsSet },
    { "r51",	"r51",	Empty_AliasSet,	r51_SubRegsSet,	Empty_SuperRegsSet },
    { "r52",	"r52",	Empty_AliasSet,	r52_SubRegsSet,	Empty_SuperRegsSet },
    { "r53",	"r53",	Empty_AliasSet,	r53_SubRegsSet,	Empty_SuperRegsSet },
    { "r54",	"r54",	Empty_AliasSet,	r54_SubRegsSet,	Empty_SuperRegsSet },
    { "r55",	"r55",	Empty_AliasSet,	r55_SubRegsSet,	Empty_SuperRegsSet },
    { "r56",	"r56",	Empty_AliasSet,	r56_SubRegsSet,	Empty_SuperRegsSet },
    { "r57",	"r57",	Empty_AliasSet,	r57_SubRegsSet,	Empty_SuperRegsSet },
    { "r58",	"r58",	Empty_AliasSet,	r58_SubRegsSet,	Empty_SuperRegsSet },
    { "r59",	"r59",	Empty_AliasSet,	r59_SubRegsSet,	Empty_SuperRegsSet },
    { "r6",	"r6",	Empty_AliasSet,	r6_SubRegsSet,	Empty_SuperRegsSet },
    { "r60",	"r60",	Empty_AliasSet,	r60_SubRegsSet,	Empty_SuperRegsSet },
    { "r61",	"r61",	Empty_AliasSet,	r61_SubRegsSet,	Empty_SuperRegsSet },
    { "r62",	"r62",	Empty_AliasSet,	r62_SubRegsSet,	Empty_SuperRegsSet },
    { "r63",	"r63",	Empty_AliasSet,	r63_SubRegsSet,	Empty_SuperRegsSet },
    { "r64",	"r64",	Empty_AliasSet,	r64_SubRegsSet,	Empty_SuperRegsSet },
    { "r65",	"r65",	Empty_AliasSet,	r65_SubRegsSet,	Empty_SuperRegsSet },
    { "r66",	"r66",	Empty_AliasSet,	r66_SubRegsSet,	Empty_SuperRegsSet },
    { "r67",	"r67",	Empty_AliasSet,	r67_SubRegsSet,	Empty_SuperRegsSet },
    { "r68",	"r68",	Empty_AliasSet,	r68_SubRegsSet,	Empty_SuperRegsSet },
    { "r69",	"r69",	Empty_AliasSet,	r69_SubRegsSet,	Empty_SuperRegsSet },
    { "r7",	"r7",	Empty_AliasSet,	r7_SubRegsSet,	Empty_SuperRegsSet },
    { "r70",	"r70",	Empty_AliasSet,	r70_SubRegsSet,	Empty_SuperRegsSet },
    { "r71",	"r71",	Empty_AliasSet,	r71_SubRegsSet,	Empty_SuperRegsSet },
    { "r72",	"r72",	Empty_AliasSet,	r72_SubRegsSet,	Empty_SuperRegsSet },
    { "r73",	"r73",	Empty_AliasSet,	r73_SubRegsSet,	Empty_SuperRegsSet },
    { "r74",	"r74",	Empty_AliasSet,	r74_SubRegsSet,	Empty_SuperRegsSet },
    { "r75",	"r75",	Empty_AliasSet,	r75_SubRegsSet,	Empty_SuperRegsSet },
    { "r76",	"r76",	Empty_AliasSet,	r76_SubRegsSet,	Empty_SuperRegsSet },
    { "r77",	"r77",	Empty_AliasSet,	r77_SubRegsSet,	Empty_SuperRegsSet },
    { "r78",	"r78",	Empty_AliasSet,	r78_SubRegsSet,	Empty_SuperRegsSet },
    { "r79",	"r79",	Empty_AliasSet,	r79_SubRegsSet,	Empty_SuperRegsSet },
    { "r8",	"r8",	Empty_AliasSet,	r8_SubRegsSet,	Empty_SuperRegsSet },
    { "r80",	"r80",	Empty_AliasSet,	r80_SubRegsSet,	Empty_SuperRegsSet },
    { "r81",	"r81",	Empty_AliasSet,	r81_SubRegsSet,	Empty_SuperRegsSet },
    { "r82",	"r82",	Empty_AliasSet,	r82_SubRegsSet,	Empty_SuperRegsSet },
    { "r83",	"r83",	Empty_AliasSet,	r83_SubRegsSet,	Empty_SuperRegsSet },
    { "r84",	"r84",	Empty_AliasSet,	r84_SubRegsSet,	Empty_SuperRegsSet },
    { "r85",	"r85",	Empty_AliasSet,	r85_SubRegsSet,	Empty_SuperRegsSet },
    { "r86",	"r86",	Empty_AliasSet,	r86_SubRegsSet,	Empty_SuperRegsSet },
    { "r87",	"r87",	Empty_AliasSet,	r87_SubRegsSet,	Empty_SuperRegsSet },
    { "r88",	"r88",	Empty_AliasSet,	r88_SubRegsSet,	Empty_SuperRegsSet },
    { "r89",	"r89",	Empty_AliasSet,	r89_SubRegsSet,	Empty_SuperRegsSet },
    { "r9",	"r9",	Empty_AliasSet,	r9_SubRegsSet,	Empty_SuperRegsSet },
    { "r90",	"r90",	Empty_AliasSet,	r90_SubRegsSet,	Empty_SuperRegsSet },
    { "r91",	"r91",	Empty_AliasSet,	r91_SubRegsSet,	Empty_SuperRegsSet },
    { "r92",	"r92",	Empty_AliasSet,	r92_SubRegsSet,	Empty_SuperRegsSet },
    { "r93",	"r93",	Empty_AliasSet,	r93_SubRegsSet,	Empty_SuperRegsSet },
    { "r94",	"r94",	Empty_AliasSet,	r94_SubRegsSet,	Empty_SuperRegsSet },
    { "r95",	"r95",	Empty_AliasSet,	r95_SubRegsSet,	Empty_SuperRegsSet },
    { "r96",	"r96",	Empty_AliasSet,	r96_SubRegsSet,	Empty_SuperRegsSet },
    { "r97",	"r97",	Empty_AliasSet,	r97_SubRegsSet,	Empty_SuperRegsSet },
    { "r98",	"r98",	Empty_AliasSet,	r98_SubRegsSet,	Empty_SuperRegsSet },
    { "r99",	"r99",	Empty_AliasSet,	r99_SubRegsSet,	Empty_SuperRegsSet },
    { "rp",	"rp",	Empty_AliasSet,	rp_SubRegsSet,	Empty_SuperRegsSet },
  };
}

unsigned IA64GenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

IA64GenRegisterInfo::IA64GenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 332, RegisterClasses, RegisterClasses+3,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize) {
}

int IA64GenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case IA64::AR_PFS:
      return 331;
    case IA64::B6:
      return 326;
    case IA64::F0:
      return 128;
    case IA64::F1:
      return 129;
    case IA64::F10:
      return 138;
    case IA64::F100:
      return 228;
    case IA64::F101:
      return 229;
    case IA64::F102:
      return 230;
    case IA64::F103:
      return 231;
    case IA64::F104:
      return 232;
    case IA64::F105:
      return 233;
    case IA64::F106:
      return 234;
    case IA64::F107:
      return 235;
    case IA64::F108:
      return 236;
    case IA64::F109:
      return 237;
    case IA64::F11:
      return 139;
    case IA64::F110:
      return 238;
    case IA64::F111:
      return 239;
    case IA64::F112:
      return 240;
    case IA64::F113:
      return 241;
    case IA64::F114:
      return 242;
    case IA64::F115:
      return 243;
    case IA64::F116:
      return 244;
    case IA64::F117:
      return 245;
    case IA64::F118:
      return 246;
    case IA64::F119:
      return 247;
    case IA64::F12:
      return 140;
    case IA64::F120:
      return 248;
    case IA64::F121:
      return 249;
    case IA64::F122:
      return 250;
    case IA64::F123:
      return 251;
    case IA64::F124:
      return 252;
    case IA64::F125:
      return 253;
    case IA64::F126:
      return 254;
    case IA64::F127:
      return 255;
    case IA64::F13:
      return 141;
    case IA64::F14:
      return 142;
    case IA64::F15:
      return 143;
    case IA64::F16:
      return 144;
    case IA64::F17:
      return 145;
    case IA64::F18:
      return 146;
    case IA64::F19:
      return 147;
    case IA64::F2:
      return 130;
    case IA64::F20:
      return 148;
    case IA64::F21:
      return 149;
    case IA64::F22:
      return 150;
    case IA64::F23:
      return 151;
    case IA64::F24:
      return 152;
    case IA64::F25:
      return 153;
    case IA64::F26:
      return 154;
    case IA64::F27:
      return 155;
    case IA64::F28:
      return 156;
    case IA64::F29:
      return 157;
    case IA64::F3:
      return 131;
    case IA64::F30:
      return 158;
    case IA64::F31:
      return 159;
    case IA64::F32:
      return 160;
    case IA64::F33:
      return 161;
    case IA64::F34:
      return 162;
    case IA64::F35:
      return 163;
    case IA64::F36:
      return 164;
    case IA64::F37:
      return 165;
    case IA64::F38:
      return 166;
    case IA64::F39:
      return 167;
    case IA64::F4:
      return 132;
    case IA64::F40:
      return 168;
    case IA64::F41:
      return 169;
    case IA64::F42:
      return 170;
    case IA64::F43:
      return 171;
    case IA64::F44:
      return 172;
    case IA64::F45:
      return 173;
    case IA64::F46:
      return 174;
    case IA64::F47:
      return 175;
    case IA64::F48:
      return 176;
    case IA64::F49:
      return 177;
    case IA64::F5:
      return 133;
    case IA64::F50:
      return 178;
    case IA64::F51:
      return 179;
    case IA64::F52:
      return 180;
    case IA64::F53:
      return 181;
    case IA64::F54:
      return 182;
    case IA64::F55:
      return 183;
    case IA64::F56:
      return 184;
    case IA64::F57:
      return 185;
    case IA64::F58:
      return 186;
    case IA64::F59:
      return 187;
    case IA64::F6:
      return 134;
    case IA64::F60:
      return 188;
    case IA64::F61:
      return 189;
    case IA64::F62:
      return 190;
    case IA64::F63:
      return 191;
    case IA64::F64:
      return 192;
    case IA64::F65:
      return 193;
    case IA64::F66:
      return 194;
    case IA64::F67:
      return 195;
    case IA64::F68:
      return 196;
    case IA64::F69:
      return 197;
    case IA64::F7:
      return 135;
    case IA64::F70:
      return 198;
    case IA64::F71:
      return 199;
    case IA64::F72:
      return 200;
    case IA64::F73:
      return 201;
    case IA64::F74:
      return 202;
    case IA64::F75:
      return 203;
    case IA64::F76:
      return 204;
    case IA64::F77:
      return 205;
    case IA64::F78:
      return 206;
    case IA64::F79:
      return 207;
    case IA64::F8:
      return 136;
    case IA64::F80:
      return 208;
    case IA64::F81:
      return 209;
    case IA64::F82:
      return 210;
    case IA64::F83:
      return 211;
    case IA64::F84:
      return 212;
    case IA64::F85:
      return 213;
    case IA64::F86:
      return 214;
    case IA64::F87:
      return 215;
    case IA64::F88:
      return 216;
    case IA64::F89:
      return 217;
    case IA64::F9:
      return 137;
    case IA64::F90:
      return 218;
    case IA64::F91:
      return 219;
    case IA64::F92:
      return 220;
    case IA64::F93:
      return 221;
    case IA64::F94:
      return 222;
    case IA64::F95:
      return 223;
    case IA64::F96:
      return 224;
    case IA64::F97:
      return 225;
    case IA64::F98:
      return 226;
    case IA64::F99:
      return 227;
    case IA64::out0:
      return 120;
    case IA64::out1:
      return 121;
    case IA64::out2:
      return 122;
    case IA64::out3:
      return 123;
    case IA64::out4:
      return 124;
    case IA64::out5:
      return 125;
    case IA64::out6:
      return 126;
    case IA64::out7:
      return 127;
    case IA64::p0:
      return 256;
    case IA64::p1:
      return 257;
    case IA64::p10:
      return 266;
    case IA64::p11:
      return 267;
    case IA64::p12:
      return 268;
    case IA64::p13:
      return 269;
    case IA64::p14:
      return 270;
    case IA64::p15:
      return 271;
    case IA64::p16:
      return 272;
    case IA64::p17:
      return 273;
    case IA64::p18:
      return 274;
    case IA64::p19:
      return 275;
    case IA64::p2:
      return 258;
    case IA64::p20:
      return 276;
    case IA64::p21:
      return 277;
    case IA64::p22:
      return 278;
    case IA64::p23:
      return 279;
    case IA64::p24:
      return 280;
    case IA64::p25:
      return 281;
    case IA64::p26:
      return 282;
    case IA64::p27:
      return 283;
    case IA64::p28:
      return 284;
    case IA64::p29:
      return 285;
    case IA64::p3:
      return 259;
    case IA64::p30:
      return 286;
    case IA64::p31:
      return 287;
    case IA64::p32:
      return 288;
    case IA64::p33:
      return 289;
    case IA64::p34:
      return 290;
    case IA64::p35:
      return 291;
    case IA64::p36:
      return 292;
    case IA64::p37:
      return 293;
    case IA64::p38:
      return 294;
    case IA64::p39:
      return 295;
    case IA64::p4:
      return 260;
    case IA64::p40:
      return 296;
    case IA64::p41:
      return 297;
    case IA64::p42:
      return 298;
    case IA64::p43:
      return 299;
    case IA64::p44:
      return 300;
    case IA64::p45:
      return 301;
    case IA64::p46:
      return 302;
    case IA64::p47:
      return 303;
    case IA64::p48:
      return 304;
    case IA64::p49:
      return 305;
    case IA64::p5:
      return 261;
    case IA64::p50:
      return 306;
    case IA64::p51:
      return 307;
    case IA64::p52:
      return 308;
    case IA64::p53:
      return 309;
    case IA64::p54:
      return 310;
    case IA64::p55:
      return 311;
    case IA64::p56:
      return 312;
    case IA64::p57:
      return 313;
    case IA64::p58:
      return 314;
    case IA64::p59:
      return 315;
    case IA64::p6:
      return 262;
    case IA64::p60:
      return 316;
    case IA64::p61:
      return 317;
    case IA64::p62:
      return 318;
    case IA64::p63:
      return 319;
    case IA64::p7:
      return 263;
    case IA64::p8:
      return 264;
    case IA64::p9:
      return 265;
    case IA64::r0:
      return 0;
    case IA64::r1:
      return 1;
    case IA64::r10:
      return 10;
    case IA64::r100:
      return 100;
    case IA64::r101:
      return 101;
    case IA64::r102:
      return 102;
    case IA64::r103:
      return 103;
    case IA64::r104:
      return 104;
    case IA64::r105:
      return 105;
    case IA64::r106:
      return 106;
    case IA64::r107:
      return 107;
    case IA64::r108:
      return 108;
    case IA64::r109:
      return 109;
    case IA64::r11:
      return 11;
    case IA64::r110:
      return 110;
    case IA64::r111:
      return 111;
    case IA64::r112:
      return 112;
    case IA64::r113:
      return 113;
    case IA64::r114:
      return 114;
    case IA64::r115:
      return 115;
    case IA64::r116:
      return 116;
    case IA64::r117:
      return 117;
    case IA64::r118:
      return 118;
    case IA64::r119:
      return 119;
    case IA64::r12:
      return 12;
    case IA64::r120:
      return 120;
    case IA64::r121:
      return 121;
    case IA64::r122:
      return 122;
    case IA64::r123:
      return 123;
    case IA64::r124:
      return 124;
    case IA64::r125:
      return 125;
    case IA64::r126:
      return 126;
    case IA64::r127:
      return 127;
    case IA64::r13:
      return 13;
    case IA64::r14:
      return 14;
    case IA64::r15:
      return 15;
    case IA64::r16:
      return 16;
    case IA64::r17:
      return 17;
    case IA64::r18:
      return 18;
    case IA64::r19:
      return 19;
    case IA64::r2:
      return 2;
    case IA64::r20:
      return 20;
    case IA64::r21:
      return 21;
    case IA64::r22:
      return 22;
    case IA64::r23:
      return 23;
    case IA64::r24:
      return 24;
    case IA64::r25:
      return 25;
    case IA64::r26:
      return 26;
    case IA64::r27:
      return 27;
    case IA64::r28:
      return 28;
    case IA64::r29:
      return 29;
    case IA64::r3:
      return 3;
    case IA64::r30:
      return 30;
    case IA64::r31:
      return 31;
    case IA64::r32:
      return 32;
    case IA64::r33:
      return 33;
    case IA64::r34:
      return 34;
    case IA64::r35:
      return 35;
    case IA64::r36:
      return 36;
    case IA64::r37:
      return 37;
    case IA64::r38:
      return 38;
    case IA64::r39:
      return 39;
    case IA64::r4:
      return 4;
    case IA64::r40:
      return 40;
    case IA64::r41:
      return 41;
    case IA64::r42:
      return 42;
    case IA64::r43:
      return 43;
    case IA64::r44:
      return 44;
    case IA64::r45:
      return 45;
    case IA64::r46:
      return 46;
    case IA64::r47:
      return 47;
    case IA64::r48:
      return 48;
    case IA64::r49:
      return 49;
    case IA64::r5:
      return 5;
    case IA64::r50:
      return 50;
    case IA64::r51:
      return 51;
    case IA64::r52:
      return 52;
    case IA64::r53:
      return 53;
    case IA64::r54:
      return 54;
    case IA64::r55:
      return 55;
    case IA64::r56:
      return 56;
    case IA64::r57:
      return 57;
    case IA64::r58:
      return 58;
    case IA64::r59:
      return 59;
    case IA64::r6:
      return 6;
    case IA64::r60:
      return 60;
    case IA64::r61:
      return 61;
    case IA64::r62:
      return 62;
    case IA64::r63:
      return 63;
    case IA64::r64:
      return 64;
    case IA64::r65:
      return 65;
    case IA64::r66:
      return 66;
    case IA64::r67:
      return 67;
    case IA64::r68:
      return 68;
    case IA64::r69:
      return 69;
    case IA64::r7:
      return 7;
    case IA64::r70:
      return 70;
    case IA64::r71:
      return 71;
    case IA64::r72:
      return 72;
    case IA64::r73:
      return 73;
    case IA64::r74:
      return 74;
    case IA64::r75:
      return 75;
    case IA64::r76:
      return 76;
    case IA64::r77:
      return 77;
    case IA64::r78:
      return 78;
    case IA64::r79:
      return 79;
    case IA64::r8:
      return 8;
    case IA64::r80:
      return 80;
    case IA64::r81:
      return 81;
    case IA64::r82:
      return 82;
    case IA64::r83:
      return 83;
    case IA64::r84:
      return 84;
    case IA64::r85:
      return 85;
    case IA64::r86:
      return 86;
    case IA64::r87:
      return 87;
    case IA64::r88:
      return 88;
    case IA64::r89:
      return 89;
    case IA64::r9:
      return 9;
    case IA64::r90:
      return 90;
    case IA64::r91:
      return 91;
    case IA64::r92:
      return 92;
    case IA64::r93:
      return 93;
    case IA64::r94:
      return 94;
    case IA64::r95:
      return 95;
    case IA64::r96:
      return 96;
    case IA64::r97:
      return 97;
    case IA64::r98:
      return 98;
    case IA64::r99:
      return 99;
    case IA64::rp:
      return -1;
    };
  };
}

} // End llvm namespace 
