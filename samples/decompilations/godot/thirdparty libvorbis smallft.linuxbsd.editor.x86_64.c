
void dradf2(uint param_1,int param_2,float *param_3,long param_4,long param_5)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  int iVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  long lVar14;
  int iVar15;
  long lVar16;
  bool bVar17;
  float fVar18;
  float fVar19;
  
  iVar5 = param_2 * param_1;
  if (param_2 < 1) {
    return;
  }
  lVar7 = (long)(int)param_1;
  lVar14 = (long)iVar5;
  iVar15 = 0;
  iVar2 = param_1 * 2;
  pfVar10 = param_3;
  iVar12 = 0;
  do {
    iVar11 = iVar12;
    lVar16 = (long)iVar15;
    iVar15 = iVar15 + iVar2;
    iVar12 = iVar11 + 1;
    *(float *)(param_4 + lVar16 * 4) = *pfVar10 + pfVar10[lVar14];
    fVar19 = *pfVar10;
    pfVar6 = pfVar10 + lVar14;
    pfVar10 = pfVar10 + lVar7;
    *(float *)(param_4 + -4 + (long)iVar15 * 4) = fVar19 - *pfVar6;
  } while (param_2 != iVar12);
  if (1 < (int)param_1) {
    if (param_1 == 2) {
      iVar5 = iVar5 + 1;
    }
    else {
      iVar15 = 0;
      pfVar10 = param_3 + lVar14;
      lVar16 = param_4;
      iVar12 = 0;
      do {
        lVar4 = 2;
        pfVar6 = (float *)(param_4 + (long)(iVar2 + iVar15 * 2) * 4);
        pfVar8 = pfVar10 + -lVar14;
        do {
          fVar19 = *(float *)(param_5 + -8 + lVar4 * 4);
          pfVar9 = pfVar8 + 2;
          fVar1 = *(float *)(param_5 + -4 + lVar4 * 4);
          fVar18 = fVar19 * pfVar10[lVar4] - pfVar10[lVar4 + -1] * fVar1;
          fVar19 = fVar19 * pfVar10[lVar4 + -1] + fVar1 * pfVar10[lVar4];
          *(float *)(lVar16 + lVar4 * 4) = *pfVar9 + fVar18;
          pfVar6[-2] = fVar18 - *pfVar9;
          *(float *)(lVar16 + -4 + lVar4 * 4) = pfVar8[1] + fVar19;
          lVar4 = lVar4 + 2;
          pfVar6[-3] = pfVar8[1] - fVar19;
          pfVar6 = pfVar6 + -2;
          pfVar8 = pfVar9;
        } while ((int)lVar4 < (int)param_1);
        iVar15 = iVar15 + param_1;
        pfVar10 = pfVar10 + lVar7;
        lVar16 = lVar16 + lVar7 * 8;
        bVar17 = iVar11 != iVar12;
        iVar12 = iVar12 + 1;
      } while (bVar17);
      if ((param_1 & 1) != 0) {
        return;
      }
      iVar5 = iVar5 + -1 + param_1;
    }
    uVar3 = _LC0;
    iVar12 = 0;
    param_3 = param_3 + iVar5;
    puVar13 = (uint *)(param_4 + lVar7 * 4);
    do {
      iVar12 = iVar12 + 1;
      *puVar13 = (uint)*param_3 ^ uVar3;
      pfVar10 = param_3 + (lVar7 - iVar5) + -1;
      param_3 = param_3 + lVar7;
      puVar13[-1] = (uint)*pfVar10;
      puVar13 = puVar13 + iVar2;
    } while (param_2 != iVar12);
  }
  return;
}



void dradf4(uint param_1,int param_2,float *param_3,long param_4,long param_5,long param_6,
           long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  long lVar14;
  float *pfVar15;
  float *pfVar16;
  float *pfVar17;
  bool bVar18;
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
  float *local_78;
  int local_6c;
  int local_68;
  
  iVar11 = param_2 * param_1;
  iVar3 = iVar11 * 2;
  if (param_2 < 1) {
    if ((int)param_1 < 3) {
      return;
    }
  }
  else {
    iVar9 = param_1 * 2;
    lVar14 = (long)iVar11;
    pfVar17 = param_3;
    iVar8 = 0;
    iVar4 = 0;
    do {
      iVar6 = iVar4;
      fVar19 = pfVar17[lVar14];
      fVar20 = pfVar17[iVar11 * 3];
      fVar21 = *pfVar17;
      fVar22 = pfVar17[iVar3];
      *(float *)(param_4 + (long)iVar8 * 4) = fVar19 + fVar20 + fVar21 + fVar22;
      iVar12 = param_1 * 4 + iVar8;
      *(float *)(param_4 + -4 + (long)iVar12 * 4) = (fVar21 + fVar22) - (fVar19 + fVar20);
      iVar4 = iVar6 + 1;
      *(float *)(param_4 + -4 + (long)(iVar8 + iVar9) * 4) = *pfVar17 - pfVar17[iVar3];
      pfVar7 = pfVar17 + iVar11 * 3;
      pfVar13 = pfVar17 + lVar14;
      pfVar17 = pfVar17 + (int)param_1;
      *(float *)(param_4 + (long)(iVar8 + iVar9) * 4) = *pfVar7 - *pfVar13;
      iVar8 = iVar12;
    } while (param_2 != iVar4);
    if ((int)param_1 < 2) {
      return;
    }
    if (param_1 == 2) {
      iVar4 = iVar11 + 2;
      iVar6 = 4;
      iVar9 = 8;
      iVar8 = iVar11 + 1;
      goto LAB_00100526;
    }
    local_6c = 0;
    local_68 = 0;
    pfVar17 = param_3 + lVar14;
    local_78 = param_3;
    do {
      iVar4 = local_6c * 4;
      lVar10 = (long)(iVar9 + -2 + iVar4);
      lVar5 = 2;
      pfVar7 = pfVar17;
      pfVar13 = local_78;
      pfVar15 = pfVar17 + lVar14 * 2;
      pfVar16 = local_78 + lVar14 * 2;
      do {
        uVar1 = *(undefined8 *)(param_5 + -8 + lVar5 * 4);
        uVar2 = *(undefined8 *)(param_7 + -8 + lVar5 * 4);
        fVar19 = (float)uVar1;
        fVar20 = (float)((ulong)uVar1 >> 0x20);
        fVar21 = (float)*(undefined8 *)(pfVar7 + 1);
        fVar22 = (float)((ulong)*(undefined8 *)(pfVar7 + 1) >> 0x20);
        fVar23 = fVar19 * fVar22 - fVar21 * fVar20;
        fVar21 = fVar22 * fVar20 + fVar19 * fVar21;
        uVar1 = *(undefined8 *)(param_6 + -8 + lVar5 * 4);
        fVar22 = (float)uVar1;
        fVar24 = (float)((ulong)uVar1 >> 0x20);
        fVar19 = (float)*(undefined8 *)(pfVar16 + 1);
        fVar20 = (float)((ulong)*(undefined8 *)(pfVar16 + 1) >> 0x20);
        fVar25 = fVar20 * fVar24 + fVar22 * fVar19;
        fVar26 = fVar22 * fVar20 - fVar19 * fVar24;
        fVar22 = (float)uVar2;
        fVar24 = (float)((ulong)uVar2 >> 0x20);
        fVar19 = (float)*(undefined8 *)(pfVar15 + 1);
        fVar20 = (float)((ulong)*(undefined8 *)(pfVar15 + 1) >> 0x20);
        fVar27 = fVar22 * fVar20 - fVar19 * fVar24;
        fVar19 = fVar20 * fVar24 + fVar22 * fVar19;
        fVar22 = fVar23 - fVar27;
        fVar20 = fVar19 - fVar21;
        fVar21 = fVar21 + fVar19;
        fVar23 = fVar23 + fVar27;
        fVar19 = (float)*(undefined8 *)(pfVar13 + 1);
        fVar27 = fVar25 + fVar19;
        fVar24 = (float)((ulong)*(undefined8 *)(pfVar13 + 1) >> 0x20);
        fVar28 = fVar26 + fVar24;
        fVar19 = fVar19 - fVar25;
        fVar24 = fVar24 - fVar26;
        *(ulong *)(param_4 + (long)iVar4 * 4 + -4 + lVar5 * 4) =
             CONCAT44(fVar28 + fVar23,fVar27 + fVar21);
        *(ulong *)(param_4 + -4 + lVar10 * 4) = CONCAT44(fVar20 - fVar24,fVar19 - fVar22);
        *(ulong *)(param_4 + ((long)iVar4 + (long)iVar9) * 4 + -4 + lVar5 * 4) =
             CONCAT44(fVar20 + fVar24,fVar22 + fVar19);
        lVar5 = lVar5 + 2;
        *(ulong *)(param_4 + (long)iVar9 * 4 + -4 + lVar10 * 4) =
             CONCAT44(fVar23 - fVar28,fVar27 - fVar21);
        lVar10 = lVar10 + -2;
        pfVar7 = pfVar7 + 2;
        pfVar13 = pfVar13 + 2;
        pfVar15 = pfVar15 + 2;
        pfVar16 = pfVar16 + 2;
      } while ((int)lVar5 < (int)param_1);
      local_6c = local_6c + param_1;
      local_78 = local_78 + (int)param_1;
      pfVar17 = pfVar17 + (int)param_1;
      bVar18 = iVar6 != local_68;
      local_68 = local_68 + 1;
    } while (bVar18);
  }
  if ((param_1 & 1) != 0) {
    return;
  }
  iVar4 = param_1 + iVar11;
  iVar9 = param_1 * 4;
  iVar6 = param_1 * 2;
  iVar8 = iVar4 + -1;
  if (param_2 < 1) {
    return;
  }
LAB_00100526:
  fVar20 = _LC2;
  fVar19 = _LC1;
  lVar5 = (long)(int)param_1;
  lVar14 = (long)iVar4 + (iVar11 - lVar5);
  pfVar17 = (float *)(param_4 + lVar5 * 4);
  iVar4 = 0;
  do {
    param_3 = param_3 + lVar5;
    iVar4 = iVar4 + 1;
    fVar21 = (param_3[(long)iVar11 + -1] - param_3[(iVar8 + iVar3) - lVar5]) * fVar20;
    fVar22 = (param_3[(long)iVar11 + -1] + param_3[(iVar8 + iVar3) - lVar5]) * fVar19;
    pfVar17[-1] = param_3[-1] + fVar21;
    pfVar17[(long)iVar6 + -1] = param_3[-1] - fVar21;
    *pfVar17 = fVar22 - param_3[lVar14 + -1];
    pfVar17[iVar6] = fVar22 + param_3[lVar14 + -1];
    pfVar17 = pfVar17 + iVar9;
  } while (param_2 != iVar4);
  return;
}



void dradb2(uint param_1,int param_2,long param_3,float *param_4,float *param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  long lVar13;
  float *pfVar14;
  float *pfVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  bool bVar22;
  
  if (0 < param_2) {
    iVar5 = param_1 * 2;
    lVar21 = (long)(int)param_1;
    lVar7 = (long)(int)(param_2 * param_1);
    pfVar18 = param_4;
    iVar9 = iVar5;
    iVar8 = 0;
    iVar19 = 0;
    do {
      iVar17 = iVar19;
      iVar19 = iVar9;
      pfVar10 = (float *)(param_3 + (long)iVar8 * 4);
      pfVar12 = (float *)(param_3 + (long)(iVar8 + iVar5 + -1) * 4);
      *pfVar18 = *pfVar10 + *pfVar12;
      pfVar18[lVar7] = *pfVar10 - *pfVar12;
      pfVar18 = pfVar18 + lVar21;
      iVar9 = iVar19 + iVar5;
      iVar8 = iVar19;
      iVar19 = iVar17 + 1;
    } while (param_2 != iVar17 + 1);
    if (1 < (int)param_1) {
      if (param_1 != 2) {
        lVar20 = 0;
        iVar9 = 0;
        iVar19 = 0;
        lVar13 = lVar7;
        iVar8 = 0;
        do {
          iVar16 = 2;
          pfVar18 = param_4 + lVar13;
          pfVar10 = (float *)(param_3 + (long)(iVar9 + iVar5) * 4);
          pfVar12 = param_5;
          pfVar14 = (float *)(param_3 + (long)iVar9 * 4);
          do {
            iVar16 = iVar16 + 2;
            pfVar15 = pfVar14 + 2;
            pfVar11 = pfVar10 + -2;
            pfVar18[(lVar20 - lVar13) + 1] = pfVar14[1] + pfVar10[-3];
            fVar1 = pfVar14[1];
            fVar2 = pfVar10[-3];
            pfVar18[(lVar20 - lVar13) + 2] = *pfVar15 - *pfVar11;
            fVar3 = *pfVar15;
            fVar4 = *pfVar11;
            pfVar18[1] = *pfVar12 * (fVar1 - fVar2) - pfVar12[1] * (fVar3 + fVar4);
            pfVar18[2] = (fVar3 + fVar4) * *pfVar12 + (fVar1 - fVar2) * pfVar12[1];
            pfVar18 = pfVar18 + 2;
            pfVar10 = pfVar11;
            pfVar12 = pfVar12 + 2;
            pfVar14 = pfVar15;
          } while (iVar16 < (int)param_1);
          iVar19 = iVar19 + param_1;
          lVar20 = lVar20 + lVar21;
          lVar13 = lVar13 + lVar21;
          iVar9 = iVar19 * 2;
          bVar22 = iVar17 != iVar8;
          iVar8 = iVar8 + 1;
        } while (bVar22);
        if ((param_1 & 1) != 0) {
          return;
        }
      }
      uVar6 = _LC0;
      pfVar18 = (float *)(param_3 + lVar21 * 4);
      param_4 = param_4 + -1;
      iVar9 = 0;
      do {
        param_4 = param_4 + lVar21;
        *param_4 = pfVar18[-1] + pfVar18[-1];
        fVar1 = *pfVar18;
        pfVar18 = pfVar18 + iVar5;
        param_4[lVar7] = (float)((uint)(fVar1 + fVar1) ^ uVar6);
        bVar22 = iVar17 != iVar9;
        iVar9 = iVar9 + 1;
      } while (bVar22);
    }
  }
  return;
}



void dradb3(int param_1,int param_2,long param_3,float *param_4,long param_5,long param_6)

{
  long lVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  fVar4 = _LC4;
  fVar3 = _LC3;
  iVar2 = param_1 * 2;
  iVar13 = param_2 * param_1;
  if (0 < param_2) {
    pfVar5 = (float *)(param_3 + (long)iVar2 * 4);
    pfVar8 = param_4;
    iVar14 = 0;
    do {
      iVar10 = iVar14;
      fVar18 = pfVar5[-(long)iVar2];
      iVar14 = iVar10 + 1;
      fVar16 = pfVar5[-1] + pfVar5[-1];
      *pfVar8 = fVar16 + fVar18;
      fVar17 = *pfVar5;
      pfVar5 = pfVar5 + param_1 * 3;
      fVar18 = fVar16 * fVar3 + fVar18;
      fVar17 = (fVar17 + fVar17) * fVar4;
      pfVar8[iVar13] = fVar18 - fVar17;
      pfVar8[iVar13 * 2] = fVar17 + fVar18;
      pfVar8 = pfVar8 + param_1;
    } while (param_2 != iVar14);
    if (param_1 != 1) {
      iVar14 = 0;
      pfVar5 = param_4 + iVar13;
      pfVar8 = param_4 + iVar13 * 2;
      iVar13 = 0;
      do {
        if (2 < param_1) {
          pfVar6 = (float *)(param_3 + (long)(iVar2 + iVar14) * 4);
          lVar1 = param_3 + (long)iVar14 * 4;
          lVar9 = 2;
          pfVar11 = pfVar6;
          do {
            pfVar7 = pfVar6 + 2;
            pfVar12 = pfVar11 + -2;
            fVar18 = *(float *)(lVar1 + -4 + lVar9 * 4);
            fVar19 = (pfVar6[1] + pfVar11[-3]) * fVar3 + fVar18;
            param_4[lVar9 + -1] = fVar18 + pfVar6[1] + pfVar11[-3];
            fVar18 = *(float *)(lVar1 + lVar9 * 4);
            fVar17 = (*pfVar7 - *pfVar12) * fVar3 + fVar18;
            param_4[lVar9] = fVar18 + (*pfVar7 - *pfVar12);
            fVar18 = (*pfVar7 + *pfVar12) * fVar4;
            fVar16 = (pfVar6[1] - pfVar11[-3]) * fVar4;
            fVar20 = fVar19 - fVar18;
            fVar19 = fVar19 + fVar18;
            fVar18 = fVar17 + fVar16;
            fVar17 = fVar17 - fVar16;
            pfVar5[lVar9 + -1] =
                 *(float *)(param_5 + -8 + lVar9 * 4) * fVar20 -
                 *(float *)(param_5 + -4 + lVar9 * 4) * fVar18;
            pfVar5[lVar9] =
                 fVar18 * *(float *)(param_5 + -8 + lVar9 * 4) +
                 fVar20 * *(float *)(param_5 + -4 + lVar9 * 4);
            pfVar8[lVar9 + -1] =
                 *(float *)(param_6 + -8 + lVar9 * 4) * fVar19 -
                 *(float *)(param_6 + -4 + lVar9 * 4) * fVar17;
            pfVar8[lVar9] =
                 fVar17 * *(float *)(param_6 + -8 + lVar9 * 4) +
                 fVar19 * *(float *)(param_6 + -4 + lVar9 * 4);
            lVar9 = lVar9 + 2;
            pfVar6 = pfVar7;
            pfVar11 = pfVar12;
          } while ((int)lVar9 < param_1);
        }
        param_4 = param_4 + param_1;
        pfVar5 = pfVar5 + param_1;
        pfVar8 = pfVar8 + param_1;
        iVar14 = iVar14 + param_1 * 3;
        bVar15 = iVar10 != iVar13;
        iVar13 = iVar13 + 1;
      } while (bVar15);
    }
  }
  return;
}



void dradb4(uint param_1,int param_2,long param_3,float *param_4,long param_5,long param_6,
           long param_7)

{
  float *pfVar1;
  long lVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float *pfVar6;
  long lVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  int iVar11;
  float *pfVar12;
  int iVar13;
  long lVar14;
  bool bVar15;
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
  int local_6c;
  int local_68;
  
  iVar9 = param_1 * 2;
  if (0 < param_2) {
    lVar7 = (long)(int)(param_2 * param_1);
    lVar14 = (long)iVar9;
    lVar2 = (long)(int)param_1;
    pfVar6 = (float *)(param_3 + lVar14 * 4);
    pfVar3 = param_4;
    iVar11 = 0;
    do {
      iVar13 = iVar11;
      pfVar12 = pfVar6 + -1;
      pfVar1 = pfVar6 + lVar14 + -1;
      iVar11 = iVar13 + 1;
      pfVar10 = pfVar6 + -lVar14;
      fVar16 = *pfVar6;
      pfVar6 = pfVar6 + (int)(param_1 * 4);
      fVar19 = *pfVar12 + *pfVar12;
      fVar17 = *pfVar10 + *pfVar1;
      fVar16 = fVar16 + fVar16;
      fVar21 = *pfVar10 - *pfVar1;
      *pfVar3 = fVar19 + fVar17;
      pfVar3[lVar7] = fVar21 - fVar16;
      pfVar3[lVar7 * 2] = fVar17 - fVar19;
      pfVar3[lVar7 * 3] = fVar16 + fVar21;
      pfVar3 = pfVar3 + lVar2;
    } while (param_2 != iVar11);
    if (1 < (int)param_1) {
      if (param_1 == 2) {
        iVar9 = 6;
      }
      else {
        local_6c = 0;
        local_68 = 0;
        pfVar6 = param_4 + lVar7;
        pfVar3 = param_4 + lVar7 * 2;
        pfVar10 = param_4 + lVar7 * 3;
        pfVar12 = param_4;
        do {
          iVar11 = iVar9 + local_6c * 4;
          lVar14 = param_3 + (long)(local_6c * 4) * 4;
          lVar4 = 2;
          pfVar1 = (float *)(param_3 + (long)iVar11 * 4);
          lVar5 = param_3 + (long)(iVar9 + iVar11) * 4;
          pfVar8 = pfVar1;
          do {
            fVar16 = *(float *)(lVar14 + lVar4 * 4);
            fVar17 = pfVar8[-2];
            fVar19 = *(float *)(lVar14 + -4 + lVar4 * 4);
            fVar21 = fVar16 - *(float *)(lVar5 + -8);
            fVar16 = fVar16 + *(float *)(lVar5 + -8);
            fVar20 = pfVar1[lVar4] + fVar17;
            fVar17 = pfVar1[lVar4] - fVar17;
            fVar24 = fVar19 - *(float *)(lVar5 + -0xc);
            fVar19 = fVar19 + *(float *)(lVar5 + -0xc);
            fVar22 = pfVar1[lVar4 + -1] + pfVar8[-3];
            fVar25 = pfVar1[lVar4 + -1] - pfVar8[-3];
            fVar23 = fVar19 - fVar22;
            fVar18 = fVar21 - fVar17;
            pfVar12[lVar4 + -1] = fVar19 + fVar22;
            fVar19 = fVar24 + fVar20;
            fVar24 = fVar24 - fVar20;
            pfVar12[lVar4] = fVar21 + fVar17;
            fVar17 = fVar16 - fVar25;
            fVar16 = fVar16 + fVar25;
            pfVar6[lVar4 + -1] =
                 *(float *)(param_5 + -8 + lVar4 * 4) * fVar24 -
                 *(float *)(param_5 + -4 + lVar4 * 4) * fVar16;
            pfVar6[lVar4] =
                 fVar16 * *(float *)(param_5 + -8 + lVar4 * 4) +
                 fVar24 * *(float *)(param_5 + -4 + lVar4 * 4);
            pfVar3[lVar4 + -1] =
                 *(float *)(param_6 + -8 + lVar4 * 4) * fVar23 -
                 *(float *)(param_6 + -4 + lVar4 * 4) * fVar18;
            pfVar3[lVar4] =
                 fVar18 * *(float *)(param_6 + -8 + lVar4 * 4) +
                 fVar23 * *(float *)(param_6 + -4 + lVar4 * 4);
            pfVar10[lVar4 + -1] =
                 *(float *)(param_7 + -8 + lVar4 * 4) * fVar19 -
                 *(float *)(param_7 + -4 + lVar4 * 4) * fVar17;
            pfVar10[lVar4] =
                 fVar17 * *(float *)(param_7 + -8 + lVar4 * 4) +
                 fVar19 * *(float *)(param_7 + -4 + lVar4 * 4);
            lVar4 = lVar4 + 2;
            lVar5 = lVar5 + -8;
            pfVar8 = pfVar8 + -2;
          } while ((int)lVar4 < (int)param_1);
          local_6c = local_6c + param_1;
          pfVar12 = pfVar12 + lVar2;
          pfVar6 = pfVar6 + lVar2;
          pfVar3 = pfVar3 + lVar2;
          pfVar10 = pfVar10 + lVar2;
          bVar15 = iVar13 != local_68;
          local_68 = local_68 + 1;
        } while (bVar15);
        if ((param_1 & 1) != 0) {
          return;
        }
        iVar9 = param_1 * 3;
      }
      fVar17 = _LC6;
      fVar16 = _LC5;
      iVar11 = 0;
      pfVar6 = (float *)(param_3 + lVar2 * 4);
      param_4 = param_4 + -1;
      do {
        param_4 = param_4 + lVar2;
        pfVar3 = pfVar6 + -1;
        pfVar10 = pfVar6 + (iVar9 - lVar2) + -1;
        iVar11 = iVar11 + 1;
        fVar19 = *pfVar6;
        pfVar12 = pfVar6 + (iVar9 - lVar2);
        pfVar6 = pfVar6 + (int)(param_1 * 4);
        fVar21 = *pfVar3 + *pfVar10;
        fVar20 = *pfVar3 - *pfVar10;
        fVar18 = fVar19 + *pfVar12;
        fVar19 = *pfVar12 - fVar19;
        *param_4 = fVar21 + fVar21;
        param_4[lVar7] = (fVar20 - fVar18) * fVar16;
        param_4[lVar7 * 2] = fVar19 + fVar19;
        param_4[lVar7 * 3] = (fVar18 + fVar20) * fVar17;
      } while (param_2 != iVar11);
    }
  }
  return;
}



void dradfg(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,long param_6,
           long param_7,undefined4 *param_8,long param_9,long param_10)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  float *pfVar8;
  float *pfVar9;
  undefined4 *puVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  long lVar15;
  float *pfVar16;
  int iVar17;
  long lVar18;
  undefined4 *puVar19;
  undefined4 *puVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  long lVar33;
  bool bVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  long local_c8;
  long local_90;
  double local_48;
  double local_40 [2];
  
  sincos((double)(_LC9 / (float)param_2),local_40,&local_48);
  iVar2 = param_2 + 1 >> 1;
  iVar3 = param_1 + -1 >> 1;
  iVar17 = param_1 * param_3;
  iVar22 = param_2 * param_1;
  if (param_1 == 1) {
    if (param_4 < 1) {
      local_90 = 1;
      iVar23 = iVar22 * param_4;
      if (1 < iVar2) goto LAB_0010118b;
      if (1 < iVar17) goto LAB_0010146a;
      goto LAB_00101d70;
    }
LAB_0010113f:
    lVar5 = 0;
    do {
      *(undefined4 *)(param_7 + lVar5 * 4) = *(undefined4 *)(param_9 + lVar5 * 4);
      lVar5 = lVar5 + 1;
    } while ((int)lVar5 < param_4);
    local_90 = (long)param_1;
    iVar23 = param_2 * param_4;
    if (iVar2 < 2) goto LAB_00101dbf;
LAB_0010118b:
    local_c8 = (long)iVar17;
    lVar5 = (long)iVar23;
    iVar23 = 1;
    lVar15 = local_c8 * 2 - lVar5;
    lVar6 = (lVar5 - local_c8) * 4;
    do {
      pfVar8 = (float *)((long)param_8 + lVar6);
      pfVar9 = (float *)(param_6 + lVar6);
      iVar25 = 0;
      if (0 < param_3) {
        do {
          iVar25 = iVar25 + 1;
          pfVar9[lVar15] = pfVar8[lVar15] + *pfVar8;
          fVar39 = *pfVar8;
          pfVar11 = pfVar8 + lVar15;
          pfVar8 = pfVar8 + local_90;
          *pfVar9 = fVar39 - *pfVar11;
          pfVar9 = pfVar9 + local_90;
        } while (param_3 != iVar25);
      }
      iVar23 = iVar23 + 1;
      lVar15 = lVar15 + (local_c8 - -iVar17);
      lVar6 = lVar6 + (long)-iVar17 * 4;
    } while (iVar2 != iVar23);
    lVar7 = (long)param_4;
    lVar15 = lVar7 * 4;
    lVar33 = (long)-param_4;
    lVar6 = (lVar5 - lVar7) * 4;
    fVar38 = 0.0;
    lVar24 = lVar7 * 2 - lVar5;
    pfVar9 = (float *)(param_9 + lVar6);
    lVar30 = param_7 + lVar15;
    lVar28 = param_4 * 2 + lVar7;
    iVar23 = 1;
    fVar39 = _LC7;
    lVar18 = param_9;
    do {
      lVar18 = lVar18 + lVar15;
      lVar29 = 0;
      fVar35 = fVar39 * (float)local_40[0];
      fVar39 = (float)local_48 * fVar39 - (float)local_40[0] * fVar38;
      fVar38 = fVar38 * (float)local_48 + fVar35;
      if (0 < param_4) {
        do {
          *(float *)(lVar18 + lVar29) =
               *(float *)(lVar30 + lVar29) * fVar39 + *(float *)(param_7 + lVar29);
          *(float *)((long)pfVar9 + lVar29) = *(float *)(param_7 + lVar6 + lVar29) * fVar38;
          lVar29 = lVar29 + 4;
        } while (lVar29 != lVar15);
      }
      if (iVar2 == 2) break;
      iVar25 = 2;
      lVar29 = (lVar5 - lVar7) - lVar28;
      pfVar8 = (float *)(param_7 + lVar28 * 4);
      fVar35 = fVar38;
      fVar37 = fVar39;
      do {
        pfVar11 = pfVar8 + lVar33;
        fVar36 = fVar37 * fVar38;
        fVar37 = fVar39 * fVar37 - fVar38 * fVar35;
        fVar35 = fVar35 * fVar39 + fVar36;
        pfVar13 = pfVar9;
        if (0 < param_4) {
          do {
            pfVar13[lVar24] = *pfVar11 * fVar37 + pfVar13[lVar24];
            pfVar14 = pfVar11 + lVar29;
            pfVar11 = pfVar11 + 1;
            *pfVar13 = *pfVar14 * fVar35 + *pfVar13;
            pfVar13 = pfVar13 + 1;
          } while (pfVar11 != pfVar8);
        }
        iVar25 = iVar25 + 1;
        lVar29 = lVar29 + (lVar33 - lVar7);
        pfVar8 = pfVar8 + lVar7;
      } while (iVar2 != iVar25);
      pfVar9 = pfVar9 + lVar33;
      iVar23 = iVar23 + 1;
      lVar24 = lVar24 + (lVar7 - lVar33);
    } while (iVar2 != iVar23);
    iVar23 = 1;
    do {
      lVar5 = 0;
      if (0 < param_4) {
        do {
          *(float *)(param_9 + lVar5) = *(float *)(param_9 + lVar5) + *(float *)(lVar30 + lVar5);
          lVar5 = lVar5 + 4;
        } while (lVar5 != lVar15);
      }
      iVar23 = iVar23 + 1;
      lVar30 = lVar30 + lVar15;
    } while (iVar2 != iVar23);
    if (param_1 < param_3) {
      if (param_1 < 1) goto LAB_001014fd;
      goto LAB_0010146a;
    }
    if (param_3 < 1) goto LAB_001014fd;
LAB_00101872:
    iVar23 = 0;
    puVar12 = param_5;
    puVar20 = param_8;
    do {
      lVar5 = 0;
      if (0 < param_1) {
        do {
          *(undefined4 *)((long)puVar12 + lVar5) = *(undefined4 *)((long)puVar20 + lVar5);
          lVar5 = lVar5 + 4;
        } while (lVar5 != local_90 * 4);
      }
      iVar23 = iVar23 + 1;
      puVar20 = puVar20 + local_90;
      puVar12 = puVar12 + iVar22;
    } while (iVar23 < param_3);
  }
  else {
    lVar5 = 0;
    if (param_4 < 1) {
      if (1 < param_2) goto LAB_00100f3a;
    }
    else {
      do {
        *(undefined4 *)(param_9 + lVar5) = *(undefined4 *)(param_7 + lVar5);
        lVar5 = lVar5 + 4;
      } while (lVar5 != (long)param_4 * 4);
      if (param_2 < 2) goto LAB_0010113f;
LAB_00100f3a:
      lVar6 = (long)iVar17;
      local_90 = (long)param_1;
      lVar5 = local_90 * 4;
      lVar15 = lVar6 * 4;
      iVar23 = 1;
      do {
        iVar25 = iVar23;
        iVar23 = 0;
        lVar18 = lVar15;
        if (0 < param_3) {
          do {
            iVar23 = iVar23 + 1;
            *(undefined4 *)((long)param_8 + lVar18) = *(undefined4 *)(param_6 + lVar18);
            lVar18 = lVar18 + lVar5;
          } while (param_3 != iVar23);
        }
        iVar23 = iVar25 + 1;
        lVar15 = lVar15 + lVar6 * 4;
      } while (param_2 != iVar23);
      if (param_3 < iVar3) {
        iVar4 = -1;
        lVar5 = lVar6;
        iVar23 = 1;
        do {
          if (0 < param_3) {
            iVar26 = 0;
            lVar15 = lVar5;
            do {
              if (2 < param_1) {
                pfVar9 = (float *)(param_10 + 4 + (long)iVar4 * 4);
                pfVar8 = (float *)(param_6 + lVar15 * 4);
                pfVar11 = (float *)(param_8 + lVar15);
                do {
                  pfVar13 = pfVar8 + 2;
                  pfVar11[1] = *pfVar9 * pfVar8[1] + pfVar9[1] * *pfVar13;
                  pfVar11[2] = *pfVar9 * *pfVar13 - pfVar9[1] * pfVar8[1];
                  pfVar9 = pfVar9 + 2;
                  pfVar8 = pfVar13;
                  pfVar11 = pfVar11 + 2;
                } while (pfVar13 !=
                         (float *)(param_6 + 8 + ((ulong)(param_1 - 3U & 0xfffffffe) + lVar15) * 4))
                ;
              }
              iVar26 = iVar26 + 1;
              lVar15 = lVar15 + local_90;
            } while (param_3 != iVar26);
          }
          iVar4 = iVar4 + param_1;
          lVar5 = lVar5 + lVar6;
          bVar34 = iVar25 != iVar23;
          iVar23 = iVar23 + 1;
        } while (bVar34);
LAB_00100fce:
        if (iVar2 != 1) {
          lVar15 = param_2 * iVar17 - lVar6;
          lVar18 = lVar15 - lVar6;
          iVar23 = 1;
          lVar5 = lVar6;
          do {
            if (0 < param_3) {
              iVar25 = 0;
              lVar24 = lVar5;
              lVar30 = lVar15;
              do {
                if (2 < param_1) {
                  lVar7 = lVar24 * 4 + param_6;
                  pfVar9 = (float *)(param_8 + lVar24);
                  pfVar8 = (float *)(param_8 + lVar30);
                  do {
                    pfVar11 = pfVar9 + 2;
                    pfVar13 = pfVar8 + 2;
                    *(float *)(lVar7 + 4) = pfVar9[1] + pfVar8[1];
                    *(float *)(lVar7 + 4 + lVar18 * 4) = *pfVar11 - *pfVar13;
                    *(float *)(lVar7 + 8) = *pfVar11 + *pfVar13;
                    *(float *)(lVar7 + 8 + lVar18 * 4) = pfVar8[1] - pfVar9[1];
                    lVar7 = lVar7 + 8;
                    pfVar9 = pfVar11;
                    pfVar8 = pfVar13;
                  } while (lVar7 != param_6 + 8 + ((ulong)(param_1 - 3U & 0xfffffffe) + lVar24) * 4)
                  ;
                }
                iVar25 = iVar25 + 1;
                lVar30 = lVar30 + local_90;
                lVar24 = lVar24 + local_90;
              } while (param_3 != iVar25);
            }
            iVar23 = iVar23 + 1;
            lVar15 = lVar15 + -iVar17;
            lVar5 = lVar5 + lVar6;
            lVar18 = lVar18 + (-iVar17 - lVar6);
          } while (iVar2 != iVar23);
          if (param_4 < 1) {
            iVar23 = param_2 * param_4;
            goto LAB_0010118b;
          }
          goto LAB_0010113f;
        }
      }
      else {
        iVar26 = 0;
        iVar31 = -1;
        iVar4 = 1;
        do {
          iVar26 = iVar26 + iVar17;
          if (2 < param_1) {
            pfVar9 = (float *)(param_10 + (long)(iVar31 + 1) * 4);
            iVar32 = iVar26;
            if (0 < param_3) {
              do {
                iVar32 = iVar32 + 2;
                iVar27 = 0;
                lVar15 = (long)iVar32 << 2;
                do {
                  iVar27 = iVar27 + 1;
                  *(float *)((long)param_8 + lVar15 + -4) =
                       *pfVar9 * *(float *)(param_6 + -4 + lVar15) +
                       pfVar9[1] * *(float *)(param_6 + lVar15);
                  *(float *)((long)param_8 + lVar15) =
                       *pfVar9 * *(float *)(param_6 + lVar15) -
                       pfVar9[1] * *(float *)(param_6 + -4 + lVar15);
                  lVar15 = lVar15 + lVar5;
                } while (param_3 != iVar27);
                pfVar9 = pfVar9 + 2;
              } while (iVar32 != (param_1 - 3U & 0xfffffffe) + 2 + iVar26);
            }
          }
          iVar31 = iVar31 + param_1;
          bVar34 = iVar25 != iVar4;
          iVar4 = iVar4 + 1;
        } while (bVar34);
        lVar15 = (long)(param_2 * iVar17);
        if (param_3 <= iVar3) goto LAB_00100fce;
        if (iVar2 != 1) {
          lVar7 = (long)-iVar17;
          iVar25 = -param_1;
          lVar24 = ((lVar15 - local_90) + 2) - lVar6;
          lVar18 = (lVar6 - local_90) + 2;
          lVar30 = lVar15 + lVar6 * -2;
          lVar15 = (lVar6 * 2 - lVar15) * 4;
          iVar4 = 1;
          do {
            iVar25 = iVar17 + iVar25;
            if (2 < param_1) {
              iVar26 = iVar25 + 2;
              pfVar9 = (float *)(param_8 + local_90 + lVar24);
              pfVar8 = (float *)(param_6 + lVar5 + lVar18 * 4);
              do {
                if (0 < param_3) {
                  pfVar11 = (float *)(lVar15 + -4 + (long)pfVar9);
                  iVar31 = 0;
                  pfVar13 = pfVar9;
                  pfVar14 = pfVar8;
                  do {
                    iVar31 = iVar31 + 1;
                    pfVar14[-1] = *pfVar11 + pfVar13[-1];
                    pfVar14[lVar30 + -1] = pfVar11[1] - *pfVar13;
                    *pfVar14 = pfVar11[1] + *pfVar13;
                    pfVar21 = pfVar13 + -1;
                    fVar39 = *pfVar11;
                    pfVar13 = pfVar13 + local_90;
                    pfVar11 = pfVar11 + local_90;
                    pfVar14[lVar30] = *pfVar21 - fVar39;
                    pfVar14 = pfVar14 + local_90;
                  } while (param_3 != iVar31);
                }
                iVar26 = iVar26 + 2;
                pfVar9 = pfVar9 + 2;
                pfVar8 = pfVar8 + 2;
              } while (iVar26 != (param_1 - 3U & 0xfffffffe) + 4 + iVar25);
            }
            iVar4 = iVar4 + 1;
            lVar24 = lVar24 + lVar7;
            lVar18 = lVar18 + lVar6;
            lVar30 = lVar30 + (lVar7 - lVar6);
            lVar15 = lVar15 + (lVar6 - lVar7) * 4;
          } while (iVar2 != iVar4);
          iVar23 = iVar23 * param_4;
          if (param_4 < 1) goto LAB_0010118b;
          goto LAB_0010113f;
        }
      }
      if (0 < param_4) goto LAB_0010113f;
    }
LAB_00101dbf:
    if (param_3 <= param_1) {
LAB_00101d70:
      if (param_3 < 1) {
        return;
      }
      local_90 = (long)param_1;
      goto LAB_00101872;
    }
    local_90 = (long)param_1;
    if (param_1 < 1) {
      return;
    }
LAB_0010146a:
    iVar23 = 0;
    puVar12 = param_5;
    puVar20 = param_8;
    do {
      iVar25 = 0;
      puVar10 = puVar20;
      puVar19 = puVar12;
      if (0 < param_3) {
        do {
          iVar25 = iVar25 + 1;
          *puVar19 = *puVar10;
          puVar10 = puVar10 + local_90;
          puVar19 = puVar19 + iVar22;
        } while (param_3 != iVar25);
      }
      iVar23 = iVar23 + 1;
      puVar20 = puVar20 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar23 < param_1);
  }
  if (iVar2 < 2) {
    return;
  }
LAB_001014fd:
  local_c8 = (long)iVar17;
  iVar23 = param_1 * 2;
  lVar18 = (long)iVar23;
  iVar25 = 1;
  lVar6 = param_2 * iVar17 - local_c8;
  puVar12 = param_5 + lVar18;
  lVar5 = lVar6 - local_c8;
  lVar24 = -iVar17 - local_c8;
  lVar15 = lVar5;
  puVar20 = param_8;
  do {
    puVar20 = puVar20 + local_c8;
    iVar17 = 0;
    puVar10 = puVar20;
    puVar19 = puVar12;
    if (0 < param_3) {
      do {
        iVar17 = iVar17 + 1;
        puVar19[-1] = *puVar10;
        puVar1 = puVar10 + lVar15;
        puVar10 = puVar10 + local_90;
        *puVar19 = *puVar1;
        puVar19 = puVar19 + iVar22;
      } while (param_3 != iVar17);
    }
    iVar25 = iVar25 + 1;
    puVar12 = puVar12 + lVar18;
    lVar15 = lVar15 + lVar24;
  } while (iVar2 != iVar25);
  if (param_1 != 1) {
    if (iVar3 < param_3) {
      lVar5 = lVar5 * 4;
      pfVar9 = (float *)(param_8 + local_c8 + 2);
      iVar17 = 1;
      lVar15 = lVar18;
      iVar3 = iVar23;
      do {
        if (2 < param_1) {
          iVar25 = iVar3 + -2;
          pfVar8 = (float *)(param_5 + lVar15 + 2);
          pfVar11 = pfVar9;
          lVar6 = iVar3 - lVar15;
          do {
            if (0 < param_3) {
              pfVar13 = (float *)(lVar5 + (long)pfVar11);
              iVar4 = 0;
              pfVar14 = pfVar11;
              pfVar21 = pfVar8;
              do {
                iVar4 = iVar4 + 1;
                pfVar21[-1] = pfVar14[-1] + pfVar13[-1];
                pfVar21[lVar6 + -5] = pfVar14[-1] - pfVar13[-1];
                *pfVar21 = *pfVar14 + *pfVar13;
                fVar39 = *pfVar13;
                fVar38 = *pfVar14;
                pfVar13 = pfVar13 + local_90;
                pfVar14 = pfVar14 + local_90;
                pfVar21[lVar6 + -4] = fVar39 - fVar38;
                pfVar21 = pfVar21 + iVar22;
              } while (param_3 != iVar4);
            }
            iVar25 = iVar25 + -2;
            pfVar11 = pfVar11 + 2;
            pfVar8 = pfVar8 + 2;
            lVar6 = lVar6 + -4;
          } while ((-4 - (param_1 - 3U & 0xfffffffe)) + iVar3 != iVar25);
        }
        iVar17 = iVar17 + 1;
        iVar3 = iVar3 + iVar23;
        pfVar9 = pfVar9 + local_c8;
        lVar5 = lVar5 + lVar24 * 4;
        lVar15 = lVar15 + lVar18;
      } while (iVar2 != iVar17);
    }
    else {
      puVar12 = param_8 + (lVar6 - local_c8);
      lVar5 = -param_1 + lVar18 + local_90;
      iVar3 = 1;
      lVar15 = lVar18;
      lVar6 = local_c8;
      do {
        if (0 < param_3) {
          iVar17 = 0;
          pfVar9 = (float *)(param_5 + lVar15);
          lVar30 = lVar6;
          do {
            if (2 < param_1) {
              pfVar8 = (float *)(param_8 + lVar30);
              pfVar11 = pfVar9;
              pfVar13 = (float *)(puVar12 + lVar30);
              pfVar14 = pfVar9 + (lVar5 - lVar15) + -3;
              do {
                pfVar21 = pfVar8 + 2;
                pfVar16 = pfVar13 + 2;
                pfVar11[1] = pfVar8[1] + pfVar13[1];
                *pfVar14 = pfVar8[1] - pfVar13[1];
                pfVar11[2] = *pfVar21 + *pfVar16;
                pfVar14[1] = *pfVar16 - *pfVar21;
                pfVar8 = pfVar21;
                pfVar11 = pfVar11 + 2;
                pfVar13 = pfVar16;
                pfVar14 = pfVar14 + -2;
              } while ((float *)(param_8 + lVar30 + (ulong)(param_1 - 3U & 0xfffffffe) + 2) !=
                       pfVar21);
            }
            iVar17 = iVar17 + 1;
            pfVar9 = pfVar9 + iVar22;
            lVar30 = lVar30 + local_90;
          } while (param_3 != iVar17);
        }
        iVar3 = iVar3 + 1;
        lVar6 = lVar6 + local_c8;
        puVar12 = puVar12 + lVar24;
        lVar5 = lVar5 + lVar18;
        lVar15 = lVar15 + lVar18;
      } while (iVar2 != iVar3);
    }
  }
  return;
}



void dradbg(int param_1,int param_2,int param_3,int param_4,undefined4 *param_5,long param_6,
           long param_7,undefined4 *param_8,float *param_9,long param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  float *pfVar7;
  float *pfVar8;
  long lVar9;
  float *pfVar10;
  float *pfVar11;
  undefined4 *puVar12;
  float *pfVar13;
  undefined4 *puVar14;
  long lVar15;
  undefined4 *puVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined4 *puVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  int iVar29;
  float *pfVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  long lVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  long lVar38;
  bool bVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  long local_d0;
  long local_90;
  long local_88;
  double local_48;
  double local_40 [2];
  
  iVar35 = param_2 * param_1;
  iVar1 = param_1 * param_3;
  sincos((double)(_LC9 / (float)param_2),local_40,&local_48);
  iVar33 = iVar1 * param_2;
  iVar2 = param_1 + -1 >> 1;
  iVar3 = param_2 + 1 >> 1;
  iVar32 = param_1 * 2;
  if (param_1 < param_3) {
    if (param_1 < 1) {
      if (iVar3 < 2) goto LAB_00102ab7;
    }
    else {
      iVar27 = 0;
      puVar12 = param_8;
      puVar16 = param_5;
      do {
        iVar23 = 0;
        puVar14 = puVar12;
        puVar20 = puVar16;
        if (0 < param_3) {
          do {
            iVar23 = iVar23 + 1;
            *puVar14 = *puVar20;
            puVar14 = puVar14 + param_1;
            puVar20 = puVar20 + iVar35;
          } while (param_3 != iVar23);
        }
        iVar27 = iVar27 + 1;
        puVar16 = puVar16 + 1;
        puVar12 = puVar12 + 1;
      } while (param_1 != iVar27);
      if (iVar3 < 2) goto LAB_001021d1;
    }
LAB_00101f1b:
    lVar17 = (long)iVar1;
    iVar27 = 1;
    pfVar11 = (float *)(param_8 + lVar17);
    pfVar30 = (float *)(param_5 + iVar32);
    lVar24 = (long)-iVar1;
    lVar25 = lVar24 - lVar17;
    lVar5 = iVar33 - lVar17;
    lVar6 = lVar5 - lVar17;
    lVar18 = (long)param_1;
    lVar19 = lVar18 * 4;
    lVar4 = lVar6;
    pfVar10 = pfVar30;
    do {
      iVar23 = 0;
      pfVar7 = pfVar10;
      pfVar13 = pfVar11;
      if (0 < param_3) {
        do {
          iVar23 = iVar23 + 1;
          *pfVar13 = pfVar7[-1] + pfVar7[-1];
          fVar44 = *pfVar7;
          pfVar7 = pfVar7 + iVar35;
          pfVar13[lVar4] = fVar44 + fVar44;
          pfVar13 = pfVar13 + lVar18;
        } while (param_3 != iVar23);
      }
      iVar27 = iVar27 + 1;
      pfVar10 = pfVar10 + iVar32;
      pfVar11 = pfVar11 + lVar17;
      lVar4 = lVar4 + lVar25;
    } while (iVar27 < iVar3);
    if (param_1 == 1) {
      iVar35 = param_4 * iVar35;
    }
    else if (iVar2 < param_3) {
      iVar36 = 0;
      iVar27 = 1;
      iVar23 = 0;
      lVar4 = lVar6;
      do {
        iVar31 = 2;
        iVar23 = iVar23 + iVar1;
        iVar36 = iVar36 + iVar32;
        iVar22 = iVar23;
        if (2 < param_1) {
          do {
            if (0 < param_3) {
              iVar29 = 0;
              pfVar30 = (float *)(param_5 + (iVar31 + iVar36));
              pfVar11 = (float *)(param_5 + (iVar36 - iVar31));
              pfVar10 = (float *)(param_8 + (iVar22 + 2));
              do {
                iVar29 = iVar29 + 1;
                pfVar10[-1] = pfVar30[-1] + pfVar11[-1];
                pfVar10[lVar4 + -1] = pfVar30[-1] - pfVar11[-1];
                *pfVar10 = *pfVar30 - *pfVar11;
                fVar44 = *pfVar30;
                fVar43 = *pfVar11;
                pfVar30 = pfVar30 + iVar35;
                pfVar11 = pfVar11 + iVar35;
                pfVar10[lVar4] = fVar44 + fVar43;
                pfVar10 = pfVar10 + lVar18;
              } while (param_3 != iVar29);
            }
            iVar31 = iVar31 + 2;
            iVar22 = iVar22 + 2;
          } while (iVar31 < param_1);
        }
        iVar27 = iVar27 + 1;
        lVar4 = lVar4 + lVar25;
      } while (iVar3 != iVar27);
      iVar35 = param_2 * param_4;
    }
    else {
      iVar27 = 1;
      lVar34 = lVar17 * 2 - (long)iVar33;
      lVar4 = lVar5;
      do {
        iVar23 = 0;
        lVar15 = lVar4;
        pfVar11 = pfVar30;
        if (0 < param_3) {
          do {
            if (2 < param_1) {
              pfVar10 = (float *)(param_8 + lVar15);
              pfVar7 = pfVar11;
              pfVar13 = pfVar11;
              do {
                pfVar8 = pfVar7 + -2;
                pfVar21 = pfVar13 + 2;
                pfVar10[lVar34 + 1] = pfVar13[1] + pfVar7[-3];
                pfVar10[1] = pfVar13[1] - pfVar7[-3];
                pfVar10[lVar34 + 2] = *pfVar21 - *pfVar8;
                pfVar10 = pfVar10 + 2;
                *pfVar10 = *pfVar21 + *pfVar8;
                pfVar7 = pfVar8;
                pfVar13 = pfVar21;
              } while (pfVar8 != pfVar11 + (ulong)(param_1 - 3U >> 1) * -2 + -2);
            }
            iVar23 = iVar23 + 1;
            lVar15 = lVar15 + lVar18;
            pfVar11 = pfVar11 + iVar35;
          } while (param_3 != iVar23);
        }
        iVar27 = iVar27 + 1;
        pfVar30 = pfVar30 + iVar32;
        lVar4 = lVar4 + lVar24;
        lVar34 = lVar34 + (lVar17 - lVar24);
      } while (iVar3 != iVar27);
      iVar35 = param_2 * param_4;
    }
    lVar37 = (long)param_4;
    lVar38 = iVar35 - lVar37;
    lVar4 = lVar38 * 4;
    lVar28 = (long)-param_4;
    pfVar30 = (float *)(param_7 + lVar4);
    fVar43 = 0.0;
    lVar15 = lVar37 * 2 - (long)iVar35;
    lVar26 = param_4 * 2 + lVar37;
    iVar32 = 1;
    fVar44 = _LC7;
    lVar34 = param_7;
    do {
      lVar34 = lVar34 + lVar37 * 4;
      lVar9 = 0;
      fVar40 = fVar44 * (float)local_40[0];
      fVar44 = (float)local_48 * fVar44 - (float)local_40[0] * fVar43;
      fVar43 = fVar43 * (float)local_48 + fVar40;
      if (0 < param_4) {
        do {
          *(float *)(lVar34 + lVar9) =
               *(float *)((long)(param_9 + lVar37) + lVar9) * fVar44 +
               *(float *)((long)param_9 + lVar9);
          *(float *)((long)pfVar30 + lVar9) = *(float *)((long)param_9 + lVar9 + lVar4) * fVar43;
          lVar9 = lVar9 + 4;
        } while (lVar9 != lVar37 * 4);
      }
      if (iVar3 == 2) break;
      iVar35 = 2;
      pfVar11 = param_9 + lVar26;
      lVar9 = lVar38 - lVar26;
      fVar40 = fVar44;
      fVar42 = fVar43;
      do {
        pfVar7 = pfVar11 + -lVar37;
        fVar41 = fVar40 * fVar43;
        fVar40 = fVar44 * fVar40 - fVar43 * fVar42;
        fVar42 = fVar42 * fVar44 + fVar41;
        pfVar10 = pfVar30;
        if (0 < param_4) {
          do {
            pfVar10[lVar15] = *pfVar7 * fVar40 + pfVar10[lVar15];
            pfVar13 = pfVar7 + lVar9;
            pfVar7 = pfVar7 + 1;
            *pfVar10 = *pfVar13 * fVar42 + *pfVar10;
            pfVar10 = pfVar10 + 1;
          } while (pfVar7 != pfVar11);
        }
        iVar35 = iVar35 + 1;
        lVar9 = lVar9 + (lVar28 - lVar37);
        pfVar11 = pfVar11 + lVar37;
      } while (iVar3 != iVar35);
      pfVar30 = pfVar30 + lVar28;
      iVar32 = iVar32 + 1;
      lVar15 = lVar15 + (lVar37 - lVar28);
    } while (iVar3 != iVar32);
    iVar32 = 1;
    lVar4 = lVar37;
    do {
      pfVar30 = param_9;
      if (0 < param_4) {
        do {
          pfVar11 = pfVar30 + 1;
          *pfVar30 = *pfVar30 + pfVar30[lVar4];
          pfVar30 = pfVar11;
        } while (param_9 + lVar37 != pfVar11);
      }
      iVar32 = iVar32 + 1;
      lVar4 = lVar4 + lVar37;
    } while (iVar3 != iVar32);
    iVar32 = 1;
    lVar4 = lVar5 * 4;
    lVar34 = lVar17 * 4;
    do {
      iVar35 = 0;
      lVar15 = lVar34;
      lVar26 = lVar4;
      if (0 < param_3) {
        do {
          iVar35 = iVar35 + 1;
          *(float *)((long)param_8 + lVar15) =
               *(float *)(param_6 + lVar15) - *(float *)(param_6 + lVar26);
          pfVar30 = (float *)(param_6 + lVar15);
          lVar15 = lVar15 + lVar19;
          *(float *)((long)param_8 + lVar26) = *pfVar30 + *(float *)(param_6 + lVar26);
          lVar26 = lVar26 + lVar19;
        } while (param_3 != iVar35);
      }
      iVar32 = iVar32 + 1;
      lVar34 = lVar34 + lVar17 * 4;
      lVar4 = lVar4 + lVar17 * -4;
    } while (iVar3 != iVar32);
    if (param_1 == 1) {
      return;
    }
    if (iVar2 < param_3) {
      iVar32 = 0;
      iVar35 = 1;
      do {
        iVar32 = iVar32 + iVar1;
        iVar33 = iVar33 - iVar1;
        if ((2 < param_1) && (iVar23 = iVar32, iVar27 = iVar33, 0 < param_3)) {
          do {
            iVar27 = iVar27 + 2;
            iVar23 = iVar23 + 2;
            iVar36 = 0;
            lVar5 = (long)iVar23 << 2;
            lVar4 = (long)iVar27 << 2;
            do {
              iVar36 = iVar36 + 1;
              *(float *)((long)param_8 + lVar5 + -4) =
                   *(float *)(param_6 + -4 + lVar5) - *(float *)(param_6 + lVar4);
              *(float *)((long)param_8 + lVar4 + -4) =
                   *(float *)(param_6 + -4 + lVar5) + *(float *)(param_6 + lVar4);
              *(float *)((long)param_8 + lVar5) =
                   *(float *)(param_6 + lVar5) + *(float *)(param_6 + -4 + lVar4);
              pfVar30 = (float *)(param_6 + lVar5);
              lVar5 = lVar5 + lVar19;
              *(float *)((long)param_8 + lVar4) = *pfVar30 - *(float *)(param_6 + -4 + lVar4);
              lVar4 = lVar4 + lVar19;
            } while (param_3 != iVar36);
          } while ((param_1 - 3U & 0xfffffffe) + 2 + iVar32 != iVar23);
        }
        iVar35 = iVar35 + 1;
      } while (iVar3 != iVar35);
    }
    else {
      iVar32 = 1;
      lVar4 = lVar17;
      do {
        iVar35 = 0;
        lVar19 = lVar4;
        lVar34 = lVar5;
        if (0 < param_3) {
          do {
            if (2 < param_1) {
              puVar12 = param_8 + lVar19;
              pfVar30 = (float *)(param_6 + lVar34 * 4);
              pfVar11 = (float *)(lVar19 * 4 + param_6);
              do {
                pfVar10 = pfVar11 + 2;
                puVar12[1] = pfVar11[1] - pfVar30[2];
                puVar12[lVar6 + 1] = pfVar11[1] + pfVar30[2];
                puVar12[2] = *pfVar10 + pfVar30[1];
                puVar12[lVar6 + 2] = *pfVar10 - pfVar30[1];
                puVar12 = puVar12 + 2;
                pfVar30 = pfVar30 + 2;
                pfVar11 = pfVar10;
              } while (param_8 + lVar19 + (ulong)(param_1 - 3U & 0xfffffffe) + 2 != puVar12);
            }
            iVar35 = iVar35 + 1;
            lVar19 = lVar19 + lVar18;
            lVar34 = lVar34 + lVar18;
          } while (param_3 != iVar35);
        }
        iVar32 = iVar32 + 1;
        lVar5 = lVar5 + lVar24;
        lVar4 = lVar4 + lVar17;
        lVar6 = lVar6 + lVar25;
      } while (iVar3 != iVar32);
    }
    if (param_4 < 1) goto LAB_001027b2;
LAB_00102761:
    local_88 = (long)param_4;
    lVar4 = 0;
    do {
      *(undefined4 *)(param_7 + lVar4) = *(undefined4 *)((long)param_9 + lVar4);
      lVar4 = lVar4 + 4;
    } while (local_88 << 2 != lVar4);
  }
  else {
    if (0 < param_3) {
      iVar27 = 0;
      puVar12 = param_5;
      puVar16 = param_8;
      do {
        lVar4 = 0;
        if (0 < param_1) {
          do {
            *(undefined4 *)((long)puVar16 + lVar4) = *(undefined4 *)((long)puVar12 + lVar4);
            lVar4 = lVar4 + 4;
          } while (lVar4 != (long)param_1 * 4);
        }
        iVar27 = iVar27 + 1;
        puVar12 = puVar12 + iVar35;
        puVar16 = puVar16 + param_1;
      } while (param_3 != iVar27);
    }
    if (1 < iVar3) goto LAB_00101f1b;
LAB_001021d1:
    if (param_1 == 1) {
      return;
    }
LAB_00102ab7:
    if (0 < param_4) goto LAB_00102761;
  }
  if (param_2 < 2) {
    return;
  }
LAB_001027b2:
  local_90 = (long)param_1;
  local_d0 = (long)iVar1;
  lVar5 = local_90 * 4;
  lVar4 = local_d0 * 4;
  iVar32 = 1;
  do {
    iVar3 = iVar32;
    iVar32 = 0;
    lVar6 = lVar4;
    if (0 < param_3) {
      do {
        iVar32 = iVar32 + 1;
        *(undefined4 *)(param_6 + lVar6) = *(undefined4 *)((long)param_8 + lVar6);
        lVar6 = lVar6 + lVar5;
      } while (param_3 != iVar32);
    }
    lVar4 = lVar4 + local_d0 * 4;
    iVar32 = iVar3 + 1;
  } while (param_2 != iVar3 + 1);
  if (param_3 < iVar2) {
    pfVar30 = (float *)(param_10 + -4);
    lVar4 = local_d0;
    iVar32 = 1;
    do {
      iVar1 = 0;
      lVar5 = lVar4;
      if (0 < param_3) {
        do {
          if (2 < param_1) {
            pfVar11 = (float *)(param_8 + lVar5);
            pfVar10 = (float *)(lVar5 * 4 + param_6);
            pfVar7 = pfVar30;
            do {
              pfVar13 = pfVar11 + 2;
              pfVar8 = pfVar7 + 2;
              pfVar10[1] = pfVar7[1] * pfVar11[1] - *pfVar8 * *pfVar13;
              pfVar10[2] = pfVar7[1] * *pfVar13 + *pfVar8 * pfVar11[1];
              pfVar11 = pfVar13;
              pfVar10 = pfVar10 + 2;
              pfVar7 = pfVar8;
            } while ((float *)(param_8 + lVar5 + (ulong)(param_1 - 3U & 0xfffffffe) + 2) != pfVar13)
            ;
          }
          iVar1 = iVar1 + 1;
          lVar5 = lVar5 + local_90;
        } while (param_3 != iVar1);
      }
      lVar4 = lVar4 + local_d0;
      pfVar30 = pfVar30 + local_90;
      bVar39 = iVar3 != iVar32;
      iVar32 = iVar32 + 1;
    } while (bVar39);
  }
  else {
    param_10 = param_10 + -4;
    iVar2 = 0;
    iVar32 = 1;
    do {
      iVar2 = iVar2 + iVar1;
      if ((2 < param_1) && (lVar4 = param_10, iVar35 = iVar2, 0 < param_3)) {
        do {
          iVar35 = iVar35 + 2;
          iVar33 = 0;
          lVar6 = (long)iVar35 << 2;
          do {
            iVar33 = iVar33 + 1;
            *(float *)(param_6 + -4 + lVar6) =
                 *(float *)(lVar4 + 4) * *(float *)((long)param_8 + lVar6 + -4) -
                 *(float *)(lVar4 + 8) * *(float *)((long)param_8 + lVar6);
            *(float *)(param_6 + lVar6) =
                 *(float *)(lVar4 + 4) * *(float *)((long)param_8 + lVar6) +
                 *(float *)(lVar4 + 8) * *(float *)((long)param_8 + lVar6 + -4);
            lVar6 = lVar6 + lVar5;
          } while (param_3 != iVar33);
          lVar4 = lVar4 + 8;
        } while ((param_1 - 3U & 0xfffffffe) + 2 + iVar2 != iVar35);
      }
      param_10 = param_10 + lVar5;
      bVar39 = iVar3 != iVar32;
      iVar32 = iVar32 + 1;
    } while (bVar39);
  }
  return;
}



void drft_forward(int *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  bool bVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  
  iVar4 = *param_1;
  if (iVar4 != 1) {
    lVar6 = *(long *)(param_1 + 4);
    lVar7 = *(long *)(param_1 + 2);
    lVar11 = lVar7 + (long)iVar4 * 4;
    if (0 < *(int *)(lVar6 + 4)) {
      lVar12 = lVar6 + (long)*(int *)(lVar6 + 4) * 4;
      bVar9 = true;
      iVar10 = iVar4;
      iVar14 = iVar4;
      do {
        iVar5 = *(int *)(lVar12 + 4);
        uVar8 = (long)iVar10 / (long)iVar5;
        uVar13 = (long)iVar4 / (long)iVar10 & 0xffffffff;
        iVar10 = (int)((long)iVar4 / (long)iVar10);
        iVar14 = iVar14 - (iVar5 + -1) * iVar10;
        lVar1 = lVar11 + -4 + (long)iVar14 * 4;
        if (iVar5 == 4) {
          lVar2 = lVar11 + -4 + (long)(iVar10 + iVar14) * 4;
          lVar3 = lVar11 + -4 + (long)(iVar10 + iVar10 + iVar14) * 4;
          if (!bVar9) {
            dradf4(uVar13,uVar8 & 0xffffffff,lVar7,param_2,lVar1,lVar2,lVar3);
            goto LAB_00102c2a;
          }
          dradf4(uVar13,uVar8 & 0xffffffff,param_2,lVar7,lVar1,lVar2,lVar3);
LAB_00102bab:
          bVar9 = false;
        }
        else {
          if (iVar5 == 2) {
            if (!bVar9) {
              dradf2(uVar13,uVar8 & 0xffffffff,lVar7,param_2);
              goto LAB_00102c2a;
            }
            dradf2(uVar13,uVar8 & 0xffffffff,param_2);
            goto LAB_00102bab;
          }
          if (iVar10 != 1) {
            bVar9 = (bool)(bVar9 ^ 1);
          }
          iVar10 = (int)uVar8 * iVar10;
          if (bVar9) {
            dradfg(uVar13,iVar5,uVar8 & 0xffffffff,iVar10,lVar7,lVar7,lVar7,param_2,param_2,lVar1);
            goto LAB_00102bab;
          }
          dradfg(uVar13,iVar5,uVar8 & 0xffffffff,iVar10,param_2,param_2,param_2,lVar7,lVar7,lVar1);
LAB_00102c2a:
          bVar9 = true;
        }
        lVar12 = lVar12 + -4;
        iVar10 = (int)uVar8;
      } while (lVar6 != lVar12);
      if ((!bVar9) && (0 < iVar4)) {
        lVar11 = 0;
        do {
          *(undefined4 *)(param_2 + lVar11) = *(undefined4 *)(lVar7 + lVar11);
          lVar11 = lVar11 + 4;
        } while ((long)iVar4 * 4 != lVar11);
      }
    }
  }
  return;
}



void drft_backward(int *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  
  iVar3 = *param_1;
  if (iVar3 == 1) {
    return;
  }
  lVar13 = *(long *)(param_1 + 4);
  lVar5 = *(long *)(param_1 + 2);
  lVar9 = lVar5 + (long)iVar3 * 4;
  if (0 < *(int *)(lVar13 + 4)) {
    lVar1 = lVar13 + (long)*(int *)(lVar13 + 4) * 4;
    iVar14 = 1;
    bVar7 = false;
    iVar12 = 1;
    do {
      iVar4 = *(int *)(lVar13 + 8);
      uVar6 = (long)iVar3 / (long)(iVar12 * iVar4);
      iVar8 = (int)uVar6;
      lVar2 = lVar9 + -4 + (long)iVar14 * 4;
      if (iVar4 == 4) {
        lVar10 = lVar5;
        lVar11 = param_2;
        if (bVar7) {
          lVar10 = param_2;
          lVar11 = lVar5;
        }
        dradb4(uVar6 & 0xffffffff,iVar12,lVar11,lVar10,lVar2,lVar9 + -4 + (long)(iVar8 + iVar14) * 4
               ,lVar9 + -4 + (long)(iVar8 + iVar8 + iVar14) * 4);
LAB_00102de0:
        bVar7 = (bool)(bVar7 ^ 1);
      }
      else {
        if (iVar4 == 2) {
          if (bVar7) {
            dradb2(uVar6 & 0xffffffff,iVar12,lVar5,param_2);
          }
          else {
            dradb2(uVar6 & 0xffffffff,iVar12,param_2,lVar5);
          }
          goto LAB_00102de0;
        }
        if (iVar4 == 3) {
          lVar10 = lVar9 + -4 + (long)(iVar8 + iVar14) * 4;
          if (bVar7) {
            dradb3(uVar6 & 0xffffffff,iVar12,lVar5,param_2,lVar2,lVar10);
          }
          else {
            dradb3(uVar6 & 0xffffffff,iVar12,param_2,lVar5,lVar2,lVar10);
          }
          goto LAB_00102de0;
        }
        lVar10 = param_2;
        lVar11 = lVar5;
        if (bVar7) {
          lVar10 = lVar5;
          lVar11 = param_2;
        }
        dradbg(uVar6 & 0xffffffff,iVar4,iVar12,iVar8 * iVar12,lVar10,lVar10,lVar10,lVar11,lVar11,
               lVar2);
        if (iVar8 == 1) {
          bVar7 = (bool)(bVar7 ^ 1);
        }
      }
      lVar13 = lVar13 + 4;
      iVar14 = iVar14 + (iVar4 + -1) * iVar8;
      iVar12 = iVar12 * iVar4;
    } while (lVar1 != lVar13);
    if ((bVar7) && (0 < iVar3)) {
      lVar9 = 0;
      do {
        *(undefined4 *)(param_2 + lVar9) = *(undefined4 *)(lVar5 + lVar9);
        lVar9 = lVar9 + 4;
      } while ((long)iVar3 * 4 != lVar9);
    }
  }
  return;
}



void drft_init(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  ulong local_a0;
  double local_48;
  double adStack_40 [2];
  
  *param_1 = param_2;
  pvVar4 = calloc((long)(param_2 * 3),4);
  *(void **)(param_1 + 2) = pvVar4;
  piVar5 = (int *)calloc(0x20,4);
  *(int **)(param_1 + 4) = piVar5;
  if (param_2 == 1) {
    return;
  }
  uVar9 = 0;
  local_a0 = 0;
  iVar15 = 0;
  iVar8 = param_2;
  do {
    if (local_a0 < 4) {
      iVar15 = *(int *)(ntryh_1 + local_a0 * 4);
    }
    else {
      iVar15 = iVar15 + 2;
    }
    lVar7 = (long)(int)uVar9 * 4 + 8;
    uVar10 = uVar9;
    while( true ) {
      uVar9 = uVar10;
      uVar10 = uVar9 + 1;
      iVar3 = iVar8 / iVar15;
      if (iVar8 % iVar15 != 0) break;
      *(int *)((long)piVar5 + lVar7) = iVar15;
      if ((iVar15 == 2) && (uVar10 != 1)) {
        if (1 < (int)uVar10) {
          lVar6 = (ulong)(uVar9 - 1) * -4;
          memmove((void *)((long)piVar5 + lVar6 + lVar7),(void *)(lVar7 + -4 + lVar6 + (long)piVar5)
                  ,(ulong)uVar9 << 2);
        }
        piVar5[2] = 2;
      }
      lVar7 = lVar7 + 4;
      iVar8 = iVar3;
      if (iVar3 == 1) {
        piVar5[1] = uVar10;
        *piVar5 = param_2;
        if ((int)uVar9 < 1) {
          return;
        }
        iVar15 = 0;
        piVar1 = piVar5 + (int)uVar9;
        fVar16 = _LC9 / (float)param_2;
        iVar8 = 1;
        do {
          iVar3 = piVar5[2];
          iVar2 = param_2 / (iVar8 * iVar3);
          if (0 < iVar3 + -1) {
            iVar11 = 0;
            lVar7 = (long)iVar15;
            iVar14 = iVar11;
            do {
              iVar14 = iVar14 + iVar8;
              if (2 < iVar2) {
                fVar17 = 0.0;
                pfVar12 = (float *)((long)pvVar4 + lVar7 * 4 + (long)param_2 * 4);
                do {
                  pfVar13 = pfVar12 + 2;
                  fVar17 = fVar17 + _LC7;
                  sincos((double)((float)iVar14 * fVar16 * fVar17),adStack_40,&local_48);
                  *pfVar12 = (float)local_48;
                  pfVar12[1] = (float)adStack_40[0];
                  pfVar12 = pfVar13;
                } while (pfVar13 !=
                         (float *)((long)pvVar4 +
                                  (lVar7 + (ulong)(iVar2 - 3U & 0xfffffffe)) * 4 +
                                  (long)param_2 * 4 + 8));
              }
              iVar11 = iVar11 + 1;
              lVar7 = lVar7 + iVar2;
            } while (iVar3 + -1 != iVar11);
            iVar15 = (iVar3 + -2) * iVar2 + iVar2 + iVar15;
          }
          piVar5 = piVar5 + 1;
          iVar8 = iVar8 * iVar3;
        } while (piVar1 != piVar5);
        return;
      }
    }
    local_a0 = local_a0 + 1;
  } while( true );
}



void drft_clear(undefined1 (*param_1) [16])

{
  if (param_1 != (undefined1 (*) [16])0x0) {
    if (*(void **)(*param_1 + 8) != (void *)0x0) {
      free(*(void **)(*param_1 + 8));
    }
    if (*(void **)param_1[1] != (void *)0x0) {
      free(*(void **)param_1[1]);
    }
    *(undefined8 *)param_1[1] = 0;
    *param_1 = (undefined1  [16])0x0;
    return;
  }
  return;
}


