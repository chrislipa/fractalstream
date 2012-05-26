//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the ARM target
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
inline SDValue Transform_imm_comp_XFORM(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return CurDAG->getTargetConstant(~((uint32_t)N->getZExtValue()), MVT::i32);

}
inline SDValue Transform_imm_neg_XFORM(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return CurDAG->getTargetConstant(-(int)N->getZExtValue(), MVT::i32);

}
inline SDValue Transform_so_imm2part_1(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  unsigned V = ARM_AM::getSOImmTwoPartFirst((unsigned)N->getZExtValue());
  return CurDAG->getTargetConstant(ARM_AM::getSOImmVal(V), MVT::i32);

}
inline SDValue Transform_so_imm2part_2(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  unsigned V = ARM_AM::getSOImmTwoPartSecond((unsigned)N->getZExtValue());
  return CurDAG->getTargetConstant(ARM_AM::getSOImmVal(V), MVT::i32);

}
inline SDValue Transform_so_imm_XFORM(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return CurDAG->getTargetConstant(ARM_AM::getSOImmVal(N->getZExtValue()),
                                   MVT::i32);

}
inline SDValue Transform_so_imm_neg_XFORM(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return CurDAG->getTargetConstant(ARM_AM::getSOImmVal(-(int)N->getZExtValue()),
                                   MVT::i32);

}
inline SDValue Transform_so_imm_not_XFORM(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return CurDAG->getTargetConstant(ARM_AM::getSOImmVal(~(int)N->getZExtValue()),
                                   MVT::i32);

}
inline SDValue Transform_thumb_immshifted_shamt(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  unsigned V = ARM_AM::getThumbImmValShift((unsigned)N->getZExtValue());
  return CurDAG->getTargetConstant(V, MVT::i32);

}
inline SDValue Transform_thumb_immshifted_val(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  unsigned V = ARM_AM::getThumbImmNonShiftedVal((unsigned)N->getZExtValue());
  return CurDAG->getTargetConstant(V, MVT::i32);

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
inline bool Predicate_imm0_255(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (uint32_t)N->getZExtValue() < 256;

}
inline bool Predicate_imm0_255_comp(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return ~((uint32_t)N->getZExtValue()) < 256;

}
inline bool Predicate_imm0_7(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (uint32_t)N->getZExtValue() < 8;

}
inline bool Predicate_imm0_7_neg(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (uint32_t)-N->getZExtValue() < 8;

}
inline bool Predicate_imm16_31(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (int32_t)N->getZExtValue() >= 16 && (int32_t)N->getZExtValue() < 32;

}
inline bool Predicate_imm1_15(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (int32_t)N->getZExtValue() >= 1 && (int32_t)N->getZExtValue() < 16;

}
inline bool Predicate_imm8_255(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (uint32_t)N->getZExtValue() >= 8 && (uint32_t)N->getZExtValue() < 256;

}
inline bool Predicate_imm8_255_neg(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  unsigned Val = -N->getZExtValue();
  return Val >= 8 && Val < 256;

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
inline bool Predicate_rot_imm(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  int32_t v = (int32_t)N->getZExtValue();
  return v == 8 || v == 16 || v == 24;

}
inline bool Predicate_sext_16_node(SDNode *N) {

  return CurDAG->ComputeNumSignBits(SDValue(N,0)) >= 17;

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
inline bool Predicate_so_imm(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 return ARM_AM::getSOImmVal(N->getZExtValue()) != -1; 
}
inline bool Predicate_so_imm2part(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

      return ARM_AM::isSOImmTwoPartVal((unsigned)N->getZExtValue());
    
}
inline bool Predicate_so_imm_neg(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

    return ARM_AM::getSOImmVal(-(int)N->getZExtValue()) != -1;
  
}
inline bool Predicate_so_imm_not(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

    return ARM_AM::getSOImmVal(~(int)N->getZExtValue()) != -1;
  
}
inline bool Predicate_store(SDNode *N) {

  return !cast<StoreSDNode>(N)->isTruncatingStore();

}
inline bool Predicate_thumb_immshifted(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return ARM_AM::isThumbImmShiftedVal((unsigned)N->getZExtValue());

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


SDNode *Emit_0(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i32);
  SDValue Ops0[] = { N1, N2, Tmp2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_1(const SDValue &N, unsigned Opc0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1, SDValue &CPTmpN11_2) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N1.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain1);
  Chain1 = CurDAG->getNode(ISD::TokenFactor, MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i32);
  SDValue LSI_N1 = CurDAG->getMemOperand(cast<MemSDNode>(N1)->getMemOperand());
  SDValue Ops0[] = { CPTmpN11_0, CPTmpN11_1, CPTmpN11_2, N2, Tmp2, LSI_N1, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 7);
  Chain1 = SDValue(ResNode, 0);
  const SDValue Froms[] = {
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    SDValue(Chain1.getNode(), Chain1.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_2(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i32);
  SDValue Ops0[] = { N10, N11, N2, Tmp3, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Select_ARMISD_BR_JT(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (ARMbrjt:isVoid (ld:i32 addrmode2:i32:$target)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (tjumptable:i32):$jt, (imm:i32):$id)
    // Emits: (BR_JTm:isVoid addrmode2:i32:$target, (tjumptable:i32):$jt, (imm:i32):$id)
    // Pattern complexity = 25  cost = 1  size = 0
    if (N1.getOpcode() == ISD::LOAD &&
        N1.hasOneUse() &&
        IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode()) &&
        (Chain.getNode() == N1.getNode() || IsChainCompatible(Chain.getNode(), N1.getNode()))) {
      SDValue Chain1 = N1.getOperand(0);
      if (Predicate_unindexedload(N1.getNode()) &&
          Predicate_load(N1.getNode())) {
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        SDValue CPTmpN11_1;
        SDValue CPTmpN11_2;
        if (SelectAddrMode2(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2)) {
          SDValue N2 = N.getOperand(2);
          if (N2.getOpcode() == ISD::TargetJumpTable) {
            SDValue N3 = N.getOperand(3);
            if (N3.getOpcode() == ISD::Constant &&
                N1.getNode()->getValueType(0) == MVT::i32 &&
                N11.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_1(N, ARM::BR_JTm, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (ARMbrjt:isVoid (add:i32 GPR:i32:$target, GPR:i32:$idx), (tjumptable:i32):$jt, (imm:i32):$id)
    // Emits: (BR_JTadd:isVoid GPR:i32:$target, GPR:i32:$idx, (tjumptable:i32):$jt, (imm:i32):$id)
    // Pattern complexity = 12  cost = 1  size = 0
    if (N1.getOpcode() == ISD::ADD) {
      SDValue N10 = N1.getOperand(0);
      SDValue N11 = N1.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::TargetJumpTable) {
        SDValue N3 = N.getOperand(3);
        if (N3.getOpcode() == ISD::Constant) {
          SDNode *Result = Emit_2(N, ARM::BR_JTadd);
          return Result;
        }
      }
    }

    // Pattern: (ARMbrjt:isVoid GPR:i32:$target, (tjumptable:i32):$jt, (imm:i32):$id)
    // Emits: (BR_JTr:isVoid GPR:i32:$target, (tjumptable:i32):$jt, (imm:i32):$id)
    // Pattern complexity = 9  cost = 1  size = 0
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::TargetJumpTable) {
      SDValue N3 = N.getOperand(3);
      if (N3.getOpcode() == ISD::Constant &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_0(N, ARM::BR_JTr);
        return Result;
      }
    }
  }

  // Pattern: (ARMbrjt:isVoid GPR:i32:$target, (tjumptable:i32):$jt, (imm:i32):$id)
  // Emits: (tBR_JTr:isVoid GPR:i32:$target, (tjumptable:i32):$jt, (imm:i32):$id)
  // Pattern complexity = 9  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::TargetJumpTable) {
      SDValue N3 = N.getOperand(3);
      if (N3.getOpcode() == ISD::Constant &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_0(N, ARM::tBR_JTr);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_3(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  Ops0.push_back(N1);
  for (unsigned i = NumInputRootOps + 1, e = N.getNumOperands()-(HasInFlag?1:0); i != e; ++i) {
    Ops0.push_back(N.getOperand(i));
  }
  Ops0.push_back(Chain);
  if (HasInFlag)
    Ops0.push_back(InFlag);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, &Ops0[0], Ops0.size());
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
SDNode *Select_ARMISD_CALL(const SDValue &N) {

  // Pattern: (ARMcall:isVoid (tglobaladdr:i32):$func)
  // Emits: (BL:isVoid (tglobaladdr:i32):$func)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::TargetGlobalAddress) {
      SDNode *Result = Emit_3(N, ARM::BL, 1);
      return Result;
    }
  }

  // Pattern: (ARMcall:isVoid (tglobaladdr:i32):$func)
  // Emits: (tBLXi:isVoid (tglobaladdr:i32):$func)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((Subtarget->hasV5TOps())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::TargetGlobalAddress) {
      SDNode *Result = Emit_3(N, ARM::tBLXi, 1);
      return Result;
    }
  }

  // Pattern: (ARMcall:isVoid (texternalsym:i32):$func)
  // Emits: (BL:isVoid (texternalsym:i32):$func)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::TargetExternalSymbol) {
      SDNode *Result = Emit_3(N, ARM::BL, 1);
      return Result;
    }
  }

  // Pattern: (ARMcall:isVoid (texternalsym:i32):$func)
  // Emits: (tBLXi:isVoid (texternalsym:i32):$func)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((Subtarget->isThumb()) && (Subtarget->hasV5TOps())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::TargetExternalSymbol) {
      SDNode *Result = Emit_3(N, ARM::tBLXi, 1);
      return Result;
    }
  }

  // Pattern: (ARMcall:isVoid GPR:i32:$func)
  // Emits: (BLX:isVoid GPR:i32:$func)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TOps())) {
    SDNode *Result = Emit_3(N, ARM::BLX, 1);
    return Result;
  }

  // Pattern: (ARMcall:isVoid GPR:i32:$dst)
  // Emits: (tBLXr:isVoid GPR:i32:$dst)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb()) && (Subtarget->hasV5TOps())) {
    SDNode *Result = Emit_3(N, ARM::tBLXr, 1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ARMISD_CALL_NOLINK(const SDValue &N) {

  // Pattern: (ARMcall_nolink:isVoid GPR:i32:$func)
  // Emits: (BX:isVoid GPR:i32:$func)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_3(N, ARM::BX, 1);
    return Result;
  }

  // Pattern: (ARMcall_nolink:isVoid GPR:i32:$func)
  // Emits: (tBX:isVoid GPR:i32:$func)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_3(N, ARM::tBX, 1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_4(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  Ops0.push_back(N1);
  Ops0.push_back(Tmp1);
  Ops0.push_back(Tmp2);
  for (unsigned i = NumInputRootOps + 1, e = N.getNumOperands()-(HasInFlag?1:0); i != e; ++i) {
    Ops0.push_back(N.getOperand(i));
  }
  Ops0.push_back(Chain);
  if (HasInFlag)
    Ops0.push_back(InFlag);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, &Ops0[0], Ops0.size());
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
SDNode *Select_ARMISD_CALL_PRED(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::TargetGlobalAddress) {
      SDNode *Result = Emit_4(N, ARM::BL_pred, 1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_5(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp2, Tmp3, Tmp4 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_6(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N1, Tmp2, Tmp3 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_7(const SDValue &N, unsigned Opc0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1, SDValue &CPTmpN1_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2, Tmp2, Tmp3 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 6);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_8(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i32);
  SDValue Tmp4 = Transform_so_imm_XFORM(Tmp3.getNode());
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp4, Tmp5, Tmp6 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_9(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N11, Tmp4, Tmp5 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_10(const SDValue &N, unsigned Opc0, SDValue &CPTmpN11_0, SDValue &CPTmpN11_1, SDValue &CPTmpN11_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2, Tmp4, Tmp5 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 6);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_11(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, N0, N11);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_12(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, N0, Tmp1);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_13(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_14(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_neg_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp2, Tmp3, Tmp4 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Select_ARMISD_CMP(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (ARMcmp:isVoid GPR:i32:$a, (sub:i32 0:i32, so_reg:i32:$b))
    // Emits: (CMNrs:isVoid GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 23  cost = 1  size = 0
    if (N1.getOpcode() == ISD::SUB) {
      SDValue N10 = N1.getOperand(0);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDValue N11 = N1.getOperand(1);
          SDValue CPTmpN11_0;
          SDValue CPTmpN11_1;
          SDValue CPTmpN11_2;
          if (SelectShifterOperandReg(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2)) {
            SDNode *Result = Emit_10(N, ARM::CMNrs, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (ARMcmp:isVoid GPR:i32:$a, so_reg:i32:$b)
    // Emits: (CMPrs:isVoid GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 15  cost = 1  size = 0
    {
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      SDValue CPTmpN1_2;
      if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
          N0.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_7(N, ARM::CMPrs, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
        return Result;
      }
    }
    if (N1.getOpcode() == ISD::SUB) {
      SDValue N10 = N1.getOperand(0);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {

          // Pattern: (ARMcmp:isVoid GPR:i32:$a, (sub:i32 0:i32, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b))
          // Emits: (CMNri:isVoid GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
          // Pattern complexity = 15  cost = 1  size = 0
          {
            SDValue N11 = N1.getOperand(1);
            if (N11.getOpcode() == ISD::Constant &&
                Predicate_so_imm(N11.getNode())) {
              SDNode *Result = Emit_8(N, ARM::CMNri);
              return Result;
            }
          }

          // Pattern: (ARMcmp:isVoid GPR:i32:$a, (sub:i32 0:i32, GPR:i32:$b))
          // Emits: (CMNrr:isVoid GPR:i32:$a, GPR:i32:$b)
          // Pattern complexity = 11  cost = 1  size = 0
          SDNode *Result = Emit_9(N, ARM::CMNrr);
          return Result;
        }
      }
    }
  }

  // Pattern: (ARMcmp:isVoid GPR:i32:$lhs, (sub:i32 0:i32, GPR:i32:$rhs))
  // Emits: (tCMN:isVoid GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 11  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::SUB) {
      SDValue N10 = N1.getOperand(0);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_11(N, ARM::tCMN);
          return Result;
        }
      }
    }
  }

  // Pattern: (ARMcmp:isVoid GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
  // Emits: (CMPri:isVoid GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
  // Pattern complexity = 7  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_so_imm(N1.getNode())) {
      SDNode *Result = Emit_5(N, ARM::CMPri);
      return Result;
    }
  }

  // Pattern: (ARMcmp:isVoid GPR:i32:$lhs, (imm:i32)<<P:Predicate_imm0_255>>:$rhs)
  // Emits: (tCMPi8:isVoid GPR:i32:$lhs, (imm:i32):$rhs)
  // Pattern complexity = 7  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_imm0_255(N1.getNode())) {
      SDNode *Result = Emit_12(N, ARM::tCMPi8);
      return Result;
    }
  }
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (ARMcmp:isVoid GPR:i32:$src, (imm:i32)<<P:Predicate_so_imm_neg>><<X:so_imm_neg_XFORM>>:$imm)
    // Emits: (CMNri:isVoid GPR:i32:$src, (so_imm_neg_XFORM:i32 (imm:i32)<<P:Predicate_so_imm_neg>>:$imm))
    // Pattern complexity = 7  cost = 1  size = 0
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_so_imm_neg(N1.getNode())) {
      SDNode *Result = Emit_14(N, ARM::CMNri);
      return Result;
    }

    // Pattern: (ARMcmp:isVoid GPR:i32:$a, GPR:i32:$b)
    // Emits: (CMPrr:isVoid GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_6(N, ARM::CMPrr);
      return Result;
    }
  }

  // Pattern: (ARMcmp:isVoid GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tCMPr:isVoid GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_13(N, ARM::tCMPr);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ARMISD_CMPFP(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (arm_cmpfp:isVoid DPR:f64:$a, DPR:f64:$b)
    // Emits: (FCMPED:isVoid DPR:f64:$a, DPR:f64:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::f64) {
      SDNode *Result = Emit_6(N, ARM::FCMPED);
      return Result;
    }

    // Pattern: (arm_cmpfp:isVoid SPR:f32:$a, SPR:f32:$b)
    // Emits: (FCMPES:isVoid SPR:f32:$a, SPR:f32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::f32) {
      SDNode *Result = Emit_6(N, ARM::FCMPES);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_15(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, N0, Tmp1, Tmp2);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Select_ARMISD_CMPFPw0(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (arm_cmpfp0:isVoid DPR:f64:$a)
    // Emits: (FCMPEZD:isVoid DPR:f64:$a)
    // Pattern complexity = 3  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::f64) {
      SDNode *Result = Emit_15(N, ARM::FCMPEZD);
      return Result;
    }

    // Pattern: (arm_cmpfp0:isVoid SPR:f32:$a)
    // Emits: (FCMPEZS:isVoid SPR:f32:$a)
    // Pattern complexity = 3  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::f32) {
      SDNode *Result = Emit_15(N, ARM::FCMPEZS);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_16(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i32);
  SDValue Tmp4 = Transform_so_imm_XFORM(Tmp3.getNode());
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, Tmp4, Tmp5, Tmp6 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_17(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N01, Tmp4, Tmp5 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_18(const SDValue &N, unsigned Opc0, SDValue &CPTmpN01_0, SDValue &CPTmpN01_1, SDValue &CPTmpN01_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2, Tmp4, Tmp5 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 6);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_19(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, N00, N01);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Emit_20(const SDValue &N, unsigned Opc0, SDValue &CPTmpN00_0, SDValue &CPTmpN00_1, SDValue &CPTmpN00_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N01, CPTmpN00_0, CPTmpN00_1, CPTmpN00_2, Tmp4, Tmp5 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Ops0, 6);
  SDValue InFlag(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Select_ARMISD_CMPNZ(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (ARMcmpNZ:isVoid (and:i32 GPR:i32:$a, so_reg:i32:$b), 0:i32)
    // Emits: (TSTrs:isVoid GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 23  cost = 1  size = 0
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      SDValue CPTmpN01_1;
      SDValue CPTmpN01_2;
      if (SelectShifterOperandReg(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
        SDValue N1 = N.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_18(N, ARM::TSTrs, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (ARMcmpNZ:isVoid (xor:i32 GPR:i32:$a, so_reg:i32:$b), 0:i32)
    // Emits: (TEQrs:isVoid GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 23  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      SDValue CPTmpN01_1;
      SDValue CPTmpN01_2;
      if (SelectShifterOperandReg(N, N01, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2)) {
        SDValue N1 = N.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_18(N, ARM::TEQrs, CPTmpN01_0, CPTmpN01_1, CPTmpN01_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (ARMcmpNZ:isVoid GPR:i32:$a, (sub:i32 0:i32, so_reg:i32:$b))
    // Emits: (CMNnzrs:isVoid GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 23  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SUB) {
        SDValue N10 = N1.getOperand(0);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDValue N11 = N1.getOperand(1);
            SDValue CPTmpN11_0;
            SDValue CPTmpN11_1;
            SDValue CPTmpN11_2;
            if (SelectShifterOperandReg(N, N11, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2)) {
              SDNode *Result = Emit_10(N, ARM::CMNnzrs, CPTmpN11_0, CPTmpN11_1, CPTmpN11_2);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (ARMcmpNZ:isVoid (and:i32 so_reg:i32:$b, GPR:i32:$a), 0:i32)
    // Emits: (TSTrs:isVoid GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 23  cost = 1  size = 0
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue CPTmpN00_0;
      SDValue CPTmpN00_1;
      SDValue CPTmpN00_2;
      if (SelectShifterOperandReg(N, N00, CPTmpN00_0, CPTmpN00_1, CPTmpN00_2)) {
        SDValue N01 = N0.getOperand(1);
        SDValue N1 = N.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_20(N, ARM::TSTrs, CPTmpN00_0, CPTmpN00_1, CPTmpN00_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (ARMcmpNZ:isVoid (xor:i32 so_reg:i32:$b, GPR:i32:$a), 0:i32)
    // Emits: (TEQrs:isVoid GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 23  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue CPTmpN00_0;
      SDValue CPTmpN00_1;
      SDValue CPTmpN00_2;
      if (SelectShifterOperandReg(N, N00, CPTmpN00_0, CPTmpN00_1, CPTmpN00_2)) {
        SDValue N01 = N0.getOperand(1);
        SDValue N1 = N.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_20(N, ARM::TEQrs, CPTmpN00_0, CPTmpN00_1, CPTmpN00_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (ARMcmpNZ:isVoid (and:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b), 0:i32)
    // Emits: (TSTri:isVoid GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
    // Pattern complexity = 15  cost = 1  size = 0
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_so_imm(N01.getNode())) {
        SDValue N1 = N.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_16(N, ARM::TSTri);
            return Result;
          }
        }
      }
    }

    // Pattern: (ARMcmpNZ:isVoid (xor:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b), 0:i32)
    // Emits: (TEQri:isVoid GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
    // Pattern complexity = 15  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_so_imm(N01.getNode())) {
        SDValue N1 = N.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_16(N, ARM::TEQri);
            return Result;
          }
        }
      }
    }
    {
      SDValue N1 = N.getOperand(1);

      // Pattern: (ARMcmpNZ:isVoid GPR:i32:$a, so_reg:i32:$b)
      // Emits: (CMPnzrs:isVoid GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N0.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_7(N, ARM::CMPnzrs, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (ARMcmpNZ:isVoid GPR:i32:$a, (sub:i32 0:i32, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b))
      // Emits: (CMNnzri:isVoid GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
      // Pattern complexity = 15  cost = 1  size = 0
      if (N1.getOpcode() == ISD::SUB) {
        SDValue N10 = N1.getOperand(0);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDValue N11 = N1.getOperand(1);
            if (N11.getOpcode() == ISD::Constant &&
                Predicate_so_imm(N11.getNode())) {
              SDNode *Result = Emit_8(N, ARM::CMNnzri);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (ARMcmpNZ:isVoid (and:i32 GPR:i32:$a, GPR:i32:$b), 0:i32)
    // Emits: (TSTrr:isVoid GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 11  cost = 1  size = 0
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_17(N, ARM::TSTrr);
          return Result;
        }
      }
    }

    // Pattern: (ARMcmpNZ:isVoid (xor:i32 GPR:i32:$a, GPR:i32:$b), 0:i32)
    // Emits: (TEQrr:isVoid GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 11  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_17(N, ARM::TEQrr);
          return Result;
        }
      }
    }

    // Pattern: (ARMcmpNZ:isVoid GPR:i32:$a, (sub:i32 0:i32, GPR:i32:$b))
    // Emits: (CMNnzrr:isVoid GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 11  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::SUB) {
      SDValue N10 = N1.getOperand(0);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_9(N, ARM::CMNnzrr);
          return Result;
        }
      }
    }
  }
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (ARMcmpNZ:isVoid (and:i32 GPR:i32:$lhs, GPR:i32:$rhs), 0:i32)
    // Emits: (tTST:isVoid GPR:i32:$lhs, GPR:i32:$rhs)
    // Pattern complexity = 11  cost = 1  size = 0
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_19(N, ARM::tTST);
          return Result;
        }
      }
    }

    // Pattern: (ARMcmpNZ:isVoid GPR:i32:$lhs, (sub:i32 0:i32, GPR:i32:$rhs))
    // Emits: (tCMNNZ:isVoid GPR:i32:$lhs, GPR:i32:$rhs)
    // Pattern complexity = 11  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::SUB) {
      SDValue N10 = N1.getOperand(0);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_11(N, ARM::tCMNNZ);
          return Result;
        }
      }
    }
  }

  // Pattern: (ARMcmpNZ:isVoid GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
  // Emits: (CMPnzri:isVoid GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
  // Pattern complexity = 7  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_so_imm(N1.getNode())) {
      SDNode *Result = Emit_5(N, ARM::CMPnzri);
      return Result;
    }
  }

  // Pattern: (ARMcmpNZ:isVoid GPR:i32:$lhs, (imm:i32)<<P:Predicate_imm0_255>>:$rhs)
  // Emits: (tCMPNZi8:isVoid GPR:i32:$lhs, (imm:i32):$rhs)
  // Pattern complexity = 7  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_imm0_255(N1.getNode())) {
      SDNode *Result = Emit_12(N, ARM::tCMPNZi8);
      return Result;
    }
  }
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (ARMcmpNZ:isVoid GPR:i32:$src, (imm:i32)<<P:Predicate_so_imm_neg>><<X:so_imm_neg_XFORM>>:$imm)
    // Emits: (CMNri:isVoid GPR:i32:$src, (so_imm_neg_XFORM:i32 (imm:i32)<<P:Predicate_so_imm_neg>>:$imm))
    // Pattern complexity = 7  cost = 1  size = 0
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_so_imm_neg(N1.getNode())) {
      SDNode *Result = Emit_14(N, ARM::CMNri);
      return Result;
    }

    // Pattern: (ARMcmpNZ:isVoid GPR:i32:$a, GPR:i32:$b)
    // Emits: (CMPnzrr:isVoid GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_6(N, ARM::CMPnzrr);
      return Result;
    }
  }

  // Pattern: (ARMcmpNZ:isVoid GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tCMPNZr:isVoid GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_13(N, ARM::tCMPNZr);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_21(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N1, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_ARMISD_FMDRR_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_21(N, ARM::FMDRR, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_22(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp1 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag = N.getOperand(0);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Tmp0, Tmp1, InFlag);
  InFlag = SDValue(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Select_ARMISD_FMSTAT(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_22(N, ARM::FMSTAT);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_23(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1, Tmp2);
}
SDNode *Select_ARMISD_FTOSI_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (arm_ftosi:f32 DPR:f64:$a)
    // Emits: (FTOSIZD:f32 DPR:f64:$a)
    // Pattern complexity = 3  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::f64) {
      SDNode *Result = Emit_23(N, ARM::FTOSIZD, MVT::f32);
      return Result;
    }

    // Pattern: (arm_ftosi:f32 SPR:f32:$a)
    // Emits: (FTOSIZS:f32 SPR:f32:$a)
    // Pattern complexity = 3  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::f32) {
      SDNode *Result = Emit_23(N, ARM::FTOSIZS, MVT::f32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ARMISD_FTOUI_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (arm_ftoui:f32 DPR:f64:$a)
    // Emits: (FTOUIZD:f32 DPR:f64:$a)
    // Pattern complexity = 3  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::f64) {
      SDNode *Result = Emit_23(N, ARM::FTOUIZD, MVT::f32);
      return Result;
    }

    // Pattern: (arm_ftoui:f32 SPR:f32:$a)
    // Emits: (FTOUIZS:f32 SPR:f32:$a)
    // Pattern complexity = 3  cost = 1  size = 0
    if (N0.getNode()->getValueType(0) == MVT::f32) {
      SDNode *Result = Emit_23(N, ARM::FTOUIZS, MVT::f32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_24(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp1, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_25(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Select_ARMISD_PIC_ADD_i32(const SDValue &N) {

  // Pattern: (ARMpic_add:i32 GPR:i32:$a, (imm:i32):$cp)
  // Emits: (PICADD:i32 GPR:i32:$a, (imm:i32):$cp)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_24(N, ARM::PICADD, MVT::i32);
      return Result;
    }
  }

  // Pattern: (ARMpic_add:i32 GPR:i32:$lhs, (imm:i32):$cp)
  // Emits: (tPICADD:i32 GPR:i32:$lhs, (imm:i32):$cp)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_25(N, ARM::tPICADD, MVT::i32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_26(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue Tmp0 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp1 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Tmp0, Tmp1, Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 4 : 3);
}
SDNode *Emit_27(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 2 : 1);
}
SDNode *Select_ARMISD_RET_FLAG(const SDValue &N) {

  // Pattern: (ARMretflag:isVoid)
  // Emits: (BX_RET:isVoid)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_26(N, ARM::BX_RET);
    return Result;
  }

  // Pattern: (ARMretflag:isVoid)
  // Emits: (tBX_RET:isVoid)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_27(N, ARM::tBX_RET);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_28(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag = N.getOperand(1);
  SDValue Ops0[] = { N0, Tmp1, Tmp2, Tmp3, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Select_ARMISD_RRX_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_28(N, ARM::MOVrx, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ARMISD_SITOF_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_23(N, ARM::FSITOS, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ARMISD_SITOF_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_23(N, ARM::FSITOD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_29(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, Tmp1, Tmp2);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ARMISD_SRA_FLAG_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_29(N, ARM::MOVsra_flag, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ARMISD_SRL_FLAG_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_29(N, ARM::MOVsrl_flag, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_30(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i32);
}
SDNode *Select_ARMISD_THREAD_POINTER_i32(const SDValue &N) {

  // Pattern: (ARMthread_pointer:i32)
  // Emits: (TPsoft:isVoid)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_30(N, ARM::TPsoft);
    return Result;
  }

  // Pattern: (ARMthread_pointer:i32)
  // Emits: (tTPsoft:isVoid)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_30(N, ARM::tTPsoft);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ARMISD_UITOF_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_23(N, ARM::FUITOS, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ARMISD_UITOF_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_23(N, ARM::FUITOD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_31(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ARMISD_Wrapper_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (ARMWrapper:i32 (tglobaladdr:i32):$dst)
    // Emits: (LEApcrel:i32 (tglobaladdr:i32):$dst)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::TargetGlobalAddress) {
      SDNode *Result = Emit_23(N, ARM::LEApcrel, MVT::i32);
      return Result;
    }

    // Pattern: (ARMWrapper:i32 (tconstpool:i32):$dst)
    // Emits: (LEApcrel:i32 (tconstpool:i32):$dst)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::TargetConstantPool) {
      SDNode *Result = Emit_23(N, ARM::LEApcrel, MVT::i32);
      return Result;
    }
  }
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (ARMWrapper:i32 (tglobaladdr:i32):$dst)
    // Emits: (tLEApcrel:i32 (tglobaladdr:i32):$dst)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::TargetGlobalAddress) {
      SDNode *Result = Emit_31(N, ARM::tLEApcrel, MVT::i32);
      return Result;
    }

    // Pattern: (ARMWrapper:i32 (tconstpool:i32):$dst)
    // Emits: (tLEApcrel:i32 (tconstpool:i32):$dst)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::TargetConstantPool) {
      SDNode *Result = Emit_31(N, ARM::tLEApcrel, MVT::i32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ARMISD_WrapperJT_i32(const SDValue &N) {

  // Pattern: (ARMWrapperJT:i32 (tjumptable:i32):$dst, (imm:i32):$id)
  // Emits: (LEApcrelJT:i32 (tjumptable:i32):$dst, (imm:i32):$id)
  // Pattern complexity = 9  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::TargetJumpTable) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_24(N, ARM::LEApcrelJT, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (ARMWrapperJT:i32 (tjumptable:i32):$dst, (imm:i32):$id)
  // Emits: (tLEApcrelJT:i32 (tjumptable:i32):$dst, (imm:i32):$id)
  // Pattern complexity = 9  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::TargetJumpTable) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_25(N, ARM::tLEApcrelJT, MVT::i32);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ARMISD_tCALL(const SDValue &N) {
  if ((Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (ARMtcall:isVoid (tglobaladdr:i32):$func)
    // Emits: (tBL:isVoid (tglobaladdr:i32):$func)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getOpcode() == ISD::TargetGlobalAddress) {
      SDNode *Result = Emit_3(N, ARM::tBL, 1);
      return Result;
    }

    // Pattern: (ARMtcall:isVoid (texternalsym:i32):$func)
    // Emits: (tBL:isVoid (texternalsym:i32):$func)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getOpcode() == ISD::TargetExternalSymbol) {
      SDNode *Result = Emit_3(N, ARM::tBL, 1);
      return Result;
    }
  }

  // Pattern: (ARMtcall:isVoid GPR:i32:$func)
  // Emits: (tBLXr:isVoid GPR:i32:$func)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->hasV5TOps())) {
    SDNode *Result = Emit_3(N, ARM::tBLXr, 1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_32(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N10, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_33(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N101)->getZExtValue()), MVT::i32);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N100, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_34(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N10, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_35(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N101)->getZExtValue()), MVT::i32);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N100, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_36(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp2, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_37(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N1, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_38(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1, SDValue &CPTmpN1_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 7);
}
SDNode *Emit_39(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N01, N1, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 6);
}
SDNode *Emit_40(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N01, N1, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_41(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N110, N0, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_42(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N110, N0, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_43(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp7 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp8 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N110, N0, Tmp7, Tmp8 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_44(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N1010 = N101.getOperand(0);
  SDValue N1011 = N101.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N1010, N0, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_45(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N1010 = N101.getOperand(0);
  SDValue N1011 = N101.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp7 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp8 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N1010, N0, Tmp7, Tmp8 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_46(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_47(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_imm_neg_XFORM(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_48(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_neg_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp2, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_49(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N1000 = N100.getOperand(0);
  SDValue N1001 = N100.getOperand(1);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N1100 = N110.getOperand(0);
  SDValue N1101 = N110.getOperand(1);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp11 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp12 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1000, N1100, N0, Tmp11, Tmp12 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_50(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N11, N0, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_51(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N1000 = N100.getOperand(0);
  SDValue N1001 = N100.getOperand(1);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1000, N110, N0, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_52(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N110, N0, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_53(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N1100 = N110.getOperand(0);
  SDValue N1101 = N110.getOperand(1);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N1100, N0, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_54(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N11, N0, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_55(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N1010 = N101.getOperand(0);
  SDValue N10100 = N1010.getOperand(0);
  SDValue N10101 = N1010.getOperand(1);
  SDValue N1011 = N101.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N10100, N0, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_56(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N101, N0, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_57(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, N00, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_58(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N001)->getZExtValue()), MVT::i32);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, N000, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_59(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, N00, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_60(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N001)->getZExtValue()), MVT::i32);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, N000, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_61(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN0_0, SDValue &CPTmpN0_1, SDValue &CPTmpN0_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 7);
}
SDNode *Emit_62(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N11, N0, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 6);
}
SDNode *Emit_63(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N010, N1, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_64(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N110, N100, N0, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_65(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N010, N1, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_66(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N010, N000, N1, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_67(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp7 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp8 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N110, N100, N0, Tmp7, Tmp8 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_68(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp7 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp8 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N010, N1, Tmp7, Tmp8 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_69(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp7 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp8 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N010, N000, N1, Tmp7, Tmp8 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_70(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N1000 = N100.getOperand(0);
  SDValue N1001 = N100.getOperand(1);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N101, N1000, N0, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_71(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N0010 = N001.getOperand(0);
  SDValue N0011 = N001.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N0010, N1, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_72(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N001, N0000, N1, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_73(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N1000 = N100.getOperand(0);
  SDValue N1001 = N100.getOperand(1);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp7 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp8 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N101, N1000, N0, Tmp7, Tmp8 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_74(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N0010 = N001.getOperand(0);
  SDValue N0011 = N001.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp7 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp8 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N0010, N1, Tmp7, Tmp8 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_75(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp7 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp8 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N001, N0000, N1, Tmp7, Tmp8 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_76(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N1000 = N100.getOperand(0);
  SDValue N1001 = N100.getOperand(1);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N1100 = N110.getOperand(0);
  SDValue N1101 = N110.getOperand(1);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp11 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp12 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1100, N1000, N0, Tmp11, Tmp12 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_77(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp11 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp12 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0000, N0100, N1, Tmp11, Tmp12 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_78(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp11 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp12 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0100, N0000, N1, Tmp11, Tmp12 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_79(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N1100 = N110.getOperand(0);
  SDValue N1101 = N110.getOperand(1);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1100, N100, N0, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_80(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0000, N010, N1, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_81(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0100, N000, N1, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_82(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N11, N100, N0, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_83(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N010, N1, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_84(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N01, N000, N1, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_85(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N1000 = N100.getOperand(0);
  SDValue N1001 = N100.getOperand(1);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N110, N1000, N0, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_86(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N0100, N1, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_87(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N010, N0000, N1, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_88(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N110, N10, N0, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_89(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N01, N1, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_90(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N010, N00, N1, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_91(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N1000 = N100.getOperand(0);
  SDValue N10000 = N1000.getOperand(0);
  SDValue N10001 = N1000.getOperand(1);
  SDValue N1001 = N100.getOperand(1);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N101, N10000, N0, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_92(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N0010 = N001.getOperand(0);
  SDValue N00100 = N0010.getOperand(0);
  SDValue N00101 = N0010.getOperand(1);
  SDValue N0011 = N001.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N00100, N1, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_93(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N00000 = N0000.getOperand(0);
  SDValue N00001 = N0000.getOperand(1);
  SDValue N0001 = N000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp9 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N001, N00000, N1, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_94(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N101, N100, N0, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_95(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N001, N1, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_96(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N001, N000, N1, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Select_ISD_ADD_i32(const SDValue &N) {
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TEOps())) {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SRA) {
          SDValue N100 = N10.getOperand(0);
          if (N100.getOpcode() == ISD::SHL) {
            SDValue N1000 = N100.getOperand(0);
            SDValue N1001 = N100.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1001);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDValue N11 = N1.getOperand(1);
                    if (N11.getOpcode() == ISD::SRA) {
                      SDValue N110 = N11.getOperand(0);
                      if (N110.getOpcode() == ISD::SHL) {
                        SDValue N1100 = N110.getOperand(0);
                        SDValue N1101 = N110.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(16)) {
                            SDValue N111 = N11.getOperand(1);
                            ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N111);
                            if (Tmp6) {
                              int64_t CN7 = Tmp6->getSExtValue();
                              if (CN7 == INT64_C(16)) {

                                // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32), (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32)))
                                // Emits: (SMLABB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
                                // Pattern complexity = 38  cost = 1  size = 0
                                {
                                  SDNode *Result = Emit_49(N, ARM::SMLABB, MVT::i32);
                                  return Result;
                                }

                                // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32), (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32)))
                                // Emits: (SMLABB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
                                // Pattern complexity = 38  cost = 1  size = 0
                                SDNode *Result = Emit_76(N, ARM::SMLABB, MVT::i32);
                                return Result;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::SRA) {
        SDValue N000 = N00.getOperand(0);
        if (N000.getOpcode() == ISD::SHL) {
          SDValue N0000 = N000.getOperand(0);
          SDValue N0001 = N000.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0001);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N001 = N00.getOperand(1);
              ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N001);
              if (Tmp2) {
                int64_t CN3 = Tmp2->getSExtValue();
                if (CN3 == INT64_C(16)) {
                  SDValue N01 = N0.getOperand(1);
                  if (N01.getOpcode() == ISD::SRA) {
                    SDValue N010 = N01.getOperand(0);
                    if (N010.getOpcode() == ISD::SHL) {
                      SDValue N0100 = N010.getOperand(0);
                      SDValue N0101 = N010.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N0101);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(16)) {
                          SDValue N011 = N01.getOperand(1);
                          ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                          if (Tmp6) {
                            int64_t CN7 = Tmp6->getSExtValue();
                            if (CN7 == INT64_C(16)) {

                              // Pattern: (add:i32 (mul:i32 (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32), (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32)), GPR:i32:$acc)
                              // Emits: (SMLABB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
                              // Pattern complexity = 38  cost = 1  size = 0
                              {
                                SDNode *Result = Emit_77(N, ARM::SMLABB, MVT::i32);
                                return Result;
                              }

                              // Pattern: (add:i32 (mul:i32 (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32), (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32)), GPR:i32:$acc)
                              // Emits: (SMLABB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
                              // Pattern complexity = 38  cost = 1  size = 0
                              SDNode *Result = Emit_78(N, ARM::SMLABB, MVT::i32);
                              return Result;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::AND) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
        if (Tmp0) {

          // Pattern: (add:i32 GPR:i32:$LHS, (and:i32 (rotr:i32 GPR:i32:$RHS, (imm:i32)<<P:Predicate_rot_imm>>:$rot), 255:i32))
          // Emits: (UXTABrr_rot:i32 GPR:i32:$LHS, GPR:i32:$RHS, (imm:i32):$rot)
          // Pattern complexity = 34  cost = 1  size = 0
          if (CheckAndMask(N10, Tmp0, INT64_C(255)) &&
              N10.getOpcode() == ISD::ROTR) {
            SDValue N100 = N10.getOperand(0);
            SDValue N101 = N10.getOperand(1);
            if (N101.getOpcode() == ISD::Constant &&
                Predicate_rot_imm(N101.getNode())) {
              SDNode *Result = Emit_35(N, ARM::UXTABrr_rot, MVT::i32);
              return Result;
            }
          }

          // Pattern: (add:i32 GPR:i32:$LHS, (and:i32 (rotr:i32 GPR:i32:$RHS, (imm:i32)<<P:Predicate_rot_imm>>:$rot), 65535:i32))
          // Emits: (UXTAHrr_rot:i32 GPR:i32:$LHS, GPR:i32:$RHS, (imm:i32):$rot)
          // Pattern complexity = 34  cost = 1  size = 0
          if (CheckAndMask(N10, Tmp0, INT64_C(65535)) &&
              N10.getOpcode() == ISD::ROTR) {
            SDValue N100 = N10.getOperand(0);
            SDValue N101 = N10.getOperand(1);
            if (N101.getOpcode() == ISD::Constant &&
                Predicate_rot_imm(N101.getNode())) {
              SDNode *Result = Emit_35(N, ARM::UXTAHrr_rot, MVT::i32);
              return Result;
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {

        // Pattern: (add:i32 (and:i32 (rotr:i32 GPR:i32:$RHS, (imm:i32)<<P:Predicate_rot_imm>>:$rot), 255:i32), GPR:i32:$LHS)
        // Emits: (UXTABrr_rot:i32 GPR:i32:$LHS, GPR:i32:$RHS, (imm:i32):$rot)
        // Pattern complexity = 34  cost = 1  size = 0
        if (CheckAndMask(N00, Tmp0, INT64_C(255)) &&
            N00.getOpcode() == ISD::ROTR) {
          SDValue N000 = N00.getOperand(0);
          SDValue N001 = N00.getOperand(1);
          if (N001.getOpcode() == ISD::Constant &&
              Predicate_rot_imm(N001.getNode())) {
            SDNode *Result = Emit_60(N, ARM::UXTABrr_rot, MVT::i32);
            return Result;
          }
        }

        // Pattern: (add:i32 (and:i32 (rotr:i32 GPR:i32:$RHS, (imm:i32)<<P:Predicate_rot_imm>>:$rot), 65535:i32), GPR:i32:$LHS)
        // Emits: (UXTAHrr_rot:i32 GPR:i32:$LHS, GPR:i32:$RHS, (imm:i32):$rot)
        // Pattern complexity = 34  cost = 1  size = 0
        if (CheckAndMask(N00, Tmp0, INT64_C(65535)) &&
            N00.getOpcode() == ISD::ROTR) {
          SDValue N000 = N00.getOperand(0);
          SDValue N001 = N00.getOperand(1);
          if (N001.getOpcode() == ISD::Constant &&
              Predicate_rot_imm(N001.getNode())) {
            SDNode *Result = Emit_60(N, ARM::UXTAHrr_rot, MVT::i32);
            return Result;
          }
        }
      }
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TEOps())) {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SRA) {
          SDValue N100 = N10.getOperand(0);

          // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32), (sra:i32 GPR:i32:$b, 16:i32)))
          // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
          // Pattern complexity = 30  cost = 1  size = 0
          if (N100.getOpcode() == ISD::SHL) {
            SDValue N1000 = N100.getOperand(0);
            SDValue N1001 = N100.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1001);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDValue N11 = N1.getOperand(1);
                    if (N11.getOpcode() == ISD::SRA) {
                      SDValue N110 = N11.getOperand(0);
                      SDValue N111 = N11.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N111);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(16)) {
                          SDNode *Result = Emit_51(N, ARM::SMLABT, MVT::i32);
                          return Result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }

          // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32)))
          // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
          // Pattern complexity = 30  cost = 1  size = 0
          SDValue N101 = N10.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::SRA) {
                SDValue N110 = N11.getOperand(0);
                if (N110.getOpcode() == ISD::SHL) {
                  SDValue N1100 = N110.getOperand(0);
                  SDValue N1101 = N110.getOperand(1);
                  ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N1101);
                  if (Tmp2) {
                    int64_t CN3 = Tmp2->getSExtValue();
                    if (CN3 == INT64_C(16)) {
                      SDValue N111 = N11.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N111);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(16)) {
                          SDNode *Result = Emit_53(N, ARM::SMLATB, MVT::i32);
                          return Result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }

      // Pattern: (add:i32 GPR:i32:$acc, (sra:i32 (mul:i32 GPR:i32:$a, (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32)), 16:i32))
      // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 30  cost = 1  size = 0
      if (N1.getOpcode() == ISD::SRA) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::MUL) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          if (N101.getOpcode() == ISD::SRA) {
            SDValue N1010 = N101.getOperand(0);
            if (N1010.getOpcode() == ISD::SHL) {
              SDValue N10100 = N1010.getOperand(0);
              SDValue N10101 = N1010.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10101);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(16)) {
                  SDValue N1011 = N101.getOperand(1);
                  ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N1011);
                  if (Tmp2) {
                    int64_t CN3 = Tmp2->getSExtValue();
                    if (CN3 == INT64_C(16)) {
                      SDValue N11 = N1.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N11);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(16)) {
                          SDNode *Result = Emit_55(N, ARM::SMLAWB, MVT::i32);
                          return Result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }

      // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32)))
      // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 30  cost = 1  size = 0
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SRA) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::SRA) {
                SDValue N110 = N11.getOperand(0);
                if (N110.getOpcode() == ISD::SHL) {
                  SDValue N1100 = N110.getOperand(0);
                  SDValue N1101 = N110.getOperand(1);
                  ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N1101);
                  if (Tmp2) {
                    int64_t CN3 = Tmp2->getSExtValue();
                    if (CN3 == INT64_C(16)) {
                      SDValue N111 = N11.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N111);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(16)) {
                          SDNode *Result = Emit_79(N, ARM::SMLABT, MVT::i32);
                          return Result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::SRA) {
        SDValue N000 = N00.getOperand(0);

        // Pattern: (add:i32 (mul:i32 (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32), (sra:i32 GPR:i32:$b, 16:i32)), GPR:i32:$acc)
        // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 30  cost = 1  size = 0
        if (N000.getOpcode() == ISD::SHL) {
          SDValue N0000 = N000.getOperand(0);
          SDValue N0001 = N000.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0001);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N001 = N00.getOperand(1);
              ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N001);
              if (Tmp2) {
                int64_t CN3 = Tmp2->getSExtValue();
                if (CN3 == INT64_C(16)) {
                  SDValue N01 = N0.getOperand(1);
                  if (N01.getOpcode() == ISD::SRA) {
                    SDValue N010 = N01.getOperand(0);
                    SDValue N011 = N01.getOperand(1);
                    ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N011);
                    if (Tmp4) {
                      int64_t CN5 = Tmp4->getSExtValue();
                      if (CN5 == INT64_C(16)) {
                        SDNode *Result = Emit_80(N, ARM::SMLABT, MVT::i32);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }

        // Pattern: (add:i32 (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32)), GPR:i32:$acc)
        // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 30  cost = 1  size = 0
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::SRA) {
              SDValue N010 = N01.getOperand(0);
              if (N010.getOpcode() == ISD::SHL) {
                SDValue N0100 = N010.getOperand(0);
                SDValue N0101 = N010.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N0101);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDValue N011 = N01.getOperand(1);
                    ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N011);
                    if (Tmp4) {
                      int64_t CN5 = Tmp4->getSExtValue();
                      if (CN5 == INT64_C(16)) {
                        SDNode *Result = Emit_81(N, ARM::SMLABT, MVT::i32);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

    // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32), (sra:i32 GPR:i32:$a, 16:i32)))
    // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 30  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SRA) {
          SDValue N100 = N10.getOperand(0);
          if (N100.getOpcode() == ISD::SHL) {
            SDValue N1000 = N100.getOperand(0);
            SDValue N1001 = N100.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1001);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDValue N11 = N1.getOperand(1);
                    if (N11.getOpcode() == ISD::SRA) {
                      SDValue N110 = N11.getOperand(0);
                      SDValue N111 = N11.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N111);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(16)) {
                          SDNode *Result = Emit_85(N, ARM::SMLATB, MVT::i32);
                          return Result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::SRA) {
        SDValue N000 = N00.getOperand(0);

        // Pattern: (add:i32 (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32)), GPR:i32:$acc)
        // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 30  cost = 1  size = 0
        {
          SDValue N001 = N00.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N01 = N0.getOperand(1);
              if (N01.getOpcode() == ISD::SRA) {
                SDValue N010 = N01.getOperand(0);
                if (N010.getOpcode() == ISD::SHL) {
                  SDValue N0100 = N010.getOperand(0);
                  SDValue N0101 = N010.getOperand(1);
                  ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N0101);
                  if (Tmp2) {
                    int64_t CN3 = Tmp2->getSExtValue();
                    if (CN3 == INT64_C(16)) {
                      SDValue N011 = N01.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N011);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(16)) {
                          SDNode *Result = Emit_86(N, ARM::SMLATB, MVT::i32);
                          return Result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }

        // Pattern: (add:i32 (mul:i32 (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32), (sra:i32 GPR:i32:$a, 16:i32)), GPR:i32:$acc)
        // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 30  cost = 1  size = 0
        if (N000.getOpcode() == ISD::SHL) {
          SDValue N0000 = N000.getOperand(0);
          SDValue N0001 = N000.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0001);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N001 = N00.getOperand(1);
              ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N001);
              if (Tmp2) {
                int64_t CN3 = Tmp2->getSExtValue();
                if (CN3 == INT64_C(16)) {
                  SDValue N01 = N0.getOperand(1);
                  if (N01.getOpcode() == ISD::SRA) {
                    SDValue N010 = N01.getOperand(0);
                    SDValue N011 = N01.getOperand(1);
                    ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N011);
                    if (Tmp4) {
                      int64_t CN5 = Tmp4->getSExtValue();
                      if (CN5 == INT64_C(16)) {
                        SDNode *Result = Emit_87(N, ARM::SMLATB, MVT::i32);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }

    // Pattern: (add:i32 GPR:i32:$acc, (sra:i32 (mul:i32 (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32), GPR:i32:$a), 16:i32))
    // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 30  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SRA) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::MUL) {
          SDValue N100 = N10.getOperand(0);
          if (N100.getOpcode() == ISD::SRA) {
            SDValue N1000 = N100.getOperand(0);
            if (N1000.getOpcode() == ISD::SHL) {
              SDValue N10000 = N1000.getOperand(0);
              SDValue N10001 = N1000.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N10001);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(16)) {
                  SDValue N1001 = N100.getOperand(1);
                  ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N1001);
                  if (Tmp2) {
                    int64_t CN3 = Tmp2->getSExtValue();
                    if (CN3 == INT64_C(16)) {
                      SDValue N101 = N10.getOperand(1);
                      SDValue N11 = N1.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N11);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(16)) {
                          SDNode *Result = Emit_91(N, ARM::SMLAWB, MVT::i32);
                          return Result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::SRA) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::MUL) {
        SDValue N000 = N00.getOperand(0);

        // Pattern: (add:i32 (sra:i32 (mul:i32 GPR:i32:$a, (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32)), 16:i32), GPR:i32:$acc)
        // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 30  cost = 1  size = 0
        {
          SDValue N001 = N00.getOperand(1);
          if (N001.getOpcode() == ISD::SRA) {
            SDValue N0010 = N001.getOperand(0);
            if (N0010.getOpcode() == ISD::SHL) {
              SDValue N00100 = N0010.getOperand(0);
              SDValue N00101 = N0010.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N00101);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(16)) {
                  SDValue N0011 = N001.getOperand(1);
                  ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N0011);
                  if (Tmp2) {
                    int64_t CN3 = Tmp2->getSExtValue();
                    if (CN3 == INT64_C(16)) {
                      SDValue N01 = N0.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(16)) {
                          SDNode *Result = Emit_92(N, ARM::SMLAWB, MVT::i32);
                          return Result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }

        // Pattern: (add:i32 (sra:i32 (mul:i32 (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32), GPR:i32:$a), 16:i32), GPR:i32:$acc)
        // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 30  cost = 1  size = 0
        if (N000.getOpcode() == ISD::SRA) {
          SDValue N0000 = N000.getOperand(0);
          if (N0000.getOpcode() == ISD::SHL) {
            SDValue N00000 = N0000.getOperand(0);
            SDValue N00001 = N0000.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N00001);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDValue N0001 = N000.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N0001);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDValue N001 = N00.getOperand(1);
                    SDValue N01 = N0.getOperand(1);
                    ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01);
                    if (Tmp4) {
                      int64_t CN5 = Tmp4->getSExtValue();
                      if (CN5 == INT64_C(16)) {
                        SDNode *Result = Emit_93(N, ARM::SMLAWB, MVT::i32);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::AND) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
        if (Tmp0) {

          // Pattern: (add:i32 GPR:i32:$LHS, (and:i32 GPR:i32:$RHS, 255:i32))
          // Emits: (UXTABrr:i32 GPR:i32:$LHS, GPR:i32:$RHS)
          // Pattern complexity = 27  cost = 1  size = 0
          if (CheckAndMask(N10, Tmp0, INT64_C(255))) {
            SDNode *Result = Emit_34(N, ARM::UXTABrr, MVT::i32);
            return Result;
          }

          // Pattern: (add:i32 GPR:i32:$LHS, (and:i32 GPR:i32:$RHS, 65535:i32))
          // Emits: (UXTAHrr:i32 GPR:i32:$LHS, GPR:i32:$RHS)
          // Pattern complexity = 27  cost = 1  size = 0
          if (CheckAndMask(N10, Tmp0, INT64_C(65535))) {
            SDNode *Result = Emit_34(N, ARM::UXTAHrr, MVT::i32);
            return Result;
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {

        // Pattern: (add:i32 (and:i32 GPR:i32:$RHS, 255:i32), GPR:i32:$LHS)
        // Emits: (UXTABrr:i32 GPR:i32:$LHS, GPR:i32:$RHS)
        // Pattern complexity = 27  cost = 1  size = 0
        if (CheckAndMask(N00, Tmp0, INT64_C(255))) {
          SDNode *Result = Emit_59(N, ARM::UXTABrr, MVT::i32);
          return Result;
        }

        // Pattern: (add:i32 (and:i32 GPR:i32:$RHS, 65535:i32), GPR:i32:$LHS)
        // Emits: (UXTAHrr:i32 GPR:i32:$LHS, GPR:i32:$RHS)
        // Pattern complexity = 27  cost = 1  size = 0
        if (CheckAndMask(N00, Tmp0, INT64_C(65535))) {
          SDNode *Result = Emit_59(N, ARM::UXTAHrr, MVT::i32);
          return Result;
        }
      }
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TEOps())) {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);

      // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), (sra:i32 GPR:i32:$b, 16:i32)))
      // Emits: (SMLATT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 22  cost = 1  size = 0
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SRA) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::SRA) {
                SDValue N110 = N11.getOperand(0);
                SDValue N111 = N11.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N111);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDNode *Result = Emit_43(N, ARM::SMLATT, MVT::i32);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }

      // Pattern: (add:i32 GPR:i32:$acc, (sra:i32 (mul:i32 GPR:i32:$a, (sra:i32 GPR:i32:$b, 16:i32)), 16:i32))
      // Emits: (SMLAWT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 22  cost = 1  size = 0
      if (N1.getOpcode() == ISD::SRA) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::MUL) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          if (N101.getOpcode() == ISD::SRA) {
            SDValue N1010 = N101.getOperand(0);
            SDValue N1011 = N101.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1011);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDValue N11 = N1.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N11);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDNode *Result = Emit_45(N, ARM::SMLAWT, MVT::i32);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }

      // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), (sra:i32 GPR:i32:$a, 16:i32)))
      // Emits: (SMLATT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 22  cost = 1  size = 0
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SRA) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::SRA) {
                SDValue N110 = N11.getOperand(0);
                SDValue N111 = N11.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N111);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDNode *Result = Emit_67(N, ARM::SMLATT, MVT::i32);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::SRA) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::SRA) {
              SDValue N010 = N01.getOperand(0);
              SDValue N011 = N01.getOperand(1);
              ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N011);
              if (Tmp2) {
                int64_t CN3 = Tmp2->getSExtValue();
                if (CN3 == INT64_C(16)) {

                  // Pattern: (add:i32 (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), (sra:i32 GPR:i32:$b, 16:i32)), GPR:i32:$acc)
                  // Emits: (SMLATT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
                  // Pattern complexity = 22  cost = 1  size = 0
                  {
                    SDNode *Result = Emit_68(N, ARM::SMLATT, MVT::i32);
                    return Result;
                  }

                  // Pattern: (add:i32 (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), (sra:i32 GPR:i32:$a, 16:i32)), GPR:i32:$acc)
                  // Emits: (SMLATT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
                  // Pattern complexity = 22  cost = 1  size = 0
                  SDNode *Result = Emit_69(N, ARM::SMLATT, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }
      }
    }

    // Pattern: (add:i32 GPR:i32:$acc, (sra:i32 (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), GPR:i32:$a), 16:i32))
    // Emits: (SMLAWT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 22  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SRA) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::MUL) {
          SDValue N100 = N10.getOperand(0);
          if (N100.getOpcode() == ISD::SRA) {
            SDValue N1000 = N100.getOperand(0);
            SDValue N1001 = N100.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1001);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDValue N101 = N10.getOperand(1);
                SDValue N11 = N1.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N11);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDNode *Result = Emit_73(N, ARM::SMLAWT, MVT::i32);
                    return Result;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::SRA) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::MUL) {
        SDValue N000 = N00.getOperand(0);

        // Pattern: (add:i32 (sra:i32 (mul:i32 GPR:i32:$a, (sra:i32 GPR:i32:$b, 16:i32)), 16:i32), GPR:i32:$acc)
        // Emits: (SMLAWT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 22  cost = 1  size = 0
        {
          SDValue N001 = N00.getOperand(1);
          if (N001.getOpcode() == ISD::SRA) {
            SDValue N0010 = N001.getOperand(0);
            SDValue N0011 = N001.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0011);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDValue N01 = N0.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N01);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDNode *Result = Emit_74(N, ARM::SMLAWT, MVT::i32);
                    return Result;
                  }
                }
              }
            }
          }
        }

        // Pattern: (add:i32 (sra:i32 (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), GPR:i32:$a), 16:i32), GPR:i32:$acc)
        // Emits: (SMLAWT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 22  cost = 1  size = 0
        if (N000.getOpcode() == ISD::SRA) {
          SDValue N0000 = N000.getOperand(0);
          SDValue N0001 = N000.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0001);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N001 = N00.getOperand(1);
              SDValue N01 = N0.getOperand(1);
              ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N01);
              if (Tmp2) {
                int64_t CN3 = Tmp2->getSExtValue();
                if (CN3 == INT64_C(16)) {
                  SDNode *Result = Emit_75(N, ARM::SMLAWT, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);

        // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sext_inreg:i32 GPR:i32:$a, i16:Other), (sra:i32 GPR:i32:$b, 16:i32)))
        // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 17  cost = 1  size = 0
        if (N10.getOpcode() == ISD::SIGN_EXTEND_INREG) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          if (cast<VTSDNode>(N101)->getVT() == MVT::i16) {
            SDValue N11 = N1.getOperand(1);
            if (N11.getOpcode() == ISD::SRA) {
              SDValue N110 = N11.getOperand(0);
              SDValue N111 = N11.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N111);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(16)) {
                  SDNode *Result = Emit_42(N, ARM::SMLABT, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }

        // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), (sext_inreg:i32 GPR:i32:$b, i16:Other)))
        // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 17  cost = 1  size = 0
        if (N10.getOpcode() == ISD::SRA) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::SIGN_EXTEND_INREG) {
                SDValue N110 = N11.getOperand(0);
                SDValue N111 = N11.getOperand(1);
                if (cast<VTSDNode>(N111)->getVT() == MVT::i16) {
                  SDNode *Result = Emit_42(N, ARM::SMLATB, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }
      }

      // Pattern: (add:i32 GPR:i32:$acc, (sra:i32 (mul:i32 GPR:i32:$a, (sext_inreg:i32 GPR:i32:$b, i16:Other)), 16:i32))
      // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 17  cost = 1  size = 0
      if (N1.getOpcode() == ISD::SRA) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::MUL) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          if (N101.getOpcode() == ISD::SIGN_EXTEND_INREG) {
            SDValue N1010 = N101.getOperand(0);
            SDValue N1011 = N101.getOperand(1);
            if (cast<VTSDNode>(N1011)->getVT() == MVT::i16) {
              SDValue N11 = N1.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(16)) {
                  SDNode *Result = Emit_44(N, ARM::SMLAWB, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }
      }

      // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), (sext_inreg:i32 GPR:i32:$a, i16:Other)))
      // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 17  cost = 1  size = 0
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SRA) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N11 = N1.getOperand(1);
              if (N11.getOpcode() == ISD::SIGN_EXTEND_INREG) {
                SDValue N110 = N11.getOperand(0);
                SDValue N111 = N11.getOperand(1);
                if (cast<VTSDNode>(N111)->getVT() == MVT::i16) {
                  SDNode *Result = Emit_64(N, ARM::SMLABT, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (add:i32 (mul:i32 (sext_inreg:i32 GPR:i32:$a, i16:Other), (sra:i32 GPR:i32:$b, 16:i32)), GPR:i32:$acc)
      // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 17  cost = 1  size = 0
      if (N00.getOpcode() == ISD::SIGN_EXTEND_INREG) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        if (cast<VTSDNode>(N001)->getVT() == MVT::i16) {
          SDValue N01 = N0.getOperand(1);
          if (N01.getOpcode() == ISD::SRA) {
            SDValue N010 = N01.getOperand(0);
            SDValue N011 = N01.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N011);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDNode *Result = Emit_65(N, ARM::SMLABT, MVT::i32);
                return Result;
              }
            }
          }
        }
      }

      // Pattern: (add:i32 (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), (sext_inreg:i32 GPR:i32:$a, i16:Other)), GPR:i32:$acc)
      // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 17  cost = 1  size = 0
      if (N00.getOpcode() == ISD::SRA) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::SIGN_EXTEND_INREG) {
              SDValue N010 = N01.getOperand(0);
              SDValue N011 = N01.getOperand(1);
              if (cast<VTSDNode>(N011)->getVT() == MVT::i16) {
                SDNode *Result = Emit_66(N, ARM::SMLABT, MVT::i32);
                return Result;
              }
            }
          }
        }
      }
    }

    // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sext_inreg:i32 GPR:i32:$b, i16:Other), (sra:i32 GPR:i32:$a, 16:i32)))
    // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 17  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SIGN_EXTEND_INREG) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          if (cast<VTSDNode>(N101)->getVT() == MVT::i16) {
            SDValue N11 = N1.getOperand(1);
            if (N11.getOpcode() == ISD::SRA) {
              SDValue N110 = N11.getOperand(0);
              SDValue N111 = N11.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N111);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(16)) {
                  SDNode *Result = Emit_64(N, ARM::SMLATB, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (add:i32 (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), (sext_inreg:i32 GPR:i32:$b, i16:Other)), GPR:i32:$acc)
      // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 17  cost = 1  size = 0
      if (N00.getOpcode() == ISD::SRA) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::SIGN_EXTEND_INREG) {
              SDValue N010 = N01.getOperand(0);
              SDValue N011 = N01.getOperand(1);
              if (cast<VTSDNode>(N011)->getVT() == MVT::i16) {
                SDNode *Result = Emit_65(N, ARM::SMLATB, MVT::i32);
                return Result;
              }
            }
          }
        }
      }

      // Pattern: (add:i32 (mul:i32 (sext_inreg:i32 GPR:i32:$b, i16:Other), (sra:i32 GPR:i32:$a, 16:i32)), GPR:i32:$acc)
      // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 17  cost = 1  size = 0
      if (N00.getOpcode() == ISD::SIGN_EXTEND_INREG) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        if (cast<VTSDNode>(N001)->getVT() == MVT::i16) {
          SDValue N01 = N0.getOperand(1);
          if (N01.getOpcode() == ISD::SRA) {
            SDValue N010 = N01.getOperand(0);
            SDValue N011 = N01.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N011);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDNode *Result = Emit_66(N, ARM::SMLATB, MVT::i32);
                return Result;
              }
            }
          }
        }
      }
    }

    // Pattern: (add:i32 GPR:i32:$acc, (sra:i32 (mul:i32 (sext_inreg:i32 GPR:i32:$b, i16:Other), GPR:i32:$a), 16:i32))
    // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 17  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SRA) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::MUL) {
          SDValue N100 = N10.getOperand(0);
          if (N100.getOpcode() == ISD::SIGN_EXTEND_INREG) {
            SDValue N1000 = N100.getOperand(0);
            SDValue N1001 = N100.getOperand(1);
            if (cast<VTSDNode>(N1001)->getVT() == MVT::i16) {
              SDValue N101 = N10.getOperand(1);
              SDValue N11 = N1.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(16)) {
                  SDNode *Result = Emit_70(N, ARM::SMLAWB, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::SRA) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::MUL) {
        SDValue N000 = N00.getOperand(0);

        // Pattern: (add:i32 (sra:i32 (mul:i32 GPR:i32:$a, (sext_inreg:i32 GPR:i32:$b, i16:Other)), 16:i32), GPR:i32:$acc)
        // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 17  cost = 1  size = 0
        {
          SDValue N001 = N00.getOperand(1);
          if (N001.getOpcode() == ISD::SIGN_EXTEND_INREG) {
            SDValue N0010 = N001.getOperand(0);
            SDValue N0011 = N001.getOperand(1);
            if (cast<VTSDNode>(N0011)->getVT() == MVT::i16) {
              SDValue N01 = N0.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(16)) {
                  SDNode *Result = Emit_71(N, ARM::SMLAWB, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }

        // Pattern: (add:i32 (sra:i32 (mul:i32 (sext_inreg:i32 GPR:i32:$b, i16:Other), GPR:i32:$a), 16:i32), GPR:i32:$acc)
        // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 17  cost = 1  size = 0
        if (N000.getOpcode() == ISD::SIGN_EXTEND_INREG) {
          SDValue N0000 = N000.getOperand(0);
          SDValue N0001 = N000.getOperand(1);
          if (cast<VTSDNode>(N0001)->getVT() == MVT::i16) {
            SDValue N001 = N00.getOperand(1);
            SDValue N01 = N0.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDNode *Result = Emit_72(N, ARM::SMLAWB, MVT::i32);
                return Result;
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (add:i32 GPR:i32:$a, so_reg:i32:$b)
  // Emits: (ADDrs:i32 GPR:i32:$a, so_reg:i32:$b)
  // Pattern complexity = 15  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    SDValue CPTmpN1_2;
    if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2)) {
      SDNode *Result = Emit_38(N, ARM::ADDrs, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
      return Result;
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TEOps())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::MUL) {
      SDValue N10 = N1.getOperand(0);

      // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$a, (sra:i32 GPR:i32:$b, 16:i32)))
      // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 15  cost = 1  size = 0
      if (Predicate_sext_16_node(N10.getNode())) {
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::SRA) {
          SDValue N110 = N11.getOperand(0);
          SDValue N111 = N11.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N111);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDNode *Result = Emit_52(N, ARM::SMLABT, MVT::i32);
              return Result;
            }
          }
        }
      }

      // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), GPR:i32<<P:Predicate_sext_16_node>>:$b))
      // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 15  cost = 1  size = 0
      if (N10.getOpcode() == ISD::SRA) {
        SDValue N100 = N10.getOperand(0);
        SDValue N101 = N10.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N11 = N1.getOperand(1);
            if (Predicate_sext_16_node(N11.getNode())) {
              SDNode *Result = Emit_54(N, ARM::SMLATB, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (add:i32 GPR:i32:$acc, (sra:i32 (mul:i32 GPR:i32:$a, GPR:i32<<P:Predicate_sext_16_node>>:$b), 16:i32))
    // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 15  cost = 1  size = 0
    if (N1.getOpcode() == ISD::SRA) {
      SDValue N10 = N1.getOperand(0);
      if (N10.getOpcode() == ISD::MUL) {
        SDValue N100 = N10.getOperand(0);
        SDValue N101 = N10.getOperand(1);
        if (Predicate_sext_16_node(N101.getNode())) {
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDNode *Result = Emit_56(N, ARM::SMLAWB, MVT::i32);
              return Result;
            }
          }
        }
      }
    }
  }

  // Pattern: (add:i32 so_reg:i32:$b, GPR:i32:$a)
  // Emits: (ADDrs:i32 GPR:i32:$a, so_reg:i32:$b)
  // Pattern complexity = 15  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue CPTmpN0_0;
    SDValue CPTmpN0_1;
    SDValue CPTmpN0_2;
    if (SelectShifterOperandReg(N, N0, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2)) {
      SDNode *Result = Emit_61(N, ARM::ADDrs, MVT::i32, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2);
      return Result;
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TEOps())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), GPR:i32<<P:Predicate_sext_16_node>>:$a))
    // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 15  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SRA) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N11 = N1.getOperand(1);
              if (Predicate_sext_16_node(N11.getNode())) {
                SDNode *Result = Emit_82(N, ARM::SMLABT, MVT::i32);
                return Result;
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (add:i32 (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$a, (sra:i32 GPR:i32:$b, 16:i32)), GPR:i32:$acc)
      // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 15  cost = 1  size = 0
      if (Predicate_sext_16_node(N00.getNode())) {
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::SRA) {
          SDValue N010 = N01.getOperand(0);
          SDValue N011 = N01.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N011);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDNode *Result = Emit_83(N, ARM::SMLABT, MVT::i32);
              return Result;
            }
          }
        }
      }

      // Pattern: (add:i32 (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), GPR:i32<<P:Predicate_sext_16_node>>:$a), GPR:i32:$acc)
      // Emits: (SMLABT:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 15  cost = 1  size = 0
      if (N00.getOpcode() == ISD::SRA) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            if (Predicate_sext_16_node(N01.getNode())) {
              SDNode *Result = Emit_84(N, ARM::SMLABT, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$b, (sra:i32 GPR:i32:$a, 16:i32)))
    // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 15  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (Predicate_sext_16_node(N10.getNode())) {
          SDValue N11 = N1.getOperand(1);
          if (N11.getOpcode() == ISD::SRA) {
            SDValue N110 = N11.getOperand(0);
            SDValue N111 = N11.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N111);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDNode *Result = Emit_88(N, ARM::SMLATB, MVT::i32);
                return Result;
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (add:i32 (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), GPR:i32<<P:Predicate_sext_16_node>>:$b), GPR:i32:$acc)
      // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 15  cost = 1  size = 0
      if (N00.getOpcode() == ISD::SRA) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            if (Predicate_sext_16_node(N01.getNode())) {
              SDNode *Result = Emit_89(N, ARM::SMLATB, MVT::i32);
              return Result;
            }
          }
        }
      }

      // Pattern: (add:i32 (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$b, (sra:i32 GPR:i32:$a, 16:i32)), GPR:i32:$acc)
      // Emits: (SMLATB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
      // Pattern complexity = 15  cost = 1  size = 0
      if (Predicate_sext_16_node(N00.getNode())) {
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::SRA) {
          SDValue N010 = N01.getOperand(0);
          SDValue N011 = N01.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N011);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDNode *Result = Emit_90(N, ARM::SMLATB, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (add:i32 GPR:i32:$acc, (sra:i32 (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$b, GPR:i32:$a), 16:i32))
    // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 15  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SRA) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::MUL) {
          SDValue N100 = N10.getOperand(0);
          if (Predicate_sext_16_node(N100.getNode())) {
            SDValue N101 = N10.getOperand(1);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDNode *Result = Emit_94(N, ARM::SMLAWB, MVT::i32);
                return Result;
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::SRA) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::MUL) {
        SDValue N000 = N00.getOperand(0);

        // Pattern: (add:i32 (sra:i32 (mul:i32 GPR:i32:$a, GPR:i32<<P:Predicate_sext_16_node>>:$b), 16:i32), GPR:i32:$acc)
        // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 15  cost = 1  size = 0
        {
          SDValue N001 = N00.getOperand(1);
          if (Predicate_sext_16_node(N001.getNode())) {
            SDValue N01 = N0.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDNode *Result = Emit_95(N, ARM::SMLAWB, MVT::i32);
                return Result;
              }
            }
          }
        }

        // Pattern: (add:i32 (sra:i32 (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$b, GPR:i32:$a), 16:i32), GPR:i32:$acc)
        // Emits: (SMLAWB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
        // Pattern complexity = 15  cost = 1  size = 0
        if (Predicate_sext_16_node(N000.getNode())) {
          SDValue N001 = N00.getOperand(1);
          SDValue N01 = N0.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDNode *Result = Emit_96(N, ARM::SMLAWB, MVT::i32);
              return Result;
            }
          }
        }
      }
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SIGN_EXTEND_INREG) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::ROTR) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          if (N101.getOpcode() == ISD::Constant &&
              Predicate_rot_imm(N101.getNode())) {
            SDValue N11 = N1.getOperand(1);

            // Pattern: (add:i32 GPR:i32:$LHS, (sext_inreg:i32 (rotr:i32 GPR:i32:$RHS, (imm:i32)<<P:Predicate_rot_imm>>:$rot), i8:Other))
            // Emits: (SXTABrr_rot:i32 GPR:i32:$LHS, GPR:i32:$RHS, (imm:i32):$rot)
            // Pattern complexity = 13  cost = 1  size = 0
            if (cast<VTSDNode>(N11)->getVT() == MVT::i8) {
              SDNode *Result = Emit_33(N, ARM::SXTABrr_rot, MVT::i32);
              return Result;
            }

            // Pattern: (add:i32 GPR:i32:$LHS, (sext_inreg:i32 (rotr:i32 GPR:i32:$RHS, (imm:i32)<<P:Predicate_rot_imm>>:$rot), i16:Other))
            // Emits: (SXTAHrr_rot:i32 GPR:i32:$LHS, GPR:i32:$RHS, (imm:i32):$rot)
            // Pattern complexity = 13  cost = 1  size = 0
            if (cast<VTSDNode>(N11)->getVT() == MVT::i16) {
              SDNode *Result = Emit_33(N, ARM::SXTAHrr_rot, MVT::i32);
              return Result;
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::SIGN_EXTEND_INREG) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::ROTR) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        if (N001.getOpcode() == ISD::Constant &&
            Predicate_rot_imm(N001.getNode())) {
          SDValue N01 = N0.getOperand(1);

          // Pattern: (add:i32 (sext_inreg:i32 (rotr:i32 GPR:i32:$RHS, (imm:i32)<<P:Predicate_rot_imm>>:$rot), i8:Other), GPR:i32:$LHS)
          // Emits: (SXTABrr_rot:i32 GPR:i32:$LHS, GPR:i32:$RHS, (imm:i32):$rot)
          // Pattern complexity = 13  cost = 1  size = 0
          if (cast<VTSDNode>(N01)->getVT() == MVT::i8) {
            SDNode *Result = Emit_58(N, ARM::SXTABrr_rot, MVT::i32);
            return Result;
          }

          // Pattern: (add:i32 (sext_inreg:i32 (rotr:i32 GPR:i32:$RHS, (imm:i32)<<P:Predicate_rot_imm>>:$rot), i16:Other), GPR:i32:$LHS)
          // Emits: (SXTAHrr_rot:i32 GPR:i32:$LHS, GPR:i32:$RHS, (imm:i32):$rot)
          // Pattern complexity = 13  cost = 1  size = 0
          if (cast<VTSDNode>(N01)->getVT() == MVT::i16) {
            SDNode *Result = Emit_58(N, ARM::SXTAHrr_rot, MVT::i32);
            return Result;
          }
        }
      }
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TEOps())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 (sext_inreg:i32 GPR:i32:$a, i16:Other), (sext_inreg:i32 GPR:i32:$b, i16:Other)))
    // Emits: (SMLABB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 12  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SIGN_EXTEND_INREG) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          if (cast<VTSDNode>(N101)->getVT() == MVT::i16) {
            SDValue N11 = N1.getOperand(1);
            if (N11.getOpcode() == ISD::SIGN_EXTEND_INREG) {
              SDValue N110 = N11.getOperand(0);
              SDValue N111 = N11.getOperand(1);
              if (cast<VTSDNode>(N111)->getVT() == MVT::i16) {
                SDNode *Result = Emit_41(N, ARM::SMLABB, MVT::i32);
                return Result;
              }
            }
          }
        }
      }
    }

    // Pattern: (add:i32 (mul:i32 (sext_inreg:i32 GPR:i32:$a, i16:Other), (sext_inreg:i32 GPR:i32:$b, i16:Other)), GPR:i32:$acc)
    // Emits: (SMLABB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 12  cost = 1  size = 0
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::SIGN_EXTEND_INREG) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        if (cast<VTSDNode>(N001)->getVT() == MVT::i16) {
          SDValue N01 = N0.getOperand(1);
          if (N01.getOpcode() == ISD::SIGN_EXTEND_INREG) {
            SDValue N010 = N01.getOperand(0);
            SDValue N011 = N01.getOperand(1);
            if (cast<VTSDNode>(N011)->getVT() == MVT::i16) {
              SDNode *Result = Emit_63(N, ARM::SMLABB, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (add:i32 GPR:i32:$acc, (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$a, GPR:i32<<P:Predicate_sext_16_node>>:$b))
    // Emits: (SMLABB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 8  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::MUL) {
        SDValue N10 = N1.getOperand(0);
        if (Predicate_sext_16_node(N10.getNode())) {
          SDValue N11 = N1.getOperand(1);
          if (Predicate_sext_16_node(N11.getNode())) {
            SDNode *Result = Emit_50(N, ARM::SMLABB, MVT::i32);
            return Result;
          }
        }
      }
    }

    // Pattern: (add:i32 (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$a, GPR:i32<<P:Predicate_sext_16_node>>:$b), GPR:i32:$acc)
    // Emits: (SMLABB:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$acc)
    // Pattern complexity = 8  cost = 1  size = 0
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);
      if (Predicate_sext_16_node(N00.getNode())) {
        SDValue N01 = N0.getOperand(1);
        if (Predicate_sext_16_node(N01.getNode())) {
          SDNode *Result = Emit_40(N, ARM::SMLABB, MVT::i32);
          return Result;
        }
      }
    }
  }

  // Pattern: (add:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
  // Emits: (ADDri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
  // Pattern complexity = 7  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_so_imm(N1.getNode())) {
      SDNode *Result = Emit_36(N, ARM::ADDri, MVT::i32);
      return Result;
    }
  }
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (add:i32 GPR:i32:$lhs, (imm:i32)<<P:Predicate_imm0_7>>:$rhs)
      // Emits: (tADDi3:i32 GPR:i32:$lhs, (imm:i32):$rhs)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm0_7(N1.getNode())) {
        SDNode *Result = Emit_25(N, ARM::tADDi3, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 GPR:i32:$lhs, (imm:i32)<<P:Predicate_imm8_255>>:$rhs)
      // Emits: (tADDi8:i32 GPR:i32:$lhs, (imm:i32):$rhs)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm8_255(N1.getNode())) {
        SDNode *Result = Emit_25(N, ARM::tADDi8, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 GPR:i32:$lhs, (imm:i32)<<P:Predicate_imm0_7_neg>><<X:imm_neg_XFORM>>:$rhs)
      // Emits: (tSUBi3:i32 GPR:i32:$lhs, (imm_neg_XFORM:i32 (imm:i32):$rhs))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm0_7_neg(N1.getNode())) {
        SDNode *Result = Emit_47(N, ARM::tSUBi3, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 GPR:i32:$lhs, (imm:i32)<<P:Predicate_imm8_255_neg>><<X:imm_neg_XFORM>>:$rhs)
      // Emits: (tSUBi8:i32 GPR:i32:$lhs, (imm_neg_XFORM:i32 (imm:i32):$rhs))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm8_255_neg(N1.getNode())) {
        SDNode *Result = Emit_47(N, ARM::tSUBi8, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (add:i32 GPR:i32:$src, (imm:i32)<<P:Predicate_so_imm_neg>><<X:so_imm_neg_XFORM>>:$imm)
  // Emits: (SUBri:i32 GPR:i32:$src, (so_imm_neg_XFORM:i32 (imm:i32)<<P:Predicate_so_imm_neg>>:$imm))
  // Pattern complexity = 7  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_so_imm_neg(N1.getNode())) {
      SDNode *Result = Emit_48(N, ARM::SUBri, MVT::i32);
      return Result;
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::SIGN_EXTEND_INREG) {
      SDValue N10 = N1.getOperand(0);
      SDValue N11 = N1.getOperand(1);

      // Pattern: (add:i32 GPR:i32:$LHS, (sext_inreg:i32 GPR:i32:$RHS, i8:Other))
      // Emits: (SXTABrr:i32 GPR:i32:$LHS, GPR:i32:$RHS)
      // Pattern complexity = 6  cost = 1  size = 0
      if (cast<VTSDNode>(N11)->getVT() == MVT::i8) {
        SDNode *Result = Emit_32(N, ARM::SXTABrr, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 GPR:i32:$LHS, (sext_inreg:i32 GPR:i32:$RHS, i16:Other))
      // Emits: (SXTAHrr:i32 GPR:i32:$LHS, GPR:i32:$RHS)
      // Pattern complexity = 6  cost = 1  size = 0
      if (cast<VTSDNode>(N11)->getVT() == MVT::i16) {
        SDNode *Result = Emit_32(N, ARM::SXTAHrr, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (add:i32 (mul:i32 GPR:i32:$a, GPR:i32:$b), GPR:i32:$c)
  // Emits: (MLA:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$c)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::MUL) {
      SDNode *Result = Emit_39(N, ARM::MLA, MVT::i32);
      return Result;
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (add:i32 (mulhs:i32 GPR:i32:$a, GPR:i32:$b), GPR:i32:$c)
    // Emits: (SMMLA:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$c)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::MULHS) {
      SDNode *Result = Emit_40(N, ARM::SMMLA, MVT::i32);
      return Result;
    }
    if (N0.getOpcode() == ISD::SIGN_EXTEND_INREG) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);

      // Pattern: (add:i32 (sext_inreg:i32 GPR:i32:$RHS, i8:Other), GPR:i32:$LHS)
      // Emits: (SXTABrr:i32 GPR:i32:$LHS, GPR:i32:$RHS)
      // Pattern complexity = 6  cost = 1  size = 0
      if (cast<VTSDNode>(N01)->getVT() == MVT::i8) {
        SDNode *Result = Emit_57(N, ARM::SXTABrr, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 (sext_inreg:i32 GPR:i32:$RHS, i16:Other), GPR:i32:$LHS)
      // Emits: (SXTAHrr:i32 GPR:i32:$LHS, GPR:i32:$RHS)
      // Pattern complexity = 6  cost = 1  size = 0
      if (cast<VTSDNode>(N01)->getVT() == MVT::i16) {
        SDNode *Result = Emit_57(N, ARM::SXTAHrr, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (add:i32 GPR:i32:$c, (mul:i32 GPR:i32:$a, GPR:i32:$b))
  // Emits: (MLA:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$c)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::MUL) {
      SDNode *Result = Emit_62(N, ARM::MLA, MVT::i32);
      return Result;
    }
  }

  // Pattern: (add:i32 GPR:i32:$c, (mulhs:i32 GPR:i32:$a, GPR:i32:$b))
  // Emits: (SMMLA:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$c)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::MULHS) {
      SDNode *Result = Emit_50(N, ARM::SMMLA, MVT::i32);
      return Result;
    }
  }

  // Pattern: (add:i32 GPR:i32:$a, GPR:i32:$b)
  // Emits: (ADDrr:i32 GPR:i32:$a, GPR:i32:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_37(N, ARM::ADDrr, MVT::i32);
    return Result;
  }

  // Pattern: (add:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tADDrr:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_46(N, ARM::tADDrr, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_97(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp2, Tmp3, Tmp4 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_98(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N1, Tmp2, Tmp3 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_99(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1, SDValue &CPTmpN1_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2, Tmp2, Tmp3 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, Ops0, 6);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_100(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_101(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN0_0, SDValue &CPTmpN0_1, SDValue &CPTmpN0_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2, Tmp2, Tmp3 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, Ops0, 6);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDC_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    {
      SDValue N0 = N.getOperand(0);

      // Pattern: (addc:i32 GPR:i32:$a, so_reg:i32:$b)
      // Emits: (ADDSrs:i32 GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2)) {
          SDNode *Result = Emit_99(N, ARM::ADDSrs, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (addc:i32 so_reg:i32:$b, GPR:i32:$a)
      // Emits: (ADDSrs:i32 GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue CPTmpN0_0;
        SDValue CPTmpN0_1;
        SDValue CPTmpN0_2;
        if (SelectShifterOperandReg(N, N0, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2)) {
          SDNode *Result = Emit_101(N, ARM::ADDSrs, MVT::i32, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2);
          return Result;
        }
      }

      // Pattern: (addc:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
      // Emits: (ADDSri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
      // Pattern complexity = 7  cost = 1  size = 0
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_so_imm(N1.getNode())) {
        SDNode *Result = Emit_97(N, ARM::ADDSri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (addc:i32 GPR:i32:$a, GPR:i32:$b)
    // Emits: (ADDSrr:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_98(N, ARM::ADDSrr, MVT::i32);
    return Result;
  }

  // Pattern: (addc:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tADDS:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_100(N, ARM::tADDS, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_102(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag = N.getOperand(2);
  SDValue Ops0[] = { N0, Tmp2, Tmp3, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, Ops0, 4);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_103(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag = N.getOperand(2);
  SDValue Ops0[] = { N0, N1, Tmp2, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, Ops0, 4);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_104(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1, SDValue &CPTmpN1_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag = N.getOperand(2);
  SDValue Ops0[] = { N0, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2, Tmp2, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, Ops0, 6);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_105(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, N1, InFlag);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_106(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN0_0, SDValue &CPTmpN0_1, SDValue &CPTmpN0_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag = N.getOperand(2);
  SDValue Ops0[] = { N1, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2, Tmp2, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, Ops0, 6);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDE_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    {
      SDValue N0 = N.getOperand(0);

      // Pattern: (adde:i32 GPR:i32:$a, so_reg:i32:$b)
      // Emits: (ADCrs:i32 GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2)) {
          SDNode *Result = Emit_104(N, ARM::ADCrs, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (adde:i32 so_reg:i32:$b, GPR:i32:$a)
      // Emits: (ADCrs:i32 GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue CPTmpN0_0;
        SDValue CPTmpN0_1;
        SDValue CPTmpN0_2;
        if (SelectShifterOperandReg(N, N0, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2)) {
          SDNode *Result = Emit_106(N, ARM::ADCrs, MVT::i32, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2);
          return Result;
        }
      }

      // Pattern: (adde:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
      // Emits: (ADCri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
      // Pattern complexity = 7  cost = 1  size = 0
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_so_imm(N1.getNode())) {
        SDNode *Result = Emit_102(N, ARM::ADCri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (adde:i32 GPR:i32:$a, GPR:i32:$b)
    // Emits: (ADCrr:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_103(N, ARM::ADCrr, MVT::i32);
    return Result;
  }

  // Pattern: (adde:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tADC:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_105(N, ARM::tADC, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_107(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2, Tmp3);
}
SDNode *Emit_108(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i32);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_109(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N10)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp2, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_110(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N10, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_111(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN10_0, SDValue &CPTmpN10_1, SDValue &CPTmpN10_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, CPTmpN10_0, CPTmpN10_1, CPTmpN10_2, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 7);
}
SDNode *Emit_112(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N10);
}
SDNode *Emit_113(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Emit_114(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0x18ULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, Tmp4, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_115(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0x8ULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, Tmp4, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_116(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_not_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp2, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_117(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp2, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_118(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N00)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, Tmp2, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_119(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, Tmp2, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_120(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, N00, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_121(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN00_0, SDValue &CPTmpN00_1, SDValue &CPTmpN00_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, CPTmpN00_0, CPTmpN00_1, CPTmpN00_2, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 7);
}
SDNode *Select_ISD_AND_i32(const SDValue &N) {
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      if (CheckAndMask(N0, Tmp0, INT64_C(16711935))) {

        // Pattern: (and:i32 (shl:i32 GPR:i32:$Src, 8:i32), 16711935:i32)
        // Emits: (UXTB16r_rot:i32 GPR:i32:$Src, 24:i32)
        // Pattern complexity = 32  cost = 1  size = 0
        if (N0.getOpcode() == ISD::SHL) {
          SDValue N00 = N0.getOperand(0);
          SDValue N01 = N0.getOperand(1);
          ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N01);
          if (Tmp1) {
            int64_t CN2 = Tmp1->getSExtValue();
            if (CN2 == INT64_C(8)) {
              SDNode *Result = Emit_114(N, ARM::UXTB16r_rot, MVT::i32);
              return Result;
            }
          }
        }

        // Pattern: (and:i32 (srl:i32 GPR:i32:$Src, 8:i32), 16711935:i32)
        // Emits: (UXTB16r_rot:i32 GPR:i32:$Src, 8:i32)
        // Pattern complexity = 32  cost = 1  size = 0
        if (N0.getOpcode() == ISD::SRL) {
          SDValue N00 = N0.getOperand(0);
          SDValue N01 = N0.getOperand(1);
          ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N01);
          if (Tmp1) {
            int64_t CN2 = Tmp1->getSExtValue();
            if (CN2 == INT64_C(8)) {
              SDNode *Result = Emit_115(N, ARM::UXTB16r_rot, MVT::i32);
              return Result;
            }
          }
        }
      }

      // Pattern: (and:i32 (rotr:i32 GPR:i32:$Src, (imm:i32)<<P:Predicate_rot_imm>>:$rot), 255:i32)
      // Emits: (UXTBr_rot:i32 GPR:i32:$Src, (imm:i32):$rot)
      // Pattern complexity = 31  cost = 1  size = 0
      if (CheckAndMask(N0, Tmp0, INT64_C(255)) &&
          N0.getOpcode() == ISD::ROTR) {
        SDValue N00 = N0.getOperand(0);
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::Constant &&
            Predicate_rot_imm(N01.getNode())) {
          SDNode *Result = Emit_108(N, ARM::UXTBr_rot, MVT::i32);
          return Result;
        }
      }

      // Pattern: (and:i32 (rotr:i32 GPR:i32:$Src, (imm:i32)<<P:Predicate_rot_imm>>:$rot), 65535:i32)
      // Emits: (UXTHr_rot:i32 GPR:i32:$Src, (imm:i32):$rot)
      // Pattern complexity = 31  cost = 1  size = 0
      if (CheckAndMask(N0, Tmp0, INT64_C(65535)) &&
          N0.getOpcode() == ISD::ROTR) {
        SDValue N00 = N0.getOperand(0);
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::Constant &&
            Predicate_rot_imm(N01.getNode())) {
          SDNode *Result = Emit_108(N, ARM::UXTHr_rot, MVT::i32);
          return Result;
        }
      }

      // Pattern: (and:i32 (rotr:i32 GPR:i32:$Src, (imm:i32)<<P:Predicate_rot_imm>>:$rot), 16711935:i32)
      // Emits: (UXTB16r_rot:i32 GPR:i32:$Src, (imm:i32):$rot)
      // Pattern complexity = 31  cost = 1  size = 0
      if (CheckAndMask(N0, Tmp0, INT64_C(16711935)) &&
          N0.getOpcode() == ISD::ROTR) {
        SDValue N00 = N0.getOperand(0);
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::Constant &&
            Predicate_rot_imm(N01.getNode())) {
          SDNode *Result = Emit_108(N, ARM::UXTB16r_rot, MVT::i32);
          return Result;
        }
      }

      // Pattern: (and:i32 GPR:i32:$Src, 255:i32)
      // Emits: (UXTBr:i32 GPR:i32:$Src)
      // Pattern complexity = 24  cost = 1  size = 0
      if (CheckAndMask(N0, Tmp0, INT64_C(255))) {
        SDNode *Result = Emit_107(N, ARM::UXTBr, MVT::i32);
        return Result;
      }

      // Pattern: (and:i32 GPR:i32:$Src, 65535:i32)
      // Emits: (UXTHr:i32 GPR:i32:$Src)
      // Pattern complexity = 24  cost = 1  size = 0
      if (CheckAndMask(N0, Tmp0, INT64_C(65535))) {
        SDNode *Result = Emit_107(N, ARM::UXTHr, MVT::i32);
        return Result;
      }

      // Pattern: (and:i32 GPR:i32:$Src, 16711935:i32)
      // Emits: (UXTB16r:i32 GPR:i32:$Src)
      // Pattern complexity = 24  cost = 1  size = 0
      if (CheckAndMask(N0, Tmp0, INT64_C(16711935))) {
        SDNode *Result = Emit_107(N, ARM::UXTB16r, MVT::i32);
        return Result;
      }
    }
  }
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i32 GPR:i32:$a, (xor:i32 so_reg:i32:$b, (imm:i32)<<P:Predicate_immAllOnes>>))
    // Emits: (BICrs:i32 GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 22  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue CPTmpN10_0;
        SDValue CPTmpN10_1;
        SDValue CPTmpN10_2;
        if (SelectShifterOperandReg(N, N10, CPTmpN10_0, CPTmpN10_1, CPTmpN10_2)) {
          SDValue N11 = N1.getOperand(1);
          if (N11.getOpcode() == ISD::Constant &&
              Predicate_immAllOnes(N11.getNode())) {
            SDNode *Result = Emit_111(N, ARM::BICrs, MVT::i32, CPTmpN10_0, CPTmpN10_1, CPTmpN10_2);
            return Result;
          }
        }
      }
    }

    // Pattern: (and:i32 (xor:i32 so_reg:i32:$b, (imm:i32)<<P:Predicate_immAllOnes>>), GPR:i32:$a)
    // Emits: (BICrs:i32 GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 22  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue CPTmpN00_0;
      SDValue CPTmpN00_1;
      SDValue CPTmpN00_2;
      if (SelectShifterOperandReg(N, N00, CPTmpN00_0, CPTmpN00_1, CPTmpN00_2)) {
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N01.getNode())) {
          SDNode *Result = Emit_121(N, ARM::BICrs, MVT::i32, CPTmpN00_0, CPTmpN00_1, CPTmpN00_2);
          return Result;
        }
      }
    }

    // Pattern: (and:i32 GPR:i32:$a, so_reg:i32:$b)
    // Emits: (ANDrs:i32 GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 15  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      SDValue CPTmpN1_2;
      if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2)) {
        SDNode *Result = Emit_38(N, ARM::ANDrs, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
        return Result;
      }
    }

    // Pattern: (and:i32 so_reg:i32:$b, GPR:i32:$a)
    // Emits: (ANDrs:i32 GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 15  cost = 1  size = 0
    {
      SDValue CPTmpN0_0;
      SDValue CPTmpN0_1;
      SDValue CPTmpN0_2;
      if (SelectShifterOperandReg(N, N0, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2)) {
        SDNode *Result = Emit_61(N, ARM::ANDrs, MVT::i32, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2);
        return Result;
      }
    }
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::Constant) {

          // Pattern: (and:i32 GPR:i32:$a, (xor:i32 (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b, (imm:i32)<<P:Predicate_immAllOnes>>))
          // Emits: (BICri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
          // Pattern complexity = 14  cost = 1  size = 0
          if (Predicate_so_imm(N10.getNode())) {
            SDValue N11 = N1.getOperand(1);
            if (N11.getOpcode() == ISD::Constant &&
                Predicate_immAllOnes(N11.getNode())) {
              SDNode *Result = Emit_109(N, ARM::BICri, MVT::i32);
              return Result;
            }
          }

          // Pattern: (and:i32 GPR:i32:$a, (xor:i32 (imm:i32)<<P:Predicate_immAllOnes>>, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b))
          // Emits: (BICri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
          // Pattern complexity = 14  cost = 1  size = 0
          if (Predicate_immAllOnes(N10.getNode())) {
            SDValue N11 = N1.getOperand(1);
            if (N11.getOpcode() == ISD::Constant &&
                Predicate_so_imm(N11.getNode())) {
              SDNode *Result = Emit_117(N, ARM::BICri, MVT::i32);
              return Result;
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::Constant) {

        // Pattern: (and:i32 (xor:i32 (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b, (imm:i32)<<P:Predicate_immAllOnes>>), GPR:i32:$a)
        // Emits: (BICri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
        // Pattern complexity = 14  cost = 1  size = 0
        if (Predicate_so_imm(N00.getNode())) {
          SDValue N01 = N0.getOperand(1);
          if (N01.getOpcode() == ISD::Constant &&
              Predicate_immAllOnes(N01.getNode())) {
            SDNode *Result = Emit_118(N, ARM::BICri, MVT::i32);
            return Result;
          }
        }

        // Pattern: (and:i32 (xor:i32 (imm:i32)<<P:Predicate_immAllOnes>>, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b), GPR:i32:$a)
        // Emits: (BICri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
        // Pattern complexity = 14  cost = 1  size = 0
        if (Predicate_immAllOnes(N00.getNode())) {
          SDValue N01 = N0.getOperand(1);
          if (N01.getOpcode() == ISD::Constant &&
              Predicate_so_imm(N01.getNode())) {
            SDNode *Result = Emit_119(N, ARM::BICri, MVT::i32);
            return Result;
          }
        }
      }
    }

    // Pattern: (and:i32 GPR:i32:$a, (xor:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immAllOnes>>))
    // Emits: (BICrr:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 10  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::XOR) {
      SDValue N10 = N1.getOperand(0);
      SDValue N11 = N1.getOperand(1);
      if (N11.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N11.getNode())) {
        SDNode *Result = Emit_110(N, ARM::BICrr, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (and:i32 GPR:i32:$lhs, (xor:i32 GPR:i32:$rhs, (imm:i32)<<P:Predicate_immAllOnes>>))
  // Emits: (tBIC:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 10  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::XOR) {
      SDValue N10 = N1.getOperand(0);
      SDValue N11 = N1.getOperand(1);
      if (N11.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N11.getNode())) {
        SDNode *Result = Emit_112(N, ARM::tBIC, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (and:i32 (xor:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immAllOnes>>), GPR:i32:$a)
  // Emits: (BICrr:i32 GPR:i32:$a, GPR:i32:$b)
  // Pattern complexity = 10  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_120(N, ARM::BICrr, MVT::i32);
        return Result;
      }
    }
  }
  if ((Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {

      // Pattern: (and:i32 GPR:i32:$src, 255:i32)
      // Emits: (tUXTB:i32 GPR:i32:$src)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CheckAndMask(N0, Tmp0, INT64_C(255))) {
        SDNode *Result = Emit_113(N, ARM::tUXTB, MVT::i32);
        return Result;
      }

      // Pattern: (and:i32 GPR:i32:$src, 65535:i32)
      // Emits: (tUXTH:i32 GPR:i32:$src)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CheckAndMask(N0, Tmp0, INT64_C(65535))) {
        SDNode *Result = Emit_113(N, ARM::tUXTH, MVT::i32);
        return Result;
      }
    }
  }
  if ((!Subtarget->isThumb())) {
    {
      SDValue N0 = N.getOperand(0);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant) {

        // Pattern: (and:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
        // Emits: (ANDri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
        // Pattern complexity = 7  cost = 1  size = 0
        if (Predicate_so_imm(N1.getNode())) {
          SDNode *Result = Emit_36(N, ARM::ANDri, MVT::i32);
          return Result;
        }

        // Pattern: (and:i32 GPR:i32:$src, (imm:i32)<<P:Predicate_so_imm_not>><<X:so_imm_not_XFORM>>:$imm)
        // Emits: (BICri:i32 GPR:i32:$src, (so_imm_not_XFORM:i32 (imm:i32)<<P:Predicate_so_imm_not>>:$imm))
        // Pattern complexity = 7  cost = 1  size = 0
        if (Predicate_so_imm_not(N1.getNode())) {
          SDNode *Result = Emit_116(N, ARM::BICri, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (and:i32 GPR:i32:$a, GPR:i32:$b)
    // Emits: (ANDrr:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_37(N, ARM::ANDrr, MVT::i32);
    return Result;
  }

  // Pattern: (and:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tAND:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_46(N, ARM::tAND, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BIT_CONVERT_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getNode()->getValueType(0) == MVT::f32) {
      SDNode *Result = Emit_23(N, ARM::FMRS, MVT::i32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BIT_CONVERT_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_23(N, ARM::FMSR, MVT::f32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_122(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain);
}
SDNode *Select_ISD_BR(const SDValue &N) {

  // Pattern: (br:isVoid (bb:Other):$target)
  // Emits: (B:isVoid (bb:Other):$target)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::BasicBlock) {
      SDNode *Result = Emit_122(N, ARM::B);
      return Result;
    }
  }

  // Pattern: (br:isVoid (bb:Other):$target)
  // Emits: (tB:isVoid (bb:Other):$target)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::BasicBlock) {
      SDNode *Result = Emit_122(N, ARM::tB);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BSWAP_i32(const SDValue &N) {

  // Pattern: (bswap:i32 GPR:i32:$src)
  // Emits: (REV:i32 GPR:i32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDNode *Result = Emit_23(N, ARM::REV, MVT::i32);
    return Result;
  }

  // Pattern: (bswap:i32 GPR:i32:$src)
  // Emits: (tREV:i32 GPR:i32:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDNode *Result = Emit_31(N, ARM::tREV, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_123(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { N1, N2, Tmp2, Tmp3, Chain, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, HasInFlag ? 6 : 5);
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
SDNode *Emit_124(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Tmp0, Tmp1, Chain, InFlag };
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

  // Pattern: (ARMcallseq_end:isVoid (timm:i32):$amt1, (timm:i32):$amt2)
  // Emits: (ADJCALLSTACKUP:isVoid (timm:i32):$amt1, (timm:i32):$amt2)
  // Pattern complexity = 9  cost = 1  size = 0
  {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::TargetConstant) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::TargetConstant) {
        SDNode *Result = Emit_123(N, ARM::ADJCALLSTACKUP);
        return Result;
      }
    }
  }

  // Pattern: (ARMcallseq_end:isVoid (imm:i32):$amt1, (imm:i32):$amt2)
  // Emits: (tADJCALLSTACKUP:isVoid (imm:i32):$amt1, (imm:i32):$amt2)
  // Pattern complexity = 9  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_124(N, ARM::tADJCALLSTACKUP);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_125(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, Tmp1, Tmp2, Chain };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, 4);
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
SDNode *Emit_126(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
SDNode *Select_ISD_CALLSEQ_START(const SDValue &N) {

  // Pattern: (ARMcallseq_start:isVoid (timm:i32):$amt)
  // Emits: (ADJCALLSTACKDOWN:isVoid (timm:i32):$amt)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::TargetConstant) {
      SDNode *Result = Emit_125(N, ARM::ADJCALLSTACKDOWN);
      return Result;
    }
  }

  // Pattern: (ARMcallseq_start:isVoid (imm:i32):$amt)
  // Emits: (tADJCALLSTACKDOWN:isVoid (imm:i32):$amt)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_126(N, ARM::tADJCALLSTACKDOWN);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_CTLZ_i32(const SDValue &N) {
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TOps())) {
    SDNode *Result = Emit_23(N, ARM::CLZ, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_127(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = Transform_so_imm_XFORM(Tmp0.getNode());
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { Tmp1, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_128(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = Transform_so_imm_not_XFORM(Tmp0.getNode());
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { Tmp1, Tmp2, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_129(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, Tmp1, Tmp2);
}
SDNode *Emit_130(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Emit_131(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = Transform_thumb_immshifted_val(Tmp0.getNode());
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp1), 0);
  SDValue Tmp3 = Transform_thumb_immshifted_shamt(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Emit_132(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = Transform_imm_comp_XFORM(Tmp0.getNode());
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp1), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2);
}
SDNode *Select_ISD_Constant_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {

    // Pattern: (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$src
    // Emits: (MOVi:i32 (so_imm_XFORM:i32 (imm:i32):$src))
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_so_imm(N.getNode())) {
      SDNode *Result = Emit_127(N, ARM::MOVi, MVT::i32);
      return Result;
    }

    // Pattern: (imm:i32)<<P:Predicate_so_imm_not>><<X:so_imm_not_XFORM>>:$imm
    // Emits: (MVNi:i32 (so_imm_not_XFORM:i32 (imm:i32):$imm))
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_so_imm_not(N.getNode())) {
      SDNode *Result = Emit_128(N, ARM::MVNi, MVT::i32);
      return Result;
    }

    // Pattern: (imm:i32)<<P:Predicate_so_imm2part>>:$src
    // Emits: (MOVi2pieces:i32 (imm:i32):$src)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_so_imm2part(N.getNode())) {
      SDNode *Result = Emit_129(N, ARM::MOVi2pieces, MVT::i32);
      return Result;
    }
  }
  if ((Subtarget->isThumb())) {

    // Pattern: (imm:i32)<<P:Predicate_imm0_255>>:$src
    // Emits: (tMOVi8:i32 (imm:i32):$src)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_imm0_255(N.getNode())) {
      SDNode *Result = Emit_130(N, ARM::tMOVi8, MVT::i32);
      return Result;
    }

    // Pattern: (imm:i32)<<P:Predicate_thumb_immshifted>>:$src
    // Emits: (tLSLri:i32 (tMOVi8:i32 (thumb_immshifted_val:i32 (imm:i32):$src)), (thumb_immshifted_shamt:i32 (imm:i32):$src))
    // Pattern complexity = 4  cost = 2  size = 0
    if (Predicate_thumb_immshifted(N.getNode())) {
      SDNode *Result = Emit_131(N, ARM::tMOVi8, ARM::tLSLri, MVT::i32, MVT::i32);
      return Result;
    }

    // Pattern: (imm:i32)<<P:Predicate_imm0_255_comp>>:$src
    // Emits: (tMVN:i32 (tMOVi8:i32 (imm_comp_XFORM:i32 (imm:i32):$src)))
    // Pattern complexity = 4  cost = 2  size = 0
    if (Predicate_imm0_255_comp(N.getNode())) {
      SDNode *Result = Emit_132(N, ARM::tMOVi8, ARM::tMVN, MVT::i32, MVT::i32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_133(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i32);
  SDValue Ops0[] = { Tmp0, Tmp1, Tmp2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_DEBUG_LOC(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDValue N3 = N.getOperand(3);
      if (N3.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_133(N, ARM::DWARF_LOC);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FABS_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_23(N, ARM::FABSS, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FABS_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_23(N, ARM::FABSD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_134(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, N00, N01, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_135(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, N000, N001, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_136(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N10, N11, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_137(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N100, N101, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Select_ISD_FADD_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    {
      SDValue N0 = N.getOperand(0);

      // Pattern: (fadd:f32 (fneg:f32 (fmul:f32 SPR:f32:$a, SPR:f32:$b)), SPR:f32:$dstin)
      // Emits: (FNMACS:f32 SPR:f32:$dstin, SPR:f32:$a, SPR:f32:$b)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N0.getOpcode() == ISD::FNEG) {
        SDValue N00 = N0.getOperand(0);
        if (N00.getOpcode() == ISD::FMUL) {
          SDNode *Result = Emit_135(N, ARM::FNMACS, MVT::f32);
          return Result;
        }
      }

      // Pattern: (fadd:f32 SPR:f32:$dstin, (fneg:f32 (fmul:f32 SPR:f32:$a, SPR:f32:$b)))
      // Emits: (FNMACS:f32 SPR:f32:$dstin, SPR:f32:$a, SPR:f32:$b)
      // Pattern complexity = 9  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::FNEG) {
          SDValue N10 = N1.getOperand(0);
          if (N10.getOpcode() == ISD::FMUL) {
            SDNode *Result = Emit_137(N, ARM::FNMACS, MVT::f32);
            return Result;
          }
        }
      }

      // Pattern: (fadd:f32 (fmul:f32 SPR:f32:$a, SPR:f32:$b), SPR:f32:$dstin)
      // Emits: (FMACS:f32 SPR:f32:$dstin, SPR:f32:$a, SPR:f32:$b)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N0.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_134(N, ARM::FMACS, MVT::f32);
        return Result;
      }

      // Pattern: (fadd:f32 SPR:f32:$dstin, (fmul:f32 SPR:f32:$a, SPR:f32:$b))
      // Emits: (FMACS:f32 SPR:f32:$dstin, SPR:f32:$a, SPR:f32:$b)
      // Pattern complexity = 6  cost = 1  size = 0
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_136(N, ARM::FMACS, MVT::f32);
        return Result;
      }
    }

    // Pattern: (fadd:f32 SPR:f32:$a, SPR:f32:$b)
    // Emits: (FADDS:f32 SPR:f32:$a, SPR:f32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_21(N, ARM::FADDS, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FADD_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    {
      SDValue N0 = N.getOperand(0);

      // Pattern: (fadd:f64 (fneg:f64 (fmul:f64 DPR:f64:$a, DPR:f64:$b)), DPR:f64:$dstin)
      // Emits: (FNMACD:f64 DPR:f64:$dstin, DPR:f64:$a, DPR:f64:$b)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N0.getOpcode() == ISD::FNEG) {
        SDValue N00 = N0.getOperand(0);
        if (N00.getOpcode() == ISD::FMUL) {
          SDNode *Result = Emit_135(N, ARM::FNMACD, MVT::f64);
          return Result;
        }
      }

      // Pattern: (fadd:f64 DPR:f64:$dstin, (fneg:f64 (fmul:f64 DPR:f64:$a, DPR:f64:$b)))
      // Emits: (FNMACD:f64 DPR:f64:$dstin, DPR:f64:$a, DPR:f64:$b)
      // Pattern complexity = 9  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::FNEG) {
          SDValue N10 = N1.getOperand(0);
          if (N10.getOpcode() == ISD::FMUL) {
            SDNode *Result = Emit_137(N, ARM::FNMACD, MVT::f64);
            return Result;
          }
        }
      }

      // Pattern: (fadd:f64 (fmul:f64 DPR:f64:$a, DPR:f64:$b), DPR:f64:$dstin)
      // Emits: (FMACD:f64 DPR:f64:$dstin, DPR:f64:$a, DPR:f64:$b)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N0.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_134(N, ARM::FMACD, MVT::f64);
        return Result;
      }

      // Pattern: (fadd:f64 DPR:f64:$dstin, (fmul:f64 DPR:f64:$a, DPR:f64:$b))
      // Emits: (FMACD:f64 DPR:f64:$dstin, DPR:f64:$a, DPR:f64:$b)
      // Pattern complexity = 6  cost = 1  size = 0
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_136(N, ARM::FMACD, MVT::f64);
        return Result;
      }
    }

    // Pattern: (fadd:f64 DPR:f64:$a, DPR:f64:$b)
    // Emits: (FADDD:f64 DPR:f64:$a, DPR:f64:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_21(N, ARM::FADDD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FDIV_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_21(N, ARM::FDIVS, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FDIV_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_21(N, ARM::FDIVD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_138(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N1, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_139(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N0, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_ISD_FMUL_f32(const SDValue &N) {
  if ((!HonorSignDependentRoundingFPMath())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fmul:f32 (fneg:f32 SPR:f32:$a), SPR:f32:$b)
    // Emits: (FNMULS:f32 SPR:f32:$a, SPR:f32:$b)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FNEG) {
      SDNode *Result = Emit_138(N, ARM::FNMULS, MVT::f32);
      return Result;
    }

    // Pattern: (fmul:f32 SPR:f32:$b, (fneg:f32 SPR:f32:$a))
    // Emits: (FNMULS:f32 SPR:f32:$a, SPR:f32:$b)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::FNEG) {
      SDNode *Result = Emit_139(N, ARM::FNMULS, MVT::f32);
      return Result;
    }
  }

  // Pattern: (fmul:f32 SPR:f32:$a, SPR:f32:$b)
  // Emits: (FMULS:f32 SPR:f32:$a, SPR:f32:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_21(N, ARM::FMULS, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FMUL_f64(const SDValue &N) {
  if ((!HonorSignDependentRoundingFPMath())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fmul:f64 (fneg:f64 DPR:f64:$a), DPR:f64:$b)
    // Emits: (FNMULD:f64 DPR:f64:$a, DPR:f64:$b)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FNEG) {
      SDNode *Result = Emit_138(N, ARM::FNMULD, MVT::f64);
      return Result;
    }

    // Pattern: (fmul:f64 DPR:f64:$b, (fneg:f64 DPR:f64:$a))
    // Emits: (FNMULD:f64 DPR:f64:$a, DPR:f64:$b)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::FNEG) {
      SDNode *Result = Emit_139(N, ARM::FNMULD, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fmul:f64 DPR:f64:$a, DPR:f64:$b)
  // Emits: (FMULD:f64 DPR:f64:$a, DPR:f64:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_21(N, ARM::FMULD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_140(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N01, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_ISD_FNEG_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {

    // Pattern: (fneg:f32 (fmul:f32 SPR:f32:$a, SPR:f32:$b))
    // Emits: (FNMULS:f32 SPR:f32:$a, SPR:f32:$b)
    // Pattern complexity = 6  cost = 1  size = 0
    {
      SDValue N0 = N.getOperand(0);
      if (N0.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_140(N, ARM::FNMULS, MVT::f32);
        return Result;
      }
    }

    // Pattern: (fneg:f32 SPR:f32:$a)
    // Emits: (FNEGS:f32 SPR:f32:$a)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_23(N, ARM::FNEGS, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FNEG_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {

    // Pattern: (fneg:f64 (fmul:f64 DPR:f64:$a, DPR:f64:$b))
    // Emits: (FNMULD:f64 DPR:f64:$a, DPR:f64:$b)
    // Pattern complexity = 6  cost = 1  size = 0
    {
      SDValue N0 = N.getOperand(0);
      if (N0.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_140(N, ARM::FNMULD, MVT::f64);
        return Result;
      }
    }

    // Pattern: (fneg:f64 DPR:f64:$a)
    // Emits: (FNEGD:f64 DPR:f64:$a)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_23(N, ARM::FNEGD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FP_EXTEND_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_23(N, ARM::FCVTDS, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FP_ROUND_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_23(N, ARM::FCVTSD, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FSQRT_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_23(N, ARM::FSQRTS, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FSQRT_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_23(N, ARM::FSQRTD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FSUB_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    {
      SDValue N0 = N.getOperand(0);

      // Pattern: (fsub:f32 (fneg:f32 (fmul:f32 SPR:f32:$a, SPR:f32:$b)), SPR:f32:$dstin)
      // Emits: (FNMSCS:f32 SPR:f32:$dstin, SPR:f32:$a, SPR:f32:$b)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N0.getOpcode() == ISD::FNEG) {
        SDValue N00 = N0.getOperand(0);
        if (N00.getOpcode() == ISD::FMUL) {
          SDNode *Result = Emit_135(N, ARM::FNMSCS, MVT::f32);
          return Result;
        }
      }

      // Pattern: (fsub:f32 (fmul:f32 SPR:f32:$a, SPR:f32:$b), SPR:f32:$dstin)
      // Emits: (FMSCS:f32 SPR:f32:$dstin, SPR:f32:$a, SPR:f32:$b)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N0.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_134(N, ARM::FMSCS, MVT::f32);
        return Result;
      }
    }

    // Pattern: (fsub:f32 SPR:f32:$a, SPR:f32:$b)
    // Emits: (FSUBS:f32 SPR:f32:$a, SPR:f32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_21(N, ARM::FSUBS, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FSUB_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    {
      SDValue N0 = N.getOperand(0);

      // Pattern: (fsub:f64 (fneg:f64 (fmul:f64 DPR:f64:$a, DPR:f64:$b)), DPR:f64:$dstin)
      // Emits: (FNMSCD:f64 DPR:f64:$dstin, DPR:f64:$a, DPR:f64:$b)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N0.getOpcode() == ISD::FNEG) {
        SDValue N00 = N0.getOperand(0);
        if (N00.getOpcode() == ISD::FMUL) {
          SDNode *Result = Emit_135(N, ARM::FNMSCD, MVT::f64);
          return Result;
        }
      }

      // Pattern: (fsub:f64 (fmul:f64 DPR:f64:$a, DPR:f64:$b), DPR:f64:$dstin)
      // Emits: (FMSCD:f64 DPR:f64:$dstin, DPR:f64:$a, DPR:f64:$b)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N0.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_134(N, ARM::FMSCD, MVT::f64);
        return Result;
      }
    }

    // Pattern: (fsub:f64 DPR:f64:$a, DPR:f64:$b)
    // Emits: (FSUBD:f64 DPR:f64:$a, DPR:f64:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_21(N, ARM::FSUBD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_141(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, Tmp1, Tmp2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 6);
}
SDNode *Emit_142(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1, SDValue &CPTmpN1_2) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, CPTmpN1_2, Tmp1, Tmp2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 7);
}
SDNode *Emit_143(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1, SDValue &CPTmpN1_2) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, CPTmpN1_2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
}
SDNode *Emit_144(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_145(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, N10, LSI_N, Chain);
}
SDNode *Select_ISD_LOAD_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedload(N.getNode())) {

      // Pattern: (ld:i32 addrmodepc:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (PICLDR:i32 addrmodepc:i32:$addr)
      // Pattern complexity = 23  cost = 1  size = 0
      if (Predicate_load(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrModePC(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_141(N, ARM::PICLDR, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (Predicate_zextload(N.getNode())) {

        // Pattern: (ld:i32 addrmodepc:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
        // Emits: (PICLDRH:i32 addrmodepc:i32:$addr)
        // Pattern complexity = 23  cost = 1  size = 0
        if (Predicate_zextloadi16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          if (SelectAddrModePC(N, N1, CPTmpN1_0, CPTmpN1_1) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_141(N, ARM::PICLDRH, MVT::i32, CPTmpN1_0, CPTmpN1_1);
            return Result;
          }
        }

        // Pattern: (ld:i32 addrmodepc:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
        // Emits: (PICLDRB:i32 addrmodepc:i32:$addr)
        // Pattern complexity = 23  cost = 1  size = 0
        if (Predicate_zextloadi8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          if (SelectAddrModePC(N, N1, CPTmpN1_0, CPTmpN1_1) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_141(N, ARM::PICLDRB, MVT::i32, CPTmpN1_0, CPTmpN1_1);
            return Result;
          }
        }
      }
      if (Predicate_sextload(N.getNode())) {

        // Pattern: (ld:i32 addrmodepc:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
        // Emits: (PICLDRSH:i32 addrmodepc:i32:$addr)
        // Pattern complexity = 23  cost = 1  size = 0
        if (Predicate_sextloadi16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          if (SelectAddrModePC(N, N1, CPTmpN1_0, CPTmpN1_1) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_141(N, ARM::PICLDRSH, MVT::i32, CPTmpN1_0, CPTmpN1_1);
            return Result;
          }
        }

        // Pattern: (ld:i32 addrmodepc:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
        // Emits: (PICLDRSB:i32 addrmodepc:i32:$addr)
        // Pattern complexity = 23  cost = 1  size = 0
        if (Predicate_sextloadi8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          if (SelectAddrModePC(N, N1, CPTmpN1_0, CPTmpN1_1) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_141(N, ARM::PICLDRSB, MVT::i32, CPTmpN1_0, CPTmpN1_1);
            return Result;
          }
        }
      }

      // Pattern: (ld:i32 addrmode2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LDR:i32 addrmode2:i32:$addr)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_load(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrMode2(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_142(N, ARM::LDR, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }
      if (Predicate_zextload(N.getNode())) {

        // Pattern: (ld:i32 addrmode3:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
        // Emits: (LDRH:i32 addrmode3:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_zextloadi16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectAddrMode3(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_142(N, ARM::LDRH, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }

        // Pattern: (ld:i32 addrmode2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
        // Emits: (LDRB:i32 addrmode2:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_zextloadi8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectAddrMode2(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_142(N, ARM::LDRB, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }
      }
      if (Predicate_sextload(N.getNode())) {

        // Pattern: (ld:i32 addrmode3:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
        // Emits: (LDRSH:i32 addrmode3:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_sextloadi16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectAddrMode3(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_142(N, ARM::LDRSH, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }

        // Pattern: (ld:i32 addrmode3:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
        // Emits: (LDRSB:i32 addrmode3:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_sextloadi8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectAddrMode3(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_142(N, ARM::LDRSB, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }
      }
    }
  }
  if ((Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedload(N.getNode())) {

      // Pattern: (ld:i32 t_addrmode_s4:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (tLDR:i32 t_addrmode_s4:i32:$addr)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_load(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectThumbAddrModeS4(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_143(N, ARM::tLDR, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }
      if (Predicate_zextload(N.getNode())) {

        // Pattern: (ld:i32 t_addrmode_s1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
        // Emits: (tLDRB:i32 t_addrmode_s1:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_zextloadi8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectThumbAddrModeS1(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_143(N, ARM::tLDRB, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }

        // Pattern: (ld:i32 t_addrmode_s2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
        // Emits: (tLDRH:i32 t_addrmode_s2:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_zextloadi16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectThumbAddrModeS2(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_143(N, ARM::tLDRH, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }
      }
    }
  }
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedload(N.getNode())) {

      // Pattern: (ld:i32 addrmode2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>>
      // Emits: (LDRB:i32 addrmode2:i32:$addr)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_zextload(N.getNode()) &&
          Predicate_zextloadi1(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectAddrMode2(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_142(N, ARM::LDRB, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }
      if (Predicate_extload(N.getNode())) {

        // Pattern: (ld:i32 addrmode2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>>
        // Emits: (LDRB:i32 addrmode2:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_extloadi1(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectAddrMode2(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_142(N, ARM::LDRB, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }

        // Pattern: (ld:i32 addrmode2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
        // Emits: (LDRB:i32 addrmode2:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_extloadi8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectAddrMode2(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_142(N, ARM::LDRB, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }

        // Pattern: (ld:i32 addrmode3:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
        // Emits: (LDRH:i32 addrmode3:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_extloadi16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectAddrMode3(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_142(N, ARM::LDRH, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }
      }
    }
  }
  if ((Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedload(N.getNode())) {

      // Pattern: (ld:i32 t_addrmode_s1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>>
      // Emits: (tLDRB:i32 t_addrmode_s1:i32:$addr)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_zextload(N.getNode()) &&
          Predicate_zextloadi1(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectThumbAddrModeS1(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_143(N, ARM::tLDRB, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }
      if (Predicate_extload(N.getNode())) {

        // Pattern: (ld:i32 t_addrmode_s1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>>
        // Emits: (tLDRB:i32 t_addrmode_s1:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_extloadi1(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectThumbAddrModeS1(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_143(N, ARM::tLDRB, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }

        // Pattern: (ld:i32 t_addrmode_s1:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
        // Emits: (tLDRB:i32 t_addrmode_s1:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_extloadi8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectThumbAddrModeS1(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_143(N, ARM::tLDRB, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }

        // Pattern: (ld:i32 t_addrmode_s2:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
        // Emits: (tLDRH:i32 t_addrmode_s2:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_extloadi16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          SDValue CPTmpN1_2;
          if (SelectThumbAddrModeS2(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_143(N, ARM::tLDRH, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
            return Result;
          }
        }
      }
      if (Predicate_sextload(N.getNode())) {

        // Pattern: (ld:i32 t_addrmode_rr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>>
        // Emits: (tLDRSB:i32 t_addrmode_rr:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (Predicate_sextloadi8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          if (SelectThumbAddrModeRR(N, N1, CPTmpN1_0, CPTmpN1_1) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_144(N, ARM::tLDRSB, MVT::i32, CPTmpN1_0, CPTmpN1_1);
            return Result;
          }
        }

        // Pattern: (ld:i32 t_addrmode_rr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
        // Emits: (tLDRSH:i32 t_addrmode_rr:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (Predicate_sextloadi16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue CPTmpN1_0;
          SDValue CPTmpN1_1;
          if (SelectThumbAddrModeRR(N, N1, CPTmpN1_0, CPTmpN1_1) &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_144(N, ARM::tLDRSH, MVT::i32, CPTmpN1_0, CPTmpN1_1);
            return Result;
          }
        }
      }

      // Pattern: (ld:i32 t_addrmode_sp:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (tLDRspi:i32 t_addrmode_sp:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_load(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectThumbAddrModeSP(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_144(N, ARM::tLDRspi, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
    }
  }
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedload(N.getNode()) &&
        Predicate_extload(N.getNode())) {

      // Pattern: (ld:i32 addrmodepc:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
      // Emits: (PICLDRB:i32 addrmodepc:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrModePC(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_141(N, ARM::PICLDRB, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i32 addrmodepc:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
      // Emits: (PICLDRH:i32 addrmodepc:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrModePC(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_141(N, ARM::PICLDRH, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
    }
  }

  // Pattern: (ld:i32 (ARMWrapper:i32 (tconstpool:i32):$addr))<<P:Predicate_unindexedload>><<P:Predicate_load>>
  // Emits: (tLDRpci:i32 (tconstpool:i32):$addr)
  // Pattern complexity = 10  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedload(N.getNode()) &&
        Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ARMISD::Wrapper) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::TargetConstantPool) {
          SDNode *Result = Emit_145(N, ARM::tLDRpci, MVT::i32);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_f32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedload(N.getNode()) &&
        Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrMode5(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_141(N, ARM::FLDS, MVT::f32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_f64(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedload(N.getNode()) &&
        Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrMode5(N, N1, CPTmpN1_0, CPTmpN1_1) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_141(N, ARM::FLDD, MVT::f64, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_146(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N10, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_147(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N10, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_148(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp6 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp7 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N10, Tmp6, Tmp7 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_149(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp10 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp11 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N100, Tmp10, Tmp11 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_150(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp8 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp9 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N000, N10, Tmp8, Tmp9 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_151(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, N10, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_152(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp8 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp9 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N100, Tmp8, Tmp9 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_153(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N1, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_154(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N00, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_155(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp6 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp7 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N00, Tmp6, Tmp7 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_156(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp10 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp11 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N000, Tmp10, Tmp11 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_157(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp8 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp9 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N100, N00, Tmp8, Tmp9 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_158(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, N00, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_159(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp8 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp9 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N000, Tmp8, Tmp9 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_160(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N0, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_ISD_MUL_i32(const SDValue &N) {
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TEOps())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::SRA) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::SHL) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N01);
            if (Tmp2) {
              int64_t CN3 = Tmp2->getSExtValue();
              if (CN3 == INT64_C(16)) {
                SDValue N1 = N.getOperand(1);
                if (N1.getOpcode() == ISD::SRA) {
                  SDValue N10 = N1.getOperand(0);
                  if (N10.getOpcode() == ISD::SHL) {
                    SDValue N100 = N10.getOperand(0);
                    SDValue N101 = N10.getOperand(1);
                    ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N101);
                    if (Tmp4) {
                      int64_t CN5 = Tmp4->getSExtValue();
                      if (CN5 == INT64_C(16)) {
                        SDValue N11 = N1.getOperand(1);
                        ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N11);
                        if (Tmp6) {
                          int64_t CN7 = Tmp6->getSExtValue();
                          if (CN7 == INT64_C(16)) {

                            // Pattern: (mul:i32 (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32), (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32))
                            // Emits: (SMULBB:i32 GPR:i32:$a, GPR:i32:$b)
                            // Pattern complexity = 35  cost = 1  size = 0
                            {
                              SDNode *Result = Emit_149(N, ARM::SMULBB, MVT::i32);
                              return Result;
                            }

                            // Pattern: (mul:i32 (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32), (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32))
                            // Emits: (SMULBB:i32 GPR:i32:$a, GPR:i32:$b)
                            // Pattern complexity = 35  cost = 1  size = 0
                            SDNode *Result = Emit_156(N, ARM::SMULBB, MVT::i32);
                            return Result;
                          }
                        }
                      }
                    }
                  }

                  // Pattern: (mul:i32 (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32), (sra:i32 GPR:i32:$b, 16:i32))
                  // Emits: (SMULBT:i32 GPR:i32:$a, GPR:i32:$b)
                  // Pattern complexity = 27  cost = 1  size = 0
                  SDValue N11 = N1.getOperand(1);
                  ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N11);
                  if (Tmp4) {
                    int64_t CN5 = Tmp4->getSExtValue();
                    if (CN5 == INT64_C(16)) {
                      SDNode *Result = Emit_150(N, ARM::SMULBT, MVT::i32);
                      return Result;
                    }
                  }
                }
              }
            }
          }
        }
      }
      {
        SDValue N01 = N0.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::SRA) {
              SDValue N10 = N1.getOperand(0);
              if (N10.getOpcode() == ISD::SHL) {
                SDValue N100 = N10.getOperand(0);
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDValue N11 = N1.getOperand(1);
                    ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N11);
                    if (Tmp4) {
                      int64_t CN5 = Tmp4->getSExtValue();
                      if (CN5 == INT64_C(16)) {

                        // Pattern: (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32))
                        // Emits: (SMULTB:i32 GPR:i32:$a, GPR:i32:$b)
                        // Pattern complexity = 27  cost = 1  size = 0
                        {
                          SDNode *Result = Emit_152(N, ARM::SMULTB, MVT::i32);
                          return Result;
                        }

                        // Pattern: (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), (sra:i32 (shl:i32 GPR:i32:$a, 16:i32), 16:i32))
                        // Emits: (SMULBT:i32 GPR:i32:$a, GPR:i32:$b)
                        // Pattern complexity = 27  cost = 1  size = 0
                        SDNode *Result = Emit_157(N, ARM::SMULBT, MVT::i32);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }

      // Pattern: (mul:i32 (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32), (sra:i32 GPR:i32:$a, 16:i32))
      // Emits: (SMULTB:i32 GPR:i32:$a, GPR:i32:$b)
      // Pattern complexity = 27  cost = 1  size = 0
      if (N00.getOpcode() == ISD::SHL) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N01);
            if (Tmp2) {
              int64_t CN3 = Tmp2->getSExtValue();
              if (CN3 == INT64_C(16)) {
                SDValue N1 = N.getOperand(1);
                if (N1.getOpcode() == ISD::SRA) {
                  SDValue N10 = N1.getOperand(0);
                  SDValue N11 = N1.getOperand(1);
                  ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N11);
                  if (Tmp4) {
                    int64_t CN5 = Tmp4->getSExtValue();
                    if (CN5 == INT64_C(16)) {
                      SDNode *Result = Emit_159(N, ARM::SMULTB, MVT::i32);
                      return Result;
                    }
                  }
                }
              }
            }
          }
        }
      }
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(16)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::SRA) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp2) {
              int64_t CN3 = Tmp2->getSExtValue();
              if (CN3 == INT64_C(16)) {

                // Pattern: (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), (sra:i32 GPR:i32:$b, 16:i32))
                // Emits: (SMULTT:i32 GPR:i32:$a, GPR:i32:$b)
                // Pattern complexity = 19  cost = 1  size = 0
                {
                  SDNode *Result = Emit_148(N, ARM::SMULTT, MVT::i32);
                  return Result;
                }

                // Pattern: (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), (sra:i32 GPR:i32:$a, 16:i32))
                // Emits: (SMULTT:i32 GPR:i32:$a, GPR:i32:$b)
                // Pattern complexity = 19  cost = 1  size = 0
                SDNode *Result = Emit_155(N, ARM::SMULTT, MVT::i32);
                return Result;
              }
            }
          }
        }
      }
    }

    // Pattern: (mul:i32 (sext_inreg:i32 GPR:i32:$a, i16:Other), (sra:i32 GPR:i32:$b, 16:i32))
    // Emits: (SMULBT:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 14  cost = 1  size = 0
    if (N0.getOpcode() == ISD::SIGN_EXTEND_INREG) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (cast<VTSDNode>(N01)->getVT() == MVT::i16) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::SRA) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDNode *Result = Emit_147(N, ARM::SMULBT, MVT::i32);
              return Result;
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::SRA) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(16)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::SIGN_EXTEND_INREG) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            if (cast<VTSDNode>(N11)->getVT() == MVT::i16) {

              // Pattern: (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), (sext_inreg:i32 GPR:i32:$b, i16:Other))
              // Emits: (SMULTB:i32 GPR:i32:$a, GPR:i32:$b)
              // Pattern complexity = 14  cost = 1  size = 0
              {
                SDNode *Result = Emit_147(N, ARM::SMULTB, MVT::i32);
                return Result;
              }

              // Pattern: (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), (sext_inreg:i32 GPR:i32:$a, i16:Other))
              // Emits: (SMULBT:i32 GPR:i32:$a, GPR:i32:$b)
              // Pattern complexity = 14  cost = 1  size = 0
              SDNode *Result = Emit_154(N, ARM::SMULBT, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (mul:i32 (sext_inreg:i32 GPR:i32:$b, i16:Other), (sra:i32 GPR:i32:$a, 16:i32))
    // Emits: (SMULTB:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 14  cost = 1  size = 0
    if (N0.getOpcode() == ISD::SIGN_EXTEND_INREG) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (cast<VTSDNode>(N01)->getVT() == MVT::i16) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::SRA) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDNode *Result = Emit_154(N, ARM::SMULTB, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$a, (sra:i32 GPR:i32:$b, 16:i32))
    // Emits: (SMULBT:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 12  cost = 1  size = 0
    if (Predicate_sext_16_node(N0.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SRA) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDNode *Result = Emit_151(N, ARM::SMULBT, MVT::i32);
            return Result;
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::SRA) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(16)) {
          SDValue N1 = N.getOperand(1);
          if (Predicate_sext_16_node(N1.getNode())) {

            // Pattern: (mul:i32 (sra:i32 GPR:i32:$a, 16:i32), GPR:i32<<P:Predicate_sext_16_node>>:$b)
            // Emits: (SMULTB:i32 GPR:i32:$a, GPR:i32:$b)
            // Pattern complexity = 12  cost = 1  size = 0
            {
              SDNode *Result = Emit_153(N, ARM::SMULTB, MVT::i32);
              return Result;
            }

            // Pattern: (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), GPR:i32<<P:Predicate_sext_16_node>>:$a)
            // Emits: (SMULBT:i32 GPR:i32:$a, GPR:i32:$b)
            // Pattern complexity = 12  cost = 1  size = 0
            SDNode *Result = Emit_158(N, ARM::SMULBT, MVT::i32);
            return Result;
          }
        }
      }
    }

    // Pattern: (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$b, (sra:i32 GPR:i32:$a, 16:i32))
    // Emits: (SMULTB:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 12  cost = 1  size = 0
    if (Predicate_sext_16_node(N0.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SRA) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDNode *Result = Emit_160(N, ARM::SMULTB, MVT::i32);
            return Result;
          }
        }
      }
    }

    // Pattern: (mul:i32 (sext_inreg:i32 GPR:i32:$a, i16:Other), (sext_inreg:i32 GPR:i32:$b, i16:Other))
    // Emits: (SMULBB:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 9  cost = 1  size = 0
    if (N0.getOpcode() == ISD::SIGN_EXTEND_INREG) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (cast<VTSDNode>(N01)->getVT() == MVT::i16) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::SIGN_EXTEND_INREG) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          if (cast<VTSDNode>(N11)->getVT() == MVT::i16) {
            SDNode *Result = Emit_146(N, ARM::SMULBB, MVT::i32);
            return Result;
          }
        }
      }
    }

    // Pattern: (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$a, GPR:i32<<P:Predicate_sext_16_node>>:$b)
    // Emits: (SMULBB:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 5  cost = 1  size = 0
    if (Predicate_sext_16_node(N0.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (Predicate_sext_16_node(N1.getNode())) {
        SDNode *Result = Emit_21(N, ARM::SMULBB, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (mul:i32 GPR:i32:$a, GPR:i32:$b)
  // Emits: (MUL:i32 GPR:i32:$a, GPR:i32:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_37(N, ARM::MUL, MVT::i32);
    return Result;
  }

  // Pattern: (mul:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tMUL:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_46(N, ARM::tMUL, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_MULHS_i32(const SDValue &N) {
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDNode *Result = Emit_21(N, ARM::SMMUL, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_161(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N1000 = N100.getOperand(0);
  SDValue N1001 = N100.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N1100 = N110.getOperand(0);
  SDValue N1101 = N110.getOperand(1);
  SDValue N11000 = N1100.getOperand(0);
  SDValue N11001 = N1100.getOperand(1);
  SDValue N111 = N11.getOperand(1);
  SDValue N1110 = N111.getOperand(0);
  SDValue N1111 = N111.getOperand(1);
  SDValue N11100 = N1110.getOperand(0);
  SDValue N11101 = N1110.getOperand(1);
  SDValue Tmp13 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp14 = CurDAG->getRegister(0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000, Tmp13, Tmp14);
}
SDNode *Emit_162(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N101)->getZExtValue()), MVT::i32);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N100, Tmp4, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_163(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N1000 = N100.getOperand(0);
  SDValue N1001 = N100.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N1100 = N110.getOperand(0);
  SDValue N1101 = N110.getOperand(1);
  SDValue N11000 = N1100.getOperand(0);
  SDValue N11001 = N1100.getOperand(1);
  SDValue N111 = N11.getOperand(1);
  SDValue N1110 = N111.getOperand(0);
  SDValue N1111 = N111.getOperand(1);
  SDValue N11100 = N1110.getOperand(0);
  SDValue N11101 = N1110.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000);
}
SDNode *Emit_164(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N10, Tmp4, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_165(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i32);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N10, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_166(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0x10ULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp7 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N10, Tmp5, Tmp6, Tmp7 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_167(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm2part_1(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp2, Tmp3, Tmp4, Tmp5 };
  SDValue Tmp6(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Ops0, 5), 0);
  SDValue Tmp7 = Transform_so_imm2part_2(Tmp1.getNode());
  SDValue Tmp8 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp9 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp10 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops1[] = { Tmp6, Tmp7, Tmp8, Tmp9, Tmp10 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Ops1, 5);
}
SDNode *Emit_168(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N1000 = N100.getOperand(0);
  SDValue N1001 = N100.getOperand(1);
  SDValue N10000 = N1000.getOperand(0);
  SDValue N10001 = N1000.getOperand(1);
  SDValue N101 = N10.getOperand(1);
  SDValue N1010 = N101.getOperand(0);
  SDValue N1011 = N101.getOperand(1);
  SDValue N10100 = N1010.getOperand(0);
  SDValue N10101 = N1010.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N1100 = N110.getOperand(0);
  SDValue N1101 = N110.getOperand(1);
  SDValue Tmp13 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp14 = CurDAG->getRegister(0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000, Tmp13, Tmp14);
}
SDNode *Emit_169(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N00000 = N0000.getOperand(0);
  SDValue N00001 = N0000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N0010 = N001.getOperand(0);
  SDValue N0011 = N001.getOperand(1);
  SDValue N00100 = N0010.getOperand(0);
  SDValue N00101 = N0010.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue Tmp13 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp14 = CurDAG->getRegister(0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00000, Tmp13, Tmp14);
}
SDNode *Emit_170(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N01000 = N0100.getOperand(0);
  SDValue N01001 = N0100.getOperand(1);
  SDValue N011 = N01.getOperand(1);
  SDValue N0110 = N011.getOperand(0);
  SDValue N0111 = N011.getOperand(1);
  SDValue N01100 = N0110.getOperand(0);
  SDValue N01101 = N0110.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue Tmp13 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp14 = CurDAG->getRegister(0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0000, Tmp13, Tmp14);
}
SDNode *Emit_171(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N001)->getZExtValue()), MVT::i32);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N000, Tmp4, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_172(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N1000 = N100.getOperand(0);
  SDValue N1001 = N100.getOperand(1);
  SDValue N10000 = N1000.getOperand(0);
  SDValue N10001 = N1000.getOperand(1);
  SDValue N101 = N10.getOperand(1);
  SDValue N1010 = N101.getOperand(0);
  SDValue N1011 = N101.getOperand(1);
  SDValue N10100 = N1010.getOperand(0);
  SDValue N10101 = N1010.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N1100 = N110.getOperand(0);
  SDValue N1101 = N110.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000);
}
SDNode *Emit_173(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N00000 = N0000.getOperand(0);
  SDValue N00001 = N0000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N0010 = N001.getOperand(0);
  SDValue N0011 = N001.getOperand(1);
  SDValue N00100 = N0010.getOperand(0);
  SDValue N00101 = N0010.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00000);
}
SDNode *Emit_174(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N01000 = N0100.getOperand(0);
  SDValue N01001 = N0100.getOperand(1);
  SDValue N011 = N01.getOperand(1);
  SDValue N0110 = N011.getOperand(0);
  SDValue N0111 = N011.getOperand(1);
  SDValue N01100 = N0110.getOperand(0);
  SDValue N01101 = N0110.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0000);
}
SDNode *Emit_175(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N00, Tmp4, Tmp5, Tmp6 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_176(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i32);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N00, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_177(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp5 = CurDAG->getTargetConstant(0x10ULL, MVT::i32);
  SDValue Tmp6 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp7 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N10, N00, Tmp5, Tmp6, Tmp7 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Select_ISD_OR_i32(const SDValue &N) {

  // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32))))
  // Emits: (REV16:i32 GPR:i32:$src)
  // Pattern complexity = 73  cost = 1  size = 0
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0 &&
          CheckAndMask(N00, Tmp0, INT64_C(255)) &&
          N00.getOpcode() == ISD::SRL) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp1) {
          int64_t CN2 = Tmp1->getSExtValue();
          if (CN2 == INT64_C(8)) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::OR) {
              SDValue N10 = N1.getOperand(0);
              if (N10.getOpcode() == ISD::AND) {
                SDValue N100 = N10.getOperand(0);
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp3 &&
                    CheckAndMask(N100, Tmp3, INT64_C(65280)) &&
                    N100.getOpcode() == ISD::SHL) {
                  SDValue N1000 = N100.getOperand(0);
                  if (N000 == N1000) {
                    SDValue N1001 = N100.getOperand(1);
                    ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1001);
                    if (Tmp4) {
                      int64_t CN5 = Tmp4->getSExtValue();
                      if (CN5 == INT64_C(8)) {
                        SDValue N11 = N1.getOperand(1);
                        if (N11.getOpcode() == ISD::OR) {
                          SDValue N110 = N11.getOperand(0);
                          if (N110.getOpcode() == ISD::AND) {
                            SDValue N1100 = N110.getOperand(0);
                            SDValue N1101 = N110.getOperand(1);
                            ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1101);
                            if (Tmp6 &&
                                CheckAndMask(N1100, Tmp6, INT64_C(16711680)) &&
                                N1100.getOpcode() == ISD::SRL) {
                              SDValue N11000 = N1100.getOperand(0);
                              if (N000 == N11000) {
                                SDValue N11001 = N1100.getOperand(1);
                                ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                if (Tmp7) {
                                  int64_t CN8 = Tmp7->getSExtValue();
                                  if (CN8 == INT64_C(8)) {
                                    SDValue N111 = N11.getOperand(1);
                                    if (N111.getOpcode() == ISD::AND) {
                                      SDValue N1110 = N111.getOperand(0);
                                      SDValue N1111 = N111.getOperand(1);
                                      ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                      if (Tmp9 &&
                                          CheckAndMask(N1110, Tmp9, INT64_C(4278190080)) &&
                                          N1110.getOpcode() == ISD::SHL) {
                                        SDValue N11100 = N1110.getOperand(0);
                                        if (N000 == N11100) {
                                          SDValue N11101 = N1110.getOperand(1);
                                          ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                          if (Tmp10) {
                                            int64_t CN11 = Tmp10->getSExtValue();
                                            if (CN11 == INT64_C(8)) {
                                              SDNode *Result = Emit_161(N, ARM::REV16, MVT::i32);
                                              return Result;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32))))
  // Emits: (tREV16:i32 GPR:i32:$src)
  // Pattern complexity = 73  cost = 1  size = 0
  if ((Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0 &&
          CheckAndMask(N00, Tmp0, INT64_C(255)) &&
          N00.getOpcode() == ISD::SRL) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp1) {
          int64_t CN2 = Tmp1->getSExtValue();
          if (CN2 == INT64_C(8)) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::OR) {
              SDValue N10 = N1.getOperand(0);
              if (N10.getOpcode() == ISD::AND) {
                SDValue N100 = N10.getOperand(0);
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp3 &&
                    CheckAndMask(N100, Tmp3, INT64_C(65280)) &&
                    N100.getOpcode() == ISD::SHL) {
                  SDValue N1000 = N100.getOperand(0);
                  if (N000 == N1000) {
                    SDValue N1001 = N100.getOperand(1);
                    ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1001);
                    if (Tmp4) {
                      int64_t CN5 = Tmp4->getSExtValue();
                      if (CN5 == INT64_C(8)) {
                        SDValue N11 = N1.getOperand(1);
                        if (N11.getOpcode() == ISD::OR) {
                          SDValue N110 = N11.getOperand(0);
                          if (N110.getOpcode() == ISD::AND) {
                            SDValue N1100 = N110.getOperand(0);
                            SDValue N1101 = N110.getOperand(1);
                            ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1101);
                            if (Tmp6 &&
                                CheckAndMask(N1100, Tmp6, INT64_C(16711680)) &&
                                N1100.getOpcode() == ISD::SRL) {
                              SDValue N11000 = N1100.getOperand(0);
                              if (N000 == N11000) {
                                SDValue N11001 = N1100.getOperand(1);
                                ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                if (Tmp7) {
                                  int64_t CN8 = Tmp7->getSExtValue();
                                  if (CN8 == INT64_C(8)) {
                                    SDValue N111 = N11.getOperand(1);
                                    if (N111.getOpcode() == ISD::AND) {
                                      SDValue N1110 = N111.getOperand(0);
                                      SDValue N1111 = N111.getOperand(1);
                                      ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                      if (Tmp9 &&
                                          CheckAndMask(N1110, Tmp9, INT64_C(4278190080)) &&
                                          N1110.getOpcode() == ISD::SHL) {
                                        SDValue N11100 = N1110.getOperand(0);
                                        if (N000 == N11100) {
                                          SDValue N11101 = N1110.getOperand(1);
                                          ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                          if (Tmp10) {
                                            int64_t CN11 = Tmp10->getSExtValue();
                                            if (CN11 == INT64_C(8)) {
                                              SDNode *Result = Emit_163(N, ARM::tREV16, MVT::i32);
                                              return Result;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0 &&
          CheckAndMask(N00, Tmp0, INT64_C(255)) &&
          N00.getOpcode() == ISD::SRL) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp1) {
          int64_t CN2 = Tmp1->getSExtValue();
          if (CN2 == INT64_C(8)) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::OR) {
              SDValue N10 = N1.getOperand(0);
              if (N10.getOpcode() == ISD::OR) {
                SDValue N100 = N10.getOperand(0);
                if (N100.getOpcode() == ISD::AND) {
                  SDValue N1000 = N100.getOperand(0);
                  SDValue N1001 = N100.getOperand(1);
                  ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N1001);
                  if (Tmp3) {

                    // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)))
                    // Emits: (REV16:i32 GPR:i32:$src)
                    // Pattern complexity = 73  cost = 1  size = 0
                    if (CheckAndMask(N1000, Tmp3, INT64_C(16711680)) &&
                        N1000.getOpcode() == ISD::SRL) {
                      SDValue N10000 = N1000.getOperand(0);
                      if (N000 == N10000) {
                        SDValue N10001 = N1000.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N10001);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N101 = N10.getOperand(1);
                            if (N101.getOpcode() == ISD::AND) {
                              SDValue N1010 = N101.getOperand(0);
                              SDValue N1011 = N101.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1011);
                              if (Tmp6 &&
                                  CheckAndMask(N1010, Tmp6, INT64_C(65280)) &&
                                  N1010.getOpcode() == ISD::SHL) {
                                SDValue N10100 = N1010.getOperand(0);
                                if (N000 == N10100) {
                                  SDValue N10101 = N1010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N10101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N11 = N1.getOperand(1);
                                      if (N11.getOpcode() == ISD::AND) {
                                        SDValue N110 = N11.getOperand(0);
                                        SDValue N111 = N11.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N111);
                                        if (Tmp9 &&
                                            CheckAndMask(N110, Tmp9, INT64_C(4278190080)) &&
                                            N110.getOpcode() == ISD::SHL) {
                                          SDValue N1100 = N110.getOperand(0);
                                          if (N000 == N1100) {
                                            SDValue N1101 = N110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N1101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_168(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }

                    // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)))
                    // Emits: (REV16:i32 GPR:i32:$src)
                    // Pattern complexity = 73  cost = 1  size = 0
                    if (CheckAndMask(N1000, Tmp3, INT64_C(65280)) &&
                        N1000.getOpcode() == ISD::SHL) {
                      SDValue N10000 = N1000.getOperand(0);
                      if (N000 == N10000) {
                        SDValue N10001 = N1000.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N10001);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N101 = N10.getOperand(1);
                            if (N101.getOpcode() == ISD::AND) {
                              SDValue N1010 = N101.getOperand(0);
                              SDValue N1011 = N101.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1011);
                              if (Tmp6 &&
                                  CheckAndMask(N1010, Tmp6, INT64_C(4278190080)) &&
                                  N1010.getOpcode() == ISD::SHL) {
                                SDValue N10100 = N1010.getOperand(0);
                                if (N000 == N10100) {
                                  SDValue N10101 = N1010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N10101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N11 = N1.getOperand(1);
                                      if (N11.getOpcode() == ISD::AND) {
                                        SDValue N110 = N11.getOperand(0);
                                        SDValue N111 = N11.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N111);
                                        if (Tmp9 &&
                                            CheckAndMask(N110, Tmp9, INT64_C(16711680)) &&
                                            N110.getOpcode() == ISD::SRL) {
                                          SDValue N1100 = N110.getOperand(0);
                                          if (N000 == N1100) {
                                            SDValue N1101 = N110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N1101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_168(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }

                    // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)))
                    // Emits: (REV16:i32 GPR:i32:$src)
                    // Pattern complexity = 73  cost = 1  size = 0
                    if (CheckAndMask(N1000, Tmp3, INT64_C(4278190080)) &&
                        N1000.getOpcode() == ISD::SHL) {
                      SDValue N10000 = N1000.getOperand(0);
                      if (N000 == N10000) {
                        SDValue N10001 = N1000.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N10001);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N101 = N10.getOperand(1);
                            if (N101.getOpcode() == ISD::AND) {
                              SDValue N1010 = N101.getOperand(0);
                              SDValue N1011 = N101.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1011);
                              if (Tmp6 &&
                                  CheckAndMask(N1010, Tmp6, INT64_C(65280)) &&
                                  N1010.getOpcode() == ISD::SHL) {
                                SDValue N10100 = N1010.getOperand(0);
                                if (N000 == N10100) {
                                  SDValue N10101 = N1010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N10101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N11 = N1.getOperand(1);
                                      if (N11.getOpcode() == ISD::AND) {
                                        SDValue N110 = N11.getOperand(0);
                                        SDValue N111 = N11.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N111);
                                        if (Tmp9 &&
                                            CheckAndMask(N110, Tmp9, INT64_C(16711680)) &&
                                            N110.getOpcode() == ISD::SRL) {
                                          SDValue N1100 = N110.getOperand(0);
                                          if (N000 == N1100) {
                                            SDValue N1101 = N110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N1101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_168(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }

                    // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)))
                    // Emits: (REV16:i32 GPR:i32:$src)
                    // Pattern complexity = 73  cost = 1  size = 0
                    if (CheckAndMask(N1000, Tmp3, INT64_C(16711680)) &&
                        N1000.getOpcode() == ISD::SRL) {
                      SDValue N10000 = N1000.getOperand(0);
                      if (N000 == N10000) {
                        SDValue N10001 = N1000.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N10001);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N101 = N10.getOperand(1);
                            if (N101.getOpcode() == ISD::AND) {
                              SDValue N1010 = N101.getOperand(0);
                              SDValue N1011 = N101.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1011);
                              if (Tmp6 &&
                                  CheckAndMask(N1010, Tmp6, INT64_C(4278190080)) &&
                                  N1010.getOpcode() == ISD::SHL) {
                                SDValue N10100 = N1010.getOperand(0);
                                if (N000 == N10100) {
                                  SDValue N10101 = N1010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N10101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N11 = N1.getOperand(1);
                                      if (N11.getOpcode() == ISD::AND) {
                                        SDValue N110 = N11.getOperand(0);
                                        SDValue N111 = N11.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N111);
                                        if (Tmp9 &&
                                            CheckAndMask(N110, Tmp9, INT64_C(65280)) &&
                                            N110.getOpcode() == ISD::SHL) {
                                          SDValue N1100 = N110.getOperand(0);
                                          if (N000 == N1100) {
                                            SDValue N1101 = N110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N1101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_168(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }

                    // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)))
                    // Emits: (REV16:i32 GPR:i32:$src)
                    // Pattern complexity = 73  cost = 1  size = 0
                    if (CheckAndMask(N1000, Tmp3, INT64_C(4278190080)) &&
                        N1000.getOpcode() == ISD::SHL) {
                      SDValue N10000 = N1000.getOperand(0);
                      if (N000 == N10000) {
                        SDValue N10001 = N1000.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N10001);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N101 = N10.getOperand(1);
                            if (N101.getOpcode() == ISD::AND) {
                              SDValue N1010 = N101.getOperand(0);
                              SDValue N1011 = N101.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1011);
                              if (Tmp6 &&
                                  CheckAndMask(N1010, Tmp6, INT64_C(16711680)) &&
                                  N1010.getOpcode() == ISD::SRL) {
                                SDValue N10100 = N1010.getOperand(0);
                                if (N000 == N10100) {
                                  SDValue N10101 = N1010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N10101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N11 = N1.getOperand(1);
                                      if (N11.getOpcode() == ISD::AND) {
                                        SDValue N110 = N11.getOperand(0);
                                        SDValue N111 = N11.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N111);
                                        if (Tmp9 &&
                                            CheckAndMask(N110, Tmp9, INT64_C(65280)) &&
                                            N110.getOpcode() == ISD::SHL) {
                                          SDValue N1100 = N110.getOperand(0);
                                          if (N000 == N1100) {
                                            SDValue N1101 = N110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N1101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_168(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (N10.getOpcode() == ISD::AND) {
                SDValue N100 = N10.getOperand(0);
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp3) {
                  if (CheckAndMask(N100, Tmp3, INT64_C(4278190080)) &&
                      N100.getOpcode() == ISD::SHL) {
                    SDValue N1000 = N100.getOperand(0);
                    if (N000 == N1000) {
                      SDValue N1001 = N100.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1001);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(8)) {
                          SDValue N11 = N1.getOperand(1);
                          if (N11.getOpcode() == ISD::OR) {
                            SDValue N110 = N11.getOperand(0);
                            if (N110.getOpcode() == ISD::AND) {
                              SDValue N1100 = N110.getOperand(0);
                              SDValue N1101 = N110.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1101);
                              if (Tmp6) {

                                // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32))))
                                // Emits: (REV16:i32 GPR:i32:$src)
                                // Pattern complexity = 73  cost = 1  size = 0
                                if (CheckAndMask(N1100, Tmp6, INT64_C(65280)) &&
                                    N1100.getOpcode() == ISD::SHL) {
                                  SDValue N11000 = N1100.getOperand(0);
                                  if (N000 == N11000) {
                                    SDValue N11001 = N1100.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N111 = N11.getOperand(1);
                                        if (N111.getOpcode() == ISD::AND) {
                                          SDValue N1110 = N111.getOperand(0);
                                          SDValue N1111 = N111.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                          if (Tmp9 &&
                                              CheckAndMask(N1110, Tmp9, INT64_C(16711680)) &&
                                              N1110.getOpcode() == ISD::SRL) {
                                            SDValue N11100 = N1110.getOperand(0);
                                            if (N000 == N11100) {
                                              SDValue N11101 = N1110.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_161(N, ARM::REV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }

                                // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32))))
                                // Emits: (REV16:i32 GPR:i32:$src)
                                // Pattern complexity = 73  cost = 1  size = 0
                                if (CheckAndMask(N1100, Tmp6, INT64_C(16711680)) &&
                                    N1100.getOpcode() == ISD::SRL) {
                                  SDValue N11000 = N1100.getOperand(0);
                                  if (N000 == N11000) {
                                    SDValue N11001 = N1100.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N111 = N11.getOperand(1);
                                        if (N111.getOpcode() == ISD::AND) {
                                          SDValue N1110 = N111.getOperand(0);
                                          SDValue N1111 = N111.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                          if (Tmp9 &&
                                              CheckAndMask(N1110, Tmp9, INT64_C(65280)) &&
                                              N1110.getOpcode() == ISD::SHL) {
                                            SDValue N11100 = N1110.getOperand(0);
                                            if (N000 == N11100) {
                                              SDValue N11101 = N1110.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_161(N, ARM::REV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  if (CheckAndMask(N100, Tmp3, INT64_C(16711680)) &&
                      N100.getOpcode() == ISD::SRL) {
                    SDValue N1000 = N100.getOperand(0);
                    if (N000 == N1000) {
                      SDValue N1001 = N100.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1001);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(8)) {
                          SDValue N11 = N1.getOperand(1);
                          if (N11.getOpcode() == ISD::OR) {
                            SDValue N110 = N11.getOperand(0);
                            if (N110.getOpcode() == ISD::AND) {
                              SDValue N1100 = N110.getOperand(0);
                              SDValue N1101 = N110.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1101);
                              if (Tmp6) {

                                // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32))))
                                // Emits: (REV16:i32 GPR:i32:$src)
                                // Pattern complexity = 73  cost = 1  size = 0
                                if (CheckAndMask(N1100, Tmp6, INT64_C(65280)) &&
                                    N1100.getOpcode() == ISD::SHL) {
                                  SDValue N11000 = N1100.getOperand(0);
                                  if (N000 == N11000) {
                                    SDValue N11001 = N1100.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N111 = N11.getOperand(1);
                                        if (N111.getOpcode() == ISD::AND) {
                                          SDValue N1110 = N111.getOperand(0);
                                          SDValue N1111 = N111.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                          if (Tmp9 &&
                                              CheckAndMask(N1110, Tmp9, INT64_C(4278190080)) &&
                                              N1110.getOpcode() == ISD::SHL) {
                                            SDValue N11100 = N1110.getOperand(0);
                                            if (N000 == N11100) {
                                              SDValue N11101 = N1110.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_161(N, ARM::REV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }

                                // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32))))
                                // Emits: (REV16:i32 GPR:i32:$src)
                                // Pattern complexity = 73  cost = 1  size = 0
                                if (CheckAndMask(N1100, Tmp6, INT64_C(4278190080)) &&
                                    N1100.getOpcode() == ISD::SHL) {
                                  SDValue N11000 = N1100.getOperand(0);
                                  if (N000 == N11000) {
                                    SDValue N11001 = N1100.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N111 = N11.getOperand(1);
                                        if (N111.getOpcode() == ISD::AND) {
                                          SDValue N1110 = N111.getOperand(0);
                                          SDValue N1111 = N111.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                          if (Tmp9 &&
                                              CheckAndMask(N1110, Tmp9, INT64_C(65280)) &&
                                              N1110.getOpcode() == ISD::SHL) {
                                            SDValue N11100 = N1110.getOperand(0);
                                            if (N000 == N11100) {
                                              SDValue N11101 = N1110.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_161(N, ARM::REV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }

                  // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32))))
                  // Emits: (REV16:i32 GPR:i32:$src)
                  // Pattern complexity = 73  cost = 1  size = 0
                  if (CheckAndMask(N100, Tmp3, INT64_C(65280)) &&
                      N100.getOpcode() == ISD::SHL) {
                    SDValue N1000 = N100.getOperand(0);
                    if (N000 == N1000) {
                      SDValue N1001 = N100.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1001);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(8)) {
                          SDValue N11 = N1.getOperand(1);
                          if (N11.getOpcode() == ISD::OR) {
                            SDValue N110 = N11.getOperand(0);
                            if (N110.getOpcode() == ISD::AND) {
                              SDValue N1100 = N110.getOperand(0);
                              SDValue N1101 = N110.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1101);
                              if (Tmp6 &&
                                  CheckAndMask(N1100, Tmp6, INT64_C(4278190080)) &&
                                  N1100.getOpcode() == ISD::SHL) {
                                SDValue N11000 = N1100.getOperand(0);
                                if (N000 == N11000) {
                                  SDValue N11001 = N1100.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N111 = N11.getOperand(1);
                                      if (N111.getOpcode() == ISD::AND) {
                                        SDValue N1110 = N111.getOperand(0);
                                        SDValue N1111 = N111.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                        if (Tmp9 &&
                                            CheckAndMask(N1110, Tmp9, INT64_C(16711680)) &&
                                            N1110.getOpcode() == ISD::SRL) {
                                          SDValue N11100 = N1110.getOperand(0);
                                          if (N000 == N11100) {
                                            SDValue N11101 = N1110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_161(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::OR) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::OR) {
        SDValue N000 = N00.getOperand(0);
        if (N000.getOpcode() == ISD::AND) {
          SDValue N0000 = N000.getOperand(0);
          SDValue N0001 = N000.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0001);
          if (Tmp0) {

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (REV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(65280)) &&
                N0000.getOpcode() == ISD::SHL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(16711680)) &&
                        N0010.getOpcode() == ISD::SRL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(4278190080)) &&
                                  N010.getOpcode() == ISD::SHL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_169(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (REV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(16711680)) &&
                N0000.getOpcode() == ISD::SRL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(65280)) &&
                        N0010.getOpcode() == ISD::SHL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(4278190080)) &&
                                  N010.getOpcode() == ISD::SHL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_169(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (REV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(65280)) &&
                N0000.getOpcode() == ISD::SHL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(4278190080)) &&
                        N0010.getOpcode() == ISD::SHL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(16711680)) &&
                                  N010.getOpcode() == ISD::SRL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_169(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (REV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(4278190080)) &&
                N0000.getOpcode() == ISD::SHL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(65280)) &&
                        N0010.getOpcode() == ISD::SHL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(16711680)) &&
                                  N010.getOpcode() == ISD::SRL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_169(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (REV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(16711680)) &&
                N0000.getOpcode() == ISD::SRL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(4278190080)) &&
                        N0010.getOpcode() == ISD::SHL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(65280)) &&
                                  N010.getOpcode() == ISD::SHL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_169(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (REV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(4278190080)) &&
                N0000.getOpcode() == ISD::SHL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(16711680)) &&
                        N0010.getOpcode() == ISD::SRL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(65280)) &&
                                  N010.getOpcode() == ISD::SHL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_169(N, ARM::REV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N00.getOpcode() == ISD::AND) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          if (CheckAndMask(N000, Tmp0, INT64_C(4278190080)) &&
              N000.getOpcode() == ISD::SHL) {
            SDValue N0000 = N000.getOperand(0);
            SDValue N0001 = N000.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N0001);
            if (Tmp1) {
              int64_t CN2 = Tmp1->getSExtValue();
              if (CN2 == INT64_C(8)) {
                SDValue N01 = N0.getOperand(1);
                if (N01.getOpcode() == ISD::OR) {
                  SDValue N010 = N01.getOperand(0);
                  if (N010.getOpcode() == ISD::AND) {
                    SDValue N0100 = N010.getOperand(0);
                    SDValue N0101 = N010.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0101);
                    if (Tmp3) {

                      // Pattern: (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (REV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(65280)) &&
                          N0100.getOpcode() == ISD::SHL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(16711680)) &&
                                    N0110.getOpcode() == ISD::SRL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_170(N, ARM::REV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }

                      // Pattern: (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (REV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(16711680)) &&
                          N0100.getOpcode() == ISD::SRL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(65280)) &&
                                    N0110.getOpcode() == ISD::SHL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_170(N, ARM::REV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (CheckAndMask(N000, Tmp0, INT64_C(16711680)) &&
              N000.getOpcode() == ISD::SRL) {
            SDValue N0000 = N000.getOperand(0);
            SDValue N0001 = N000.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N0001);
            if (Tmp1) {
              int64_t CN2 = Tmp1->getSExtValue();
              if (CN2 == INT64_C(8)) {
                SDValue N01 = N0.getOperand(1);
                if (N01.getOpcode() == ISD::OR) {
                  SDValue N010 = N01.getOperand(0);
                  if (N010.getOpcode() == ISD::AND) {
                    SDValue N0100 = N010.getOperand(0);
                    SDValue N0101 = N010.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0101);
                    if (Tmp3) {

                      // Pattern: (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (REV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(65280)) &&
                          N0100.getOpcode() == ISD::SHL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(4278190080)) &&
                                    N0110.getOpcode() == ISD::SHL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_170(N, ARM::REV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }

                      // Pattern: (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (REV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(4278190080)) &&
                          N0100.getOpcode() == ISD::SHL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(65280)) &&
                                    N0110.getOpcode() == ISD::SHL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_170(N, ARM::REV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (CheckAndMask(N000, Tmp0, INT64_C(65280)) &&
              N000.getOpcode() == ISD::SHL) {
            SDValue N0000 = N000.getOperand(0);
            SDValue N0001 = N000.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N0001);
            if (Tmp1) {
              int64_t CN2 = Tmp1->getSExtValue();
              if (CN2 == INT64_C(8)) {
                SDValue N01 = N0.getOperand(1);
                if (N01.getOpcode() == ISD::OR) {
                  SDValue N010 = N01.getOperand(0);
                  if (N010.getOpcode() == ISD::AND) {
                    SDValue N0100 = N010.getOperand(0);
                    SDValue N0101 = N010.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0101);
                    if (Tmp3) {

                      // Pattern: (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (REV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(16711680)) &&
                          N0100.getOpcode() == ISD::SRL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(4278190080)) &&
                                    N0110.getOpcode() == ISD::SHL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_170(N, ARM::REV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }

                      // Pattern: (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (REV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(4278190080)) &&
                          N0100.getOpcode() == ISD::SHL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(16711680)) &&
                                    N0110.getOpcode() == ISD::SRL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_170(N, ARM::REV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0 &&
          CheckAndMask(N00, Tmp0, INT64_C(255)) &&
          N00.getOpcode() == ISD::SRL) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp1) {
          int64_t CN2 = Tmp1->getSExtValue();
          if (CN2 == INT64_C(8)) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::OR) {
              SDValue N10 = N1.getOperand(0);
              if (N10.getOpcode() == ISD::OR) {
                SDValue N100 = N10.getOperand(0);
                if (N100.getOpcode() == ISD::AND) {
                  SDValue N1000 = N100.getOperand(0);
                  SDValue N1001 = N100.getOperand(1);
                  ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N1001);
                  if (Tmp3) {

                    // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)))
                    // Emits: (tREV16:i32 GPR:i32:$src)
                    // Pattern complexity = 73  cost = 1  size = 0
                    if (CheckAndMask(N1000, Tmp3, INT64_C(16711680)) &&
                        N1000.getOpcode() == ISD::SRL) {
                      SDValue N10000 = N1000.getOperand(0);
                      if (N000 == N10000) {
                        SDValue N10001 = N1000.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N10001);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N101 = N10.getOperand(1);
                            if (N101.getOpcode() == ISD::AND) {
                              SDValue N1010 = N101.getOperand(0);
                              SDValue N1011 = N101.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1011);
                              if (Tmp6 &&
                                  CheckAndMask(N1010, Tmp6, INT64_C(65280)) &&
                                  N1010.getOpcode() == ISD::SHL) {
                                SDValue N10100 = N1010.getOperand(0);
                                if (N000 == N10100) {
                                  SDValue N10101 = N1010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N10101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N11 = N1.getOperand(1);
                                      if (N11.getOpcode() == ISD::AND) {
                                        SDValue N110 = N11.getOperand(0);
                                        SDValue N111 = N11.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N111);
                                        if (Tmp9 &&
                                            CheckAndMask(N110, Tmp9, INT64_C(4278190080)) &&
                                            N110.getOpcode() == ISD::SHL) {
                                          SDValue N1100 = N110.getOperand(0);
                                          if (N000 == N1100) {
                                            SDValue N1101 = N110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N1101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_172(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }

                    // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)))
                    // Emits: (tREV16:i32 GPR:i32:$src)
                    // Pattern complexity = 73  cost = 1  size = 0
                    if (CheckAndMask(N1000, Tmp3, INT64_C(65280)) &&
                        N1000.getOpcode() == ISD::SHL) {
                      SDValue N10000 = N1000.getOperand(0);
                      if (N000 == N10000) {
                        SDValue N10001 = N1000.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N10001);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N101 = N10.getOperand(1);
                            if (N101.getOpcode() == ISD::AND) {
                              SDValue N1010 = N101.getOperand(0);
                              SDValue N1011 = N101.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1011);
                              if (Tmp6 &&
                                  CheckAndMask(N1010, Tmp6, INT64_C(4278190080)) &&
                                  N1010.getOpcode() == ISD::SHL) {
                                SDValue N10100 = N1010.getOperand(0);
                                if (N000 == N10100) {
                                  SDValue N10101 = N1010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N10101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N11 = N1.getOperand(1);
                                      if (N11.getOpcode() == ISD::AND) {
                                        SDValue N110 = N11.getOperand(0);
                                        SDValue N111 = N11.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N111);
                                        if (Tmp9 &&
                                            CheckAndMask(N110, Tmp9, INT64_C(16711680)) &&
                                            N110.getOpcode() == ISD::SRL) {
                                          SDValue N1100 = N110.getOperand(0);
                                          if (N000 == N1100) {
                                            SDValue N1101 = N110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N1101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_172(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }

                    // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)))
                    // Emits: (tREV16:i32 GPR:i32:$src)
                    // Pattern complexity = 73  cost = 1  size = 0
                    if (CheckAndMask(N1000, Tmp3, INT64_C(4278190080)) &&
                        N1000.getOpcode() == ISD::SHL) {
                      SDValue N10000 = N1000.getOperand(0);
                      if (N000 == N10000) {
                        SDValue N10001 = N1000.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N10001);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N101 = N10.getOperand(1);
                            if (N101.getOpcode() == ISD::AND) {
                              SDValue N1010 = N101.getOperand(0);
                              SDValue N1011 = N101.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1011);
                              if (Tmp6 &&
                                  CheckAndMask(N1010, Tmp6, INT64_C(65280)) &&
                                  N1010.getOpcode() == ISD::SHL) {
                                SDValue N10100 = N1010.getOperand(0);
                                if (N000 == N10100) {
                                  SDValue N10101 = N1010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N10101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N11 = N1.getOperand(1);
                                      if (N11.getOpcode() == ISD::AND) {
                                        SDValue N110 = N11.getOperand(0);
                                        SDValue N111 = N11.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N111);
                                        if (Tmp9 &&
                                            CheckAndMask(N110, Tmp9, INT64_C(16711680)) &&
                                            N110.getOpcode() == ISD::SRL) {
                                          SDValue N1100 = N110.getOperand(0);
                                          if (N000 == N1100) {
                                            SDValue N1101 = N110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N1101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_172(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }

                    // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)))
                    // Emits: (tREV16:i32 GPR:i32:$src)
                    // Pattern complexity = 73  cost = 1  size = 0
                    if (CheckAndMask(N1000, Tmp3, INT64_C(16711680)) &&
                        N1000.getOpcode() == ISD::SRL) {
                      SDValue N10000 = N1000.getOperand(0);
                      if (N000 == N10000) {
                        SDValue N10001 = N1000.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N10001);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N101 = N10.getOperand(1);
                            if (N101.getOpcode() == ISD::AND) {
                              SDValue N1010 = N101.getOperand(0);
                              SDValue N1011 = N101.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1011);
                              if (Tmp6 &&
                                  CheckAndMask(N1010, Tmp6, INT64_C(4278190080)) &&
                                  N1010.getOpcode() == ISD::SHL) {
                                SDValue N10100 = N1010.getOperand(0);
                                if (N000 == N10100) {
                                  SDValue N10101 = N1010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N10101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N11 = N1.getOperand(1);
                                      if (N11.getOpcode() == ISD::AND) {
                                        SDValue N110 = N11.getOperand(0);
                                        SDValue N111 = N11.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N111);
                                        if (Tmp9 &&
                                            CheckAndMask(N110, Tmp9, INT64_C(65280)) &&
                                            N110.getOpcode() == ISD::SHL) {
                                          SDValue N1100 = N110.getOperand(0);
                                          if (N000 == N1100) {
                                            SDValue N1101 = N110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N1101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_172(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }

                    // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)))
                    // Emits: (tREV16:i32 GPR:i32:$src)
                    // Pattern complexity = 73  cost = 1  size = 0
                    if (CheckAndMask(N1000, Tmp3, INT64_C(4278190080)) &&
                        N1000.getOpcode() == ISD::SHL) {
                      SDValue N10000 = N1000.getOperand(0);
                      if (N000 == N10000) {
                        SDValue N10001 = N1000.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N10001);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N101 = N10.getOperand(1);
                            if (N101.getOpcode() == ISD::AND) {
                              SDValue N1010 = N101.getOperand(0);
                              SDValue N1011 = N101.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1011);
                              if (Tmp6 &&
                                  CheckAndMask(N1010, Tmp6, INT64_C(16711680)) &&
                                  N1010.getOpcode() == ISD::SRL) {
                                SDValue N10100 = N1010.getOperand(0);
                                if (N000 == N10100) {
                                  SDValue N10101 = N1010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N10101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N11 = N1.getOperand(1);
                                      if (N11.getOpcode() == ISD::AND) {
                                        SDValue N110 = N11.getOperand(0);
                                        SDValue N111 = N11.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N111);
                                        if (Tmp9 &&
                                            CheckAndMask(N110, Tmp9, INT64_C(65280)) &&
                                            N110.getOpcode() == ISD::SHL) {
                                          SDValue N1100 = N110.getOperand(0);
                                          if (N000 == N1100) {
                                            SDValue N1101 = N110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N1101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_172(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              if (N10.getOpcode() == ISD::AND) {
                SDValue N100 = N10.getOperand(0);
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp3) {
                  if (CheckAndMask(N100, Tmp3, INT64_C(4278190080)) &&
                      N100.getOpcode() == ISD::SHL) {
                    SDValue N1000 = N100.getOperand(0);
                    if (N000 == N1000) {
                      SDValue N1001 = N100.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1001);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(8)) {
                          SDValue N11 = N1.getOperand(1);
                          if (N11.getOpcode() == ISD::OR) {
                            SDValue N110 = N11.getOperand(0);
                            if (N110.getOpcode() == ISD::AND) {
                              SDValue N1100 = N110.getOperand(0);
                              SDValue N1101 = N110.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1101);
                              if (Tmp6) {

                                // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32))))
                                // Emits: (tREV16:i32 GPR:i32:$src)
                                // Pattern complexity = 73  cost = 1  size = 0
                                if (CheckAndMask(N1100, Tmp6, INT64_C(65280)) &&
                                    N1100.getOpcode() == ISD::SHL) {
                                  SDValue N11000 = N1100.getOperand(0);
                                  if (N000 == N11000) {
                                    SDValue N11001 = N1100.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N111 = N11.getOperand(1);
                                        if (N111.getOpcode() == ISD::AND) {
                                          SDValue N1110 = N111.getOperand(0);
                                          SDValue N1111 = N111.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                          if (Tmp9 &&
                                              CheckAndMask(N1110, Tmp9, INT64_C(16711680)) &&
                                              N1110.getOpcode() == ISD::SRL) {
                                            SDValue N11100 = N1110.getOperand(0);
                                            if (N000 == N11100) {
                                              SDValue N11101 = N1110.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_163(N, ARM::tREV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }

                                // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32))))
                                // Emits: (tREV16:i32 GPR:i32:$src)
                                // Pattern complexity = 73  cost = 1  size = 0
                                if (CheckAndMask(N1100, Tmp6, INT64_C(16711680)) &&
                                    N1100.getOpcode() == ISD::SRL) {
                                  SDValue N11000 = N1100.getOperand(0);
                                  if (N000 == N11000) {
                                    SDValue N11001 = N1100.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N111 = N11.getOperand(1);
                                        if (N111.getOpcode() == ISD::AND) {
                                          SDValue N1110 = N111.getOperand(0);
                                          SDValue N1111 = N111.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                          if (Tmp9 &&
                                              CheckAndMask(N1110, Tmp9, INT64_C(65280)) &&
                                              N1110.getOpcode() == ISD::SHL) {
                                            SDValue N11100 = N1110.getOperand(0);
                                            if (N000 == N11100) {
                                              SDValue N11101 = N1110.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_163(N, ARM::tREV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  if (CheckAndMask(N100, Tmp3, INT64_C(16711680)) &&
                      N100.getOpcode() == ISD::SRL) {
                    SDValue N1000 = N100.getOperand(0);
                    if (N000 == N1000) {
                      SDValue N1001 = N100.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1001);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(8)) {
                          SDValue N11 = N1.getOperand(1);
                          if (N11.getOpcode() == ISD::OR) {
                            SDValue N110 = N11.getOperand(0);
                            if (N110.getOpcode() == ISD::AND) {
                              SDValue N1100 = N110.getOperand(0);
                              SDValue N1101 = N110.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1101);
                              if (Tmp6) {

                                // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32))))
                                // Emits: (tREV16:i32 GPR:i32:$src)
                                // Pattern complexity = 73  cost = 1  size = 0
                                if (CheckAndMask(N1100, Tmp6, INT64_C(65280)) &&
                                    N1100.getOpcode() == ISD::SHL) {
                                  SDValue N11000 = N1100.getOperand(0);
                                  if (N000 == N11000) {
                                    SDValue N11001 = N1100.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N111 = N11.getOperand(1);
                                        if (N111.getOpcode() == ISD::AND) {
                                          SDValue N1110 = N111.getOperand(0);
                                          SDValue N1111 = N111.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                          if (Tmp9 &&
                                              CheckAndMask(N1110, Tmp9, INT64_C(4278190080)) &&
                                              N1110.getOpcode() == ISD::SHL) {
                                            SDValue N11100 = N1110.getOperand(0);
                                            if (N000 == N11100) {
                                              SDValue N11101 = N1110.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_163(N, ARM::tREV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }

                                // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32))))
                                // Emits: (tREV16:i32 GPR:i32:$src)
                                // Pattern complexity = 73  cost = 1  size = 0
                                if (CheckAndMask(N1100, Tmp6, INT64_C(4278190080)) &&
                                    N1100.getOpcode() == ISD::SHL) {
                                  SDValue N11000 = N1100.getOperand(0);
                                  if (N000 == N11000) {
                                    SDValue N11001 = N1100.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N111 = N11.getOperand(1);
                                        if (N111.getOpcode() == ISD::AND) {
                                          SDValue N1110 = N111.getOperand(0);
                                          SDValue N1111 = N111.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                          if (Tmp9 &&
                                              CheckAndMask(N1110, Tmp9, INT64_C(65280)) &&
                                              N1110.getOpcode() == ISD::SHL) {
                                            SDValue N11100 = N1110.getOperand(0);
                                            if (N000 == N11100) {
                                              SDValue N11101 = N1110.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_163(N, ARM::tREV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }

                  // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32))))
                  // Emits: (tREV16:i32 GPR:i32:$src)
                  // Pattern complexity = 73  cost = 1  size = 0
                  if (CheckAndMask(N100, Tmp3, INT64_C(65280)) &&
                      N100.getOpcode() == ISD::SHL) {
                    SDValue N1000 = N100.getOperand(0);
                    if (N000 == N1000) {
                      SDValue N1001 = N100.getOperand(1);
                      ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1001);
                      if (Tmp4) {
                        int64_t CN5 = Tmp4->getSExtValue();
                        if (CN5 == INT64_C(8)) {
                          SDValue N11 = N1.getOperand(1);
                          if (N11.getOpcode() == ISD::OR) {
                            SDValue N110 = N11.getOperand(0);
                            if (N110.getOpcode() == ISD::AND) {
                              SDValue N1100 = N110.getOperand(0);
                              SDValue N1101 = N110.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N1101);
                              if (Tmp6 &&
                                  CheckAndMask(N1100, Tmp6, INT64_C(4278190080)) &&
                                  N1100.getOpcode() == ISD::SHL) {
                                SDValue N11000 = N1100.getOperand(0);
                                if (N000 == N11000) {
                                  SDValue N11001 = N1100.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N11001);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N111 = N11.getOperand(1);
                                      if (N111.getOpcode() == ISD::AND) {
                                        SDValue N1110 = N111.getOperand(0);
                                        SDValue N1111 = N111.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N1111);
                                        if (Tmp9 &&
                                            CheckAndMask(N1110, Tmp9, INT64_C(16711680)) &&
                                            N1110.getOpcode() == ISD::SRL) {
                                          SDValue N11100 = N1110.getOperand(0);
                                          if (N000 == N11100) {
                                            SDValue N11101 = N1110.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N11101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_163(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::OR) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::OR) {
        SDValue N000 = N00.getOperand(0);
        if (N000.getOpcode() == ISD::AND) {
          SDValue N0000 = N000.getOperand(0);
          SDValue N0001 = N000.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0001);
          if (Tmp0) {

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (tREV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(65280)) &&
                N0000.getOpcode() == ISD::SHL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(16711680)) &&
                        N0010.getOpcode() == ISD::SRL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(4278190080)) &&
                                  N010.getOpcode() == ISD::SHL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_173(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (tREV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(16711680)) &&
                N0000.getOpcode() == ISD::SRL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(65280)) &&
                        N0010.getOpcode() == ISD::SHL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(4278190080)) &&
                                  N010.getOpcode() == ISD::SHL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_173(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (tREV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(65280)) &&
                N0000.getOpcode() == ISD::SHL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(4278190080)) &&
                        N0010.getOpcode() == ISD::SHL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(16711680)) &&
                                  N010.getOpcode() == ISD::SRL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_173(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (tREV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(4278190080)) &&
                N0000.getOpcode() == ISD::SHL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(65280)) &&
                        N0010.getOpcode() == ISD::SHL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(16711680)) &&
                                  N010.getOpcode() == ISD::SRL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_173(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (tREV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(16711680)) &&
                N0000.getOpcode() == ISD::SRL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(4278190080)) &&
                        N0010.getOpcode() == ISD::SHL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(65280)) &&
                                  N010.getOpcode() == ISD::SHL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_173(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }

            // Pattern: (or:i32 (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32)), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32)), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
            // Emits: (tREV16:i32 GPR:i32:$src)
            // Pattern complexity = 73  cost = 1  size = 0
            if (CheckAndMask(N0000, Tmp0, INT64_C(4278190080)) &&
                N0000.getOpcode() == ISD::SHL) {
              SDValue N00000 = N0000.getOperand(0);
              SDValue N00001 = N0000.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N00001);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(8)) {
                  SDValue N001 = N00.getOperand(1);
                  if (N001.getOpcode() == ISD::AND) {
                    SDValue N0010 = N001.getOperand(0);
                    SDValue N0011 = N001.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0011);
                    if (Tmp3 &&
                        CheckAndMask(N0010, Tmp3, INT64_C(16711680)) &&
                        N0010.getOpcode() == ISD::SRL) {
                      SDValue N00100 = N0010.getOperand(0);
                      if (N00000 == N00100) {
                        SDValue N00101 = N0010.getOperand(1);
                        ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N00101);
                        if (Tmp4) {
                          int64_t CN5 = Tmp4->getSExtValue();
                          if (CN5 == INT64_C(8)) {
                            SDValue N01 = N0.getOperand(1);
                            if (N01.getOpcode() == ISD::AND) {
                              SDValue N010 = N01.getOperand(0);
                              SDValue N011 = N01.getOperand(1);
                              ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N011);
                              if (Tmp6 &&
                                  CheckAndMask(N010, Tmp6, INT64_C(65280)) &&
                                  N010.getOpcode() == ISD::SHL) {
                                SDValue N0100 = N010.getOperand(0);
                                if (N00000 == N0100) {
                                  SDValue N0101 = N010.getOperand(1);
                                  ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N0101);
                                  if (Tmp7) {
                                    int64_t CN8 = Tmp7->getSExtValue();
                                    if (CN8 == INT64_C(8)) {
                                      SDValue N1 = N.getOperand(1);
                                      if (N1.getOpcode() == ISD::AND) {
                                        SDValue N10 = N1.getOperand(0);
                                        SDValue N11 = N1.getOperand(1);
                                        ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                        if (Tmp9 &&
                                            CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                            N10.getOpcode() == ISD::SRL) {
                                          SDValue N100 = N10.getOperand(0);
                                          if (N00000 == N100) {
                                            SDValue N101 = N10.getOperand(1);
                                            ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                            if (Tmp10) {
                                              int64_t CN11 = Tmp10->getSExtValue();
                                              if (CN11 == INT64_C(8)) {
                                                SDNode *Result = Emit_173(N, ARM::tREV16, MVT::i32);
                                                return Result;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N00.getOpcode() == ISD::AND) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          if (CheckAndMask(N000, Tmp0, INT64_C(4278190080)) &&
              N000.getOpcode() == ISD::SHL) {
            SDValue N0000 = N000.getOperand(0);
            SDValue N0001 = N000.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N0001);
            if (Tmp1) {
              int64_t CN2 = Tmp1->getSExtValue();
              if (CN2 == INT64_C(8)) {
                SDValue N01 = N0.getOperand(1);
                if (N01.getOpcode() == ISD::OR) {
                  SDValue N010 = N01.getOperand(0);
                  if (N010.getOpcode() == ISD::AND) {
                    SDValue N0100 = N010.getOperand(0);
                    SDValue N0101 = N010.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0101);
                    if (Tmp3) {

                      // Pattern: (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (tREV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(65280)) &&
                          N0100.getOpcode() == ISD::SHL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(16711680)) &&
                                    N0110.getOpcode() == ISD::SRL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_174(N, ARM::tREV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }

                      // Pattern: (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (tREV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(16711680)) &&
                          N0100.getOpcode() == ISD::SRL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(65280)) &&
                                    N0110.getOpcode() == ISD::SHL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_174(N, ARM::tREV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (CheckAndMask(N000, Tmp0, INT64_C(16711680)) &&
              N000.getOpcode() == ISD::SRL) {
            SDValue N0000 = N000.getOperand(0);
            SDValue N0001 = N000.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N0001);
            if (Tmp1) {
              int64_t CN2 = Tmp1->getSExtValue();
              if (CN2 == INT64_C(8)) {
                SDValue N01 = N0.getOperand(1);
                if (N01.getOpcode() == ISD::OR) {
                  SDValue N010 = N01.getOperand(0);
                  if (N010.getOpcode() == ISD::AND) {
                    SDValue N0100 = N010.getOperand(0);
                    SDValue N0101 = N010.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0101);
                    if (Tmp3) {

                      // Pattern: (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (tREV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(65280)) &&
                          N0100.getOpcode() == ISD::SHL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(4278190080)) &&
                                    N0110.getOpcode() == ISD::SHL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_174(N, ARM::tREV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }

                      // Pattern: (or:i32 (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (tREV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(4278190080)) &&
                          N0100.getOpcode() == ISD::SHL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(65280)) &&
                                    N0110.getOpcode() == ISD::SHL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_174(N, ARM::tREV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (CheckAndMask(N000, Tmp0, INT64_C(65280)) &&
              N000.getOpcode() == ISD::SHL) {
            SDValue N0000 = N000.getOperand(0);
            SDValue N0001 = N000.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N0001);
            if (Tmp1) {
              int64_t CN2 = Tmp1->getSExtValue();
              if (CN2 == INT64_C(8)) {
                SDValue N01 = N0.getOperand(1);
                if (N01.getOpcode() == ISD::OR) {
                  SDValue N010 = N01.getOperand(0);
                  if (N010.getOpcode() == ISD::AND) {
                    SDValue N0100 = N010.getOperand(0);
                    SDValue N0101 = N010.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N0101);
                    if (Tmp3) {

                      // Pattern: (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (or:i32 (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32), (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (tREV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(16711680)) &&
                          N0100.getOpcode() == ISD::SRL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(4278190080)) &&
                                    N0110.getOpcode() == ISD::SHL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_174(N, ARM::tREV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }

                      // Pattern: (or:i32 (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 65280:i32), (or:i32 (and:i32 (shl:i32 GPR:i32:$src, 8:i32), 4278190080:i32), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 16711680:i32))), (and:i32 (srl:i32 GPR:i32:$src, 8:i32), 255:i32))
                      // Emits: (tREV16:i32 GPR:i32:$src)
                      // Pattern complexity = 73  cost = 1  size = 0
                      if (CheckAndMask(N0100, Tmp3, INT64_C(4278190080)) &&
                          N0100.getOpcode() == ISD::SHL) {
                        SDValue N01000 = N0100.getOperand(0);
                        if (N0000 == N01000) {
                          SDValue N01001 = N0100.getOperand(1);
                          ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N01001);
                          if (Tmp4) {
                            int64_t CN5 = Tmp4->getSExtValue();
                            if (CN5 == INT64_C(8)) {
                              SDValue N011 = N01.getOperand(1);
                              if (N011.getOpcode() == ISD::AND) {
                                SDValue N0110 = N011.getOperand(0);
                                SDValue N0111 = N011.getOperand(1);
                                ConstantSDNode *Tmp6 = dyn_cast<ConstantSDNode>(N0111);
                                if (Tmp6 &&
                                    CheckAndMask(N0110, Tmp6, INT64_C(16711680)) &&
                                    N0110.getOpcode() == ISD::SRL) {
                                  SDValue N01100 = N0110.getOperand(0);
                                  if (N0000 == N01100) {
                                    SDValue N01101 = N0110.getOperand(1);
                                    ConstantSDNode *Tmp7 = dyn_cast<ConstantSDNode>(N01101);
                                    if (Tmp7) {
                                      int64_t CN8 = Tmp7->getSExtValue();
                                      if (CN8 == INT64_C(8)) {
                                        SDValue N1 = N.getOperand(1);
                                        if (N1.getOpcode() == ISD::AND) {
                                          SDValue N10 = N1.getOperand(0);
                                          SDValue N11 = N1.getOperand(1);
                                          ConstantSDNode *Tmp9 = dyn_cast<ConstantSDNode>(N11);
                                          if (Tmp9 &&
                                              CheckAndMask(N10, Tmp9, INT64_C(255)) &&
                                              N10.getOpcode() == ISD::SRL) {
                                            SDValue N100 = N10.getOperand(0);
                                            if (N0000 == N100) {
                                              SDValue N101 = N10.getOperand(1);
                                              ConstantSDNode *Tmp10 = dyn_cast<ConstantSDNode>(N101);
                                              if (Tmp10) {
                                                int64_t CN11 = Tmp10->getSExtValue();
                                                if (CN11 == INT64_C(8)) {
                                                  SDNode *Result = Emit_174(N, ARM::tREV16, MVT::i32);
                                                  return Result;
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        if (CheckAndMask(N00, Tmp0, INT64_C(4294901760))) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::AND) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp1 &&
                CheckAndMask(N10, Tmp1, INT64_C(65535))) {

              // Pattern: (or:i32 (and:i32 GPR:i32:$src1, 4294901760:i32), (and:i32 (sra:i32 GPR:i32:$src2, (imm:i32)<<P:Predicate_imm16_31>>:$shamt), 65535:i32))
              // Emits: (PKHTB:i32 GPR:i32:$src1, GPR:i32:$src2, (imm:i32):$shamt)
              // Pattern complexity = 26  cost = 1  size = 0
              if (N10.getOpcode() == ISD::SRA) {
                SDValue N100 = N10.getOperand(0);
                SDValue N101 = N10.getOperand(1);
                if (N101.getOpcode() == ISD::Constant &&
                    Predicate_imm16_31(N101.getNode())) {
                  SDNode *Result = Emit_162(N, ARM::PKHTB, MVT::i32);
                  return Result;
                }
              }

              // Pattern: (or:i32 (and:i32 GPR:i32:$src1, 4294901760:i32), (and:i32 (srl:i32 GPR:i32:$src2, (imm:i32)<<P:Predicate_imm1_15>>:$shamt), 65535:i32))
              // Emits: (PKHTB:i32 GPR:i32:$src1, GPR:i32:$src2, (imm:i32)<<P:Predicate_imm1_15>>:$shamt)
              // Pattern complexity = 26  cost = 1  size = 0
              if (N10.getOpcode() == ISD::SRL) {
                SDValue N100 = N10.getOperand(0);
                SDValue N101 = N10.getOperand(1);
                if (N101.getOpcode() == ISD::Constant &&
                    Predicate_imm1_15(N101.getNode())) {
                  SDNode *Result = Emit_162(N, ARM::PKHTB, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }
        if (CheckAndMask(N00, Tmp0, INT64_C(65535))) {

          // Pattern: (or:i32 (and:i32 (sra:i32 GPR:i32:$src2, (imm:i32)<<P:Predicate_imm16_31>>:$shamt), 65535:i32), (and:i32 GPR:i32:$src1, 4294901760:i32))
          // Emits: (PKHTB:i32 GPR:i32:$src1, GPR:i32:$src2, (imm:i32):$shamt)
          // Pattern complexity = 26  cost = 1  size = 0
          if (N00.getOpcode() == ISD::SRA) {
            SDValue N000 = N00.getOperand(0);
            SDValue N001 = N00.getOperand(1);
            if (N001.getOpcode() == ISD::Constant &&
                Predicate_imm16_31(N001.getNode())) {
              SDValue N1 = N.getOperand(1);
              if (N1.getOpcode() == ISD::AND) {
                SDValue N10 = N1.getOperand(0);
                SDValue N11 = N1.getOperand(1);
                ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N11);
                if (Tmp1 &&
                    CheckAndMask(N10, Tmp1, INT64_C(4294901760))) {
                  SDNode *Result = Emit_171(N, ARM::PKHTB, MVT::i32);
                  return Result;
                }
              }
            }
          }

          // Pattern: (or:i32 (and:i32 (srl:i32 GPR:i32:$src2, (imm:i32)<<P:Predicate_imm1_15>>:$shamt), 65535:i32), (and:i32 GPR:i32:$src1, 4294901760:i32))
          // Emits: (PKHTB:i32 GPR:i32:$src1, GPR:i32:$src2, (imm:i32)<<P:Predicate_imm1_15>>:$shamt)
          // Pattern complexity = 26  cost = 1  size = 0
          if (N00.getOpcode() == ISD::SRL) {
            SDValue N000 = N00.getOperand(0);
            SDValue N001 = N00.getOperand(1);
            if (N001.getOpcode() == ISD::Constant &&
                Predicate_imm1_15(N001.getNode())) {
              SDValue N1 = N.getOperand(1);
              if (N1.getOpcode() == ISD::AND) {
                SDValue N10 = N1.getOperand(0);
                SDValue N11 = N1.getOperand(1);
                ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N11);
                if (Tmp1 &&
                    CheckAndMask(N10, Tmp1, INT64_C(4294901760))) {
                  SDNode *Result = Emit_171(N, ARM::PKHTB, MVT::i32);
                  return Result;
                }
              }
            }
          }

          // Pattern: (or:i32 (and:i32 GPR:i32:$src1, 65535:i32), (and:i32 (shl:i32 GPR:i32:$src2, (imm:i32):$shamt), 4294901760:i32))
          // Emits: (PKHBT:i32 GPR:i32:$src1, GPR:i32:$src2, (imm:i32):$shamt)
          // Pattern complexity = 25  cost = 1  size = 0
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::AND) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp1 &&
                CheckAndMask(N10, Tmp1, INT64_C(4294901760)) &&
                N10.getOpcode() == ISD::SHL) {
              SDValue N100 = N10.getOperand(0);
              SDValue N101 = N10.getOperand(1);
              if (N101.getOpcode() == ISD::Constant) {
                SDNode *Result = Emit_162(N, ARM::PKHBT, MVT::i32);
                return Result;
              }
            }
          }
        }

        // Pattern: (or:i32 (and:i32 (shl:i32 GPR:i32:$src2, (imm:i32):$shamt), 4294901760:i32), (and:i32 GPR:i32:$src1, 65535:i32))
        // Emits: (PKHBT:i32 GPR:i32:$src1, GPR:i32:$src2, (imm:i32):$shamt)
        // Pattern complexity = 25  cost = 1  size = 0
        if (CheckAndMask(N00, Tmp0, INT64_C(4294901760)) &&
            N00.getOpcode() == ISD::SHL) {
          SDValue N000 = N00.getOperand(0);
          SDValue N001 = N00.getOperand(1);
          if (N001.getOpcode() == ISD::Constant) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::AND) {
              SDValue N10 = N1.getOperand(0);
              SDValue N11 = N1.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N11);
              if (Tmp1 &&
                  CheckAndMask(N10, Tmp1, INT64_C(65535))) {
                SDNode *Result = Emit_171(N, ARM::PKHBT, MVT::i32);
                return Result;
              }
            }
          }
        }

        // Pattern: (or:i32 (and:i32 GPR:i32:$src1, 65535:i32), (and:i32 GPR:i32:$src2, 4294901760:i32))
        // Emits: (PKHBT:i32 GPR:i32:$src1, GPR:i32:$src2, 0:i32)
        // Pattern complexity = 19  cost = 1  size = 0
        if (CheckAndMask(N00, Tmp0, INT64_C(65535))) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::AND) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp1 &&
                CheckAndMask(N10, Tmp1, INT64_C(4294901760))) {
              SDNode *Result = Emit_164(N, ARM::PKHBT, MVT::i32);
              return Result;
            }
          }
        }
        if (CheckAndMask(N00, Tmp0, INT64_C(4294901760))) {
          SDValue N1 = N.getOperand(1);

          // Pattern: (or:i32 (and:i32 GPR:i32:$src1, 4294901760:i32), (srl:i32 GPR:i32:$src2, 16:i32))
          // Emits: (PKHTB:i32 GPR:i32:$src1, GPR:i32:$src2, 16:i32)
          // Pattern complexity = 19  cost = 1  size = 0
          if (N1.getOpcode() == ISD::SRL) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp1) {
              int64_t CN2 = Tmp1->getSExtValue();
              if (CN2 == INT64_C(16)) {
                SDNode *Result = Emit_166(N, ARM::PKHTB, MVT::i32);
                return Result;
              }
            }
          }

          // Pattern: (or:i32 (and:i32 GPR:i32:$src2, 4294901760:i32), (and:i32 GPR:i32:$src1, 65535:i32))
          // Emits: (PKHBT:i32 GPR:i32:$src1, GPR:i32:$src2, 0:i32)
          // Pattern complexity = 19  cost = 1  size = 0
          if (N1.getOpcode() == ISD::AND) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp1 &&
                CheckAndMask(N10, Tmp1, INT64_C(65535))) {
              SDNode *Result = Emit_175(N, ARM::PKHBT, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (or:i32 (srl:i32 GPR:i32:$src2, 16:i32), (and:i32 GPR:i32:$src1, 4294901760:i32))
    // Emits: (PKHTB:i32 GPR:i32:$src1, GPR:i32:$src2, 16:i32)
    // Pattern complexity = 19  cost = 1  size = 0
    if (N0.getOpcode() == ISD::SRL) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(16)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::AND) {
            SDValue N10 = N1.getOperand(0);
            SDValue N11 = N1.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N11);
            if (Tmp2 &&
                CheckAndMask(N10, Tmp2, INT64_C(4294901760))) {
              SDNode *Result = Emit_177(N, ARM::PKHTB, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (or:i32 (and:i32 GPR:i32:$src1, 65535:i32), (shl:i32 GPR:i32:$src2, (imm:i32)<<P:Predicate_imm16_31>>:$shamt))
    // Emits: (PKHBT:i32 GPR:i32:$src1, GPR:i32:$src2, (imm:i32)<<P:Predicate_imm16_31>>:$shamt)
    // Pattern complexity = 18  cost = 1  size = 0
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0 &&
          CheckAndMask(N00, Tmp0, INT64_C(65535))) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::SHL) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          if (N11.getOpcode() == ISD::Constant &&
              Predicate_imm16_31(N11.getNode())) {
            SDNode *Result = Emit_165(N, ARM::PKHBT, MVT::i32);
            return Result;
          }
        }
      }
    }

    // Pattern: (or:i32 (shl:i32 GPR:i32:$src2, (imm:i32)<<P:Predicate_imm16_31>>:$shamt), (and:i32 GPR:i32:$src1, 65535:i32))
    // Emits: (PKHBT:i32 GPR:i32:$src1, GPR:i32:$src2, (imm:i32)<<P:Predicate_imm16_31>>:$shamt)
    // Pattern complexity = 18  cost = 1  size = 0
    if (N0.getOpcode() == ISD::SHL) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_imm16_31(N01.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::AND) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0 &&
              CheckAndMask(N10, Tmp0, INT64_C(65535))) {
            SDNode *Result = Emit_176(N, ARM::PKHBT, MVT::i32);
            return Result;
          }
        }
      }
    }
  }
  if ((!Subtarget->isThumb())) {
    {
      SDValue N0 = N.getOperand(0);

      // Pattern: (or:i32 GPR:i32:$a, so_reg:i32:$b)
      // Emits: (ORRrs:i32 GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2)) {
          SDNode *Result = Emit_38(N, ARM::ORRrs, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (or:i32 so_reg:i32:$b, GPR:i32:$a)
      // Emits: (ORRrs:i32 GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue CPTmpN0_0;
        SDValue CPTmpN0_1;
        SDValue CPTmpN0_2;
        if (SelectShifterOperandReg(N, N0, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2)) {
          SDNode *Result = Emit_61(N, ARM::ORRrs, MVT::i32, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2);
          return Result;
        }
      }
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant) {

        // Pattern: (or:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
        // Emits: (ORRri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
        // Pattern complexity = 7  cost = 1  size = 0
        if (Predicate_so_imm(N1.getNode())) {
          SDNode *Result = Emit_36(N, ARM::ORRri, MVT::i32);
          return Result;
        }

        // Pattern: (or:i32 GPR:i32:$LHS, (imm:i32)<<P:Predicate_so_imm2part>>:$RHS)
        // Emits: (ORRri:i32 (ORRri:i32 GPR:i32:$LHS, (so_imm2part_1:i32 (imm:i32):$RHS)), (so_imm2part_2:i32 (imm:i32):$RHS))
        // Pattern complexity = 7  cost = 2  size = 0
        if (Predicate_so_imm2part(N1.getNode())) {
          SDNode *Result = Emit_167(N, ARM::ORRri, ARM::ORRri, MVT::i32, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (or:i32 GPR:i32:$a, GPR:i32:$b)
    // Emits: (ORRrr:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_37(N, ARM::ORRrr, MVT::i32);
    return Result;
  }

  // Pattern: (or:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tORR:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_46(N, ARM::tORR, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_178(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN_0, SDValue &CPTmpN_1, SDValue &CPTmpN_2) DISABLE_INLINE {
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { CPTmpN_0, CPTmpN_1, CPTmpN_2, Tmp1, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 6);
}
SDNode *Select_ISD_ROTR_i32(const SDValue &N) {

  // Pattern: so_reg:i32:$src
  // Emits: (MOVs:i32 so_reg:i32:$src)
  // Pattern complexity = 12  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue CPTmpN_0;
    SDValue CPTmpN_1;
    SDValue CPTmpN_2;
    if (SelectShifterOperandReg(N, N, CPTmpN_0, CPTmpN_1, CPTmpN_2)) {
      SDNode *Result = Emit_178(N, ARM::MOVs, MVT::i32, CPTmpN_0, CPTmpN_1, CPTmpN_2);
      return Result;
    }
  }

  // Pattern: (rotr:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tROR:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_46(N, ARM::tROR, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SHL_i32(const SDValue &N) {

  // Pattern: so_reg:i32:$src
  // Emits: (MOVs:i32 so_reg:i32:$src)
  // Pattern complexity = 12  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue CPTmpN_0;
    SDValue CPTmpN_1;
    SDValue CPTmpN_2;
    if (SelectShifterOperandReg(N, N, CPTmpN_0, CPTmpN_1, CPTmpN_2)) {
      SDNode *Result = Emit_178(N, ARM::MOVs, MVT::i32, CPTmpN_0, CPTmpN_1, CPTmpN_2);
      return Result;
    }
  }
  if ((Subtarget->isThumb())) {

    // Pattern: (shl:i32 GPR:i32:$lhs, (imm:i32):$rhs)
    // Emits: (tLSLri:i32 GPR:i32:$lhs, (imm:i32):$rhs)
    // Pattern complexity = 6  cost = 1  size = 0
    {
      SDValue N0 = N.getOperand(0);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_25(N, ARM::tLSLri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (shl:i32 GPR:i32:$lhs, GPR:i32:$rhs)
    // Emits: (tLSLrr:i32 GPR:i32:$lhs, GPR:i32:$rhs)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_46(N, ARM::tLSLrr, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_179(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1, Tmp2);
}
SDNode *Emit_180(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, Tmp1, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_181(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp6 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp7 = CurDAG->getRegister(0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0000, Tmp6, Tmp7);
}
SDNode *Emit_182(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0000);
}
SDNode *Emit_183(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp6 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp7 = CurDAG->getRegister(0, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000, Tmp6, Tmp7);
}
SDNode *Emit_184(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000);
}
SDNode *Select_ISD_SIGN_EXTEND_INREG_i32(const SDValue &N) {

  // Pattern: (sext_inreg:i32 (or:i32 (srl:i32 (and:i32 GPR:i32:$src, 65280:i32), 8:i32), (shl:i32 GPR:i32:$src, 8:i32)), i16:Other)
  // Emits: (REVSH:i32 GPR:i32:$src)
  // Pattern complexity = 30  cost = 1  size = 0
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::OR) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::SRL) {
        SDValue N000 = N00.getOperand(0);
        if (N000.getOpcode() == ISD::AND) {
          SDValue N0000 = N000.getOperand(0);
          SDValue N0001 = N000.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0001);
          if (Tmp0 &&
              CheckAndMask(N0000, Tmp0, INT64_C(65280))) {
            SDValue N001 = N00.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N001);
            if (Tmp1) {
              int64_t CN2 = Tmp1->getSExtValue();
              if (CN2 == INT64_C(8)) {
                SDValue N01 = N0.getOperand(1);
                if (N01.getOpcode() == ISD::SHL) {
                  SDValue N010 = N01.getOperand(0);
                  if (N0000 == N010) {
                    SDValue N011 = N01.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N011);
                    if (Tmp3) {
                      int64_t CN4 = Tmp3->getSExtValue();
                      if (CN4 == INT64_C(8)) {
                        SDValue N1 = N.getOperand(1);
                        if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
                          SDNode *Result = Emit_181(N, ARM::REVSH, MVT::i32);
                          return Result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (sext_inreg:i32 (or:i32 (srl:i32 (and:i32 GPR:i32:$src, 65535:i32), 8:i32), (shl:i32 GPR:i32:$src, 8:i32)), i16:Other)
  // Emits: (tREVSH:i32 GPR:i32:$src)
  // Pattern complexity = 30  cost = 1  size = 0
  if ((Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::OR) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::SRL) {
        SDValue N000 = N00.getOperand(0);
        if (N000.getOpcode() == ISD::AND) {
          SDValue N0000 = N000.getOperand(0);
          SDValue N0001 = N000.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0001);
          if (Tmp0 &&
              CheckAndMask(N0000, Tmp0, INT64_C(65535))) {
            SDValue N001 = N00.getOperand(1);
            ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N001);
            if (Tmp1) {
              int64_t CN2 = Tmp1->getSExtValue();
              if (CN2 == INT64_C(8)) {
                SDValue N01 = N0.getOperand(1);
                if (N01.getOpcode() == ISD::SHL) {
                  SDValue N010 = N01.getOperand(0);
                  if (N0000 == N010) {
                    SDValue N011 = N01.getOperand(1);
                    ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N011);
                    if (Tmp3) {
                      int64_t CN4 = Tmp3->getSExtValue();
                      if (CN4 == INT64_C(8)) {
                        SDValue N1 = N.getOperand(1);
                        if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
                          SDNode *Result = Emit_182(N, ARM::tREVSH, MVT::i32);
                          return Result;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (sext_inreg:i32 (or:i32 (shl:i32 GPR:i32:$src, 8:i32), (srl:i32 (and:i32 GPR:i32:$src, 65280:i32), 8:i32)), i16:Other)
  // Emits: (REVSH:i32 GPR:i32:$src)
  // Pattern complexity = 30  cost = 1  size = 0
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::OR) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::SHL) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(8)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::SRL) {
              SDValue N010 = N01.getOperand(0);
              if (N010.getOpcode() == ISD::AND) {
                SDValue N0100 = N010.getOperand(0);
                SDValue N0101 = N010.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N0101);
                if (Tmp2 &&
                    CheckAndMask(N0100, Tmp2, INT64_C(65280)) &&
                    N000 == N0100) {
                  SDValue N011 = N01.getOperand(1);
                  ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N011);
                  if (Tmp3) {
                    int64_t CN4 = Tmp3->getSExtValue();
                    if (CN4 == INT64_C(8)) {
                      SDValue N1 = N.getOperand(1);
                      if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
                        SDNode *Result = Emit_183(N, ARM::REVSH, MVT::i32);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (sext_inreg:i32 (or:i32 (shl:i32 GPR:i32:$src, 8:i32), (srl:i32 (and:i32 GPR:i32:$src, 65535:i32), 8:i32)), i16:Other)
  // Emits: (tREVSH:i32 GPR:i32:$src)
  // Pattern complexity = 30  cost = 1  size = 0
  if ((Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::OR) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::SHL) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(8)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::SRL) {
              SDValue N010 = N01.getOperand(0);
              if (N010.getOpcode() == ISD::AND) {
                SDValue N0100 = N010.getOperand(0);
                SDValue N0101 = N010.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N0101);
                if (Tmp2 &&
                    CheckAndMask(N0100, Tmp2, INT64_C(65535)) &&
                    N000 == N0100) {
                  SDValue N011 = N01.getOperand(1);
                  ConstantSDNode *Tmp3 = dyn_cast<ConstantSDNode>(N011);
                  if (Tmp3) {
                    int64_t CN4 = Tmp3->getSExtValue();
                    if (CN4 == INT64_C(8)) {
                      SDValue N1 = N.getOperand(1);
                      if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
                        SDNode *Result = Emit_184(N, ARM::tREVSH, MVT::i32);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::ROTR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_rot_imm(N01.getNode())) {
        SDValue N1 = N.getOperand(1);

        // Pattern: (sext_inreg:i32 (rotr:i32 GPR:i32:$Src, (imm:i32)<<P:Predicate_rot_imm>>:$rot), i8:Other)
        // Emits: (SXTBr_rot:i32 GPR:i32:$Src, (imm:i32):$rot)
        // Pattern complexity = 10  cost = 1  size = 0
        if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
          SDNode *Result = Emit_180(N, ARM::SXTBr_rot, MVT::i32);
          return Result;
        }

        // Pattern: (sext_inreg:i32 (rotr:i32 GPR:i32:$Src, (imm:i32)<<P:Predicate_rot_imm>>:$rot), i16:Other)
        // Emits: (SXTHr_rot:i32 GPR:i32:$Src, (imm:i32):$rot)
        // Pattern complexity = 10  cost = 1  size = 0
        if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
          SDNode *Result = Emit_180(N, ARM::SXTHr_rot, MVT::i32);
          return Result;
        }
      }
    }
    SDValue N1 = N.getOperand(1);

    // Pattern: (sext_inreg:i32 GPR:i32:$Src, i8:Other)
    // Emits: (SXTBr:i32 GPR:i32:$Src)
    // Pattern complexity = 3  cost = 1  size = 0
    if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
      SDNode *Result = Emit_179(N, ARM::SXTBr, MVT::i32);
      return Result;
    }

    // Pattern: (sext_inreg:i32 GPR:i32:$Src, i16:Other)
    // Emits: (SXTHr:i32 GPR:i32:$Src)
    // Pattern complexity = 3  cost = 1  size = 0
    if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
      SDNode *Result = Emit_179(N, ARM::SXTHr, MVT::i32);
      return Result;
    }
  }
  if ((Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (sext_inreg:i32 GPR:i32:$src, i8:Other)
    // Emits: (tSXTB:i32 GPR:i32:$src)
    // Pattern complexity = 3  cost = 1  size = 0
    if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
      SDNode *Result = Emit_113(N, ARM::tSXTB, MVT::i32);
      return Result;
    }

    // Pattern: (sext_inreg:i32 GPR:i32:$src, i16:Other)
    // Emits: (tSXTH:i32 GPR:i32:$src)
    // Pattern complexity = 3  cost = 1  size = 0
    if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
      SDNode *Result = Emit_113(N, ARM::tSXTH, MVT::i32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_185(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N010, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_186(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp6 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp7 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N010, Tmp6, Tmp7 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_187(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N0100 = N010.getOperand(0);
  SDValue N0101 = N010.getOperand(1);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp8 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp9 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N0100, Tmp8, Tmp9 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_188(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N00, N01, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_189(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N01, N000, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_190(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp6 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp7 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N01, N000, Tmp6, Tmp7 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_191(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N0000 = N000.getOperand(0);
  SDValue N0001 = N000.getOperand(1);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp8 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp9 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N01, N0000, Tmp8, Tmp9 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_192(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N01, N00, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_ISD_SRA_i32(const SDValue &N) {
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TEOps())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (sra:i32 (mul:i32 GPR:i32:$a, (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32)), 16:i32)
      // Emits: (SMULWB:i32 GPR:i32:$a, GPR:i32:$b)
      // Pattern complexity = 27  cost = 1  size = 0
      {
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::SRA) {
          SDValue N010 = N01.getOperand(0);
          if (N010.getOpcode() == ISD::SHL) {
            SDValue N0100 = N010.getOperand(0);
            SDValue N0101 = N010.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0101);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDValue N011 = N01.getOperand(1);
                ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N011);
                if (Tmp2) {
                  int64_t CN3 = Tmp2->getSExtValue();
                  if (CN3 == INT64_C(16)) {
                    SDValue N1 = N.getOperand(1);
                    ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1);
                    if (Tmp4) {
                      int64_t CN5 = Tmp4->getSExtValue();
                      if (CN5 == INT64_C(16)) {
                        SDNode *Result = Emit_187(N, ARM::SMULWB, MVT::i32);
                        return Result;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }

      // Pattern: (sra:i32 (mul:i32 (sra:i32 (shl:i32 GPR:i32:$b, 16:i32), 16:i32), GPR:i32:$a), 16:i32)
      // Emits: (SMULWB:i32 GPR:i32:$a, GPR:i32:$b)
      // Pattern complexity = 27  cost = 1  size = 0
      if (N00.getOpcode() == ISD::SRA) {
        SDValue N000 = N00.getOperand(0);
        if (N000.getOpcode() == ISD::SHL) {
          SDValue N0000 = N000.getOperand(0);
          SDValue N0001 = N000.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0001);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N001 = N00.getOperand(1);
              ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N001);
              if (Tmp2) {
                int64_t CN3 = Tmp2->getSExtValue();
                if (CN3 == INT64_C(16)) {
                  SDValue N01 = N0.getOperand(1);
                  SDValue N1 = N.getOperand(1);
                  ConstantSDNode *Tmp4 = dyn_cast<ConstantSDNode>(N1);
                  if (Tmp4) {
                    int64_t CN5 = Tmp4->getSExtValue();
                    if (CN5 == INT64_C(16)) {
                      SDNode *Result = Emit_191(N, ARM::SMULWB, MVT::i32);
                      return Result;
                    }
                  }
                }
              }
            }
          }
        }
      }

      // Pattern: (sra:i32 (mul:i32 GPR:i32:$a, (sra:i32 GPR:i32:$b, 16:i32)), 16:i32)
      // Emits: (SMULWT:i32 GPR:i32:$a, GPR:i32:$b)
      // Pattern complexity = 19  cost = 1  size = 0
      {
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::SRA) {
          SDValue N010 = N01.getOperand(0);
          SDValue N011 = N01.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N011);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDValue N1 = N.getOperand(1);
              ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N1);
              if (Tmp2) {
                int64_t CN3 = Tmp2->getSExtValue();
                if (CN3 == INT64_C(16)) {
                  SDNode *Result = Emit_186(N, ARM::SMULWT, MVT::i32);
                  return Result;
                }
              }
            }
          }
        }
      }

      // Pattern: (sra:i32 (mul:i32 (sra:i32 GPR:i32:$b, 16:i32), GPR:i32:$a), 16:i32)
      // Emits: (SMULWT:i32 GPR:i32:$a, GPR:i32:$b)
      // Pattern complexity = 19  cost = 1  size = 0
      if (N00.getOpcode() == ISD::SRA) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            SDValue N1 = N.getOperand(1);
            ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N1);
            if (Tmp2) {
              int64_t CN3 = Tmp2->getSExtValue();
              if (CN3 == INT64_C(16)) {
                SDNode *Result = Emit_190(N, ARM::SMULWT, MVT::i32);
                return Result;
              }
            }
          }
        }
      }

      // Pattern: (sra:i32 (mul:i32 GPR:i32:$a, (sext_inreg:i32 GPR:i32:$b, i16:Other)), 16:i32)
      // Emits: (SMULWB:i32 GPR:i32:$a, GPR:i32:$b)
      // Pattern complexity = 14  cost = 1  size = 0
      {
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::SIGN_EXTEND_INREG) {
          SDValue N010 = N01.getOperand(0);
          SDValue N011 = N01.getOperand(1);
          if (cast<VTSDNode>(N011)->getVT() == MVT::i16) {
            SDValue N1 = N.getOperand(1);
            ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
            if (Tmp0) {
              int64_t CN1 = Tmp0->getSExtValue();
              if (CN1 == INT64_C(16)) {
                SDNode *Result = Emit_185(N, ARM::SMULWB, MVT::i32);
                return Result;
              }
            }
          }
        }
      }

      // Pattern: (sra:i32 (mul:i32 (sext_inreg:i32 GPR:i32:$b, i16:Other), GPR:i32:$a), 16:i32)
      // Emits: (SMULWB:i32 GPR:i32:$a, GPR:i32:$b)
      // Pattern complexity = 14  cost = 1  size = 0
      if (N00.getOpcode() == ISD::SIGN_EXTEND_INREG) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        if (cast<VTSDNode>(N001)->getVT() == MVT::i16) {
          SDValue N01 = N0.getOperand(1);
          SDValue N1 = N.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDNode *Result = Emit_189(N, ARM::SMULWB, MVT::i32);
              return Result;
            }
          }
        }
      }
    }
  }

  // Pattern: so_reg:i32:$src
  // Emits: (MOVs:i32 so_reg:i32:$src)
  // Pattern complexity = 12  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue CPTmpN_0;
    SDValue CPTmpN_1;
    SDValue CPTmpN_2;
    if (SelectShifterOperandReg(N, N, CPTmpN_0, CPTmpN_1, CPTmpN_2)) {
      SDNode *Result = Emit_178(N, ARM::MOVs, MVT::i32, CPTmpN_0, CPTmpN_1, CPTmpN_2);
      return Result;
    }
  }
  if ((!Subtarget->isThumb()) && (Subtarget->hasV5TEOps())) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::MUL) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (sra:i32 (mul:i32 GPR:i32:$a, GPR:i32<<P:Predicate_sext_16_node>>:$b), 16:i32)
      // Emits: (SMULWB:i32 GPR:i32:$a, GPR:i32:$b)
      // Pattern complexity = 12  cost = 1  size = 0
      {
        SDValue N01 = N0.getOperand(1);
        if (Predicate_sext_16_node(N01.getNode())) {
          SDValue N1 = N.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(16)) {
              SDNode *Result = Emit_188(N, ARM::SMULWB, MVT::i32);
              return Result;
            }
          }
        }
      }

      // Pattern: (sra:i32 (mul:i32 GPR:i32<<P:Predicate_sext_16_node>>:$b, GPR:i32:$a), 16:i32)
      // Emits: (SMULWB:i32 GPR:i32:$a, GPR:i32:$b)
      // Pattern complexity = 12  cost = 1  size = 0
      if (Predicate_sext_16_node(N00.getNode())) {
        SDValue N01 = N0.getOperand(1);
        SDValue N1 = N.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(16)) {
            SDNode *Result = Emit_192(N, ARM::SMULWB, MVT::i32);
            return Result;
          }
        }
      }
    }
  }
  if ((Subtarget->isThumb())) {

    // Pattern: (sra:i32 GPR:i32:$lhs, (imm:i32):$rhs)
    // Emits: (tASRri:i32 GPR:i32:$lhs, (imm:i32):$rhs)
    // Pattern complexity = 6  cost = 1  size = 0
    {
      SDValue N0 = N.getOperand(0);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_25(N, ARM::tASRri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (sra:i32 GPR:i32:$lhs, GPR:i32:$rhs)
    // Emits: (tASRrr:i32 GPR:i32:$lhs, GPR:i32:$rhs)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_46(N, ARM::tASRrr, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRL_i32(const SDValue &N) {

  // Pattern: so_reg:i32:$src
  // Emits: (MOVs:i32 so_reg:i32:$src)
  // Pattern complexity = 12  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDValue CPTmpN_0;
    SDValue CPTmpN_1;
    SDValue CPTmpN_2;
    if (SelectShifterOperandReg(N, N, CPTmpN_0, CPTmpN_1, CPTmpN_2)) {
      SDNode *Result = Emit_178(N, ARM::MOVs, MVT::i32, CPTmpN_0, CPTmpN_1, CPTmpN_2);
      return Result;
    }
  }
  if ((Subtarget->isThumb())) {

    // Pattern: (srl:i32 GPR:i32:$lhs, (imm:i32):$rhs)
    // Emits: (tLSRri:i32 GPR:i32:$lhs, (imm:i32):$rhs)
    // Pattern complexity = 6  cost = 1  size = 0
    {
      SDValue N0 = N.getOperand(0);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_25(N, ARM::tLSRri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (srl:i32 GPR:i32:$lhs, GPR:i32:$rhs)
    // Emits: (tLSRrr:i32 GPR:i32:$lhs, GPR:i32:$rhs)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_46(N, ARM::tLSRrr, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_193(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN3_0, SDValue &CPTmpN3_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N2, CPTmpN3_0, CPTmpN3_1, Tmp3, Tmp4, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 8);
}
SDNode *Select_ISD_STORE_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_istore(N.getNode())) {

      // Pattern: (ist:i32 GPR:i32:$src, GPR:i32:$base, am2offset:i32:$offset)<<P:Predicate_istore>><<P:Predicate_pre_store>>
      // Emits: (STR_PRE:i32 GPR:i32:$src, GPR:i32:$base, am2offset:i32:$offset)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_pre_store(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue N3 = N.getOperand(3);
        SDValue CPTmpN3_0;
        SDValue CPTmpN3_1;
        if (SelectAddrMode2Offset(N, N3, CPTmpN3_0, CPTmpN3_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N3.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_193(N, ARM::STR_PRE, MVT::i32, CPTmpN3_0, CPTmpN3_1);
          return Result;
        }
      }

      // Pattern: (ist:i32 GPR:i32:$src, GPR:i32:$base, am2offset:i32:$offset)<<P:Predicate_istore>><<P:Predicate_post_store>>
      // Emits: (STR_POST:i32 GPR:i32:$src, GPR:i32:$base, am2offset:i32:$offset)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_post_store(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue N3 = N.getOperand(3);
        SDValue CPTmpN3_0;
        SDValue CPTmpN3_1;
        if (SelectAddrMode2Offset(N, N3, CPTmpN3_0, CPTmpN3_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N3.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_193(N, ARM::STR_POST, MVT::i32, CPTmpN3_0, CPTmpN3_1);
          return Result;
        }
      }
    }
    if (Predicate_itruncstore(N.getNode())) {

      // Pattern: (ist:i32 GPR:i32:$src, GPR:i32:$base, am3offset:i32:$offset)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>>
      // Emits: (STRH_PRE:i32 GPR:i32:$src, GPR:i32:$base, am3offset:i32:$offset)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_pre_truncst(N.getNode()) &&
          Predicate_pre_truncsti16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue N3 = N.getOperand(3);
        SDValue CPTmpN3_0;
        SDValue CPTmpN3_1;
        if (SelectAddrMode3Offset(N, N3, CPTmpN3_0, CPTmpN3_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N3.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_193(N, ARM::STRH_PRE, MVT::i32, CPTmpN3_0, CPTmpN3_1);
          return Result;
        }
      }

      // Pattern: (ist:i32 GPR:i32:$src, GPR:i32:$base, am3offset:i32:$offset)<<P:Predicate_itruncstore>><<P:Predicate_post_truncst>><<P:Predicate_post_truncsti16>>
      // Emits: (STRH_POST:i32 GPR:i32:$src, GPR:i32:$base, am3offset:i32:$offset)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_post_truncst(N.getNode()) &&
          Predicate_post_truncsti16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue N3 = N.getOperand(3);
        SDValue CPTmpN3_0;
        SDValue CPTmpN3_1;
        if (SelectAddrMode3Offset(N, N3, CPTmpN3_0, CPTmpN3_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N3.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_193(N, ARM::STRH_POST, MVT::i32, CPTmpN3_0, CPTmpN3_1);
          return Result;
        }
      }

      // Pattern: (ist:i32 GPR:i32:$src, GPR:i32:$base, am2offset:i32:$offset)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>>
      // Emits: (STRB_PRE:i32 GPR:i32:$src, GPR:i32:$base, am2offset:i32:$offset)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_pre_truncst(N.getNode()) &&
          Predicate_pre_truncsti8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue N3 = N.getOperand(3);
        SDValue CPTmpN3_0;
        SDValue CPTmpN3_1;
        if (SelectAddrMode2Offset(N, N3, CPTmpN3_0, CPTmpN3_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N3.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_193(N, ARM::STRB_PRE, MVT::i32, CPTmpN3_0, CPTmpN3_1);
          return Result;
        }
      }

      // Pattern: (ist:i32 GPR:i32:$src, GPR:i32:$base, am2offset:i32:$offset)<<P:Predicate_itruncstore>><<P:Predicate_post_truncst>><<P:Predicate_post_truncsti8>>
      // Emits: (STRB_POST:i32 GPR:i32:$src, GPR:i32:$base, am2offset:i32:$offset)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_post_truncst(N.getNode()) &&
          Predicate_post_truncsti8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue N3 = N.getOperand(3);
        SDValue CPTmpN3_0;
        SDValue CPTmpN3_1;
        if (SelectAddrMode2Offset(N, N3, CPTmpN3_0, CPTmpN3_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N3.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_193(N, ARM::STRB_POST, MVT::i32, CPTmpN3_0, CPTmpN3_1);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_194(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, Tmp2, Tmp3, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 7);
}
SDNode *Emit_195(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1, SDValue &CPTmpN2_2) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2, Tmp2, Tmp3, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 8);
}
SDNode *Emit_196(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1, SDValue &CPTmpN2_2) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 6);
}
SDNode *Emit_197(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_STORE(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedstore(N.getNode())) {

      // Pattern: (st:isVoid GPR:i32:$src, addrmodepc:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (PICSTR:isVoid GPR:i32:$src, addrmodepc:i32:$addr)
      // Pattern complexity = 23  cost = 1  size = 0
      if (Predicate_store(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrModePC(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_194(N, ARM::PICSTR, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
      if (Predicate_truncstore(N.getNode())) {

        // Pattern: (st:isVoid GPR:i32:$src, addrmodepc:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
        // Emits: (PICSTRH:isVoid GPR:i32:$src, addrmodepc:i32:$addr)
        // Pattern complexity = 23  cost = 1  size = 0
        if (Predicate_truncstorei16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          if (SelectAddrModePC(N, N2, CPTmpN2_0, CPTmpN2_1) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_194(N, ARM::PICSTRH, CPTmpN2_0, CPTmpN2_1);
            return Result;
          }
        }

        // Pattern: (st:isVoid GPR:i32:$src, addrmodepc:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
        // Emits: (PICSTRB:isVoid GPR:i32:$src, addrmodepc:i32:$addr)
        // Pattern complexity = 23  cost = 1  size = 0
        if (Predicate_truncstorei8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          if (SelectAddrModePC(N, N2, CPTmpN2_0, CPTmpN2_1) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_194(N, ARM::PICSTRB, CPTmpN2_0, CPTmpN2_1);
            return Result;
          }
        }
      }

      // Pattern: (st:isVoid GPR:i32:$src, addrmode2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STR:isVoid GPR:i32:$src, addrmode2:i32:$addr)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_store(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectAddrMode2(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_195(N, ARM::STR, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }
      if (Predicate_truncstore(N.getNode())) {

        // Pattern: (st:isVoid GPR:i32:$src, addrmode3:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
        // Emits: (STRH:isVoid GPR:i32:$src, addrmode3:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_truncstorei16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          SDValue CPTmpN2_2;
          if (SelectAddrMode3(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_195(N, ARM::STRH, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
            return Result;
          }
        }

        // Pattern: (st:isVoid GPR:i32:$src, addrmode2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
        // Emits: (STRB:isVoid GPR:i32:$src, addrmode2:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_truncstorei8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          SDValue CPTmpN2_2;
          if (SelectAddrMode2(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_195(N, ARM::STRB, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
            return Result;
          }
        }
      }
    }
  }
  if ((Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedstore(N.getNode())) {

      // Pattern: (st:isVoid GPR:i32:$src, t_addrmode_s4:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (tSTR:isVoid GPR:i32:$src, t_addrmode_s4:i32:$addr)
      // Pattern complexity = 16  cost = 1  size = 0
      if (Predicate_store(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        SDValue CPTmpN2_2;
        if (SelectThumbAddrModeS4(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_196(N, ARM::tSTR, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
          return Result;
        }
      }
      if (Predicate_truncstore(N.getNode())) {

        // Pattern: (st:isVoid GPR:i32:$src, t_addrmode_s1:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
        // Emits: (tSTRB:isVoid GPR:i32:$src, t_addrmode_s1:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_truncstorei8(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          SDValue CPTmpN2_2;
          if (SelectThumbAddrModeS1(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_196(N, ARM::tSTRB, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
            return Result;
          }
        }

        // Pattern: (st:isVoid GPR:i32:$src, t_addrmode_s2:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
        // Emits: (tSTRH:isVoid GPR:i32:$src, t_addrmode_s2:i32:$addr)
        // Pattern complexity = 16  cost = 1  size = 0
        if (Predicate_truncstorei16(N.getNode())) {
          SDValue N1 = N.getOperand(1);
          SDValue N2 = N.getOperand(2);
          SDValue CPTmpN2_0;
          SDValue CPTmpN2_1;
          SDValue CPTmpN2_2;
          if (SelectThumbAddrModeS2(N, N2, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2) &&
              N1.getNode()->getValueType(0) == MVT::i32 &&
              N2.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_196(N, ARM::tSTRH, CPTmpN2_0, CPTmpN2_1, CPTmpN2_2);
            return Result;
          }
        }
      }

      // Pattern: (st:isVoid GPR:i32:$src, t_addrmode_sp:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (tSTRspi:isVoid GPR:i32:$src, t_addrmode_sp:i32:$addr)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_store(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectThumbAddrModeSP(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_197(N, ARM::tSTRspi, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
  }
  if ((!Subtarget->isThumb())) {
    SDValue Chain = N.getOperand(0);
    if (Predicate_unindexedstore(N.getNode()) &&
        Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrMode5(N, N2, CPTmpN2_0, CPTmpN2_1)) {

        // Pattern: (st:isVoid DPR:f64:$src, addrmode5:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (FSTD:isVoid DPR:f64:$src, addrmode5:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::f64 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_194(N, ARM::FSTD, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid SPR:f32:$src, addrmode5:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (FSTS:isVoid SPR:f32:$src, addrmode5:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::f32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_194(N, ARM::FSTS, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_198(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp5 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, Tmp2, Tmp3, Tmp4, Tmp5 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 5);
}
SDNode *Emit_199(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1);
}
SDNode *Select_ISD_SUB_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (sub:i32 GPR:i32:$a, so_reg:i32:$b)
    // Emits: (SUBrs:i32 GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 15  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      SDValue CPTmpN1_2;
      if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2)) {
        SDNode *Result = Emit_38(N, ARM::SUBrs, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
        return Result;
      }
    }

    // Pattern: (sub:i32 so_reg:i32:$b, GPR:i32:$a)
    // Emits: (RSBrs:i32 GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 15  cost = 1  size = 0
    SDValue CPTmpN0_0;
    SDValue CPTmpN0_1;
    SDValue CPTmpN0_2;
    if (SelectShifterOperandReg(N, N0, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2)) {
      SDNode *Result = Emit_61(N, ARM::RSBrs, MVT::i32, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2);
      return Result;
    }
  }

  // Pattern: (sub:i32 0:i32, GPR:i32:$src)
  // Emits: (tNEG:i32 GPR:i32:$src)
  // Pattern complexity = 8  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_199(N, ARM::tNEG, MVT::i32);
        return Result;
      }
    }
  }
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (sub:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
    // Emits: (SUBri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
    // Pattern complexity = 7  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_so_imm(N1.getNode())) {
        SDNode *Result = Emit_36(N, ARM::SUBri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (sub:i32 (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b, GPR:i32:$a)
    // Emits: (RSBri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
    // Pattern complexity = 7  cost = 1  size = 0
    if (N0.getOpcode() == ISD::Constant &&
        Predicate_so_imm(N0.getNode())) {
      SDNode *Result = Emit_198(N, ARM::RSBri, MVT::i32);
      return Result;
    }
  }

  // Pattern: (sub:i32 GPR:i32:$c, (mulhs:i32 GPR:i32:$a, GPR:i32:$b))
  // Emits: (SMMLS:i32 GPR:i32:$a, GPR:i32:$b, GPR:i32:$c)
  // Pattern complexity = 6  cost = 1  size = 0
  if ((!Subtarget->isThumb()) && (Subtarget->hasV6Ops())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::MULHS) {
      SDNode *Result = Emit_50(N, ARM::SMMLS, MVT::i32);
      return Result;
    }
  }

  // Pattern: (sub:i32 GPR:i32:$a, GPR:i32:$b)
  // Emits: (SUBrr:i32 GPR:i32:$a, GPR:i32:$b)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!Subtarget->isThumb())) {
    SDNode *Result = Emit_37(N, ARM::SUBrr, MVT::i32);
    return Result;
  }

  // Pattern: (sub:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tSUBrr:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_46(N, ARM::tSUBrr, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_200(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N1, Tmp2, Tmp3, Tmp4 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, Ops0, 4);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_SUBC_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    {
      SDValue N0 = N.getOperand(0);

      // Pattern: (subc:i32 GPR:i32:$a, so_reg:i32:$b)
      // Emits: (SUBSrs:i32 GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2)) {
          SDNode *Result = Emit_99(N, ARM::SUBSrs, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (subc:i32 so_reg:i32:$b, GPR:i32:$a)
      // Emits: (RSBSrs:i32 GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue CPTmpN0_0;
        SDValue CPTmpN0_1;
        SDValue CPTmpN0_2;
        if (SelectShifterOperandReg(N, N0, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2)) {
          SDNode *Result = Emit_101(N, ARM::RSBSrs, MVT::i32, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2);
          return Result;
        }
      }

      // Pattern: (subc:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
      // Emits: (SUBSri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
      // Pattern complexity = 7  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::Constant &&
            Predicate_so_imm(N1.getNode())) {
          SDNode *Result = Emit_97(N, ARM::SUBSri, MVT::i32);
          return Result;
        }
      }

      // Pattern: (subc:i32 (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b, GPR:i32:$a)
      // Emits: (RSBSri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
      // Pattern complexity = 7  cost = 1  size = 0
      if (N0.getOpcode() == ISD::Constant &&
          Predicate_so_imm(N0.getNode())) {
        SDNode *Result = Emit_200(N, ARM::RSBSri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (subc:i32 GPR:i32:$a, GPR:i32:$b)
    // Emits: (SUBSrr:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_98(N, ARM::SUBSrr, MVT::i32);
    return Result;
  }

  // Pattern: (subc:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tSUBS:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_100(N, ARM::tSUBS, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_201(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_so_imm_XFORM(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag = N.getOperand(2);
  SDValue Ops0[] = { N1, Tmp2, Tmp3, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, Ops0, 4);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_SUBE_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    {
      SDValue N0 = N.getOperand(0);

      // Pattern: (sube:i32 GPR:i32:$a, so_reg:i32:$b)
      // Emits: (SBCrs:i32 GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        SDValue CPTmpN1_2;
        if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2)) {
          SDNode *Result = Emit_104(N, ARM::SBCrs, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
          return Result;
        }
      }

      // Pattern: (sube:i32 so_reg:i32:$b, GPR:i32:$a)
      // Emits: (RSCrs:i32 GPR:i32:$a, so_reg:i32:$b)
      // Pattern complexity = 15  cost = 1  size = 0
      {
        SDValue CPTmpN0_0;
        SDValue CPTmpN0_1;
        SDValue CPTmpN0_2;
        if (SelectShifterOperandReg(N, N0, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2)) {
          SDNode *Result = Emit_106(N, ARM::RSCrs, MVT::i32, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2);
          return Result;
        }
      }

      // Pattern: (sube:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
      // Emits: (SBCri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
      // Pattern complexity = 7  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::Constant &&
            Predicate_so_imm(N1.getNode())) {
          SDNode *Result = Emit_102(N, ARM::SBCri, MVT::i32);
          return Result;
        }
      }

      // Pattern: (sube:i32 (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b, GPR:i32:$a)
      // Emits: (RSCri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
      // Pattern complexity = 7  cost = 1  size = 0
      if (N0.getOpcode() == ISD::Constant &&
          Predicate_so_imm(N0.getNode())) {
        SDNode *Result = Emit_201(N, ARM::RSCri, MVT::i32);
        return Result;
      }
    }

    // Pattern: (sube:i32 GPR:i32:$a, GPR:i32:$b)
    // Emits: (SBCrr:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_103(N, ARM::SBCrr, MVT::i32);
    return Result;
  }

  // Pattern: (sube:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tSBC:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_105(N, ARM::tSBC, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_202(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { N0, Tmp1, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_203(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN0_0, SDValue &CPTmpN0_1, SDValue &CPTmpN0_2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0xEULL, MVT::i32);
  SDValue Tmp2 = CurDAG->getRegister(0, MVT::i32);
  SDValue Tmp3 = CurDAG->getRegister(0, MVT::i32);
  SDValue Ops0[] = { CPTmpN0_0, CPTmpN0_1, CPTmpN0_2, Tmp1, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 6);
}
SDNode *Select_ISD_XOR_i32(const SDValue &N) {
  if ((!Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (xor:i32 so_reg:i32:$src, (imm:i32)<<P:Predicate_immAllOnes>>)
    // Emits: (MVNs:i32 so_reg:i32:$src)
    // Pattern complexity = 19  cost = 1  size = 0
    {
      SDValue CPTmpN0_0;
      SDValue CPTmpN0_1;
      SDValue CPTmpN0_2;
      if (SelectShifterOperandReg(N, N0, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2)) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N1.getNode())) {
          SDNode *Result = Emit_203(N, ARM::MVNs, MVT::i32, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2);
          return Result;
        }
      }
    }

    // Pattern: (xor:i32 GPR:i32:$a, so_reg:i32:$b)
    // Emits: (EORrs:i32 GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 15  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      SDValue CPTmpN1_2;
      if (SelectShifterOperandReg(N, N1, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2)) {
        SDNode *Result = Emit_38(N, ARM::EORrs, MVT::i32, CPTmpN1_0, CPTmpN1_1, CPTmpN1_2);
        return Result;
      }
    }

    // Pattern: (xor:i32 so_reg:i32:$b, GPR:i32:$a)
    // Emits: (EORrs:i32 GPR:i32:$a, so_reg:i32:$b)
    // Pattern complexity = 15  cost = 1  size = 0
    {
      SDValue CPTmpN0_0;
      SDValue CPTmpN0_1;
      SDValue CPTmpN0_2;
      if (SelectShifterOperandReg(N, N0, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2)) {
        SDNode *Result = Emit_61(N, ARM::EORrs, MVT::i32, CPTmpN0_0, CPTmpN0_1, CPTmpN0_2);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (xor:i32 GPR:i32:$a, (imm:i32)<<P:Predicate_so_imm>><<X:so_imm_XFORM>>:$b)
      // Emits: (EORri:i32 GPR:i32:$a, (so_imm_XFORM:i32 (imm:i32):$b))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_so_imm(N1.getNode())) {
        SDNode *Result = Emit_36(N, ARM::EORri, MVT::i32);
        return Result;
      }

      // Pattern: (xor:i32 GPR:i32:$src, (imm:i32)<<P:Predicate_immAllOnes>>)
      // Emits: (MVNr:i32 GPR:i32:$src)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immAllOnes(N1.getNode())) {
        SDNode *Result = Emit_202(N, ARM::MVNr, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (xor:i32 GPR:i32:$src, (imm:i32)<<P:Predicate_immAllOnes>>)
  // Emits: (tMVN:i32 GPR:i32:$src)
  // Pattern complexity = 7  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immAllOnes(N1.getNode())) {
      SDNode *Result = Emit_113(N, ARM::tMVN, MVT::i32);
      return Result;
    }
  }
  if ((!Subtarget->isThumb())) {

    // Pattern: (xor:i32 GPR:i32:$LHS, (imm:i32)<<P:Predicate_so_imm2part>>:$RHS)
    // Emits: (EORri:i32 (EORri:i32 GPR:i32:$LHS, (so_imm2part_1:i32 (imm:i32):$RHS)), (so_imm2part_2:i32 (imm:i32):$RHS))
    // Pattern complexity = 7  cost = 2  size = 0
    {
      SDValue N0 = N.getOperand(0);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_so_imm2part(N1.getNode())) {
        SDNode *Result = Emit_167(N, ARM::EORri, ARM::EORri, MVT::i32, MVT::i32);
        return Result;
      }
    }

    // Pattern: (xor:i32 GPR:i32:$a, GPR:i32:$b)
    // Emits: (EORrr:i32 GPR:i32:$a, GPR:i32:$b)
    // Pattern complexity = 3  cost = 1  size = 0
    SDNode *Result = Emit_37(N, ARM::EORrr, MVT::i32);
    return Result;
  }

  // Pattern: (xor:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Emits: (tEOR:i32 GPR:i32:$lhs, GPR:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((Subtarget->isThumb())) {
    SDNode *Result = Emit_46(N, ARM::tEOR, MVT::i32);
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
  case ARMISD::BR_JT: {
    switch (NVT) {
    default:
      return Select_ARMISD_BR_JT(N);
      break;
    }
    break;
  }
  case ARMISD::CALL: {
    switch (NVT) {
    default:
      return Select_ARMISD_CALL(N);
      break;
    }
    break;
  }
  case ARMISD::CALL_NOLINK: {
    switch (NVT) {
    default:
      return Select_ARMISD_CALL_NOLINK(N);
      break;
    }
    break;
  }
  case ARMISD::CALL_PRED: {
    switch (NVT) {
    default:
      return Select_ARMISD_CALL_PRED(N);
      break;
    }
    break;
  }
  case ARMISD::CMP: {
    switch (NVT) {
    default:
      return Select_ARMISD_CMP(N);
      break;
    }
    break;
  }
  case ARMISD::CMPFP: {
    switch (NVT) {
    default:
      return Select_ARMISD_CMPFP(N);
      break;
    }
    break;
  }
  case ARMISD::CMPFPw0: {
    switch (NVT) {
    default:
      return Select_ARMISD_CMPFPw0(N);
      break;
    }
    break;
  }
  case ARMISD::CMPNZ: {
    switch (NVT) {
    default:
      return Select_ARMISD_CMPNZ(N);
      break;
    }
    break;
  }
  case ARMISD::FMDRR: {
    switch (NVT) {
    case MVT::f64:
      return Select_ARMISD_FMDRR_f64(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::FMSTAT: {
    switch (NVT) {
    default:
      return Select_ARMISD_FMSTAT(N);
      break;
    }
    break;
  }
  case ARMISD::FTOSI: {
    switch (NVT) {
    case MVT::f32:
      return Select_ARMISD_FTOSI_f32(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::FTOUI: {
    switch (NVT) {
    case MVT::f32:
      return Select_ARMISD_FTOUI_f32(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::PIC_ADD: {
    switch (NVT) {
    case MVT::i32:
      return Select_ARMISD_PIC_ADD_i32(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::RET_FLAG: {
    switch (NVT) {
    default:
      return Select_ARMISD_RET_FLAG(N);
      break;
    }
    break;
  }
  case ARMISD::RRX: {
    switch (NVT) {
    case MVT::i32:
      return Select_ARMISD_RRX_i32(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::SITOF: {
    switch (NVT) {
    case MVT::f32:
      return Select_ARMISD_SITOF_f32(N);
    case MVT::f64:
      return Select_ARMISD_SITOF_f64(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::SRA_FLAG: {
    switch (NVT) {
    case MVT::i32:
      return Select_ARMISD_SRA_FLAG_i32(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::SRL_FLAG: {
    switch (NVT) {
    case MVT::i32:
      return Select_ARMISD_SRL_FLAG_i32(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::THREAD_POINTER: {
    switch (NVT) {
    case MVT::i32:
      return Select_ARMISD_THREAD_POINTER_i32(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::UITOF: {
    switch (NVT) {
    case MVT::f32:
      return Select_ARMISD_UITOF_f32(N);
    case MVT::f64:
      return Select_ARMISD_UITOF_f64(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::Wrapper: {
    switch (NVT) {
    case MVT::i32:
      return Select_ARMISD_Wrapper_i32(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::WrapperJT: {
    switch (NVT) {
    case MVT::i32:
      return Select_ARMISD_WrapperJT_i32(N);
    default:
      break;
    }
    break;
  }
  case ARMISD::tCALL: {
    switch (NVT) {
    default:
      return Select_ARMISD_tCALL(N);
      break;
    }
    break;
  }
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
  case ISD::DEBUG_LOC: {
    switch (NVT) {
    default:
      return Select_ISD_DEBUG_LOC(N);
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
  case ISD::MULHS: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_MULHS_i32(N);
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
  case ISD::ROTR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ROTR_i32(N);
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
    case MVT::i32:
      return Select_ISD_STORE_i32(N);
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

