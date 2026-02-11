
void TransformOne_C(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  undefined1 auVar7 [12];
  uint uVar8;
  uint uVar9;
  int *piVar10;
  long in_FS_OFFSET;
  int iVar11;
  int iVar12;
  int iVar13;
  short sVar17;
  short sVar18;
  int iVar19;
  undefined2 uVar20;
  undefined1 auVar14 [16];
  int iVar21;
  int iVar25;
  undefined1 auVar22 [16];
  int iVar26;
  int iVar27;
  int iVar31;
  undefined1 auVar28 [16];
  int iVar32;
  undefined1 auVar33 [16];
  int iVar36;
  int iVar40;
  undefined1 auVar37 [16];
  int iVar41;
  int iVar42;
  int iVar43;
  short sVar47;
  short sVar48;
  undefined2 uVar49;
  int iVar50;
  undefined1 auVar44 [16];
  undefined1 auVar51 [16];
  undefined1 auVar54 [16];
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar52 [16];
  undefined1 auVar53 [16];
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  
  piVar10 = (int *)&local_58;
  uVar1 = *param_1;
  uVar2 = param_1[3];
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = param_1[1];
  sVar17 = (short)(uVar1 >> 0x10);
  sVar18 = (short)(uVar1 >> 0x20);
  uVar20 = (undefined2)(uVar1 >> 0x30);
  auVar39._8_4_ = 0;
  auVar39._0_8_ = uVar1;
  auVar39._12_2_ = uVar20;
  auVar39._14_2_ = -(ushort)((long)uVar1 < 0);
  auVar38._12_4_ = auVar39._12_4_;
  auVar38._8_2_ = 0;
  auVar38._0_8_ = uVar1;
  auVar38._10_2_ = -(ushort)(sVar18 < 0);
  auVar37._10_6_ = auVar38._10_6_;
  auVar37._8_2_ = sVar18;
  auVar37._0_8_ = uVar1;
  auVar4._4_8_ = auVar37._8_8_;
  auVar4._2_2_ = -(ushort)(sVar17 < 0);
  auVar4._0_2_ = sVar17;
  iVar36 = CONCAT22(-(ushort)((short)uVar1 < 0),(short)uVar1);
  auVar35._8_4_ = 0;
  auVar35._0_8_ = uVar1;
  auVar35._12_2_ = uVar20;
  auVar35._14_2_ = -(ushort)((long)uVar1 < 0);
  auVar34._12_4_ = auVar35._12_4_;
  auVar34._8_2_ = 0;
  auVar34._0_8_ = uVar1;
  auVar34._10_2_ = -(ushort)(sVar18 < 0);
  auVar33._10_6_ = auVar34._10_6_;
  auVar33._8_2_ = sVar18;
  auVar33._0_8_ = uVar1;
  uVar1 = param_1[2];
  sVar17 = (short)(uVar1 >> 0x10);
  sVar18 = (short)(uVar1 >> 0x20);
  uVar20 = (undefined2)(uVar1 >> 0x30);
  auVar16._8_4_ = 0;
  auVar16._0_8_ = uVar1;
  auVar16._12_2_ = uVar20;
  auVar16._14_2_ = -(ushort)((long)uVar1 < 0);
  auVar15._12_4_ = auVar16._12_4_;
  auVar15._8_2_ = 0;
  auVar15._0_8_ = uVar1;
  auVar15._10_2_ = -(ushort)(sVar18 < 0);
  auVar14._10_6_ = auVar15._10_6_;
  auVar14._8_2_ = sVar18;
  auVar14._0_8_ = uVar1;
  auVar24._8_4_ = 0;
  auVar24._0_8_ = uVar1;
  auVar24._12_2_ = uVar20;
  auVar24._14_2_ = -(ushort)((long)uVar1 < 0);
  auVar23._12_4_ = auVar24._12_4_;
  auVar23._8_2_ = 0;
  auVar23._0_8_ = uVar1;
  auVar23._10_2_ = -(ushort)(sVar18 < 0);
  auVar22._10_6_ = auVar23._10_6_;
  auVar22._8_2_ = sVar18;
  auVar22._0_8_ = uVar1;
  auVar5._4_8_ = auVar22._8_8_;
  auVar5._2_2_ = -(ushort)(sVar17 < 0);
  auVar5._0_2_ = sVar17;
  iVar11 = CONCAT22(-(ushort)((short)uVar1 < 0),(short)uVar1);
  iVar42 = iVar11 + iVar36;
  iVar43 = auVar5._0_4_ + auVar4._0_4_;
  iVar36 = iVar36 - iVar11;
  iVar40 = auVar4._0_4_ - auVar5._0_4_;
  iVar41 = auVar14._8_4_ + auVar33._8_4_;
  iVar32 = auVar33._8_4_ - auVar14._8_4_;
  sVar47 = (short)(uVar2 >> 0x10);
  sVar48 = (short)(uVar2 >> 0x20);
  uVar49 = (undefined2)(uVar2 >> 0x30);
  sVar17 = (short)(uVar3 >> 0x10);
  sVar18 = (short)(uVar3 >> 0x20);
  uVar20 = (undefined2)(uVar3 >> 0x30);
  auVar53._8_4_ = 0;
  auVar53._0_8_ = uVar2;
  auVar53._12_2_ = uVar49;
  auVar53._14_2_ = -(ushort)((long)uVar2 < 0);
  auVar52._12_4_ = auVar53._12_4_;
  auVar52._8_2_ = 0;
  auVar52._0_8_ = uVar2;
  auVar52._10_2_ = -(ushort)(sVar48 < 0);
  auVar51._10_6_ = auVar52._10_6_;
  auVar51._8_2_ = sVar48;
  auVar51._0_8_ = uVar2;
  auVar6._4_8_ = auVar51._8_8_;
  auVar6._2_2_ = -(ushort)(sVar47 < 0);
  auVar6._0_2_ = sVar47;
  iVar13 = CONCAT22(-(ushort)((short)uVar2 < 0),(short)uVar2);
  auVar46._8_4_ = 0;
  auVar46._0_8_ = uVar2;
  auVar46._12_2_ = uVar49;
  auVar46._14_2_ = -(ushort)((long)uVar2 < 0);
  auVar45._12_4_ = auVar46._12_4_;
  auVar45._8_2_ = 0;
  auVar45._0_8_ = uVar2;
  auVar45._10_2_ = -(ushort)(sVar48 < 0);
  auVar44._10_6_ = auVar45._10_6_;
  auVar44._8_2_ = sVar48;
  auVar44._0_8_ = uVar2;
  auVar56._8_4_ = 0;
  auVar56._0_8_ = uVar3;
  auVar56._12_2_ = uVar20;
  auVar56._14_2_ = -(ushort)((long)uVar3 < 0);
  auVar55._12_4_ = auVar56._12_4_;
  auVar55._8_2_ = 0;
  auVar55._0_8_ = uVar3;
  auVar55._10_2_ = -(ushort)(sVar18 < 0);
  auVar54._10_6_ = auVar55._10_6_;
  auVar54._8_2_ = sVar18;
  auVar54._0_8_ = uVar3;
  auVar7._4_8_ = auVar54._8_8_;
  auVar7._2_2_ = -(ushort)(sVar17 < 0);
  auVar7._0_2_ = sVar17;
  iVar19 = CONCAT22(-(ushort)((short)uVar3 < 0),(short)uVar3);
  iVar50 = auVar44._8_4_;
  iVar11 = auVar6._0_4_;
  iVar12 = auVar7._0_4_;
  auVar30._8_4_ = 0;
  auVar30._0_8_ = uVar3;
  auVar30._12_2_ = uVar20;
  auVar30._14_2_ = -(ushort)((long)uVar3 < 0);
  auVar29._12_4_ = auVar30._12_4_;
  auVar29._8_2_ = 0;
  auVar29._0_8_ = uVar3;
  auVar29._10_2_ = -(ushort)(sVar18 < 0);
  auVar28._10_6_ = auVar29._10_6_;
  auVar28._8_2_ = sVar18;
  auVar28._0_8_ = uVar3;
  iVar31 = auVar28._8_4_;
  iVar26 = (iVar19 * 0x8a8c >> 0x10) - ((iVar13 * 0x4e7b >> 0x10) + iVar13);
  iVar27 = (iVar12 * 0x8a8c >> 0x10) - ((iVar11 * 0x4e7b >> 0x10) + iVar11);
  iVar21 = (iVar31 * 0x8a8c >> 0x10) - ((iVar50 * 0x4e7b >> 0x10) + iVar50);
  iVar25 = (auVar29._12_4_ * 0x8a8c >> 0x10) - ((auVar45._12_4_ * 0x4e7b >> 0x10) + auVar45._12_4_);
  iVar13 = (iVar19 * 0x4e7b >> 0x10) + iVar19 + (iVar13 * 0x8a8c >> 0x10);
  iVar19 = (iVar12 * 0x4e7b >> 0x10) + iVar12 + (iVar11 * 0x8a8c >> 0x10);
  iVar11 = (iVar31 * 0x4e7b >> 0x10) + iVar31 + (iVar50 * 0x8a8c >> 0x10);
  iVar12 = (auVar29._12_4_ * 0x4e7b >> 0x10) + auVar29._12_4_ + (auVar45._12_4_ * 0x8a8c >> 0x10);
  local_50 = CONCAT44(iVar42 - iVar13,iVar36 - iVar26);
  local_58 = CONCAT44(iVar36 + iVar26,iVar42 + iVar13);
  local_48 = CONCAT44(iVar40 + iVar27,iVar43 + iVar19);
  local_40 = CONCAT44(iVar43 - iVar19,iVar40 - iVar27);
  local_30 = CONCAT44(iVar41 - iVar11,iVar32 - iVar21);
  local_38 = CONCAT44(iVar32 + iVar21,iVar41 + iVar11);
  local_28 = CONCAT44((auVar34._12_4_ - auVar15._12_4_) + iVar25,
                      auVar15._12_4_ + auVar34._12_4_ + iVar12);
  local_20 = CONCAT44((auVar15._12_4_ + auVar34._12_4_) - iVar12,
                      (auVar34._12_4_ - auVar15._12_4_) - iVar25);
  do {
    iVar12 = piVar10[0xc];
    iVar13 = piVar10[4];
    iVar11 = piVar10[8] + *piVar10 + 4;
    iVar19 = (*piVar10 + 4) - piVar10[8];
    iVar21 = (iVar13 * 0x8a8c >> 0x10) - ((iVar12 * 0x4e7b >> 0x10) + iVar12);
    iVar12 = (iVar13 * 0x4e7b >> 0x10) + iVar13 + (iVar12 * 0x8a8c >> 0x10);
    uVar9 = (iVar12 + iVar11 >> 3) + (uint)*param_2;
    if (0xff < uVar9) {
      uVar9 = (int)~uVar9 >> 0x1f;
    }
    *param_2 = (byte)uVar9;
    uVar9 = (iVar21 + iVar19 >> 3) + (uint)param_2[1];
    if (0xff < uVar9) {
      uVar9 = (int)~uVar9 >> 0x1f;
    }
    uVar8 = (iVar19 - iVar21 >> 3) + (uint)param_2[2];
    param_2[1] = (byte)uVar9;
    if (0xff < uVar8) {
      uVar8 = (int)~uVar8 >> 0x1f;
    }
    uVar9 = (iVar11 - iVar12 >> 3) + (uint)param_2[3];
    param_2[2] = (byte)uVar8;
    if (0xff < uVar9) {
      uVar9 = (int)~uVar9 >> 0x1f;
    }
    piVar10 = piVar10 + 1;
    param_2[3] = (byte)uVar9;
    param_2 = param_2 + 0x20;
  } while (piVar10 != (int *)&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void TransformAC3_C(short *param_1,byte *param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  
  iVar2 = (int)param_1[4];
  iVar5 = *param_1 + 4;
  iVar7 = (iVar2 * 0x4e7b >> 0x10) + iVar2;
  iVar3 = (int)param_1[1];
  iVar8 = iVar2 * 0x8a8c >> 0x10;
  iVar6 = (iVar3 * 0x4e7b >> 0x10) + iVar3;
  iVar2 = iVar5 + iVar7;
  iVar3 = iVar3 * 0x8a8c >> 0x10;
  uVar9 = (iVar6 + iVar2 >> 3) + (uint)*param_2;
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  *param_2 = (byte)uVar9;
  uVar9 = (iVar3 + iVar2 >> 3) + (uint)param_2[1];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  param_2[1] = (byte)uVar9;
  uVar9 = (iVar2 - iVar3 >> 3) + (uint)param_2[2];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  uVar4 = (iVar2 - iVar6 >> 3) + (uint)param_2[3];
  param_2[2] = (byte)uVar9;
  iVar2 = iVar5 + iVar8;
  if (0xff < uVar4) {
    uVar4 = (int)~uVar4 >> 0x1f;
  }
  param_2[3] = (byte)uVar4;
  uVar9 = (iVar6 + iVar2 >> 3) + (uint)param_2[0x20];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  param_2[0x20] = (byte)uVar9;
  uVar9 = (iVar3 + iVar2 >> 3) + (uint)param_2[0x21];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  param_2[0x21] = (byte)uVar9;
  uVar9 = (iVar2 - iVar3 >> 3) + (uint)param_2[0x22];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  uVar4 = (iVar2 - iVar6 >> 3) + (uint)param_2[0x23];
  param_2[0x22] = (byte)uVar9;
  if (0xff < uVar4) {
    uVar4 = (int)~uVar4 >> 0x1f;
  }
  iVar8 = iVar5 - iVar8;
  param_2[0x23] = (byte)uVar4;
  uVar9 = (iVar6 + iVar8 >> 3) + (uint)param_2[0x40];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  param_2[0x40] = (byte)uVar9;
  uVar9 = (iVar3 + iVar8 >> 3) + (uint)param_2[0x41];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  param_2[0x41] = (byte)uVar9;
  uVar9 = (iVar8 - iVar3 >> 3) + (uint)param_2[0x42];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  uVar4 = (iVar8 - iVar6 >> 3) + (uint)param_2[0x43];
  param_2[0x42] = (byte)uVar9;
  if (0xff < uVar4) {
    uVar4 = (int)~uVar4 >> 0x1f;
  }
  iVar5 = iVar5 - iVar7;
  param_2[0x43] = (byte)uVar4;
  uVar9 = (iVar6 + iVar5 >> 3) + (uint)param_2[0x60];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  param_2[0x60] = (byte)uVar9;
  uVar9 = (iVar3 + iVar5 >> 3) + (uint)param_2[0x61];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  param_2[0x61] = (byte)uVar9;
  uVar9 = (iVar5 - iVar3 >> 3) + (uint)param_2[0x62];
  if (0xff < uVar9) {
    uVar9 = (int)~uVar9 >> 0x1f;
  }
  uVar4 = (iVar5 - iVar6 >> 3) + (uint)param_2[99];
  param_2[0x62] = (byte)uVar9;
  bVar1 = (byte)uVar4;
  if (0xff < uVar4) {
    bVar1 = (char)~(byte)(uVar4 >> 0x18) >> 7;
  }
  param_2[99] = bVar1;
  return;
}



void TransformUV_C(long param_1,long param_2)

{
  (*VP8Transform)(param_1,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x001007f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*VP8Transform)(param_1 + 0x40,param_2 + 0x80,1);
  return;
}



void TransformDC_C(short *param_1,long param_2)

{
  short sVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  long lVar5;
  
  sVar1 = *param_1;
  pbVar4 = (byte *)(param_2 + 4);
  lVar5 = 0;
  do {
    pbVar3 = pbVar4 + -4;
    do {
      uVar2 = (uint)*pbVar3 + (sVar1 + 4 >> 3);
      if (0xff < uVar2) {
        uVar2 = (int)~uVar2 >> 0x1f;
      }
      *pbVar3 = (byte)uVar2;
      pbVar3 = pbVar3 + 1;
    } while (pbVar4 != pbVar3);
    lVar5 = lVar5 + 0x20;
    pbVar4 = pbVar4 + 0x20;
  } while (lVar5 != 0x80);
  return;
}



void TransformDCUV_C(short *param_1,long param_2)

{
  if (*param_1 != 0) {
    (*VP8TransformDC)();
  }
  if (param_1[0x10] != 0) {
    (*VP8TransformDC)(param_1 + 0x10,param_2 + 4);
  }
  if (param_1[0x20] != 0) {
    (*VP8TransformDC)(param_1 + 0x20,param_2 + 0x80);
  }
  if (param_1[0x30] != 0) {
                    /* WARNING: Could not recover jumptable at 0x001008b1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*VP8TransformDC)(param_1 + 0x30,param_2 + 0x84);
    return;
  }
  return;
}



void TransformWHT_C(ulong *param_1,undefined2 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [12];
  undefined1 auVar4 [12];
  undefined1 auVar5 [12];
  undefined1 auVar6 [12];
  int iVar7;
  short sVar11;
  short sVar12;
  short sVar13;
  short sVar14;
  undefined2 uVar15;
  undefined2 uVar16;
  undefined1 auVar8 [16];
  int iVar17;
  undefined1 auVar18 [16];
  int iVar21;
  int iVar22;
  int iVar23;
  int iVar27;
  int iVar28;
  undefined1 auVar24 [16];
  int iVar29;
  int iVar33;
  undefined1 auVar30 [16];
  undefined1 auVar34 [16];
  int iVar37;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar47;
  int iVar48;
  undefined1 auVar44 [16];
  int iVar49;
  int iVar53;
  int iVar54;
  undefined1 auVar50 [16];
  int iVar55;
  int iVar56;
  int iVar57;
  undefined1 auVar58 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar45 [16];
  undefined1 auVar46 [16];
  undefined1 auVar51 [16];
  undefined1 auVar52 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  
  uVar1 = *param_1;
  sVar11 = (short)(uVar1 >> 0x10);
  sVar12 = (short)(uVar1 >> 0x20);
  uVar15 = (undefined2)(uVar1 >> 0x30);
  uVar2 = param_1[3];
  auVar26._8_4_ = 0;
  auVar26._0_8_ = uVar1;
  auVar26._12_2_ = uVar15;
  auVar26._14_2_ = -(ushort)((long)uVar1 < 0);
  auVar25._12_4_ = auVar26._12_4_;
  auVar25._8_2_ = 0;
  auVar25._0_8_ = uVar1;
  auVar25._10_2_ = -(ushort)(sVar12 < 0);
  auVar24._10_6_ = auVar25._10_6_;
  auVar24._8_2_ = sVar12;
  auVar24._0_8_ = uVar1;
  auVar3._4_8_ = auVar24._8_8_;
  auVar3._2_2_ = -(ushort)(sVar11 < 0);
  auVar3._0_2_ = sVar11;
  iVar23 = CONCAT22(-(ushort)((short)uVar1 < 0),(short)uVar1);
  auVar20._8_4_ = 0;
  auVar20._0_8_ = uVar1;
  auVar20._12_2_ = uVar15;
  auVar20._14_2_ = -(ushort)((long)uVar1 < 0);
  auVar19._12_4_ = auVar20._12_4_;
  auVar19._8_2_ = 0;
  auVar19._0_8_ = uVar1;
  auVar19._10_2_ = -(ushort)(sVar12 < 0);
  auVar18._10_6_ = auVar19._10_6_;
  auVar18._8_2_ = sVar12;
  auVar18._0_8_ = uVar1;
  sVar11 = (short)(uVar2 >> 0x10);
  sVar13 = (short)(uVar2 >> 0x20);
  uVar15 = (undefined2)(uVar2 >> 0x30);
  uVar1 = param_1[1];
  sVar12 = (short)(uVar1 >> 0x10);
  sVar14 = (short)(uVar1 >> 0x20);
  uVar16 = (undefined2)(uVar1 >> 0x30);
  auVar32._8_4_ = 0;
  auVar32._0_8_ = uVar2;
  auVar32._12_2_ = uVar15;
  auVar32._14_2_ = -(ushort)((long)uVar2 < 0);
  auVar31._12_4_ = auVar32._12_4_;
  auVar31._8_2_ = 0;
  auVar31._0_8_ = uVar2;
  auVar31._10_2_ = -(ushort)(sVar13 < 0);
  auVar30._10_6_ = auVar31._10_6_;
  auVar30._8_2_ = sVar13;
  auVar30._0_8_ = uVar2;
  auVar52._8_4_ = 0;
  auVar52._0_8_ = uVar2;
  auVar52._12_2_ = uVar15;
  auVar52._14_2_ = -(ushort)((long)uVar2 < 0);
  auVar51._12_4_ = auVar52._12_4_;
  auVar51._8_2_ = 0;
  auVar51._0_8_ = uVar2;
  auVar51._10_2_ = -(ushort)(sVar13 < 0);
  auVar50._10_6_ = auVar51._10_6_;
  auVar50._8_2_ = sVar13;
  auVar50._0_8_ = uVar2;
  auVar4._4_8_ = auVar50._8_8_;
  auVar4._2_2_ = -(ushort)(sVar11 < 0);
  auVar4._0_2_ = sVar11;
  iVar7 = CONCAT22(-(ushort)((short)uVar2 < 0),(short)uVar2);
  auVar46._8_4_ = 0;
  auVar46._0_8_ = uVar1;
  auVar46._12_2_ = uVar16;
  auVar46._14_2_ = -(ushort)((long)uVar1 < 0);
  auVar45._12_4_ = auVar46._12_4_;
  auVar45._8_2_ = 0;
  auVar45._0_8_ = uVar1;
  auVar45._10_2_ = -(ushort)(sVar14 < 0);
  auVar44._10_6_ = auVar45._10_6_;
  auVar44._8_2_ = sVar14;
  auVar44._0_8_ = uVar1;
  auVar5._4_8_ = auVar44._8_8_;
  auVar5._2_2_ = -(ushort)(sVar12 < 0);
  auVar5._0_2_ = sVar12;
  iVar42 = CONCAT22(-(ushort)((short)uVar1 < 0),(short)uVar1);
  auVar10._8_4_ = 0;
  auVar10._0_8_ = uVar1;
  auVar10._12_2_ = uVar16;
  auVar10._14_2_ = -(ushort)((long)uVar1 < 0);
  auVar9._12_4_ = auVar10._12_4_;
  auVar9._8_2_ = 0;
  auVar9._0_8_ = uVar1;
  auVar9._10_2_ = -(ushort)(sVar14 < 0);
  auVar8._10_6_ = auVar9._10_6_;
  auVar8._8_2_ = sVar14;
  auVar8._0_8_ = uVar1;
  uVar1 = param_1[2];
  iVar37 = auVar30._8_4_ + auVar18._8_4_;
  iVar21 = iVar7 + iVar23;
  iVar22 = auVar4._0_4_ + auVar3._0_4_;
  sVar11 = (short)(uVar1 >> 0x10);
  sVar12 = (short)(uVar1 >> 0x20);
  uVar15 = (undefined2)(uVar1 >> 0x30);
  iVar23 = iVar23 - iVar7;
  iVar27 = auVar3._0_4_ - auVar4._0_4_;
  iVar17 = auVar18._8_4_ - auVar30._8_4_;
  auVar36._8_4_ = 0;
  auVar36._0_8_ = uVar1;
  auVar36._12_2_ = uVar15;
  auVar36._14_2_ = -(ushort)((long)uVar1 < 0);
  auVar35._12_4_ = auVar36._12_4_;
  auVar35._8_2_ = 0;
  auVar35._0_8_ = uVar1;
  auVar35._10_2_ = -(ushort)(sVar12 < 0);
  auVar34._10_6_ = auVar35._10_6_;
  auVar34._8_2_ = sVar12;
  auVar34._0_8_ = uVar1;
  auVar60._8_4_ = 0;
  auVar60._0_8_ = uVar1;
  auVar60._12_2_ = uVar15;
  auVar60._14_2_ = -(ushort)((long)uVar1 < 0);
  auVar59._12_4_ = auVar60._12_4_;
  auVar59._8_2_ = 0;
  auVar59._0_8_ = uVar1;
  auVar59._10_2_ = -(ushort)(sVar12 < 0);
  auVar58._10_6_ = auVar59._10_6_;
  auVar58._8_2_ = sVar12;
  auVar58._0_8_ = uVar1;
  auVar6._4_8_ = auVar58._8_8_;
  auVar6._2_2_ = -(ushort)(sVar11 < 0);
  auVar6._0_2_ = sVar11;
  iVar7 = CONCAT22(-(ushort)((short)uVar1 < 0),(short)uVar1);
  iVar56 = iVar7 + iVar42;
  iVar57 = auVar6._0_4_ + auVar5._0_4_;
  iVar42 = iVar42 - iVar7;
  iVar47 = auVar5._0_4_ - auVar6._0_4_;
  iVar55 = auVar34._8_4_ + auVar8._8_4_;
  iVar7 = auVar8._8_4_ - auVar34._8_4_;
  iVar29 = iVar22 + iVar57;
  iVar22 = iVar22 - iVar57;
  iVar38 = iVar37 - iVar55;
  iVar40 = (auVar31._12_4_ + auVar19._12_4_) - (auVar35._12_4_ + auVar9._12_4_);
  iVar37 = iVar37 + iVar55;
  iVar53 = auVar31._12_4_ + auVar19._12_4_ + auVar35._12_4_ + auVar9._12_4_;
  iVar33 = iVar47 + iVar27;
  iVar27 = iVar27 - iVar47;
  iVar39 = iVar7 + iVar17;
  iVar41 = (auVar9._12_4_ - auVar35._12_4_) + (auVar19._12_4_ - auVar31._12_4_);
  iVar17 = iVar17 - iVar7;
  iVar55 = (auVar19._12_4_ - auVar31._12_4_) - (auVar9._12_4_ - auVar35._12_4_);
  iVar7 = iVar21 + iVar56 + (int)_LC0;
  iVar47 = iVar42 + iVar23 + _LC0._4_4_;
  iVar56 = (iVar21 - iVar56) + (int)_LC0;
  iVar57 = (iVar23 - iVar42) + _LC0._4_4_;
  iVar49 = iVar29 + iVar37;
  iVar54 = iVar33 + iVar39;
  iVar21 = iVar7 + iVar53;
  iVar23 = iVar47 + iVar41;
  iVar43 = iVar22 + iVar38;
  iVar48 = iVar27 + iVar17;
  iVar42 = iVar56 - iVar40;
  iVar28 = iVar57 - iVar55;
  iVar56 = iVar56 + iVar40;
  iVar57 = iVar57 + iVar55;
  iVar7 = iVar7 - iVar53;
  iVar47 = iVar47 - iVar41;
  iVar22 = iVar22 - iVar38;
  iVar27 = iVar27 - iVar17;
  iVar29 = iVar29 - iVar37;
  iVar33 = iVar33 - iVar39;
  *param_2 = (short)(iVar49 + iVar21 >> 3);
  param_2[0x40] = (short)(iVar54 + iVar23 >> 3);
  param_2[0x80] = (short)(iVar43 + iVar56 >> 3);
  param_2[0xc0] = (short)(iVar48 + iVar57 >> 3);
  param_2[0x10] = (short)(iVar7 + iVar29 >> 3);
  param_2[0x50] = (short)(iVar47 + iVar33 >> 3);
  param_2[0x90] = (short)(iVar42 + iVar22 >> 3);
  param_2[0xd0] = (short)(iVar28 + iVar27 >> 3);
  param_2[0x20] = (short)(iVar21 - iVar49 >> 3);
  param_2[0x60] = (short)(iVar23 - iVar54 >> 3);
  param_2[0xa0] = (short)(iVar56 - iVar43 >> 3);
  param_2[0xe0] = (short)(iVar57 - iVar48 >> 3);
  param_2[0x30] = (short)(iVar7 - iVar29 >> 3);
  param_2[0x70] = (short)(iVar47 - iVar33 >> 3);
  param_2[0xb0] = (short)(iVar42 - iVar22 >> 3);
  param_2[0xf0] = (short)(iVar28 - iVar27 >> 3);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TM8uv_C(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = _VP8kclip1;
  bVar1 = *(byte *)(param_1 + -0x21);
  lVar5 = param_1;
  do {
    bVar2 = *(byte *)(lVar5 + -1);
    lVar4 = 0;
    do {
      *(undefined1 *)(lVar5 + lVar4) =
           *(undefined1 *)
            (lVar3 + ((ulong)bVar2 - (ulong)bVar1) + (ulong)*(byte *)(param_1 + -0x20 + lVar4));
      lVar4 = lVar4 + 1;
    } while (lVar4 != 8);
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != param_1 + 0x100);
  return;
}



void RD4_C(undefined1 *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  
  bVar1 = param_1[0x1f];
  bVar2 = param_1[-1];
  bVar3 = param_1[-0x21];
  bVar4 = param_1[-0x20];
  bVar5 = param_1[-0x1f];
  param_1[0x60] =
       (char)((int)((uint)bVar1 + (uint)(byte)param_1[0x3f] * 2 + 2 + (uint)(byte)param_1[0x5f]) >>
             2);
  uVar6 = (undefined1)((int)((byte)param_1[0x3f] + 2 + (uint)bVar2 + (uint)bVar1 * 2) >> 2);
  param_1[0x40] = uVar6;
  param_1[0x61] = uVar6;
  uVar6 = (undefined1)((int)(bVar1 + 2 + (uint)bVar3 + (uint)bVar2 * 2) >> 2);
  param_1[0x20] = uVar6;
  param_1[0x41] = uVar6;
  param_1[0x62] = uVar6;
  uVar6 = (undefined1)((int)(bVar2 + 2 + (uint)bVar4 + (uint)bVar3 * 2) >> 2);
  *param_1 = uVar6;
  param_1[0x21] = uVar6;
  param_1[0x42] = uVar6;
  param_1[99] = uVar6;
  uVar6 = (undefined1)((int)(bVar3 + 2 + (uint)bVar5 + (uint)bVar4 * 2) >> 2);
  param_1[1] = uVar6;
  param_1[0x22] = uVar6;
  param_1[0x43] = uVar6;
  uVar6 = (undefined1)((int)(bVar4 + 2 + (uint)(byte)param_1[-0x1e] + (uint)bVar5 * 2) >> 2);
  param_1[2] = uVar6;
  param_1[0x23] = uVar6;
  param_1[3] = (char)((int)(bVar5 + 2 + (uint)(byte)param_1[-0x1d] + (uint)(byte)param_1[-0x1e] * 2)
                     >> 2);
  return;
}



void LD4_C(undefined1 *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar6 = (uint)(byte)param_1[-0x1e];
  uVar5 = (uint)(byte)param_1[-0x1d];
  uVar4 = (uint)(byte)param_1[-0x1c];
  uVar3 = (uint)(byte)param_1[-0x1b];
  uVar2 = (uint)(byte)param_1[-0x1a];
  *param_1 = (char)((int)(uVar6 + 2 + (uint)(byte)param_1[-0x20] + (uint)(byte)param_1[-0x1f] * 2)
                   >> 2);
  uVar1 = (undefined1)((int)(uVar5 + 2 + (uint)(byte)param_1[-0x1f] + uVar6 * 2) >> 2);
  param_1[0x20] = uVar1;
  param_1[1] = uVar1;
  uVar1 = (undefined1)((int)(uVar4 + 2 + uVar6 + uVar5 * 2) >> 2);
  param_1[0x40] = uVar1;
  param_1[0x21] = uVar1;
  param_1[2] = uVar1;
  uVar1 = (undefined1)((int)(uVar3 + 2 + uVar5 + uVar4 * 2) >> 2);
  param_1[0x60] = uVar1;
  param_1[0x41] = uVar1;
  param_1[0x22] = uVar1;
  param_1[3] = uVar1;
  uVar1 = (undefined1)((int)(uVar2 + 2 + uVar4 + uVar3 * 2) >> 2);
  param_1[0x61] = uVar1;
  param_1[0x42] = uVar1;
  param_1[0x23] = uVar1;
  uVar1 = (undefined1)((int)((byte)param_1[-0x19] + 2 + uVar3 + uVar2 * 2) >> 2);
  param_1[0x62] = uVar1;
  param_1[0x43] = uVar1;
  param_1[99] = (char)((int)((uint)(byte)param_1[-0x19] * 3 + 2 + uVar2) >> 2);
  return;
}



void VR4_C(undefined4 *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  
  uVar6 = (uint)*(byte *)((long)param_1 + -0x1e);
  uVar7 = (uint)*(byte *)((long)param_1 + -1);
  uVar3 = (uint)*(byte *)((long)param_1 + -0x21);
  uVar5 = (uint)*(byte *)(param_1 + -8);
  uVar1 = param_1[-8];
  uVar2 = *(undefined4 *)((long)param_1 + -0x21);
  uVar4 = (uint)*(byte *)((long)param_1 + -0x1f);
  uVar8 = pavgb((char)uVar2,(char)uVar1);
  uVar9 = pavgb((char)((uint)uVar2 >> 8),(char)(uVar1 >> 8));
  uVar10 = pavgb((char)((uint)uVar2 >> 0x10),(char)(uVar1 >> 0x10));
  uVar11 = pavgb((char)((uint)uVar2 >> 0x18),(char)(uVar1 >> 0x18));
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  pavgb(0,0);
  *(char *)(param_1 + 0x18) =
       (char)((int)(uVar7 + 2 +
                   (uint)*(byte *)((long)param_1 + 0x3f) + (uint)*(byte *)((long)param_1 + 0x1f) * 2
                   ) >> 2);
  *param_1 = CONCAT13(uVar11,CONCAT12(uVar10,CONCAT11(uVar9,uVar8)));
  param_1[0x10] =
       (((uVar4 + uVar6 + 1 & 0x1fe) << 7 | (int)(uVar5 + uVar4 + 1) >> 1 & 0xffU) << 8 |
       (int)(uVar3 + uVar5 + 1) >> 1 & 0xffU) << 8 |
       (int)(uVar3 + 2 + (uint)*(byte *)((long)param_1 + 0x1f) + uVar7 * 2) >> 2 & 0xffU;
  uVar8 = (undefined1)((int)(uVar5 + 2 + uVar7 + uVar3 * 2) >> 2);
  *(undefined1 *)((long)param_1 + 0x61) = uVar8;
  *(undefined1 *)(param_1 + 8) = uVar8;
  uVar8 = (undefined1)((int)(uVar4 + 2 + uVar3 + uVar5 + uVar5) >> 2);
  *(undefined1 *)((long)param_1 + 0x62) = uVar8;
  *(undefined1 *)((long)param_1 + 0x21) = uVar8;
  uVar8 = (undefined1)((int)(uVar6 + 2 + uVar5 + uVar4 + uVar4) >> 2);
  *(undefined1 *)((long)param_1 + 99) = uVar8;
  *(undefined1 *)((long)param_1 + 0x22) = uVar8;
  *(char *)((long)param_1 + 0x23) = (char)((int)(uVar4 + uVar6 + uVar6 + 2 + (uVar1 >> 0x18)) >> 2);
  return;
}



void VL4_C(undefined1 *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  bVar1 = param_1[-0x1f];
  uVar10 = (uint)(byte)param_1[-0x1e];
  uVar9 = (uint)(byte)param_1[-0x1d];
  uVar8 = (uint)(byte)param_1[-0x1c];
  iVar4 = (uint)(byte)param_1[-0x20] + (uint)bVar1;
  uVar7 = (uint)(byte)param_1[-0x1b];
  *param_1 = (char)(iVar4 + 1 >> 1);
  uVar5 = (int)(uVar10 + uVar9 + 1) >> 1;
  uVar2 = (int)(bVar1 + uVar10 + 1) >> 1;
  param_1[2] = (char)uVar5;
  param_1[1] = (char)uVar2;
  param_1[0x20] = (char)((int)(uVar10 + 2 + iVar4 + (uint)bVar1) >> 2);
  uVar6 = (int)(uVar9 + uVar8 + 1) >> 1;
  param_1[3] = (char)uVar6;
  uVar3 = (undefined1)((int)(uVar9 + 2 + bVar1 + uVar10 + uVar10) >> 2);
  param_1[0x60] = uVar3;
  param_1[0x21] = uVar3;
  uVar3 = (undefined1)((int)(uVar8 + 2 + uVar10 + uVar9 + uVar9) >> 2);
  param_1[0x61] = uVar3;
  param_1[0x22] = uVar3;
  uVar3 = (undefined1)((int)(uVar7 + 2 + uVar9 + uVar8 + uVar8) >> 2);
  param_1[0x62] = uVar3;
  param_1[0x23] = uVar3;
  *(uint *)(param_1 + 0x40) =
       ((((byte)param_1[-0x1a] + 2 + uVar8 + uVar7 * 2) * 0x40 & 0xff00 | uVar6 & 0xff) << 8 |
       uVar5 & 0xff) << 8 | uVar2 & 0xff;
  param_1[99] = (char)((int)((byte)param_1[-0x19] + 2 + uVar7 + (uint)(byte)param_1[-0x1a] * 2) >> 2
                      );
  return;
}



void HU4_C(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 in_XMM0 [16];
  undefined1 auVar9 [16];
  
  bVar1 = *(byte *)((long)param_1 + 0x1f);
  bVar2 = *(byte *)((long)param_1 + 0x3f);
  bVar3 = *(byte *)((long)param_1 + 0x5f);
  uVar7 = (uint)bVar3;
  iVar4 = (uint)*(byte *)((long)param_1 + -1) + (uint)bVar1;
  uVar6 = (int)((uint)bVar1 + (uint)bVar2 + 1) >> 1 & 0xff;
  uVar8 = (int)(uVar7 + 2 + (uint)bVar1 + (uint)bVar2 + (uint)bVar2) >> 2 & 0xff;
  uVar5 = (int)(bVar2 + uVar7 + 1) >> 1 & 0xff;
  auVar9 = pshuflw(in_XMM0,ZEXT216(CONCAT11(bVar3,bVar3)),0);
  param_1[0x18] = auVar9._0_4_;
  *param_1 = ((uVar8 << 8 | uVar6) << 8 | (int)(bVar2 + 2 + iVar4 + (uint)bVar1) >> 2 & 0xffU) << 8
             | iVar4 + 1 >> 1 & 0xffU;
  uVar7 = (int)(bVar2 + uVar7 + 2 + uVar7 * 2) >> 2 & 0xff;
  param_1[8] = ((uVar7 << 8 | uVar5) << 8 | uVar8) << 8 | uVar6;
  param_1[0x10] = ((uint)CONCAT11(bVar3,bVar3) << 8 | uVar7) << 8 | uVar5;
  return;
}



void HD4_C(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  uVar5 = (uint)(byte)param_1[-8];
  bVar1 = *(byte *)((long)param_1 + 0x1f);
  bVar2 = *(byte *)((long)param_1 + -0x21);
  bVar3 = *(byte *)((long)param_1 + 0x3f);
  bVar4 = *(byte *)((long)param_1 + -1);
  iVar10 = (uint)*(byte *)((long)param_1 + 0x5f) + (uint)bVar3;
  uVar11 = (int)((uint)bVar4 + (uint)bVar2 + 1) >> 1 & 0xff;
  uVar6 = (int)(uVar5 + 2 + (uint)bVar4 + (uint)bVar2 + (uint)bVar2) >> 2 & 0xff;
  uVar7 = (int)(bVar2 + 2 + (uint)bVar4 + (uint)bVar1 + (uint)bVar4) >> 2 & 0xff;
  uVar9 = (int)((uint)bVar1 + (uint)bVar3 + 1) >> 1 & 0xff;
  *param_1 = (((uVar5 + (uint)*(byte *)((long)param_1 + -0x1f) * 2 + 2 +
                (uint)*(byte *)((long)param_1 + -0x1e) & 0x3fc) << 6 |
              (int)(*(byte *)((long)param_1 + -0x1f) + 2 + (uint)bVar2 + uVar5 * 2) >> 2 & 0xffU) <<
              8 | uVar6) << 8 | uVar11;
  uVar8 = (int)((uint)bVar4 + (uint)bVar1 + 1) >> 1 & 0xff;
  uVar5 = (int)(bVar4 + 2 + (uint)bVar1 + (uint)bVar3 + (uint)bVar1) >> 2 & 0xff;
  param_1[8] = ((uVar6 << 8 | uVar11) << 8 | uVar7) << 8 | uVar8;
  param_1[0x10] = ((uVar7 << 8 | uVar8) << 8 | uVar5) << 8 | uVar9;
  param_1[0x18] =
       ((uVar5 << 8 | uVar9) << 8 | (int)(bVar1 + 2 + iVar10 + (uint)bVar3) >> 2 & 0xffU) << 8 |
       iVar10 + 1 >> 1 & 0xffU;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FilterLoop26_C(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   int param_7)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  byte *pbVar14;
  int iVar15;
  long lVar16;
  uint uVar17;
  byte *pbVar18;
  uint uVar19;
  
  lVar9 = _VP8kabs0;
  lVar8 = _VP8kclip1;
  lVar13 = (long)param_2;
  param_4 = param_4 + -1;
  pbVar18 = param_1 + lVar13;
  pbVar14 = param_1 + -param_2;
  lVar1 = lVar13 * -4;
  do {
    uVar17 = (uint)*pbVar14;
    bVar2 = *param_1;
    uVar19 = (uint)param_1[lVar13 * -2];
    bVar3 = *pbVar18;
    lVar16 = (long)(int)(uVar19 - bVar3);
    if ((int)((uint)*(byte *)(lVar9 + lVar16) + (uint)*(byte *)(lVar9 + (int)(uVar17 - bVar2)) * 4)
        <= param_5 * 2 + 1) {
      bVar4 = pbVar18[lVar1];
      if ((((int)(uint)*(byte *)(lVar9 + (int)((uint)param_1[lVar1] - (uint)bVar4)) <= param_6) &&
          ((int)(uint)*(byte *)(lVar9 + (int)((uint)bVar4 - (uint)param_1[lVar13 * -2])) <= param_6)
          ) && (uVar10 = (uint)*(byte *)(lVar9 + (int)(uVar19 - *pbVar14)), (int)uVar10 <= param_6))
      {
        bVar5 = param_1[param_2 * 2];
        if (((int)(uint)*(byte *)(lVar9 + (int)((uint)param_1[param_2 * 3] - (uint)bVar5)) <=
             param_6) && ((int)(uint)*(byte *)(lVar9 + (int)((uint)bVar5 - (uint)bVar3)) <= param_6)
           ) {
          bVar6 = *(byte *)(lVar9 + (int)((uint)bVar3 - (uint)bVar2));
          if ((int)(uint)bVar6 <= param_6) {
            iVar11 = (bVar2 - uVar17) * 3 + (int)*(char *)(_VP8ksclip1 + lVar16);
            if ((param_7 < (int)uVar10) || (param_7 < (int)(uint)bVar6)) {
              cVar7 = *(char *)(_VP8ksclip2 + (iVar11 + 4 >> 3));
              *pbVar14 = *(byte *)(lVar8 + (int)((int)*(char *)(_VP8ksclip2 + (iVar11 + 3 >> 3)) +
                                                uVar17));
              *param_1 = *(byte *)(lVar8 + (int)((uint)bVar2 - (int)cVar7));
            }
            else {
              iVar11 = (int)*(char *)(_VP8ksclip1 + iVar11);
              iVar12 = iVar11 * 9 + 0x3f >> 7;
              iVar15 = iVar11 * 0x12 + 0x3f >> 7;
              iVar11 = iVar11 * 0x1b + 0x3f >> 7;
              pbVar18[lVar1] = *(byte *)(lVar8 + (int)((uint)bVar4 + iVar12));
              param_1[lVar13 * -2] = *(byte *)(lVar8 + (int)(uVar19 + iVar15));
              *pbVar14 = *(byte *)(lVar8 + (int)(uVar17 + iVar11));
              *param_1 = *(byte *)(lVar8 + (int)((uint)bVar2 - iVar11));
              *pbVar18 = *(byte *)(lVar8 + (int)((uint)bVar3 - iVar15));
              param_1[param_2 * 2] = *(byte *)(lVar8 + (int)((uint)bVar5 - iVar12));
            }
          }
        }
      }
    }
    param_4 = param_4 + -1;
    param_1 = param_1 + param_3;
    pbVar14 = pbVar14 + param_3;
    pbVar18 = pbVar18 + param_3;
  } while (param_4 != -1);
  return;
}



undefined8
VFilter16_C(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
           undefined8 param_5)

{
  FilterLoop26_C(param_1,param_2,1,0x10,param_3,param_4);
  return param_5;
}



undefined1  [16]
VFilter8_C(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,ulong param_6)

{
  undefined1 auVar1 [16];
  
  FilterLoop26_C(param_1,param_3,1,8,param_4,param_5);
  FilterLoop26_C(param_2,param_3,1,8,param_4,param_5);
  auVar1._8_8_ = param_6;
  auVar1._0_8_ = param_6 & 0xffffffff;
  return auVar1;
}



undefined1  [16]
HFilter8_C(undefined8 param_1,undefined8 param_2,ulong param_3,undefined4 param_4,undefined4 param_5
          ,ulong param_6)

{
  undefined1 auVar1 [16];
  
  FilterLoop26_C(param_1,1,param_3,8,param_4,param_5);
  FilterLoop26_C(param_2,1,param_3 & 0xffffffff,8,param_4,param_5);
  auVar1._8_8_ = param_6;
  auVar1._0_8_ = param_6 & 0xffffffff;
  return auVar1;
}



void DitherCombine8x8_C(long param_1,long param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x40;
  do {
    lVar3 = 0;
    do {
      uVar2 = ((int)(*(byte *)(param_1 + lVar3) - 0x78) >> 4) + (uint)*(byte *)(param_2 + lVar3);
      if (0xff < uVar2) {
        uVar2 = (int)~uVar2 >> 0x1f;
      }
      *(char *)(param_2 + lVar3) = (char)uVar2;
      lVar3 = lVar3 + 1;
    } while (lVar3 != 8);
    param_1 = param_1 + 8;
    param_2 = param_2 + param_3;
  } while (param_1 != lVar1);
  return;
}



void HE16_C(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  
  puVar1 = param_1;
  do {
    puVar2 = puVar1 + 8;
    uVar3 = CONCAT11(*(undefined1 *)((long)puVar1 + -1),*(undefined1 *)((long)puVar1 + -1));
    uVar4 = CONCAT22(uVar3,uVar3);
    *puVar1 = uVar4;
    puVar1[1] = uVar4;
    puVar1[2] = uVar4;
    puVar1[3] = uVar4;
    puVar1 = puVar2;
  } while (puVar2 != param_1 + 0x80);
  return;
}



void DC16_C(undefined4 *param_1)

{
  undefined4 *puVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 uVar7;
  undefined2 uVar6;
  
  iVar4 = 0x10;
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    iVar4 = iVar4 + (uint)*(byte *)((long)param_1 + lVar2 * 0x20 + -1) +
                    (uint)*(byte *)((long)param_1 + lVar2 + -0x20);
    lVar2 = lVar3;
  } while (lVar3 != 0x10);
  puVar1 = param_1 + 0x80;
  uVar5 = (undefined1)(iVar4 >> 5);
  uVar6 = CONCAT11(uVar5,uVar5);
  uVar7 = CONCAT22(uVar6,uVar6);
  do {
    *param_1 = uVar7;
    param_1[1] = uVar7;
    param_1[2] = uVar7;
    param_1[3] = uVar7;
    param_1 = param_1 + 8;
  } while (puVar1 != param_1);
  return;
}



void DC4_C(int *param_1)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  uVar4 = 4;
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    uVar4 = uVar4 + (uint)*(byte *)((long)param_1 + lVar2 * 0x20 + -1) +
                    (uint)*(byte *)((long)param_1 + lVar2 + -0x20);
    lVar2 = lVar3;
  } while (lVar3 != 4);
  piVar1 = param_1 + 0x20;
  do {
    *param_1 = (uVar4 >> 3 & 0xff) * 0x1010101;
    param_1 = param_1 + 8;
  } while (piVar1 != param_1);
  return;
}



void HE8uv_C(long *param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar1 = param_1;
  do {
    plVar2 = plVar1 + 4;
    *plVar1 = (ulong)*(byte *)((long)plVar1 + -1) * 0x101010101010101;
    plVar1 = plVar2;
  } while (plVar2 != param_1 + 0x20);
  return;
}



void DC8uv_C(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  
  iVar4 = 8;
  lVar2 = 0;
  do {
    lVar3 = lVar2 + 1;
    iVar4 = iVar4 + (uint)*(byte *)((long)param_1 + lVar2 * 0x20 + -1) +
                    (uint)*(byte *)((long)param_1 + lVar2 + -0x20);
    lVar2 = lVar3;
  } while (lVar3 != 8);
  plVar1 = param_1 + 0x20;
  do {
    *param_1 = (ulong)(iVar4 >> 4 & 0xff) * 0x101010101010101;
    param_1 = param_1 + 4;
  } while (param_1 != plVar1);
  return;
}



void VE16_C(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = param_1;
  do {
    uVar1 = param_1[-3];
    puVar3 = puVar2 + 4;
    *puVar2 = param_1[-4];
    puVar2[1] = uVar1;
    puVar2 = puVar3;
  } while (puVar3 != param_1 + 0x40);
  return;
}



void VE4_C(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint6 uVar12;
  ulong uVar13;
  undefined1 auVar14 [11];
  undefined1 auVar15 [13];
  ushort uVar16;
  ushort uVar28;
  ushort uVar29;
  ushort uVar30;
  undefined1 auVar17 [16];
  ushort uVar31;
  undefined1 auVar18 [16];
  undefined1 auVar21 [16];
  undefined1 uVar32;
  ushort uVar33;
  byte bVar36;
  byte bVar37;
  undefined1 uVar38;
  ushort uVar39;
  byte bVar40;
  ushort uVar41;
  ushort uVar42;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 uVar43;
  undefined1 uVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar19 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar20 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  
  uVar1 = param_1[-8];
  uVar2 = *(undefined4 *)((long)param_1 + -0x21);
  uVar3 = *(undefined4 *)((long)param_1 + -0x1f);
  bVar40 = (byte)((uint)uVar1 >> 0x18);
  bVar37 = (byte)((uint)uVar1 >> 0x10);
  bVar36 = (byte)((uint)uVar1 >> 8);
  bVar47 = (byte)((uint)uVar2 >> 0x18);
  bVar46 = (byte)((uint)uVar2 >> 0x10);
  bVar45 = (byte)((uint)uVar2 >> 8);
  bVar50 = (byte)((uint)uVar3 >> 0x18);
  bVar49 = (byte)((uint)uVar3 >> 0x10);
  bVar48 = (byte)((uint)uVar3 >> 8);
  auVar34._0_2_ = (ushort)bVar37 + (short)_LC1;
  auVar34._2_2_ = (ushort)bVar40 + _LC1._2_2_;
  auVar34[4] = (char)uVar1;
  auVar34[5] = 0;
  auVar34[6] = bVar36;
  auVar34[7] = 0;
  auVar34[8] = (char)uVar1;
  auVar34[9] = 0;
  auVar34[10] = bVar36;
  auVar34[0xb] = 0;
  auVar34[0xc] = bVar37;
  auVar34[0xd] = 0;
  auVar34[0xe] = bVar40;
  auVar34[0xf] = 0;
  auVar17 = psllw(ZEXT716(CONCAT16(bVar40,(uint6)CONCAT14(bVar37,CONCAT22((ushort)bVar36 +
                                                                          _LC1._2_2_,
                                                                          ((ushort)uVar1 & 0xff) +
                                                                          (short)_LC1)))),1);
  uVar16 = auVar17._0_2_ + ((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff);
  uVar28 = auVar17._2_2_ + (ushort)bVar45 + (ushort)bVar48;
  uVar29 = auVar17._4_2_ + (ushort)bVar46 + (ushort)bVar49;
  uVar30 = auVar17._6_2_ + (ushort)bVar47 + (ushort)bVar50;
  auVar35 = psllw(auVar34,1);
  uVar33 = auVar35._0_2_ + (ushort)bVar46 + (ushort)bVar49;
  uVar39 = auVar35._2_2_ + (ushort)bVar47 + (ushort)bVar50;
  uVar41 = auVar35._4_2_ + ((ushort)uVar2 & 0xff) + ((ushort)uVar3 & 0xff);
  uVar42 = auVar35._6_2_ + (ushort)bVar45 + (ushort)bVar48;
  uVar31 = uVar30 >> 2;
  uVar4 = CONCAT22(auVar17._8_2_ >> 2,uVar31);
  uVar12 = CONCAT24(auVar17._10_2_ >> 2,uVar4);
  auVar14._6_5_ = 0;
  auVar14._0_6_ = uVar12;
  uVar13 = CONCAT26(auVar17._12_2_ >> 2,uVar12);
  auVar15._8_5_ = 0;
  auVar15._0_8_ = uVar13;
  bVar36 = (byte)(uVar39 >> 10);
  uVar38 = (undefined1)(uVar39 >> 2);
  uVar44 = (undefined1)(uVar28 >> 2);
  uVar32 = (undefined1)(uVar33 >> 2);
  uVar43 = (undefined1)(uVar16 >> 2);
  auVar20._14_2_ =
       (undefined2)(CONCAT19((byte)(uVar42 >> 10),CONCAT18((byte)(uVar30 >> 10),uVar13)) >> 0x40);
  auVar20[0xd] = (char)(uVar42 >> 2);
  auVar20._0_13_ = auVar15 << 0x30;
  auVar19._12_4_ = (undefined4)(CONCAT37(auVar20._13_3_,CONCAT16((char)uVar31,uVar12)) >> 0x30);
  auVar19[0xb] = (byte)(uVar41 >> 10);
  auVar19._0_11_ = auVar14 << 0x30;
  auVar18._10_6_ =
       (undefined6)(CONCAT55(auVar19._11_5_,CONCAT14((byte)(uVar29 >> 10),uVar4)) >> 0x20);
  auVar18[9] = (char)(uVar41 >> 2);
  auVar18._0_9_ = (unkuint9)uVar4 << 0x30;
  auVar8._1_8_ = (long)(CONCAT73(auVar18._9_7_,CONCAT12((char)(uVar29 >> 2),uVar31)) >> 0x10);
  auVar8[0] = bVar36;
  auVar8._9_7_ = 0;
  auVar7._10_6_ = 0;
  auVar7._0_10_ = SUB1610(auVar8 << 0x38,6);
  auVar6._11_5_ = 0;
  auVar6._0_11_ = SUB1611(auVar7 << 0x30,5);
  auVar5._12_4_ = 0;
  auVar5._0_12_ = SUB1612(auVar6 << 0x28,4);
  auVar35._13_3_ = 0;
  auVar35._0_13_ = SUB1613(auVar5 << 0x20,3);
  auVar17._14_2_ = 0;
  auVar17._0_14_ = SUB1614(auVar35 << 0x18,2);
  auVar17 = auVar17 << 0x10;
  auVar27._0_14_ = auVar17._0_14_;
  auVar27[0xe] = bVar36;
  auVar27[0xf] = (byte)(uVar33 >> 10);
  auVar26._14_2_ = auVar27._14_2_;
  auVar26._0_13_ = auVar17._0_13_;
  auVar26[0xd] = (byte)(uVar16 >> 10);
  auVar25._13_3_ = auVar26._13_3_;
  auVar25._0_12_ = auVar17._0_12_;
  auVar25[0xc] = (byte)(uVar28 >> 10);
  auVar24._12_4_ = auVar25._12_4_;
  auVar24._0_11_ = auVar17._0_11_;
  auVar24[0xb] = uVar32;
  auVar23._11_5_ = auVar24._11_5_;
  auVar23._0_10_ = auVar17._0_10_;
  auVar23[10] = uVar38;
  auVar22._10_6_ = auVar23._10_6_;
  auVar22._0_9_ = auVar17._0_9_;
  auVar22[9] = uVar43;
  auVar11._2_7_ = auVar22._9_7_;
  auVar11[1] = uVar44;
  auVar11[0] = bVar36;
  auVar11._9_7_ = 0;
  auVar10._10_6_ = 0;
  auVar10._0_10_ = SUB1610(auVar11 << 0x38,6);
  auVar9._11_5_ = 0;
  auVar9._0_11_ = SUB1611(auVar10 << 0x30,5);
  auVar21._4_12_ = SUB1612(auVar9 << 0x28,4);
  auVar21[3] = uVar38;
  auVar21[2] = uVar32;
  auVar21[1] = uVar44;
  auVar21[0] = uVar43;
  uVar1 = auVar21._0_4_;
  *param_1 = uVar1;
  param_1[8] = uVar1;
  param_1[0x10] = uVar1;
  param_1[0x18] = uVar1;
  return;
}



void VE8uv_C(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_1;
  do {
    puVar2 = puVar1 + 4;
    *puVar1 = param_1[-4];
    puVar1 = puVar2;
  } while (puVar2 != param_1 + 0x20);
  return;
}



void TransformTwo_C(long param_1,long param_2,int param_3)

{
  TransformOne_C();
  if (param_3 == 0) {
    return;
  }
  TransformOne_C(param_1 + 0x20,param_2 + 4);
  return;
}



void HE4_C(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((long)param_1 + 0x1f);
  uVar1 = (uint)*(byte *)((long)param_1 + 0x3f);
  *param_1 = ((int)(uVar2 + 2 +
                   (uint)*(byte *)((long)param_1 + -0x21) + (uint)*(byte *)((long)param_1 + -1) * 2)
             >> 2) * 0x1010101;
  param_1[8] = ((int)(uVar1 + 2 + (uint)*(byte *)((long)param_1 + -1) + uVar2 * 2) >> 2) * 0x1010101
  ;
  param_1[0x10] = ((int)(*(byte *)((long)param_1 + 0x5f) + 2 + uVar2 + uVar1 * 2) >> 2) * 0x1010101;
  param_1[0x18] = ((int)((uint)*(byte *)((long)param_1 + 0x5f) * 3 + 2 + uVar1) >> 2) * 0x1010101;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TM16_C(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = _VP8kclip1;
  bVar1 = *(byte *)(param_1 + -0x21);
  lVar5 = param_1;
  do {
    bVar2 = *(byte *)(lVar5 + -1);
    lVar4 = 0;
    do {
      *(undefined1 *)(lVar5 + lVar4) =
           *(undefined1 *)
            (lVar3 + ((ulong)bVar2 - (ulong)bVar1) + (ulong)*(byte *)(param_1 + -0x20 + lVar4));
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x10);
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != param_1 + 0x200);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void TM4_C(long param_1)

{
  byte bVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = _VP8kclip1;
  bVar1 = *(byte *)(param_1 + -0x21);
  lVar5 = param_1;
  do {
    bVar2 = *(byte *)(lVar5 + -1);
    lVar4 = 0;
    do {
      *(undefined1 *)(lVar5 + lVar4) =
           *(undefined1 *)
            (lVar3 + ((ulong)bVar2 - (ulong)bVar1) + (ulong)*(byte *)(param_1 + -0x20 + lVar4));
      lVar4 = lVar4 + 1;
    } while (lVar4 != 4);
    lVar5 = lVar5 + 0x20;
  } while (lVar5 != param_1 + 0x80);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void DC16NoTopLeft_C(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = _UNK_00102f28;
  uVar2 = __LC2;
  puVar1 = param_1 + 0x40;
  do {
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1 = param_1 + 4;
  } while (param_1 != puVar1);
  return;
}



void DC8uvNoTopLeft_C(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = param_1 + 0x20;
  do {
    *param_1 = 0x8080808080808080;
    param_1 = param_1 + 4;
  } while (param_1 != puVar1);
  return;
}



void DC16NoLeft_C(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [15];
  undefined1 auVar4 [14];
  undefined1 auVar5 [15];
  undefined1 auVar6 [15];
  uint uVar7;
  undefined1 auVar8 [15];
  undefined1 auVar9 [14];
  undefined1 auVar10 [13];
  undefined1 auVar11 [13];
  undefined1 auVar12 [13];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [15];
  unkuint9 Var18;
  undefined1 auVar19 [11];
  undefined1 auVar20 [14];
  undefined1 auVar21 [13];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  uint6 uVar24;
  undefined1 uVar25;
  undefined4 uVar27;
  uint uVar28;
  undefined2 uVar26;
  
  auVar2 = *(undefined1 (*) [16])(param_1 + -8);
  puVar1 = param_1 + 0x80;
  uVar28 = CONCAT13(0,CONCAT12(auVar2[9],(ushort)auVar2[8]));
  auVar3[0xd] = 0;
  auVar3._0_13_ = auVar2._0_13_;
  auVar3[0xe] = auVar2[7];
  auVar5[0xc] = auVar2[6];
  auVar5._0_12_ = auVar2._0_12_;
  auVar5._13_2_ = auVar3._13_2_;
  auVar6[0xb] = 0;
  auVar6._0_11_ = auVar2._0_11_;
  auVar6._12_3_ = auVar5._12_3_;
  uVar7 = auVar6._11_4_;
  auVar8[10] = auVar2[5];
  auVar8._0_10_ = auVar2._0_10_;
  auVar8._11_4_ = uVar7;
  auVar13[9] = 0;
  auVar13._0_9_ = auVar2._0_9_;
  auVar13._10_5_ = auVar8._10_5_;
  auVar14[8] = auVar2[4];
  auVar14._0_8_ = auVar2._0_8_;
  auVar14._9_6_ = auVar13._9_6_;
  auVar17._7_8_ = 0;
  auVar17._0_7_ = auVar14._8_7_;
  Var18 = CONCAT81(SUB158(auVar17 << 0x40,7),auVar2[3]);
  auVar22._9_6_ = 0;
  auVar22._0_9_ = Var18;
  auVar19._1_10_ = SUB1510(auVar22 << 0x30,5);
  auVar19[0] = auVar2[2];
  auVar23._11_4_ = 0;
  auVar23._0_11_ = auVar19;
  auVar15[2] = auVar2[1];
  auVar15._0_2_ = auVar2._0_2_;
  auVar15._3_12_ = SUB1512(auVar23 << 0x20,3);
  auVar16._2_13_ = auVar15._2_13_;
  auVar16._0_2_ = auVar2._0_2_ & 0xff;
  auVar4._10_2_ = 0;
  auVar4._0_10_ = auVar16._0_10_;
  auVar4._12_2_ = (short)Var18;
  uVar24 = CONCAT42(auVar4._10_4_,auVar19._0_2_);
  auVar20._6_8_ = 0;
  auVar20._0_6_ = uVar24;
  auVar9._4_2_ = auVar15._2_2_;
  auVar9._0_4_ = auVar16._0_4_;
  auVar9._6_8_ = SUB148(auVar20 << 0x40,6);
  auVar10[0xc] = auVar2[0xb];
  auVar10._0_12_ = ZEXT112(auVar2[0xc]) << 0x40;
  auVar11._10_3_ = auVar10._10_3_;
  auVar11._0_10_ = (unkuint10)auVar2[10] << 0x40;
  auVar21._5_8_ = 0;
  auVar21._0_5_ = auVar11._8_5_;
  auVar12[4] = auVar2[9];
  auVar12._0_4_ = uVar28;
  auVar12[5] = 0;
  auVar12._6_7_ = SUB137(auVar21 << 0x40,6);
  uVar25 = (undefined1)
           ((int)((uint)auVar14._8_2_ + (auVar16._0_4_ & 0xffff) + (uVar28 & 0xffff) +
                  (uint)auVar2[0xc] +
                  (uVar7 >> 8 & 0xffff) + (int)uVar24 + auVar11._8_4_ + (uint)auVar2[0xe] +
                  (uint)auVar8._10_2_ + auVar9._4_4_ + auVar12._4_4_ + (uint)auVar2[0xd] +
                  (uVar7 >> 0x18) + (auVar4._10_4_ >> 0x10) + (uint)(uint3)(auVar10._10_3_ >> 0x10)
                  + (uint)auVar2[0xf] + 8) >> 4);
  uVar26 = CONCAT11(uVar25,uVar25);
  uVar27 = CONCAT22(uVar26,uVar26);
  do {
    *param_1 = uVar27;
    param_1[1] = uVar27;
    param_1[2] = uVar27;
    param_1[3] = uVar27;
    param_1 = param_1 + 8;
  } while (param_1 != puVar1);
  return;
}



void DC16NoTop_C(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined1 uVar5;
  undefined4 uVar7;
  undefined2 uVar6;
  
  pbVar4 = (byte *)((long)param_1 + -1);
  iVar3 = 8;
  do {
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 0x20;
    iVar3 = iVar3 + (uint)bVar2;
  } while (pbVar4 != (byte *)((long)param_1 + 0x1ff));
  puVar1 = param_1 + 0x80;
  uVar5 = (undefined1)(iVar3 >> 4);
  uVar6 = CONCAT11(uVar5,uVar5);
  uVar7 = CONCAT22(uVar6,uVar6);
  do {
    *param_1 = uVar7;
    param_1[1] = uVar7;
    param_1[2] = uVar7;
    param_1[3] = uVar7;
    param_1 = param_1 + 8;
  } while (puVar1 != param_1);
  return;
}



void DC8uvNoLeft_C(long *param_1)

{
  long *plVar1;
  ulong uVar2;
  undefined1 auVar3 [15];
  undefined1 auVar4 [14];
  undefined1 auVar5 [14];
  undefined1 auVar6 [15];
  undefined1 auVar7 [15];
  undefined1 auVar8 [15];
  undefined1 auVar9 [15];
  undefined1 auVar10 [15];
  undefined1 auVar11 [15];
  undefined1 auVar12 [14];
  undefined1 auVar13 [15];
  undefined1 auVar14 [15];
  undefined1 auVar15 [15];
  undefined1 auVar16 [15];
  undefined1 auVar17 [13];
  undefined1 auVar18 [13];
  undefined1 auVar19 [15];
  undefined1 auVar20 [15];
  undefined1 auVar21 [15];
  undefined1 auVar22 [15];
  undefined1 auVar23 [15];
  unkuint9 Var24;
  undefined1 auVar25 [11];
  undefined1 auVar26 [15];
  undefined1 auVar27 [15];
  undefined1 auVar28 [15];
  undefined1 auVar29 [15];
  undefined1 auVar30 [15];
  undefined1 auVar31 [14];
  undefined1 auVar32 [13];
  undefined1 auVar33 [15];
  undefined1 auVar34 [15];
  undefined1 auVar35 [15];
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  unkuint10 Var36;
  undefined2 uVar41;
  
  uVar2 = param_1[-4];
  uVar40 = (undefined1)(uVar2 >> 0x38);
  auVar6._8_6_ = 0;
  auVar6._0_8_ = uVar2;
  auVar6[0xe] = uVar40;
  uVar39 = (undefined1)(uVar2 >> 0x30);
  auVar8._8_4_ = 0;
  auVar8._0_8_ = uVar2;
  auVar8[0xc] = uVar39;
  auVar8._13_2_ = auVar6._13_2_;
  auVar10._8_4_ = 0;
  auVar10._0_8_ = uVar2;
  auVar10._12_3_ = auVar8._12_3_;
  uVar38 = (undefined1)(uVar2 >> 0x28);
  auVar13._8_2_ = 0;
  auVar13._0_8_ = uVar2;
  auVar13[10] = uVar38;
  auVar13._11_4_ = auVar10._11_4_;
  auVar15._8_2_ = 0;
  auVar15._0_8_ = uVar2;
  auVar15._10_5_ = auVar13._10_5_;
  uVar37 = (undefined1)(uVar2 >> 0x20);
  auVar19[8] = uVar37;
  auVar19._0_8_ = uVar2;
  auVar19._9_6_ = auVar15._9_6_;
  auVar23._7_8_ = 0;
  auVar23._0_7_ = auVar19._8_7_;
  Var24 = CONCAT81(SUB158(auVar23 << 0x40,7),(char)(uVar2 >> 0x18));
  auVar33._9_6_ = 0;
  auVar33._0_9_ = Var24;
  auVar25._1_10_ = SUB1510(auVar33 << 0x30,5);
  auVar25[0] = (char)(uVar2 >> 0x10);
  auVar34._11_4_ = 0;
  auVar34._0_11_ = auVar25;
  auVar20[2] = (char)(uVar2 >> 8);
  auVar20._0_2_ = (ushort)uVar2;
  auVar20._3_12_ = SUB1512(auVar34 << 0x20,3);
  auVar22[1] = 0;
  auVar22[0] = (byte)uVar2;
  auVar22._2_13_ = auVar20._2_13_;
  auVar3._8_6_ = 0;
  auVar3._0_8_ = uVar2;
  auVar3[0xe] = uVar40;
  auVar7._8_4_ = 0;
  auVar7._0_8_ = uVar2;
  auVar7[0xc] = uVar39;
  auVar7._13_2_ = auVar3._13_2_;
  auVar9._8_4_ = 0;
  auVar9._0_8_ = uVar2;
  auVar9._12_3_ = auVar7._12_3_;
  auVar11._8_2_ = 0;
  auVar11._0_8_ = uVar2;
  auVar11[10] = uVar38;
  auVar11._11_4_ = auVar9._11_4_;
  auVar14._8_2_ = 0;
  auVar14._0_8_ = uVar2;
  auVar14._10_5_ = auVar11._10_5_;
  auVar16[8] = uVar37;
  auVar16._0_8_ = uVar2;
  auVar16._9_6_ = auVar14._9_6_;
  auVar26._7_8_ = 0;
  auVar26._0_7_ = auVar16._8_7_;
  auVar27._8_7_ = 0;
  auVar27._0_8_ = SUB158(auVar26 << 0x40,7);
  auVar28._9_6_ = 0;
  auVar28._0_9_ = SUB159(auVar27 << 0x38,6);
  auVar29._10_5_ = 0;
  auVar29._0_10_ = SUB1510(auVar28 << 0x30,5);
  auVar30._11_4_ = 0;
  auVar30._0_11_ = SUB1511(auVar29 << 0x28,4);
  auVar35._12_3_ = 0;
  auVar35._0_12_ = SUB1512(auVar30 << 0x20,3);
  auVar21._2_13_ = SUB1513(auVar35 << 0x18,2);
  auVar21._0_2_ = (ushort)uVar2 & 0xff;
  Var36 = (unkuint10)auVar21._0_4_ << 0x40;
  uVar41 = (undefined2)Var24;
  auVar4._10_2_ = 0;
  auVar4._0_10_ = auVar22._0_10_;
  auVar4._12_2_ = uVar41;
  auVar5._10_2_ = 0;
  auVar5._0_10_ = auVar22._0_10_;
  auVar5._12_2_ = uVar41;
  auVar31._2_4_ = auVar5._10_4_;
  auVar31._0_2_ = auVar25._0_2_;
  auVar31._6_8_ = 0;
  auVar12._4_2_ = auVar20._2_2_;
  auVar12._0_4_ = auVar22._0_4_;
  auVar12._6_8_ = SUB148(auVar31 << 0x40,6);
  auVar17._10_2_ = 0;
  auVar17._0_10_ = Var36;
  auVar17[0xc] = uVar40;
  auVar32._2_3_ = auVar17._10_3_;
  auVar32._0_2_ = auVar7._12_2_;
  auVar32._5_8_ = 0;
  auVar18._10_2_ = 0;
  auVar18._0_10_ = Var36;
  auVar18[0xc] = uVar40;
  plVar1 = param_1 + 0x20;
  do {
    *param_1 = (ulong)((int)((auVar22._0_4_ & 0xffff) + (int)CONCAT42(auVar4._10_4_,auVar25._0_2_) +
                             (uint)auVar16._8_2_ + (int)CONCAT32(auVar18._10_3_,auVar7._12_2_) + 4 +
                            auVar12._4_4_ + (auVar4._10_4_ >> 0x10) +
                            (int)CONCAT72(SUB137(auVar32 << 0x40,6),auVar11._10_2_) +
                            (uint)(uint3)(auVar18._10_3_ >> 0x10)) >> 3 & 0xff) * 0x101010101010101;
    param_1 = param_1 + 4;
  } while (param_1 != plVar1);
  return;
}



void DC8uvNoTop_C(long *param_1)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  long *plVar4;
  
  pbVar3 = (byte *)((long)param_1 + -1);
  iVar2 = 4;
  do {
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 0x20;
    iVar2 = iVar2 + (uint)bVar1;
  } while (pbVar3 != (byte *)((long)param_1 + 0xff));
  plVar4 = param_1 + 0x20;
  do {
    *param_1 = (ulong)(iVar2 >> 3 & 0xff) * 0x101010101010101;
    param_1 = param_1 + 4;
  } while (plVar4 != param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SimpleHFilter16_C(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  
  lVar7 = _VP8ksclip2;
  lVar6 = _VP8ksclip1;
  lVar5 = _VP8kabs0;
  lVar4 = _VP8kclip1;
  iVar9 = 0x10;
  do {
    while( true ) {
      bVar1 = param_1[-1];
      bVar2 = *param_1;
      if ((int)((uint)*(byte *)(lVar5 + (int)((uint)param_1[-2] - (uint)param_1[1])) +
               (uint)*(byte *)(lVar5 + (int)((uint)bVar1 - (uint)bVar2)) * 4) <= param_3 * 2 + 1)
      break;
      param_1 = param_1 + param_2;
      iVar9 = iVar9 + -1;
      if (iVar9 == 0) {
        return;
      }
    }
    iVar8 = (int)*(char *)(lVar6 + (int)((uint)param_1[-2] - (uint)param_1[1])) +
            ((uint)bVar2 - (uint)bVar1) * 3;
    cVar3 = *(char *)(lVar7 + (iVar8 + 4 >> 3));
    param_1[-1] = *(byte *)(lVar4 + (int)((int)*(char *)(lVar7 + (iVar8 + 3 >> 3)) + (uint)bVar1));
    *param_1 = *(byte *)(lVar4 + (int)((uint)bVar2 - (int)cVar3));
    param_1 = param_1 + param_2;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  return;
}



void SimpleHFilter16i_C(long param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  
  lVar1 = param_1 + 0xc;
  do {
    param_1 = param_1 + 4;
    SimpleHFilter16_C(param_1,param_2,param_3);
  } while (param_1 != lVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void SimpleVFilter16_C(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  
  lVar7 = _VP8ksclip2;
  lVar6 = _VP8ksclip1;
  lVar5 = _VP8kabs0;
  lVar4 = _VP8kclip1;
  pbVar8 = param_1;
  do {
    while( true ) {
      bVar1 = pbVar8[-param_2];
      bVar2 = *pbVar8;
      if ((int)((uint)*(byte *)(lVar5 + (int)((uint)pbVar8[(long)param_2 * -2] -
                                             (uint)pbVar8[param_2])) +
               (uint)*(byte *)(lVar5 + (int)((uint)bVar1 - (uint)bVar2)) * 4) <= param_3 * 2 + 1)
      break;
      pbVar8 = pbVar8 + 1;
      if (param_1 + 0x10 == pbVar8) {
        return;
      }
    }
    pbVar9 = pbVar8 + 1;
    iVar10 = ((uint)bVar2 - (uint)bVar1) * 3 +
             (int)*(char *)(lVar6 + (int)((uint)pbVar8[(long)param_2 * -2] - (uint)pbVar8[param_2]))
    ;
    cVar3 = *(char *)(lVar7 + (iVar10 + 4 >> 3));
    pbVar8[-param_2] =
         *(byte *)(lVar4 + (int)((int)*(char *)(lVar7 + (iVar10 + 3 >> 3)) + (uint)bVar1));
    *pbVar8 = *(byte *)(lVar4 + (int)((uint)bVar2 - (int)cVar3));
    pbVar8 = pbVar9;
  } while (param_1 + 0x10 != pbVar9);
  return;
}



void SimpleVFilter16i_C(long param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = 3;
  do {
    param_1 = param_1 + param_2 * 4;
    SimpleVFilter16_C(param_1,param_2,param_3);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HFilter16i_C(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  byte *pbVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int local_4c;
  
  lVar10 = _VP8ksclip2;
  lVar9 = _VP8kabs0;
  lVar8 = _VP8kclip1;
  pbVar1 = param_1 + 0xc;
  do {
    param_1 = param_1 + 4;
    local_4c = 0x10;
    pbVar11 = param_1;
    do {
      while( true ) {
        uVar16 = (uint)pbVar11[-2];
        bVar2 = pbVar11[-1];
        bVar3 = *pbVar11;
        bVar4 = pbVar11[1];
        lVar13 = (long)(int)(uVar16 - bVar4);
        if ((((((int)((uint)*(byte *)(lVar9 + lVar13) +
                     (uint)*(byte *)(lVar9 + (int)((uint)bVar2 - (uint)bVar3)) * 4) <=
                param_3 * 2 + 1) &&
              ((int)(uint)*(byte *)(lVar9 + (int)((uint)pbVar11[-4] - (uint)pbVar11[-3])) <= param_4
              )) && ((int)(uint)*(byte *)(lVar9 + (int)((uint)pbVar11[-3] - (uint)pbVar11[-2])) <=
                     param_4)) &&
            ((bVar5 = *(byte *)(lVar9 + (int)(uVar16 - bVar2)), (int)(uint)bVar5 <= param_4 &&
             ((int)(uint)*(byte *)(lVar9 + (int)((uint)pbVar11[3] - (uint)pbVar11[2])) <= param_4)))
            ) && ((int)(uint)*(byte *)(lVar9 + (int)((uint)pbVar11[2] - (uint)bVar4)) <= param_4))
        break;
LAB_00101fda:
        pbVar11 = pbVar11 + param_2;
        local_4c = local_4c + -1;
        if (local_4c == 0) goto LAB_00101fe8;
      }
      bVar6 = *(byte *)(lVar9 + (int)((uint)bVar4 - (uint)bVar3));
      if (param_4 < (int)(uint)bVar6) goto LAB_00101fda;
      uVar14 = (uint)bVar3;
      uVar15 = (uint)bVar2;
      iVar12 = (uVar14 - uVar15) * 3;
      if (((int)(uint)bVar5 <= param_5) && ((int)(uint)bVar6 <= param_5)) {
        iVar17 = (int)*(char *)(lVar10 + (iVar12 + 4 >> 3));
        cVar7 = *(char *)(lVar10 + (iVar12 + 3 >> 3));
        iVar12 = iVar17 + 1 >> 1;
        pbVar11[-2] = *(byte *)(lVar8 + (int)(uVar16 + iVar12));
        pbVar11[-1] = *(byte *)(lVar8 + (int)(uVar15 + (int)cVar7));
        *pbVar11 = *(byte *)(lVar8 + (int)(uVar14 - iVar17));
        pbVar11[1] = *(byte *)(lVar8 + (int)((uint)bVar4 - iVar12));
        goto LAB_00101fda;
      }
      iVar12 = *(char *)(_VP8ksclip1 + lVar13) + iVar12;
      cVar7 = *(char *)(lVar10 + (iVar12 + 4 >> 3));
      pbVar11[-1] = *(byte *)(lVar8 + (int)((int)*(char *)(lVar10 + (iVar12 + 3 >> 3)) + uVar15));
      *pbVar11 = *(byte *)(lVar8 + (int)(uVar14 - (int)cVar7));
      pbVar11 = pbVar11 + param_2;
      local_4c = local_4c + -1;
    } while (local_4c != 0);
LAB_00101fe8:
    if (param_1 == pbVar1) {
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VFilter16i_C(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  byte *pbVar20;
  
  lVar9 = _VP8ksclip2;
  lVar8 = _VP8kabs0;
  lVar7 = _VP8kclip1;
  lVar6 = (long)param_2 * -3;
  pbVar10 = param_1 + 0x10;
  iVar13 = 3;
  do {
    pbVar20 = pbVar10 + param_2 * 4;
    param_1 = param_1 + param_2 * 4;
    pbVar17 = param_1 + -param_2;
    pbVar11 = param_1 + param_2;
    pbVar10 = param_1;
    do {
      uVar18 = (uint)pbVar11[lVar6];
      uVar16 = (uint)*pbVar17;
      bVar1 = *pbVar10;
      bVar2 = *pbVar11;
      lVar15 = (long)(int)(uVar18 - bVar2);
      if ((int)((uint)*(byte *)(lVar8 + lVar15) + (uint)*(byte *)(lVar8 + (int)(uVar16 - bVar1)) * 4
               ) <= param_3 * 2 + 1) {
        if (((((int)(uint)*(byte *)(lVar8 + (int)((uint)pbVar10[param_2 * -4] - (uint)pbVar10[lVar6]
                                                 )) <= param_4) &&
             ((int)(uint)*(byte *)(lVar8 + (int)((uint)pbVar10[lVar6] - (uint)pbVar11[lVar6])) <=
              param_4)) &&
            (bVar3 = *(byte *)(lVar8 + (int)(uVar18 - *pbVar17)), (int)(uint)bVar3 <= param_4)) &&
           (((int)(uint)*(byte *)(lVar8 + (int)((uint)pbVar10[param_2 * 3] -
                                               (uint)pbVar10[param_2 * 2])) <= param_4 &&
            ((int)(uint)*(byte *)(lVar8 + (int)((uint)pbVar10[param_2 * 2] - (uint)bVar2)) <=
             param_4)))) {
          bVar4 = *(byte *)(lVar8 + (int)((uint)bVar2 - (uint)bVar1));
          if ((int)(uint)bVar4 <= param_4) {
            uVar12 = (uint)bVar1;
            iVar14 = (uVar12 - uVar16) * 3;
            if ((param_5 < (int)(uint)bVar3) || (param_5 < (int)(uint)bVar4)) {
              iVar14 = *(char *)(_VP8ksclip1 + lVar15) + iVar14;
              cVar5 = *(char *)(lVar9 + (iVar14 + 4 >> 3));
              *pbVar17 = *(byte *)(lVar7 + (int)((int)*(char *)(lVar9 + (iVar14 + 3 >> 3)) + uVar16)
                                  );
              *pbVar10 = *(byte *)(lVar7 + (int)(uVar12 - (int)cVar5));
            }
            else {
              iVar19 = (int)*(char *)(lVar9 + (iVar14 + 4 >> 3));
              cVar5 = *(char *)(lVar9 + (iVar14 + 3 >> 3));
              iVar14 = iVar19 + 1 >> 1;
              pbVar11[lVar6] = *(byte *)(lVar7 + (int)(uVar18 + iVar14));
              *pbVar17 = *(byte *)(lVar7 + (int)(uVar16 + (int)cVar5));
              *pbVar10 = *(byte *)(lVar7 + (int)(uVar12 - iVar19));
              *pbVar11 = *(byte *)(lVar7 + (int)((uint)bVar2 - iVar14));
            }
          }
        }
      }
      pbVar10 = pbVar10 + 1;
      pbVar17 = pbVar17 + 1;
      pbVar11 = pbVar11 + 1;
    } while (pbVar10 != pbVar20);
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FilterLoop24_C(byte *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                   int param_7)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  byte *pbVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  
  lVar8 = _VP8kabs0;
  lVar7 = _VP8kclip1;
  lVar11 = (long)param_2;
  pbVar15 = param_1 + lVar11;
  param_4 = param_4 + -1;
  pbVar9 = param_1 + -param_2;
  do {
    bVar1 = *param_1;
    bVar2 = *pbVar15;
    uVar16 = (uint)param_1[lVar11 * -2];
    bVar3 = *pbVar9;
    lVar13 = (long)(int)(uVar16 - bVar2);
    if ((int)((uint)*(byte *)(lVar8 + lVar13) +
             (uint)*(byte *)(lVar8 + (int)((uint)bVar3 - (uint)bVar1)) * 4) <= param_5 * 2 + 1) {
      if (((((int)(uint)*(byte *)(lVar8 + (int)((uint)param_1[lVar11 * -4] -
                                               (uint)pbVar15[lVar11 * -4])) <= param_6) &&
           ((int)(uint)*(byte *)(lVar8 + (int)((uint)pbVar15[lVar11 * -4] -
                                              (uint)param_1[lVar11 * -2])) <= param_6)) &&
          (bVar4 = *(byte *)(lVar8 + (int)(uVar16 - bVar3)), (int)(uint)bVar4 <= param_6)) &&
         (((int)(uint)*(byte *)(lVar8 + (int)((uint)param_1[param_2 * 3] -
                                             (uint)param_1[param_2 * 2])) <= param_6 &&
          ((int)(uint)*(byte *)(lVar8 + (int)((uint)param_1[param_2 * 2] - (uint)bVar2)) <= param_6)
          ))) {
        bVar5 = *(byte *)(lVar8 + (int)((uint)bVar2 - (uint)bVar1));
        if ((int)(uint)bVar5 <= param_6) {
          uVar10 = (uint)bVar1;
          uVar14 = (uint)bVar3;
          iVar12 = (uVar10 - uVar14) * 3;
          if ((param_7 < (int)(uint)bVar4) || (param_7 < (int)(uint)bVar5)) {
            iVar12 = *(char *)(_VP8ksclip1 + lVar13) + iVar12;
            cVar6 = *(char *)(_VP8ksclip2 + (iVar12 + 4 >> 3));
            *pbVar9 = *(byte *)(lVar7 + (int)((int)*(char *)(_VP8ksclip2 + (iVar12 + 3 >> 3)) +
                                             uVar14));
            *param_1 = *(byte *)(lVar7 + (int)(uVar10 - (int)cVar6));
          }
          else {
            iVar17 = (int)*(char *)(_VP8ksclip2 + (iVar12 + 4 >> 3));
            cVar6 = *(char *)(_VP8ksclip2 + (iVar12 + 3 >> 3));
            iVar12 = iVar17 + 1 >> 1;
            param_1[lVar11 * -2] = *(byte *)(lVar7 + (int)(uVar16 + iVar12));
            *pbVar9 = *(byte *)(lVar7 + (int)(uVar14 + (int)cVar6));
            *param_1 = *(byte *)(lVar7 + (int)(uVar10 - iVar17));
            *pbVar15 = *(byte *)(lVar7 + (int)((uint)bVar2 - iVar12));
          }
        }
      }
    }
    param_4 = param_4 + -1;
    param_1 = param_1 + param_3;
    pbVar9 = pbVar9 + param_3;
    pbVar15 = pbVar15 + param_3;
  } while (param_4 != -1);
  return;
}



undefined1  [16]
VFilter8i_C(long param_1,long param_2,int param_3,undefined4 param_4,undefined4 param_5,
           ulong param_6)

{
  undefined1 auVar1 [16];
  
  FilterLoop24_C(param_1 + param_3 * 4,param_3,1,8,param_4,param_5);
  FilterLoop24_C(param_2 + param_3 * 4,param_3,1,8,param_4,param_5);
  auVar1._8_8_ = param_6;
  auVar1._0_8_ = param_6 & 0xffffffff;
  return auVar1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HFilter8i_C(long param_1,long param_2,int param_3,int param_4,int param_5,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  byte *pbVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int local_3c;
  
  FilterLoop24_C(param_1 + 4,1,param_3,8,param_4,param_5,param_6);
  lVar9 = _VP8ksclip2;
  lVar8 = _VP8kabs0;
  lVar7 = _VP8kclip1;
  pbVar10 = (byte *)(param_2 + 4);
  local_3c = 8;
  do {
    while( true ) {
      uVar15 = (uint)pbVar10[-2];
      bVar1 = pbVar10[-1];
      bVar2 = *pbVar10;
      bVar3 = pbVar10[1];
      lVar12 = (long)(int)(uVar15 - bVar3);
      if ((((((int)((uint)*(byte *)(lVar8 + lVar12) +
                   (uint)*(byte *)(lVar8 + (int)((uint)bVar1 - (uint)bVar2)) * 4) <= param_4 * 2 + 1
             ) && ((int)(uint)*(byte *)(lVar8 + (int)((uint)pbVar10[-4] - (uint)pbVar10[-3])) <=
                   param_5)) &&
           ((int)(uint)*(byte *)(lVar8 + (int)((uint)pbVar10[-3] - (uint)pbVar10[-2])) <= param_5))
          && ((bVar4 = *(byte *)(lVar8 + (int)(uVar15 - bVar1)), (int)(uint)bVar4 <= param_5 &&
              ((int)(uint)*(byte *)(lVar8 + (int)((uint)pbVar10[3] - (uint)pbVar10[2])) <= param_5))
             )) && ((int)(uint)*(byte *)(lVar8 + (int)((uint)pbVar10[2] - (uint)bVar3)) <= param_5))
      break;
LAB_001027d8:
      pbVar10 = pbVar10 + param_3;
      local_3c = local_3c + -1;
      if (local_3c == 0) {
        return;
      }
    }
    bVar5 = *(byte *)(lVar8 + (int)((uint)bVar3 - (uint)bVar2));
    if (param_5 < (int)(uint)bVar5) goto LAB_001027d8;
    uVar13 = (uint)bVar2;
    uVar14 = (uint)bVar1;
    iVar11 = (uVar13 - uVar14) * 3;
    if (((int)(uint)bVar4 <= (int)param_6) && ((int)(uint)bVar5 <= (int)param_6)) {
      iVar16 = (int)*(char *)(lVar9 + (iVar11 + 4 >> 3));
      cVar6 = *(char *)(lVar9 + (iVar11 + 3 >> 3));
      iVar11 = iVar16 + 1 >> 1;
      pbVar10[-2] = *(byte *)(lVar7 + (int)(uVar15 + iVar11));
      pbVar10[-1] = *(byte *)(lVar7 + (int)(uVar14 + (int)cVar6));
      *pbVar10 = *(byte *)(lVar7 + (int)(uVar13 - iVar16));
      pbVar10[1] = *(byte *)(lVar7 + (int)((uint)bVar3 - iVar11));
      goto LAB_001027d8;
    }
    iVar11 = *(char *)(_VP8ksclip1 + lVar12) + iVar11;
    cVar6 = *(char *)(lVar9 + (iVar11 + 4 >> 3));
    pbVar10[-1] = *(byte *)(lVar7 + (int)((int)*(char *)(lVar9 + (iVar11 + 3 >> 3)) + uVar14));
    *pbVar10 = *(byte *)(lVar7 + (int)(uVar13 - (int)cVar6));
    pbVar10 = pbVar10 + param_3;
    local_3c = local_3c + -1;
    if (local_3c == 0) {
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HFilter16_C(byte *param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  
  lVar9 = _VP8kabs0;
  lVar8 = _VP8kclip1;
  iVar16 = 0x10;
  do {
    while( true ) {
      uVar15 = (uint)param_1[-2];
      uVar14 = (uint)param_1[-1];
      bVar1 = *param_1;
      bVar2 = param_1[1];
      lVar13 = (long)(int)(uVar15 - bVar2);
      if ((int)((uint)*(byte *)(lVar9 + lVar13) + (uint)*(byte *)(lVar9 + (int)(uVar14 - bVar1)) * 4
               ) <= param_3 * 2 + 1) break;
LAB_00102a17:
      param_1 = param_1 + param_2;
      iVar16 = iVar16 + -1;
      if (iVar16 == 0) {
        return;
      }
    }
    bVar3 = param_1[-3];
    if (((param_4 < (int)(uint)*(byte *)(lVar9 + (int)((uint)param_1[-4] - (uint)bVar3))) ||
        (param_4 < (int)(uint)*(byte *)(lVar9 + (int)((uint)bVar3 - (uint)param_1[-2])))) ||
       (bVar4 = *(byte *)(lVar9 + (int)(uVar15 - param_1[-1])), param_4 < (int)(uint)bVar4))
    goto LAB_00102a17;
    bVar5 = param_1[2];
    if ((param_4 < (int)(uint)*(byte *)(lVar9 + (int)((uint)param_1[3] - (uint)bVar5))) ||
       (param_4 < (int)(uint)*(byte *)(lVar9 + (int)((uint)bVar5 - (uint)bVar2))))
    goto LAB_00102a17;
    bVar6 = *(byte *)(lVar9 + (int)((uint)bVar2 - (uint)bVar1));
    if (param_4 < (int)(uint)bVar6) goto LAB_00102a17;
    iVar10 = (bVar1 - uVar14) * 3 + (int)*(char *)(_VP8ksclip1 + lVar13);
    if (((int)(uint)bVar4 <= param_5) && ((int)(uint)bVar6 <= param_5)) {
      iVar10 = (int)*(char *)(_VP8ksclip1 + iVar10);
      iVar11 = iVar10 * 9 + 0x3f >> 7;
      iVar12 = iVar10 * 0x12 + 0x3f >> 7;
      iVar10 = iVar10 * 0x1b + 0x3f >> 7;
      param_1[-3] = *(byte *)(lVar8 + (int)((uint)bVar3 + iVar11));
      param_1[-2] = *(byte *)(lVar8 + (int)(uVar15 + iVar12));
      param_1[-1] = *(byte *)(lVar8 + (int)(uVar14 + iVar10));
      *param_1 = *(byte *)(lVar8 + (int)((uint)bVar1 - iVar10));
      param_1[1] = *(byte *)(lVar8 + (int)((uint)bVar2 - iVar12));
      param_1[2] = *(byte *)(lVar8 + (int)((uint)bVar5 - iVar11));
      goto LAB_00102a17;
    }
    cVar7 = *(char *)(_VP8ksclip2 + (iVar10 + 4 >> 3));
    param_1[-1] = *(byte *)(lVar8 + (int)((int)*(char *)(_VP8ksclip2 + (iVar10 + 3 >> 3)) + uVar14))
    ;
    *param_1 = *(byte *)(lVar8 + (int)((uint)bVar1 - (int)cVar7));
    param_1 = param_1 + param_2;
    iVar16 = iVar16 + -1;
    if (iVar16 == 0) {
      return;
    }
  } while( true );
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8DspInit(void)

{
  int iVar1;
  
  if ((code *)VP8DspInit_body_last_cpuinfo_used_0 == _VP8GetCPUInfo) {
    return;
  }
  VP8InitClipTables();
  VP8TransformWHT = TransformWHT_C;
  VP8Transform = TransformTwo_C;
  VP8TransformDC = TransformDC_C;
  VP8TransformAC3 = TransformAC3_C;
  VP8TransformUV = TransformUV_C;
  VP8TransformDCUV = TransformDCUV_C;
  VP8VFilter16 = VFilter16_C;
  VP8VFilter16i = VFilter16i_C;
  VP8HFilter16 = HFilter16_C;
  VP8VFilter8 = VFilter8_C;
  VP8VFilter8i = VFilter8i_C;
  VP8SimpleVFilter16 = SimpleVFilter16_C;
  VP8SimpleHFilter16 = SimpleHFilter16_C;
  VP8SimpleVFilter16i = SimpleVFilter16i_C;
  VP8SimpleHFilter16i = SimpleHFilter16i_C;
  VP8HFilter16i = HFilter16i_C;
  VP8HFilter8 = HFilter8_C;
  VP8HFilter8i = HFilter8i_C;
  VP8PredLuma4._0_8_ = DC4_C;
  VP8PredLuma4._8_8_ = TM4_C;
  VP8PredLuma4._16_8_ = VE4_C;
  VP8PredLuma4._24_8_ = HE4_C;
  VP8PredLuma4._32_8_ = RD4_C;
  VP8PredLuma4._40_8_ = VR4_C;
  VP8PredLuma4._48_8_ = LD4_C;
  VP8PredLuma4._56_8_ = VL4_C;
  VP8PredLuma4._64_8_ = HD4_C;
  VP8PredLuma4._72_8_ = HU4_C;
  VP8PredLuma16._48_8_ = DC16NoTopLeft_C;
  VP8PredLuma16._0_8_ = DC16_C;
  VP8PredLuma16._8_8_ = TM16_C;
  VP8PredLuma16._16_8_ = VE16_C;
  VP8PredLuma16._24_8_ = HE16_C;
  VP8PredLuma16._32_8_ = DC16NoTop_C;
  VP8PredLuma16._40_8_ = DC16NoLeft_C;
  VP8PredChroma8._48_8_ = DC8uvNoTopLeft_C;
  VP8PredChroma8._0_8_ = DC8uv_C;
  VP8PredChroma8._8_8_ = TM8uv_C;
  VP8DitherCombine8x8 = DitherCombine8x8_C;
  VP8PredChroma8._16_8_ = VE8uv_C;
  VP8PredChroma8._24_8_ = HE8uv_C;
  VP8PredChroma8._32_8_ = DC8uvNoTop_C;
  VP8PredChroma8._40_8_ = DC8uvNoLeft_C;
  if ((_VP8GetCPUInfo != (code *)0x0) && (iVar1 = (*_VP8GetCPUInfo)(0), iVar1 != 0)) {
    VP8DspInitSSE2();
  }
  VP8DspInit_body_last_cpuinfo_used_0 = _VP8GetCPUInfo;
  return;
}


