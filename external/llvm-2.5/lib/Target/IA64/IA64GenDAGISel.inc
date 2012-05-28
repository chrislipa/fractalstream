//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the IA64 target
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
inline bool Predicate_fpimm1(SDNode *inN) {
  ConstantFPSDNode *N = cast<ConstantFPSDNode>(inN);

  return N->isExactlyValue(+1.0);

}
inline bool Predicate_fpimmn0(SDNode *inN) {
  ConstantFPSDNode *N = cast<ConstantFPSDNode>(inN);

  return N->isExactlyValue(-0.0);

}
inline bool Predicate_fpimmn1(SDNode *inN) {
  ConstantFPSDNode *N = cast<ConstantFPSDNode>(inN);

  return N->isExactlyValue(-1.0);

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
inline bool Predicate_immSExt14(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // immSExt14 predicate - True if the immediate fits in a 14-bit sign extended
  // field.  Used by instructions like 'adds'.
  int64_t v = (int64_t)N->getZExtValue();
  return (v <= 8191 && v >= -8192);

}
inline bool Predicate_is32ones(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // is32ones predicate - True if the immediate is 0x00000000FFFFFFFF 
  // Used to create ZXT4s appropriately 
  uint64_t v = (uint64_t)N->getZExtValue();
  return (v == 0x00000000FFFFFFFFLL);

}
inline bool Predicate_isMIX1Lable(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return((uint64_t)N->getZExtValue()==0xFF00FF00FF00FF00LL);

}
inline bool Predicate_isMIX1Rable(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return((uint64_t)N->getZExtValue()==0x00FF00FF00FF00FFLL);

}
inline bool Predicate_isMIX2Lable(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return((uint64_t)N->getZExtValue()==0xFFFF0000FFFF0000LL);

}
inline bool Predicate_isMIX2Rable(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return((uint64_t)N->getZExtValue()==0x0000FFFF0000FFFFLL);

}
inline bool Predicate_isMIX4Lable(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return((uint64_t)N->getZExtValue()==0xFFFFFFFF00000000LL);

}
inline bool Predicate_isMIX4Rable(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return((uint64_t)N->getZExtValue()==0x00000000FFFFFFFFLL);

}
inline bool Predicate_isSHLADDimm(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // isSHLADDimm predicate - True if the immediate is exactly 1, 2, 3 or 4
  // - 0 is *not* okay.
  // Used to create shladd instructions appropriately
  int64_t v = (int64_t)N->getZExtValue();
  return (v >= 1 && v <= 4);

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


SDNode *Emit_0(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 2 : 1);
}
SDNode *Select_IA64ISD_RET_FLAG(const SDValue &N) {
  SDNode *Result = Emit_0(N, IA64::RET);
  return Result;
}

SDNode *Emit_1(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_2(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N01);
}
SDNode *Emit_3(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_4(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, Tmp1, N0);
}
SDNode *Emit_5(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N1);
}
SDNode *Emit_6(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, N0);
}
SDNode *Emit_7(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, Tmp1, N1);
}
SDNode *Select_ISD_ADD_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (add:i64 (add:i64 GR:i64:$src1, GR:i64:$src2), 1:i64)
    // Emits: (ADD1:i64 GR:i64:$src1, GR:i64:$src2)
    // Pattern complexity = 11  cost = 1  size = 0
    if (N0.getOpcode() == ISD::ADD) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(1)) {
          SDNode *Result = Emit_2(N, IA64::ADD1, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (add:i64 (sub:i64 GR:i64:$src1, GR:i64:$src2), -1:i64)
    // Emits: (SUB1:i64 GR:i64:$src1, GR:i64:$src2)
    // Pattern complexity = 11  cost = 1  size = 0
    if (N0.getOpcode() == ISD::SUB) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(-1)) {
          SDNode *Result = Emit_2(N, IA64::SUB1, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (add:i64 (add:i64 GR:i64:$src1, 1:i64), GR:i64:$src2)
    // Emits: (ADD1:i64 GR:i64:$src1, GR:i64:$src2)
    // Pattern complexity = 11  cost = 1  size = 0
    if (N0.getOpcode() == ISD::ADD) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(1)) {
          SDNode *Result = Emit_5(N, IA64::ADD1, MVT::i64);
          return Result;
        }
      }
    }
    {
      SDValue N1 = N.getOperand(1);

      // Pattern: (add:i64 GR:i64:$src2, (add:i64 GR:i64:$src1, 1:i64))
      // Emits: (ADD1:i64 GR:i64:$src1, GR:i64:$src2)
      // Pattern complexity = 11  cost = 1  size = 0
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(1)) {
            SDNode *Result = Emit_6(N, IA64::ADD1, MVT::i64);
            return Result;
          }
        }
      }

      // Pattern: (add:i64 GR:i64:$src2, (shl:i64 GR:i64:$src1, (imm:i64)<<P:Predicate_isSHLADDimm>>:$imm))
      // Emits: (SHLADD:i64 GR:i64:$src1, (imm:i64):$imm, GR:i64:$src2)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N1.getOpcode() == ISD::SHL) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_isSHLADDimm(N11.getNode()) &&
            N11.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_4(N, IA64::SHLADD, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (add:i64 (shl:i64 GR:i64:$src1, (imm:i64)<<P:Predicate_isSHLADDimm>>:$imm), GR:i64:$src2)
    // Emits: (SHLADD:i64 GR:i64:$src1, (imm:i64):$imm, GR:i64:$src2)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::SHL) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_isSHLADDimm(N01.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N01.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_7(N, IA64::SHLADD, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (add:i64 GR:i64:$src1, (imm:i64)<<P:Predicate_immSExt14>>:$imm)
    // Emits: (ADDS:i64 GR:i64:$src1, (imm:i64):$imm)
    // Pattern complexity = 7  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immSExt14(N1.getNode())) {
      SDNode *Result = Emit_3(N, IA64::ADDS, MVT::i64);
      return Result;
    }
  }

  // Pattern: (add:i64 GR:i64:$src1, GR:i64:$src2)
  // Emits: (ADD:i64 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, IA64::ADD, MVT::i64);
  return Result;
}

SDNode *Emit_8(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, unsigned Opc3, MVT VT0, MVT VT1, MVT VT2, MVT VT3) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  SDValue Tmp2 = CurDAG->getRegister(IA64::r0, MVT::i64);
  SDValue Tmp3 = CurDAG->getRegister(IA64::r0, MVT::i64);
  SDValue Tmp4(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp2, Tmp3), 0);
  SDValue Tmp6(CurDAG->getTargetNode(Opc2, N.getDebugLoc(), VT2, Tmp4, N1), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc3, VT3, Tmp1, Tmp6);
}
SDNode *Select_ISD_AND_i1(const SDValue &N) {
  SDNode *Result = Emit_8(N, IA64::PCMPEQUNCR0R0, IA64::CMPEQ, IA64::TPCMPNER0R0, IA64::TPCMPNER0R0, MVT::i1, MVT::i1, MVT::i1, MVT::i1);
  return Result;
}

SDNode *Emit_9(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Emit_10(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N10);
}
SDNode *Emit_11(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N00);
}
SDNode *Select_ISD_AND_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i64 GR:i64:$src1, (xor:i64 GR:i64:$src2, (imm:i64)<<P:Predicate_immAllOnes>>))
    // Emits: (ANDCM:i64 GR:i64:$src1, GR:i64:$src2)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_10(N, IA64::ANDCM, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (and:i64 (xor:i64 GR:i64:$src2, (imm:i64)<<P:Predicate_immAllOnes>>), GR:i64:$src1)
    // Emits: (ANDCM:i64 GR:i64:$src1, GR:i64:$src2)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_11(N, IA64::ANDCM, MVT::i64);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {

        // Pattern: (and:i64 GR:i64:$src, 255:i64)
        // Emits: (ZXT1:i64 GR:i64:$src)
        // Pattern complexity = 8  cost = 1  size = 0
        if (CheckAndMask(N0, Tmp0, INT64_C(255))) {
          SDNode *Result = Emit_9(N, IA64::ZXT1, MVT::i64);
          return Result;
        }

        // Pattern: (and:i64 GR:i64:$src, 65535:i64)
        // Emits: (ZXT2:i64 GR:i64:$src)
        // Pattern complexity = 8  cost = 1  size = 0
        if (CheckAndMask(N0, Tmp0, INT64_C(65535))) {
          SDNode *Result = Emit_9(N, IA64::ZXT2, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (and:i64 GR:i64:$src, (imm:i64)<<P:Predicate_is32ones>>)
    // Emits: (ZXT4:i64 GR:i64:$src)
    // Pattern complexity = 7  cost = 1  size = 0
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_is32ones(N1.getNode())) {
      SDNode *Result = Emit_9(N, IA64::ZXT4, MVT::i64);
      return Result;
    }
  }

  // Pattern: (and:i64 GR:i64:$src1, GR:i64:$src2)
  // Emits: (AND:i64 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, IA64::AND, MVT::i64);
  return Result;
}

SDNode *Emit_12(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp0 = CurDAG->getRegister(IA64::r0, MVT::i64);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp0, Tmp1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1ULL, MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3, N0);
}
SDNode *Select_ISD_ANY_EXTEND_i64(const SDValue &N) {
  SDNode *Result = Emit_12(N, IA64::ADDS, IA64::TPCADDIMM22, MVT::i64, MVT::i64);
  return Result;
}

SDNode *Emit_13(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_CTPOP_i64(const SDValue &N) {
  SDNode *Result = Emit_13(N, IA64::POPCNT, MVT::i64);
  return Result;
}

SDNode *Emit_14(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getRegister(IA64::r0, MVT::i64);
  SDValue Tmp1 = CurDAG->getRegister(IA64::r0, MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, Tmp1);
}
SDNode *Select_ISD_Constant_i1(const SDValue &N) {

  // Pattern: -1:i1
  // Emits: (CMPEQ:i1 r0:i64, r0:i64)
  // Pattern complexity = 5  cost = 1  size = 0
  if (cast<ConstantSDNode>(N)->getSExtValue() == INT64_C(-1)) {
    SDNode *Result = Emit_14(N, IA64::CMPEQ, MVT::i1);
    return Result;
  }

  // Pattern: 0:i1
  // Emits: (CMPNE:i1 r0:i64, r0:i64)
  // Pattern complexity = 5  cost = 1  size = 0
  if (cast<ConstantSDNode>(N)->getSExtValue() == INT64_C(0)) {
    SDNode *Result = Emit_14(N, IA64::CMPNE, MVT::i1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_15(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Emit_16(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getRegister(IA64::r0, MVT::i64);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, Tmp1);
}
SDNode *Select_ISD_Constant_i64(const SDValue &N) {

  // Pattern: (imm:i64)<<P:Predicate_immSExt14>>:$imm
  // Emits: (ADDS:i64 r0:i64, (imm:i64)<<P:Predicate_immSExt14>>:$imm)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immSExt14(N.getNode())) {
    SDNode *Result = Emit_16(N, IA64::ADDS, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64):$imm
  // Emits: (MOVL:i64 (imm:i64):$imm)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_15(N, IA64::MOVL, MVT::i64);
  return Result;
}

SDNode *Emit_17(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getRegister(IA64::F1, MVT::f64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Emit_18(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getRegister(IA64::F0, MVT::f64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Select_ISD_ConstantFP_f64(const SDValue &N) {

  // Pattern: (fpimm:f64)<<P:Predicate_fpimmn1>>
  // Emits: (FNEG:f64 F1:f64)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_fpimmn1(N.getNode())) {
    SDNode *Result = Emit_17(N, IA64::FNEG, MVT::f64);
    return Result;
  }

  // Pattern: (fpimm:f64)<<P:Predicate_fpimm0>>
  // Emits: (FMOV:f64 F0:f64)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_fpimm0(N.getNode())) {
    SDNode *Result = Emit_18(N, IA64::FMOV, MVT::f64);
    return Result;
  }

  // Pattern: (fpimm:f64)<<P:Predicate_fpimm1>>
  // Emits: (FMOV:f64 F1:f64)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_fpimm1(N.getNode())) {
    SDNode *Result = Emit_17(N, IA64::FMOV, MVT::f64);
    return Result;
  }

  // Pattern: (fpimm:f64)<<P:Predicate_fpimmn0>>
  // Emits: (FNEG:f64 F0:f64)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_fpimmn0(N.getNode())) {
    SDNode *Result = Emit_18(N, IA64::FNEG, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FABS_f64(const SDValue &N) {
  SDNode *Result = Emit_13(N, IA64::FABS, MVT::f64);
  return Result;
}

SDNode *Emit_19(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N01, N1);
}
SDNode *Emit_20(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, N11, N0);
}
SDNode *Select_ISD_FADD_f64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fadd:f64 (fmul:f64 FP:f64:$src1, FP:f64:$src2), FP:f64:$src3)
    // Emits: (FMA:f64 FP:f64:$src1, FP:f64:$src2, FP:f64:$src3)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_19(N, IA64::FMA, MVT::f64);
      return Result;
    }

    // Pattern: (fadd:f64 FP:f64:$src3, (fmul:f64 FP:f64:$src1, FP:f64:$src2))
    // Emits: (FMA:f64 FP:f64:$src1, FP:f64:$src2, FP:f64:$src3)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_20(N, IA64::FMA, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fadd:f64 FP:f64:$src1, FP:f64:$src2)
  // Emits: (FADD:f64 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, IA64::FADD, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FMUL_f64(const SDValue &N) {
  SDNode *Result = Emit_1(N, IA64::FMPY, MVT::f64);
  return Result;
}

SDNode *Emit_21(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000, N001, N01);
}
SDNode *Emit_22(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00);
}
SDNode *Emit_23(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N010, N011, N00);
}
SDNode *Select_ISD_FNEG_f64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FADD) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (fneg:f64 (fadd:f64 (fmul:f64 FP:f64:$src1, FP:f64:$src2), FP:f64:$src3))
      // Emits: (FNMA:f64 FP:f64:$src1, FP:f64:$src2, FP:f64:$src3)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N00.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_21(N, IA64::FNMA, MVT::f64);
        return Result;
      }

      // Pattern: (fneg:f64 (fadd:f64 FP:f64:$src3, (fmul:f64 FP:f64:$src1, FP:f64:$src2)))
      // Emits: (FNMA:f64 FP:f64:$src1, FP:f64:$src2, FP:f64:$src3)
      // Pattern complexity = 9  cost = 1  size = 0
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_23(N, IA64::FNMA, MVT::f64);
        return Result;
      }
    }

    // Pattern: (fneg:f64 (fabs:f64 FP:f64:$src))
    // Emits: (FNEGABS:f64 FP:f64:$src)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FABS) {
      SDNode *Result = Emit_22(N, IA64::FNEGABS, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fneg:f64 FP:f64:$src)
  // Emits: (FNEG:f64 FP:f64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_13(N, IA64::FNEG, MVT::f64);
  return Result;
}

SDNode *Emit_24(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp1);
}
SDNode *Select_ISD_FP_TO_SINT_i64(const SDValue &N) {
  SDNode *Result = Emit_24(N, IA64::FCVTFXTRUNC, IA64::GETFSIG, MVT::f64, MVT::i64);
  return Result;
}

SDNode *Select_ISD_FP_TO_UINT_i64(const SDValue &N) {
  SDNode *Result = Emit_24(N, IA64::FCVTFXUTRUNC, IA64::GETFSIG, MVT::f64, MVT::i64);
  return Result;
}

SDNode *Select_ISD_FSUB_f64(const SDValue &N) {

  // Pattern: (fsub:f64 (fmul:f64 FP:f64:$src1, FP:f64:$src2), FP:f64:$src3)
  // Emits: (FMS:f64 FP:f64:$src1, FP:f64:$src2, FP:f64:$src3)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_19(N, IA64::FMS, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fsub:f64 FP:f64:$src1, FP:f64:$src2)
  // Emits: (FSUB:f64 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, IA64::FSUB, MVT::f64);
  return Result;
}

SDNode *Emit_25(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, unsigned Opc3, MVT VT0, MVT VT1, MVT VT2, MVT VT3) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  SDValue Tmp3(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, N1), 0);
  SDValue Tmp4 = CurDAG->getRegister(IA64::F0, MVT::f64);
  SDValue Tmp5(CurDAG->getTargetNode(Opc2, N.getDebugLoc(), VT2, Tmp1, Tmp3, Tmp4), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc3, VT3, Tmp5);
}
SDNode *Select_ISD_MUL_i64(const SDValue &N) {
  SDNode *Result = Emit_25(N, IA64::SETFSIGD, IA64::SETFSIGD, IA64::XMALD, IA64::GETFSIGD, MVT::f64, MVT::f64, MVT::f64, MVT::i64);
  return Result;
}

SDNode *Select_ISD_MULHS_i64(const SDValue &N) {
  SDNode *Result = Emit_25(N, IA64::SETFSIGD, IA64::SETFSIGD, IA64::XMAHD, IA64::GETFSIGD, MVT::f64, MVT::f64, MVT::f64, MVT::i64);
  return Result;
}

SDNode *Select_ISD_MULHU_i64(const SDValue &N) {
  SDNode *Result = Emit_25(N, IA64::SETFSIGD, IA64::SETFSIGD, IA64::XMAHUD, IA64::GETFSIGD, MVT::f64, MVT::f64, MVT::f64, MVT::i64);
  return Result;
}

SDNode *Emit_26(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp1, N1);
}
SDNode *Select_ISD_OR_i1(const SDValue &N) {
  SDNode *Result = Emit_26(N, IA64::PCMPEQUNCR0R0, IA64::TPCMPEQR0R0, MVT::i1, MVT::i1);
  return Result;
}

SDNode *Emit_27(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N100);
}
SDNode *Emit_28(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000, N10);
}
SDNode *Emit_29(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, N000);
}
SDNode *Emit_30(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N100, N00);
}
SDNode *Select_ISD_OR_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      {
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::Constant) {

          // Pattern: (or:i64 (and:i64 GR:i64:$src1, (imm:i64)<<P:Predicate_isMIX1Lable>>), (and:i64 (srl:i64 GR:i64:$src2, 8:i64), (imm:i64)<<P:Predicate_isMIX1Lable>>))
          // Emits: (MIX1L:i64 GR:i64:$src1, GR:i64:$src2)
          // Pattern complexity = 25  cost = 1  size = 0
          if (Predicate_isMIX1Lable(N01.getNode())) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::AND) {
              SDValue N10 = N1.getOperand(0);
              if (N10.getOpcode() == ISD::SRL) {
                SDValue N100 = N10.getOperand(0);
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp0) {
                  int64_t CN1 = Tmp0->getSExtValue();
                  if (CN1 == INT64_C(8)) {
                    SDValue N11 = N1.getOperand(1);
                    if (N11.getOpcode() == ISD::Constant &&
                        Predicate_isMIX1Lable(N11.getNode()) &&
                        N101.getNode()->getValueType(0) == MVT::i64) {
                      SDNode *Result = Emit_27(N, IA64::MIX1L, MVT::i64);
                      return Result;
                    }
                  }
                }
              }
            }
          }

          // Pattern: (or:i64 (and:i64 GR:i64:$src1, (imm:i64)<<P:Predicate_isMIX2Lable>>), (and:i64 (srl:i64 GR:i64:$src2, 16:i64), (imm:i64)<<P:Predicate_isMIX2Lable>>))
          // Emits: (MIX2L:i64 GR:i64:$src1, GR:i64:$src2)
          // Pattern complexity = 25  cost = 1  size = 0
          if (Predicate_isMIX2Lable(N01.getNode())) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::AND) {
              SDValue N10 = N1.getOperand(0);
              if (N10.getOpcode() == ISD::SRL) {
                SDValue N100 = N10.getOperand(0);
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp0) {
                  int64_t CN1 = Tmp0->getSExtValue();
                  if (CN1 == INT64_C(16)) {
                    SDValue N11 = N1.getOperand(1);
                    if (N11.getOpcode() == ISD::Constant &&
                        Predicate_isMIX2Lable(N11.getNode()) &&
                        N101.getNode()->getValueType(0) == MVT::i64) {
                      SDNode *Result = Emit_27(N, IA64::MIX2L, MVT::i64);
                      return Result;
                    }
                  }
                }
              }
            }
          }

          // Pattern: (or:i64 (and:i64 GR:i64:$src1, (imm:i64)<<P:Predicate_isMIX4Lable>>), (and:i64 (srl:i64 GR:i64:$src2, 32:i64), (imm:i64)<<P:Predicate_isMIX4Lable>>))
          // Emits: (MIX4L:i64 GR:i64:$src1, GR:i64:$src2)
          // Pattern complexity = 25  cost = 1  size = 0
          if (Predicate_isMIX4Lable(N01.getNode())) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::AND) {
              SDValue N10 = N1.getOperand(0);
              if (N10.getOpcode() == ISD::SRL) {
                SDValue N100 = N10.getOperand(0);
                SDValue N101 = N10.getOperand(1);
                ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
                if (Tmp0) {
                  int64_t CN1 = Tmp0->getSExtValue();
                  if (CN1 == INT64_C(32)) {
                    SDValue N11 = N1.getOperand(1);
                    if (N11.getOpcode() == ISD::Constant &&
                        Predicate_isMIX4Lable(N11.getNode()) &&
                        N101.getNode()->getValueType(0) == MVT::i64) {
                      SDNode *Result = Emit_27(N, IA64::MIX4L, MVT::i64);
                      return Result;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (N00.getOpcode() == ISD::SHL) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();

          // Pattern: (or:i64 (and:i64 (shl:i64 GR:i64:$src1, 8:i64), (imm:i64)<<P:Predicate_isMIX1Rable>>), (and:i64 GR:i64:$src2, (imm:i64)<<P:Predicate_isMIX1Rable>>))
          // Emits: (MIX1R:i64 GR:i64:$src1, GR:i64:$src2)
          // Pattern complexity = 25  cost = 1  size = 0
          if (CN1 == INT64_C(8)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::Constant &&
                Predicate_isMIX1Rable(N01.getNode())) {
              SDValue N1 = N.getOperand(1);
              if (N1.getOpcode() == ISD::AND) {
                SDValue N10 = N1.getOperand(0);
                SDValue N11 = N1.getOperand(1);
                if (N11.getOpcode() == ISD::Constant &&
                    Predicate_isMIX1Rable(N11.getNode()) &&
                    N001.getNode()->getValueType(0) == MVT::i64) {
                  SDNode *Result = Emit_28(N, IA64::MIX1R, MVT::i64);
                  return Result;
                }
              }
            }
          }

          // Pattern: (or:i64 (and:i64 (shl:i64 GR:i64:$src1, 16:i64), (imm:i64)<<P:Predicate_isMIX2Rable>>), (and:i64 GR:i64:$src2, (imm:i64)<<P:Predicate_isMIX2Rable>>))
          // Emits: (MIX2R:i64 GR:i64:$src1, GR:i64:$src2)
          // Pattern complexity = 25  cost = 1  size = 0
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::Constant &&
                Predicate_isMIX2Rable(N01.getNode())) {
              SDValue N1 = N.getOperand(1);
              if (N1.getOpcode() == ISD::AND) {
                SDValue N10 = N1.getOperand(0);
                SDValue N11 = N1.getOperand(1);
                if (N11.getOpcode() == ISD::Constant &&
                    Predicate_isMIX2Rable(N11.getNode()) &&
                    N001.getNode()->getValueType(0) == MVT::i64) {
                  SDNode *Result = Emit_28(N, IA64::MIX2R, MVT::i64);
                  return Result;
                }
              }
            }
          }

          // Pattern: (or:i64 (and:i64 (shl:i64 GR:i64:$src1, 32:i64), (imm:i64)<<P:Predicate_isMIX4Rable>>), (and:i64 GR:i64:$src2, (imm:i64)<<P:Predicate_isMIX4Rable>>))
          // Emits: (MIX4R:i64 GR:i64:$src1, GR:i64:$src2)
          // Pattern complexity = 25  cost = 1  size = 0
          if (CN1 == INT64_C(32)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::Constant &&
                Predicate_isMIX4Rable(N01.getNode())) {
              SDValue N1 = N.getOperand(1);
              if (N1.getOpcode() == ISD::AND) {
                SDValue N10 = N1.getOperand(0);
                SDValue N11 = N1.getOperand(1);
                if (N11.getOpcode() == ISD::Constant &&
                    Predicate_isMIX4Rable(N11.getNode()) &&
                    N001.getNode()->getValueType(0) == MVT::i64) {
                  SDNode *Result = Emit_28(N, IA64::MIX4R, MVT::i64);
                  return Result;
                }
              }
            }
          }
        }
      }
      if (N00.getOpcode() == ISD::SRL) {
        SDValue N000 = N00.getOperand(0);
        SDValue N001 = N00.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();

          // Pattern: (or:i64 (and:i64 (srl:i64 GR:i64:$src2, 8:i64), (imm:i64)<<P:Predicate_isMIX1Lable>>), (and:i64 GR:i64:$src1, (imm:i64)<<P:Predicate_isMIX1Lable>>))
          // Emits: (MIX1L:i64 GR:i64:$src1, GR:i64:$src2)
          // Pattern complexity = 25  cost = 1  size = 0
          if (CN1 == INT64_C(8)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::Constant &&
                Predicate_isMIX1Lable(N01.getNode())) {
              SDValue N1 = N.getOperand(1);
              if (N1.getOpcode() == ISD::AND) {
                SDValue N10 = N1.getOperand(0);
                SDValue N11 = N1.getOperand(1);
                if (N11.getOpcode() == ISD::Constant &&
                    Predicate_isMIX1Lable(N11.getNode()) &&
                    N001.getNode()->getValueType(0) == MVT::i64) {
                  SDNode *Result = Emit_29(N, IA64::MIX1L, MVT::i64);
                  return Result;
                }
              }
            }
          }

          // Pattern: (or:i64 (and:i64 (srl:i64 GR:i64:$src2, 16:i64), (imm:i64)<<P:Predicate_isMIX2Lable>>), (and:i64 GR:i64:$src1, (imm:i64)<<P:Predicate_isMIX2Lable>>))
          // Emits: (MIX2L:i64 GR:i64:$src1, GR:i64:$src2)
          // Pattern complexity = 25  cost = 1  size = 0
          if (CN1 == INT64_C(16)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::Constant &&
                Predicate_isMIX2Lable(N01.getNode())) {
              SDValue N1 = N.getOperand(1);
              if (N1.getOpcode() == ISD::AND) {
                SDValue N10 = N1.getOperand(0);
                SDValue N11 = N1.getOperand(1);
                if (N11.getOpcode() == ISD::Constant &&
                    Predicate_isMIX2Lable(N11.getNode()) &&
                    N001.getNode()->getValueType(0) == MVT::i64) {
                  SDNode *Result = Emit_29(N, IA64::MIX2L, MVT::i64);
                  return Result;
                }
              }
            }
          }

          // Pattern: (or:i64 (and:i64 (srl:i64 GR:i64:$src2, 32:i64), (imm:i64)<<P:Predicate_isMIX4Lable>>), (and:i64 GR:i64:$src1, (imm:i64)<<P:Predicate_isMIX4Lable>>))
          // Emits: (MIX4L:i64 GR:i64:$src1, GR:i64:$src2)
          // Pattern complexity = 25  cost = 1  size = 0
          if (CN1 == INT64_C(32)) {
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::Constant &&
                Predicate_isMIX4Lable(N01.getNode())) {
              SDValue N1 = N.getOperand(1);
              if (N1.getOpcode() == ISD::AND) {
                SDValue N10 = N1.getOperand(0);
                SDValue N11 = N1.getOperand(1);
                if (N11.getOpcode() == ISD::Constant &&
                    Predicate_isMIX4Lable(N11.getNode()) &&
                    N001.getNode()->getValueType(0) == MVT::i64) {
                  SDNode *Result = Emit_29(N, IA64::MIX4L, MVT::i64);
                  return Result;
                }
              }
            }
          }
        }
      }
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant) {

        // Pattern: (or:i64 (and:i64 GR:i64:$src2, (imm:i64)<<P:Predicate_isMIX1Rable>>), (and:i64 (shl:i64 GR:i64:$src1, 8:i64), (imm:i64)<<P:Predicate_isMIX1Rable>>))
        // Emits: (MIX1R:i64 GR:i64:$src1, GR:i64:$src2)
        // Pattern complexity = 25  cost = 1  size = 0
        if (Predicate_isMIX1Rable(N01.getNode())) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::AND) {
            SDValue N10 = N1.getOperand(0);
            if (N10.getOpcode() == ISD::SHL) {
              SDValue N100 = N10.getOperand(0);
              SDValue N101 = N10.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(8)) {
                  SDValue N11 = N1.getOperand(1);
                  if (N11.getOpcode() == ISD::Constant &&
                      Predicate_isMIX1Rable(N11.getNode()) &&
                      N101.getNode()->getValueType(0) == MVT::i64) {
                    SDNode *Result = Emit_30(N, IA64::MIX1R, MVT::i64);
                    return Result;
                  }
                }
              }
            }
          }
        }

        // Pattern: (or:i64 (and:i64 GR:i64:$src2, (imm:i64)<<P:Predicate_isMIX2Rable>>), (and:i64 (shl:i64 GR:i64:$src1, 16:i64), (imm:i64)<<P:Predicate_isMIX2Rable>>))
        // Emits: (MIX2R:i64 GR:i64:$src1, GR:i64:$src2)
        // Pattern complexity = 25  cost = 1  size = 0
        if (Predicate_isMIX2Rable(N01.getNode())) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::AND) {
            SDValue N10 = N1.getOperand(0);
            if (N10.getOpcode() == ISD::SHL) {
              SDValue N100 = N10.getOperand(0);
              SDValue N101 = N10.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(16)) {
                  SDValue N11 = N1.getOperand(1);
                  if (N11.getOpcode() == ISD::Constant &&
                      Predicate_isMIX2Rable(N11.getNode()) &&
                      N101.getNode()->getValueType(0) == MVT::i64) {
                    SDNode *Result = Emit_30(N, IA64::MIX2R, MVT::i64);
                    return Result;
                  }
                }
              }
            }
          }
        }

        // Pattern: (or:i64 (and:i64 GR:i64:$src2, (imm:i64)<<P:Predicate_isMIX4Rable>>), (and:i64 (shl:i64 GR:i64:$src1, 32:i64), (imm:i64)<<P:Predicate_isMIX4Rable>>))
        // Emits: (MIX4R:i64 GR:i64:$src1, GR:i64:$src2)
        // Pattern complexity = 25  cost = 1  size = 0
        if (Predicate_isMIX4Rable(N01.getNode())) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::AND) {
            SDValue N10 = N1.getOperand(0);
            if (N10.getOpcode() == ISD::SHL) {
              SDValue N100 = N10.getOperand(0);
              SDValue N101 = N10.getOperand(1);
              ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N101);
              if (Tmp0) {
                int64_t CN1 = Tmp0->getSExtValue();
                if (CN1 == INT64_C(32)) {
                  SDValue N11 = N1.getOperand(1);
                  if (N11.getOpcode() == ISD::Constant &&
                      Predicate_isMIX4Rable(N11.getNode()) &&
                      N101.getNode()->getValueType(0) == MVT::i64) {
                    SDNode *Result = Emit_30(N, IA64::MIX4R, MVT::i64);
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

  // Pattern: (or:i64 GR:i64:$src1, GR:i64:$src2)
  // Emits: (OR:i64 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, IA64::OR, MVT::i64);
  return Result;
}

SDNode *Emit_31(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Chain);
}
SDNode *Select_ISD_RET(const SDValue &N) {
  SDNode *Result = Emit_31(N, IA64::RET);
  return Result;
}

SDNode *Emit_32(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, unsigned Opc3, unsigned Opc4, unsigned Opc5, unsigned Opc6, MVT VT0, MVT VT1, MVT VT2, MVT VT3, MVT VT4, MVT VT5, MVT VT6) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getRegister(IA64::r0, MVT::i64);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp0, Tmp1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1ULL, MVT::i64);
  SDValue Tmp5(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp2, Tmp3, N2), 0);
  SDValue Tmp6(CurDAG->getTargetNode(Opc2, N.getDebugLoc(), VT2, Tmp5), 0);
  SDValue Tmp7 = CurDAG->getRegister(IA64::r0, MVT::i64);
  SDValue Tmp8 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  SDValue Tmp9(CurDAG->getTargetNode(Opc3, N.getDebugLoc(), VT3, Tmp7, Tmp8), 0);
  SDValue Tmp10 = CurDAG->getTargetConstant(0x1ULL, MVT::i64);
  SDValue Tmp12(CurDAG->getTargetNode(Opc4, N.getDebugLoc(), VT4, Tmp9, Tmp10, N1), 0);
  SDValue Tmp14(CurDAG->getTargetNode(Opc5, N.getDebugLoc(), VT5, Tmp6, Tmp12, N0), 0);
  SDValue Tmp15 = CurDAG->getRegister(IA64::r0, MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc6, VT6, Tmp14, Tmp15);
}
SDNode *Select_ISD_SELECT_i1(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N0.getNode()->getValueType(0) == MVT::i1) {
    SDNode *Result = Emit_32(N, IA64::ADDS, IA64::TPCADDIMM22, IA64::MOV, IA64::ADDS, IA64::TPCADDIMM22, IA64::CMOV, IA64::CMPNE, MVT::i64, MVT::i64, MVT::i64, MVT::i64, MVT::i64, MVT::i64, MVT::i1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_33(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N2), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp1, N1, N0);
}
SDNode *Select_ISD_SELECT_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N0.getNode()->getValueType(0) == MVT::i1) {
    SDNode *Result = Emit_33(N, IA64::MOV, IA64::CMOV, MVT::i64, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SELECT_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N0.getNode()->getValueType(0) == MVT::i1) {
    SDNode *Result = Emit_33(N, IA64::FMOV, IA64::CFMOV, MVT::f64, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_34(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Select_ISD_SETCC_i1(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);

  // Pattern: (setcc:i1 GR:i64:$src1, GR:i64:$src2, SETEQ:Other)
  // Emits: (CMPEQ:i1 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETEQ &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_34(N, IA64::CMPEQ, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 GR:i64:$src1, GR:i64:$src2, SETGT:Other)
  // Emits: (CMPGT:i1 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGT &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_34(N, IA64::CMPGT, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 GR:i64:$src1, GR:i64:$src2, SETGE:Other)
  // Emits: (CMPGE:i1 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_34(N, IA64::CMPGE, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 GR:i64:$src1, GR:i64:$src2, SETLT:Other)
  // Emits: (CMPLT:i1 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLT &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_34(N, IA64::CMPLT, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 GR:i64:$src1, GR:i64:$src2, SETLE:Other)
  // Emits: (CMPLE:i1 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_34(N, IA64::CMPLE, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 GR:i64:$src1, GR:i64:$src2, SETNE:Other)
  // Emits: (CMPNE:i1 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_34(N, IA64::CMPNE, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 GR:i64:$src1, GR:i64:$src2, SETULT:Other)
  // Emits: (CMPLTU:i1 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULT &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_34(N, IA64::CMPLTU, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 GR:i64:$src1, GR:i64:$src2, SETUGT:Other)
  // Emits: (CMPGTU:i1 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGT &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_34(N, IA64::CMPGTU, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 GR:i64:$src1, GR:i64:$src2, SETULE:Other)
  // Emits: (CMPLEU:i1 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_34(N, IA64::CMPLEU, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 GR:i64:$src1, GR:i64:$src2, SETUGE:Other)
  // Emits: (CMPGEU:i1 GR:i64:$src1, GR:i64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_34(N, IA64::CMPGEU, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 FP:f64:$src1, FP:f64:$src2, SETEQ:Other)
  // Emits: (FCMPEQ:i1 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETEQ &&
      N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_34(N, IA64::FCMPEQ, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 FP:f64:$src1, FP:f64:$src2, SETGT:Other)
  // Emits: (FCMPGT:i1 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGT &&
      N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_34(N, IA64::FCMPGT, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 FP:f64:$src1, FP:f64:$src2, SETGE:Other)
  // Emits: (FCMPGE:i1 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGE &&
      N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_34(N, IA64::FCMPGE, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 FP:f64:$src1, FP:f64:$src2, SETLT:Other)
  // Emits: (FCMPLT:i1 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLT &&
      N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_34(N, IA64::FCMPLT, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 FP:f64:$src1, FP:f64:$src2, SETLE:Other)
  // Emits: (FCMPLE:i1 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLE &&
      N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_34(N, IA64::FCMPLE, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 FP:f64:$src1, FP:f64:$src2, SETNE:Other)
  // Emits: (FCMPNE:i1 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE &&
      N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_34(N, IA64::FCMPNE, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 FP:f64:$src1, FP:f64:$src2, SETULT:Other)
  // Emits: (FCMPLTU:i1 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULT &&
      N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_34(N, IA64::FCMPLTU, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 FP:f64:$src1, FP:f64:$src2, SETUGT:Other)
  // Emits: (FCMPGTU:i1 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGT &&
      N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_34(N, IA64::FCMPGTU, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 FP:f64:$src1, FP:f64:$src2, SETULE:Other)
  // Emits: (FCMPLEU:i1 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULE &&
      N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_34(N, IA64::FCMPLEU, MVT::i1);
    return Result;
  }

  // Pattern: (setcc:i1 FP:f64:$src1, FP:f64:$src2, SETUGE:Other)
  // Emits: (FCMPGEU:i1 FP:f64:$src1, FP:f64:$src2)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE &&
      N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_34(N, IA64::FCMPGEU, MVT::i1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SHL_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_1(N, IA64::SHL, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SIGN_EXTEND_INREG_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (sext_inreg:i64 GR:i64:$src, i8:Other)
  // Emits: (SXT1:i64 GR:i64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
    SDNode *Result = Emit_9(N, IA64::SXT1, MVT::i64);
    return Result;
  }

  // Pattern: (sext_inreg:i64 GR:i64:$src, i16:Other)
  // Emits: (SXT2:i64 GR:i64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
    SDNode *Result = Emit_9(N, IA64::SXT2, MVT::i64);
    return Result;
  }

  // Pattern: (sext_inreg:i64 GR:i64:$src, i32:Other)
  // Emits: (SXT4:i64 GR:i64:$src)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
    SDNode *Result = Emit_9(N, IA64::SXT4, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_35(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, MVT VT0, MVT VT1, MVT VT2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0), 0);
  SDValue Tmp2(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp1), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc2, VT2, Tmp2);
}
SDNode *Select_ISD_SINT_TO_FP_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_35(N, IA64::SETFSIG, IA64::FCVTXF, IA64::FNORMD, MVT::f64, MVT::f64, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRA_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_1(N, IA64::SHRS, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRL_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_1(N, IA64::SHRU, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SUB_i64(const SDValue &N) {
  SDNode *Result = Emit_1(N, IA64::SUB, MVT::i64);
  return Result;
}

SDNode *Emit_36(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp1 = CurDAG->getRegister(IA64::r0, MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Select_ISD_TRUNCATE_i1(const SDValue &N) {
  SDNode *Result = Emit_36(N, IA64::CMPNE, MVT::i1);
  return Result;
}

SDNode *Select_ISD_UINT_TO_FP_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_35(N, IA64::SETFSIG, IA64::FCVTXUF, IA64::FNORMD, MVT::f64, MVT::f64, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_37(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, unsigned Opc3, MVT VT0, MVT VT1, MVT VT2, MVT VT3) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N1), 0);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i64);
  SDValue Tmp3 = CurDAG->getRegister(IA64::r0, MVT::i64);
  SDValue Tmp4 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  SDValue Tmp5(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp3, Tmp4), 0);
  SDValue Tmp6 = CurDAG->getTargetConstant(0x1ULL, MVT::i64);
  SDValue Tmp8(CurDAG->getTargetNode(Opc2, N.getDebugLoc(), VT2, Tmp5, Tmp6, N1), 0);
  SDValue Ops3[] = { Tmp1, Tmp2, Tmp8, N0 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc3, VT3, Ops3, 4);
}
SDNode *Select_ISD_XOR_i1(const SDValue &N) {
  SDNode *Result = Emit_37(N, IA64::PCMPEQUNCR0R0, IA64::ADDS, IA64::TPCADDS, IA64::TPCMPIMM8NE, MVT::i1, MVT::i64, MVT::i64, MVT::i1);
  return Result;
}

SDNode *Select_ISD_XOR_i64(const SDValue &N) {
  SDNode *Result = Emit_1(N, IA64::XOR, MVT::i64);
  return Result;
}

SDNode *Select_ISD_ZERO_EXTEND_i64(const SDValue &N) {
  SDNode *Result = Emit_12(N, IA64::ADDS, IA64::TPCADDIMM22, MVT::i64, MVT::i64);
  return Result;
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
  case IA64ISD::RET_FLAG: {
    switch (NVT) {
    default:
      return Select_IA64ISD_RET_FLAG(N);
      break;
    }
    break;
  }
  case ISD::ADD: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_ADD_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::AND: {
    switch (NVT) {
    case MVT::i1:
      return Select_ISD_AND_i1(N);
    case MVT::i64:
      return Select_ISD_AND_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ANY_EXTEND: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_ANY_EXTEND_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::CTPOP: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_CTPOP_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::Constant: {
    switch (NVT) {
    case MVT::i1:
      return Select_ISD_Constant_i1(N);
    case MVT::i64:
      return Select_ISD_Constant_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ConstantFP: {
    switch (NVT) {
    case MVT::f64:
      return Select_ISD_ConstantFP_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FABS: {
    switch (NVT) {
    case MVT::f64:
      return Select_ISD_FABS_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FADD: {
    switch (NVT) {
    case MVT::f64:
      return Select_ISD_FADD_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FMUL: {
    switch (NVT) {
    case MVT::f64:
      return Select_ISD_FMUL_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FNEG: {
    switch (NVT) {
    case MVT::f64:
      return Select_ISD_FNEG_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FP_TO_SINT: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_FP_TO_SINT_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FP_TO_UINT: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_FP_TO_UINT_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::FSUB: {
    switch (NVT) {
    case MVT::f64:
      return Select_ISD_FSUB_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::MUL: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_MUL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::MULHS: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_MULHS_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::MULHU: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_MULHU_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::OR: {
    switch (NVT) {
    case MVT::i1:
      return Select_ISD_OR_i1(N);
    case MVT::i64:
      return Select_ISD_OR_i64(N);
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
  case ISD::SELECT: {
    switch (NVT) {
    case MVT::i1:
      return Select_ISD_SELECT_i1(N);
    case MVT::i64:
      return Select_ISD_SELECT_i64(N);
    case MVT::f64:
      return Select_ISD_SELECT_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SETCC: {
    switch (NVT) {
    case MVT::i1:
      return Select_ISD_SETCC_i1(N);
    default:
      break;
    }
    break;
  }
  case ISD::SHL: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_SHL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SIGN_EXTEND_INREG: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_SIGN_EXTEND_INREG_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SINT_TO_FP: {
    switch (NVT) {
    case MVT::f64:
      return Select_ISD_SINT_TO_FP_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SRA: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_SRA_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SRL: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_SRL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUB: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_SUB_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::TRUNCATE: {
    switch (NVT) {
    case MVT::i1:
      return Select_ISD_TRUNCATE_i1(N);
    default:
      break;
    }
    break;
  }
  case ISD::UINT_TO_FP: {
    switch (NVT) {
    case MVT::f64:
      return Select_ISD_UINT_TO_FP_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::XOR: {
    switch (NVT) {
    case MVT::i1:
      return Select_ISD_XOR_i1(N);
    case MVT::i64:
      return Select_ISD_XOR_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ZERO_EXTEND: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_ZERO_EXTEND_i64(N);
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

