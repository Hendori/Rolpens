
int apsort(undefined8 *param_1,undefined8 *param_2)

{
  return (uint)(*(float *)*param_1 < *(float *)*param_2) -
         (uint)(*(float *)*param_2 < *(float *)*param_1);
}



void bark_noise_hybridmp(float param_1,uint param_2,long param_3,float *param_4,long param_5,
                        int param_6)

{
  bool bVar1;
  long lVar2;
  int *piVar3;
  undefined1 *puVar4;
  float fVar5;
  uint uVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  long lVar15;
  int *piVar16;
  undefined1 *puVar18;
  undefined1 *puVar20;
  undefined1 *puVar22;
  undefined1 *puVar23;
  undefined4 *puVar24;
  float *pfVar25;
  undefined4 *puVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  int iVar30;
  long in_FS_OFFSET;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int local_58;
  int local_54;
  ulong local_50;
  long local_40;
  int *piVar17;
  undefined1 *puVar19;
  undefined1 *puVar21;
  
  fVar5 = _LC1;
  piVar16 = &local_58;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (long)(int)param_2 * 4 + 0x17;
  uVar6 = (uint)uVar8;
  piVar17 = &local_58;
  piVar3 = &local_58;
  while (piVar17 != (int *)((long)&local_58 - (uVar8 & 0xfffffffffffff000))) {
    piVar16 = (int *)((long)piVar3 + -0x1000);
    *(undefined8 *)((long)piVar3 + -8) = *(undefined8 *)((long)piVar3 + -8);
    piVar17 = (int *)((long)piVar3 + -0x1000);
    piVar3 = (int *)((long)piVar3 + -0x1000);
  }
  lVar2 = -(ulong)(uVar6 & 0xff0);
  puVar18 = (undefined1 *)((long)piVar16 + lVar2);
  puVar19 = (undefined1 *)((long)piVar16 + lVar2);
  if ((ulong)(uVar6 & 0xff0) != 0) {
    *(undefined8 *)((long)piVar16 + -8) = *(undefined8 *)((long)piVar16 + -8);
  }
  pfVar13 = (float *)((ulong)((long)piVar16 + lVar2 + 0xf) & 0xfffffffffffffff0);
  puVar20 = (undefined1 *)((long)piVar16 + lVar2);
  while (puVar19 != (undefined1 *)((long)piVar16 + (lVar2 - (uVar8 & 0xfffffffffffff000)))) {
    puVar18 = puVar20 + -0x1000;
    *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
    puVar19 = puVar20 + -0x1000;
    puVar20 = puVar20 + -0x1000;
  }
  lVar2 = -(ulong)(uVar6 & 0xff0);
  puVar20 = puVar18 + lVar2;
  puVar21 = puVar18 + lVar2;
  if ((ulong)(uVar6 & 0xff0) != 0) {
    *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
  }
  pfVar12 = (float *)((ulong)(puVar18 + lVar2 + 0xf) & 0xfffffffffffffff0);
  puVar4 = puVar18 + lVar2;
  while (puVar21 != puVar18 + (lVar2 - (uVar8 & 0xfffffffffffff000))) {
    puVar20 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar21 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  lVar2 = -(ulong)(uVar6 & 0xff0);
  puVar18 = puVar20 + lVar2;
  puVar22 = puVar20 + lVar2;
  if ((ulong)(uVar6 & 0xff0) != 0) {
    *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
  }
  puVar24 = (undefined4 *)((ulong)(puVar20 + lVar2 + 0xf) & 0xfffffffffffffff0);
  puVar4 = puVar20 + lVar2;
  while (puVar22 != puVar20 + (lVar2 - (uVar8 & 0xfffffffffffff000))) {
    puVar18 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar22 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  lVar2 = -(ulong)(uVar6 & 0xff0);
  puVar20 = puVar18 + lVar2;
  puVar23 = puVar18 + lVar2;
  if ((ulong)(uVar6 & 0xff0) != 0) {
    *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
  }
  pfVar25 = (float *)((ulong)(puVar18 + lVar2 + 0xf) & 0xfffffffffffffff0);
  puVar4 = puVar18 + lVar2;
  while (puVar23 != puVar18 + (lVar2 - (uVar8 & 0xfffffffffffff000))) {
    puVar20 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar23 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  lVar2 = -(ulong)(uVar6 & 0xff0);
  if ((ulong)(uVar6 & 0xff0) != 0) {
    *(undefined8 *)(puVar20 + -8) = *(undefined8 *)(puVar20 + -8);
  }
  puVar26 = (undefined4 *)((ulong)(puVar20 + lVar2 + 0xf) & 0xfffffffffffffff0);
  fVar35 = *param_4 + param_1;
  fVar40 = _LC0;
  fVar31 = _LC0;
  if (_LC1 <= fVar35) {
    fVar31 = fVar35 * fVar35 * _LC0;
    fVar40 = fVar31 + 0.0;
    fVar31 = fVar35 * fVar31 + 0.0;
  }
  *puVar24 = 0;
  *puVar26 = 0;
  *pfVar13 = fVar40;
  *pfVar12 = fVar40;
  *pfVar25 = fVar31;
  if ((int)param_2 < 2) {
    if (param_2 != 1) goto LAB_001007cd;
  }
  else {
    fVar39 = 0.0;
    uVar8 = 1;
    fVar38 = 0.0;
    fVar35 = fVar5;
    fVar36 = fVar40;
    do {
      fVar33 = param_4[uVar8] + param_1;
      fVar32 = fVar35;
      fVar41 = fVar5;
      fVar34 = fVar35;
      fVar37 = fVar5;
      if (fVar5 <= fVar33) {
        fVar37 = fVar33 * fVar33;
        fVar32 = fVar33 * fVar35 * fVar37;
        fVar41 = fVar33 * fVar37;
        fVar34 = fVar35 * fVar37;
      }
      fVar40 = fVar40 + fVar34;
      fVar34 = fVar34 * fVar35;
      fVar36 = fVar36 + fVar37;
      fVar31 = fVar31 + fVar41;
      fVar39 = fVar39 + fVar32;
      fVar35 = fVar35 + fVar5;
      pfVar13[uVar8] = fVar36;
      pfVar12[uVar8] = fVar40;
      fVar38 = fVar38 + fVar34;
      pfVar25[uVar8] = fVar31;
      puVar26[uVar8] = fVar39;
      puVar24[uVar8] = fVar38;
      uVar8 = uVar8 + 1;
    } while (param_2 != uVar8);
  }
  fVar36 = 0.0;
  fVar35 = 0.0;
  lVar15 = 0;
  fVar40 = fVar35;
  fVar31 = fVar5;
  do {
    uVar8 = *(ulong *)(param_3 + lVar15 * 8);
    iVar29 = (int)lVar15;
    uVar9 = uVar8 & 0xffff;
    iVar27 = (int)(uVar8 >> 0x10);
    if (-1 < iVar27) goto LAB_00100411;
    iVar27 = -iVar27;
    iVar7 = (int)uVar9;
    if ((int)uVar9 <= iVar27) {
      iVar7 = iVar27;
    }
    if ((int)param_2 <= iVar7) goto LAB_00100411;
    fVar31 = pfVar12[uVar9] - pfVar12[iVar27];
    fVar40 = ((float)puVar24[uVar9] + (float)puVar24[iVar27]) * (pfVar25[uVar9] + pfVar25[iVar27]) -
             fVar31 * ((float)puVar26[uVar9] - (float)puVar26[iVar27]);
    fVar35 = ((float)puVar26[uVar9] - (float)puVar26[iVar27]) * (pfVar13[uVar9] + pfVar13[iVar27]) -
             (pfVar25[uVar9] + pfVar25[iVar27]) * fVar31;
    fVar31 = (pfVar13[uVar9] + pfVar13[iVar27]) * ((float)puVar24[uVar9] + (float)puVar24[iVar27]) -
             fVar31 * fVar31;
    fVar38 = (fVar35 * fVar36 + fVar40) / fVar31;
    if (fVar38 < 0.0) {
      fVar38 = 0.0;
    }
    lVar28 = lVar15 + 1;
    fVar36 = fVar36 + fVar5;
    *(float *)(param_5 + lVar15 * 4) = fVar38 - param_1;
    lVar15 = lVar28;
  } while ((int)param_2 != lVar28);
  iVar29 = iVar29 + 1;
LAB_00100411:
  if (iVar29 < (int)param_2) {
    uVar8 = (long)iVar29;
    do {
      uVar9 = uVar8;
      lVar15 = *(long *)(param_3 + uVar9 * 8);
      uVar6 = (uint)(ushort)lVar15;
      iVar29 = (int)((ulong)lVar15 >> 0x10);
      if (((int)param_2 <= iVar29 || ((ulong)(lVar15 >> 0x10) >> 0x1f & 1) != 0) ||
         ((int)param_2 <= (int)uVar6)) goto LAB_00100500;
      fVar31 = pfVar12[uVar6] - pfVar12[iVar29];
      fVar40 = ((float)puVar24[uVar6] - (float)puVar24[iVar29]) * (pfVar25[uVar6] - pfVar25[iVar29])
               - fVar31 * ((float)puVar26[uVar6] - (float)puVar26[iVar29]);
      fVar35 = ((float)puVar26[uVar6] - (float)puVar26[iVar29]) * (pfVar13[uVar6] - pfVar13[iVar29])
               - (pfVar25[uVar6] - pfVar25[iVar29]) * fVar31;
      fVar31 = (pfVar13[uVar6] - pfVar13[iVar29]) * ((float)puVar24[uVar6] - (float)puVar24[iVar29])
               - fVar31 * fVar31;
      fVar38 = (fVar35 * fVar36 + fVar40) / fVar31;
      if (fVar38 < 0.0) {
        fVar38 = 0.0;
      }
      fVar36 = fVar36 + fVar5;
      *(float *)(param_5 + uVar9 * 4) = fVar38 - param_1;
      uVar8 = uVar9 + 1;
    } while ((int)(uVar9 + 1) < (int)param_2);
    uVar9 = (ulong)((int)uVar9 + 1);
LAB_00100500:
    iVar29 = (int)uVar9;
    if (iVar29 < (int)param_2) {
      pfVar10 = (float *)(param_5 + (long)iVar29 * 4);
      do {
        fVar38 = (fVar35 * fVar36 + fVar40) / fVar31;
        if (fVar38 < 0.0) {
          fVar38 = 0.0;
        }
        pfVar11 = pfVar10 + 1;
        fVar36 = fVar36 + fVar5;
        *pfVar10 = fVar38 - param_1;
        pfVar10 = pfVar11;
      } while ((float *)(param_5 + ((ulong)(param_2 - iVar29) + (long)iVar29) * 4) != pfVar11);
    }
  }
  if (0 < param_6) {
    iVar29 = param_6 >> 1;
    bVar1 = (int)param_2 <= iVar29;
    iVar27 = iVar29 - param_6;
    if ((-1 < iVar27) || (bVar1)) {
      fVar36 = 0.0;
      iVar14 = 0;
      iVar7 = iVar29;
    }
    else {
      lVar28 = (long)(iVar29 + 1);
      fVar36 = 0.0;
      local_50 = (ulong)param_2;
      lVar15 = ((long)param_6 - (long)iVar29) * 4;
      uVar8 = 1;
      do {
        fVar39 = pfVar12[lVar28 + -1] - *(float *)((long)pfVar12 + lVar15);
        fVar34 = (float)puVar24[lVar28 + -1] + *(float *)((long)puVar24 + lVar15);
        fVar38 = pfVar13[lVar28 + -1] + *(float *)((long)pfVar13 + lVar15);
        fVar35 = pfVar25[lVar28 + -1] + *(float *)((long)pfVar25 + lVar15);
        fVar31 = (float)puVar26[lVar28 + -1] - *(float *)((long)puVar26 + lVar15);
        fVar40 = fVar34 * fVar35 - fVar39 * fVar31;
        fVar35 = fVar31 * fVar38 - fVar35 * fVar39;
        fVar31 = fVar38 * fVar34 - fVar39 * fVar39;
        fVar38 = (fVar35 * fVar36 + fVar40) / fVar31 - param_1;
        if (fVar38 < *(float *)(param_5 + -4 + uVar8 * 4)) {
          *(float *)(param_5 + -4 + uVar8 * 4) = fVar38;
        }
        fVar36 = fVar36 + fVar5;
        iVar14 = (int)uVar8;
        if (local_50 == uVar8) break;
        uVar8 = uVar8 + 1;
        iVar7 = (int)lVar28;
        lVar28 = lVar28 + 1;
        lVar15 = lVar15 + -4;
      } while (iVar27 + iVar14 < 0 && iVar7 < (int)param_2);
      local_58 = iVar29;
      if ((int)param_2 <= iVar14) goto LAB_001007cd;
      iVar7 = iVar14 + iVar29;
      iVar27 = iVar7 - param_6;
      bVar1 = (int)param_2 <= iVar7;
    }
    if ((-1 < iVar27) && (!bVar1)) {
      iVar29 = iVar14 + 1 + iVar29;
      lVar15 = (long)(iVar14 + 1);
      iVar30 = iVar29 - param_6;
      while( true ) {
        fVar31 = pfVar12[iVar7] - pfVar12[iVar27];
        fVar40 = ((float)puVar24[iVar7] - (float)puVar24[iVar27]) *
                 (pfVar25[iVar7] - pfVar25[iVar27]) -
                 fVar31 * ((float)puVar26[iVar7] - (float)puVar26[iVar27]);
        fVar35 = ((float)puVar26[iVar7] - (float)puVar26[iVar27]) *
                 (pfVar13[iVar7] - pfVar13[iVar27]) - (pfVar25[iVar7] - pfVar25[iVar27]) * fVar31;
        fVar31 = (pfVar13[iVar7] - pfVar13[iVar27]) *
                 ((float)puVar24[iVar7] - (float)puVar24[iVar27]) - fVar31 * fVar31;
        fVar38 = (fVar35 * fVar36 + fVar40) / fVar31 - param_1;
        if (fVar38 < *(float *)(param_5 + -4 + lVar15 * 4)) {
          *(float *)(param_5 + -4 + lVar15 * 4) = fVar38;
        }
        fVar36 = fVar36 + fVar5;
        iVar14 = (int)lVar15;
        if ((int)param_2 <= iVar14) break;
        lVar15 = lVar15 + 1;
        if ((iVar30 < 0) ||
           (bVar1 = (int)param_2 <= iVar29, iVar7 = iVar29, iVar27 = iVar30, iVar30 = iVar30 + 1,
           iVar29 = iVar29 + 1, bVar1)) break;
      }
    }
    if (iVar14 < (int)param_2) {
      pfVar13 = (float *)(param_5 + (long)iVar14 * 4);
      do {
        fVar38 = (fVar35 * fVar36 + fVar40) / fVar31 - param_1;
        if (fVar38 < *pfVar13) {
          *pfVar13 = fVar38;
        }
        pfVar13 = pfVar13 + 1;
        fVar36 = fVar36 + fVar5;
      } while (pfVar13 != (float *)(param_5 + ((ulong)(param_2 - iVar14) + (long)iVar14) * 4));
    }
  }
LAB_001007cd:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar20 + lVar2 + -8) = &UNK_0010082e;
  local_54 = param_6;
  __stack_chk_fail();
}



void seed_chase(long param_1,int param_2,long param_3)

{
  float *pfVar1;
  float fVar2;
  undefined4 uVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 *puVar12;
  long lVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  float fVar18;
  float fVar19;
  undefined1 auStack_28 [8];
  long local_20;
  undefined1 *puVar11;
  undefined1 *puVar13;
  
  puVar10 = auStack_28;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar16 = param_3 * 8 + 0x17;
  puVar11 = auStack_28;
  puVar12 = auStack_28;
  while (puVar11 != auStack_28 + -(uVar16 & 0xfffffffffffff000)) {
    puVar10 = puVar12 + -0x1000;
    *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
    puVar11 = puVar12 + -0x1000;
    puVar12 = puVar12 + -0x1000;
  }
  uVar16 = (ulong)((uint)uVar16 & 0xff0);
  lVar4 = -uVar16;
  puVar12 = puVar10 + lVar4;
  puVar13 = puVar10 + lVar4;
  if (uVar16 != 0) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  uVar16 = param_3 * 4 + 0x17;
  uVar17 = (ulong)(puVar10 + lVar4 + 0xf) & 0xfffffffffffffff0;
  puVar5 = puVar10 + lVar4;
  while (puVar13 != puVar10 + (lVar4 - (uVar16 & 0xfffffffffffff000))) {
    puVar12 = puVar5 + -0x1000;
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    puVar13 = puVar5 + -0x1000;
    puVar5 = puVar5 + -0x1000;
  }
  uVar16 = (ulong)((uint)uVar16 & 0xff0);
  lVar4 = -uVar16;
  if (uVar16 != 0) {
    *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
  }
  lVar14 = 0;
  uVar16 = (ulong)(puVar12 + lVar4 + 0xf) & 0xfffffffffffffff0;
  lVar7 = 0;
  if (0 < param_3) {
    do {
      fVar18 = *(float *)(param_1 + lVar7 * 4);
      lVar6 = lVar14 * 4;
      if (lVar14 == 2) {
        lVar14 = 2;
        lVar6 = 8;
        goto LAB_00100974;
      }
      *(long *)(uVar17 + lVar14 * 8) = lVar7;
      lVar15 = lVar7 + 1;
      lVar14 = lVar14 + 1;
      *(float *)(uVar16 + lVar6) = fVar18;
      lVar7 = lVar15;
    } while (param_3 != lVar15);
LAB_001009f0:
    lVar6 = 0;
    lVar7 = 0;
    do {
      if ((lVar14 + -1 <= lVar6) ||
         (fVar18 = *(float *)(uVar16 + 4 + lVar6 * 4), pfVar1 = (float *)(uVar16 + lVar6 * 4),
         fVar18 < *pfVar1 || fVar18 == *pfVar1)) {
        lVar9 = *(long *)(uVar17 + lVar6 * 8) + (long)param_2 + 1;
      }
      else {
        lVar9 = *(long *)(uVar17 + 8 + lVar6 * 8);
      }
      if (lVar15 <= lVar9) {
        lVar9 = lVar15;
      }
      if (lVar7 < lVar9) {
        uVar3 = *(undefined4 *)(uVar16 + lVar6 * 4);
        puVar8 = (undefined4 *)(param_1 + lVar7 * 4);
        do {
          *puVar8 = uVar3;
          puVar8 = puVar8 + 1;
          lVar7 = lVar9;
        } while ((undefined4 *)(param_1 + lVar9 * 4) != puVar8);
      }
      lVar6 = lVar6 + 1;
    } while (lVar14 != lVar6);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar12 + lVar4 + -8) = &UNK_00100aa3;
  __stack_chk_fail();
LAB_00100974:
  fVar19 = *(float *)((uVar16 - 4) + lVar6);
  if (fVar18 < fVar19) {
    lVar15 = lVar14 + 1;
  }
  else {
    do {
      lVar15 = lVar14;
      lVar9 = lVar6 * 2;
      if (*(long *)((uVar17 - 8) + lVar15 * 8) + (long)param_2 <= lVar7) {
LAB_00100948:
        lVar14 = lVar15 + 1;
LAB_0010094c:
        *(long *)(uVar17 + lVar9) = lVar7;
        *(float *)(uVar16 + lVar6) = fVar18;
        goto joined_r0x001009e9;
      }
      if (lVar15 == 1) {
        lVar14 = 2;
        lVar9 = 8;
        lVar6 = 4;
        goto LAB_0010094c;
      }
      fVar2 = *(float *)((uVar16 - 8) + lVar6);
      if ((fVar2 < fVar19) || (*(long *)((uVar17 - 0x10) + lVar6 * 2) + (long)param_2 <= lVar7))
      goto LAB_00100948;
      lVar6 = lVar6 + -4;
      lVar14 = lVar15 + -1;
      fVar19 = fVar2;
    } while (fVar2 <= fVar18);
  }
  *(long *)(uVar17 + lVar14 * 8) = lVar7;
  *(float *)(uVar16 + lVar6) = fVar18;
  lVar14 = lVar15;
joined_r0x001009e9:
  lVar15 = lVar7 + 1;
  if (lVar15 == param_3) goto LAB_001009f0;
  lVar7 = lVar7 + 1;
  fVar18 = *(float *)(param_1 + lVar7 * 4);
  lVar6 = lVar14 * 4;
  goto LAB_00100974;
}



void noise_normalize_isra_0
               (float *param_1,int param_2,long param_3,long param_4,long param_5,float *param_6,
               int param_7,int param_8,long param_9)

{
  float *pfVar1;
  int *piVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined1 *puVar11;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  long in_FS_OFFSET;
  float fVar16;
  undefined4 uVar17;
  double dVar18;
  ulong uVar19;
  ulong uVar20;
  float fVar21;
  float fVar22;
  undefined1 auStack_98 [8];
  float *local_90;
  long local_88;
  float *local_80;
  long local_78;
  float *local_70;
  long local_68;
  float *local_60;
  float *local_58;
  long local_50;
  long local_40;
  undefined1 *puVar12;
  
  puVar11 = auStack_98;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (long)param_8 * 8 + 0x17;
  puVar12 = auStack_98;
  puVar4 = auStack_98;
  while (puVar12 != auStack_98 + -(uVar6 & 0xfffffffffffff000)) {
    puVar11 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar12 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  uVar6 = (ulong)((uint)uVar6 & 0xff0);
  lVar3 = -uVar6;
  if (uVar6 != 0) {
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
  }
  pfVar13 = (float *)((ulong)(puVar11 + lVar3 + 0xf) & 0xfffffffffffffff0);
  if (param_1[0x7d] == 0.0) {
    iVar5 = param_8;
    if (0 < param_8) goto LAB_00100b55;
LAB_00100d78:
    iVar5 = 0;
    if (param_8 < 1) goto LAB_00100d34;
  }
  else {
    iVar5 = (int)param_1[0x7e] - param_7;
    if (param_8 < (int)param_1[0x7e] - param_7) {
      iVar5 = param_8;
    }
    if (iVar5 < 1) goto LAB_00100d78;
LAB_00100b55:
    lVar10 = 0;
    lVar8 = (long)iVar5 << 2;
    uVar6 = _LC8;
    uVar19 = _LC8;
    uVar20 = _LC6;
    do {
      if (param_6 != (float *)0x0) {
        while (*(int *)((long)param_6 + lVar10) != 0) {
          lVar10 = lVar10 + 4;
          if (lVar8 == lVar10) goto LAB_00100c01;
        }
      }
      dVar18 = (double)(*(float *)(param_4 + lVar10) / *(float *)(param_5 + lVar10));
      if (*(float *)(param_3 + lVar10) <= 0.0 && *(float *)(param_3 + lVar10) != 0.0) {
        if (dVar18 < 0.0) {
          local_68 = CONCAT44(local_68._4_4_,param_2);
          local_58 = (float *)CONCAT44(local_58._4_4_,iVar5);
          *(undefined8 *)(puVar11 + lVar3 + -8) = 0x101006;
          local_80 = pfVar13;
          local_78 = param_9;
          local_70 = param_6;
          local_60 = param_1;
          local_50 = lVar8;
          dVar18 = sqrt(dVar18);
          param_1 = local_60;
          lVar8 = local_50;
          pfVar13 = local_80;
          param_9 = local_78;
          param_6 = local_70;
          uVar6 = _LC8;
          iVar5 = (int)local_58._0_4_;
          param_2 = (int)local_68;
          uVar19 = _LC8;
          uVar20 = _LC6;
        }
        else {
          dVar18 = SQRT(dVar18);
        }
        if ((double)((ulong)dVar18 & uVar6) < _LC4) {
          dVar18 = (double)((ulong)(((double)((ulong)dVar18 & uVar6) + _LC4) - _LC4) |
                           ~uVar6 & (ulong)dVar18);
        }
        dVar18 = (double)((ulong)dVar18 ^ uVar20);
      }
      else {
        if (dVar18 < 0.0) {
          local_68 = CONCAT44(local_68._4_4_,param_2);
          local_58 = (float *)CONCAT44(local_58._4_4_,iVar5);
          *(undefined8 *)(puVar11 + lVar3 + -8) = 0x100f2e;
          local_80 = pfVar13;
          local_78 = param_9;
          local_70 = param_6;
          local_60 = param_1;
          local_50 = lVar8;
          dVar18 = sqrt(dVar18);
          param_1 = local_60;
          lVar8 = local_50;
          pfVar13 = local_80;
          param_9 = local_78;
          param_6 = local_70;
          uVar6 = _LC8;
          iVar5 = (int)local_58._0_4_;
          param_2 = (int)local_68;
          uVar19 = _LC8;
          uVar20 = _LC6;
        }
        else {
          dVar18 = SQRT(dVar18);
        }
        if ((double)((ulong)dVar18 & uVar19) < _LC4) {
          dVar18 = (double)((ulong)(((double)((ulong)dVar18 & uVar19) + _LC4) - _LC4) |
                           ~uVar19 & (ulong)dVar18);
        }
      }
      *(int *)(param_9 + lVar10) = (int)dVar18;
      lVar10 = lVar10 + 4;
    } while (lVar8 != lVar10);
LAB_00100c01:
    if (param_8 <= iVar5) goto LAB_00100d34;
  }
  lVar8 = (long)iVar5;
  iVar9 = 0;
  pfVar14 = (float *)(param_4 + lVar8 * 4);
  lVar10 = (ulong)(uint)(param_8 - iVar5) + lVar8;
  fVar21 = 0.0;
  uVar6 = _LC8;
  uVar19 = _LC8;
  uVar20 = _LC6;
  do {
    while (param_6 != (float *)0x0) {
      if (param_6[lVar8] != 0.0) goto LAB_00100c74;
      fVar22 = *(float *)(param_5 + lVar8 * 4);
      fVar16 = *pfVar14 / fVar22;
      if ((fVar16 < _LC7) && (param_2 - param_7 <= (int)lVar8)) goto LAB_00100c66;
LAB_00100ca7:
      pfVar1 = (float *)(param_3 + lVar8 * 4);
      dVar18 = (double)fVar16;
      pfVar15 = pfVar14;
      if (*pfVar1 <= 0.0 && *pfVar1 != 0.0) {
        if (dVar18 < 0.0) {
          local_78 = CONCAT44(local_78._4_4_,param_2);
          local_58 = (float *)CONCAT44(local_58._4_4_,fVar21);
          local_50 = CONCAT44(local_50._4_4_,fVar22);
          *(undefined8 *)(puVar11 + lVar3 + -8) = 0x101072;
          local_90 = pfVar13;
          local_88 = param_9;
          local_80 = param_6;
          local_70 = param_1;
          local_68 = lVar8;
          local_60 = pfVar14;
          dVar18 = sqrt(dVar18);
          param_1 = local_70;
          lVar8 = local_68;
          pfVar13 = local_90;
          param_9 = local_88;
          param_6 = local_80;
          pfVar15 = local_60;
          uVar6 = _LC8;
          param_2 = (int)local_78;
          uVar19 = _LC8;
          uVar20 = _LC6;
          fVar21 = local_58._0_4_;
          fVar22 = (float)local_50;
        }
        else {
          dVar18 = SQRT(dVar18);
        }
        if ((double)((ulong)dVar18 & uVar6) < _LC4) {
          dVar18 = (double)((ulong)(((double)((ulong)dVar18 & uVar6) + _LC4) - _LC4) |
                           ~uVar6 & (ulong)dVar18);
        }
        dVar18 = (double)((ulong)dVar18 ^ uVar20);
      }
      else {
        if (dVar18 < 0.0) {
          local_78 = CONCAT44(local_78._4_4_,param_2);
          local_58 = (float *)CONCAT44(local_58._4_4_,fVar21);
          local_50 = CONCAT44(local_50._4_4_,fVar22);
          *(undefined8 *)(puVar11 + lVar3 + -8) = 0x100f9a;
          local_90 = pfVar13;
          local_88 = param_9;
          local_80 = param_6;
          local_70 = param_1;
          local_68 = lVar8;
          local_60 = pfVar14;
          dVar18 = sqrt(dVar18);
          param_1 = local_70;
          lVar8 = local_68;
          pfVar13 = local_90;
          param_9 = local_88;
          param_6 = local_80;
          pfVar15 = local_60;
          uVar6 = _LC8;
          param_2 = (int)local_78;
          uVar19 = _LC8;
          uVar20 = _LC6;
          fVar21 = local_58._0_4_;
          fVar22 = (float)local_50;
        }
        else {
          dVar18 = SQRT(dVar18);
        }
        if ((double)((ulong)dVar18 & uVar19) < _LC4) {
          dVar18 = (double)((ulong)(((double)((ulong)dVar18 & uVar19) + _LC4) - _LC4) |
                           ~uVar19 & (ulong)dVar18);
        }
      }
      iVar5 = (int)dVar18;
      *(int *)(param_9 + lVar8 * 4) = iVar5;
      lVar8 = lVar8 + 1;
      pfVar14 = pfVar15 + 1;
      *pfVar15 = (float)(iVar5 * iVar5) * fVar22;
      if (lVar10 == lVar8) goto LAB_00100d2c;
    }
    fVar22 = *(float *)(param_5 + lVar8 * 4);
    fVar16 = *pfVar14 / fVar22;
    if (_LC7 <= fVar16) goto LAB_00100ca7;
LAB_00100c66:
    lVar7 = (long)iVar9;
    fVar21 = fVar21 + fVar16;
    iVar9 = iVar9 + 1;
    *(float **)(pfVar13 + lVar7 * 2) = pfVar14;
LAB_00100c74:
    lVar8 = lVar8 + 1;
    pfVar14 = pfVar14 + 1;
  } while (lVar10 != lVar8);
LAB_00100d2c:
  if (iVar9 != 0) {
    local_50 = CONCAT44(local_50._4_4_,fVar21);
    *(undefined8 *)(puVar11 + lVar3 + -8) = 0x100e58;
    local_68 = param_9;
    local_60 = param_1;
    local_58 = pfVar13;
    qsort(pfVar13,(long)iVar9,8,apsort);
    fVar21 = _LC1;
    if (0 < iVar9) {
      dVar18 = *(double *)(local_60 + 0x80);
      pfVar13 = local_58;
      fVar22 = (float)local_50;
      do {
        lVar8 = (long)(int)(*(long *)pfVar13 - param_4 >> 2);
        piVar2 = (int *)(local_68 + lVar8 * 4);
        if (dVar18 <= (double)fVar22) {
          fVar22 = fVar22 - fVar21;
          uVar17 = *(undefined4 *)(param_5 + lVar8 * 4);
          *piVar2 = (int)(float)(*(uint *)(param_3 + lVar8 * 4) & 0x80000000 | 0x3f800000);
        }
        else {
          *piVar2 = 0;
          uVar17 = 0;
        }
        pfVar13 = pfVar13 + 2;
        *(undefined4 *)(lVar8 * 4 + param_4) = uVar17;
      } while (local_58 + (long)iVar9 * 2 != pfVar13);
    }
  }
LAB_00100d34:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar11 + lVar3 + -8) = setup_tone_curves;
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * setup_tone_curves(float param_1,float param_2,float param_3,float *param_4,int param_5)

{
  float *pfVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  bool bVar29;
  bool bVar30;
  bool bVar31;
  bool bVar32;
  int iVar33;
  ulong uVar34;
  undefined4 *puVar35;
  void *pvVar36;
  float *pfVar37;
  undefined4 *puVar38;
  float *pfVar39;
  float *pfVar40;
  float *pfVar41;
  long lVar42;
  float *pfVar43;
  undefined1 *puVar44;
  undefined1 *puVar45;
  undefined1 *puVar47;
  long lVar48;
  float *pfVar49;
  int iVar50;
  float *pfVar51;
  long lVar52;
  float *pfVar53;
  long in_FS_OFFSET;
  uint uVar54;
  float fVar55;
  uint uVar60;
  float fVar61;
  double dVar56;
  double dVar57;
  double dVar58;
  double dVar59;
  uint uVar62;
  float fVar63;
  uint uVar64;
  float fVar65;
  uint uVar66;
  uint uVar68;
  double dVar67;
  uint uVar69;
  uint uVar70;
  int iVar71;
  int iVar72;
  int iVar73;
  double dVar74;
  undefined8 *local_7fc8;
  long local_7f98;
  long local_7f88;
  float *local_7f30;
  undefined8 local_7f28;
  undefined8 uStack_7f20;
  undefined8 local_7f18;
  undefined8 uStack_7f10;
  undefined8 local_7f08;
  undefined8 uStack_7f00;
  undefined8 local_7ef8;
  undefined8 uStack_7ef0;
  undefined8 local_7ee8;
  undefined8 uStack_7ee0;
  undefined8 local_7ed8;
  undefined8 uStack_7ed0;
  undefined8 local_7ec8;
  undefined8 uStack_7ec0;
  undefined8 local_7eb8;
  undefined8 uStack_7eb0;
  undefined8 local_7ea8;
  undefined8 uStack_7ea0;
  undefined8 local_7e98;
  undefined8 uStack_7e90;
  undefined8 local_7e88;
  undefined8 uStack_7e80;
  undefined8 local_7e78;
  undefined8 uStack_7e70;
  undefined8 local_7e68;
  undefined8 uStack_7e60;
  undefined8 local_7e58;
  undefined8 uStack_7e50;
  float local_7e48 [56];
  float local_7d68 [392];
  float local_7748 [56];
  float local_7668 [398];
  undefined1 local_7030 [28656];
  long local_40;
  undefined1 *puVar46;
  
  puVar47 = &stack0xffffffffffffffd0;
  do {
    puVar44 = puVar47;
    *(undefined8 *)(puVar44 + -0x1000) = *(undefined8 *)(puVar44 + -0x1000);
    puVar47 = puVar44 + -0x1000;
  } while (puVar44 + -0x1000 != local_7030);
  puVar45 = puVar44 + -0x1fc8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar34 = (long)param_5 * 4 + 0x17;
  puVar46 = puVar44 + -0x1fc8;
  puVar47 = puVar44 + -0x1fc8;
  while (puVar46 != puVar44 + (-0x1fc8 - (uVar34 & 0xfffffffffffff000))) {
    puVar45 = puVar47 + -0x1000;
    *(undefined8 *)(puVar47 + -8) = *(undefined8 *)(puVar47 + -8);
    puVar46 = puVar47 + -0x1000;
    puVar47 = puVar47 + -0x1000;
  }
  uVar34 = (ulong)((uint)uVar34 & 0xff0);
  lVar4 = -uVar34;
  if (uVar34 != 0) {
    *(undefined8 *)(puVar45 + -8) = *(undefined8 *)(puVar45 + -8);
  }
  puVar35 = (undefined4 *)((ulong)(puVar45 + lVar4 + 0xf) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar45 + lVar4 + -8) = 0x101189;
  pvVar36 = malloc(0x88);
  *(undefined8 *)(puVar45 + lVar4 + -8) = 0x10119f;
  memset(local_7748,0,0x7700);
  iVar33 = 0;
  lVar52 = 0;
  puVar47 = tonemasks;
  pfVar37 = local_7668;
  pfVar39 = local_7748;
  do {
    lVar42 = 0;
    iVar50 = iVar33;
    do {
      lVar48 = 0;
      fVar55 = _LC9;
      do {
        fVar61 = fVar55;
        if (iVar50 + (int)lVar48 < 0x58) {
LAB_00101279:
          fVar55 = (float)(&ATH)[iVar50 + lVar48];
          if (fVar61 <= (float)(&ATH)[iVar50 + lVar48]) {
            fVar55 = fVar61;
          }
        }
        else if (_LC10 < fVar55) {
          lVar48 = lVar48 + 1;
          fVar55 = _LC10;
          if (lVar48 == 4) break;
          fVar61 = _LC10;
          if (iVar50 + (int)lVar48 < 0x58) goto LAB_00101279;
        }
        lVar48 = lVar48 + 1;
      } while (lVar48 != 4);
      iVar50 = iVar50 + 1;
      *(float *)((long)&local_7f28 + lVar42 * 4) = fVar55;
      lVar42 = lVar42 + 1;
    } while (lVar42 != 0x38);
    lVar42 = 0;
    do {
      puVar2 = (undefined8 *)(lVar42 + (long)puVar47);
      puVar3 = (undefined8 *)((long)pfVar39 + lVar42 + 0x1c0);
      lVar42 = lVar42 + 0xe0;
      uVar5 = puVar2[1];
      uVar6 = puVar2[0xc];
      uVar7 = puVar2[0xd];
      *puVar3 = *puVar2;
      puVar3[1] = uVar5;
      uVar5 = puVar2[2];
      uVar8 = puVar2[3];
      puVar3[0xc] = uVar6;
      puVar3[0xd] = uVar7;
      uVar6 = puVar2[0x10];
      uVar7 = puVar2[0x11];
      puVar3[2] = uVar5;
      puVar3[3] = uVar8;
      uVar5 = puVar2[4];
      uVar8 = puVar2[5];
      puVar3[0x10] = uVar6;
      puVar3[0x11] = uVar7;
      uVar6 = puVar2[0x14];
      uVar7 = puVar2[0x15];
      puVar3[4] = uVar5;
      puVar3[5] = uVar8;
      uVar5 = puVar2[6];
      uVar8 = puVar2[7];
      puVar3[0x14] = uVar6;
      puVar3[0x15] = uVar7;
      uVar6 = puVar2[0x18];
      uVar7 = puVar2[0x19];
      puVar3[6] = uVar5;
      puVar3[7] = uVar8;
      uVar5 = puVar2[8];
      uVar8 = puVar2[9];
      puVar3[0x18] = uVar6;
      puVar3[0x19] = uVar7;
      puVar3[8] = uVar5;
      puVar3[9] = uVar8;
      uVar5 = puVar2[0xb];
      puVar3[10] = puVar2[10];
      puVar3[0xb] = uVar5;
      uVar5 = puVar2[0xf];
      puVar3[0xe] = puVar2[0xe];
      puVar3[0xf] = uVar5;
      uVar5 = puVar2[0x13];
      puVar3[0x12] = puVar2[0x12];
      puVar3[0x13] = uVar5;
      uVar5 = puVar2[0x17];
      puVar3[0x16] = puVar2[0x16];
      puVar3[0x17] = uVar5;
      uVar5 = puVar2[0x1b];
      puVar3[0x1a] = puVar2[0x1a];
      puVar3[0x1b] = uVar5;
    } while (lVar42 != 0x540);
    uVar5 = *(undefined8 *)((long)puVar47 + 0xa0);
    uVar6 = *(undefined8 *)((long)puVar47 + 0xa8);
    uVar7 = *(undefined8 *)((long)puVar47 + 0x50);
    uVar8 = *(undefined8 *)((long)puVar47 + 0x58);
    pfVar1 = pfVar37 + 0x1c0;
    uVar9 = *(undefined8 *)((long)puVar47 + 0x60);
    uVar10 = *(undefined8 *)((long)puVar47 + 0x68);
    uVar11 = *(undefined8 *)((long)puVar47 + 0x70);
    uVar12 = *(undefined8 *)((long)puVar47 + 0x78);
    uVar13 = *(undefined8 *)puVar47;
    uVar14 = *(undefined8 *)((long)puVar47 + 8);
    uVar15 = *(undefined8 *)((long)puVar47 + 0x10);
    uVar16 = *(undefined8 *)((long)puVar47 + 0x18);
    *(undefined8 *)(pfVar39 + 0x14) = uVar7;
    *(undefined8 *)(pfVar39 + 0x16) = uVar8;
    uVar17 = *(undefined8 *)((long)puVar47 + 0x20);
    uVar18 = *(undefined8 *)((long)puVar47 + 0x28);
    uVar19 = *(undefined8 *)((long)puVar47 + 0x40);
    uVar20 = *(undefined8 *)((long)puVar47 + 0x48);
    *(undefined8 *)(pfVar39 + 0x28) = uVar5;
    *(undefined8 *)(pfVar39 + 0x2a) = uVar6;
    uVar21 = *(undefined8 *)((long)puVar47 + 0xb0);
    uVar22 = *(undefined8 *)((long)puVar47 + 0xb8);
    uVar23 = *(undefined8 *)((long)puVar47 + 0x80);
    uVar24 = *(undefined8 *)((long)puVar47 + 0x88);
    uVar25 = *(undefined8 *)((long)puVar47 + 0x90);
    uVar26 = *(undefined8 *)((long)puVar47 + 0x98);
    uVar27 = *(undefined8 *)((long)puVar47 + 0x30);
    uVar28 = *(undefined8 *)((long)puVar47 + 0x38);
    *(undefined8 *)(pfVar39 + 0x18) = uVar9;
    *(undefined8 *)(pfVar39 + 0x1a) = uVar10;
    *(undefined8 *)(pfVar39 + 0x2c) = uVar21;
    *(undefined8 *)(pfVar39 + 0x2e) = uVar22;
    uVar21 = *(undefined8 *)((long)puVar47 + 0xc0);
    uVar22 = *(undefined8 *)((long)puVar47 + 200);
    *(undefined8 *)(pfVar39 + 0x1c) = uVar11;
    *(undefined8 *)(pfVar39 + 0x1e) = uVar12;
    *(undefined8 *)(pfVar39 + 0x30) = uVar21;
    *(undefined8 *)(pfVar39 + 0x32) = uVar22;
    uVar21 = *(undefined8 *)((long)puVar47 + 0xd0);
    uVar22 = *(undefined8 *)((long)puVar47 + 0xd8);
    *(undefined8 *)pfVar39 = uVar13;
    *(undefined8 *)(pfVar39 + 2) = uVar14;
    *(undefined8 *)(pfVar39 + 4) = uVar15;
    *(undefined8 *)(pfVar39 + 6) = uVar16;
    *(undefined8 *)(pfVar39 + 8) = uVar17;
    *(undefined8 *)(pfVar39 + 10) = uVar18;
    *(undefined8 *)(pfVar39 + 0xc) = uVar27;
    *(undefined8 *)(pfVar39 + 0xe) = uVar28;
    *(undefined8 *)(pfVar39 + 0x10) = uVar19;
    *(undefined8 *)(pfVar39 + 0x12) = uVar20;
    *(undefined8 *)(pfVar39 + 0x20) = uVar23;
    *(undefined8 *)(pfVar39 + 0x22) = uVar24;
    *(undefined8 *)(pfVar39 + 0x24) = uVar25;
    *(undefined8 *)(pfVar39 + 0x26) = uVar26;
    *(undefined8 *)(pfVar39 + 0x34) = uVar21;
    *(undefined8 *)(pfVar39 + 0x36) = uVar22;
    *(undefined8 *)pfVar37 = uVar13;
    *(undefined8 *)(pfVar37 + 2) = uVar14;
    *(undefined8 *)(pfVar37 + 4) = uVar15;
    *(undefined8 *)(pfVar37 + 6) = uVar16;
    *(undefined8 *)(pfVar37 + 8) = uVar17;
    *(undefined8 *)(pfVar37 + 10) = uVar18;
    *(undefined8 *)(pfVar37 + 0xc) = uVar27;
    *(undefined8 *)(pfVar37 + 0xe) = uVar28;
    *(undefined8 *)(pfVar37 + 0x1c) = uVar11;
    *(undefined8 *)(pfVar37 + 0x1e) = uVar12;
    uVar11 = *(undefined8 *)((long)puVar47 + 0xb0);
    uVar12 = *(undefined8 *)((long)puVar47 + 0xb8);
    *(undefined8 *)(pfVar37 + 0x14) = uVar7;
    *(undefined8 *)(pfVar37 + 0x16) = uVar8;
    *(undefined8 *)(pfVar37 + 0x18) = uVar9;
    *(undefined8 *)(pfVar37 + 0x1a) = uVar10;
    *(undefined8 *)(pfVar37 + 0x2c) = uVar11;
    *(undefined8 *)(pfVar37 + 0x2e) = uVar12;
    *(undefined8 *)(pfVar37 + 0x28) = uVar5;
    *(undefined8 *)(pfVar37 + 0x2a) = uVar6;
    uVar5 = *(undefined8 *)((long)puVar47 + 0xc0);
    uVar6 = *(undefined8 *)((long)puVar47 + 200);
    *(undefined8 *)(pfVar37 + 0x10) = uVar19;
    *(undefined8 *)(pfVar37 + 0x12) = uVar20;
    *(undefined8 *)(pfVar37 + 0x20) = uVar23;
    *(undefined8 *)(pfVar37 + 0x22) = uVar24;
    *(undefined8 *)(pfVar37 + 0x24) = uVar25;
    *(undefined8 *)(pfVar37 + 0x26) = uVar26;
    *(undefined8 *)(pfVar37 + 0x30) = uVar5;
    *(undefined8 *)(pfVar37 + 0x32) = uVar6;
    *(undefined8 *)(pfVar37 + 0x34) = uVar21;
    *(undefined8 *)(pfVar37 + 0x36) = uVar22;
    pfVar43 = pfVar37;
    do {
      pfVar49 = pfVar43 + -0x38;
      iVar50 = __LC11;
      iVar71 = _UNK_0010a134;
      iVar72 = _UNK_0010a138;
      iVar73 = _UNK_0010a13c;
      do {
        pfVar51 = pfVar49;
        uVar54 = __LC17 - iVar50;
        uVar60 = _UNK_0010a154 - iVar71;
        uVar62 = _UNK_0010a158 - iVar72;
        uVar64 = _UNK_0010a15c - iVar73;
        iVar50 = iVar50 + __LC16;
        iVar71 = iVar71 + _UNK_0010a144;
        iVar72 = iVar72 + _UNK_0010a148;
        iVar73 = iVar73 + _UNK_0010a14c;
        uVar66 = (int)uVar54 >> 0x1f;
        uVar68 = (int)uVar60 >> 0x1f;
        uVar69 = (int)uVar62 >> 0x1f;
        uVar70 = (int)uVar64 >> 0x1f;
        fVar55 = (float)(int)((uVar54 ^ uVar66) - uVar66) * param_3 + param_2;
        fVar61 = (float)(int)((uVar60 ^ uVar68) - uVar68) * param_3 + param_2;
        fVar63 = (float)(int)((uVar62 ^ uVar69) - uVar69) * param_3 + param_2;
        fVar65 = (float)(int)((uVar64 ^ uVar70) - uVar70) * param_3 + param_2;
        bVar31 = 0.0 < fVar55 && param_2 < 0.0;
        bVar32 = 0.0 < fVar61 && param_2 < 0.0;
        bVar29 = 0.0 < fVar63 && param_2 < 0.0;
        bVar30 = 0.0 < fVar65 && param_2 < 0.0;
        *pfVar51 = (float)(~-(uint)(bVar31 != (fVar55 < 0.0 && 0.0 < param_2 != bVar31)) &
                          (uint)fVar55) + *pfVar51;
        pfVar51[1] = (float)(~-(uint)(bVar32 != (fVar61 < 0.0 && 0.0 < param_2 != bVar32)) &
                            (uint)fVar61) + pfVar51[1];
        pfVar51[2] = (float)(~-(uint)(bVar29 != (fVar63 < 0.0 && 0.0 < param_2 != bVar29)) &
                            (uint)fVar63) + pfVar51[2];
        pfVar51[3] = (float)(~-(uint)(bVar30 != (fVar65 < 0.0 && 0.0 < param_2 != bVar30)) &
                            (uint)fVar65) + pfVar51[3];
        pfVar49 = pfVar51 + 4;
      } while (pfVar51 + 4 != pfVar43);
      pfVar43 = pfVar51 + 0x3c;
    } while (pfVar43 != pfVar1);
    fVar55 = *param_4;
    iVar50 = 0;
    pfVar43 = pfVar37;
    pfVar49 = local_7e48;
    pfVar51 = pfVar39;
    pfVar53 = local_7d68;
    dVar74 = _LC12;
    while( true ) {
      fVar61 = (float)((((double)fVar55 + _LC18) - dVar74) - _LC20);
      pfVar41 = pfVar51;
      do {
        pfVar40 = pfVar41 + 4;
        *pfVar41 = *pfVar41 + fVar61;
        pfVar41[1] = pfVar41[1] + fVar61;
        pfVar41[2] = pfVar41[2] + fVar61;
        pfVar41[3] = pfVar41[3] + fVar61;
        pfVar41 = pfVar40;
      } while (pfVar43 != pfVar40);
      *(undefined8 *)pfVar49 = local_7f28;
      *(undefined8 *)(pfVar49 + 2) = uStack_7f20;
      *(undefined8 *)(pfVar49 + 4) = local_7f18;
      *(undefined8 *)(pfVar49 + 6) = uStack_7f10;
      *(undefined8 *)(pfVar49 + 0x20) = local_7ea8;
      *(undefined8 *)(pfVar49 + 0x22) = uStack_7ea0;
      *(undefined8 *)(pfVar49 + 8) = local_7f08;
      *(undefined8 *)(pfVar49 + 10) = uStack_7f00;
      *(undefined8 *)(pfVar49 + 0x24) = local_7e98;
      *(undefined8 *)(pfVar49 + 0x26) = uStack_7e90;
      *(undefined8 *)(pfVar49 + 0xc) = local_7ef8;
      *(undefined8 *)(pfVar49 + 0xe) = uStack_7ef0;
      *(undefined8 *)(pfVar49 + 0x28) = local_7e88;
      *(undefined8 *)(pfVar49 + 0x2a) = uStack_7e80;
      *(undefined8 *)(pfVar49 + 0x10) = local_7ee8;
      *(undefined8 *)(pfVar49 + 0x12) = uStack_7ee0;
      *(undefined8 *)(pfVar49 + 0x2c) = local_7e78;
      *(undefined8 *)(pfVar49 + 0x2e) = uStack_7e70;
      *(undefined8 *)(pfVar49 + 0x14) = local_7ed8;
      *(undefined8 *)(pfVar49 + 0x16) = uStack_7ed0;
      *(undefined8 *)(pfVar49 + 0x30) = local_7e68;
      *(undefined8 *)(pfVar49 + 0x32) = uStack_7e60;
      *(undefined8 *)(pfVar49 + 0x18) = local_7ec8;
      *(undefined8 *)(pfVar49 + 0x1a) = uStack_7ec0;
      *(undefined8 *)(pfVar49 + 0x34) = local_7e58;
      *(undefined8 *)(pfVar49 + 0x36) = uStack_7e50;
      *(undefined8 *)(pfVar49 + 0x1c) = local_7eb8;
      *(undefined8 *)(pfVar49 + 0x1e) = uStack_7eb0;
      fVar61 = (float)((_LC18 - (double)((float)iVar50 * __LC21)) - _LC20);
      pfVar41 = pfVar49;
      do {
        pfVar40 = pfVar41 + 4;
        *pfVar41 = *pfVar41 + fVar61;
        pfVar41[1] = pfVar41[1] + fVar61;
        pfVar41[2] = pfVar41[2] + fVar61;
        pfVar41[3] = pfVar41[3] + fVar61;
        pfVar41 = pfVar40;
      } while (pfVar40 != pfVar53);
      lVar42 = 0;
      do {
        fVar61 = *(float *)((long)pfVar51 + lVar42);
        if (*(float *)((long)pfVar49 + lVar42) <= fVar61 &&
            fVar61 != *(float *)((long)pfVar49 + lVar42)) {
          *(float *)((long)pfVar49 + lVar42) = fVar61;
        }
        lVar42 = lVar42 + 4;
      } while (lVar42 != 0xe0);
      iVar50 = iVar50 + 1;
      pfVar51 = pfVar51 + 0x38;
      pfVar49 = pfVar49 + 0x38;
      pfVar53 = pfVar53 + 0x38;
      pfVar43 = pfVar43 + 0x38;
      pfVar41 = local_7d68;
      if (iVar50 == 8) break;
      dVar74 = _LC12;
      if (iVar50 != 1) {
        dVar74 = (double)iVar50 * __LC19;
      }
    }
    do {
      lVar42 = 0;
      do {
        fVar55 = *(float *)((long)pfVar41 + lVar42 + -0xe0);
        if (fVar55 < *(float *)((long)pfVar41 + lVar42)) {
          *(float *)((long)pfVar41 + lVar42) = fVar55;
        }
        lVar42 = lVar42 + 4;
      } while (lVar42 != 0xe0);
      lVar42 = 0;
      do {
        if (*(float *)((long)pfVar41 + lVar42) < *(float *)((long)pfVar37 + lVar42)) {
          *(float *)((long)pfVar37 + lVar42) = *(float *)((long)pfVar41 + lVar42);
        }
        lVar42 = lVar42 + 4;
      } while (lVar42 != 0xe0);
      pfVar41 = pfVar41 + 0x38;
      pfVar37 = pfVar37 + 0x38;
    } while (pfVar41 != local_7748);
    lVar52 = lVar52 + 0x700;
    param_4 = param_4 + 1;
    iVar33 = iVar33 + 4;
    pfVar39 = pfVar39 + 0x1c0;
    puVar47 = (undefined1 *)((long)puVar47 + 0x540);
    pfVar37 = pfVar1;
  } while (lVar52 != 0x7700);
  dVar74 = (double)param_1;
  local_7f98 = 0;
  local_7f30 = local_7748;
  do {
    *(undefined8 *)(puVar45 + lVar4 + -8) = 0x1018a9;
    local_7fc8 = (undefined8 *)malloc(0x40);
    dVar56 = (double)(int)local_7f98 * _LC22;
    *(undefined8 **)((long)pvVar36 + local_7f98 * 8) = local_7fc8;
    *(undefined8 *)(puVar45 + lVar4 + -8) = 0x1018f3;
    dVar57 = exp((_LC23 + dVar56) * __LC24);
    dVar57 = dVar57 / dVar74;
    if ((double)(_LC8 & (ulong)dVar57) < _LC4) {
      dVar57 = (double)((ulong)((double)(long)dVar57 -
                               (double)(-(ulong)(dVar57 < (double)(long)dVar57) & (ulong)_LC25)) |
                       ~_LC8 & (ulong)dVar57);
    }
    *(undefined8 *)(puVar45 + lVar4 + -8) = 0x10197b;
    dVar58 = log((double)((float)(int)dVar57 * param_1 + _LC1));
    dVar58 = _LC26 * dVar58 - _LC23;
    dVar58 = dVar58 + dVar58;
    if ((double)(_LC8 & (ulong)dVar58) < _LC4) {
      dVar58 = (double)((ulong)((double)(long)dVar58 +
                               (double)(-(ulong)((double)(long)dVar58 < dVar58) & (ulong)_LC25)) |
                       ~_LC8 & (ulong)dVar58);
    }
    *(undefined8 *)(puVar45 + lVar4 + -8) = 0x101a12;
    dVar57 = log((double)((float)((int)dVar57 + 1) * param_1));
    dVar57 = dVar57 * _LC26 - _LC23;
    dVar57 = dVar57 + dVar57;
    if ((double)(_LC8 & (ulong)dVar57) < _LC4) {
      dVar57 = (double)((ulong)((double)(long)dVar57 -
                               (double)(-(ulong)(dVar57 < (double)(long)dVar57) & (ulong)_LC25)) |
                       ~_LC8 & (ulong)dVar57);
    }
    local_7f88 = 0;
    iVar33 = (int)dVar58;
    if ((int)local_7f98 < (int)dVar58) {
      iVar33 = (int)local_7f98;
    }
    if (iVar33 < 0) {
      iVar33 = 0;
    }
    iVar50 = 0x10;
    if ((int)dVar57 < 0x11) {
      iVar50 = (int)dVar57;
    }
    do {
      *(undefined8 *)(puVar45 + lVar4 + -8) = 0x101b07;
      pfVar37 = (float *)malloc(0xe8);
      *local_7fc8 = pfVar37;
      puVar38 = puVar35;
      if (0 < param_5) {
        do {
          *puVar38 = 0x4479c000;
          puVar38 = puVar38 + 1;
        } while (puVar35 + param_5 != puVar38);
      }
      dVar57 = _LC29;
      if (iVar33 <= iVar50) {
        lVar52 = (long)local_7748 + local_7f88 + (long)iVar33 * 0x700;
        iVar71 = iVar33;
        do {
          lVar42 = 0;
          dVar58 = (double)iVar71 * _LC22;
          iVar72 = 0;
          do {
            while( true ) {
              dVar67 = (double)(int)lVar42 * __LC27 + dVar58;
              *(undefined8 *)(puVar45 + lVar4 + -8) = 0x101c01;
              dVar59 = exp(((dVar67 - __LC28) + _LC23) * __LC24);
              *(undefined8 *)(puVar45 + lVar4 + -8) = 0x101c32;
              dVar67 = exp((_LC23 + (dVar67 - dVar57)) * __LC24);
              iVar73 = (int)(dVar59 / dVar74);
              if ((int)(dVar59 / dVar74) < 0) {
                iVar73 = 0;
              }
              if (param_5 <= iVar72) {
                iVar72 = param_5;
              }
              if (iVar73 <= iVar72) {
                iVar72 = iVar73;
              }
              iVar73 = (int)(dVar67 / dVar74 + _LC25);
              if (iVar73 < 0) {
                iVar73 = 0;
              }
              if (param_5 < iVar73) {
                iVar73 = param_5;
              }
              if (iVar73 <= iVar72) break;
              fVar55 = *(float *)(lVar52 + lVar42 * 4);
              pfVar39 = (float *)(puVar35 + iVar72);
              do {
                if (fVar55 < *pfVar39) {
                  *pfVar39 = fVar55;
                }
                pfVar39 = pfVar39 + 1;
              } while (pfVar39 != (float *)(puVar35 + (ulong)(uint)(iVar73 - iVar72) + (long)iVar72)
                      );
              lVar42 = lVar42 + 1;
              iVar72 = iVar73;
              if (lVar42 == 0x38) goto LAB_00101cd4;
            }
            lVar42 = lVar42 + 1;
          } while (lVar42 != 0x38);
LAB_00101cd4:
          if (iVar72 < param_5) {
            fVar55 = *(float *)(lVar52 + 0xdc);
            pfVar39 = (float *)(puVar35 + iVar72);
            do {
              if (fVar55 < *pfVar39) {
                *pfVar39 = fVar55;
              }
              pfVar39 = pfVar39 + 1;
            } while (pfVar39 != (float *)(puVar35 + (ulong)(uint)(param_5 - iVar72) + (long)iVar72))
            ;
          }
          iVar71 = iVar71 + 1;
          lVar52 = lVar52 + 0x700;
        } while (iVar71 != iVar50 + 1);
      }
      dVar58 = _LC29;
      dVar57 = _LC25;
      if (local_7f98 != 0x10) {
        lVar52 = 0;
        iVar71 = 0;
        do {
          while( true ) {
            dVar67 = (double)(int)lVar52 * __LC27 + dVar56;
            *(undefined8 *)(puVar45 + lVar4 + -8) = 0x101ddc;
            dVar59 = exp(((dVar67 - __LC28) + _LC23) * __LC24);
            *(undefined8 *)(puVar45 + lVar4 + -8) = 0x101e0d;
            dVar67 = exp((_LC23 + (dVar67 - dVar58)) * __LC24);
            iVar72 = (int)(dVar59 / dVar74);
            if (iVar72 < 0) {
              iVar72 = 0;
            }
            iVar73 = iVar71;
            if (param_5 <= iVar71) {
              iVar73 = param_5;
            }
            iVar71 = iVar72;
            if (iVar73 < iVar72) {
              iVar71 = iVar73;
            }
            iVar72 = (int)(dVar67 / dVar74 + dVar57);
            if (iVar72 < 0) {
              iVar72 = 0;
            }
            if (param_5 < iVar72) {
              iVar72 = param_5;
            }
            if (iVar72 <= iVar71) break;
            fVar55 = *(float *)((long)(local_7f30 + 0x1c0) + lVar52 * 4 + local_7f88);
            pfVar39 = (float *)(puVar35 + iVar71);
            do {
              if (fVar55 < *pfVar39) {
                *pfVar39 = fVar55;
              }
              pfVar39 = pfVar39 + 1;
            } while (pfVar39 != (float *)(puVar35 + (ulong)(uint)(iVar72 - iVar71) + (long)iVar71));
            lVar52 = lVar52 + 1;
            iVar71 = iVar72;
            if (lVar52 == 0x38) goto LAB_00101ea4;
          }
          lVar52 = lVar52 + 1;
        } while (lVar52 != 0x38);
LAB_00101ea4:
        if (iVar71 < param_5) {
          fVar55 = *(float *)((long)local_7f30 + local_7f88 + 0x7dc);
          pfVar39 = (float *)(puVar35 + iVar71);
          do {
            if (fVar55 < *pfVar39) {
              *pfVar39 = fVar55;
            }
            pfVar39 = pfVar39 + 1;
          } while ((float *)(puVar35 + (ulong)(uint)(param_5 - iVar71) + (long)iVar71) != pfVar39);
        }
      }
      lVar52 = 0;
      do {
        *(undefined8 *)(puVar45 + lVar4 + -8) = 0x101f35;
        dVar57 = exp(((((double)(int)lVar52 * __LC27 + dVar56) - __LC30) + _LC23) * __LC24);
        iVar71 = (int)(dVar57 / dVar74);
        fVar55 = _LC13;
        if ((-1 < iVar71) && (iVar71 < param_5)) {
          fVar55 = (float)puVar35[iVar71];
        }
        pfVar37[lVar52 + 2] = fVar55;
        lVar52 = lVar52 + 1;
      } while (lVar52 != 0x38);
      lVar52 = 0;
      do {
        if (__LC31 < pfVar37[lVar52 + 2]) {
          fVar55 = (float)(int)lVar52;
          break;
        }
        lVar52 = lVar52 + 1;
        fVar55 = _LC14;
      } while (lVar52 != 0x10);
      *pfVar37 = fVar55;
      lVar52 = 0x37;
      do {
        if (__LC31 < pfVar37[lVar52 + 2]) {
          fVar55 = (float)(int)lVar52;
          break;
        }
        lVar52 = lVar52 + -1;
        fVar55 = _LC15;
      } while (lVar52 != 0x11);
      local_7f88 = local_7f88 + 0xe0;
      local_7fc8 = local_7fc8 + 1;
      pfVar37[1] = fVar55;
    } while (local_7f88 != 0x700);
    local_7f98 = local_7f98 + 1;
    local_7f30 = local_7f30 + 0x1c0;
    if (local_7f98 == 0x11) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return pvVar36;
      }
                    /* WARNING: Subroutine does not return */
      *(undefined **)(puVar45 + lVar4 + -8) = &UNK_001020a6;
      __stack_chk_fail();
    }
  } while( true );
}


