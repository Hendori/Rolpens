
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* meshopt::rasterize(meshopt::OverdrawBuffer*, float, float, float, float, float, float, float,
   float, float) */

void meshopt::rasterize(OverdrawBuffer *param_1,float param_2,float param_3,float param_4,
                       float param_5,float param_6,float param_7,float param_8,float param_9,
                       float param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  OverdrawBuffer *pOVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  OverdrawBuffer *pOVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  int local_58;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  
  fVar30 = (param_8 - param_2) * (param_7 - param_4);
  fVar27 = (param_7 - param_4) * (param_9 - param_3);
  fVar29 = (param_5 - param_2) * (param_9 - param_3) - (param_6 - param_3) * (param_8 - param_2);
  fVar28 = (param_5 - param_2) * (param_10 - param_4);
  fVar24 = (param_6 - param_3) * (param_10 - param_4);
  fVar26 = param_8;
  fVar25 = param_9;
  if (fVar29 == 0.0) {
    fVar27 = fVar27 - fVar24 * 0.0;
    fVar28 = fVar28 - fVar30 * 0.0;
  }
  else {
    fVar27 = fVar27 - fVar24 * (_LC1 / fVar29);
    fVar28 = fVar28 - (_LC1 / fVar29) * fVar30;
    if (0.0 < fVar29) {
      param_4 = _LC2 - param_4;
      fVar27 = (float)((uint)fVar27 ^ _LC3);
      fVar28 = (float)((uint)fVar28 ^ _LC3);
      fVar26 = param_5;
      fVar25 = param_6;
      param_5 = param_8;
      param_6 = param_9;
    }
  }
  iVar20 = (int)(param_5 * _LC4 + _LC5);
  iVar15 = (int)(fVar26 * _LC4 + _LC5);
  iVar13 = (int)(param_2 * _LC4 + _LC5);
  iVar21 = (int)(param_3 * _LC4 + _LC5);
  iVar10 = (int)(param_6 * _LC4 + _LC5);
  iVar17 = (int)(_LC4 * fVar25 + _LC5);
  iVar6 = iVar15;
  if (iVar20 <= iVar15) {
    iVar6 = iVar20;
  }
  iVar1 = iVar15;
  if (iVar15 <= iVar20) {
    iVar1 = iVar20;
  }
  iVar2 = iVar13;
  if ((iVar13 < iVar6) || (iVar2 = iVar15, iVar15 <= iVar20)) {
    iVar6 = iVar2 + 7 >> 4;
    local_4c = 0;
    if (-1 < iVar6) {
      local_4c = iVar6;
    }
    if (iVar1 < iVar13) goto LAB_0010046e;
    iVar6 = iVar20 + 7;
    if (iVar20 <= iVar15) goto LAB_00100466;
  }
  else {
    iVar6 = iVar20 + 7 >> 4;
    local_4c = 0;
    if (-1 < iVar6) {
      local_4c = iVar6;
    }
    if (iVar1 < iVar13) {
LAB_0010046e:
      iVar6 = iVar13 + 7;
    }
    else {
LAB_00100466:
      iVar6 = iVar15 + 7;
    }
  }
  iVar1 = 0x100;
  if (iVar6 >> 4 < 0x101) {
    iVar1 = iVar6 >> 4;
  }
  iVar6 = iVar17;
  if (iVar10 <= iVar17) {
    iVar6 = iVar10;
  }
  iVar2 = iVar17;
  if (iVar17 <= iVar10) {
    iVar2 = iVar10;
  }
  iVar19 = iVar21;
  if (iVar21 < iVar6) {
    iVar6 = iVar21 + 7 >> 4;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
LAB_00100498:
    if (iVar2 < iVar21) goto LAB_001001f4;
    if (iVar10 <= iVar17) goto LAB_00100476;
    local_58 = iVar13 - iVar20;
    iVar23 = iVar17 - iVar21;
    iVar19 = iVar10 - iVar17;
    local_50 = iVar20 - iVar15;
    local_48 = iVar15 - iVar13;
    iVar2 = iVar10 + 7 >> 4;
    if (0x100 < iVar2) {
      iVar2 = 0x100;
    }
    local_54 = iVar21 - iVar10;
    uVar4 = (ulong)local_54;
    if (-1 < (int)local_54) goto LAB_0010023c;
    uVar7 = 1;
  }
  else {
    if (iVar17 <= iVar10) {
      iVar6 = iVar17 + 7 >> 4;
      if (iVar6 < 0) {
        iVar6 = 0;
      }
      goto LAB_00100498;
    }
    iVar6 = iVar10 + 7 >> 4;
    if (iVar6 < 0) {
      iVar6 = 0;
    }
    if (iVar21 <= iVar2) {
LAB_00100476:
      iVar19 = iVar17;
    }
LAB_001001f4:
    iVar2 = iVar19 + 7 >> 4;
    uVar7 = 1;
    if (0x100 < iVar2) {
      iVar2 = 0x100;
    }
    iVar19 = iVar10 - iVar17;
    iVar23 = iVar17 - iVar21;
    local_58 = iVar13 - iVar20;
    local_50 = iVar20 - iVar15;
    local_48 = iVar15 - iVar13;
    local_54 = iVar21 - iVar10;
    uVar4 = (ulong)local_54;
    if (-1 < (int)local_54) {
LAB_0010023c:
      uVar4 = CONCAT71((int7)(uVar4 >> 8),local_54 == 0);
      uVar7 = (uint)(0 < local_58) & (uint)uVar4;
    }
    local_44 = 1;
    if (iVar19 < 0) goto LAB_0010027c;
  }
  uVar4 = CONCAT71((int7)(uVar4 >> 8),iVar19 == 0);
  local_44 = (uint)(0 < local_50) & (uint)uVar4;
LAB_0010027c:
  uVar22 = 1;
  if (-1 < iVar23) {
    uVar22 = (uint)(0 < local_48) & (uint)CONCAT71((int7)(uVar4 >> 8),iVar23 == 0);
  }
  iVar3 = iVar6 * 0x10 + 8;
  iVar8 = local_4c * 0x10 + 8;
  uVar7 = (uVar7 - 1) + (local_58 * (iVar3 - iVar21) - local_54 * (iVar8 - iVar13));
  uVar14 = (local_44 - 1) + (local_50 * (iVar3 - iVar10) - (iVar8 - iVar20) * iVar19);
  fVar26 = param_4 + ((float)(iVar8 - iVar13) * fVar27 + (float)(iVar3 - iVar21) * fVar28) * __LC6;
  uVar22 = (uVar22 - 1) + ((iVar3 - iVar17) * local_48 - (iVar8 - iVar15) * iVar23);
  if (iVar6 < iVar2) {
    lVar12 = (long)local_4c + (ulong)(uint)(iVar1 - local_4c);
    pOVar18 = param_1 + ((ulong)(0.0 < fVar29) + ((long)iVar6 * 0x100 + lVar12) * 2) * 4;
    do {
      if (local_4c < iVar1) {
        pOVar5 = pOVar18 + (ulong)(uint)(iVar1 - local_4c) * -8;
        uVar9 = uVar14;
        uVar11 = uVar7;
        uVar16 = uVar22;
        fVar25 = fVar26;
        do {
          if ((-1 < (int)(uVar11 | uVar9 | uVar16)) && (*(float *)pOVar5 <= fVar25)) {
            *(int *)(pOVar5 + 0x80000) = (int)*(float *)(pOVar5 + 0x80000) + 1;
            *(float *)pOVar5 = fVar25;
          }
          pOVar5 = pOVar5 + 8;
          fVar25 = fVar25 + fVar27;
          uVar11 = uVar11 + local_54 * -0x10;
          uVar9 = uVar9 + iVar19 * -0x10;
          uVar16 = uVar16 + iVar23 * -0x10;
        } while (pOVar5 != pOVar18);
      }
      pOVar18 = pOVar18 + 0x800;
      fVar26 = fVar26 + fVar28;
      uVar7 = uVar7 + local_58 * 0x10;
      uVar14 = uVar14 + local_50 * 0x10;
      uVar22 = uVar22 + local_48 * 0x10;
    } while (param_1 + ((ulong)(0.0 < fVar29) +
                       (((ulong)(uint)(iVar2 - iVar6) + (long)iVar6) * 0x100 + lVar12) * 2) * 4 !=
             pOVar18);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
meshopt_analyzeOverdraw(uint *param_1,ulong param_2,long param_3,long param_4,ulong param_5)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  OverdrawBuffer *pOVar11;
  float *pfVar12;
  float *pfVar13;
  OverdrawBuffer *__s;
  OverdrawBuffer *pOVar14;
  long lVar15;
  float *pfVar16;
  OverdrawBuffer *pOVar17;
  OverdrawBuffer *pOVar18;
  float **ppfVar19;
  long lVar20;
  float *pfVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  long in_FS_OFFSET;
  float fVar25;
  float fVar26;
  int iVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  int iVar33;
  int iVar34;
  ulong local_170;
  undefined8 local_128;
  float local_120;
  float local_11c;
  undefined8 local_118;
  float local_110;
  float *local_108;
  OverdrawBuffer *local_100;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_120 = (float)_LC7;
  local_110 = (float)_LC10;
  ppfVar19 = &local_108;
  for (lVar15 = 0x18; lVar15 != 0; lVar15 = lVar15 + -1) {
    *ppfVar19 = (float *)0x0;
    ppfVar19 = ppfVar19 + 1;
  }
  local_128 = CONCAT44(_LC7._4_4_,(float)_LC7);
  local_118 = CONCAT44(_LC10._4_4_,(float)_LC10);
  if (param_4 == 0) {
    fVar26 = (float)_LC10 - (float)_LC7;
    fVar2 = (float)_LC7;
    fVar3 = (float)_LC7;
    fVar25 = fVar26;
  }
  else {
    lVar20 = 0;
    lVar15 = 0;
    do {
      pfVar13 = (float *)&local_128;
      pfVar16 = (float *)&local_118;
      pfVar21 = (float *)(param_3 + lVar20 * 4);
      do {
        pfVar12 = pfVar13 + 1;
        fVar2 = *pfVar21;
        fVar3 = *pfVar13;
        if (fVar2 <= *pfVar13) {
          fVar3 = fVar2;
        }
        *pfVar13 = fVar3;
        fVar3 = *pfVar16;
        if (*pfVar16 <= fVar2) {
          fVar3 = fVar2;
        }
        *pfVar16 = fVar3;
        pfVar13 = pfVar12;
        pfVar16 = pfVar16 + 1;
        pfVar21 = pfVar21 + 1;
      } while (&local_11c != pfVar12);
      lVar15 = lVar15 + 1;
      lVar20 = lVar20 + (param_5 >> 2);
    } while (param_4 != lVar15);
    fVar26 = (float)local_118 - (float)local_128;
    fVar2 = (float)local_128;
    fVar3 = local_128._4_4_;
    fVar25 = local_118._4_4_ - local_128._4_4_;
    if (local_118._4_4_ - local_128._4_4_ <= local_110 - local_120) {
      fVar25 = local_110 - local_120;
    }
  }
  fVar4 = local_120;
  if (fVar26 <= fVar25) {
    fVar26 = fVar25;
  }
  lVar15 = param_2 * 0xc;
  if (0x3fffffffffffffff < param_2 * 3) {
    lVar15 = -1;
  }
  fVar26 = _LC2 / fVar26;
  pfVar13 = (float *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(lVar15);
  local_48 = 1;
  if (param_2 != 0) {
    puVar1 = param_1 + param_2;
    pfVar16 = pfVar13;
    do {
      uVar10 = *param_1;
      param_1 = param_1 + 1;
      pfVar21 = (float *)(param_3 + (ulong)uVar10 * (param_5 >> 2) * 4);
      *pfVar16 = (*pfVar21 - fVar2) * fVar26;
      pfVar16[1] = (pfVar21[1] - fVar3) * fVar26;
      pfVar16[2] = (pfVar21[2] - fVar4) * fVar26;
      pfVar16 = pfVar16 + 3;
    } while (param_1 != puVar1);
  }
  iVar23 = 0;
  iVar22 = 0;
  local_108 = pfVar13;
  __s = (OverdrawBuffer *)(*(code *)meshopt_Allocator::StorageT<void>::allocate)(0x100000);
  local_48 = 2;
  iVar24 = 0;
  local_100 = __s;
  do {
    memset(__s,0,0x100000);
    pOVar17 = __s + 0x80800;
    pOVar18 = __s + 0x80000;
    if (param_2 != 0) {
      local_170 = 0;
      pfVar16 = pfVar13;
      do {
        fVar2 = pfVar16[7];
        fVar3 = pfVar16[8];
        fVar26 = pfVar16[6];
        fVar25 = pfVar16[4];
        fVar4 = pfVar16[5];
        fVar5 = pfVar16[3];
        fVar6 = pfVar16[1];
        fVar7 = pfVar16[2];
        fVar8 = *pfVar16;
        if (iVar24 == 1) {
          meshopt::rasterize(__s,fVar8,fVar7,fVar6,fVar5,fVar4,fVar25,fVar26,fVar3,fVar2);
        }
        else if (iVar24 == 2) {
          meshopt::rasterize(__s,fVar6,fVar8,fVar7,fVar25,fVar5,fVar4,fVar2,fVar26,fVar3);
        }
        else {
          meshopt::rasterize(__s,fVar7,fVar6,fVar8,fVar4,fVar25,fVar5,fVar3,fVar2,fVar26);
        }
        local_170 = local_170 + 3;
        pfVar16 = pfVar16 + 9;
      } while (local_170 < param_2);
    }
    do {
      iVar27 = 0;
      iVar28 = 0;
      iVar29 = 0;
      iVar30 = 0;
      iVar31 = 0;
      iVar32 = 0;
      iVar33 = 0;
      iVar34 = 0;
      pOVar11 = pOVar18;
      do {
        pOVar14 = pOVar11;
        auVar9 = *(undefined1 (*) [16])(pOVar14 + 0x10);
        iVar27 = iVar27 + *(int *)(pOVar14 + 4) + *(int *)pOVar14;
        iVar28 = iVar28 + *(int *)(pOVar14 + 0xc) + *(int *)(pOVar14 + 8);
        iVar29 = iVar29 + auVar9._4_4_ + auVar9._0_4_;
        iVar30 = iVar30 + auVar9._12_4_ + auVar9._8_4_;
        iVar31 = iVar31 + (~-(uint)(*(int *)pOVar14 == 0) & __LC11) +
                          (uint)(*(int *)(pOVar14 + 4) != 0);
        iVar32 = iVar32 + (~-(uint)(*(int *)(pOVar14 + 8) == 0) & _UNK_00100a44) +
                          (uint)(*(int *)(pOVar14 + 0xc) != 0);
        iVar33 = iVar33 + (~-(uint)(auVar9._0_4_ == 0) & _UNK_00100a48) + (uint)(auVar9._4_4_ != 0);
        iVar34 = iVar34 + (~-(uint)(auVar9._8_4_ == 0) & _UNK_00100a4c) + (uint)(auVar9._12_4_ != 0)
        ;
        pOVar11 = pOVar14 + 0x20;
      } while (pOVar14 + 0x20 != pOVar17);
      iVar22 = iVar22 + iVar27 + iVar29 + iVar28 + iVar30;
      iVar23 = iVar23 + iVar33 + iVar31 + iVar34 + iVar32;
      pOVar17 = pOVar14 + 0x820;
      pOVar18 = pOVar18 + 0x800;
    } while (__s + 0x100800 != pOVar14 + 0x820);
    iVar24 = iVar24 + 1;
  } while (iVar24 != 3);
  (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(__s);
  (*(code *)meshopt_Allocator::StorageT<void>::deallocate)(pfVar13);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(iVar22,iVar23);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


