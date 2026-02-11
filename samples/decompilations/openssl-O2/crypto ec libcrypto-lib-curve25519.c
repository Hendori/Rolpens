
undefined8 load_8(undefined8 *param_1)

{
  return *param_1;
}



void fe_tobytes(undefined2 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  char local_44;
  char local_3c;
  char local_34;
  
  iVar2 = param_2[9];
  iVar3 = param_2[1];
  iVar4 = param_2[2];
  iVar5 = param_2[3];
  iVar6 = param_2[4];
  iVar7 = param_2[5];
  iVar8 = param_2[6];
  iVar9 = param_2[7];
  iVar10 = param_2[8];
  uVar11 = (((((((((((iVar2 * 0x13 + 0x1000000 >> 0x19) + *param_2 >> 0x1a) + iVar3 >> 0x19) + iVar4
                  >> 0x1a) + iVar5 >> 0x19) + iVar6 >> 0x1a) + iVar7 >> 0x19) + iVar8 >> 0x1a) +
              iVar9 >> 0x19) + iVar10 >> 0x1a) + iVar2 >> 0x19) * 0x13 + *param_2;
  uVar12 = uVar11 & 0x3ffffff;
  *param_1 = (short)uVar12;
  uVar23 = ((int)uVar11 >> 0x1a) + iVar3;
  uVar22 = ((int)uVar23 >> 0x19) + iVar4;
  uVar26 = uVar23 & 0x1ffffff;
  uVar11 = ((int)uVar22 >> 0x1a) + iVar5;
  uVar13 = uVar22 & 0x3ffffff;
  uVar1 = ((int)uVar11 >> 0x19) + iVar6;
  uVar14 = uVar11 & 0x1ffffff;
  uVar27 = uVar1 & 0x3ffffff;
  uVar15 = ((int)uVar1 >> 0x1a) + iVar7;
  uVar16 = uVar15 & 0x1ffffff;
  uVar21 = ((int)uVar15 >> 0x19) + iVar8;
  uVar25 = uVar21 & 0x3ffffff;
  uVar20 = ((int)uVar21 >> 0x1a) + iVar9;
  uVar24 = uVar20 & 0x1ffffff;
  uVar19 = ((int)uVar20 >> 0x19) + iVar10;
  uVar18 = uVar19 & 0x3ffffff;
  uVar15 = iVar2 + ((int)uVar19 >> 0x1a);
  *(char *)(param_1 + 1) = (char)(uVar12 >> 0x10);
  uVar17 = uVar15 & 0x1ffffff;
  *(char *)(param_1 + 2) = (char)((int)uVar26 >> 6);
  *(byte *)((long)param_1 + 3) = (char)uVar23 * '\x04' | (byte)(uVar12 >> 0x18);
  *(char *)((long)param_1 + 5) = (char)((int)uVar26 >> 0xe);
  *(byte *)(param_1 + 3) = (char)uVar22 * '\b' | (byte)((int)uVar26 >> 0x16);
  local_34 = (char)uVar15;
  param_1[8] = (short)uVar16;
  *(char *)((long)param_1 + 7) = (char)((int)uVar13 >> 5);
  *(char *)(param_1 + 4) = (char)((int)uVar13 >> 0xd);
  local_44 = (char)uVar11;
  *(byte *)((long)param_1 + 9) = local_44 << 5 | (byte)((int)uVar13 >> 0x15);
  *(char *)(param_1 + 5) = (char)((int)uVar14 >> 3);
  *(char *)((long)param_1 + 0xb) = (char)((int)uVar14 >> 0xb);
  local_3c = (char)uVar1;
  *(byte *)(param_1 + 6) = local_3c << 6 | (byte)((int)uVar14 >> 0x13);
  *(char *)((long)param_1 + 0xd) = (char)((int)uVar27 >> 2);
  *(char *)(param_1 + 7) = (char)((int)uVar27 >> 10);
  *(char *)((long)param_1 + 0xf) = (char)((int)uVar27 >> 0x12);
  *(char *)(param_1 + 9) = (char)(uVar16 >> 0x10);
  *(char *)(param_1 + 10) = (char)((int)uVar25 >> 7);
  *(byte *)((long)param_1 + 0x13) = (char)uVar21 * '\x02' | (byte)(uVar16 >> 0x18);
  *(char *)((long)param_1 + 0x15) = (char)((int)uVar25 >> 0xf);
  *(byte *)(param_1 + 0xb) = (char)uVar20 * '\b' | (byte)((int)uVar25 >> 0x17);
  *(char *)((long)param_1 + 0x17) = (char)((int)uVar24 >> 5);
  *(char *)(param_1 + 0xc) = (char)((int)uVar24 >> 0xd);
  *(byte *)((long)param_1 + 0x19) = (char)uVar19 * '\x10' | (byte)((int)uVar24 >> 0x15);
  *(char *)(param_1 + 0xd) = (char)((int)uVar18 >> 4);
  *(char *)((long)param_1 + 0x1b) = (char)((int)uVar18 >> 0xc);
  *(byte *)(param_1 + 0xe) = local_34 << 6 | (byte)((int)uVar18 >> 0x14);
  *(char *)((long)param_1 + 0x1d) = (char)((int)uVar17 >> 2);
  *(char *)((long)param_1 + 0x1f) = (char)((int)uVar17 >> 0x12);
  *(char *)(param_1 + 0xf) = (char)((int)uVar17 >> 10);
  return;
}



void fe_mul(int *param_1,int *param_2,int *param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  
  iVar7 = param_3[8];
  lVar21 = (long)*param_3;
  lVar22 = (long)param_3[1];
  lVar33 = (long)*param_2;
  lVar23 = (long)param_3[2];
  lVar24 = (long)param_3[3];
  lVar25 = (long)param_3[4];
  lVar26 = (long)param_3[5];
  lVar27 = (long)param_3[6];
  lVar28 = (long)param_3[7];
  lVar29 = (long)param_2[1];
  lVar17 = (long)(param_2[1] * 2);
  lVar30 = (long)param_2[2];
  lVar18 = (long)(param_3[9] * 0x13);
  lVar19 = (long)param_2[3];
  lVar8 = (long)(iVar7 * 0x13);
  lVar36 = (long)(param_2[3] * 2);
  lVar20 = (long)param_2[4];
  lVar37 = (long)param_2[5];
  lVar13 = (long)(param_3[7] * 0x13);
  lVar35 = (long)(param_3[6] * 0x13);
  lVar42 = (long)param_2[7];
  lVar38 = (long)(param_2[5] * 2);
  lVar14 = (long)(param_3[4] * 0x13);
  lVar16 = (long)param_2[6];
  lVar9 = (long)param_2[8];
  lVar39 = (long)(param_3[5] * 0x13);
  lVar43 = (long)(param_2[7] * 2);
  lVar10 = (long)param_2[9];
  lVar41 = (long)(param_2[9] * 2);
  lVar15 = (long)(param_3[3] * 0x13);
  lVar40 = (long)(param_3[2] * 0x13);
  lVar5 = lVar9 * lVar40 +
          lVar43 * lVar15 +
          lVar16 * lVar14 +
          lVar38 * lVar39 +
          lVar20 * lVar35 + lVar36 * lVar13 + lVar30 * lVar8 + lVar17 * lVar18 + lVar21 * lVar33 +
          (param_3[1] * 0x13) * lVar41;
  lVar6 = lVar35 * lVar9 +
          lVar43 * lVar13 +
          lVar8 * lVar16 +
          lVar38 * lVar18 +
          lVar21 * lVar20 + lVar22 * lVar36 + lVar23 * lVar30 + lVar24 * lVar17 + lVar25 * lVar33 +
          lVar39 * lVar41;
  uVar1 = lVar5 + 0x2000000;
  lVar11 = ((long)uVar1 >> 0x1a) +
           lVar40 * lVar10 +
           lVar15 * lVar9 +
           lVar42 * lVar14 +
           lVar39 * lVar16 +
           lVar37 * lVar35 +
           lVar13 * lVar20 + lVar19 * lVar8 + lVar18 * lVar30 + lVar21 * lVar29 + lVar22 * lVar33;
  uVar2 = lVar6 + 0x2000000;
  lVar40 = lVar11 + 0x1000000;
  lVar31 = ((long)uVar2 >> 0x1a) +
           lVar13 * lVar9 +
           lVar42 * lVar8 +
           lVar18 * lVar16 +
           lVar21 * lVar37 +
           lVar22 * lVar20 + lVar23 * lVar19 + lVar24 * lVar30 + lVar25 * lVar29 + lVar26 * lVar33 +
           lVar35 * lVar10;
  lVar3 = lVar31 + 0x1000000;
  lVar34 = (lVar40 >> 0x19) +
           lVar15 * lVar41 +
           lVar14 * lVar9 +
           lVar43 * lVar39 +
           lVar35 * lVar16 +
           lVar38 * lVar13 +
           lVar8 * lVar20 + lVar36 * lVar18 + lVar21 * lVar30 + lVar22 * lVar17 + lVar23 * lVar33;
  lVar15 = lVar34 + 0x2000000;
  lVar12 = (lVar3 >> 0x19) +
           lVar8 * lVar9 +
           lVar43 * lVar18 +
           lVar21 * lVar16 +
           lVar22 * lVar38 +
           lVar23 * lVar20 + lVar24 * lVar36 + lVar25 * lVar30 + lVar26 * lVar17 + lVar27 * lVar33 +
           lVar13 * lVar41;
  lVar4 = lVar12 + 0x2000000;
  lVar32 = (lVar15 >> 0x1a) +
           lVar39 * lVar9 +
           lVar42 * lVar35 +
           lVar13 * lVar16 +
           lVar37 * lVar8 +
           lVar18 * lVar20 + lVar21 * lVar19 + lVar22 * lVar30 + lVar23 * lVar29 + lVar24 * lVar33 +
           lVar14 * lVar10;
  lVar13 = lVar32 + 0x1000000;
  lVar35 = lVar18 * lVar9 +
           lVar21 * lVar42 +
           lVar22 * lVar16 +
           lVar23 * lVar37 +
           lVar24 * lVar20 + lVar25 * lVar19 + lVar26 * lVar30 + lVar27 * lVar29 + lVar28 * lVar33 +
           lVar8 * lVar10 + (lVar4 >> 0x1a);
  lVar39 = (lVar13 >> 0x19) + (lVar6 - (uVar2 & 0xfffffffffc000000));
  lVar6 = lVar35 + 0x1000000;
  lVar8 = lVar39 + 0x2000000;
  lVar17 = (lVar6 >> 0x19) +
           lVar43 * lVar22 +
           lVar23 * lVar16 +
           lVar38 * lVar24 +
           lVar25 * lVar20 + lVar36 * lVar26 + lVar27 * lVar30 + lVar17 * lVar28 + iVar7 * lVar33 +
           lVar21 * lVar9 + lVar18 * lVar41;
  lVar14 = lVar17 + 0x2000000;
  lVar10 = (lVar14 >> 0x1a) +
           lVar23 * lVar42 +
           lVar27 * lVar19 + lVar28 * lVar30 + lVar33 * param_3[9] + iVar7 * lVar29 +
           lVar20 * lVar26 + lVar25 * lVar37 + lVar16 * lVar24 + lVar9 * lVar22 + lVar21 * lVar10;
  lVar9 = lVar10 + 0x1000000;
  lVar16 = (lVar9 >> 0x19) * 0x13 + (lVar5 - (uVar1 & 0xfffffffffc000000));
  lVar5 = lVar16 + 0x2000000;
  *param_1 = (int)lVar16 - ((uint)lVar5 & 0xfc000000);
  param_1[2] = (int)lVar34 - ((uint)lVar15 & 0xfc000000);
  param_1[3] = (int)lVar32 - ((uint)lVar13 & 0xfe000000);
  param_1[1] = (int)(lVar5 >> 0x1a) + ((int)lVar11 - ((uint)lVar40 & 0xfe000000));
  param_1[6] = (int)lVar12 - ((uint)lVar4 & 0xfc000000);
  param_1[5] = (int)(lVar8 >> 0x1a) + ((int)lVar31 - ((uint)lVar3 & 0xfe000000));
  param_1[4] = (int)lVar39 - ((uint)lVar8 & 0xfc000000);
  param_1[7] = (int)lVar35 - ((uint)lVar6 & 0xfe000000);
  param_1[8] = (int)lVar17 - ((uint)lVar14 & 0xfc000000);
  param_1[9] = (int)lVar10 - ((uint)lVar9 & 0xfe000000);
  return;
}



void fe_sq(int *param_1,int *param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  
  iVar7 = param_2[5];
  iVar8 = param_2[6];
  lVar32 = (long)param_2[2];
  iVar9 = param_2[1];
  iVar10 = param_2[7];
  lVar36 = (long)iVar10;
  iVar11 = *param_2;
  iVar12 = param_2[9];
  lVar21 = (long)iVar7;
  lVar22 = (long)iVar8;
  lVar23 = (long)param_2[8];
  lVar18 = (long)(iVar11 * 2);
  lVar24 = (long)(iVar9 * 2);
  lVar37 = (long)(iVar7 * 2);
  lVar13 = (long)param_2[3];
  lVar34 = (long)(iVar10 * 2);
  lVar15 = (long)(iVar12 * 0x26);
  lVar35 = (long)(param_2[2] * 2);
  lVar27 = (long)(param_2[3] * 2);
  lVar14 = (long)param_2[4];
  lVar33 = (long)(param_2[8] * 0x13);
  lVar19 = (long)(param_2[4] * 2);
  lVar25 = (long)(iVar10 * 0x26);
  lVar20 = (long)(iVar8 * 0x13);
  lVar6 = lVar19 * lVar20 +
          lVar27 * lVar25 + lVar35 * lVar33 + lVar24 * lVar15 + (long)iVar11 * (long)iVar11 +
          (iVar7 * 0x26) * lVar21;
  lVar30 = (iVar8 * 2) * lVar33 +
           lVar37 * lVar15 + lVar32 * lVar32 + lVar24 * lVar27 + lVar18 * lVar14 + lVar25 * lVar36;
  uVar1 = lVar6 + 0x2000000;
  uVar2 = lVar30 + 0x2000000;
  lVar16 = ((long)uVar1 >> 0x1a) +
           lVar14 * lVar25 + lVar27 * lVar33 + lVar32 * lVar15 + iVar9 * lVar18 + lVar37 * lVar20;
  lVar3 = lVar16 + 0x1000000;
  lVar28 = ((long)uVar2 >> 0x1a) +
           lVar22 * lVar15 + lVar13 * lVar35 + lVar14 * lVar24 + lVar21 * lVar18 + lVar34 * lVar33;
  lVar4 = lVar28 + 0x1000000;
  lVar31 = (lVar3 >> 0x19) +
           lVar20 * iVar8 +
           lVar37 * lVar25 + lVar19 * lVar33 + iVar9 * lVar24 + lVar18 * lVar32 + lVar27 * lVar15;
  lVar20 = lVar31 + 0x2000000;
  lVar17 = (lVar4 >> 0x19) +
           lVar33 * lVar23 +
           lVar34 * lVar15 + lVar14 * lVar35 + lVar24 * lVar37 + lVar22 * lVar18 + lVar13 * lVar27;
  lVar5 = lVar17 + 0x2000000;
  lVar29 = (lVar20 >> 0x1a) +
           lVar37 * lVar33 + lVar14 * lVar15 + lVar32 * lVar24 + lVar13 * lVar18 + iVar8 * lVar25;
  lVar13 = lVar29 + 0x1000000;
  lVar33 = (lVar5 >> 0x1a) +
           lVar14 * lVar27 + lVar21 * lVar35 + lVar22 * lVar24 + lVar36 * lVar18 + lVar23 * lVar15;
  lVar26 = (lVar13 >> 0x19) + (lVar30 - (uVar2 & 0xfffffffffc000000));
  lVar25 = lVar33 + 0x1000000;
  lVar30 = lVar26 + 0x2000000;
  lVar32 = (lVar25 >> 0x19) +
           lVar14 * lVar14 + lVar37 * lVar27 + lVar22 * lVar35 + lVar34 * lVar24 + lVar23 * lVar18 +
           lVar15 * iVar12;
  lVar14 = lVar32 + 0x2000000;
  lVar18 = (lVar14 >> 0x1a) +
           lVar36 * lVar35 + lVar18 * iVar12 + lVar23 * lVar24 + lVar22 * lVar27 + lVar19 * lVar21;
  lVar15 = lVar18 + 0x1000000;
  lVar19 = (lVar15 >> 0x19) * 0x13 + (lVar6 - (uVar1 & 0xfffffffffc000000));
  lVar6 = lVar19 + 0x2000000;
  param_1[3] = (int)lVar29 - ((uint)lVar13 & 0xfe000000);
  *param_1 = (int)lVar19 - ((uint)lVar6 & 0xfc000000);
  param_1[6] = (int)lVar17 - ((uint)lVar5 & 0xfc000000);
  param_1[5] = (int)(lVar30 >> 0x1a) + ((int)lVar28 - ((uint)lVar4 & 0xfe000000));
  param_1[1] = (int)(lVar6 >> 0x1a) + ((int)lVar16 - ((uint)lVar3 & 0xfe000000));
  param_1[2] = (int)lVar31 - ((uint)lVar20 & 0xfc000000);
  param_1[4] = (int)lVar26 - ((uint)lVar30 & 0xfc000000);
  param_1[7] = (int)lVar33 - ((uint)lVar25 & 0xfe000000);
  param_1[8] = (int)lVar32 - ((uint)lVar14 & 0xfc000000);
  param_1[9] = (int)lVar18 - ((uint)lVar15 & 0xfe000000);
  return;
}



void fe_invert(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auStack_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  undefined1 local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fe_sq(auStack_f8);
  fe_sq(local_c8,auStack_f8);
  fe_sq(local_c8,local_c8);
  fe_mul(local_c8,param_2,local_c8);
  fe_mul(auStack_f8,auStack_f8,local_c8);
  iVar1 = 4;
  fe_sq(local_98,auStack_f8);
  fe_mul(local_c8,local_c8,local_98);
  fe_sq(local_98,local_c8);
  do {
    fe_sq(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 9;
  fe_mul(local_c8,local_98,local_c8);
  fe_sq(local_98,local_c8);
  do {
    fe_sq(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x13;
  fe_mul(local_98,local_98,local_c8);
  fe_sq(local_68,local_98);
  do {
    fe_sq(local_68,local_68);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 10;
  fe_mul(local_98,local_68,local_98);
  do {
    fe_sq(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x31;
  fe_mul(local_c8,local_98,local_c8);
  fe_sq(local_98,local_c8);
  do {
    fe_sq(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 99;
  fe_mul(local_98,local_98,local_c8);
  fe_sq(local_68,local_98);
  do {
    fe_sq(local_68,local_68);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x31;
  fe_mul(local_98,local_68,local_98);
  fe_sq(local_98,local_98);
  do {
    fe_sq(local_98,local_98);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 4;
  fe_mul(local_c8,local_98,local_c8);
  fe_sq(local_c8,local_c8);
  do {
    fe_sq(local_c8,local_c8);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  fe_mul(param_1,local_c8,auStack_f8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ge_p3_tobytes(long param_1,long param_2)

{
  long in_FS_OFFSET;
  undefined1 auStack_e8 [48];
  undefined1 local_b8 [48];
  undefined1 local_88 [48];
  char local_58 [40];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fe_invert(auStack_e8,param_2 + 0x50);
  fe_mul(local_b8,param_2,auStack_e8);
  fe_mul(local_88,param_2 + 0x28,auStack_e8);
  fe_tobytes(param_1,local_88);
  fe_tobytes(local_58,local_b8);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_58[0] << 7;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void slide(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  
  lVar3 = 0;
  do {
    *(byte *)(param_1 + lVar3) =
         (byte)((int)(uint)*(byte *)(param_2 + ((int)lVar3 >> 3)) >> ((byte)lVar3 & 7)) & 1;
    lVar3 = lVar3 + 1;
  } while (lVar3 != 0x100);
  iVar9 = 0;
  for (pcVar6 = (char *)(param_1 + 1); iVar8 = iVar9 + 1, pcVar6[-1] == '\0'; pcVar6 = pcVar6 + 1) {
    if (iVar8 == 0x100) {
      return;
    }
LAB_001013b0:
    iVar9 = iVar8;
  }
  if (iVar8 == 0x100) {
    return;
  }
  iVar5 = 1;
  pcVar7 = pcVar6;
  do {
    if (*pcVar7 != '\0') {
      cVar1 = pcVar6[-1];
      iVar2 = (int)*pcVar7 << ((byte)iVar5 & 0x1f);
      if (cVar1 + iVar2 < 0x10) {
        pcVar6[-1] = (char)iVar2 + cVar1;
        *pcVar7 = '\0';
      }
      else {
        if (cVar1 - iVar2 < -0xf) goto LAB_001013b0;
        pcVar6[-1] = cVar1 - (char)iVar2;
        pcVar4 = pcVar7;
        do {
          if (*pcVar4 == '\0') {
            *pcVar4 = '\x01';
            break;
          }
          *pcVar4 = '\0';
          pcVar4 = pcVar4 + 1;
        } while (pcVar7 + (ulong)(uint)((0xff - iVar9) - iVar5) + 1 != pcVar4);
      }
    }
    iVar5 = iVar5 + 1;
    if ((iVar5 == 7) || (pcVar7 = pcVar7 + 1, iVar5 == 0x101 - iVar8)) goto LAB_001013b0;
  } while( true );
}



void x25519_sc_reduce(byte *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  char local_80;
  
  uVar20 = (ulong)((uint)(((ulong)param_1[0x31] << 0x10 | (ulong)param_1[0x30] << 8 |
                          (ulong)param_1[0x2f]) >> 2) & 0x1fffff);
  uVar22 = (ulong)(*(uint *)(param_1 + 0x31) >> 7 & 0x1fffff);
  uVar18 = (ulong)(*(uint *)(param_1 + 0x3c) >> 3);
  uVar9 = (ulong)(*(uint *)(param_1 + 0x34) >> 4 & 0x1fffff);
  uVar3 = (ulong)((uint)(((ulong)param_1[0x39] << 0x10 | (ulong)param_1[0x38] << 8 |
                         (ulong)param_1[0x37]) >> 1) & 0x1fffff);
  uVar1 = (ulong)(*(uint *)(param_1 + 0x39) >> 6 & 0x1fffff);
  lVar19 = uVar18 * -0xa6f7d +
           (ulong)((uint)param_1[0x2b] << 8 | (param_1[0x2c] & 0x1f) << 0x10 | (uint)param_1[0x2a]);
  lVar4 = uVar3 * -0xa6f7d +
          uVar1 * 0x215d1 + uVar18 * -0xf39ad + (ulong)(*(uint *)(param_1 + 0x24) >> 6 & 0x1fffff);
  lVar5 = uVar22 * -0xa6f7d +
          uVar9 * 0x215d1 +
          uVar18 * 0x72d18 + (ulong)(*(uint *)(param_1 + 0x1f) >> 4 & 0x1fffff) + uVar1 * 0x9fb67 +
          uVar3 * -0xf39ad;
  lVar23 = uVar20 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 0xf) >> 6 & 0x1fffff);
  lVar30 = uVar20 * 0x215d1 +
           uVar22 * -0xf39ad +
           uVar3 * 0x72d18 +
           uVar1 * 0xa2c13 +
           (ulong)((uint)(((ulong)param_1[0x1b] << 8 | (ulong)param_1[0x1c] << 0x10 |
                          (ulong)param_1[0x1a]) >> 2) & 0x1fffff) + uVar9 * 0x9fb67;
  lVar10 = uVar20 * 0x9fb67 +
           uVar22 * 0x72d18 +
           uVar9 * 0xa2c13 +
           (ulong)((uint)param_1[0x16] << 8 | (param_1[0x17] & 0x1f) << 0x10 | (uint)param_1[0x15]);
  lVar21 = lVar23 + 0x100000 >> 0x15;
  lVar32 = uVar20 * 0x72d18 +
           (((ulong)param_1[0x14] << 0x10 | (ulong)param_1[0x13] << 8 | (ulong)param_1[0x12]) >> 3)
           + uVar22 * 0xa2c13 + lVar21;
  lVar11 = lVar30 + 0x100000 >> 0x15;
  lVar24 = lVar10 + 0x100000 >> 0x15;
  lVar8 = uVar20 * -0xa6f7d +
          uVar22 * 0x215d1 +
          uVar1 * 0x72d18 + uVar18 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 0x1c) >> 7 & 0x1fffff) +
          uVar3 * 0x9fb67 + uVar9 * -0xf39ad + lVar11;
  lVar7 = uVar20 * -0xf39ad +
          uVar22 * 0x9fb67 +
          uVar3 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 0x17) >> 5 & 0x1fffff) + uVar9 * 0x72d18 +
          lVar24;
  lVar12 = lVar5 + 0x100000 >> 0x15;
  lVar26 = uVar9 * -0xa6f7d +
           uVar3 * 0x215d1 +
           uVar18 * 0x9fb67 +
           (ulong)((uint)(((ulong)param_1[0x23] << 8 | (ulong)param_1[0x24] << 0x10 |
                          (ulong)param_1[0x22]) >> 1) & 0x1fffff) + uVar1 * -0xf39ad + lVar12;
  lVar13 = lVar4 + 0x100000 >> 0x15;
  lVar2 = uVar1 * -0xa6f7d +
          uVar18 * 0x215d1 +
          (((ulong)param_1[0x29] << 0x10 | (ulong)param_1[0x28] << 8 | (ulong)param_1[0x27]) >> 3) +
          lVar13;
  lVar14 = lVar19 + 0x100000 >> 0x15;
  lVar27 = (ulong)(*(uint *)(param_1 + 0x2c) >> 5 & 0x1fffff) + lVar14;
  lVar15 = lVar32 + 0x100000 >> 0x15;
  lVar16 = lVar7 + 0x100000 >> 0x15;
  lVar17 = lVar8 + 0x100000 >> 0x15;
  lVar6 = lVar5 + lVar12 * -0x200000 + lVar17;
  lVar25 = lVar2 + 0x100000 >> 0x15;
  lVar5 = lVar26 + 0x100000 >> 0x15;
  lVar12 = lVar4 + lVar13 * -0x200000 + lVar5;
  lVar26 = lVar26 + lVar5 * -0x200000;
  lVar4 = lVar19 + lVar14 * -0x200000 + lVar25;
  lVar2 = lVar2 + lVar25 * -0x200000;
  lVar25 = lVar27 * -0xa6f7d + lVar30 + lVar11 * -0x200000 + lVar16;
  lVar29 = lVar2 * -0xa6f7d +
           lVar4 * 0x215d1 + lVar10 + lVar24 * -0x200000 + lVar15 + lVar27 * -0xf39ad;
  lVar5 = lVar26 * -0xa6f7d +
          lVar12 * 0x215d1 +
          lVar2 * -0xf39ad + lVar4 * 0x9fb67 + lVar23 + lVar21 * -0x200000 + lVar27 * 0x72d18;
  lVar23 = lVar6 * 0xa2c13 +
           (ulong)((uint)param_1[1] << 8 | (param_1[2] & 0x1f) << 0x10 | (uint)*param_1);
  lVar30 = lVar6 * 0x9fb67 +
           lVar26 * 0x72d18 +
           lVar12 * 0xa2c13 +
           (ulong)((uint)(((ulong)param_1[6] << 8 | (ulong)param_1[7] << 0x10 | (ulong)param_1[5])
                         >> 2) & 0x1fffff);
  lVar33 = lVar6 * 0x215d1 +
           lVar26 * -0xf39ad +
           lVar2 * 0x72d18 + lVar4 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 10) >> 4 & 0x1fffff) +
           lVar12 * 0x9fb67;
  lVar10 = lVar23 + 0x100000 >> 0x15;
  lVar24 = lVar6 * 0x72d18 + lVar26 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 2) >> 5 & 0x1fffff) +
           lVar10;
  lVar11 = lVar30 + 0x100000 >> 0x15;
  lVar31 = lVar6 * -0xf39ad +
           lVar26 * 0x9fb67 +
           lVar2 * 0xa2c13 + (ulong)(*(uint *)(param_1 + 7) >> 7 & 0x1fffff) + lVar12 * 0x72d18 +
           lVar11;
  lVar13 = lVar33 + 0x100000 >> 0x15;
  lVar21 = lVar6 * -0xa6f7d +
           lVar26 * 0x215d1 +
           lVar12 * -0xf39ad +
           lVar2 * 0x9fb67 +
           lVar4 * 0x72d18 +
           lVar27 * 0xa2c13 +
           (ulong)((uint)(((ulong)param_1[0xe] << 8 | (ulong)param_1[0xf] << 0x10 |
                          (ulong)param_1[0xd]) >> 1) & 0x1fffff) + lVar13;
  lVar6 = lVar5 + 0x100000 >> 0x15;
  lVar2 = lVar12 * -0xa6f7d +
          lVar2 * 0x215d1 + lVar4 * -0xf39ad + lVar32 + lVar15 * -0x200000 + lVar27 * 0x9fb67 +
          lVar6;
  lVar12 = lVar29 + 0x100000 >> 0x15;
  lVar19 = lVar4 * -0xa6f7d + lVar7 + lVar16 * -0x200000 + lVar27 * 0x215d1 + lVar12;
  lVar7 = lVar25 + 0x100000 >> 0x15;
  lVar17 = lVar8 + lVar17 * -0x200000 + lVar7;
  lVar4 = lVar24 + 0x100000 >> 0x15;
  lVar8 = lVar31 + 0x100000 >> 0x15;
  lVar14 = lVar21 + 0x100000 >> 0x15;
  lVar15 = lVar2 + 0x100000 >> 0x15;
  lVar16 = lVar19 + 0x100000 >> 0x15;
  uVar1 = lVar17 + 0x100000;
  lVar26 = (long)uVar1 >> 0x15;
  lVar10 = lVar26 * 0xa2c13 + lVar23 + lVar10 * -0x200000;
  lVar23 = lVar10 >> 0x15;
  lVar28 = lVar26 * 0x72d18 + lVar24 + lVar4 * -0x200000 + lVar23;
  lVar24 = lVar28 >> 0x15;
  lVar32 = lVar26 * 0x9fb67 + lVar30 + lVar11 * -0x200000 + lVar4 + lVar24;
  lVar11 = lVar32 >> 0x15;
  lVar27 = lVar26 * -0xf39ad + lVar31 + lVar8 * -0x200000 + lVar11;
  lVar30 = lVar27 >> 0x15;
  lVar33 = lVar26 * 0x215d1 + lVar33 + lVar13 * -0x200000 + lVar8 + lVar30;
  lVar13 = lVar33 >> 0x15;
  lVar31 = lVar26 * -0xa6f7d + lVar21 + lVar14 * -0x200000 + lVar13;
  lVar8 = lVar31 >> 0x15;
  lVar4 = lVar5 + lVar6 * -0x200000 + lVar14 + lVar8;
  lVar14 = lVar4 >> 0x15;
  lVar2 = lVar2 + lVar15 * -0x200000 + lVar14;
  lVar21 = lVar2 >> 0x15;
  lVar29 = lVar29 + lVar12 * -0x200000 + lVar15 + lVar21;
  lVar26 = lVar29 >> 0x15;
  lVar6 = lVar19 + lVar16 * -0x200000 + lVar26;
  lVar19 = lVar6 >> 0x15;
  lVar15 = lVar25 + lVar7 * -0x200000 + lVar16 + lVar19;
  lVar16 = lVar15 >> 0x15;
  lVar5 = (lVar17 - (uVar1 & 0xffffffffffe00000)) + lVar16;
  lVar17 = lVar5 >> 0x15;
  lVar12 = lVar17 * 0xa2c13 + lVar10 + lVar23 * -0x200000;
  lVar10 = lVar12 >> 0x15;
  lVar7 = lVar17 * 0x72d18 + lVar28 + lVar24 * -0x200000 + lVar10;
  lVar12 = lVar12 + lVar10 * -0x200000;
  lVar24 = lVar17 * 0x9fb67 + lVar32 + lVar11 * -0x200000 + (lVar7 >> 0x15);
  *(short *)param_1 = (short)lVar12;
  lVar32 = lVar7 + (lVar7 >> 0x15) * -0x200000;
  lVar23 = lVar17 * -0xf39ad + lVar27 + lVar30 * -0x200000 + (lVar24 >> 0x15);
  lVar10 = lVar24 + (lVar24 >> 0x15) * -0x200000;
  lVar25 = lVar17 * 0x215d1 + lVar33 + lVar13 * -0x200000 + (lVar23 >> 0x15);
  lVar30 = lVar23 + (lVar23 >> 0x15) * -0x200000;
  lVar17 = lVar17 * -0xa6f7d + lVar31 + lVar8 * -0x200000 + (lVar25 >> 0x15);
  lVar11 = lVar25 + (lVar25 >> 0x15) * -0x200000;
  lVar4 = lVar4 + lVar14 * -0x200000 + (lVar17 >> 0x15);
  lVar13 = lVar17 + (lVar17 >> 0x15) * -0x200000;
  lVar2 = lVar2 + lVar21 * -0x200000 + (lVar4 >> 0x15);
  lVar8 = lVar4 + (lVar4 >> 0x15) * -0x200000;
  lVar21 = lVar29 + lVar26 * -0x200000 + (lVar2 >> 0x15);
  lVar14 = lVar2 + (lVar2 >> 0x15) * -0x200000;
  lVar26 = lVar21 >> 0x15;
  lVar6 = lVar6 + lVar19 * -0x200000 + lVar26;
  lVar21 = lVar21 + lVar26 * -0x200000;
  lVar15 = lVar15 + lVar16 * -0x200000 + (lVar6 >> 0x15);
  lVar19 = lVar6 + (lVar6 >> 0x15) * -0x200000;
  lVar16 = (ulong)((uint)lVar5 & 0x1fffff) + (lVar15 >> 0x15);
  lVar5 = lVar15 + (lVar15 >> 0x15) * -0x200000;
  local_80 = (char)lVar7;
  param_1[2] = local_80 << 5 | (byte)((ulong)lVar12 >> 0x10);
  param_1[3] = (byte)(lVar32 >> 3);
  param_1[4] = (byte)(lVar32 >> 0xb);
  param_1[5] = (byte)((int)lVar24 << 2) | (byte)(lVar32 >> 0x13);
  param_1[7] = (byte)((int)lVar23 << 7) | (byte)(lVar10 >> 0xe);
  param_1[6] = (byte)(lVar10 >> 6);
  param_1[8] = (byte)(lVar30 >> 1);
  param_1[10] = (byte)((int)lVar25 << 4) | (byte)(lVar30 >> 0x11);
  param_1[9] = (byte)(lVar30 >> 9);
  param_1[0xb] = (byte)(lVar11 >> 4);
  param_1[0xd] = (char)lVar17 * '\x02' | (byte)(lVar11 >> 0x14);
  param_1[0xc] = (byte)(lVar11 >> 0xc);
  param_1[0xf] = (byte)((int)lVar4 << 6) | (byte)(lVar13 >> 0xf);
  param_1[0xe] = (byte)(lVar13 >> 7);
  param_1[0x10] = (byte)(lVar8 >> 2);
  param_1[0x11] = (byte)(lVar8 >> 10);
  param_1[0x12] = (byte)((int)lVar2 << 3) | (byte)(lVar8 >> 0x12);
  param_1[0x14] = (byte)(lVar14 >> 0xd);
  param_1[0x13] = (byte)(lVar14 >> 5);
  *(short *)(param_1 + 0x15) = (short)lVar21;
  param_1[0x17] = (byte)((int)lVar6 << 5) | (byte)((ulong)lVar21 >> 0x10);
  param_1[0x18] = (byte)(lVar19 >> 3);
  param_1[0x19] = (byte)(lVar19 >> 0xb);
  param_1[0x1a] = (byte)((int)lVar15 << 2) | (byte)(lVar19 >> 0x13);
  param_1[0x1b] = (byte)(lVar5 >> 6);
  param_1[0x1c] = (byte)(lVar5 >> 0xe) | (byte)((int)lVar16 << 7);
  param_1[0x1d] = (byte)(lVar16 >> 1);
  param_1[0x1f] = (byte)(lVar16 >> 0x11);
  param_1[0x1e] = (byte)(lVar16 >> 9);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool hash_init_with_dom(EVP_MD_CTX *param_1,EVP_MD *param_2,char param_3,char param_4,void *param_5,
                       ulong param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 local_5a;
  undefined1 local_59;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined1 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  local_58 = __LC0;
  uStack_50 = _UNK_0010f258;
  local_48 = __LC1;
  uStack_40 = _UNK_0010f268;
  iVar1 = EVP_DigestInit_ex(param_1,param_2,(ENGINE *)0x0);
  if (iVar1 != 0) {
    bVar2 = true;
    if (param_3 == '\0') goto LAB_0010203d;
    if (param_6 < 0x100) {
      local_5a = param_4 != '\0';
      local_59 = (undefined1)param_6;
      iVar1 = EVP_DigestUpdate(param_1,&local_58,0x20);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestUpdate(param_1,&local_5a,2);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestUpdate(param_1,param_5,param_6);
          bVar2 = iVar1 != 0;
          goto LAB_0010203d;
        }
      }
    }
  }
  bVar2 = false;
LAB_0010203d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void cmov(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  
  lVar2 = 0;
  uVar3 = -(param_3 & 0xff);
  do {
    uVar1 = *(uint *)(param_1 + lVar2 * 4);
    *(uint *)(param_1 + lVar2 * 4) = (*(uint *)(param_2 + lVar2 * 4) ^ uVar1) & uVar3 ^ uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 10);
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0x28 + lVar2 * 4);
    *(uint *)(param_1 + 0x28 + lVar2 * 4) =
         (*(uint *)(param_2 + 0x28 + lVar2 * 4) ^ uVar1) & uVar3 ^ uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 10);
  lVar2 = 0;
  do {
    uVar1 = *(uint *)(param_1 + 0x50 + lVar2 * 4);
    *(uint *)(param_1 + 0x50 + lVar2 * 4) =
         (*(uint *)(param_2 + 0x50 + lVar2 * 4) ^ uVar1) & uVar3 ^ uVar1;
    lVar2 = lVar2 + 1;
  } while (lVar2 != 10);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void x25519_scalar_mult(undefined4 *param_1,ulong *param_2,uint *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong extraout_RDX;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qb;
  ulong local_278;
  ulong local_270;
  ulong local_268;
  ulong local_260;
  ulong local_258;
  ulong local_248 [2];
  undefined1 local_238 [16];
  long local_228;
  ulong local_220;
  undefined1 local_218 [16];
  undefined1 local_208 [16];
  ulong local_1f8;
  ulong local_1f0;
  ulong local_1e8 [6];
  ulong local_1b8 [2];
  undefined1 local_1a8 [16];
  long local_198;
  long local_188;
  long lStack_180;
  long local_178;
  long lStack_170;
  long local_168;
  long local_158;
  long lStack_150;
  long local_148;
  long lStack_140;
  long local_138;
  undefined1 local_128 [48];
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  undefined1 local_98 [48];
  ulong local_68;
  ulong uStack_60;
  ulong local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = x25519_fe64_eligible();
  if (iVar2 == 0) {
    local_58 = param_2[2];
    uStack_50._7_1_ = (byte)(param_2[3] >> 0x38);
    uVar13 = (ulong)*(byte *)((long)param_3 + 6) << 0x30;
    bVar1 = uStack_50._7_1_ & 0x7f | 0x40;
    uStack_60 = param_2[1];
    local_248[0] = __LC2;
    local_248[1] = _UNK_0010f278;
    local_68 = *param_2 & 0xfffffffffffffff8;
    uStack_50 = param_2[3] & 0x7fffffffffffffff | 0x4000000000000000;
    local_278 = (ulong)(byte)param_3[1] << 0x20 | (ulong)*(byte *)((long)param_3 + 5) << 0x28 |
                (ulong)*param_3 | uVar13 & 0x7ffffffffffff;
    local_270 = uVar13 >> 0x33 |
                ((ulong)*(byte *)((long)param_3 + 0xb) << 0x20 |
                 ((ulong)(byte)param_3[3] & 0x3f) << 0x28 | (ulong)*(uint *)((long)param_3 + 7)) <<
                5;
    local_268 = ((ulong)(byte)param_3[3] << 0x2d) >> 0x33 |
                ((ulong)*(byte *)((long)param_3 + 0x11) << 0x20 |
                 (ulong)*(byte *)((long)param_3 + 0x12) << 0x28 |
                 (ulong)*(uint *)((long)param_3 + 0xd) |
                ((ulong)*(byte *)((long)param_3 + 0x13) & 1) << 0x30) << 2;
    local_258 = ((ulong)*(byte *)((long)param_3 + 0x19) << 0x2f) >> 0x33 |
                ((ulong)*(byte *)((long)param_3 + 0x1e) << 0x20 |
                 ((ulong)*(byte *)((long)param_3 + 0x1f) & 0x7f) << 0x28 |
                (ulong)*(uint *)((long)param_3 + 0x1a)) << 4;
    local_260 = ((ulong)*(byte *)((long)param_3 + 0x13) << 0x32) >> 0x33 |
                ((ulong)(byte)param_3[6] << 0x20 |
                 ((ulong)*(byte *)((long)param_3 + 0x19) & 0xf) << 0x28 | (ulong)param_3[5]) << 7;
    iVar2 = 0xfe;
    local_238 = (undefined1  [16])0x0;
    local_1e8[2] = local_268;
    local_228 = 0;
    local_1f8 = 0;
    local_1e8[0] = local_278;
    local_1e8[3] = local_260;
    local_1e8[4] = local_258;
    local_198 = 0;
    local_1e8[1] = local_270;
    uVar12 = 0;
    local_218 = (undefined1  [16])0x0;
    local_208 = (undefined1  [16])0x0;
    local_1b8[0] = __LC2;
    local_1b8[1] = _UNK_0010f278;
    local_1a8 = (undefined1  [16])0x0;
    while( true ) {
      uVar3 = (int)(uint)bVar1 >> ((byte)iVar2 & 7);
      uVar13 = -(ulong)(uVar12 ^ uVar3 & 1);
      puVar6 = local_248;
      puVar8 = local_1e8;
      do {
        uVar5 = *puVar8;
        puVar4 = puVar6 + 1;
        uVar10 = (*puVar6 ^ uVar5) & uVar13;
        *puVar6 = *puVar6 ^ uVar10;
        *puVar8 = uVar5 ^ uVar10;
        puVar7 = (ulong *)local_218;
        puVar6 = puVar4;
        puVar9 = local_1b8;
        puVar8 = puVar8 + 1;
      } while (&local_220 != puVar4);
      do {
        uVar5 = *puVar9;
        puVar6 = puVar7 + 1;
        uVar10 = (*puVar7 ^ uVar5) & uVar13;
        *puVar7 = *puVar7 ^ uVar10;
        *puVar9 = uVar5 ^ uVar10;
        puVar7 = puVar6;
        puVar9 = puVar9 + 1;
      } while (&local_1f0 != puVar6);
      uVar12 = uVar3 & 1;
      local_188 = (local_1e8[0] + __LC3) - local_1b8[0];
      lStack_180 = (local_1e8[1] + _UNK_0010f288) - local_1b8[1];
      local_178 = (local_1e8[2] + __LC4) - local_1a8._0_8_;
      lStack_170 = (local_1e8[3] + _UNK_0010f298) - local_1a8._8_8_;
      local_168 = (local_1e8[4] + 0xffffffffffffe) - local_198;
      local_158 = (local_248[0] + __LC3) - local_218._0_8_;
      lStack_150 = (local_248[1] + _UNK_0010f288) - local_218._8_8_;
      local_138 = local_228 + 0xffffffffffffe;
      local_228 = local_228 + local_1f8;
      local_138 = local_138 - local_1f8;
      local_148 = (local_238._0_8_ + __LC4) - local_208._0_8_;
      lStack_140 = (local_238._8_8_ + _UNK_0010f298) - local_208._8_8_;
      local_248[0] = local_218._0_8_ + local_248[0];
      local_248[1] = local_218._8_8_ + local_248[1];
      local_238._8_8_ = local_208._8_8_ + local_238._8_8_;
      local_238._0_8_ = local_208._0_8_ + local_238._0_8_;
      local_218._0_8_ = local_1e8[0] + local_1b8[0];
      local_218._8_8_ = local_1e8[1] + local_1b8[1];
      local_208._0_8_ = local_1e8[2] + local_1a8._0_8_;
      local_208._8_8_ = local_1e8[3] + local_1a8._8_8_;
      local_1f8 = local_1e8[4] + local_198;
      x25519_fe51_mul(local_1b8,&local_188,local_248);
      x25519_fe51_mul(local_218,local_218,&local_158);
      x25519_fe51_sqr(&local_188,&local_158);
      x25519_fe51_sqr(&local_158,local_248);
      local_1e8[0] = local_218._0_8_ + local_1b8[0];
      local_1e8[1] = local_218._8_8_ + local_1b8[1];
      local_1e8[4] = local_198 + local_1f8;
      local_1f8 = (local_198 + 0xffffffffffffe) - local_1f8;
      local_1e8[2] = local_208._0_8_ + local_1a8._0_8_;
      local_1e8[3] = local_208._8_8_ + local_1a8._8_8_;
      local_218._8_8_ = (local_1b8[1] + _UNK_0010f288) - local_218._8_8_;
      local_218._0_8_ = (local_1b8[0] + __LC3) - local_218._0_8_;
      local_208._8_8_ = (local_1a8._8_8_ + _UNK_0010f298) - local_208._8_8_;
      local_208._0_8_ = (local_1a8._0_8_ + __LC4) - local_208._0_8_;
      x25519_fe51_mul(local_248,&local_158,&local_188);
      local_148 = (__LC4 + local_148) - local_178;
      lStack_140 = (_UNK_0010f298 + lStack_140) - lStack_170;
      local_138 = (local_138 + 0xffffffffffffe) - local_168;
      local_158 = (__LC3 + local_158) - local_188;
      lStack_150 = (_UNK_0010f288 + lStack_150) - lStack_180;
      x25519_fe51_sqr(local_218,local_218);
      x25519_fe51_mul121666(local_1b8,&local_158);
      x25519_fe51_sqr(local_1e8,local_1e8);
      local_188 = local_188 + local_1b8[0];
      lStack_180 = lStack_180 + local_1b8[1];
      local_168 = local_168 + local_198;
      local_178 = local_1a8._0_8_ + local_178;
      lStack_170 = local_1a8._8_8_ + lStack_170;
      x25519_fe51_mul(local_1b8,&local_278,local_218);
      x25519_fe51_mul(local_218,&local_158,&local_188);
      bVar16 = iVar2 == 0;
      iVar2 = iVar2 + -1;
      if (bVar16) break;
      bVar1 = *(byte *)((long)&local_68 + (long)(iVar2 >> 3));
    }
    iVar2 = 4;
    x25519_fe51_sqr(local_128,local_218);
    x25519_fe51_sqr(local_f8,local_128);
    x25519_fe51_sqr(local_f8,local_f8);
    x25519_fe51_mul(local_f8,local_218,local_f8);
    x25519_fe51_mul(local_128,local_128,local_f8);
    x25519_fe51_sqr(local_c8,local_128);
    x25519_fe51_mul(local_f8,local_f8,local_c8);
    x25519_fe51_sqr(local_c8,local_f8);
    do {
      x25519_fe51_sqr(local_c8,local_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 9;
    x25519_fe51_mul(local_f8,local_c8,local_f8);
    x25519_fe51_sqr(local_c8,local_f8);
    do {
      x25519_fe51_sqr(local_c8,local_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x13;
    x25519_fe51_mul(local_c8,local_c8,local_f8);
    x25519_fe51_sqr(local_98,local_c8);
    do {
      x25519_fe51_sqr(local_98,local_98);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 10;
    x25519_fe51_mul(local_c8,local_98,local_c8);
    do {
      x25519_fe51_sqr(local_c8,local_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x31;
    x25519_fe51_mul(local_f8,local_c8,local_f8);
    x25519_fe51_sqr(local_c8,local_f8);
    do {
      x25519_fe51_sqr(local_c8,local_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 99;
    x25519_fe51_mul(local_c8,local_c8,local_f8);
    x25519_fe51_sqr(local_98,local_c8);
    do {
      x25519_fe51_sqr(local_98,local_98);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x32;
    x25519_fe51_mul(local_c8,local_98,local_c8);
    do {
      x25519_fe51_sqr(local_c8,local_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 5;
    x25519_fe51_mul(local_f8,local_c8,local_f8);
    do {
      x25519_fe51_sqr(local_f8,local_f8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    x25519_fe51_mul(local_218,local_f8,local_128);
    x25519_fe51_mul(local_248,local_248,local_218);
    uVar13 = (((((local_248[0] + 0x13 >> 0x33) + local_248[1] >> 0x33) + local_238._0_8_ >> 0x33) +
               local_238._8_8_ >> 0x33) + local_228 >> 0x33) * 0x13 + local_248[0];
    uVar15 = uVar13 & 0x7ffffffffffff;
    *param_1 = (int)uVar15;
    uVar13 = (uVar13 >> 0x33) + local_248[1];
    uVar14 = uVar13 & 0x7ffffffffffff;
    uVar13 = (uVar13 >> 0x33) + local_238._0_8_;
    uVar5 = uVar13 & 0x7ffffffffffff;
    uVar10 = (uVar13 >> 0x33) + local_238._8_8_;
    uVar11 = uVar10 & 0x7ffffffffffff;
    uVar10 = (uVar10 >> 0x33) + local_228 & 0x7ffffffffffff;
    *(char *)(param_1 + 1) = (char)(uVar15 >> 0x20);
    *(char *)((long)param_1 + 5) = (char)(uVar15 >> 0x28);
    *(byte *)((long)param_1 + 6) = (char)uVar14 * '\b' | (byte)(uVar15 >> 0x30);
    *(char *)((long)param_1 + 7) = (char)(uVar14 >> 5);
    *(char *)(param_1 + 2) = (char)(uVar14 >> 0xd);
    *(char *)((long)param_1 + 9) = (char)(uVar14 >> 0x15);
    *(char *)((long)param_1 + 10) = (char)(uVar14 >> 0x1d);
    *(char *)((long)param_1 + 0xb) = (char)(uVar14 >> 0x25);
    *(byte *)(param_1 + 3) = (byte)(uint)(uVar14 >> 0x2d) | (byte)((int)uVar13 << 6);
    *(char *)((long)param_1 + 0xd) = (char)(uVar5 >> 2);
    *(char *)((long)param_1 + 0xe) = (char)(uVar5 >> 10);
    *(char *)((long)param_1 + 0xf) = (char)(uVar5 >> 0x12);
    *(char *)(param_1 + 4) = (char)(uVar5 >> 0x1a);
    *(char *)((long)param_1 + 0x11) = (char)(uVar5 >> 0x22);
    *(char *)((long)param_1 + 0x12) = (char)(uVar5 >> 0x2a);
    *(byte *)((long)param_1 + 0x13) = (byte)(uint)(uVar5 >> 0x32) | (char)uVar11 * '\x02';
    *(char *)(param_1 + 5) = (char)(uVar11 >> 7);
    *(char *)((long)param_1 + 0x15) = (char)(uVar11 >> 0xf);
    *(char *)((long)param_1 + 0x16) = (char)(uVar11 >> 0x17);
    *(char *)((long)param_1 + 0x17) = (char)(uVar11 >> 0x1f);
    *(char *)(param_1 + 6) = (char)(uVar11 >> 0x27);
    *(byte *)((long)param_1 + 0x19) = (byte)((int)uVar10 << 4) | (byte)(uint)(uVar11 >> 0x2f);
    *(char *)((long)param_1 + 0x1a) = (char)(uVar10 >> 4);
    *(char *)((long)param_1 + 0x1b) = (char)(uVar10 >> 0xc);
    *(char *)(param_1 + 7) = (char)(uVar10 >> 0x14);
    *(char *)((long)param_1 + 0x1d) = (char)(uVar10 >> 0x1c);
    *(char *)((long)param_1 + 0x1e) = (char)(uVar10 >> 0x24);
    *(char *)((long)param_1 + 0x1f) = (char)(uVar10 >> 0x2c);
    OPENSSL_cleanse(&local_68,0x20);
  }
  else {
    local_58 = param_2[2];
    uStack_60 = param_2[1];
    local_68 = *param_2 & 0xfffffffffffffff8;
    uStack_50 = param_2[3] & 0x7fffffffffffffff | 0x4000000000000000;
    uVar13 = load_8(0,param_3);
    local_278 = uVar13;
    uVar5 = load_8(param_3 + 2);
    local_270 = uVar5;
    uVar10 = load_8(param_3 + 4);
    local_268 = uVar10;
    local_260 = load_8(param_3 + 6);
    local_1e8[2] = uVar10;
    local_260 = local_260 & 0x7fffffffffffffff;
    local_1e8[0] = uVar13;
    iVar2 = 0xfe;
    local_1e8[3] = local_260;
    local_1e8[1] = uVar5;
    local_248[0] = __LC2;
    local_248[1] = _UNK_0010f278;
    local_238._8_8_ = extraout_XMM0_Qb;
    local_238._0_8_ = extraout_XMM0_Qa;
    local_218._8_8_ = extraout_XMM0_Qb;
    local_218._0_8_ = extraout_XMM0_Qa;
    local_208._8_8_ = extraout_XMM0_Qb;
    local_208._0_8_ = extraout_XMM0_Qa;
    local_1b8[0] = __LC2;
    local_1b8[1] = _UNK_0010f278;
    local_1a8._8_8_ = extraout_XMM0_Qb;
    local_1a8._0_8_ = extraout_XMM0_Qa;
    uVar13 = extraout_RDX;
    uVar12 = 0;
    while( true ) {
      uVar3 = (int)((uint)uVar13 & 0xff) >> ((byte)iVar2 & 7) & 1;
      uVar13 = -(ulong)(uVar12 ^ uVar3);
      puVar6 = local_1e8;
      puVar8 = local_248;
      do {
        puVar4 = puVar6 + 2;
        uVar11 = (*puVar6 ^ *puVar8) & uVar13;
        uVar14 = (puVar6[1] ^ puVar8[1]) & uVar13;
        uVar5 = *puVar6;
        uVar10 = puVar6[1];
        *puVar8 = *puVar8 ^ uVar11;
        puVar8[1] = puVar8[1] ^ uVar14;
        *puVar6 = uVar11 ^ uVar5;
        puVar6[1] = uVar14 ^ uVar10;
        puVar7 = (ulong *)local_218;
        puVar6 = puVar4;
        puVar9 = local_1b8;
        puVar8 = puVar8 + 2;
      } while (local_1e8 + 4 != puVar4);
      do {
        puVar6 = puVar7 + 2;
        uVar11 = (*puVar7 ^ *puVar9) & uVar13;
        uVar14 = (puVar7[1] ^ puVar9[1]) & uVar13;
        uVar5 = *puVar9;
        uVar10 = puVar9[1];
        *puVar7 = *puVar7 ^ uVar11;
        puVar7[1] = puVar7[1] ^ uVar14;
        *puVar9 = uVar11 ^ uVar5;
        puVar9[1] = uVar14 ^ uVar10;
        puVar7 = puVar6;
        puVar9 = puVar9 + 2;
      } while (puVar6 != &local_1f8);
      x25519_fe64_sub(&local_188,local_1e8,local_1b8);
      x25519_fe64_sub(&local_158,local_248,local_218);
      x25519_fe64_add(local_248,local_248,local_218);
      x25519_fe64_add(local_218,local_1e8,local_1b8);
      x25519_fe64_mul(local_1b8,local_248,&local_188);
      x25519_fe64_mul(local_218,local_218,&local_158);
      x25519_fe64_sqr(&local_188,&local_158);
      x25519_fe64_sqr(&local_158,local_248);
      x25519_fe64_add(local_1e8,local_1b8,local_218);
      x25519_fe64_sub(local_218,local_1b8,local_218);
      x25519_fe64_mul(local_248,&local_158,&local_188);
      x25519_fe64_sub(&local_158,&local_158,&local_188);
      x25519_fe64_sqr(local_218,local_218);
      x25519_fe64_mul121666(local_1b8,&local_158);
      x25519_fe64_sqr(local_1e8,local_1e8);
      x25519_fe64_add(&local_188,&local_188,local_1b8);
      x25519_fe64_mul(local_1b8,&local_278,local_218);
      x25519_fe64_mul(local_218,&local_158,&local_188);
      bVar16 = iVar2 == 0;
      iVar2 = iVar2 + -1;
      if (bVar16) break;
      uVar13 = (ulong)*(byte *)((long)&local_68 + (long)(iVar2 >> 3));
      uVar12 = uVar3;
    }
    iVar2 = 4;
    x25519_fe64_sqr(local_128,local_218);
    x25519_fe64_sqr(local_f8,local_128);
    x25519_fe64_sqr(local_f8,local_f8);
    x25519_fe64_mul(local_f8,local_218,local_f8);
    x25519_fe64_mul(local_128,local_128,local_f8);
    x25519_fe64_sqr(local_c8,local_128);
    x25519_fe64_mul(local_f8,local_f8,local_c8);
    x25519_fe64_sqr(local_c8,local_f8);
    do {
      x25519_fe64_sqr(local_c8,local_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 9;
    x25519_fe64_mul(local_f8,local_c8,local_f8);
    x25519_fe64_sqr(local_c8,local_f8);
    do {
      x25519_fe64_sqr(local_c8,local_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x13;
    x25519_fe64_mul(local_c8,local_c8,local_f8);
    x25519_fe64_sqr(local_98,local_c8);
    do {
      x25519_fe64_sqr(local_98,local_98);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 10;
    x25519_fe64_mul(local_c8,local_98,local_c8);
    do {
      x25519_fe64_sqr(local_c8,local_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x31;
    x25519_fe64_mul(local_f8,local_c8,local_f8);
    x25519_fe64_sqr(local_c8,local_f8);
    do {
      x25519_fe64_sqr(local_c8,local_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 99;
    x25519_fe64_mul(local_c8,local_c8,local_f8);
    x25519_fe64_sqr(local_98,local_c8);
    do {
      x25519_fe64_sqr(local_98,local_98);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 0x32;
    x25519_fe64_mul(local_c8,local_98,local_c8);
    do {
      x25519_fe64_sqr(local_c8,local_c8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    iVar2 = 5;
    x25519_fe64_mul(local_f8,local_c8,local_f8);
    do {
      x25519_fe64_sqr(local_f8,local_f8);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    x25519_fe64_mul(local_218,local_f8,local_128);
    x25519_fe64_mul(local_248,local_248,local_218);
    x25519_fe64_tobytes(param_1,local_248);
    OPENSSL_cleanse(&local_68,0x20);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void table_select(undefined8 *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined8 local_98 [4];
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 auStack_48 [5];
  long local_20;
  
  uVar4 = 0;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)param_1 = 1;
  param_1[9] = 0;
  uVar1 = param_3 + ((int)(char)param_3 >> 0x1f & param_3) * -2;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[0xe] = 0;
  *(undefined1 (*) [16])((long)param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_1 + 0x14) = (undefined1  [16])0x0;
  lVar3 = (long)param_2 * 0x3c0;
  *(undefined1 (*) [16])(param_1 + 7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  cmov(param_1,k25519Precomp + lVar3,((uVar1 ^ 1) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x107a18,((uVar1 ^ 2) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x107a90,((uVar1 ^ 3) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x107b08,((uVar1 ^ 4) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x107b80,((uVar1 ^ 5) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x107bf8,((uVar1 ^ 6) & 0xff) - 1 >> 0x1f);
  uVar2 = uVar1 ^ 8;
  cmov(param_1,lVar3 + 0x107c70,((uVar1 ^ 7) & 0xff) - 1 >> 0x1f);
  cmov(param_1,lVar3 + 0x107ce8,(uVar2 & 0xff) - 1 >> 0x1f);
  local_78 = param_1[9];
  local_98[0] = param_1[5];
  local_98[1] = param_1[6];
  local_98[2] = param_1[7];
  local_98[3] = param_1[8];
  local_70 = *param_1;
  uStack_68 = param_1[1];
  local_60 = param_1[2];
  uStack_58 = param_1[3];
  local_50 = param_1[4];
  lVar3 = 0x50;
  do {
    *(ulong *)((long)local_98 + lVar3) =
         CONCAT44((int)((ulong)uVar4 >> 0x20) -
                  (int)((ulong)*(undefined8 *)((long)param_1 + lVar3) >> 0x20),
                  (int)uVar4 - (int)*(undefined8 *)((long)param_1 + lVar3));
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x78);
  cmov(param_1,local_98,(uint)(int)(char)param_3 >> 0x1f);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ge_p3_to_cached(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = 0;
  do {
    *(int *)(param_1 + lVar1) = *(int *)(param_2 + lVar1) + *(int *)(param_2 + 0x28 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x28);
  do {
    *(int *)(param_1 + lVar1) = *(int *)(param_2 + lVar1) - *(int *)(param_2 + -0x28 + lVar1);
    lVar1 = lVar1 + 4;
  } while (lVar1 != 0x50);
  memmove((void *)(param_1 + 0x50),(void *)(param_2 + 0x50),0x28);
  fe_mul(param_1 + 0x78,param_2 + 0x78,d2);
  return;
}



void ge_p2_dbl(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  undefined8 *puVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  undefined8 *puVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long in_FS_OFFSET;
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fe_sq();
  puVar37 = (undefined8 *)(param_1 + 0x50);
  fe_sq(puVar37,param_2 + 0x28);
  iVar14 = *(int *)(param_2 + 0x6c);
  lVar27 = (long)iVar14;
  iVar15 = *(int *)(param_2 + 0x54);
  iVar16 = *(int *)(param_2 + 0x74);
  lVar34 = (long)*(int *)(param_2 + 0x58);
  lVar28 = (long)*(int *)(param_2 + 0x70);
  iVar17 = *(int *)(param_2 + 0x50);
  lVar18 = (long)*(int *)(param_2 + 0x5c);
  lVar32 = (long)(iVar15 * 2);
  lVar24 = (long)*(int *)(param_2 + 100);
  lVar29 = (long)(*(int *)(param_2 + 100) * 2);
  lVar33 = (long)(*(int *)(param_2 + 0x5c) * 2);
  lVar26 = (long)(iVar17 * 2);
  lVar19 = (long)*(int *)(param_2 + 0x60);
  lVar25 = (long)*(int *)(param_2 + 0x68);
  lVar36 = (long)(iVar14 * 2);
  lVar38 = (long)(*(int *)(param_2 + 0x58) * 2);
  lVar30 = (long)(iVar16 * 0x26);
  lVar40 = (long)(*(int *)(param_2 + 0x60) * 2);
  lVar35 = (long)(*(int *)(param_2 + 0x70) * 0x13);
  lVar31 = (long)(iVar14 * 0x26);
  lVar39 = (long)(*(int *)(param_2 + 0x68) * 0x13);
  lVar6 = (lVar33 * lVar31 + lVar38 * lVar35 + lVar32 * lVar30 + (long)iVar17 * (long)iVar17 +
           lVar40 * lVar39 + (*(int *)(param_2 + 100) * 0x26) * lVar24) * 2;
  uVar1 = lVar6 + 0x2000000;
  lVar5 = (lVar31 * lVar27 +
          (*(int *)(param_2 + 0x68) * 2) * lVar35 +
          lVar29 * lVar30 + lVar34 * lVar34 + lVar32 * lVar33 + lVar26 * lVar19) * 2;
  lVar7 = ((long)uVar1 >> 0x1a) +
          (lVar29 * lVar39 + lVar19 * lVar31 + lVar33 * lVar35 + lVar34 * lVar30 + iVar15 * lVar26)
          * 2;
  uVar2 = lVar5 + 0x2000000;
  lVar20 = lVar7 + 0x1000000;
  lVar8 = ((long)uVar2 >> 0x1a) +
          (lVar25 * lVar30 + lVar18 * lVar38 + lVar19 * lVar32 + lVar24 * lVar26 + lVar36 * lVar35)
          * 2;
  lVar3 = lVar8 + 0x1000000;
  lVar11 = (lVar20 >> 0x19) +
           (lVar39 * lVar25 +
           lVar29 * lVar31 + lVar40 * lVar35 + iVar15 * lVar32 + lVar26 * lVar34 + lVar33 * lVar30)
           * 2;
  lVar39 = lVar11 + 0x2000000;
  lVar9 = (lVar3 >> 0x19) +
          (lVar36 * lVar30 + lVar18 * lVar33 + lVar38 * lVar19 + lVar29 * lVar32 + lVar26 * lVar25 +
          lVar35 * lVar28) * 2;
  lVar4 = lVar9 + 0x2000000;
  lVar34 = (lVar39 >> 0x1a) +
           (lVar29 * lVar35 + lVar19 * lVar30 + lVar34 * lVar32 + lVar18 * lVar26 + lVar25 * lVar31)
           * 2;
  lVar35 = (lVar4 >> 0x1a) +
           (lVar19 * lVar33 + lVar24 * lVar38 + lVar25 * lVar32 + lVar27 * lVar26 + lVar28 * lVar30)
           * 2;
  lVar18 = lVar34 + 0x1000000;
  lVar31 = lVar35 + 0x1000000;
  lVar10 = (lVar18 >> 0x19) + (lVar5 - (uVar2 & 0xfffffffffc000000));
  lVar29 = (lVar31 >> 0x19) +
           (lVar19 * lVar19 + lVar29 * lVar33 + lVar38 * lVar25 + lVar36 * lVar32 + lVar28 * lVar26
           + lVar30 * iVar16) * 2;
  lVar5 = lVar10 + 0x2000000;
  lVar19 = lVar29 + 0x2000000;
  lVar25 = (lVar19 >> 0x1a) +
           (lVar25 * lVar33 + lVar26 * iVar16 + lVar28 * lVar32 + lVar27 * lVar38 + lVar40 * lVar24)
           * 2;
  lVar24 = lVar25 + 0x1000000;
  lVar26 = (lVar24 >> 0x19) * 0x13 + (lVar6 - (uVar1 & 0xfffffffffc000000));
  lVar6 = lVar26 + 0x2000000;
  *(uint *)(param_1 + 0x78) = (int)lVar26 - ((uint)lVar6 & 0xfc000000);
  *(uint *)(param_1 + 0x80) = (int)lVar11 - ((uint)lVar39 & 0xfc000000);
  *(uint *)(param_1 + 0x94) = (int)lVar35 - ((uint)lVar31 & 0xfe000000);
  *(uint *)(param_1 + 0x7c) = (int)(lVar6 >> 0x1a) + ((int)lVar7 - ((uint)lVar20 & 0xfe000000));
  *(uint *)(param_1 + 0x98) = (int)lVar29 - ((uint)lVar19 & 0xfc000000);
  *(uint *)(param_1 + 0x9c) = (int)lVar25 - ((uint)lVar24 & 0xfe000000);
  *(uint *)(param_1 + 0x84) = (int)lVar34 - ((uint)lVar18 & 0xfe000000);
  *(uint *)(param_1 + 0x88) = (int)lVar10 - ((uint)lVar5 & 0xfc000000);
  *(uint *)(param_1 + 0x8c) = (int)(lVar5 >> 0x1a) + ((int)lVar8 - ((uint)lVar3 & 0xfe000000));
  *(uint *)(param_1 + 0x90) = (int)lVar9 - ((uint)lVar4 & 0xfc000000);
  lVar20 = 0x28;
  do {
    *(int *)(param_1 + lVar20) = *(int *)(param_2 + lVar20) + *(int *)(param_2 + -0x28 + lVar20);
    lVar20 = lVar20 + 4;
  } while (lVar20 != 0x50);
  fe_sq(local_68,param_1 + 0x28);
  puVar23 = (undefined8 *)(param_1 + 0x78);
  puVar21 = puVar37;
  do {
    puVar22 = puVar21 + 1;
    puVar21[-5] = CONCAT44((int)((ulong)*puVar21 >> 0x20) + (int)((ulong)puVar21[-10] >> 0x20),
                           (int)*puVar21 + (int)puVar21[-10]);
    puVar21 = puVar22;
  } while (puVar23 != puVar22);
  do {
    puVar21 = puVar37 + 1;
    *puVar37 = CONCAT44((int)((ulong)*puVar37 >> 0x20) - (int)((ulong)puVar37[-10] >> 0x20),
                        (int)*puVar37 - (int)puVar37[-10]);
    puVar37 = puVar21;
  } while (puVar21 != puVar23);
  lVar20 = 0;
  do {
    uVar12 = *(undefined8 *)(param_1 + 0x28 + lVar20);
    uVar13 = *(undefined8 *)((long)local_68 + lVar20);
    *(ulong *)(param_1 + lVar20) =
         CONCAT44((int)((ulong)uVar13 >> 0x20) - (int)((ulong)uVar12 >> 0x20),
                  (int)uVar13 - (int)uVar12);
    lVar20 = lVar20 + 8;
  } while (lVar20 != 0x28);
  do {
    puVar37 = puVar23 + 1;
    *puVar23 = CONCAT44((int)((ulong)*puVar23 >> 0x20) - (int)((ulong)puVar23[-5] >> 0x20),
                        (int)*puVar23 - (int)puVar23[-5]);
    puVar23 = puVar37;
  } while (puVar37 != (undefined8 *)(param_1 + 0xa0));
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ge_madd(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = 0;
  do {
    *(int *)(param_1 + lVar3) = *(int *)(param_2 + lVar3) + *(int *)(param_2 + 0x28 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x28);
  puVar6 = (undefined8 *)(param_1 + 0x28);
  lVar3 = 0x28;
  do {
    *(int *)(param_1 + lVar3) = *(int *)(param_2 + lVar3) - *(int *)(param_2 + -0x28 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x50);
  puVar1 = (undefined8 *)(param_1 + 0x50);
  fe_mul(puVar1,param_1,param_3);
  fe_mul(puVar6,puVar6,param_3 + 0x28);
  fe_mul((undefined8 *)(param_1 + 0x78),param_3 + 0x50,param_2 + 0x78);
  lVar3 = 0;
  do {
    uVar2 = *(undefined8 *)(param_2 + 0x50 + lVar3);
    *(ulong *)((long)local_68 + lVar3) = CONCAT44((int)((ulong)uVar2 >> 0x20) << 1,(int)uVar2 << 1);
    lVar3 = lVar3 + 8;
    puVar4 = puVar1;
  } while (lVar3 != 0x28);
  do {
    puVar5 = puVar4 + 1;
    puVar4[-10] = CONCAT44((int)((ulong)*puVar4 >> 0x20) - (int)((ulong)puVar4[-5] >> 0x20),
                           (int)*puVar4 - (int)puVar4[-5]);
    puVar4 = puVar5;
  } while (puVar5 != (undefined8 *)(param_1 + 0x78));
  do {
    puVar4 = puVar6 + 1;
    *puVar6 = CONCAT44((int)((ulong)puVar6[5] >> 0x20) + (int)((ulong)*puVar6 >> 0x20),
                       (int)puVar6[5] + (int)*puVar6);
    puVar6 = puVar4;
  } while (puVar4 != puVar1);
  lVar3 = 0;
  do {
    uVar2 = *(undefined8 *)(param_1 + 0x78 + lVar3);
    *(ulong *)(param_1 + 0x50 + lVar3) =
         CONCAT44((int)((ulong)uVar2 >> 0x20) +
                  (int)((ulong)*(undefined8 *)((long)local_68 + lVar3) >> 0x20),
                  (int)uVar2 + (int)*(undefined8 *)((long)local_68 + lVar3));
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x28);
  lVar3 = 0;
  do {
    uVar2 = *(undefined8 *)(param_1 + 0x78 + lVar3);
    *(ulong *)(param_1 + 0x78 + lVar3) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)local_68 + lVar3) >> 0x20) -
                  (int)((ulong)uVar2 >> 0x20),
                  (int)*(undefined8 *)((long)local_68 + lVar3) - (int)uVar2);
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x28);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void ge_add(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_68 [5];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = 0;
  do {
    *(int *)(param_1 + lVar3) = *(int *)(param_2 + lVar3) + *(int *)(param_2 + 0x28 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x28);
  puVar6 = (undefined8 *)(param_1 + 0x28);
  lVar3 = 0x28;
  do {
    *(int *)(param_1 + lVar3) = *(int *)(param_2 + lVar3) - *(int *)(param_2 + -0x28 + lVar3);
    lVar3 = lVar3 + 4;
  } while (lVar3 != 0x50);
  puVar1 = (undefined8 *)(param_1 + 0x50);
  fe_mul(puVar1,param_1,param_3);
  fe_mul(puVar6,puVar6,param_3 + 0x28);
  fe_mul((undefined8 *)(param_1 + 0x78),param_3 + 0x78,param_2 + 0x78);
  fe_mul(param_1,param_2 + 0x50,param_3 + 0x50);
  lVar3 = 0;
  do {
    *(ulong *)((long)local_68 + lVar3) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_1 + lVar3) >> 0x20) << 1,
                  (int)*(undefined8 *)(param_1 + lVar3) << 1);
    lVar3 = lVar3 + 8;
    puVar4 = puVar1;
  } while (lVar3 != 0x28);
  do {
    puVar5 = puVar4 + 1;
    puVar4[-10] = CONCAT44((int)((ulong)*puVar4 >> 0x20) - (int)((ulong)puVar4[-5] >> 0x20),
                           (int)*puVar4 - (int)puVar4[-5]);
    puVar4 = puVar5;
  } while (puVar5 != (undefined8 *)(param_1 + 0x78));
  do {
    puVar4 = puVar6 + 1;
    *puVar6 = CONCAT44((int)((ulong)puVar6[5] >> 0x20) + (int)((ulong)*puVar6 >> 0x20),
                       (int)puVar6[5] + (int)*puVar6);
    puVar6 = puVar4;
  } while (puVar4 != puVar1);
  lVar3 = 0;
  do {
    uVar2 = *(undefined8 *)(param_1 + 0x78 + lVar3);
    *(ulong *)(param_1 + 0x50 + lVar3) =
         CONCAT44((int)((ulong)uVar2 >> 0x20) +
                  (int)((ulong)*(undefined8 *)((long)local_68 + lVar3) >> 0x20),
                  (int)uVar2 + (int)*(undefined8 *)((long)local_68 + lVar3));
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x28);
  lVar3 = 0;
  do {
    uVar2 = *(undefined8 *)(param_1 + 0x78 + lVar3);
    *(ulong *)(param_1 + 0x78 + lVar3) =
         CONCAT44((int)((ulong)*(undefined8 *)((long)local_68 + lVar3) >> 0x20) -
                  (int)((ulong)uVar2 >> 0x20),
                  (int)*(undefined8 *)((long)local_68 + lVar3) - (int)uVar2);
    lVar3 = lVar3 + 8;
  } while (lVar3 != 0x28);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined8 ge_frombytes_vartime(undefined8 *param_1,uint *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  long lVar29;
  long lVar30;
  undefined8 *puVar31;
  undefined8 uVar32;
  uint uVar33;
  undefined8 *puVar34;
  long lVar35;
  undefined8 *puVar36;
  undefined8 *puVar37;
  int iVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  long lVar43;
  long in_FS_OFFSET;
  undefined8 local_188 [6];
  undefined8 local_158 [6];
  undefined1 local_128 [48];
  undefined1 local_f8 [48];
  undefined8 local_c8 [6];
  undefined8 local_98 [6];
  byte local_68 [40];
  long local_40;
  
  uVar26 = param_2[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = param_1 + 5;
  bVar12 = *(byte *)((long)param_2 + 0xe);
  uVar24 = *param_2;
  bVar13 = *(byte *)((long)param_2 + 9);
  bVar14 = *(byte *)((long)param_2 + 7);
  lVar29 = ((ulong)*(byte *)((long)param_2 + 5) << 8 | (ulong)*(byte *)((long)param_2 + 6) << 0x10 |
           (ulong)(byte)param_2[1]) * 0x40;
  bVar15 = *(byte *)((long)param_2 + 0xf);
  bVar16 = *(byte *)((long)param_2 + 0xd);
  uVar25 = param_2[4];
  lVar41 = ((ulong)*(byte *)((long)param_2 + 0xb) << 8 | (ulong)(byte)param_2[3] << 0x10 |
           (ulong)*(byte *)((long)param_2 + 10)) * 8;
  uVar27 = param_2[5];
  bVar17 = *(byte *)((long)param_2 + 0x15);
  bVar18 = *(byte *)((long)param_2 + 0x16);
  bVar19 = *(byte *)((long)param_2 + 0x1b);
  bVar20 = *(byte *)((long)param_2 + 0x1f);
  bVar21 = *(byte *)((long)param_2 + 0x1a);
  uVar28 = param_2[7];
  lVar40 = ((ulong)(byte)param_2[6] << 8 | (ulong)*(byte *)((long)param_2 + 0x19) << 0x10 |
           (ulong)*(byte *)((long)param_2 + 0x17)) * 0x20;
  bVar22 = *(byte *)((long)param_2 + 0x1e);
  bVar23 = *(byte *)((long)param_2 + 0x1d);
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 10) = 1;
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  uVar33 = (uint)(((ulong)bVar22 << 8 | (ulong)bVar20 << 0x10 | (ulong)bVar23) << 2) & 0x1fffffc;
  lVar30 = (ulong)uVar33 + 0x1000000;
  lVar3 = lVar29 + 0x1000000;
  lVar35 = (ulong)(-(int)(lVar30 >> 0x19) & 0x13) + (ulong)uVar24;
  lVar4 = lVar41 + 0x1000000;
  lVar43 = (lVar3 >> 0x19) +
           ((ulong)(byte)uVar26 << 8 | (ulong)bVar13 << 0x10 | (ulong)bVar14) * 0x20;
  lVar5 = (ulong)uVar25 + 0x1000000;
  lVar10 = (lVar4 >> 0x19) + ((ulong)bVar12 << 8 | (ulong)bVar15 << 0x10 | (ulong)bVar16) * 4;
  lVar6 = lVar40 + 0x1000000;
  lVar7 = lVar35 + 0x2000000;
  lVar42 = (lVar5 >> 0x19) +
           ((ulong)bVar17 << 8 | (ulong)bVar18 << 0x10 | (ulong)(byte)uVar27) * 0x80;
  lVar8 = lVar43 + 0x2000000;
  lVar39 = (lVar6 >> 0x19) +
           ((ulong)bVar19 << 8 | (ulong)(byte)uVar28 << 0x10 | (ulong)bVar21) * 0x10;
  lVar9 = lVar10 + 0x2000000;
  *(uint *)((long)param_1 + 0x2c) =
       (int)(lVar7 >> 0x1a) + ((int)lVar29 - ((uint)lVar3 & 0xfe000000));
  lVar3 = lVar42 + 0x2000000;
  lVar29 = lVar39 + 0x2000000;
  *(uint *)(param_1 + 5) = (int)lVar35 - ((uint)lVar7 & 0xfc000000);
  *(uint *)(param_1 + 6) = (int)lVar43 - ((uint)lVar8 & 0xfc000000);
  *(uint *)((long)param_1 + 0x34) =
       (int)(lVar8 >> 0x1a) + ((int)lVar41 - ((uint)lVar4 & 0xfe000000));
  puVar31 = param_1 + 10;
  *(uint *)((long)param_1 + 0x3c) = (int)(lVar9 >> 0x1a) + (uVar25 - ((uint)lVar5 & 0xfe000000));
  *(uint *)(param_1 + 7) = (int)lVar10 - ((uint)lVar9 & 0xfc000000);
  *(uint *)((long)param_1 + 0x44) =
       (int)(lVar3 >> 0x1a) + ((int)lVar40 - ((uint)lVar6 & 0xfe000000));
  *(uint *)(param_1 + 8) = (int)lVar42 - ((uint)lVar3 & 0xfc000000);
  *(uint *)(param_1 + 9) = (int)lVar39 - ((uint)lVar29 & 0xfc000000);
  *(uint *)((long)param_1 + 0x4c) = (int)(lVar29 >> 0x1a) + (uVar33 - ((uint)lVar30 & 0xfe000000));
  fe_sq(local_188,puVar1);
  fe_mul(local_158,local_188,d);
  puVar2 = param_1 + 0xf;
  puVar34 = local_188;
  puVar36 = puVar31;
  do {
    uVar32 = *puVar36;
    puVar36 = puVar36 + 1;
    *puVar34 = CONCAT44((int)((ulong)*puVar34 >> 0x20) - (int)((ulong)uVar32 >> 0x20),
                        (int)*puVar34 - (int)uVar32);
    puVar34 = puVar34 + 1;
    puVar37 = local_158;
  } while (puVar2 != puVar36);
  do {
    uVar32 = *puVar31;
    puVar31 = puVar31 + 1;
    *puVar37 = CONCAT44((int)((ulong)*puVar37 >> 0x20) + (int)((ulong)uVar32 >> 0x20),
                        (int)*puVar37 + (int)uVar32);
    puVar37 = puVar37 + 1;
  } while (puVar2 != puVar31);
  fe_mul(local_128,local_188,local_158);
  fe_sq(local_f8,local_128);
  fe_sq(local_c8,local_f8);
  fe_sq(local_c8,local_c8);
  fe_mul(local_c8,local_128,local_c8);
  fe_mul(local_f8,local_f8,local_c8);
  fe_sq(local_f8,local_f8);
  fe_mul(local_f8,local_c8,local_f8);
  iVar38 = 4;
  fe_sq(local_c8,local_f8);
  do {
    fe_sq(local_c8,local_c8);
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  fe_mul(local_f8,local_c8,local_f8);
  iVar38 = 9;
  fe_sq(local_c8,local_f8);
  do {
    fe_sq(local_c8,local_c8);
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  iVar38 = 0x13;
  fe_mul(local_c8,local_c8,local_f8);
  fe_sq(local_98,local_c8);
  do {
    fe_sq(local_98,local_98);
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  iVar38 = 9;
  fe_mul(local_c8,local_98,local_c8);
  fe_sq(local_c8,local_c8);
  do {
    fe_sq(local_c8,local_c8);
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  fe_mul(local_f8,local_c8,local_f8);
  iVar38 = 0x31;
  fe_sq(local_c8,local_f8);
  do {
    fe_sq(local_c8,local_c8);
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  iVar38 = 99;
  fe_mul(local_c8,local_c8,local_f8);
  fe_sq(local_98,local_c8);
  do {
    fe_sq(local_98,local_98);
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  iVar38 = 0x31;
  fe_mul(local_c8,local_98,local_c8);
  fe_sq(local_c8,local_c8);
  do {
    fe_sq(local_c8,local_c8);
    iVar38 = iVar38 + -1;
  } while (iVar38 != 0);
  fe_mul(local_f8,local_c8,local_f8);
  fe_sq(local_f8,local_f8);
  fe_sq(local_f8,local_f8);
  fe_mul(param_1,local_f8,local_128);
  fe_mul(param_1,param_1,local_188);
  fe_sq(local_c8,param_1);
  fe_mul(local_c8,local_c8,local_158);
  lVar30 = 0;
  do {
    uVar32 = *(undefined8 *)((long)local_c8 + lVar30);
    uVar11 = *(undefined8 *)((long)local_188 + lVar30);
    *(ulong *)((long)local_98 + lVar30) =
         CONCAT44((int)((ulong)uVar32 >> 0x20) - (int)((ulong)uVar11 >> 0x20),
                  (int)uVar32 - (int)uVar11);
    lVar30 = lVar30 + 8;
  } while (lVar30 != 0x28);
  fe_tobytes(local_68,local_98);
  iVar38 = CRYPTO_memcmp(local_68,zero_1,0x20);
  if (iVar38 != 0) {
    lVar30 = 0;
    do {
      uVar32 = *(undefined8 *)((long)local_188 + lVar30);
      uVar11 = *(undefined8 *)((long)local_c8 + lVar30);
      *(ulong *)((long)local_98 + lVar30) =
           CONCAT44((int)((ulong)uVar32 >> 0x20) + (int)((ulong)uVar11 >> 0x20),
                    (int)uVar32 + (int)uVar11);
      lVar30 = lVar30 + 8;
    } while (lVar30 != 0x28);
    fe_tobytes(local_68,local_98);
    iVar38 = CRYPTO_memcmp(local_68,zero_1,0x20);
    if (iVar38 != 0) {
      uVar32 = 0xffffffff;
      goto LAB_00104287;
    }
    fe_mul(param_1,param_1,sqrtm1);
  }
  fe_tobytes(local_68,param_1);
  puVar31 = param_1;
  if (*(byte *)((long)param_2 + 0x1f) >> 7 != (local_68[0] & 1)) {
    do {
      puVar34 = puVar31 + 1;
      *puVar31 = CONCAT44(-(int)((ulong)*puVar31 >> 0x20),-(int)*puVar31);
      puVar31 = puVar34;
    } while (puVar1 != puVar34);
  }
  fe_mul(puVar2,param_1,puVar1);
  uVar32 = 0;
LAB_00104287:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar32;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void ge_scalarmult_base(undefined1 (*param_1) [16],undefined1 (*param_2) [16])

{
  undefined1 *puVar1;
  undefined1 (*pauVar2) [16];
  undefined1 *puVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  char cVar7;
  int iVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar20 [16];
  char cStack_229;
  undefined1 local_228 [128];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined1 local_128 [40];
  undefined1 local_100 [40];
  undefined1 local_d8 [40];
  undefined1 local_b0 [40];
  undefined1 local_88 [16];
  undefined1 local_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  undefined1 uStack_6a;
  undefined1 uStack_69;
  undefined1 local_68 [16];
  undefined1 local_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 uStack_4c;
  undefined1 uStack_4b;
  undefined1 uStack_4a;
  char acStack_49 [9];
  long local_40;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar10._0_2_ = *(ushort *)*param_2 >> 4;
  auVar10._2_2_ = *(ushort *)(*param_2 + 2) >> 4;
  auVar10._4_2_ = *(ushort *)(*param_2 + 4) >> 4;
  auVar10._6_2_ = *(ushort *)(*param_2 + 6) >> 4;
  auVar10._8_2_ = *(ushort *)(*param_2 + 8) >> 4;
  auVar10._10_2_ = *(ushort *)(*param_2 + 10) >> 4;
  auVar10._12_2_ = *(ushort *)(*param_2 + 0xc) >> 4;
  auVar10._14_2_ = *(ushort *)(*param_2 + 0xe) >> 4;
  auVar10 = auVar10 & __LC6;
  auVar12 = *param_2 & __LC6;
  local_78 = auVar12[8];
  uStack_77 = auVar10[8];
  uStack_76 = auVar12[9];
  uStack_75 = auVar10[9];
  uStack_74 = auVar12[10];
  uStack_73 = auVar10[10];
  uStack_72 = auVar12[0xb];
  uStack_71 = auVar10[0xb];
  uStack_70 = auVar12[0xc];
  uStack_6f = auVar10[0xc];
  uStack_6e = auVar12[0xd];
  uStack_6d = auVar10[0xd];
  uStack_6c = auVar12[0xe];
  uStack_6b = auVar10[0xe];
  uStack_6a = auVar12[0xf];
  uStack_69 = auVar10[0xf];
  auVar11 = param_2[1];
  auVar26._0_14_ = auVar12._0_14_;
  auVar26[0xe] = auVar12[7];
  auVar26[0xf] = auVar10[7];
  auVar25._14_2_ = auVar26._14_2_;
  auVar25._0_13_ = auVar12._0_13_;
  auVar25[0xd] = auVar10[6];
  auVar24._13_3_ = auVar25._13_3_;
  auVar24._0_12_ = auVar12._0_12_;
  auVar24[0xc] = auVar12[6];
  auVar23._12_4_ = auVar24._12_4_;
  auVar23._0_11_ = auVar12._0_11_;
  auVar23[0xb] = auVar10[5];
  auVar22._11_5_ = auVar23._11_5_;
  auVar22._0_10_ = auVar12._0_10_;
  auVar22[10] = auVar12[5];
  auVar21._10_6_ = auVar22._10_6_;
  auVar21._0_9_ = auVar12._0_9_;
  auVar21[9] = auVar10[4];
  auVar20._9_7_ = auVar21._9_7_;
  auVar20._0_8_ = auVar12._0_8_;
  auVar20[8] = auVar12[4];
  local_88._8_8_ = auVar20._8_8_;
  local_88[7] = auVar10[3];
  local_88[6] = auVar12[3];
  local_88[5] = auVar10[2];
  local_88[4] = auVar12[2];
  local_88[3] = auVar10[1];
  local_88[2] = auVar12[1];
  local_88[0] = auVar12[0];
  local_88[1] = auVar10[0];
  acStack_49[0] = '\0';
  auVar12._0_2_ = auVar11._0_2_ >> 4;
  auVar12._2_2_ = auVar11._2_2_ >> 4;
  auVar12._4_2_ = auVar11._4_2_ >> 4;
  auVar12._6_2_ = auVar11._6_2_ >> 4;
  auVar12._8_2_ = auVar11._8_2_ >> 4;
  auVar12._10_2_ = auVar11._10_2_ >> 4;
  auVar12._12_2_ = auVar11._12_2_ >> 4;
  auVar12._14_2_ = auVar11._14_2_ >> 4;
  auVar11 = auVar11 & __LC6;
  auVar12 = __LC6 & auVar12;
  auVar19._0_14_ = auVar11._0_14_;
  auVar19[0xe] = auVar11[7];
  auVar19[0xf] = auVar12[7];
  auVar18._14_2_ = auVar19._14_2_;
  auVar18._0_13_ = auVar11._0_13_;
  auVar18[0xd] = auVar12[6];
  auVar17._13_3_ = auVar18._13_3_;
  auVar17._0_12_ = auVar11._0_12_;
  auVar17[0xc] = auVar11[6];
  auVar16._12_4_ = auVar17._12_4_;
  auVar16._0_11_ = auVar11._0_11_;
  auVar16[0xb] = auVar12[5];
  auVar15._11_5_ = auVar16._11_5_;
  auVar15._0_10_ = auVar11._0_10_;
  auVar15[10] = auVar11[5];
  auVar14._10_6_ = auVar15._10_6_;
  auVar14._0_9_ = auVar11._0_9_;
  auVar14[9] = auVar12[4];
  auVar13._9_7_ = auVar14._9_7_;
  auVar13._0_8_ = auVar11._0_8_;
  auVar13[8] = auVar11[4];
  local_68._8_8_ = auVar13._8_8_;
  local_68[7] = auVar12[3];
  local_68[6] = auVar11[3];
  local_68[5] = auVar12[2];
  local_68[4] = auVar11[2];
  local_68[3] = auVar12[1];
  local_68[2] = auVar11[1];
  local_68[0] = auVar11[0];
  local_68[1] = auVar12[0];
  local_58 = auVar11[8];
  uStack_57 = auVar12[8];
  uStack_56 = auVar11[9];
  uStack_55 = auVar12[9];
  uStack_54 = auVar11[10];
  uStack_53 = auVar12[10];
  uStack_52 = auVar11[0xb];
  uStack_51 = auVar12[0xb];
  uStack_50 = auVar11[0xc];
  uStack_4f = auVar12[0xc];
  uStack_4e = auVar11[0xd];
  uStack_4d = auVar12[0xd];
  uStack_4c = auVar11[0xe];
  uStack_4b = auVar12[0xe];
  uStack_4a = auVar11[0xf];
  pcVar4 = local_88;
  do {
    cVar7 = acStack_49[0] + *pcVar4;
    pcVar5 = pcVar4 + 1;
    bVar6 = cVar7 + 8;
    acStack_49[0] = (char)bVar6 >> 4;
    *pcVar4 = cVar7 - (bVar6 & 0xf0);
    pcVar4 = pcVar5;
  } while (acStack_49 != pcVar5);
  puVar1 = param_1[2] + 8;
  cStack_229 = auVar12[0xf];
  acStack_49[0] = acStack_49[0] + cStack_229;
  pauVar2 = param_1 + 5;
  puVar3 = param_1[7] + 8;
  *(undefined1 (*) [16])(param_1[2] + 8) = (undefined1  [16])0x0;
  param_1[5] = (undefined1  [16])0x0;
  *(undefined8 *)param_1[2] = 0;
  *(undefined8 *)(param_1[4] + 8) = 0;
  *(undefined4 *)(param_1[2] + 8) = 1;
  *(undefined8 *)param_1[7] = 0;
  *(undefined4 *)param_1[5] = 1;
  *(undefined8 *)(param_1[9] + 8) = 0;
  *param_1 = (undefined1  [16])0x0;
  param_1[1] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[3] + 8) = (undefined1  [16])0x0;
  param_1[6] = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[7] + 8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1[8] + 8) = (undefined1  [16])0x0;
  lVar9 = 1;
  do {
    iVar8 = (int)lVar9;
    pcVar4 = local_88 + lVar9;
    lVar9 = lVar9 + 2;
    table_select(local_228,iVar8 >> 1,(int)*pcVar4);
    ge_madd(local_128,param_1,local_228);
    fe_mul(param_1,local_128,local_b0);
    fe_mul(puVar1,local_100,local_d8);
    fe_mul(pauVar2,local_d8,local_b0);
    fe_mul(puVar3,local_128,local_100);
  } while (lVar9 != 0x41);
  local_188 = *(undefined8 *)param_1[2];
  local_1a8 = *(undefined8 *)*param_1;
  uStack_1a0 = *(undefined8 *)(*param_1 + 8);
  local_198 = *(undefined8 *)param_1[1];
  uStack_190 = *(undefined8 *)(param_1[1] + 8);
  local_180 = *(undefined8 *)(param_1[2] + 8);
  uStack_178 = *(undefined8 *)param_1[3];
  local_160 = *(undefined8 *)(param_1[4] + 8);
  local_170 = *(undefined8 *)(param_1[3] + 8);
  uStack_168 = *(undefined8 *)param_1[4];
  local_158 = *(undefined8 *)param_1[5];
  uStack_150 = *(undefined8 *)(param_1[5] + 8);
  local_138 = *(undefined8 *)param_1[7];
  local_148 = *(undefined8 *)param_1[6];
  uStack_140 = *(undefined8 *)(param_1[6] + 8);
  ge_p2_dbl(local_128,&local_1a8);
  fe_mul(&local_1a8,local_128,local_b0);
  fe_mul(&local_180,local_100,local_d8);
  fe_mul(&local_158,local_d8,local_b0);
  ge_p2_dbl(local_128,&local_1a8);
  fe_mul(&local_1a8,local_128,local_b0);
  fe_mul(&local_180,local_100,local_d8);
  fe_mul(&local_158,local_d8,local_b0);
  ge_p2_dbl(local_128,&local_1a8);
  fe_mul(&local_1a8,local_128,local_b0);
  fe_mul(&local_180,local_100,local_d8);
  fe_mul(&local_158,local_d8,local_b0);
  ge_p2_dbl(local_128,&local_1a8);
  fe_mul(param_1,local_128,local_b0);
  fe_mul(puVar1,local_100,local_d8);
  fe_mul(pauVar2,local_d8,local_b0);
  fe_mul(puVar3,local_128,local_100);
  lVar9 = 0;
  do {
    iVar8 = (int)lVar9;
    pcVar4 = local_88 + lVar9;
    lVar9 = lVar9 + 2;
    table_select(local_228,iVar8 >> 1,(int)*pcVar4);
    ge_madd(local_128,param_1,local_228);
    fe_mul(param_1,local_128,local_b0);
    fe_mul(puVar1,local_100,local_d8);
    fe_mul(pauVar2,local_d8,local_b0);
    fe_mul(puVar3,local_128,local_100);
  } while (lVar9 != 0x40);
  OPENSSL_cleanse(local_88,0x40);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8
ossl_ed25519_sign(void *param_1,void *param_2,size_t param_3,void *param_4,void *param_5,
                 char param_6,undefined1 param_7,char param_8,long param_9,long param_10,
                 undefined8 param_11,undefined8 param_12)

{
  int iVar1;
  EVP_MD *type;
  EVP_MD_CTX *ctx;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  ulong uVar44;
  ulong uVar45;
  ulong uVar46;
  ulong uVar47;
  ulong uVar48;
  ulong uVar49;
  long lVar50;
  long lVar51;
  undefined8 uVar52;
  long lVar53;
  long lVar54;
  long lVar55;
  long lVar56;
  ulong uVar57;
  long lVar58;
  ulong uVar59;
  ulong uVar60;
  long lVar61;
  long lVar62;
  ulong uVar63;
  long lVar64;
  long lVar65;
  long lVar66;
  ulong uVar67;
  long lVar68;
  ulong uVar69;
  long lVar70;
  ulong uVar71;
  long in_FS_OFFSET;
  char local_2a0;
  char local_298;
  char local_290;
  char local_260;
  uint local_1ac;
  undefined1 local_1a8 [160];
  byte local_108;
  byte local_107;
  undefined4 local_106;
  byte local_102;
  byte local_101;
  undefined2 uStack_100;
  undefined1 uStack_fe;
  undefined2 uStack_fd;
  byte bStack_fb;
  byte local_fa;
  undefined4 local_f9;
  byte local_f5;
  byte local_f4;
  byte local_f3;
  byte local_f2;
  undefined4 local_f1;
  byte local_ed;
  uint local_ec;
  undefined1 local_e8 [32];
  byte local_c8;
  byte local_c7;
  undefined4 local_c6;
  byte local_c2;
  byte local_c1;
  undefined2 uStack_c0;
  undefined1 uStack_be;
  undefined2 uStack_bd;
  byte local_bb;
  byte local_ba;
  undefined4 local_b9;
  byte local_b5;
  byte local_b4;
  byte local_b3;
  byte local_b2;
  undefined4 local_b1;
  byte local_ad;
  uint local_ac;
  byte local_88;
  byte local_87;
  undefined4 local_86;
  byte local_82;
  byte local_81;
  undefined2 uStack_80;
  undefined1 uStack_7e;
  undefined2 uStack_7d;
  byte local_7b;
  byte local_7a;
  undefined4 local_79;
  byte local_75;
  byte local_74;
  byte local_73;
  byte local_72;
  undefined4 local_71;
  byte local_6d;
  uint local_6c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)EVP_MD_fetch(param_11,"SHA512",param_12);
  ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
  if (param_9 == 0) {
    if (param_8 == '\0') {
      param_10 = 0;
      goto LAB_00104851;
    }
  }
  else if (((param_8 == '\0') || (param_10 != 0)) && ((param_6 != '\0' || (param_10 == 0)))) {
LAB_00104851:
    if ((((type != (EVP_MD *)0x0) && (ctx != (EVP_MD_CTX *)0x0)) &&
        (iVar1 = EVP_DigestInit_ex(ctx,type,(ENGINE *)0x0), iVar1 != 0)) &&
       (iVar1 = EVP_DigestUpdate(ctx,param_5,0x20), iVar1 != 0)) {
      iVar1 = EVP_DigestFinal_ex(ctx,&local_108,&local_1ac);
      if (iVar1 != 0) {
        local_108 = local_108 & 0xf8;
        local_ec = local_ec & 0x3fffffff | 0x40000000;
        iVar1 = hash_init_with_dom(ctx,type,param_6,param_7,param_9,param_10);
        if (((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(ctx,local_e8,0x20), iVar1 != 0)) &&
           ((iVar1 = EVP_DigestUpdate(ctx,param_2,param_3), iVar1 != 0 &&
            (iVar1 = EVP_DigestFinal_ex(ctx,&local_c8,&local_1ac), iVar1 != 0)))) {
          x25519_sc_reduce(&local_c8);
          ge_scalarmult_base(local_1a8,&local_c8);
          ge_p3_tobytes(param_1,local_1a8);
          iVar1 = hash_init_with_dom(ctx,type,param_6,param_7,param_9,param_10);
          if ((((iVar1 != 0) && (iVar1 = EVP_DigestUpdate(ctx,param_1,0x20), iVar1 != 0)) &&
              (iVar1 = EVP_DigestUpdate(ctx,param_4,0x20), iVar1 != 0)) &&
             (iVar1 = EVP_DigestUpdate(ctx,param_2,param_3), iVar1 != 0)) {
            iVar1 = EVP_DigestFinal_ex(ctx,&local_88,&local_1ac);
            if (iVar1 != 0) {
              x25519_sc_reduce(&local_88);
              uVar28 = (ulong)((uint)local_87 << 8 | (local_86 & 0x1f) << 0x10 | (uint)local_88);
              uVar69 = (ulong)(local_86 >> 5 & 0x1fffff);
              uVar63 = (ulong)(CONCAT13(uStack_7e,CONCAT21(uStack_80,local_81)) >> 7 & 0x1fffff);
              uVar31 = (ulong)((uint)(((ulong)local_82 << 8 | (ulong)local_81 << 0x10 |
                                      (ulong)local_86._3_1_) >> 2) & 0x1fffff);
              uVar2 = (ulong)(CONCAT13(local_7b,CONCAT21(uStack_7d,uStack_7e)) >> 4 & 0x1fffff);
              uVar3 = (ulong)((uint)(((ulong)local_7a << 8 | (ulong)(byte)local_79 << 0x10 |
                                     (ulong)local_7b) >> 1) & 0x1fffff);
              uVar4 = (ulong)(local_79 >> 6 & 0x1fffff);
              uVar5 = ((ulong)local_75 << 8 | (ulong)local_74 << 0x10 | (ulong)local_79._3_1_) >> 3;
              uVar6 = (ulong)((uint)local_72 << 8 | (local_71 & 0x1f) << 0x10 | (uint)local_73);
              uVar7 = (ulong)(local_71 >> 5 & 0x1fffff);
              uVar8 = (ulong)((uint)(((ulong)(byte)local_6c << 0x10 | (ulong)local_6d << 8 |
                                     (ulong)local_71._3_1_) >> 2) & 0x1fffff);
              uVar59 = (ulong)(local_6c >> 7);
              uVar43 = (ulong)(CONCAT13(bStack_fb,CONCAT21(uStack_fd,uStack_fe)) >> 4 & 0x1fffff);
              uVar57 = (ulong)((local_106 & 0x1f) << 0x10 | (uint)local_107 << 8 | (uint)local_108);
              uVar67 = (ulong)(local_106 >> 5 & 0x1fffff);
              uVar9 = (ulong)((uint)(((ulong)local_101 << 0x10 | (ulong)local_102 << 8 |
                                     (ulong)local_106._3_1_) >> 2) & 0x1fffff);
              uVar71 = (ulong)(CONCAT13(uStack_fe,CONCAT21(uStack_100,local_101)) >> 7 & 0x1fffff);
              uVar60 = (ulong)((uint)(((ulong)(byte)local_f9 << 0x10 | (ulong)local_fa << 8 |
                                      (ulong)bStack_fb) >> 1) & 0x1fffff);
              uVar44 = (ulong)(local_f9 >> 6 & 0x1fffff);
              uVar45 = ((ulong)local_f4 << 0x10 | (ulong)local_f5 << 8 | (ulong)local_f9._3_1_) >> 3
              ;
              uVar46 = (ulong)((uint)local_f2 << 8 | (local_f1 & 0x1f) << 0x10 | (uint)local_f3);
              uVar47 = (ulong)(local_f1 >> 5 & 0x1fffff);
              uVar48 = (ulong)((uint)(((ulong)(byte)local_ec << 0x10 | (ulong)local_ed << 8 |
                                      (ulong)local_f1._3_1_) >> 2) & 0x1fffff);
              uVar49 = (ulong)(local_ec >> 7);
              lVar50 = (ulong)((uint)local_c7 << 8 | (local_c6 & 0x1f) << 0x10 | (uint)local_c8) +
                       uVar28 * uVar57;
              lVar53 = uVar31 * uVar57 +
                       uVar69 * uVar67 +
                       uVar28 * uVar9 +
                       (ulong)((uint)(((ulong)local_c1 << 0x10 | (ulong)local_c2 << 8 |
                                      (ulong)local_c6._3_1_) >> 2) & 0x1fffff);
              lVar54 = uVar2 * uVar57 +
                       uVar63 * uVar67 +
                       uVar31 * uVar9 +
                       uVar69 * uVar71 +
                       uVar43 * uVar28 +
                       (ulong)(CONCAT13(local_bb,CONCAT21(uStack_bd,uStack_be)) >> 4 & 0x1fffff);
              lVar55 = uVar4 * uVar57 +
                       uVar3 * uVar67 +
                       uVar2 * uVar9 +
                       uVar63 * uVar71 +
                       uVar43 * uVar31 +
                       uVar60 * uVar69 + uVar44 * uVar28 + (ulong)(local_b9 >> 6 & 0x1fffff);
              lVar66 = uVar5 * uVar67 +
                       uVar4 * uVar9 +
                       uVar3 * uVar71 +
                       uVar2 * uVar43 +
                       uVar60 * uVar63 +
                       uVar44 * uVar31 +
                       uVar45 * uVar69 +
                       uVar46 * uVar28 +
                       (ulong)((uint)local_b2 << 8 | (local_b1 & 0x1f) << 0x10 | (uint)local_b3) +
                       uVar6 * uVar57;
              lVar56 = uVar8 * uVar57 +
                       uVar7 * uVar67 +
                       uVar6 * uVar9 +
                       uVar5 * uVar71 +
                       uVar4 * uVar43 +
                       uVar60 * uVar3 +
                       uVar2 * uVar44 +
                       uVar45 * uVar63 +
                       uVar46 * uVar31 +
                       uVar47 * uVar69 +
                       uVar48 * uVar28 +
                       (ulong)((uint)(((ulong)(byte)local_ac << 0x10 | (ulong)local_ad << 8 |
                                      (ulong)local_b1._3_1_) >> 2) & 0x1fffff);
              lVar29 = uVar8 * uVar9 +
                       uVar7 * uVar71 +
                       uVar6 * uVar43 +
                       uVar5 * uVar60 +
                       uVar4 * uVar44 +
                       uVar45 * uVar3 +
                       uVar2 * uVar46 + uVar47 * uVar63 + uVar48 * uVar31 + uVar69 * uVar49 +
                       uVar67 * uVar59;
              lVar62 = uVar8 * uVar43 +
                       uVar7 * uVar60 +
                       uVar6 * uVar44 +
                       uVar5 * uVar45 +
                       uVar4 * uVar46 + uVar47 * uVar3 + uVar2 * uVar48 + uVar63 * uVar49 +
                       uVar71 * uVar59;
              lVar23 = uVar8 * uVar44 +
                       uVar7 * uVar45 +
                       uVar6 * uVar46 + uVar5 * uVar47 + uVar4 * uVar48 + uVar3 * uVar49 +
                       uVar60 * uVar59;
              lVar10 = uVar8 * uVar46 + uVar7 * uVar47 + uVar5 * uVar49 + uVar6 * uVar48 +
                       uVar45 * uVar59;
              lVar41 = uVar8 * uVar48 + uVar7 * uVar49 + uVar47 * uVar59;
              lVar11 = lVar50 + 0x100000 >> 0x15;
              lVar70 = uVar69 * uVar57 + (ulong)(local_c6 >> 5 & 0x1fffff) + uVar28 * uVar67 +
                       lVar11;
              lVar12 = lVar53 + 0x100000 >> 0x15;
              lVar51 = uVar63 * uVar57 +
                       uVar31 * uVar67 +
                       uVar69 * uVar9 +
                       (ulong)(CONCAT13(uStack_be,CONCAT21(uStack_c0,local_c1)) >> 7 & 0x1fffff) +
                       uVar28 * uVar71 + lVar12;
              lVar13 = lVar54 + 0x100000 >> 0x15;
              lVar64 = uVar2 * uVar67 +
                       uVar63 * uVar9 +
                       uVar31 * uVar71 +
                       uVar43 * uVar69 +
                       (ulong)((uint)(((ulong)(byte)local_b9 << 0x10 | (ulong)local_ba << 8 |
                                      (ulong)local_bb) >> 1) & 0x1fffff) + uVar60 * uVar28 +
                       uVar3 * uVar57 + lVar13;
              lVar14 = lVar55 + 0x100000 >> 0x15;
              lVar42 = uVar5 * uVar57 +
                       uVar4 * uVar67 +
                       uVar3 * uVar9 +
                       uVar2 * uVar71 +
                       uVar43 * uVar63 +
                       uVar60 * uVar31 +
                       uVar44 * uVar69 +
                       (((ulong)local_b4 << 0x10 | (ulong)local_b5 << 8 | (ulong)local_b9._3_1_) >>
                       3) + uVar45 * uVar28 + lVar14;
              lVar15 = lVar66 + 0x100000 >> 0x15;
              lVar24 = uVar6 * uVar67 +
                       uVar5 * uVar9 +
                       uVar4 * uVar71 +
                       uVar43 * uVar3 +
                       uVar2 * uVar60 +
                       uVar44 * uVar63 +
                       uVar45 * uVar31 +
                       uVar46 * uVar69 + (ulong)(local_b1 >> 5 & 0x1fffff) + uVar47 * uVar28 +
                       uVar7 * uVar57 + lVar15;
              lVar16 = lVar56 + 0x100000 >> 0x15;
              lVar25 = uVar57 * uVar59 +
                       uVar8 * uVar67 +
                       uVar7 * uVar9 +
                       uVar6 * uVar71 +
                       uVar5 * uVar43 +
                       uVar4 * uVar60 +
                       uVar44 * uVar3 +
                       uVar2 * uVar45 +
                       uVar46 * uVar63 +
                       uVar47 * uVar31 + uVar48 * uVar69 + uVar28 * uVar49 + (ulong)(local_ac >> 7)
                       + lVar16;
              lVar17 = lVar29 + 0x100000 >> 0x15;
              lVar26 = uVar8 * uVar71 +
                       uVar7 * uVar43 +
                       uVar6 * uVar60 +
                       uVar5 * uVar44 +
                       uVar4 * uVar45 +
                       uVar46 * uVar3 + uVar2 * uVar47 + uVar48 * uVar63 + uVar31 * uVar49 +
                       uVar9 * uVar59 + lVar17;
              lVar18 = lVar62 + 0x100000 >> 0x15;
              lVar27 = uVar8 * uVar60 +
                       uVar7 * uVar44 +
                       uVar6 * uVar45 +
                       uVar5 * uVar46 + uVar4 * uVar47 + uVar48 * uVar3 + uVar2 * uVar49 +
                       uVar43 * uVar59 + lVar18;
              lVar19 = lVar23 + 0x100000 >> 0x15;
              lVar30 = uVar44 * uVar59 +
                       uVar8 * uVar45 +
                       uVar7 * uVar46 + uVar6 * uVar47 + uVar5 * uVar48 + uVar4 * uVar49 + lVar19;
              lVar20 = lVar10 + 0x100000 >> 0x15;
              lVar61 = uVar46 * uVar59 + uVar8 * uVar47 + uVar7 * uVar48 + uVar6 * uVar49 + lVar20;
              lVar21 = lVar41 + 0x100000 >> 0x15;
              lVar65 = uVar8 * uVar49 + uVar48 * uVar59 + lVar21;
              lVar22 = (long)(uVar49 * uVar59 + 0x100000) >> 0x15;
              lVar32 = lVar70 + 0x100000 >> 0x15;
              lVar33 = lVar51 + 0x100000 >> 0x15;
              lVar34 = lVar64 + 0x100000 >> 0x15;
              lVar35 = lVar42 + 0x100000 >> 0x15;
              lVar36 = lVar24 + 0x100000 >> 0x15;
              lVar37 = lVar25 + 0x100000 >> 0x15;
              lVar38 = lVar26 + 0x100000 >> 0x15;
              lVar39 = lVar27 + 0x100000 >> 0x15;
              lVar40 = lVar30 + 0x100000 >> 0x15;
              lVar58 = lVar10 + lVar20 * -0x200000 + lVar40;
              lVar10 = lVar61 + 0x100000 >> 0x15;
              lVar68 = lVar41 + lVar21 * -0x200000 + lVar10;
              lVar61 = lVar61 + lVar10 * -0x200000;
              lVar41 = lVar65 + 0x100000 >> 0x15;
              lVar20 = uVar49 * uVar59 + lVar22 * -0x200000 + lVar41;
              lVar65 = lVar65 + lVar41 * -0x200000;
              lVar23 = lVar22 * -0xa6f7d + lVar23 + lVar19 * -0x200000 + lVar39;
              lVar10 = lVar65 * -0xa6f7d +
                       lVar20 * 0x215d1 + lVar22 * -0xf39ad + lVar62 + lVar18 * -0x200000 + lVar38;
              lVar29 = lVar61 * -0xa6f7d +
                       lVar29 + lVar17 * -0x200000 + lVar37 + lVar22 * 0x72d18 + lVar20 * 0x9fb67 +
                       lVar65 * -0xf39ad + lVar68 * 0x215d1;
              lVar17 = lVar58 * 0xa2c13 + lVar55 + lVar14 * -0x200000 + lVar34;
              lVar21 = lVar58 * 0x9fb67 +
                       lVar61 * 0x72d18 + lVar68 * 0xa2c13 + lVar66 + lVar15 * -0x200000 + lVar35;
              lVar55 = lVar58 * 0x215d1 +
                       lVar61 * -0xf39ad +
                       lVar56 + lVar16 * -0x200000 + lVar36 + lVar20 * 0xa2c13 + lVar65 * 0x72d18 +
                       lVar68 * 0x9fb67;
              lVar15 = lVar17 + 0x100000 >> 0x15;
              lVar56 = lVar58 * 0x72d18 + lVar42 + lVar35 * -0x200000 + lVar61 * 0xa2c13 + lVar15;
              lVar18 = lVar21 + 0x100000 >> 0x15;
              lVar14 = lVar58 * -0xf39ad +
                       lVar24 + lVar36 * -0x200000 + lVar65 * 0xa2c13 + lVar68 * 0x72d18 +
                       lVar61 * 0x9fb67 + lVar18;
              lVar19 = lVar55 + 0x100000 >> 0x15;
              lVar16 = lVar58 * -0xa6f7d +
                       lVar68 * -0xf39ad +
                       lVar25 + lVar37 * -0x200000 + lVar22 * 0xa2c13 + lVar20 * 0x72d18 +
                       lVar65 * 0x9fb67 + lVar61 * 0x215d1 + lVar19;
              lVar62 = lVar29 + 0x100000 >> 0x15;
              lVar66 = lVar68 * -0xa6f7d +
                       lVar26 + lVar38 * -0x200000 + lVar22 * 0x9fb67 + lVar20 * -0xf39ad +
                       lVar65 * 0x215d1 + lVar62;
              lVar41 = lVar10 + 0x100000 >> 0x15;
              lVar65 = lVar22 * 0x215d1 + lVar27 + lVar39 * -0x200000 + lVar20 * -0xa6f7d + lVar41;
              lVar42 = lVar23 + 0x100000 >> 0x15;
              lVar30 = lVar30 + lVar40 * -0x200000 + lVar42;
              lVar24 = lVar56 + 0x100000 >> 0x15;
              lVar25 = lVar14 + 0x100000 >> 0x15;
              lVar26 = lVar16 + 0x100000 >> 0x15;
              lVar61 = lVar29 + lVar62 * -0x200000 + lVar26;
              lVar62 = lVar66 + 0x100000 >> 0x15;
              lVar29 = lVar10 + lVar41 * -0x200000 + lVar62;
              lVar66 = lVar66 + lVar62 * -0x200000;
              lVar41 = lVar65 + 0x100000 >> 0x15;
              lVar62 = lVar23 + lVar42 * -0x200000 + lVar41;
              lVar65 = lVar65 + lVar41 * -0x200000;
              lVar27 = lVar30 * -0xa6f7d + lVar55 + lVar19 * -0x200000 + lVar25;
              lVar23 = lVar65 * -0xa6f7d +
                       lVar21 + lVar18 * -0x200000 + lVar24 + lVar30 * -0xf39ad + lVar62 * 0x215d1;
              lVar41 = lVar66 * -0xa6f7d +
                       lVar29 * 0x215d1 +
                       lVar17 + lVar15 * -0x200000 + lVar30 * 0x72d18 + lVar62 * 0x9fb67 +
                       lVar65 * -0xf39ad;
              lVar11 = lVar61 * 0xa2c13 + lVar50 + lVar11 * -0x200000;
              lVar17 = lVar61 * 0x9fb67 +
                       lVar29 * 0xa2c13 + lVar53 + lVar12 * -0x200000 + lVar32 + lVar66 * 0x72d18;
              lVar35 = lVar61 * 0x215d1 +
                       lVar62 * 0xa2c13 + lVar54 + lVar13 * -0x200000 + lVar33 + lVar65 * 0x72d18 +
                       lVar29 * 0x9fb67 + lVar66 * -0xf39ad;
              lVar10 = lVar11 + 0x100000 >> 0x15;
              lVar42 = lVar70 + lVar32 * -0x200000 + lVar66 * 0xa2c13 + lVar61 * 0x72d18 + lVar10;
              lVar12 = lVar17 + 0x100000 >> 0x15;
              lVar18 = lVar61 * -0xf39ad +
                       lVar65 * 0xa2c13 + lVar51 + lVar33 * -0x200000 + lVar29 * 0x72d18 +
                       lVar66 * 0x9fb67 + lVar12;
              lVar19 = lVar35 + 0x100000 >> 0x15;
              lVar61 = lVar61 * -0xa6f7d +
                       lVar65 * 0x9fb67 +
                       lVar62 * 0x72d18 + lVar30 * 0xa2c13 + lVar64 + lVar34 * -0x200000 +
                       lVar29 * -0xf39ad + lVar66 * 0x215d1 + lVar19;
              lVar21 = lVar41 + 0x100000 >> 0x15;
              lVar66 = lVar29 * -0xa6f7d +
                       lVar56 + lVar24 * -0x200000 + lVar30 * 0x9fb67 + lVar62 * -0xf39ad +
                       lVar65 * 0x215d1 + lVar21;
              lVar13 = lVar23 + 0x100000 >> 0x15;
              lVar22 = lVar62 * -0xa6f7d + lVar14 + lVar25 * -0x200000 + lVar30 * 0x215d1 + lVar13;
              lVar65 = lVar27 + 0x100000 >> 0x15;
              lVar14 = lVar16 + lVar26 * -0x200000 + lVar65;
              lVar29 = lVar42 + 0x100000 >> 0x15;
              lVar62 = lVar18 + 0x100000 >> 0x15;
              lVar24 = lVar61 + 0x100000 >> 0x15;
              lVar25 = lVar66 + 0x100000 >> 0x15;
              lVar26 = lVar22 + 0x100000 >> 0x15;
              uVar2 = lVar14 + 0x100000;
              lVar30 = (long)uVar2 >> 0x15;
              lVar20 = lVar30 * 0xa2c13 + lVar11 + lVar10 * -0x200000;
              lVar15 = lVar20 >> 0x15;
              lVar32 = lVar30 * 0x72d18 + lVar42 + lVar29 * -0x200000 + lVar15;
              lVar16 = lVar32 >> 0x15;
              lVar12 = lVar17 + lVar12 * -0x200000 + lVar29 + lVar30 * 0x9fb67 + lVar16;
              lVar17 = lVar12 >> 0x15;
              lVar33 = lVar18 + lVar62 * -0x200000 + lVar30 * -0xf39ad + lVar17;
              lVar18 = lVar33 >> 0x15;
              lVar10 = lVar30 * 0x215d1 + lVar35 + lVar19 * -0x200000 + lVar62 + lVar18;
              lVar19 = lVar10 >> 0x15;
              lVar42 = lVar30 * -0xa6f7d + lVar61 + lVar24 * -0x200000 + lVar19;
              lVar11 = lVar42 >> 0x15;
              lVar29 = lVar41 + lVar21 * -0x200000 + lVar24 + lVar11;
              lVar24 = lVar29 >> 0x15;
              lVar66 = lVar66 + lVar25 * -0x200000 + lVar24;
              lVar30 = lVar66 >> 0x15;
              lVar62 = lVar23 + lVar13 * -0x200000 + lVar25 + lVar30;
              lVar25 = lVar62 >> 0x15;
              lVar13 = lVar22 + lVar26 * -0x200000 + lVar25;
              lVar61 = lVar13 >> 0x15;
              lVar23 = lVar27 + lVar65 * -0x200000 + lVar26 + lVar61;
              lVar26 = lVar23 >> 0x15;
              lVar14 = (lVar14 - (uVar2 & 0xffffffffffe00000)) + lVar26;
              lVar27 = lVar14 >> 0x15;
              lVar41 = lVar27 * 0xa2c13 + lVar20 + lVar15 * -0x200000;
              lVar65 = lVar41 >> 0x15;
              lVar20 = lVar27 * 0x72d18 + lVar32 + lVar16 * -0x200000 + lVar65;
              lVar12 = lVar27 * 0x9fb67 + lVar12 + lVar17 * -0x200000 + (lVar20 >> 0x15);
              lVar41 = lVar41 + lVar65 * -0x200000;
              lVar16 = lVar20 + (lVar20 >> 0x15) * -0x200000;
              lVar15 = lVar27 * -0xf39ad + lVar33 + lVar18 * -0x200000 + (lVar12 >> 0x15);
              lVar17 = lVar12 + (lVar12 >> 0x15) * -0x200000;
              lVar65 = lVar27 * 0x215d1 + lVar10 + lVar19 * -0x200000 + (lVar15 >> 0x15);
              lVar10 = lVar15 + (lVar15 >> 0x15) * -0x200000;
              lVar42 = lVar27 * -0xa6f7d + lVar42 + lVar11 * -0x200000 + (lVar65 >> 0x15);
              lVar27 = lVar65 + (lVar65 >> 0x15) * -0x200000;
              lVar11 = lVar29 + lVar24 * -0x200000 + (lVar42 >> 0x15);
              lVar24 = lVar42 + (lVar42 >> 0x15) * -0x200000;
              lVar18 = lVar66 + lVar30 * -0x200000 + (lVar11 >> 0x15);
              lVar30 = lVar11 + (lVar11 >> 0x15) * -0x200000;
              lVar66 = lVar62 + lVar25 * -0x200000 + (lVar18 >> 0x15);
              lVar25 = lVar18 + (lVar18 >> 0x15) * -0x200000;
              lVar29 = lVar66 >> 0x15;
              lVar61 = lVar13 + lVar61 * -0x200000 + lVar29;
              lVar66 = lVar66 + lVar29 * -0x200000;
              lVar23 = lVar23 + lVar26 * -0x200000 + (lVar61 >> 0x15);
              lVar29 = lVar61 + (lVar61 >> 0x15) * -0x200000;
              lVar62 = (ulong)((uint)lVar14 & 0x1fffff) + (lVar23 >> 0x15);
              lVar26 = lVar23 + (lVar23 >> 0x15) * -0x200000;
              *(short *)((long)param_1 + 0x20) = (short)lVar41;
              *(byte *)((long)param_1 + 0x22) =
                   (byte)((int)lVar20 << 5) | (byte)((ulong)lVar41 >> 0x10);
              *(char *)((long)param_1 + 0x23) = (char)(lVar16 >> 3);
              *(char *)((long)param_1 + 0x24) = (char)(lVar16 >> 0xb);
              *(byte *)((long)param_1 + 0x25) = (byte)((int)lVar12 << 2) | (byte)(lVar16 >> 0x13);
              *(char *)((long)param_1 + 0x26) = (char)(lVar17 >> 6);
              *(char *)((long)param_1 + 0x28) = (char)(lVar10 >> 1);
              *(byte *)((long)param_1 + 0x27) = (byte)((int)lVar15 << 7) | (byte)(lVar17 >> 0xe);
              *(char *)((long)param_1 + 0x29) = (char)(lVar10 >> 9);
              local_260 = (char)lVar65;
              local_2a0 = (char)lVar11;
              *(byte *)((long)param_1 + 0x2a) = local_260 << 4 | (byte)(lVar10 >> 0x11);
              *(char *)((long)param_1 + 0x2b) = (char)(lVar27 >> 4);
              *(char *)((long)param_1 + 0x2c) = (char)(lVar27 >> 0xc);
              *(char *)((long)param_1 + 0x2e) = (char)(lVar24 >> 7);
              *(byte *)((long)param_1 + 0x2d) = (char)lVar42 * '\x02' | (byte)(lVar27 >> 0x14);
              *(byte *)((long)param_1 + 0x2f) = (byte)(lVar24 >> 0xf) | local_2a0 << 6;
              *(char *)((long)param_1 + 0x30) = (char)(lVar30 >> 2);
              *(char *)((long)param_1 + 0x31) = (char)(lVar30 >> 10);
              *(byte *)((long)param_1 + 0x32) = (char)lVar18 * '\b' | (byte)(lVar30 >> 0x12);
              *(char *)((long)param_1 + 0x33) = (char)(lVar25 >> 5);
              *(char *)((long)param_1 + 0x34) = (char)(lVar25 >> 0xd);
              local_298 = (char)lVar61;
              *(short *)((long)param_1 + 0x35) = (short)lVar66;
              *(byte *)((long)param_1 + 0x37) = local_298 << 5 | (byte)((ulong)lVar66 >> 0x10);
              *(char *)((long)param_1 + 0x38) = (char)(lVar29 >> 3);
              *(char *)((long)param_1 + 0x39) = (char)(lVar29 >> 0xb);
              local_290 = (char)lVar23;
              *(byte *)((long)param_1 + 0x3a) = local_290 << 2 | (byte)(lVar29 >> 0x13);
              *(char *)((long)param_1 + 0x3b) = (char)(lVar26 >> 6);
              uVar52 = 1;
              *(byte *)((long)param_1 + 0x3c) = (byte)(lVar26 >> 0xe) | (byte)((int)lVar62 << 7);
              *(char *)((long)param_1 + 0x3d) = (char)(lVar62 >> 1);
              *(char *)((long)param_1 + 0x3f) = (char)(lVar62 >> 0x11);
              *(char *)((long)param_1 + 0x3e) = (char)(lVar62 >> 9);
              goto LAB_001047e6;
            }
          }
        }
      }
    }
  }
  uVar52 = 0;
LAB_001047e6:
  OPENSSL_cleanse(&local_c8,0x40);
  OPENSSL_cleanse(&local_108,0x40);
  EVP_MD_free(type);
  EVP_MD_CTX_free(ctx);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar52;
}



bool ossl_ed25519_pubkey_verify(undefined8 param_1,long param_2)

{
  int iVar1;
  long in_FS_OFFSET;
  bool bVar2;
  undefined1 auStack_b8 [168];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  bVar2 = false;
  if (param_2 == 0x20) {
    iVar1 = ge_frombytes_vartime(auStack_b8,param_1);
    bVar2 = iVar1 == 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool ossl_ed25519_verify(void *param_1,size_t param_2,void *param_3,void *param_4,char param_5,
                        undefined1 param_6,char param_7,long param_8,long param_9,
                        undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  EVP_MD_CTX *ctx;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  uint local_acc;
  undefined8 local_ac8 [5];
  undefined8 local_aa0;
  undefined1 local_a98 [16];
  undefined1 local_a88 [16];
  undefined8 local_a78;
  undefined4 local_a70;
  undefined1 auStack_a6c [12];
  undefined1 local_a60 [16];
  undefined8 local_a50;
  undefined4 local_a48;
  undefined1 auStack_a44 [12];
  undefined1 local_a38 [16];
  undefined8 local_a28;
  undefined8 local_a18;
  undefined8 uStack_a10;
  undefined8 local_a08;
  undefined8 uStack_a00;
  undefined8 local_9f8;
  undefined8 local_9f0;
  undefined8 uStack_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 local_9c8;
  undefined8 uStack_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 local_978 [5];
  undefined8 local_950 [5];
  undefined8 local_928 [5];
  undefined8 local_900 [5];
  undefined8 local_8d8 [5];
  undefined8 local_8b0 [5];
  undefined8 local_888 [5];
  undefined1 local_860 [40];
  undefined8 local_838;
  undefined8 uStack_830;
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 local_7e8;
  undefined8 uStack_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined1 local_7c0 [40];
  undefined1 local_798 [40];
  undefined1 auStack_770 [40];
  undefined1 auStack_748 [40];
  undefined1 auStack_720 [40];
  undefined1 local_6f8 [160];
  undefined1 local_658 [160];
  undefined1 local_5b8 [160];
  undefined1 local_518 [160];
  undefined1 local_478 [160];
  undefined1 local_3d8 [160];
  undefined1 local_338 [160];
  undefined8 local_298;
  undefined8 uStack_290;
  uchar local_288 [64];
  char local_248 [256];
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_298 = __LC9;
  uStack_290 = _UNK_0010f2b8;
  if (param_8 == 0) {
    if (param_7 == '\0') {
      param_9 = 0;
      goto LAB_00106690;
    }
  }
  else if (((param_9 != 0) || (param_7 == '\0')) && ((param_5 != '\0' || (param_9 == 0)))) {
LAB_00106690:
    if (*(byte *)((long)param_3 + 0x3f) < 0x11) {
      if (*(byte *)((long)param_3 + 0x3f) == 0x10) {
        if ((*(long *)((long)param_3 + 0x30) == CONCAT17(allzeroes._7_1_,(undefined7)allzeroes)) &&
           (*(long *)((long)param_3 + 0x37) == CONCAT71(_UNK_001075c8,allzeroes._7_1_))) {
          lVar5 = 0xf;
          do {
            bVar2 = *(byte *)((long)param_3 + lVar5 + 0x20);
            if (bVar2 < *(byte *)((long)&local_298 + lVar5)) goto LAB_001066f0;
          } while ((bVar2 <= *(byte *)((long)&local_298 + lVar5)) &&
                  (bVar13 = lVar5 != 0, lVar5 = lVar5 + -1, bVar13));
        }
      }
      else {
LAB_001066f0:
        iVar4 = ge_frombytes_vartime(&local_a18,param_4);
        if (iVar4 == 0) {
          puVar8 = &local_a18;
          do {
            puVar7 = puVar8 + 1;
            *puVar8 = CONCAT44(-(int)((ulong)*puVar8 >> 0x20),-(int)*puVar8);
            puVar8 = puVar7;
            puVar9 = &local_a18;
          } while (puVar7 != &local_9f0);
          do {
            puVar8 = puVar9 + 1;
            puVar9[0xf] = CONCAT44(-(int)((ulong)puVar9[0xf] >> 0x20),-(int)puVar9[0xf]);
            puVar9 = puVar8;
          } while (puVar8 != &local_9f0);
          lVar5 = EVP_MD_fetch(param_10,"SHA512",param_11);
          if (lVar5 != 0) {
            ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
            bVar13 = false;
            if ((((ctx != (EVP_MD_CTX *)0x0) &&
                 (iVar4 = hash_init_with_dom(ctx,lVar5,param_5,param_6,param_8,param_9), iVar4 != 0)
                 ) && (iVar4 = EVP_DigestUpdate(ctx,param_3,0x20), iVar4 != 0)) &&
               ((iVar4 = EVP_DigestUpdate(ctx,param_4,0x20), iVar4 != 0 &&
                (iVar4 = EVP_DigestUpdate(ctx,param_1,param_2), iVar4 != 0)))) {
              iVar4 = EVP_DigestFinal_ex(ctx,local_288,&local_acc);
              if (iVar4 != 0) {
                x25519_sc_reduce(local_288);
                slide(local_248,local_288);
                slide(local_148,(long)param_3 + 0x20);
                ge_p3_to_cached(local_798,&local_a18);
                local_818 = local_9f8;
                local_838 = local_a18;
                uStack_830 = uStack_a10;
                local_7f0 = local_9d0;
                local_828 = local_a08;
                uStack_820 = uStack_a00;
                local_810 = local_9f0;
                uStack_808 = uStack_9e8;
                local_800 = local_9e0;
                uStack_7f8 = uStack_9d8;
                local_7e8 = local_9c8;
                uStack_7e0 = uStack_9c0;
                local_7d8 = local_9b8;
                uStack_7d0 = uStack_9b0;
                local_7c8 = local_9a8;
                ge_p2_dbl(local_978,&local_838);
                fe_mul(&local_838,local_978,local_900);
                fe_mul(&local_810,local_950,local_928);
                fe_mul(&local_7e8,local_928,local_900);
                fe_mul(local_7c0,local_978,local_950);
                ge_add(local_978,&local_838,local_798);
                fe_mul(local_8d8,local_978,local_900);
                fe_mul(local_8b0,local_950,local_928);
                fe_mul(local_888,local_928,local_900);
                fe_mul(local_860,local_978,local_950);
                ge_p3_to_cached(local_6f8,local_8d8);
                ge_add(local_978,&local_838,local_6f8);
                fe_mul(local_8d8,local_978,local_900);
                fe_mul(local_8b0,local_950,local_928);
                fe_mul(local_888,local_928,local_900);
                fe_mul(local_860,local_978,local_950);
                ge_p3_to_cached(local_658,local_8d8);
                ge_add(local_978,&local_838,local_658);
                fe_mul(local_8d8,local_978,local_900);
                fe_mul(local_8b0,local_950,local_928);
                fe_mul(local_888,local_928,local_900);
                fe_mul(local_860,local_978,local_950);
                ge_p3_to_cached(local_5b8,local_8d8);
                ge_add(local_978,&local_838,local_5b8);
                fe_mul(local_8d8,local_978,local_900);
                fe_mul(local_8b0,local_950,local_928);
                fe_mul(local_888,local_928,local_900);
                fe_mul(local_860,local_978,local_950);
                ge_p3_to_cached(local_518,local_8d8);
                ge_add(local_978,&local_838,local_518);
                fe_mul(local_8d8,local_978,local_900);
                fe_mul(local_8b0,local_950,local_928);
                fe_mul(local_888,local_928,local_900);
                fe_mul(local_860,local_978,local_950);
                ge_p3_to_cached(local_478,local_8d8);
                ge_add(local_978,&local_838,local_478);
                fe_mul(local_8d8,local_978,local_900);
                fe_mul(local_8b0,local_950,local_928);
                fe_mul(local_888,local_928,local_900);
                fe_mul(local_860,local_978,local_950);
                ge_p3_to_cached(local_3d8,local_8d8);
                ge_add(local_978,&local_838,local_3d8);
                fe_mul(local_8d8,local_978,local_900);
                fe_mul(local_8b0,local_950,local_928);
                fe_mul(local_888,local_928,local_900);
                fe_mul(local_860,local_978,local_950);
                ge_p3_to_cached(local_338,local_8d8);
                local_a78 = 0;
                lVar6 = 0xff;
                local_a50 = 0;
                auStack_a6c = SUB1612((undefined1  [16])0x0,4);
                local_a70 = 1;
                local_a28 = 0;
                auStack_a44 = SUB1612((undefined1  [16])0x0,4);
                local_a48 = 1;
                local_a98 = (undefined1  [16])0x0;
                local_a88 = (undefined1  [16])0x0;
                local_a60 = (undefined1  [16])0x0;
                local_a38 = (undefined1  [16])0x0;
LAB_00106d80:
                if ((local_248[lVar6] == '\0') && (local_148[lVar6] == '\0')) goto code_r0x00106d76;
                lVar6 = (long)(int)lVar6;
                do {
                  ge_p2_dbl(local_978,local_a98);
                  cVar3 = local_248[lVar6];
                  if (cVar3 < '\x01') {
                    if (cVar3 != '\0') {
                      fe_mul(local_8d8,local_978,local_900);
                      fe_mul(local_8b0,local_950,local_928);
                      fe_mul(local_888,local_928,local_900);
                      fe_mul(local_860,local_978,local_950);
                      puVar8 = local_8d8;
                      puVar9 = local_978;
                      do {
                        puVar7 = puVar8 + 5;
                        uVar1 = *puVar8;
                        puVar8 = puVar8 + 1;
                        *puVar9 = CONCAT44((int)((ulong)*puVar7 >> 0x20) +
                                           (int)((ulong)uVar1 >> 0x20),(int)*puVar7 + (int)uVar1);
                        puVar7 = local_950;
                        puVar11 = local_8d8;
                        puVar9 = puVar9 + 1;
                      } while (puVar8 != local_8b0);
                      do {
                        puVar8 = puVar11 + 1;
                        *puVar7 = CONCAT44((int)((ulong)puVar11[5] >> 0x20) -
                                           (int)((ulong)*puVar11 >> 0x20),
                                           (int)puVar11[5] - (int)*puVar11);
                        puVar7 = puVar7 + 1;
                        puVar11 = puVar8;
                      } while (local_8b0 != puVar8);
                      lVar12 = (long)-((int)cVar3 / 2) * 0xa0;
                      fe_mul(local_928,local_978,auStack_770 + lVar12);
                      fe_mul(local_950,local_950,local_798 + lVar12);
                      fe_mul(local_900,auStack_720 + lVar12,local_860);
                      fe_mul(local_978,local_888,auStack_748 + lVar12);
                      puVar8 = local_ac8;
                      lVar12 = 0;
                      do {
                        uVar1 = *(undefined8 *)((long)local_978 + lVar12);
                        lVar10 = lVar12 + 8;
                        *(ulong *)(lVar12 + (long)puVar8) =
                             CONCAT44((int)((ulong)uVar1 >> 0x20) << 1,(int)uVar1 << 1);
                        lVar12 = lVar10;
                      } while (lVar10 != 0x28);
                      puVar9 = local_978;
                      do {
                        puVar11 = puVar9 + 1;
                        *puVar9 = CONCAT44((int)((ulong)puVar9[10] >> 0x20) -
                                           (int)((ulong)puVar9[5] >> 0x20),
                                           (int)puVar9[10] - (int)puVar9[5]);
                        puVar7 = local_978;
                        puVar9 = puVar11;
                      } while (puVar11 != local_950);
                      do {
                        puVar9 = puVar7 + 1;
                        puVar7[5] = CONCAT44((int)((ulong)puVar7[5] >> 0x20) +
                                             (int)((ulong)puVar7[10] >> 0x20),
                                             (int)puVar7[5] + (int)puVar7[10]);
                        puVar7 = puVar9;
                      } while (puVar9 != local_950);
                      puVar9 = local_978;
                      puVar7 = puVar8;
                      do {
                        uVar1 = *puVar7;
                        puVar7 = puVar7 + 1;
                        puVar9[10] = CONCAT44((int)((ulong)uVar1 >> 0x20) -
                                              (int)((ulong)puVar9[0xf] >> 0x20),
                                              (int)uVar1 - (int)puVar9[0xf]);
                        puVar9 = puVar9 + 1;
                        puVar11 = local_900;
                      } while (puVar7 != &local_aa0);
                      do {
                        uVar1 = *puVar8;
                        puVar8 = puVar8 + 1;
                        *puVar11 = CONCAT44((int)((ulong)*puVar11 >> 0x20) +
                                            (int)((ulong)uVar1 >> 0x20),(int)*puVar11 + (int)uVar1);
                        puVar11 = puVar11 + 1;
                      } while (puVar8 != &local_aa0);
                    }
                  }
                  else {
                    fe_mul(local_8d8,local_978,local_900);
                    fe_mul(local_8b0,local_950,local_928);
                    fe_mul(local_888,local_928,local_900);
                    fe_mul(local_860,local_978,local_950);
                    ge_add(local_978,local_8d8,local_798 + (long)(cVar3 >> 1) * 0xa0);
                  }
                  cVar3 = local_148[lVar6];
                  if (cVar3 < '\x01') {
                    if (cVar3 != '\0') {
                      fe_mul(local_8d8,local_978,local_900);
                      fe_mul(local_8b0,local_950,local_928);
                      fe_mul(local_888,local_928,local_900);
                      fe_mul(local_860,local_978,local_950);
                      puVar8 = local_8d8;
                      puVar9 = local_978;
                      do {
                        puVar7 = puVar8 + 5;
                        uVar1 = *puVar8;
                        puVar8 = puVar8 + 1;
                        *puVar9 = CONCAT44((int)((ulong)*puVar7 >> 0x20) +
                                           (int)((ulong)uVar1 >> 0x20),(int)*puVar7 + (int)uVar1);
                        puVar7 = local_950;
                        puVar11 = local_8d8;
                        puVar9 = puVar9 + 1;
                      } while (puVar8 != local_8b0);
                      do {
                        puVar8 = puVar11 + 1;
                        *puVar7 = CONCAT44((int)((ulong)puVar11[5] >> 0x20) -
                                           (int)((ulong)*puVar11 >> 0x20),
                                           (int)puVar11[5] - (int)*puVar11);
                        puVar7 = puVar7 + 1;
                        puVar11 = puVar8;
                      } while (puVar8 != local_8b0);
                      lVar12 = (long)-((int)cVar3 / 2) * 0x78;
                      fe_mul(local_928,local_978,lVar12 + 0x107608);
                      fe_mul(local_950,local_950,Bi + lVar12);
                      fe_mul(local_900,lVar12 + 0x107630,local_860);
                      puVar8 = local_ac8;
                      lVar12 = 0;
                      do {
                        uVar1 = *(undefined8 *)((long)local_888 + lVar12);
                        lVar10 = lVar12 + 8;
                        *(ulong *)(lVar12 + (long)puVar8) =
                             CONCAT44((int)((ulong)uVar1 >> 0x20) << 1,(int)uVar1 << 1);
                        lVar12 = lVar10;
                      } while (lVar10 != 0x28);
                      puVar9 = local_978;
                      do {
                        puVar11 = puVar9 + 1;
                        *puVar9 = CONCAT44((int)((ulong)puVar9[10] >> 0x20) -
                                           (int)((ulong)puVar9[5] >> 0x20),
                                           (int)puVar9[10] - (int)puVar9[5]);
                        puVar7 = local_978;
                        puVar9 = puVar11;
                      } while (puVar11 != local_950);
                      do {
                        puVar9 = puVar7 + 1;
                        puVar7[5] = CONCAT44((int)((ulong)puVar7[5] >> 0x20) +
                                             (int)((ulong)puVar7[10] >> 0x20),
                                             (int)puVar7[5] + (int)puVar7[10]);
                        puVar7 = puVar9;
                      } while (puVar9 != local_950);
                      puVar9 = local_978;
                      puVar7 = puVar8;
                      do {
                        uVar1 = *puVar7;
                        puVar7 = puVar7 + 1;
                        puVar9[10] = CONCAT44((int)((ulong)uVar1 >> 0x20) -
                                              (int)((ulong)puVar9[0xf] >> 0x20),
                                              (int)uVar1 - (int)puVar9[0xf]);
                        puVar9 = puVar9 + 1;
                        puVar11 = local_900;
                      } while (&local_aa0 != puVar7);
                      do {
                        uVar1 = *puVar8;
                        puVar8 = puVar8 + 1;
                        *puVar11 = CONCAT44((int)((ulong)*puVar11 >> 0x20) +
                                            (int)((ulong)uVar1 >> 0x20),(int)*puVar11 + (int)uVar1);
                        puVar11 = puVar11 + 1;
                      } while (&local_aa0 != puVar8);
                    }
                  }
                  else {
                    fe_mul(local_8d8,local_978,local_900);
                    fe_mul(local_8b0,local_950,local_928);
                    fe_mul(local_888,local_928,local_900);
                    fe_mul(local_860,local_978,local_950);
                    ge_madd(local_978,local_8d8,Bi + (long)(cVar3 >> 1) * 0x78);
                  }
                  lVar6 = lVar6 + -1;
                  fe_mul(local_a98,local_978,local_900);
                  fe_mul(&local_a70,local_950,local_928);
                  fe_mul(&local_a48,local_928,local_900);
                } while ((int)lVar6 != -1);
LAB_001072c3:
                ge_p3_tobytes(local_148,local_a98);
                iVar4 = CRYPTO_memcmp(local_148,param_3,0x20);
                bVar13 = iVar4 == 0;
              }
            }
            EVP_MD_free(lVar5);
            EVP_MD_CTX_free(ctx);
            goto LAB_0010664a;
          }
        }
      }
    }
  }
  bVar13 = false;
LAB_0010664a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar13;
code_r0x00106d76:
  bVar13 = lVar6 == 0;
  lVar6 = lVar6 + -1;
  if (bVar13) goto LAB_001072c3;
  goto LAB_00106d80;
}



undefined8
ossl_ed25519_public_from_private
          (undefined8 param_1,undefined8 param_2,void *param_3,undefined8 param_4)

{
  int iVar1;
  EVP_MD *type;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_118 [160];
  byte local_78 [31];
  byte local_59;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  type = (EVP_MD *)EVP_MD_fetch(param_1,"SHA512",param_4);
  if (type != (EVP_MD *)0x0) {
    iVar1 = EVP_Digest(param_3,0x20,local_78,(uint *)0x0,type,(ENGINE *)0x0);
    EVP_MD_free(type);
    if (iVar1 != 0) {
      local_78[0] = local_78[0] & 0xf8;
      local_59 = local_59 & 0x3f | 0x40;
      ge_scalarmult_base(auStack_118,local_78);
      ge_p3_tobytes(param_2,auStack_118);
      OPENSSL_cleanse(local_78,0x40);
      uVar2 = 1;
      goto LAB_001073bb;
    }
    OPENSSL_cleanse(local_78,0x40);
  }
  uVar2 = 0;
LAB_001073bb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



bool ossl_x25519(void *param_1)

{
  int iVar1;
  
  x25519_scalar_mult();
  iVar1 = CRYPTO_memcmp(kZeros_0,param_1,0x20);
  return iVar1 != 0;
}



void ossl_x25519_public_from_private(undefined8 param_1,ulong *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_188 [5];
  undefined8 local_160;
  undefined8 local_158 [5];
  undefined8 local_130;
  undefined1 local_128 [48];
  undefined1 local_f8 [40];
  undefined8 local_d0 [5];
  undefined8 local_a8 [10];
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  long local_30;
  
  local_48 = param_2[2];
  uStack_50 = param_2[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  puVar3 = local_f8;
  local_58 = *param_2 & 0xfffffffffffffff8;
  uStack_40 = param_2[3] & 0x7fffffffffffffff | 0x4000000000000000;
  ge_scalarmult_base(puVar3,&local_58);
  puVar4 = local_188;
  puVar6 = puVar3;
  do {
    puVar1 = (undefined8 *)(puVar6 + 0x50);
    puVar2 = (undefined8 *)(puVar6 + 0x28);
    puVar5 = puVar4 + 1;
    puVar6 = puVar6 + 8;
    *puVar4 = CONCAT44((int)((ulong)*puVar1 >> 0x20) + (int)((ulong)*puVar2 >> 0x20),
                       (int)*puVar1 + (int)*puVar2);
    puVar4 = puVar5;
  } while (&local_160 != puVar5);
  puVar4 = local_158;
  do {
    puVar1 = (undefined8 *)(puVar3 + 0x50);
    puVar2 = (undefined8 *)(puVar3 + 0x28);
    puVar5 = puVar4 + 1;
    puVar3 = puVar3 + 8;
    *puVar4 = CONCAT44((int)((ulong)*puVar1 >> 0x20) - (int)((ulong)*puVar2 >> 0x20),
                       (int)*puVar1 - (int)*puVar2);
    puVar4 = puVar5;
  } while (&local_130 != puVar5);
  fe_invert(local_128);
  fe_mul(local_188,local_188,local_128);
  fe_tobytes(param_1,local_188);
  OPENSSL_cleanse(&local_58,0x20);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


