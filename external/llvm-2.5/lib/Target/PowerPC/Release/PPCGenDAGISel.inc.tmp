//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the PPC target
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
inline SDValue Transform_HA16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

}
inline SDValue Transform_HI16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

}
inline SDValue Transform_HI32_48(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned short)(N->getZExtValue() >> 32));

}
inline SDValue Transform_HI48_64(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned short)(N->getZExtValue() >> 48));

}
inline SDValue Transform_LO16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

}
inline SDValue Transform_MB(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

}
inline SDValue Transform_ME(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

}
inline SDValue Transform_SHL32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

}
inline SDValue Transform_SHL64(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

}
inline SDValue Transform_SRL32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

}
inline SDValue Transform_SRL64(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

}
inline SDValue Transform_VSLDOI_get_imm(SDNode *N) {

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

}
inline SDValue Transform_VSLDOI_unary_get_imm(SDNode *N) {

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

}
inline SDValue Transform_VSPLTB_get_imm(SDNode *N) {

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

}
inline SDValue Transform_VSPLTH_get_imm(SDNode *N) {

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

}
inline SDValue Transform_VSPLTISB_get_imm(SDNode *N) {

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

}
inline SDValue Transform_VSPLTISH_get_imm(SDNode *N) {

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

}
inline SDValue Transform_VSPLTISW_get_imm(SDNode *N) {

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

}
inline SDValue Transform_VSPLTW_get_imm(SDNode *N) {

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

}

// Predicate functions.
inline bool Predicate_VMRGHB_shuffle_mask(SDNode *N) {

  return PPC::isVMRGHShuffleMask(N, 1, false);

}
inline bool Predicate_VMRGHB_unary_shuffle_mask(SDNode *N) {

  return PPC::isVMRGHShuffleMask(N, 1, true);

}
inline bool Predicate_VMRGHH_shuffle_mask(SDNode *N) {

  return PPC::isVMRGHShuffleMask(N, 2, false);

}
inline bool Predicate_VMRGHH_unary_shuffle_mask(SDNode *N) {

  return PPC::isVMRGHShuffleMask(N, 2, true);

}
inline bool Predicate_VMRGHW_shuffle_mask(SDNode *N) {

  return PPC::isVMRGHShuffleMask(N, 4, false);

}
inline bool Predicate_VMRGHW_unary_shuffle_mask(SDNode *N) {

  return PPC::isVMRGHShuffleMask(N, 4, true);

}
inline bool Predicate_VMRGLB_shuffle_mask(SDNode *N) {

  return PPC::isVMRGLShuffleMask(N, 1, false);

}
inline bool Predicate_VMRGLB_unary_shuffle_mask(SDNode *N) {

  return PPC::isVMRGLShuffleMask(N, 1, true);

}
inline bool Predicate_VMRGLH_shuffle_mask(SDNode *N) {

  return PPC::isVMRGLShuffleMask(N, 2, false);

}
inline bool Predicate_VMRGLH_unary_shuffle_mask(SDNode *N) {

  return PPC::isVMRGLShuffleMask(N, 2, true);

}
inline bool Predicate_VMRGLW_shuffle_mask(SDNode *N) {

  return PPC::isVMRGLShuffleMask(N, 4, false);

}
inline bool Predicate_VMRGLW_unary_shuffle_mask(SDNode *N) {

  return PPC::isVMRGLShuffleMask(N, 4, true);

}
inline bool Predicate_VPKUHUM_shuffle_mask(SDNode *N) {

  return PPC::isVPKUHUMShuffleMask(N, false);

}
inline bool Predicate_VPKUHUM_unary_shuffle_mask(SDNode *N) {

  return PPC::isVPKUHUMShuffleMask(N, true);

}
inline bool Predicate_VPKUWUM_shuffle_mask(SDNode *N) {

  return PPC::isVPKUWUMShuffleMask(N, false);

}
inline bool Predicate_VPKUWUM_unary_shuffle_mask(SDNode *N) {

  return PPC::isVPKUWUMShuffleMask(N, true);

}
inline bool Predicate_VSLDOI_shuffle_mask(SDNode *N) {

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

}
inline bool Predicate_VSLDOI_unary_shuffle_mask(SDNode *N) {

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

}
inline bool Predicate_VSPLTB_shuffle_mask(SDNode *N) {

  return PPC::isSplatShuffleMask(N, 1);

}
inline bool Predicate_VSPLTH_shuffle_mask(SDNode *N) {

  return PPC::isSplatShuffleMask(N, 2);

}
inline bool Predicate_VSPLTW_shuffle_mask(SDNode *N) {

  return PPC::isSplatShuffleMask(N, 4);

}
inline bool Predicate_V_immneg0(SDNode *N) {

  return PPC::isAllNegativeZeroVector(N);

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
inline bool Predicate_imm16ShiftedSExt(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

}
inline bool Predicate_imm16ShiftedZExt(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

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

  // immSExt16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.  Used by instructions like 'addi'.
  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

}
inline bool Predicate_immZExt16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

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
inline bool Predicate_maskimm32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

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
inline bool Predicate_vecspltisb(SDNode *N) {

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

}
inline bool Predicate_vecspltish(SDNode *N) {

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

}
inline bool Predicate_vecspltisw(SDNode *N) {

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

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
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_HI16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_2(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N10);
}
SDNode *Emit_3(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_4(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_LO16(Tmp1.getNode());
  SDValue Tmp3(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp2), 0);
  SDValue Tmp4 = Transform_HA16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp3, Tmp4);
}
SDNode *Emit_5(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N00);
}
SDNode *Select_ISD_ADD_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);

      // Pattern: (add:i32 GPRC:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32))
      // Emits: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
      // Pattern complexity = 14  cost = 1  size = 0
      if (N1.getOpcode() == PPCISD::Lo) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::TargetGlobalAddress) {
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(0)) {
              SDNode *Result = Emit_2(N, PPC::LA, MVT::i32);
              return Result;
            }
          }
        }
      }
      if (N1.getOpcode() == PPCISD::Hi) {
        SDValue N10 = N1.getOperand(0);

        // Pattern: (add:i32 GPRC:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32))
        // Emits: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
        // Pattern complexity = 14  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetGlobalAddress) {
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(0)) {
              SDNode *Result = Emit_2(N, PPC::ADDIS, MVT::i32);
              return Result;
            }
          }
        }

        // Pattern: (add:i32 GPRC:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32))
        // Emits: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
        // Pattern complexity = 14  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetConstantPool) {
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(0)) {
              SDNode *Result = Emit_2(N, PPC::ADDIS, MVT::i32);
              return Result;
            }
          }
        }

        // Pattern: (add:i32 GPRC:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32))
        // Emits: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
        // Pattern complexity = 14  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetJumpTable) {
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(0)) {
              SDNode *Result = Emit_2(N, PPC::ADDIS, MVT::i32);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), GPRC:i32:$rA)
    // Emits: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
    // Pattern complexity = 14  cost = 1  size = 0
    if (N0.getOpcode() == PPCISD::Lo) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::TargetGlobalAddress) {
        SDValue N01 = N0.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_5(N, PPC::LA, MVT::i32);
            return Result;
          }
        }
      }
    }
    if (N0.getOpcode() == PPCISD::Hi) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), GPRC:i32:$in)
      // Emits: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
      // Pattern complexity = 14  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetGlobalAddress) {
        SDValue N01 = N0.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_5(N, PPC::ADDIS, MVT::i32);
            return Result;
          }
        }
      }

      // Pattern: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), GPRC:i32:$in)
      // Emits: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
      // Pattern complexity = 14  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetConstantPool) {
        SDValue N01 = N0.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_5(N, PPC::ADDIS, MVT::i32);
            return Result;
          }
        }
      }

      // Pattern: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), GPRC:i32:$in)
      // Emits: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
      // Pattern complexity = 14  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetJumpTable) {
        SDValue N01 = N0.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_5(N, PPC::ADDIS, MVT::i32);
            return Result;
          }
        }
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm)
      // Emits: (ADDI:i32 GPRC:i32:$rA, (imm:i32):$imm)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immSExt16(N1.getNode())) {
        SDNode *Result = Emit_0(N, PPC::ADDI, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm)
      // Emits: (ADDIS:i32 GPRC:i32:$rA, (HI16:i32 (imm:i32):$imm))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm16ShiftedSExt(N1.getNode())) {
        SDNode *Result = Emit_1(N, PPC::ADDIS, MVT::i32);
        return Result;
      }

      // Pattern: (add:i32 GPRC:i32:$in, (imm:i32):$imm)
      // Emits: (ADDIS:i32 (ADDI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
      // Pattern complexity = 6  cost = 2  size = 0
      SDNode *Result = Emit_4(N, PPC::ADDI, PPC::ADDIS, MVT::i32, MVT::i32);
      return Result;
    }
  }

  // Pattern: (add:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Emits: (ADD4:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::ADD4, MVT::i32);
  return Result;
}

SDNode *Emit_6(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_7(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_HI16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Select_ISD_ADD_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == PPCISD::Hi) {
        SDValue N10 = N1.getOperand(0);

        // Pattern: (add:i64 G8RC:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64))
        // Emits: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
        // Pattern complexity = 14  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetGlobalAddress) {
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(0)) {
              SDNode *Result = Emit_2(N, PPC::ADDIS8, MVT::i64);
              return Result;
            }
          }
        }

        // Pattern: (add:i64 G8RC:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64))
        // Emits: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
        // Pattern complexity = 14  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetConstantPool) {
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(0)) {
              SDNode *Result = Emit_2(N, PPC::ADDIS8, MVT::i64);
              return Result;
            }
          }
        }

        // Pattern: (add:i64 G8RC:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64))
        // Emits: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
        // Pattern complexity = 14  cost = 1  size = 0
        if (N10.getOpcode() == ISD::TargetJumpTable) {
          SDValue N11 = N1.getOperand(1);
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(0)) {
              SDNode *Result = Emit_2(N, PPC::ADDIS8, MVT::i64);
              return Result;
            }
          }
        }
      }
    }
    if (N0.getOpcode() == PPCISD::Hi) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), G8RC:i64:$in)
      // Emits: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
      // Pattern complexity = 14  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetGlobalAddress) {
        SDValue N01 = N0.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_5(N, PPC::ADDIS8, MVT::i64);
            return Result;
          }
        }
      }

      // Pattern: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), G8RC:i64:$in)
      // Emits: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
      // Pattern complexity = 14  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetConstantPool) {
        SDValue N01 = N0.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_5(N, PPC::ADDIS8, MVT::i64);
            return Result;
          }
        }
      }

      // Pattern: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), G8RC:i64:$in)
      // Emits: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
      // Pattern complexity = 14  cost = 1  size = 0
      if (N00.getOpcode() == ISD::TargetJumpTable) {
        SDValue N01 = N0.getOperand(1);
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
        if (Tmp0) {
          int64_t CN1 = Tmp0->getSExtValue();
          if (CN1 == INT64_C(0)) {
            SDNode *Result = Emit_5(N, PPC::ADDIS8, MVT::i64);
            return Result;
          }
        }
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm)
      // Emits: (ADDI8:i64 G8RC:i64:$rA, (imm:i64):$imm)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immSExt16(N1.getNode())) {
        SDNode *Result = Emit_6(N, PPC::ADDI8, MVT::i64);
        return Result;
      }

      // Pattern: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm)
      // Emits: (ADDIS8:i64 G8RC:i64:$rA, (HI16:i64 (imm:i64):$imm))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm16ShiftedSExt(N1.getNode())) {
        SDNode *Result = Emit_7(N, PPC::ADDIS8, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (add:i64 G8RC:i64:$rA, G8RC:i64:$rB)
  // Emits: (ADD8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::ADD8, MVT::i64);
  return Result;
}

SDNode *Select_ISD_ADD_v16i8(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::VADDUBM, MVT::v16i8);
  return Result;
}

SDNode *Select_ISD_ADD_v8i16(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::VADDUHM, MVT::v8i16);
  return Result;
}

SDNode *Select_ISD_ADD_v4i32(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::VADDUWM, MVT::v4i32);
  return Result;
}

SDNode *Emit_8(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, Tmp1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_9(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDC_i32(const SDValue &N) {

  // Pattern: (addc:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm)
  // Emits: (ADDIC:i32 GPRC:i32:$rA, (imm:i32):$imm)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immSExt16(N1.getNode())) {
      SDNode *Result = Emit_8(N, PPC::ADDIC, MVT::i32);
      return Result;
    }
  }

  // Pattern: (addc:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Emits: (ADDC:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_9(N, PPC::ADDC, MVT::i32);
  return Result;
}

SDNode *Select_ISD_ADDC_i64(const SDValue &N) {
  SDNode *Result = Emit_9(N, PPC::ADDC8, MVT::i64);
  return Result;
}

SDNode *Emit_10(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, N1, InFlag);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_11(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, InFlag);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_ADDE_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (adde:i32 GPRC:i32:$rA, 0:i32)
    // Emits: (ADDZE:i32 GPRC:i32:$rA)
    // Pattern complexity = 8  cost = 1  size = 0
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_11(N, PPC::ADDZE, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (adde:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immAllOnes>>)
    // Emits: (ADDME:i32 GPRC:i32:$rA)
    // Pattern complexity = 7  cost = 1  size = 0
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immAllOnes(N1.getNode())) {
      SDNode *Result = Emit_11(N, PPC::ADDME, MVT::i32);
      return Result;
    }
  }

  // Pattern: (adde:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Emits: (ADDE:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_10(N, PPC::ADDE, MVT::i32);
  return Result;
}

SDNode *Select_ISD_ADDE_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);

    // Pattern: (adde:i64 G8RC:i64:$rA, 0:i64)
    // Emits: (ADDZE8:i64 G8RC:i64:$rA)
    // Pattern complexity = 8  cost = 1  size = 0
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_11(N, PPC::ADDZE8, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (adde:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immAllOnes>>)
    // Emits: (ADDME8:i64 G8RC:i64:$rA)
    // Pattern complexity = 7  cost = 1  size = 0
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immAllOnes(N1.getNode())) {
      SDNode *Result = Emit_11(N, PPC::ADDME8, MVT::i64);
      return Result;
    }
  }

  // Pattern: (adde:i64 G8RC:i64:$rA, G8RC:i64:$rB)
  // Emits: (ADDE8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_10(N, PPC::ADDE8, MVT::i64);
  return Result;
}

SDNode *Emit_12(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_LO16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_13(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp3 = Transform_MB(Tmp2.getNode());
  SDValue Tmp4 = Transform_ME(Tmp2.getNode());
  SDValue Ops0[] = { N00, N01, Tmp3, Tmp4 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_ISD_AND_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, (imm:i32)<<P:Predicate_immAllOnes>>))
    // Emits: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_2(N, PPC::ANDC, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (and:i32 (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm)
    // Emits: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::ROTL) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_maskimm32(N1.getNode()) &&
          N01.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_13(N, PPC::RLWNM, MVT::i32);
        return Result;
      }
    }

    // Pattern: (and:i32 (xor:i32 GPRC:i32:$rB, (imm:i32)<<P:Predicate_immAllOnes>>), GPRC:i32:$rS)
    // Emits: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_5(N, PPC::ANDC, MVT::i32);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2)
      // Emits: (ANDIo:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immZExt16(N1.getNode())) {
        SDNode *Result = Emit_12(N, PPC::ANDIo, MVT::i32);
        return Result;
      }

      // Pattern: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2)
      // Emits: (ANDISo:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm16ShiftedZExt(N1.getNode())) {
        SDNode *Result = Emit_1(N, PPC::ANDISo, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (and:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Emits: (AND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::AND, MVT::i32);
  return Result;
}

SDNode *Emit_14(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_LO16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Select_ISD_AND_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, (imm:i64)<<P:Predicate_immAllOnes>>))
    // Emits: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_2(N, PPC::ANDC8, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (and:i64 (xor:i64 G8RC:i64:$rB, (imm:i64)<<P:Predicate_immAllOnes>>), G8RC:i64:$rS)
    // Emits: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_5(N, PPC::ANDC8, MVT::i64);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2)
      // Emits: (ANDIo8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immZExt16(N1.getNode())) {
        SDNode *Result = Emit_14(N, PPC::ANDIo8, MVT::i64);
        return Result;
      }

      // Pattern: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2)
      // Emits: (ANDISo8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm16ShiftedZExt(N1.getNode())) {
        SDNode *Result = Emit_7(N, PPC::ANDISo8, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (and:i64 G8RC:i64:$rS, G8RC:i64:$rB)
  // Emits: (AND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::AND8, MVT::i64);
  return Result;
}

SDNode *Emit_15(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N11);
}
SDNode *Emit_16(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N01);
}
SDNode *Select_ISD_AND_v4i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        {
          SDValue N11 = N1.getOperand(1);

          // Pattern: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 VRRC:v4i32:$vB, (build_vector:v4i32)<<P:Predicate_immAllOnesV>>))
          // Emits: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
          // Pattern complexity = 10  cost = 1  size = 0
          if (N11.getOpcode() == ISD::BUILD_VECTOR &&
              Predicate_immAllOnesV(N11.getNode())) {
            SDNode *Result = Emit_2(N, PPC::VANDC, MVT::v4i32);
            return Result;
          }

          // Pattern: (and:v4i32 VRRC:v4i32:$A, (xor:v4i32 VRRC:v4i32:$B, (bitconvert:v4i32)<<P:Predicate_immAllOnesV_bc>>))
          // Emits: (VANDC:v4i32 VRRC:v16i8:$A, VRRC:v16i8:$B)
          // Pattern complexity = 10  cost = 1  size = 0
          if (N11.getOpcode() == ISD::BIT_CONVERT &&
              Predicate_immAllOnesV_bc(N11.getNode())) {
            SDNode *Result = Emit_2(N, PPC::VANDC, MVT::v4i32);
            return Result;
          }
        }

        // Pattern: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 (build_vector:v4i32)<<P:Predicate_immAllOnesV>>, VRRC:v4i32:$vB))
        // Emits: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
        // Pattern complexity = 10  cost = 1  size = 0
        if (N10.getOpcode() == ISD::BUILD_VECTOR &&
            Predicate_immAllOnesV(N10.getNode())) {
          SDNode *Result = Emit_15(N, PPC::VANDC, MVT::v4i32);
          return Result;
        }
      }
    }
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (and:v4i32 (xor:v4i32 VRRC:v4i32:$vB, (build_vector:v4i32)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vA)
      // Emits: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
      // Pattern complexity = 10  cost = 1  size = 0
      {
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::BUILD_VECTOR &&
            Predicate_immAllOnesV(N01.getNode())) {
          SDNode *Result = Emit_5(N, PPC::VANDC, MVT::v4i32);
          return Result;
        }
      }

      // Pattern: (and:v4i32 (xor:v4i32 (build_vector:v4i32)<<P:Predicate_immAllOnesV>>, VRRC:v4i32:$vB), VRRC:v4i32:$vA)
      // Emits: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N00.getOpcode() == ISD::BUILD_VECTOR &&
          Predicate_immAllOnesV(N00.getNode())) {
        SDNode *Result = Emit_16(N, PPC::VANDC, MVT::v4i32);
        return Result;
      }
    }

    // Pattern: (and:v4i32 VRRC:v4i32:$A, (xor:v4i32 (bitconvert:v4i32)<<P:Predicate_immAllOnesV_bc>>, VRRC:v4i32:$B))
    // Emits: (VANDC:v4i32 VRRC:v16i8:$A, VRRC:v16i8:$B)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::BIT_CONVERT &&
            Predicate_immAllOnesV_bc(N10.getNode())) {
          SDNode *Result = Emit_15(N, PPC::VANDC, MVT::v4i32);
          return Result;
        }
      }
    }
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);

      // Pattern: (and:v4i32 (xor:v4i32 VRRC:v4i32:$B, (bitconvert:v4i32)<<P:Predicate_immAllOnesV_bc>>), VRRC:v4i32:$A)
      // Emits: (VANDC:v4i32 VRRC:v16i8:$A, VRRC:v16i8:$B)
      // Pattern complexity = 10  cost = 1  size = 0
      {
        SDValue N01 = N0.getOperand(1);
        if (N01.getOpcode() == ISD::BIT_CONVERT &&
            Predicate_immAllOnesV_bc(N01.getNode())) {
          SDNode *Result = Emit_5(N, PPC::VANDC, MVT::v4i32);
          return Result;
        }
      }

      // Pattern: (and:v4i32 (xor:v4i32 (bitconvert:v4i32)<<P:Predicate_immAllOnesV_bc>>, VRRC:v4i32:$B), VRRC:v4i32:$A)
      // Emits: (VANDC:v4i32 VRRC:v16i8:$A, VRRC:v16i8:$B)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N00.getOpcode() == ISD::BIT_CONVERT &&
          Predicate_immAllOnesV_bc(N00.getNode())) {
        SDNode *Result = Emit_16(N, PPC::VANDC, MVT::v4i32);
        return Result;
      }
    }
  }

  // Pattern: (and:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
  // Emits: (VAND:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::VAND, MVT::v4i32);
  return Result;
}

SDNode *Emit_17(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N0);
}
SDNode *Select_ISD_ANY_EXTEND_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_17(N, PPC::OR4To8, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_18(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, N2, N3, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 6);
}
SDNode *Select_ISD_ATOMIC_CMP_SWAP_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_8>>
  // Emits: (ATOMIC_CMP_SWAP_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_cmp_swap_8(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_18(N, PPC::ATOMIC_CMP_SWAP_I8, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_16>>
  // Emits: (ATOMIC_CMP_SWAP_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_cmp_swap_16(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_18(N, PPC::ATOMIC_CMP_SWAP_I16, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_32>>
  // Emits: (ATOMIC_CMP_SWAP_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_cmp_swap_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_18(N, PPC::ATOMIC_CMP_SWAP_I32, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_CMP_SWAP_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_atomic_cmp_swap_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_18(N, PPC::ATOMIC_CMP_SWAP_I64, MVT::i64, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_19(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, N2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_ATOMIC_LOAD_ADD_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_8>>
  // Emits: (ATOMIC_LOAD_ADD_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_add_8(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_ADD_I8, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_16>>
  // Emits: (ATOMIC_LOAD_ADD_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_add_16(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_ADD_I16, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_32>>
  // Emits: (ATOMIC_LOAD_ADD_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_add_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_ADD_I32, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_ADD_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_atomic_load_add_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_ADD_I64, MVT::i64, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_AND_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_8>>
  // Emits: (ATOMIC_LOAD_AND_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_and_8(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_AND_I8, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_16>>
  // Emits: (ATOMIC_LOAD_AND_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_and_16(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_AND_I16, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_32>>
  // Emits: (ATOMIC_LOAD_AND_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_and_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_AND_I32, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_AND_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_atomic_load_and_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_AND_I64, MVT::i64, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_NAND_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_8>>
  // Emits: (ATOMIC_LOAD_NAND_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_nand_8(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_NAND_I8, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_16>>
  // Emits: (ATOMIC_LOAD_NAND_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_nand_16(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_NAND_I16, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_32>>
  // Emits: (ATOMIC_LOAD_NAND_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_nand_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_NAND_I32, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_NAND_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_atomic_load_nand_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_NAND_I64, MVT::i64, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_OR_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_8>>
  // Emits: (ATOMIC_LOAD_OR_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_or_8(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_OR_I8, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_16>>
  // Emits: (ATOMIC_LOAD_OR_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_or_16(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_OR_I16, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_32>>
  // Emits: (ATOMIC_LOAD_OR_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_or_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_OR_I32, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_OR_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_atomic_load_or_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_OR_I64, MVT::i64, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_SUB_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_8>>
  // Emits: (ATOMIC_LOAD_SUB_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_sub_8(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_SUB_I8, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_16>>
  // Emits: (ATOMIC_LOAD_SUB_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_sub_16(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_SUB_I16, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_32>>
  // Emits: (ATOMIC_LOAD_SUB_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_sub_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_SUB_I32, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_SUB_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_atomic_load_sub_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_SUB_I64, MVT::i64, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_XOR_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_8>>
  // Emits: (ATOMIC_LOAD_XOR_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_xor_8(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_XOR_I8, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_16>>
  // Emits: (ATOMIC_LOAD_XOR_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_xor_16(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_XOR_I16, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_32>>
  // Emits: (ATOMIC_LOAD_XOR_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_load_xor_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_XOR_I32, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_LOAD_XOR_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_atomic_load_xor_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_LOAD_XOR_I64, MVT::i64, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_SWAP_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_8>>
  // Emits: (ATOMIC_SWAP_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_swap_8(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_SWAP_I8, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_16>>
  // Emits: (ATOMIC_SWAP_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_swap_16(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_SWAP_I16, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  // Pattern: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_32>>
  // Emits: (ATOMIC_SWAP_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
  // Pattern complexity = 13  cost = 11  size = 0
  if (Predicate_atomic_swap_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_SWAP_I32, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_SWAP_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_atomic_swap_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_19(N, PPC::ATOMIC_SWAP_I64, MVT::i64, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_20(const SDValue &N) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  ReplaceUses(N, N0);
  return NULL;
}
SDNode *Select_ISD_BIT_CONVERT_v16i8(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (bitconvert:v16i8 VRRC:v8i16:$src)
  // Emits: VRRC:v16i8:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v8i16) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  // Pattern: (bitconvert:v16i8 VRRC:v4i32:$src)
  // Emits: VRRC:v16i8:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v4i32) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  // Pattern: (bitconvert:v16i8 VRRC:v4f32:$src)
  // Emits: VRRC:v16i8:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v4f32) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BIT_CONVERT_v8i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (bitconvert:v8i16 VRRC:v16i8:$src)
  // Emits: VRRC:v8i16:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v16i8) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  // Pattern: (bitconvert:v8i16 VRRC:v4i32:$src)
  // Emits: VRRC:v8i16:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v4i32) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  // Pattern: (bitconvert:v8i16 VRRC:v4f32:$src)
  // Emits: VRRC:v8i16:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v4f32) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BIT_CONVERT_v4i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (bitconvert:v4i32 VRRC:v16i8:$src)
  // Emits: VRRC:v4i32:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v16i8) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  // Pattern: (bitconvert:v4i32 VRRC:v8i16:$src)
  // Emits: VRRC:v4i32:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v8i16) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  // Pattern: (bitconvert:v4i32 VRRC:v4f32:$src)
  // Emits: VRRC:v4i32:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v4f32) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BIT_CONVERT_v4f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (bitconvert:v4f32 VRRC:v16i8:$src)
  // Emits: VRRC:v4f32:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v16i8) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  // Pattern: (bitconvert:v4f32 VRRC:v8i16:$src)
  // Emits: VRRC:v4f32:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v8i16) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  // Pattern: (bitconvert:v4f32 VRRC:v4i32:$src)
  // Emits: VRRC:v4f32:$src
  // Pattern complexity = 3  cost = 0  size = 0
  if (N0.getNode()->getValueType(0) == MVT::v4i32) {
    SDNode *Result = Emit_20(N);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_21(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain);
}
SDNode *Select_ISD_BR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_21(N, PPC::B);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_22(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp1 = Transform_VSPLTISB_get_imm(N.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Select_ISD_BUILD_VECTOR_v16i8(const SDValue &N) {
  if (Predicate_vecspltisb(N.getNode())) {
    SDNode *Result = Emit_22(N, PPC::VSPLTISB, MVT::v16i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_23(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp1 = Transform_VSPLTISH_get_imm(N.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Select_ISD_BUILD_VECTOR_v8i16(const SDValue &N) {
  if (Predicate_vecspltish(N.getNode())) {
    SDNode *Result = Emit_23(N, PPC::VSPLTISH, MVT::v8i16);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_24(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp1 = Transform_VSPLTISW_get_imm(N.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Emit_25(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0);
}
SDNode *Select_ISD_BUILD_VECTOR_v4i32(const SDValue &N) {

  // Pattern: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM
  // Emits: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_vecspltisw(N.getNode())) {
    SDNode *Result = Emit_24(N, PPC::VSPLTISW, MVT::v4i32);
    return Result;
  }

  // Pattern: (build_vector:v4i32)<<P:Predicate_immAllZerosV>>
  // Emits: (V_SET0:v4i32)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immAllZerosV(N.getNode())) {
    SDNode *Result = Emit_25(N, PPC::V_SET0, MVT::v4i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_26(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
      SDNode *Result = Emit_26(N, PPC::ADJCALLSTACKUP);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_27(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
    SDNode *Result = Emit_27(N, PPC::ADJCALLSTACKDOWN);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_28(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_CTLZ_i32(const SDValue &N) {
  SDNode *Result = Emit_28(N, PPC::CNTLZW, MVT::i32);
  return Result;
}

SDNode *Select_ISD_CTLZ_i64(const SDValue &N) {
  SDNode *Result = Emit_28(N, PPC::CNTLZD, MVT::i64);
  return Result;
}

SDNode *Emit_29(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Emit_30(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = Transform_HI16(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Emit_31(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = Transform_HI16(Tmp0.getNode());
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp1), 0);
  SDValue Tmp3 = Transform_LO16(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Select_ISD_Constant_i32(const SDValue &N) {

  // Pattern: (imm:i32)<<P:Predicate_immSExt16>>:$imm
  // Emits: (LI:i32 (imm:i32):$imm)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immSExt16(N.getNode())) {
    SDNode *Result = Emit_29(N, PPC::LI, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm
  // Emits: (LIS:i32 (HI16:i32 (imm:i32):$imm))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_imm16ShiftedSExt(N.getNode())) {
    SDNode *Result = Emit_30(N, PPC::LIS, MVT::i32);
    return Result;
  }

  // Pattern: (imm:i32):$imm
  // Emits: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
  // Pattern complexity = 3  cost = 2  size = 0
  SDNode *Result = Emit_31(N, PPC::LIS, PPC::ORI, MVT::i32, MVT::i32);
  return Result;
}

SDNode *Emit_32(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Emit_33(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_HI16(Tmp0.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1);
}
SDNode *Select_ISD_Constant_i64(const SDValue &N) {

  // Pattern: (imm:i64)<<P:Predicate_immSExt16>>:$imm
  // Emits: (LI8:i64 (imm:i64):$imm)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immSExt16(N.getNode())) {
    SDNode *Result = Emit_32(N, PPC::LI8, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm
  // Emits: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_imm16ShiftedSExt(N.getNode())) {
    SDNode *Result = Emit_33(N, PPC::LIS8, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_34(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
      if (N3.getOpcode() == ISD::Constant &&
          N1.getNode()->getValueType(0) == MVT::i32 &&
          N2.getNode()->getValueType(0) == MVT::i32 &&
          N3.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_34(N, PPC::DWARF_LOC);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FABS_f32(const SDValue &N) {
  SDNode *Result = Emit_28(N, PPC::FABSS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FABS_f64(const SDValue &N) {
  SDNode *Result = Emit_28(N, PPC::FABSD, MVT::f64);
  return Result;
}

SDNode *Emit_35(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N01, N1);
}
SDNode *Emit_36(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, N11, N0);
}
SDNode *Select_ISD_FADD_f32(const SDValue &N) {
  if ((!NoExcessFPPrecision)) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fadd:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB)
    // Emits: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_35(N, PPC::FMADDS, MVT::f32);
      return Result;
    }

    // Pattern: (fadd:f32 F4RC:f32:$FRB, (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC))
    // Emits: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_36(N, PPC::FMADDS, MVT::f32);
      return Result;
    }
  }

  // Pattern: (fadd:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
  // Emits: (FADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::FADDS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FADD_f64(const SDValue &N) {
  if ((!NoExcessFPPrecision)) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fadd:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB)
    // Emits: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_35(N, PPC::FMADD, MVT::f64);
      return Result;
    }

    // Pattern: (fadd:f64 F8RC:f64:$FRB, (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC))
    // Emits: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_36(N, PPC::FMADD, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fadd:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
  // Emits: (FADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::FADD, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FADD_v4f32(const SDValue &N) {
  if ((!NoExcessFPPrecision)) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fadd:v4f32 (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC), VRRC:v4f32:$vB)
    // Emits: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_35(N, PPC::VMADDFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (fadd:v4f32 VRRC:v4f32:$vB, (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC))
    // Emits: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_36(N, PPC::VMADDFP, MVT::v4f32);
      return Result;
    }
  }

  // Pattern: (fadd:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
  // Emits: (VADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::VADDFP, MVT::v4f32);
  return Result;
}

SDNode *Select_ISD_FDIV_f32(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::FDIVS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FDIV_f64(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::FDIV, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FMUL_f32(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::FMULS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FMUL_f64(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::FMUL, MVT::f64);
  return Result;
}

SDNode *Emit_37(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, N0, N1, Tmp2);
}
SDNode *Select_ISD_FMUL_v4f32(const SDValue &N) {
  SDNode *Result = Emit_37(N, PPC::V_SET0, PPC::VMADDFP, MVT::v4i32, MVT::v4f32);
  return Result;
}

SDNode *Emit_38(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00);
}
SDNode *Emit_39(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000, N001, N01);
}
SDNode *Emit_40(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N010, N011, N00);
}
SDNode *Select_ISD_FNEG_f32(const SDValue &N) {
  if ((!NoExcessFPPrecision)) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fneg:f32 (fadd:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB))
    // Emits: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
    // Pattern complexity = 9  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FADD) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_39(N, PPC::FNMADDS, MVT::f32);
        return Result;
      }
    }

    // Pattern: (fneg:f32 (fsub:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB))
    // Emits: (FNMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
    // Pattern complexity = 9  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FSUB) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_39(N, PPC::FNMSUBS, MVT::f32);
        return Result;
      }
    }

    // Pattern: (fneg:f32 (fadd:f32 F4RC:f32:$FRB, (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC)))
    // Emits: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
    // Pattern complexity = 9  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FADD) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_40(N, PPC::FNMADDS, MVT::f32);
        return Result;
      }
    }
  }

  // Pattern: (fneg:f32 (fabs:f32 F4RC:f32:$frB))
  // Emits: (FNABSS:f32 F4RC:f32:$frB)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FABS) {
      SDNode *Result = Emit_38(N, PPC::FNABSS, MVT::f32);
      return Result;
    }
  }

  // Pattern: (fneg:f32 F4RC:f32:$frB)
  // Emits: (FNEGS:f32 F4RC:f32:$frB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_28(N, PPC::FNEGS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FNEG_f64(const SDValue &N) {
  if ((!NoExcessFPPrecision)) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fneg:f64 (fadd:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB))
    // Emits: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
    // Pattern complexity = 9  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FADD) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_39(N, PPC::FNMADD, MVT::f64);
        return Result;
      }
    }

    // Pattern: (fneg:f64 (fsub:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB))
    // Emits: (FNMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
    // Pattern complexity = 9  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FSUB) {
      SDValue N00 = N0.getOperand(0);
      if (N00.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_39(N, PPC::FNMSUB, MVT::f64);
        return Result;
      }
    }

    // Pattern: (fneg:f64 (fadd:f64 F8RC:f64:$FRB, (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC)))
    // Emits: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
    // Pattern complexity = 9  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FADD) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::FMUL) {
        SDNode *Result = Emit_40(N, PPC::FNMADD, MVT::f64);
        return Result;
      }
    }
  }

  // Pattern: (fneg:f64 (fabs:f64 F8RC:f64:$frB))
  // Emits: (FNABSD:f64 F8RC:f64:$frB)
  // Pattern complexity = 6  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FABS) {
      SDNode *Result = Emit_38(N, PPC::FNABSD, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fneg:f64 F8RC:f64:$frB)
  // Emits: (FNEGD:f64 F8RC:f64:$frB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_28(N, PPC::FNEGD, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FP_EXTEND_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::f32) {
    SDNode *Result = Emit_28(N, PPC::FMRSD, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FP_ROUND_f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_28(N, PPC::FRSP, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FSQRT_f32(const SDValue &N) {
  SDNode *Result = Emit_28(N, PPC::FSQRTS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FSQRT_f64(const SDValue &N) {
  SDNode *Result = Emit_28(N, PPC::FSQRT, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FSUB_f32(const SDValue &N) {
  if ((!NoExcessFPPrecision)) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fsub:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB)
    // Emits: (FMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_35(N, PPC::FMSUBS, MVT::f32);
      return Result;
    }

    // Pattern: (fsub:f32 F4RC:f32:$B, (fmul:f32 F4RC:f32:$A, F4RC:f32:$C))
    // Emits: (FNMSUBS:f32 F4RC:f32:$A, F4RC:f32:$C, F4RC:f32:$B)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_36(N, PPC::FNMSUBS, MVT::f32);
      return Result;
    }
  }

  // Pattern: (fsub:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
  // Emits: (FSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::FSUBS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FSUB_f64(const SDValue &N) {
  if ((!NoExcessFPPrecision)) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (fsub:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB)
    // Emits: (FMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N0.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_35(N, PPC::FMSUB, MVT::f64);
      return Result;
    }

    // Pattern: (fsub:f64 F8RC:f64:$B, (fmul:f64 F8RC:f64:$A, F8RC:f64:$C))
    // Emits: (FNMSUB:f64 F8RC:f64:$A, F8RC:f64:$C, F8RC:f64:$B)
    // Pattern complexity = 6  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::FMUL) {
      SDNode *Result = Emit_36(N, PPC::FNMSUB, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fsub:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
  // Emits: (FSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::FSUB, MVT::f64);
  return Result;
}

SDNode *Emit_41(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N100 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N100, N101, N11);
}
SDNode *Select_ISD_FSUB_v4f32(const SDValue &N) {

  // Pattern: (fsub:v4f32 (build_vector:v4f32)<<P:Predicate_V_immneg0>>, (fsub:v4f32 (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC), VRRC:v4f32:$vB))
  // Emits: (VNMSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
  // Pattern complexity = 13  cost = 1  size = 0
  if ((!NoExcessFPPrecision)) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::BUILD_VECTOR &&
        Predicate_V_immneg0(N0.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::FSUB) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::FMUL) {
          SDNode *Result = Emit_41(N, PPC::VNMSUBFP, MVT::v4f32);
          return Result;
        }
      }
    }
  }

  // Pattern: (fsub:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
  // Emits: (VSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::VSUBFP, MVT::v4f32);
  return Result;
}

SDNode *Emit_42(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, CPTmpN2_0, CPTmpN2_1, Chain);
}
SDNode *Emit_43(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Chain);
}
SDNode *Emit_44(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N2, Chain);
}
SDNode *Emit_45(const SDValue &N, unsigned Opc0, SDValue &CPTmpN3_0, SDValue &CPTmpN3_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue Ops0[] = { N2, CPTmpN3_0, CPTmpN3_1, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_46(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Ops0[] = { Tmp2, Tmp3, Tmp4, Tmp5, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_47(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  SDValue Tmp4 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp5 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Ops0[] = { Tmp2, Tmp3, Tmp4, Tmp5, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_48(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N4)->getZExtValue()), MVT::i32);
  SDValue Ops0[] = { Tmp2, Tmp3, N2, N3, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_49(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N4)->getZExtValue()), MVT::i32);
  SDValue Ops0[] = { Tmp2, Tmp3, N2, N3, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_INTRINSIC_VOID(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (intrinsic_void:isVoid 212:iPTR, xoaddr:iPTR:$dst)
    // Emits: (DCBA:isVoid xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(212)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_42(N, PPC::DCBA, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 213:iPTR, xoaddr:iPTR:$dst)
    // Emits: (DCBF:isVoid xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(213)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_42(N, PPC::DCBF, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 214:iPTR, xoaddr:iPTR:$dst)
    // Emits: (DCBI:isVoid xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(214)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_42(N, PPC::DCBI, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 215:iPTR, xoaddr:iPTR:$dst)
    // Emits: (DCBST:isVoid xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(215)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_42(N, PPC::DCBST, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 216:iPTR, xoaddr:iPTR:$dst)
    // Emits: (DCBT:isVoid xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(216)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_42(N, PPC::DCBT, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 217:iPTR, xoaddr:iPTR:$dst)
    // Emits: (DCBTST:isVoid xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(217)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_42(N, PPC::DCBTST, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 218:iPTR, xoaddr:iPTR:$dst)
    // Emits: (DCBZ:isVoid xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(218)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_42(N, PPC::DCBZ, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 219:iPTR, xoaddr:iPTR:$dst)
    // Emits: (DCBZL:isVoid xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(219)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_42(N, PPC::DCBZL, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 80:iPTR, VRRC:v16i8:$rS, xoaddr:iPTR:$dst)
    // Emits: (STVEBX:isVoid VRRC:v16i8:$rS, xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(80)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue CPTmpN3_0;
      SDValue CPTmpN3_1;
      if (SelectAddrIdxOnly(N, N3, CPTmpN3_0, CPTmpN3_1)) {
        SDNode *Result = Emit_45(N, PPC::STVEBX, CPTmpN3_0, CPTmpN3_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 81:iPTR, VRRC:v8i16:$rS, xoaddr:iPTR:$dst)
    // Emits: (STVEHX:isVoid VRRC:v8i16:$rS, xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(81)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue CPTmpN3_0;
      SDValue CPTmpN3_1;
      if (SelectAddrIdxOnly(N, N3, CPTmpN3_0, CPTmpN3_1)) {
        SDNode *Result = Emit_45(N, PPC::STVEHX, CPTmpN3_0, CPTmpN3_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 82:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
    // Emits: (STVEWX:isVoid VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(82)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue CPTmpN3_0;
      SDValue CPTmpN3_1;
      if (SelectAddrIdxOnly(N, N3, CPTmpN3_0, CPTmpN3_1)) {
        SDNode *Result = Emit_45(N, PPC::STVEWX, CPTmpN3_0, CPTmpN3_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 83:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
    // Emits: (STVX:isVoid VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(83)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue CPTmpN3_0;
      SDValue CPTmpN3_1;
      if (SelectAddrIdxOnly(N, N3, CPTmpN3_0, CPTmpN3_1)) {
        SDNode *Result = Emit_45(N, PPC::STVX, CPTmpN3_0, CPTmpN3_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 84:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
    // Emits: (STVXL:isVoid VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(84)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue CPTmpN3_0;
      SDValue CPTmpN3_1;
      if (SelectAddrIdxOnly(N, N3, CPTmpN3_0, CPTmpN3_1)) {
        SDNode *Result = Emit_45(N, PPC::STVXL, CPTmpN3_0, CPTmpN3_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 65:iPTR, (imm:i32):$STRM)
    // Emits: (DSS:isVoid 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(65)) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_47(N, PPC::DSS);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 67:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM)
    // Emits: (DST:isVoid 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(67)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_48(N, PPC::DST);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 70:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM)
    // Emits: (DSTT:isVoid 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(70)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_49(N, PPC::DSTT);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 68:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM)
    // Emits: (DSTST:isVoid 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(68)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_48(N, PPC::DSTST);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 69:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM)
    // Emits: (DSTSTT:isVoid 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(69)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant &&
          N2.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_49(N, PPC::DSTSTT);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 67:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM)
    // Emits: (DST64:isVoid 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(67)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_48(N, PPC::DST64);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 70:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM)
    // Emits: (DSTT64:isVoid 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(70)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_49(N, PPC::DSTT64);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 68:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM)
    // Emits: (DSTST64:isVoid 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(68)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_48(N, PPC::DSTST64);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 69:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM)
    // Emits: (DSTSTT64:isVoid 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(69)) {
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_49(N, PPC::DSTSTT64);
        return Result;
      }
    }

    // Pattern: (intrinsic_void:isVoid 220:iPTR)
    // Emits: (SYNC:isVoid)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(220)) {
      SDNode *Result = Emit_43(N, PPC::SYNC);
      return Result;
    }

    // Pattern: (intrinsic_void:isVoid 79:iPTR, VRRC:v4i32:$vB)
    // Emits: (MTVSCR:isVoid VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(79)) {
      SDNode *Result = Emit_44(N, PPC::MTVSCR);
      return Result;
    }

    // Pattern: (intrinsic_void:isVoid 66:iPTR)
    // Emits: (DSSALL:isVoid 1:i32, 0:i32, 0:i32, 0:i32)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(66)) {
      SDNode *Result = Emit_46(N, PPC::DSSALL);
      return Result;
    }
  }

  CannotYetSelectIntrinsic(N);
  return NULL;
}

SDNode *Emit_50(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, CPTmpN1_0, CPTmpN1_1);
}
SDNode *Emit_51(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N2);
}
SDNode *Select_ISD_INTRINSIC_WO_CHAIN_v16i8(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (intrinsic_wo_chain:v16i8 74:iPTR, xoaddr:iPTR:$src)
    // Emits: (LVSL:v16i8 xoaddr:iPTR:$src)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(74)) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_50(N, PPC::LVSL, MVT::v16i8, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_wo_chain:v16i8 75:iPTR, xoaddr:iPTR:$src)
    // Emits: (LVSR:v16i8 xoaddr:iPTR:$src)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(75)) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_50(N, PPC::LVSR, MVT::v16i8, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_wo_chain:v16i8 86:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VADDSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(86)) {
      SDNode *Result = Emit_51(N, PPC::VADDSBS, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 89:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VADDUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(89)) {
      SDNode *Result = Emit_51(N, PPC::VADDUBS, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 92:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VAVGSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(92)) {
      SDNode *Result = Emit_51(N, PPC::VAVGSB, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 95:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VAVGUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(95)) {
      SDNode *Result = Emit_51(N, PPC::VAVGUB, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 132:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VMAXSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(132)) {
      SDNode *Result = Emit_51(N, PPC::VMAXSB, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 135:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VMAXUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(135)) {
      SDNode *Result = Emit_51(N, PPC::VMAXUB, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 141:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VMINSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(141)) {
      SDNode *Result = Emit_51(N, PPC::VMINSB, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 144:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VMINUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(144)) {
      SDNode *Result = Emit_51(N, PPC::VMINUB, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 195:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VSUBSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(195)) {
      SDNode *Result = Emit_51(N, PPC::VSUBSBS, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 198:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VSUBUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(198)) {
      SDNode *Result = Emit_51(N, PPC::VSUBUBS, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 176:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VRLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(176)) {
      SDNode *Result = Emit_51(N, PPC::VRLB, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 182:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(182)) {
      SDNode *Result = Emit_51(N, PPC::VSLB, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 187:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(187)) {
      SDNode *Result = Emit_51(N, PPC::VSRAB, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 190:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(190)) {
      SDNode *Result = Emit_51(N, PPC::VSRB, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 165:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VPKSHSS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(165)) {
      SDNode *Result = Emit_51(N, PPC::VPKSHSS, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 166:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VPKSHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(166)) {
      SDNode *Result = Emit_51(N, PPC::VPKSHUS, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 167:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VPKSWSS:v16i8 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(167)) {
      SDNode *Result = Emit_51(N, PPC::VPKSWSS, MVT::v16i8);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v16i8 169:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VPKUHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(169)) {
      SDNode *Result = Emit_51(N, PPC::VPKUHUS, MVT::v16i8);
      return Result;
    }
  }

  CannotYetSelectIntrinsic(N);
  return NULL;
}

SDNode *Emit_52(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N2, N3);
}
SDNode *Emit_53(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1);
}
SDNode *Select_ISD_INTRINSIC_WO_CHAIN_v8i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (intrinsic_wo_chain:v8i16 138:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
    // Emits: (VMHADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(138)) {
      SDNode *Result = Emit_52(N, PPC::VMHADDSHS, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 139:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
    // Emits: (VMHRADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(139)) {
      SDNode *Result = Emit_52(N, PPC::VMHRADDSHS, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 147:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
    // Emits: (VMLADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(147)) {
      SDNode *Result = Emit_52(N, PPC::VMLADDUHM, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 87:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(87)) {
      SDNode *Result = Emit_51(N, PPC::VADDSHS, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 90:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VADDUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(90)) {
      SDNode *Result = Emit_51(N, PPC::VADDUHS, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 93:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VAVGSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(93)) {
      SDNode *Result = Emit_51(N, PPC::VAVGSH, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 96:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VAVGUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(96)) {
      SDNode *Result = Emit_51(N, PPC::VAVGUH, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 133:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VMAXSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(133)) {
      SDNode *Result = Emit_51(N, PPC::VMAXSH, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 136:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VMAXUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(136)) {
      SDNode *Result = Emit_51(N, PPC::VMAXUH, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 142:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VMINSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(142)) {
      SDNode *Result = Emit_51(N, PPC::VMINSH, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 145:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VMINUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(145)) {
      SDNode *Result = Emit_51(N, PPC::VMINUH, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 154:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VMULESB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(154)) {
      SDNode *Result = Emit_51(N, PPC::VMULESB, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 156:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VMULEUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(156)) {
      SDNode *Result = Emit_51(N, PPC::VMULEUB, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 158:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VMULOSB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(158)) {
      SDNode *Result = Emit_51(N, PPC::VMULOSB, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 160:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Emits: (VMULOUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(160)) {
      SDNode *Result = Emit_51(N, PPC::VMULOUB, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 196:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VSUBSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(196)) {
      SDNode *Result = Emit_51(N, PPC::VSUBSHS, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 199:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VSUBUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(199)) {
      SDNode *Result = Emit_51(N, PPC::VSUBUHS, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 177:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VRLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(177)) {
      SDNode *Result = Emit_51(N, PPC::VRLH, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 183:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(183)) {
      SDNode *Result = Emit_51(N, PPC::VSLH, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 188:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(188)) {
      SDNode *Result = Emit_51(N, PPC::VSRAH, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 191:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(191)) {
      SDNode *Result = Emit_51(N, PPC::VSRH, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 164:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VPKPX:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(164)) {
      SDNode *Result = Emit_51(N, PPC::VPKPX, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 168:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VPKSWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(168)) {
      SDNode *Result = Emit_51(N, PPC::VPKSWUS, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 170:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VPKUWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(170)) {
      SDNode *Result = Emit_51(N, PPC::VPKUWUS, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 207:iPTR, VRRC:v16i8:$vB)
    // Emits: (VUPKHSB:v8i16 VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(207)) {
      SDNode *Result = Emit_53(N, PPC::VUPKHSB, MVT::v8i16);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v8i16 210:iPTR, VRRC:v16i8:$vB)
    // Emits: (VUPKLSB:v8i16 VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(210)) {
      SDNode *Result = Emit_53(N, PPC::VUPKLSB, MVT::v8i16);
      return Result;
    }
  }

  CannotYetSelectIntrinsic(N);
  return NULL;
}

SDNode *Emit_54(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp2, N1);
}
SDNode *Select_ISD_INTRINSIC_WO_CHAIN_v4i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (intrinsic_wo_chain:v4i32 126:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM)
    // Emits: (VCTSXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(126)) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_54(N, PPC::VCTSXS, MVT::v4i32);
        return Result;
      }
    }

    // Pattern: (intrinsic_wo_chain:v4i32 127:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM)
    // Emits: (VCTUXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(127)) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_54(N, PPC::VCTUXS, MVT::v4i32);
        return Result;
      }
    }

    // Pattern: (intrinsic_wo_chain:v4i32 163:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC)
    // Emits: (VPERM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(163)) {
      SDNode *Result = Emit_52(N, PPC::VPERM, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 180:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC)
    // Emits: (VSEL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(180)) {
      SDNode *Result = Emit_52(N, PPC::VSEL, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 85:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VADDCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(85)) {
      SDNode *Result = Emit_51(N, PPC::VADDCUW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 88:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VADDSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(88)) {
      SDNode *Result = Emit_51(N, PPC::VADDSWS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 91:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VADDUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(91)) {
      SDNode *Result = Emit_51(N, PPC::VADDUWS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 94:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VAVGSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(94)) {
      SDNode *Result = Emit_51(N, PPC::VAVGSW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 97:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VAVGUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(97)) {
      SDNode *Result = Emit_51(N, PPC::VAVGUW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 134:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VMAXSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(134)) {
      SDNode *Result = Emit_51(N, PPC::VMAXSW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 137:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VMAXUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(137)) {
      SDNode *Result = Emit_51(N, PPC::VMAXUW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 143:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VMINSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(143)) {
      SDNode *Result = Emit_51(N, PPC::VMINSW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 146:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VMINUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(146)) {
      SDNode *Result = Emit_51(N, PPC::VMINUW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 148:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
    // Emits: (VMSUMMBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(148)) {
      SDNode *Result = Emit_52(N, PPC::VMSUMMBM, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 149:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
    // Emits: (VMSUMSHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(149)) {
      SDNode *Result = Emit_52(N, PPC::VMSUMSHM, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 150:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
    // Emits: (VMSUMSHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(150)) {
      SDNode *Result = Emit_52(N, PPC::VMSUMSHS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 151:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
    // Emits: (VMSUMUBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(151)) {
      SDNode *Result = Emit_52(N, PPC::VMSUMUBM, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 152:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
    // Emits: (VMSUMUHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(152)) {
      SDNode *Result = Emit_52(N, PPC::VMSUMUHM, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 153:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
    // Emits: (VMSUMUHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(153)) {
      SDNode *Result = Emit_52(N, PPC::VMSUMUHS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 155:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VMULESH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(155)) {
      SDNode *Result = Emit_51(N, PPC::VMULESH, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 157:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VMULEUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(157)) {
      SDNode *Result = Emit_51(N, PPC::VMULEUH, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 159:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VMULOSH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(159)) {
      SDNode *Result = Emit_51(N, PPC::VMULOSH, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 161:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Emits: (VMULOUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(161)) {
      SDNode *Result = Emit_51(N, PPC::VMULOUH, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 194:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSUBCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(194)) {
      SDNode *Result = Emit_51(N, PPC::VSUBCUW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 197:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSUBSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(197)) {
      SDNode *Result = Emit_51(N, PPC::VSUBSWS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 200:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSUBUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(200)) {
      SDNode *Result = Emit_51(N, PPC::VSUBUWS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 205:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSUMSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(205)) {
      SDNode *Result = Emit_51(N, PPC::VSUMSWS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 201:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSUM2SWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(201)) {
      SDNode *Result = Emit_51(N, PPC::VSUM2SWS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 202:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB)
    // Emits: (VSUM4SBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(202)) {
      SDNode *Result = Emit_51(N, PPC::VSUM4SBS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 203:iPTR, VRRC:v8i16:$vA, VRRC:v4i32:$vB)
    // Emits: (VSUM4SHS:v4i32 VRRC:v8i16:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(203)) {
      SDNode *Result = Emit_51(N, PPC::VSUM4SHS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 204:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB)
    // Emits: (VSUM4UBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(204)) {
      SDNode *Result = Emit_51(N, PPC::VSUM4UBS, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 178:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VRLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(178)) {
      SDNode *Result = Emit_51(N, PPC::VRLW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 181:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(181)) {
      SDNode *Result = Emit_51(N, PPC::VSL, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 184:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSLO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(184)) {
      SDNode *Result = Emit_51(N, PPC::VSLO, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 185:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(185)) {
      SDNode *Result = Emit_51(N, PPC::VSLW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 186:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(186)) {
      SDNode *Result = Emit_51(N, PPC::VSR, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 192:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSRO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(192)) {
      SDNode *Result = Emit_51(N, PPC::VSRO, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 189:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(189)) {
      SDNode *Result = Emit_51(N, PPC::VSRAW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 193:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Emits: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(193)) {
      SDNode *Result = Emit_51(N, PPC::VSRW, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 206:iPTR, VRRC:v8i16:$vB)
    // Emits: (VUPKHPX:v4i32 VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(206)) {
      SDNode *Result = Emit_53(N, PPC::VUPKHPX, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 208:iPTR, VRRC:v8i16:$vB)
    // Emits: (VUPKHSH:v4i32 VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(208)) {
      SDNode *Result = Emit_53(N, PPC::VUPKHSH, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 209:iPTR, VRRC:v8i16:$vB)
    // Emits: (VUPKLPX:v4i32 VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(209)) {
      SDNode *Result = Emit_53(N, PPC::VUPKLPX, MVT::v4i32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4i32 211:iPTR, VRRC:v8i16:$vB)
    // Emits: (VUPKLSH:v4i32 VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(211)) {
      SDNode *Result = Emit_53(N, PPC::VUPKLSH, MVT::v4i32);
      return Result;
    }
  }

  CannotYetSelectIntrinsic(N);
  return NULL;
}

SDNode *Select_ISD_INTRINSIC_WO_CHAIN_v4f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (intrinsic_wo_chain:v4f32 98:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM)
    // Emits: (VCFSX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(98)) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_54(N, PPC::VCFSX, MVT::v4f32);
        return Result;
      }
    }

    // Pattern: (intrinsic_wo_chain:v4f32 99:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM)
    // Emits: (VCFUX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (CN1 == INT64_C(99)) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_54(N, PPC::VCFUX, MVT::v4f32);
        return Result;
      }
    }

    // Pattern: (intrinsic_wo_chain:v4f32 128:iPTR, VRRC:v4f32:$vB)
    // Emits: (VEXPTEFP:v4f32 VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(128)) {
      SDNode *Result = Emit_53(N, PPC::VEXPTEFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 129:iPTR, VRRC:v4f32:$vB)
    // Emits: (VLOGEFP:v4f32 VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(129)) {
      SDNode *Result = Emit_53(N, PPC::VLOGEFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 131:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Emits: (VMAXFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(131)) {
      SDNode *Result = Emit_51(N, PPC::VMAXFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 140:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Emits: (VMINFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(140)) {
      SDNode *Result = Emit_51(N, PPC::VMINFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 171:iPTR, VRRC:v4f32:$vB)
    // Emits: (VREFP:v4f32 VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(171)) {
      SDNode *Result = Emit_53(N, PPC::VREFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 172:iPTR, VRRC:v4f32:$vB)
    // Emits: (VRFIM:v4f32 VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(172)) {
      SDNode *Result = Emit_53(N, PPC::VRFIM, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 173:iPTR, VRRC:v4f32:$vB)
    // Emits: (VRFIN:v4f32 VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(173)) {
      SDNode *Result = Emit_53(N, PPC::VRFIN, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 174:iPTR, VRRC:v4f32:$vB)
    // Emits: (VRFIP:v4f32 VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(174)) {
      SDNode *Result = Emit_53(N, PPC::VRFIP, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 175:iPTR, VRRC:v4f32:$vB)
    // Emits: (VRFIZ:v4f32 VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(175)) {
      SDNode *Result = Emit_53(N, PPC::VRFIZ, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 179:iPTR, VRRC:v4f32:$vB)
    // Emits: (VRSQRTEFP:v4f32 VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(179)) {
      SDNode *Result = Emit_53(N, PPC::VRSQRTEFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 130:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
    // Emits: (VMADDFP:v4f32 VRRC:v16i8:$A, VRRC:v16i8:$B, VRRC:v16i8:$C)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(130)) {
      SDNode *Result = Emit_52(N, PPC::VMADDFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (intrinsic_wo_chain:v4f32 162:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
    // Emits: (VNMSUBFP:v4f32 VRRC:v16i8:$A, VRRC:v16i8:$B, VRRC:v16i8:$C)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(162)) {
      SDNode *Result = Emit_52(N, PPC::VNMSUBFP, MVT::v4f32);
      return Result;
    }
  }

  CannotYetSelectIntrinsic(N);
  return NULL;
}

SDNode *Emit_55(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, CPTmpN2_0, CPTmpN2_1, Chain);
}
SDNode *Select_ISD_INTRINSIC_W_CHAIN_v16i8(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();
    if (CN1 == INT64_C(71)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_55(N, PPC::LVEBX, MVT::v16i8, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }
  }

  CannotYetSelectIntrinsic(N);
  return NULL;
}

SDNode *Emit_56(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Chain);
}
SDNode *Select_ISD_INTRINSIC_W_CHAIN_v8i16(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (intrinsic_w_chain:v8i16 72:iPTR, xoaddr:iPTR:$src)
    // Emits: (LVEHX:v8i16 xoaddr:iPTR:$src)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(72)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_55(N, PPC::LVEHX, MVT::v8i16, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_w_chain:v8i16 78:iPTR)
    // Emits: (MFVSCR:v8i16)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(78)) {
      SDNode *Result = Emit_56(N, PPC::MFVSCR, MVT::v8i16);
      return Result;
    }
  }

  CannotYetSelectIntrinsic(N);
  return NULL;
}

SDNode *Select_ISD_INTRINSIC_W_CHAIN_v4i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (intrinsic_w_chain:v4i32 73:iPTR, xoaddr:iPTR:$src)
    // Emits: (LVEWX:v4i32 xoaddr:iPTR:$src)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(73)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_55(N, PPC::LVEWX, MVT::v4i32, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_w_chain:v4i32 76:iPTR, xoaddr:iPTR:$src)
    // Emits: (LVX:v4i32 xoaddr:iPTR:$src)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(76)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_55(N, PPC::LVX, MVT::v4i32, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }

    // Pattern: (intrinsic_w_chain:v4i32 77:iPTR, xoaddr:iPTR:$src)
    // Emits: (LVXL:v4i32 xoaddr:iPTR:$src)
    // Pattern complexity = 17  cost = 1  size = 0
    if (CN1 == INT64_C(77)) {
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
        SDNode *Result = Emit_55(N, PPC::LVXL, MVT::v4i32, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }
  }

  CannotYetSelectIntrinsic(N);
  return NULL;
}

SDNode *Emit_57(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_LOAD_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {

    // Pattern: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
    // Emits: (LBZ:i32 iaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LBZ, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
    // Emits: (LHA:i32 iaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LHA, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
    // Emits: (LHZ:i32 iaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LHZ, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LWZ:i32 iaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LWZ, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
    // Emits: (LBZX:i32 xaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LBZX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
    // Emits: (LHAX:i32 xaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LHAX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
    // Emits: (LHZX:i32 xaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LHZX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LWZX:i32 xaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LWZX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi1(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;

      // Pattern: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>>
      // Emits: (LBZ:i32 iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LBZ, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }

      // Pattern: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>>
      // Emits: (LBZX:i32 xaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LBZX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
    if (Predicate_extload(N.getNode())) {
      if (Predicate_extloadi1(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>>
        // Emits: (LBZ:i32 iaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LBZ, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>>
        // Emits: (LBZX:i32 xaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LBZX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
        // Emits: (LBZ:i32 iaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LBZ, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
        // Emits: (LBZX:i32 xaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LBZX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
        // Emits: (LHZ:i32 iaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LHZ, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
        // Emits: (LHZX:i32 xaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LHZX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {
    if (Predicate_sextload(N.getNode())) {

      // Pattern: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
      // Emits: (LHA8:i64 iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_sextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LHA8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>
      // Emits: (LWA:i64 ixaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_sextloadi32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrImmShift(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LWA, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>>
      // Emits: (LHAX8:i64 xaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_sextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LHAX8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>
      // Emits: (LWAX:i64 xaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_sextloadi32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LWAX, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
    }
    if (Predicate_zextload(N.getNode())) {

      // Pattern: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
      // Emits: (LBZ8:i64 iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_zextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LBZ8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
      // Emits: (LHZ8:i64 iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_zextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LHZ8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>
      // Emits: (LWZ8:i64 iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_zextloadi32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LWZ8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
      // Emits: (LBZX8:i64 xaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_zextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LBZX8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
      // Emits: (LHZX8:i64 xaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_zextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LHZX8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }

      // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>
      // Emits: (LWZX8:i64 xaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_zextloadi32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LWZX8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
    }
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;

      // Pattern: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LD:i64 ixaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectAddrImmShift(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LD, MVT::i64, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }

      // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LDX:i64 xaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LDX, MVT::i64, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }

    // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>>
    // Emits: (LBZX8:i64 xaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi1(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LBZX8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
    if (Predicate_extload(N.getNode())) {
      if (Predicate_extloadi1(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>>
        // Emits: (LBZ8:i64 iaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LBZ8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>>
        // Emits: (LBZX8:i64 xaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LBZX8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
        // Emits: (LBZ8:i64 iaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LBZ8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
        // Emits: (LBZX8:i64 xaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LBZX8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
        // Emits: (LHZ8:i64 iaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LHZ8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
        // Emits: (LHZX8:i64 xaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LHZX8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
      if (Predicate_extloadi32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue CPTmpN1_0;
        SDValue CPTmpN1_1;

        // Pattern: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>>
        // Emits: (LWZ8:i64 iaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LWZ8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }

        // Pattern: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>>
        // Emits: (LWZX8:i64 xaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
          SDNode *Result = Emit_57(N, PPC::LWZX8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
          return Result;
        }
      }
    }

    // Pattern: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>>
    // Emits: (LBZ8:i64 iaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (Predicate_zextload(N.getNode()) &&
        Predicate_zextloadi1(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;
      if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LBZ8, MVT::i64, CPTmpN1_0, CPTmpN1_1);
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

    // Pattern: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LFS:f32 iaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_57(N, PPC::LFS, MVT::f32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }

    // Pattern: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LFSX:f32 xaddr:iPTR:$src)
    // Pattern complexity = 13  cost = 1  size = 0
    if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_57(N, PPC::LFSX, MVT::f32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_58(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { CPTmpN1_0, CPTmpN1_1, LSI_N, Chain };
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, MVT::Other, Ops0, 4), 0);
  Chain = SDValue(Tmp1.getNode(), 1);
  SDNode *ResNode = CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp1);
  ReplaceUses(SDValue(N.getNode(), 1), Chain);
  return ResNode;
}
SDNode *Select_ISD_LOAD_f64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;

      // Pattern: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LFD:f64 iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LFD, MVT::f64, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }

      // Pattern: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LFDX:f64 xaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_57(N, PPC::LFDX, MVT::f64, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
    if (Predicate_extload(N.getNode()) &&
        Predicate_extloadf32(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue CPTmpN1_0;
      SDValue CPTmpN1_1;

      // Pattern: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>
      // Emits: (FMRSD:f64 (LFS:f32 iaddr:iPTR:$src))
      // Pattern complexity = 13  cost = 2  size = 0
      if (SelectAddrImm(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_58(N, PPC::LFS, PPC::FMRSD, MVT::f32, MVT::f64, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }

      // Pattern: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>>
      // Emits: (FMRSD:f64 (LFSX:f32 xaddr:iPTR:$src))
      // Pattern complexity = 13  cost = 2  size = 0
      if (SelectAddrIdx(N, N1, CPTmpN1_0, CPTmpN1_1)) {
        SDNode *Result = Emit_58(N, PPC::LFSX, PPC::FMRSD, MVT::f32, MVT::f64, CPTmpN1_0, CPTmpN1_1);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_LOAD_v4i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode()) &&
      Predicate_load(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue CPTmpN1_0;
    SDValue CPTmpN1_1;
    if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
      SDNode *Result = Emit_57(N, PPC::LVX, MVT::v4i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_59(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SDValue N5 = N.getOperand(5);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Chain);
}
SDNode *Select_ISD_MEMBARRIER(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDValue N3 = N.getOperand(3);
      if (N3.getOpcode() == ISD::Constant) {
        SDValue N4 = N.getOperand(4);
        if (N4.getOpcode() == ISD::Constant) {
          SDValue N5 = N.getOperand(5);
          if (N5.getOpcode() == ISD::Constant &&
              N1.getNode()->getValueType(0) == MVT::i32) {
            SDNode *Result = Emit_59(N, PPC::SYNC);
            return Result;
          }
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_MUL_i32(const SDValue &N) {

  // Pattern: (mul:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm)
  // Emits: (MULLI:i32 GPRC:i32:$rA, (imm:i32):$imm)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immSExt16(N1.getNode())) {
      SDNode *Result = Emit_0(N, PPC::MULLI, MVT::i32);
      return Result;
    }
  }

  // Pattern: (mul:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Emits: (MULLW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::MULLW, MVT::i32);
  return Result;
}

SDNode *Select_ISD_MUL_i64(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::MULLD, MVT::i64);
  return Result;
}

SDNode *Select_ISD_MULHS_i32(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::MULHW, MVT::i32);
  return Result;
}

SDNode *Select_ISD_MULHS_i64(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::MULHD, MVT::i64);
  return Result;
}

SDNode *Select_ISD_MULHU_i32(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::MULHWU, MVT::i32);
  return Result;
}

SDNode *Select_ISD_MULHU_i64(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::MULHDU, MVT::i64);
  return Result;
}

SDNode *Emit_60(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_LO16(Tmp1.getNode());
  SDValue Tmp3(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp2), 0);
  SDValue Tmp4 = Transform_HI16(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp3, Tmp4);
}
SDNode *Select_ISD_OR_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (or:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, (imm:i32)<<P:Predicate_immAllOnes>>))
    // Emits: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_2(N, PPC::ORC, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (or:i32 (xor:i32 GPRC:i32:$rB, (imm:i32)<<P:Predicate_immAllOnes>>), GPRC:i32:$rS)
    // Emits: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_5(N, PPC::ORC, MVT::i32);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2)
      // Emits: (ORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immZExt16(N1.getNode())) {
        SDNode *Result = Emit_12(N, PPC::ORI, MVT::i32);
        return Result;
      }

      // Pattern: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2)
      // Emits: (ORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm16ShiftedZExt(N1.getNode())) {
        SDNode *Result = Emit_1(N, PPC::ORIS, MVT::i32);
        return Result;
      }

      // Pattern: (or:i32 GPRC:i32:$in, (imm:i32):$imm)
      // Emits: (ORIS:i32 (ORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
      // Pattern complexity = 6  cost = 2  size = 0
      SDNode *Result = Emit_60(N, PPC::ORI, PPC::ORIS, MVT::i32, MVT::i32);
      return Result;
    }
  }

  // Pattern: (or:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Emits: (OR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::OR, MVT::i32);
  return Result;
}

SDNode *Select_ISD_OR_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (or:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, (imm:i64)<<P:Predicate_immAllOnes>>))
    // Emits: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_2(N, PPC::ORC8, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (or:i64 (xor:i64 G8RC:i64:$rB, (imm:i64)<<P:Predicate_immAllOnes>>), G8RC:i64:$rS)
    // Emits: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_5(N, PPC::ORC8, MVT::i64);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2)
      // Emits: (ORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immZExt16(N1.getNode())) {
        SDNode *Result = Emit_14(N, PPC::ORI8, MVT::i64);
        return Result;
      }

      // Pattern: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2)
      // Emits: (ORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm16ShiftedZExt(N1.getNode())) {
        SDNode *Result = Emit_7(N, PPC::ORIS8, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (or:i64 G8RC:i64:$rS, G8RC:i64:$rB)
  // Emits: (OR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::OR8, MVT::i64);
  return Result;
}

SDNode *Select_ISD_OR_v4i32(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::VOR, MVT::v4i32);
  return Result;
}

SDNode *Emit_61(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1FULL, MVT::i32);
  SDValue Ops0[] = { N0, N1, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Emit_62(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1FULL, MVT::i32);
  SDValue Ops0[] = { N0, Tmp1, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_ISD_ROTL_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (rotl:i32 GPRC:i32:$in, (imm:i32):$imm)
  // Emits: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_62(N, PPC::RLWINM, MVT::i32);
    return Result;
  }

  // Pattern: (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh)
  // Emits: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, 0:i32, 31:i32)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_61(N, PPC::RLWNM, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_63(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1, Tmp2);
}
SDNode *Emit_64(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1, Tmp2);
}
SDNode *Select_ISD_ROTL_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (rotl:i64 G8RC:i64:$in, (imm:i32):$imm)
  // Emits: (RLDICL:i64 G8RC:i64:$in, (imm:i32):$imm, 0:i32)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_64(N, PPC::RLDICL, MVT::i64);
    return Result;
  }

  // Pattern: (rotl:i64 G8RC:i64:$in, GPRC:i32:$sh)
  // Emits: (RLDCL:i64 G8RC:i64:$in, GPRC:i32:$sh, 0:i32)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_63(N, PPC::RLDCL, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SDIV_i32(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::DIVW, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SDIV_i64(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::DIVD, MVT::i64);
  return Result;
}

SDNode *Emit_65(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp3 = Transform_SHL32(Tmp1.getNode());
  SDValue Ops0[] = { N0, Tmp1, Tmp2, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_ISD_SHL_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (shl:i32 GPRC:i32:$in, (imm:i32):$imm)
  // Emits: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_65(N, PPC::RLWINM, MVT::i32);
    return Result;
  }

  // Pattern: (shl:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Emits: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SLW, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_66(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_SHL64(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1, Tmp2);
}
SDNode *Select_ISD_SHL_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (shl:i64 G8RC:i64:$in, (imm:i32):$imm)
  // Emits: (RLDICR:i64 G8RC:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_66(N, PPC::RLDICR, MVT::i64);
    return Result;
  }

  // Pattern: (shl:i64 G8RC:i64:$rS, GPRC:i32:$rB)
  // Emits: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SLD, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SIGN_EXTEND_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_28(N, PPC::EXTSW_32_64, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_67(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_ISD_SIGN_EXTEND_INREG_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (sext_inreg:i32 GPRC:i32:$rS, i8:Other)
  // Emits: (EXTSB:i32 GPRC:i32:$rS)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
    SDNode *Result = Emit_67(N, PPC::EXTSB, MVT::i32);
    return Result;
  }

  // Pattern: (sext_inreg:i32 GPRC:i32:$rS, i16:Other)
  // Emits: (EXTSH:i32 GPRC:i32:$rS)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
    SDNode *Result = Emit_67(N, PPC::EXTSH, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SIGN_EXTEND_INREG_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (sext_inreg:i64 G8RC:i64:$rS, i8:Other)
  // Emits: (EXTSB8:i64 G8RC:i64:$rS)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
    SDNode *Result = Emit_67(N, PPC::EXTSB8, MVT::i64);
    return Result;
  }

  // Pattern: (sext_inreg:i64 G8RC:i64:$rS, i16:Other)
  // Emits: (EXTSH8:i64 G8RC:i64:$rS)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
    SDNode *Result = Emit_67(N, PPC::EXTSH8, MVT::i64);
    return Result;
  }

  // Pattern: (sext_inreg:i64 G8RC:i64:$rS, i32:Other)
  // Emits: (EXTSW:i64 G8RC:i64:$rS)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
    SDNode *Result = Emit_67(N, PPC::EXTSW, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRA_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (sra:i32 GPRC:i32:$rS, (imm:i32):$SH)
  // Emits: (SRAWI:i32 GPRC:i32:$rS, (imm:i32):$SH)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_0(N, PPC::SRAWI, MVT::i32);
    return Result;
  }

  // Pattern: (sra:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Emits: (SRAW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SRAW, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRA_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (sra:i64 G8RC:i64:$rS, (imm:i32):$SH)
  // Emits: (SRADI:i64 G8RC:i64:$rS, (imm:i32):$SH)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_0(N, PPC::SRADI, MVT::i64);
    return Result;
  }

  // Pattern: (sra:i64 G8RC:i64:$rS, GPRC:i32:$rB)
  // Emits: (SRAD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SRAD, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_68(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_SRL32(Tmp1.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(0x1FULL, MVT::i32);
  SDValue Ops0[] = { N0, Tmp2, Tmp1, Tmp3 };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_ISD_SRL_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (srl:i32 GPRC:i32:$in, (imm:i32):$imm)
  // Emits: (RLWINM:i32 GPRC:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_68(N, PPC::RLWINM, MVT::i32);
    return Result;
  }

  // Pattern: (srl:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Emits: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SRW, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_69(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp2 = Transform_SRL64(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2, Tmp1);
}
SDNode *Select_ISD_SRL_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (srl:i64 G8RC:i64:$in, (imm:i32):$imm)
  // Emits: (RLDICL:i64 G8RC:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::Constant &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_69(N, PPC::RLDICL, MVT::i64);
    return Result;
  }

  // Pattern: (srl:i64 G8RC:i64:$rS, GPRC:i32:$rB)
  // Emits: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SRD, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_70(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_STORE(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedstore(N.getNode())) {
    if (Predicate_truncstore(N.getNode())) {

      // Pattern: (st:isVoid GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (STB:isVoid GPRC:i32:$rS, iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrImm(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_70(N, PPC::STB, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }

      // Pattern: (st:isVoid GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (STH:isVoid GPRC:i32:$rS, iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrImm(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_70(N, PPC::STH, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrImm(N, N2, CPTmpN2_0, CPTmpN2_1)) {

        // Pattern: (st:isVoid GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STW:isVoid GPRC:i32:$rS, iaddr:iPTR:$src)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_70(N, PPC::STW, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid F4RC:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STFS:isVoid F4RC:f32:$rS, iaddr:iPTR:$dst)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::f32) {
          SDNode *Result = Emit_70(N, PPC::STFS, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid F8RC:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STFD:isVoid F8RC:f64:$rS, iaddr:iPTR:$dst)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_70(N, PPC::STFD, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
    if (Predicate_truncstore(N.getNode())) {

      // Pattern: (st:isVoid GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (STBX:isVoid GPRC:i32:$rS, xaddr:iPTR:$dst)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrIdx(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_70(N, PPC::STBX, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }

      // Pattern: (st:isVoid GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (STHX:isVoid GPRC:i32:$rS, xaddr:iPTR:$dst)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrIdx(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_70(N, PPC::STHX, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;
      if (SelectAddrIdx(N, N2, CPTmpN2_0, CPTmpN2_1)) {

        // Pattern: (st:isVoid GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STWX:isVoid GPRC:i32:$rS, xaddr:iPTR:$dst)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::i32) {
          SDNode *Result = Emit_70(N, PPC::STWX, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid F4RC:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STFSX:isVoid F4RC:f32:$frS, xaddr:iPTR:$dst)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::f32) {
          SDNode *Result = Emit_70(N, PPC::STFSX, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }

        // Pattern: (st:isVoid F8RC:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
        // Emits: (STFDX:isVoid F8RC:f64:$frS, xaddr:iPTR:$dst)
        // Pattern complexity = 13  cost = 1  size = 0
        if (N1.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_70(N, PPC::STFDX, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
    if (Predicate_truncstore(N.getNode())) {

      // Pattern: (st:isVoid G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (STB8:isVoid G8RC:i64:$rS, iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrImm(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_70(N, PPC::STB8, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }

      // Pattern: (st:isVoid G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (STH8:isVoid G8RC:i64:$rS, iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrImm(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_70(N, PPC::STH8, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }

      // Pattern: (st:isVoid G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>>
      // Emits: (STW8:isVoid G8RC:i64:$rS, iaddr:iPTR:$src)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_truncstorei32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrImm(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_70(N, PPC::STW8, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }

      // Pattern: (st:isVoid G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (STBX8:isVoid G8RC:i64:$rS, xaddr:iPTR:$dst)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrIdx(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_70(N, PPC::STBX8, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }

      // Pattern: (st:isVoid G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (STHX8:isVoid G8RC:i64:$rS, xaddr:iPTR:$dst)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrIdx(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_70(N, PPC::STHX8, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }

      // Pattern: (st:isVoid G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>>
      // Emits: (STWX8:isVoid G8RC:i64:$rS, xaddr:iPTR:$dst)
      // Pattern complexity = 13  cost = 1  size = 0
      if (Predicate_truncstorei32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        SDValue CPTmpN2_0;
        SDValue CPTmpN2_1;
        if (SelectAddrIdx(N, N2, CPTmpN2_0, CPTmpN2_1) &&
            N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_70(N, PPC::STWX8, CPTmpN2_0, CPTmpN2_1);
          return Result;
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue CPTmpN2_0;
      SDValue CPTmpN2_1;

      // Pattern: (st:isVoid G8RC:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STD:isVoid G8RC:i64:$rS, ixaddr:iPTR:$dst)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectAddrImmShift(N, N2, CPTmpN2_0, CPTmpN2_1) &&
          N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_70(N, PPC::STD, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }

      // Pattern: (st:isVoid G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STDX:isVoid G8RC:i64:$rS, xaddr:iPTR:$dst)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectAddrIdx(N, N2, CPTmpN2_0, CPTmpN2_1) &&
          N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_70(N, PPC::STDX, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }

      // Pattern: (st:isVoid VRRC:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STVX:isVoid VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
      // Pattern complexity = 13  cost = 1  size = 0
      if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1) &&
          N1.getNode()->getValueType(0) == MVT::v4i32) {
        SDNode *Result = Emit_70(N, PPC::STVX, CPTmpN2_0, CPTmpN2_1);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_71(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN3_0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, CPTmpN3_0, N2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_STORE_iPTR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_itruncstore(N.getNode()) &&
      Predicate_pre_truncst(N.getNode())) {

    // Pattern: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>>
    // Emits: (STBU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
    // Pattern complexity = 10  cost = 1  size = 0
    if (Predicate_pre_truncsti8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue CPTmpN3_0;
      if (SelectAddrImmOffs(N, N3, CPTmpN3_0) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_71(N, PPC::STBU, MVT::iPTR, CPTmpN3_0);
        return Result;
      }
    }

    // Pattern: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>>
    // Emits: (STHU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
    // Pattern complexity = 10  cost = 1  size = 0
    if (Predicate_pre_truncsti16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue CPTmpN3_0;
      if (SelectAddrImmOffs(N, N3, CPTmpN3_0) &&
          N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_71(N, PPC::STHU, MVT::iPTR, CPTmpN3_0);
        return Result;
      }
    }
  }
  if (Predicate_istore(N.getNode()) &&
      Predicate_pre_store(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    SDValue N3 = N.getOperand(3);
    SDValue CPTmpN3_0;
    if (SelectAddrImmOffs(N, N3, CPTmpN3_0)) {

      // Pattern: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>>
      // Emits: (STWU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_71(N, PPC::STWU, MVT::iPTR, CPTmpN3_0);
        return Result;
      }

      // Pattern: (ist:iPTR F4RC:f32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>>
      // Emits: (STFSU:iPTR F4RC:f32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::f32) {
        SDNode *Result = Emit_71(N, PPC::STFSU, MVT::iPTR, CPTmpN3_0);
        return Result;
      }

      // Pattern: (ist:iPTR F8RC:f64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>>
      // Emits: (STFDU:iPTR F8RC:f64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_71(N, PPC::STFDU, MVT::iPTR, CPTmpN3_0);
        return Result;
      }
    }
  }
  if (Predicate_itruncstore(N.getNode()) &&
      Predicate_pre_truncst(N.getNode())) {

    // Pattern: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>>
    // Emits: (STBU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
    // Pattern complexity = 10  cost = 1  size = 0
    if (Predicate_pre_truncsti8(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue CPTmpN3_0;
      if (SelectAddrImmOffs(N, N3, CPTmpN3_0) &&
          N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_71(N, PPC::STBU8, MVT::iPTR, CPTmpN3_0);
        return Result;
      }
    }

    // Pattern: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>>
    // Emits: (STHU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
    // Pattern complexity = 10  cost = 1  size = 0
    if (Predicate_pre_truncsti16(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      SDValue N3 = N.getOperand(3);
      SDValue CPTmpN3_0;
      if (SelectAddrImmOffs(N, N3, CPTmpN3_0) &&
          N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_71(N, PPC::STHU8, MVT::iPTR, CPTmpN3_0);
        return Result;
      }
    }
  }
  if (Predicate_istore(N.getNode()) &&
      Predicate_pre_store(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    SDValue N3 = N.getOperand(3);
    SDValue CPTmpN3_0;
    if (SelectAddrImmOffs(N, N3, CPTmpN3_0) &&
        N1.getNode()->getValueType(0) == MVT::i64) {

      // Pattern: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>>
      // Emits: (STWU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
      // Pattern complexity = 10  cost = 1  size = 0
      {
        SDNode *Result = Emit_71(N, PPC::STWU8, MVT::iPTR, CPTmpN3_0);
        return Result;
      }

      // Pattern: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>>
      // Emits: (STDU:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
      // Pattern complexity = 10  cost = 1  size = 0
      SDNode *Result = Emit_71(N, PPC::STDU, MVT::iPTR, CPTmpN3_0);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_72(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N0);
}
SDNode *Emit_73(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, Tmp1);
}
SDNode *Select_ISD_SUB_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (sub:i32 0:i32, GPRC:i32:$rA)
    // Emits: (NEG:i32 GPRC:i32:$rA)
    // Pattern complexity = 8  cost = 1  size = 0
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_53(N, PPC::NEG, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$in)
    // Emits: (SUBFIC:i32 GPRC:i32:$in, (imm:i32):$imm)
    // Pattern complexity = 7  cost = 1  size = 0
    if (N0.getOpcode() == ISD::Constant &&
        Predicate_immSExt16(N0.getNode())) {
      SDNode *Result = Emit_73(N, PPC::SUBFIC, MVT::i32);
      return Result;
    }
  }

  // Pattern: (sub:i32 GPRC:i32:$rB, GPRC:i32:$rA)
  // Emits: (SUBF:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_72(N, PPC::SUBF, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SUB_i64(const SDValue &N) {

  // Pattern: (sub:i64 0:i64, G8RC:i64:$rA)
  // Emits: (NEG8:i64 G8RC:i64:$rA)
  // Pattern complexity = 8  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_53(N, PPC::NEG8, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (sub:i64 G8RC:i64:$rB, G8RC:i64:$rA)
  // Emits: (SUBF8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_72(N, PPC::SUBF8, MVT::i64);
  return Result;
}

SDNode *Select_ISD_SUB_v16i8(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::VSUBUBM, MVT::v16i8);
  return Result;
}

SDNode *Select_ISD_SUB_v8i16(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::VSUBUHM, MVT::v8i16);
  return Result;
}

SDNode *Select_ISD_SUB_v4i32(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::VSUBUWM, MVT::v4i32);
  return Result;
}

SDNode *Emit_74(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i32);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N1, Tmp1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_75(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N1, N0);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_SUBC_i32(const SDValue &N) {

  // Pattern: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$rA)
  // Emits: (SUBFIC:i32 GPRC:i32:$rA, (imm:i32):$imm)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::Constant &&
        Predicate_immSExt16(N0.getNode())) {
      SDNode *Result = Emit_74(N, PPC::SUBFIC, MVT::i32);
      return Result;
    }
  }

  // Pattern: (subc:i32 GPRC:i32:$rB, GPRC:i32:$rA)
  // Emits: (SUBFC:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_75(N, PPC::SUBFC, MVT::i32);
  return Result;
}

SDNode *Emit_76(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i64);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N1, Tmp1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_SUBC_i64(const SDValue &N) {

  // Pattern: (subc:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, G8RC:i64:$rA)
  // Emits: (SUBFIC8:i64 G8RC:i64:$rA, (imm:i64):$imm)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::Constant &&
        Predicate_immSExt16(N0.getNode())) {
      SDNode *Result = Emit_76(N, PPC::SUBFIC8, MVT::i64);
      return Result;
    }
  }

  // Pattern: (subc:i64 G8RC:i64:$rB, G8RC:i64:$rA)
  // Emits: (SUBFC8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_75(N, PPC::SUBFC8, MVT::i64);
  return Result;
}

SDNode *Emit_77(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N1, N0, InFlag);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_78(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N1, InFlag);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_SUBE_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (sube:i32 0:i32, GPRC:i32:$rA)
    // Emits: (SUBFZE:i32 GPRC:i32:$rA)
    // Pattern complexity = 8  cost = 1  size = 0
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_78(N, PPC::SUBFZE, MVT::i32);
          return Result;
        }
      }
    }

    // Pattern: (sube:i32 (imm:i32)<<P:Predicate_immAllOnes>>, GPRC:i32:$rA)
    // Emits: (SUBFME:i32 GPRC:i32:$rA)
    // Pattern complexity = 7  cost = 1  size = 0
    if (N0.getOpcode() == ISD::Constant &&
        Predicate_immAllOnes(N0.getNode())) {
      SDNode *Result = Emit_78(N, PPC::SUBFME, MVT::i32);
      return Result;
    }
  }

  // Pattern: (sube:i32 GPRC:i32:$rB, GPRC:i32:$rA)
  // Emits: (SUBFE:i32 GPRC:i32:$rA, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_77(N, PPC::SUBFE, MVT::i32);
  return Result;
}

SDNode *Select_ISD_SUBE_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (sube:i64 0:i64, G8RC:i64:$rA)
    // Emits: (SUBFZE8:i64 G8RC:i64:$rA)
    // Pattern complexity = 8  cost = 1  size = 0
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N0);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDNode *Result = Emit_78(N, PPC::SUBFZE8, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (sube:i64 (imm:i64)<<P:Predicate_immAllOnes>>, G8RC:i64:$rA)
    // Emits: (SUBFME8:i64 G8RC:i64:$rA)
    // Pattern complexity = 7  cost = 1  size = 0
    if (N0.getOpcode() == ISD::Constant &&
        Predicate_immAllOnes(N0.getNode())) {
      SDNode *Result = Emit_78(N, PPC::SUBFME8, MVT::i64);
      return Result;
    }
  }

  // Pattern: (sube:i64 G8RC:i64:$rB, G8RC:i64:$rA)
  // Emits: (SUBFE8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_77(N, PPC::SUBFE8, MVT::i64);
  return Result;
}

SDNode *Emit_79(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Chain);
}
SDNode *Select_ISD_TRAP(const SDValue &N) {
  SDNode *Result = Emit_79(N, PPC::TRAP);
  return Result;
}

SDNode *Select_ISD_TRUNCATE_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_17(N, PPC::OR8To4, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_UDIV_i32(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::DIVWU, MVT::i32);
  return Result;
}

SDNode *Select_ISD_UDIV_i64(const SDValue &N) {
  SDNode *Result = Emit_3(N, PPC::DIVDU, MVT::i64);
  return Result;
}

SDNode *Emit_80(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp3 = Transform_VSLDOI_get_imm(N2.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1, Tmp3);
}
SDNode *Emit_81(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_82(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = Transform_VSPLTB_get_imm(N2.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1, N0);
}
SDNode *Emit_83(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = Transform_VSPLTH_get_imm(N2.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1, N0);
}
SDNode *Emit_84(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = Transform_VSPLTW_get_imm(N2.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp1, N0);
}
SDNode *Emit_85(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp3 = Transform_VSLDOI_unary_get_imm(N2.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N0, Tmp3);
}
SDNode *Emit_86(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N0);
}
SDNode *Select_ISD_VECTOR_SHUFFLE_v16i8(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::UNDEF) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::BUILD_VECTOR) {

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VSPLTB_shuffle_mask>><<X:VSPLTB_get_imm>>:$UIMM)
      // Emits: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (build_vector:v16i8):$UIMM), VRRC:v16i8:$vB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VSPLTB_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_82(N, PPC::VSPLTB, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VSPLTH_shuffle_mask>><<X:VSPLTH_get_imm>>:$UIMM)
      // Emits: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (build_vector:v16i8):$UIMM), VRRC:v16i8:$vB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VSPLTH_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_83(N, PPC::VSPLTH, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VSPLTW_shuffle_mask>><<X:VSPLTW_get_imm>>:$UIMM)
      // Emits: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (build_vector:v16i8):$UIMM), VRRC:v16i8:$vB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VSPLTW_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_84(N, PPC::VSPLTW, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VSLDOI_unary_shuffle_mask>><<X:VSLDOI_unary_get_imm>>:$in)
      // Emits: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA, (VSLDOI_unary_get_imm:i32 (build_vector:i32)<<P:Predicate_VSLDOI_unary_shuffle_mask>>:$in))
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VSLDOI_unary_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_85(N, PPC::VSLDOI, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VPKUWUM_unary_shuffle_mask>>:$in)
      // Emits: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VPKUWUM_unary_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_86(N, PPC::VPKUWUM, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VPKUHUM_unary_shuffle_mask>>:$in)
      // Emits: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VPKUHUM_unary_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_86(N, PPC::VPKUHUM, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VMRGLB_unary_shuffle_mask>>:$in)
      // Emits: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VMRGLB_unary_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_86(N, PPC::VMRGLB, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VMRGLH_unary_shuffle_mask>>:$in)
      // Emits: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VMRGLH_unary_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_86(N, PPC::VMRGLH, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VMRGLW_unary_shuffle_mask>>:$in)
      // Emits: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VMRGLW_unary_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_86(N, PPC::VMRGLW, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VMRGHB_unary_shuffle_mask>>:$in)
      // Emits: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VMRGHB_unary_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_86(N, PPC::VMRGHB, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VMRGHH_unary_shuffle_mask>>:$in)
      // Emits: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VMRGHH_unary_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_86(N, PPC::VMRGHH, MVT::v16i8);
        return Result;
      }

      // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8), (build_vector:v16i8)<<P:Predicate_VMRGHW_unary_shuffle_mask>>:$in)
      // Emits: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_VMRGHW_unary_shuffle_mask(N2.getNode())) {
        SDNode *Result = Emit_86(N, PPC::VMRGHW, MVT::v16i8);
        return Result;
      }
    }
  }
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::BUILD_VECTOR) {

    // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (build_vector:v16i8)<<P:Predicate_VSLDOI_shuffle_mask>><<X:VSLDOI_get_imm>>:$SH)
    // Emits: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (VSLDOI_get_imm:i32 (build_vector:v16i8):$SH))
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_VSLDOI_shuffle_mask(N2.getNode())) {
      SDNode *Result = Emit_80(N, PPC::VSLDOI, MVT::v16i8);
      return Result;
    }

    // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (build_vector:v16i8)<<P:Predicate_VMRGHB_shuffle_mask>>)
    // Emits: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_VMRGHB_shuffle_mask(N2.getNode())) {
      SDNode *Result = Emit_81(N, PPC::VMRGHB, MVT::v16i8);
      return Result;
    }

    // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (build_vector:v16i8)<<P:Predicate_VMRGHH_shuffle_mask>>)
    // Emits: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_VMRGHH_shuffle_mask(N2.getNode())) {
      SDNode *Result = Emit_81(N, PPC::VMRGHH, MVT::v16i8);
      return Result;
    }

    // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (build_vector:v16i8)<<P:Predicate_VMRGHW_shuffle_mask>>)
    // Emits: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_VMRGHW_shuffle_mask(N2.getNode())) {
      SDNode *Result = Emit_81(N, PPC::VMRGHW, MVT::v16i8);
      return Result;
    }

    // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (build_vector:v16i8)<<P:Predicate_VMRGLB_shuffle_mask>>)
    // Emits: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_VMRGLB_shuffle_mask(N2.getNode())) {
      SDNode *Result = Emit_81(N, PPC::VMRGLB, MVT::v16i8);
      return Result;
    }

    // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (build_vector:v16i8)<<P:Predicate_VMRGLH_shuffle_mask>>)
    // Emits: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_VMRGLH_shuffle_mask(N2.getNode())) {
      SDNode *Result = Emit_81(N, PPC::VMRGLH, MVT::v16i8);
      return Result;
    }

    // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (build_vector:v16i8)<<P:Predicate_VMRGLW_shuffle_mask>>)
    // Emits: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_VMRGLW_shuffle_mask(N2.getNode())) {
      SDNode *Result = Emit_81(N, PPC::VMRGLW, MVT::v16i8);
      return Result;
    }

    // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (build_vector:v16i8)<<P:Predicate_VPKUHUM_shuffle_mask>>)
    // Emits: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_VPKUHUM_shuffle_mask(N2.getNode())) {
      SDNode *Result = Emit_81(N, PPC::VPKUHUM, MVT::v16i8);
      return Result;
    }

    // Pattern: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (build_vector:v16i8)<<P:Predicate_VPKUWUM_shuffle_mask>>)
    // Emits: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 7  cost = 1  size = 0
    if (Predicate_VPKUWUM_shuffle_mask(N2.getNode())) {
      SDNode *Result = Emit_81(N, PPC::VPKUWUM, MVT::v16i8);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_87(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N01);
}
SDNode *Emit_88(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N0);
}
SDNode *Emit_89(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N1);
}
SDNode *Emit_90(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, N0);
}
SDNode *Select_ISD_XOR_i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (xor:i32 (and:i32 GPRC:i32:$rS, GPRC:i32:$rB), (imm:i32)<<P:Predicate_immAllOnes>>)
    // Emits: (NAND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N1.getNode())) {
        SDNode *Result = Emit_87(N, PPC::NAND, MVT::i32);
        return Result;
      }
    }

    // Pattern: (xor:i32 (or:i32 GPRC:i32:$rS, GPRC:i32:$rB), (imm:i32)<<P:Predicate_immAllOnes>>)
    // Emits: (NOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::OR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N1.getNode())) {
        SDNode *Result = Emit_87(N, PPC::NOR, MVT::i32);
        return Result;
      }
    }
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);

      // Pattern: (xor:i32 (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB), (imm:i32)<<P:Predicate_immAllOnes>>)
      // Emits: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
      // Pattern complexity = 10  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N1.getNode())) {
          SDNode *Result = Emit_87(N, PPC::EQV, MVT::i32);
          return Result;
        }
      }

      // Pattern: (xor:i32 (xor:i32 GPRC:i32:$rS, (imm:i32)<<P:Predicate_immAllOnes>>), GPRC:i32:$rB)
      // Emits: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_89(N, PPC::EQV, MVT::i32);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);

    // Pattern: (xor:i32 GPRC:i32:$rB, (xor:i32 GPRC:i32:$rS, (imm:i32)<<P:Predicate_immAllOnes>>))
    // Emits: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N1.getOpcode() == ISD::XOR) {
      SDValue N10 = N1.getOperand(0);
      SDValue N11 = N1.getOperand(1);
      if (N11.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N11.getNode())) {
        SDNode *Result = Emit_90(N, PPC::EQV, MVT::i32);
        return Result;
      }
    }
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2)
      // Emits: (XORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immZExt16(N1.getNode())) {
        SDNode *Result = Emit_12(N, PPC::XORI, MVT::i32);
        return Result;
      }

      // Pattern: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2)
      // Emits: (XORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm16ShiftedZExt(N1.getNode())) {
        SDNode *Result = Emit_1(N, PPC::XORIS, MVT::i32);
        return Result;
      }

      // Pattern: (xor:i32 GPRC:i32:$in, (imm:i32)<<P:Predicate_immAllOnes>>)
      // Emits: (NOR:i32 GPRC:i32:$in, GPRC:i32:$in)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immAllOnes(N1.getNode())) {
        SDNode *Result = Emit_88(N, PPC::NOR, MVT::i32);
        return Result;
      }

      // Pattern: (xor:i32 GPRC:i32:$in, (imm:i32):$imm)
      // Emits: (XORIS:i32 (XORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
      // Pattern complexity = 6  cost = 2  size = 0
      SDNode *Result = Emit_60(N, PPC::XORI, PPC::XORIS, MVT::i32, MVT::i32);
      return Result;
    }
  }

  // Pattern: (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Emits: (XOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::XOR, MVT::i32);
  return Result;
}

SDNode *Select_ISD_XOR_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (xor:i64 (and:i64 G8RC:i64:$rS, G8RC:i64:$rB), (imm:i64)<<P:Predicate_immAllOnes>>)
    // Emits: (NAND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N1.getNode())) {
        SDNode *Result = Emit_87(N, PPC::NAND8, MVT::i64);
        return Result;
      }
    }

    // Pattern: (xor:i64 (or:i64 G8RC:i64:$rS, G8RC:i64:$rB), (imm:i64)<<P:Predicate_immAllOnes>>)
    // Emits: (NOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::OR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N1.getNode())) {
        SDNode *Result = Emit_87(N, PPC::NOR8, MVT::i64);
        return Result;
      }
    }
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);

      // Pattern: (xor:i64 (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB), (imm:i64)<<P:Predicate_immAllOnes>>)
      // Emits: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
      // Pattern complexity = 10  cost = 1  size = 0
      {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N1.getNode())) {
          SDNode *Result = Emit_87(N, PPC::EQV8, MVT::i64);
          return Result;
        }
      }

      // Pattern: (xor:i64 (xor:i64 G8RC:i64:$rS, (imm:i64)<<P:Predicate_immAllOnes>>), G8RC:i64:$rB)
      // Emits: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_89(N, PPC::EQV8, MVT::i64);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);

    // Pattern: (xor:i64 G8RC:i64:$rB, (xor:i64 G8RC:i64:$rS, (imm:i64)<<P:Predicate_immAllOnes>>))
    // Emits: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N1.getOpcode() == ISD::XOR) {
      SDValue N10 = N1.getOperand(0);
      SDValue N11 = N1.getOperand(1);
      if (N11.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N11.getNode())) {
        SDNode *Result = Emit_90(N, PPC::EQV8, MVT::i64);
        return Result;
      }
    }
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2)
      // Emits: (XORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immZExt16(N1.getNode())) {
        SDNode *Result = Emit_14(N, PPC::XORI8, MVT::i64);
        return Result;
      }

      // Pattern: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2)
      // Emits: (XORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_imm16ShiftedZExt(N1.getNode())) {
        SDNode *Result = Emit_7(N, PPC::XORIS8, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB)
  // Emits: (XOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::XOR8, MVT::i64);
  return Result;
}

SDNode *Emit_91(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, N11);
}
SDNode *Emit_92(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N1);
}
SDNode *Select_ISD_XOR_v4i32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::OR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue N1 = N.getOperand(1);

      // Pattern: (xor:v4i32 (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB), (build_vector:v4i32)<<P:Predicate_immAllOnesV>>)
      // Emits: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N1.getOpcode() == ISD::BUILD_VECTOR &&
          Predicate_immAllOnesV(N1.getNode())) {
        SDNode *Result = Emit_87(N, PPC::VNOR, MVT::v4i32);
        return Result;
      }

      // Pattern: (xor:v4i32 (or:v4i32 VRRC:v4i32:$A, VRRC:v4i32:$B), (bitconvert:v4i32)<<P:Predicate_immAllOnesV_bc>>)
      // Emits: (VNOR:v4i32 VRRC:v16i8:$A, VRRC:v16i8:$B)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N1.getOpcode() == ISD::BIT_CONVERT &&
          Predicate_immAllOnesV_bc(N1.getNode())) {
        SDNode *Result = Emit_87(N, PPC::VNOR, MVT::v4i32);
        return Result;
      }
    }

    // Pattern: (xor:v4i32 (build_vector:v4i32)<<P:Predicate_immAllOnesV>>, (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB))
    // Emits: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::BUILD_VECTOR &&
        Predicate_immAllOnesV(N0.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::OR) {
        SDNode *Result = Emit_91(N, PPC::VNOR, MVT::v4i32);
        return Result;
      }
    }

    // Pattern: (xor:v4i32 (bitconvert:v4i32)<<P:Predicate_immAllOnesV_bc>>, (or:v4i32 VRRC:v4i32:$A, VRRC:v4i32:$B))
    // Emits: (VNOR:v4i32 VRRC:v16i8:$A, VRRC:v16i8:$B)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::BIT_CONVERT &&
        Predicate_immAllOnesV_bc(N0.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::OR) {
        SDNode *Result = Emit_91(N, PPC::VNOR, MVT::v4i32);
        return Result;
      }
    }
    {
      SDValue N1 = N.getOperand(1);

      // Pattern: (xor:v4i32 VRRC:v4i32:$vA, (build_vector:v4i32)<<P:Predicate_immAllOnesV>>)
      // Emits: (VNOR:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
      // Pattern complexity = 7  cost = 1  size = 0
      if (N1.getOpcode() == ISD::BUILD_VECTOR &&
          Predicate_immAllOnesV(N1.getNode())) {
        SDNode *Result = Emit_88(N, PPC::VNOR, MVT::v4i32);
        return Result;
      }

      // Pattern: (xor:v4i32 VRRC:v4i32:$vA, (bitconvert:v4i32)<<P:Predicate_immAllOnesV_bc>>)
      // Emits: (VNOR:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
      // Pattern complexity = 7  cost = 1  size = 0
      if (N1.getOpcode() == ISD::BIT_CONVERT &&
          Predicate_immAllOnesV_bc(N1.getNode())) {
        SDNode *Result = Emit_88(N, PPC::VNOR, MVT::v4i32);
        return Result;
      }
    }

    // Pattern: (xor:v4i32 (build_vector:v4i32)<<P:Predicate_immAllOnesV>>, VRRC:v4i32:$vA)
    // Emits: (VNOR:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
    // Pattern complexity = 7  cost = 1  size = 0
    if (N0.getOpcode() == ISD::BUILD_VECTOR &&
        Predicate_immAllOnesV(N0.getNode())) {
      SDNode *Result = Emit_92(N, PPC::VNOR, MVT::v4i32);
      return Result;
    }

    // Pattern: (xor:v4i32 (bitconvert:v4i32)<<P:Predicate_immAllOnesV_bc>>, VRRC:v4i32:$vA)
    // Emits: (VNOR:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
    // Pattern complexity = 7  cost = 1  size = 0
    if (N0.getOpcode() == ISD::BIT_CONVERT &&
        Predicate_immAllOnesV_bc(N0.getNode())) {
      SDNode *Result = Emit_92(N, PPC::VNOR, MVT::v4i32);
      return Result;
    }
  }

  // Pattern: (xor:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
  // Emits: (VXOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_3(N, PPC::VXOR, MVT::v4i32);
  return Result;
}

SDNode *Emit_93(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, N0), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x0ULL, MVT::i32);
  SDValue Tmp4 = CurDAG->getTargetConstant(0x20ULL, MVT::i32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3, Tmp4);
}
SDNode *Select_ISD_ZERO_EXTEND_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_93(N, PPC::OR4To8, PPC::RLDICL, MVT::i64, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_94(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
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
SDNode *Select_PPCISD_BCTRL_ELF(const SDValue &N) {

  // Pattern: (PPCbctrl_ELF:isVoid)
  // Emits: (BCTRL_ELF:isVoid)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!PPCSubTarget.isPPC64())) {
    SDNode *Result = Emit_94(N, PPC::BCTRL_ELF, 0);
    return Result;
  }

  // Pattern: (PPCbctrl_ELF:isVoid)
  // Emits: (BCTRL8_ELF:isVoid)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((PPCSubTarget.isPPC64())) {
    SDNode *Result = Emit_94(N, PPC::BCTRL8_ELF, 0);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_BCTRL_Macho(const SDValue &N) {

  // Pattern: (PPCbctrl_Macho:isVoid)
  // Emits: (BCTRL_Macho:isVoid)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((!PPCSubTarget.isPPC64())) {
    SDNode *Result = Emit_94(N, PPC::BCTRL_Macho, 0);
    return Result;
  }

  // Pattern: (PPCbctrl_Macho:isVoid)
  // Emits: (BCTRL8_Macho:isVoid)
  // Pattern complexity = 3  cost = 1  size = 0
  if ((PPCSubTarget.isPPC64())) {
    SDNode *Result = Emit_94(N, PPC::BCTRL8_Macho, 0);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_95(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
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
SDNode *Emit_96(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
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
SDNode *Emit_97(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
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
SDNode *Select_PPCISD_CALL_ELF(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {

    // Pattern: (PPCcall_ELF:isVoid (imm:i32):$func)
    // Emits: (BLA_ELF:isVoid (imm:i32):$func)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_95(N, PPC::BLA_ELF, 1);
      return Result;
    }

    // Pattern: (PPCcall_ELF:isVoid (imm:i64):$func)
    // Emits: (BLA8_ELF:isVoid (imm:i64):$func)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_96(N, PPC::BLA8_ELF, 1);
      return Result;
    }
  }

  // Pattern: (PPCcall_ELF:isVoid (tglobaladdr:i32):$dst)
  // Emits: (BL_ELF:isVoid (tglobaladdr:iPTR):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_97(N, PPC::BL_ELF, 1);
    return Result;
  }

  // Pattern: (PPCcall_ELF:isVoid (texternalsym:i32):$dst)
  // Emits: (BL_ELF:isVoid (texternalsym:iPTR):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_97(N, PPC::BL_ELF, 1);
    return Result;
  }

  // Pattern: (PPCcall_ELF:isVoid (tglobaladdr:i64):$dst)
  // Emits: (BL8_ELF:isVoid (tglobaladdr:iPTR):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_97(N, PPC::BL8_ELF, 1);
    return Result;
  }

  // Pattern: (PPCcall_ELF:isVoid (texternalsym:i64):$dst)
  // Emits: (BL8_ELF:isVoid (texternalsym:iPTR):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_97(N, PPC::BL8_ELF, 1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_CALL_Macho(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {

    // Pattern: (PPCcall_Macho:isVoid (imm:i32):$func)
    // Emits: (BLA_Macho:isVoid (imm:i32):$func)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_95(N, PPC::BLA_Macho, 1);
      return Result;
    }

    // Pattern: (PPCcall_Macho:isVoid (imm:i64):$func)
    // Emits: (BLA8_Macho:isVoid (imm:i64):$func)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_96(N, PPC::BLA8_Macho, 1);
      return Result;
    }
  }

  // Pattern: (PPCcall_Macho:isVoid (tglobaladdr:i32):$dst)
  // Emits: (BL_Macho:isVoid (tglobaladdr:iPTR):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_97(N, PPC::BL_Macho, 1);
    return Result;
  }

  // Pattern: (PPCcall_Macho:isVoid (texternalsym:i32):$dst)
  // Emits: (BL_Macho:isVoid (texternalsym:iPTR):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_97(N, PPC::BL_Macho, 1);
    return Result;
  }

  // Pattern: (PPCcall_Macho:isVoid (tglobaladdr:i64):$dst)
  // Emits: (BL8_Macho:isVoid (tglobaladdr:iPTR):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_97(N, PPC::BL8_Macho, 1);
    return Result;
  }

  // Pattern: (PPCcall_Macho:isVoid (texternalsym:i64):$dst)
  // Emits: (BL8_Macho:isVoid (texternalsym:iPTR):$dst)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol &&
      N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_97(N, PPC::BL8_Macho, 1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_98(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Select_PPCISD_DYNALLOC_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue CPTmpN2_0;
  SDValue CPTmpN2_1;
  if (SelectAddrImm(N, N2, CPTmpN2_0, CPTmpN2_1) &&
      N1.getNode()->getValueType(0) == MVT::i32 &&
      N2.getNode()->getValueType(0) == TLI.getPointerTy()) {
    SDNode *Result = Emit_98(N, PPC::DYNALLOC, MVT::i32, CPTmpN2_0, CPTmpN2_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_DYNALLOC_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue CPTmpN2_0;
  SDValue CPTmpN2_1;
  if (SelectAddrImm(N, N2, CPTmpN2_0, CPTmpN2_1) &&
      N1.getNode()->getValueType(0) == MVT::i64 &&
      N2.getNode()->getValueType(0) == TLI.getPointerTy()) {
    SDNode *Result = Emit_98(N, PPC::DYNALLOC8, MVT::i64, CPTmpN2_0, CPTmpN2_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_EXTSW_32_i32(const SDValue &N) {
  SDNode *Result = Emit_28(N, PPC::EXTSW_32, MVT::i32);
  return Result;
}

SDNode *Select_PPCISD_FADDRTZ_f64(const SDValue &N) {
  SDNode *Result = Emit_10(N, PPC::FADDrtz, MVT::f64);
  return Result;
}

SDNode *Select_PPCISD_FCFID_f64(const SDValue &N) {
  SDNode *Result = Emit_28(N, PPC::FCFID, MVT::f64);
  return Result;
}

SDNode *Select_PPCISD_FCTIDZ_f64(const SDValue &N) {
  SDNode *Result = Emit_28(N, PPC::FCTIDZ, MVT::f64);
  return Result;
}

SDNode *Select_PPCISD_FCTIWZ_f64(const SDValue &N) {
  SDNode *Result = Emit_28(N, PPC::FCTIWZ, MVT::f64);
  return Result;
}

SDNode *Emit_99(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1, N2);
}
SDNode *Select_PPCISD_FSEL_f32(const SDValue &N) {
  SDNode *Result = Emit_99(N, PPC::FSELS, MVT::f32);
  return Result;
}

SDNode *Select_PPCISD_FSEL_f64(const SDValue &N) {
  SDNode *Result = Emit_99(N, PPC::FSELD, MVT::f64);
  return Result;
}

SDNode *Select_PPCISD_Hi_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32)
  // Emits: (LIS:i32 (tglobaladdr:i32):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LIS, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (PPChi:i32 (tconstpool:i32):$in, 0:i32)
  // Emits: (LIS:i32 (tconstpool:i32):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetConstantPool) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LIS, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (PPChi:i32 (tjumptable:i32):$in, 0:i32)
  // Emits: (LIS:i32 (tjumptable:i32):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetJumpTable) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LIS, MVT::i32);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_Hi_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64)
  // Emits: (LIS8:i64 (tglobaladdr:i64):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LIS8, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (PPChi:i64 (tconstpool:i64):$in, 0:i64)
  // Emits: (LIS8:i64 (tconstpool:i64):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetConstantPool) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LIS8, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (PPChi:i64 (tjumptable:i64):$in, 0:i64)
  // Emits: (LIS8:i64 (tjumptable:i64):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetJumpTable) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LIS8, MVT::i64);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_100(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, CPTmpN1_0, CPTmpN1_1, Chain);
}
SDNode *Select_PPCISD_LARX_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
    SDNode *Result = Emit_100(N, PPC::LWARX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_LARX_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
    SDNode *Result = Emit_100(N, PPC::LDARX, MVT::i64, CPTmpN1_0, CPTmpN1_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_101(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN1_0, SDValue &CPTmpN1_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, CPTmpN1_0, CPTmpN1_1, Chain);
}
SDNode *Select_PPCISD_LBRX_i32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  SDValue CPTmpN1_1;
  if (SelectAddrIdxOnly(N, N1, CPTmpN1_0, CPTmpN1_1)) {
    SDValue N2 = N.getOperand(2);
    SDValue N3 = N.getOperand(3);

    // Pattern: (PPClbrx:i32 xoaddr:iPTR:$src, srcvalue:Other:$sv, i16:Other)
    // Emits: (LHBRX:i32 xoaddr:iPTR:$src)
    // Pattern complexity = 12  cost = 1  size = 0
    if (cast<VTSDNode>(N3)->getVT() == MVT::i16) {
      SDNode *Result = Emit_101(N, PPC::LHBRX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }

    // Pattern: (PPClbrx:i32 xoaddr:iPTR:$src, srcvalue:Other:$sv, i32:Other)
    // Emits: (LWBRX:i32 xoaddr:iPTR:$src)
    // Pattern complexity = 12  cost = 1  size = 0
    if (cast<VTSDNode>(N3)->getVT() == MVT::i32) {
      SDNode *Result = Emit_101(N, PPC::LWBRX, MVT::i32, CPTmpN1_0, CPTmpN1_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_Lo_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32)
  // Emits: (LI:i32 (tglobaladdr:i32):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LI, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (PPClo:i32 (tconstpool:i32):$in, 0:i32)
  // Emits: (LI:i32 (tconstpool:i32):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetConstantPool) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LI, MVT::i32);
        return Result;
      }
    }
  }

  // Pattern: (PPClo:i32 (tjumptable:i32):$in, 0:i32)
  // Emits: (LI:i32 (tjumptable:i32):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetJumpTable) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LI, MVT::i32);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_Lo_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64)
  // Emits: (LI8:i64 (tglobaladdr:i64):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LI8, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (PPClo:i64 (tconstpool:i64):$in, 0:i64)
  // Emits: (LI8:i64 (tconstpool:i64):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetConstantPool) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LI8, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (PPClo:i64 (tjumptable:i64):$in, 0:i64)
  // Emits: (LI8:i64 (tjumptable:i64):$in)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetJumpTable) {
    SDValue N1 = N.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDNode *Result = Emit_67(N, PPC::LI8, MVT::i64);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_102(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_PPCISD_MFFS_f64(const SDValue &N) {
  SDNode *Result = Emit_102(N, PPC::MFFS, MVT::f64);
  return Result;
}

SDNode *Emit_103(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
SDNode *Select_PPCISD_MTCTR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (PPCmtctr:isVoid GPRC:i32:$rS)
  // Emits: (MTCTR:isVoid GPRC:i32:$rS)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_103(N, PPC::MTCTR);
    return Result;
  }

  // Pattern: (PPCmtctr:isVoid G8RC:i64:$rS)
  // Emits: (MTCTR8:isVoid G8RC:i64:$rS)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_103(N, PPC::MTCTR8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_104(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i32);
  SDValue InFlag = N.getOperand(1);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Flag, Tmp0, InFlag);
  InFlag = SDValue(ResNode, 0);
  ReplaceUses(SDValue(N.getNode(), 0), InFlag);
  return ResNode;
}
SDNode *Select_PPCISD_MTFSB0(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::Constant &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_104(N, PPC::MTFSB0);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_MTFSB1(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::Constant &&
      N0.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_104(N, PPC::MTFSB1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_105(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i32);
  SDValue InFlag = N.getOperand(3);
  SDValue Ops0[] = { Tmp0, N1, N2, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_PPCISD_MTFSF_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::Constant) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N0.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_105(N, PPC::MTFSF, MVT::f64);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_106(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x14ULL, MVT::i32);
  SDValue Tmp1 = CurDAG->getRegister(0, MVT::i32);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Tmp0, Tmp1, Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 4 : 3);
}
SDNode *Select_PPCISD_RET_FLAG(const SDValue &N) {
  SDNode *Result = Emit_106(N, PPC::BLR);
  return Result;
}

SDNode *Select_PPCISD_SHL_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SLW, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_SHL_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SLD, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_SRA_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SRAW, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_SRA_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SRAD, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_SRL_i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SRW, MVT::i32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_SRL_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_3(N, PPC::SRD, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_107(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Select_PPCISD_STBRX(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue CPTmpN2_0;
  SDValue CPTmpN2_1;
  if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
    SDValue N3 = N.getOperand(3);
    SDValue N4 = N.getOperand(4);

    // Pattern: (PPCstbrx:isVoid GPRC:i32:$rS, xoaddr:iPTR:$dst, srcvalue:Other:$dummy, i16:Other)
    // Emits: (STHBRX:isVoid GPRC:i32:$rS, xoaddr:iPTR:$dst)
    // Pattern complexity = 12  cost = 1  size = 0
    if (cast<VTSDNode>(N4)->getVT() == MVT::i16) {
      SDNode *Result = Emit_107(N, PPC::STHBRX, CPTmpN2_0, CPTmpN2_1);
      return Result;
    }

    // Pattern: (PPCstbrx:isVoid GPRC:i32:$rS, xoaddr:iPTR:$dst, srcvalue:Other:$dummy, i32:Other)
    // Emits: (STWBRX:isVoid GPRC:i32:$rS, xoaddr:iPTR:$dst)
    // Pattern complexity = 12  cost = 1  size = 0
    if (cast<VTSDNode>(N4)->getVT() == MVT::i32) {
      SDNode *Result = Emit_107(N, PPC::STWBRX, CPTmpN2_0, CPTmpN2_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_108(const SDValue &N, unsigned Opc0, SDValue &CPTmpN2_0, SDValue &CPTmpN2_1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Ops0[] = { N1, CPTmpN2_0, CPTmpN2_1, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Select_PPCISD_STCX(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue CPTmpN2_0;
  SDValue CPTmpN2_1;
  if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {

    // Pattern: (PPCstcx:isVoid GPRC:i32:$rS, xoaddr:iPTR:$dst)
    // Emits: (STWCX:isVoid GPRC:i32:$rS, xoaddr:iPTR:$dst)
    // Pattern complexity = 12  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_108(N, PPC::STWCX, CPTmpN2_0, CPTmpN2_1);
      return Result;
    }

    // Pattern: (PPCstcx:isVoid G8RC:i64:$rS, xoaddr:iPTR:$dst)
    // Emits: (STDCX:isVoid G8RC:i64:$rS, xoaddr:iPTR:$dst)
    // Pattern complexity = 12  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_108(N, PPC::STDCX, CPTmpN2_0, CPTmpN2_1);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_STD_32(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue CPTmpN2_0;
  SDValue CPTmpN2_1;

  // Pattern: (PPCstd_32:isVoid GPRC:i32:$rT, ixaddr:iPTR:$dst)
  // Emits: (STD_32:isVoid GPRC:i32:$rT, ixaddr:iPTR:$dst)
  // Pattern complexity = 12  cost = 1  size = 0
  if (SelectAddrImmShift(N, N2, CPTmpN2_0, CPTmpN2_1) &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_108(N, PPC::STD_32, CPTmpN2_0, CPTmpN2_1);
    return Result;
  }

  // Pattern: (PPCstd_32:isVoid GPRC:i32:$rT, xaddr:iPTR:$dst)
  // Emits: (STDX_32:isVoid GPRC:i32:$rT, xaddr:iPTR:$dst)
  // Pattern complexity = 12  cost = 1  size = 0
  if (SelectAddrIdx(N, N2, CPTmpN2_0, CPTmpN2_1) &&
      N1.getNode()->getValueType(0) == MVT::i32) {
    SDNode *Result = Emit_108(N, PPC::STDX_32, CPTmpN2_0, CPTmpN2_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_STFIWX(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue CPTmpN2_0;
  SDValue CPTmpN2_1;
  if (SelectAddrIdxOnly(N, N2, CPTmpN2_0, CPTmpN2_1)) {
    SDNode *Result = Emit_108(N, PPC::STFIWX, CPTmpN2_0, CPTmpN2_1);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_109(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i32);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  Ops0.push_back(Tmp0);
  Ops0.push_back(Tmp1);
  for (unsigned i = NumInputRootOps + 1, e = N.getNumOperands()-(HasInFlag?1:0); i != e; ++i) {
    Ops0.push_back(N.getOperand(i));
  }
  Ops0.push_back(Chain);
  if (HasInFlag)
    Ops0.push_back(InFlag);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, &Ops0[0], Ops0.size());
}
SDNode *Emit_110(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  Ops0.push_back(Tmp0);
  Ops0.push_back(Tmp1);
  for (unsigned i = NumInputRootOps + 1, e = N.getNumOperands()-(HasInFlag?1:0); i != e; ++i) {
    Ops0.push_back(N.getOperand(i));
  }
  Ops0.push_back(Chain);
  if (HasInFlag)
    Ops0.push_back(InFlag);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, &Ops0[0], Ops0.size());
}
SDNode *Emit_111(const SDValue &N, unsigned Opc0, unsigned NumInputRootOps) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SmallVector<SDValue, 8> Ops0;
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i32);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  Ops0.push_back(N1);
  Ops0.push_back(Tmp1);
  for (unsigned i = NumInputRootOps + 1, e = N.getNumOperands()-(HasInFlag?1:0); i != e; ++i) {
    Ops0.push_back(N.getOperand(i));
  }
  Ops0.push_back(Chain);
  if (HasInFlag)
    Ops0.push_back(InFlag);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, &Ops0[0], Ops0.size());
}
SDNode *Select_PPCISD_TC_RETURN(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {

      // Pattern: (PPCtc_return:isVoid (imm:i32):$func, (imm:i32):$offset)
      // Emits: (TCRETURNai:isVoid (imm:i32):$func, (imm:i32):$offset)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::i32) {
        SDNode *Result = Emit_109(N, PPC::TCRETURNai, 2);
        return Result;
      }

      // Pattern: (PPCtc_return:isVoid (imm:i64):$func, (imm:i32):$offset)
      // Emits: (TCRETURNai8:isVoid (imm:i64):$func, (imm:i32):$offset)
      // Pattern complexity = 9  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_110(N, PPC::TCRETURNai8, 2);
        return Result;
      }
    }
  }

  // Pattern: (PPCtc_return:isVoid (tglobaladdr:i32):$dst, (imm:i32):$imm)
  // Emits: (TCRETURNdi:isVoid (tglobaladdr:iPTR):$dst, (imm:i32):$imm)
  // Pattern complexity = 9  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant &&
        N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_111(N, PPC::TCRETURNdi, 2);
      return Result;
    }
  }

  // Pattern: (PPCtc_return:isVoid (texternalsym:i32):$dst, (imm:i32):$imm)
  // Emits: (TCRETURNdi:isVoid (texternalsym:iPTR):$dst, (imm:i32):$imm)
  // Pattern complexity = 9  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant &&
        N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_111(N, PPC::TCRETURNdi, 2);
      return Result;
    }
  }

  // Pattern: (PPCtc_return:isVoid (tglobaladdr:i64):$dst, (imm:i32):$imm)
  // Emits: (TCRETURNdi8:isVoid (tglobaladdr:iPTR):$dst, (imm:i32):$imm)
  // Pattern complexity = 9  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant &&
        N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_111(N, PPC::TCRETURNdi8, 2);
      return Result;
    }
  }

  // Pattern: (PPCtc_return:isVoid (texternalsym:i64):$dst, (imm:i32):$imm)
  // Emits: (TCRETURNdi8:isVoid (texternalsym:iPTR):$dst, (imm:i32):$imm)
  // Pattern complexity = 9  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant &&
        N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_111(N, PPC::TCRETURNdi8, 2);
      return Result;
    }
  }
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {

    // Pattern: (PPCtc_return:isVoid CTRRC:i32:$dst, (imm:i32):$imm)
    // Emits: (TCRETURNri:isVoid CTRRC:i32:$dst, (imm:i32):$imm)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i32) {
      SDNode *Result = Emit_111(N, PPC::TCRETURNri, 2);
      return Result;
    }

    // Pattern: (PPCtc_return:isVoid CTRRC8:i64:$dst, (imm:i32):$imm)
    // Emits: (TCRETURNri8:isVoid CTRRC8:i64:$dst, (imm:i32):$imm)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_111(N, PPC::TCRETURNri8, 2);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_VCMP_v16i8(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N2);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32)
    // Emits: (VCMPEQUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(6)) {
      SDNode *Result = Emit_81(N, PPC::VCMPEQUB, MVT::v16i8);
      return Result;
    }

    // Pattern: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32)
    // Emits: (VCMPGTSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(774)) {
      SDNode *Result = Emit_81(N, PPC::VCMPGTSB, MVT::v16i8);
      return Result;
    }

    // Pattern: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32)
    // Emits: (VCMPGTUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(518)) {
      SDNode *Result = Emit_81(N, PPC::VCMPGTUB, MVT::v16i8);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_VCMP_v8i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N2);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32)
    // Emits: (VCMPEQUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(70)) {
      SDNode *Result = Emit_81(N, PPC::VCMPEQUH, MVT::v8i16);
      return Result;
    }

    // Pattern: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32)
    // Emits: (VCMPGTSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(838)) {
      SDNode *Result = Emit_81(N, PPC::VCMPGTSH, MVT::v8i16);
      return Result;
    }

    // Pattern: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32)
    // Emits: (VCMPGTUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(582)) {
      SDNode *Result = Emit_81(N, PPC::VCMPGTUH, MVT::v8i16);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_VCMP_v4i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N2);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32)
    // Emits: (VCMPEQUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(134)) {
      SDNode *Result = Emit_81(N, PPC::VCMPEQUW, MVT::v4i32);
      return Result;
    }

    // Pattern: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32)
    // Emits: (VCMPGTSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(902)) {
      SDNode *Result = Emit_81(N, PPC::VCMPGTSW, MVT::v4i32);
      return Result;
    }

    // Pattern: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32)
    // Emits: (VCMPGTUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(646)) {
      SDNode *Result = Emit_81(N, PPC::VCMPGTUW, MVT::v4i32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_VCMP_v4f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N2);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32)
    // Emits: (VCMPBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(966)) {
      SDNode *Result = Emit_81(N, PPC::VCMPBFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32)
    // Emits: (VCMPEQFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(198)) {
      SDNode *Result = Emit_81(N, PPC::VCMPEQFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32)
    // Emits: (VCMPGEFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(454)) {
      SDNode *Result = Emit_81(N, PPC::VCMPGEFP, MVT::v4f32);
      return Result;
    }

    // Pattern: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32)
    // Emits: (VCMPGTFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(710)) {
      SDNode *Result = Emit_81(N, PPC::VCMPGTFP, MVT::v4f32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_112(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, N1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_PPCISD_VCMPo_v16i8(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N2);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32)
    // Emits: (VCMPEQUBo:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(6)) {
      SDNode *Result = Emit_112(N, PPC::VCMPEQUBo, MVT::v16i8);
      return Result;
    }

    // Pattern: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32)
    // Emits: (VCMPGTSBo:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(774)) {
      SDNode *Result = Emit_112(N, PPC::VCMPGTSBo, MVT::v16i8);
      return Result;
    }

    // Pattern: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32)
    // Emits: (VCMPGTUBo:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(518)) {
      SDNode *Result = Emit_112(N, PPC::VCMPGTUBo, MVT::v16i8);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_VCMPo_v8i16(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N2);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32)
    // Emits: (VCMPEQUHo:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(70)) {
      SDNode *Result = Emit_112(N, PPC::VCMPEQUHo, MVT::v8i16);
      return Result;
    }

    // Pattern: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32)
    // Emits: (VCMPGTSHo:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(838)) {
      SDNode *Result = Emit_112(N, PPC::VCMPGTSHo, MVT::v8i16);
      return Result;
    }

    // Pattern: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32)
    // Emits: (VCMPGTUHo:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(582)) {
      SDNode *Result = Emit_112(N, PPC::VCMPGTUHo, MVT::v8i16);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_VCMPo_v4i32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N2);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32)
    // Emits: (VCMPEQUWo:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(134)) {
      SDNode *Result = Emit_112(N, PPC::VCMPEQUWo, MVT::v4i32);
      return Result;
    }

    // Pattern: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32)
    // Emits: (VCMPGTSWo:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(902)) {
      SDNode *Result = Emit_112(N, PPC::VCMPGTSWo, MVT::v4i32);
      return Result;
    }

    // Pattern: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32)
    // Emits: (VCMPGTUWo:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(646)) {
      SDNode *Result = Emit_112(N, PPC::VCMPGTUWo, MVT::v4i32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_VCMPo_v4f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N2);
  if (Tmp0) {
    int64_t CN1 = Tmp0->getSExtValue();

    // Pattern: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32)
    // Emits: (VCMPBFPo:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(966)) {
      SDNode *Result = Emit_112(N, PPC::VCMPBFPo, MVT::v4f32);
      return Result;
    }

    // Pattern: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32)
    // Emits: (VCMPEQFPo:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(198)) {
      SDNode *Result = Emit_112(N, PPC::VCMPEQFPo, MVT::v4f32);
      return Result;
    }

    // Pattern: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32)
    // Emits: (VCMPGEFPo:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(454)) {
      SDNode *Result = Emit_112(N, PPC::VCMPGEFPo, MVT::v4f32);
      return Result;
    }

    // Pattern: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32)
    // Emits: (VCMPGTFPo:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
    // Pattern complexity = 8  cost = 1  size = 0
    if (CN1 == INT64_C(710)) {
      SDNode *Result = Emit_112(N, PPC::VCMPGTFPo, MVT::v4f32);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PPCISD_VMADDFP_v4f32(const SDValue &N) {
  SDNode *Result = Emit_99(N, PPC::VMADDFP, MVT::v4f32);
  return Result;
}

SDNode *Select_PPCISD_VNMSUBFP_v4f32(const SDValue &N) {
  SDNode *Result = Emit_99(N, PPC::VNMSUBFP, MVT::v4f32);
  return Result;
}

SDNode *Select_PPCISD_VPERM_v16i8(const SDValue &N) {
  SDNode *Result = Emit_99(N, PPC::VPERM, MVT::v16i8);
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
  case ISD::ADD: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ADD_i32(N);
    case MVT::i64:
      return Select_ISD_ADD_i64(N);
    case MVT::v16i8:
      return Select_ISD_ADD_v16i8(N);
    case MVT::v8i16:
      return Select_ISD_ADD_v8i16(N);
    case MVT::v4i32:
      return Select_ISD_ADD_v4i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADDC: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ADDC_i32(N);
    case MVT::i64:
      return Select_ISD_ADDC_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADDE: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ADDE_i32(N);
    case MVT::i64:
      return Select_ISD_ADDE_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::AND: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_AND_i32(N);
    case MVT::i64:
      return Select_ISD_AND_i64(N);
    case MVT::v4i32:
      return Select_ISD_AND_v4i32(N);
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
  case ISD::ATOMIC_CMP_SWAP: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ATOMIC_CMP_SWAP_i32(N);
    case MVT::i64:
      return Select_ISD_ATOMIC_CMP_SWAP_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ATOMIC_LOAD_ADD: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ATOMIC_LOAD_ADD_i32(N);
    case MVT::i64:
      return Select_ISD_ATOMIC_LOAD_ADD_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ATOMIC_LOAD_AND: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ATOMIC_LOAD_AND_i32(N);
    case MVT::i64:
      return Select_ISD_ATOMIC_LOAD_AND_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ATOMIC_LOAD_NAND: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ATOMIC_LOAD_NAND_i32(N);
    case MVT::i64:
      return Select_ISD_ATOMIC_LOAD_NAND_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ATOMIC_LOAD_OR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ATOMIC_LOAD_OR_i32(N);
    case MVT::i64:
      return Select_ISD_ATOMIC_LOAD_OR_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ATOMIC_LOAD_SUB: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ATOMIC_LOAD_SUB_i32(N);
    case MVT::i64:
      return Select_ISD_ATOMIC_LOAD_SUB_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ATOMIC_LOAD_XOR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ATOMIC_LOAD_XOR_i32(N);
    case MVT::i64:
      return Select_ISD_ATOMIC_LOAD_XOR_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ATOMIC_SWAP: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ATOMIC_SWAP_i32(N);
    case MVT::i64:
      return Select_ISD_ATOMIC_SWAP_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::BIT_CONVERT: {
    switch (NVT) {
    case MVT::v16i8:
      return Select_ISD_BIT_CONVERT_v16i8(N);
    case MVT::v8i16:
      return Select_ISD_BIT_CONVERT_v8i16(N);
    case MVT::v4i32:
      return Select_ISD_BIT_CONVERT_v4i32(N);
    case MVT::v4f32:
      return Select_ISD_BIT_CONVERT_v4f32(N);
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
  case ISD::BUILD_VECTOR: {
    switch (NVT) {
    case MVT::v16i8:
      return Select_ISD_BUILD_VECTOR_v16i8(N);
    case MVT::v8i16:
      return Select_ISD_BUILD_VECTOR_v8i16(N);
    case MVT::v4i32:
      return Select_ISD_BUILD_VECTOR_v4i32(N);
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
    case MVT::i64:
      return Select_ISD_CTLZ_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::Constant: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_Constant_i32(N);
    case MVT::i64:
      return Select_ISD_Constant_i64(N);
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
    case MVT::v4f32:
      return Select_ISD_FADD_v4f32(N);
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
    case MVT::v4f32:
      return Select_ISD_FMUL_v4f32(N);
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
    case MVT::v4f32:
      return Select_ISD_FSUB_v4f32(N);
    default:
      break;
    }
    break;
  }
  case ISD::INTRINSIC_VOID: {
    switch (NVT) {
    default:
      return Select_ISD_INTRINSIC_VOID(N);
      break;
    }
    break;
  }
  case ISD::INTRINSIC_WO_CHAIN: {
    switch (NVT) {
    case MVT::v16i8:
      return Select_ISD_INTRINSIC_WO_CHAIN_v16i8(N);
    case MVT::v8i16:
      return Select_ISD_INTRINSIC_WO_CHAIN_v8i16(N);
    case MVT::v4i32:
      return Select_ISD_INTRINSIC_WO_CHAIN_v4i32(N);
    case MVT::v4f32:
      return Select_ISD_INTRINSIC_WO_CHAIN_v4f32(N);
    default:
      break;
    }
    break;
  }
  case ISD::INTRINSIC_W_CHAIN: {
    switch (NVT) {
    case MVT::v16i8:
      return Select_ISD_INTRINSIC_W_CHAIN_v16i8(N);
    case MVT::v8i16:
      return Select_ISD_INTRINSIC_W_CHAIN_v8i16(N);
    case MVT::v4i32:
      return Select_ISD_INTRINSIC_W_CHAIN_v4i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::LOAD: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_LOAD_i32(N);
    case MVT::i64:
      return Select_ISD_LOAD_i64(N);
    case MVT::f32:
      return Select_ISD_LOAD_f32(N);
    case MVT::f64:
      return Select_ISD_LOAD_f64(N);
    case MVT::v4i32:
      return Select_ISD_LOAD_v4i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::MEMBARRIER: {
    switch (NVT) {
    default:
      return Select_ISD_MEMBARRIER(N);
      break;
    }
    break;
  }
  case ISD::MUL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_MUL_i32(N);
    case MVT::i64:
      return Select_ISD_MUL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::MULHS: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_MULHS_i32(N);
    case MVT::i64:
      return Select_ISD_MULHS_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::MULHU: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_MULHU_i32(N);
    case MVT::i64:
      return Select_ISD_MULHU_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::OR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_OR_i32(N);
    case MVT::i64:
      return Select_ISD_OR_i64(N);
    case MVT::v4i32:
      return Select_ISD_OR_v4i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::ROTL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_ROTL_i32(N);
    case MVT::i64:
      return Select_ISD_ROTL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SDIV: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SDIV_i32(N);
    case MVT::i64:
      return Select_ISD_SDIV_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SHL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SHL_i32(N);
    case MVT::i64:
      return Select_ISD_SHL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SIGN_EXTEND: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_SIGN_EXTEND_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SIGN_EXTEND_INREG: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SIGN_EXTEND_INREG_i32(N);
    case MVT::i64:
      return Select_ISD_SIGN_EXTEND_INREG_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SRA: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SRA_i32(N);
    case MVT::i64:
      return Select_ISD_SRA_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SRL: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SRL_i32(N);
    case MVT::i64:
      return Select_ISD_SRL_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::STORE: {
    switch (NVT) {
    default:
      if (TLI.getPointerTy() == NVT)
        return Select_ISD_STORE_iPTR(N);
      return Select_ISD_STORE(N);
      break;
    }
    break;
  }
  case ISD::SUB: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SUB_i32(N);
    case MVT::i64:
      return Select_ISD_SUB_i64(N);
    case MVT::v16i8:
      return Select_ISD_SUB_v16i8(N);
    case MVT::v8i16:
      return Select_ISD_SUB_v8i16(N);
    case MVT::v4i32:
      return Select_ISD_SUB_v4i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUBC: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SUBC_i32(N);
    case MVT::i64:
      return Select_ISD_SUBC_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUBE: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_SUBE_i32(N);
    case MVT::i64:
      return Select_ISD_SUBE_i64(N);
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
  case ISD::TRUNCATE: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_TRUNCATE_i32(N);
    default:
      break;
    }
    break;
  }
  case ISD::UDIV: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_UDIV_i32(N);
    case MVT::i64:
      return Select_ISD_UDIV_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::VECTOR_SHUFFLE: {
    switch (NVT) {
    case MVT::v16i8:
      return Select_ISD_VECTOR_SHUFFLE_v16i8(N);
    default:
      break;
    }
    break;
  }
  case ISD::XOR: {
    switch (NVT) {
    case MVT::i32:
      return Select_ISD_XOR_i32(N);
    case MVT::i64:
      return Select_ISD_XOR_i64(N);
    case MVT::v4i32:
      return Select_ISD_XOR_v4i32(N);
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
  case PPCISD::BCTRL_ELF: {
    switch (NVT) {
    default:
      return Select_PPCISD_BCTRL_ELF(N);
      break;
    }
    break;
  }
  case PPCISD::BCTRL_Macho: {
    switch (NVT) {
    default:
      return Select_PPCISD_BCTRL_Macho(N);
      break;
    }
    break;
  }
  case PPCISD::CALL_ELF: {
    switch (NVT) {
    default:
      return Select_PPCISD_CALL_ELF(N);
      break;
    }
    break;
  }
  case PPCISD::CALL_Macho: {
    switch (NVT) {
    default:
      return Select_PPCISD_CALL_Macho(N);
      break;
    }
    break;
  }
  case PPCISD::DYNALLOC: {
    switch (NVT) {
    case MVT::i32:
      return Select_PPCISD_DYNALLOC_i32(N);
    case MVT::i64:
      return Select_PPCISD_DYNALLOC_i64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::EXTSW_32: {
    switch (NVT) {
    case MVT::i32:
      return Select_PPCISD_EXTSW_32_i32(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::FADDRTZ: {
    switch (NVT) {
    case MVT::f64:
      return Select_PPCISD_FADDRTZ_f64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::FCFID: {
    switch (NVT) {
    case MVT::f64:
      return Select_PPCISD_FCFID_f64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::FCTIDZ: {
    switch (NVT) {
    case MVT::f64:
      return Select_PPCISD_FCTIDZ_f64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::FCTIWZ: {
    switch (NVT) {
    case MVT::f64:
      return Select_PPCISD_FCTIWZ_f64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::FSEL: {
    switch (NVT) {
    case MVT::f32:
      return Select_PPCISD_FSEL_f32(N);
    case MVT::f64:
      return Select_PPCISD_FSEL_f64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::Hi: {
    switch (NVT) {
    case MVT::i32:
      return Select_PPCISD_Hi_i32(N);
    case MVT::i64:
      return Select_PPCISD_Hi_i64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::LARX: {
    switch (NVT) {
    case MVT::i32:
      return Select_PPCISD_LARX_i32(N);
    case MVT::i64:
      return Select_PPCISD_LARX_i64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::LBRX: {
    switch (NVT) {
    case MVT::i32:
      return Select_PPCISD_LBRX_i32(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::Lo: {
    switch (NVT) {
    case MVT::i32:
      return Select_PPCISD_Lo_i32(N);
    case MVT::i64:
      return Select_PPCISD_Lo_i64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::MFFS: {
    switch (NVT) {
    case MVT::f64:
      return Select_PPCISD_MFFS_f64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::MTCTR: {
    switch (NVT) {
    default:
      return Select_PPCISD_MTCTR(N);
      break;
    }
    break;
  }
  case PPCISD::MTFSB0: {
    switch (NVT) {
    default:
      return Select_PPCISD_MTFSB0(N);
      break;
    }
    break;
  }
  case PPCISD::MTFSB1: {
    switch (NVT) {
    default:
      return Select_PPCISD_MTFSB1(N);
      break;
    }
    break;
  }
  case PPCISD::MTFSF: {
    switch (NVT) {
    case MVT::f64:
      return Select_PPCISD_MTFSF_f64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::RET_FLAG: {
    switch (NVT) {
    default:
      return Select_PPCISD_RET_FLAG(N);
      break;
    }
    break;
  }
  case PPCISD::SHL: {
    switch (NVT) {
    case MVT::i32:
      return Select_PPCISD_SHL_i32(N);
    case MVT::i64:
      return Select_PPCISD_SHL_i64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::SRA: {
    switch (NVT) {
    case MVT::i32:
      return Select_PPCISD_SRA_i32(N);
    case MVT::i64:
      return Select_PPCISD_SRA_i64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::SRL: {
    switch (NVT) {
    case MVT::i32:
      return Select_PPCISD_SRL_i32(N);
    case MVT::i64:
      return Select_PPCISD_SRL_i64(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::STBRX: {
    switch (NVT) {
    default:
      return Select_PPCISD_STBRX(N);
      break;
    }
    break;
  }
  case PPCISD::STCX: {
    switch (NVT) {
    default:
      return Select_PPCISD_STCX(N);
      break;
    }
    break;
  }
  case PPCISD::STD_32: {
    switch (NVT) {
    default:
      return Select_PPCISD_STD_32(N);
      break;
    }
    break;
  }
  case PPCISD::STFIWX: {
    switch (NVT) {
    default:
      return Select_PPCISD_STFIWX(N);
      break;
    }
    break;
  }
  case PPCISD::TC_RETURN: {
    switch (NVT) {
    default:
      return Select_PPCISD_TC_RETURN(N);
      break;
    }
    break;
  }
  case PPCISD::VCMP: {
    switch (NVT) {
    case MVT::v16i8:
      return Select_PPCISD_VCMP_v16i8(N);
    case MVT::v8i16:
      return Select_PPCISD_VCMP_v8i16(N);
    case MVT::v4i32:
      return Select_PPCISD_VCMP_v4i32(N);
    case MVT::v4f32:
      return Select_PPCISD_VCMP_v4f32(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::VCMPo: {
    switch (NVT) {
    case MVT::v16i8:
      return Select_PPCISD_VCMPo_v16i8(N);
    case MVT::v8i16:
      return Select_PPCISD_VCMPo_v8i16(N);
    case MVT::v4i32:
      return Select_PPCISD_VCMPo_v4i32(N);
    case MVT::v4f32:
      return Select_PPCISD_VCMPo_v4f32(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::VMADDFP: {
    switch (NVT) {
    case MVT::v4f32:
      return Select_PPCISD_VMADDFP_v4f32(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::VNMSUBFP: {
    switch (NVT) {
    case MVT::v4f32:
      return Select_PPCISD_VNMSUBFP_v4f32(N);
    default:
      break;
    }
    break;
  }
  case PPCISD::VPERM: {
    switch (NVT) {
    case MVT::v16i8:
      return Select_PPCISD_VPERM_v16i8(N);
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

