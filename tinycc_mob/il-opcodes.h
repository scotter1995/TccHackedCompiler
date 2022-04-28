/*
 *  CIL opcode definition
 * 
 *  Copyright (c) 2002 Fabrice Bellard
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 */
OP(NOP, "nop", 0x00)
OP(BREAK, "break", 0x01)
OP(LDARG_0, "ldarg.0", 0x02)
OP(LDARG_1, "ldarg.1", 0x03)
OP(LDARG_2, "ldarg.2", 0x04)
OP(LDARG_3, "ldarg.3", 0x05)
OP(LDLOC_0, "ldloc.0", 0x06)
OP(LDLOC_1, "ldloc.1", 0x07)
OP(LDLOC_2, "ldloc.2", 0x08)
OP(LDLOC_3, "ldloc.3", 0x09)
OP(STLOC_0, "stloc.0", 0x0a)
OP(STLOC_1, "stloc.1", 0x0b)
OP(STLOC_2, "stloc.2", 0x0c)
OP(STLOC_3, "stloc.3", 0x0d)
OP(LDARG_S, "ldarg.s", 0x0e)
OP(LDARGA_S, "ldarga.s", 0x0f)
OP(STARG_S, "starg.s", 0x10)
OP(LDLOC_S, "ldloc.s", 0x11)
OP(LDLOCA_S, "ldloca.s", 0x12)
OP(STLOC_S, "stloc.s", 0x13)
OP(LDNULL, "ldnull", 0x14)
OP(LDC_I4_M1, "ldc.i4.m1", 0x15)
OP(LDC_I4_0, "ldc.i4.0", 0x16)
OP(LDC_I4_1, "ldc.i4.1", 0x17)
OP(LDC_I4_2, "ldc.i4.2", 0x18)
OP(LDC_I4_3, "ldc.i4.3", 0x19)
OP(LDC_I4_4, "ldc.i4.4", 0x1a)
OP(LDC_I4_5, "ldc.i4.5", 0x1b)
OP(LDC_I4_6, "ldc.i4.6", 0x1c)
OP(LDC_I4_7, "ldc.i4.7", 0x1d)
OP(LDC_I4_8, "ldc.i4.8", 0x1e)
OP(LDC_I4_S, "ldc.i4.s", 0x1f)
OP(LDC_I4, "ldc.i4", 0x20)
OP(LDC_I8, "ldc.i8", 0x21)
OP(LDC_R4, "ldc.r4", 0x22)
OP(LDC_R8, "ldc.r8", 0x23)
OP(LDPTR, "ldptr", 0x24)
OP(DUP, "dup", 0x25)
OP(POP, "pop", 0x26)
OP(JMP, "jmp", 0x27)
OP(CALL, "call", 0x28)
OP(CALLI, "calli", 0x29)
OP(RET, "ret", 0x2a)
OP(BR_S, "br.s", 0x2b)
OP(BRFALSE_S, "brfalse.s", 0x2c)
OP(BRTRUE_S, "brtrue.s", 0x2d)
OP(BEQ_S, "beq.s", 0x2e)
OP(BGE_S, "bge.s", 0x2f)
OP(BGT_S, "bgt.s", 0x30)
OP(BLE_S, "ble.s", 0x31)
OP(BLT_S, "blt.s", 0x32)
OP(BNE_UN_S, "bne.un.s", 0x33)
OP(BGE_UN_S, "bge.un.s", 0x34)
OP(BGT_UN_S, "bgt.un.s", 0x35)
OP(BLE_UN_S, "ble.un.s", 0x36)
OP(BLT_UN_S, "blt.un.s", 0x37)
OP(BR, "br", 0x38)
OP(BRFALSE, "brfalse", 0x39)
OP(BRTRUE, "brtrue", 0x3a)
OP(BEQ, "beq", 0x3b)
OP(BGE, "bge", 0x3c)
OP(BGT, "bgt", 0x3d)
OP(BLE, "ble", 0x3e)
OP(BLT, "blt", 0x3f)
OP(BNE_UN, "bne.un", 0x40)
OP(BGE_UN, "bge.un", 0x41)
OP(BGT_UN, "bgt.un", 0x42)
OP(BLE_UN, "ble.un", 0x43)
OP(BLT_UN, "blt.un", 0x44)
OP(SWITCH, "switch", 0x45)
OP(LDIND_I1, "ldind.i1", 0x46)
OP(LDIND_U1, "ldind.u1", 0x47)
OP(LDIND_I2, "ldind.i2", 0x48)
OP(LDIND_U2, "ldind.u2", 0x49)
OP(LDIND_I4, "ldind.i4", 0x4a)
OP(LDIND_U4, "ldind.u4", 0x4b)
OP(LDIND_I8, "ldind.i8", 0x4c)
OP(LDIND_I, "ldind.i", 0x4d)
OP(LDIND_R4, "ldind.r4", 0x4e)
OP(LDIND_R8, "ldind.r8", 0x4f)
OP(LDIND_REF, "ldind.ref", 0x50)
OP(STIND_REF, "stind.ref", 0x51)
OP(STIND_I1, "stind.i1", 0x52)
OP(STIND_I2, "stind.i2", 0x53)
OP(STIND_I4, "stind.i4", 0x54)
OP(STIND_I8, "stind.i8", 0x55)
OP(STIND_R4, "stind.r4", 0x56)
OP(STIND_R8, "stind.r8", 0x57)
OP(ADD, "add", 0x58)
OP(SUB, "sub", 0x59)
OP(MUL, "mul", 0x5a)
OP(DIV, "div", 0x5b)
OP(DIV_UN, "div.un", 0x5c)
OP(REM, "rem", 0x5d)
OP(REM_UN, "rem.un", 0x5e)
OP(AND, "and", 0x5f)
OP(OR, "or", 0x60)
OP(XOR, "xor", 0x61)
OP(SHL, "shl", 0x62)
OP(SHR, "shr", 0x63)
OP(SHR_UN, "shr.un", 0x64)
OP(NEG, "neg", 0x65)
OP(NOT, "not", 0x66)
OP(CONV_I1, "conv.i1", 0x67)
OP(CONV_I2, "conv.i2", 0x68)
OP(CONV_I4, "conv.i4", 0x69)
OP(CONV_I8, "conv.i8", 0x6a)
OP(CONV_R4, "conv.r4", 0x6b)
OP(CONV_R8, "conv.r8", 0x6c)
OP(CONV_U4, "conv.u4", 0x6d)
OP(CONV_U8, "conv.u8", 0x6e)
OP(CALLVIRT, "callvirt", 0x6f)
OP(CPOBJ, "cpobj", 0x70)
OP(LDOBJ, "ldobj", 0x71)
OP(LDSTR, "ldstr", 0x72)
OP(NEWOBJ, "newobj", 0x73)
OP(CASTCLASS, "castclass", 0x74)
OP(ISINST, "isinst", 0x75)
OP(CONV_R_UN, "conv.r.un", 0x76)
OP(ANN_DATA_S, "ann.data.s", 0x77)
OP(UNBOX, "unbox", 0x79)
OP(THROW, "throw", 0x7a)
OP(LDFLD, "ldfld", 0x7b)
OP(LDFLDA, "ldflda", 0x7c)
OP(STFLD, "stfld", 0x7d)
OP(LDSFLD, "ldsfld", 0x7e)
OP(LDSFLDA, "ldsflda", 0x7f)
OP(STSFLD, "stsfld", 0x80)
OP(STOBJ, "stobj", 0x81)
OP(CONV_OVF_I1_UN, "conv.ovf.i1.un", 0x82)
OP(CONV_OVF_I2_UN, "conv.ovf.i2.un", 0x83)
OP(CONV_OVF_I4_UN, "conv.ovf.i4.un", 0x84)
OP(CONV_OVF_I8_UN, "conv.ovf.i8.un", 0x85)
OP(CONV_OVF_U1_UN, "conv.ovf.u1.un", 0x86)
OP(CONV_OVF_U2_UN, "conv.ovf.u2.un", 0x87)
OP(CONV_OVF_U4_UN, "conv.ovf.u4.un", 0x88)
OP(CONV_OVF_U8_UN, "conv.ovf.u8.un", 0x89)
OP(CONV_OVF_I_UN, "conv.ovf.i.un", 0x8a)
OP(CONV_OVF_U_UN, "conv.ovf.u.un", 0x8b)
OP(BOX, "box", 0x8c)
OP(NEWARR, "newarr", 0x8d)
OP(LDLEN, "ldlen", 0x8e)
OP(LDELEMA, "ldelema", 0x8f)
OP(LDELEM_I1, "ldelem.i1", 0x90)
OP(LDELEM_U1, "ldelem.u1", 0x91)
OP(LDELEM_I2, "ldelem.i2", 0x92)
OP(LDELEM_U2, "ldelem.u2", 0x93)
OP(LDELEM_I4, "ldelem.i4", 0x94)
OP(LDELEM_U4, "ldelem.u4", 0x95)
OP(LDELEM_I8, "ldelem.i8", 0x96)
OP(LDELEM_I, "ldelem.i", 0x97)
OP(LDELEM_R4, "ldelem.r4", 0x98)
OP(LDELEM_R8, "ldelem.r8", 0x99)
OP(LDELEM_REF, "ldelem.ref", 0x9a)
OP(STELEM_I, "stelem.i", 0x9b)
OP(STELEM_I1, "stelem.i1", 0x9c)
OP(STELEM_I2, "stelem.i2", 0x9d)
OP(STELEM_I4, "stelem.i4", 0x9e)
OP(STELEM_I8, "stelem.i8", 0x9f)
OP(STELEM_R4, "stelem.r4", 0xa0)
OP(STELEM_R8, "stelem.r8", 0xa1)
OP(STELEM_REF, "stelem.ref", 0xa2)
OP(CONV_OVF_I1, "conv.ovf.i1", 0xb3)
OP(CONV_OVF_U1, "conv.ovf.u1", 0xb4)
OP(CONV_OVF_I2, "conv.ovf.i2", 0xb5)
OP(CONV_OVF_U2, "conv.ovf.u2", 0xb6)
OP(CONV_OVF_I4, "conv.ovf.i4", 0xb7)
OP(CONV_OVF_U4, "conv.ovf.u4", 0xb8)
OP(CONV_OVF_I8, "conv.ovf.i8", 0xb9)
OP(CONV_OVF_U8, "conv.ovf.u8", 0xba)
OP(REFANYVAL, "refanyval", 0xc2)
OP(CKFINITE, "ckfinite", 0xc3)
OP(MKREFANY, "mkrefany", 0xc6)
OP(ANN_CALL, "ann.call", 0xc7)
OP(ANN_CATCH, "ann.catch", 0xc8)
OP(ANN_DEAD, "ann.dead", 0xc9)
OP(ANN_HOISTED, "ann.hoisted", 0xca)
OP(ANN_HOISTED_CALL, "ann.hoisted.call", 0xcb)
OP(ANN_LAB, "ann.lab", 0xcc)
OP(ANN_DEF, "ann.def", 0xcd)
OP(ANN_REF_S, "ann.ref.s", 0xce)
OP(ANN_PHI, "ann.phi", 0xcf)
OP(LDTOKEN, "ldtoken", 0xd0)
OP(CONV_U2, "conv.u2", 0xd1)
OP(CONV_U1, "conv.u1", 0xd2)
OP(CONV_I, "conv.i", 0xd3)
OP(CONV_OVF_I, "conv.ovf.i", 0xd4)
OP(CONV_OVF_U, "conv.ovf.u", 0xd5)
OP(ADD_OVF, "add.ovf", 0xd6)
OP(ADD_OVF_UN, "add.ovf.un", 0xd7)
OP(MUL_OVF, "mul.ovf", 0xd8)
OP(MUL_OVF_UN, "mul.ovf.un", 0xd9)
OP(SUB_OVF, "sub.ovf", 0xda)
OP(SUB_OVF_UN, "sub.ovf.un", 0xdb)
OP(ENDFINALLY, "endfinally", 0xdc)
OP(LEAVE, "leave", 0xdd)
OP(LEAVE_S, "leave.s", 0xde)
OP(STIND_I, "stind.i", 0xdf)
OP(CONV_U, "conv.u", 0xe0)

/* prefix instructions. we use an opcode >= 256 to ease coding */

OP(ARGLIST, "arglist", 0x100)
OP(CEQ, "ceq", 0x101)
OP(CGT, "cgt", 0x102)
OP(CGT_UN, "cgt.un", 0x103)
OP(CLT, "clt", 0x104)
OP(CLT_UN, "clt.un", 0x105)
OP(LDFTN, "ldftn", 0x106)
OP(LDVIRTFTN, "ldvirtftn", 0x107)
OP(JMPI, "jmpi", 0x108)
OP(LDARG, "ldarg", 0x109)
OP(LDARGA, "ldarga", 0x10a)
OP(STARG, "starg", 0x10b)
OP(LDLOC, "ldloc", 0x10c)
OP(LDLOCA, "ldloca", 0x10d)
OP(STLOC, "stloc", 0x10e)
OP(LOCALLOC, "localloc", 0x10f)
OP(ENDFILTER, "endfilter", 0x111)
OP(UNALIGNED, "unaligned", 0x112)
OP(VOLATILE, "volatile", 0x113)
OP(TAIL, "tail", 0x114)
OP(INITOBJ, "initobj", 0x115)
OP(ANN_LIVE, "ann.live", 0x116)
OP(CPBLK, "cpblk", 0x117)
OP(INITBLK, "initblk", 0x118)
OP(ANN_REF, "ann.ref", 0x119)
OP(RETHROW, "rethrow", 0x11a)
OP(SIZEOF, "sizeof", 0x11c)
OP(REFANYTYPE, "refanytype", 0x11d)
OP(ANN_DATA, "ann.data", 0x122)
OP(ANN_ARG, "ann.arg", 0x123)
