//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the Mips target
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// Include standard, target-independent definitions and methods used
// by the instruction selector.
#include <llvm/CodeGen/DAGISelHeader.h>


// Node transformations.
inline SDValue Transform_HI16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return getI32Imm((unsigned)N->getZExtValue() >> 16);

}
inline SDValue Transform_LO16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return getI32Imm((unsigned)N->getZExtValue() & 0xFFFF);

}

// Predicate functions.
inline bool Predicate_atomic_cmp_swap_16(SDNode *N) {

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_atomic_cmp_swap_32(SDNode *N) {

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_atomic_cmp_swap_64(SDNode *N) {

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

}
inline bool Predicate_atomic_cmp_swap_8(SDNode *N) {

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_atomic_load_add_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_add_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_add_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_add_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_and_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_and_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_and_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_and_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_max_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_max_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_max_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_max_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_min_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_min_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_min_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_min_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_nand_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_nand_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_nand_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_nand_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_or_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_or_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_or_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_or_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_sub_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_sub_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_sub_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_sub_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_umax_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_umax_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_umax_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_umax_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_umin_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_umin_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_umin_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_umin_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_load_xor_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_load_xor_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_load_xor_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_load_xor_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_atomic_swap_16(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
}
inline bool Predicate_atomic_swap_32(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
}
inline bool Predicate_atomic_swap_64(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
}
inline bool Predicate_atomic_swap_8(SDNode *N) {

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
}
inline bool Predicate_cvtff(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_FF;
    
}
inline bool Predicate_cvtfs(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_FS;
    
}
inline bool Predicate_cvtfu(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_FU;
    
}
inline bool Predicate_cvtsf(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_SF;
    
}
inline bool Predicate_cvtss(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_SS;
    
}
inline bool Predicate_cvtsu(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_SU;
    
}
inline bool Predicate_cvtuf(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_UF;
    
}
inline bool Predicate_cvtus(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_US;
    
}
inline bool Predicate_cvtuu(SDNode *N) {

       return cast<CvtRndSatSDNode>(N)->getCvtCode() == ISD::CVT_UU;
    
}
inline bool Predicate_extload(SDNode *N) {

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

}
inline bool Predicate_extloadf32(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

}
inline bool Predicate_extloadf64(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f64;

}
inline bool Predicate_extloadi1(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

}
inline bool Predicate_extloadi16(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_extloadi32(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_extloadi8(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_fpimm0(SDNode *inN) {
  ConstantFPSDNode *N = cast<ConstantFPSDNode>(inN);

  return N->isExactlyValue(+0.0);

}
inline bool Predicate_immAllOnes(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 return N->isAllOnesValue(); 
}
inline bool Predicate_immAllOnesV(SDNode *N) {

  return ISD::isBuildVectorAllOnes(N);

}
inline bool Predicate_immAllOnesV_bc(SDNode *N) {

  return ISD::isBuildVectorAllOnes(N);

}
inline bool Predicate_immAllZerosV(SDNode *N) {

  return ISD::isBuildVectorAllZeros(N);

}
inline bool Predicate_immAllZerosV_bc(SDNode *N) {

  return ISD::isBuildVectorAllZeros(N);

}
inline bool Predicate_immSExt16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

}
inline bool Predicate_immZExt16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

}
inline bool Predicate_immZExt5(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return N->getZExtValue() == ((N->getZExtValue()) & 0x1f) ;

}
inline bool Predicate_istore(SDNode *N) {

  return !cast<StoreSDNode>(N)->isTruncatingStore();

}
inline bool Predicate_itruncstore(SDNode *N) {

  return cast<StoreSDNode>(N)->isTruncatingStore();

}
inline bool Predicate_load(SDNode *N) {

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

}
inline bool Predicate_post_store(SDNode *N) {

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::POST_INC || AM == ISD::POST_DEC;

}
inline bool Predicate_post_truncst(SDNode *N) {

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::POST_INC || AM == ISD::POST_DEC;

}
inline bool Predicate_post_truncstf32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::f32;

}
inline bool Predicate_post_truncsti1(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i1;

}
inline bool Predicate_post_truncsti16(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_post_truncsti32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_post_truncsti8(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_pre_store(SDNode *N) {

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

}
inline bool Predicate_pre_truncst(SDNode *N) {

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

}
inline bool Predicate_pre_truncstf32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::f32;

}
inline bool Predicate_pre_truncsti1(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i1;

}
inline bool Predicate_pre_truncsti16(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_pre_truncsti32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_pre_truncsti8(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_sextload(SDNode *N) {

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

}
inline bool Predicate_sextloadi1(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

}
inline bool Predicate_sextloadi16(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_sextloadi32(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_sextloadi8(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_store(SDNode *N) {

  return !cast<StoreSDNode>(N)->isTruncatingStore();

}
inline bool Predicate_truncstore(SDNode *N) {

  return cast<StoreSDNode>(N)->isTruncatingStore();

}
inline bool Predicate_truncstoref32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::f32;

}
inline bool Predicate_truncstoref64(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::f64;

}
inline bool Predicate_truncstorei16(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_truncstorei32(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_truncstorei8(SDNode *N) {

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

}
inline bool Predicate_unindexedload(SDNode *N) {

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

}
inline bool Predicate_unindexedstore(SDNode *N) {

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

}
inline bool Predicate_vtFP(SDNode *inN) {
  VTSDNode *N = cast<VTSDNode>(inN);
 return N->getVT().isFloatingPoint(); 
}
inline bool Predicate_vtInt(SDNode *inN) {
  VTSDNode *N = cast<VTSDNode>(inN);
 return N->getVT().isInteger(); 
}
inline bool Predicate_zextload(SDNode *N) {

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

}
inline bool Predicate_zextloadi1(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

}
inline bool Predicate_zextloadi16(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

}
inline bool Predicate_zextloadi32(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

}
inline bool Predicate_zextloadi8(SDNode *N) {

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

}


SDNode *Emit_0(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_1(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_2(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N10);
}
SDNode *Emit_3(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N00);
}
SDNode *Select_ISD_ADD_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == MipsISD::Lo) {
        SDValue N10 = N1.getOperand(0);

        // Pattern: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo))
        // Emits: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
        // Pattern complexity = 9  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetGlobalAddress) {
          SDNode *Result = Emit_2(N, Mips::ADDiu, MVT::i32);
          return Result;
        }

        // Pattern: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo))
        // Emits: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
        // Pattern complexity = 9  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetJumpTable) {
          SDNode *Result = Emit_2(N, Mips::ADDiu, MVT::i32);
          return Result;
        }

        // Pattern: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo))
        // Emits: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
        // Pattern complexity = 9  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetConstantPool) {
          SDNode *Result = Emit_2(N, Mips::ADDiu, MVT::i32);
          return Result;
        }
      }
      if (N1.getOpcode() == MipsISD::GPRel) {
        SDValue N10 = N1.getOperand(0);

        // Pattern: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in))
        // Emits: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
        // Pattern complexity = 9  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetGlobalAddress) {
          SDNode *Result = Emit_2(N, Mips::ADDiu, MVT::i32);
          return Result;
        }

        // Pattern: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in))
        // Emits: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
        // Pattern complexity = 9  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetConstantPool) {
          SDNode *Result = Emit_2(N, Mips::ADDiu, MVT::i32);
          return Result;
        }
      }
    }
    if (N0.getOpcode() == MipsISD::Lo) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPURegs:i32:$hi)
      // Emits: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetGlobalAddress) {
        SDNode *Result = Emit_3(N, Mips::ADDiu, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), CPURegs:i32:$hi)
      // Emits: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetJumpTable) {
        SDNode *Result = Emit_3(N, Mips::ADDiu, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), CPURegs:i32:$hi)
      // Emits: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetConstantPool) {
        SDNode *Result = Emit_3(N, Mips::ADDiu, MVT::i32);
        return Result;
      }
    }
    if (N0.getOpcode() == MipsISD::GPRel) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), CPURegs:i32:$gp)
      // Emits: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetGlobalAddress) {
        SDNode *Result = Emit_3(N, Mips::ADDiu, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), CPURegs:i32:$gp)
      // Emits: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetConstantPool) {
        SDNode *Result = Emit_3(N, Mips::ADDiu, MVT::i32);
        return Result;
      }
    }

    // Pattern: (add:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c)
    // Emits: (ADDiu:i32 CPURegs:i32:$b, (imm:i32):$c)
    // Pattern complexity = 7  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immSExt16(N1.getNode())) {
      SDNode *Result = Emit_0(N, Mips::ADDiu, MVT::i32);
      return Result;
    }
  }

  // Pattern: (add:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Emits: (ADDu:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Mips::ADDu, MVT::i32);
  return Result;
}

SDNode *Emit_4(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_5(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, Tmp1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDC_i32(const SDValue &N) {

  // Pattern: (addc:i32 CPURegs:i32:$src, (imm:i32):$imm)
  // Emits: (ADDiu:i32 CPURegs:i32:$src, (imm:i32):$imm)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_5(N, Mips::ADDiu, MVT::i32);
      return Result;
    }
  }

  // Pattern: (addc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
  // Emits: (ADDu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_4(N, Mips::ADDu, MVT::i32);
  return Result;
}

SDNode *Emit_6(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_LO16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Select_ISD_AND_i32(const SDValue &N) {

  // Pattern: (and:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$c)
  // Emits: (ANDi:i32 CPURegs:i32:$b, (LO16:i32 (imm:i32):$c))
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immZExt16(N1.getNode())) {
      SDNode *Result = Emit_6(N, Mips::ANDi, MVT::i32);
      return Result;
    }
  }

  // Pattern: (and:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Emits: (AND:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Mips::AND, MVT::i32);
  return Result;
}

SDNode *Emit_7(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_BIT_CONVERT_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::f32) {

    // Pattern: (bitconvert:i32 FGR32:f32:$src)
    // Emits: (MFC1:i32 FGR32:f32:$src)
    // Pattern complexity = 3  cost = 1  size = 0
    {
      SDNode *Result = Emit_7(N, Mips::MFC1, MVT::i32);
      return Result;
    }

    // Pattern: (bitconvert:i32 AFGR32:f32:$src)
    // Emits: (MFC1A:i32 AFGR32:f32:$src)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_7(N, Mips::MFC1A, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BIT_CONVERT_f32(const SDValue &N) {

  // Pattern: (bitconvert:f32 CPURegs:i32:$src)
  // Emits: (MTC1:f32 CPURegs:i32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_7(N, Mips::MTC1, MVT::f32);
      return Result;
    }
  }

  // Pattern: (bitconvert:f32 CPURegs:i32:$src)
  // Emits: (MTC1A:f32 CPURegs:i32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget.isFP64bit())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_7(N, Mips::MTC1A, MVT::f32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_8(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain);
}
SDNode *Select_ISD_BR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_8(N, Mips::J);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_9(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Ops0[] = { N10, N11, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_10(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N10, N2, Chain);
}
SDNode *Emit_11(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp3 = CurDAG->getRegister(Mips::ZERO, MVT::i32);
  SDValue Ops0[] = { N10, Tmp3, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_12(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N10, N11), 0);
  SDValue Tmp3 = CurDAG->getRegister(Mips::ZERO, MVT::i32);
  SDValue Ops1[] = { Tmp2, Tmp3, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Ops1, 4);
}
SDNode *Emit_13(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N10, Tmp1), 0);
  SDValue Tmp3 = CurDAG->getRegister(Mips::ZERO, MVT::i32);
  SDValue Ops1[] = { Tmp2, Tmp3, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Ops1, 4);
}
SDNode *Emit_14(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N11, N10), 0);
  SDValue Tmp3 = CurDAG->getRegister(Mips::ZERO, MVT::i32);
  SDValue Ops1[] = { Tmp2, Tmp3, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Ops1, 4);
}
SDNode *Emit_15(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getRegister(Mips::ZERO, MVT::i32);
  SDValue Ops0[] = { N1, Tmp1, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_BRCOND(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::SETCC) {
    SDValue N10 = N1.getOperand(0);
    SDValue N11 = N1.getOperand(1);
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDValue N12 = N1.getOperand(2);

          // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$src, 0:i32, SETGE:Other), (bb:Other):$offset)
          // Emits: (BGEZ:isVoid CPURegs:i32:$src, (bb:Other):$offset)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGE) {
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::BasicBlock &&
                N10.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_10(N, Mips::BGEZ);
              return Result;
            }
          }

          // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$src, 0:i32, SETGT:Other), (bb:Other):$offset)
          // Emits: (BGTZ:isVoid CPURegs:i32:$src, (bb:Other):$offset)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGT) {
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::BasicBlock &&
                N10.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_10(N, Mips::BGTZ);
              return Result;
            }
          }

          // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$src, 0:i32, SETLE:Other), (bb:Other):$offset)
          // Emits: (BLEZ:isVoid CPURegs:i32:$src, (bb:Other):$offset)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N12)->get() == ISD::SETLE) {
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::BasicBlock &&
                N10.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_10(N, Mips::BLEZ);
              return Result;
            }
          }

          // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$src, 0:i32, SETLT:Other), (bb:Other):$offset)
          // Emits: (BLTZ:isVoid CPURegs:i32:$src, (bb:Other):$offset)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N12)->get() == ISD::SETLT) {
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::BasicBlock &&
                N10.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_10(N, Mips::BLTZ);
              return Result;
            }
          }

          // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst)
          // Emits: (BNE:isVoid CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N12)->get() == ISD::SETNE) {
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::BasicBlock &&
                N10.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_11(N, Mips::BNE);
              return Result;
            }
          }

          // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst)
          // Emits: (BEQ:isVoid CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N12)->get() == ISD::SETEQ) {
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::BasicBlock &&
                N10.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_11(N, Mips::BEQ);
              return Result;
            }
          }
        }
      }
    }
    if (N11.getOpcode() == ISD::Constant &&
        Predicate_immSExt16(N11.getNode())) {
      SDValue N12 = N1.getOperand(2);

      // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst)
      // Emits: (BEQ:isVoid (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
      // Pattern complexity = 10  cost = 2  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock) {
          SDNode *Result = Emit_13(N, Mips::SLTi, Mips::BEQ, MVT::i32);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst)
      // Emits: (BEQ:isVoid (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
      // Pattern complexity = 10  cost = 2  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUGE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock) {
          SDNode *Result = Emit_13(N, Mips::SLTiu, Mips::BEQ, MVT::i32);
          return Result;
        }
      }
    }
    SDValue N12 = N1.getOperand(2);

    // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$a, CPURegs:i32:$b, SETEQ:Other), (bb:Other):$offset)
    // Emits: (BEQ:isVoid CPURegs:i32:$a, CPURegs:i32:$b, (bb:Other):$offset)
    // Pattern complexity = 6  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETEQ) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_9(N, Mips::BEQ);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$a, CPURegs:i32:$b, SETNE:Other), (bb:Other):$offset)
    // Emits: (BNE:isVoid CPURegs:i32:$a, CPURegs:i32:$b, (bb:Other):$offset)
    // Pattern complexity = 6  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETNE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_9(N, Mips::BNE);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), (bb:Other):$dst)
    // Emits: (BEQ:isVoid (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_12(N, Mips::SLT, Mips::BEQ, MVT::i32);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst)
    // Emits: (BEQ:isVoid (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUGE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_12(N, Mips::SLTu, Mips::BEQ, MVT::i32);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), (bb:Other):$dst)
    // Emits: (BEQ:isVoid (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETLE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_14(N, Mips::SLT, Mips::BEQ, MVT::i32);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), (bb:Other):$dst)
    // Emits: (BEQ:isVoid (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETULE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_14(N, Mips::SLTu, Mips::BEQ, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (brcond:isVoid CPURegs:i32:$cond, (bb:Other):$dst)
  // Emits: (BNE:isVoid CPURegs:i32:$cond, ZERO:i32, (bb:Other):$dst)
  // Pattern complexity = 3  cost = 1  size = 0
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_15(N, Mips::BNE);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BRIND(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_8(N, Mips::JR);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BSWAP_i32(const SDValue &N) {
  if ((Subtarget.hasSwap())) {
    SDNode *Result = Emit_7(N, Mips::WSBW, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_16(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { N1, N2, Chain, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, HasInFlag ? 4 : 3);
  Chain = SDValue(ResNode, 0);
  InFlag = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    InFlag,
    SDValue(Chain.getNode(), Chain.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_ISD_CALLSEQ_END(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::TargetConstant) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::TargetConstant) {
      SDNode *Result = Emit_16(N, Mips::ADJCALLSTACKUP);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_17(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, N1, Chain);
  Chain = SDValue(ResNode, 0);
  SDValue InFlag(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    InFlag,
    SDValue(Chain.getNode(), Chain.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_ISD_CALLSEQ_START(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::TargetConstant) {
    SDNode *Result = Emit_17(N, Mips::ADJCALLSTACKDOWN);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_CTLZ_i32(const SDValue &N) {
  if ((Subtarget.hasBitCount())) {
    SDNode *Result = Emit_7(N, Mips::CLZ, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_18(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getRegister(Mips::ZERO, MVT::i32);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, Tmp1);
}
SDNode *Emit_19(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = Transform_HI16(Tmp0.getNode());
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp1), 0);
  SDValue Tmp3 = Transform_LO16(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Select_ISD_Constant_i32(const SDValue &N) {

  // Pattern: (imm:i32)<<P:Predicate_immSExt16>>:$in
  // Emits: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immSExt16(N.getNode())) {
    SDNode *Result = Emit_18(N, Mips::ADDiu, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in
  // Emits: (ORi:i32 ZERO:i32, (imm:i32):$in)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immZExt16(N.getNode())) {
    SDNode *Result = Emit_18(N, Mips::ORi, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32):$imm
  // Emits: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
  // Pattern complexity = 3  cost = 2  size = 0
  SDNode *Result = Emit_19(N, Mips::LUi, Mips::ORi, MVT::i32, MVT::i32);
  return Result;
}

SDNode *Emit_20(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getRegister(Mips::ZERO, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Select_ISD_ConstantFP_f32(const SDValue &N) {

  // Pattern: (fpimm:f32)<<P:Predicate_fpimm0>>
  // Emits: (MTC1:f32 ZERO:i32)
  // Pattern complexity = 4  cost = 1  size = 0
  if ((Subtarget.isSingleFloat()) &&
      Predicate_fpimm0(N.getNode())) {
    SDNode *Result = Emit_20(N, Mips::MTC1, MVT::f32);
    return Result;
  }

  // Pattern: (fpimm:f32)<<P:Predicate_fpimm0>>
  // Emits: (MTC1A:f32 ZERO:i32)
  // Pattern complexity = 4  cost = 1  size = 0
  if ((!Subtarget.isFP64bit()) &&
      Predicate_fpimm0(N.getNode())) {
    SDNode *Result = Emit_20(N, Mips::MTC1A, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FABS_f32(const SDValue &N) {

  // Pattern: (fabs:f32 FGR32:f32:$fs)
  // Emits: (FABS_SO32:f32 FGR32:f32:$fs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDNode *Result = Emit_7(N, Mips::FABS_SO32, MVT::f32);
    return Result;
  }

  // Pattern: (fabs:f32 AFGR32:f32:$fs)
  // Emits: (FABS_AS32:f32 AFGR32:f32:$fs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_7(N, Mips::FABS_AS32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FABS_f64(const SDValue &N) {
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_7(N, Mips::FABS_D32, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FADD_f32(const SDValue &N) {

  // Pattern: (fadd:f32 FGR32:f32:$fs, FGR32:f32:$ft)
  // Emits: (FADD_SO32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDNode *Result = Emit_1(N, Mips::FADD_SO32, MVT::f32);
    return Result;
  }

  // Pattern: (fadd:f32 AFGR32:f32:$fs, AFGR32:f32:$ft)
  // Emits: (FADD_AS32:f32 AFGR32:f32:$fs, AFGR32:f32:$ft)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_1(N, Mips::FADD_AS32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FADD_f64(const SDValue &N) {
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_1(N, Mips::FADD_D32, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FDIV_f32(const SDValue &N) {

  // Pattern: (fdiv:f32 FGR32:f32:$fs, FGR32:f32:$ft)
  // Emits: (FDIV_SO32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDNode *Result = Emit_1(N, Mips::FDIV_SO32, MVT::f32);
    return Result;
  }

  // Pattern: (fdiv:f32 AFGR32:f32:$fs, AFGR32:f32:$ft)
  // Emits: (FDIV_AS32:f32 AFGR32:f32:$fs, AFGR32:f32:$ft)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_1(N, Mips::FDIV_AS32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FDIV_f64(const SDValue &N) {
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_1(N, Mips::FDIV_D32, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FMUL_f32(const SDValue &N) {

  // Pattern: (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft)
  // Emits: (FMUL_SO32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDNode *Result = Emit_1(N, Mips::FMUL_SO32, MVT::f32);
    return Result;
  }

  // Pattern: (fmul:f32 AFGR32:f32:$fs, AFGR32:f32:$ft)
  // Emits: (FMUL_AS32:f32 AFGR32:f32:$fs, AFGR32:f32:$ft)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_1(N, Mips::FMUL_AS32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FMUL_f64(const SDValue &N) {
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_1(N, Mips::FMUL_D32, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FNEG_f32(const SDValue &N) {

  // Pattern: (fneg:f32 FGR32:f32:$fs)
  // Emits: (FNEG_SO32:f32 FGR32:f32:$fs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDNode *Result = Emit_7(N, Mips::FNEG_SO32, MVT::f32);
    return Result;
  }

  // Pattern: (fneg:f32 AFGR32:f32:$fs)
  // Emits: (FNEG_AS32:f32 AFGR32:f32:$fs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_7(N, Mips::FNEG_AS32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FNEG_f64(const SDValue &N) {
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_7(N, Mips::FNEG_D32, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_21(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp1);
}
SDNode *Select_ISD_FP_TO_SINT_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::f32) {

    // Pattern: (fp_to_sint:i32 FGR32:f32:$src)
    // Emits: (MFC1:i32 (TRUNC_W_SO32:f32 FGR32:f32:$src))
    // Pattern complexity = 3  cost = 2  size = 0
    {
      SDNode *Result = Emit_21(N, Mips::TRUNC_W_SO32, Mips::MFC1, MVT::f32, MVT::i32);
      return Result;
    }

    // Pattern: (fp_to_sint:i32 AFGR32:f32:$src)
    // Emits: (MFC1A:i32 (TRUNC_W_AS32:f32 AFGR32:f32:$src))
    // Pattern complexity = 3  cost = 2  size = 0
    SDNode *Result = Emit_21(N, Mips::TRUNC_W_AS32, Mips::MFC1A, MVT::f32, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FSQRT_f32(const SDValue &N) {

  // Pattern: (fsqrt:f32 FGR32:f32:$fs)
  // Emits: (FSQRT_SO32:f32 FGR32:f32:$fs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDNode *Result = Emit_7(N, Mips::FSQRT_SO32, MVT::f32);
    return Result;
  }

  // Pattern: (fsqrt:f32 AFGR32:f32:$fs)
  // Emits: (FSQRT_AS32:f32 AFGR32:f32:$fs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_7(N, Mips::FSQRT_AS32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FSQRT_f64(const SDValue &N) {
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_7(N, Mips::FSQRT_D32, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FSUB_f32(const SDValue &N) {

  // Pattern: (fsub:f32 FGR32:f32:$fs, FGR32:f32:$ft)
  // Emits: (FSUB_SO32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDNode *Result = Emit_1(N, Mips::FSUB_SO32, MVT::f32);
    return Result;
  }

  // Pattern: (fsub:f32 AFGR32:f32:$fs, AFGR32:f32:$ft)
  // Emits: (FSUB_AS32:f32 AFGR32:f32:$fs, AFGR32:f32:$ft)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_1(N, Mips::FSUB_AS32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FSUB_f64(const SDValue &N) {
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_1(N, Mips::FSUB_D32, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_22(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN_0, SDValue &CPTmpN_1) DISABLE_INLINE {
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, CPTmpN_0, CPTmpN_1);
}
SDNode *Select_ISD_FrameIndex_i32(const SDValue &N) {
  SDValue CPTmpN_0;
  SDValue CPTmpN_1;
  if (SelectAddr(N, N, CPTmpN_0, CPTmpN_1)) {
    SDNode *Result = Emit_22(N, Mips::LEA_ADDiu, MVT::i32, CPTmpN_0, CPTmpN_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_23(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_LOAD_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {

    // Pattern: (ld:i32 addr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
    // Emits: (LB:i32 addr:i32:$addr)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_23(N, Mips::LB, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 addr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
    // Emits: (LBu:i32 addr:i32:$addr)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_23(N, Mips::LBu, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 addr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
    // Emits: (LH:i32 addr:i32:$addr)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_23(N, Mips::LH, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 addr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
    // Emits: (LHu:i32 addr:i32:$addr)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_23(N, Mips::LHu, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 addr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LW:i32 addr:i32:$addr)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_23(N, Mips::LW, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
    if (Predicate_extload(N.getNode())) {

      // Pattern: (ld:i32 addr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>>
      // Emits: (LBu:i32 addr:i32:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_extloadi1(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_23(N, Mips::LBu, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i32 addr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
      // Emits: (LBu:i32 addr:i32:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_23(N, Mips::LBu, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i32 addr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
      // Emits: (LHu:i32 addr:i32:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_23(N, Mips::LHu, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_f32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode()) &&
      Predicate_load(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
        N1.getNode()->getValueType(0) == MVT::i32) {

      // Pattern: (ld:f32 addr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LWC1:f32 addr:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      {
        SDNode *Result = Emit_23(N, Mips::LWC1, MVT::f32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }

      // Pattern: (ld:f32 addr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LWC1A:f32 addr:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      SDNode *Result = Emit_23(N, Mips::LWC1A, MVT::f32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_f64(const SDValue &N) {
  if ((!Subtarget.isSingleFloat())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedload(N.getNode()) &&
        Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_23(N, Mips::LDC1, MVT::f64, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_OR_i32(const SDValue &N) {

  // Pattern: (or:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$c)
  // Emits: (ORi:i32 CPURegs:i32:$b, (LO16:i32 (imm:i32):$c))
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immZExt16(N1.getNode())) {
      SDNode *Result = Emit_6(N, Mips::ORi, MVT::i32);
      return Result;
    }
  }

  // Pattern: (or:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Emits: (OR:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Mips::OR, MVT::i32);
  return Result;
}

SDNode *Emit_24(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N00, N01), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, N2, N1, Tmp4);
}
SDNode *Emit_25(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i32);
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N00, Tmp3), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, N2, N1, Tmp4);
}
SDNode *Emit_26(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N01, N00), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, N2, N1, Tmp4);
}
SDNode *Emit_27(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N2, N1, N0);
}
SDNode *Select_ISD_SELECT_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::SETCC) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immSExt16(N01.getNode())) {
        SDValue N02 = N0.getOperand(2);

        // Pattern: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F)
        // Emits: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs))
        // Pattern complexity = 10  cost = 2  size = 0
        if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGE) {
          SDNode *Result = Emit_25(N, Mips::SLTi, Mips::MOVZ, MVT::i32, MVT::i32);
          return Result;
        }

        // Pattern: (select:i32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F)
        // Emits: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh))
        // Pattern complexity = 10  cost = 2  size = 0
        if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUGE) {
          SDNode *Result = Emit_25(N, Mips::SLTiu, Mips::MOVZ, MVT::i32, MVT::i32);
          return Result;
        }
      }
      SDValue N02 = N0.getOperand(2);

      // Pattern: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F)
      // Emits: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
      // Pattern complexity = 6  cost = 2  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGE) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_24(N, Mips::SLT, Mips::MOVZ, MVT::i32, MVT::i32);
          return Result;
        }
      }

      // Pattern: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F)
      // Emits: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
      // Pattern complexity = 6  cost = 2  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUGE) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_24(N, Mips::SLTu, Mips::MOVZ, MVT::i32, MVT::i32);
          return Result;
        }
      }

      // Pattern: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F)
      // Emits: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs))
      // Pattern complexity = 6  cost = 2  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLE) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_26(N, Mips::SLT, Mips::MOVZ, MVT::i32, MVT::i32);
          return Result;
        }
      }

      // Pattern: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F)
      // Emits: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs))
      // Pattern complexity = 6  cost = 2  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETULE) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_26(N, Mips::SLTu, Mips::MOVZ, MVT::i32, MVT::i32);
          return Result;
        }
      }

      // Pattern: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F)
      // Emits: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
      // Pattern complexity = 6  cost = 2  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETEQ) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_24(N, Mips::XOR, Mips::MOVZ, MVT::i32, MVT::i32);
          return Result;
        }
      }

      // Pattern: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F)
      // Emits: (MOVN:i32 CPURegs:i32:$F, CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
      // Pattern complexity = 6  cost = 2  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETNE) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_24(N, Mips::XOR, Mips::MOVN, MVT::i32, MVT::i32);
          return Result;
        }
      }
    }
  }

  // Pattern: (select:i32 CPURegs:i32:$cond, CPURegs:i32:$T, CPURegs:i32:$F)
  // Emits: (MOVN:i32 CPURegs:i32:$F, CPURegs:i32:$T, CPURegs:i32:$cond)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_27(N, Mips::MOVN, MVT::i32);
  return Result;
}

SDNode *Emit_28(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_29(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_30(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, N1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Emit_31(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getRegister(Mips::ZERO, MVT::i32);
  SDValue Tmp3(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, N1), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp0, Tmp3);
}
SDNode *Emit_32(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N1, N0), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Emit_33(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N0);
}
SDNode *Emit_34(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Select_ISD_SETCC_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant &&
      Predicate_immSExt16(N1.getNode())) {
    SDValue N2 = N.getOperand(2);

    // Pattern: (setcc:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c, SETLT:Other)
    // Emits: (SLTi:i32 CPURegs:i32:$b, (imm:i32):$c)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLT) {
      SDNode *Result = Emit_28(N, Mips::SLTi, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c, SETULT:Other)
    // Emits: (SLTiu:i32 CPURegs:i32:$b, (imm:i32):$c)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULT) {
      SDNode *Result = Emit_28(N, Mips::SLTiu, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other)
    // Emits: (XORi:i32 (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
    // Pattern complexity = 7  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGE) {
      SDNode *Result = Emit_34(N, Mips::SLTi, Mips::XORi, MVT::i32, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other)
    // Emits: (XORi:i32 (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
    // Pattern complexity = 7  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE) {
      SDNode *Result = Emit_34(N, Mips::SLTiu, Mips::XORi, MVT::i32, MVT::i32);
      return Result;
    }
  }
  SDValue N2 = N.getOperand(2);

  // Pattern: (setcc:i32 CPURegs:i32:$b, CPURegs:i32:$c, SETLT:Other)
  // Emits: (SLT:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_29(N, Mips::SLT, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 CPURegs:i32:$b, CPURegs:i32:$c, SETULT:Other)
  // Emits: (SLTu:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_29(N, Mips::SLTu, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGT:Other)
  // Emits: (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_33(N, Mips::SLT, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGT:Other)
  // Emits: (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_33(N, Mips::SLTu, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other)
  // Emits: (SLTu:i32 (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETEQ &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_30(N, Mips::XOR, Mips::SLTu, MVT::i32, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other)
  // Emits: (SLTu:i32 ZERO:i32, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_31(N, Mips::XOR, Mips::SLTu, MVT::i32, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other)
  // Emits: (XORi:i32 (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_32(N, Mips::SLT, Mips::XORi, MVT::i32, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other)
  // Emits: (XORi:i32 (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_32(N, Mips::SLTu, Mips::XORi, MVT::i32, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other)
  // Emits: (XORi:i32 (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_30(N, Mips::SLT, Mips::XORi, MVT::i32, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other)
  // Emits: (XORi:i32 (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_30(N, Mips::SLTu, Mips::XORi, MVT::i32, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SHL_i32(const SDValue &N) {

  // Pattern: (shl:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c)
  // Emits: (SLL:i32 CPURegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immZExt5(N1.getNode())) {
      SDNode *Result = Emit_0(N, Mips::SLL, MVT::i32);
      return Result;
    }
  }

  // Pattern: (shl:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Emits: (SLLV:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Mips::SLLV, MVT::i32);
  return Result;
}

SDNode *Emit_35(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_SIGN_EXTEND_INREG_i32(const SDValue &N) {
  if ((Subtarget.hasSEInReg())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (sext_inreg:i32 CPURegs:i32:$src, i8:Other)
    // Emits: (SEB:i32 CPURegs:i32:$src)
    // Pattern complexity = 3  cost = 1  size = 0
    if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
      SDNode *Result = Emit_35(N, Mips::SEB, MVT::i32);
      return Result;
    }

    // Pattern: (sext_inreg:i32 CPURegs:i32:$src, i16:Other)
    // Emits: (SEH:i32 CPURegs:i32:$src)
    // Pattern complexity = 3  cost = 1  size = 0
    if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
      SDNode *Result = Emit_35(N, Mips::SEH, MVT::i32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SINT_TO_FP_f32(const SDValue &N) {
  SDNode *Result = Emit_21(N, Mips::MTC1, Mips::CVTS_W32, MVT::f32, MVT::f32);
  return Result;
}

SDNode *Select_ISD_SINT_TO_FP_f64(const SDValue &N) {
  SDNode *Result = Emit_21(N, Mips::MTC1, Mips::CVTD_W32, MVT::f32, MVT::f64);
  return Result;
}

SDNode *Select_ISD_SRA_i32(const SDValue &N) {

  // Pattern: (sra:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c)
  // Emits: (SRA:i32 CPURegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immZExt5(N1.getNode())) {
      SDNode *Result = Emit_0(N, Mips::SRA, MVT::i32);
      return Result;
    }
  }

  // Pattern: (sra:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Emits: (SRAV:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Mips::SRAV, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SRL_i32(const SDValue &N) {

  // Pattern: (srl:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c)
  // Emits: (SRL:i32 CPURegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immZExt5(N1.getNode())) {
      SDNode *Result = Emit_0(N, Mips::SRL, MVT::i32);
      return Result;
    }
  }

  // Pattern: (srl:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Emits: (SRLV:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Mips::SRLV, MVT::i32);
  return Result;
}

SDNode *Emit_36(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_37(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getRegister(Mips::ZERO, MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { Tmp2, CPTmpN2_0, CPTmpN2_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_STORE(const SDValue &N) {
  {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedstore(N.getNode())) {

      // Pattern: (st:isVoid 0:i32, addr:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (SW:isVoid ZERO:i32, addr:i32:$dst)
      // Pattern complexity = 18  cost = 1  size = 0
      if (Predicate_store(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDValue N2 = N.getOperand(2);
            SDValue CPTmpN2_0;
            SDValue CPTmpN2_1;
            if (SelectAddr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
                N1.getNode()->getValueType(0) == MVT::i32 &&
                N2.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_37(N, Mips::SW, CPTmpN2_0, CPTmpN2_1);
              return Result;
            }
          }
        }
      }
      if (Predicate_truncstore(N.getNode())) {

        // Pattern: (st:isVoid CPURegs:i32:$dst, addr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
        // Emits: (SB:isVoid CPURegs:i32:$dst, addr:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (Predicate_truncstorei8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          if (SelectAddr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_36(N, Mips::SB, CPTmpN2_0, CPTmpN2_1);
            return Result;
          }
        }

        // Pattern: (st:isVoid CPURegs:i32:$dst, addr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
        // Emits: (SH:isVoid CPURegs:i32:$dst, addr:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (Predicate_truncstorei16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          if (SelectAddr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_36(N, Mips::SH, CPTmpN2_0, CPTmpN2_1);
            return Result;
          }
        }
      }

      // Pattern: (st:isVoid CPURegs:i32:$dst, addr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (SW:isVoid CPURegs:i32:$dst, addr:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_store(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_36(N, Mips::SW, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (st:isVoid AFGR64:f64:$ft, addr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
  // Emits: (SDC1:isVoid AFGR64:f64:$ft, addr:i32:$addr)
  // Pattern complexity = 13  cost = 1  size = 0
  if ((!Subtarget.isSingleFloat())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedstore(N.getNode()) &&
        Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
          N1.getNode()->getValueType(0) == MVT::f64 &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_36(N, Mips::SDC1, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }
  }
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedstore(N.getNode()) &&
      Predicate_store(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    SDValue CPTmpN2_0;
    SDValue CPTmpN2_1;
    if (SelectAddr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
        N1.getNode()->getValueType(0) == MVT::f32 &&
        N2.getNode()->getValueType(0) == MVT::i32) {

      // Pattern: (st:isVoid FGR32:f32:$ft, addr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (SWC1:isVoid FGR32:f32:$ft, addr:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      {
        SDNode *Result = Emit_36(N, Mips::SWC1, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }

      // Pattern: (st:isVoid AFGR32:f32:$ft, addr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (SWC1A:isVoid AFGR32:f32:$ft, addr:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      SDNode *Result = Emit_36(N, Mips::SWC1A, CPTmpN2_0, CPTmpN2_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SUB_i32(const SDValue &N) {
  SDNode *Result = Emit_1(N, Mips::SUBu, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SUBC_i32(const SDValue &N) {
  SDNode *Result = Emit_4(N, Mips::SUBu, MVT::i32);
  return Result;
}

SDNode *Emit_38(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N01);
}
SDNode *Emit_39(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getRegister(Mips::ZERO, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Select_ISD_XOR_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (xor:i32 (or:i32 CPURegs:i32:$b, CPURegs:i32:$c), (imm:i32)<<P:Predicate_immAllOnes>>)
    // Emits: (NOR:i32 CPURegs:i32:$b, CPURegs:i32:$c)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::OR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N1.getNode())) {
        SDNode *Result = Emit_38(N, Mips::NOR, MVT::i32);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (xor:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$c)
      // Emits: (XORi:i32 CPURegs:i32:$b, (LO16:i32 (imm:i32):$c))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immZExt16(N1.getNode())) {
        SDNode *Result = Emit_6(N, Mips::XORi, MVT::i32);
        return Result;
      }

      // Pattern: (xor:i32 CPURegs:i32:$in, (imm:i32)<<P:Predicate_immAllOnes>>)
      // Emits: (NOR:i32 CPURegs:i32:$in, ZERO:i32)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immAllOnes(N1.getNode())) {
        SDNode *Result = Emit_39(N, Mips::NOR, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (xor:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Emits: (XOR:i32 CPURegs:i32:$b, CPURegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Mips::XOR, MVT::i32);
  return Result;
}

SDNode *Emit_40(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1, N2);
}
SDNode *Select_MipsISD_CMov_i32(const SDValue &N) {
  if ((Subtarget.hasCondMov())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    SDValue N3 = N.getOperand(3);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N3);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();

      // Pattern: (MipsCMov:i32 CPURegs:i32:$F, CPURegs:i32:$T, CPURegs:i32:$cond, 1:i32)
      // Emits: (MOVN:i32 CPURegs:i32:$F, CPURegs:i32:$T, CPURegs:i32:$cond)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(1)) {
        SDNode *Result = Emit_40(N, Mips::MOVN, MVT::i32);
        return Result;
      }

      // Pattern: (MipsCMov:i32 CPURegs:i32:$F, CPURegs:i32:$T, CPURegs:i32:$cond, 0:i32)
      // Emits: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, CPURegs:i32:$cond)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_40(N, Mips::MOVZ, MVT::i32);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_41(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue InFlag(0, 0);
  SDNode *ResNode = CurDAG->getCopyToReg(Chain, Mips::FCR31, N3, InFlag).getNode();
  Chain = SDValue(ResNode, 0);
  InFlag = SDValue(ResNode, 1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N2, Chain, InFlag);
}
SDNode *Select_MipsISD_FPBrcond(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (MipsFPBrcond:isVoid 0:i32, (bb:Other):$dst, FCR31:i32)
    // Emits: (BC1F:isVoid (bb:Other):$dst)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(0)) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock) {
        SDNode *Result = Emit_41(N, Mips::BC1F);
        return Result;
      }
    }

    // Pattern: (MipsFPBrcond:isVoid 1:i32, (bb:Other):$dst, FCR31:i32)
    // Emits: (BC1T:isVoid (bb:Other):$dst)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(1)) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock) {
        SDNode *Result = Emit_41(N, Mips::BC1T);
        return Result;
      }
    }

    // Pattern: (MipsFPBrcond:isVoid 2:i32, (bb:Other):$dst, FCR31:i32)
    // Emits: (BC1FL:isVoid (bb:Other):$dst)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(2)) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock) {
        SDNode *Result = Emit_41(N, Mips::BC1FL);
        return Result;
      }
    }

    // Pattern: (MipsFPBrcond:isVoid 3:i32, (bb:Other):$dst, FCR31:i32)
    // Emits: (BC1TL:isVoid (bb:Other):$dst)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(3)) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock) {
        SDNode *Result = Emit_41(N, Mips::BC1TL);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_42(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i32, N0, N1, Tmp2);
}
SDNode *Select_MipsISD_FPCmp(const SDValue &N) {

  // Pattern: (MipsFPCmp:isVoid FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cc)
  // Emits: (FCMP_SO32:isVoid FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cc)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant &&
        N0.getNode()->getValueType(0) == MVT::f32) {
      SDNode *Result = Emit_42(N, Mips::FCMP_SO32);
      return Result;
    }
  }
  if ((!Subtarget.isFP64bit())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {

      // Pattern: (MipsFPCmp:isVoid AFGR32:f32:$fs, AFGR32:f32:$ft, (imm:i32):$cc)
      // Emits: (FCMP_AS32:isVoid AFGR32:f32:$fs, AFGR32:f32:$ft, (imm:i32):$cc)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N0.getNode()->getValueType(0) == MVT::f32) {
        SDNode *Result = Emit_42(N, Mips::FCMP_AS32);
        return Result;
      }

      // Pattern: (MipsFPCmp:isVoid AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cc)
      // Emits: (FCMP_D32:isVoid AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cc)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N0.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_42(N, Mips::FCMP_D32);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_43(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i32);
  SDValue Ops0[] = { N0, N1, N2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_MipsISD_FPSelectCC_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  if (N3.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_43(N, Mips::Select_FCC, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_MipsISD_FPSelectCC_f32(const SDValue &N) {

  // Pattern: (MipsFPSelectCC:f32 CPURegs:i32:$CmpRes, FGR32:f32:$T, FGR32:f32:$F, (imm:i32):$cc)
  // Emits: (Select_FCC_SO32:f32 CPURegs:i32:$CmpRes, FGR32:f32:$T, FGR32:f32:$F, (imm:i32):$cc)
  // Pattern complexity = 6  cost = 11  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    SDValue N3 = N.getOperand(3);
    if (N3.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_43(N, Mips::Select_FCC_SO32, MVT::f32);
      return Result;
    }
  }

  // Pattern: (MipsFPSelectCC:f32 CPURegs:i32:$CmpRes, AFGR32:f32:$T, AFGR32:f32:$F, (imm:i32):$cc)
  // Emits: (Select_FCC_AS32:f32 CPURegs:i32:$CmpRes, AFGR32:f32:$T, AFGR32:f32:$F, (imm:i32):$cc)
  // Pattern complexity = 6  cost = 11  size = 0
  if ((!Subtarget.isFP64bit())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    SDValue N3 = N.getOperand(3);
    if (N3.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_43(N, Mips::Select_FCC_AS32, MVT::f32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_MipsISD_FPSelectCC_f64(const SDValue &N) {
  if ((!Subtarget.isFP64bit())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    SDValue N3 = N.getOperand(3);
    if (N3.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_43(N, Mips::Select_FCC_D32, MVT::f64);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_MipsISD_Hi_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (MipsHi:i32 (tjumptable:i32):$in)
  // Emits: (LUi:i32 (tjumptable:i32):$in)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetJumpTable) {
    SDNode *Result = Emit_7(N, Mips::LUi, MVT::i32);
    return Result;
  }

  // Pattern: (MipsHi:i32 (tconstpool:i32):$in)
  // Emits: (LUi:i32 (tconstpool:i32):$in)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetConstantPool) {
    SDNode *Result = Emit_7(N, Mips::LUi, MVT::i32);
    return Result;
  }

  // Pattern: (MipsHi:i32 (tglobaladdr:i32):$in)
  // Emits: (LUi:i32 (tglobaladdr:i32):$in)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_7(N, Mips::LUi, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_44(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Tmp0, Chain);
  Chain = SDValue(ResNode, 0);
  SDValue InFlag(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    InFlag,
    SDValue(Chain.getNode(), Chain.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_MipsISD_JmpLink(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (MipsJmpLink:isVoid (imm:i32):$target)
  // Emits: (JAL:isVoid (imm:i32):$target)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_44(N, Mips::JAL);
    return Result;
  }

  // Pattern: (MipsJmpLink:isVoid (tglobaladdr:i32):$dst)
  // Emits: (JAL:isVoid (tglobaladdr:i32):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_17(N, Mips::JAL);
    return Result;
  }

  // Pattern: (MipsJmpLink:isVoid (texternalsym:i32):$dst)
  // Emits: (JAL:isVoid (texternalsym:i32):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_17(N, Mips::JAL);
    return Result;
  }
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_17(N, Mips::JALR);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_45(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { N1, Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 3 : 2);
}
SDNode *Select_MipsISD_Ret(const SDValue &N) {
  SDNode *Result = Emit_45(N, Mips::RET);
  return Result;
}

SDNode *Emit_46(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1, N2);
}
SDNode *Select_MipsISD_SelectCC_i32(const SDValue &N) {
  SDNode *Result = Emit_46(N, Mips::Select_CC, MVT::i32);
  return Result;
}

SDNode *Select_MipsISD_SelectCC_f32(const SDValue &N) {

  // Pattern: (MipsSelectCC:f32 CPURegs:i32:$CmpRes, FGR32:f32:$T, FGR32:f32:$F)
  // Emits: (Select_CC_SO32:f32 CPURegs:i32:$CmpRes, FGR32:f32:$T, FGR32:f32:$F)
  // Pattern complexity = 3  cost = 11  size = 0
  if ((Subtarget.isSingleFloat())) {
    SDNode *Result = Emit_46(N, Mips::Select_CC_SO32, MVT::f32);
    return Result;
  }

  // Pattern: (MipsSelectCC:f32 CPURegs:i32:$CmpRes, AFGR32:f32:$T, AFGR32:f32:$F)
  // Emits: (Select_CC_AS32:f32 CPURegs:i32:$CmpRes, AFGR32:f32:$T, AFGR32:f32:$F)
  // Pattern complexity = 3  cost = 11  size = 0
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_46(N, Mips::Select_CC_AS32, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_MipsISD_SelectCC_f64(const SDValue &N) {
  if ((!Subtarget.isFP64bit())) {
    SDNode *Result = Emit_46(N, Mips::Select_CC_D32, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_INLINEASM(SDValue N) {
  std::vector<SDValue> Ops(N.getNode()->op_begin(), N.getNode()->op_end());
  SelectInlineAsmMemoryOperands(Ops);

  std::vector<MVT> VTs;
  VTs.push_back(MVT::Other);
  VTs.push_back(MVT::Flag);
  SDValue New = CurDAG->getNode(ISD::INLINEASM, VTs, &Ops[0], Ops.size());
  return New.getNode();
}

SDNode *Select_UNDEF(const SDValue &N) {
  return CurDAG->SelectNodeTo(N.getNode(), TargetInstrInfo::IMPLICIT_DEF,
                              N.getValueType());
}

SDNode *Select_DBG_LABEL(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  unsigned C = cast<LabelSDNode>(N)->getLabelID();
  SDValue Tmp = CurDAG->getTargetConstant(C, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), TargetInstrInfo::DBG_LABEL,
                              MVT::Other, Tmp, Chain);
}

SDNode *Select_EH_LABEL(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  unsigned C = cast<LabelSDNode>(N)->getLabelID();
  SDValue Tmp = CurDAG->getTargetConstant(C, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), TargetInstrInfo::EH_LABEL,
                              MVT::Other, Tmp, Chain);
}

SDNode *Select_DECLARE(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (!isa<FrameIndexSDNode>(N1) || !isa<GlobalAddressSDNode>(N2)) {
    CannotYetSelect(N);
  }
  int FI = cast<FrameIndexSDNode>(N1)->getIndex();
  GlobalValue *GV = cast<GlobalAddressSDNode>(N2)->getGlobal();
  SDValue Tmp1 = CurDAG->getTargetFrameIndex(FI, TLI.getPointerTy());
  SDValue Tmp2 = CurDAG->getTargetGlobalAddress(GV, TLI.getPointerTy());
  return CurDAG->SelectNodeTo(N.getNode(), TargetInstrInfo::DECLARE,
                              MVT::Other, Tmp1, Tmp2, Chain);
}

SDNode *Select_EXTRACT_SUBREG(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  unsigned C = cast<ConstantSDNode>(N1)->getZExtValue();
  SDValue Tmp = CurDAG->getTargetConstant(C, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), TargetInstrInfo::EXTRACT_SUBREG,
                              N.getValueType(), N0, Tmp);
}

SDNode *Select_INSERT_SUBREG(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  unsigned C = cast<ConstantSDNode>(N2)->getZExtValue();
  SDValue Tmp = CurDAG->getTargetConstant(C, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), TargetInstrInfo::INSERT_SUBREG,
                              N.getValueType(), N0, N1, Tmp);
}

// The main instruction selector code.
SDNode *SelectCode(SDValue N) {
  MVT::SimpleValueType NVT = N.getNode()->getValueType(0).getSimpleVT();
  switch (N.getOpcode()) {
  default:
    assert(!N.isMachineOpcode() && "Node already selected!");
    break;
  case ISD::EntryToken:       // These nodes remain the same.
  case ISD::MEMOPERAND:
  case ISD::BasicBlock:
  case ISD::Register:
  case ISD::HANDLENODE:
  case ISD::TargetConstant:
  case ISD::TargetConstantFP:
  case ISD::TargetConstantPool:
  case ISD::TargetFrameIndex:
  case ISD::TargetExternalSymbol:
  case ISD::TargetJumpTable:
  case ISD::TargetGlobalTLSAddress:
  case ISD::TargetGlobalAddress:
  case ISD::TokenFactor:
  case ISD::CopyFromReg:
  case ISD::CopyToReg: {
    return NULL;
  }
  case ISD::AssertSext:
  case ISD::AssertZext: {
    ReplaceUses(N, N.getOperand(0));
    return NULL;
  }
  case ISD::INLINEASM: return Select_INLINEASM(N);
  case ISD::DBG_LABEL: return Select_DBG_LABEL(N);
  case ISD::EH_LABEL: return Select_EH_LABEL(N);
  case ISD::DECLARE: return Select_DECLARE(N);
  case ISD::EXTRACT_SUBREG: return Select_EXTRACT_SUBREG(N);
  case ISD::INSERT_SUBREG: return Select_INSERT_SUBREG(N);
  case ISD::UNDEF: return Select_UNDEF(N);
  case ISD::ADD: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ADD_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADDC: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ADDC_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::AND: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_AND_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::BIT_CONVERT: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_BIT_CONVERT_i32(N);
    case MVT::f32:
      return Select_ISD_BIT_CONVERT_f32(N);
    default:
      break;
    }
    break;
  }
  case ISD::BR: {
    switch (NVT) {
    default:
      return Select_ISD_BR(N);
      break;
    }
    break;
  }
  case ISD::BRCOND: {
    switch (NVT) {
    default:
      return Select_ISD_BRCOND(N);
      break;
    }
    break;
  }
  case ISD::BRIND: {
    switch (NVT) {
    default:
      return Select_ISD_BRIND(N);
      break;
    }
    break;
  }
  case ISD::BSWAP: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_BSWAP_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::CALLSEQ_END: {
    switch (NVT) {
    default:
      return Select_ISD_CALLSEQ_END(N);
      break;
    }
    break;
  }
  case ISD::CALLSEQ_START: {
    switch (NVT) {
    default:
      return Select_ISD_CALLSEQ_START(N);
      break;
    }
    break;
  }
  case ISD::CTLZ: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_CTLZ_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::Constant: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_Constant_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::ConstantFP: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_ConstantFP_f32(N);
    default:
      break;
    }
    break;
  }
  case ISD::FABS: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FABS_f32(N);
    case MVT::f64:
      return Select_ISD_FABS_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FADD: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FADD_f32(N);
    case MVT::f64:
      return Select_ISD_FADD_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FDIV: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FDIV_f32(N);
    case MVT::f64:
      return Select_ISD_FDIV_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FMUL: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FMUL_f32(N);
    case MVT::f64:
      return Select_ISD_FMUL_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FNEG: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FNEG_f32(N);
    case MVT::f64:
      return Select_ISD_FNEG_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FP_TO_SINT: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_FP_TO_SINT_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::FSQRT: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FSQRT_f32(N);
    case MVT::f64:
      return Select_ISD_FSQRT_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FSUB: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FSUB_f32(N);
    case MVT::f64:
      return Select_ISD_FSUB_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FrameIndex: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_FrameIndex_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::LOAD: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_LOAD_i32(N);
    case MVT::f32:
      return Select_ISD_LOAD_f32(N);
    case MVT::f64:
      return Select_ISD_LOAD_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::OR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_OR_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SELECT: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SELECT_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SETCC: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SETCC_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SHL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SHL_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SIGN_EXTEND_INREG: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SIGN_EXTEND_INREG_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SINT_TO_FP: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_SINT_TO_FP_f32(N);
    case MVT::f64:
      return Select_ISD_SINT_TO_FP_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SRA: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SRA_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SRL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SRL_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::STORE: {
    switch (NVT) {
    default:
      return Select_ISD_STORE(N);
      break;
    }
    break;
  }
  case ISD::SUB: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SUB_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUBC: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SUBC_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::XOR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_XOR_i32(N);
    default:
      break;
    }
    break;
  }
  case MipsISD::CMov: {
    switch (NVT) {
    case MVT::i32:
      return Select_MipsISD_CMov_i32(N);
    default:
      break;
    }
    break;
  }
  case MipsISD::FPBrcond: {
    switch (NVT) {
    default:
      return Select_MipsISD_FPBrcond(N);
      break;
    }
    break;
  }
  case MipsISD::FPCmp: {
    switch (NVT) {
    default:
      return Select_MipsISD_FPCmp(N);
      break;
    }
    break;
  }
  case MipsISD::FPSelectCC: {
    switch (NVT) {
    case MVT::i32:
      return Select_MipsISD_FPSelectCC_i32(N);
    case MVT::f32:
      return Select_MipsISD_FPSelectCC_f32(N);
    case MVT::f64:
      return Select_MipsISD_FPSelectCC_f64(N);
    default:
      break;
    }
    break;
  }
  case MipsISD::Hi: {
    switch (NVT) {
    case MVT::i32:
      return Select_MipsISD_Hi_i32(N);
    default:
      break;
    }
    break;
  }
  case MipsISD::JmpLink: {
    switch (NVT) {
    default:
      return Select_MipsISD_JmpLink(N);
      break;
    }
    break;
  }
  case MipsISD::Ret: {
    switch (NVT) {
    default:
      return Select_MipsISD_Ret(N);
      break;
    }
    break;
  }
  case MipsISD::SelectCC: {
    switch (NVT) {
    case MVT::i32:
      return Select_MipsISD_SelectCC_i32(N);
    case MVT::f32:
      return Select_MipsISD_SelectCC_f32(N);
    case MVT::f64:
      return Select_MipsISD_SelectCC_f64(N);
    default:
      break;
    }
    break;
  }
  } // end of big switch.

  if (N.getOpcode() != ISD::INTRINSIC_W_CHAIN &&
      N.getOpcode() != ISD::INTRINSIC_WO_CHAIN &&
      N.getOpcode() != ISD::INTRINSIC_VOID) {
    CannotYetSelect(N);
  } else {
    CannotYetSelectIntrinsic(N);
  }
  return NULL;
}

void CannotYetSelect(SDValue N) DISABLE_INLINE {
  cerr << "Cannot yet select: ";
  N.getNode()->dump(CurDAG);
  cerr << '\n';
  abort();
}

void CannotYetSelectIntrinsic(SDValue N) DISABLE_INLINE {
  cerr << "Cannot yet select: ";
  unsigned iid = cast<ConstantSDNode>(N.getOperand(N.getOperand(0).getValueType() == MVT::Other))->getZExtValue();
  cerr << "intrinsic %"<< Intrinsic::getName((Intrinsic::ID)iid);
  cerr << '\n';
  abort();
}

