
void mdct_butterfly_first(float *param_1,float *param_2,int param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  
  pfVar1 = param_2 + (long)(param_3 >> 1) + -8;
  pfVar3 = param_2 + (long)param_3 + -8;
  do {
    pfVar2 = pfVar1 + -8;
    fVar4 = pfVar3[7] - pfVar1[7];
    fVar5 = pfVar3[6] - pfVar1[6];
    pfVar3[6] = pfVar3[6] + pfVar1[6];
    pfVar3[7] = pfVar3[7] + pfVar1[7];
    pfVar1[6] = param_1[1] * fVar4 + *param_1 * fVar5;
    pfVar1[7] = fVar4 * *param_1 - fVar5 * param_1[1];
    fVar4 = pfVar3[5] - pfVar1[5];
    fVar5 = pfVar3[4] - pfVar1[4];
    pfVar3[4] = pfVar3[4] + pfVar1[4];
    pfVar3[5] = pfVar3[5] + pfVar1[5];
    pfVar1[4] = param_1[5] * fVar4 + param_1[4] * fVar5;
    pfVar1[5] = fVar4 * param_1[4] - fVar5 * param_1[5];
    fVar4 = pfVar3[3] - pfVar1[3];
    fVar5 = pfVar3[2] - pfVar1[2];
    pfVar3[2] = pfVar3[2] + pfVar1[2];
    pfVar3[3] = pfVar3[3] + pfVar1[3];
    pfVar1[2] = param_1[9] * fVar4 + param_1[8] * fVar5;
    pfVar1[3] = fVar4 * param_1[8] - fVar5 * param_1[9];
    fVar4 = pfVar3[1] - pfVar1[1];
    fVar5 = *pfVar3 - *pfVar1;
    *pfVar3 = *pfVar3 + *pfVar1;
    pfVar3[1] = pfVar3[1] + pfVar1[1];
    *pfVar1 = param_1[0xd] * fVar4 + param_1[0xc] * fVar5;
    pfVar1[1] = fVar4 * param_1[0xc] - fVar5 * param_1[0xd];
    pfVar1 = pfVar2;
    param_1 = param_1 + 0x10;
    pfVar3 = pfVar3 + -8;
  } while (param_2 <= pfVar2);
  return;
}



void mdct_butterfly_generic(float *param_1,float *param_2,int param_3,int param_4)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  long lVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float fVar9;
  
  lVar5 = (long)param_4;
  pfVar6 = param_1 + lVar5 * 2;
  pfVar3 = param_2 + (long)(param_3 >> 1) + -8;
  pfVar7 = param_2 + (long)param_3 + -8;
  do {
    pfVar4 = pfVar3 + -8;
    fVar8 = pfVar7[7] - pfVar3[7];
    fVar9 = pfVar7[6] - pfVar3[6];
    pfVar7[6] = pfVar7[6] + pfVar3[6];
    pfVar7[7] = pfVar7[7] + pfVar3[7];
    pfVar3[6] = param_1[1] * fVar8 + *param_1 * fVar9;
    pfVar3[7] = fVar8 * *param_1 - fVar9 * param_1[1];
    fVar8 = pfVar7[5] - pfVar3[5];
    fVar9 = pfVar7[4] - pfVar3[4];
    pfVar7[4] = pfVar7[4] + pfVar3[4];
    pfVar7[5] = pfVar7[5] + pfVar3[5];
    pfVar3[4] = param_1[lVar5 + 1] * fVar8 + param_1[lVar5] * fVar9;
    pfVar2 = param_1 + lVar5 + 1;
    pfVar1 = param_1 + lVar5;
    param_1 = param_1 + lVar5 * 4;
    pfVar3[5] = fVar8 * *pfVar1 - fVar9 * *pfVar2;
    fVar8 = pfVar7[3] - pfVar3[3];
    fVar9 = pfVar7[2] - pfVar3[2];
    pfVar7[2] = pfVar7[2] + pfVar3[2];
    pfVar7[3] = pfVar7[3] + pfVar3[3];
    pfVar3[2] = pfVar6[1] * fVar8 + *pfVar6 * fVar9;
    pfVar3[3] = fVar8 * *pfVar6 - fVar9 * pfVar6[1];
    fVar8 = pfVar7[1] - pfVar3[1];
    fVar9 = *pfVar7 - *pfVar3;
    *pfVar7 = *pfVar7 + *pfVar3;
    pfVar7[1] = pfVar7[1] + pfVar3[1];
    *pfVar3 = pfVar6[lVar5 + 1] * fVar8 + pfVar6[lVar5] * fVar9;
    pfVar1 = pfVar6 + lVar5;
    pfVar2 = pfVar6 + lVar5 + 1;
    pfVar6 = pfVar6 + lVar5 * 4;
    pfVar3[1] = fVar8 * *pfVar1 - fVar9 * *pfVar2;
    pfVar3 = pfVar4;
    pfVar7 = pfVar7 + -8;
  } while (param_2 <= pfVar4);
  return;
}



void mdct_bitreverse(int *param_1,float *param_2)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  fVar4 = _LC0;
  pfVar1 = param_2 + (*param_1 >> 1);
  pfVar6 = (float *)(*(long *)(param_1 + 2) + (long)*param_1 * 4);
  pfVar7 = pfVar1;
  piVar9 = *(int **)(param_1 + 4);
  do {
    pfVar8 = pfVar7 + -4;
    pfVar5 = param_2 + 4;
    fVar10 = (pfVar1 + *piVar9)[1];
    fVar12 = pfVar1[*piVar9];
    fVar11 = (pfVar1 + piVar9[1])[1];
    fVar13 = pfVar1[piVar9[1]];
    iVar2 = piVar9[2];
    fVar14 = fVar10 - fVar11;
    fVar15 = fVar12 + fVar13;
    iVar3 = piVar9[3];
    fVar11 = (fVar10 + fVar11) * fVar4;
    fVar12 = (fVar12 - fVar13) * fVar4;
    fVar13 = *pfVar6 * fVar15 + pfVar6[1] * fVar14;
    fVar10 = pfVar6[1] * fVar15 - *pfVar6 * fVar14;
    *param_2 = fVar13 + fVar11;
    pfVar7[-2] = fVar11 - fVar13;
    param_2[1] = fVar10 + fVar12;
    pfVar7[-1] = fVar10 - fVar12;
    fVar10 = (pfVar1 + iVar2)[1];
    fVar12 = pfVar1[iVar2];
    fVar11 = (pfVar1 + iVar3)[1];
    fVar13 = pfVar1[iVar3];
    fVar14 = fVar10 - fVar11;
    fVar15 = fVar12 + fVar13;
    fVar11 = (fVar10 + fVar11) * fVar4;
    fVar12 = (fVar12 - fVar13) * fVar4;
    fVar13 = pfVar6[2] * fVar15 + pfVar6[3] * fVar14;
    fVar10 = pfVar6[3] * fVar15 - pfVar6[2] * fVar14;
    param_2[2] = fVar13 + fVar11;
    *pfVar8 = fVar11 - fVar13;
    param_2[3] = fVar10 + fVar12;
    pfVar7[-3] = fVar10 - fVar12;
    param_2 = pfVar5;
    pfVar6 = pfVar6 + 4;
    pfVar7 = pfVar8;
    piVar9 = piVar9 + 4;
  } while (pfVar5 < pfVar8);
  return;
}



void mdct_butterfly_16(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  
  fVar4 = param_1[1] + param_1[9];
  fVar1 = param_1[1] - param_1[9];
  fVar11 = *param_1 + param_1[8];
  fVar2 = *param_1 - param_1[8];
  fVar18 = param_1[10] - param_1[2];
  fVar12 = param_1[10] + param_1[2];
  fVar10 = param_1[0xd] + param_1[5];
  fVar14 = param_1[3] - param_1[0xb];
  fVar9 = param_1[3] + param_1[0xb];
  fVar5 = param_1[0xd] - param_1[5];
  fVar16 = (fVar1 + fVar2) * _LC1;
  fVar2 = (fVar1 - fVar2) * _LC1;
  fVar3 = param_1[0xc] + param_1[4];
  fVar1 = param_1[0xc] - param_1[4];
  fVar7 = (fVar1 + fVar5) * _LC1;
  fVar6 = (fVar1 - fVar5) * _LC1;
  fVar1 = param_1[0xe] + param_1[6];
  fVar5 = param_1[0xe] - param_1[6];
  fVar17 = fVar7 - fVar2;
  fVar2 = fVar2 + fVar7;
  fVar8 = fVar12 + fVar1;
  fVar1 = fVar1 - fVar12;
  fVar7 = param_1[0xf] + param_1[7];
  fVar13 = fVar11 + fVar3;
  fVar12 = param_1[0xf] - param_1[7];
  fVar3 = fVar3 - fVar11;
  fVar11 = fVar14 + fVar5;
  fVar5 = fVar5 - fVar14;
  fVar15 = fVar16 + fVar6;
  fVar6 = fVar6 - fVar16;
  fVar14 = fVar12 + fVar18;
  fVar12 = fVar12 - fVar18;
  fVar16 = fVar10 - fVar4;
  fVar10 = fVar10 + fVar4;
  fVar4 = fVar7 - fVar9;
  fVar7 = fVar7 + fVar9;
  *(ulong *)param_1 = CONCAT44(fVar12 - fVar6,fVar5 + fVar17);
  *(ulong *)(param_1 + 2) = CONCAT44(fVar6 + fVar12,fVar5 - fVar17);
  param_1[4] = fVar11 - fVar15;
  param_1[5] = fVar14 - fVar2;
  param_1[6] = fVar11 + fVar15;
  param_1[7] = fVar2 + fVar14;
  param_1[8] = fVar1 + fVar16;
  param_1[9] = fVar4 - fVar3;
  param_1[10] = fVar1 - fVar16;
  param_1[0xb] = fVar3 + fVar4;
  param_1[0xc] = fVar8 - fVar13;
  param_1[0xd] = fVar7 - fVar10;
  param_1[0xe] = fVar8 + fVar13;
  param_1[0xf] = fVar10 + fVar7;
  return;
}



void mdct_butterfly_32(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  
  fVar19 = _LC3;
  fVar18 = _LC2;
  fVar17 = _LC1;
  fVar1 = param_1[0xf];
  fVar2 = param_1[10];
  fVar3 = param_1[0xd];
  fVar4 = param_1[0xe];
  fVar21 = param_1[0x1a] - fVar2;
  fVar5 = param_1[0xc];
  fVar6 = param_1[8];
  fVar22 = param_1[0x1d] - fVar3;
  fVar7 = param_1[9];
  fVar24 = param_1[0x1c] - fVar5;
  fVar8 = param_1[0xb];
  fVar9 = param_1[6];
  fVar32 = param_1[0x19] - fVar7;
  fVar33 = param_1[0x1b] - fVar8;
  fVar23 = param_1[0x18] - fVar6;
  fVar10 = param_1[7];
  fVar11 = param_1[4];
  fVar12 = *param_1;
  fVar13 = param_1[1];
  fVar14 = param_1[5];
  fVar34 = fVar13 - param_1[0x11];
  fVar30 = fVar12 - param_1[0x10];
  fVar20 = fVar14 - param_1[0x15];
  fVar15 = param_1[2];
  fVar29 = fVar11 - param_1[0x14];
  fVar28 = fVar15 - param_1[0x12];
  fVar25 = fVar34 * _LC3;
  fVar16 = param_1[3];
  fVar26 = fVar16 - param_1[0x13];
  fVar31 = fVar30 * _LC2;
  fVar27 = (fVar26 - fVar28) * _LC1;
  fVar28 = (fVar28 + fVar26) * _LC1;
  fVar26 = fVar20 * _LC3;
  *param_1 = fVar34 * _LC2 + fVar30 * _LC3;
  param_1[1] = fVar25 - fVar31;
  param_1[2] = fVar28;
  param_1[3] = fVar27;
  param_1[4] = fVar26 + fVar29 * fVar18;
  param_1[5] = fVar20 * fVar18 - fVar29 * fVar19;
  param_1[6] = fVar10 - param_1[0x17];
  param_1[7] = param_1[0x16] - fVar9;
  param_1[8] = fVar23 * fVar18 - fVar32 * fVar19;
  param_1[9] = fVar32 * fVar18 + fVar23 * fVar19;
  param_1[10] = (fVar21 - fVar33) * fVar17;
  param_1[0xb] = (fVar21 + fVar33) * fVar17;
  param_1[0xc] = fVar24 * fVar19 - fVar22 * fVar18;
  param_1[0xd] = fVar18 * fVar24 + fVar19 * fVar22;
  param_1[0xe] = param_1[0x1e] - fVar4;
  param_1[0xf] = param_1[0x1f] - fVar1;
  param_1[0x10] = fVar12 + param_1[0x10];
  param_1[0x11] = fVar13 + param_1[0x11];
  param_1[0x12] = fVar15 + param_1[0x12];
  param_1[0x13] = fVar16 + param_1[0x13];
  param_1[0x14] = fVar11 + param_1[0x14];
  param_1[0x15] = fVar14 + param_1[0x15];
  param_1[0x16] = fVar9 + param_1[0x16];
  param_1[0x17] = param_1[0x17] + fVar10;
  param_1[0x18] = fVar6 + param_1[0x18];
  param_1[0x19] = fVar7 + param_1[0x19];
  param_1[0x1a] = fVar2 + param_1[0x1a];
  param_1[0x1b] = fVar8 + param_1[0x1b];
  param_1[0x1c] = fVar5 + param_1[0x1c];
  param_1[0x1d] = fVar3 + param_1[0x1d];
  param_1[0x1e] = param_1[0x1e] + fVar4;
  param_1[0x1f] = fVar1 + param_1[0x1f];
  mdct_butterfly_16();
  mdct_butterfly_16(param_1 + 0x10);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void mdct_init(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  void *pvVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double local_48;
  double adStack_40 [2];
  
  iVar10 = param_2 + 3;
  if (-1 < param_2) {
    iVar10 = param_2;
  }
  iVar10 = iVar10 >> 2;
  pvVar4 = malloc((long)iVar10 << 2);
  pvVar5 = malloc((long)(iVar10 + param_2) << 2);
  dVar12 = log((double)param_2);
  dVar12 = dVar12 / __LC4;
  if ((double)((ulong)dVar12 & _LC13) < _LC5) {
    dVar12 = (double)((ulong)(((double)((ulong)dVar12 & _LC13) + _LC5) - _LC5) |
                     ~_LC13 & (ulong)dVar12);
  }
  param_1[1] = (int)dVar12;
  *param_1 = param_2;
  *(void **)(param_1 + 2) = pvVar5;
  *(void **)(param_1 + 4) = pvVar4;
  if (3 < param_2) {
    lVar11 = 0;
    dVar14 = _LC7 / (double)param_2;
    dVar13 = _LC7 / (double)(param_2 * 2);
    do {
      sincos((double)((int)lVar11 * 4) * dVar14,adStack_40,&local_48);
      *(ulong *)((long)pvVar5 + lVar11 * 8) =
           CONCAT44((uint)(float)adStack_40[0] ^ _LC8,(float)local_48);
      sincos((double)((int)lVar11 * 2 + 1) * dVar13,adStack_40,&local_48);
      *(ulong *)((long)pvVar5 + lVar11 * 8 + (long)(param_2 >> 1) * 4) =
           CONCAT44((float)adStack_40[0],(float)local_48);
      lVar11 = lVar11 + 1;
    } while ((int)lVar11 < iVar10);
    if (7 < param_2) {
      lVar11 = 0;
      do {
        sincos((double)((int)lVar11 * 4 + 2) * dVar14,adStack_40,&local_48);
        *(ulong *)((long)pvVar5 + lVar11 * 8 + (long)param_2 * 4) =
             CONCAT44((float)((double)((ulong)adStack_40[0] ^ __LC9) * _UNK_00101798),
                      (float)(local_48 * __LC10));
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < param_2 >> 3);
      lVar11 = 0;
      cVar1 = (char)(int)dVar12;
      uVar9 = (1 << (cVar1 - 1U & 0x1f)) - 1;
      uVar8 = 1 << (cVar1 - 2U & 0x1f);
      do {
        uVar7 = 0;
        bVar6 = 0;
        uVar2 = uVar8;
        uVar3 = uVar9;
        if (uVar8 != 0) {
          do {
            if (((uint)lVar11 & uVar2) != 0) {
              uVar7 = uVar7 | 1 << (bVar6 & 0x1f);
            }
            bVar6 = bVar6 + 1;
            uVar2 = (int)uVar8 >> (bVar6 & 0x1f);
          } while (uVar2 != 0);
          uVar3 = ~uVar7 & uVar9;
        }
        *(uint *)((long)pvVar4 + lVar11 * 8 + 4) = uVar7;
        *(uint *)((long)pvVar4 + lVar11 * 8) = uVar3 - 1;
        lVar11 = lVar11 + 1;
      } while ((int)lVar11 < param_2 >> 3);
    }
  }
  param_1[6] = (int)(_LC12 / (float)param_2);
  return;
}



void mdct_clear(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    if (*(void **)(*param_1 + 8) != (void *)0x0) {
      free(*(void **)(*param_1 + 8));
    }
    if (*(void **)param_1[1] != (void *)0x0) {
      free(*(void **)param_1[1]);
    }
    *param_1 = (undefined1  [16])0x0;
    param_1[1] = (undefined1  [16])0x0;
    return;
  }
  return;
}



void mdct_backward(int *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float *pfVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  
  lVar17 = *(long *)(param_1 + 2);
  iVar15 = *param_1 >> 1;
  lVar9 = (long)(*param_1 >> 2);
  lVar8 = (long)iVar15;
  pfVar10 = (float *)(lVar17 + lVar9 * 4);
  pfVar5 = param_3 + lVar8 + lVar9;
  pfVar4 = param_2 + lVar8 + -7;
  pfVar2 = pfVar10;
  pfVar11 = pfVar5;
  do {
    pfVar16 = pfVar4 + -8;
    pfVar11[-4] = (float)((uint)pfVar4[2] ^ _LC8) * pfVar2[3] - *pfVar4 * pfVar2[2];
    pfVar11[-3] = *pfVar4 * pfVar2[3] - pfVar4[2] * pfVar2[2];
    pfVar11[-2] = (float)((uint)pfVar4[6] ^ _LC8) * pfVar2[1] - pfVar4[4] * *pfVar2;
    pfVar11[-1] = pfVar4[4] * pfVar2[1] - pfVar4[6] * *pfVar2;
    pfVar4 = pfVar16;
    pfVar2 = pfVar2 + 4;
    pfVar11 = pfVar11 + -4;
  } while (param_2 <= pfVar16);
  pfVar4 = param_2 + lVar8 + -8;
  pfVar2 = pfVar5;
  do {
    pfVar16 = pfVar10 + -4;
    pfVar11 = pfVar4 + -8;
    *pfVar2 = pfVar4[4] * pfVar10[-1] + pfVar4[6] * pfVar10[-2];
    pfVar2[1] = pfVar4[4] * pfVar10[-2] - pfVar4[6] * pfVar10[-1];
    pfVar2[2] = *pfVar4 * pfVar10[-3] + pfVar4[2] * *pfVar16;
    pfVar2[3] = *pfVar4 * *pfVar16 - pfVar4[2] * pfVar10[-3];
    pfVar4 = pfVar11;
    pfVar2 = pfVar2 + 4;
    pfVar10 = pfVar16;
  } while (param_2 <= pfVar11);
  iVar19 = param_1[1];
  pfVar10 = param_3 + lVar8;
  iVar14 = iVar19 + -6;
  if (0 < iVar14) {
    mdct_butterfly_first(lVar17,pfVar10,iVar15);
    iVar7 = 1;
    if (iVar19 != 7) {
      do {
        bVar6 = (byte)iVar7;
        iVar19 = 1 << (bVar6 & 0x1f);
        if (0 < iVar19) {
          iVar18 = 0;
          iVar13 = iVar15 >> (bVar6 & 0x1f);
          pfVar4 = pfVar10;
          do {
            mdct_butterfly_generic(lVar17,pfVar4,iVar13,4 << (bVar6 & 0x1f));
            iVar18 = iVar18 + 1;
            pfVar4 = pfVar4 + iVar13;
          } while (iVar18 != iVar19);
        }
        iVar7 = iVar7 + 1;
      } while (iVar14 != iVar7);
    }
  }
  if (0 < iVar15) {
    pfVar4 = pfVar10 + (ulong)(iVar15 - 1U >> 5) * 0x20 + 0x20;
    pfVar2 = pfVar10;
    do {
      pfVar2 = (float *)mdct_butterfly_32(pfVar2);
    } while (pfVar4 != pfVar2);
  }
  pfVar16 = (float *)(lVar17 + lVar8 * 4);
  mdct_bitreverse(param_1,param_3);
  pfVar4 = param_3;
  pfVar2 = pfVar5;
  pfVar11 = pfVar5;
  do {
    pfVar12 = pfVar11 + -4;
    pfVar3 = pfVar4 + 8;
    pfVar11[-1] = *pfVar4 * pfVar16[1] - pfVar4[1] * *pfVar16;
    *pfVar2 = (float)((uint)(*pfVar4 * *pfVar16 + pfVar4[1] * pfVar16[1]) ^ _LC8);
    pfVar11[-2] = pfVar4[2] * pfVar16[3] - pfVar4[3] * pfVar16[2];
    pfVar2[1] = (float)((uint)(pfVar4[2] * pfVar16[2] + pfVar4[3] * pfVar16[3]) ^ _LC8);
    pfVar11[-3] = pfVar4[4] * pfVar16[5] - pfVar4[5] * pfVar16[4];
    pfVar2[2] = (float)((uint)(pfVar4[4] * pfVar16[4] + pfVar4[5] * pfVar16[5]) ^ _LC8);
    *pfVar12 = pfVar4[6] * pfVar16[7] - pfVar4[7] * pfVar16[6];
    pfVar2[3] = (float)((uint)(pfVar4[6] * pfVar16[6] + pfVar4[7] * pfVar16[7]) ^ _LC8);
    pfVar4 = pfVar3;
    pfVar2 = pfVar2 + 4;
    pfVar11 = pfVar12;
    pfVar16 = pfVar16 + 8;
  } while (pfVar3 < pfVar12);
  pfVar4 = param_3 + lVar9;
  pfVar2 = pfVar5;
  pfVar11 = param_3 + lVar9;
  do {
    fVar1 = pfVar2[-1];
    pfVar12 = pfVar2 + -4;
    pfVar3 = pfVar4 + 4;
    pfVar11[-1] = fVar1;
    *pfVar4 = (float)((uint)fVar1 ^ _LC8);
    fVar1 = pfVar2[-2];
    pfVar11[-2] = fVar1;
    pfVar4[1] = (float)((uint)fVar1 ^ _LC8);
    fVar1 = pfVar2[-3];
    pfVar11[-3] = fVar1;
    pfVar4[2] = (float)((uint)fVar1 ^ _LC8);
    fVar1 = *pfVar12;
    pfVar11[-4] = fVar1;
    pfVar4[3] = (float)((uint)fVar1 ^ _LC8);
    pfVar4 = pfVar3;
    pfVar2 = pfVar12;
    pfVar16 = pfVar5;
    pfVar11 = pfVar11 + -4;
  } while (pfVar3 < pfVar12);
  do {
    pfVar4 = pfVar16 + -4;
    *pfVar4 = pfVar5[3];
    pfVar16[-3] = pfVar5[2];
    pfVar16[-2] = pfVar5[1];
    pfVar16[-1] = *pfVar5;
    pfVar5 = pfVar5 + 4;
    pfVar16 = pfVar4;
  } while (pfVar10 < pfVar4);
  return;
}



void mdct_forward(int *param_1,long param_2,long param_3)

{
  float *pfVar1;
  undefined8 *puVar2;
  uint *puVar3;
  uint *puVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  float *pfVar13;
  undefined1 *puVar14;
  int iVar16;
  long lVar17;
  float *pfVar18;
  undefined8 *puVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  ulong uVar22;
  uint uVar23;
  int iVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined1 auStack_a8 [8];
  long local_a0;
  ulong local_98;
  long local_90;
  int *local_88;
  undefined8 *local_80;
  long local_78;
  long local_70;
  int local_68;
  int local_64;
  long local_60;
  long local_58;
  long local_50;
  long local_40;
  undefined1 *puVar15;
  
  puVar14 = auStack_a8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar16 = *param_1;
  local_60 = (long)iVar16 * 4;
  local_68 = iVar16 >> 2;
  iVar12 = iVar16 >> 1;
  iVar16 = iVar16 >> 3;
  puVar15 = auStack_a8;
  puVar6 = auStack_a8;
  while (puVar15 != auStack_a8 + -(local_60 + 0x17U & 0xfffffffffffff000)) {
    puVar14 = puVar6 + -0x1000;
    *(undefined8 *)(puVar6 + -8) = *(undefined8 *)(puVar6 + -8);
    puVar15 = puVar6 + -0x1000;
    puVar6 = puVar6 + -0x1000;
  }
  uVar22 = (ulong)((uint)(local_60 + 0x17U) & 0xff0);
  lVar5 = -uVar22;
  if (uVar22 != 0) {
    *(undefined8 *)(puVar14 + -8) = *(undefined8 *)(puVar14 + -8);
  }
  local_a0 = (long)local_68;
  local_78 = (long)iVar12 * 4;
  uVar22 = (ulong)(puVar14 + lVar5 + 0xf) & 0xfffffffffffffff0;
  lVar8 = uVar22 + local_78;
  pfVar13 = (float *)(param_2 + (iVar12 + local_a0) * 4);
  local_50 = *(long *)(param_1 + 2);
  puVar21 = (undefined8 *)(local_50 + local_78);
  if (iVar16 < 1) {
    iVar24 = 0;
    puVar19 = puVar21;
  }
  else {
    lVar7 = 0;
    pfVar18 = pfVar13;
    puVar19 = puVar21;
    do {
      puVar20 = puVar19 + -1;
      pfVar1 = pfVar18 + -2;
      pfVar18 = pfVar18 + -4;
      puVar19 = puVar19 + -1;
      fVar25 = (float)*puVar20;
      fVar26 = (float)((ulong)*puVar20 >> 0x20);
      *(ulong *)(lVar8 + lVar7 * 4) =
           CONCAT44((*pfVar18 + pfVar13[lVar7 * 2 + 3]) * fVar25 -
                    fVar26 * (*pfVar1 + pfVar13[lVar7 * 2 + 1]),
                    fVar25 * (*pfVar1 + pfVar13[lVar7 * 2 + 1]) +
                    (*pfVar18 + pfVar13[lVar7 * 2 + 3]) * fVar26);
      lVar7 = lVar7 + 2;
    } while ((int)lVar7 < iVar16);
    uVar23 = (iVar16 - 1U >> 1) + 1;
    iVar24 = uVar23 * 2;
    pfVar13 = pfVar13 + (ulong)uVar23 * -4;
    puVar19 = puVar21 + -(ulong)uVar23;
  }
  local_58 = param_2 + 4;
  iVar16 = iVar12 - iVar16;
  if (iVar24 < iVar16) {
    lVar17 = (long)iVar24;
    lVar7 = param_2 + lVar17 * -8;
    puVar20 = puVar19;
    do {
      puVar2 = puVar20 + -1;
      pfVar18 = pfVar13 + -2;
      pfVar13 = pfVar13 + -4;
      puVar20 = puVar20 + -1;
      fVar26 = *pfVar18 - *(float *)(lVar7 + 4 + lVar17 * 8);
      fVar25 = *pfVar13 - *(float *)(lVar7 + 0xc + lVar17 * 8);
      fVar27 = (float)*puVar2;
      fVar28 = (float)((ulong)*puVar2 >> 0x20);
      *(ulong *)(lVar8 + lVar17 * 4) =
           CONCAT44(fVar25 * fVar27 - fVar28 * fVar26,fVar27 * fVar26 + fVar25 * fVar28);
      lVar17 = lVar17 + 2;
    } while ((int)lVar17 < iVar16);
    uVar23 = (uint)((iVar16 + -1) - iVar24) >> 1;
    uVar11 = (ulong)(uVar23 + 1);
    iVar24 = iVar24 + 2 + uVar23 * 2;
    local_58 = local_58 + uVar11 * 0x10;
    puVar19 = puVar19 + -uVar11;
  }
  uVar23 = _LC8;
  param_2 = local_60 + param_2;
  if (iVar24 < iVar12) {
    lVar17 = (long)iVar24;
    lVar7 = local_58 + lVar17 * -8;
    do {
      puVar3 = (uint *)(param_2 + -0x10);
      puVar4 = (uint *)(param_2 + -8);
      param_2 = param_2 + -0x10;
      puVar19 = puVar19 + -1;
      fVar25 = (float)(*puVar4 ^ uVar23) - *(float *)(lVar7 + lVar17 * 8);
      fVar26 = (float)(*puVar3 ^ uVar23) - *(float *)(lVar7 + 8 + lVar17 * 8);
      fVar27 = (float)*puVar19;
      fVar28 = (float)((ulong)*puVar19 >> 0x20);
      *(ulong *)(lVar8 + lVar17 * 4) =
           CONCAT44(fVar27 * fVar26 - fVar28 * fVar25,fVar27 * fVar25 + fVar28 * fVar26);
      lVar17 = lVar17 + 2;
    } while ((int)lVar17 < iVar12);
    iVar24 = param_1[1];
    iVar16 = iVar24 + -6;
    if (0 < iVar16) {
LAB_0010163b:
      local_58 = CONCAT44(local_58._4_4_,iVar12);
      *(undefined8 *)(puVar14 + lVar5 + -8) = 0x10164a;
      mdct_butterfly_first(local_50,lVar8);
      iVar10 = 1;
      iVar12 = (int)local_58;
      if (iVar24 != 7) {
        local_64 = (int)local_58;
        local_60 = CONCAT44(local_60._4_4_,iVar16);
        local_98 = uVar22;
        local_90 = param_3;
        local_88 = param_1;
        local_80 = puVar21;
        local_70 = lVar8;
        do {
          bVar9 = (byte)iVar10;
          iVar16 = 1 << (bVar9 & 0x1f);
          if (0 < iVar16) {
            local_58 = CONCAT44(local_58._4_4_,iVar10);
            iVar24 = 0;
            iVar12 = local_64 >> (bVar9 & 0x1f);
            lVar8 = local_70;
            do {
              iVar24 = iVar24 + 1;
              lVar7 = lVar8 + (long)iVar12 * 4;
              *(undefined8 *)(puVar14 + lVar5 + -8) = 0x1016d9;
              mdct_butterfly_generic(local_50,lVar8,iVar12,4 << (bVar9 & 0x1f));
              lVar8 = lVar7;
            } while (iVar24 != iVar16);
            iVar10 = (int)local_58;
          }
          iVar10 = iVar10 + 1;
          param_1 = local_88;
          lVar8 = local_70;
          puVar21 = local_80;
          uVar22 = local_98;
          param_3 = local_90;
          iVar12 = local_64;
        } while (iVar10 != (int)local_60);
      }
      goto LAB_00101708;
    }
  }
  else {
    iVar24 = param_1[1];
    iVar16 = iVar24 + -6;
    if (0 < iVar16) goto LAB_0010163b;
LAB_00101708:
    if (iVar12 < 1) goto LAB_00101589;
  }
  do {
    lVar17 = lVar8 + 0x80;
    *(undefined8 *)(puVar14 + lVar5 + -8) = 0x101584;
    lVar7 = mdct_butterfly_32(lVar8);
    lVar8 = lVar17;
  } while (lVar17 != lVar7);
LAB_00101589:
  *(undefined8 *)(puVar14 + lVar5 + -8) = 0x101594;
  mdct_bitreverse(param_1,uVar22);
  pfVar13 = (float *)(local_78 + param_3);
  if (0 < local_68) {
    lVar8 = 0;
    do {
      pfVar13 = pfVar13 + -1;
      fVar25 = *(float *)(uVar22 + lVar8 * 8);
      fVar26 = *(float *)(uVar22 + 4 + lVar8 * 8);
      *(float *)(param_3 + lVar8 * 4) =
           (*(float *)(puVar21 + lVar8) * fVar25 +
           *(float *)((long)puVar21 + lVar8 * 8 + 4) * fVar26) * (float)param_1[6];
      lVar7 = lVar8 * 8;
      pfVar18 = (float *)(puVar21 + lVar8);
      lVar8 = lVar8 + 1;
      *pfVar13 = (fVar25 * *(float *)((long)puVar21 + lVar7 + 4) - fVar26 * *pfVar18) *
                 (float)param_1[6];
    } while (local_a0 != lVar8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar14 + lVar5 + -8) = 0x10172f;
  __stack_chk_fail();
}


