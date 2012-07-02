//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the Alpha target
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
inline SDValue Transform_LH16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //ldah part of constant (or more if too big)
  return getI64Imm(get_ldah16(N->getZExtValue()));

}
inline SDValue Transform_LL16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //lda part of constant
  return getI64Imm(get_lda16(N->getZExtValue()));

}
inline SDValue Transform_SExt16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //signed extend int to long
  return getI64Imm(((int64_t)N->getZExtValue() << 48) >> 48);

}
inline SDValue Transform_SExt32(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //signed extend int to long
  return getI64Imm(((int64_t)N->getZExtValue() << 32) >> 32);

}
inline SDValue Transform_iZAPX(SDNode *N) {
 // get imm to ZAPi
  ConstantSDNode *RHS = cast<ConstantSDNode>(N->getOperand(1));
  return getI64Imm(get_zapImm(SDValue(), RHS->getZExtValue()));

}
inline SDValue Transform_immBRCond(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  switch((uint64_t)N->getZExtValue()) {
    default: assert(0 && "Unknown branch type");
    case 0:  return getI64Imm(Alpha::BEQ);
    case 1:  return getI64Imm(Alpha::BNE);
    case 2:  return getI64Imm(Alpha::BGE);
    case 3:  return getI64Imm(Alpha::BGT);
    case 4:  return getI64Imm(Alpha::BLE);
    case 5:  return getI64Imm(Alpha::BLT);
    case 6:  return getI64Imm(Alpha::BLBS);
    case 7:  return getI64Imm(Alpha::BLBC);
    case 20: return getI64Imm(Alpha::FBEQ);
    case 21: return getI64Imm(Alpha::FBNE);
    case 22: return getI64Imm(Alpha::FBGE);
    case 23: return getI64Imm(Alpha::FBGT);
    case 24: return getI64Imm(Alpha::FBLE);
    case 25: return getI64Imm(Alpha::FBLT);
  }

}
inline SDValue Transform_invX(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //invert
  return getI64Imm(~N->getZExtValue());

}
inline SDValue Transform_nearP2RemX(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  uint64_t x =
    abs(N->getZExtValue() - getNearPower2((uint64_t)N->getZExtValue()));
  return getI64Imm(Log2_64(x));

}
inline SDValue Transform_nearP2X(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return getI64Imm(Log2_64(getNearPower2((uint64_t)N->getZExtValue())));

}
inline SDValue Transform_negX(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //negate
  return getI64Imm(~N->getZExtValue() + 1);

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
inline bool Predicate_immConst2Part(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  //true if imm fits in a LDAH LDA pair
  int64_t val = (int64_t)N->getZExtValue();
  return (val <= IMM_FULLHIGH  && val >= IMM_FULLLOW);

}
inline bool Predicate_immConst2PartInt(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  //true if imm fits in a LDAH LDA pair with zeroext
  uint64_t uval = N->getZExtValue();
  int32_t val32 = (int32_t)uval;
  return ((uval >> 32) == 0 && //empty upper bits
          val32 <= IMM_FULLHIGH);
//          val32 >= IMM_FULLLOW  + IMM_LOW  * IMM_MULT); //Always True

}
inline bool Predicate_immFPZ(SDNode *inN) {
  ConstantFPSDNode *N = cast<ConstantFPSDNode>(inN);
 //the only fpconstant nodes are +/- 0.0
  (void)N; // silence warning.
  return true;

}
inline bool Predicate_immRem1(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return chkRemNearPower2(N->getZExtValue(),1,0);
}
inline bool Predicate_immRem1n(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return chkRemNearPower2(N->getZExtValue(),1,1);
}
inline bool Predicate_immRem2(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return chkRemNearPower2(N->getZExtValue(),2,0);
}
inline bool Predicate_immRem2n(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return chkRemNearPower2(N->getZExtValue(),2,1);
}
inline bool Predicate_immRem3(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return chkRemNearPower2(N->getZExtValue(),3,0);
}
inline bool Predicate_immRem3n(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return chkRemNearPower2(N->getZExtValue(),3,1);
}
inline bool Predicate_immRem4(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return chkRemNearPower2(N->getZExtValue(),4,0);
}
inline bool Predicate_immRem4n(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return chkRemNearPower2(N->getZExtValue(),4,1);
}
inline bool Predicate_immRem5(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return chkRemNearPower2(N->getZExtValue(),5,0);
}
inline bool Predicate_immRem5n(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
return chkRemNearPower2(N->getZExtValue(),5,1);
}
inline bool Predicate_immRemP2(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return isPowerOf2_64(N->getZExtValue() -
                         getNearPower2((uint64_t)N->getZExtValue()));

}
inline bool Predicate_immRemP2n(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);

  return isPowerOf2_64(getNearPower2((uint64_t)N->getZExtValue()) -
                         N->getZExtValue());

}
inline bool Predicate_immSExt16(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //imm fits in 16 bit sign extended field
  return ((int64_t)N->getZExtValue() << 48) >> 48 ==
         (int64_t)N->getZExtValue();

}
inline bool Predicate_immSExt16int(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //(int)imm fits in a 16 bit sign extended field
  return ((int64_t)N->getZExtValue() << 48) >> 48 ==
         ((int64_t)N->getZExtValue() << 32) >> 32;

}
inline bool Predicate_immUExt8(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //imm fits in 8 bit zero extended field
  return (uint64_t)N->getZExtValue() == (uint8_t)N->getZExtValue();

}
inline bool Predicate_immUExt8ME(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //use this imm for mulqi
  int64_t d =  abs((int64_t)N->getZExtValue() -
               (int64_t)getNearPower2((uint64_t)N->getZExtValue()));
  if (isPowerOf2_64(d)) return false;
  switch (d) {
    case 1: case 3: case 5: return false; 
    default: return (uint64_t)N->getZExtValue() == (uint8_t)N->getZExtValue();
  };

}
inline bool Predicate_immUExt8inv(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //inverted imm fits in 8 bit zero extended field
  return (uint64_t)~N->getZExtValue() == (uint8_t)~N->getZExtValue();

}
inline bool Predicate_immUExt8neg(SDNode *inN) {
  ConstantSDNode *N = cast<ConstantSDNode>(inN);
 //negated imm fits in 8 bit zero extended field
  return ((uint64_t)~N->getZExtValue() + 1) ==
         (uint8_t)((uint64_t)~N->getZExtValue() + 1);

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
inline bool Predicate_zappat(SDNode *N) {

  ConstantSDNode *RHS = dyn_cast<ConstantSDNode>(N->getOperand(1));
  if (!RHS) return 0;
  uint64_t build = get_zapImm(N->getOperand(0), (uint64_t)RHS->getZExtValue());
  return build != 0;

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
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_AlphaISD_CVTQS__f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_0(N, Alpha::CVTQS, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_AlphaISD_CVTQT__f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_0(N, Alpha::CVTQT, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_AlphaISD_CVTTQ__f64(const SDValue &N) {
  SDNode *Result = Emit_0(N, Alpha::CVTTQ, MVT::f64);
  return Result;
}

SDNode *Emit_1(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Select_AlphaISD_GPRelHi_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (Alpha_gprelhi:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
  // Emits: (LDAHr:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_1(N, Alpha::LDAHr, MVT::i64);
    return Result;
  }

  // Pattern: (Alpha_gprelhi:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB)
  // Emits: (LDAHr:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetConstantPool) {
    SDNode *Result = Emit_1(N, Alpha::LDAHr, MVT::i64);
    return Result;
  }

  // Pattern: (Alpha_gprelhi:i64 (tjumptable:i64):$DISP, GPRC:i64:$RB)
  // Emits: (LDAHr:i64 (tjumptable:i64):$DISP, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetJumpTable) {
    SDNode *Result = Emit_1(N, Alpha::LDAHr, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_AlphaISD_GPRelLo_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
  // Emits: (LDAr:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_1(N, Alpha::LDAr, MVT::i64);
    return Result;
  }

  // Pattern: (Alpha_gprello:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB)
  // Emits: (LDAr:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetConstantPool) {
    SDNode *Result = Emit_1(N, Alpha::LDAr, MVT::i64);
    return Result;
  }

  // Pattern: (Alpha_gprello:i64 (tjumptable:i64):$DISP, GPRC:i64:$RB)
  // Emits: (LDAr:i64 (tjumptable:i64):$DISP, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetJumpTable) {
    SDNode *Result = Emit_1(N, Alpha::LDAr, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_2(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, HasInFlag ? 2 : 1);
}
SDNode *Select_AlphaISD_RET_FLAG(const SDValue &N) {
  SDNode *Result = Emit_2(N, Alpha::RETDAGp);
  return Result;
}

SDNode *Select_AlphaISD_RelLit_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);

  // Pattern: (Alpha_rellit:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
  // Emits: (LDQl:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_1(N, Alpha::LDQl, MVT::i64);
    return Result;
  }

  // Pattern: (Alpha_rellit:i64 (texternalsym:i64):$ext, GPRC:i64:$RB)
  // Emits: (LDQl:i64 (texternalsym:i64):$ext, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::TargetExternalSymbol) {
    SDNode *Result = Emit_1(N, Alpha::LDQl, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_3(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_4(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N1);
}
SDNode *Emit_5(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, Tmp3);
}
SDNode *Emit_6(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, N0);
}
SDNode *Emit_7(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp4 = Transform_negX(Tmp3.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, Tmp4);
}
SDNode *Emit_8(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_negX(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_9(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, N0);
}
SDNode *Select_ISD_ADD_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::SHL) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (add:i64 (shl:i64 GPRC:i64:$RA, 2:i64), (imm:i64)<<P:Predicate_immUExt8>>:$L)
        // Emits: (S4ADDQi:i64 GPRC:i64:$RA, (imm:i64):$L)
        // Pattern complexity = 15  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::Constant &&
              Predicate_immUExt8(N1.getNode())) {
            SDNode *Result = Emit_5(N, Alpha::S4ADDQi, MVT::i64);
            return Result;
          }
        }

        // Pattern: (add:i64 (shl:i64 GPRC:i64:$RA, 3:i64), (imm:i64)<<P:Predicate_immUExt8>>:$L)
        // Emits: (S8ADDQi:i64 GPRC:i64:$RA, (imm:i64):$L)
        // Pattern complexity = 15  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::Constant &&
              Predicate_immUExt8(N1.getNode())) {
            SDNode *Result = Emit_5(N, Alpha::S8ADDQi, MVT::i64);
            return Result;
          }
        }

        // Pattern: (add:i64 (shl:i64 GPRC:i64:$RA, 2:i64), (imm:i64)<<P:Predicate_immUExt8neg>><<X:negX>>:$L)
        // Emits: (S4SUBQi:i64 GPRC:i64:$RA, (negX:i64 (imm:i64)<<P:Predicate_immUExt8neg>>:$L))
        // Pattern complexity = 15  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::Constant &&
              Predicate_immUExt8neg(N1.getNode())) {
            SDNode *Result = Emit_7(N, Alpha::S4SUBQi, MVT::i64);
            return Result;
          }
        }

        // Pattern: (add:i64 (shl:i64 GPRC:i64:$RA, 3:i64), (imm:i64)<<P:Predicate_immUExt8neg>><<X:negX>>:$L)
        // Emits: (S8SUBQi:i64 GPRC:i64:$RA, (negX:i64 (imm:i64)<<P:Predicate_immUExt8neg>>:$L))
        // Pattern complexity = 15  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::Constant &&
              Predicate_immUExt8neg(N1.getNode())) {
            SDNode *Result = Emit_7(N, Alpha::S8SUBQi, MVT::i64);
            return Result;
          }
        }

        // Pattern: (add:i64 (shl:i64 GPRC:i64:$RA, 2:i64), GPRC:i64:$RB)
        // Emits: (S4ADDQr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 11  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDNode *Result = Emit_4(N, Alpha::S4ADDQr, MVT::i64);
          return Result;
        }

        // Pattern: (add:i64 (shl:i64 GPRC:i64:$RA, 3:i64), GPRC:i64:$RB)
        // Emits: (S8ADDQr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 11  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDNode *Result = Emit_4(N, Alpha::S8ADDQr, MVT::i64);
          return Result;
        }
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::SHL) {
      SDValue N10 = N1.getOperand(0);
      SDValue N11 = N1.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (add:i64 GPRC:i64:$RB, (shl:i64 GPRC:i64:$RA, 2:i64))
        // Emits: (S4ADDQr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 11  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDNode *Result = Emit_9(N, Alpha::S4ADDQr, MVT::i64);
          return Result;
        }

        // Pattern: (add:i64 GPRC:i64:$RB, (shl:i64 GPRC:i64:$RA, 3:i64))
        // Emits: (S8ADDQr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 11  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDNode *Result = Emit_9(N, Alpha::S8ADDQr, MVT::i64);
          return Result;
        }
      }
    }
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (add:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L)
      // Emits: (ADDQi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUExt8(N1.getNode())) {
        SDNode *Result = Emit_3(N, Alpha::ADDQi, MVT::i64);
        return Result;
      }

      // Pattern: (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP)
      // Emits: (LDA:i64 (imm:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immSExt16(N1.getNode())) {
        SDNode *Result = Emit_6(N, Alpha::LDA, MVT::i64);
        return Result;
      }

      // Pattern: (add:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8neg>><<X:negX>>:$L)
      // Emits: (SUBQi:i64 GPRC:i64:$RA, (negX:i64 (imm:i64)<<P:Predicate_immUExt8neg>>:$L))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUExt8neg(N1.getNode())) {
        SDNode *Result = Emit_8(N, Alpha::SUBQi, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (add:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Emits: (ADDQr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Alpha::ADDQr, MVT::i64);
  return Result;
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
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_invX(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_12(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N010);
}
SDNode *Emit_13(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = Transform_iZAPX(N.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp2);
}
SDNode *Emit_14(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N00);
}
SDNode *Select_ISD_AND_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    {
      SDValue N1 = N.getOperand(1);
      {
        ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
        if (Tmp0) {

          // Pattern: (and:i64 (srl:i64 GPRC:i64:$RA, (shl:i64 GPRC:i64:$RB, 3:i64)), 255:i64)
          // Emits: (EXTBL:i64 GPRC:i64:$RA, GPRC:i64:$RB)
          // Pattern complexity = 19  cost = 1  size = 0
          if (CheckAndMask(N0, Tmp0, INT64_C(255)) &&
              N0.getOpcode() == ISD::SRL) {
            SDValue N00 = N0.getOperand(0);
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::SHL) {
              SDValue N010 = N01.getOperand(0);
              SDValue N011 = N01.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N011);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(3)) {
                  SDNode *Result = Emit_12(N, Alpha::EXTBL, MVT::i64);
                  return Result;
                }
              }
            }
          }

          // Pattern: (and:i64 (srl:i64 GPRC:i64:$RA, (shl:i64 GPRC:i64:$RB, 3:i64)), 65535:i64)
          // Emits: (EXTWL:i64 GPRC:i64:$RA, GPRC:i64:$RB)
          // Pattern complexity = 19  cost = 1  size = 0
          if (CheckAndMask(N0, Tmp0, INT64_C(65535)) &&
              N0.getOpcode() == ISD::SRL) {
            SDValue N00 = N0.getOperand(0);
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::SHL) {
              SDValue N010 = N01.getOperand(0);
              SDValue N011 = N01.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N011);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(3)) {
                  SDNode *Result = Emit_12(N, Alpha::EXTWL, MVT::i64);
                  return Result;
                }
              }
            }
          }

          // Pattern: (and:i64 (srl:i64 GPRC:i64:$RA, (shl:i64 GPRC:i64:$RB, 3:i64)), 4294967295:i64)
          // Emits: (EXTLL:i64 GPRC:i64:$RA, GPRC:i64:$RB)
          // Pattern complexity = 19  cost = 1  size = 0
          if (CheckAndMask(N0, Tmp0, INT64_C(4294967295)) &&
              N0.getOpcode() == ISD::SRL) {
            SDValue N00 = N0.getOperand(0);
            SDValue N01 = N0.getOperand(1);
            if (N01.getOpcode() == ISD::SHL) {
              SDValue N010 = N01.getOperand(0);
              SDValue N011 = N01.getOperand(1);
              ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N011);
              if (Tmp1) {
                int64_t CN2 = Tmp1->getSExtValue();
                if (CN2 == INT64_C(3)) {
                  SDNode *Result = Emit_12(N, Alpha::EXTLL, MVT::i64);
                  return Result;
                }
              }
            }
          }
        }
      }

      // Pattern: (and:i64 GPRC:i64:$RA, (xor:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immAllOnes>>))
      // Emits: (BICr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_10(N, Alpha::BICr, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (and:i64 (xor:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immAllOnes>>), GPRC:i64:$RA)
    // Emits: (BICr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_14(N, Alpha::BICr, MVT::i64);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (and:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L)
      // Emits: (ANDi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUExt8(N1.getNode())) {
        SDNode *Result = Emit_3(N, Alpha::ANDi, MVT::i64);
        return Result;
      }

      // Pattern: (and:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8inv>><<X:invX>>:$L)
      // Emits: (BICi:i64 GPRC:i64:$RA, (invX:i64 (imm:i64):$L))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUExt8inv(N1.getNode())) {
        SDNode *Result = Emit_11(N, Alpha::BICi, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (and:i64 GPRC:i64:$RA, (imm:i64):$L)<<P:Predicate_zappat>>:$imm
  // Emits: (ZAPNOTi:i64 GPRC:i64:$RA, (iZAPX:i64 GPRC:i64:$imm))
  // Pattern complexity = 7  cost = 1  size = 0
  if (Predicate_zappat(N.getNode())) {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_13(N, Alpha::ZAPNOTi, MVT::i64);
      return Result;
    }
  }

  // Pattern: (and:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Emits: (ANDr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Alpha::ANDr, MVT::i64);
  return Result;
}

SDNode *Emit_15(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N2, N3, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_ATOMIC_CMP_SWAP_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_cmp_swap:i64 GPRC:i64:$ptr, GPRC:i64:$cmp, GPRC:i64:$swp)<<P:Predicate_atomic_cmp_swap_32>>
  // Emits: (CAS32:i64 GPRC:i64:$ptr, GPRC:i64:$cmp, GPRC:i64:$swp)
  // Pattern complexity = 4  cost = 11  size = 0
  if (Predicate_atomic_cmp_swap_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    SDValue N3 = N.getOperand(3);
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_15(N, Alpha::CAS32, MVT::i64);
      return Result;
    }
  }

  // Pattern: (atomic_cmp_swap:i64 GPRC:i64:$ptr, GPRC:i64:$cmp, GPRC:i64:$swp)<<P:Predicate_atomic_cmp_swap_64>>
  // Emits: (CAS64:i64 GPRC:i64:$ptr, GPRC:i64:$cmp, GPRC:i64:$swp)
  // Pattern complexity = 4  cost = 11  size = 0
  if (Predicate_atomic_cmp_swap_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    SDValue N3 = N.getOperand(3);
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_15(N, Alpha::CAS64, MVT::i64);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_16(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_ATOMIC_LOAD_ADD_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_load_add:i64 GPRC:i64:$ptr, GPRC:i64:$swp)<<P:Predicate_atomic_load_add_32>>
  // Emits: (LAS32:i64 GPRC:i64:$ptr, GPRC:i64:$swp)
  // Pattern complexity = 4  cost = 11  size = 0
  if (Predicate_atomic_load_add_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_16(N, Alpha::LAS32, MVT::i64);
      return Result;
    }
  }

  // Pattern: (atomic_load_add:i64 GPRC:i64:$ptr, GPRC:i64:$swp)<<P:Predicate_atomic_load_add_64>>
  // Emits: (LAS64:i64 GPRC:i64:$ptr, GPRC:i64:$swp)
  // Pattern complexity = 4  cost = 11  size = 0
  if (Predicate_atomic_load_add_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_16(N, Alpha::LAS64, MVT::i64);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_ATOMIC_SWAP_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);

  // Pattern: (atomic_swap:i64 GPRC:i64:$ptr, GPRC:i64:$swp)<<P:Predicate_atomic_swap_32>>
  // Emits: (SWAP32:i64 GPRC:i64:$ptr, GPRC:i64:$swp)
  // Pattern complexity = 4  cost = 11  size = 0
  if (Predicate_atomic_swap_32(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_16(N, Alpha::SWAP32, MVT::i64);
      return Result;
    }
  }

  // Pattern: (atomic_swap:i64 GPRC:i64:$ptr, GPRC:i64:$swp)<<P:Predicate_atomic_swap_64>>
  // Emits: (SWAP64:i64 GPRC:i64:$ptr, GPRC:i64:$swp)
  // Pattern complexity = 4  cost = 11  size = 0
  if (Predicate_atomic_swap_64(N.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_16(N, Alpha::SWAP64, MVT::i64);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BIT_CONVERT_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_0(N, Alpha::FTOIT, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BIT_CONVERT_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_0(N, Alpha::ITOFT, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_17(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain);
}
SDNode *Select_ISD_BR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_17(N, Alpha::BR);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_18(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x5ULL, MVT::i64);
  SDValue Tmp3 = Transform_immBRCond(Tmp2.getNode());
  SDValue Ops0[] = { Tmp3, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_19(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x1ULL, MVT::i64);
  SDValue Tmp3 = Transform_immBRCond(Tmp2.getNode());
  SDValue Ops0[] = { Tmp3, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_20(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x1ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Ops0[] = { Tmp1, N1, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_21(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N10, N11), 0);
  SDValue Ops1[] = { Tmp1, Tmp4, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Ops1, 4);
}
SDNode *Emit_22(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Tmp3 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i64);
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N10, Tmp3), 0);
  SDValue Ops1[] = { Tmp1, Tmp4, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Ops1, 4);
}
SDNode *Emit_23(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x14ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Ops0[] = { Tmp1, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_24(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x15ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Ops0[] = { Tmp1, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_25(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x16ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Ops0[] = { Tmp1, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_26(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x17ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Ops0[] = { Tmp1, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_27(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x18ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Ops0[] = { Tmp1, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_28(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x19ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Ops0[] = { Tmp1, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_29(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x15ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N10, N11), 0);
  SDValue Ops1[] = { Tmp1, Tmp4, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Ops1, 4);
}
SDNode *Emit_30(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x15ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N11, N10), 0);
  SDValue Ops1[] = { Tmp1, Tmp4, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Ops1, 4);
}
SDNode *Emit_31(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x14ULL, MVT::i64);
  SDValue Tmp1 = Transform_immBRCond(Tmp0.getNode());
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N10, N11), 0);
  SDValue Ops1[] = { Tmp1, Tmp4, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, MVT::Other, Ops1, 4);
}
SDNode *Emit_32(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  SDValue Tmp3 = Transform_immBRCond(Tmp2.getNode());
  SDValue Ops0[] = { Tmp3, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_33(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x2ULL, MVT::i64);
  SDValue Tmp3 = Transform_immBRCond(Tmp2.getNode());
  SDValue Ops0[] = { Tmp3, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_34(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x3ULL, MVT::i64);
  SDValue Tmp3 = Transform_immBRCond(Tmp2.getNode());
  SDValue Ops0[] = { Tmp3, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_35(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x6ULL, MVT::i64);
  SDValue Tmp3 = Transform_immBRCond(Tmp2.getNode());
  SDValue Ops0[] = { Tmp3, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Emit_36(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(0x4ULL, MVT::i64);
  SDValue Tmp3 = Transform_immBRCond(Tmp2.getNode());
  SDValue Ops0[] = { Tmp3, N10, N2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_BRCOND(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::SETCC) {
    SDValue N10 = N1.getOperand(0);
    SDValue N11 = N1.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(0)) {
        SDValue N12 = N1.getOperand(2);

        // Pattern: (brcond:isVoid (setcc:i64 GPRC:i64:$RA, 0:i64, SETLT:Other), (bb:Other):$DISP)
        // Emits: (COND_BRANCH_I:isVoid (immBRCond:i64 5:i64), GPRC:i64:$RA, (bb:Other):$DISP)
        // Pattern complexity = 11  cost = 1  size = 0
        if (cast<CondCodeSDNode>(N12)->get() == ISD::SETLT) {
          SDValue N2 = N.getOperand(2);
          if (N2.getOpcode() == ISD::BasicBlock &&
              N10.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_18(N, Alpha::COND_BRANCH_I);
            return Result;
          }
        }

        // Pattern: (brcond:isVoid (setcc:i64 GPRC:i64:$RA, 0:i64, SETNE:Other), (bb:Other):$DISP)
        // Emits: (COND_BRANCH_I:isVoid (immBRCond:i64 1:i64), GPRC:i64:$RA, (bb:Other):$DISP)
        // Pattern complexity = 11  cost = 1  size = 0
        if (cast<CondCodeSDNode>(N12)->get() == ISD::SETNE) {
          SDValue N2 = N.getOperand(2);
          if (N2.getOpcode() == ISD::BasicBlock &&
              N10.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_19(N, Alpha::COND_BRANCH_I);
            return Result;
          }
        }

        // Pattern: (brcond:isVoid (setcc:i64 GPRC:i64:$RA, 0:i64, SETEQ:Other), (bb:Other):$DISP)
        // Emits: (COND_BRANCH_I:isVoid (immBRCond:i64 0:i64), GPRC:i64:$RA, (bb:Other):$DISP)
        // Pattern complexity = 11  cost = 1  size = 0
        if (cast<CondCodeSDNode>(N12)->get() == ISD::SETEQ) {
          SDValue N2 = N.getOperand(2);
          if (N2.getOpcode() == ISD::BasicBlock &&
              N10.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_32(N, Alpha::COND_BRANCH_I);
            return Result;
          }
        }

        // Pattern: (brcond:isVoid (setcc:i64 GPRC:i64:$RA, 0:i64, SETGE:Other), (bb:Other):$DISP)
        // Emits: (COND_BRANCH_I:isVoid (immBRCond:i64 2:i64), GPRC:i64:$RA, (bb:Other):$DISP)
        // Pattern complexity = 11  cost = 1  size = 0
        if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGE) {
          SDValue N2 = N.getOperand(2);
          if (N2.getOpcode() == ISD::BasicBlock &&
              N10.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_33(N, Alpha::COND_BRANCH_I);
            return Result;
          }
        }

        // Pattern: (brcond:isVoid (setcc:i64 GPRC:i64:$RA, 0:i64, SETGT:Other), (bb:Other):$DISP)
        // Emits: (COND_BRANCH_I:isVoid (immBRCond:i64 3:i64), GPRC:i64:$RA, (bb:Other):$DISP)
        // Pattern complexity = 11  cost = 1  size = 0
        if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGT) {
          SDValue N2 = N.getOperand(2);
          if (N2.getOpcode() == ISD::BasicBlock &&
              N10.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_34(N, Alpha::COND_BRANCH_I);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (brcond:isVoid (and:i64 GPRC:i64:$RA, 1:i64), (bb:Other):$DISP)
  // Emits: (COND_BRANCH_I:isVoid (immBRCond:i64 6:i64), GPRC:i64:$RA, (bb:Other):$DISP)
  // Pattern complexity = 11  cost = 1  size = 0
  if (N1.getOpcode() == ISD::AND) {
    SDValue N10 = N1.getOperand(0);
    SDValue N11 = N1.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
    if (Tmp0) {
      int64_t CN1 = Tmp0->getSExtValue();
      if (CN1 == INT64_C(1)) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock) {
          SDNode *Result = Emit_35(N, Alpha::COND_BRANCH_I);
          return Result;
        }
      }
    }
  }
  if (N1.getOpcode() == ISD::SETCC) {
    SDValue N10 = N1.getOperand(0);
    SDValue N11 = N1.getOperand(1);

    // Pattern: (brcond:isVoid (setcc:i64 GPRC:i64:$RA, 0:i64, SETLE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_I:isVoid (immBRCond:i64 4:i64), GPRC:i64:$RA, (bb:Other):$DISP)
    // Pattern complexity = 11  cost = 1  size = 0
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N11);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDValue N12 = N1.getOperand(2);
          if (cast<CondCodeSDNode>(N12)->get() == ISD::SETLE) {
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::BasicBlock &&
                N10.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_36(N, Alpha::COND_BRANCH_I);
              return Result;
            }
          }
        }
      }
    }
    if (N11.getOpcode() == ISD::ConstantFP &&
        Predicate_immFPZ(N11.getNode())) {
      SDValue N12 = N1.getOperand(2);

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETEQ:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 20:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETEQ) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_23(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETNE:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETNE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_24(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETGE:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 22:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_25(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETGT:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 23:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGT) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_26(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETLE:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 24:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETLE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_27(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETLT:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 25:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETLT) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_28(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETOEQ:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 20:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETOEQ) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_23(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETUEQ:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 20:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUEQ) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_23(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETOGE:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 22:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETOGE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_25(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETUGE:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 22:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUGE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_25(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETOGT:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 23:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETOGT) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_26(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETUGT:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 23:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUGT) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_26(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETOLE:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 24:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETOLE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_27(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETULE:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 24:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETULE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_27(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETOLT:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 25:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETOLT) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_28(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETULT:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 25:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETULT) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_28(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETONE:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETONE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_24(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }

      // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, (fpimm:f64)<<P:Predicate_immFPZ>>, SETUNE:Other), (bb:Other):$DISP)
      // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), F8RC:f64:$RA, (bb:Other):$DISP)
      // Pattern complexity = 10  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUNE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock &&
            N10.getNode()->getValueType(0) == MVT::f64) {
          SDNode *Result = Emit_24(N, Alpha::COND_BRANCH_F);
          return Result;
        }
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L, SETNE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_I:isVoid (immBRCond:i64 0:i64), (CMPEQi:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L), (bb:Other):$DISP)
    // Pattern complexity = 10  cost = 2  size = 0
    if (N11.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N11.getNode())) {
      SDValue N12 = N1.getOperand(2);
      if (cast<CondCodeSDNode>(N12)->get() == ISD::SETNE) {
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::BasicBlock) {
          SDNode *Result = Emit_22(N, Alpha::CMPEQi, Alpha::COND_BRANCH_I, MVT::i64);
          return Result;
        }
      }
    }
    SDValue N12 = N1.getOperand(2);

    // Pattern: (brcond:isVoid (setcc:i64 GPRC:i64:$RA, GPRC:i64:$RB, SETNE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_I:isVoid (immBRCond:i64 0:i64), (CMPEQ:i64 GPRC:i64:$RA, GPRC:i64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETNE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_21(N, Alpha::CMPEQ, Alpha::COND_BRANCH_I, MVT::i64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETEQ:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETEQ) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_29(N, Alpha::CMPTEQ, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOEQ:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETOEQ) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_29(N, Alpha::CMPTEQ, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUEQ:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUEQ) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_29(N, Alpha::CMPTEQ, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETLT:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLT:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETLT) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_29(N, Alpha::CMPTLT, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOLT:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLT:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETOLT) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_29(N, Alpha::CMPTLT, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETULT:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLT:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETULT) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_29(N, Alpha::CMPTLT, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETLE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLE:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETLE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_29(N, Alpha::CMPTLE, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOLE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLE:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETOLE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_29(N, Alpha::CMPTLE, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETULE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLE:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETULE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_29(N, Alpha::CMPTLE, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETGT:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLT:f64 F8RC:f64:$RB, F8RC:f64:$RA), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGT) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_30(N, Alpha::CMPTLT, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOGT:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLT:f64 F8RC:f64:$RB, F8RC:f64:$RA), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETOGT) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_30(N, Alpha::CMPTLT, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUGT:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLT:f64 F8RC:f64:$RB, F8RC:f64:$RA), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUGT) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_30(N, Alpha::CMPTLT, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETGE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLE:f64 F8RC:f64:$RB, F8RC:f64:$RA), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETGE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_30(N, Alpha::CMPTLE, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOGE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLE:f64 F8RC:f64:$RB, F8RC:f64:$RA), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETOGE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_30(N, Alpha::CMPTLE, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUGE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 21:i64), (CMPTLE:f64 F8RC:f64:$RB, F8RC:f64:$RA), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUGE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_30(N, Alpha::CMPTLE, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETNE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 20:i64), (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETNE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_31(N, Alpha::CMPTEQ, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETONE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 20:i64), (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETONE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_31(N, Alpha::CMPTEQ, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }

    // Pattern: (brcond:isVoid (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUNE:Other), (bb:Other):$DISP)
    // Emits: (COND_BRANCH_F:isVoid (immBRCond:i64 20:i64), (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB), (bb:Other):$DISP)
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N12)->get() == ISD::SETUNE) {
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::BasicBlock &&
          N10.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_31(N, Alpha::CMPTEQ, Alpha::COND_BRANCH_F, MVT::f64);
        return Result;
      }
    }
  }

  // Pattern: (brcond:isVoid GPRC:i64:$RA, (bb:Other):$DISP)
  // Emits: (COND_BRANCH_I:isVoid (immBRCond:i64 1:i64), GPRC:i64:$RA, (bb:Other):$DISP)
  // Pattern complexity = 3  cost = 1  size = 0
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_20(N, Alpha::COND_BRANCH_I);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_BRIND(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_17(N, Alpha::JMP);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_37(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
      SDNode *Result = Emit_37(N, Alpha::ADJUSTSTACKDOWN);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_38(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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
    SDNode *Result = Emit_38(N, Alpha::ADJUSTSTACKUP);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_CTLZ_i64(const SDValue &N) {
  SDNode *Result = Emit_0(N, Alpha::CTLZ, MVT::i64);
  return Result;
}

SDNode *Select_ISD_CTPOP_i64(const SDValue &N) {
  SDNode *Result = Emit_0(N, Alpha::CTPOP, MVT::i64);
  return Result;
}

SDNode *Select_ISD_CTTZ_i64(const SDValue &N) {
  SDNode *Result = Emit_0(N, Alpha::CTTZ, MVT::i64);
  return Result;
}

SDNode *Emit_39(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_LL16(Tmp0.getNode());
  SDValue Tmp2 = Transform_LH16(Tmp0.getNode());
  SDValue Tmp3 = CurDAG->getRegister(Alpha::R31, MVT::i64);
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp2, Tmp3), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp1, Tmp4);
}
SDNode *Emit_40(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = CurDAG->getRegister(Alpha::R31, MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, Tmp1);
}
SDNode *Emit_41(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_SExt16(Tmp0.getNode());
  SDValue Tmp2 = CurDAG->getRegister(Alpha::R31, MVT::i64);
  SDValue Tmp3(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp1, Tmp2), 0);
  SDValue Tmp4 = CurDAG->getTargetConstant(0xFULL, MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp3, Tmp4);
}
SDNode *Emit_42(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, MVT VT0, MVT VT1, MVT VT2) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i64);
  SDValue Tmp1 = Transform_SExt32(Tmp0.getNode());
  SDValue Tmp2 = Transform_LL16(Tmp1.getNode());
  SDValue Tmp3 = Transform_SExt32(Tmp0.getNode());
  SDValue Tmp4 = Transform_LH16(Tmp3.getNode());
  SDValue Tmp5 = CurDAG->getRegister(Alpha::R31, MVT::i64);
  SDValue Tmp6(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, Tmp4, Tmp5), 0);
  SDValue Tmp7(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp2, Tmp6), 0);
  SDValue Tmp8 = CurDAG->getTargetConstant(0xFULL, MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc2, VT2, Tmp7, Tmp8);
}
SDNode *Select_ISD_Constant_i64(const SDValue &N) {

  // Pattern: (imm:i64)<<P:Predicate_immSExt16>>:$imm
  // Emits: (LDA:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, R31:i64)
  // Pattern complexity = 4  cost = 1  size = 0
  if (Predicate_immSExt16(N.getNode())) {
    SDNode *Result = Emit_40(N, Alpha::LDA, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_immConst2Part>>:$imm
  // Emits: (LDA:i64 (LL16:i64 (imm:i64)<<P:Predicate_immConst2Part>>:$imm), (LDAH:i64 (LH16:i64 (imm:i64)<<P:Predicate_immConst2Part>>:$imm), R31:i64))
  // Pattern complexity = 4  cost = 2  size = 0
  if (Predicate_immConst2Part(N.getNode())) {
    SDNode *Result = Emit_39(N, Alpha::LDAH, Alpha::LDA, MVT::i64, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_immSExt16int>><<X:SExt16>>:$imm
  // Emits: (ZAPNOTi:i64 (LDA:i64 (SExt16:i64 (imm:i64)<<P:Predicate_immSExt16int>><<X:SExt16>>:$imm), R31:i64), 15:i64)
  // Pattern complexity = 4  cost = 2  size = 0
  if (Predicate_immSExt16int(N.getNode())) {
    SDNode *Result = Emit_41(N, Alpha::LDA, Alpha::ZAPNOTi, MVT::i64, MVT::i64);
    return Result;
  }

  // Pattern: (imm:i64)<<P:Predicate_immConst2PartInt>><<X:SExt32>>:$imm
  // Emits: (ZAPNOTi:i64 (LDA:i64 (LL16:i64 (SExt32:i64 (imm:i64)<<P:Predicate_immConst2PartInt>><<X:SExt32>>:$imm)), (LDAH:i64 (LH16:i64 (SExt32:i64 (imm:i64)<<P:Predicate_immConst2PartInt>><<X:SExt32>>:$imm)), R31:i64)), 15:i64)
  // Pattern complexity = 4  cost = 3  size = 0
  if (Predicate_immConst2PartInt(N.getNode())) {
    SDNode *Result = Emit_42(N, Alpha::LDAH, Alpha::LDA, Alpha::ZAPNOTi, MVT::i64, MVT::i64, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_43(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp0 = CurDAG->getRegister(Alpha::F31, MVT::f32);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, N0);
}
SDNode *Select_ISD_FABS_f32(const SDValue &N) {
  SDNode *Result = Emit_43(N, Alpha::CPYSS, MVT::f32);
  return Result;
}

SDNode *Emit_44(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Tmp0 = CurDAG->getRegister(Alpha::F31, MVT::f64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0, N0);
}
SDNode *Select_ISD_FABS_f64(const SDValue &N) {
  SDNode *Result = Emit_44(N, Alpha::CPYST, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FADD_f32(const SDValue &N) {
  SDNode *Result = Emit_1(N, Alpha::ADDS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FADD_f64(const SDValue &N) {
  SDNode *Result = Emit_1(N, Alpha::ADDT, MVT::f64);
  return Result;
}

SDNode *Emit_45(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N0);
}
SDNode *Emit_46(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N10, N0);
}
SDNode *Select_ISD_FCOPYSIGN_f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::FNEG) {
    SDValue N10 = N1.getOperand(0);

    // Pattern: (fcopysign:f32 F4RC:f32:$A, (fneg:f32 F4RC:f32:$B))
    // Emits: (CPYSNS:f32 F4RC:f32:$B, F4RC:f32:$A)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::f32) {
      SDNode *Result = Emit_46(N, Alpha::CPYSNS, MVT::f32);
      return Result;
    }

    // Pattern: (fcopysign:f32 F4RC:f32:$A, (fneg:f64 F8RC:f64:$B))
    // Emits: (CPYSNSt:f32 F8RC:f64:$B, F4RC:f32:$A)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::f64) {
      SDNode *Result = Emit_46(N, Alpha::CPYSNSt, MVT::f32);
      return Result;
    }
  }

  // Pattern: (fcopysign:f32 F4RC:f32:$RB, F4RC:f32:$RA)
  // Emits: (CPYSS:f32 F4RC:f32:$RA, F4RC:f32:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::f32) {
    SDNode *Result = Emit_45(N, Alpha::CPYSS, MVT::f32);
    return Result;
  }

  // Pattern: (fcopysign:f32 F4RC:f32:$RB, F8RC:f64:$RA)
  // Emits: (CPYSSt:f32 F8RC:f64:$RA, F4RC:f32:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_45(N, Alpha::CPYSSt, MVT::f32);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FCOPYSIGN_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::FNEG) {
    SDValue N10 = N1.getOperand(0);

    // Pattern: (fcopysign:f64 F8RC:f64:$A, (fneg:f64 F8RC:f64:$B))
    // Emits: (CPYSNT:f64 F8RC:f64:$B, F8RC:f64:$A)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::f64) {
      SDNode *Result = Emit_46(N, Alpha::CPYSNT, MVT::f64);
      return Result;
    }

    // Pattern: (fcopysign:f64 F8RC:f64:$A, (fneg:f32 F4RC:f32:$B))
    // Emits: (CPYSNTs:f64 F4RC:f32:$B, F8RC:f64:$A)
    // Pattern complexity = 6  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::f32) {
      SDNode *Result = Emit_46(N, Alpha::CPYSNTs, MVT::f64);
      return Result;
    }
  }

  // Pattern: (fcopysign:f64 F8RC:f64:$RB, F8RC:f64:$RA)
  // Emits: (CPYST:f64 F8RC:f64:$RA, F8RC:f64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::f64) {
    SDNode *Result = Emit_45(N, Alpha::CPYST, MVT::f64);
    return Result;
  }

  // Pattern: (fcopysign:f64 F8RC:f64:$RB, F4RC:f32:$RA)
  // Emits: (CPYSTs:f64 F4RC:f32:$RA, F8RC:f64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (N1.getNode()->getValueType(0) == MVT::f32) {
    SDNode *Result = Emit_45(N, Alpha::CPYSTs, MVT::f64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_FDIV_f32(const SDValue &N) {
  SDNode *Result = Emit_1(N, Alpha::DIVS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FDIV_f64(const SDValue &N) {
  SDNode *Result = Emit_1(N, Alpha::DIVT, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FMUL_f32(const SDValue &N) {
  SDNode *Result = Emit_1(N, Alpha::MULS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FMUL_f64(const SDValue &N) {
  SDNode *Result = Emit_1(N, Alpha::MULT, MVT::f64);
  return Result;
}

SDNode *Emit_47(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N01, N00);
}
SDNode *Emit_48(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N0);
}
SDNode *Select_ISD_FNEG_f32(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FCOPYSIGN) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);

      // Pattern: (fneg:f32 (fcopysign:f32 F4RC:f32:$RB, F4RC:f32:$RA))
      // Emits: (CPYSNS:f32 F4RC:f32:$RA, F4RC:f32:$RB)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N01.getNode()->getValueType(0) == MVT::f32) {
        SDNode *Result = Emit_47(N, Alpha::CPYSNS, MVT::f32);
        return Result;
      }

      // Pattern: (fneg:f32 (fcopysign:f32 F4RC:f32:$RB, F8RC:f64:$RA))
      // Emits: (CPYSNSt:f32 F8RC:f64:$RA, F4RC:f32:$RB)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N01.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_47(N, Alpha::CPYSNSt, MVT::f32);
        return Result;
      }
    }
  }

  // Pattern: (fneg:f32 F4RC:f32:$RB)
  // Emits: (CPYSNS:f32 F4RC:f32:$RB, F4RC:f32:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_48(N, Alpha::CPYSNS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FNEG_f64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::FCOPYSIGN) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);

      // Pattern: (fneg:f64 (fcopysign:f64 F8RC:f64:$RB, F8RC:f64:$RA))
      // Emits: (CPYSNT:f64 F8RC:f64:$RA, F8RC:f64:$RB)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N01.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_47(N, Alpha::CPYSNT, MVT::f64);
        return Result;
      }

      // Pattern: (fneg:f64 (fcopysign:f64 F8RC:f64:$RB, F4RC:f32:$RA))
      // Emits: (CPYSNTs:f64 F4RC:f32:$RA, F8RC:f64:$RB)
      // Pattern complexity = 6  cost = 1  size = 0
      if (N01.getNode()->getValueType(0) == MVT::f32) {
        SDNode *Result = Emit_47(N, Alpha::CPYSNTs, MVT::f64);
        return Result;
      }
    }
  }

  // Pattern: (fneg:f64 F8RC:f64:$RB)
  // Emits: (CPYSNT:f64 F8RC:f64:$RB, F8RC:f64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_48(N, Alpha::CPYSNT, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FP_EXTEND_f64(const SDValue &N) {
  SDNode *Result = Emit_0(N, Alpha::CVTST, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FP_ROUND_f32(const SDValue &N) {
  SDNode *Result = Emit_0(N, Alpha::CVTTS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FSQRT_f32(const SDValue &N) {
  SDNode *Result = Emit_0(N, Alpha::SQRTS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FSQRT_f64(const SDValue &N) {
  SDNode *Result = Emit_0(N, Alpha::SQRTT, MVT::f64);
  return Result;
}

SDNode *Select_ISD_FSUB_f32(const SDValue &N) {
  SDNode *Result = Emit_1(N, Alpha::SUBS, MVT::f32);
  return Result;
}

SDNode *Select_ISD_FSUB_f64(const SDValue &N) {
  SDNode *Result = Emit_1(N, Alpha::SUBT, MVT::f64);
  return Result;
}

SDNode *Emit_49(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Tmp0 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N11)->getZExtValue()), MVT::i64);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { Tmp0, N10, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_50(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N10, N11, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_51(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp0 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { Tmp0, N1, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Select_ISD_LOAD_i64(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedload(N.getNode())) {

    // Pattern: (ld:i64 (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDQ:i64 (imm:i64):$DISP, GPRC:i64:$RB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immSExt16(N11.getNode())) {
          SDNode *Result = Emit_49(N, Alpha::LDQ, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (ld:i64 (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>
    // Emits: (LDL:i64 (imm:i64):$DISP, GPRC:i64:$RB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi32(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::ADD) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immSExt16(N11.getNode())) {
          SDNode *Result = Emit_49(N, Alpha::LDL, MVT::i64);
          return Result;
        }
      }
    }
    if (Predicate_zextload(N.getNode())) {

      // Pattern: (ld:i64 (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
      // Emits: (LDBU:i64 (imm:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 11  cost = 1  size = 0
      if (Predicate_zextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::ADD) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          if (N11.getOpcode() == ISD::Constant &&
              Predicate_immSExt16(N11.getNode())) {
            SDNode *Result = Emit_49(N, Alpha::LDBU, MVT::i64);
            return Result;
          }
        }
      }

      // Pattern: (ld:i64 (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
      // Emits: (LDWU:i64 (imm:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 11  cost = 1  size = 0
      if (Predicate_zextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::ADD) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          if (N11.getOpcode() == ISD::Constant &&
              Predicate_immSExt16(N11.getNode())) {
            SDNode *Result = Emit_49(N, Alpha::LDWU, MVT::i64);
            return Result;
          }
        }
      }
    }
    if (Predicate_extload(N.getNode())) {

      // Pattern: (ld:i64 (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
      // Emits: (LDBU:i64 (imm:i64)<<P:Predicate_immSExt16>>:$DISP, GPRC:i64:$RB)
      // Pattern complexity = 11  cost = 1  size = 0
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::ADD) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          if (N11.getOpcode() == ISD::Constant &&
              Predicate_immSExt16(N11.getNode())) {
            SDNode *Result = Emit_49(N, Alpha::LDBU, MVT::i64);
            return Result;
          }
        }
      }

      // Pattern: (ld:i64 (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
      // Emits: (LDWU:i64 (imm:i64)<<P:Predicate_immSExt16>>:$DISP, GPRC:i64:$RB)
      // Pattern complexity = 11  cost = 1  size = 0
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::ADD) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          if (N11.getOpcode() == ISD::Constant &&
              Predicate_immSExt16(N11.getNode())) {
            SDNode *Result = Emit_49(N, Alpha::LDWU, MVT::i64);
            return Result;
          }
        }
      }

      // Pattern: (ld:i64 (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>>
      // Emits: (LDL:i64 (imm:i64)<<P:Predicate_immSExt16>>:$DISP, GPRC:i64:$RB)
      // Pattern complexity = 11  cost = 1  size = 0
      if (Predicate_extloadi32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == ISD::ADD) {
          SDValue N10 = N1.getOperand(0);
          SDValue N11 = N1.getOperand(1);
          if (N11.getOpcode() == ISD::Constant &&
              Predicate_immSExt16(N11.getNode())) {
            SDNode *Result = Emit_49(N, Alpha::LDL, MVT::i64);
            return Result;
          }
        }
      }
    }

    // Pattern: (ld:i64 (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDQr:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == AlphaISD::GPRelLo) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::TargetGlobalAddress) {
          SDNode *Result = Emit_50(N, Alpha::LDQr, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (ld:i64 (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>
    // Emits: (LDLr:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi32(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == AlphaISD::GPRelLo) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::TargetGlobalAddress) {
          SDNode *Result = Emit_50(N, Alpha::LDLr, MVT::i64);
          return Result;
        }
      }
    }
    if (Predicate_zextload(N.getNode())) {

      // Pattern: (ld:i64 (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
      // Emits: (LDBUr:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_zextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == AlphaISD::GPRelLo) {
          SDValue N10 = N1.getOperand(0);
          if (N10.getOpcode() == ISD::TargetGlobalAddress) {
            SDNode *Result = Emit_50(N, Alpha::LDBUr, MVT::i64);
            return Result;
          }
        }
      }

      // Pattern: (ld:i64 (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
      // Emits: (LDWUr:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_zextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == AlphaISD::GPRelLo) {
          SDValue N10 = N1.getOperand(0);
          if (N10.getOpcode() == ISD::TargetGlobalAddress) {
            SDNode *Result = Emit_50(N, Alpha::LDWUr, MVT::i64);
            return Result;
          }
        }
      }
    }

    // Pattern: (ld:i64 (Alpha_gprello:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDQr:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == AlphaISD::GPRelLo) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::TargetConstantPool) {
          SDNode *Result = Emit_50(N, Alpha::LDQr, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (ld:i64 (Alpha_gprello:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>
    // Emits: (LDLr:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi32(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == AlphaISD::GPRelLo) {
        SDValue N10 = N1.getOperand(0);
        if (N10.getOpcode() == ISD::TargetConstantPool) {
          SDNode *Result = Emit_50(N, Alpha::LDLr, MVT::i64);
          return Result;
        }
      }
    }
    if (Predicate_zextload(N.getNode())) {

      // Pattern: (ld:i64 (Alpha_gprello:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
      // Emits: (LDBUr:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_zextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == AlphaISD::GPRelLo) {
          SDValue N10 = N1.getOperand(0);
          if (N10.getOpcode() == ISD::TargetConstantPool) {
            SDNode *Result = Emit_50(N, Alpha::LDBUr, MVT::i64);
            return Result;
          }
        }
      }

      // Pattern: (ld:i64 (Alpha_gprello:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
      // Emits: (LDWUr:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_zextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getOpcode() == AlphaISD::GPRelLo) {
          SDValue N10 = N1.getOperand(0);
          if (N10.getOpcode() == ISD::TargetConstantPool) {
            SDNode *Result = Emit_50(N, Alpha::LDWUr, MVT::i64);
            return Result;
          }
        }
      }
    }

    // Pattern: (ld:i64 GPRC:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDQ:i64 0:i64, GPRC:i64:$addr)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_load(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_51(N, Alpha::LDQ, MVT::i64);
        return Result;
      }
    }

    // Pattern: (ld:i64 GPRC:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>
    // Emits: (LDL:i64 0:i64, GPRC:i64:$addr)
    // Pattern complexity = 4  cost = 1  size = 0
    if (Predicate_sextload(N.getNode()) &&
        Predicate_sextloadi32(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (N1.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_51(N, Alpha::LDL, MVT::i64);
        return Result;
      }
    }
    if (Predicate_zextload(N.getNode())) {

      // Pattern: (ld:i64 GPRC:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>>
      // Emits: (LDWU:i64 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_zextloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_51(N, Alpha::LDWU, MVT::i64);
          return Result;
        }
      }

      // Pattern: (ld:i64 GPRC:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>>
      // Emits: (LDBU:i64 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_zextloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_51(N, Alpha::LDBU, MVT::i64);
          return Result;
        }
      }
    }
    if (Predicate_extload(N.getNode())) {

      // Pattern: (ld:i64 GPRC:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>>
      // Emits: (LDBU:i64 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_extloadi8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_51(N, Alpha::LDBU, MVT::i64);
          return Result;
        }
      }

      // Pattern: (ld:i64 GPRC:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>>
      // Emits: (LDWU:i64 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_extloadi16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_51(N, Alpha::LDWU, MVT::i64);
          return Result;
        }
      }

      // Pattern: (ld:i64 GPRC:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>>
      // Emits: (LDL:i64 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_extloadi32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        if (N1.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_51(N, Alpha::LDL, MVT::i64);
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

    // Pattern: (ld:f32 (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDS:f32 (imm:i64):$DISP, GPRC:i64:$RB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (N1.getOpcode() == ISD::ADD) {
      SDValue N10 = N1.getOperand(0);
      SDValue N11 = N1.getOperand(1);
      if (N11.getOpcode() == ISD::Constant &&
          Predicate_immSExt16(N11.getNode())) {
        SDNode *Result = Emit_49(N, Alpha::LDS, MVT::f32);
        return Result;
      }
    }
    if (N1.getOpcode() == AlphaISD::GPRelLo) {
      SDValue N10 = N1.getOperand(0);

      // Pattern: (ld:f32 (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LDSr:f32 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N10.getOpcode() == ISD::TargetGlobalAddress) {
        SDNode *Result = Emit_50(N, Alpha::LDSr, MVT::f32);
        return Result;
      }

      // Pattern: (ld:f32 (Alpha_gprello:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LDSr:f32 (tconstpool:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N10.getOpcode() == ISD::TargetConstantPool) {
        SDNode *Result = Emit_50(N, Alpha::LDSr, MVT::f32);
        return Result;
      }
    }

    // Pattern: (ld:f32 GPRC:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDS:f32 0:i64, GPRC:i64:$addr)
    // Pattern complexity = 4  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_51(N, Alpha::LDS, MVT::f32);
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

    // Pattern: (ld:f64 (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDT:f64 (imm:i64):$DISP, GPRC:i64:$RB)
    // Pattern complexity = 11  cost = 1  size = 0
    if (N1.getOpcode() == ISD::ADD) {
      SDValue N10 = N1.getOperand(0);
      SDValue N11 = N1.getOperand(1);
      if (N11.getOpcode() == ISD::Constant &&
          Predicate_immSExt16(N11.getNode())) {
        SDNode *Result = Emit_49(N, Alpha::LDT, MVT::f64);
        return Result;
      }
    }
    if (N1.getOpcode() == AlphaISD::GPRelLo) {
      SDValue N10 = N1.getOperand(0);

      // Pattern: (ld:f64 (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LDTr:f64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N10.getOpcode() == ISD::TargetGlobalAddress) {
        SDNode *Result = Emit_50(N, Alpha::LDTr, MVT::f64);
        return Result;
      }

      // Pattern: (ld:f64 (Alpha_gprello:i64 (tconstpool:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedload>><<P:Predicate_load>>
      // Emits: (LDTr:f64 (tconstpool:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (N10.getOpcode() == ISD::TargetConstantPool) {
        SDNode *Result = Emit_50(N, Alpha::LDTr, MVT::f64);
        return Result;
      }
    }

    // Pattern: (ld:f64 GPRC:i64:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>>
    // Emits: (LDT:f64 0:i64, GPRC:i64:$addr)
    // Pattern complexity = 4  cost = 1  size = 0
    if (N1.getNode()->getValueType(0) == MVT::i64) {
      SDNode *Result = Emit_51(N, Alpha::LDT, MVT::f64);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_52(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
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

        // Pattern: (membarrier:isVoid (imm:i64):$ll, (imm:i64):$ls, (imm:i64):$sl, 1:i64, (imm:i64):$dev)
        // Emits: (WMB:isVoid)
        // Pattern complexity = 20  cost = 1  size = 0
        {
          ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N4);
          if (Tmp0) {
            int64_t CN1 = Tmp0->getSExtValue();
            if (CN1 == INT64_C(1)) {
              SDValue N5 = N.getOperand(5);
              if (N5.getOpcode() == ISD::Constant) {
                SDNode *Result = Emit_52(N, Alpha::WMB);
                return Result;
              }
            }
          }
        }

        // Pattern: (membarrier:isVoid (imm:i64):$ll, (imm:i64):$ls, (imm:i64):$sl, (imm:i64):$ss, (imm:i64):$dev)
        // Emits: (MB:isVoid)
        // Pattern complexity = 18  cost = 1  size = 0
        if (N4.getOpcode() == ISD::Constant) {
          SDValue N5 = N.getOperand(5);
          if (N5.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_52(N, Alpha::MB);
            return Result;
          }
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_53(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N0);
}
SDNode *Emit_54(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_nearP2X(Tmp1.getNode());
  SDValue Tmp3(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp2), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp3, N0);
}
SDNode *Emit_55(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, MVT VT0, MVT VT1, MVT VT2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_nearP2X(Tmp1.getNode());
  SDValue Tmp3(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp2), 0);
  SDValue Tmp6(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, N0, N0), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc2, VT2, Tmp3, Tmp6);
}
SDNode *Emit_56(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp3 = Transform_nearP2X(Tmp2.getNode());
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp3), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, N0, Tmp4);
}
SDNode *Emit_57(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, MVT VT0, MVT VT1, MVT VT2) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_nearP2X(Tmp1.getNode());
  SDValue Tmp3(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp2), 0);
  SDValue Tmp5 = Transform_nearP2RemX(Tmp1.getNode());
  SDValue Tmp6(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, N0, Tmp5), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc2, VT2, Tmp3, Tmp6);
}
SDNode *Select_ISD_MUL_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    {
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N1);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (mul:i64 GPRC:i64:$RA, 5:i64)
        // Emits: (S4ADDQr:i64 GPRC:i64:$RA, GPRC:i64:$RA)
        // Pattern complexity = 9  cost = 1  size = 0
        if (CN1 == INT64_C(5)) {
          SDNode *Result = Emit_53(N, Alpha::S4ADDQr, MVT::i64);
          return Result;
        }

        // Pattern: (mul:i64 GPRC:i64:$RA, 9:i64)
        // Emits: (S8ADDQr:i64 GPRC:i64:$RA, GPRC:i64:$RA)
        // Pattern complexity = 9  cost = 1  size = 0
        if (CN1 == INT64_C(9)) {
          SDNode *Result = Emit_53(N, Alpha::S8ADDQr, MVT::i64);
          return Result;
        }

        // Pattern: (mul:i64 GPRC:i64:$RA, 3:i64)
        // Emits: (S4SUBQr:i64 GPRC:i64:$RA, GPRC:i64:$RA)
        // Pattern complexity = 9  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDNode *Result = Emit_53(N, Alpha::S4SUBQr, MVT::i64);
          return Result;
        }

        // Pattern: (mul:i64 GPRC:i64:$RA, 7:i64)
        // Emits: (S8SUBQr:i64 GPRC:i64:$RA, GPRC:i64:$RA)
        // Pattern complexity = 9  cost = 1  size = 0
        if (CN1 == INT64_C(7)) {
          SDNode *Result = Emit_53(N, Alpha::S8SUBQr, MVT::i64);
          return Result;
        }
      }
    }
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (mul:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immRem1>>:$imm)
      // Emits: (ADDQr:i64 (SLr:i64 GPRC:i64:$RA, (nearP2X:i64 (imm:i64)<<P:Predicate_immRem1>>:$imm)), GPRC:i64:$RA)
      // Pattern complexity = 8  cost = 2  size = 0
      if (Predicate_immRem1(N1.getNode())) {
        SDNode *Result = Emit_54(N, Alpha::SLr, Alpha::ADDQr, MVT::i64, MVT::i64);
        return Result;
      }

      // Pattern: (mul:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immRem4>>:$imm)
      // Emits: (S4ADDQr:i64 GPRC:i64:$RA, (SLr:i64 GPRC:i64:$RA, (nearP2X:i64 (imm:i64)<<P:Predicate_immRem4>>:$imm)))
      // Pattern complexity = 8  cost = 2  size = 0
      if (Predicate_immRem4(N1.getNode())) {
        SDNode *Result = Emit_56(N, Alpha::SLr, Alpha::S4ADDQr, MVT::i64, MVT::i64);
        return Result;
      }

      // Pattern: (mul:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immRem2>>:$imm)
      // Emits: (ADDQr:i64 (SLr:i64 GPRC:i64:$RA, (nearP2X:i64 (imm:i64)<<P:Predicate_immRem2>>:$imm)), (ADDQr:i64 GPRC:i64:$RA, GPRC:i64:$RA))
      // Pattern complexity = 8  cost = 3  size = 0
      if (Predicate_immRem2(N1.getNode())) {
        SDNode *Result = Emit_55(N, Alpha::SLr, Alpha::ADDQr, Alpha::ADDQr, MVT::i64, MVT::i64, MVT::i64);
        return Result;
      }

      // Pattern: (mul:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immRem3>>:$imm)
      // Emits: (ADDQr:i64 (SLr:i64 GPRC:i64:$RA, (nearP2X:i64 (imm:i64)<<P:Predicate_immRem3>>:$imm)), (S4SUBQr:i64 GPRC:i64:$RA, GPRC:i64:$RA))
      // Pattern complexity = 8  cost = 3  size = 0
      if (Predicate_immRem3(N1.getNode())) {
        SDNode *Result = Emit_55(N, Alpha::SLr, Alpha::S4SUBQr, Alpha::ADDQr, MVT::i64, MVT::i64, MVT::i64);
        return Result;
      }

      // Pattern: (mul:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immRem5>>:$imm)
      // Emits: (ADDQr:i64 (SLr:i64 GPRC:i64:$RA, (nearP2X:i64 (imm:i64)<<P:Predicate_immRem5>>:$imm)), (S4ADDQr:i64 GPRC:i64:$RA, GPRC:i64:$RA))
      // Pattern complexity = 8  cost = 3  size = 0
      if (Predicate_immRem5(N1.getNode())) {
        SDNode *Result = Emit_55(N, Alpha::SLr, Alpha::S4ADDQr, Alpha::ADDQr, MVT::i64, MVT::i64, MVT::i64);
        return Result;
      }

      // Pattern: (mul:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immRemP2>>:$imm)
      // Emits: (ADDQr:i64 (SLr:i64 GPRC:i64:$RA, (nearP2X:i64 (imm:i64)<<P:Predicate_immRemP2>>:$imm)), (SLi:i64 GPRC:i64:$RA, (nearP2RemX:i64 (imm:i64)<<P:Predicate_immRemP2>>:$imm)))
      // Pattern complexity = 8  cost = 3  size = 0
      if (Predicate_immRemP2(N1.getNode())) {
        SDNode *Result = Emit_57(N, Alpha::SLr, Alpha::SLi, Alpha::ADDQr, MVT::i64, MVT::i64, MVT::i64);
        return Result;
      }

      // Pattern: (mul:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L)
      // Emits: (MULQi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUExt8(N1.getNode())) {
        SDNode *Result = Emit_3(N, Alpha::MULQi, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (mul:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Emits: (MULQr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Alpha::MULQr, MVT::i64);
  return Result;
}

SDNode *Emit_58(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, unsigned Opc3, unsigned Opc4, MVT VT0, MVT VT1, MVT VT2, MVT VT3, MVT VT4) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, N1), 0);
  SDValue Tmp4 = CurDAG->getRegister(Alpha::R31, MVT::i64);
  SDValue Tmp6(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, N1, Tmp4, N0), 0);
  SDValue Tmp8 = CurDAG->getRegister(Alpha::R31, MVT::i64);
  SDValue Tmp10(CurDAG->getTargetNode(Opc2, N.getDebugLoc(), VT2, N0, Tmp8, N1), 0);
  SDValue Tmp11(CurDAG->getTargetNode(Opc3, N.getDebugLoc(), VT3, Tmp6, Tmp10), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc4, VT4, Tmp2, Tmp11);
}
SDNode *Select_ISD_MULHS_i64(const SDValue &N) {
  SDNode *Result = Emit_58(N, Alpha::UMULHr, Alpha::CMOVGEr, Alpha::CMOVGEr, Alpha::ADDQr, Alpha::SUBQr, MVT::i64, MVT::i64, MVT::i64, MVT::i64, MVT::i64);
  return Result;
}

SDNode *Select_ISD_MULHU_i64(const SDValue &N) {

  // Pattern: (mulhu:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L)
  // Emits: (UMULHi:i64 GPRC:i64:$RA, (imm:i64):$L)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N1.getNode())) {
      SDNode *Result = Emit_3(N, Alpha::UMULHi, MVT::i64);
      return Result;
    }
  }

  // Pattern: (mulhu:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Emits: (UMULHr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Alpha::UMULHr, MVT::i64);
  return Result;
}

SDNode *Select_ISD_OR_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (or:i64 GPRC:i64:$RA, (xor:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immAllOnes>>))
    // Emits: (ORNOTr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_10(N, Alpha::ORNOTr, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (or:i64 (xor:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immAllOnes>>), GPRC:i64:$RA)
    // Emits: (ORNOTr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_14(N, Alpha::ORNOTr, MVT::i64);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (or:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L)
      // Emits: (BISi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUExt8(N1.getNode())) {
        SDNode *Result = Emit_3(N, Alpha::BISi, MVT::i64);
        return Result;
      }

      // Pattern: (or:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8inv>><<X:invX>>:$L)
      // Emits: (ORNOTi:i64 GPRC:i64:$RA, (invX:i64 (imm:i64):$L))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUExt8inv(N1.getNode())) {
        SDNode *Result = Emit_11(N, Alpha::ORNOTi, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (or:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Emits: (BISr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Alpha::BISr, MVT::i64);
  return Result;
}

SDNode *Emit_59(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N1, N2);
}
SDNode *Emit_60(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp3 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, Tmp3, N2);
}
SDNode *Emit_61(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N1, N2);
}
SDNode *Emit_62(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp3 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, Tmp3, N2);
}
SDNode *Emit_63(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N2, N1, N0);
}
SDNode *Emit_64(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, Tmp1, N0);
}
SDNode *Emit_65(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp3 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, Tmp3, N1);
}
SDNode *Select_ISD_SELECT_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::SETCC) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDValue N02 = N0.getOperand(2);

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETEQ:Other), (imm:i64)<<P:Predicate_immUExt8>>:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVEQi:i64 GPRC:i64:$RCOND, (imm:i64):$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETEQ) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N1.getNode())) {
              SDValue N2 = N.getOperand(2);
              if (N00.getNode()->getValueType(0) == MVT::i64) {
                SDNode *Result = Emit_60(N, Alpha::CMOVEQi, MVT::i64);
                return Result;
              }
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETNE:Other), (imm:i64)<<P:Predicate_immUExt8>>:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVNEi:i64 GPRC:i64:$RCOND, (imm:i64):$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETNE) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N1.getNode())) {
              SDValue N2 = N.getOperand(2);
              if (N00.getNode()->getValueType(0) == MVT::i64) {
                SDNode *Result = Emit_60(N, Alpha::CMOVNEi, MVT::i64);
                return Result;
              }
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETLT:Other), (imm:i64)<<P:Predicate_immUExt8>>:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVLTi:i64 GPRC:i64:$RCOND, (imm:i64):$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLT) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N1.getNode())) {
              SDValue N2 = N.getOperand(2);
              if (N00.getNode()->getValueType(0) == MVT::i64) {
                SDNode *Result = Emit_60(N, Alpha::CMOVLTi, MVT::i64);
                return Result;
              }
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETLE:Other), (imm:i64)<<P:Predicate_immUExt8>>:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVLEi:i64 GPRC:i64:$RCOND, (imm:i64):$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLE) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N1.getNode())) {
              SDValue N2 = N.getOperand(2);
              if (N00.getNode()->getValueType(0) == MVT::i64) {
                SDNode *Result = Emit_60(N, Alpha::CMOVLEi, MVT::i64);
                return Result;
              }
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETGT:Other), (imm:i64)<<P:Predicate_immUExt8>>:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVGTi:i64 GPRC:i64:$RCOND, (imm:i64):$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGT) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N1.getNode())) {
              SDValue N2 = N.getOperand(2);
              if (N00.getNode()->getValueType(0) == MVT::i64) {
                SDNode *Result = Emit_60(N, Alpha::CMOVGTi, MVT::i64);
                return Result;
              }
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETGE:Other), (imm:i64)<<P:Predicate_immUExt8>>:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVGEi:i64 GPRC:i64:$RCOND, (imm:i64):$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGE) {
            SDValue N1 = N.getOperand(1);
            if (N1.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N1.getNode())) {
              SDValue N2 = N.getOperand(2);
              if (N00.getNode()->getValueType(0) == MVT::i64) {
                SDNode *Result = Emit_60(N, Alpha::CMOVGEi, MVT::i64);
                return Result;
              }
            }
          }
        }
      }
    }

    // Pattern: (select:i64 (xor:i64 GPRC:i64:$RCOND, 1:i64), (imm:i64)<<P:Predicate_immUExt8>>:$RTRUE, GPRC:i64:$RFALSE)
    // Emits: (CMOVLBCi:i64 GPRC:i64:$RCOND, (imm:i64):$RTRUE, GPRC:i64:$RFALSE)
    // Pattern complexity = 15  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(1)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::Constant &&
              Predicate_immUExt8(N1.getNode())) {
            SDNode *Result = Emit_62(N, Alpha::CMOVLBCi, MVT::i64);
            return Result;
          }
        }
      }
    }

    // Pattern: (select:i64 (and:i64 GPRC:i64:$RCOND, 1:i64), (imm:i64)<<P:Predicate_immUExt8>>:$RTRUE, GPRC:i64:$RFALSE)
    // Emits: (CMOVLBSi:i64 GPRC:i64:$RCOND, (imm:i64):$RTRUE, GPRC:i64:$RFALSE)
    // Pattern complexity = 15  cost = 1  size = 0
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(1)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::Constant &&
              Predicate_immUExt8(N1.getNode())) {
            SDNode *Result = Emit_62(N, Alpha::CMOVLBSi, MVT::i64);
            return Result;
          }
        }
      }
    }
    if (N0.getOpcode() == ISD::SETCC) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(0)) {
          SDValue N02 = N0.getOperand(2);

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETNE:Other), GPRC:i64:$RTRUE, (imm:i64)<<P:Predicate_immUExt8>>:$RFALSE)
          // Emits: (CMOVEQi:i64 GPRC:i64:$RCOND, (imm:i64)<<P:Predicate_immUExt8>>:$RFALSE, GPRC:i64:$RTRUE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETNE) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N2.getNode()) &&
                N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_65(N, Alpha::CMOVEQi, MVT::i64);
              return Result;
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETGT:Other), GPRC:i64:$RTRUE, (imm:i64)<<P:Predicate_immUExt8>>:$RFALSE)
          // Emits: (CMOVLEi:i64 GPRC:i64:$RCOND, (imm:i64)<<P:Predicate_immUExt8>>:$RFALSE, GPRC:i64:$RTRUE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGT) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N2.getNode()) &&
                N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_65(N, Alpha::CMOVLEi, MVT::i64);
              return Result;
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETGE:Other), GPRC:i64:$RTRUE, (imm:i64)<<P:Predicate_immUExt8>>:$RFALSE)
          // Emits: (CMOVLTi:i64 GPRC:i64:$RCOND, (imm:i64)<<P:Predicate_immUExt8>>:$RFALSE, GPRC:i64:$RTRUE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGE) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N2.getNode()) &&
                N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_65(N, Alpha::CMOVLTi, MVT::i64);
              return Result;
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETLT:Other), GPRC:i64:$RTRUE, (imm:i64)<<P:Predicate_immUExt8>>:$RFALSE)
          // Emits: (CMOVGEi:i64 GPRC:i64:$RCOND, (imm:i64)<<P:Predicate_immUExt8>>:$RFALSE, GPRC:i64:$RTRUE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLT) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N2.getNode()) &&
                N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_65(N, Alpha::CMOVGEi, MVT::i64);
              return Result;
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETLE:Other), GPRC:i64:$RTRUE, (imm:i64)<<P:Predicate_immUExt8>>:$RFALSE)
          // Emits: (CMOVGTi:i64 GPRC:i64:$RCOND, (imm:i64)<<P:Predicate_immUExt8>>:$RFALSE, GPRC:i64:$RTRUE)
          // Pattern complexity = 15  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLE) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N2.getOpcode() == ISD::Constant &&
                Predicate_immUExt8(N2.getNode()) &&
                N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_65(N, Alpha::CMOVGTi, MVT::i64);
              return Result;
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETEQ:Other), GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVEQr:i64 GPRC:i64:$RCOND, GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETEQ) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_59(N, Alpha::CMOVEQr, MVT::i64);
              return Result;
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETNE:Other), GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVNEr:i64 GPRC:i64:$RCOND, GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETNE) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_59(N, Alpha::CMOVNEr, MVT::i64);
              return Result;
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETLT:Other), GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVLTr:i64 GPRC:i64:$RCOND, GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLT) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_59(N, Alpha::CMOVLTr, MVT::i64);
              return Result;
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETLE:Other), GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVLEr:i64 GPRC:i64:$RCOND, GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLE) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_59(N, Alpha::CMOVLEr, MVT::i64);
              return Result;
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETGT:Other), GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVGTr:i64 GPRC:i64:$RCOND, GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGT) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_59(N, Alpha::CMOVGTr, MVT::i64);
              return Result;
            }
          }

          // Pattern: (select:i64 (setcc:i64 GPRC:i64:$RCOND, 0:i64, SETGE:Other), GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Emits: (CMOVGEr:i64 GPRC:i64:$RCOND, GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
          // Pattern complexity = 11  cost = 1  size = 0
          if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGE) {
            SDValue N1 = N.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N00.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_59(N, Alpha::CMOVGEr, MVT::i64);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (select:i64 (xor:i64 GPRC:i64:$RCOND, 1:i64), GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
    // Emits: (CMOVLBCr:i64 GPRC:i64:$RCOND, GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
    // Pattern complexity = 11  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(1)) {
          SDNode *Result = Emit_61(N, Alpha::CMOVLBCr, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (select:i64 (and:i64 GPRC:i64:$RCOND, 1:i64), GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
    // Emits: (CMOVLBSr:i64 GPRC:i64:$RCOND, GPRC:i64:$RTRUE, GPRC:i64:$RFALSE)
    // Pattern complexity = 11  cost = 1  size = 0
    if (N0.getOpcode() == ISD::AND) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();
        if (CN1 == INT64_C(1)) {
          SDNode *Result = Emit_61(N, Alpha::CMOVLBSr, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (select:i64 GPRC:i64:$which, GPRC:i64:$src1, (imm:i64)<<P:Predicate_immUExt8>>:$src2)
    // Emits: (CMOVEQi:i64 GPRC:i64:$src1, (imm:i64)<<P:Predicate_immUExt8>>:$src2, GPRC:i64:$which)
    // Pattern complexity = 7  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N2.getNode())) {
      SDNode *Result = Emit_64(N, Alpha::CMOVEQi, MVT::i64);
      return Result;
    }
  }

  // Pattern: (select:i64 GPRC:i64:$which, GPRC:i64:$src1, GPRC:i64:$src2)
  // Emits: (CMOVNEr:i64 GPRC:i64:$src2, GPRC:i64:$src1, GPRC:i64:$which)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_63(N, Alpha::CMOVNEr, MVT::i64);
  return Result;
}

SDNode *Emit_66(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N00, N01), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, N2, N1, Tmp4);
}
SDNode *Emit_67(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp4(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N01, N00), 0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, N2, N1, Tmp4);
}
SDNode *Select_ISD_SELECT_f32(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::SETCC) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    SDValue N02 = N0.getOperand(2);

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETEQ:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETEQ) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOEQ:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETOEQ) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUEQ:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUEQ) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETNE:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVEQS:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETNE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVEQS, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETONE:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVEQS:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETONE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVEQS, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUNE:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVEQS:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUNE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVEQS, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETGT:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLT:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLT, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOGT:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLT:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETOGT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLT, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUGT:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLT:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUGT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLT, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETGE:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLE:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLE, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOGE:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLE:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETOGE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLE, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUGE:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLE:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUGE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLE, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETLT:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLT:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLT, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOLT:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLT:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETOLT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLT, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETULT:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLT:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETULT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLT, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETLE:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLE:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLE, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOLE:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLE:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETOLE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLE, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }

    // Pattern: (select:f32 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETULE:Other), F4RC:f32:$st, F4RC:f32:$sf)
    // Emits: (FCMOVNES:f32 F4RC:f32:$sf, F4RC:f32:$st, (CMPTLE:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETULE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLE, Alpha::FCMOVNES, MVT::f64, MVT::f32);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SELECT_f64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::SETCC) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    SDValue N02 = N0.getOperand(2);

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETEQ:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETEQ) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOEQ:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETOEQ) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUEQ:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUEQ) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETNE:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVEQT:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETNE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVEQT, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETONE:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVEQT:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETONE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVEQT, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUNE:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVEQT:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTEQ:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUNE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTEQ, Alpha::FCMOVEQT, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETGT:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLT:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLT, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOGT:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLT:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETOGT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLT, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUGT:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLT:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUGT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLT, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETGE:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLE:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETGE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLE, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOGE:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLE:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETOGE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLE, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETUGE:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLE:f64 F8RC:f64:$RB, F8RC:f64:$RA))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETUGE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_67(N, Alpha::CMPTLE, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETLT:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLT:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLT, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOLT:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLT:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETOLT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLT, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETULT:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLT:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETULT) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLT, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETLE:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLE:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETLE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLE, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETOLE:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLE:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETOLE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLE, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }

    // Pattern: (select:f64 (setcc:i64 F8RC:f64:$RA, F8RC:f64:$RB, SETULE:Other), F8RC:f64:$st, F8RC:f64:$sf)
    // Emits: (FCMOVNET:f64 F8RC:f64:$sf, F8RC:f64:$st, (CMPTLE:f64 F8RC:f64:$RA, F8RC:f64:$RB))
    // Pattern complexity = 6  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N02)->get() == ISD::SETULE) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N00.getNode()->getValueType(0) == MVT::f64) {
        SDNode *Result = Emit_66(N, Alpha::CMPTLE, Alpha::FCMOVNET, MVT::f64, MVT::f64);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_68(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N10);
}
SDNode *Emit_69(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, Tmp2);
}
SDNode *Emit_70(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, N1);
}
SDNode *Emit_71(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_72(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, N0);
}
SDNode *Emit_73(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, Tmp1);
}
SDNode *Emit_74(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, N1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Emit_75(const SDValue &N, unsigned Opc0, unsigned Opc1, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i64);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N0, Tmp1), 0);
  SDValue Tmp3 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc1, VT1, Tmp2, Tmp3);
}
SDNode *Select_ISD_SETCC_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::AND) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
    if (Tmp0 &&
        CheckAndMask(N00, Tmp0, INT64_C(255))) {
      SDValue N1 = N.getOperand(1);

      // Pattern: (setcc:i64 (and:i64 GPRC:i64:$RA, 255:i64), (and:i64 GPRC:i64:$RB, 255:i64), SETUGE:Other)
      // Emits: (CMPBGE:i64 GPRC:i64:$RA, GPRC:i64:$RB)
      // Pattern complexity = 19  cost = 1  size = 0
      if (N1.getOpcode() == ISD::AND) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        ConstantSDNode *Tmp1 = dyn_cast<ConstantSDNode>(N11);
        if (Tmp1 &&
            CheckAndMask(N10, Tmp1, INT64_C(255))) {
          SDValue N2 = N.getOperand(2);
          if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE) {
            SDNode *Result = Emit_68(N, Alpha::CMPBGE, MVT::i64);
            return Result;
          }
        }
      }

      // Pattern: (setcc:i64 (and:i64 GPRC:i64:$RA, 255:i64), (imm:i64)<<P:Predicate_immUExt8>>:$L, SETUGE:Other)
      // Emits: (CMPBGEi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 15  cost = 1  size = 0
      if (N1.getOpcode() == ISD::Constant &&
          Predicate_immUExt8(N1.getNode())) {
        SDValue N2 = N.getOperand(2);
        if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE) {
          SDNode *Result = Emit_69(N, Alpha::CMPBGEi, MVT::i64);
          return Result;
        }
      }
    }
  }
  {
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N1.getNode())) {
      SDValue N2 = N.getOperand(2);

      // Pattern: (setcc:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L, SETEQ:Other)
      // Emits: (CMPEQi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 7  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N2)->get() == ISD::SETEQ) {
        SDNode *Result = Emit_71(N, Alpha::CMPEQi, MVT::i64);
        return Result;
      }

      // Pattern: (setcc:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L, SETLE:Other)
      // Emits: (CMPLEi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 7  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLE) {
        SDNode *Result = Emit_71(N, Alpha::CMPLEi, MVT::i64);
        return Result;
      }

      // Pattern: (setcc:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L, SETLT:Other)
      // Emits: (CMPLTi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 7  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLT) {
        SDNode *Result = Emit_71(N, Alpha::CMPLTi, MVT::i64);
        return Result;
      }

      // Pattern: (setcc:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L, SETULE:Other)
      // Emits: (CMPULEi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 7  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULE) {
        SDNode *Result = Emit_71(N, Alpha::CMPULEi, MVT::i64);
        return Result;
      }

      // Pattern: (setcc:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L, SETULT:Other)
      // Emits: (CMPULTi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 7  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULT) {
        SDNode *Result = Emit_71(N, Alpha::CMPULTi, MVT::i64);
        return Result;
      }

      // Pattern: (setcc:i64 GPRC:i64:$X, (imm:i64)<<P:Predicate_immUExt8>>:$Y, SETUEQ:Other)
      // Emits: (CMPEQi:i64 GPRC:i64:$X, (imm:i64)<<P:Predicate_immUExt8>>:$Y)
      // Pattern complexity = 7  cost = 1  size = 0
      if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUEQ) {
        SDNode *Result = Emit_71(N, Alpha::CMPEQi, MVT::i64);
        return Result;
      }
    }
  }
  if (N0.getOpcode() == ISD::Constant &&
      Predicate_immUExt8(N0.getNode())) {
    SDValue N1 = N.getOperand(1);
    SDValue N2 = N.getOperand(2);

    // Pattern: (setcc:i64 (imm:i64)<<P:Predicate_immUExt8>>:$X, GPRC:i64:$Y, SETUGT:Other)
    // Emits: (CMPULTi:i64 GPRC:i64:$Y, (imm:i64)<<P:Predicate_immUExt8>>:$X)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGT) {
      SDNode *Result = Emit_73(N, Alpha::CMPULTi, MVT::i64);
      return Result;
    }

    // Pattern: (setcc:i64 (imm:i64)<<P:Predicate_immUExt8>>:$X, GPRC:i64:$Y, SETUGE:Other)
    // Emits: (CMPULEi:i64 GPRC:i64:$Y, (imm:i64)<<P:Predicate_immUExt8>>:$X)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE) {
      SDNode *Result = Emit_73(N, Alpha::CMPULEi, MVT::i64);
      return Result;
    }

    // Pattern: (setcc:i64 (imm:i64)<<P:Predicate_immUExt8>>:$X, GPRC:i64:$Y, SETGT:Other)
    // Emits: (CMPLTi:i64 GPRC:i64:$Y, (imm:i64)<<P:Predicate_immUExt8>>:$X)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGT) {
      SDNode *Result = Emit_73(N, Alpha::CMPLTi, MVT::i64);
      return Result;
    }

    // Pattern: (setcc:i64 (imm:i64)<<P:Predicate_immUExt8>>:$X, GPRC:i64:$Y, SETGE:Other)
    // Emits: (CMPLEi:i64 GPRC:i64:$Y, (imm:i64)<<P:Predicate_immUExt8>>:$X)
    // Pattern complexity = 7  cost = 1  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGE) {
      SDNode *Result = Emit_73(N, Alpha::CMPLEi, MVT::i64);
      return Result;
    }
  }
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant &&
      Predicate_immUExt8(N1.getNode())) {
    SDValue N2 = N.getOperand(2);

    // Pattern: (setcc:i64 GPRC:i64:$X, (imm:i64)<<P:Predicate_immUExt8>>:$Y, SETNE:Other)
    // Emits: (CMPEQi:i64 (CMPEQi:i64 GPRC:i64:$X, (imm:i64)<<P:Predicate_immUExt8>>:$Y), 0:i64)
    // Pattern complexity = 7  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE) {
      SDNode *Result = Emit_75(N, Alpha::CMPEQi, Alpha::CMPEQi, MVT::i64, MVT::i64);
      return Result;
    }

    // Pattern: (setcc:i64 GPRC:i64:$X, (imm:i64)<<P:Predicate_immUExt8>>:$Y, SETUNE:Other)
    // Emits: (CMPEQi:i64 (CMPEQ:i64 GPRC:i64:$X, (imm:i64)<<P:Predicate_immUExt8>>:$Y), 0:i64)
    // Pattern complexity = 7  cost = 2  size = 0
    if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUNE) {
      SDNode *Result = Emit_75(N, Alpha::CMPEQ, Alpha::CMPEQi, MVT::i64, MVT::i64);
      return Result;
    }
  }
  SDValue N2 = N.getOperand(2);

  // Pattern: (setcc:i64 GPRC:i64:$RA, GPRC:i64:$RB, SETEQ:Other)
  // Emits: (CMPEQ:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETEQ &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_70(N, Alpha::CMPEQ, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$RA, GPRC:i64:$RB, SETLE:Other)
  // Emits: (CMPLE:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_70(N, Alpha::CMPLE, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$RA, GPRC:i64:$RB, SETLT:Other)
  // Emits: (CMPLT:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETLT &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_70(N, Alpha::CMPLT, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$RA, GPRC:i64:$RB, SETULE:Other)
  // Emits: (CMPULE:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_70(N, Alpha::CMPULE, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$RA, GPRC:i64:$RB, SETULT:Other)
  // Emits: (CMPULT:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETULT &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_70(N, Alpha::CMPULT, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$X, GPRC:i64:$Y, SETUEQ:Other)
  // Emits: (CMPEQ:i64 GPRC:i64:$X, GPRC:i64:$Y)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUEQ &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_70(N, Alpha::CMPEQ, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$X, GPRC:i64:$Y, SETUGT:Other)
  // Emits: (CMPULT:i64 GPRC:i64:$Y, GPRC:i64:$X)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGT &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_72(N, Alpha::CMPULT, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$X, GPRC:i64:$Y, SETUGE:Other)
  // Emits: (CMPULE:i64 GPRC:i64:$Y, GPRC:i64:$X)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUGE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_72(N, Alpha::CMPULE, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$X, GPRC:i64:$Y, SETGT:Other)
  // Emits: (CMPLT:i64 GPRC:i64:$Y, GPRC:i64:$X)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGT &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_72(N, Alpha::CMPLT, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$X, GPRC:i64:$Y, SETGE:Other)
  // Emits: (CMPLE:i64 GPRC:i64:$Y, GPRC:i64:$X)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETGE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_72(N, Alpha::CMPLE, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$X, GPRC:i64:$Y, SETNE:Other)
  // Emits: (CMPEQi:i64 (CMPEQ:i64 GPRC:i64:$X, GPRC:i64:$Y), 0:i64)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETNE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_74(N, Alpha::CMPEQ, Alpha::CMPEQi, MVT::i64, MVT::i64);
    return Result;
  }

  // Pattern: (setcc:i64 GPRC:i64:$X, GPRC:i64:$Y, SETUNE:Other)
  // Emits: (CMPEQi:i64 (CMPEQ:i64 GPRC:i64:$X, GPRC:i64:$Y), 0:i64)
  // Pattern complexity = 3  cost = 2  size = 0
  if (cast<CondCodeSDNode>(N2)->get() == ISD::SETUNE &&
      N0.getNode()->getValueType(0) == MVT::i64) {
    SDNode *Result = Emit_74(N, Alpha::CMPEQ, Alpha::CMPEQi, MVT::i64, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SHL_i64(const SDValue &N) {

  // Pattern: (shl:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L)
  // Emits: (SLi:i64 GPRC:i64:$RA, (imm:i64):$L)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N1.getNode())) {
      SDNode *Result = Emit_3(N, Alpha::SLi, MVT::i64);
      return Result;
    }
  }

  // Pattern: (shl:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Emits: (SLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Alpha::SLr, MVT::i64);
  return Result;
}

SDNode *Emit_76(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, N01);
}
SDNode *Emit_77(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, Tmp1);
}
SDNode *Emit_78(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000, N01);
}
SDNode *Emit_79(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000, Tmp3);
}
SDNode *Emit_80(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Emit_81(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N000 = N00.getOperand(0);
  SDValue N001 = N00.getOperand(1);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp3 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i64);
  SDValue Tmp4 = Transform_negX(Tmp3.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N000, Tmp4);
}
SDNode *Emit_82(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_83(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N01)->getZExtValue()), MVT::i64);
  SDValue Tmp2 = Transform_negX(Tmp1.getNode());
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N00, Tmp2);
}
SDNode *Emit_84(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N00 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N010 = N01.getOperand(0);
  SDValue N011 = N01.getOperand(1);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N010, N00);
}
SDNode *Select_ISD_SIGN_EXTEND_INREG_i64(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::ADD) {
    SDValue N00 = N0.getOperand(0);
    if (N00.getOpcode() == ISD::SHL) {
      SDValue N000 = N00.getOperand(0);
      SDValue N001 = N00.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (sext_inreg:i64 (add:i64 (shl:i64 GPRC:i64:$RA, 2:i64), (imm:i64)<<P:Predicate_immUExt8>>:$L), i32:Other)
        // Emits: (S4ADDLi:i64 GPRC:i64:$RA, (imm:i64):$L)
        // Pattern complexity = 18  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDValue N01 = N0.getOperand(1);
          if (N01.getOpcode() == ISD::Constant &&
              Predicate_immUExt8(N01.getNode())) {
            SDValue N1 = N.getOperand(1);
            if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
              SDNode *Result = Emit_79(N, Alpha::S4ADDLi, MVT::i64);
              return Result;
            }
          }
        }

        // Pattern: (sext_inreg:i64 (add:i64 (shl:i64 GPRC:i64:$RA, 3:i64), (imm:i64)<<P:Predicate_immUExt8>>:$L), i32:Other)
        // Emits: (S8ADDLi:i64 GPRC:i64:$RA, (imm:i64):$L)
        // Pattern complexity = 18  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDValue N01 = N0.getOperand(1);
          if (N01.getOpcode() == ISD::Constant &&
              Predicate_immUExt8(N01.getNode())) {
            SDValue N1 = N.getOperand(1);
            if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
              SDNode *Result = Emit_79(N, Alpha::S8ADDLi, MVT::i64);
              return Result;
            }
          }
        }
      }
    }
  }
  if (N0.getOpcode() == ISD::SUB) {
    SDValue N00 = N0.getOperand(0);
    if (N00.getOpcode() == ISD::SHL) {
      SDValue N000 = N00.getOperand(0);
      SDValue N001 = N00.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (sext_inreg:i64 (sub:i64 (shl:i64 GPRC:i64:$RA, 2:i64), (imm:i64)<<P:Predicate_immUExt8>>:$L), i32:Other)
        // Emits: (S4SUBLi:i64 GPRC:i64:$RA, (imm:i64):$L)
        // Pattern complexity = 18  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDValue N01 = N0.getOperand(1);
          if (N01.getOpcode() == ISD::Constant &&
              Predicate_immUExt8(N01.getNode())) {
            SDValue N1 = N.getOperand(1);
            if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
              SDNode *Result = Emit_79(N, Alpha::S4SUBLi, MVT::i64);
              return Result;
            }
          }
        }

        // Pattern: (sext_inreg:i64 (sub:i64 (shl:i64 GPRC:i64:$RA, 3:i64), (imm:i64)<<P:Predicate_immUExt8>>:$L), i32:Other)
        // Emits: (S8SUBLi:i64 GPRC:i64:$RA, (imm:i64):$L)
        // Pattern complexity = 18  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDValue N01 = N0.getOperand(1);
          if (N01.getOpcode() == ISD::Constant &&
              Predicate_immUExt8(N01.getNode())) {
            SDValue N1 = N.getOperand(1);
            if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
              SDNode *Result = Emit_79(N, Alpha::S8SUBLi, MVT::i64);
              return Result;
            }
          }
        }
      }
    }
  }
  if (N0.getOpcode() == ISD::ADD) {
    SDValue N00 = N0.getOperand(0);
    if (N00.getOpcode() == ISD::SHL) {
      SDValue N000 = N00.getOperand(0);
      SDValue N001 = N00.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (sext_inreg:i64 (add:i64 (shl:i64 GPRC:i64:$RA, 3:i64), (imm:i64)<<P:Predicate_immUExt8neg>><<X:negX>>:$L), i32:Other)
        // Emits: (S8SUBLi:i64 GPRC:i64:$RA, (negX:i64 (imm:i64)<<P:Predicate_immUExt8neg>>:$L))
        // Pattern complexity = 18  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDValue N01 = N0.getOperand(1);
          if (N01.getOpcode() == ISD::Constant &&
              Predicate_immUExt8neg(N01.getNode())) {
            SDValue N1 = N.getOperand(1);
            if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
              SDNode *Result = Emit_81(N, Alpha::S8SUBLi, MVT::i64);
              return Result;
            }
          }
        }
        if (CN1 == INT64_C(2)) {
          SDValue N01 = N0.getOperand(1);

          // Pattern: (sext_inreg:i64 (add:i64 (shl:i64 GPRC:i64:$RA, 2:i64), (imm:i64)<<P:Predicate_immUExt8neg>><<X:negX>>:$L), i32:Other)
          // Emits: (S4SUBLi:i64 GPRC:i64:$RA, (negX:i64 (imm:i64)<<P:Predicate_immUExt8neg>>:$L))
          // Pattern complexity = 18  cost = 1  size = 0
          if (N01.getOpcode() == ISD::Constant &&
              Predicate_immUExt8neg(N01.getNode())) {
            SDValue N1 = N.getOperand(1);
            if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
              SDNode *Result = Emit_81(N, Alpha::S4SUBLi, MVT::i64);
              return Result;
            }
          }

          // Pattern: (sext_inreg:i64 (add:i64 (shl:i64 GPRC:i64:$RA, 2:i64), GPRC:i64:$RB), i32:Other)
          // Emits: (S4ADDLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
          // Pattern complexity = 14  cost = 1  size = 0
          SDValue N1 = N.getOperand(1);
          if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
            SDNode *Result = Emit_78(N, Alpha::S4ADDLr, MVT::i64);
            return Result;
          }
        }

        // Pattern: (sext_inreg:i64 (add:i64 (shl:i64 GPRC:i64:$RA, 3:i64), GPRC:i64:$RB), i32:Other)
        // Emits: (S8ADDLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 14  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDValue N01 = N0.getOperand(1);
          SDValue N1 = N.getOperand(1);
          if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
            SDNode *Result = Emit_78(N, Alpha::S8ADDLr, MVT::i64);
            return Result;
          }
        }
      }
    }
  }
  if (N0.getOpcode() == ISD::SUB) {
    SDValue N00 = N0.getOperand(0);
    if (N00.getOpcode() == ISD::SHL) {
      SDValue N000 = N00.getOperand(0);
      SDValue N001 = N00.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N001);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (sext_inreg:i64 (sub:i64 (shl:i64 GPRC:i64:$RA, 2:i64), GPRC:i64:$RB), i32:Other)
        // Emits: (S4SUBLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 14  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDValue N01 = N0.getOperand(1);
          SDValue N1 = N.getOperand(1);
          if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
            SDNode *Result = Emit_78(N, Alpha::S4SUBLr, MVT::i64);
            return Result;
          }
        }

        // Pattern: (sext_inreg:i64 (sub:i64 (shl:i64 GPRC:i64:$RA, 3:i64), GPRC:i64:$RB), i32:Other)
        // Emits: (S8SUBLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 14  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDValue N01 = N0.getOperand(1);
          SDValue N1 = N.getOperand(1);
          if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
            SDNode *Result = Emit_78(N, Alpha::S8SUBLr, MVT::i64);
            return Result;
          }
        }
      }
    }
  }
  if (N0.getOpcode() == ISD::ADD) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    if (N01.getOpcode() == ISD::SHL) {
      SDValue N010 = N01.getOperand(0);
      SDValue N011 = N01.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N011);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (sext_inreg:i64 (add:i64 GPRC:i64:$RB, (shl:i64 GPRC:i64:$RA, 2:i64)), i32:Other)
        // Emits: (S4ADDLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 14  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDValue N1 = N.getOperand(1);
          if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
            SDNode *Result = Emit_84(N, Alpha::S4ADDLr, MVT::i64);
            return Result;
          }
        }

        // Pattern: (sext_inreg:i64 (add:i64 GPRC:i64:$RB, (shl:i64 GPRC:i64:$RA, 3:i64)), i32:Other)
        // Emits: (S8ADDLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 14  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDValue N1 = N.getOperand(1);
          if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
            SDNode *Result = Emit_84(N, Alpha::S8ADDLr, MVT::i64);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (sext_inreg:i64 (mul:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L), i32:Other)
  // Emits: (MULLi:i64 GPRC:i64:$RA, (imm:i64):$L)
  // Pattern complexity = 10  cost = 1  size = 0
  if (N0.getOpcode() == ISD::MUL) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    if (N01.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N01.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
        SDNode *Result = Emit_77(N, Alpha::MULLi, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (sext_inreg:i64 (add:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L), i32:Other)
  // Emits: (ADDLi:i64 GPRC:i64:$RA, (imm:i64):$L)
  // Pattern complexity = 10  cost = 1  size = 0
  if (N0.getOpcode() == ISD::ADD) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    if (N01.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N01.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
        SDNode *Result = Emit_77(N, Alpha::ADDLi, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (sext_inreg:i64 (sub:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L), i32:Other)
  // Emits: (SUBLi:i64 GPRC:i64:$RA, (imm:i64):$L)
  // Pattern complexity = 10  cost = 1  size = 0
  if (N0.getOpcode() == ISD::SUB) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    if (N01.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N01.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
        SDNode *Result = Emit_77(N, Alpha::SUBLi, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (sext_inreg:i64 (add:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8neg>><<X:negX>>:$L), i32:Other)
  // Emits: (SUBLi:i64 GPRC:i64:$RA, (negX:i64 (imm:i64)<<P:Predicate_immUExt8neg>>:$L))
  // Pattern complexity = 10  cost = 1  size = 0
  if (N0.getOpcode() == ISD::ADD) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    if (N01.getOpcode() == ISD::Constant &&
        Predicate_immUExt8neg(N01.getNode())) {
      SDValue N1 = N.getOperand(1);
      if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
        SDNode *Result = Emit_83(N, Alpha::SUBLi, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (sext_inreg:i64 (mul:i64 GPRC:i64:$RA, GPRC:i64:$RB), i32:Other)
  // Emits: (MULLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::MUL) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    SDValue N1 = N.getOperand(1);
    if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
      SDNode *Result = Emit_76(N, Alpha::MULLr, MVT::i64);
      return Result;
    }
  }

  // Pattern: (sext_inreg:i64 (add:i64 GPRC:i64:$RA, GPRC:i64:$RB), i32:Other)
  // Emits: (ADDLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::ADD) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    SDValue N1 = N.getOperand(1);
    if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
      SDNode *Result = Emit_76(N, Alpha::ADDLr, MVT::i64);
      return Result;
    }
  }

  // Pattern: (sext_inreg:i64 (sub:i64 GPRC:i64:$RA, GPRC:i64:$RB), i32:Other)
  // Emits: (SUBLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 6  cost = 1  size = 0
  if (N0.getOpcode() == ISD::SUB) {
    SDValue N00 = N0.getOperand(0);
    SDValue N01 = N0.getOperand(1);
    SDValue N1 = N.getOperand(1);
    if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
      SDNode *Result = Emit_76(N, Alpha::SUBLr, MVT::i64);
      return Result;
    }
  }
  SDValue N1 = N.getOperand(1);

  // Pattern: (sext_inreg:i64 GPRC:i64:$RB, i8:Other)
  // Emits: (SEXTB:i64 GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i8) {
    SDNode *Result = Emit_80(N, Alpha::SEXTB, MVT::i64);
    return Result;
  }

  // Pattern: (sext_inreg:i64 GPRC:i64:$RB, i16:Other)
  // Emits: (SEXTW:i64 GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i16) {
    SDNode *Result = Emit_80(N, Alpha::SEXTW, MVT::i64);
    return Result;
  }

  // Pattern: (sext_inreg:i64 GPRC:i64:$RB, i32:Other)
  // Emits: (ADDLi:i64 GPRC:i64:$RB, 0:i64)
  // Pattern complexity = 3  cost = 1  size = 0
  if (cast<VTSDNode>(N1)->getVT() == MVT::i32) {
    SDNode *Result = Emit_82(N, Alpha::ADDLi, MVT::i64);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SRA_i64(const SDValue &N) {

  // Pattern: (sra:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L)
  // Emits: (SRAi:i64 GPRC:i64:$RA, (imm:i64):$L)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N1.getNode())) {
      SDNode *Result = Emit_3(N, Alpha::SRAi, MVT::i64);
      return Result;
    }
  }

  // Pattern: (sra:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Emits: (SRAr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Alpha::SRAr, MVT::i64);
  return Result;
}

SDNode *Select_ISD_SRL_i64(const SDValue &N) {

  // Pattern: (srl:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L)
  // Emits: (SRLi:i64 GPRC:i64:$RA, (imm:i64):$L)
  // Pattern complexity = 7  cost = 1  size = 0
  {
    SDValue N0 = N.getOperand(0);
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N1.getNode())) {
      SDNode *Result = Emit_3(N, Alpha::SRLi, MVT::i64);
      return Result;
    }
  }

  // Pattern: (srl:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Emits: (SRLr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Alpha::SRLr, MVT::i64);
  return Result;
}

SDNode *Emit_85(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N20 = N2.getOperand(0);
  SDValue N21 = N2.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((uint64_t) cast<ConstantSDNode>(N21)->getZExtValue()), MVT::i64);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, Tmp1, N20, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_86(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N20 = N2.getOperand(0);
  SDValue N21 = N2.getOperand(1);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, N20, N21, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_87(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(0x0ULL, MVT::i64);
  SDValue LSI_N = CurDAG->getMemOperand(cast<MemSDNode>(N)->getMemOperand());
  SDValue Ops0[] = { N1, Tmp1, N2, LSI_N, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Select_ISD_STORE(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  if (Predicate_unindexedstore(N.getNode())) {
    if (Predicate_truncstore(N.getNode())) {

      // Pattern: (st:isVoid GPRC:i64:$RA, (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (STB:isVoid GPRC:i64:$RA, (imm:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 11  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::ADD) {
          SDValue N20 = N2.getOperand(0);
          SDValue N21 = N2.getOperand(1);
          if (N21.getOpcode() == ISD::Constant &&
              Predicate_immSExt16(N21.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_85(N, Alpha::STB);
            return Result;
          }
        }
      }

      // Pattern: (st:isVoid GPRC:i64:$RA, (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (STW:isVoid GPRC:i64:$RA, (imm:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 11  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::ADD) {
          SDValue N20 = N2.getOperand(0);
          SDValue N21 = N2.getOperand(1);
          if (N21.getOpcode() == ISD::Constant &&
              Predicate_immSExt16(N21.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_85(N, Alpha::STW);
            return Result;
          }
        }
      }

      // Pattern: (st:isVoid GPRC:i64:$RA, (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>>
      // Emits: (STL:isVoid GPRC:i64:$RA, (imm:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 11  cost = 1  size = 0
      if (Predicate_truncstorei32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == ISD::ADD) {
          SDValue N20 = N2.getOperand(0);
          SDValue N21 = N2.getOperand(1);
          if (N21.getOpcode() == ISD::Constant &&
              Predicate_immSExt16(N21.getNode()) &&
              N1.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_85(N, Alpha::STL);
            return Result;
          }
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == ISD::ADD) {
        SDValue N20 = N2.getOperand(0);
        SDValue N21 = N2.getOperand(1);
        if (N21.getOpcode() == ISD::Constant &&
            Predicate_immSExt16(N21.getNode())) {

          // Pattern: (st:isVoid GPRC:i64:$RA, (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
          // Emits: (STQ:isVoid GPRC:i64:$RA, (imm:i64):$DISP, GPRC:i64:$RB)
          // Pattern complexity = 11  cost = 1  size = 0
          if (N1.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_85(N, Alpha::STQ);
            return Result;
          }

          // Pattern: (st:isVoid F4RC:f32:$RA, (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
          // Emits: (STS:isVoid F4RC:f32:$RA, (imm:i64):$DISP, GPRC:i64:$RB)
          // Pattern complexity = 11  cost = 1  size = 0
          if (N1.getNode()->getValueType(0) == MVT::f32) {
            SDNode *Result = Emit_85(N, Alpha::STS);
            return Result;
          }

          // Pattern: (st:isVoid F8RC:f64:$RA, (add:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immSExt16>>:$DISP))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
          // Emits: (STT:isVoid F8RC:f64:$RA, (imm:i64):$DISP, GPRC:i64:$RB)
          // Pattern complexity = 11  cost = 1  size = 0
          if (N1.getNode()->getValueType(0) == MVT::f64) {
            SDNode *Result = Emit_85(N, Alpha::STT);
            return Result;
          }
        }
      }
    }
    if (Predicate_truncstore(N.getNode())) {

      // Pattern: (st:isVoid GPRC:i64:$RA, (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (STBr:isVoid GPRC:i64:$RA, (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == AlphaISD::GPRelLo) {
          SDValue N20 = N2.getOperand(0);
          if (N20.getOpcode() == ISD::TargetGlobalAddress) {
            SDValue N21 = N2.getOperand(1);
            if (N1.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_86(N, Alpha::STBr);
              return Result;
            }
          }
        }
      }

      // Pattern: (st:isVoid GPRC:i64:$RA, (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (STWr:isVoid GPRC:i64:$RA, (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == AlphaISD::GPRelLo) {
          SDValue N20 = N2.getOperand(0);
          if (N20.getOpcode() == ISD::TargetGlobalAddress) {
            SDValue N21 = N2.getOperand(1);
            if (N1.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_86(N, Alpha::STWr);
              return Result;
            }
          }
        }
      }

      // Pattern: (st:isVoid GPRC:i64:$RA, (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>>
      // Emits: (STLr:isVoid GPRC:i64:$RA, (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
      // Pattern complexity = 10  cost = 1  size = 0
      if (Predicate_truncstorei32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N2.getOpcode() == AlphaISD::GPRelLo) {
          SDValue N20 = N2.getOperand(0);
          if (N20.getOpcode() == ISD::TargetGlobalAddress) {
            SDValue N21 = N2.getOperand(1);
            if (N1.getNode()->getValueType(0) == MVT::i64) {
              SDNode *Result = Emit_86(N, Alpha::STLr);
              return Result;
            }
          }
        }
      }
    }
    if (Predicate_store(N.getNode())) {
      SDValue N1 = N.getOperand(1);
      SDValue N2 = N.getOperand(2);
      if (N2.getOpcode() == AlphaISD::GPRelLo) {
        SDValue N20 = N2.getOperand(0);
        if (N20.getOpcode() == ISD::TargetGlobalAddress) {
          SDValue N21 = N2.getOperand(1);

          // Pattern: (st:isVoid GPRC:i64:$RA, (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
          // Emits: (STQr:isVoid GPRC:i64:$RA, (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
          // Pattern complexity = 10  cost = 1  size = 0
          if (N1.getNode()->getValueType(0) == MVT::i64) {
            SDNode *Result = Emit_86(N, Alpha::STQr);
            return Result;
          }

          // Pattern: (st:isVoid F4RC:f32:$RA, (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
          // Emits: (STSr:isVoid F4RC:f32:$RA, (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
          // Pattern complexity = 10  cost = 1  size = 0
          if (N1.getNode()->getValueType(0) == MVT::f32) {
            SDNode *Result = Emit_86(N, Alpha::STSr);
            return Result;
          }

          // Pattern: (st:isVoid F8RC:f64:$RA, (Alpha_gprello:i64 (tglobaladdr:i64):$DISP, GPRC:i64:$RB))<<P:Predicate_unindexedstore>><<P:Predicate_store>>
          // Emits: (STTr:isVoid F8RC:f64:$RA, (tglobaladdr:i64):$DISP, GPRC:i64:$RB)
          // Pattern complexity = 10  cost = 1  size = 0
          if (N1.getNode()->getValueType(0) == MVT::f64) {
            SDNode *Result = Emit_86(N, Alpha::STTr);
            return Result;
          }
        }
      }

      // Pattern: (st:isVoid GPRC:i64:$DATA, GPRC:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STQ:isVoid GPRC:i64:$DATA, 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::i64 &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_87(N, Alpha::STQ);
        return Result;
      }

      // Pattern: (st:isVoid F8RC:f64:$DATA, GPRC:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STT:isVoid F8RC:f64:$DATA, 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::f64 &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_87(N, Alpha::STT);
        return Result;
      }

      // Pattern: (st:isVoid F4RC:f32:$DATA, GPRC:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>>
      // Emits: (STS:isVoid F4RC:f32:$DATA, 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (N1.getNode()->getValueType(0) == MVT::f32 &&
          N2.getNode()->getValueType(0) == MVT::i64) {
        SDNode *Result = Emit_87(N, Alpha::STS);
        return Result;
      }
    }
    if (Predicate_truncstore(N.getNode())) {

      // Pattern: (st:isVoid GPRC:i64:$DATA, GPRC:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>>
      // Emits: (STL:isVoid GPRC:i64:$DATA, 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_truncstorei32(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N1.getNode()->getValueType(0) == MVT::i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_87(N, Alpha::STL);
          return Result;
        }
      }

      // Pattern: (st:isVoid GPRC:i64:$DATA, GPRC:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>>
      // Emits: (STW:isVoid GPRC:i64:$DATA, 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_truncstorei16(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N1.getNode()->getValueType(0) == MVT::i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_87(N, Alpha::STW);
          return Result;
        }
      }

      // Pattern: (st:isVoid GPRC:i64:$DATA, GPRC:i64:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>>
      // Emits: (STB:isVoid GPRC:i64:$DATA, 0:i64, GPRC:i64:$addr)
      // Pattern complexity = 4  cost = 1  size = 0
      if (Predicate_truncstorei8(N.getNode())) {
        SDValue N1 = N.getOperand(1);
        SDValue N2 = N.getOperand(2);
        if (N1.getNode()->getValueType(0) == MVT::i64 &&
            N2.getNode()->getValueType(0) == MVT::i64) {
          SDNode *Result = Emit_87(N, Alpha::STB);
          return Result;
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SUB_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == ISD::SHL) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      ConstantSDNode *Tmp0 = dyn_cast<ConstantSDNode>(N01);
      if (Tmp0) {
        int64_t CN1 = Tmp0->getSExtValue();

        // Pattern: (sub:i64 (shl:i64 GPRC:i64:$RA, 2:i64), (imm:i64)<<P:Predicate_immUExt8>>:$L)
        // Emits: (S4SUBQi:i64 GPRC:i64:$RA, (imm:i64):$L)
        // Pattern complexity = 15  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::Constant &&
              Predicate_immUExt8(N1.getNode())) {
            SDNode *Result = Emit_5(N, Alpha::S4SUBQi, MVT::i64);
            return Result;
          }
        }

        // Pattern: (sub:i64 (shl:i64 GPRC:i64:$RA, 3:i64), (imm:i64)<<P:Predicate_immUExt8>>:$L)
        // Emits: (S8SUBQi:i64 GPRC:i64:$RA, (imm:i64):$L)
        // Pattern complexity = 15  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDValue N1 = N.getOperand(1);
          if (N1.getOpcode() == ISD::Constant &&
              Predicate_immUExt8(N1.getNode())) {
            SDNode *Result = Emit_5(N, Alpha::S8SUBQi, MVT::i64);
            return Result;
          }
        }

        // Pattern: (sub:i64 (shl:i64 GPRC:i64:$RA, 2:i64), GPRC:i64:$RB)
        // Emits: (S4SUBQr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 11  cost = 1  size = 0
        if (CN1 == INT64_C(2)) {
          SDNode *Result = Emit_4(N, Alpha::S4SUBQr, MVT::i64);
          return Result;
        }

        // Pattern: (sub:i64 (shl:i64 GPRC:i64:$RA, 3:i64), GPRC:i64:$RB)
        // Emits: (S8SUBQr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
        // Pattern complexity = 11  cost = 1  size = 0
        if (CN1 == INT64_C(3)) {
          SDNode *Result = Emit_4(N, Alpha::S8SUBQr, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (sub:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L)
    // Emits: (SUBQi:i64 GPRC:i64:$RA, (imm:i64):$L)
    // Pattern complexity = 7  cost = 1  size = 0
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant &&
        Predicate_immUExt8(N1.getNode())) {
      SDNode *Result = Emit_3(N, Alpha::SUBQi, MVT::i64);
      return Result;
    }
  }

  // Pattern: (sub:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Emits: (SUBQr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Alpha::SUBQr, MVT::i64);
  return Result;
}

SDNode *Select_ISD_XOR_i64(const SDValue &N) {
  {
    SDValue N0 = N.getOperand(0);

    // Pattern: (xor:i64 GPRC:i64:$RA, (xor:i64 GPRC:i64:$RB, (imm:i64)<<P:Predicate_immAllOnes>>))
    // Emits: (EQVr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
    // Pattern complexity = 10  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == ISD::XOR) {
        SDValue N10 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        if (N11.getOpcode() == ISD::Constant &&
            Predicate_immAllOnes(N11.getNode())) {
          SDNode *Result = Emit_10(N, Alpha::EQVr, MVT::i64);
          return Result;
        }
      }
    }

    // Pattern: (xor:i64 (xor:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immAllOnes>>), GPRC:i64:$RB)
    // Emits: (EQVr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
    // Pattern complexity = 10  cost = 1  size = 0
    if (N0.getOpcode() == ISD::XOR) {
      SDValue N00 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      if (N01.getOpcode() == ISD::Constant &&
          Predicate_immAllOnes(N01.getNode())) {
        SDNode *Result = Emit_4(N, Alpha::EQVr, MVT::i64);
        return Result;
      }
    }
    SDValue N1 = N.getOperand(1);
    if (N1.getOpcode() == ISD::Constant) {

      // Pattern: (xor:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8>>:$L)
      // Emits: (XORi:i64 GPRC:i64:$RA, (imm:i64):$L)
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUExt8(N1.getNode())) {
        SDNode *Result = Emit_3(N, Alpha::XORi, MVT::i64);
        return Result;
      }

      // Pattern: (xor:i64 GPRC:i64:$RA, (imm:i64)<<P:Predicate_immUExt8inv>><<X:invX>>:$L)
      // Emits: (EQVi:i64 GPRC:i64:$RA, (invX:i64 (imm:i64):$L))
      // Pattern complexity = 7  cost = 1  size = 0
      if (Predicate_immUExt8inv(N1.getNode())) {
        SDNode *Result = Emit_11(N, Alpha::EQVi, MVT::i64);
        return Result;
      }
    }
  }

  // Pattern: (xor:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Emits: (XORr:i64 GPRC:i64:$RA, GPRC:i64:$RB)
  // Pattern complexity = 3  cost = 1  size = 0
  SDNode *Result = Emit_1(N, Alpha::XORr, MVT::i64);
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
  case AlphaISD::CVTQS_: {
    switch (NVT) {
    case MVT::f32:
      return Select_AlphaISD_CVTQS__f32(N);
    default:
      break;
    }
    break;
  }
  case AlphaISD::CVTQT_: {
    switch (NVT) {
    case MVT::f64:
      return Select_AlphaISD_CVTQT__f64(N);
    default:
      break;
    }
    break;
  }
  case AlphaISD::CVTTQ_: {
    switch (NVT) {
    case MVT::f64:
      return Select_AlphaISD_CVTTQ__f64(N);
    default:
      break;
    }
    break;
  }
  case AlphaISD::GPRelHi: {
    switch (NVT) {
    case MVT::i64:
      return Select_AlphaISD_GPRelHi_i64(N);
    default:
      break;
    }
    break;
  }
  case AlphaISD::GPRelLo: {
    switch (NVT) {
    case MVT::i64:
      return Select_AlphaISD_GPRelLo_i64(N);
    default:
      break;
    }
    break;
  }
  case AlphaISD::RET_FLAG: {
    switch (NVT) {
    default:
      return Select_AlphaISD_RET_FLAG(N);
      break;
    }
    break;
  }
  case AlphaISD::RelLit: {
    switch (NVT) {
    case MVT::i64:
      return Select_AlphaISD_RelLit_i64(N);
    default:
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
    case MVT::i64:
      return Select_ISD_AND_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ATOMIC_CMP_SWAP: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_ATOMIC_CMP_SWAP_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ATOMIC_LOAD_ADD: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_ATOMIC_LOAD_ADD_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::ATOMIC_SWAP: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_ATOMIC_SWAP_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::BIT_CONVERT: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_BIT_CONVERT_i64(N);
    case MVT::f64:
      return Select_ISD_BIT_CONVERT_f64(N);
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
    case MVT::i64:
      return Select_ISD_CTLZ_i64(N);
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
  case ISD::CTTZ: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_CTTZ_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::Constant: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_Constant_i64(N);
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
  case ISD::FCOPYSIGN: {
    switch (NVT) {
    case MVT::f32:
      return Select_ISD_FCOPYSIGN_f32(N);
    case MVT::f64:
      return Select_ISD_FCOPYSIGN_f64(N);
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
    case MVT::i64:
      return Select_ISD_LOAD_i64(N);
    case MVT::f32:
      return Select_ISD_LOAD_f32(N);
    case MVT::f64:
      return Select_ISD_LOAD_f64(N);
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
    case MVT::i64:
      return Select_ISD_OR_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SELECT: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_SELECT_i64(N);
    case MVT::f32:
      return Select_ISD_SELECT_f32(N);
    case MVT::f64:
      return Select_ISD_SELECT_f64(N);
    default:
      break;
    }
    break;
  }
  case ISD::SETCC: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_SETCC_i64(N);
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
    case MVT::i64:
      return Select_ISD_SUB_i64(N);
    default:
      break;
    }
    break;
  }
  case ISD::XOR: {
    switch (NVT) {
    case MVT::i64:
      return Select_ISD_XOR_i64(N);
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

