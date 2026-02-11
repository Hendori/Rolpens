
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



void ge_p2_dbl(int *param_1,int *param_2)

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
  undefined1 auVar12 [16];
  int iVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  int iVar17;
  int iVar18;
  int iVar19;
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
  long in_FS_OFFSET;
  int iVar38;
  int iVar39;
  int iVar40;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int local_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fe_sq();
  fe_sq(param_1 + 0x14,param_2 + 10);
  iVar47 = param_2[0x15];
  iVar13 = param_2[0x1b];
  lVar31 = (long)iVar13;
  iVar14 = param_2[0x1d];
  lVar20 = (long)param_2[0x17];
  lVar22 = (long)param_2[0x19];
  lVar30 = (long)param_2[0x16];
  lVar32 = (long)(param_2[0x17] * 2);
  lVar27 = (long)(iVar47 * 2);
  iVar15 = param_2[0x14];
  lVar34 = (long)param_2[0x1a];
  lVar23 = (long)param_2[0x1c];
  lVar21 = (long)param_2[0x18];
  lVar24 = (long)(param_2[0x19] * 2);
  lVar29 = (long)(iVar13 * 2);
  lVar26 = (long)(iVar15 * 2);
  lVar35 = (long)(param_2[0x16] * 2);
  lVar25 = (long)(iVar14 * 0x26);
  lVar37 = (long)(param_2[0x18] * 2);
  lVar33 = (long)(param_2[0x1c] * 0x13);
  lVar28 = (long)(iVar13 * 0x26);
  lVar36 = (long)(param_2[0x1a] * 0x13);
  lVar16 = (lVar32 * lVar28 + lVar35 * lVar33 + lVar27 * lVar25 + (long)iVar15 * (long)iVar15 +
            lVar37 * lVar36 + (param_2[0x19] * 0x26) * lVar22) * 2;
  lVar6 = (lVar28 * lVar31 +
          (param_2[0x1a] * 2) * lVar33 +
          lVar24 * lVar25 + lVar30 * lVar30 + lVar27 * lVar32 + lVar26 * lVar21) * 2;
  uVar1 = lVar16 + 0x2000000;
  uVar2 = lVar6 + 0x2000000;
  lVar7 = ((long)uVar1 >> 0x1a) +
          (lVar24 * lVar36 + lVar21 * lVar28 + lVar32 * lVar33 + lVar30 * lVar25 + iVar47 * lVar26)
          * 2;
  lVar3 = lVar7 + 0x1000000;
  lVar8 = ((long)uVar2 >> 0x1a) +
          (lVar29 * lVar33 + lVar34 * lVar25 + lVar20 * lVar35 + lVar21 * lVar27 + lVar22 * lVar26)
          * 2;
  lVar4 = lVar8 + 0x1000000;
  lVar9 = (lVar3 >> 0x19) +
          (lVar24 * lVar28 + lVar37 * lVar33 + iVar47 * lVar27 + lVar26 * lVar30 + lVar32 * lVar25 +
          lVar36 * lVar34) * 2;
  lVar36 = lVar9 + 0x2000000;
  lVar10 = (lVar4 >> 0x19) +
           (lVar29 * lVar25 + lVar20 * lVar32 + lVar35 * lVar21 + lVar27 * lVar24 + lVar26 * lVar34
           + lVar33 * lVar23) * 2;
  lVar5 = lVar10 + 0x2000000;
  lVar28 = (lVar36 >> 0x1a) +
           (lVar24 * lVar33 + lVar21 * lVar25 + lVar30 * lVar27 + lVar20 * lVar26 + lVar34 * lVar28)
           * 2;
  lVar30 = (lVar5 >> 0x1a) +
           (lVar21 * lVar32 + lVar22 * lVar35 + lVar34 * lVar27 + lVar31 * lVar26 + lVar23 * lVar25)
           * 2;
  lVar11 = lVar28 + 0x1000000;
  lVar33 = (lVar11 >> 0x19) + (lVar6 - (uVar2 & 0xfffffffffc000000));
  lVar6 = lVar30 + 0x1000000;
  lVar24 = (lVar6 >> 0x19) +
           (lVar21 * lVar21 + lVar24 * lVar32 + lVar35 * lVar34 + lVar29 * lVar27 + lVar23 * lVar26
           + lVar25 * iVar14) * 2;
  lVar20 = lVar33 + 0x2000000;
  lVar21 = lVar24 + 0x2000000;
  lVar23 = (lVar21 >> 0x1a) +
           (lVar26 * iVar14 + lVar23 * lVar27 + lVar31 * lVar35 + lVar34 * lVar32 + lVar37 * lVar22)
           * 2;
  lVar22 = lVar23 + 0x1000000;
  param_1[0x27] = (int)lVar23 - ((uint)lVar22 & 0xfe000000);
  lVar22 = (lVar22 >> 0x19) * 0x13 + (lVar16 - (uVar1 & 0xfffffffffc000000));
  param_1[0x20] = (int)lVar9 - ((uint)lVar36 & 0xfc000000);
  lVar36 = lVar22 + 0x2000000;
  param_1[0x26] = (int)lVar24 - ((uint)lVar21 & 0xfc000000);
  param_1[0x1e] = (int)lVar22 - ((uint)lVar36 & 0xfc000000);
  param_1[0x1f] = (int)(lVar36 >> 0x1a) + ((int)lVar7 - ((uint)lVar3 & 0xfe000000));
  param_1[0x21] = (int)lVar28 - ((uint)lVar11 & 0xfe000000);
  param_1[0x22] = (int)lVar33 - ((uint)lVar20 & 0xfc000000);
  param_1[0x23] = (int)(lVar20 >> 0x1a) + ((int)lVar8 - ((uint)lVar4 & 0xfe000000));
  param_1[0x24] = (int)lVar10 - ((uint)lVar5 & 0xfc000000);
  param_1[0x25] = (int)lVar30 - ((uint)lVar6 & 0xfe000000);
  if ((ulong)((long)param_1 + (0x28 - (long)(param_2 + 1))) < 0x31) {
    param_1[10] = param_2[10] + *param_2;
    param_1[0xb] = param_2[1] + param_2[0xb];
    param_1[0xc] = param_2[0xc] + param_2[2];
    param_1[0xd] = param_2[0xd] + param_2[3];
    param_1[0xe] = param_2[4] + param_2[0xe];
    param_1[0xf] = param_2[0xf] + param_2[5];
    param_1[0x10] = param_2[0x10] + param_2[6];
    param_1[0x11] = param_2[0x11] + param_2[7];
    param_1[0x12] = param_2[0x12] + param_2[8];
    param_1[0x13] = param_2[0x13] + param_2[9];
  }
  else {
    iVar47 = param_2[1];
    iVar13 = param_2[2];
    iVar14 = param_2[3];
    iVar15 = param_2[0xb];
    iVar17 = param_2[0xc];
    iVar44 = param_2[0xd];
    param_1[10] = *param_2 + param_2[10];
    param_1[0xb] = iVar47 + iVar15;
    param_1[0xc] = iVar13 + iVar17;
    param_1[0xd] = iVar14 + iVar44;
    iVar47 = param_2[5];
    iVar13 = param_2[6];
    iVar14 = param_2[7];
    iVar15 = param_2[0xf];
    iVar17 = param_2[0x10];
    iVar44 = param_2[0x11];
    param_1[0xe] = param_2[4] + param_2[0xe];
    param_1[0xf] = iVar47 + iVar15;
    param_1[0x10] = iVar13 + iVar17;
    param_1[0x11] = iVar14 + iVar44;
    *(ulong *)(param_1 + 0x12) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20) +
                  (int)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20),
                  (int)*(undefined8 *)(param_2 + 8) + (int)*(undefined8 *)(param_2 + 0x12));
  }
  fe_sq(&local_68);
  iVar46 = (int)*(undefined8 *)(param_1 + 0x1c);
  iVar47 = (int)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  iVar44 = (int)*(undefined8 *)(param_1 + 8);
  iVar38 = iVar46 - iVar44;
  iVar45 = (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  iVar39 = iVar47 - iVar45;
  iVar13 = param_1[0x14];
  iVar14 = param_1[0x15];
  iVar15 = param_1[0x16];
  iVar17 = param_1[0x17];
  iVar46 = iVar46 + iVar44;
  iVar47 = iVar47 + iVar45;
  param_1[10] = param_1[0x14] + *param_1;
  param_1[0xb] = param_1[0x15] + param_1[1];
  param_1[0xc] = param_1[0x16] + param_1[2];
  param_1[0xd] = param_1[0x17] + param_1[3];
  iVar44 = *param_1;
  iVar45 = param_1[1];
  iVar18 = param_1[2];
  iVar19 = param_1[3];
  *(ulong *)(param_1 + 0x1c) = CONCAT44(iVar39,iVar38);
  *param_1 = local_68 - (param_1[0x14] + *param_1);
  param_1[1] = iStack_64 - (param_1[0x15] + param_1[1]);
  param_1[2] = iStack_60 - (param_1[0x16] + param_1[2]);
  param_1[3] = iStack_5c - (param_1[0x17] + param_1[3]);
  auVar12 = *(undefined1 (*) [16])(param_1 + 4);
  param_1[0xe] = param_1[0x18] + param_1[4];
  param_1[0xf] = param_1[0x19] + param_1[5];
  param_1[0x10] = param_1[0x1a] + param_1[6];
  param_1[0x11] = param_1[0x1b] + param_1[7];
  param_1[0x14] = iVar13 - iVar44;
  param_1[0x15] = iVar14 - iVar45;
  param_1[0x16] = iVar15 - iVar18;
  param_1[0x17] = iVar17 - iVar19;
  param_1[4] = local_58 - (param_1[0x18] + param_1[4]);
  param_1[5] = iStack_54 - (param_1[0x19] + param_1[5]);
  param_1[6] = iStack_50 - (param_1[0x1a] + param_1[6]);
  param_1[7] = iStack_4c - (param_1[0x1b] + param_1[7]);
  iVar40 = param_1[0x18] - auVar12._0_4_;
  iVar41 = param_1[0x19] - auVar12._4_4_;
  iVar42 = param_1[0x1a] - auVar12._8_4_;
  iVar43 = param_1[0x1b] - auVar12._12_4_;
  param_1[0x18] = iVar40;
  param_1[0x19] = iVar41;
  param_1[0x1a] = iVar42;
  param_1[0x1b] = iVar43;
  *(ulong *)(param_1 + 0x12) = CONCAT44(iVar47,iVar46);
  *(ulong *)(param_1 + 8) = CONCAT44((int)((ulong)local_48 >> 0x20) - iVar47,(int)local_48 - iVar46)
  ;
  param_1[0x1e] = param_1[0x1e] - (iVar13 - iVar44);
  param_1[0x1f] = param_1[0x1f] - (iVar14 - iVar45);
  param_1[0x20] = param_1[0x20] - (iVar15 - iVar18);
  param_1[0x21] = param_1[0x21] - (iVar17 - iVar19);
  param_1[0x22] = param_1[0x22] - iVar40;
  param_1[0x23] = param_1[0x23] - iVar41;
  param_1[0x24] = param_1[0x24] - iVar42;
  param_1[0x25] = param_1[0x25] - iVar43;
  *(ulong *)(param_1 + 0x26) =
       CONCAT44((int)((ulong)*(undefined8 *)(param_1 + 0x26) >> 0x20) - iVar39,
                (int)*(undefined8 *)(param_1 + 0x26) - iVar38);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ge_madd(int *param_1,int *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  if ((ulong)((long)param_1 - (long)(param_2 + 1)) < 0x31) {
    *param_1 = *param_2 + param_2[10];
    param_1[1] = param_2[1] + param_2[0xb];
    param_1[2] = param_2[2] + param_2[0xc];
    param_1[3] = param_2[3] + param_2[0xd];
    param_1[4] = param_2[4] + param_2[0xe];
    param_1[5] = param_2[5] + param_2[0xf];
    param_1[6] = param_2[6] + param_2[0x10];
    param_1[7] = param_2[7] + param_2[0x11];
    param_1[8] = param_2[8] + param_2[0x12];
    param_1[9] = param_2[9] + param_2[0x13];
  }
  else {
    iVar2 = param_2[0xb];
    iVar13 = param_2[0xc];
    iVar3 = param_2[0xd];
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    iVar6 = param_2[3];
    *param_1 = param_2[10] + *param_2;
    param_1[1] = iVar2 + iVar4;
    param_1[2] = iVar13 + iVar5;
    param_1[3] = iVar3 + iVar6;
    iVar2 = param_2[0xf];
    iVar13 = param_2[0x10];
    iVar3 = param_2[0x11];
    iVar4 = param_2[5];
    iVar5 = param_2[6];
    iVar6 = param_2[7];
    param_1[4] = param_2[0xe] + param_2[4];
    param_1[5] = iVar2 + iVar4;
    param_1[6] = iVar13 + iVar5;
    param_1[7] = iVar3 + iVar6;
    *(ulong *)(param_1 + 8) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) +
                  (int)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                  (int)*(undefined8 *)(param_2 + 0x12) + (int)*(undefined8 *)(param_2 + 8));
  }
  if ((ulong)((long)param_1 + (0x28 - (long)(param_2 + 1))) < 0x31) {
    param_1[10] = param_2[10] - *param_2;
    param_1[0xb] = param_2[0xb] - param_2[1];
    param_1[0xc] = param_2[0xc] - param_2[2];
    param_1[0xd] = param_2[0xd] - param_2[3];
    param_1[0xe] = param_2[0xe] - param_2[4];
    param_1[0xf] = param_2[0xf] - param_2[5];
    param_1[0x10] = param_2[0x10] - param_2[6];
    param_1[0x11] = param_2[0x11] - param_2[7];
    param_1[0x12] = param_2[0x12] - param_2[8];
    param_1[0x13] = param_2[0x13] - param_2[9];
  }
  else {
    iVar2 = param_2[0xb];
    iVar13 = param_2[0xc];
    iVar3 = param_2[0xd];
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    iVar6 = param_2[3];
    param_1[10] = param_2[10] - *param_2;
    param_1[0xb] = iVar2 - iVar4;
    param_1[0xc] = iVar13 - iVar5;
    param_1[0xd] = iVar3 - iVar6;
    iVar2 = param_2[0xf];
    iVar13 = param_2[0x10];
    iVar3 = param_2[0x11];
    iVar4 = param_2[5];
    iVar5 = param_2[6];
    iVar6 = param_2[7];
    param_1[0xe] = param_2[0xe] - param_2[4];
    param_1[0xf] = iVar2 - iVar4;
    param_1[0x10] = iVar13 - iVar5;
    param_1[0x11] = iVar3 - iVar6;
    *(ulong *)(param_1 + 0x12) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) -
                  (int)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                  (int)*(undefined8 *)(param_2 + 0x12) - (int)*(undefined8 *)(param_2 + 8));
  }
  fe_mul(param_1 + 0x14,param_1,param_3);
  fe_mul(param_1 + 10,param_1 + 10,param_3 + 0x28);
  fe_mul(param_1 + 0x1e,param_3 + 0x50,param_2 + 0x1e);
  iVar13 = param_2[0x14];
  iVar3 = param_2[0x15];
  iVar4 = param_2[0x16];
  iVar5 = param_2[0x17];
  iVar6 = param_2[0x18];
  iVar7 = param_2[0x19];
  iVar8 = param_2[0x1a];
  iVar9 = param_2[0x1b];
  uVar1 = *(undefined8 *)(param_2 + 0x1c);
  *param_1 = param_1[0x14] - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  iVar10 = (int)uVar1 * 2;
  iVar11 = (int)((ulong)uVar1 >> 0x20) * 2;
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  iVar12 = (int)*(undefined8 *)(param_1 + 0x1c);
  iVar2 = (int)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  iVar14 = (int)*(undefined8 *)(param_1 + 0x12);
  iVar15 = (int)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20);
  *(ulong *)(param_1 + 0x12) = CONCAT44(iVar2 + iVar15,iVar12 + iVar14);
  *(ulong *)(param_1 + 8) = CONCAT44(iVar2 - iVar15,iVar12 - iVar14);
  iVar2 = param_1[0x14];
  iVar12 = param_1[0x15];
  iVar14 = param_1[0x16];
  iVar15 = param_1[0x17];
  param_1[0x14] = param_1[0x1e] + iVar13 * 2;
  param_1[0x15] = param_1[0x1f] + iVar3 * 2;
  param_1[0x16] = param_1[0x20] + iVar4 * 2;
  param_1[0x17] = param_1[0x21] + iVar5 * 2;
  param_1[10] = iVar2 + param_1[10];
  param_1[0xb] = iVar12 + param_1[0xb];
  param_1[0xc] = iVar14 + param_1[0xc];
  param_1[0xd] = iVar15 + param_1[0xd];
  iVar2 = param_1[0x18];
  iVar12 = param_1[0x19];
  iVar14 = param_1[0x1a];
  iVar15 = param_1[0x1b];
  param_1[0x1e] = iVar13 * 2 - param_1[0x1e];
  param_1[0x1f] = iVar3 * 2 - param_1[0x1f];
  param_1[0x20] = iVar4 * 2 - param_1[0x20];
  param_1[0x21] = iVar5 * 2 - param_1[0x21];
  param_1[0x18] = param_1[0x22] + iVar6 * 2;
  param_1[0x19] = param_1[0x23] + iVar7 * 2;
  param_1[0x1a] = param_1[0x24] + iVar8 * 2;
  param_1[0x1b] = param_1[0x25] + iVar9 * 2;
  param_1[0xe] = iVar2 + param_1[0xe];
  param_1[0xf] = iVar12 + param_1[0xf];
  param_1[0x10] = iVar14 + param_1[0x10];
  param_1[0x11] = iVar15 + param_1[0x11];
  param_1[0x22] = iVar6 * 2 - param_1[0x22];
  param_1[0x23] = iVar7 * 2 - param_1[0x23];
  param_1[0x24] = iVar8 * 2 - param_1[0x24];
  param_1[0x25] = iVar9 * 2 - param_1[0x25];
  iVar13 = (int)*(undefined8 *)(param_1 + 0x26);
  iVar2 = (int)((ulong)*(undefined8 *)(param_1 + 0x26) >> 0x20);
  *(ulong *)(param_1 + 0x1c) = CONCAT44(iVar2 + iVar11,iVar13 + iVar10);
  *(ulong *)(param_1 + 0x26) = CONCAT44(iVar11 - iVar2,iVar10 - iVar13);
  return;
}



void ge_add(int *param_1,int *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  
  if ((ulong)((long)param_1 - (long)(param_2 + 1)) < 0x31) {
    *param_1 = *param_2 + param_2[10];
    param_1[1] = param_2[1] + param_2[0xb];
    param_1[2] = param_2[2] + param_2[0xc];
    param_1[3] = param_2[3] + param_2[0xd];
    param_1[4] = param_2[4] + param_2[0xe];
    param_1[5] = param_2[5] + param_2[0xf];
    param_1[6] = param_2[6] + param_2[0x10];
    param_1[7] = param_2[7] + param_2[0x11];
    param_1[8] = param_2[8] + param_2[0x12];
    param_1[9] = param_2[9] + param_2[0x13];
  }
  else {
    iVar1 = param_2[0xb];
    iVar12 = param_2[0xc];
    iVar2 = param_2[0xd];
    iVar3 = param_2[1];
    iVar4 = param_2[2];
    iVar5 = param_2[3];
    *param_1 = param_2[10] + *param_2;
    param_1[1] = iVar1 + iVar3;
    param_1[2] = iVar12 + iVar4;
    param_1[3] = iVar2 + iVar5;
    iVar1 = param_2[0xf];
    iVar12 = param_2[0x10];
    iVar2 = param_2[0x11];
    iVar3 = param_2[5];
    iVar4 = param_2[6];
    iVar5 = param_2[7];
    param_1[4] = param_2[0xe] + param_2[4];
    param_1[5] = iVar1 + iVar3;
    param_1[6] = iVar12 + iVar4;
    param_1[7] = iVar2 + iVar5;
    *(ulong *)(param_1 + 8) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) +
                  (int)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                  (int)*(undefined8 *)(param_2 + 0x12) + (int)*(undefined8 *)(param_2 + 8));
  }
  if ((ulong)((long)param_1 + (0x28 - (long)(param_2 + 1))) < 0x31) {
    param_1[10] = param_2[10] - *param_2;
    param_1[0xb] = param_2[0xb] - param_2[1];
    param_1[0xc] = param_2[0xc] - param_2[2];
    param_1[0xd] = param_2[0xd] - param_2[3];
    param_1[0xe] = param_2[0xe] - param_2[4];
    param_1[0xf] = param_2[0xf] - param_2[5];
    param_1[0x10] = param_2[0x10] - param_2[6];
    param_1[0x11] = param_2[0x11] - param_2[7];
    param_1[0x12] = param_2[0x12] - param_2[8];
    param_1[0x13] = param_2[0x13] - param_2[9];
  }
  else {
    iVar1 = param_2[0xb];
    iVar12 = param_2[0xc];
    iVar2 = param_2[0xd];
    iVar3 = param_2[1];
    iVar4 = param_2[2];
    iVar5 = param_2[3];
    param_1[10] = param_2[10] - *param_2;
    param_1[0xb] = iVar1 - iVar3;
    param_1[0xc] = iVar12 - iVar4;
    param_1[0xd] = iVar2 - iVar5;
    iVar1 = param_2[0xf];
    iVar12 = param_2[0x10];
    iVar2 = param_2[0x11];
    iVar3 = param_2[5];
    iVar4 = param_2[6];
    iVar5 = param_2[7];
    param_1[0xe] = param_2[0xe] - param_2[4];
    param_1[0xf] = iVar1 - iVar3;
    param_1[0x10] = iVar12 - iVar4;
    param_1[0x11] = iVar2 - iVar5;
    *(ulong *)(param_1 + 0x12) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) -
                  (int)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                  (int)*(undefined8 *)(param_2 + 0x12) - (int)*(undefined8 *)(param_2 + 8));
  }
  fe_mul(param_1 + 0x14,param_1,param_3);
  fe_mul(param_1 + 10,param_1 + 10,param_3 + 0x28);
  fe_mul(param_1 + 0x1e,param_3 + 0x78,param_2 + 0x1e);
  fe_mul(param_1,param_2 + 0x14,param_3 + 0x50);
  iVar12 = *param_1;
  iVar2 = param_1[1];
  iVar3 = param_1[2];
  iVar4 = param_1[3];
  iVar5 = param_1[4];
  iVar6 = param_1[5];
  iVar7 = param_1[6];
  iVar8 = param_1[7];
  *param_1 = param_1[0x14] - param_1[10];
  param_1[1] = param_1[0x15] - param_1[0xb];
  param_1[2] = param_1[0x16] - param_1[0xc];
  param_1[3] = param_1[0x17] - param_1[0xd];
  iVar9 = (int)*(undefined8 *)(param_1 + 8) * 2;
  iVar10 = (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20) * 2;
  param_1[4] = param_1[0x18] - param_1[0xe];
  param_1[5] = param_1[0x19] - param_1[0xf];
  param_1[6] = param_1[0x1a] - param_1[0x10];
  param_1[7] = param_1[0x1b] - param_1[0x11];
  iVar11 = (int)*(undefined8 *)(param_1 + 0x1c);
  iVar1 = (int)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  iVar13 = (int)*(undefined8 *)(param_1 + 0x12);
  iVar14 = (int)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20);
  *(ulong *)(param_1 + 0x12) = CONCAT44(iVar1 + iVar14,iVar11 + iVar13);
  *(ulong *)(param_1 + 8) = CONCAT44(iVar1 - iVar14,iVar11 - iVar13);
  iVar1 = param_1[0x14];
  iVar11 = param_1[0x15];
  iVar13 = param_1[0x16];
  iVar14 = param_1[0x17];
  param_1[0x14] = param_1[0x1e] + iVar12 * 2;
  param_1[0x15] = param_1[0x1f] + iVar2 * 2;
  param_1[0x16] = param_1[0x20] + iVar3 * 2;
  param_1[0x17] = param_1[0x21] + iVar4 * 2;
  param_1[10] = iVar1 + param_1[10];
  param_1[0xb] = iVar11 + param_1[0xb];
  param_1[0xc] = iVar13 + param_1[0xc];
  param_1[0xd] = iVar14 + param_1[0xd];
  iVar1 = param_1[0x18];
  iVar11 = param_1[0x19];
  iVar13 = param_1[0x1a];
  iVar14 = param_1[0x1b];
  param_1[0x1e] = iVar12 * 2 - param_1[0x1e];
  param_1[0x1f] = iVar2 * 2 - param_1[0x1f];
  param_1[0x20] = iVar3 * 2 - param_1[0x20];
  param_1[0x21] = iVar4 * 2 - param_1[0x21];
  param_1[0x18] = param_1[0x22] + iVar5 * 2;
  param_1[0x19] = param_1[0x23] + iVar6 * 2;
  param_1[0x1a] = param_1[0x24] + iVar7 * 2;
  param_1[0x1b] = param_1[0x25] + iVar8 * 2;
  param_1[0xe] = iVar1 + param_1[0xe];
  param_1[0xf] = iVar11 + param_1[0xf];
  param_1[0x10] = iVar13 + param_1[0x10];
  param_1[0x11] = iVar14 + param_1[0x11];
  param_1[0x22] = iVar5 * 2 - param_1[0x22];
  param_1[0x23] = iVar6 * 2 - param_1[0x23];
  param_1[0x24] = iVar7 * 2 - param_1[0x24];
  param_1[0x25] = iVar8 * 2 - param_1[0x25];
  iVar12 = (int)*(undefined8 *)(param_1 + 0x26);
  iVar1 = (int)((ulong)*(undefined8 *)(param_1 + 0x26) >> 0x20);
  *(ulong *)(param_1 + 0x1c) = CONCAT44(iVar1 + iVar10,iVar12 + iVar9);
  *(ulong *)(param_1 + 0x26) = CONCAT44(iVar10 - iVar1,iVar9 - iVar12);
  return;
}



void cmov(uint *param_1,uint *param_2,byte param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = -(uint)param_3;
  if ((ulong)((long)param_1 - (long)(param_2 + 1)) < 9) {
    *param_1 = (*param_2 ^ *param_1) & uVar4 ^ *param_1;
    param_1[1] = (param_2[1] ^ param_1[1]) & uVar4 ^ param_1[1];
    param_1[2] = (param_2[2] ^ param_1[2]) & uVar4 ^ param_1[2];
    param_1[3] = (param_2[3] ^ param_1[3]) & uVar4 ^ param_1[3];
    param_1[4] = (param_2[4] ^ param_1[4]) & uVar4 ^ param_1[4];
    param_1[5] = (param_2[5] ^ param_1[5]) & uVar4 ^ param_1[5];
    param_1[6] = (param_2[6] ^ param_1[6]) & uVar4 ^ param_1[6];
    param_1[7] = (param_2[7] ^ param_1[7]) & uVar4 ^ param_1[7];
    param_1[8] = (param_2[8] ^ param_1[8]) & uVar4 ^ param_1[8];
    param_1[9] = (param_2[9] ^ param_1[9]) & uVar4 ^ param_1[9];
  }
  else {
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    *param_1 = (*param_2 ^ *param_1) & uVar4 ^ *param_1;
    param_1[1] = (uVar1 ^ param_1[1]) & uVar4 ^ param_1[1];
    param_1[2] = (uVar2 ^ param_1[2]) & uVar4 ^ param_1[2];
    param_1[3] = (uVar3 ^ param_1[3]) & uVar4 ^ param_1[3];
    uVar1 = param_2[5];
    uVar2 = param_2[6];
    uVar3 = param_2[7];
    param_1[4] = (param_2[4] ^ param_1[4]) & uVar4 ^ param_1[4];
    param_1[5] = (uVar1 ^ param_1[5]) & uVar4 ^ param_1[5];
    param_1[6] = (uVar2 ^ param_1[6]) & uVar4 ^ param_1[6];
    param_1[7] = (uVar3 ^ param_1[7]) & uVar4 ^ param_1[7];
    *(ulong *)(param_1 + 8) =
         (*(ulong *)(param_2 + 8) ^ *(ulong *)(param_1 + 8)) & CONCAT44(uVar4,uVar4) ^
         *(ulong *)(param_1 + 8);
  }
  if ((ulong)((long)param_1 + (-4 - (long)param_2)) < 9) {
    param_1[10] = (param_2[10] ^ param_1[10]) & uVar4 ^ param_1[10];
    param_1[0xb] = (param_2[0xb] ^ param_1[0xb]) & uVar4 ^ param_1[0xb];
    param_1[0xc] = (param_2[0xc] ^ param_1[0xc]) & uVar4 ^ param_1[0xc];
    param_1[0xd] = (param_2[0xd] ^ param_1[0xd]) & uVar4 ^ param_1[0xd];
    param_1[0xe] = (param_2[0xe] ^ param_1[0xe]) & uVar4 ^ param_1[0xe];
    param_1[0xf] = (param_2[0xf] ^ param_1[0xf]) & uVar4 ^ param_1[0xf];
    param_1[0x10] = (param_2[0x10] ^ param_1[0x10]) & uVar4 ^ param_1[0x10];
    param_1[0x11] = (param_2[0x11] ^ param_1[0x11]) & uVar4 ^ param_1[0x11];
    param_1[0x12] = (param_2[0x12] ^ param_1[0x12]) & uVar4 ^ param_1[0x12];
    param_1[0x13] = (param_2[0x13] ^ param_1[0x13]) & uVar4 ^ param_1[0x13];
  }
  else {
    uVar1 = param_2[0xb];
    uVar2 = param_2[0xc];
    uVar3 = param_2[0xd];
    param_1[10] = (param_2[10] ^ param_1[10]) & uVar4 ^ param_1[10];
    param_1[0xb] = (uVar1 ^ param_1[0xb]) & uVar4 ^ param_1[0xb];
    param_1[0xc] = (uVar2 ^ param_1[0xc]) & uVar4 ^ param_1[0xc];
    param_1[0xd] = (uVar3 ^ param_1[0xd]) & uVar4 ^ param_1[0xd];
    uVar1 = param_2[0xf];
    uVar2 = param_2[0x10];
    uVar3 = param_2[0x11];
    param_1[0xe] = (param_2[0xe] ^ param_1[0xe]) & uVar4 ^ param_1[0xe];
    param_1[0xf] = (uVar1 ^ param_1[0xf]) & uVar4 ^ param_1[0xf];
    param_1[0x10] = (uVar2 ^ param_1[0x10]) & uVar4 ^ param_1[0x10];
    param_1[0x11] = (uVar3 ^ param_1[0x11]) & uVar4 ^ param_1[0x11];
    *(ulong *)(param_1 + 0x12) =
         (*(ulong *)(param_2 + 0x12) ^ *(ulong *)(param_1 + 0x12)) & CONCAT44(uVar4,uVar4) ^
         *(ulong *)(param_1 + 0x12);
  }
  if (8 < (ulong)((long)param_1 + (-4 - (long)param_2))) {
    uVar1 = param_2[0x15];
    uVar2 = param_2[0x16];
    uVar3 = param_2[0x17];
    param_1[0x14] = (param_2[0x14] ^ param_1[0x14]) & uVar4 ^ param_1[0x14];
    param_1[0x15] = (uVar1 ^ param_1[0x15]) & uVar4 ^ param_1[0x15];
    param_1[0x16] = (uVar2 ^ param_1[0x16]) & uVar4 ^ param_1[0x16];
    param_1[0x17] = (uVar3 ^ param_1[0x17]) & uVar4 ^ param_1[0x17];
    uVar1 = param_2[0x19];
    uVar2 = param_2[0x1a];
    uVar3 = param_2[0x1b];
    param_1[0x18] = (param_2[0x18] ^ param_1[0x18]) & uVar4 ^ param_1[0x18];
    param_1[0x19] = (uVar1 ^ param_1[0x19]) & uVar4 ^ param_1[0x19];
    param_1[0x1a] = (uVar2 ^ param_1[0x1a]) & uVar4 ^ param_1[0x1a];
    param_1[0x1b] = (uVar3 ^ param_1[0x1b]) & uVar4 ^ param_1[0x1b];
    *(ulong *)(param_1 + 0x1c) =
         CONCAT44(uVar4,uVar4) & (*(ulong *)(param_2 + 0x1c) ^ *(ulong *)(param_1 + 0x1c)) ^
         *(ulong *)(param_1 + 0x1c);
    return;
  }
  param_1[0x14] = (param_2[0x14] ^ param_1[0x14]) & uVar4 ^ param_1[0x14];
  param_1[0x15] = (param_2[0x15] ^ param_1[0x15]) & uVar4 ^ param_1[0x15];
  param_1[0x16] = (param_2[0x16] ^ param_1[0x16]) & uVar4 ^ param_1[0x16];
  param_1[0x17] = (param_2[0x17] ^ param_1[0x17]) & uVar4 ^ param_1[0x17];
  param_1[0x18] = (param_2[0x18] ^ param_1[0x18]) & uVar4 ^ param_1[0x18];
  param_1[0x19] = (param_2[0x19] ^ param_1[0x19]) & uVar4 ^ param_1[0x19];
  param_1[0x1a] = (param_2[0x1a] ^ param_1[0x1a]) & uVar4 ^ param_1[0x1a];
  param_1[0x1b] = (param_2[0x1b] ^ param_1[0x1b]) & uVar4 ^ param_1[0x1b];
  param_1[0x1c] = (param_2[0x1c] ^ param_1[0x1c]) & uVar4 ^ param_1[0x1c];
  param_1[0x1d] = (param_2[0x1d] ^ param_1[0x1d]) & uVar4 ^ param_1[0x1d];
  return;
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
LAB_001022b0:
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
        if (cVar1 - iVar2 < -0xf) goto LAB_001022b0;
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
    if ((iVar5 == 7) || (pcVar7 = pcVar7 + 1, iVar5 == 0x101 - iVar8)) goto LAB_001022b0;
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
  uStack_50 = _UNK_001104b8;
  local_48 = __LC1;
  uStack_40 = _UNK_001104c8;
  iVar1 = EVP_DigestInit_ex(param_1,param_2,(ENGINE *)0x0);
  if (iVar1 != 0) {
    bVar2 = true;
    if (param_3 == '\0') goto LAB_00102f3d;
    if (param_6 < 0x100) {
      local_5a = param_4 != '\0';
      local_59 = (undefined1)param_6;
      iVar1 = EVP_DigestUpdate(param_1,&local_58,0x20);
      if (iVar1 != 0) {
        iVar1 = EVP_DigestUpdate(param_1,&local_5a,2);
        if (iVar1 != 0) {
          iVar1 = EVP_DigestUpdate(param_1,param_5,param_6);
          bVar2 = iVar1 != 0;
          goto LAB_00102f3d;
        }
      }
    }
  }
  bVar2 = false;
LAB_00102f3d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void ge_p3_to_cached(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if ((ulong)((long)param_1 - (long)(param_2 + 1)) < 0x31) {
    *param_1 = *param_2 + param_2[10];
    param_1[1] = param_2[1] + param_2[0xb];
    param_1[2] = param_2[2] + param_2[0xc];
    param_1[3] = param_2[3] + param_2[0xd];
    param_1[4] = param_2[4] + param_2[0xe];
    param_1[5] = param_2[5] + param_2[0xf];
    param_1[6] = param_2[6] + param_2[0x10];
    param_1[7] = param_2[7] + param_2[0x11];
    param_1[8] = param_2[8] + param_2[0x12];
    param_1[9] = param_2[9] + param_2[0x13];
  }
  else {
    iVar1 = param_2[0xb];
    iVar2 = param_2[0xc];
    iVar3 = param_2[0xd];
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    iVar6 = param_2[3];
    *param_1 = param_2[10] + *param_2;
    param_1[1] = iVar1 + iVar4;
    param_1[2] = iVar2 + iVar5;
    param_1[3] = iVar3 + iVar6;
    iVar1 = param_2[0xf];
    iVar2 = param_2[0x10];
    iVar3 = param_2[0x11];
    iVar4 = param_2[5];
    iVar5 = param_2[6];
    iVar6 = param_2[7];
    param_1[4] = param_2[0xe] + param_2[4];
    param_1[5] = iVar1 + iVar4;
    param_1[6] = iVar2 + iVar5;
    param_1[7] = iVar3 + iVar6;
    *(ulong *)(param_1 + 8) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) +
                  (int)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                  (int)*(undefined8 *)(param_2 + 0x12) + (int)*(undefined8 *)(param_2 + 8));
  }
  if ((ulong)((long)param_1 + (0x28 - (long)(param_2 + 1))) < 0x31) {
    param_1[10] = param_2[10] - *param_2;
    param_1[0xb] = param_2[0xb] - param_2[1];
    param_1[0xc] = param_2[0xc] - param_2[2];
    param_1[0xd] = param_2[0xd] - param_2[3];
    param_1[0xe] = param_2[0xe] - param_2[4];
    param_1[0xf] = param_2[0xf] - param_2[5];
    param_1[0x10] = param_2[0x10] - param_2[6];
    param_1[0x11] = param_2[0x11] - param_2[7];
    param_1[0x12] = param_2[0x12] - param_2[8];
    param_1[0x13] = param_2[0x13] - param_2[9];
  }
  else {
    iVar1 = param_2[0xb];
    iVar2 = param_2[0xc];
    iVar3 = param_2[0xd];
    iVar4 = param_2[1];
    iVar5 = param_2[2];
    iVar6 = param_2[3];
    param_1[10] = param_2[10] - *param_2;
    param_1[0xb] = iVar1 - iVar4;
    param_1[0xc] = iVar2 - iVar5;
    param_1[0xd] = iVar3 - iVar6;
    iVar1 = param_2[0xf];
    iVar2 = param_2[0x10];
    iVar3 = param_2[0x11];
    iVar4 = param_2[5];
    iVar5 = param_2[6];
    iVar6 = param_2[7];
    param_1[0xe] = param_2[0xe] - param_2[4];
    param_1[0xf] = iVar1 - iVar4;
    param_1[0x10] = iVar2 - iVar5;
    param_1[0x11] = iVar3 - iVar6;
    *(ulong *)(param_1 + 0x12) =
         CONCAT44((int)((ulong)*(undefined8 *)(param_2 + 0x12) >> 0x20) -
                  (int)((ulong)*(undefined8 *)(param_2 + 8) >> 0x20),
                  (int)*(undefined8 *)(param_2 + 0x12) - (int)*(undefined8 *)(param_2 + 8));
  }
  memmove(param_1 + 0x14,param_2 + 0x14,0x28);
  fe_mul(param_1 + 0x1e,param_2 + 0x1e,d2);
  return;
}



void table_select(undefined8 *param_1,int param_2,uint param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined1 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  undefined8 local_18;
  long local_10;
  
  puVar6 = k25519Precomp;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  *(undefined4 *)((long)param_1 + 0x24) = 0;
  *(undefined4 *)param_1 = 1;
  param_1[9] = 0;
  uVar3 = param_3 + ((int)(char)param_3 >> 0x1f & param_3) * -2;
  *(undefined4 *)(param_1 + 5) = 1;
  param_1[0xe] = 0;
  *(undefined1 (*) [16])((long)param_1 + 4) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])((long)param_1 + 0x14) = (undefined1  [16])0x0;
  lVar5 = (long)param_2 * 0x3c0;
  *(undefined1 (*) [16])(param_1 + 7) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
  cmov(param_1,k25519Precomp + lVar5,((uVar3 ^ 1) & 0xff) - 1 >> 0x1f);
  cmov(param_1,puVar6 + lVar5 + 0x78,((uVar3 ^ 2) & 0xff) - 1 >> 0x1f);
  cmov(param_1,puVar6 + lVar5 + 0xf0,((uVar3 ^ 3) & 0xff) - 1 >> 0x1f);
  cmov(param_1,puVar6 + lVar5 + 0x168,((uVar3 ^ 4) & 0xff) - 1 >> 0x1f);
  cmov(param_1,puVar6 + lVar5 + 0x1e0,((uVar3 ^ 5) & 0xff) - 1 >> 0x1f);
  cmov(param_1,puVar6 + lVar5 + 600,((uVar3 ^ 6) & 0xff) - 1 >> 0x1f);
  uVar4 = uVar3 ^ 8;
  cmov(param_1,puVar6 + lVar5 + 0x2d0,((uVar3 ^ 7) & 0xff) - 1 >> 0x1f);
  cmov(param_1,puVar6 + lVar5 + 0x348,(uVar4 & 0xff) - 1 >> 0x1f);
  local_68 = param_1[9];
  auVar1 = *(undefined1 (*) [16])(param_1 + 10);
  auVar2 = *(undefined1 (*) [16])(param_1 + 0xc);
  local_88 = param_1[5];
  uStack_80 = param_1[6];
  local_38 = -auVar1._0_4_;
  iStack_34 = -auVar1._4_4_;
  iStack_30 = -auVar1._8_4_;
  iStack_2c = -auVar1._12_4_;
  local_28 = -auVar2._0_4_;
  iStack_24 = -auVar2._4_4_;
  iStack_20 = -auVar2._8_4_;
  iStack_1c = -auVar2._12_4_;
  local_40 = param_1[4];
  local_78 = param_1[7];
  uStack_70 = param_1[8];
  local_60 = *param_1;
  uStack_58 = param_1[1];
  local_50 = param_1[2];
  uStack_48 = param_1[3];
  local_18 = CONCAT44(-(int)((ulong)param_1[0xe] >> 0x20),-(int)param_1[0xe]);
  cmov(param_1,&local_88,(uint)(int)(char)param_3 >> 0x1f);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void x25519_scalar_mult(undefined4 *param_1,ulong *param_2,ulong *param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long in_FS_OFFSET;
  bool bVar11;
  ulong uVar12;
  ulong local_320;
  ulong local_318;
  ulong local_310;
  ulong local_308;
  ulong local_2f8;
  ulong local_2f0;
  ulong local_2d8;
  ulong local_2d0;
  ulong local_2c8;
  int local_2c0;
  ulong local_278;
  ulong uStack_270;
  ulong local_268;
  ulong local_260;
  ulong local_258;
  ulong local_248;
  ulong uStack_240;
  ulong local_238;
  ulong local_230;
  ulong local_228;
  ulong local_218;
  ulong uStack_210;
  ulong local_208;
  ulong uStack_200;
  ulong local_1f8;
  ulong local_1e8;
  ulong uStack_1e0;
  ulong local_1d8;
  ulong uStack_1d0;
  ulong local_1c8;
  ulong local_1b8;
  ulong uStack_1b0;
  ulong local_1a8;
  ulong uStack_1a0;
  ulong local_198;
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
  uStack_60 = param_2[1];
  local_58 = param_2[2];
  uVar4 = param_2[3];
  local_68 = *param_2 & 0xfffffffffffffff8;
  uStack_50._7_1_ = (byte)(uVar4 >> 0x38);
  if (iVar2 == 0) {
    local_2c8 = 0;
    local_2d0 = 0;
    local_2f0 = 0;
    local_2d8 = 0;
    local_310 = 0;
    bVar1 = uStack_50._7_1_ & 0x7f | 0x40;
    local_308 = 0;
    uStack_50 = uVar4 & 0x7fffffffffffffff | 0x4000000000000000;
    local_318 = 0;
    local_320 = 1;
    uVar4 = (ulong)*(byte *)((long)param_3 + 6) << 0x30;
    local_1e8 = (ulong)*(byte *)((long)param_3 + 4) << 0x20 |
                (ulong)*(byte *)((long)param_3 + 5) << 0x28 | (ulong)(uint)*param_3 |
                uVar4 & 0x7ffffffffffff;
    uStack_200 = 0;
    uStack_1e0 = uVar4 >> 0x33 |
                 ((ulong)*(byte *)((long)param_3 + 0xb) << 0x20 |
                  ((ulong)*(byte *)((long)param_3 + 0xc) & 0x3f) << 0x28 |
                 (ulong)*(uint *)((long)param_3 + 7)) << 5;
    local_1d8 = ((ulong)*(byte *)((long)param_3 + 0xc) << 0x2d) >> 0x33 |
                (((ulong)*(byte *)((long)param_3 + 0x13) & 1) << 0x30 |
                (ulong)*(byte *)((long)param_3 + 0x11) << 0x20 |
                (ulong)*(byte *)((long)param_3 + 0x12) << 0x28 |
                (ulong)*(uint *)((long)param_3 + 0xd)) << 2;
    local_1c8 = ((ulong)*(byte *)((long)param_3 + 0x19) << 0x2f) >> 0x33 |
                ((ulong)*(byte *)((long)param_3 + 0x1e) << 0x20 |
                 ((ulong)*(byte *)((long)param_3 + 0x1f) & 0x7f) << 0x28 |
                (ulong)*(uint *)((long)param_3 + 0x1a)) << 4;
    uStack_1d0 = ((ulong)*(byte *)((long)param_3 + 0x13) << 0x32) >> 0x33 |
                 ((ulong)(byte)param_3[3] << 0x20 |
                  ((ulong)*(byte *)((long)param_3 + 0x19) & 0xf) << 0x28 |
                 (ulong)*(uint *)((long)param_3 + 0x14)) << 7;
    uStack_210 = 0;
    local_248 = 1;
    local_2c0 = 0xfe;
    uStack_1b0 = 0;
    local_228 = 0;
    local_208 = 0;
    local_2f8 = 0;
    uVar3 = 0;
    local_278 = local_1e8;
    uStack_270 = uStack_1e0;
    local_268 = local_1d8;
    local_260 = uStack_1d0;
    local_258 = local_1c8;
    while( true ) {
      uVar6 = (int)(uint)bVar1 >> ((byte)local_2c0 & 7) & 1;
      local_198 = -(ulong)(uVar3 ^ uVar6);
      uVar4 = (local_1e8 ^ local_248) & local_198;
      local_1e8 = local_1e8 ^ uVar4;
      local_248 = local_248 ^ uVar4;
      uVar4 = (local_2f8 ^ uStack_1e0) & local_198;
      uStack_1e0 = uStack_1e0 ^ uVar4;
      local_2f8 = local_2f8 ^ uVar4;
      uVar4 = (local_310 ^ local_1d8) & local_198;
      local_310 = local_310 ^ uVar4;
      local_1d8 = uVar4 ^ local_1d8;
      uVar4 = (local_2f0 ^ uStack_1d0) & local_198;
      local_2f0 = local_2f0 ^ uVar4;
      uStack_1d0 = uVar4 ^ uStack_1d0;
      uVar4 = (local_1c8 ^ local_228) & local_198;
      local_228 = local_228 ^ uVar4;
      local_1c8 = uVar4 ^ local_1c8;
      uVar4 = (local_320 ^ local_318) & local_198;
      local_1b8 = local_320 ^ uVar4;
      local_318 = local_318 ^ uVar4;
      uVar4 = (uStack_1b0 ^ uStack_210) & local_198;
      uStack_210 = uStack_210 ^ uVar4;
      uStack_1b0 = uStack_1b0 ^ uVar4;
      uVar4 = (local_308 ^ local_208) & local_198;
      local_1a8 = local_308 ^ uVar4;
      local_208 = local_208 ^ uVar4;
      uStack_1a0 = (local_2d8 ^ uStack_200) & local_198;
      uStack_200 = uStack_200 ^ uStack_1a0;
      uStack_1a0 = uStack_1a0 ^ local_2d8;
      local_198 = (local_2d0 ^ local_2c8) & local_198;
      local_2c8 = local_2c8 ^ local_198;
      local_198 = local_198 ^ local_2d0;
      local_188 = (local_1e8 + 0xfffffffffffda) - local_1b8;
      lStack_180 = (uStack_1e0 + 0xffffffffffffe) - uStack_1b0;
      local_178 = (local_1d8 + 0xffffffffffffe) - local_1a8;
      lStack_170 = (uStack_1d0 + 0xffffffffffffe) - uStack_1a0;
      local_168 = (local_1c8 + 0xffffffffffffe) - local_198;
      local_158 = (local_248 + 0xfffffffffffda) - local_318;
      lStack_150 = (local_2f8 + 0xffffffffffffe) - uStack_210;
      local_148 = (local_310 + 0xffffffffffffe) - local_208;
      lStack_140 = (local_2f0 + 0xffffffffffffe) - uStack_200;
      local_138 = (local_228 + 0xffffffffffffe) - local_2c8;
      local_248 = local_318 + local_248;
      uStack_240 = uStack_210 + local_2f8;
      local_238 = local_208 + local_310;
      local_228 = local_2c8 + local_228;
      local_218 = local_1b8 + local_1e8;
      local_230 = uStack_200 + local_2f0;
      uStack_210 = uStack_1b0 + uStack_1e0;
      uStack_200 = uStack_1a0 + uStack_1d0;
      local_1f8 = local_198 + local_1c8;
      local_208 = local_1a8 + local_1d8;
      x25519_fe51_mul(&local_1b8,&local_188,&local_248);
      x25519_fe51_mul(&local_218,&local_218,&local_158);
      x25519_fe51_sqr(&local_188,&local_158);
      x25519_fe51_sqr(&local_158,&local_248);
      local_1e8 = local_1b8 + local_218;
      uStack_1e0 = uStack_1b0 + uStack_210;
      local_1c8 = local_198 + local_1f8;
      local_1f8 = (local_198 + 0xffffffffffffe) - local_1f8;
      local_1d8 = local_1a8 + local_208;
      uStack_1d0 = uStack_1a0 + uStack_200;
      local_218 = (local_1b8 + __LC3) - local_218;
      uStack_210 = (uStack_1b0 + _UNK_001104e8) - uStack_210;
      local_208 = (local_1a8 + __LC4) - local_208;
      uStack_200 = (uStack_1a0 + _UNK_001104f8) - uStack_200;
      x25519_fe51_mul(&local_248,&local_158,&local_188);
      local_138 = (local_138 + 0xffffffffffffe) - local_168;
      local_148 = (__LC4 + local_148) - local_178;
      lStack_140 = (_UNK_001104f8 + lStack_140) - lStack_170;
      local_158 = (__LC3 + local_158) - local_188;
      lStack_150 = (_UNK_001104e8 + lStack_150) - lStack_180;
      x25519_fe51_sqr(&local_218,&local_218);
      x25519_fe51_mul121666(&local_1b8,&local_158);
      x25519_fe51_sqr(&local_1e8,&local_1e8);
      local_178 = local_178 + local_1a8;
      lStack_170 = lStack_170 + uStack_1a0;
      local_168 = local_168 + local_198;
      local_188 = local_188 + local_1b8;
      lStack_180 = lStack_180 + uStack_1b0;
      x25519_fe51_mul(&local_1b8,&local_278,&local_218);
      x25519_fe51_mul(&local_218,&local_158,&local_188);
      local_2c0 = local_2c0 + -1;
      if (local_2c0 == -1) break;
      local_310 = local_238;
      local_320 = local_1b8;
      local_2f0 = local_230;
      local_318 = local_218;
      local_2d0 = local_198;
      local_2f8 = uStack_240;
      local_2c8 = local_1f8;
      bVar1 = *(byte *)((long)&local_68 + (long)(local_2c0 >> 3));
      local_308 = local_1a8;
      local_2d8 = uStack_1a0;
      uVar3 = uVar6;
    }
    iVar2 = 4;
    x25519_fe51_sqr(local_128,&local_218);
    x25519_fe51_sqr(local_f8,local_128);
    x25519_fe51_sqr(local_f8,local_f8);
    x25519_fe51_mul(local_f8,&local_218,local_f8);
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
    x25519_fe51_mul(&local_218,local_f8,local_128);
    x25519_fe51_mul(&local_248,&local_248,&local_218);
    uVar4 = (((((local_248 + 0x13 >> 0x33) + uStack_240 >> 0x33) + local_238 >> 0x33) + local_230 >>
             0x33) + local_228 >> 0x33) * 0x13 + local_248;
    uVar10 = uVar4 & 0x7ffffffffffff;
    *param_1 = (int)uVar10;
    uVar4 = (uVar4 >> 0x33) + uStack_240;
    uVar9 = uVar4 & 0x7ffffffffffff;
    uVar4 = (uVar4 >> 0x33) + local_238;
    uVar5 = uVar4 & 0x7ffffffffffff;
    uVar7 = (uVar4 >> 0x33) + local_230;
    uVar8 = uVar7 & 0x7ffffffffffff;
    uVar7 = (uVar7 >> 0x33) + local_228 & 0x7ffffffffffff;
    *(char *)(param_1 + 1) = (char)(uVar10 >> 0x20);
    *(char *)((long)param_1 + 5) = (char)(uVar10 >> 0x28);
    *(byte *)((long)param_1 + 6) = (char)uVar9 * '\b' | (byte)(uVar10 >> 0x30);
    *(char *)((long)param_1 + 7) = (char)(uVar9 >> 5);
    *(char *)(param_1 + 2) = (char)(uVar9 >> 0xd);
    *(char *)((long)param_1 + 9) = (char)(uVar9 >> 0x15);
    *(char *)((long)param_1 + 10) = (char)(uVar9 >> 0x1d);
    *(char *)((long)param_1 + 0xb) = (char)(uVar9 >> 0x25);
    *(byte *)(param_1 + 3) = (byte)(uint)(uVar9 >> 0x2d) | (byte)((int)uVar4 << 6);
    *(char *)((long)param_1 + 0xd) = (char)(uVar5 >> 2);
    *(char *)((long)param_1 + 0xe) = (char)(uVar5 >> 10);
    *(char *)((long)param_1 + 0xf) = (char)(uVar5 >> 0x12);
    *(char *)(param_1 + 4) = (char)(uVar5 >> 0x1a);
    *(char *)((long)param_1 + 0x11) = (char)(uVar5 >> 0x22);
    *(char *)((long)param_1 + 0x12) = (char)(uVar5 >> 0x2a);
    *(byte *)((long)param_1 + 0x13) = (byte)(uint)(uVar5 >> 0x32) | (char)uVar8 * '\x02';
    *(char *)(param_1 + 5) = (char)(uVar8 >> 7);
    *(char *)((long)param_1 + 0x15) = (char)(uVar8 >> 0xf);
    *(char *)((long)param_1 + 0x16) = (char)(uVar8 >> 0x17);
    *(char *)((long)param_1 + 0x17) = (char)(uVar8 >> 0x1f);
    *(char *)(param_1 + 6) = (char)(uVar8 >> 0x27);
    *(byte *)((long)param_1 + 0x19) = (byte)((int)uVar7 << 4) | (byte)(uint)(uVar8 >> 0x2f);
    *(char *)((long)param_1 + 0x1a) = (char)(uVar7 >> 4);
    *(char *)((long)param_1 + 0x1b) = (char)(uVar7 >> 0xc);
    *(char *)(param_1 + 7) = (char)(uVar7 >> 0x14);
    *(char *)((long)param_1 + 0x1d) = (char)(uVar7 >> 0x1c);
    *(char *)((long)param_1 + 0x1e) = (char)(uVar7 >> 0x24);
    *(char *)((long)param_1 + 0x1f) = (char)(uVar7 >> 0x2c);
    OPENSSL_cleanse(&local_68,0x20);
  }
  else {
    local_1d8 = param_3[2];
    local_230 = 0;
    local_1e8 = *param_3;
    uStack_1e0 = param_3[1];
    local_238 = 0;
    local_1a8 = 0;
    uStack_1a0 = 0;
    bVar1 = uStack_50._7_1_ & 0x7f | 0x40;
    uStack_1d0 = param_3[3] & 0x7fffffffffffffff;
    local_218 = 0;
    uStack_210 = 0;
    iVar2 = 0xfe;
    uStack_50 = uVar4 & 0x7fffffffffffffff | 0x4000000000000000;
    local_208 = 0;
    uStack_200 = 0;
    uVar3 = 0;
    local_248 = __LC2;
    uStack_240 = _UNK_001104d8;
    local_1b8 = __LC2;
    uStack_1b0 = _UNK_001104d8;
    local_278 = local_1e8;
    uStack_270 = uStack_1e0;
    local_268 = local_1d8;
    local_260 = uStack_1d0;
    while( true ) {
      uVar6 = (int)(uint)bVar1 >> ((byte)iVar2 & 7) & 1;
      uVar4 = -(ulong)(uVar3 ^ uVar6);
      uVar5 = (local_238 ^ local_1d8) & uVar4;
      local_238 = local_238 ^ uVar5;
      local_1d8 = uVar5 ^ local_1d8;
      uVar10 = (local_218 ^ local_1b8) & uVar4;
      uVar12 = (uStack_210 ^ uStack_1b0) & uVar4;
      uVar8 = (local_1a8 ^ local_208) & uVar4;
      uVar9 = (uStack_1a0 ^ uStack_200) & uVar4;
      uVar5 = (local_248 ^ local_1e8) & uVar4;
      uVar7 = (uStack_240 ^ uStack_1e0) & uVar4;
      local_218 = local_218 ^ uVar10;
      uStack_210 = uStack_210 ^ uVar12;
      local_1b8 = local_1b8 ^ uVar10;
      uStack_1b0 = uStack_1b0 ^ uVar12;
      uVar4 = uVar4 & (local_230 ^ uStack_1d0);
      local_230 = local_230 ^ uVar4;
      local_208 = local_208 ^ uVar8;
      uStack_200 = uStack_200 ^ uVar9;
      uStack_1d0 = uVar4 ^ uStack_1d0;
      local_248 = local_248 ^ uVar5;
      uStack_240 = uStack_240 ^ uVar7;
      local_1e8 = local_1e8 ^ uVar5;
      uStack_1e0 = uStack_1e0 ^ uVar7;
      local_1a8 = uVar8 ^ local_1a8;
      uStack_1a0 = uVar9 ^ uStack_1a0;
      x25519_fe64_sub(&local_188,&local_1e8,&local_1b8);
      x25519_fe64_sub(&local_158,&local_248,&local_218);
      x25519_fe64_add(&local_248,&local_248,&local_218);
      x25519_fe64_add(&local_218,&local_1e8,&local_1b8);
      x25519_fe64_mul(&local_1b8,&local_248,&local_188);
      x25519_fe64_mul(&local_218,&local_218,&local_158);
      x25519_fe64_sqr(&local_188,&local_158);
      x25519_fe64_sqr(&local_158,&local_248);
      x25519_fe64_add(&local_1e8,&local_1b8,&local_218);
      x25519_fe64_sub(&local_218,&local_1b8,&local_218);
      x25519_fe64_mul(&local_248,&local_158,&local_188);
      x25519_fe64_sub(&local_158,&local_158,&local_188);
      x25519_fe64_sqr(&local_218,&local_218);
      x25519_fe64_mul121666(&local_1b8,&local_158);
      x25519_fe64_sqr(&local_1e8,&local_1e8);
      x25519_fe64_add(&local_188,&local_188,&local_1b8);
      x25519_fe64_mul(&local_1b8,&local_278,&local_218);
      x25519_fe64_mul(&local_218,&local_158,&local_188);
      bVar11 = iVar2 == 0;
      iVar2 = iVar2 + -1;
      if (bVar11) break;
      bVar1 = *(byte *)((long)&local_68 + (long)(iVar2 >> 3));
      uVar3 = uVar6;
    }
    iVar2 = 4;
    x25519_fe64_sqr(local_128,&local_218);
    x25519_fe64_sqr(local_f8,local_128);
    x25519_fe64_sqr(local_f8,local_f8);
    x25519_fe64_mul(local_f8,&local_218,local_f8);
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
    x25519_fe64_mul(&local_218,local_f8,local_128);
    x25519_fe64_mul(&local_248,&local_248,&local_218);
    x25519_fe64_tobytes(param_1,&local_248);
    OPENSSL_cleanse(&local_68,0x20);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 ge_frombytes_vartime(int *param_1,uint *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
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
  byte bVar24;
  byte bVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  long lVar31;
  undefined8 uVar32;
  uint uVar33;
  long lVar34;
  int iVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long in_FS_OFFSET;
  int iVar41;
  int iVar42;
  int iVar43;
  int iVar44;
  int iVar45;
  int iVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  int iVar50;
  int iVar51;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  undefined8 local_168;
  int local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138;
  undefined1 local_128 [48];
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  undefined8 local_78;
  byte local_68 [40];
  long local_40;
  
  uVar28 = param_2[2];
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  bVar14 = *(byte *)((long)param_2 + 0xe);
  uVar26 = *param_2;
  bVar15 = *(byte *)((long)param_2 + 9);
  bVar16 = *(byte *)((long)param_2 + 7);
  lVar31 = ((ulong)*(byte *)((long)param_2 + 5) << 8 | (ulong)*(byte *)((long)param_2 + 6) << 0x10 |
           (ulong)(byte)param_2[1]) * 0x40;
  bVar17 = *(byte *)((long)param_2 + 0xf);
  bVar18 = *(byte *)((long)param_2 + 0xd);
  uVar27 = param_2[4];
  lVar38 = ((ulong)*(byte *)((long)param_2 + 0xb) << 8 | (ulong)(byte)param_2[3] << 0x10 |
           (ulong)*(byte *)((long)param_2 + 10)) * 8;
  uVar29 = param_2[5];
  bVar19 = *(byte *)((long)param_2 + 0x15);
  bVar20 = *(byte *)((long)param_2 + 0x16);
  bVar21 = *(byte *)((long)param_2 + 0x1b);
  bVar22 = *(byte *)((long)param_2 + 0x1f);
  bVar23 = *(byte *)((long)param_2 + 0x1a);
  uVar30 = param_2[7];
  lVar37 = ((ulong)(byte)param_2[6] << 8 | (ulong)*(byte *)((long)param_2 + 0x19) << 0x10 |
           (ulong)*(byte *)((long)param_2 + 0x17)) * 0x20;
  bVar24 = *(byte *)((long)param_2 + 0x1e);
  bVar25 = *(byte *)((long)param_2 + 0x1d);
  *(undefined1 (*) [16])(param_1 + 0x14) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x18) = (undefined1  [16])0x0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x14] = 1;
  uVar33 = (uint)(((ulong)bVar24 << 8 | (ulong)bVar22 << 0x10 | (ulong)bVar25) << 2) & 0x1fffffc;
  lVar1 = (ulong)uVar33 + 0x1000000;
  lVar2 = lVar31 + 0x1000000;
  lVar34 = (ulong)(-(int)(lVar1 >> 0x19) & 0x13) + (ulong)uVar26;
  lVar3 = lVar38 + 0x1000000;
  lVar40 = (lVar2 >> 0x19) +
           ((ulong)(byte)uVar28 << 8 | (ulong)bVar15 << 0x10 | (ulong)bVar16) * 0x20;
  lVar4 = (ulong)uVar27 + 0x1000000;
  lVar11 = (lVar3 >> 0x19) + ((ulong)bVar14 << 8 | (ulong)bVar17 << 0x10 | (ulong)bVar18) * 4;
  lVar5 = lVar37 + 0x1000000;
  lVar39 = (lVar4 >> 0x19) +
           ((ulong)bVar19 << 8 | (ulong)bVar20 << 0x10 | (ulong)(byte)uVar29) * 0x80;
  lVar6 = lVar34 + 0x2000000;
  lVar7 = lVar40 + 0x2000000;
  lVar36 = (lVar5 >> 0x19) +
           ((ulong)bVar21 << 8 | (ulong)(byte)uVar30 << 0x10 | (ulong)bVar23) * 0x10;
  lVar8 = lVar11 + 0x2000000;
  lVar9 = lVar39 + 0x2000000;
  lVar10 = lVar36 + 0x2000000;
  param_1[10] = (int)lVar34 - ((uint)lVar6 & 0xfc000000);
  param_1[0xb] = (int)(lVar6 >> 0x1a) + ((int)lVar31 - ((uint)lVar2 & 0xfe000000));
  param_1[0xd] = (int)(lVar7 >> 0x1a) + ((int)lVar38 - ((uint)lVar3 & 0xfe000000));
  param_1[0xc] = (int)lVar40 - ((uint)lVar7 & 0xfc000000);
  param_1[0xf] = (int)(lVar8 >> 0x1a) + (uVar27 - ((uint)lVar4 & 0xfe000000));
  param_1[0xe] = (int)lVar11 - ((uint)lVar8 & 0xfc000000);
  param_1[0x11] = (int)(lVar9 >> 0x1a) + ((int)lVar37 - ((uint)lVar5 & 0xfe000000));
  param_1[0x10] = (int)lVar39 - ((uint)lVar9 & 0xfc000000);
  param_1[0x13] = (int)(lVar10 >> 0x1a) + (uVar33 - ((uint)lVar1 & 0xfe000000));
  param_1[0x12] = (int)lVar36 - ((uint)lVar10 & 0xfc000000);
  fe_sq(&local_188,param_1 + 10);
  fe_mul(&local_158,&local_188,d);
  auVar12 = *(undefined1 (*) [16])(param_1 + 0x14);
  iVar35 = (int)*(undefined8 *)(param_1 + 0x1c);
  iVar41 = (int)local_168 - iVar35;
  iVar43 = (int)((ulong)*(undefined8 *)(param_1 + 0x1c) >> 0x20);
  iVar42 = (int)((ulong)local_168 >> 0x20) - iVar43;
  local_168 = CONCAT44(iVar42,iVar41);
  iVar48 = local_188 - auVar12._0_4_;
  iVar49 = iStack_184 - auVar12._4_4_;
  iVar50 = iStack_180 - auVar12._8_4_;
  iVar51 = iStack_17c - auVar12._12_4_;
  auVar13 = *(undefined1 (*) [16])(param_1 + 0x18);
  local_158 = local_158 + auVar12._0_4_;
  iStack_154 = iStack_154 + auVar12._4_4_;
  iStack_150 = iStack_150 + auVar12._8_4_;
  iStack_14c = iStack_14c + auVar12._12_4_;
  iVar44 = local_178 - auVar13._0_4_;
  iVar45 = iStack_174 - auVar13._4_4_;
  iVar46 = iStack_170 - auVar13._8_4_;
  iVar47 = iStack_16c - auVar13._12_4_;
  local_148 = local_148 + auVar13._0_4_;
  iStack_144 = iStack_144 + auVar13._4_4_;
  iStack_140 = iStack_140 + auVar13._8_4_;
  iStack_13c = iStack_13c + auVar13._12_4_;
  local_138 = CONCAT44((int)((ulong)local_138 >> 0x20) + iVar43,(int)local_138 + iVar35);
  local_188 = iVar48;
  iStack_184 = iVar49;
  iStack_180 = iVar50;
  iStack_17c = iVar51;
  local_178 = iVar44;
  iStack_174 = iVar45;
  iStack_170 = iVar46;
  iStack_16c = iVar47;
  fe_mul(local_128,&local_188,&local_158);
  fe_sq(local_f8,local_128);
  fe_sq(local_c8,local_f8);
  fe_sq(local_c8,local_c8);
  fe_mul(local_c8,local_128,local_c8);
  fe_mul(local_f8,local_f8,local_c8);
  iVar35 = 4;
  fe_sq(local_f8,local_f8);
  fe_mul(local_f8,local_c8,local_f8);
  fe_sq(local_c8,local_f8);
  do {
    fe_sq(local_c8,local_c8);
    iVar35 = iVar35 + -1;
  } while (iVar35 != 0);
  iVar35 = 9;
  fe_mul(local_f8,local_c8,local_f8);
  fe_sq(local_c8,local_f8);
  do {
    fe_sq(local_c8,local_c8);
    iVar35 = iVar35 + -1;
  } while (iVar35 != 0);
  iVar35 = 0x13;
  fe_mul(local_c8,local_c8,local_f8);
  fe_sq(&local_98,local_c8);
  do {
    fe_sq(&local_98,&local_98);
    iVar35 = iVar35 + -1;
  } while (iVar35 != 0);
  iVar35 = 9;
  fe_mul(local_c8,&local_98,local_c8);
  fe_sq(local_c8,local_c8);
  do {
    fe_sq(local_c8,local_c8);
    iVar35 = iVar35 + -1;
  } while (iVar35 != 0);
  iVar35 = 0x31;
  fe_mul(local_f8,local_c8,local_f8);
  fe_sq(local_c8,local_f8);
  do {
    fe_sq(local_c8,local_c8);
    iVar35 = iVar35 + -1;
  } while (iVar35 != 0);
  iVar35 = 99;
  fe_mul(local_c8,local_c8,local_f8);
  fe_sq(&local_98,local_c8);
  do {
    fe_sq(&local_98,&local_98);
    iVar35 = iVar35 + -1;
  } while (iVar35 != 0);
  iVar35 = 0x31;
  fe_mul(local_c8,&local_98,local_c8);
  fe_sq(local_c8,local_c8);
  do {
    fe_sq(local_c8,local_c8);
    iVar35 = iVar35 + -1;
  } while (iVar35 != 0);
  fe_mul(local_f8,local_c8,local_f8);
  fe_sq(local_f8,local_f8);
  fe_sq(local_f8,local_f8);
  fe_mul(param_1,local_f8,local_128);
  fe_mul(param_1,param_1,&local_188);
  fe_sq(local_c8,param_1);
  fe_mul(local_c8,local_c8,&local_158);
  local_98 = SUB164(local_c8._0_16_,0) - iVar48;
  iStack_94 = SUB164(local_c8._0_16_,4) - iVar49;
  iStack_90 = SUB164(local_c8._0_16_,8) - iVar50;
  iStack_8c = SUB164(local_c8._0_16_,0xc) - iVar51;
  local_88 = SUB164(local_c8._16_16_,0) - iVar44;
  iStack_84 = SUB164(local_c8._16_16_,4) - iVar45;
  iStack_80 = SUB164(local_c8._16_16_,8) - iVar46;
  iStack_7c = SUB164(local_c8._16_16_,0xc) - iVar47;
  local_78 = CONCAT44(SUB84(local_c8._32_8_,4) - iVar42,(int)local_c8._32_8_ - iVar41);
  fe_tobytes(local_68,&local_98);
  iVar35 = CRYPTO_memcmp(local_68,zero_1,0x20);
  if (iVar35 != 0) {
    local_78 = CONCAT44(SUB84(local_c8._32_8_,4) + iVar42,(int)local_c8._32_8_ + iVar41);
    local_98 = SUB164(local_c8._0_16_,0) + iVar48;
    iStack_94 = SUB164(local_c8._0_16_,4) + iVar49;
    iStack_90 = SUB164(local_c8._0_16_,8) + iVar50;
    iStack_8c = SUB164(local_c8._0_16_,0xc) + iVar51;
    local_88 = SUB164(local_c8._16_16_,0) + iVar44;
    iStack_84 = SUB164(local_c8._16_16_,4) + iVar45;
    iStack_80 = SUB164(local_c8._16_16_,8) + iVar46;
    iStack_7c = SUB164(local_c8._16_16_,0xc) + iVar47;
    fe_tobytes(local_68,&local_98);
    iVar35 = CRYPTO_memcmp(local_68,zero_1,0x20);
    if (iVar35 != 0) {
      uVar32 = 0xffffffff;
      goto LAB_00104bc4;
    }
    fe_mul(param_1,param_1,sqrtm1);
  }
  fe_tobytes(local_68,param_1);
  if (*(byte *)((long)param_2 + 0x1f) >> 7 != (local_68[0] & 1)) {
    *param_1 = -*param_1;
    param_1[1] = -param_1[1];
    param_1[2] = -param_1[2];
    param_1[3] = -param_1[3];
    param_1[4] = -param_1[4];
    param_1[5] = -param_1[5];
    param_1[6] = -param_1[6];
    param_1[7] = -param_1[7];
    *(ulong *)(param_1 + 8) =
         CONCAT44(-(int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20),
                  -(int)*(undefined8 *)(param_1 + 8));
  }
  fe_mul(param_1 + 0x1e,param_1,param_1 + 10);
  uVar32 = 0;
LAB_00104bc4:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar32;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  auVar10 = auVar10 & __LC5;
  auVar12 = *param_2 & __LC5;
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
  auVar11 = auVar11 & __LC5;
  auVar12 = __LC5 & auVar12;
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



void ge_p3_tobytes(ulong *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
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
  long in_FS_OFFSET;
  char local_114;
  byte local_108;
  byte local_104;
  byte local_100;
  byte local_fc;
  undefined1 local_f8 [48];
  undefined1 local_c8 [48];
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  char local_68 [40];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fe_invert(local_f8,param_2 + 0x50);
  fe_mul(local_c8,param_2,local_f8);
  fe_mul(&local_98,param_2 + 0x28,local_f8);
  uVar3 = (((((((((((local_74 * 0x13 + 0x1000000 >> 0x19) + local_98 >> 0x1a) + local_94 >> 0x19) +
                  local_90 >> 0x1a) + local_8c >> 0x19) + local_88 >> 0x1a) + local_84 >> 0x19) +
              local_80 >> 0x1a) + local_7c >> 0x19) + local_78 >> 0x1a) + local_74 >> 0x19) * 0x13 +
          local_98;
  uVar4 = uVar3 & 0x3ffffff;
  uVar10 = ((int)uVar3 >> 0x1a) + local_94;
  uVar11 = ((int)uVar10 >> 0x19) + local_90;
  uVar15 = uVar10 & 0x1ffffff;
  uVar14 = uVar11 & 0x3ffffff;
  uVar12 = ((int)uVar11 >> 0x1a) + local_8c;
  uVar2 = ((int)uVar12 >> 0x19) + local_88;
  uVar13 = uVar12 & 0x1ffffff;
  uVar5 = ((int)uVar2 >> 0x1a) + local_84;
  uVar1 = uVar2 & 0x3ffffff;
  uVar6 = uVar5 & 0x1ffffff;
  uVar20 = ((int)uVar5 >> 0x19) + local_80;
  uVar17 = local_7c + ((int)uVar20 >> 0x1a);
  uVar19 = uVar20 & 0x3ffffff;
  uVar18 = ((int)uVar17 >> 0x19) + local_78;
  uVar16 = uVar17 & 0x1ffffff;
  uVar7 = local_74 + ((int)uVar18 >> 0x1a);
  uVar8 = uVar18 & 0x3ffffff;
  uVar9 = uVar7 & 0x1ffffff;
  local_108 = (byte)(uVar4 >> 0x10);
  local_fc = (byte)((int)uVar1 >> 0x12);
  local_100 = (byte)((int)uVar13 >> 0xb);
  local_104 = (byte)((int)uVar14 >> 0xd);
  *param_1 = (((((((ulong)((int)uVar14 >> 5 & 0xff) << 8 |
                  (ulong)(uVar11 * 8 & 0xff | (int)uVar15 >> 0x16)) << 8 |
                 (ulong)((int)uVar15 >> 0xe & 0xff)) << 8 | (ulong)((int)uVar15 >> 6 & 0xff)) << 8 |
               (ulong)(uVar10 * 4 & 0xff | (int)uVar4 >> 0x18)) << 8 | (ulong)local_108) << 8 |
             (ulong)(uVar4 >> 8 & 0xff)) << 8 | (ulong)(uVar3 & 0xff);
  param_1[1] = (((((((ulong)local_fc << 8 | (ulong)((int)uVar1 >> 10 & 0xff)) << 8 |
                   (ulong)((int)uVar1 >> 2 & 0xff)) << 8 |
                  (ulong)(uVar2 * 0x40 & 0xff | (int)uVar13 >> 0x13)) << 8 | (ulong)local_100) << 8
                | (ulong)((int)uVar13 >> 3 & 0xff)) << 8 |
               (ulong)((int)uVar14 >> 0x15 | uVar12 * 0x20 & 0xff)) << 8 | (ulong)local_104;
  param_1[2] = (((((((ulong)((int)uVar16 >> 5 & 0xff) << 8 |
                    (ulong)((uVar17 & 0xff) * 8 & 0xff | (int)uVar19 >> 0x17)) << 8 |
                   (ulong)((int)uVar19 >> 0xf & 0xff)) << 8 | (ulong)((int)uVar19 >> 7 & 0xff)) << 8
                 | (ulong)((uVar20 & 0xff) + (uVar20 & 0xff) & 0xff | (int)uVar6 >> 0x18)) << 8 |
                (ulong)((int)uVar6 >> 0x10 & 0xff)) << 8 | (ulong)(uVar6 >> 8 & 0xff)) << 8 |
               (ulong)(uVar5 & 0xff);
  *(uint *)(param_1 + 3) =
       ((uVar8 >> 4 & 0xff00 | (int)uVar8 >> 4 & 0xffU) << 8 |
       (uVar18 & 0xf) << 4 | (int)uVar16 >> 0x15) << 8 | (int)uVar16 >> 0xd & 0xffU;
  local_114 = (char)uVar7;
  *(byte *)((long)param_1 + 0x1c) = (byte)((int)uVar8 >> 0x14) | local_114 << 6;
  *(char *)((long)param_1 + 0x1d) = (char)((int)uVar9 >> 2);
  *(char *)((long)param_1 + 0x1e) = (char)((int)uVar9 >> 10);
  fe_tobytes(local_68,local_c8);
  *(byte *)((long)param_1 + 0x1f) = (byte)((int)uVar9 >> 0x12) ^ local_68[0] << 7;
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
      goto LAB_00105601;
    }
  }
  else if (((param_8 == '\0') || (param_10 != 0)) && ((param_6 != '\0' || (param_10 == 0)))) {
LAB_00105601:
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
              goto LAB_00105596;
            }
          }
        }
      }
    }
  }
  uVar52 = 0;
LAB_00105596:
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
  char cVar1;
  int iVar2;
  long lVar3;
  EVP_MD_CTX *ctx;
  long lVar4;
  long lVar5;
  int iVar6;
  long in_FS_OFFSET;
  bool bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  undefined1 *local_af8;
  uint local_a8c;
  undefined1 local_a88 [16];
  undefined1 local_a78 [16];
  undefined8 local_a68;
  undefined4 local_a60;
  undefined1 auStack_a5c [12];
  undefined1 local_a50 [16];
  undefined8 local_a40;
  undefined4 local_a38;
  undefined1 auStack_a34 [12];
  undefined1 local_a28 [16];
  undefined8 local_a18;
  int local_a08;
  int iStack_a04;
  int iStack_a00;
  int iStack_9fc;
  int local_9f8;
  int iStack_9f4;
  int iStack_9f0;
  int iStack_9ec;
  undefined8 local_9e8;
  undefined8 local_9e0;
  undefined8 uStack_9d8;
  undefined8 local_9d0;
  undefined8 uStack_9c8;
  undefined8 local_9c0;
  undefined8 local_9b8;
  undefined8 uStack_9b0;
  undefined8 local_9a8;
  undefined8 uStack_9a0;
  undefined8 local_998;
  int local_990;
  int iStack_98c;
  int iStack_988;
  int iStack_984;
  int local_980;
  int iStack_97c;
  int iStack_978;
  int iStack_974;
  undefined8 local_970;
  int local_968;
  int iStack_964;
  int iStack_960;
  int iStack_95c;
  int local_958;
  int iStack_954;
  int iStack_950;
  int iStack_94c;
  int local_948;
  int iStack_944;
  int iStack_940;
  int iStack_93c;
  int local_938;
  int iStack_934;
  int iStack_930;
  int iStack_92c;
  int local_928;
  int iStack_924;
  int iStack_920;
  int iStack_91c;
  int local_918;
  int iStack_914;
  int iStack_910;
  int iStack_90c;
  int iStack_908;
  int iStack_904;
  int iStack_900;
  int iStack_8fc;
  int iStack_8f8;
  int iStack_8f4;
  int local_8f0;
  int local_8ec;
  int local_8e8;
  int iStack_8e4;
  int iStack_8e0;
  int iStack_8dc;
  int local_8d8;
  int iStack_8d4;
  int iStack_8d0;
  int iStack_8cc;
  int local_8c8;
  int iStack_8c4;
  int iStack_8c0;
  int iStack_8bc;
  int local_8b8;
  int iStack_8b4;
  int iStack_8b0;
  int iStack_8ac;
  undefined1 local_8a8 [16];
  undefined1 auStack_8a0 [8];
  int local_898;
  int iStack_894;
  int iStack_890;
  int iStack_88c;
  int local_888;
  int iStack_884;
  int iStack_880;
  int iStack_87c;
  int local_878;
  int local_874;
  int local_870;
  int local_86c;
  int local_868;
  int local_864;
  int local_860;
  int local_85c;
  int local_858;
  int local_854;
  undefined1 local_850 [40];
  undefined8 local_828;
  undefined8 uStack_820;
  undefined8 local_818;
  undefined8 uStack_810;
  undefined8 local_808;
  undefined8 local_800;
  undefined8 uStack_7f8;
  undefined8 local_7f0;
  undefined8 uStack_7e8;
  undefined8 local_7e0;
  undefined8 local_7d8;
  undefined8 uStack_7d0;
  undefined8 local_7c8;
  undefined8 uStack_7c0;
  undefined8 local_7b8;
  undefined1 local_7b0 [40];
  undefined1 local_788 [40];
  undefined1 auStack_760 [40];
  undefined1 auStack_738 [40];
  undefined1 auStack_710 [40];
  undefined1 local_6e8 [160];
  undefined1 local_648 [160];
  undefined1 local_5a8 [160];
  undefined1 local_508 [160];
  undefined1 local_468 [160];
  undefined1 local_3c8 [160];
  undefined1 local_328 [160];
  uchar local_288 [64];
  char local_248 [256];
  char local_148 [264];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_8 == 0) {
    param_9 = 0;
    if (param_7 == '\0') goto LAB_00107427;
  }
  else if (((param_9 != 0) || (param_7 == '\0')) && ((param_5 != '\0' || (param_9 == 0)))) {
LAB_00107427:
    if ((*(byte *)((long)param_3 + 0x3f) < 0x11) &&
       ((*(byte *)((long)param_3 + 0x3f) != 0x10 ||
        (((*(long *)((long)param_3 + 0x30) == CONCAT17(allzeroes._7_1_,(undefined7)allzeroes) &&
          (*(long *)((long)param_3 + 0x37) == CONCAT71(_UNK_00108828,allzeroes._7_1_))) &&
         ((*(byte *)((long)param_3 + 0x2f) < 0x14 ||
          ((*(byte *)((long)param_3 + 0x2f) == 0x14 &&
           ((*(byte *)((long)param_3 + 0x2e) < 0xde ||
            ((*(byte *)((long)param_3 + 0x2e) == 0xde &&
             ((*(byte *)((long)param_3 + 0x2d) < 0xf9 ||
              ((*(byte *)((long)param_3 + 0x2d) == 0xf9 &&
               ((*(byte *)((long)param_3 + 0x2c) < 0xde ||
                ((*(byte *)((long)param_3 + 0x2c) == 0xde &&
                 ((*(byte *)((long)param_3 + 0x2b) < 0xa2 ||
                  ((*(byte *)((long)param_3 + 0x2b) == 0xa2 &&
                   ((*(byte *)((long)param_3 + 0x2a) < 0xf7 ||
                    ((*(byte *)((long)param_3 + 0x2a) == 0xf7 &&
                     ((*(byte *)((long)param_3 + 0x29) < 0x9c ||
                      ((*(byte *)((long)param_3 + 0x29) == 0x9c &&
                       ((*(byte *)((long)param_3 + 0x28) < 0xd6 ||
                        ((*(byte *)((long)param_3 + 0x28) == 0xd6 &&
                         ((*(byte *)((long)param_3 + 0x27) < 0x58 ||
                          ((*(byte *)((long)param_3 + 0x27) == 0x58 &&
                           ((*(byte *)((long)param_3 + 0x26) < 0x12 ||
                            ((*(byte *)((long)param_3 + 0x26) == 0x12 &&
                             ((*(byte *)((long)param_3 + 0x25) < 99 ||
                              ((*(byte *)((long)param_3 + 0x25) == 99 &&
                               ((*(byte *)((long)param_3 + 0x24) < 0x1a ||
                                ((*(byte *)((long)param_3 + 0x24) == 0x1a &&
                                 ((*(byte *)((long)param_3 + 0x23) < 0x5c ||
                                  ((*(byte *)((long)param_3 + 0x23) == 0x5c &&
                                   ((*(byte *)((long)param_3 + 0x22) < 0xf5 ||
                                    ((*(byte *)((long)param_3 + 0x22) == 0xf5 &&
                                     ((*(byte *)((long)param_3 + 0x21) < 0xd3 ||
                                      ((*(byte *)((long)param_3 + 0x21) == 0xd3 &&
                                       (*(byte *)((long)param_3 + 0x20) < 0xed))))))))))))))))))))))
                            )))))))))))))))))))))))))))))))))))))))))))) {
      iVar2 = ge_frombytes_vartime(&local_a08,param_4);
      if (iVar2 == 0) {
        local_a08 = -local_a08;
        iStack_a04 = -iStack_a04;
        iStack_a00 = -iStack_a00;
        iStack_9fc = -iStack_9fc;
        local_9f8 = -local_9f8;
        iStack_9f4 = -iStack_9f4;
        iStack_9f0 = -iStack_9f0;
        iStack_9ec = -iStack_9ec;
        local_9e8 = CONCAT44(-(int)((ulong)local_9e8 >> 0x20),-(int)local_9e8);
        local_980 = -local_980;
        iStack_97c = -iStack_97c;
        iStack_978 = -iStack_978;
        iStack_974 = -iStack_974;
        local_990 = -local_990;
        iStack_98c = -iStack_98c;
        iStack_988 = -iStack_988;
        iStack_984 = -iStack_984;
        local_970 = CONCAT44(-(int)((ulong)local_970 >> 0x20),-(int)local_970);
        lVar3 = EVP_MD_fetch(param_10,"SHA512",param_11);
        if (lVar3 != 0) {
          ctx = (EVP_MD_CTX *)EVP_MD_CTX_new();
          bVar7 = false;
          if ((((ctx != (EVP_MD_CTX *)0x0) &&
               (iVar2 = hash_init_with_dom(ctx,lVar3,param_5,param_6,param_8,param_9), iVar2 != 0))
              && (iVar2 = EVP_DigestUpdate(ctx,param_3,0x20), iVar2 != 0)) &&
             ((iVar2 = EVP_DigestUpdate(ctx,param_4,0x20), iVar2 != 0 &&
              (iVar2 = EVP_DigestUpdate(ctx,param_1,param_2), iVar2 != 0)))) {
            iVar2 = EVP_DigestFinal_ex(ctx,local_288,&local_a8c);
            if (iVar2 != 0) {
              x25519_sc_reduce(local_288);
              slide(local_248,local_288);
              slide(local_148,(long)param_3 + 0x20);
              ge_p3_to_cached(local_788,&local_a08);
              local_828 = CONCAT44(iStack_a04,local_a08);
              uStack_820 = CONCAT44(iStack_9fc,iStack_a00);
              local_808 = local_9e8;
              local_818 = CONCAT44(iStack_9f4,local_9f8);
              uStack_810 = CONCAT44(iStack_9ec,iStack_9f0);
              local_7e0 = local_9c0;
              local_7b8 = local_998;
              local_800 = local_9e0;
              uStack_7f8 = uStack_9d8;
              local_7f0 = local_9d0;
              uStack_7e8 = uStack_9c8;
              local_7d8 = local_9b8;
              uStack_7d0 = uStack_9b0;
              local_7c8 = local_9a8;
              uStack_7c0 = uStack_9a0;
              ge_p2_dbl(&local_968,&local_828);
              fe_mul(&local_828,&local_968,&local_8f0);
              fe_mul(&local_800,&iStack_940,&local_918);
              fe_mul(&local_7d8,&local_918,&local_8f0);
              fe_mul(local_7b0,&local_968,&iStack_940);
              ge_add(&local_968,&local_828,local_788);
              fe_mul(&local_8c8,&local_968,&local_8f0);
              fe_mul(auStack_8a0,&iStack_940,&local_918);
              fe_mul(&local_878,&local_918,&local_8f0);
              fe_mul(local_850,&local_968,&iStack_940);
              ge_p3_to_cached(local_6e8,&local_8c8);
              ge_add(&local_968,&local_828,local_6e8);
              fe_mul(&local_8c8,&local_968,&local_8f0);
              fe_mul(auStack_8a0,&iStack_940,&local_918);
              fe_mul(&local_878,&local_918,&local_8f0);
              fe_mul(local_850,&local_968,&iStack_940);
              ge_p3_to_cached(local_648,&local_8c8);
              ge_add(&local_968,&local_828,local_648);
              fe_mul(&local_8c8,&local_968,&local_8f0);
              fe_mul(auStack_8a0,&iStack_940,&local_918);
              fe_mul(&local_878,&local_918,&local_8f0);
              fe_mul(local_850,&local_968,&iStack_940);
              ge_p3_to_cached(local_5a8,&local_8c8);
              ge_add(&local_968,&local_828,local_5a8);
              fe_mul(&local_8c8,&local_968,&local_8f0);
              fe_mul(auStack_8a0,&iStack_940,&local_918);
              fe_mul(&local_878,&local_918,&local_8f0);
              fe_mul(local_850,&local_968,&iStack_940);
              ge_p3_to_cached(local_508,&local_8c8);
              ge_add(&local_968,&local_828,local_508);
              fe_mul(&local_8c8,&local_968,&local_8f0);
              fe_mul(auStack_8a0,&iStack_940,&local_918);
              fe_mul(&local_878,&local_918,&local_8f0);
              fe_mul(local_850,&local_968,&iStack_940);
              ge_p3_to_cached(local_468,&local_8c8);
              ge_add(&local_968,&local_828,local_468);
              fe_mul(&local_8c8,&local_968,&local_8f0);
              fe_mul(auStack_8a0,&iStack_940,&local_918);
              fe_mul(&local_878,&local_918,&local_8f0);
              fe_mul(local_850,&local_968,&iStack_940);
              ge_p3_to_cached(local_3c8,&local_8c8);
              ge_add(&local_968,&local_828,local_3c8);
              fe_mul(&local_8c8,&local_968,&local_8f0);
              fe_mul(auStack_8a0,&iStack_940,&local_918);
              fe_mul(&local_878,&local_918,&local_8f0);
              fe_mul(local_850,&local_968,&iStack_940);
              ge_p3_to_cached(local_328,&local_8c8);
              local_a68 = 0;
              lVar4 = 0xff;
              local_a40 = 0;
              auStack_a5c = SUB1612((undefined1  [16])0x0,4);
              local_a60 = 1;
              local_a18 = 0;
              auStack_a34 = SUB1612((undefined1  [16])0x0,4);
              local_a38 = 1;
              local_a88 = (undefined1  [16])0x0;
              local_a78 = (undefined1  [16])0x0;
              local_a50 = (undefined1  [16])0x0;
              local_a28 = (undefined1  [16])0x0;
LAB_00107c11:
              if ((local_248[lVar4] == '\0') && (local_148[lVar4] == '\0')) goto code_r0x00107c07;
              lVar4 = (long)(int)lVar4;
              do {
                ge_p2_dbl(&local_968,local_a88);
                cVar1 = local_248[lVar4];
                if (cVar1 < '\x01') {
                  if (cVar1 != '\0') {
                    fe_mul(&local_8c8,&local_968,&local_8f0);
                    fe_mul(auStack_8a0,&iStack_940,&local_918);
                    fe_mul(&local_878,&local_918,&local_8f0);
                    fe_mul(local_850,&local_968,&iStack_940);
                    local_968 = local_8a8._8_4_ + local_8c8;
                    iStack_964 = local_8a8._12_4_ + iStack_8c4;
                    iStack_960 = local_898 + iStack_8c0;
                    iStack_95c = iStack_894 + iStack_8bc;
                    local_958 = iStack_890 + local_8b8;
                    iStack_954 = iStack_88c + iStack_8b4;
                    iStack_950 = local_888 + iStack_8b0;
                    iStack_94c = iStack_884 + iStack_8ac;
                    iStack_940 = local_8a8._8_4_ - local_8c8;
                    iStack_93c = local_8a8._12_4_ - iStack_8c4;
                    lVar5 = (long)-((int)cVar1 / 2) * 0xa0;
                    local_938 = local_898 - iStack_8c0;
                    iStack_934 = iStack_894 - iStack_8bc;
                    iStack_930 = iStack_890 - local_8b8;
                    iStack_92c = iStack_88c - iStack_8b4;
                    local_928 = local_888 - iStack_8b0;
                    iStack_924 = iStack_884 - iStack_8ac;
                    iStack_920 = iStack_880 - local_8a8._0_4_;
                    iStack_91c = iStack_87c - local_8a8._4_4_;
                    local_948 = iStack_880 + local_8a8._0_4_;
                    iStack_944 = iStack_87c + local_8a8._4_4_;
                    fe_mul(&local_918,&local_968,auStack_760 + lVar5);
                    fe_mul(&iStack_940,&iStack_940,local_788 + lVar5);
                    fe_mul(&local_8f0,auStack_710 + lVar5,local_850);
                    fe_mul(&local_968,&local_878,auStack_738 + lVar5);
                    iVar14 = local_918 - iStack_940;
                    iVar16 = iStack_914 - iStack_93c;
                    iVar18 = iStack_910 - local_938;
                    iVar20 = iStack_90c - iStack_934;
                    iVar15 = iStack_908 - iStack_930;
                    iVar17 = iStack_904 - iStack_92c;
                    iVar19 = iStack_900 - local_928;
                    iVar21 = iStack_8fc - iStack_924;
                    local_938 = iStack_910 + local_938;
                    iStack_934 = iStack_90c + iStack_934;
                    iStack_930 = iStack_908 + iStack_930;
                    iStack_92c = iStack_904 + iStack_92c;
                    local_928 = iStack_900 + local_928;
                    iStack_924 = iStack_8fc + iStack_924;
                    iVar12 = iStack_8f8 + iStack_920;
                    iVar13 = iStack_8f4 + iStack_91c;
                    iStack_920 = iStack_8f8 - iStack_920;
                    iStack_91c = iStack_8f4 - iStack_91c;
                    iStack_940 = iStack_940 + local_918;
                    iStack_93c = iStack_93c + iStack_914;
                    iVar10 = local_958 * 2;
                    iVar11 = iStack_954 * 2;
                    local_918 = local_968 * 2 - local_8f0;
                    iStack_914 = iStack_964 * 2 - local_8ec;
                    iStack_910 = iStack_960 * 2 - local_8e8;
                    iStack_90c = iStack_95c * 2 - iStack_8e4;
                    iVar2 = iStack_950 * 2;
                    iVar6 = iStack_94c * 2;
                    iVar8 = local_948 * 2;
                    iVar9 = iStack_944 * 2;
                    local_8e8 = iStack_960 * 2 + local_8e8;
                    iStack_8e4 = iStack_95c * 2 + iStack_8e4;
                    iStack_908 = local_958 * 2 - iStack_8e0;
                    iStack_904 = iStack_954 * 2 - iStack_8dc;
                    iStack_900 = iStack_950 * 2 - local_8d8;
                    iStack_8fc = iStack_94c * 2 - iStack_8d4;
                    iStack_8f8 = local_948 * 2 - iStack_8d0;
                    iStack_8f4 = iStack_944 * 2 - iStack_8cc;
                    local_8f0 = local_8f0 + local_968 * 2;
                    local_8ec = local_8ec + iStack_964 * 2;
                    local_968 = iVar14;
                    iStack_964 = iVar16;
                    iStack_960 = iVar18;
                    iStack_95c = iVar20;
                    local_958 = iVar15;
                    iStack_954 = iVar17;
                    iStack_950 = iVar19;
                    iStack_94c = iVar21;
                    local_948 = iStack_920;
                    iStack_944 = iStack_91c;
                    iStack_920 = iVar12;
                    iStack_91c = iVar13;
                    iStack_8e0 = iVar10 + iStack_8e0;
                    iStack_8dc = iVar11 + iStack_8dc;
                    local_8d8 = iVar2 + local_8d8;
                    iStack_8d4 = iVar6 + iStack_8d4;
                    iStack_8d0 = iVar8 + iStack_8d0;
                    iStack_8cc = iVar9 + iStack_8cc;
                  }
                }
                else {
                  fe_mul(&local_8c8,&local_968,&local_8f0);
                  fe_mul(auStack_8a0,&iStack_940,&local_918);
                  fe_mul(&local_878,&local_918,&local_8f0);
                  fe_mul(local_850,&local_968,&iStack_940);
                  ge_add(&local_968,&local_8c8,local_788 + (long)(cVar1 >> 1) * 0xa0);
                }
                cVar1 = local_148[lVar4];
                if (cVar1 < '\x01') {
                  if (cVar1 != '\0') {
                    fe_mul(&local_8c8,&local_968,&local_8f0);
                    fe_mul(auStack_8a0,&iStack_940,&local_918);
                    fe_mul(&local_878,&local_918,&local_8f0);
                    fe_mul(local_850,&local_968,&iStack_940);
                    local_968 = local_8a8._8_4_ + local_8c8;
                    iStack_964 = local_8a8._12_4_ + iStack_8c4;
                    iStack_960 = local_898 + iStack_8c0;
                    iStack_95c = iStack_894 + iStack_8bc;
                    local_958 = iStack_890 + local_8b8;
                    iStack_954 = iStack_88c + iStack_8b4;
                    iStack_950 = local_888 + iStack_8b0;
                    iStack_94c = iStack_884 + iStack_8ac;
                    local_938 = local_898 - iStack_8c0;
                    iStack_934 = iStack_894 - iStack_8bc;
                    iStack_930 = iStack_890 - local_8b8;
                    iStack_92c = iStack_88c - iStack_8b4;
                    local_948 = local_8a8._0_4_ + iStack_880;
                    iStack_944 = local_8a8._4_4_ + iStack_87c;
                    iStack_940 = local_8a8._8_4_ - local_8c8;
                    iStack_93c = local_8a8._12_4_ - iStack_8c4;
                    local_928 = local_888 - iStack_8b0;
                    iStack_924 = iStack_884 - iStack_8ac;
                    iStack_920 = iStack_880 - local_8a8._0_4_;
                    iStack_91c = iStack_87c - local_8a8._4_4_;
                    lVar5 = (long)-((int)cVar1 / 2) * 0x78;
                    fe_mul(&local_918,&local_968,lVar5 + 0x108868);
                    fe_mul(&iStack_940,&iStack_940,Bi + lVar5);
                    fe_mul(&local_8f0,lVar5 + 0x108890,local_850);
                    local_968 = local_918 - iStack_940;
                    iStack_964 = iStack_914 - iStack_93c;
                    iStack_960 = iStack_910 - local_938;
                    iStack_95c = iStack_90c - iStack_934;
                    iVar2 = local_878 * 2 - local_8f0;
                    iVar6 = local_874 * 2 - local_8ec;
                    local_958 = iStack_908 - iStack_930;
                    iStack_954 = iStack_904 - iStack_92c;
                    iStack_950 = iStack_900 - local_928;
                    iStack_94c = iStack_8fc - iStack_924;
                    local_938 = local_938 + iStack_910;
                    iStack_934 = iStack_934 + iStack_90c;
                    iStack_930 = iStack_930 + iStack_908;
                    iStack_92c = iStack_92c + iStack_904;
                    local_928 = local_928 + iStack_900;
                    iStack_924 = iStack_924 + iStack_8fc;
                    iVar8 = iStack_920 + iStack_8f8;
                    iVar9 = iStack_91c + iStack_8f4;
                    iStack_910 = local_870 * 2 - local_8e8;
                    iStack_90c = local_86c * 2 - iStack_8e4;
                    local_948 = iStack_8f8 - iStack_920;
                    iStack_944 = iStack_8f4 - iStack_91c;
                    iStack_940 = iStack_940 + local_918;
                    iStack_93c = iStack_93c + iStack_914;
                    iStack_908 = local_868 * 2 - iStack_8e0;
                    iStack_904 = local_864 * 2 - iStack_8dc;
                    local_8f0 = local_878 * 2 + local_8f0;
                    iStack_900 = local_860 * 2 - local_8d8;
                    iStack_8fc = local_85c * 2 - iStack_8d4;
                    iStack_8f8 = local_858 * 2 - iStack_8d0;
                    local_8ec = local_874 * 2 + local_8ec;
                    iStack_8f4 = local_854 * 2 - iStack_8cc;
                    local_8e8 = local_870 * 2 + local_8e8;
                    iStack_8e4 = local_86c * 2 + iStack_8e4;
                    iStack_8e0 = local_868 * 2 + iStack_8e0;
                    iStack_8dc = local_864 * 2 + iStack_8dc;
                    local_8d8 = local_860 * 2 + local_8d8;
                    iStack_8d0 = local_858 * 2 + iStack_8d0;
                    iStack_8d4 = local_85c * 2 + iStack_8d4;
                    iStack_8cc = local_854 * 2 + iStack_8cc;
                    iStack_920 = iVar8;
                    iStack_91c = iVar9;
                    local_918 = iVar2;
                    iStack_914 = iVar6;
                  }
                }
                else {
                  fe_mul(&local_8c8,&local_968,&local_8f0);
                  fe_mul(auStack_8a0,&iStack_940,&local_918);
                  fe_mul(&local_878,&local_918,&local_8f0);
                  fe_mul(local_850,&local_968,&iStack_940);
                  ge_madd(&local_968,&local_8c8,Bi + (long)(cVar1 >> 1) * 0x78);
                }
                lVar4 = lVar4 + -1;
                fe_mul(local_a88,&local_968,&local_8f0);
                fe_mul(&local_a60,&iStack_940,&local_918);
                fe_mul(&local_a38,&local_918,&local_8f0);
              } while ((int)lVar4 != -1);
LAB_00108468:
              local_af8 = local_a88;
              ge_p3_tobytes(local_148,local_af8);
              iVar2 = CRYPTO_memcmp(local_148,param_3,0x20);
              bVar7 = iVar2 == 0;
            }
          }
          EVP_MD_free(lVar3);
          EVP_MD_CTX_free(ctx);
          goto LAB_001073ec;
        }
      }
    }
  }
  bVar7 = false;
LAB_001073ec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar7;
code_r0x00107c07:
  bVar7 = lVar4 == 0;
  lVar4 = lVar4 + -1;
  if (bVar7) goto LAB_00108468;
  goto LAB_00107c11;
}



undefined8
ossl_ed25519_public_from_private(undefined8 param_1,long param_2,void *param_3,undefined8 param_4)

{
  int iVar1;
  EVP_MD *type;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_1c8 [48];
  undefined1 local_198 [48];
  undefined1 local_168 [48];
  undefined1 local_138 [40];
  undefined1 local_110 [40];
  undefined1 local_e8 [80];
  char local_98 [32];
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
      ge_scalarmult_base(local_138,local_78);
      fe_invert(auStack_1c8,local_e8);
      fe_mul(local_198,local_138,auStack_1c8);
      fe_mul(local_168,local_110,auStack_1c8);
      fe_tobytes(param_2,local_168);
      fe_tobytes(local_98,local_198);
      *(byte *)(param_2 + 0x1f) = *(byte *)(param_2 + 0x1f) ^ local_98[0] << 7;
      OPENSSL_cleanse(local_78,0x40);
      uVar2 = 1;
      goto LAB_001085e4;
    }
    OPENSSL_cleanse(local_78,0x40);
  }
  uVar2 = 0;
LAB_001085e4:
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
  int iVar1;
  long in_FS_OFFSET;
  int iVar2;
  int local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  undefined8 local_168;
  int local_158;
  int iStack_154;
  int iStack_150;
  int iStack_14c;
  int local_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  undefined8 local_138;
  undefined1 local_128 [48];
  undefined1 local_f8 [40];
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined8 local_b0;
  int local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  undefined8 local_88;
  ulong local_58;
  ulong uStack_50;
  ulong local_48;
  ulong uStack_40;
  long local_30;
  
  local_48 = param_2[2];
  uStack_50 = param_2[1];
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = *param_2 & 0xfffffffffffffff8;
  uStack_40 = param_2[3] & 0x7fffffffffffffff | 0x4000000000000000;
  ge_scalarmult_base(local_f8,&local_58);
  local_188 = local_d0 + local_a8;
  iStack_184 = iStack_cc + iStack_a4;
  iStack_180 = iStack_c8 + iStack_a0;
  iStack_17c = iStack_c4 + iStack_9c;
  local_178 = local_c0 + local_98;
  iStack_174 = iStack_bc + iStack_94;
  iStack_170 = iStack_b8 + iStack_90;
  iStack_16c = iStack_b4 + iStack_8c;
  iVar1 = (int)((ulong)local_88 >> 0x20);
  iVar2 = (int)((ulong)local_b0 >> 0x20);
  local_138 = CONCAT44(iVar1 - iVar2,(int)local_88 - (int)local_b0);
  local_168 = CONCAT44(iVar1 + iVar2,(int)local_88 + (int)local_b0);
  local_158 = local_a8 - local_d0;
  iStack_154 = iStack_a4 - iStack_cc;
  iStack_150 = iStack_a0 - iStack_c8;
  iStack_14c = iStack_9c - iStack_c4;
  local_148 = local_98 - local_c0;
  iStack_144 = iStack_94 - iStack_bc;
  iStack_140 = iStack_90 - iStack_b8;
  iStack_13c = iStack_8c - iStack_b4;
  fe_invert(local_128,&local_158);
  fe_mul(&local_188,&local_188,local_128);
  fe_tobytes(param_1,&local_188);
  OPENSSL_cleanse(&local_58,0x20);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


