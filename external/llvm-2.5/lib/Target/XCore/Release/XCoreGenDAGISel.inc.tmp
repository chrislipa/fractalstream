//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the XCore target
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
inline SDValue Transform_div4_xform(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: imm/4
  assert(N->getZExtValue() % 4 == 0);
  return getI32Imm(N->getZExtValue()/4);

}
inline SDValue Transform_div4neg_xform(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: -imm/4
  uint32_t value = N->getZExtValue();
  assert(-value % 4 == 0);
  return getI32Imm(-value/4);

}
inline SDValue Transform_msksize_xform(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: get the size of a mask
  assert(isMask_32(N->getZExtValue()));
  // look for the first non-zero bit
  return getI32Imm(32 - CountLeadingZeros_32(N->getZExtValue()));

}
inline SDValue Transform_neg_xform(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: -imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(-value);

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
inline bool Predicate_immBitp(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 1 && value <= 8)
          || value == 16
          || value == 24
          || value == 32;

}
inline bool Predicate_immMskBitp(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  uint32_t value = (uint32_t)N->getZExtValue();
  if (!isMask_32(value)) {
    return false;
  }
  int msksize = 32 - CountLeadingZeros_32(value);
  return (msksize >= 1 && msksize <= 8)
          || msksize == 16
          || msksize == 24
          || msksize == 32;

}
inline bool Predicate_immU10(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (uint32_t)N->getZExtValue() < (1 << 10);

}
inline bool Predicate_immU16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (uint32_t)N->getZExtValue() < (1 << 16);

}
inline bool Predicate_immU20(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (uint32_t)N->getZExtValue() < (1 << 20);

}
inline bool Predicate_immU6(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (uint32_t)N->getZExtValue() < (1 << 6);

}
inline bool Predicate_immUs(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return (uint32_t)N->getZExtValue() <= 11;

}
inline bool Predicate_immUs4(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  uint32_t value = (uint32_t)N->getZExtValue();
  return value%4 == 0 && value/4 <= 11;

}
inline bool Predicate_immUs4Neg(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (-value)%4 == 0 && (-value)/4 <= 11;

}
inline bool Predicate_immUsNeg(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return -((uint32_t)N->getZExtValue()) <= 11;

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


SDNode *Emit_0(const SDValue &N, unsigned Opc0, SDValue &CPTmpN_0, SDValue &CPTmpN_1) DISABLE_INLINE {
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i32, CPTmpN_0, CPTmpN_1);
}
SDNode *Emit_1(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN_0, SDValue &CPTmpN_1) DISABLE_INLINE {
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, CPTmpN_0, CPTmpN_1);
}
SDNode *Emit_2(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_3(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_4(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N10);
}
SDNode *Emit_5(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N01);
}
SDNode *Emit_6(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_div4_xform(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_7(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_neg_xform(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_8(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_div4neg_xform(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_9(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N00);
}
SDNode *Select_ISD_ADD_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (add:i32 (shl:i32 1:i32, GRRegs:i32:$size), 4294967295:i32)
    // Emits: (MKMSK_2r:i32 GRRegs:i32:$size)
    // Pattern complexity = 16  cost = 1  size = 0
    if (N0.getOpcode() == ISD::SHL) {
      SDValue N00 = N0.getOperand(0);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N00);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(1)) {
          SDValue N01 = N0.getOperand(1);
          SDValue N1 = N.getOperand(1);
          ConstantSDNode *Tmp2 = dyn_cast<ConstantSDNode>(N1);
          if (Tmp2) {
            int64_t CN3 = Tmp2->getSExtValue();
            if (CN3 == INT64_C(4294967295)) {
              SDNode *Result = Emit_5(N, XCore::MKMSK_2r, MVT::i32);
              return Result;
            }
          }
        }
      }
    }
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SHL) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();

          // Pattern: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32))
          // Emits: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
          // Pattern complexity = 11  cost = 1  size = 0
          if (CN1 == INT64_C(2)) {
            SDNode *Result = Emit_4(N, XCore::LDAWF_l3r, MVT::i32);
            return Result;
          }

          // Pattern: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32))
          // Emits: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
          // Pattern complexity = 11  cost = 1  size = 0
          if (CN1 == INT64_C(1)) {
            SDNode *Result = Emit_4(N, XCore::LDA16F_l3r, MVT::i32);
            return Result;
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::SHL) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr)
        // Emits: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
        // Pattern complexity = 11  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDNode *Result = Emit_9(N, XCore::LDAWF_l3r, MVT::i32);
          return Result;
        }

        // Pattern: (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr)
        // Emits: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
        // Pattern complexity = 11  cost = 1  size = 0
        if (CN1 == INT64_C(1)) {
          SDNode *Result = Emit_9(N, XCore::LDA16F_l3r, MVT::i32);
          return Result;
        }
      }
    }
  }

  // Pattern: ADDRcpii:i32:$a
  // Emits: (LDAWCP_lu6:isVoid ADDRcpii:i32:$a)
  // Pattern complexity = 9  cost = 1  size = 0
  if ((Subtarget.isXS1B())) {
    SDValue CPTmpN_0;
    SDValue CPTmpN_1;
    if (SelectADDRcpii(N, N, CPTmpN_0, CPTmpN_1)) {
      SDNode *Result = Emit_0(N, XCore::LDAWCP_lu6, CPTmpN_0, CPTmpN_1);
      return Result;
    }
  }
  {
    SDValue CPTmpN_0;
    SDValue CPTmpN_1;

    // Pattern: ADDRdpii:i32:$a
    // Emits: (LDAWDP_lru6:i32 ADDRdpii:i32:$a)
    // Pattern complexity = 9  cost = 1  size = 0
    if (SelectADDRdpii(N, N, CPTmpN_0, CPTmpN_1)) {
      SDNode *Result = Emit_1(N, XCore::LDAWDP_lru6, MVT::i32, CPTmpN_0, CPTmpN_1);
      return Result;
    }

    // Pattern: ADDRspii:i32:$addr
    // Emits: (LDAWFI:i32 ADDRspii:i32:$addr)
    // Pattern complexity = 9  cost = 1  size = 0
    if (SelectADDRspii(N, N, CPTmpN_0, CPTmpN_1)) {
      SDNode *Result = Emit_1(N, XCore::LDAWFI, MVT::i32, CPTmpN_0, CPTmpN_1);
      return Result;
    }
  }
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (add:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c)
      // Emits: (ADD_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUs(N1.getNode())) {
        SDNode *Result = Emit_3(N, XCore::ADD_2rus, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset)
      // Emits: (LDAWF_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUs4(N1.getNode())) {
        SDNode *Result = Emit_6(N, XCore::LDAWF_l2rus, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUsNeg>>:$src2)
      // Emits: (SUB_2rus:i32 GRRegs:i32:$src1, (neg_xform:i32 (imm:i32)<<P:Predicate_immUsNeg>>:$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUsNeg(N1.getNode())) {
        SDNode *Result = Emit_7(N, XCore::SUB_2rus, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUs4Neg>>:$src2)
      // Emits: (LDAWB_l2rus:i32 GRRegs:i32:$src1, (div4neg_xform:i32 (imm:i32)<<P:Predicate_immUs4Neg>>:$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUs4Neg(N1.getNode())) {
        SDNode *Result = Emit_8(N, XCore::LDAWB_l2rus, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (add:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Emits: (ADD_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_2(N, XCore::ADD_3r, MVT::i32);
  return Result;
}

SDNode *Emit_10(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_msksize_xform(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Select_ISD_AND_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i32 GRRegs:i32:$src1, (xor:i32 GRRegs:i32:$src2, (imm:i32)<<P:Predicate_immAllOnes>>))
    // Emits: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_4(N, XCore::ANDNOT_2r, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (and:i32 (xor:i32 GRRegs:i32:$src2, (imm:i32)<<P:Predicate_immAllOnes>>), GRRegs:i32:$src1)
    // Emits: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_9(N, XCore::ANDNOT_2r, MVT::i32);
        return Result;
      }
    }

    // Pattern: (and:i32 GRRegs:i32:$val, (imm:i32)<<P:Predicate_immMskBitp>>:$mask)
    // Emits: (ZEXT_rus:i32 GRRegs:i32:$val, (msksize_xform:i32 (imm:i32)<<P:Predicate_immMskBitp>>:$mask))
    // Pattern complexity = 7  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immMskBitp(N1.getNode())) {
      SDNode *Result = Emit_10(N, XCore::ZEXT_rus, MVT::i32);
      return Result;
    }
  }

  // Pattern: (and:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Emits: (AND_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_2(N, XCore::AND_3r, MVT::i32);
  return Result;
}

SDNode *Emit_11(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain);
}
SDNode *Select_ISD_BR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_11(N, XCore::BRFU_lu6);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_12(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N10, N2, Chain);
}
SDNode *Emit_13(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N11, N10), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Tmp2, N2, Chain);
}
SDNode *Emit_14(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N10, N11), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Tmp2, N2, Chain);
}
SDNode *Emit_15(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N10, Tmp1), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Tmp2, N2, Chain);
}
SDNode *Emit_16(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, N2, Chain);
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

          // Pattern: (brcond:isVoid (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst)
          // Emits: (BRFT_lru6:isVoid GRRegs:i32:$lhs, (bb:Other):$dst)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N12)->get() == ISD::SETNE) {
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::BasicBlock &&
                N10.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_12(N, XCore::BRFT_lru6);
              return Result;
            }
          }

          // Pattern: (brcond:isVoid (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst)
          // Emits: (BRFF_lru6:isVoid GRRegs:i32:$lhs, (bb:Other):$dst)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N12)->get() == ISD::SETEQ) {
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::BasicBlock &&
                N10.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_12(N, XCore::BRFF_lru6);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (brcond:isVoid (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), (bb:Other):$dst)
    // Emits: (BRFF_lru6:isVoid (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), (bb:Other):$dst)
    // Pattern complexity = 10  cost = 2  size = 0
    if (N11.getOpcode() == ISD::Constant &&
        Predicate_immUs(N11.getNode())) {
      SDValue N12 = N1.getOperand(2);
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETNE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock) {
          SDNode *Result = Emit_15(N, XCore::EQ_2rus, XCore::BRFF_lru6, MVT::i32);
          return Result;
        }
      }
    }
    SDValue N12 = N1.getOperand(2);

    // Pattern: (brcond:isVoid (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), (bb:Other):$dst)
    // Emits: (BRFF_lru6:isVoid (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETLE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_13(N, XCore::LSS_3r, XCore::BRFF_lru6, MVT::i32);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), (bb:Other):$dst)
    // Emits: (BRFF_lru6:isVoid (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETULE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_13(N, XCore::LSU_3r, XCore::BRFF_lru6, MVT::i32);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), (bb:Other):$dst)
    // Emits: (BRFF_lru6:isVoid (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_14(N, XCore::LSS_3r, XCore::BRFF_lru6, MVT::i32);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst)
    // Emits: (BRFF_lru6:isVoid (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUGE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_14(N, XCore::LSU_3r, XCore::BRFF_lru6, MVT::i32);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), (bb:Other):$dst)
    // Emits: (BRFF_lru6:isVoid (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETNE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_14(N, XCore::EQ_3r, XCore::BRFF_lru6, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (brcond:isVoid GRRegs:i32:$cond, (bb:Other):$addr)
  // Emits: (BRFT_lru6:isVoid GRRegs:i32:$cond, (bb:Other):$addr)
  // Pattern complexity = 3  cost = 1  size = 0
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_16(N, XCore::BRFT_lru6);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BRIND(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_11(N, XCore::BAU_1r);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_17(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_BSWAP_i32(const SDValue &N) {
  SDNode *Result = Emit_17(N, XCore::BYTEREV_l2r, MVT::i32);
  return Result;
}

SDNode *Emit_18(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
      SDNode *Result = Emit_18(N, XCore::ADJCALLSTACKUP);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_19(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
    SDNode *Result = Emit_19(N, XCore::ADJCALLSTACKDOWN);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_CTLZ_i32(const SDValue &N) {
  SDNode *Result = Emit_17(N, XCore::CLZ_l2r, MVT::i32);
  return Result;
}

SDNode *Emit_20(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp1);
}
SDNode *Select_ISD_CTTZ_i32(const SDValue &N) {
  SDNode *Result = Emit_20(N, XCore::BITREV_l2r, XCore::CLZ_l2r, MVT::i32, MVT::i32);
  return Result;
}

SDNode *Emit_21(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Select_ISD_Constant_i32(const SDValue &N) {

  // Pattern: (imm:i32)<<P:Predicate_immU6>>:$b
  // Emits: (LDC_ru6:i32 (imm:i32):$b)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immU6(N.getNode())) {
    SDNode *Result = Emit_21(N, XCore::LDC_ru6, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32)<<P:Predicate_immU16>>:$b
  // Emits: (LDC_lru6:i32 (imm:i32):$b)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immU16(N.getNode())) {
    SDNode *Result = Emit_21(N, XCore::LDC_lru6, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FrameIndex_i32(const SDValue &N) {
  SDValue CPTmpN_0;
  SDValue CPTmpN_1;
  if (SelectADDRspii(N, N, CPTmpN_0, CPTmpN_1)) {
    SDNode *Result = Emit_1(N, XCore::LDAWFI, MVT::i32, CPTmpN_0, CPTmpN_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_22(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1);
}
SDNode *Emit_23(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i32);
}
SDNode *Select_ISD_INTRINSIC_WO_CHAIN_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (intrinsic_wo_chain:i32 611:iPTR, GRRegs:i32:$src)
    // Emits: (BITREV_l2r:i32 GRRegs:i32:$src)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(611)) {
      SDNode *Result = Emit_22(N, XCore::BITREV_l2r, MVT::i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:i32 612:iPTR)
    // Emits: (GETID_0R:isVoid)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(612)) {
      SDNode *Result = Emit_23(N, XCore::GETID_0R);
      return Result;
    }
  }

  CannotYetSelectIntrinsic(N);
  return NULL;
}

SDNode *Emit_24(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_25(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_div4_xform(Tmp1.getNode());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N10, Tmp2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_26(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, Tmp1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_27(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N10, N11, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_28(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp1), 0);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops1[] = { N1, Tmp2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, MVT::Other, Ops1, 4);
}
SDNode *Emit_29(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N110 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N10, N110, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_30(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N11, N100, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_LOAD_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {

    // Pattern: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
    // Emits: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 15  cost = 1  size = 0
    if (Predicate_extload(N.getNode()) &&
        Predicate_extloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::SHL) {
          SDValue N110 = N11.getOperand(0);
          SDValue N111 = N11.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N111);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(1)) {
              SDNode *Result = Emit_29(N, XCore::LD16S_3r, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
    // Emits: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 15  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::SHL) {
          SDValue N110 = N11.getOperand(0);
          SDValue N111 = N11.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N111);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(1)) {
              SDNode *Result = Emit_29(N, XCore::LD16S_3r, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 15  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::SHL) {
          SDValue N110 = N11.getOperand(0);
          SDValue N111 = N11.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N111);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(2)) {
              SDNode *Result = Emit_29(N, XCore::LDW_3r, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
    // Emits: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 15  cost = 1  size = 0
    if (Predicate_extload(N.getNode()) &&
        Predicate_extloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SHL) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(1)) {
              SDNode *Result = Emit_30(N, XCore::LD16S_3r, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
    // Emits: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 15  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SHL) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(1)) {
              SDNode *Result = Emit_30(N, XCore::LD16S_3r, MVT::i32);
              return Result;
            }
          }
        }
      }
    }
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);

      // Pattern: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
      // Pattern complexity = 15  cost = 1  size = 0
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::SHL) {
          SDValue N100 = N10.getOperand(0);
          SDValue N101 = N10.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(2)) {
              SDNode *Result = Emit_30(N, XCore::LDW_3r, MVT::i32);
              return Result;
            }
          }
        }
      }
      {
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 ADDRspii:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
        // Emits: (LDWFI:i32 ADDRspii:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRspii(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_24(N, XCore::LDWFI, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 ADDRdpii:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>>
        // Emits: (LDWDP_lru6:i32 ADDRdpii:i32:$a)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRdpii(N, N1, CPTmpN1_0, CPTmpN1_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_24(N, XCore::LDWDP_lru6, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i32 (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LDW_2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
      // Pattern complexity = 11  cost = 1  size = 0
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immUs4(N11.getNode())) {
          SDNode *Result = Emit_25(N, XCore::LDW_2rus, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
    // Emits: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_extload(N.getNode()) &&
        Predicate_extloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDNode *Result = Emit_27(N, XCore::LD8U_3r, MVT::i32);
        return Result;
      }
    }

    // Pattern: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
    // Emits: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDNode *Result = Emit_27(N, XCore::LD8U_3r, MVT::i32);
        return Result;
      }
    }

    // Pattern: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDW_2rus:i32 GRRegs:i32:$addr, 0:i32)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_26(N, XCore::LDW_2rus, MVT::i32);
        return Result;
      }
    }
    if (Predicate_extload(N.getNode())) {

      // Pattern: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
      // Emits: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
      // Pattern complexity = 4  cost = 2  size = 0
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_28(N, XCore::LDC_ru6, XCore::LD8U_3r, MVT::i32, MVT::i32);
          return Result;
        }
      }

      // Pattern: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
      // Emits: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
      // Pattern complexity = 4  cost = 2  size = 0
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_28(N, XCore::LDC_ru6, XCore::LD16S_3r, MVT::i32, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
    // Emits: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
    // Pattern complexity = 4  cost = 2  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_28(N, XCore::LDC_ru6, XCore::LD8U_3r, MVT::i32, MVT::i32);
        return Result;
      }
    }

    // Pattern: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
    // Emits: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
    // Pattern complexity = 4  cost = 2  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_28(N, XCore::LDC_ru6, XCore::LD16S_3r, MVT::i32, MVT::i32);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_31(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N0);
}
SDNode *Select_ISD_MUL_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();

      // Pattern: (mul:i32 GRRegs:i32:$src, 3:i32)
      // Emits: (LDA16F_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(3)) {
        SDNode *Result = Emit_31(N, XCore::LDA16F_l3r, MVT::i32);
        return Result;
      }

      // Pattern: (mul:i32 GRRegs:i32:$src, 5:i32)
      // Emits: (LDAWF_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(5)) {
        SDNode *Result = Emit_31(N, XCore::LDAWF_l3r, MVT::i32);
        return Result;
      }

      // Pattern: (mul:i32 GRRegs:i32:$src, -3:i32)
      // Emits: (LDAWB_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
      // Pattern complexity = 8  cost = 1  size = 0
      if (CN1 == INT64_C(-3)) {
        SDNode *Result = Emit_31(N, XCore::LDAWB_l3r, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (mul:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Emits: (MUL_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_2(N, XCore::MUL_l3r, MVT::i32);
  return Result;
}

SDNode *Select_ISD_OR_i32(const SDValue &N) {
  SDNode *Result = Emit_2(N, XCore::OR_3r, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SDIV_i32(const SDValue &N) {
  SDNode *Result = Emit_2(N, XCore::DIVS_l3r, MVT::i32);
  return Result;
}

SDNode *Emit_32(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1, N2);
}
SDNode *Emit_33(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N1, N2);
}
SDNode *Emit_34(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N2, N1);
}
SDNode *Emit_35(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N01, N00), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, N2, N1);
}
SDNode *Emit_36(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N00, N01), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, N2, N1);
}
SDNode *Emit_37(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N00, Tmp1), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, N2, N1);
}
SDNode *Select_ISD_SELECT_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::SETCC) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      {
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDValue N02 = N0.getOperand(2);

            // Pattern: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F)
            // Emits: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$T, GRRegs:i32:$F)
            // Pattern complexity = 11  cost = 11  size = 0
            if (cast<CondCodeSDNode>(N02)->get() == ISD::SETNE) {
              SDValue N1 = N.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N00.getNode()->getValueType(0) == MVT::i32) {
                SDNode *Result = Emit_33(N, XCore::SELECT_CC, MVT::i32);
                return Result;
              }
            }

            // Pattern: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), GRRegs:i32:$T, GRRegs:i32:$F)
            // Emits: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$F, GRRegs:i32:$T)
            // Pattern complexity = 11  cost = 11  size = 0
            if (cast<CondCodeSDNode>(N02)->get() == ISD::SETEQ) {
              SDValue N1 = N.getOperand(1);
              SDValue N2 = N.getOperand(2);
              if (N00.getNode()->getValueType(0) == MVT::i32) {
                SDNode *Result = Emit_34(N, XCore::SELECT_CC, MVT::i32);
                return Result;
              }
            }
          }
        }
      }

      // Pattern: (select:i32 (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F)
      // Emits: (SELECT_CC:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
      // Pattern complexity = 10  cost = 12  size = 0
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immUs(N01.getNode())) {
        SDValue N02 = N0.getOperand(2);
        if (cast<CondCodeSDNode>(N02)->get() == ISD::SETNE) {
          SDNode *Result = Emit_37(N, XCore::EQ_2rus, XCore::SELECT_CC, MVT::i32, MVT::i32);
          return Result;
        }
      }
      SDValue N02 = N0.getOperand(2);

      // Pattern: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), GRRegs:i32:$T, GRRegs:i32:$F)
      // Emits: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
      // Pattern complexity = 6  cost = 12  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLE) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_35(N, XCore::LSS_3r, XCore::SELECT_CC, MVT::i32, MVT::i32);
          return Result;
        }
      }

      // Pattern: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), GRRegs:i32:$T, GRRegs:i32:$F)
      // Emits: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
      // Pattern complexity = 6  cost = 12  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETULE) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_35(N, XCore::LSU_3r, XCore::SELECT_CC, MVT::i32, MVT::i32);
          return Result;
        }
      }

      // Pattern: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), GRRegs:i32:$T, GRRegs:i32:$F)
      // Emits: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
      // Pattern complexity = 6  cost = 12  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGE) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_36(N, XCore::LSS_3r, XCore::SELECT_CC, MVT::i32, MVT::i32);
          return Result;
        }
      }

      // Pattern: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), GRRegs:i32:$T, GRRegs:i32:$F)
      // Emits: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
      // Pattern complexity = 6  cost = 12  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUGE) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_36(N, XCore::LSU_3r, XCore::SELECT_CC, MVT::i32, MVT::i32);
          return Result;
        }
      }

      // Pattern: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F)
      // Emits: (SELECT_CC:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
      // Pattern complexity = 6  cost = 12  size = 0
      if (cast<CondCodeSDNode>(N02)->get() == ISD::SETNE) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N00.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_36(N, XCore::EQ_3r, XCore::SELECT_CC, MVT::i32, MVT::i32);
          return Result;
        }
      }
    }
  }

  // Pattern: (select:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F)
  // Emits: (SELECT_CC:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F)
  // Pattern complexity = 3  cost = 11  size = 0
  SDNode *Result = Emit_32(N, XCore::SELECT_CC, MVT::i32);
  return Result;
}

SDNode *Emit_38(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N1, N0), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Emit_39(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N0);
}
SDNode *Emit_40(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, N1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Emit_41(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_42(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_43(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Select_ISD_SETCC_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant &&
      Predicate_immUs(N1.getNode())) {
    SDValue N2 = N.getOperand(2);

    // Pattern: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETEQ:Other)
    // Emits: (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETEQ) {
      SDNode *Result = Emit_42(N, XCore::EQ_2rus, MVT::i32);
      return Result;
    }

    // Pattern: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other)
    // Emits: (EQ_2rus:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), 0:i32)
    // Pattern complexity = 7  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE) {
      SDNode *Result = Emit_43(N, XCore::EQ_2rus, XCore::EQ_2rus, MVT::i32, MVT::i32);
      return Result;
    }
  }
  SDValue N2 = N.getOperand(2);

  // Pattern: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGT:Other)
  // Emits: (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_39(N, XCore::LSS_3r, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGT:Other)
  // Emits: (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_39(N, XCore::LSU_3r, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLT:Other)
  // Emits: (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_41(N, XCore::LSS_3r, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULT:Other)
  // Emits: (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULT &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_41(N, XCore::LSU_3r, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETEQ:Other)
  // Emits: (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETEQ &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_41(N, XCore::EQ_3r, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other)
  // Emits: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_38(N, XCore::LSS_3r, XCore::EQ_2rus, MVT::i32, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other)
  // Emits: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_38(N, XCore::LSU_3r, XCore::EQ_2rus, MVT::i32, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other)
  // Emits: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_40(N, XCore::LSS_3r, XCore::EQ_2rus, MVT::i32, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other)
  // Emits: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_40(N, XCore::LSU_3r, XCore::EQ_2rus, MVT::i32, MVT::i32);
    return Result;
  }

  // Pattern: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other)
  // Emits: (EQ_2rus:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_40(N, XCore::EQ_3r, XCore::EQ_2rus, MVT::i32, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SHL_i32(const SDValue &N) {

  // Pattern: (shl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c)
  // Emits: (SHL_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immBitp(N1.getNode())) {
      SDNode *Result = Emit_3(N, XCore::SHL_2rus, MVT::i32);
      return Result;
    }
  }

  // Pattern: (shl:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Emits: (SHL_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_2(N, XCore::SHL_3r, MVT::i32);
  return Result;
}

SDNode *Emit_44(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_45(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x8ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_46(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x10ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Select_ISD_SIGN_EXTEND_INREG_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (sext_inreg:i32 GRRegs:i32:$b, i1:Other)
  // Emits: (SEXT_rus:i32 GRRegs:i32:$b, 1:i32)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i1) {
    SDNode *Result = Emit_44(N, XCore::SEXT_rus, MVT::i32);
    return Result;
  }

  // Pattern: (sext_inreg:i32 GRRegs:i32:$b, i8:Other)
  // Emits: (SEXT_rus:i32 GRRegs:i32:$b, 8:i32)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
    SDNode *Result = Emit_45(N, XCore::SEXT_rus, MVT::i32);
    return Result;
  }

  // Pattern: (sext_inreg:i32 GRRegs:i32:$b, i16:Other)
  // Emits: (SEXT_rus:i32 GRRegs:i32:$b, 16:i32)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
    SDNode *Result = Emit_46(N, XCore::SEXT_rus, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_47(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x20ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp3);
}
SDNode *Select_ISD_SRA_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (sra:i32 GRRegs:i32:$src, 31:i32)
    // Emits: (ASHR_l2rus:i32 GRRegs:i32:$src, 32:i32)
    // Pattern complexity = 8  cost = 1  size = 0
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(31)) {
          SDNode *Result = Emit_47(N, XCore::ASHR_l2rus, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (sra:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c)
    // Emits: (ASHR_l2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
    // Pattern complexity = 7  cost = 1  size = 0
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immBitp(N1.getNode())) {
      SDNode *Result = Emit_3(N, XCore::ASHR_l2rus, MVT::i32);
      return Result;
    }
  }

  // Pattern: (sra:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Emits: (ASHR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_2(N, XCore::ASHR_l3r, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SREM_i32(const SDValue &N) {
  SDNode *Result = Emit_2(N, XCore::REMS_l3r, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SRL_i32(const SDValue &N) {

  // Pattern: (srl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c)
  // Emits: (SHR_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immBitp(N1.getNode())) {
      SDNode *Result = Emit_3(N, XCore::SHR_2rus, MVT::i32);
      return Result;
    }
  }

  // Pattern: (srl:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Emits: (SHR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_2(N, XCore::SHR_3r, MVT::i32);
  return Result;
}

SDNode *Emit_48(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_49(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N20 = N2.getOperand(0);
  SDValue N21 = N2.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N20, N21, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_50(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp3(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp2), 0);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops1[] = { N1, N2, Tmp3, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Ops1, 5);
}
SDNode *Emit_51(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N20 = N2.getOperand(0);
  SDValue N21 = N2.getOperand(1);
  SDValue N210 = N21.getOperand(0);
  SDValue N211 = N21.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N20, N210, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_52(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N20 = N2.getOperand(0);
  SDValue N21 = N2.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N21)->getZExtValue()), MVT::i32);
  SDValue Tmp3 = Transform_div4_xform(Tmp2.getNode());
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N20, Tmp3, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_53(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N2, Tmp2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_54(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N20 = N2.getOperand(0);
  SDValue N200 = N20.getOperand(0);
  SDValue N201 = N20.getOperand(1);
  SDValue N21 = N2.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N21, N200, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_STORE(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedstore(N.getNode())) {

    // Pattern: (st:isVoid GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
    // Emits: (ST16_l3r:isVoid GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 15  cost = 1  size = 0
    if (Predicate_truncstore(N.getNode()) &&
        Predicate_truncstorei16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::ADD) {
        SDValue N20 = N2.getOperand(0);
        SDValue N21 = N2.getOperand(1);
        if (N21.getOpcode() == ISD::SHL) {
          SDValue N210 = N21.getOperand(0);
          SDValue N211 = N21.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N211);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(1) &&
                N1.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_51(N, XCore::ST16_l3r);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (st:isVoid GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
    // Emits: (STW_3r:isVoid GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 15  cost = 1  size = 0
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::ADD) {
        SDValue N20 = N2.getOperand(0);
        SDValue N21 = N2.getOperand(1);
        if (N21.getOpcode() == ISD::SHL) {
          SDValue N210 = N21.getOperand(0);
          SDValue N211 = N21.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N211);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(2) &&
                N1.getNode()->getValueType(0) == MVT::i32) {
              SDNode *Result = Emit_51(N, XCore::STW_3r);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (st:isVoid GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
    // Emits: (ST16_l3r:isVoid GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 15  cost = 1  size = 0
    if (Predicate_truncstore(N.getNode()) &&
        Predicate_truncstorei16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::ADD) {
        SDValue N20 = N2.getOperand(0);
        if (N20.getOpcode() == ISD::SHL) {
          SDValue N200 = N20.getOperand(0);
          SDValue N201 = N20.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N201);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(1)) {
              SDValue N21 = N2.getOperand(1);
              if (N1.getNode()->getValueType(0) == MVT::i32) {
                SDNode *Result = Emit_54(N, XCore::ST16_l3r);
                return Result;
              }
            }
          }
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);

      // Pattern: (st:isVoid GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STW_3r:isVoid GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
      // Pattern complexity = 15  cost = 1  size = 0
      if (N2.getOpcode() == ISD::ADD) {
        SDValue N20 = N2.getOperand(0);
        if (N20.getOpcode() == ISD::SHL) {
          SDValue N200 = N20.getOperand(0);
          SDValue N201 = N20.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N201);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(2)) {
              SDValue N21 = N2.getOperand(1);
              if (N1.getNode()->getValueType(0) == MVT::i32) {
                SDNode *Result = Emit_54(N, XCore::STW_3r);
                return Result;
              }
            }
          }
        }
      }
      {
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;

        // Pattern: (st:isVoid GRRegs:i32:$src, ADDRspii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STWFI:isVoid GRRegs:i32:$src, ADDRspii:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRspii(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_48(N, XCore::STWFI, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid GRRegs:i32:$val, ADDRdpii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STWDP_lru6:isVoid GRRegs:i32:$val, ADDRdpii:i32:$addr)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectADDRdpii(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_48(N, XCore::STWDP_lru6, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }

      // Pattern: (st:isVoid GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STW_2rus:isVoid GRRegs:i32:$val, GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
      // Pattern complexity = 11  cost = 1  size = 0
      if (N2.getOpcode() == ISD::ADD) {
        SDValue N20 = N2.getOperand(0);
        SDValue N21 = N2.getOperand(1);
        if (N21.getOpcode() == ISD::Constant &&
            Predicate_immUs4(N21.getNode()) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_52(N, XCore::STW_2rus);
          return Result;
        }
      }
    }

    // Pattern: (st:isVoid GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
    // Emits: (ST8_l3r:isVoid GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_truncstore(N.getNode()) &&
        Predicate_truncstorei8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::ADD) {
        SDValue N20 = N2.getOperand(0);
        SDValue N21 = N2.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_49(N, XCore::ST8_l3r);
          return Result;
        }
      }
    }

    // Pattern: (st:isVoid GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
    // Emits: (STW_2rus:isVoid GRRegs:i32:$val, GRRegs:i32:$addr, 0:i32)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N1.getNode()->getValueType(0) == MVT::i32 &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_53(N, XCore::STW_2rus);
        return Result;
      }
    }
    if (Predicate_truncstore(N.getNode())) {

      // Pattern: (st:isVoid GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (ST8_l3r:isVoid GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
      // Pattern complexity = 4  cost = 2  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_50(N, XCore::LDC_ru6, XCore::ST8_l3r, MVT::i32);
          return Result;
        }
      }

      // Pattern: (st:isVoid GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (ST16_l3r:isVoid GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
      // Pattern complexity = 4  cost = 2  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N1.getNode()->getValueType(0) == MVT::i32 &&
            N2.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_50(N, XCore::LDC_ru6, XCore::ST16_l3r, MVT::i32);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SUB_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::SHL) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();

          // Pattern: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32))
          // Emits: (LDAWB_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
          // Pattern complexity = 11  cost = 1  size = 0
          if (CN1 == INT64_C(2)) {
            SDNode *Result = Emit_4(N, XCore::LDAWB_l3r, MVT::i32);
            return Result;
          }

          // Pattern: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32))
          // Emits: (LDA16B_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
          // Pattern complexity = 11  cost = 1  size = 0
          if (CN1 == INT64_C(1)) {
            SDNode *Result = Emit_4(N, XCore::LDA16B_l3r, MVT::i32);
            return Result;
          }
        }
      }
    }

    // Pattern: (sub:i32 0:i32, GRRegs:i32:$b)
    // Emits: (NEG:i32 GRRegs:i32:$b)
    // Pattern complexity = 8  cost = 1  size = 0
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_22(N, XCore::NEG, MVT::i32);
          return Result;
        }
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (sub:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c)
      // Emits: (SUB_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUs(N1.getNode())) {
        SDNode *Result = Emit_3(N, XCore::SUB_2rus, MVT::i32);
        return Result;
      }

      // Pattern: (sub:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset)
      // Emits: (LDAWB_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUs4(N1.getNode())) {
        SDNode *Result = Emit_6(N, XCore::LDAWB_l2rus, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (sub:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Emits: (SUB_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_2(N, XCore::SUB_3r, MVT::i32);
  return Result;
}

SDNode *Emit_55(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp0), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Tmp1, Chain);
}
SDNode *Select_ISD_TRAP(const SDValue &N) {
  SDNode *Result = Emit_55(N, XCore::LDC_ru6, XCore::ECALLF_1r, MVT::i32);
  return Result;
}

SDNode *Select_ISD_UDIV_i32(const SDValue &N) {
  SDNode *Result = Emit_2(N, XCore::DIVU_l3r, MVT::i32);
  return Result;
}

SDNode *Select_ISD_UREM_i32(const SDValue &N) {
  SDNode *Result = Emit_2(N, XCore::REMU_l3r, MVT::i32);
  return Result;
}

SDNode *Emit_56(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_XOR_i32(const SDValue &N) {

  // Pattern: (xor:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immAllOnes>>)
  // Emits: (NOT:i32 GRRegs:i32:$b)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immAllOnes(N1.getNode())) {
      SDNode *Result = Emit_56(N, XCore::NOT, MVT::i32);
      return Result;
    }
  }

  // Pattern: (xor:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Emits: (XOR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_2(N, XCore::XOR_l3r, MVT::i32);
  return Result;
}

SDNode *Emit_57(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  Ops0.push_back(Tmp0);
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
SDNode *Emit_58(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
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
SDNode *Select_XCoreISD_BL(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {

    // Pattern: (XCoreBranchLink:isVoid (imm:i32)<<P:Predicate_immU10>>:$target)
    // Emits: (BL_u10:isVoid (imm:i32):$target)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_immU10(N1.getNode())) {
      SDNode *Result = Emit_57(N, XCore::BL_u10, 1);
      return Result;
    }

    // Pattern: (XCoreBranchLink:isVoid (imm:i32)<<P:Predicate_immU20>>:$target)
    // Emits: (BL_lu10:isVoid (imm:i32):$target)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_immU20(N1.getNode())) {
      SDNode *Result = Emit_57(N, XCore::BL_lu10, 1);
      return Result;
    }
  }

  // Pattern: (XCoreBranchLink:isVoid (tglobaladdr:iPTR):$addr)
  // Emits: (BL_lu10:isVoid (tglobaladdr:i32):$addr)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_58(N, XCore::BL_lu10, 1);
    return Result;
  }

  // Pattern: (XCoreBranchLink:isVoid (texternalsym:iPTR):$addr)
  // Emits: (BL_lu10:isVoid (texternalsym:i32):$addr)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol) {
    SDNode *Result = Emit_58(N, XCore::BL_lu10, 1);
    return Result;
  }

  // Pattern: (XCoreBranchLink:isVoid GRRegs:i32:$addr)
  // Emits: (BLA_1r:isVoid GRRegs:i32:$addr)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_58(N, XCore::BLA_1r, 1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_XCoreISD_CPRelativeWrapper_i32(const SDValue &N) {
  if ((Subtarget.isXS1B())) {
    SDValue CPTmpN_0;
    SDValue CPTmpN_1;
    if (SelectADDRcpii(N, N, CPTmpN_0, CPTmpN_1)) {
      SDNode *Result = Emit_0(N, XCore::LDAWCP_lu6, CPTmpN_0, CPTmpN_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_XCoreISD_DPRelativeWrapper_i32(const SDValue &N) {
  SDValue CPTmpN_0;
  SDValue CPTmpN_1;
  if (SelectADDRdpii(N, N, CPTmpN_0, CPTmpN_1)) {
    SDNode *Result = Emit_1(N, XCore::LDAWDP_lru6, MVT::i32, CPTmpN_0, CPTmpN_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_59(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::i32, N0);
}
SDNode *Select_XCoreISD_PCRelativeWrapper_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_59(N, XCore::LDAP_lu10);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_60(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Tmp0, Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 3 : 2);
}
SDNode *Select_XCoreISD_RETSP(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {

    // Pattern: (XCoreRetsp:isVoid (imm:i32)<<P:Predicate_immU6>>:$b)
    // Emits: (RETSP_u6:isVoid (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_immU6(N1.getNode())) {
      SDNode *Result = Emit_60(N, XCore::RETSP_u6);
      return Result;
    }

    // Pattern: (XCoreRetsp:isVoid (imm:i32)<<P:Predicate_immU16>>:$b)
    // Emits: (RETSP_lu6:isVoid (imm:i32):$b)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_immU16(N1.getNode())) {
      SDNode *Result = Emit_60(N, XCore::RETSP_lu6);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_61(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Tmp1, Chain);
}
SDNode *Select_XCoreISD_STWSP(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {

    // Pattern: (XCoreStwsp:isVoid GRRegs:i32:$val, (imm:i32)<<P:Predicate_immU6>>:$index)
    // Emits: (STWSP_ru6:isVoid GRRegs:i32:$val, (imm:i32):$index)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_immU6(N2.getNode()) &&
        N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_61(N, XCore::STWSP_ru6);
      return Result;
    }

    // Pattern: (XCoreStwsp:isVoid GRRegs:i32:$val, (imm:i32)<<P:Predicate_immU16>>:$index)
    // Emits: (STWSP_lru6:isVoid GRRegs:i32:$val, (imm:i32):$index)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_immU16(N2.getNode()) &&
        N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_61(N, XCore::STWSP_lru6);
      return Result;
    }
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
  case ISD::CTTZ: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_CTTZ_i32(N);
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
  case ISD::FrameIndex: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_FrameIndex_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::INTRINSIC_WO_CHAIN: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_INTRINSIC_WO_CHAIN_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::LOAD: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_LOAD_i32(N);
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
  case ISD::SDIV: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SDIV_i32(N);
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
  case ISD::SRA: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SRA_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SREM: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SREM_i32(N);
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
  case ISD::TRAP: {
    switch (NVT) {
    default:
      return Select_ISD_TRAP(N);
      break;
    }
    break;
  }
  case ISD::UDIV: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_UDIV_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::UREM: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_UREM_i32(N);
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
  case XCoreISD::BL: {
    switch (NVT) {
    default:
      return Select_XCoreISD_BL(N);
      break;
    }
    break;
  }
  case XCoreISD::CPRelativeWrapper: {
    switch (NVT) {
    case MVT::i32:
      return Select_XCoreISD_CPRelativeWrapper_i32(N);
    default:
      break;
    }
    break;
  }
  case XCoreISD::DPRelativeWrapper: {
    switch (NVT) {
    case MVT::i32:
      return Select_XCoreISD_DPRelativeWrapper_i32(N);
    default:
      break;
    }
    break;
  }
  case XCoreISD::PCRelativeWrapper: {
    switch (NVT) {
    case MVT::i32:
      return Select_XCoreISD_PCRelativeWrapper_i32(N);
    default:
      break;
    }
    break;
  }
  case XCoreISD::RETSP: {
    switch (NVT) {
    default:
      return Select_XCoreISD_RETSP(N);
      break;
    }
    break;
  }
  case XCoreISD::STWSP: {
    switch (NVT) {
    default:
      return Select_XCoreISD_STWSP(N);
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

