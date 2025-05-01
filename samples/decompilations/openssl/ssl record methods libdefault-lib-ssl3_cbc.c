
void tls1_md5_final_raw(undefined4 *param_1,undefined1 *param_2)

{
  *param_2 = (char)*param_1;
  param_2[1] = (char)((uint)*param_1 >> 8);
  param_2[2] = (char)((uint)*param_1 >> 0x10);
  param_2[3] = (char)((uint)*param_1 >> 0x18);
  param_2[4] = (char)param_1[1];
  param_2[5] = (char)((uint)param_1[1] >> 8);
  param_2[6] = (char)*(undefined2 *)((long)param_1 + 6);
  param_2[7] = *(undefined1 *)((long)param_1 + 7);
  param_2[8] = (char)param_1[2];
  param_2[9] = (char)((uint)param_1[2] >> 8);
  param_2[10] = (char)*(undefined2 *)((long)param_1 + 10);
  param_2[0xb] = *(undefined1 *)((long)param_1 + 0xb);
  param_2[0xc] = (char)param_1[3];
  param_2[0xd] = (char)((uint)param_1[3] >> 8);
  param_2[0xe] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[0xf] = *(undefined1 *)((long)param_1 + 0xf);
  return;
}



void tls1_sha1_final_raw(undefined4 *param_1,undefined1 *param_2)

{
  *param_2 = (char)((uint)*param_1 >> 0x18);
  param_2[1] = (char)((uint)*param_1 >> 0x10);
  param_2[2] = (char)((uint)*param_1 >> 8);
  param_2[3] = (char)*param_1;
  param_2[4] = *(undefined1 *)((long)param_1 + 7);
  param_2[5] = (char)*(undefined2 *)((long)param_1 + 6);
  param_2[6] = (char)((uint)param_1[1] >> 8);
  param_2[7] = (char)param_1[1];
  param_2[8] = *(undefined1 *)((long)param_1 + 0xb);
  param_2[9] = (char)*(undefined2 *)((long)param_1 + 10);
  param_2[10] = (char)((uint)param_1[2] >> 8);
  param_2[0xb] = (char)param_1[2];
  param_2[0xc] = *(undefined1 *)((long)param_1 + 0xf);
  param_2[0xd] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[0xe] = (char)((uint)param_1[3] >> 8);
  param_2[0xf] = (char)param_1[3];
  param_2[0x10] = *(undefined1 *)((long)param_1 + 0x13);
  param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x12);
  param_2[0x12] = (char)((uint)param_1[4] >> 8);
  param_2[0x13] = (char)param_1[4];
  return;
}



void tls1_sha256_final_raw(ulong *param_1,char *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  short sVar13;
  undefined1 auVar14 [16];
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  undefined1 auVar15 [16];
  undefined1 auVar19 [16];
  undefined1 auVar22 [16];
  undefined1 auVar26 [16];
  undefined1 auVar29 [16];
  undefined1 auVar32 [16];
  ushort uVar35;
  ushort uVar37;
  ushort uVar39;
  undefined1 auVar33 [16];
  ushort uVar36;
  ushort uVar38;
  ushort uVar40;
  undefined1 auVar34 [16];
  ushort uVar43;
  ushort uVar44;
  ushort uVar45;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar46 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  
  uVar5 = _LC0;
  if (0x3e < (ulong)((long)param_1 + (0x1f - (long)param_2))) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uVar3 = param_1[2];
    uVar4 = param_1[3];
    auVar46._8_8_ = 0;
    auVar46._0_8_ = _LC0;
    auVar41 = ZEXT716(CONCAT34((int3)(CONCAT16((char)(uVar2 >> 0x38),
                                               (uint6)(byte)(uVar2 >> 0x18) << 0x20) >> 0x20),
                               (uint)CONCAT12((char)(uVar1 >> 0x38),(ushort)(byte)(uVar1 >> 0x18))))
              & auVar46;
    auVar33 = ZEXT716(CONCAT34((int3)(CONCAT16((char)(uVar4 >> 0x38),
                                               (uint6)(byte)(uVar4 >> 0x18) << 0x20) >> 0x20),
                               (uint)CONCAT12((char)(uVar3 >> 0x38),(ushort)(byte)(uVar3 >> 0x18))))
              & auVar46;
    uVar23 = auVar41._0_2_;
    uVar24 = auVar41._2_2_;
    uVar25 = auVar41._4_2_;
    uVar35 = auVar41._6_2_;
    uVar36 = auVar33._0_2_;
    uVar37 = auVar33._2_2_;
    uVar38 = auVar33._4_2_;
    uVar39 = auVar33._6_2_;
    *param_2 = (uVar23 != 0) * (uVar23 < 0x100) * auVar41[0] - (0xff < uVar23);
    param_2[4] = (uVar24 != 0) * (uVar24 < 0x100) * auVar41[2] - (0xff < uVar24);
    param_2[8] = (uVar25 != 0) * (uVar25 < 0x100) * auVar41[4] - (0xff < uVar25);
    uVar1 = CONCAT44(CONCAT22((short)(uVar2 >> 0x30),(short)(uVar2 >> 0x10)),
                     CONCAT22((short)(uVar1 >> 0x30),(short)(uVar1 >> 0x10))) & uVar5;
    param_2[0xc] = (uVar35 != 0) * (uVar35 < 0x100) * auVar41[6] - (0xff < uVar35);
    uVar5 = CONCAT44(CONCAT22((short)(uVar4 >> 0x30),(short)(uVar4 >> 0x10)),
                     CONCAT22((short)(uVar3 >> 0x30),(short)(uVar3 >> 0x10))) & uVar5;
    sVar6 = (short)uVar1;
    sVar7 = (short)(uVar1 >> 0x10);
    sVar8 = (short)(uVar1 >> 0x20);
    sVar9 = (short)(uVar1 >> 0x30);
    sVar10 = (short)uVar5;
    sVar11 = (short)(uVar5 >> 0x10);
    sVar12 = (short)(uVar5 >> 0x20);
    sVar13 = (short)(uVar5 >> 0x30);
    param_2[0x10] = (uVar36 != 0) * (uVar36 < 0x100) * auVar33[0] - (0xff < uVar36);
    param_2[0x14] = (uVar37 != 0) * (uVar37 < 0x100) * auVar33[2] - (0xff < uVar37);
    param_2[0x1c] = (uVar39 != 0) * (uVar39 < 0x100) * auVar33[6] - (0xff < uVar39);
    param_2[1] = (0 < sVar6) * (sVar6 < 0x100) * (char)uVar1 - (0xff < sVar6);
    param_2[9] = (0 < sVar8) * (sVar8 < 0x100) * (char)(uVar1 >> 0x20) - (0xff < sVar8);
    param_2[5] = (0 < sVar7) * (sVar7 < 0x100) * (char)(uVar1 >> 0x10) - (0xff < sVar7);
    param_2[0xd] = (0 < sVar9) * (sVar9 < 0x100) * (char)(uVar1 >> 0x30) - (0xff < sVar9);
    param_2[0x18] = (uVar38 != 0) * (uVar38 < 0x100) * auVar33[4] - (0xff < uVar38);
    param_2[0x11] = (0 < sVar10) * (sVar10 < 0x100) * (char)uVar5 - (0xff < sVar10);
    param_2[0x15] = (0 < sVar11) * (sVar11 < 0x100) * (char)(uVar5 >> 0x10) - (0xff < sVar11);
    param_2[0x1d] = (0 < sVar13) * (sVar13 < 0x100) * (char)(uVar5 >> 0x30) - (0xff < sVar13);
    param_2[0x19] = (0 < sVar12) * (sVar12 < 0x100) * (char)(uVar5 >> 0x20) - (0xff < sVar12);
    uVar5 = *param_1;
    uVar1 = param_1[1];
    uVar25 = (ushort)(uVar1 >> 0x30);
    uVar39 = (ushort)(uVar5 >> 0x30);
    uVar24 = (ushort)(uVar1 >> 0x20);
    uVar37 = (ushort)(uVar5 >> 0x20);
    uVar23 = (ushort)(uVar1 >> 0x10);
    uVar35 = (ushort)(uVar5 >> 0x10);
    auVar28._8_4_ = 0;
    auVar28._0_8_ = uVar5;
    auVar28._12_2_ = uVar39;
    auVar28._14_2_ = uVar25;
    auVar27._12_4_ = auVar28._12_4_;
    auVar27._8_2_ = 0;
    auVar27._0_8_ = uVar5;
    auVar27._10_2_ = uVar24;
    auVar26._10_6_ = auVar27._10_6_;
    auVar26._8_2_ = uVar37;
    auVar26._0_8_ = uVar5;
    auVar41._2_8_ = auVar26._8_8_;
    auVar41._0_2_ = uVar23;
    auVar41._10_6_ = 0;
    auVar33._12_4_ = 0;
    auVar33._0_12_ = SUB1612(auVar41 << 0x30,4);
    auVar33 = auVar33 << 0x20;
    uVar2 = param_1[2];
    auVar31._0_12_ = auVar33._0_12_;
    auVar31._12_2_ = uVar23;
    auVar31._14_2_ = uVar25;
    auVar30._12_4_ = auVar31._12_4_;
    auVar30._0_10_ = auVar33._0_10_;
    auVar30._10_2_ = uVar39;
    auVar29._10_6_ = auVar30._10_6_;
    auVar29._0_8_ = auVar33._0_8_;
    auVar29._8_2_ = uVar35;
    auVar32._8_8_ = auVar29._8_8_;
    auVar32._6_2_ = uVar24;
    auVar32._4_2_ = (ushort)uVar1;
    auVar32._2_2_ = uVar37;
    auVar32._0_2_ = (ushort)uVar5;
    uVar3 = param_1[3];
    uVar40 = (ushort)(uVar3 >> 0x30);
    uVar45 = (ushort)(uVar2 >> 0x30);
    uVar38 = (ushort)(uVar3 >> 0x20);
    uVar44 = (ushort)(uVar2 >> 0x20);
    uVar36 = (ushort)(uVar3 >> 0x10);
    uVar43 = (ushort)(uVar2 >> 0x10);
    auVar18._8_4_ = 0;
    auVar18._0_8_ = uVar2;
    auVar18._12_2_ = uVar45;
    auVar18._14_2_ = uVar40;
    auVar17._12_4_ = auVar18._12_4_;
    auVar17._8_2_ = 0;
    auVar17._0_8_ = uVar2;
    auVar17._10_2_ = uVar38;
    auVar16._10_6_ = auVar17._10_6_;
    auVar16._8_2_ = uVar44;
    auVar16._0_8_ = uVar2;
    auVar14._2_8_ = auVar16._8_8_;
    auVar14._0_2_ = uVar36;
    auVar14._10_6_ = 0;
    auVar15._12_4_ = 0;
    auVar15._0_12_ = SUB1612(auVar14 << 0x30,4);
    auVar15 = auVar15 << 0x20;
    auVar21._0_12_ = auVar15._0_12_;
    auVar21._12_2_ = uVar36;
    auVar21._14_2_ = uVar40;
    auVar20._12_4_ = auVar21._12_4_;
    auVar20._0_10_ = auVar15._0_10_;
    auVar20._10_2_ = uVar45;
    auVar19._10_6_ = auVar20._10_6_;
    auVar19._0_8_ = auVar15._0_8_;
    auVar19._8_2_ = uVar43;
    auVar22._8_8_ = auVar19._8_8_;
    auVar22._6_2_ = uVar38;
    auVar22._4_2_ = (ushort)uVar3;
    auVar22._2_2_ = uVar44;
    auVar22._0_2_ = (ushort)uVar2;
    auVar32 = auVar32 & auVar46;
    auVar42._0_2_ = (ushort)uVar5 >> 8;
    auVar42._2_2_ = uVar37 >> 8;
    auVar42._4_2_ = (ushort)uVar1 >> 8;
    auVar42._6_2_ = uVar24 >> 8;
    auVar42._8_2_ = uVar35 >> 8;
    auVar42._10_2_ = uVar39 >> 8;
    auVar42._12_2_ = uVar23 >> 8;
    auVar42._14_2_ = uVar25 >> 8;
    auVar22 = auVar22 & auVar46;
    auVar34._0_2_ = (ushort)uVar2 >> 8;
    auVar34._2_2_ = uVar44 >> 8;
    auVar34._4_2_ = (ushort)uVar3 >> 8;
    auVar34._6_2_ = uVar38 >> 8;
    auVar34._8_2_ = uVar43 >> 8;
    auVar34._10_2_ = uVar45 >> 8;
    auVar34._12_2_ = uVar36 >> 8;
    auVar34._14_2_ = uVar40 >> 8;
    auVar42 = auVar42 & auVar46;
    auVar34 = auVar34 & auVar46;
    sVar6 = auVar32._0_2_;
    sVar7 = auVar32._2_2_;
    sVar8 = auVar32._4_2_;
    sVar9 = auVar32._6_2_;
    sVar10 = auVar22._0_2_;
    sVar11 = auVar22._2_2_;
    sVar12 = auVar22._4_2_;
    sVar13 = auVar22._6_2_;
    uVar23 = auVar42._0_2_;
    uVar24 = auVar42._2_2_;
    uVar25 = auVar42._4_2_;
    uVar35 = auVar42._6_2_;
    uVar36 = auVar34._0_2_;
    uVar37 = auVar34._2_2_;
    uVar38 = auVar34._4_2_;
    uVar39 = auVar34._6_2_;
    param_2[2] = (uVar23 != 0) * (uVar23 < 0x100) * auVar42[0] - (0xff < uVar23);
    param_2[6] = (uVar24 != 0) * (uVar24 < 0x100) * auVar42[2] - (0xff < uVar24);
    param_2[10] = (uVar25 != 0) * (uVar25 < 0x100) * auVar42[4] - (0xff < uVar25);
    param_2[0xe] = (uVar35 != 0) * (uVar35 < 0x100) * auVar42[6] - (0xff < uVar35);
    param_2[0x12] = (uVar36 != 0) * (uVar36 < 0x100) * auVar34[0] - (0xff < uVar36);
    param_2[0x16] = (uVar37 != 0) * (uVar37 < 0x100) * auVar34[2] - (0xff < uVar37);
    param_2[0x1a] = (uVar38 != 0) * (uVar38 < 0x100) * auVar34[4] - (0xff < uVar38);
    param_2[0x1e] = (uVar39 != 0) * (uVar39 < 0x100) * auVar34[6] - (0xff < uVar39);
    param_2[3] = (0 < sVar6) * (sVar6 < 0x100) * auVar32[0] - (0xff < sVar6);
    param_2[0xb] = (0 < sVar8) * (sVar8 < 0x100) * auVar32[4] - (0xff < sVar8);
    param_2[7] = (0 < sVar7) * (sVar7 < 0x100) * auVar32[2] - (0xff < sVar7);
    param_2[0xf] = (0 < sVar9) * (sVar9 < 0x100) * auVar32[6] - (0xff < sVar9);
    param_2[0x13] = (0 < sVar10) * (sVar10 < 0x100) * auVar22[0] - (0xff < sVar10);
    param_2[0x17] = (0 < sVar11) * (sVar11 < 0x100) * auVar22[2] - (0xff < sVar11);
    param_2[0x1b] = (0 < sVar12) * (sVar12 < 0x100) * auVar22[4] - (0xff < sVar12);
    param_2[0x1f] = (0 < sVar13) * (sVar13 < 0x100) * auVar22[6] - (0xff < sVar13);
    return;
  }
  *param_2 = (char)((uint)(int)*param_1 >> 0x18);
  param_2[1] = (char)((uint)(int)*param_1 >> 0x10);
  param_2[2] = (char)((uint)(int)*param_1 >> 8);
  param_2[3] = (char)(int)*param_1;
  param_2[4] = *(char *)((long)param_1 + 7);
  param_2[5] = (char)*(undefined2 *)((long)param_1 + 6);
  param_2[6] = (char)((uint)*(undefined4 *)((long)param_1 + 4) >> 8);
  param_2[7] = (char)*(undefined4 *)((long)param_1 + 4);
  param_2[8] = *(char *)((long)param_1 + 0xb);
  param_2[9] = (char)*(undefined2 *)((long)param_1 + 10);
  param_2[10] = (char)((uint)(int)param_1[1] >> 8);
  param_2[0xb] = (char)(int)param_1[1];
  param_2[0xc] = *(char *)((long)param_1 + 0xf);
  param_2[0xd] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[0xe] = (char)((uint)*(undefined4 *)((long)param_1 + 0xc) >> 8);
  param_2[0xf] = (char)*(undefined4 *)((long)param_1 + 0xc);
  param_2[0x10] = *(char *)((long)param_1 + 0x13);
  param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x12);
  param_2[0x12] = (char)((uint)(int)param_1[2] >> 8);
  param_2[0x13] = (char)(int)param_1[2];
  param_2[0x14] = *(char *)((long)param_1 + 0x17);
  param_2[0x15] = (char)*(undefined2 *)((long)param_1 + 0x16);
  param_2[0x16] = (char)((uint)*(undefined4 *)((long)param_1 + 0x14) >> 8);
  param_2[0x17] = (char)*(undefined4 *)((long)param_1 + 0x14);
  param_2[0x18] = *(char *)((long)param_1 + 0x1b);
  param_2[0x19] = (char)*(undefined2 *)((long)param_1 + 0x1a);
  param_2[0x1a] = (char)((uint)(int)param_1[3] >> 8);
  param_2[0x1b] = (char)(int)param_1[3];
  param_2[0x1c] = *(char *)((long)param_1 + 0x1f);
  param_2[0x1d] = (char)*(undefined2 *)((long)param_1 + 0x1e);
  param_2[0x1e] = (char)((uint)*(undefined4 *)((long)param_1 + 0x1c) >> 8);
  param_2[0x1f] = *(char *)((long)param_1 + 0x1c);
  return;
}



void tls1_sha512_final_raw(undefined8 *param_1,undefined1 *param_2)

{
  *param_2 = (char)((ulong)*param_1 >> 0x38);
  param_2[1] = (char)((ulong)*param_1 >> 0x30);
  param_2[2] = (char)((ulong)*param_1 >> 0x28);
  param_2[3] = (char)((ulong)*param_1 >> 0x20);
  param_2[4] = (char)((ulong)*param_1 >> 0x18);
  param_2[5] = (char)((ulong)*param_1 >> 0x10);
  param_2[6] = (char)((ulong)*param_1 >> 8);
  param_2[7] = (char)*param_1;
  param_2[8] = *(undefined1 *)((long)param_1 + 0xf);
  param_2[9] = (char)*(undefined2 *)((long)param_1 + 0xe);
  param_2[10] = (char)((ulong)param_1[1] >> 0x28);
  param_2[0xb] = (char)*(undefined4 *)((long)param_1 + 0xc);
  param_2[0xc] = (char)((ulong)param_1[1] >> 0x18);
  param_2[0xd] = (char)((ulong)param_1[1] >> 0x10);
  param_2[0xe] = (char)((ulong)param_1[1] >> 8);
  param_2[0xf] = (char)param_1[1];
  param_2[0x10] = *(undefined1 *)((long)param_1 + 0x17);
  param_2[0x11] = (char)*(undefined2 *)((long)param_1 + 0x16);
  param_2[0x12] = (char)((ulong)param_1[2] >> 0x28);
  param_2[0x13] = (char)*(undefined4 *)((long)param_1 + 0x14);
  param_2[0x14] = (char)((ulong)param_1[2] >> 0x18);
  param_2[0x15] = (char)((ulong)param_1[2] >> 0x10);
  param_2[0x16] = (char)((ulong)param_1[2] >> 8);
  param_2[0x17] = (char)param_1[2];
  param_2[0x18] = *(undefined1 *)((long)param_1 + 0x1f);
  param_2[0x19] = (char)*(undefined2 *)((long)param_1 + 0x1e);
  param_2[0x1a] = (char)((ulong)param_1[3] >> 0x28);
  param_2[0x1b] = (char)*(undefined4 *)((long)param_1 + 0x1c);
  param_2[0x1c] = (char)((ulong)param_1[3] >> 0x18);
  param_2[0x1d] = (char)((ulong)param_1[3] >> 0x10);
  param_2[0x1e] = (char)((ulong)param_1[3] >> 8);
  param_2[0x1f] = (char)param_1[3];
  param_2[0x20] = *(undefined1 *)((long)param_1 + 0x27);
  param_2[0x21] = (char)*(undefined2 *)((long)param_1 + 0x26);
  param_2[0x22] = (char)((ulong)param_1[4] >> 0x28);
  param_2[0x23] = (char)*(undefined4 *)((long)param_1 + 0x24);
  param_2[0x24] = (char)((ulong)param_1[4] >> 0x18);
  param_2[0x25] = (char)((ulong)param_1[4] >> 0x10);
  param_2[0x26] = (char)((ulong)param_1[4] >> 8);
  param_2[0x27] = (char)param_1[4];
  param_2[0x28] = *(undefined1 *)((long)param_1 + 0x2f);
  param_2[0x29] = (char)*(undefined2 *)((long)param_1 + 0x2e);
  param_2[0x2a] = (char)((ulong)param_1[5] >> 0x28);
  param_2[0x2b] = (char)*(undefined4 *)((long)param_1 + 0x2c);
  param_2[0x2c] = (char)((ulong)param_1[5] >> 0x18);
  param_2[0x2d] = (char)((ulong)param_1[5] >> 0x10);
  param_2[0x2e] = (char)((ulong)param_1[5] >> 8);
  param_2[0x2f] = (char)param_1[5];
  param_2[0x30] = *(undefined1 *)((long)param_1 + 0x37);
  param_2[0x31] = (char)*(undefined2 *)((long)param_1 + 0x36);
  param_2[0x32] = (char)((ulong)param_1[6] >> 0x28);
  param_2[0x33] = (char)*(undefined4 *)((long)param_1 + 0x34);
  param_2[0x34] = (char)((ulong)param_1[6] >> 0x18);
  param_2[0x35] = (char)((ulong)param_1[6] >> 0x10);
  param_2[0x36] = (char)((ulong)param_1[6] >> 8);
  param_2[0x37] = (char)param_1[6];
  param_2[0x38] = *(undefined1 *)((long)param_1 + 0x3f);
  param_2[0x39] = (char)*(undefined2 *)((long)param_1 + 0x3e);
  param_2[0x3a] = (char)((ulong)param_1[7] >> 0x28);
  param_2[0x3b] = (char)*(undefined4 *)((long)param_1 + 0x3c);
  param_2[0x3c] = (char)((ulong)param_1[7] >> 0x18);
  param_2[0x3d] = (char)((ulong)param_1[7] >> 0x10);
  param_2[0x3e] = (char)((ulong)param_1[7] >> 8);
  param_2[0x3f] = (char)param_1[7];
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
ssl3_cbc_digest_record
          (EVP_MD *param_1,uchar *param_2,ulong *param_3,undefined8 *param_4,undefined8 *param_5,
          long param_6,ulong param_7,void *param_8,ulong param_9,char param_10)

{
  byte *pbVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  byte bVar4;
  bool bVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  EVP_MD_CTX *ctx;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  ulong extraout_RDX;
  ulong extraout_RDX_00;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  undefined8 *puVar18;
  ulong uVar19;
  ulong *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  ulong uVar23;
  byte bVar24;
  ulong uVar25;
  long lVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  byte bVar28;
  undefined1 auVar29 [16];
  ulong local_3d8;
  ulong local_3c8;
  ulong local_3b8;
  ulong local_3b0;
  ulong local_3a8;
  ulong local_390;
  SHA512_CTX *local_388;
  code *local_378;
  code *local_370;
  long local_368;
  ulong local_360;
  ulong local_358;
  ulong local_318;
  uint local_2fc;
  SHA512_CTX local_2f8;
  uint auStack_220 [2];
  byte local_218 [16];
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  undefined1 local_1e8 [16];
  undefined1 local_1d8 [16];
  ulong local_1c8;
  ulong uStack_1c0;
  ulong local_1b8;
  ulong uStack_1b0;
  ulong local_1a8;
  ulong uStack_1a0;
  ulong local_198;
  ulong uStack_190;
  ulong local_188;
  ulong uStack_180;
  ulong local_178;
  ulong uStack_170;
  ulong local_168;
  ulong uStack_160;
  ulong local_158;
  ulong uStack_150;
  undefined5 local_148;
  undefined3 uStack_143;
  undefined5 uStack_140;
  undefined1 local_13b [115];
  undefined1 local_c8 [16];
  byte local_b8;
  byte bStack_b7;
  undefined1 auStack_b6 [14];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  long local_40;
  
  bVar28 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_7 < 0x100000) {
    iVar8 = EVP_MD_is_a();
    if (iVar8 == 0) {
      iVar8 = EVP_MD_is_a(param_1);
      if (iVar8 == 0) {
        iVar8 = EVP_MD_is_a(param_1);
        if (iVar8 == 0) {
          iVar8 = EVP_MD_is_a(param_1);
          if (iVar8 == 0) {
            iVar8 = EVP_MD_is_a(param_1);
            if (iVar8 == 0) {
              iVar8 = EVP_MD_is_a(param_1);
              if (iVar8 == 0) {
                if (param_3 != (ulong *)0x0) {
                  *param_3 = 0;
                }
              }
              else {
                iVar8 = SHA512_Init(&local_2f8);
                if (0 < iVar8) {
                  local_390 = 4;
                  lVar26 = 0x73;
                  iVar8 = 0x400;
                  local_3b0 = 0x40;
                  lVar11 = 0x4f;
                  bVar5 = true;
                  uVar25 = 0x80;
                  local_378 = (code *)&SHA512_Transform;
                  local_368 = 0x10;
                  local_318 = 0x28;
                  local_370 = tls1_sha512_final_raw;
                  goto LAB_0010079a;
                }
              }
            }
            else {
              iVar8 = SHA384_Init(&local_2f8);
              if (0 < iVar8) {
                local_390 = 4;
                lVar26 = 0x73;
                iVar8 = 0x400;
                local_3b0 = 0x30;
                lVar11 = 0x5f;
                bVar5 = true;
                uVar25 = 0x80;
                local_378 = (code *)&SHA512_Transform;
                local_368 = 0x10;
                local_318 = 0x28;
                local_370 = tls1_sha512_final_raw;
                goto LAB_0010079a;
              }
            }
          }
          else {
            iVar8 = SHA256_Init((SHA256_CTX *)&local_2f8);
            if (0 < iVar8) {
              local_390 = 6;
              lVar26 = 0x33;
              iVar8 = 0x200;
              local_3b0 = 0x20;
              lVar11 = 0x27;
              bVar5 = true;
              uVar25 = 0x40;
              local_378 = (code *)&SHA256_Transform;
              local_368 = 8;
              local_318 = 0x28;
              local_370 = tls1_sha256_final_raw;
              goto LAB_0010079a;
            }
          }
        }
        else {
          iVar8 = SHA224_Init((SHA256_CTX *)&local_2f8);
          if (0 < iVar8) {
            local_390 = 6;
            lVar26 = 0x33;
            iVar8 = 0x200;
            local_3b0 = 0x1c;
            lVar11 = 0x2b;
            bVar5 = true;
            uVar25 = 0x40;
            local_378 = (code *)&SHA256_Transform;
            local_368 = 8;
            local_318 = 0x28;
            local_370 = tls1_sha256_final_raw;
LAB_0010079a:
            if (param_10 == '\0') goto LAB_00100925;
            goto LAB_001007a8;
          }
        }
      }
      else {
        iVar8 = SHA1_Init((SHA_CTX *)&local_2f8);
        if (0 < iVar8) {
          local_390 = 6;
          lVar26 = 0x33;
          iVar8 = 0x200;
          lVar11 = 0x33;
          local_368 = 8;
          bVar5 = true;
          local_378 = (code *)&SHA1_Transform;
          uVar25 = 0x40;
          local_318 = 0x28;
          local_3b0 = 0x14;
          local_370 = tls1_sha1_final_raw;
          if (param_10 != '\0') {
LAB_001007a8:
            local_3d8 = local_318 + 0xb + param_9;
            local_3b8 = param_7 + local_3d8;
            uVar15 = param_6 + local_3d8;
            uVar17 = (int)uVar15 * 8;
            local_390 = (lVar11 + local_3b8) / uVar25;
            local_358 = uVar15 / uVar25;
            uVar14 = uVar15 % uVar25;
            local_360 = (uVar15 + local_368) / uVar25;
            if (local_390 < 4) {
              local_390 = 2;
              local_3a8 = 0;
              local_3c8 = 0;
LAB_00100ac2:
              if (!bVar5) goto LAB_0010083b;
LAB_00100acb:
              pbVar12 = local_218;
              uVar9 = (uint)(local_368 - 4U);
              if (7 < uVar9) {
                uVar15 = 0;
                do {
                  uVar10 = (int)uVar15 + 8;
                  pbVar1 = pbVar12 + uVar15;
                  pbVar1[0] = 0;
                  pbVar1[1] = 0;
                  pbVar1[2] = 0;
                  pbVar1[3] = 0;
                  pbVar1[4] = 0;
                  pbVar1[5] = 0;
                  pbVar1[6] = 0;
                  pbVar1[7] = 0;
                  uVar15 = (ulong)uVar10;
                } while (uVar10 < (uVar9 & 0xfffffff8));
                pbVar12 = pbVar12 + uVar10;
              }
              if ((local_368 - 4U & 4) != 0) {
                pbVar12[0] = 0;
                pbVar12[1] = 0;
                pbVar12[2] = 0;
                pbVar12[3] = 0;
              }
              *(uint *)((long)auStack_220 + local_368 + 4) =
                   uVar17 >> 0x18 | (uVar17 & 0xff0000) >> 8 | (uVar17 & 0xff00) << 8 |
                   uVar17 << 0x18;
            }
            else {
              local_3c8 = local_390 - 2;
              local_3a8 = local_3c8 * uVar25;
              if (bVar5) goto LAB_00100acb;
LAB_0010083b:
              uVar9 = 0;
              do {
                uVar15 = (ulong)uVar9;
                uVar9 = uVar9 + 8;
                pbVar12 = local_218 + uVar15;
                pbVar12[0] = 0;
                pbVar12[1] = 0;
                pbVar12[2] = 0;
                pbVar12[3] = 0;
                pbVar12[4] = 0;
                pbVar12[5] = 0;
                pbVar12[6] = 0;
                pbVar12[7] = 0;
              } while (uVar9 < (uint)local_368);
              *(uint *)((long)auStack_220 + local_368) = uVar17;
            }
            local_388 = &local_2f8;
            if (local_3a8 != 0) {
              if (param_10 == '\0') {
                local_148 = (undefined5)*param_4;
                uStack_143 = (undefined3)*(undefined8 *)((long)param_4 + 5);
                uStack_140 = (undefined5)((ulong)*(undefined8 *)((long)param_4 + 5) >> 0x18);
                local_13b._0_8_ = *param_5;
                *(undefined8 *)((long)&uStack_143 + lVar26) =
                     *(undefined8 *)((long)param_5 + lVar26 + -8);
                puVar18 = (undefined8 *)((long)param_5 + 3);
                puVar21 = (undefined8 *)(local_13b + 3);
                for (uVar15 = (ulong)((int)lVar26 - 3U >> 3); uVar15 != 0; uVar15 = uVar15 - 1) {
                  *puVar21 = *puVar18;
                  puVar18 = puVar18 + (ulong)bVar28 * -2 + 1;
                  puVar21 = puVar21 + (ulong)bVar28 * -2 + 1;
                }
                (*local_378)(local_388,&local_148);
                uVar15 = local_3a8 % uVar25;
                if (1 < local_3a8 / uVar25) {
                  lVar11 = (long)param_5 + -0xd;
                  uVar27 = 1;
                  do {
                    lVar11 = lVar11 + uVar25;
                    uVar27 = uVar27 + 1;
                    (*local_378)(local_388,lVar11,uVar15);
                    uVar15 = extraout_RDX_00;
                  } while (uVar27 != local_3a8 / uVar25);
                }
              }
              else {
                if (local_3d8 <= uVar25) goto LAB_00101698;
                uVar27 = local_3d8 - uVar25;
                (*local_378)(local_388,param_4);
                __memcpy_chk(&local_148,(long)param_4 + uVar25,uVar27,0x80);
                uVar15 = 0x80;
                if (0x7f < uVar27) {
                  uVar15 = uVar27;
                }
                lVar11 = uVar25 + (uVar25 - local_3d8);
                __memcpy_chk((long)&local_148 + uVar27,param_5,lVar11,uVar15 + (uVar25 - local_3d8))
                ;
                (*local_378)(local_388,&local_148);
                uVar27 = local_3a8 % uVar25;
                uVar15 = local_3a8 / uVar25 - 1;
                if (1 < uVar15) {
                  uVar23 = 1;
                  lVar11 = lVar11 + (long)param_5;
                  do {
                    uVar23 = uVar23 + 1;
                    (*local_378)(local_388,lVar11,uVar27);
                    uVar27 = extraout_RDX;
                    lVar11 = lVar11 + uVar25;
                  } while (uVar23 != uVar15);
                }
              }
            }
            local_208 = (undefined1  [16])0x0;
            local_1f8 = (undefined1  [16])0x0;
            local_1e8 = (undefined1  [16])0x0;
            local_1d8 = (undefined1  [16])0x0;
            if (local_3c8 <= local_390) {
              uVar23 = local_3b0 & 0xfffffffffffffff0;
              uVar27 = local_3b0 >> 4;
              uVar15 = uVar25 - local_368;
              if (uVar25 <= uVar25 - local_368) {
                uVar15 = uVar25;
              }
              do {
                uVar13 = 0;
                bVar7 = (char)(~(byte)((local_3c8 ^ local_360) >> 0x38) &
                              (byte)((local_3c8 ^ local_360) - 1 >> 0x38)) >> 7;
                bVar6 = (char)(~(byte)((local_3c8 ^ local_358) >> 0x38) &
                              (byte)((local_3c8 ^ local_358) - 1 >> 0x38)) >> 7;
                uVar19 = local_3a8;
                uVar22 = ~uVar14;
                do {
                  if (uVar19 < local_3d8) {
                    bVar24 = *(byte *)((long)param_4 + uVar19);
                  }
                  else {
                    bVar24 = 0;
                    if (uVar19 < local_3b8) {
                      bVar24 = *(byte *)((long)param_5 + uVar13 + (local_3a8 - local_3d8));
                    }
                  }
                  uVar19 = uVar19 + 1;
                  bVar4 = (byte)(uVar13 >> 0x38);
                  bVar3 = ~((char)((bVar4 | (byte)(uVar22 + 1 >> 0x38)) ^ bVar4) >> 7) & bVar6;
                  local_c8[uVar13] =
                       ~(~((char)(((byte)(uVar22 >> 0x38) | bVar4) ^ bVar4) >> 7) & bVar6) &
                       (~bVar7 | bVar6) & (bVar3 & 0x80 | ~bVar3 & bVar24);
                  uVar13 = uVar13 + 1;
                  uVar22 = uVar22 + 1;
                } while (uVar13 < uVar15);
                if (uVar13 < uVar25) {
                  lVar11 = (uVar13 - uVar14) + -1;
                  do {
                    if (uVar19 < local_3d8) {
                      bVar24 = *(byte *)((long)param_4 + uVar19);
                    }
                    else {
                      bVar24 = 0;
                      if (uVar19 < local_3b8) {
                        bVar24 = *(byte *)((long)param_5 + (uVar19 - local_3d8));
                      }
                    }
                    bVar4 = (byte)(uVar13 >> 0x38);
                    uVar19 = uVar19 + 1;
                    bVar3 = ~((char)(((byte)((ulong)(lVar11 + 1) >> 0x38) | bVar4) ^ bVar4) >> 7) &
                            bVar6;
                    local_c8[uVar13] =
                         ~(~((char)(((byte)((ulong)lVar11 >> 0x38) | bVar4) ^ bVar4) >> 7) & bVar6)
                         & (~bVar7 | bVar6) & (~bVar3 & bVar24 | bVar3 & 0x80) & ~bVar7 |
                         local_218[uVar13 + (local_368 - uVar25)] & bVar7;
                    uVar13 = uVar13 + 1;
                    lVar11 = lVar11 + 1;
                  } while (uVar13 < uVar25);
                }
                local_3a8 = local_3a8 + uVar25;
                (*local_378)(local_388,local_c8);
                (*local_370)(local_388,local_c8);
                auVar29._0_4_ = CONCAT22(CONCAT11(bVar7,bVar7),CONCAT11(bVar7,bVar7));
                auVar29._4_4_ = auVar29._0_4_;
                auVar29._8_4_ = auVar29._0_4_;
                auVar29._12_4_ = auVar29._0_4_;
                local_208 = local_c8 & auVar29 | local_208;
                if (uVar27 == 1) {
                  if (local_3b0 != 0x10) {
                    if (6 < local_3b0 - 0x11) {
                      uVar19 = 0xc;
                      goto LAB_001012e2;
                    }
                    uVar19 = 0x12;
                    local_1f8[1] = local_1f8[1] | bStack_b7 & bVar7;
                    local_1f8[0] = local_1f8[0] | local_b8 & bVar7;
                    lVar11 = 0x10;
LAB_00101363:
                    local_208[uVar19] = local_208[uVar19] | local_c8[uVar19] & bVar7;
                    if (lVar11 + 3U < local_3b0) {
                      local_208[lVar11 + 3] = local_208[lVar11 + 3] | local_c8[lVar11 + 3] & bVar7;
                      if (lVar11 + 4U < local_3b0) {
                        local_208[lVar11 + 4] = local_208[lVar11 + 4] | local_c8[lVar11 + 4] & bVar7
                        ;
                        if (lVar11 + 5U < local_3b0) {
                          local_208[lVar11 + 5] =
                               local_208[lVar11 + 5] | local_c8[lVar11 + 5] & bVar7;
                          if (lVar11 + 6U < local_3b0) {
                            local_208[lVar11 + 6] =
                                 local_208[lVar11 + 6] | local_c8[lVar11 + 6] & bVar7;
                          }
                        }
                      }
                    }
                  }
                }
                else {
                  auVar2[1] = bStack_b7;
                  auVar2[0] = local_b8;
                  auVar2._2_14_ = auStack_b6;
                  local_1f8 = auVar2 & auVar29 | local_1f8;
                  if ((uVar27 == 2) || (local_1e8 = local_a8 & auVar29 | local_1e8, uVar27 != 4)) {
                    if ((local_3b0 & 0xc) != 0) {
                      uVar19 = local_3b0 - uVar23;
LAB_001012e2:
                      auVar29 = pshuflw(auVar29,ZEXT216(CONCAT11(bVar7,bVar7)),0);
                      *(ulong *)(local_208 + uVar23) =
                           *(ulong *)(local_208 + uVar23) |
                           *(ulong *)(local_c8 + uVar23) & auVar29._0_8_;
                      if ((uVar19 & 7) != 0) {
                        lVar11 = (uVar19 & 0xfffffffffffffff8) + uVar23;
                        local_208[lVar11] = local_208[lVar11] | local_c8[lVar11] & bVar7;
                        if (lVar11 + 1U < local_3b0) {
                          local_208[lVar11 + 1] =
                               local_208[lVar11 + 1] | local_c8[lVar11 + 1] & bVar7;
                          uVar19 = lVar11 + 2;
                          if (uVar19 < local_3b0) goto LAB_00101363;
                        }
                      }
                    }
                  }
                  else {
                    local_1d8 = auVar29 & local_98 | local_1d8;
                  }
                }
                local_3c8 = local_3c8 + 1;
              } while (local_3c8 <= local_390);
            }
            ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
            if ((ctx == (EVP_MD_CTX *)0x0) ||
               (iVar8 = EVP_DigestInit_ex(ctx,param_1,(ENGINE *)0x0), iVar8 < 1)) {
LAB_00101478:
              uVar16 = 0;
            }
            else {
              if (param_10 != '\0') {
                puVar20 = &local_1c8;
                for (uVar25 = local_318 >> 3; uVar25 != 0; uVar25 = uVar25 - 1) {
                  *puVar20 = 0x5c5c5c5c5c5c5c5c;
                  puVar20 = puVar20 + (ulong)bVar28 * -2 + 1;
                }
                iVar8 = EVP_DigestUpdate(ctx,param_8,param_9);
                if ((0 < iVar8) && (iVar8 = EVP_DigestUpdate(ctx,&local_1c8,local_318), 0 < iVar8))
                goto LAB_00101257;
                goto LAB_00101478;
              }
              local_1c8 = local_1c8 ^ __LC8;
              uStack_1c0 = uStack_1c0 ^ _UNK_00101778;
              local_1b8 = local_1b8 ^ __LC8;
              uStack_1b0 = uStack_1b0 ^ _UNK_00101778;
              local_1a8 = local_1a8 ^ __LC8;
              uStack_1a0 = uStack_1a0 ^ _UNK_00101778;
              local_198 = local_198 ^ __LC8;
              uStack_190 = uStack_190 ^ _UNK_00101778;
              if (uVar25 != 0x40) {
                local_188 = local_188 ^ __LC8;
                uStack_180 = uStack_180 ^ _UNK_00101778;
                local_178 = local_178 ^ __LC8;
                uStack_170 = uStack_170 ^ _UNK_00101778;
                local_168 = local_168 ^ __LC8;
                uStack_160 = uStack_160 ^ _UNK_00101778;
                local_158 = __LC8 ^ local_158;
                uStack_150 = _UNK_00101778 ^ uStack_150;
              }
              iVar8 = EVP_DigestUpdate(ctx,&local_1c8,uVar25);
              if (iVar8 < 1) goto LAB_00101478;
LAB_00101257:
              iVar8 = EVP_DigestUpdate(ctx,local_208,local_3b0);
              if (iVar8 < 1) goto LAB_00101478;
              iVar8 = EVP_DigestFinal(ctx,param_2,&local_2fc);
              if ((iVar8 != 0) && (param_3 != (ulong *)0x0)) {
                *param_3 = (ulong)local_2fc;
              }
              uVar16 = 1;
            }
            EVP_MD_CTX_free(ctx);
            goto LAB_00101482;
          }
LAB_00100925:
          local_388 = &local_2f8;
          uVar15 = ((uVar25 + 0xc + param_7 + local_368) - local_3b0) / uVar25;
          if (local_390 < uVar15) {
            local_3c8 = uVar15 - local_390;
            local_3a8 = local_3c8 * uVar25;
            local_390 = uVar15;
          }
          else {
            local_3a8 = 0;
            local_3c8 = 0;
          }
          uVar15 = param_6 + 0xd;
          uVar17 = iVar8 + (int)uVar15 * 8;
          puVar20 = &local_1c8;
          for (uVar14 = uVar25 >> 3; uVar14 != 0; uVar14 = uVar14 - 1) {
            *puVar20 = 0;
            puVar20 = puVar20 + (ulong)bVar28 * -2 + 1;
          }
          if (param_9 < 0x81) {
            memcpy(&local_1c8,param_8,param_9);
            local_1c8 = local_1c8 ^ __LC7;
            uStack_1c0 = uStack_1c0 ^ _UNK_00101768;
            local_1b8 = local_1b8 ^ __LC7;
            uStack_1b0 = uStack_1b0 ^ _UNK_00101768;
            local_1a8 = local_1a8 ^ __LC7;
            uStack_1a0 = uStack_1a0 ^ _UNK_00101768;
            local_198 = local_198 ^ __LC7;
            uStack_190 = uStack_190 ^ _UNK_00101768;
            if (uVar25 != 0x40) {
              local_188 = local_188 ^ __LC7;
              uStack_180 = uStack_180 ^ _UNK_00101768;
              local_178 = local_178 ^ __LC7;
              uStack_170 = uStack_170 ^ _UNK_00101768;
              local_168 = local_168 ^ __LC7;
              uStack_160 = uStack_160 ^ _UNK_00101768;
              local_158 = __LC7 ^ local_158;
              uStack_150 = _UNK_00101768 ^ uStack_150;
            }
            local_3b8 = param_7 + 0xd;
            local_358 = uVar15 / uVar25;
            uVar14 = uVar15 % uVar25;
            local_360 = (local_368 + uVar15) / uVar25;
            (*local_378)(local_388,&local_1c8,(local_368 + uVar15) % uVar25);
            local_3d8 = 0xd;
            goto LAB_00100ac2;
          }
        }
      }
    }
    else {
      iVar8 = MD5_Init((MD5_CTX *)&local_2f8);
      if (0 < iVar8) {
        bVar5 = false;
        local_390 = 6;
        lVar26 = 0x33;
        iVar8 = 0x200;
        lVar11 = 0x37;
        uVar25 = 0x40;
        local_368 = 8;
        local_378 = MD5_Transform;
        local_318 = 0x30;
        local_3b0 = 0x10;
        local_370 = tls1_md5_final_raw;
        goto LAB_0010079a;
      }
    }
  }
LAB_00101698:
  uVar16 = 0;
LAB_00101482:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar16;
}


