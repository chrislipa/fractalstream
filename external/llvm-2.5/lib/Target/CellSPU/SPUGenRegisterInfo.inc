//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // GPRC Register Class...
  static const unsigned GPRC[] = {
    SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, SPU::R2, SPU::R1, SPU::R0, 
  };

  // R16C Register Class...
  static const unsigned R16C[] = {
    SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, SPU::R2, SPU::R1, SPU::R0, 
  };

  // R32C Register Class...
  static const unsigned R32C[] = {
    SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, SPU::R2, SPU::R1, SPU::R0, 
  };

  // R32FP Register Class...
  static const unsigned R32FP[] = {
    SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, SPU::R2, SPU::R1, SPU::R0, 
  };

  // R64C Register Class...
  static const unsigned R64C[] = {
    SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, SPU::R2, SPU::R1, SPU::R0, 
  };

  // R64FP Register Class...
  static const unsigned R64FP[] = {
    SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, SPU::R2, SPU::R1, SPU::R0, 
  };

  // R8C Register Class...
  static const unsigned R8C[] = {
    SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, SPU::R2, SPU::R1, SPU::R0, 
  };

  // VECREG Register Class...
  static const unsigned VECREG[] = {
    SPU::R3, SPU::R4, SPU::R5, SPU::R6, SPU::R7, SPU::R8, SPU::R9, SPU::R10, SPU::R11, SPU::R12, SPU::R13, SPU::R14, SPU::R15, SPU::R16, SPU::R17, SPU::R18, SPU::R19, SPU::R20, SPU::R21, SPU::R22, SPU::R23, SPU::R24, SPU::R25, SPU::R26, SPU::R27, SPU::R28, SPU::R29, SPU::R30, SPU::R31, SPU::R32, SPU::R33, SPU::R34, SPU::R35, SPU::R36, SPU::R37, SPU::R38, SPU::R39, SPU::R40, SPU::R41, SPU::R42, SPU::R43, SPU::R44, SPU::R45, SPU::R46, SPU::R47, SPU::R48, SPU::R49, SPU::R50, SPU::R51, SPU::R52, SPU::R53, SPU::R54, SPU::R55, SPU::R56, SPU::R57, SPU::R58, SPU::R59, SPU::R60, SPU::R61, SPU::R62, SPU::R63, SPU::R64, SPU::R65, SPU::R66, SPU::R67, SPU::R68, SPU::R69, SPU::R70, SPU::R71, SPU::R72, SPU::R73, SPU::R74, SPU::R75, SPU::R76, SPU::R77, SPU::R78, SPU::R79, SPU::R127, SPU::R126, SPU::R125, SPU::R124, SPU::R123, SPU::R122, SPU::R121, SPU::R120, SPU::R119, SPU::R118, SPU::R117, SPU::R116, SPU::R115, SPU::R114, SPU::R113, SPU::R112, SPU::R111, SPU::R110, SPU::R109, SPU::R108, SPU::R107, SPU::R106, SPU::R105, SPU::R104, SPU::R103, SPU::R102, SPU::R101, SPU::R100, SPU::R99, SPU::R98, SPU::R97, SPU::R96, SPU::R95, SPU::R94, SPU::R93, SPU::R92, SPU::R91, SPU::R90, SPU::R89, SPU::R88, SPU::R87, SPU::R86, SPU::R85, SPU::R84, SPU::R83, SPU::R82, SPU::R81, SPU::R80, SPU::R2, SPU::R1, SPU::R0, 
  };

  // GPRCVTs Register Class Value Types...
  static const MVT GPRCVTs[] = {
    MVT::i128, MVT::Other
  };

  // R16CVTs Register Class Value Types...
  static const MVT R16CVTs[] = {
    MVT::i16, MVT::Other
  };

  // R32CVTs Register Class Value Types...
  static const MVT R32CVTs[] = {
    MVT::i32, MVT::Other
  };

  // R32FPVTs Register Class Value Types...
  static const MVT R32FPVTs[] = {
    MVT::f32, MVT::Other
  };

  // R64CVTs Register Class Value Types...
  static const MVT R64CVTs[] = {
    MVT::i64, MVT::Other
  };

  // R64FPVTs Register Class Value Types...
  static const MVT R64FPVTs[] = {
    MVT::f64, MVT::Other
  };

  // R8CVTs Register Class Value Types...
  static const MVT R8CVTs[] = {
    MVT::i8, MVT::Other
  };

  // VECREGVTs Register Class Value Types...
  static const MVT VECREGVTs[] = {
    MVT::v16i8, MVT::v8i16, MVT::v2i32, MVT::v4i32, MVT::v4f32, MVT::v2i64, MVT::v2f64, MVT::Other
  };

}  // end anonymous namespace

namespace SPU {   // Register class instances
  GPRCClass	GPRCRegClass;
  R16CClass	R16CRegClass;
  R32CClass	R32CRegClass;
  R32FPClass	R32FPRegClass;
  R64CClass	R64CRegClass;
  R64FPClass	R64FPRegClass;
  R8CClass	R8CRegClass;
  VECREGClass	VECREGRegClass;

  // GPRC Register Class sub-classes...
  static const TargetRegisterClass* const GPRCSubclasses [] = {
    &SPU::VECREGRegClass, NULL
  };

  // R16C Register Class sub-classes...
  static const TargetRegisterClass* const R16CSubclasses [] = {
    NULL
  };

  // R32C Register Class sub-classes...
  static const TargetRegisterClass* const R32CSubclasses [] = {
    &SPU::R32FPRegClass, NULL
  };

  // R32FP Register Class sub-classes...
  static const TargetRegisterClass* const R32FPSubclasses [] = {
    &SPU::R32CRegClass, NULL
  };

  // R64C Register Class sub-classes...
  static const TargetRegisterClass* const R64CSubclasses [] = {
    &SPU::R64FPRegClass, NULL
  };

  // R64FP Register Class sub-classes...
  static const TargetRegisterClass* const R64FPSubclasses [] = {
    &SPU::R64CRegClass, NULL
  };

  // R8C Register Class sub-classes...
  static const TargetRegisterClass* const R8CSubclasses [] = {
    NULL
  };

  // VECREG Register Class sub-classes...
  static const TargetRegisterClass* const VECREGSubclasses [] = {
    &SPU::GPRCRegClass, NULL
  };

  // GPRC Register Class super-classes...
  static const TargetRegisterClass* const GPRCSuperclasses [] = {
    &SPU::VECREGRegClass, NULL
  };

  // R16C Register Class super-classes...
  static const TargetRegisterClass* const R16CSuperclasses [] = {
    NULL
  };

  // R32C Register Class super-classes...
  static const TargetRegisterClass* const R32CSuperclasses [] = {
    &SPU::R32FPRegClass, NULL
  };

  // R32FP Register Class super-classes...
  static const TargetRegisterClass* const R32FPSuperclasses [] = {
    &SPU::R32CRegClass, NULL
  };

  // R64C Register Class super-classes...
  static const TargetRegisterClass* const R64CSuperclasses [] = {
    &SPU::R64FPRegClass, NULL
  };

  // R64FP Register Class super-classes...
  static const TargetRegisterClass* const R64FPSuperclasses [] = {
    &SPU::R64CRegClass, NULL
  };

  // R8C Register Class super-classes...
  static const TargetRegisterClass* const R8CSuperclasses [] = {
    NULL
  };

  // VECREG Register Class super-classes...
  static const TargetRegisterClass* const VECREGSuperclasses [] = {
    &SPU::GPRCRegClass, NULL
  };


    GPRCClass::iterator
    GPRCClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    GPRCClass::iterator
    GPRCClass::allocation_order_end(const MachineFunction &MF) const {
      return end()-3;  // don't allocate R2, R1, or R0 (envp, sp, lr)
    }
  
GPRCClass::GPRCClass()  : TargetRegisterClass(GPRCRegClassID, GPRCVTs, GPRCSubclasses, GPRCSuperclasses, 16, 16, 1, GPRC, GPRC + 128) {}

    R16CClass::iterator
    R16CClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    R16CClass::iterator
    R16CClass::allocation_order_end(const MachineFunction &MF) const {
      return end()-3;  // don't allocate R2, R1, or R0 (envp, sp, lr)
    }
  
R16CClass::R16CClass()  : TargetRegisterClass(R16CRegClassID, R16CVTs, R16CSubclasses, R16CSuperclasses, 2, 16, 1, R16C, R16C + 128) {}

    R32CClass::iterator
    R32CClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    R32CClass::iterator
    R32CClass::allocation_order_end(const MachineFunction &MF) const {
      return end()-3;  // don't allocate R2, R1, or R0 (envp, sp, lr)
    }
  
R32CClass::R32CClass()  : TargetRegisterClass(R32CRegClassID, R32CVTs, R32CSubclasses, R32CSuperclasses, 4, 16, 1, R32C, R32C + 128) {}

    R32FPClass::iterator
    R32FPClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    R32FPClass::iterator
    R32FPClass::allocation_order_end(const MachineFunction &MF) const {
      return end()-3;  // don't allocate R2, R1, or R0 (envp, sp, lr)
    }
  
R32FPClass::R32FPClass()  : TargetRegisterClass(R32FPRegClassID, R32FPVTs, R32FPSubclasses, R32FPSuperclasses, 4, 16, 1, R32FP, R32FP + 128) {}

    R64CClass::iterator
    R64CClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    R64CClass::iterator
    R64CClass::allocation_order_end(const MachineFunction &MF) const {
      return end()-3;  // don't allocate R2, R1, or R0 (envp, sp, lr)
    }
  
R64CClass::R64CClass()  : TargetRegisterClass(R64CRegClassID, R64CVTs, R64CSubclasses, R64CSuperclasses, 8, 16, 1, R64C, R64C + 128) {}

    R64FPClass::iterator
    R64FPClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    R64FPClass::iterator
    R64FPClass::allocation_order_end(const MachineFunction &MF) const {
      return end()-3;  // don't allocate R2, R1, or R0 (envp, sp, lr)
    }
  
R64FPClass::R64FPClass()  : TargetRegisterClass(R64FPRegClassID, R64FPVTs, R64FPSubclasses, R64FPSuperclasses, 8, 16, 1, R64FP, R64FP + 128) {}

    R8CClass::iterator
    R8CClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    R8CClass::iterator
    R8CClass::allocation_order_end(const MachineFunction &MF) const {
      return end()-3;  // don't allocate R2, R1, or R0 (envp, sp, lr)
    }
  
R8CClass::R8CClass()  : TargetRegisterClass(R8CRegClassID, R8CVTs, R8CSubclasses, R8CSuperclasses, 1, 16, 1, R8C, R8C + 128) {}

    VECREGClass::iterator
    VECREGClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    VECREGClass::iterator
    VECREGClass::allocation_order_end(const MachineFunction &MF) const {
      return end()-3;  // don't allocate R2, R1, or R0 (envp, sp, lr)
    }
  
VECREGClass::VECREGClass()  : TargetRegisterClass(VECREGRegClassID, VECREGVTs, VECREGSubclasses, VECREGSuperclasses, 16, 16, 1, VECREG, VECREG + 128) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SPU::GPRCRegClass,
    &SPU::R16CRegClass,
    &SPU::R32CRegClass,
    &SPU::R32FPRegClass,
    &SPU::R64CRegClass,
    &SPU::R64FPRegClass,
    &SPU::R8CRegClass,
    &SPU::VECREGRegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { SPU::NoRegister, SPU::NoRegister, 
SPU::NoRegister, SPU::NoRegister };
  const unsigned SubregHashTableSize = 2;
  const unsigned Empty_AliasSet[] = { 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned R0_SubRegsSet[] = { 0 };
  const unsigned R1_SubRegsSet[] = { 0 };
  const unsigned R10_SubRegsSet[] = { 0 };
  const unsigned R100_SubRegsSet[] = { 0 };
  const unsigned R101_SubRegsSet[] = { 0 };
  const unsigned R102_SubRegsSet[] = { 0 };
  const unsigned R103_SubRegsSet[] = { 0 };
  const unsigned R104_SubRegsSet[] = { 0 };
  const unsigned R105_SubRegsSet[] = { 0 };
  const unsigned R106_SubRegsSet[] = { 0 };
  const unsigned R107_SubRegsSet[] = { 0 };
  const unsigned R108_SubRegsSet[] = { 0 };
  const unsigned R109_SubRegsSet[] = { 0 };
  const unsigned R11_SubRegsSet[] = { 0 };
  const unsigned R110_SubRegsSet[] = { 0 };
  const unsigned R111_SubRegsSet[] = { 0 };
  const unsigned R112_SubRegsSet[] = { 0 };
  const unsigned R113_SubRegsSet[] = { 0 };
  const unsigned R114_SubRegsSet[] = { 0 };
  const unsigned R115_SubRegsSet[] = { 0 };
  const unsigned R116_SubRegsSet[] = { 0 };
  const unsigned R117_SubRegsSet[] = { 0 };
  const unsigned R118_SubRegsSet[] = { 0 };
  const unsigned R119_SubRegsSet[] = { 0 };
  const unsigned R12_SubRegsSet[] = { 0 };
  const unsigned R120_SubRegsSet[] = { 0 };
  const unsigned R121_SubRegsSet[] = { 0 };
  const unsigned R122_SubRegsSet[] = { 0 };
  const unsigned R123_SubRegsSet[] = { 0 };
  const unsigned R124_SubRegsSet[] = { 0 };
  const unsigned R125_SubRegsSet[] = { 0 };
  const unsigned R126_SubRegsSet[] = { 0 };
  const unsigned R127_SubRegsSet[] = { 0 };
  const unsigned R13_SubRegsSet[] = { 0 };
  const unsigned R14_SubRegsSet[] = { 0 };
  const unsigned R15_SubRegsSet[] = { 0 };
  const unsigned R16_SubRegsSet[] = { 0 };
  const unsigned R17_SubRegsSet[] = { 0 };
  const unsigned R18_SubRegsSet[] = { 0 };
  const unsigned R19_SubRegsSet[] = { 0 };
  const unsigned R2_SubRegsSet[] = { 0 };
  const unsigned R20_SubRegsSet[] = { 0 };
  const unsigned R21_SubRegsSet[] = { 0 };
  const unsigned R22_SubRegsSet[] = { 0 };
  const unsigned R23_SubRegsSet[] = { 0 };
  const unsigned R24_SubRegsSet[] = { 0 };
  const unsigned R25_SubRegsSet[] = { 0 };
  const unsigned R26_SubRegsSet[] = { 0 };
  const unsigned R27_SubRegsSet[] = { 0 };
  const unsigned R28_SubRegsSet[] = { 0 };
  const unsigned R29_SubRegsSet[] = { 0 };
  const unsigned R3_SubRegsSet[] = { 0 };
  const unsigned R30_SubRegsSet[] = { 0 };
  const unsigned R31_SubRegsSet[] = { 0 };
  const unsigned R32_SubRegsSet[] = { 0 };
  const unsigned R33_SubRegsSet[] = { 0 };
  const unsigned R34_SubRegsSet[] = { 0 };
  const unsigned R35_SubRegsSet[] = { 0 };
  const unsigned R36_SubRegsSet[] = { 0 };
  const unsigned R37_SubRegsSet[] = { 0 };
  const unsigned R38_SubRegsSet[] = { 0 };
  const unsigned R39_SubRegsSet[] = { 0 };
  const unsigned R4_SubRegsSet[] = { 0 };
  const unsigned R40_SubRegsSet[] = { 0 };
  const unsigned R41_SubRegsSet[] = { 0 };
  const unsigned R42_SubRegsSet[] = { 0 };
  const unsigned R43_SubRegsSet[] = { 0 };
  const unsigned R44_SubRegsSet[] = { 0 };
  const unsigned R45_SubRegsSet[] = { 0 };
  const unsigned R46_SubRegsSet[] = { 0 };
  const unsigned R47_SubRegsSet[] = { 0 };
  const unsigned R48_SubRegsSet[] = { 0 };
  const unsigned R49_SubRegsSet[] = { 0 };
  const unsigned R5_SubRegsSet[] = { 0 };
  const unsigned R50_SubRegsSet[] = { 0 };
  const unsigned R51_SubRegsSet[] = { 0 };
  const unsigned R52_SubRegsSet[] = { 0 };
  const unsigned R53_SubRegsSet[] = { 0 };
  const unsigned R54_SubRegsSet[] = { 0 };
  const unsigned R55_SubRegsSet[] = { 0 };
  const unsigned R56_SubRegsSet[] = { 0 };
  const unsigned R57_SubRegsSet[] = { 0 };
  const unsigned R58_SubRegsSet[] = { 0 };
  const unsigned R59_SubRegsSet[] = { 0 };
  const unsigned R6_SubRegsSet[] = { 0 };
  const unsigned R60_SubRegsSet[] = { 0 };
  const unsigned R61_SubRegsSet[] = { 0 };
  const unsigned R62_SubRegsSet[] = { 0 };
  const unsigned R63_SubRegsSet[] = { 0 };
  const unsigned R64_SubRegsSet[] = { 0 };
  const unsigned R65_SubRegsSet[] = { 0 };
  const unsigned R66_SubRegsSet[] = { 0 };
  const unsigned R67_SubRegsSet[] = { 0 };
  const unsigned R68_SubRegsSet[] = { 0 };
  const unsigned R69_SubRegsSet[] = { 0 };
  const unsigned R7_SubRegsSet[] = { 0 };
  const unsigned R70_SubRegsSet[] = { 0 };
  const unsigned R71_SubRegsSet[] = { 0 };
  const unsigned R72_SubRegsSet[] = { 0 };
  const unsigned R73_SubRegsSet[] = { 0 };
  const unsigned R74_SubRegsSet[] = { 0 };
  const unsigned R75_SubRegsSet[] = { 0 };
  const unsigned R76_SubRegsSet[] = { 0 };
  const unsigned R77_SubRegsSet[] = { 0 };
  const unsigned R78_SubRegsSet[] = { 0 };
  const unsigned R79_SubRegsSet[] = { 0 };
  const unsigned R8_SubRegsSet[] = { 0 };
  const unsigned R80_SubRegsSet[] = { 0 };
  const unsigned R81_SubRegsSet[] = { 0 };
  const unsigned R82_SubRegsSet[] = { 0 };
  const unsigned R83_SubRegsSet[] = { 0 };
  const unsigned R84_SubRegsSet[] = { 0 };
  const unsigned R85_SubRegsSet[] = { 0 };
  const unsigned R86_SubRegsSet[] = { 0 };
  const unsigned R87_SubRegsSet[] = { 0 };
  const unsigned R88_SubRegsSet[] = { 0 };
  const unsigned R89_SubRegsSet[] = { 0 };
  const unsigned R9_SubRegsSet[] = { 0 };
  const unsigned R90_SubRegsSet[] = { 0 };
  const unsigned R91_SubRegsSet[] = { 0 };
  const unsigned R92_SubRegsSet[] = { 0 };
  const unsigned R93_SubRegsSet[] = { 0 };
  const unsigned R94_SubRegsSet[] = { 0 };
  const unsigned R95_SubRegsSet[] = { 0 };
  const unsigned R96_SubRegsSet[] = { 0 };
  const unsigned R97_SubRegsSet[] = { 0 };
  const unsigned R98_SubRegsSet[] = { 0 };
  const unsigned R99_SubRegsSet[] = { 0 };
  const unsigned Empty_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	"NOREG",	0,	0,	0 },
    { "$lr",	"R0",	Empty_AliasSet,	R0_SubRegsSet,	Empty_SuperRegsSet },
    { "$sp",	"R1",	Empty_AliasSet,	R1_SubRegsSet,	Empty_SuperRegsSet },
    { "$10",	"R10",	Empty_AliasSet,	R10_SubRegsSet,	Empty_SuperRegsSet },
    { "$100",	"R100",	Empty_AliasSet,	R100_SubRegsSet,	Empty_SuperRegsSet },
    { "$101",	"R101",	Empty_AliasSet,	R101_SubRegsSet,	Empty_SuperRegsSet },
    { "$102",	"R102",	Empty_AliasSet,	R102_SubRegsSet,	Empty_SuperRegsSet },
    { "$103",	"R103",	Empty_AliasSet,	R103_SubRegsSet,	Empty_SuperRegsSet },
    { "$104",	"R104",	Empty_AliasSet,	R104_SubRegsSet,	Empty_SuperRegsSet },
    { "$105",	"R105",	Empty_AliasSet,	R105_SubRegsSet,	Empty_SuperRegsSet },
    { "$106",	"R106",	Empty_AliasSet,	R106_SubRegsSet,	Empty_SuperRegsSet },
    { "$107",	"R107",	Empty_AliasSet,	R107_SubRegsSet,	Empty_SuperRegsSet },
    { "$108",	"R108",	Empty_AliasSet,	R108_SubRegsSet,	Empty_SuperRegsSet },
    { "$109",	"R109",	Empty_AliasSet,	R109_SubRegsSet,	Empty_SuperRegsSet },
    { "$11",	"R11",	Empty_AliasSet,	R11_SubRegsSet,	Empty_SuperRegsSet },
    { "$110",	"R110",	Empty_AliasSet,	R110_SubRegsSet,	Empty_SuperRegsSet },
    { "$111",	"R111",	Empty_AliasSet,	R111_SubRegsSet,	Empty_SuperRegsSet },
    { "$112",	"R112",	Empty_AliasSet,	R112_SubRegsSet,	Empty_SuperRegsSet },
    { "$113",	"R113",	Empty_AliasSet,	R113_SubRegsSet,	Empty_SuperRegsSet },
    { "$114",	"R114",	Empty_AliasSet,	R114_SubRegsSet,	Empty_SuperRegsSet },
    { "$115",	"R115",	Empty_AliasSet,	R115_SubRegsSet,	Empty_SuperRegsSet },
    { "$116",	"R116",	Empty_AliasSet,	R116_SubRegsSet,	Empty_SuperRegsSet },
    { "$117",	"R117",	Empty_AliasSet,	R117_SubRegsSet,	Empty_SuperRegsSet },
    { "$118",	"R118",	Empty_AliasSet,	R118_SubRegsSet,	Empty_SuperRegsSet },
    { "$119",	"R119",	Empty_AliasSet,	R119_SubRegsSet,	Empty_SuperRegsSet },
    { "$12",	"R12",	Empty_AliasSet,	R12_SubRegsSet,	Empty_SuperRegsSet },
    { "$120",	"R120",	Empty_AliasSet,	R120_SubRegsSet,	Empty_SuperRegsSet },
    { "$121",	"R121",	Empty_AliasSet,	R121_SubRegsSet,	Empty_SuperRegsSet },
    { "$122",	"R122",	Empty_AliasSet,	R122_SubRegsSet,	Empty_SuperRegsSet },
    { "$123",	"R123",	Empty_AliasSet,	R123_SubRegsSet,	Empty_SuperRegsSet },
    { "$124",	"R124",	Empty_AliasSet,	R124_SubRegsSet,	Empty_SuperRegsSet },
    { "$125",	"R125",	Empty_AliasSet,	R125_SubRegsSet,	Empty_SuperRegsSet },
    { "$126",	"R126",	Empty_AliasSet,	R126_SubRegsSet,	Empty_SuperRegsSet },
    { "$127",	"R127",	Empty_AliasSet,	R127_SubRegsSet,	Empty_SuperRegsSet },
    { "$13",	"R13",	Empty_AliasSet,	R13_SubRegsSet,	Empty_SuperRegsSet },
    { "$14",	"R14",	Empty_AliasSet,	R14_SubRegsSet,	Empty_SuperRegsSet },
    { "$15",	"R15",	Empty_AliasSet,	R15_SubRegsSet,	Empty_SuperRegsSet },
    { "$16",	"R16",	Empty_AliasSet,	R16_SubRegsSet,	Empty_SuperRegsSet },
    { "$17",	"R17",	Empty_AliasSet,	R17_SubRegsSet,	Empty_SuperRegsSet },
    { "$18",	"R18",	Empty_AliasSet,	R18_SubRegsSet,	Empty_SuperRegsSet },
    { "$19",	"R19",	Empty_AliasSet,	R19_SubRegsSet,	Empty_SuperRegsSet },
    { "$2",	"R2",	Empty_AliasSet,	R2_SubRegsSet,	Empty_SuperRegsSet },
    { "$20",	"R20",	Empty_AliasSet,	R20_SubRegsSet,	Empty_SuperRegsSet },
    { "$21",	"R21",	Empty_AliasSet,	R21_SubRegsSet,	Empty_SuperRegsSet },
    { "$22",	"R22",	Empty_AliasSet,	R22_SubRegsSet,	Empty_SuperRegsSet },
    { "$23",	"R23",	Empty_AliasSet,	R23_SubRegsSet,	Empty_SuperRegsSet },
    { "$24",	"R24",	Empty_AliasSet,	R24_SubRegsSet,	Empty_SuperRegsSet },
    { "$25",	"R25",	Empty_AliasSet,	R25_SubRegsSet,	Empty_SuperRegsSet },
    { "$26",	"R26",	Empty_AliasSet,	R26_SubRegsSet,	Empty_SuperRegsSet },
    { "$27",	"R27",	Empty_AliasSet,	R27_SubRegsSet,	Empty_SuperRegsSet },
    { "$28",	"R28",	Empty_AliasSet,	R28_SubRegsSet,	Empty_SuperRegsSet },
    { "$29",	"R29",	Empty_AliasSet,	R29_SubRegsSet,	Empty_SuperRegsSet },
    { "$3",	"R3",	Empty_AliasSet,	R3_SubRegsSet,	Empty_SuperRegsSet },
    { "$30",	"R30",	Empty_AliasSet,	R30_SubRegsSet,	Empty_SuperRegsSet },
    { "$31",	"R31",	Empty_AliasSet,	R31_SubRegsSet,	Empty_SuperRegsSet },
    { "$32",	"R32",	Empty_AliasSet,	R32_SubRegsSet,	Empty_SuperRegsSet },
    { "$33",	"R33",	Empty_AliasSet,	R33_SubRegsSet,	Empty_SuperRegsSet },
    { "$34",	"R34",	Empty_AliasSet,	R34_SubRegsSet,	Empty_SuperRegsSet },
    { "$35",	"R35",	Empty_AliasSet,	R35_SubRegsSet,	Empty_SuperRegsSet },
    { "$36",	"R36",	Empty_AliasSet,	R36_SubRegsSet,	Empty_SuperRegsSet },
    { "$37",	"R37",	Empty_AliasSet,	R37_SubRegsSet,	Empty_SuperRegsSet },
    { "$38",	"R38",	Empty_AliasSet,	R38_SubRegsSet,	Empty_SuperRegsSet },
    { "$39",	"R39",	Empty_AliasSet,	R39_SubRegsSet,	Empty_SuperRegsSet },
    { "$4",	"R4",	Empty_AliasSet,	R4_SubRegsSet,	Empty_SuperRegsSet },
    { "$40",	"R40",	Empty_AliasSet,	R40_SubRegsSet,	Empty_SuperRegsSet },
    { "$41",	"R41",	Empty_AliasSet,	R41_SubRegsSet,	Empty_SuperRegsSet },
    { "$42",	"R42",	Empty_AliasSet,	R42_SubRegsSet,	Empty_SuperRegsSet },
    { "$43",	"R43",	Empty_AliasSet,	R43_SubRegsSet,	Empty_SuperRegsSet },
    { "$44",	"R44",	Empty_AliasSet,	R44_SubRegsSet,	Empty_SuperRegsSet },
    { "$45",	"R45",	Empty_AliasSet,	R45_SubRegsSet,	Empty_SuperRegsSet },
    { "$46",	"R46",	Empty_AliasSet,	R46_SubRegsSet,	Empty_SuperRegsSet },
    { "$47",	"R47",	Empty_AliasSet,	R47_SubRegsSet,	Empty_SuperRegsSet },
    { "$48",	"R48",	Empty_AliasSet,	R48_SubRegsSet,	Empty_SuperRegsSet },
    { "$49",	"R49",	Empty_AliasSet,	R49_SubRegsSet,	Empty_SuperRegsSet },
    { "$5",	"R5",	Empty_AliasSet,	R5_SubRegsSet,	Empty_SuperRegsSet },
    { "$50",	"R50",	Empty_AliasSet,	R50_SubRegsSet,	Empty_SuperRegsSet },
    { "$51",	"R51",	Empty_AliasSet,	R51_SubRegsSet,	Empty_SuperRegsSet },
    { "$52",	"R52",	Empty_AliasSet,	R52_SubRegsSet,	Empty_SuperRegsSet },
    { "$53",	"R53",	Empty_AliasSet,	R53_SubRegsSet,	Empty_SuperRegsSet },
    { "$54",	"R54",	Empty_AliasSet,	R54_SubRegsSet,	Empty_SuperRegsSet },
    { "$55",	"R55",	Empty_AliasSet,	R55_SubRegsSet,	Empty_SuperRegsSet },
    { "$56",	"R56",	Empty_AliasSet,	R56_SubRegsSet,	Empty_SuperRegsSet },
    { "$57",	"R57",	Empty_AliasSet,	R57_SubRegsSet,	Empty_SuperRegsSet },
    { "$58",	"R58",	Empty_AliasSet,	R58_SubRegsSet,	Empty_SuperRegsSet },
    { "$59",	"R59",	Empty_AliasSet,	R59_SubRegsSet,	Empty_SuperRegsSet },
    { "$6",	"R6",	Empty_AliasSet,	R6_SubRegsSet,	Empty_SuperRegsSet },
    { "$60",	"R60",	Empty_AliasSet,	R60_SubRegsSet,	Empty_SuperRegsSet },
    { "$61",	"R61",	Empty_AliasSet,	R61_SubRegsSet,	Empty_SuperRegsSet },
    { "$62",	"R62",	Empty_AliasSet,	R62_SubRegsSet,	Empty_SuperRegsSet },
    { "$63",	"R63",	Empty_AliasSet,	R63_SubRegsSet,	Empty_SuperRegsSet },
    { "$64",	"R64",	Empty_AliasSet,	R64_SubRegsSet,	Empty_SuperRegsSet },
    { "$65",	"R65",	Empty_AliasSet,	R65_SubRegsSet,	Empty_SuperRegsSet },
    { "$66",	"R66",	Empty_AliasSet,	R66_SubRegsSet,	Empty_SuperRegsSet },
    { "$67",	"R67",	Empty_AliasSet,	R67_SubRegsSet,	Empty_SuperRegsSet },
    { "$68",	"R68",	Empty_AliasSet,	R68_SubRegsSet,	Empty_SuperRegsSet },
    { "$69",	"R69",	Empty_AliasSet,	R69_SubRegsSet,	Empty_SuperRegsSet },
    { "$7",	"R7",	Empty_AliasSet,	R7_SubRegsSet,	Empty_SuperRegsSet },
    { "$70",	"R70",	Empty_AliasSet,	R70_SubRegsSet,	Empty_SuperRegsSet },
    { "$71",	"R71",	Empty_AliasSet,	R71_SubRegsSet,	Empty_SuperRegsSet },
    { "$72",	"R72",	Empty_AliasSet,	R72_SubRegsSet,	Empty_SuperRegsSet },
    { "$73",	"R73",	Empty_AliasSet,	R73_SubRegsSet,	Empty_SuperRegsSet },
    { "$74",	"R74",	Empty_AliasSet,	R74_SubRegsSet,	Empty_SuperRegsSet },
    { "$75",	"R75",	Empty_AliasSet,	R75_SubRegsSet,	Empty_SuperRegsSet },
    { "$76",	"R76",	Empty_AliasSet,	R76_SubRegsSet,	Empty_SuperRegsSet },
    { "$77",	"R77",	Empty_AliasSet,	R77_SubRegsSet,	Empty_SuperRegsSet },
    { "$78",	"R78",	Empty_AliasSet,	R78_SubRegsSet,	Empty_SuperRegsSet },
    { "$79",	"R79",	Empty_AliasSet,	R79_SubRegsSet,	Empty_SuperRegsSet },
    { "$8",	"R8",	Empty_AliasSet,	R8_SubRegsSet,	Empty_SuperRegsSet },
    { "$80",	"R80",	Empty_AliasSet,	R80_SubRegsSet,	Empty_SuperRegsSet },
    { "$81",	"R81",	Empty_AliasSet,	R81_SubRegsSet,	Empty_SuperRegsSet },
    { "$82",	"R82",	Empty_AliasSet,	R82_SubRegsSet,	Empty_SuperRegsSet },
    { "$83",	"R83",	Empty_AliasSet,	R83_SubRegsSet,	Empty_SuperRegsSet },
    { "$84",	"R84",	Empty_AliasSet,	R84_SubRegsSet,	Empty_SuperRegsSet },
    { "$85",	"R85",	Empty_AliasSet,	R85_SubRegsSet,	Empty_SuperRegsSet },
    { "$86",	"R86",	Empty_AliasSet,	R86_SubRegsSet,	Empty_SuperRegsSet },
    { "$87",	"R87",	Empty_AliasSet,	R87_SubRegsSet,	Empty_SuperRegsSet },
    { "$88",	"R88",	Empty_AliasSet,	R88_SubRegsSet,	Empty_SuperRegsSet },
    { "$89",	"R89",	Empty_AliasSet,	R89_SubRegsSet,	Empty_SuperRegsSet },
    { "$9",	"R9",	Empty_AliasSet,	R9_SubRegsSet,	Empty_SuperRegsSet },
    { "$90",	"R90",	Empty_AliasSet,	R90_SubRegsSet,	Empty_SuperRegsSet },
    { "$91",	"R91",	Empty_AliasSet,	R91_SubRegsSet,	Empty_SuperRegsSet },
    { "$92",	"R92",	Empty_AliasSet,	R92_SubRegsSet,	Empty_SuperRegsSet },
    { "$93",	"R93",	Empty_AliasSet,	R93_SubRegsSet,	Empty_SuperRegsSet },
    { "$94",	"R94",	Empty_AliasSet,	R94_SubRegsSet,	Empty_SuperRegsSet },
    { "$95",	"R95",	Empty_AliasSet,	R95_SubRegsSet,	Empty_SuperRegsSet },
    { "$96",	"R96",	Empty_AliasSet,	R96_SubRegsSet,	Empty_SuperRegsSet },
    { "$97",	"R97",	Empty_AliasSet,	R97_SubRegsSet,	Empty_SuperRegsSet },
    { "$98",	"R98",	Empty_AliasSet,	R98_SubRegsSet,	Empty_SuperRegsSet },
    { "$99",	"R99",	Empty_AliasSet,	R99_SubRegsSet,	Empty_SuperRegsSet },
  };
}

unsigned SPUGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

SPUGenRegisterInfo::SPUGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 129, RegisterClasses, RegisterClasses+8,
                  CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize) {
}

int SPUGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case SPU::R0:
      return 0;
    case SPU::R1:
      return 1;
    case SPU::R10:
      return 10;
    case SPU::R100:
      return 100;
    case SPU::R101:
      return 101;
    case SPU::R102:
      return 102;
    case SPU::R103:
      return 103;
    case SPU::R104:
      return 104;
    case SPU::R105:
      return 105;
    case SPU::R106:
      return 106;
    case SPU::R107:
      return 107;
    case SPU::R108:
      return 108;
    case SPU::R109:
      return 109;
    case SPU::R11:
      return 11;
    case SPU::R110:
      return 110;
    case SPU::R111:
      return 111;
    case SPU::R112:
      return 112;
    case SPU::R113:
      return 113;
    case SPU::R114:
      return 114;
    case SPU::R115:
      return 115;
    case SPU::R116:
      return 116;
    case SPU::R117:
      return 117;
    case SPU::R118:
      return 118;
    case SPU::R119:
      return 119;
    case SPU::R12:
      return 12;
    case SPU::R120:
      return 120;
    case SPU::R121:
      return 121;
    case SPU::R122:
      return 122;
    case SPU::R123:
      return 123;
    case SPU::R124:
      return 124;
    case SPU::R125:
      return 125;
    case SPU::R126:
      return 126;
    case SPU::R127:
      return 127;
    case SPU::R13:
      return 13;
    case SPU::R14:
      return 14;
    case SPU::R15:
      return 15;
    case SPU::R16:
      return 16;
    case SPU::R17:
      return 17;
    case SPU::R18:
      return 18;
    case SPU::R19:
      return 19;
    case SPU::R2:
      return 2;
    case SPU::R20:
      return 20;
    case SPU::R21:
      return 21;
    case SPU::R22:
      return 22;
    case SPU::R23:
      return 23;
    case SPU::R24:
      return 24;
    case SPU::R25:
      return 25;
    case SPU::R26:
      return 26;
    case SPU::R27:
      return 27;
    case SPU::R28:
      return 28;
    case SPU::R29:
      return 29;
    case SPU::R3:
      return 3;
    case SPU::R30:
      return 30;
    case SPU::R31:
      return 31;
    case SPU::R32:
      return 32;
    case SPU::R33:
      return 33;
    case SPU::R34:
      return 34;
    case SPU::R35:
      return 35;
    case SPU::R36:
      return 36;
    case SPU::R37:
      return 37;
    case SPU::R38:
      return 38;
    case SPU::R39:
      return 39;
    case SPU::R4:
      return 4;
    case SPU::R40:
      return 40;
    case SPU::R41:
      return 41;
    case SPU::R42:
      return 42;
    case SPU::R43:
      return 43;
    case SPU::R44:
      return 44;
    case SPU::R45:
      return 45;
    case SPU::R46:
      return 46;
    case SPU::R47:
      return 47;
    case SPU::R48:
      return 48;
    case SPU::R49:
      return 49;
    case SPU::R5:
      return 5;
    case SPU::R50:
      return 50;
    case SPU::R51:
      return 51;
    case SPU::R52:
      return 52;
    case SPU::R53:
      return 53;
    case SPU::R54:
      return 54;
    case SPU::R55:
      return 55;
    case SPU::R56:
      return 56;
    case SPU::R57:
      return 57;
    case SPU::R58:
      return 58;
    case SPU::R59:
      return 59;
    case SPU::R6:
      return 6;
    case SPU::R60:
      return 60;
    case SPU::R61:
      return 61;
    case SPU::R62:
      return 62;
    case SPU::R63:
      return 63;
    case SPU::R64:
      return 64;
    case SPU::R65:
      return 65;
    case SPU::R66:
      return 66;
    case SPU::R67:
      return 67;
    case SPU::R68:
      return 68;
    case SPU::R69:
      return 69;
    case SPU::R7:
      return 7;
    case SPU::R70:
      return 70;
    case SPU::R71:
      return 71;
    case SPU::R72:
      return 72;
    case SPU::R73:
      return 73;
    case SPU::R74:
      return 74;
    case SPU::R75:
      return 75;
    case SPU::R76:
      return 76;
    case SPU::R77:
      return 77;
    case SPU::R78:
      return 78;
    case SPU::R79:
      return 79;
    case SPU::R8:
      return 8;
    case SPU::R80:
      return 80;
    case SPU::R81:
      return 81;
    case SPU::R82:
      return 82;
    case SPU::R83:
      return 83;
    case SPU::R84:
      return 84;
    case SPU::R85:
      return 85;
    case SPU::R86:
      return 86;
    case SPU::R87:
      return 87;
    case SPU::R88:
      return 88;
    case SPU::R89:
      return 89;
    case SPU::R9:
      return 9;
    case SPU::R90:
      return 90;
    case SPU::R91:
      return 91;
    case SPU::R92:
      return 92;
    case SPU::R93:
      return 93;
    case SPU::R94:
      return 94;
    case SPU::R95:
      return 95;
    case SPU::R96:
      return 96;
    case SPU::R97:
      return 97;
    case SPU::R98:
      return 98;
    case SPU::R99:
      return 99;
    };
  };
}

} // End llvm namespace 
