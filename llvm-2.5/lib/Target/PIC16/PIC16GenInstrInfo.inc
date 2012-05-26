//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Descriptors
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {


static const TargetOperandInfo OperandInfo2[] = { { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo3[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, ((0 << 16) | (1 << TOI::TIED_TO)) }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo4[] = { { PIC16::GPRRegClassID, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo5[] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo6[] = { { 0, 0, 0 }, { 0, 0, ((0 << 16) | (1 << TOI::TIED_TO)) }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo7[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo8[] = { { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo9[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, ((0 << 16) | (1 << TOI::TIED_TO)) }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo10[] = { { PIC16::BSRRegClassID, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo11[] = { { PIC16::FSR16RegClassID, 0, 0 }, { PIC16::FSR16RegClassID, 0, 0 }, };
static const TargetOperandInfo OperandInfo12[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, 0 }, };
static const TargetOperandInfo OperandInfo13[] = { { PIC16::GPRRegClassID, 0, 0 }, { PIC16::FSR16RegClassID, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo14[] = { { PIC16::GPRRegClassID, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo15[] = { { 0, 0, 0 }, { 0, 0, 0 }, };
static const TargetOperandInfo OperandInfo16[] = { { PIC16::FSR16RegClassID, 0, 0 }, { PIC16::FSR16RegClassID, 0, ((0 << 16) | (1 << TOI::TIED_TO)) }, { PIC16::GPRRegClassID, 0, 0 }, };
static const TargetOperandInfo OperandInfo17[] = { { PIC16::FSR16RegClassID, 0, 0 }, { PIC16::GPRRegClassID, 0, 0 }, };

static const TargetInstrDesc PIC16Insts[] = {
  { 0,	0,	0,	0,	"PHI", 0|(1<<TID::Variadic)|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, 0 },  // Inst #0 = PHI
  { 1,	0,	0,	0,	"INLINEASM", 0|(1<<TID::Variadic)|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, 0 },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	"DBG_LABEL", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #2 = DBG_LABEL
  { 3,	1,	0,	0,	"EH_LABEL", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	"GC_LABEL", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	"DECLARE", 0|(1<<TID::Variadic)|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, 0 },  // Inst #5 = DECLARE
  { 6,	3,	1,	0,	"EXTRACT_SUBREG", 0, 0, NULL, NULL, NULL, OperandInfo5 },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	"INSERT_SUBREG", 0, 0, NULL, NULL, NULL, OperandInfo6 },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	"IMPLICIT_DEF", 0|(1<<TID::Rematerializable)|(1<<TID::CheapAsAMove), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	"SUBREG_TO_REG", 0, 0, NULL, NULL, NULL, OperandInfo8 },  // Inst #9 = SUBREG_TO_REG
  { 10,	1,	0,	0,	"ADJCALLSTACKDOWN", 0, 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #10 = ADJCALLSTACKDOWN
  { 11,	1,	0,	0,	"ADJCALLSTACKUP", 0, 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #11 = ADJCALLSTACKUP
  { 12,	5,	1,	0,	"AndFW", 0, 0, NULL, NULL, NULL, OperandInfo3 },  // Inst #12 = AndFW
  { 13,	4,	0,	0,	"AndWF", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #13 = AndWF
  { 14,	1,	0,	0,	"CALL", 0|(1<<TID::Call), 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #14 = CALL
  { 15,	5,	1,	0,	"OrFW", 0, 0, NULL, NULL, NULL, OperandInfo3 },  // Inst #15 = OrFW
  { 16,	4,	0,	0,	"OrWF", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #16 = OrWF
  { 17,	0,	0,	0,	"Return", 0, 0, NULL, NULL, NULL, 0 },  // Inst #17 = Return
  { 18,	4,	1,	0,	"SELECT_CC_Int_ICC", 0|(1<<TID::UsesCustomDAGSchedInserter), 0, NULL, NULL, NULL, OperandInfo7 },  // Inst #18 = SELECT_CC_Int_ICC
  { 19,	5,	1,	0,	"XOrFW", 0, 0, NULL, NULL, NULL, OperandInfo3 },  // Inst #19 = XOrFW
  { 20,	4,	0,	0,	"XOrWF", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #20 = XOrWF
  { 21,	5,	1,	0,	"addfw_1", 0, 0, NULL, NULL, NULL, OperandInfo3 },  // Inst #21 = addfw_1
  { 22,	5,	1,	0,	"addfw_2", 0, 0, NULL, NULL, NULL, OperandInfo3 },  // Inst #22 = addfw_2
  { 23,	5,	1,	0,	"addfwc", 0, 0, NULL, NULL, NULL, OperandInfo3 },  // Inst #23 = addfwc
  { 24,	3,	1,	0,	"addlw_1", 0, 0, NULL, NULL, NULL, OperandInfo9 },  // Inst #24 = addlw_1
  { 25,	3,	1,	0,	"addlw_2", 0, 0, NULL, NULL, NULL, OperandInfo9 },  // Inst #25 = addlw_2
  { 26,	3,	1,	0,	"addlwc", 0, 0, NULL, NULL, NULL, OperandInfo9 },  // Inst #26 = addlwc
  { 27,	4,	0,	0,	"addwf_1", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #27 = addwf_1
  { 28,	4,	0,	0,	"addwf_2", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #28 = addwf_2
  { 29,	4,	0,	0,	"addwfc", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #29 = addwfc
  { 30,	3,	1,	0,	"andlw", 0, 0, NULL, NULL, NULL, OperandInfo9 },  // Inst #30 = andlw
  { 31,	2,	1,	0,	"banksel", 0|(1<<TID::Rematerializable), 0, NULL, NULL, NULL, OperandInfo10 },  // Inst #31 = banksel
  { 32,	1,	0,	0,	"br_uncond", 0, 0, NULL, NULL, NULL, OperandInfo2 },  // Inst #32 = br_uncond
  { 33,	2,	1,	0,	"copy_fsr", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo11 },  // Inst #33 = copy_fsr
  { 34,	2,	1,	0,	"copy_w", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo12 },  // Inst #34 = copy_w
  { 35,	3,	1,	0,	"load_indirect", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo13 },  // Inst #35 = load_indirect
  { 36,	4,	1,	0,	"movf", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #36 = movf
  { 37,	4,	1,	0,	"movf_1", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #37 = movf_1
  { 38,	4,	1,	0,	"movf_2", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #38 = movf_2
  { 39,	2,	1,	0,	"movlw", 0|(1<<TID::Rematerializable), 0, NULL, NULL, NULL, OperandInfo14 },  // Inst #39 = movlw
  { 40,	2,	1,	0,	"movlw_hi", 0|(1<<TID::Rematerializable), 0, NULL, NULL, NULL, OperandInfo14 },  // Inst #40 = movlw_hi
  { 41,	2,	1,	0,	"movlw_lo", 0|(1<<TID::Rematerializable), 0, NULL, NULL, NULL, OperandInfo14 },  // Inst #41 = movlw_lo
  { 42,	4,	0,	0,	"movwf", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #42 = movwf
  { 43,	4,	0,	0,	"movwf_1", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #43 = movwf_1
  { 44,	4,	0,	0,	"movwf_2", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #44 = movwf_2
  { 45,	3,	1,	0,	"orlw", 0, 0, NULL, NULL, NULL, OperandInfo9 },  // Inst #45 = orlw
  { 46,	2,	0,	0,	"pic16brcond", 0, 0, NULL, NULL, NULL, OperandInfo15 },  // Inst #46 = pic16brcond
  { 47,	3,	1,	0,	"set_fsrhi", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo16 },  // Inst #47 = set_fsrhi
  { 48,	2,	1,	0,	"set_fsrlo", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo17 },  // Inst #48 = set_fsrlo
  { 49,	3,	0,	0,	"store_indirect", 0|(1<<TID::UnmodeledSideEffects), 0, NULL, NULL, NULL, OperandInfo13 },  // Inst #49 = store_indirect
  { 50,	5,	1,	0,	"subfw_1", 0, 0, NULL, NULL, NULL, OperandInfo3 },  // Inst #50 = subfw_1
  { 51,	5,	1,	0,	"subfw_2", 0, 0, NULL, NULL, NULL, OperandInfo3 },  // Inst #51 = subfw_2
  { 52,	5,	1,	0,	"subfw_cc", 0, 0, NULL, NULL, NULL, OperandInfo3 },  // Inst #52 = subfw_cc
  { 53,	5,	1,	0,	"subfwb", 0, 0, NULL, NULL, NULL, OperandInfo3 },  // Inst #53 = subfwb
  { 54,	3,	1,	0,	"sublw_1", 0, 0, NULL, NULL, NULL, OperandInfo9 },  // Inst #54 = sublw_1
  { 55,	3,	1,	0,	"sublw_2", 0, 0, NULL, NULL, NULL, OperandInfo9 },  // Inst #55 = sublw_2
  { 56,	3,	1,	0,	"sublw_cc", 0, 0, NULL, NULL, NULL, OperandInfo9 },  // Inst #56 = sublw_cc
  { 57,	4,	0,	0,	"subwf_1", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #57 = subwf_1
  { 58,	4,	0,	0,	"subwf_2", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #58 = subwf_2
  { 59,	4,	0,	0,	"subwf_cc", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #59 = subwf_cc
  { 60,	4,	0,	0,	"subwfb", 0, 0, NULL, NULL, NULL, OperandInfo4 },  // Inst #60 = subwfb
  { 61,	3,	1,	0,	"xorlw", 0, 0, NULL, NULL, NULL, OperandInfo9 },  // Inst #61 = xorlw
};
} // End llvm namespace 
