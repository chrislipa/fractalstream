//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Target Instruction Enum Values
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace ARM {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    DBG_LABEL	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    DECLARE	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    ADCri	= 10,
    ADCrr	= 11,
    ADCrs	= 12,
    ADDSri	= 13,
    ADDSrr	= 14,
    ADDSrs	= 15,
    ADDri	= 16,
    ADDrr	= 17,
    ADDrs	= 18,
    ADJCALLSTACKDOWN	= 19,
    ADJCALLSTACKUP	= 20,
    ANDri	= 21,
    ANDrr	= 22,
    ANDrs	= 23,
    B	= 24,
    BICri	= 25,
    BICrr	= 26,
    BICrs	= 27,
    BL	= 28,
    BLX	= 29,
    BL_pred	= 30,
    BR_JTadd	= 31,
    BR_JTm	= 32,
    BR_JTr	= 33,
    BX	= 34,
    BX_RET	= 35,
    Bcc	= 36,
    CLZ	= 37,
    CMNnzri	= 38,
    CMNnzrr	= 39,
    CMNnzrs	= 40,
    CMNri	= 41,
    CMNrr	= 42,
    CMNrs	= 43,
    CMPnzri	= 44,
    CMPnzrr	= 45,
    CMPnzrs	= 46,
    CMPri	= 47,
    CMPrr	= 48,
    CMPrs	= 49,
    CONSTPOOL_ENTRY	= 50,
    DWARF_LOC	= 51,
    EORri	= 52,
    EORrr	= 53,
    EORrs	= 54,
    FABSD	= 55,
    FABSS	= 56,
    FADDD	= 57,
    FADDS	= 58,
    FCMPED	= 59,
    FCMPES	= 60,
    FCMPEZD	= 61,
    FCMPEZS	= 62,
    FCPYD	= 63,
    FCPYDcc	= 64,
    FCPYS	= 65,
    FCPYScc	= 66,
    FCVTDS	= 67,
    FCVTSD	= 68,
    FDIVD	= 69,
    FDIVS	= 70,
    FLDD	= 71,
    FLDMD	= 72,
    FLDMS	= 73,
    FLDS	= 74,
    FMACD	= 75,
    FMACS	= 76,
    FMDRR	= 77,
    FMRRD	= 78,
    FMRS	= 79,
    FMSCD	= 80,
    FMSCS	= 81,
    FMSR	= 82,
    FMSTAT	= 83,
    FMULD	= 84,
    FMULS	= 85,
    FNEGD	= 86,
    FNEGDcc	= 87,
    FNEGS	= 88,
    FNEGScc	= 89,
    FNMACD	= 90,
    FNMACS	= 91,
    FNMSCD	= 92,
    FNMSCS	= 93,
    FNMULD	= 94,
    FNMULS	= 95,
    FSITOD	= 96,
    FSITOS	= 97,
    FSQRTD	= 98,
    FSQRTS	= 99,
    FSTD	= 100,
    FSTMD	= 101,
    FSTMS	= 102,
    FSTS	= 103,
    FSUBD	= 104,
    FSUBS	= 105,
    FTOSIZD	= 106,
    FTOSIZS	= 107,
    FTOUIZD	= 108,
    FTOUIZS	= 109,
    FUITOD	= 110,
    FUITOS	= 111,
    LDM	= 112,
    LDM_RET	= 113,
    LDR	= 114,
    LDRB	= 115,
    LDRB_POST	= 116,
    LDRB_PRE	= 117,
    LDRD	= 118,
    LDRH	= 119,
    LDRH_POST	= 120,
    LDRH_PRE	= 121,
    LDRSB	= 122,
    LDRSB_POST	= 123,
    LDRSB_PRE	= 124,
    LDRSH	= 125,
    LDRSH_POST	= 126,
    LDRSH_PRE	= 127,
    LDR_POST	= 128,
    LDR_PRE	= 129,
    LDRcp	= 130,
    LEApcrel	= 131,
    LEApcrelJT	= 132,
    MLA	= 133,
    MOVCCi	= 134,
    MOVCCr	= 135,
    MOVCCs	= 136,
    MOVi	= 137,
    MOVi2pieces	= 138,
    MOVr	= 139,
    MOVrx	= 140,
    MOVs	= 141,
    MOVsra_flag	= 142,
    MOVsrl_flag	= 143,
    MUL	= 144,
    MVNi	= 145,
    MVNr	= 146,
    MVNs	= 147,
    ORRri	= 148,
    ORRrr	= 149,
    ORRrs	= 150,
    PICADD	= 151,
    PICLDR	= 152,
    PICLDRB	= 153,
    PICLDRH	= 154,
    PICLDRSB	= 155,
    PICLDRSH	= 156,
    PICSTR	= 157,
    PICSTRB	= 158,
    PICSTRH	= 159,
    PKHBT	= 160,
    PKHTB	= 161,
    REV	= 162,
    REV16	= 163,
    REVSH	= 164,
    RSBSri	= 165,
    RSBSrs	= 166,
    RSBri	= 167,
    RSBrs	= 168,
    RSCri	= 169,
    RSCrs	= 170,
    SBCri	= 171,
    SBCrr	= 172,
    SBCrs	= 173,
    SMLABB	= 174,
    SMLABT	= 175,
    SMLAL	= 176,
    SMLATB	= 177,
    SMLATT	= 178,
    SMLAWB	= 179,
    SMLAWT	= 180,
    SMMLA	= 181,
    SMMLS	= 182,
    SMMUL	= 183,
    SMULBB	= 184,
    SMULBT	= 185,
    SMULL	= 186,
    SMULTB	= 187,
    SMULTT	= 188,
    SMULWB	= 189,
    SMULWT	= 190,
    STM	= 191,
    STR	= 192,
    STRB	= 193,
    STRB_POST	= 194,
    STRB_PRE	= 195,
    STRD	= 196,
    STRH	= 197,
    STRH_POST	= 198,
    STRH_PRE	= 199,
    STR_POST	= 200,
    STR_PRE	= 201,
    SUBSri	= 202,
    SUBSrr	= 203,
    SUBSrs	= 204,
    SUBri	= 205,
    SUBrr	= 206,
    SUBrs	= 207,
    SXTABrr	= 208,
    SXTABrr_rot	= 209,
    SXTAHrr	= 210,
    SXTAHrr_rot	= 211,
    SXTBr	= 212,
    SXTBr_rot	= 213,
    SXTHr	= 214,
    SXTHr_rot	= 215,
    TEQri	= 216,
    TEQrr	= 217,
    TEQrs	= 218,
    TPsoft	= 219,
    TSTri	= 220,
    TSTrr	= 221,
    TSTrs	= 222,
    UMAAL	= 223,
    UMLAL	= 224,
    UMULL	= 225,
    UXTABrr	= 226,
    UXTABrr_rot	= 227,
    UXTAHrr	= 228,
    UXTAHrr_rot	= 229,
    UXTB16r	= 230,
    UXTB16r_rot	= 231,
    UXTBr	= 232,
    UXTBr_rot	= 233,
    UXTHr	= 234,
    UXTHr_rot	= 235,
    tADC	= 236,
    tADDS	= 237,
    tADDhirr	= 238,
    tADDi3	= 239,
    tADDi8	= 240,
    tADDrPCi	= 241,
    tADDrSPi	= 242,
    tADDrr	= 243,
    tADDspi	= 244,
    tADJCALLSTACKDOWN	= 245,
    tADJCALLSTACKUP	= 246,
    tAND	= 247,
    tASRri	= 248,
    tASRrr	= 249,
    tB	= 250,
    tBIC	= 251,
    tBL	= 252,
    tBLXi	= 253,
    tBLXr	= 254,
    tBR_JTr	= 255,
    tBX	= 256,
    tBX_RET	= 257,
    tBX_RET_vararg	= 258,
    tBcc	= 259,
    tBfar	= 260,
    tCMN	= 261,
    tCMNNZ	= 262,
    tCMPNZi8	= 263,
    tCMPNZr	= 264,
    tCMPi8	= 265,
    tCMPr	= 266,
    tEOR	= 267,
    tLDR	= 268,
    tLDRB	= 269,
    tLDRH	= 270,
    tLDRSB	= 271,
    tLDRSH	= 272,
    tLDRcp	= 273,
    tLDRpci	= 274,
    tLDRspi	= 275,
    tLEApcrel	= 276,
    tLEApcrelJT	= 277,
    tLSLri	= 278,
    tLSLrr	= 279,
    tLSRri	= 280,
    tLSRrr	= 281,
    tMOVCCr	= 282,
    tMOVi8	= 283,
    tMOVr	= 284,
    tMUL	= 285,
    tMVN	= 286,
    tNEG	= 287,
    tORR	= 288,
    tPICADD	= 289,
    tPOP	= 290,
    tPOP_RET	= 291,
    tPUSH	= 292,
    tREV	= 293,
    tREV16	= 294,
    tREVSH	= 295,
    tROR	= 296,
    tRestore	= 297,
    tSBC	= 298,
    tSTR	= 299,
    tSTRB	= 300,
    tSTRH	= 301,
    tSTRspi	= 302,
    tSUBS	= 303,
    tSUBi3	= 304,
    tSUBi8	= 305,
    tSUBrr	= 306,
    tSUBspi	= 307,
    tSXTB	= 308,
    tSXTH	= 309,
    tSpill	= 310,
    tTPsoft	= 311,
    tTST	= 312,
    tUXTB	= 313,
    tUXTH	= 314,
    INSTRUCTION_LIST_END = 315
  };
}
} // End llvm namespace 