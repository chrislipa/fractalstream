//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the Sparc target
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
inline SDValue Transform_HI22(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: shift the immediate value down into the low bits.
  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() >> 10, MVT::i32);

}
inline SDValue Transform_LO10(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return CurDAG->getTargetConstant((unsigned)N->getZExtValue() & 1023,
                                   MVT::i32);

}

// Predicate functions.
inline bool Predicate_SETHIimm(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (((unsigned)N->getZExtValue() >> 10) << 10) ==
         (unsigned)N->getZExtValue();

}
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
inline bool Predicate_simm11(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // simm11 predicate - True if the imm fits in a 11-bit sign extended field.
  return (((int)N->getZExtValue() << (32-11)) >> (32-11)) ==
         (int)N->getZExtValue();

}
inline bool Predicate_simm13(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // simm13 predicate - True if the imm fits in a 13-bit sign extended field.
  return (((int)N->getZExtValue() << (32-13)) >> (32-13)) ==
         (int)N->getZExtValue();

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
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_1(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
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
      if (N1.getOpcode() == SPISD::Lo) {
        SDValue N10 = N1.getOperand(0);

        // Pattern: (add:i32 IntRegs:i32:$r, (SPlo:i32 (tconstpool:i32):$in))
        // Emits: (ADDri:i32 IntRegs:i32:$r, (tconstpool:i32):$in)
        // Pattern complexity = 9  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetConstantPool) {
          SDNode *Result = Emit_2(N, SP::ADDri, MVT::i32);
          return Result;
        }

        // Pattern: (add:i32 IntRegs:i32:$r, (SPlo:i32 (tglobaladdr:i32):$in))
        // Emits: (ADDri:i32 IntRegs:i32:$r, (tglobaladdr:i32):$in)
        // Pattern complexity = 9  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetGlobalAddress) {
          SDNode *Result = Emit_2(N, SP::ADDri, MVT::i32);
          return Result;
        }
      }
    }
    if (N0.getOpcode() == SPISD::Lo) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (add:i32 (SPlo:i32 (tconstpool:i32):$in), IntRegs:i32:$r)
      // Emits: (ADDri:i32 IntRegs:i32:$r, (tconstpool:i32):$in)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetConstantPool) {
        SDNode *Result = Emit_3(N, SP::ADDri, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 (SPlo:i32 (tglobaladdr:i32):$in), IntRegs:i32:$r)
      // Emits: (ADDri:i32 IntRegs:i32:$r, (tglobaladdr:i32):$in)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetGlobalAddress) {
        SDNode *Result = Emit_3(N, SP::ADDri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (add:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
    // Emits: (ADDri:i32 IntRegs:i32:$b, (imm:i32):$c)
    // Pattern complexity = 7  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_1(N, SP::ADDri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (add:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (ADDrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SP::ADDrr, MVT::i32);
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

  // Pattern: (addc:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
  // Emits: (ADDCCri:i32 IntRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_5(N, SP::ADDCCri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (addc:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (ADDCCrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_4(N, SP::ADDCCrr, MVT::i32);
  return Result;
}

SDNode *Emit_6(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, N1, InFlag);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_7(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, Tmp1, InFlag);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDE_i32(const SDValue &N) {

  // Pattern: (adde:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
  // Emits: (ADDXri:i32 IntRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_7(N, SP::ADDXri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (adde:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (ADDXrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_6(N, SP::ADDXrr, MVT::i32);
  return Result;
}

SDNode *Emit_8(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N10);
}
SDNode *Emit_9(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N00);
}
SDNode *Select_ISD_AND_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i32 IntRegs:i32:$b, (xor:i32 IntRegs:i32:$c, (imm:i32)<<P:Predicate_immAllOnes>>))
    // Emits: (ANDNrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_8(N, SP::ANDNrr, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (and:i32 (xor:i32 IntRegs:i32:$c, (imm:i32)<<P:Predicate_immAllOnes>>), IntRegs:i32:$b)
    // Emits: (ANDNrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_9(N, SP::ANDNrr, MVT::i32);
        return Result;
      }
    }

    // Pattern: (and:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
    // Emits: (ANDri:i32 IntRegs:i32:$b, (imm:i32):$c)
    // Pattern complexity = 7  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_1(N, SP::ANDri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (and:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (ANDrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SP::ANDrr, MVT::i32);
  return Result;
}

SDNode *Emit_10(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain);
}
SDNode *Select_ISD_BR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_10(N, SP::BA);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_11(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
      SDNode *Result = Emit_11(N, SP::ADJCALLSTACKUP);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_12(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
    SDNode *Result = Emit_12(N, SP::ADJCALLSTACKDOWN);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_13(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp1), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2);
}
SDNode *Select_ISD_CTPOP_i32(const SDValue &N) {
  SDNode *Result = Emit_13(N, SP::SLLri, SP::POPCrr, MVT::i32, MVT::i32);
  return Result;
}

SDNode *Emit_14(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = Transform_HI22(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Emit_15(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getRegister(SP::G0, MVT::i32);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, Tmp1);
}
SDNode *Emit_16(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = Transform_HI22(Tmp0.getNode());
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp1), 0);
  SDValue Tmp3 = Transform_LO10(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Select_ISD_Constant_i32(const SDValue &N) {

  // Pattern: (imm:i32)<<P:Predicate_SETHIimm>><<X:HI22>>:$src
  // Emits: (SETHIi:i32 (HI22:i32 (imm:i32):$src))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_SETHIimm(N.getNode())) {
    SDNode *Result = Emit_14(N, SP::SETHIi, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32)<<P:Predicate_simm13>>:$val
  // Emits: (ORri:i32 G0:i32, (imm:i32):$val)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_simm13(N.getNode())) {
    SDNode *Result = Emit_15(N, SP::ORri, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32):$val
  // Emits: (ORri:i32 (SETHIi:i32 (HI22:i32 (imm:i32):$val)), (LO10:i32 (imm:i32):$val))
  // Pattern complexity = 3  cost = 2  size = 0
  SDNode *Result = Emit_16(N, SP::SETHIi, SP::ORri, MVT::i32, MVT::i32);
  return Result;
}

SDNode *Emit_17(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_FABS_f32(const SDValue &N) {
  SDNode *Result = Emit_17(N, SP::FABSS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FABS_f64(const SDValue &N) {

  // Pattern: (fabs:f64 DFPRegs:f64:$src)
  // Emits: (FpABSD:f64 DFPRegs:f64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget.isV9())) {
    SDNode *Result = Emit_17(N, SP::FpABSD, MVT::f64);
    return Result;
  }

  // Pattern: (fabs:f64 DFPRegs:f64:$src)
  // Emits: (FABSD:f64 DFPRegs:f64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget.isV9())) {
    SDNode *Result = Emit_17(N, SP::FABSD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FADD_f32(const SDValue &N) {
  SDNode *Result = Emit_0(N, SP::FADDS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FADD_f64(const SDValue &N) {
  SDNode *Result = Emit_0(N, SP::FADDD, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FDIV_f32(const SDValue &N) {
  SDNode *Result = Emit_0(N, SP::FDIVS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FDIV_f64(const SDValue &N) {
  SDNode *Result = Emit_0(N, SP::FDIVD, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FMUL_f32(const SDValue &N) {
  SDNode *Result = Emit_0(N, SP::FMULS, MVT::f32);
  return Result;
}

SDNode *Emit_18(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N10);
}
SDNode *Select_ISD_FMUL_f64(const SDValue &N) {

  // Pattern: (fmul:f64 (fextend:f64 FPRegs:f32:$src1), (fextend:f64 FPRegs:f32:$src2))
  // Emits: (FSMULD:f64 FPRegs:f32:$src1, FPRegs:f32:$src2)
  // Pattern complexity = 9  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FP_EXTEND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::FP_EXTEND) {
        SDNode *Result = Emit_18(N, SP::FSMULD, MVT::f64);
        return Result;
      }
    }
  }

  // Pattern: (fmul:f64 DFPRegs:f64:$src1, DFPRegs:f64:$src2)
  // Emits: (FMULD:f64 DFPRegs:f64:$src1, DFPRegs:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SP::FMULD, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FNEG_f32(const SDValue &N) {
  SDNode *Result = Emit_17(N, SP::FNEGS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FNEG_f64(const SDValue &N) {

  // Pattern: (fneg:f64 DFPRegs:f64:$src)
  // Emits: (FpNEGD:f64 DFPRegs:f64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget.isV9())) {
    SDNode *Result = Emit_17(N, SP::FpNEGD, MVT::f64);
    return Result;
  }

  // Pattern: (fneg:f64 DFPRegs:f64:$src)
  // Emits: (FNEGD:f64 DFPRegs:f64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget.isV9())) {
    SDNode *Result = Emit_17(N, SP::FNEGD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FP_EXTEND_f64(const SDValue &N) {
  SDNode *Result = Emit_17(N, SP::FSTOD, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FP_ROUND_f32(const SDValue &N) {
  SDNode *Result = Emit_17(N, SP::FDTOS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FSQRT_f32(const SDValue &N) {
  SDNode *Result = Emit_17(N, SP::FSQRTS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FSQRT_f64(const SDValue &N) {
  SDNode *Result = Emit_17(N, SP::FSQRTD, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FSUB_f32(const SDValue &N) {
  SDNode *Result = Emit_0(N, SP::FSUBS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FSUB_f64(const SDValue &N) {
  SDNode *Result = Emit_0(N, SP::FSUBD, MVT::f64);
  return Result;
}

SDNode *Emit_19(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN_0, SDValue &CPTmpN_1) DISABLE_INLINE {
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, CPTmpN_0, CPTmpN_1);
}
SDNode *Select_ISD_FrameIndex_i32(const SDValue &N) {
  SDValue CPTmpN_0;
  SDValue CPTmpN_1;
  if (SelectADDRri(N, N, CPTmpN_0, CPTmpN_1)) {
    SDNode *Result = Emit_19(N, SP::LEA_ADDri, MVT::i32, CPTmpN_0, CPTmpN_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_20(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_LOAD_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {
    if (Predicate_sextload(N.getNode())) {
      if (Predicate_sextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
        // Emits: (LDSBrr:i32 ADDRrr:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDSBrr, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
        // Emits: (LDSBri:i32 ADDRri:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDSBri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (Predicate_sextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
        // Emits: (LDSHrr:i32 ADDRrr:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDSHrr, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
        // Emits: (LDSHri:i32 ADDRri:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDSHri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
    }
    if (Predicate_zextload(N.getNode())) {
      if (Predicate_zextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
        // Emits: (LDUBrr:i32 ADDRrr:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDUBrr, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
        // Emits: (LDUBri:i32 ADDRri:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDUBri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (Predicate_zextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
        // Emits: (LDUHrr:i32 ADDRrr:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDUHrr, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
        // Emits: (LDUHri:i32 ADDRri:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDUHri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
    }
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;

      // Pattern: (ld:i32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LDrr:i32 ADDRrr:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_20(N, SP::LDrr, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }

      // Pattern: (ld:i32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LDri:i32 ADDRri:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_20(N, SP::LDri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
    if (Predicate_extload(N.getNode())) {
      if (Predicate_extloadi1(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>>
        // Emits: (LDUBrr:i32 ADDRrr:i32:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDUBrr, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 ADDRri:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>>
        // Emits: (LDUBri:i32 ADDRri:i32:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDUBri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
        // Emits: (LDUBrr:i32 ADDRrr:i32:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDUBrr, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 ADDRri:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
        // Emits: (LDUBri:i32 ADDRri:i32:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDUBri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
        // Emits: (LDUHrr:i32 ADDRrr:i32:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDUHrr, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 ADDRri:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
        // Emits: (LDUHri:i32 ADDRri:i32:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_20(N, SP::LDUHri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
    }
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi1(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;

      // Pattern: (ld:i32 ADDRrr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>>
      // Emits: (LDUBrr:i32 ADDRrr:i32:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_20(N, SP::LDUBrr, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }

      // Pattern: (ld:i32 ADDRri:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>>
      // Emits: (LDUBri:i32 ADDRri:i32:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_20(N, SP::LDUBri, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
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

    // Pattern: (ld:f32 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDFrr:f32 ADDRrr:i32:$addr)
    // Pattern complexity = 13  cost = 1  size = 0
    if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
        N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_20(N, SP::LDFrr, MVT::f32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }

    // Pattern: (ld:f32 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDFri:f32 ADDRri:i32:$addr)
    // Pattern complexity = 13  cost = 1  size = 0
    if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
        N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_20(N, SP::LDFri, MVT::f32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_f64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode()) &&
      Predicate_load(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;

    // Pattern: (ld:f64 ADDRrr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDDFrr:f64 ADDRrr:i32:$addr)
    // Pattern complexity = 13  cost = 1  size = 0
    if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1) &&
        N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_20(N, SP::LDDFrr, MVT::f64, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }

    // Pattern: (ld:f64 ADDRri:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDDFri:f64 ADDRri:i32:$addr)
    // Pattern complexity = 13  cost = 1  size = 0
    if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1) &&
        N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_20(N, SP::LDDFri, MVT::f64, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_MUL_i32(const SDValue &N) {

  // Pattern: (mul:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
  // Emits: (SMULri:i32 IntRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_1(N, SP::SMULri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (mul:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (SMULrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SP::SMULrr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_OR_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (or:i32 IntRegs:i32:$b, (xor:i32 IntRegs:i32:$c, (imm:i32)<<P:Predicate_immAllOnes>>))
    // Emits: (ORNrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_8(N, SP::ORNrr, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (or:i32 (xor:i32 IntRegs:i32:$c, (imm:i32)<<P:Predicate_immAllOnes>>), IntRegs:i32:$b)
    // Emits: (ORNrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_9(N, SP::ORNrr, MVT::i32);
        return Result;
      }
    }

    // Pattern: (or:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
    // Emits: (ORri:i32 IntRegs:i32:$b, (imm:i32):$c)
    // Pattern complexity = 7  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_1(N, SP::ORri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (or:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (ORrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SP::ORrr, MVT::i32);
  return Result;
}

SDNode *Emit_21(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Chain);
}
SDNode *Select_ISD_RET(const SDValue &N) {
  SDNode *Result = Emit_21(N, SP::RETL);
  return Result;
}

SDNode *Select_ISD_SHL_i32(const SDValue &N) {

  // Pattern: (shl:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
  // Emits: (SLLri:i32 IntRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_1(N, SP::SLLri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (shl:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (SLLrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SP::SLLrr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SRA_i32(const SDValue &N) {

  // Pattern: (sra:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
  // Emits: (SRAri:i32 IntRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_1(N, SP::SRAri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (sra:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (SRArr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SP::SRArr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SRL_i32(const SDValue &N) {

  // Pattern: (srl:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
  // Emits: (SRLri:i32 IntRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_1(N, SP::SRLri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (srl:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (SRLrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SP::SRLrr, MVT::i32);
  return Result;
}

SDNode *Emit_22(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN2_0, CPTmpN2_1, N1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_STORE(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedstore(N.getNode())) {
    if (Predicate_truncstore(N.getNode())) {
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;

        // Pattern: (st:isVoid IntRegs:i32:$src, ADDRrr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
        // Emits: (STBrr:isVoid ADDRrr:i32:$addr, IntRegs:i32:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRrr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_22(N, SP::STBrr, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid IntRegs:i32:$src, ADDRri:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
        // Emits: (STBri:isVoid ADDRri:i32:$addr, IntRegs:i32:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRri(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_22(N, SP::STBri, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;

        // Pattern: (st:isVoid IntRegs:i32:$src, ADDRrr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
        // Emits: (STHrr:isVoid ADDRrr:i32:$addr, IntRegs:i32:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRrr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_22(N, SP::STHrr, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid IntRegs:i32:$src, ADDRri:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
        // Emits: (STHri:isVoid ADDRri:i32:$addr, IntRegs:i32:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRri(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_22(N, SP::STHri, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;

      // Pattern: (st:isVoid IntRegs:i32:$src, ADDRrr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STrr:isVoid ADDRrr:i32:$addr, IntRegs:i32:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectADDRrr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
          N1.getNode()->getValueType(0) == MVT::i32 &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_22(N, SP::STrr, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }

      // Pattern: (st:isVoid IntRegs:i32:$src, ADDRri:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STri:isVoid ADDRri:i32:$addr, IntRegs:i32:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectADDRri(N, N2, CPTmpN2_0, CPTmpN2_1) &&
          N1.getNode()->getValueType(0) == MVT::i32 &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_22(N, SP::STri, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }

      // Pattern: (st:isVoid FPRegs:f32:$src, ADDRrr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STFrr:isVoid ADDRrr:i32:$addr, FPRegs:f32:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectADDRrr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
          N1.getNode()->getValueType(0) == MVT::f32 &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_22(N, SP::STFrr, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }

      // Pattern: (st:isVoid FPRegs:f32:$src, ADDRri:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STFri:isVoid ADDRri:i32:$addr, FPRegs:f32:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectADDRri(N, N2, CPTmpN2_0, CPTmpN2_1) &&
          N1.getNode()->getValueType(0) == MVT::f32 &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_22(N, SP::STFri, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }

      // Pattern: (st:isVoid DFPRegs:f64:$src, ADDRrr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STDFrr:isVoid ADDRrr:i32:$addr, DFPRegs:f64:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectADDRrr(N, N2, CPTmpN2_0, CPTmpN2_1) &&
          N1.getNode()->getValueType(0) == MVT::f64 &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_22(N, SP::STDFrr, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }

      // Pattern: (st:isVoid DFPRegs:f64:$src, ADDRri:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STDFri:isVoid ADDRri:i32:$addr, DFPRegs:f64:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectADDRri(N, N2, CPTmpN2_0, CPTmpN2_1) &&
          N1.getNode()->getValueType(0) == MVT::f64 &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_22(N, SP::STDFri, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SUB_i32(const SDValue &N) {

  // Pattern: (sub:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
  // Emits: (SUBri:i32 IntRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_1(N, SP::SUBri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (sub:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (SUBrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SP::SUBrr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SUBC_i32(const SDValue &N) {

  // Pattern: (subc:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$val)
  // Emits: (SUBCCri:i32 IntRegs:i32:$b, (imm:i32):$val)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_5(N, SP::SUBCCri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (subc:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (SUBCCrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_4(N, SP::SUBCCrr, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SUBE_i32(const SDValue &N) {

  // Pattern: (sube:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
  // Emits: (SUBXri:i32 IntRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_7(N, SP::SUBXri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (sube:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (SUBXrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_6(N, SP::SUBXrr, MVT::i32);
  return Result;
}

SDNode *Emit_23(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N01);
}
SDNode *Emit_24(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N1);
}
SDNode *Emit_25(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, N0);
}
SDNode *Select_ISD_XOR_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);

      // Pattern: (xor:i32 (xor:i32 IntRegs:i32:$b, IntRegs:i32:$c), (imm:i32)<<P:Predicate_immAllOnes>>)
      // Emits: (XNORrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
      // Pattern complexity = 10  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N1.getNode())) {
          SDNode *Result = Emit_23(N, SP::XNORrr, MVT::i32);
          return Result;
        }
      }

      // Pattern: (xor:i32 (xor:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_immAllOnes>>), IntRegs:i32:$c)
      // Emits: (XNORrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_24(N, SP::XNORrr, MVT::i32);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);

    // Pattern: (xor:i32 IntRegs:i32:$c, (xor:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_immAllOnes>>))
    // Emits: (XNORrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N1.getOpcode() == ISD::XOR) {
      SDValue N10 = N1.getOperand(0);
      SDValue N11 = N1.getOperand(1);
      if (N11.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N11.getNode())) {
        SDNode *Result = Emit_25(N, SP::XNORrr, MVT::i32);
        return Result;
      }
    }

    // Pattern: (xor:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
    // Emits: (XORri:i32 IntRegs:i32:$b, (imm:i32):$c)
    // Pattern complexity = 7  cost = 1  size = 0
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_1(N, SP::XORri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (xor:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (XORrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_0(N, SP::XORrr, MVT::i32);
  return Result;
}

SDNode *Emit_26(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  SDValue InFlag = N.getOperand(3);
  SDValue Ops0[] = { N1, Tmp1, Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Select_SPISD_BRFCC(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_26(N, SP::FBCOND);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SPISD_BRICC(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_26(N, SP::BCOND);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_27(const SDValue &N, unsigned Opc0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, Chain, InFlag };
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
SDNode *Emit_28(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { N1, Chain, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, HasInFlag ? 3 : 2);
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
SDNode *Select_SPISD_CALL(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  {
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;

    // Pattern: (call:isVoid ADDRrr:i32:$ptr)
    // Emits: (JMPLrr:isVoid ADDRrr:i32:$ptr)
    // Pattern complexity = 12  cost = 1  size = 0
    if (SelectADDRrr(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_27(N, SP::JMPLrr, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }

    // Pattern: (call:isVoid ADDRri:i32:$ptr)
    // Emits: (JMPLri:isVoid ADDRri:i32:$ptr)
    // Pattern complexity = 12  cost = 1  size = 0
    if (SelectADDRri(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_27(N, SP::JMPLri, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (call:isVoid (tglobaladdr:i32):$dst)
  // Emits: (CALL:isVoid (tglobaladdr:i32):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_28(N, SP::CALL);
    return Result;
  }

  // Pattern: (call:isVoid (texternalsym:i32):$dst)
  // Emits: (CALL:isVoid (texternalsym:i32):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol) {
    SDNode *Result = Emit_28(N, SP::CALL);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_29(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Select_SPISD_CMPFCC(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (SPcmpfcc:isVoid FPRegs:f32:$src1, FPRegs:f32:$src2)
  // Emits: (FCMPS:isVoid FPRegs:f32:$src1, FPRegs:f32:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::f32) {
    SDNode *Result = Emit_29(N, SP::FCMPS);
    return Result;
  }

  // Pattern: (SPcmpfcc:isVoid DFPRegs:f64:$src1, DFPRegs:f64:$src2)
  // Emits: (FCMPD:isVoid DFPRegs:f64:$src1, DFPRegs:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_29(N, SP::FCMPD);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SPISD_CMPICC_i32(const SDValue &N) {

  // Pattern: (SPcmpicc:i32 IntRegs:i32:$b, (imm:i32)<<P:Predicate_simm13>>:$c)
  // Emits: (SUBCCri:i32 IntRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_simm13(N1.getNode())) {
      SDNode *Result = Emit_5(N, SP::SUBCCri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (SPcmpicc:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Emits: (SUBCCrr:i32 IntRegs:i32:$b, IntRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_4(N, SP::SUBCCrr, MVT::i32);
  return Result;
}

SDNode *Select_SPISD_FTOI_f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (SPftoi:f32 FPRegs:f32:$src)
  // Emits: (FSTOI:f32 FPRegs:f32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::f32) {
    SDNode *Result = Emit_17(N, SP::FSTOI, MVT::f32);
    return Result;
  }

  // Pattern: (SPftoi:f32 DFPRegs:f64:$src)
  // Emits: (FDTOI:f32 DFPRegs:f64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_17(N, SP::FDTOI, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SPISD_Hi_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (SPhi:i32 (tglobaladdr:i32):$in)
  // Emits: (SETHIi:i32 (tglobaladdr:i32):$in)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_17(N, SP::SETHIi, MVT::i32);
    return Result;
  }

  // Pattern: (SPhi:i32 (tconstpool:i32):$in)
  // Emits: (SETHIi:i32 (tconstpool:i32):$in)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetConstantPool) {
    SDNode *Result = Emit_17(N, SP::SETHIi, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SPISD_ITOF_f32(const SDValue &N) {
  SDNode *Result = Emit_17(N, SP::FITOS, MVT::f32);
  return Result;
}

SDNode *Select_SPISD_ITOF_f64(const SDValue &N) {
  SDNode *Result = Emit_17(N, SP::FITOD, MVT::f64);
  return Result;
}

SDNode *Emit_30(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp0 = CurDAG->getRegister(SP::G0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, N0);
}
SDNode *Select_SPISD_Lo_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (SPlo:i32 (tglobaladdr:i32):$in)
  // Emits: (ORri:i32 G0:i32, (tglobaladdr:i32):$in)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_30(N, SP::ORri, MVT::i32);
    return Result;
  }

  // Pattern: (SPlo:i32 (tconstpool:i32):$in)
  // Emits: (ORri:i32 G0:i32, (tconstpool:i32):$in)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetConstantPool) {
    SDNode *Result = Emit_30(N, SP::ORri, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_31(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 2 : 1);
}
SDNode *Select_SPISD_RET_FLAG(const SDValue &N) {
  SDNode *Result = Emit_31(N, SP::RETL);
  return Result;
}

SDNode *Emit_32(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  SDValue InFlag = N.getOperand(3);
  SDValue Ops0[] = { N0, N1, Tmp2, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_33(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  SDValue InFlag = N.getOperand(3);
  SDValue Ops0[] = { N1, N0, Tmp2, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_34(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  SDValue InFlag = N.getOperand(3);
  SDValue Ops0[] = { N1, Tmp1, Tmp2, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_SPISD_SELECT_FCC_i32(const SDValue &N) {
  if ((Subtarget.isV9())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (SPselectfcc:i32 (imm:i32)<<P:Predicate_simm11>>:$F, IntRegs:i32:$T, (imm:i32):$cc)
    // Emits: (MOVFCCri:i32 IntRegs:i32:$T, (imm:i32):$F, (imm:i32):$cc)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::Constant &&
        Predicate_simm11(N0.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_34(N, SP::MOVFCCri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (SPselectfcc:i32 IntRegs:i32:$F, IntRegs:i32:$T, (imm:i32):$cc)
    // Emits: (MOVFCCrr:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$cc)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_33(N, SP::MOVFCCrr, MVT::i32);
      return Result;
    }
  }

  // Pattern: (SPselectfcc:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$Cond)
  // Emits: (SELECT_CC_Int_FCC:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$Cond)
  // Pattern complexity = 6  cost = 11  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_32(N, SP::SELECT_CC_Int_FCC, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SPISD_SELECT_FCC_f32(const SDValue &N) {

  // Pattern: (SPselectfcc:f32 FPRegs:f32:$F, FPRegs:f32:$T, (imm:i32):$cc)
  // Emits: (FMOVS_FCC:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$cc)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((Subtarget.isV9())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_33(N, SP::FMOVS_FCC, MVT::f32);
      return Result;
    }
  }

  // Pattern: (SPselectfcc:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$Cond)
  // Emits: (SELECT_CC_FP_FCC:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$Cond)
  // Pattern complexity = 6  cost = 11  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_32(N, SP::SELECT_CC_FP_FCC, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SPISD_SELECT_FCC_f64(const SDValue &N) {

  // Pattern: (SPselectfcc:f64 DFPRegs:f64:$F, DFPRegs:f64:$T, (imm:i32):$cc)
  // Emits: (FMOVD_FCC:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$cc)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((Subtarget.isV9())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_33(N, SP::FMOVD_FCC, MVT::f64);
      return Result;
    }
  }

  // Pattern: (SPselectfcc:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$Cond)
  // Emits: (SELECT_CC_DFP_FCC:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$Cond)
  // Pattern complexity = 6  cost = 11  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_32(N, SP::SELECT_CC_DFP_FCC, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SPISD_SELECT_ICC_i32(const SDValue &N) {
  if ((Subtarget.isV9())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (SPselecticc:i32 (imm:i32)<<P:Predicate_simm11>>:$F, IntRegs:i32:$T, (imm:i32):$cc)
    // Emits: (MOVICCri:i32 IntRegs:i32:$T, (imm:i32):$F, (imm:i32):$cc)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::Constant &&
        Predicate_simm11(N0.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_34(N, SP::MOVICCri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (SPselecticc:i32 IntRegs:i32:$F, IntRegs:i32:$T, (imm:i32):$cc)
    // Emits: (MOVICCrr:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$cc)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_33(N, SP::MOVICCrr, MVT::i32);
      return Result;
    }
  }

  // Pattern: (SPselecticc:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$Cond)
  // Emits: (SELECT_CC_Int_ICC:i32 IntRegs:i32:$T, IntRegs:i32:$F, (imm:i32):$Cond)
  // Pattern complexity = 6  cost = 11  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_32(N, SP::SELECT_CC_Int_ICC, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SPISD_SELECT_ICC_f32(const SDValue &N) {

  // Pattern: (SPselecticc:f32 FPRegs:f32:$F, FPRegs:f32:$T, (imm:i32):$cc)
  // Emits: (FMOVS_ICC:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$cc)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((Subtarget.isV9())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_33(N, SP::FMOVS_ICC, MVT::f32);
      return Result;
    }
  }

  // Pattern: (SPselecticc:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$Cond)
  // Emits: (SELECT_CC_FP_ICC:f32 FPRegs:f32:$T, FPRegs:f32:$F, (imm:i32):$Cond)
  // Pattern complexity = 6  cost = 11  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_32(N, SP::SELECT_CC_FP_ICC, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_SPISD_SELECT_ICC_f64(const SDValue &N) {

  // Pattern: (SPselecticc:f64 DFPRegs:f64:$F, DFPRegs:f64:$T, (imm:i32):$cc)
  // Emits: (FMOVD_ICC:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$cc)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((Subtarget.isV9())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_33(N, SP::FMOVD_ICC, MVT::f64);
      return Result;
    }
  }

  // Pattern: (SPselecticc:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$Cond)
  // Emits: (SELECT_CC_DFP_ICC:f64 DFPRegs:f64:$T, DFPRegs:f64:$F, (imm:i32):$Cond)
  // Pattern complexity = 6  cost = 11  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_32(N, SP::SELECT_CC_DFP_ICC, MVT::f64);
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
  case ISD::ADDE: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ADDE_i32(N);
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
  case ISD::BR: {
    switch (NVT) {
    default:
      return Select_ISD_BR(N);
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
  case ISD::CTPOP: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_CTPOP_i32(N);
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
  case ISD::FP_EXTEND: {
    switch (NVT) {
    case MVT::f64:
      return Select_ISD_FP_EXTEND_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FP_ROUND: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FP_ROUND_f32(N);
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
  case ISD::MUL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_MUL_i32(N);
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
  case ISD::RET: {
    switch (NVT) {
    default:
      return Select_ISD_RET(N);
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
  case ISD::SUBE: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SUBE_i32(N);
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
  case SPISD::BRFCC: {
    switch (NVT) {
    default:
      return Select_SPISD_BRFCC(N);
      break;
    }
    break;
  }
  case SPISD::BRICC: {
    switch (NVT) {
    default:
      return Select_SPISD_BRICC(N);
      break;
    }
    break;
  }
  case SPISD::CALL: {
    switch (NVT) {
    default:
      return Select_SPISD_CALL(N);
      break;
    }
    break;
  }
  case SPISD::CMPFCC: {
    switch (NVT) {
    default:
      return Select_SPISD_CMPFCC(N);
      break;
    }
    break;
  }
  case SPISD::CMPICC: {
    switch (NVT) {
    case MVT::i32:
      return Select_SPISD_CMPICC_i32(N);
    default:
      break;
    }
    break;
  }
  case SPISD::FTOI: {
    switch (NVT) {
    case MVT::f32:
      return Select_SPISD_FTOI_f32(N);
    default:
      break;
    }
    break;
  }
  case SPISD::Hi: {
    switch (NVT) {
    case MVT::i32:
      return Select_SPISD_Hi_i32(N);
    default:
      break;
    }
    break;
  }
  case SPISD::ITOF: {
    switch (NVT) {
    case MVT::f32:
      return Select_SPISD_ITOF_f32(N);
    case MVT::f64:
      return Select_SPISD_ITOF_f64(N);
    default:
      break;
    }
    break;
  }
  case SPISD::Lo: {
    switch (NVT) {
    case MVT::i32:
      return Select_SPISD_Lo_i32(N);
    default:
      break;
    }
    break;
  }
  case SPISD::RET_FLAG: {
    switch (NVT) {
    default:
      return Select_SPISD_RET_FLAG(N);
      break;
    }
    break;
  }
  case SPISD::SELECT_FCC: {
    switch (NVT) {
    case MVT::i32:
      return Select_SPISD_SELECT_FCC_i32(N);
    case MVT::f32:
      return Select_SPISD_SELECT_FCC_f32(N);
    case MVT::f64:
      return Select_SPISD_SELECT_FCC_f64(N);
    default:
      break;
    }
    break;
  }
  case SPISD::SELECT_ICC: {
    switch (NVT) {
    case MVT::i32:
      return Select_SPISD_SELECT_ICC_i32(N);
    case MVT::f32:
      return Select_SPISD_SELECT_ICC_f32(N);
    case MVT::f64:
      return Select_SPISD_SELECT_ICC_f64(N);
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

