//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the PIC16 target
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


SDNode *Emit_0(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN11_0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N13 = N1.getOperand(3);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N13)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N12)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N0, Tmp1, CPTmpN11_0, Tmp3, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
  ReplaceUses(SDValue(N1.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Emit_1(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i8);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0, Tmp1);
}
SDNode *Emit_2(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN01_0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N03 = N0.getOperand(3);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N03)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N02)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N1, Tmp1, CPTmpN01_0, Tmp3, Chain0 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 5);
  ReplaceUses(SDValue(N0.getNode(), 1), SDValue(ResNode, 1));
  return ResNode;
}
SDNode *Select_ISD_ADD_i8(const SDValue &N) {
  if (!Fast) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (add:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset))
    // Emits: (addfw_1:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == PIC16ISD::PIC16Load &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        if (SelectDirectAddr(N, N11, CPTmpN11_0)) {
          SDValue N12 = N1.getOperand(2);
          if (N12.getOpcode() == ISD::Constant) {
            SDValue N13 = N1.getOperand(3);
            if (N13.getOpcode() == ISD::Constant) {
              SDNode *Result = Emit_0(N, PIC16::addfw_1, MVT::i8, CPTmpN11_0);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (add:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src)
    // Emits: (addfw_1:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    if (N0.getOpcode() == PIC16ISD::PIC16Load &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      if (SelectDirectAddr(N, N01, CPTmpN01_0)) {
        SDValue N02 = N0.getOperand(2);
        if (N02.getOpcode() == ISD::Constant) {
          SDValue N03 = N0.getOperand(3);
          if (N03.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_2(N, PIC16::addfw_1, MVT::i8, CPTmpN01_0);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (add:i8 GPR:i8:$src, (imm:i8):$literal)
  // Emits: (addlw_1:i8 GPR:i8:$src, (imm:i8):$literal)
  // Pattern complexity = 6  cost = 1  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_1(N, PIC16::addlw_1, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_3(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN11_0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N13 = N1.getOperand(3);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N13)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N12)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N0, Tmp1, CPTmpN11_0, Tmp3, Chain1 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, MVT::Flag, Ops0, 5);
  SDValue InFlag(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 1)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_4(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i8);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, Tmp1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_5(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN01_0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N03 = N0.getOperand(3);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N03)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N02)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N1, Tmp1, CPTmpN01_0, Tmp3, Chain0 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, MVT::Flag, Ops0, 5);
  SDValue InFlag(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N0.getNode(), 1),
    SDValue(N.getNode(), 1)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_ISD_ADDC_i8(const SDValue &N) {
  if (!Fast) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (addc:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset))
    // Emits: (addfw_2:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == PIC16ISD::PIC16Load &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        if (SelectDirectAddr(N, N11, CPTmpN11_0)) {
          SDValue N12 = N1.getOperand(2);
          if (N12.getOpcode() == ISD::Constant) {
            SDValue N13 = N1.getOperand(3);
            if (N13.getOpcode() == ISD::Constant) {
              SDNode *Result = Emit_3(N, PIC16::addfw_2, MVT::i8, CPTmpN11_0);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (addc:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src)
    // Emits: (addfw_2:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    if (N0.getOpcode() == PIC16ISD::PIC16Load &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      if (SelectDirectAddr(N, N01, CPTmpN01_0)) {
        SDValue N02 = N0.getOperand(2);
        if (N02.getOpcode() == ISD::Constant) {
          SDValue N03 = N0.getOperand(3);
          if (N03.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_5(N, PIC16::addfw_2, MVT::i8, CPTmpN01_0);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (addc:i8 GPR:i8:$src, (imm:i8):$literal)
  // Emits: (addlw_2:i8 GPR:i8:$src, (imm:i8):$literal)
  // Pattern complexity = 6  cost = 1  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_4(N, PIC16::addlw_2, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_6(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN11_0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Chain1 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue N12 = N1.getOperand(2);
  SDValue N13 = N1.getOperand(3);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N13)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N12)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(2);
  SDValue Ops0[] = { N0, Tmp1, CPTmpN11_0, Tmp3, Chain1, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, MVT::Flag, Ops0, 6);
  InFlag = SDValue(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 1)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_7(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(2);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N0, Tmp1, InFlag);
  InFlag = SDValue(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Emit_8(const SDValue &N, unsigned Opc0, MVT VT0, SDValue &CPTmpN01_0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue Chain0 = N0.getOperand(0);
  SDValue N01 = N0.getOperand(1);
  SDValue N02 = N0.getOperand(2);
  SDValue N03 = N0.getOperand(3);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N03)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N02)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(2);
  SDValue Ops0[] = { N1, Tmp1, CPTmpN01_0, Tmp3, Chain0, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, MVT::Flag, Ops0, 6);
  InFlag = SDValue(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N0.getNode(), 1),
    SDValue(N.getNode(), 1)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 1),
    InFlag
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_ISD_ADDE_i8(const SDValue &N) {
  if (!Fast) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (adde:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset))
    // Emits: (addfwc:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == PIC16ISD::PIC16Load &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        if (SelectDirectAddr(N, N11, CPTmpN11_0)) {
          SDValue N12 = N1.getOperand(2);
          if (N12.getOpcode() == ISD::Constant) {
            SDValue N13 = N1.getOperand(3);
            if (N13.getOpcode() == ISD::Constant) {
              SDNode *Result = Emit_6(N, PIC16::addfwc, MVT::i8, CPTmpN11_0);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (adde:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src)
    // Emits: (addfwc:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    if (N0.getOpcode() == PIC16ISD::PIC16Load &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      if (SelectDirectAddr(N, N01, CPTmpN01_0)) {
        SDValue N02 = N0.getOperand(2);
        if (N02.getOpcode() == ISD::Constant) {
          SDValue N03 = N0.getOperand(3);
          if (N03.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_8(N, PIC16::addfwc, MVT::i8, CPTmpN01_0);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (adde:i8 GPR:i8:$src, (imm:i8):$literal)
  // Emits: (addlwc:i8 GPR:i8:$src, (imm:i8):$literal)
  // Pattern complexity = 6  cost = 1  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_7(N, PIC16::addlwc, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_AND_i8(const SDValue &N) {
  if (!Fast) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (and:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset))
    // Emits: (AndFW:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == PIC16ISD::PIC16Load &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        if (SelectDirectAddr(N, N11, CPTmpN11_0)) {
          SDValue N12 = N1.getOperand(2);
          if (N12.getOpcode() == ISD::Constant) {
            SDValue N13 = N1.getOperand(3);
            if (N13.getOpcode() == ISD::Constant) {
              SDNode *Result = Emit_0(N, PIC16::AndFW, MVT::i8, CPTmpN11_0);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (and:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src)
    // Emits: (AndFW:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    if (N0.getOpcode() == PIC16ISD::PIC16Load &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      if (SelectDirectAddr(N, N01, CPTmpN01_0)) {
        SDValue N02 = N0.getOperand(2);
        if (N02.getOpcode() == ISD::Constant) {
          SDValue N03 = N0.getOperand(3);
          if (N03.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_2(N, PIC16::AndFW, MVT::i8, CPTmpN01_0);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (and:i8 GPR:i8:$src, (imm:i8):$literal)
  // Emits: (andlw:i8 GPR:i8:$src, (imm:i8):$literal)
  // Pattern complexity = 6  cost = 1  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_1(N, PIC16::andlw, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_9(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, N1, Chain);
}
SDNode *Select_ISD_BR(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDNode *Result = Emit_9(N, PIC16::br_uncond);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_10(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i8);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { Tmp0, Chain, InFlag };
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
SDNode *Select_ISD_CALLSEQ_END(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_10(N, PIC16::ADJCALLSTACKUP);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_11(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N1)->getZExtValue()), MVT::i8);
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
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_11(N, PIC16::ADJCALLSTACKDOWN);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_12(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N)->getZExtValue()), MVT::i8);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Tmp0);
}
SDNode *Select_ISD_Constant_i8(const SDValue &N) {
  SDNode *Result = Emit_12(N, PIC16::movlw, MVT::i8);
  return Result;
}

SDNode *Select_ISD_OR_i8(const SDValue &N) {
  if (!Fast) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (or:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset))
    // Emits: (OrFW:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == PIC16ISD::PIC16Load &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        if (SelectDirectAddr(N, N11, CPTmpN11_0)) {
          SDValue N12 = N1.getOperand(2);
          if (N12.getOpcode() == ISD::Constant) {
            SDValue N13 = N1.getOperand(3);
            if (N13.getOpcode() == ISD::Constant) {
              SDNode *Result = Emit_0(N, PIC16::OrFW, MVT::i8, CPTmpN11_0);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (or:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src)
    // Emits: (OrFW:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    if (N0.getOpcode() == PIC16ISD::PIC16Load &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      if (SelectDirectAddr(N, N01, CPTmpN01_0)) {
        SDValue N02 = N0.getOperand(2);
        if (N02.getOpcode() == ISD::Constant) {
          SDValue N03 = N0.getOperand(3);
          if (N03.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_2(N, PIC16::OrFW, MVT::i8, CPTmpN01_0);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (or:i8 GPR:i8:$src, (imm:i8):$literal)
  // Emits: (orlw:i8 GPR:i8:$src, (imm:i8):$literal)
  // Pattern complexity = 6  cost = 1  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_1(N, PIC16::orlw, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_13(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Chain);
}
SDNode *Select_ISD_RET(const SDValue &N) {
  SDNode *Result = Emit_13(N, PIC16::Return);
  return Result;
}

SDNode *Emit_14(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i8);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N1, Tmp1);
}
SDNode *Select_ISD_SUB_i8(const SDValue &N) {

  // Pattern: (sub:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src)
  // Emits: (subfw_1:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 18  cost = 1  size = 0
  if (!Fast) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == PIC16ISD::PIC16Load &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      if (SelectDirectAddr(N, N01, CPTmpN01_0)) {
        SDValue N02 = N0.getOperand(2);
        if (N02.getOpcode() == ISD::Constant) {
          SDValue N03 = N0.getOperand(3);
          if (N03.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_2(N, PIC16::subfw_1, MVT::i8, CPTmpN01_0);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (sub:i8 (imm:i8):$literal, GPR:i8:$src)
  // Emits: (sublw_1:i8 GPR:i8:$src, (imm:i8):$literal)
  // Pattern complexity = 6  cost = 1  size = 0
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_14(N, PIC16::sublw_1, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_15(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N0)->getZExtValue()), MVT::i8);
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Flag, N1, Tmp1);
  SDValue InFlag(ResNode, 1);
  ReplaceUses(SDValue(N.getNode(), 1), InFlag);
  return ResNode;
}
SDNode *Select_ISD_SUBC_i8(const SDValue &N) {

  // Pattern: (subc:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src)
  // Emits: (subfw_2:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 18  cost = 1  size = 0
  if (!Fast) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == PIC16ISD::PIC16Load &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      if (SelectDirectAddr(N, N01, CPTmpN01_0)) {
        SDValue N02 = N0.getOperand(2);
        if (N02.getOpcode() == ISD::Constant) {
          SDValue N03 = N0.getOperand(3);
          if (N03.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_5(N, PIC16::subfw_2, MVT::i8, CPTmpN01_0);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (subc:i8 (imm:i8):$literal, GPR:i8:$src)
  // Emits: (sublw_2:i8 GPR:i8:$src, (imm:i8):$literal)
  // Pattern complexity = 6  cost = 1  size = 0
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_15(N, PIC16::sublw_2, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_SUBE_i8(const SDValue &N) {
  if (!Fast) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == PIC16ISD::PIC16Load &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      if (SelectDirectAddr(N, N01, CPTmpN01_0)) {
        SDValue N02 = N0.getOperand(2);
        if (N02.getOpcode() == ISD::Constant) {
          SDValue N03 = N0.getOperand(3);
          if (N03.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_8(N, PIC16::subfwb, MVT::i8, CPTmpN01_0);
            return Result;
          }
        }
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_ISD_XOR_i8(const SDValue &N) {
  if (!Fast) {
    SDValue N0 = N.getOperand(0);

    // Pattern: (xor:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset))
    // Emits: (XOrFW:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    {
      SDValue N1 = N.getOperand(1);
      if (N1.getOpcode() == PIC16ISD::PIC16Load &&
          N1.hasOneUse() &&
          IsLegalAndProfitableToFold(N1.getNode(), N.getNode(), N.getNode())) {
        SDValue Chain1 = N1.getOperand(0);
        SDValue N11 = N1.getOperand(1);
        SDValue CPTmpN11_0;
        if (SelectDirectAddr(N, N11, CPTmpN11_0)) {
          SDValue N12 = N1.getOperand(2);
          if (N12.getOpcode() == ISD::Constant) {
            SDValue N13 = N1.getOperand(3);
            if (N13.getOpcode() == ISD::Constant) {
              SDNode *Result = Emit_0(N, PIC16::XOrFW, MVT::i8, CPTmpN11_0);
              return Result;
            }
          }
        }
      }
    }

    // Pattern: (xor:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src)
    // Emits: (XOrFW:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
    // Pattern complexity = 18  cost = 1  size = 0
    if (N0.getOpcode() == PIC16ISD::PIC16Load &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      if (SelectDirectAddr(N, N01, CPTmpN01_0)) {
        SDValue N02 = N0.getOperand(2);
        if (N02.getOpcode() == ISD::Constant) {
          SDValue N03 = N0.getOperand(3);
          if (N03.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_2(N, PIC16::XOrFW, MVT::i8, CPTmpN01_0);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (xor:i8 GPR:i8:$src, (imm:i8):$literal)
  // Emits: (xorlw:i8 GPR:i8:$src, (imm:i8):$literal)
  // Pattern complexity = 6  cost = 1  size = 0
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_1(N, PIC16::xorlw, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_16(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(3);
  SDValue Ops0[] = { N1, Tmp1, Chain, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 4);
}
SDNode *Select_PIC16ISD_BRCOND(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::BasicBlock) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDNode *Result = Emit_16(N, PIC16::pic16brcond);
      return Result;
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_17(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, N0);
}
SDNode *Select_PIC16ISD_Banksel_i8(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_17(N, PIC16::banksel, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_18(const SDValue &N, unsigned Opc0, SDValue &CPTmpN1_0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  bool HasInFlag = (N.getOperand(N.getNumOperands()-1).getValueType() == MVT::Flag);
  SDValue InFlag(0, 0);
  if (HasInFlag) {
    InFlag = N.getOperand(N.getNumOperands()-1);
  }
  SDValue Ops0[] = { CPTmpN1_0, Chain, InFlag };
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
SDNode *Select_PIC16ISD_CALL(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue CPTmpN1_0;
  if (SelectDirectAddr(N, N1, CPTmpN1_0) &&
      N1.getNode()->getValueType(0) == MVT::i8) {
    SDNode *Result = Emit_18(N, PIC16::CALL, CPTmpN1_0);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PIC16ISD_Hi_i8(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_17(N, PIC16::movlw_hi, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PIC16ISD_Lo_i8(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::TargetGlobalAddress) {
    SDNode *Result = Emit_17(N, PIC16::movlw_lo, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_19(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i8);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(4);
  SDValue Ops0[] = { N1, Tmp1, Tmp2, Chain, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, MVT::Flag, Ops0, 5);
  Chain = SDValue(ResNode, 1);
  InFlag = SDValue(ResNode, 2);
  const SDValue Froms[] = {
    SDValue(N.getNode(), 2),
    SDValue(N.getNode(), 1)
  };
  const SDValue Tos[] = {
    InFlag,
    SDValue(Chain.getNode(), Chain.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Select_PIC16ISD_PIC16LdWF_i8(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  if (N1.getOpcode() == ISD::TargetExternalSymbol) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDValue N3 = N.getOperand(3);
      if (N3.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_19(N, PIC16::movf_2, MVT::i8);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_20(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue Tmp0 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i8);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { Tmp0, N1, Tmp2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_21(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i8);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N1, Tmp1, Tmp2, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, MVT::Other, Ops0, 4);
}
SDNode *Emit_22(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, MVT VT0, MVT VT1, MVT VT2) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N2 = N.getOperand(2);
  SDValue N20 = N2.getOperand(0);
  SDValue N3 = N.getOperand(3);
  SDValue Tmp1(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N10), 0);
  SDValue Tmp3(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp1, N20), 0);
  SDValue Tmp4 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i8);
  return CurDAG->SelectNodeTo(N.getNode(), Opc2, VT2, MVT::Other, Tmp3, Tmp4, Chain);
}
SDNode *Select_PIC16ISD_PIC16Load_i8(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (PIC16Load:i8 (tglobaladdr:i8):$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (movf:i8 (imm:i8):$offset, (tglobaladdr:i8):$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 12  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetGlobalAddress) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDValue N3 = N.getOperand(3);
      if (N3.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_20(N, PIC16::movf, MVT::i8);
        return Result;
      }
    }
  }

  // Pattern: (PIC16Load:i8 (texternalsym:i8):$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (movf_1:i8 (texternalsym:i8):$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Pattern complexity = 12  cost = 1  size = 0
  if (N1.getOpcode() == ISD::TargetExternalSymbol) {
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == ISD::Constant) {
      SDValue N3 = N.getOperand(3);
      if (N3.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_21(N, PIC16::movf_1, MVT::i8);
        return Result;
      }
    }
  }

  // Pattern: (PIC16Load:i8 (MTLO:i8 GPR:i8:$loaddr), (MTHI:i8 GPR:i8:$hiaddr), (imm:i8):$offset)
  // Emits: (load_indirect:i8 (set_fsrhi:i16 (set_fsrlo:i16 GPR:i8:$loaddr), GPR:i8:$hiaddr), (imm:i8):$offset)
  // Pattern complexity = 12  cost = 3  size = 0
  if (N1.getOpcode() == PIC16ISD::MTLO) {
    SDValue N10 = N1.getOperand(0);
    SDValue N2 = N.getOperand(2);
    if (N2.getOpcode() == PIC16ISD::MTHI) {
      SDValue N20 = N2.getOperand(0);
      SDValue N3 = N.getOperand(3);
      if (N3.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_22(N, PIC16::set_fsrlo, PIC16::set_fsrhi, PIC16::load_indirect, MVT::i16, MVT::i16, MVT::i8);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_23(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N4)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(5);
  SDValue Ops0[] = { N1, N2, Tmp2, Tmp3, Chain, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, 6);
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
SDNode *Select_PIC16ISD_PIC16StWF(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::TargetExternalSymbol) {
    SDValue N3 = N.getOperand(3);
    if (N3.getOpcode() == ISD::Constant) {
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_23(N, PIC16::movwf_2);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_24(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N4)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N1, Tmp1, N2, Tmp3, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_25(const SDValue &N, unsigned Opc0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N3)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N4)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N1, N2, Tmp2, Tmp3, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
}
SDNode *Emit_26(const SDValue &N, unsigned Opc0, SDValue &CPTmpN111_0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N112 = N11.getOperand(2);
  SDValue N113 = N11.getOperand(3);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N11.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N113)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N112)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N10, Tmp1, CPTmpN111_0, Tmp3, Chain11 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
  Chain11 = SDValue(ResNode, 0);
  const SDValue Froms[] = {
    SDValue(N11.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_27(const SDValue &N, unsigned Opc0, SDValue &CPTmpN111_0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N112 = N11.getOperand(2);
  SDValue N113 = N11.getOperand(3);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N11.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N113)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N112)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N10, Tmp1, CPTmpN111_0, Tmp3, Chain11 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, 5);
  Chain11 = SDValue(ResNode, 0);
  SDValue InFlag(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N11.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    InFlag,
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_28(const SDValue &N, unsigned Opc0, SDValue &CPTmpN111_0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue N11 = N1.getOperand(1);
  SDValue Chain11 = N11.getOperand(0);
  SDValue N111 = N11.getOperand(1);
  SDValue N112 = N11.getOperand(2);
  SDValue N113 = N11.getOperand(3);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N11.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain11);
  Chain11 = CurDAG->getNode(ISD::TokenFactor, MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N113)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N112)->getZExtValue()), MVT::i8);
  SDValue InFlag = N1.getOperand(2);
  SDValue Ops0[] = { N10, Tmp1, CPTmpN111_0, Tmp3, Chain11, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, 6);
  Chain11 = SDValue(ResNode, 0);
  InFlag = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N11.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    InFlag,
    SDValue(Chain11.getNode(), Chain11.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_29(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N102 = N10.getOperand(2);
  SDValue N103 = N10.getOperand(3);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain10);
  Chain10 = CurDAG->getNode(ISD::TokenFactor, MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N103)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N102)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N11, Tmp1, CPTmpN101_0, Tmp3, Chain10 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, Ops0, 5);
  Chain10 = SDValue(ResNode, 0);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    SDValue(Chain10.getNode(), Chain10.getResNo())
  };
  ReplaceUses(Froms, Tos, 2);
  return ResNode;
}
SDNode *Emit_30(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N102 = N10.getOperand(2);
  SDValue N103 = N10.getOperand(3);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain10);
  Chain10 = CurDAG->getNode(ISD::TokenFactor, MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N103)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N102)->getZExtValue()), MVT::i8);
  SDValue Ops0[] = { N11, Tmp1, CPTmpN101_0, Tmp3, Chain10 };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, 5);
  Chain10 = SDValue(ResNode, 0);
  SDValue InFlag(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    InFlag,
    SDValue(Chain10.getNode(), Chain10.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_31(const SDValue &N, unsigned Opc0, SDValue &CPTmpN101_0) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N10 = N1.getOperand(0);
  SDValue Chain10 = N10.getOperand(0);
  SDValue N101 = N10.getOperand(1);
  SDValue N102 = N10.getOperand(2);
  SDValue N103 = N10.getOperand(3);
  SDValue N11 = N1.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N3 = N.getOperand(3);
  SDValue N4 = N.getOperand(4);
  SmallVector<SDValue, 8> InChains;
  if (Chain.getNode() != N10.getNode()) {
    InChains.push_back(Chain);
  }
  InChains.push_back(Chain10);
  Chain10 = CurDAG->getNode(ISD::TokenFactor, MVT::Other, &InChains[0], InChains.size());
  SDValue Tmp1 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N103)->getZExtValue()), MVT::i8);
  SDValue Tmp3 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N102)->getZExtValue()), MVT::i8);
  SDValue InFlag = N1.getOperand(2);
  SDValue Ops0[] = { N11, Tmp1, CPTmpN101_0, Tmp3, Chain10, InFlag };
  SDNode *ResNode = CurDAG->SelectNodeTo(N.getNode(), Opc0, MVT::Other, MVT::Flag, Ops0, 6);
  Chain10 = SDValue(ResNode, 0);
  InFlag = SDValue(ResNode, 1);
  const SDValue Froms[] = {
    SDValue(N10.getNode(), 1),
    SDValue(N1.getNode(), 1),
    SDValue(N.getNode(), 0)
  };
  const SDValue Tos[] = {
    SDValue(ResNode, 0),
    InFlag,
    SDValue(Chain10.getNode(), Chain10.getResNo())
  };
  ReplaceUses(Froms, Tos, 3);
  return ResNode;
}
SDNode *Emit_32(const SDValue &N, unsigned Opc0, unsigned Opc1, unsigned Opc2, MVT VT0, MVT VT1) DISABLE_INLINE {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue N20 = N2.getOperand(0);
  SDValue N3 = N.getOperand(3);
  SDValue N30 = N3.getOperand(0);
  SDValue N4 = N.getOperand(4);
  SDValue Tmp2(CurDAG->getTargetNode(Opc0, N.getDebugLoc(), VT0, N20), 0);
  SDValue Tmp4(CurDAG->getTargetNode(Opc1, N.getDebugLoc(), VT1, Tmp2, N30), 0);
  SDValue Tmp5 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N4)->getZExtValue()), MVT::i8);
  SDValue Ops2[] = { N1, Tmp4, Tmp5, Chain };
  return CurDAG->SelectNodeTo(N.getNode(), Opc2, MVT::Other, Ops2, 4);
}
SDNode *Select_PIC16ISD_PIC16Store(const SDValue &N) {
  SDValue Chain = N.getOperand(0);
  SDValue N1 = N.getOperand(1);

  // Pattern: (PIC16Store:isVoid (or:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (OrWF:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::OR &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    SDValue N11 = N1.getOperand(1);
    if (N11.getOpcode() == PIC16ISD::PIC16Load &&
        N11.hasOneUse() &&
        IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
      SDValue Chain11 = N11.getOperand(0);
      SDValue N111 = N11.getOperand(1);
      SDValue CPTmpN111_0;
      if (SelectDirectAddr(N, N111, CPTmpN111_0)) {
        SDValue N112 = N11.getOperand(2);
        if (N112.getOpcode() == ISD::Constant) {
          SDValue N113 = N11.getOperand(3);
          if (N113.getOpcode() == ISD::Constant) {
            SDValue N2 = N.getOperand(2);
            if (N111 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N112 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N113 == N4) {
                  SDNode *Result = Emit_26(N, PIC16::OrWF, CPTmpN111_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (xor:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (XOrWF:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::XOR &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    SDValue N11 = N1.getOperand(1);
    if (N11.getOpcode() == PIC16ISD::PIC16Load &&
        N11.hasOneUse() &&
        IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
      SDValue Chain11 = N11.getOperand(0);
      SDValue N111 = N11.getOperand(1);
      SDValue CPTmpN111_0;
      if (SelectDirectAddr(N, N111, CPTmpN111_0)) {
        SDValue N112 = N11.getOperand(2);
        if (N112.getOpcode() == ISD::Constant) {
          SDValue N113 = N11.getOperand(3);
          if (N113.getOpcode() == ISD::Constant) {
            SDValue N2 = N.getOperand(2);
            if (N111 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N112 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N113 == N4) {
                  SDNode *Result = Emit_26(N, PIC16::XOrWF, CPTmpN111_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (and:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (AndWF:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::AND &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    SDValue N11 = N1.getOperand(1);
    if (N11.getOpcode() == PIC16ISD::PIC16Load &&
        N11.hasOneUse() &&
        IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
      SDValue Chain11 = N11.getOperand(0);
      SDValue N111 = N11.getOperand(1);
      SDValue CPTmpN111_0;
      if (SelectDirectAddr(N, N111, CPTmpN111_0)) {
        SDValue N112 = N11.getOperand(2);
        if (N112.getOpcode() == ISD::Constant) {
          SDValue N113 = N11.getOperand(3);
          if (N113.getOpcode() == ISD::Constant) {
            SDValue N2 = N.getOperand(2);
            if (N111 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N112 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N113 == N4) {
                  SDNode *Result = Emit_26(N, PIC16::AndWF, CPTmpN111_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (add:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (addwf_1:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::ADD &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    SDValue N11 = N1.getOperand(1);
    if (N11.getOpcode() == PIC16ISD::PIC16Load &&
        N11.hasOneUse() &&
        IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
      SDValue Chain11 = N11.getOperand(0);
      SDValue N111 = N11.getOperand(1);
      SDValue CPTmpN111_0;
      if (SelectDirectAddr(N, N111, CPTmpN111_0)) {
        SDValue N112 = N11.getOperand(2);
        if (N112.getOpcode() == ISD::Constant) {
          SDValue N113 = N11.getOperand(3);
          if (N113.getOpcode() == ISD::Constant) {
            SDValue N2 = N.getOperand(2);
            if (N111 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N112 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N113 == N4) {
                  SDNode *Result = Emit_26(N, PIC16::addwf_1, CPTmpN111_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (addc:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (addwf_2:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::ADDC &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    SDValue N11 = N1.getOperand(1);
    if (N11.getOpcode() == PIC16ISD::PIC16Load &&
        N11.hasOneUse() &&
        IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
      SDValue Chain11 = N11.getOperand(0);
      SDValue N111 = N11.getOperand(1);
      SDValue CPTmpN111_0;
      if (SelectDirectAddr(N, N111, CPTmpN111_0)) {
        SDValue N112 = N11.getOperand(2);
        if (N112.getOpcode() == ISD::Constant) {
          SDValue N113 = N11.getOperand(3);
          if (N113.getOpcode() == ISD::Constant) {
            SDValue N2 = N.getOperand(2);
            if (N111 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N112 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N113 == N4) {
                  SDNode *Result = Emit_27(N, PIC16::addwf_2, CPTmpN111_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (adde:i8 GPR:i8:$src, (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (addwfc:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::ADDE &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    SDValue N11 = N1.getOperand(1);
    if (N11.getOpcode() == PIC16ISD::PIC16Load &&
        N11.hasOneUse() &&
        IsLegalAndProfitableToFold(N11.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N11.getNode() || IsChainCompatible(Chain.getNode(), N11.getNode()))) {
      SDValue Chain11 = N11.getOperand(0);
      SDValue N111 = N11.getOperand(1);
      SDValue CPTmpN111_0;
      if (SelectDirectAddr(N, N111, CPTmpN111_0)) {
        SDValue N112 = N11.getOperand(2);
        if (N112.getOpcode() == ISD::Constant) {
          SDValue N113 = N11.getOperand(3);
          if (N113.getOpcode() == ISD::Constant) {
            SDValue N2 = N.getOperand(2);
            if (N111 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N112 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N113 == N4) {
                  SDNode *Result = Emit_28(N, PIC16::addwfc, CPTmpN111_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (sub:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (subwf_1:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::SUB &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    if (N10.getOpcode() == PIC16ISD::PIC16Load &&
        N10.hasOneUse() &&
        IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
      SDValue Chain10 = N10.getOperand(0);
      SDValue N101 = N10.getOperand(1);
      SDValue CPTmpN101_0;
      if (SelectDirectAddr(N, N101, CPTmpN101_0)) {
        SDValue N102 = N10.getOperand(2);
        if (N102.getOpcode() == ISD::Constant) {
          SDValue N103 = N10.getOperand(3);
          if (N103.getOpcode() == ISD::Constant) {
            SDValue N11 = N1.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N101 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N102 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N103 == N4) {
                  SDNode *Result = Emit_29(N, PIC16::subwf_1, CPTmpN101_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (subc:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (subwf_2:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::SUBC &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    if (N10.getOpcode() == PIC16ISD::PIC16Load &&
        N10.hasOneUse() &&
        IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
      SDValue Chain10 = N10.getOperand(0);
      SDValue N101 = N10.getOperand(1);
      SDValue CPTmpN101_0;
      if (SelectDirectAddr(N, N101, CPTmpN101_0)) {
        SDValue N102 = N10.getOperand(2);
        if (N102.getOpcode() == ISD::Constant) {
          SDValue N103 = N10.getOperand(3);
          if (N103.getOpcode() == ISD::Constant) {
            SDValue N11 = N1.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N101 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N102 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N103 == N4) {
                  SDNode *Result = Emit_30(N, PIC16::subwf_2, CPTmpN101_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (sube:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (subwfb:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::SUBE &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    if (N10.getOpcode() == PIC16ISD::PIC16Load &&
        N10.hasOneUse() &&
        IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
      SDValue Chain10 = N10.getOperand(0);
      SDValue N101 = N10.getOperand(1);
      SDValue CPTmpN101_0;
      if (SelectDirectAddr(N, N101, CPTmpN101_0)) {
        SDValue N102 = N10.getOperand(2);
        if (N102.getOpcode() == ISD::Constant) {
          SDValue N103 = N10.getOperand(3);
          if (N103.getOpcode() == ISD::Constant) {
            SDValue N11 = N1.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N101 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N102 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N103 == N4) {
                  SDNode *Result = Emit_31(N, PIC16::subwfb, CPTmpN101_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (PIC16Subcc:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (subwf_cc:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == PIC16ISD::SUBCC &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    if (N10.getOpcode() == PIC16ISD::PIC16Load &&
        N10.hasOneUse() &&
        IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
      SDValue Chain10 = N10.getOperand(0);
      SDValue N101 = N10.getOperand(1);
      SDValue CPTmpN101_0;
      if (SelectDirectAddr(N, N101, CPTmpN101_0)) {
        SDValue N102 = N10.getOperand(2);
        if (N102.getOpcode() == ISD::Constant) {
          SDValue N103 = N10.getOperand(3);
          if (N103.getOpcode() == ISD::Constant) {
            SDValue N11 = N1.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N101 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N102 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N103 == N4) {
                  SDNode *Result = Emit_30(N, PIC16::subwf_cc, CPTmpN101_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (or:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (OrWF:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::OR &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    if (N10.getOpcode() == PIC16ISD::PIC16Load &&
        N10.hasOneUse() &&
        IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
      SDValue Chain10 = N10.getOperand(0);
      SDValue N101 = N10.getOperand(1);
      SDValue CPTmpN101_0;
      if (SelectDirectAddr(N, N101, CPTmpN101_0)) {
        SDValue N102 = N10.getOperand(2);
        if (N102.getOpcode() == ISD::Constant) {
          SDValue N103 = N10.getOperand(3);
          if (N103.getOpcode() == ISD::Constant) {
            SDValue N11 = N1.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N101 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N102 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N103 == N4) {
                  SDNode *Result = Emit_29(N, PIC16::OrWF, CPTmpN101_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (xor:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (XOrWF:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::XOR &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    if (N10.getOpcode() == PIC16ISD::PIC16Load &&
        N10.hasOneUse() &&
        IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
      SDValue Chain10 = N10.getOperand(0);
      SDValue N101 = N10.getOperand(1);
      SDValue CPTmpN101_0;
      if (SelectDirectAddr(N, N101, CPTmpN101_0)) {
        SDValue N102 = N10.getOperand(2);
        if (N102.getOpcode() == ISD::Constant) {
          SDValue N103 = N10.getOperand(3);
          if (N103.getOpcode() == ISD::Constant) {
            SDValue N11 = N1.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N101 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N102 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N103 == N4) {
                  SDNode *Result = Emit_29(N, PIC16::XOrWF, CPTmpN101_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (and:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (AndWF:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::AND &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    if (N10.getOpcode() == PIC16ISD::PIC16Load &&
        N10.hasOneUse() &&
        IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
      SDValue Chain10 = N10.getOperand(0);
      SDValue N101 = N10.getOperand(1);
      SDValue CPTmpN101_0;
      if (SelectDirectAddr(N, N101, CPTmpN101_0)) {
        SDValue N102 = N10.getOperand(2);
        if (N102.getOpcode() == ISD::Constant) {
          SDValue N103 = N10.getOperand(3);
          if (N103.getOpcode() == ISD::Constant) {
            SDValue N11 = N1.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N101 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N102 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N103 == N4) {
                  SDNode *Result = Emit_29(N, PIC16::AndWF, CPTmpN101_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (add:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (addwf_1:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::ADD &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    if (N10.getOpcode() == PIC16ISD::PIC16Load &&
        N10.hasOneUse() &&
        IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
      SDValue Chain10 = N10.getOperand(0);
      SDValue N101 = N10.getOperand(1);
      SDValue CPTmpN101_0;
      if (SelectDirectAddr(N, N101, CPTmpN101_0)) {
        SDValue N102 = N10.getOperand(2);
        if (N102.getOpcode() == ISD::Constant) {
          SDValue N103 = N10.getOperand(3);
          if (N103.getOpcode() == ISD::Constant) {
            SDValue N11 = N1.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N101 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N102 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N103 == N4) {
                  SDNode *Result = Emit_29(N, PIC16::addwf_1, CPTmpN101_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (addc:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (addwf_2:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::ADDC &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    if (N10.getOpcode() == PIC16ISD::PIC16Load &&
        N10.hasOneUse() &&
        IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
      SDValue Chain10 = N10.getOperand(0);
      SDValue N101 = N10.getOperand(1);
      SDValue CPTmpN101_0;
      if (SelectDirectAddr(N, N101, CPTmpN101_0)) {
        SDValue N102 = N10.getOperand(2);
        if (N102.getOpcode() == ISD::Constant) {
          SDValue N103 = N10.getOperand(3);
          if (N103.getOpcode() == ISD::Constant) {
            SDValue N11 = N1.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N101 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N102 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N103 == N4) {
                  SDNode *Result = Emit_30(N, PIC16::addwf_2, CPTmpN101_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }

  // Pattern: (PIC16Store:isVoid (adde:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src), diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (addwfc:isVoid GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 33  cost = 1  size = 0
  if (N1.getOpcode() == ISD::ADDE &&
      N1.hasOneUse()) {
    SDValue N10 = N1.getOperand(0);
    if (N10.getOpcode() == PIC16ISD::PIC16Load &&
        N10.hasOneUse() &&
        IsLegalAndProfitableToFold(N10.getNode(), N1.getNode(), N.getNode()) &&
        (Chain.getNode() == N10.getNode() || IsChainCompatible(Chain.getNode(), N10.getNode()))) {
      SDValue Chain10 = N10.getOperand(0);
      SDValue N101 = N10.getOperand(1);
      SDValue CPTmpN101_0;
      if (SelectDirectAddr(N, N101, CPTmpN101_0)) {
        SDValue N102 = N10.getOperand(2);
        if (N102.getOpcode() == ISD::Constant) {
          SDValue N103 = N10.getOperand(3);
          if (N103.getOpcode() == ISD::Constant) {
            SDValue N11 = N1.getOperand(1);
            SDValue N2 = N.getOperand(2);
            if (N101 == N2) {
              SDValue N3 = N.getOperand(3);
              if (N3.getOpcode() == ISD::Constant &&
                  N102 == N3) {
                SDValue N4 = N.getOperand(4);
                if (N4.getOpcode() == ISD::Constant &&
                    N103 == N4) {
                  SDNode *Result = Emit_31(N, PIC16::addwfc, CPTmpN101_0);
                  return Result;
                }
              }
            }
          }
        }
      }
    }
  }
  SDValue N2 = N.getOperand(2);

  // Pattern: (PIC16Store:isVoid GPR:i8:$val, (tglobaladdr:i8):$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (movwf:isVoid GPR:i8:$val, (imm:i8):$offset, (tglobaladdr:i8):$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 12  cost = 1  size = 0
  if (N2.getOpcode() == ISD::TargetGlobalAddress) {
    SDValue N3 = N.getOperand(3);
    if (N3.getOpcode() == ISD::Constant) {
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_24(N, PIC16::movwf);
        return Result;
      }
    }
  }

  // Pattern: (PIC16Store:isVoid GPR:i8:$val, (texternalsym:i8):$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Emits: (movwf_1:isVoid GPR:i8:$val, (texternalsym:i8):$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset)
  // Pattern complexity = 12  cost = 1  size = 0
  if (N2.getOpcode() == ISD::TargetExternalSymbol) {
    SDValue N3 = N.getOperand(3);
    if (N3.getOpcode() == ISD::Constant) {
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_25(N, PIC16::movwf_1);
        return Result;
      }
    }
  }

  // Pattern: (PIC16Store:isVoid GPR:i8:$val, (MTLO:i8 GPR:i8:$loaddr), (MTHI:i8 GPR:i8:$hiaddr), (imm:i8):$offset)
  // Emits: (store_indirect:isVoid GPR:i8:$val, (set_fsrhi:i16 (set_fsrlo:i16 GPR:i8:$loaddr), GPR:i8:$hiaddr), (imm:i8):$offset)
  // Pattern complexity = 12  cost = 3  size = 0
  if (N2.getOpcode() == PIC16ISD::MTLO) {
    SDValue N20 = N2.getOperand(0);
    SDValue N3 = N.getOperand(3);
    if (N3.getOpcode() == PIC16ISD::MTHI) {
      SDValue N30 = N3.getOperand(0);
      SDValue N4 = N.getOperand(4);
      if (N4.getOpcode() == ISD::Constant) {
        SDNode *Result = Emit_32(N, PIC16::set_fsrlo, PIC16::set_fsrhi, PIC16::store_indirect, MVT::i16, MVT::i16);
        return Result;
      }
    }
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Emit_33(const SDValue &N, unsigned Opc0, MVT VT0) DISABLE_INLINE {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  SDValue Tmp2 = CurDAG->getTargetConstant(((unsigned char) cast<ConstantSDNode>(N2)->getZExtValue()), MVT::i8);
  SDValue InFlag = N.getOperand(3);
  SDValue Ops0[] = { N0, N1, Tmp2, InFlag };
  return CurDAG->SelectNodeTo(N.getNode(), Opc0, VT0, Ops0, 4);
}
SDNode *Select_PIC16ISD_SELECT_ICC_i8(const SDValue &N) {
  SDValue N0 = N.getOperand(0);
  SDValue N1 = N.getOperand(1);
  SDValue N2 = N.getOperand(2);
  if (N2.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_33(N, PIC16::SELECT_CC_Int_ICC, MVT::i8);
    return Result;
  }

  CannotYetSelect(N);
  return NULL;
}

SDNode *Select_PIC16ISD_SUBCC_i8(const SDValue &N) {

  // Pattern: (PIC16Subcc:i8 (PIC16Load:i8 diraddr:i8:$ptrlo, (imm:i8):$ptrhi, (imm:i8):$offset), GPR:i8:$src)
  // Emits: (subfw_cc:i8 GPR:i8:$src, (imm:i8):$offset, diraddr:i8:$ptrlo, (imm:i8):$ptrhi)
  // Pattern complexity = 18  cost = 1  size = 0
  if (!Fast) {
    SDValue N0 = N.getOperand(0);
    if (N0.getOpcode() == PIC16ISD::PIC16Load &&
        N0.hasOneUse() &&
        IsLegalAndProfitableToFold(N0.getNode(), N.getNode(), N.getNode())) {
      SDValue Chain0 = N0.getOperand(0);
      SDValue N01 = N0.getOperand(1);
      SDValue CPTmpN01_0;
      if (SelectDirectAddr(N, N01, CPTmpN01_0)) {
        SDValue N02 = N0.getOperand(2);
        if (N02.getOpcode() == ISD::Constant) {
          SDValue N03 = N0.getOperand(3);
          if (N03.getOpcode() == ISD::Constant) {
            SDNode *Result = Emit_5(N, PIC16::subfw_cc, MVT::i8, CPTmpN01_0);
            return Result;
          }
        }
      }
    }
  }

  // Pattern: (PIC16Subcc:i8 (imm:i8):$literal, GPR:i8:$src)
  // Emits: (sublw_cc:i8 GPR:i8:$src, (imm:i8):$literal)
  // Pattern complexity = 6  cost = 1  size = 0
  SDValue N0 = N.getOperand(0);
  if (N0.getOpcode() == ISD::Constant) {
    SDNode *Result = Emit_15(N, PIC16::sublw_cc, MVT::i8);
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
    case MVT::i8:
      return Select_ISD_ADD_i8(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADDC: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_ADDC_i8(N);
    default:
      break;
    }
    break;
  }
  case ISD::ADDE: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_ADDE_i8(N);
    default:
      break;
    }
    break;
  }
  case ISD::AND: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_AND_i8(N);
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
  case ISD::Constant: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_Constant_i8(N);
    default:
      break;
    }
    break;
  }
  case ISD::OR: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_OR_i8(N);
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
  case ISD::SUB: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_SUB_i8(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUBC: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_SUBC_i8(N);
    default:
      break;
    }
    break;
  }
  case ISD::SUBE: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_SUBE_i8(N);
    default:
      break;
    }
    break;
  }
  case ISD::XOR: {
    switch (NVT) {
    case MVT::i8:
      return Select_ISD_XOR_i8(N);
    default:
      break;
    }
    break;
  }
  case PIC16ISD::BRCOND: {
    switch (NVT) {
    default:
      return Select_PIC16ISD_BRCOND(N);
      break;
    }
    break;
  }
  case PIC16ISD::Banksel: {
    switch (NVT) {
    case MVT::i8:
      return Select_PIC16ISD_Banksel_i8(N);
    default:
      break;
    }
    break;
  }
  case PIC16ISD::CALL: {
    switch (NVT) {
    default:
      return Select_PIC16ISD_CALL(N);
      break;
    }
    break;
  }
  case PIC16ISD::Hi: {
    switch (NVT) {
    case MVT::i8:
      return Select_PIC16ISD_Hi_i8(N);
    default:
      break;
    }
    break;
  }
  case PIC16ISD::Lo: {
    switch (NVT) {
    case MVT::i8:
      return Select_PIC16ISD_Lo_i8(N);
    default:
      break;
    }
    break;
  }
  case PIC16ISD::PIC16LdWF: {
    switch (NVT) {
    case MVT::i8:
      return Select_PIC16ISD_PIC16LdWF_i8(N);
    default:
      break;
    }
    break;
  }
  case PIC16ISD::PIC16Load: {
    switch (NVT) {
    case MVT::i8:
      return Select_PIC16ISD_PIC16Load_i8(N);
    default:
      break;
    }
    break;
  }
  case PIC16ISD::PIC16StWF: {
    switch (NVT) {
    default:
      return Select_PIC16ISD_PIC16StWF(N);
      break;
    }
    break;
  }
  case PIC16ISD::PIC16Store: {
    switch (NVT) {
    default:
      return Select_PIC16ISD_PIC16Store(N);
      break;
    }
    break;
  }
  case PIC16ISD::SELECT_ICC: {
    switch (NVT) {
    case MVT::i8:
      return Select_PIC16ISD_SELECT_ICC_i8(N);
    default:
      break;
    }
    break;
  }
  case PIC16ISD::SUBCC: {
    switch (NVT) {
    case MVT::i8:
      return Select_PIC16ISD_SUBCC_i8(N);
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

