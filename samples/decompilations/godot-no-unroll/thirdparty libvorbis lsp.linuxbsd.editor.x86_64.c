
void cheby(float *param_1,int param_2)

{
  float *pfVar1;
  float *pfVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  *param_1 = _LC0 * *param_1;
  if (1 < param_2) {
    iVar3 = 2;
    param_1 = param_1 + param_2;
    do {
      if (iVar3 <= param_2) {
        pfVar1 = param_1;
        fVar4 = *param_1;
        fVar5 = param_1[-1];
        do {
          pfVar2 = pfVar1 + -1;
          fVar6 = pfVar1[-2] - fVar4;
          pfVar1[-2] = fVar6;
          *pfVar1 = fVar4 + fVar4;
          pfVar1 = pfVar2;
          fVar4 = fVar5;
          fVar5 = fVar6;
        } while (pfVar2 != param_1 + (-1 - (ulong)(uint)(param_2 - iVar3)));
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != param_2 + 1);
  }
  return;
}



int comp(float *param_1,float *param_2)

{
  return (uint)(*param_1 < *param_2) - (uint)(*param_2 < *param_1);
}



undefined8 Laguerre_With_Deflation(long param_1,int param_2,long param_3)

{
  long lVar1;
  undefined1 *puVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  double *pdVar9;
  undefined1 *puVar10;
  long lVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  long in_FS_OFFSET;
  bool bVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined1 auStack_18 [8];
  long local_10;
  undefined1 *puVar11;
  
  lVar13 = (long)(param_2 + 1) * 8;
  puVar10 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar15 = lVar13 + 0x17;
  puVar11 = auStack_18;
  puVar2 = auStack_18;
  while (puVar11 != auStack_18 + -(uVar15 & 0xfffffffffffff000)) {
    puVar10 = puVar2 + -0x1000;
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
    puVar11 = puVar2 + -0x1000;
    puVar2 = puVar2 + -0x1000;
  }
  uVar15 = (ulong)((uint)uVar15 & 0xff0);
  lVar1 = -uVar15;
  if (uVar15 != 0) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  lVar12 = (long)param_2;
  lVar7 = 0;
  uVar15 = (ulong)(puVar10 + lVar1 + 0xf) & 0xfffffffffffffff0;
  if (-1 < param_2) {
    do {
      *(double *)(uVar15 + lVar7 * 8) = (double)*(float *)(param_1 + lVar7 * 4);
      uVar6 = _LC4;
      dVar5 = _LC5;
      dVar4 = _LC3;
      dVar3 = _LC2;
      bVar16 = lVar12 != lVar7;
      lVar7 = lVar7 + 1;
    } while (bVar16);
    if (param_2 != 0) {
      lVar13 = lVar13 + -8;
      do {
        iVar14 = param_2 + -1;
        pdVar9 = (double *)(uVar15 + lVar13);
        dVar20 = 0.0;
        dVar21 = *pdVar9;
        do {
          dVar19 = 0.0;
          dVar18 = 0.0;
          lVar7 = lVar12;
          dVar17 = dVar21;
          do {
            dVar19 = dVar19 * dVar20 + dVar18;
            dVar18 = dVar18 * dVar20 + dVar17;
            dVar17 = dVar17 * dVar20 + *(double *)((uVar15 - 8) + lVar7 * 8);
            lVar7 = lVar7 + -1;
          } while ((int)lVar7 != 0);
          dVar19 = (dVar18 * (double)iVar14 * dVar18 - dVar19 * dVar17 * (double)param_2) *
                   (double)iVar14;
          if (dVar19 < 0.0) {
            uVar8 = 0xffffffff;
            goto LAB_001002bb;
          }
          dVar19 = SQRT(dVar19);
          if (dVar18 <= 0.0) {
            dVar18 = dVar18 - dVar19;
            dVar19 = dVar4;
            if (dVar18 <= dVar4) {
              dVar19 = dVar18;
            }
          }
          else {
            dVar18 = dVar18 + dVar19;
            dVar19 = dVar3;
            if (dVar3 <= dVar18) {
              dVar19 = dVar18;
            }
          }
          dVar19 = (dVar17 * (double)param_2) / dVar19;
          dVar20 = dVar20 - dVar19;
        } while (dVar5 <= (double)((ulong)(dVar19 / dVar20) & uVar6));
        lVar13 = lVar13 + -8;
        *(float *)(param_3 + -4 + lVar12 * 4) = (float)dVar20;
        do {
          pdVar9 = pdVar9 + -1;
          dVar21 = dVar21 * dVar20 + *pdVar9;
          *pdVar9 = dVar21;
        } while ((double *)(uVar15 + lVar13 + (long)iVar14 * -8) != pdVar9);
        uVar15 = uVar15 + 8;
        lVar12 = lVar12 + -1;
        param_2 = iVar14;
      } while (iVar14 != 0);
    }
  }
  uVar8 = 0;
LAB_001002bb:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  *(code **)(puVar10 + lVar1 + -8) = Newton_Raphson_isra_0;
  __stack_chk_fail();
}



void Newton_Raphson_isra_0(long param_1,int param_2,long param_3)

{
  long lVar1;
  float fVar2;
  double dVar3;
  long lVar4;
  undefined1 *puVar5;
  double dVar6;
  ulong uVar7;
  long lVar8;
  double *pdVar9;
  double *pdVar10;
  undefined1 *puVar11;
  double *pdVar13;
  long lVar14;
  int iVar15;
  long in_FS_OFFSET;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined1 auStack_18 [8];
  long local_10;
  undefined1 *puVar12;
  
  lVar14 = (long)param_2;
  uVar7 = lVar14 * 8 + 0x17;
  puVar11 = auStack_18;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar12 = auStack_18;
  puVar5 = auStack_18;
  while (puVar12 != auStack_18 + -(uVar7 & 0xfffffffffffff000)) {
    puVar11 = puVar5 + -0x1000;
    *(undefined8 *)(puVar5 + -8) = *(undefined8 *)(puVar5 + -8);
    puVar12 = puVar5 + -0x1000;
    puVar5 = puVar5 + -0x1000;
  }
  uVar7 = (ulong)((uint)uVar7 & 0xff0);
  lVar4 = -uVar7;
  if (uVar7 != 0) {
    *(undefined8 *)(puVar11 + -8) = *(undefined8 *)(puVar11 + -8);
  }
  lVar8 = 0;
  pdVar13 = (double *)((ulong)(puVar11 + lVar4 + 0xf) & 0xfffffffffffffff0);
  if (0 < param_2) {
    do {
      pdVar13[lVar8] = (double)*(float *)(param_3 + lVar8 * 4);
      dVar6 = _LC6;
      lVar8 = lVar8 + 1;
    } while (lVar14 != lVar8);
    if (0 < param_2) {
      iVar15 = 0x2a;
      fVar2 = *(float *)(param_1 + lVar14 * 4);
      do {
        dVar18 = 0.0;
        pdVar9 = pdVar13;
        do {
          dVar3 = *pdVar9;
          dVar17 = 0.0;
          lVar8 = (long)(param_2 + -1);
          dVar16 = (double)fVar2;
          do {
            lVar1 = lVar8 * 4;
            lVar8 = lVar8 + -1;
            dVar17 = dVar17 * dVar3 + dVar16;
            dVar16 = dVar16 * dVar3 + (double)*(float *)(param_1 + lVar1);
          } while ((int)lVar8 != -1);
          dVar16 = dVar16 / dVar17;
          pdVar10 = pdVar9 + 1;
          *pdVar9 = dVar3 - dVar16;
          dVar18 = dVar18 + dVar16 * dVar16;
          pdVar9 = pdVar10;
        } while (pdVar13 + lVar14 != pdVar10);
        iVar15 = iVar15 + -1;
        if (iVar15 == 0) goto LAB_00100427;
      } while (dVar6 < dVar18);
      lVar8 = 0;
      do {
        *(float *)(param_3 + lVar8 * 4) = (float)pdVar13[lVar8];
        lVar8 = lVar8 + 1;
      } while (lVar14 != lVar8);
    }
  }
LAB_00100427:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar11 + lVar4 + -8) = &UNK_00100448;
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void vorbis_lsp_to_curve(float param_1,float param_2,long param_3,long param_4,int param_5,
                        int param_6,float *param_7,int param_8)

{
  long lVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  double dVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  dVar9 = _LC7 / (double)param_6;
  if (0 < param_8) {
    pfVar4 = param_7;
    do {
      pfVar6 = pfVar4 + 1;
      dVar10 = cos((double)*pfVar4);
      *pfVar4 = (float)(dVar10 + dVar10);
      pfVar4 = pfVar6;
    } while (param_7 + param_8 != pfVar6);
  }
  if (0 < param_5) {
    iVar7 = 0;
    do {
      iVar2 = *(int *)(param_4 + (long)iVar7 * 4);
      lVar1 = (long)iVar7 * 4;
      dVar10 = cos((double)((float)iVar2 * (float)dVar9));
      fVar8 = (float)(dVar10 + dVar10);
      pfVar4 = param_7;
      fVar12 = _LC0;
      fVar11 = _LC0;
      if (param_8 < 2) {
        iVar3 = 1;
      }
      else {
        do {
          pfVar6 = pfVar4 + 2;
          fVar12 = fVar12 * (fVar8 - *pfVar4);
          fVar11 = fVar11 * (fVar8 - pfVar4[1]);
          pfVar4 = pfVar6;
          iVar3 = (param_8 - 2U & 0xfffffffe) + 3;
        } while (param_7 + (ulong)(param_8 - 2U >> 1) * 2 + 2 != pfVar6);
      }
      if (param_8 == iVar3) {
        fVar12 = fVar12 * (fVar8 - param_7[(long)param_8 + -1]);
        fVar13 = _LC8 - fVar8 * fVar8;
        fVar12 = fVar12 * fVar12;
      }
      else {
        fVar13 = _LC9 - fVar8;
        fVar12 = fVar12 * (fVar8 + _LC9) * fVar12;
      }
      dVar10 = (double)(fVar11 * fVar13 * fVar11 + fVar12);
      if (dVar10 < 0.0) {
        dVar10 = sqrt(dVar10);
      }
      else {
        dVar10 = SQRT(dVar10);
      }
      dVar10 = exp(((double)param_1 / dVar10 - (double)param_2) *
                   (double)CONCAT44(_UNK_00100ba4,_LC9));
      *(float *)(param_3 + lVar1) = *(float *)(param_3 + lVar1) * (float)dVar10;
      lVar5 = lVar1 + 4;
      iVar3 = *(int *)(param_4 + 4 + lVar1);
      while (iVar7 = iVar7 + 1, iVar2 == iVar3) {
        *(float *)(param_3 + lVar5) = *(float *)(param_3 + lVar5) * (float)dVar10;
        lVar5 = lVar5 + 4;
        iVar3 = *(int *)(param_4 + lVar5);
      }
    } while (iVar7 < param_5);
  }
  return;
}



int vorbis_lpc_to_lsp(long param_1,float *param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  int iVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  undefined1 *puVar10;
  undefined1 *puVar12;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  float *pfVar21;
  long in_FS_OFFSET;
  float fVar22;
  double dVar23;
  float fVar24;
  float fVar25;
  undefined1 auStack_88 [8];
  long local_80;
  size_t local_78;
  size_t local_70;
  int local_64;
  long local_60;
  float *local_58;
  float *local_50;
  long local_40;
  undefined1 *puVar11;
  undefined1 *puVar13;
  
  fVar25 = _LC11;
  uVar18 = param_3 + 1 >> 1;
  puVar10 = auStack_88;
  lVar17 = (long)(int)(uVar18 + 1) * 4;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = lVar17 + 0x17;
  uVar19 = (uint)uVar1;
  puVar11 = auStack_88;
  puVar12 = auStack_88;
  while (puVar11 != auStack_88 + -(uVar1 & 0xfffffffffffff000)) {
    puVar10 = puVar12 + -0x1000;
    *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
    puVar11 = puVar12 + -0x1000;
    puVar12 = puVar12 + -0x1000;
  }
  lVar3 = -(ulong)(uVar19 & 0xff0);
  puVar12 = puVar10 + lVar3;
  puVar13 = puVar10 + lVar3;
  if ((ulong)(uVar19 & 0xff0) != 0) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  uVar16 = (ulong)(puVar10 + lVar3 + 0xf) & 0xfffffffffffffff0;
  puVar4 = puVar10 + lVar3;
  while (puVar13 != puVar10 + (lVar3 - (uVar1 & 0xfffffffffffff000))) {
    puVar12 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar13 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  lVar3 = -(ulong)(uVar19 & 0xff0);
  puVar10 = puVar12 + lVar3;
  puVar14 = puVar12 + lVar3;
  if ((ulong)(uVar19 & 0xff0) != 0) {
    *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
  }
  uVar20 = (ulong)(puVar12 + lVar3 + 0xf) & 0xfffffffffffffff0;
  puVar4 = puVar12 + lVar3;
  while (puVar14 != puVar12 + (lVar3 - (uVar1 & 0xfffffffffffff000))) {
    puVar10 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar14 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  lVar3 = -(ulong)(uVar19 & 0xff0);
  puVar12 = puVar10 + lVar3;
  puVar15 = puVar10 + lVar3;
  if ((ulong)(uVar19 & 0xff0) != 0) {
    *(undefined8 *)(puVar10 + -8) = *(undefined8 *)(puVar10 + -8);
  }
  pfVar8 = (float *)((ulong)(puVar10 + lVar3 + 0xf) & 0xfffffffffffffff0);
  puVar4 = puVar10 + lVar3;
  while (puVar15 != puVar10 + (lVar3 - (uVar1 & 0xfffffffffffff000))) {
    puVar12 = puVar4 + -0x1000;
    *(undefined8 *)(puVar4 + -8) = *(undefined8 *)(puVar4 + -8);
    puVar15 = puVar4 + -0x1000;
    puVar4 = puVar4 + -0x1000;
  }
  lVar3 = -(ulong)(uVar19 & 0xff0);
  if ((ulong)(uVar19 & 0xff0) != 0) {
    *(undefined8 *)(puVar12 + -8) = *(undefined8 *)(puVar12 + -8);
  }
  local_78 = (size_t)(int)uVar18;
  local_58 = (float *)((ulong)(puVar12 + lVar3 + 0xf) & 0xfffffffffffffff0);
  uVar19 = param_3 >> 1;
  local_80 = lVar17 + -4;
  pfVar7 = (float *)(uVar16 + local_80);
  local_70 = (size_t)(int)uVar19;
  local_60 = local_70 * 4;
  *pfVar7 = _LC11;
  if ((int)uVar18 < 1) {
    *(float *)(uVar20 + local_70 * 4) = fVar25;
  }
  else {
    lVar2 = param_1 + (long)param_3 * 4;
    lVar6 = 0;
    do {
      *(float *)((long)pfVar7 + lVar6 + -4) =
           *(float *)(param_1 - lVar6) + *(float *)(lVar2 + -4 + lVar6);
      lVar6 = lVar6 + -4;
    } while (lVar6 != (ulong)uVar18 * -4);
    pfVar21 = (float *)(uVar20 + local_60);
    *pfVar21 = fVar25;
    if (uVar19 != 0) {
      lVar6 = 0;
      do {
        *(float *)((long)pfVar21 + lVar6 + -4) =
             *(float *)(param_1 - lVar6) - *(float *)(lVar2 + -4 + lVar6);
        lVar6 = lVar6 + -4;
      } while (lVar6 != (ulong)uVar19 * -4);
      if ((int)uVar19 < (int)uVar18) {
        if (uVar19 != 1) {
          fVar25 = *pfVar21;
          fVar22 = pfVar21[-1];
          do {
            fVar24 = fVar25 + pfVar21[-2];
            pfVar7 = pfVar21 + -1;
            pfVar21[-2] = fVar24;
            pfVar21 = pfVar7;
            fVar25 = fVar22;
            fVar22 = fVar24;
          } while ((float *)(local_60 + -4 + (ulong)(uVar19 - 2) * -4 + uVar20) != pfVar7);
        }
      }
      else {
        fVar25 = *pfVar7;
        do {
          pfVar9 = pfVar7 + -1;
          pfVar7 = pfVar7 + -1;
          fVar25 = *pfVar9 - fVar25;
          *pfVar7 = fVar25;
        } while ((float *)(uVar16 + lVar17 + -8 + (ulong)(uVar18 - 1) * -4) != pfVar7);
        fVar25 = *pfVar21;
        do {
          fVar25 = fVar25 + pfVar21[-1];
          pfVar21 = pfVar21 + -1;
          *pfVar21 = fVar25;
        } while ((float *)(local_60 + -4 + (ulong)(uVar19 - 1) * -4 + uVar20) != pfVar21);
      }
    }
  }
  *(undefined8 *)(puVar12 + lVar3 + -8) = 0x100987;
  local_50 = param_2;
  cheby(uVar16,uVar18);
  *(undefined8 *)(puVar12 + lVar3 + -8) = 0x100992;
  cheby(uVar20,uVar19);
  *(undefined8 *)(puVar12 + lVar3 + -8) = 0x1009a0;
  iVar5 = Laguerre_With_Deflation(uVar16,uVar18,pfVar8);
  if (iVar5 == 0) {
    *(undefined8 *)(puVar12 + lVar3 + -8) = 0x1009b7;
    local_64 = Laguerre_With_Deflation(uVar20,uVar19,local_58);
    if (local_64 == 0) {
      *(undefined8 *)(puVar12 + lVar3 + -8) = 0x1009d0;
      Newton_Raphson_isra_0(uVar16,uVar18,pfVar8);
      pfVar7 = local_58;
      *(undefined8 *)(puVar12 + lVar3 + -8) = 0x1009e9;
      Newton_Raphson_isra_0(uVar20,uVar19,local_58);
      *(undefined8 *)(puVar12 + lVar3 + -8) = 0x1009fd;
      qsort(pfVar8,local_78,4,comp);
      *(undefined8 *)(puVar12 + lVar3 + -8) = 0x100a11;
      qsort(pfVar7,local_70,4,comp);
      pfVar21 = (float *)(local_80 + (long)pfVar8);
      pfVar7 = local_50;
      if (0 < (int)uVar18) {
        do {
          pfVar9 = pfVar8 + 1;
          fVar25 = *pfVar8;
          *(undefined8 *)(puVar12 + lVar3 + -8) = 0x100a3e;
          dVar23 = acos((double)fVar25);
          *pfVar7 = (float)dVar23;
          pfVar8 = pfVar9;
          pfVar7 = pfVar7 + 2;
        } while (pfVar21 != pfVar9);
      }
      pfVar21 = (float *)(local_60 + (long)local_58);
      pfVar8 = local_50 + 1;
      pfVar7 = local_58;
      if (0 < (int)uVar19) {
        do {
          pfVar9 = pfVar7 + 1;
          fVar25 = *pfVar7;
          *(undefined8 *)(puVar12 + lVar3 + -8) = 0x100a7f;
          dVar23 = acos((double)fVar25);
          *pfVar8 = (float)dVar23;
          pfVar8 = pfVar8 + 2;
          pfVar7 = pfVar9;
        } while (pfVar21 != pfVar9);
      }
      goto LAB_00100a8e;
    }
  }
  local_64 = -1;
LAB_00100a8e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_64;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar12 + lVar3 + -8) = 0x100b67;
  __stack_chk_fail();
}


