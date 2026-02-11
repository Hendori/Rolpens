
void HistogramSetRemoveHistogram(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = *(long *)(param_1 + 2);
  lVar3 = (long)(int)param_2;
  *(undefined8 *)(lVar2 + lVar3 * 8) = 0;
  *param_3 = *param_3 + -1;
  iVar1 = *param_1;
  if ((iVar1 - 1U == param_2) && (0 < iVar1)) {
    do {
      if (*(long *)(lVar2 + lVar3 * 8) != 0) {
        return;
      }
      *param_1 = (int)lVar3;
      lVar3 = lVar3 + -1;
    } while (lVar3 != ((long)iVar1 + -2) - (ulong)(iVar1 - 1U));
  }
  return;
}



void HistogramClear(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  size_t __n;
  
  __n = 0x1128;
  iVar1 = *(int *)(param_1 + 0x195);
  uVar2 = *param_1;
  if (0 < iVar1) {
    __n = (size_t)((1 << ((byte)iVar1 & 0x1f)) * 4 + 0x1128);
  }
  puVar3 = (undefined8 *)memset(param_1,0,__n);
  *(int *)(puVar3 + 0x195) = iVar1;
  *puVar3 = uVar2;
  return;
}



void HistogramSetResetPointers_isra_0(int param_1,undefined8 *param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  
  iVar5 = 0x1128;
  if (0 < param_3) {
    iVar5 = (1 << ((byte)param_3 & 0x1f)) * 4 + 0x1128;
  }
  puVar2 = param_2 + param_1;
  puVar3 = param_2;
  if (0 < param_1) {
    do {
      puVar4 = puVar3 + 1;
      plVar1 = (long *)((long)puVar2 + 0x1fU & 0xffffffffffffffe0);
      *puVar3 = plVar1;
      *plVar1 = (long)(plVar1 + 0x199);
      puVar2 = (undefined8 *)((long)plVar1 + (long)iVar5);
      puVar3 = puVar4;
    } while (puVar4 != param_2 + param_1);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
GetCombinedEntropy(undefined8 param_1,undefined8 param_2,ulong param_3,int param_4,int param_5,
                  int param_6)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  float fVar5;
  float fVar6;
  float local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  int local_28;
  undefined1 local_24 [16];
  int local_14;
  long local_10;
  undefined8 uVar2;
  
  iVar1 = (int)param_3;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_6 != 0) {
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)(iVar1 + -1) * __LC7 + __LC8 + __LC9 + 0.0 + __LC10;
    uVar2 = auVar4._0_8_;
    goto LAB_00100271;
  }
  if (param_4 == 0) {
    if (param_5 == 0) {
      local_24 = (undefined1  [16])0x0;
      local_14 = 0;
      local_28 = 1;
      *(int *)(local_24 + (ulong)(3 < iVar1) * 4 + 4) = iVar1;
      VP8LBitEntropyInit(&local_48);
    }
    else {
      (*_VP8LGetEntropyUnrefined)(param_2,param_3 & 0xffffffff,&local_48,&local_28);
    }
  }
  else if (param_5 == 0) {
    (*_VP8LGetEntropyUnrefined)(param_1,param_3 & 0xffffffff,&local_48,&local_28);
  }
  else {
    (*_VP8LGetCombinedEntropyUnrefined)(param_1,param_2,param_3,&local_48,&local_28);
  }
  fVar6 = _LC1;
  fVar5 = _LC0;
  if (local_40 < 5) {
    if (local_40 < 2) {
      fVar6 = 0.0;
    }
    else {
      if (local_40 != 2) {
        fVar6 = _LC3;
        fVar5 = _LC2;
        if (local_40 != 3) {
          fVar6 = _LC5;
          fVar5 = _LC4;
        }
        goto LAB_001001b8;
      }
      fVar6 = local_48 * __LC12 + (float)local_44 * __LC11;
    }
  }
  else {
LAB_001001b8:
    fVar6 = fVar5 * local_48 + (((float)local_44 + (float)local_44) - (float)local_3c) * fVar6;
    if (fVar6 <= local_48) {
      fVar6 = local_48;
    }
  }
  auVar3._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar3._0_4_ = (float)(int)local_24._12_4_ * __LC10 +
                 (float)(int)local_24._4_4_ * __LC15 +
                 (float)(int)local_24._0_4_ * __LC13 + (float)local_14 * __LC14 +
                 (float)local_28 * __LC8 + (float)(int)local_24._8_4_ * __LC7 + __LC9 + fVar6;
  uVar2 = auVar3._0_8_;
LAB_00100271:
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool GetCombinedHistogramEntropy(float param_1,long *param_2,long *param_3,float *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  
  iVar4 = 0x118;
  if (0 < (int)param_2[0x195]) {
    iVar4 = (1 << ((byte)(int)param_2[0x195] & 0x1f)) + 0x118;
  }
  fVar7 = (float)GetCombinedEntropy(*param_2,*param_3,iVar4,(char)param_2[0x198],
                                    (char)param_3[0x198],0);
  lVar1 = *param_3;
  lVar2 = *param_2;
  *param_4 = fVar7 + *param_4;
  uVar3 = (*_VP8LExtraCostCombined)(lVar2 + 0x400,lVar1 + 0x400,0x18);
  fVar7 = *param_4;
  *param_4 = (float)uVar3 + fVar7;
  if ((float)uVar3 + fVar7 <= param_1) {
    uVar3 = *(uint *)((long)param_2 + 0xcac);
    bVar6 = false;
    if ((((uVar3 != 0xffffffff) && (uVar3 == *(uint *)((long)param_3 + 0xcac))) &&
        ((uVar3 >> 0x18 == 0 || (uVar3 >> 0x18 == 0xff)))) &&
       ((uVar5 = uVar3 >> 0x10 & 0xff, uVar5 == 0 || (bVar6 = false, uVar5 == 0xff)))) {
      bVar6 = (uVar3 & 0xff) == 0 || (uVar3 & 0xff) == 0xff;
    }
    fVar8 = (float)GetCombinedEntropy(param_2 + 1,param_3 + 1,0x100,
                                      *(undefined1 *)((long)param_2 + 0xcc1),
                                      *(undefined1 *)((long)param_3 + 0xcc1),bVar6);
    fVar7 = *param_4;
    *param_4 = fVar8 + fVar7;
    if (fVar8 + fVar7 <= param_1) {
      fVar8 = (float)GetCombinedEntropy(param_2 + 0x81,param_3 + 0x81,0x100,
                                        *(undefined1 *)((long)param_2 + 0xcc2),
                                        *(undefined1 *)((long)param_3 + 0xcc2),bVar6);
      fVar7 = *param_4;
      *param_4 = fVar8 + fVar7;
      if (fVar8 + fVar7 <= param_1) {
        fVar8 = (float)GetCombinedEntropy(param_2 + 0x101,param_3 + 0x101,0x100,
                                          *(undefined1 *)((long)param_2 + 0xcc3),
                                          *(undefined1 *)((long)param_3 + 0xcc3),bVar6);
        fVar7 = *param_4;
        *param_4 = fVar8 + fVar7;
        if (fVar8 + fVar7 <= param_1) {
          fVar7 = (float)GetCombinedEntropy(param_2 + 0x181,param_3 + 0x181,0x28,
                                            *(undefined1 *)((long)param_2 + 0xcc4),
                                            *(undefined1 *)((long)param_3 + 0xcc4),0);
          *param_4 = fVar7 + *param_4;
          uVar3 = (*_VP8LExtraCostCombined)(param_2 + 0x181,param_3 + 0x181,0x28);
          fVar7 = *param_4;
          *param_4 = (float)uVar3 + fVar7;
          return (float)uVar3 + fVar7 <= param_1;
        }
      }
    }
  }
  return false;
}



float HistoQueuePush(long *param_1,long param_2,int param_3,int param_4)

{
  float fVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  int iVar8;
  long in_FS_OFFSET;
  undefined1 in_XMM0 [16];
  undefined1 auVar9 [16];
  float fVar10;
  float afStack_1c [3];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((int)param_1[1] != *(int *)((long)param_1 + 0xc)) {
    iVar8 = param_4;
    if (param_3 <= param_4) {
      iVar8 = param_3;
      param_3 = param_4;
    }
    auVar9._4_12_ = in_XMM0._4_12_;
    lVar3 = *(long *)(param_2 + (long)iVar8 * 8);
    lVar4 = *(long *)(param_2 + (long)param_3 * 8);
    afStack_1c[0] = 0.0;
    fVar10 = *(float *)(lVar3 + 0xcb0) + *(float *)(lVar4 + 0xcb0);
    auVar9._0_4_ = in_XMM0._0_4_ + fVar10;
    GetCombinedHistogramEntropy(auVar9._0_8_,lVar3,lVar4,afStack_1c);
    fVar10 = afStack_1c[0] - fVar10;
    if (fVar10 < in_XMM0._0_4_) {
      puVar5 = (undefined8 *)*param_1;
      puVar7 = puVar5 + (long)(int)param_1[1] * 2;
      *(int *)(param_1 + 1) = (int)param_1[1] + 1;
      *puVar7 = CONCAT44(param_3,iVar8);
      puVar7[1] = CONCAT44(afStack_1c[0],fVar10);
      fVar1 = *(float *)(puVar5 + 1);
      if (fVar10 < fVar1) {
        uVar2 = *(undefined4 *)((long)puVar5 + 0xc);
        uVar6 = *puVar5;
        *puVar5 = CONCAT44(param_3,iVar8);
        puVar5[1] = CONCAT44(afStack_1c[0],fVar10);
        *puVar7 = uVar6;
        puVar7[1] = CONCAT44(uVar2,fVar1);
      }
      goto LAB_00100649;
    }
  }
  fVar10 = 0.0;
LAB_00100649:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return fVar10;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
PopulationCost(undefined8 param_1,undefined8 param_2,undefined4 *param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
  float fVar3;
  float fVar4;
  float local_58;
  uint local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (*_VP8LGetEntropyUnrefined)(param_1,param_2,&local_58,&local_38);
  if (param_3 != (undefined4 *)0x0) {
    uVar1 = 0xffffffff;
    if (local_50 == 1) {
      uVar1 = local_48;
    }
    *param_3 = uVar1;
  }
  *(bool *)param_4 = local_28 != 0 || local_24 != 0;
  fVar4 = _LC1;
  fVar3 = _LC0;
  if (local_50 < 5) {
    if (local_50 < 2) {
      fVar4 = 0.0;
      goto LAB_00100795;
    }
    if (local_50 == 2) {
      fVar4 = local_58 * __LC12 + (float)local_54 * __LC11;
      goto LAB_00100795;
    }
    fVar4 = _LC3;
    fVar3 = _LC2;
    if (local_50 != 3) {
      fVar4 = _LC5;
      fVar3 = _LC4;
    }
  }
  fVar4 = fVar3 * local_58 + (((float)local_54 + (float)local_54) - (float)local_4c) * fVar4;
  if (fVar4 <= local_58) {
    fVar4 = local_58;
  }
LAB_00100795:
  auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar2._0_4_ = (float)local_28 * __LC10 +
                 (float)local_30 * __LC15 +
                 (float)local_34 * __LC13 + (float)local_24 * __LC14 +
                 (float)local_38 * __LC8 + (float)local_2c * __LC7 + __LC9 + fVar4;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return auVar2._0_8_;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void UpdateHistogramCost(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  uint local_2c;
  uint local_28;
  uint local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = (float)PopulationCost(param_1 + 0x101,0x100,&local_2c,(long)param_1 + 0xcc3);
  fVar5 = (float)PopulationCost(param_1 + 0x181,0x28,0,(long)param_1 + 0xcc4);
  uVar1 = (*_VP8LExtraCost)(param_1 + 0x181,0x28);
  iVar3 = 0x118;
  if (0 < (int)param_1[0x195]) {
    iVar3 = (1 << ((byte)(int)param_1[0x195] & 0x1f)) + 0x118;
  }
  fVar6 = (float)PopulationCost(*param_1,iVar3,0,param_1 + 0x198);
  uVar2 = (*_VP8LExtraCost)(*param_1 + 0x400,0x18);
  *(float *)((long)param_1 + 0xcb4) = (float)uVar2 + fVar6;
  uVar7 = PopulationCost(param_1 + 1,0x100,&local_28,(long)param_1 + 0xcc1);
  *(undefined4 *)(param_1 + 0x197) = uVar7;
  fVar6 = (float)PopulationCost(param_1 + 0x81,0x100,&local_24,(long)param_1 + 0xcc2);
  *(float *)((long)param_1 + 0xcbc) = fVar6;
  uVar2 = local_2c | local_28 | local_24;
  *(float *)(param_1 + 0x196) =
       *(float *)((long)param_1 + 0xcb4) + *(float *)(param_1 + 0x197) + fVar6 + fVar4 +
       fVar5 + (float)uVar1;
  if (uVar2 != 0xffffffff) {
    uVar2 = local_2c << 0x18 | local_28 << 0x10 | local_24;
  }
  *(uint *)((long)param_1 + 0xcac) = uVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void HistogramCombineEntropyBin
               (float param_1,int *param_2,int *param_3,long param_4,undefined2 *param_5,
               long param_6,long param_7,int param_8,int param_9)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ushort *puVar6;
  ushort *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  long local_198;
  float local_14c;
  ushort local_148 [132];
  long local_40;
  
  lVar3 = *(long *)(param_2 + 2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = local_148;
  do {
    puVar7 = puVar6 + 2;
    *puVar6 = 0xffff;
    puVar6[1] = 0;
    puVar6 = puVar7;
  } while (puVar7 != local_148 + (long)param_8 * 2);
  uVar11 = (ulong)*param_3;
  uVar8 = 0;
  if (0 < *param_3) {
    if ((uVar11 & 1) != 0) {
      uVar8 = 1;
      *param_5 = 0;
      if (uVar11 == 1) goto LAB_00100ae5;
    }
    do {
      param_5[uVar8] = (short)uVar8;
      lVar9 = uVar8 + 1;
      uVar8 = uVar8 + 2;
      param_5[lVar9] = (short)lVar9;
    } while (uVar11 != uVar8);
  }
LAB_00100ae5:
  uVar8 = 0;
  local_198 = param_6;
  if (0 < *param_2) {
    do {
      while( true ) {
        lVar9 = *(long *)(lVar3 + uVar8 * 8);
        if (lVar9 == 0) goto LAB_00100b7d;
        uVar11 = (ulong)*(ushort *)(param_7 + uVar8 * 2);
        lVar10 = (long)(short)local_148[uVar11 * 2];
        if (local_148[uVar11 * 2] == 0xffff) break;
        plVar1 = (long *)(lVar3 + lVar10 * 8);
        lVar4 = *plVar1;
        if (param_9 == 0) {
          local_14c = 0.0;
          fVar12 = *(float *)(lVar9 + 0xcb0) + *(float *)(lVar4 + 0xcb0);
          fVar13 = (float)((uint)*(float *)(lVar9 + 0xcb0) ^ __LC17) * param_1;
          iVar5 = GetCombinedHistogramEntropy(fVar13 + fVar12,lVar4,lVar9,&local_14c);
          if (iVar5 != 0) {
            VP8LHistogramAdd(lVar4,lVar9,local_198);
            iVar5 = *(int *)(lVar9 + 0xcac);
            if (*(int *)(lVar4 + 0xcac) != iVar5) {
              iVar5 = -1;
            }
            *(int *)(local_198 + 0xcac) = iVar5;
            uVar2 = *(undefined4 *)(lVar4 + 0xca8);
            *(float *)(local_198 + 0xcb0) = local_14c;
            *(undefined4 *)(local_198 + 0xca8) = uVar2;
          }
          if (local_14c - fVar12 < fVar13) {
            if (*(int *)(local_198 + 0xcac) == -1) {
              if ((*(int *)(*(long *)(lVar3 + uVar8 * 8) + 0xcac) != -1) ||
                 (lVar9 = *plVar1, *(int *)(lVar9 + 0xcac) != -1)) {
                if (local_148[uVar11 * 2 + 1] < 0x20) {
                  local_148[uVar11 * 2 + 1] = local_148[uVar11 * 2 + 1] + 1;
                  goto LAB_00100b7d;
                }
                goto LAB_00100ce0;
              }
            }
            else {
LAB_00100ce0:
              lVar9 = *plVar1;
            }
            *plVar1 = local_198;
            HistogramSetRemoveHistogram(param_2,(int)uVar8,param_3);
            param_5[*(ushort *)(param_4 + uVar8 * 2)] = *(undefined2 *)(param_4 + lVar10 * 2);
            local_198 = lVar9;
          }
        }
        else {
          VP8LHistogramAdd(lVar9,lVar4,lVar4);
          iVar5 = *(int *)(lVar4 + 0xcac);
          if (*(int *)(lVar9 + 0xcac) != iVar5) {
            iVar5 = -1;
          }
          *(int *)(lVar4 + 0xcac) = iVar5;
          HistogramSetRemoveHistogram(param_2,uVar8 & 0xffffffff,param_3);
          param_5[*(ushort *)(param_4 + uVar8 * 2)] = *(undefined2 *)(param_4 + lVar10 * 2);
        }
LAB_00100b7d:
        iVar5 = *param_2;
        uVar8 = uVar8 + 1;
        if (iVar5 <= (int)uVar8) goto LAB_00100bbe;
      }
      iVar5 = *param_2;
      local_148[uVar11 * 2] = (ushort)uVar8;
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < iVar5);
LAB_00100bbe:
    if ((param_9 != 0) && (0 < iVar5)) {
      lVar9 = 0;
      do {
        if (*(long *)(lVar3 + lVar9 * 8) != 0) {
          UpdateHistogramCost();
        }
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < *param_2);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



int VP8LGetHistogramSize(int param_1)

{
  int iVar1;
  
  iVar1 = 0x1128;
  if (0 < param_1) {
    iVar1 = (1 << ((byte)param_1 & 0x1f)) * 4 + 0x1128;
  }
  return iVar1;
}



void VP8LFreeHistogram(void)

{
  WebPSafeFree();
  return;
}



void VP8LFreeHistogramSet(void)

{
  WebPSafeFree();
  return;
}



void VP8LHistogramInit(long param_1,undefined4 param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0xca8) = param_2;
  if (param_3 != 0) {
    HistogramClear();
    return;
  }
  *(undefined1 *)(param_1 + 0xcc4) = 0;
  *(undefined4 *)(param_1 + 0xcac) = 0;
  *(undefined4 *)(param_1 + 0xcc0) = 0;
  *(undefined1 (*) [16])(param_1 + 0xcb0) = (undefined1  [16])0x0;
  return;
}



void VP8LAllocateHistogram(int param_1)

{
  long *plVar1;
  long lVar2;
  
  lVar2 = 0x1128;
  if (0 < param_1) {
    lVar2 = (long)((1 << ((byte)param_1 & 0x1f)) * 4 + 0x1128);
  }
  plVar1 = (long *)WebPSafeMalloc(lVar2,1);
  if (plVar1 != (long *)0x0) {
    *(int *)(plVar1 + 0x195) = param_1;
    *plVar1 = (long)(plVar1 + 0x199);
    *(undefined4 *)((long)plVar1 + 0xcac) = 0;
    *(undefined4 *)(plVar1 + 0x198) = 0;
    *(undefined1 *)((long)plVar1 + 0xcc4) = 0;
    *(undefined1 (*) [16])(plVar1 + 0x196) = (undefined1  [16])0x0;
  }
  return;
}



undefined8 * VP8LAllocateHistogramSet(int param_1,int param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = 0x114f;
  if (0 < param_2) {
    lVar3 = (long)((1 << ((byte)param_2 & 0x1f)) * 4 + 0x1128) + 0x27;
  }
  puVar2 = (undefined8 *)WebPSafeMalloc(lVar3 * param_1 + 0x10,1);
  if (puVar2 != (undefined8 *)0x0) {
    puVar4 = puVar2 + 2;
    puVar2[1] = puVar4;
    *puVar2 = CONCAT44(param_1,param_1);
    HistogramSetResetPointers_isra_0(param_1,puVar4,param_2);
    if (0 < param_1) {
      lVar3 = 0;
      while( true ) {
        lVar1 = *(long *)((long)puVar4 + lVar3);
        lVar3 = lVar3 + 8;
        *(int *)(lVar1 + 0xca8) = param_2;
        *(undefined4 *)(lVar1 + 0xcac) = 0;
        *(undefined4 *)(lVar1 + 0xcc0) = 0;
        *(undefined1 *)(lVar1 + 0xcc4) = 0;
        *(undefined1 (*) [16])(lVar1 + 0xcb0) = (undefined1  [16])0x0;
        if (lVar3 == (long)param_1 * 8) break;
        puVar4 = (undefined8 *)puVar2[1];
      }
    }
  }
  return puVar2;
}



void VP8LHistogramSetClear(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  
  lVar5 = 0x114f;
  iVar3 = *(int *)((long)param_1 + 4);
  iVar4 = *(int *)(*(long *)param_1[1] + 0xca8);
  if (0 < iVar4) {
    lVar5 = (long)((1 << ((byte)iVar4 & 0x1f)) * 4 + 0x1128) + 0x27;
  }
  memset(param_1,0,lVar5 * iVar3 + 0x10);
  param_1[1] = param_1 + 2;
  *param_1 = CONCAT44(iVar3,iVar3);
  HistogramSetResetPointers_isra_0(iVar3,param_1 + 2,iVar4);
  puVar2 = param_1 + iVar3;
  if (0 < iVar3) {
    do {
      plVar1 = param_1 + 2;
      param_1 = param_1 + 1;
      *(int *)(*plVar1 + 0xca8) = iVar4;
    } while (param_1 != puVar2);
  }
  return;
}



void VP8LHistogramAddSinglePixOrCopy(long *param_1,char *param_2,code *param_3,undefined4 param_4)

{
  int *piVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  
  lVar3 = *param_1;
  if (*param_2 == '\0') {
    uVar4 = *(uint *)(param_2 + 4);
    piVar1 = (int *)((long)param_1 + (ulong)(uVar4 >> 0x18) * 4 + 0x808);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)((long)param_1 + (ulong)(uVar4 >> 0x10 & 0xff) * 4 + 8);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)(lVar3 + (ulong)(uVar4 >> 8 & 0xff) * 4);
    *piVar1 = *piVar1 + 1;
    piVar1 = (int *)((long)param_1 + (ulong)(byte)param_2[4] * 4 + 0x408);
    *piVar1 = *piVar1 + 1;
    return;
  }
  if (*param_2 != '\x01') {
    uVar2 = *(ushort *)(param_2 + 2);
    if (uVar2 < 0x200) {
      iVar5 = (int)(char)(&kPrefixEncodeCode)[(ulong)uVar2 * 2];
    }
    else {
      uVar4 = uVar2 - 1;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = ((int)uVar4 >> ((char)iVar5 - 1U & 0x1f) & 1U) + iVar5 * 2;
    }
    piVar1 = (int *)(lVar3 + (long)(iVar5 + 0x100) * 4);
    *piVar1 = *piVar1 + 1;
    if (param_3 == (code *)0x0) {
      iVar5 = *(int *)(param_2 + 4);
    }
    else {
      iVar5 = (*param_3)(param_4,*(undefined4 *)(param_2 + 4));
    }
    if (iVar5 < 0x200) {
      iVar5 = (int)(char)(&kPrefixEncodeCode)[(long)iVar5 * 2];
    }
    else {
      uVar4 = iVar5 - 1;
      iVar5 = 0x1f;
      if (uVar4 != 0) {
        for (; uVar4 >> iVar5 == 0; iVar5 = iVar5 + -1) {
        }
      }
      iVar5 = ((int)uVar4 >> ((char)iVar5 - 1U & 0x1f) & 1U) + iVar5 * 2;
    }
    piVar1 = (int *)((long)param_1 + (long)iVar5 * 4 + 0xc08);
    *piVar1 = *piVar1 + 1;
    return;
  }
  piVar1 = (int *)(lVar3 + (long)(*(int *)(param_2 + 4) + 0x118) * 4);
  *piVar1 = *piVar1 + 1;
  return;
}



void VP8LHistogramStoreRefs(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  long local_38 [2];
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  VP8LRefsCursorInit(local_38,param_1);
  while (local_38[0] != 0) {
    do {
      VP8LHistogramAddSinglePixOrCopy(param_2,local_38[0],0,0);
      local_38[0] = local_38[0] + 8;
    } while (local_38[0] != local_28);
    VP8LRefsCursorNextBlock(local_38);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



void VP8LHistogramCreate(long param_1,undefined8 param_2,int param_3)

{
  if (-1 < param_3) {
    *(int *)(param_1 + 0xca8) = param_3;
  }
  HistogramClear(param_1);
  VP8LHistogramStoreRefs(param_2,param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8LBitsEntropy(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined4 local_28 [6];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  VP8LBitsEntropyUnrefined(param_1,param_2,local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 VP8LHistogramEstimateBits(long *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auVar9 [16];
  
  iVar3 = 0x118;
  if (0 < (int)param_1[0x195]) {
    iVar3 = (1 << ((byte)(int)param_1[0x195] & 0x1f)) + 0x118;
  }
  fVar4 = (float)PopulationCost(*param_1,iVar3,0,param_1 + 0x198);
  fVar5 = (float)PopulationCost(param_1 + 1,0x100,0,(long)param_1 + 0xcc1);
  fVar6 = (float)PopulationCost(param_1 + 0x81,0x100,0,(long)param_1 + 0xcc2);
  fVar7 = (float)PopulationCost(param_1 + 0x101,0x100,0,(long)param_1 + 0xcc3);
  fVar8 = (float)PopulationCost(param_1 + 0x181,0x28,0,(long)param_1 + 0xcc4);
  uVar1 = (*_VP8LExtraCost)(*param_1 + 0x400,0x18);
  uVar2 = (*_VP8LExtraCost)(param_1 + 0x181,0x28);
  auVar9._4_12_ = SUB1612((undefined1  [16])0x0,4);
  auVar9._0_4_ = (float)uVar2 + fVar8 + fVar6 + fVar4 + fVar5 + fVar7 + (float)uVar1;
  return auVar9._0_8_;
}



/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool VP8LGetHistoImageSymbols
               (int param_1,int param_2,undefined8 param_3,int param_4,int param_5,int param_6,
               undefined4 param_7,int *param_8,undefined8 param_9,ushort *param_10,long param_11,
               int param_12,int *param_13)

{
  ushort *puVar1;
  float fVar2;
  void *__dest;
  undefined8 *__src;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  float fVar5;
  undefined8 uVar6;
  byte bVar7;
  bool bVar8;
  double dVar9;
  ushort uVar10;
  long lVar11;
  void *__s;
  undefined8 *puVar12;
  long *plVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  ushort *puVar18;
  short sVar19;
  ushort uVar20;
  long lVar21;
  ushort uVar22;
  int iVar23;
  uint uVar24;
  size_t __n;
  ulong uVar25;
  long *plVar26;
  int iVar27;
  size_t __n_00;
  undefined1 (*pauVar28) [16];
  uint uVar29;
  ulong uVar30;
  int *__src_00;
  int iVar31;
  int *piVar32;
  long lVar33;
  ulong uVar34;
  bool bVar35;
  int iVar36;
  int iVar37;
  uint uVar38;
  int iVar39;
  ulong uVar40;
  int iVar41;
  int iVar42;
  long in_FS_OFFSET;
  int iVar44;
  undefined1 auVar43 [16];
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  long *local_e0;
  uint local_c0;
  uint local_a0;
  ulong local_98;
  long local_78;
  uint local_5c;
  int *local_58;
  undefined8 local_50;
  int *local_48;
  long local_40;
  
  bVar7 = (byte)param_6;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar23 = 0;
  if (param_6 == 0) {
    local_78 = 2;
    lVar33 = 2;
    local_c0 = 1;
  }
  else {
    iVar23 = 1 << (bVar7 & 0x1f);
    local_c0 = ((uint)(iVar23 + -1 + param_1) >> (bVar7 & 0x1f)) *
               ((uint)(iVar23 + -1 + param_2) >> (bVar7 & 0x1f));
    lVar33 = (long)(int)(local_c0 * 2);
    local_78 = (long)(int)local_c0 * 2;
  }
  lVar11 = VP8LAllocateHistogramSet(local_c0,param_7,iVar23);
  iVar23 = (-(uint)(param_5 == 0) & 0x3c) + 4;
  __s = (void *)WebPSafeMalloc(lVar33,2);
  local_5c = local_c0;
  if (lVar11 == 0 || __s == (void *)0x0) goto LAB_00101abb;
  iVar39 = 0;
  iVar36 = 0;
  lVar33 = *(long *)(lVar11 + 8);
  VP8LRefsCursorInit(&local_58,param_3);
  VP8LHistogramSetClear(lVar11);
  while (local_58 != (int *)0x0) {
    do {
      piVar14 = local_58;
      VP8LHistogramAddSinglePixOrCopy
                (*(undefined8 *)
                  (lVar33 + (long)(int)((iVar36 >> (bVar7 & 0x1f)) *
                                        ((uint)(param_1 + -1 + (1 << (bVar7 & 0x1f))) >>
                                        (bVar7 & 0x1f)) + (iVar39 >> (bVar7 & 0x1f))) * 8),local_58,
                 0 >> (bVar7 & 0x1f),0);
      for (iVar39 = iVar39 + (uint)*(ushort *)((long)piVar14 + 2); param_1 <= iVar39;
          iVar39 = iVar39 - param_1) {
        iVar36 = iVar36 + 1;
      }
      local_58 = local_58 + 2;
    } while (local_58 != local_48);
    VP8LRefsCursorNextBlock(&local_58);
  }
  uVar34 = 0;
  uVar22 = 0;
  local_58 = (int *)(ulong)local_c0;
  local_e0 = *(long **)(param_8 + 2);
  lVar33 = *(long *)(lVar11 + 8);
  if (0 < *(int *)(lVar11 + 4)) {
    do {
      __src = *(undefined8 **)(lVar33 + uVar34 * 8);
      UpdateHistogramCost(__src);
      if ((*(int *)(__src + 0x198) == 0) && (*(char *)((long)__src + 0xcc4) == '\0')) {
        HistogramSetRemoveHistogram(param_8,uVar34 & 0xffffffff,&local_5c);
        HistogramSetRemoveHistogram(lVar11);
        uVar10 = 0xffff;
      }
      else {
        puVar12 = (undefined8 *)local_e0[uVar34];
        __dest = (void *)*puVar12;
        if (*(int *)(puVar12 + 0x195) < 1) {
          __n_00 = 0x460;
          __n = 0x1128;
        }
        else {
          lVar15 = (long)(1 << ((byte)*(int *)(puVar12 + 0x195) & 0x1f)) * 4;
          __n = (size_t)((int)lVar15 + 0x1128);
          __n_00 = lVar15 + 0x460;
        }
        puVar12 = (undefined8 *)memcpy(puVar12,__src,__n);
        *puVar12 = __dest;
        memcpy(__dest,(void *)*__src,__n_00);
        uVar10 = uVar22;
        uVar22 = uVar22 + 1;
      }
      param_10[uVar34] = uVar10;
      uVar34 = uVar34 + 1;
    } while ((int)uVar34 < *(int *)(lVar11 + 4));
    local_e0 = *(long **)(param_8 + 2);
    local_c0 = local_5c;
  }
  dVar9 = _LC24;
  if ((iVar23 * 2 < (int)local_c0) && (param_4 < 100)) {
    iVar36 = *param_8;
    if (0 < iVar36) {
      fVar49 = 0.0;
      fVar48 = 0.0;
      fVar46 = 0.0;
      plVar13 = local_e0;
      fVar45 = _LC22;
      fVar47 = _LC22;
      fVar52 = _LC22;
      do {
        lVar33 = *plVar13;
        fVar2 = fVar47;
        if (lVar33 != 0) {
          fVar50 = *(float *)(lVar33 + 0xcb4);
          fVar2 = *(float *)(lVar33 + 0xcbc);
          fVar51 = *(float *)(lVar33 + 0xcb8);
          fVar5 = fVar50;
          if (fVar45 <= fVar50) {
            fVar5 = fVar45;
          }
          if (fVar50 <= fVar46) {
            fVar50 = fVar46;
          }
          fVar46 = fVar51;
          if (fVar52 <= fVar51) {
            fVar46 = fVar52;
          }
          if (fVar51 <= fVar48) {
            fVar51 = fVar48;
          }
          fVar52 = fVar2;
          if (fVar2 <= fVar49) {
            fVar52 = fVar49;
          }
          fVar45 = fVar5;
          fVar48 = fVar51;
          fVar49 = fVar52;
          fVar52 = fVar46;
          fVar46 = fVar50;
          if (fVar47 <= fVar2) {
            fVar2 = fVar47;
          }
        }
        fVar47 = fVar2;
        plVar13 = plVar13 + 1;
      } while (local_e0 + iVar36 != plVar13);
      lVar33 = 0;
      do {
        lVar15 = local_e0[lVar33];
        if (lVar15 != 0) {
          sVar19 = 0;
          if (0.0 < fVar46 - fVar45) {
            sVar19 = (short)(int)(((double)(*(float *)(lVar15 + 0xcb4) - fVar45) * dVar9) /
                                 (double)(fVar46 - fVar45));
          }
          if (param_5 == 0) {
            sVar19 = sVar19 * 4;
            if (0.0 < fVar48 - fVar52) {
              sVar19 = sVar19 + (short)(int)(((double)(*(float *)(lVar15 + 0xcb8) - fVar52) * dVar9)
                                            / (double)(fVar48 - fVar52));
            }
            sVar19 = sVar19 * 4;
            if (0.0 < fVar49 - fVar47) {
              sVar19 = sVar19 + (short)(int)(((double)(*(float *)(lVar15 + 0xcbc) - fVar47) * dVar9)
                                            / (double)(fVar49 - fVar47));
            }
          }
          *(short *)((long)__s + lVar33 * 2) = sVar19;
        }
        lVar33 = lVar33 + 1;
      } while (iVar36 != lVar33);
    }
    local_78 = local_78 + (long)__s;
    HistogramCombineEntropyBin(param_8,&local_5c,param_10,local_78,param_9,__s,iVar23,param_5);
    do {
      lVar33 = 0;
      bVar35 = false;
      do {
        uVar22 = *(ushort *)(local_78 + lVar33 * 2);
        puVar18 = (ushort *)(local_78 + (ulong)uVar22 * 2);
        uVar10 = *puVar18;
        if (uVar22 != uVar10) {
          do {
            uVar22 = *(ushort *)(local_78 + (ulong)uVar10 * 2);
            *puVar18 = uVar22;
            puVar18 = (ushort *)(local_78 + (ulong)uVar22 * 2);
            uVar10 = *puVar18;
          } while (uVar10 != uVar22);
          if (uVar10 != *(ushort *)(local_78 + lVar33 * 2)) {
            *(ushort *)(local_78 + lVar33 * 2) = uVar10;
            bVar35 = true;
          }
        }
        lVar33 = lVar33 + 1;
      } while ((int)lVar33 < (int)local_c0);
    } while (bVar35);
    memset(__s,0,(long)param_8[1] * 2);
    uVar24 = param_8[1];
    if (0 < (int)uVar24) {
      uVar22 = 0;
      puVar18 = param_10;
      do {
        if (*puVar18 != 0xffff) {
          uVar10 = *(ushort *)(local_78 + (ulong)*puVar18 * 2);
          puVar1 = (ushort *)((long)__s + (ulong)uVar10 * 2);
          uVar20 = *puVar1;
          if ((uVar10 != 0) && (uVar20 == 0)) {
            uVar20 = uVar22 + 1;
            *puVar1 = uVar20;
            uVar22 = uVar20;
          }
          *puVar18 = uVar20;
        }
        puVar18 = puVar18 + 1;
      } while (param_10 + (int)uVar24 != puVar18);
    }
    local_e0 = *(long **)(param_8 + 2);
    local_c0 = local_5c;
    if (param_5 == 0) goto LAB_00101770;
  }
  else {
LAB_00101770:
    fVar45 = (float)param_4 / __LC25;
    iVar23 = (int)(fVar45 * fVar45 * fVar45 * __LC26 + __LC27);
    if (iVar23 <= (int)local_c0) {
      lVar33 = WebPSafeMalloc((long)(int)local_c0,4);
      if (lVar33 != 0) {
        local_50 = _LC28;
        local_58 = (int *)WebPSafeMalloc(10,0x10);
        if (local_58 != (int *)0x0) {
          lVar15 = 0;
          iVar36 = 0;
          if (0 < *param_8) {
            do {
              if (local_e0[lVar15] != 0) {
                lVar21 = (long)iVar36;
                iVar36 = iVar36 + 1;
                *(int *)(lVar33 + lVar21 * 4) = (int)lVar15;
              }
              lVar15 = lVar15 + 1;
            } while ((int)lVar15 < *param_8);
          }
          if (0 < (int)local_c0) {
            local_a0 = 0;
            iVar36 = 0;
            uVar34 = 1;
            uVar40 = (ulong)(int)local_c0;
            do {
              iVar36 = iVar36 + 1;
              if ((int)local_c0 >> 1 <= iVar36) {
LAB_001020d3:
                local_c0 = (uint)uVar40;
                goto LAB_001020e6;
              }
              iVar39 = (int)uVar40;
              if ((int)local_50 == 0) {
                uVar24 = (uint)(uVar40 >> 0x1f);
                if (1 < iVar39) {
LAB_00101c25:
                  uVar29 = iVar39 - 1;
                  iVar37 = (int)((uVar24 & 1) + iVar39) >> 1;
                  iVar41 = 0;
                  do {
                    while( true ) {
                      uVar34 = uVar34 * 0xbc8f;
                      auVar4._8_8_ = 0;
                      auVar4._0_8_ = uVar34;
                      lVar15 = SUB168(ZEXT816(0x200000005) * auVar4,8);
                      uVar40 = lVar15 + (uVar34 - lVar15 >> 1) >> 0x1e;
                      uVar38 = (int)uVar34 - ((int)(uVar40 << 0x1f) - (int)uVar40);
                      uVar34 = (ulong)uVar38;
                      uVar25 = uVar34 % (ulong)(uVar29 * iVar39);
                      uVar40 = uVar25 / uVar29;
                      uVar24 = (uint)(uVar25 % (ulong)uVar29);
                      fVar45 = (float)HistoQueuePush(&local_58,local_e0,
                                                     *(undefined4 *)(lVar33 + uVar40 * 4),
                                                     *(undefined4 *)
                                                      (lVar33 + (ulong)((uVar24 + 1) -
                                                                       (uint)(uVar24 < (uint)uVar40)
                                                                       ) * 4));
                      if (0.0 <= fVar45) break;
                      iVar27 = local_50._4_4_;
                      if (((int)local_50 == local_50._4_4_) ||
                         (iVar41 = iVar41 + 1, iVar27 = (int)local_50, iVar37 <= iVar41))
                      goto LAB_00101d0f;
                    }
                    iVar41 = iVar41 + 1;
                    iVar27 = (int)local_50;
                  } while (iVar41 < iVar37);
LAB_00101d0f:
                  uVar34 = (ulong)uVar38;
                  uVar40 = (ulong)iVar39;
                  if (iVar27 != 0) goto LAB_00101d1f;
                }
              }
              else {
                uVar24 = (uint)(uVar40 >> 0x1f);
                iVar27 = (int)local_50;
                if (1 < iVar39) goto LAB_00101c25;
LAB_00101d1f:
                piVar14 = local_58;
                iVar36 = *local_58;
                iVar39 = local_58[1];
                uVar25 = 0;
                uVar16 = uVar40;
                while (uVar30 = uVar16, uVar25 < uVar30) {
                  while( true ) {
                    uVar16 = uVar30 + uVar25 >> 1;
                    piVar32 = (int *)(lVar33 + uVar16 * 4);
                    if (iVar39 - *piVar32 < 0) break;
                    if (iVar39 == *piVar32) {
                      __src_00 = piVar32 + 1;
                      goto LAB_00101d5f;
                    }
                    uVar25 = uVar16 + 1;
                    if (uVar30 <= uVar25) goto LAB_00101d58;
                  }
                }
LAB_00101d58:
                __src_00 = (int *)0x4;
                piVar32 = (int *)0x0;
LAB_00101d5f:
                memmove(piVar32,__src_00,(uVar40 - ((long)piVar32 - lVar33 >> 2)) * 4 - 4);
                plVar13 = local_e0 + iVar36;
                lVar15 = *plVar13;
                lVar21 = local_e0[iVar39];
                VP8LHistogramAdd(lVar21,lVar15,lVar15);
                iVar37 = *(int *)(lVar15 + 0xcac);
                if (*(int *)(lVar21 + 0xcac) != iVar37) {
                  iVar37 = -1;
                }
                iVar41 = piVar14[3];
                iVar42 = 0;
                *(int *)(lVar15 + 0xcac) = iVar37;
                *(int *)(*plVar13 + 0xcb0) = iVar41;
                HistogramSetRemoveHistogram(param_8,iVar39,&local_5c);
                if (0 < iVar27) {
                  do {
                    while( true ) {
                      pauVar28 = (undefined1 (*) [16])(piVar14 + (long)iVar42 * 4);
                      iVar37 = *(int *)*pauVar28;
                      iVar31 = (int)*(undefined8 *)*pauVar28;
                      iVar41 = *(int *)(*pauVar28 + 4);
                      plVar17 = plVar13;
                      if ((iVar39 == iVar41) || (iVar36 == iVar41)) break;
                      iVar44 = (int)((ulong)*(undefined8 *)*pauVar28 >> 0x20);
                      if (iVar36 == iVar37 || iVar39 == iVar37) {
                        plVar26 = local_e0 + iVar44;
                        if (iVar44 < iVar36) {
                          *(ulong *)*pauVar28 = CONCAT44(iVar36,iVar41);
                        }
                        else {
                          *(int *)*pauVar28 = iVar36;
                          plVar17 = plVar26;
                          plVar26 = plVar13;
                        }
                        goto LAB_00101f00;
                      }
                      if (iVar44 < iVar31) {
                        *(ulong *)*pauVar28 = CONCAT44(iVar31,iVar44);
                        fVar45 = *(float *)(*pauVar28 + 8);
                      }
                      else {
                        fVar45 = *(float *)(*pauVar28 + 8);
                      }
LAB_00101e68:
                      fVar48 = (float)piVar14[2];
                      if (fVar45 < fVar48) {
                        uVar3 = *(undefined8 *)piVar14;
                        uVar6 = *(undefined8 *)(*pauVar28 + 8);
                        iVar27 = piVar14[3];
                        *(undefined8 *)piVar14 = *(undefined8 *)*pauVar28;
                        *(undefined8 *)(piVar14 + 2) = uVar6;
                        *(undefined8 *)*pauVar28 = uVar3;
                        *(ulong *)(*pauVar28 + 8) = CONCAT44(iVar27,fVar48);
                      }
                      iVar42 = iVar42 + 1;
                      iVar27 = (int)local_50;
LAB_00101e9c:
                      if (iVar27 <= iVar42) goto LAB_00101f92;
                    }
                    if (iVar36 == iVar37 || iVar39 == iVar37) {
                      lVar15 = (long)iVar27;
                      iVar27 = iVar27 + -1;
                      uVar3 = *(undefined8 *)(piVar14 + lVar15 * 4 + -4 + 2);
                      *(undefined8 *)*pauVar28 = *(undefined8 *)(piVar14 + lVar15 * 4 + -4);
                      *(undefined8 *)(*pauVar28 + 8) = uVar3;
                      local_50 = CONCAT44(local_50._4_4_,iVar27);
                      goto LAB_00101e9c;
                    }
                    if (iVar36 < iVar31) {
                      *(ulong *)*pauVar28 = CONCAT44(iVar37,iVar36);
                      plVar17 = local_e0 + iVar31;
                      plVar26 = plVar13;
                    }
                    else {
                      *(int *)(*pauVar28 + 4) = iVar36;
                      plVar26 = local_e0 + iVar31;
                    }
LAB_00101f00:
                    lVar15 = *plVar26;
                    lVar21 = *plVar17;
                    fVar45 = *(float *)(lVar15 + 0xcb0) + *(float *)(lVar21 + 0xcb0);
                    *(undefined4 *)(*pauVar28 + 0xc) = 0;
                    auVar43._4_12_ = SUB1612((undefined1  [16])0x0,4);
                    auVar43._0_4_ = fVar45 + 0.0;
                    GetCombinedHistogramEntropy(auVar43._0_8_,lVar15,lVar21,*pauVar28 + 0xc);
                    fVar45 = *(float *)(*pauVar28 + 0xc) - fVar45;
                    *(float *)(*pauVar28 + 8) = fVar45;
                    if (fVar45 < 0.0) goto LAB_00101e68;
                    lVar15 = (long)iVar27;
                    iVar27 = iVar27 + -1;
                    *pauVar28 = *(undefined1 (*) [16])(piVar14 + lVar15 * 4 + -4);
                    local_50 = CONCAT44(local_50._4_4_,iVar27);
                  } while (iVar42 < iVar27);
                }
LAB_00101f92:
                uVar40 = (ulong)(int)local_5c;
                iVar36 = 0;
              }
              local_a0 = local_a0 + 1;
              if (local_a0 == local_c0) goto LAB_001020d3;
            } while (iVar23 <= (int)uVar40);
            WebPSafeFree(local_58);
            WebPSafeFree(lVar33);
LAB_00101fd6:
            local_e0 = *(long **)(param_8 + 2);
            goto LAB_001017ae;
          }
LAB_001020e6:
          WebPSafeFree(local_58);
          WebPSafeFree(lVar33);
          if ((int)local_c0 <= iVar23) goto LAB_00101fd6;
          goto LAB_00102105;
        }
        WebPSafeFree(0);
        WebPSafeFree(lVar33);
      }
LAB_00101abb:
      WebPEncodingSetError(param_11,1);
      goto LAB_00101aca;
    }
LAB_001017ae:
    iVar23 = *param_8;
    if (iVar23 < 1) {
      local_50 = 0;
      *param_8 = 0;
      piVar14 = (int *)WebPSafeMalloc(1);
      local_58 = piVar14;
      if (piVar14 == (int *)0x0) goto LAB_00101ab4;
    }
    else {
      plVar13 = local_e0;
      uVar34 = 0;
      do {
        uVar40 = uVar34;
        if (*plVar13 != 0) {
          uVar40 = (ulong)((int)uVar34 + 1);
          local_e0[uVar34] = *plVar13;
        }
        plVar13 = plVar13 + 1;
        uVar34 = uVar40;
      } while (plVar13 != local_e0 + iVar23);
      iVar23 = (int)uVar40;
      *param_8 = iVar23;
      local_50 = (ulong)(uint)(iVar23 * iVar23) << 0x20;
      local_58 = (int *)WebPSafeMalloc((long)(int)(iVar23 * iVar23 + 1));
      if (local_58 == (int *)0x0) {
LAB_00101ab4:
        WebPSafeFree(0);
        goto LAB_00101abb;
      }
      piVar14 = local_58;
      if (0 < iVar23) {
        lVar33 = 8;
        iVar39 = 0;
        plVar13 = *(long **)(param_8 + 2);
        iVar36 = 1;
        if (*plVar13 == 0) goto LAB_001018c2;
        while (lVar15 = lVar33, iVar27 = iVar36, iVar36 < iVar23) {
          do {
            if (*(long *)((long)plVar13 + lVar15) != 0) {
              HistoQueuePush(0,&local_58,local_e0,iVar39,iVar27);
              plVar13 = *(long **)(param_8 + 2);
            }
            iVar27 = iVar27 + 1;
            lVar15 = lVar15 + 8;
            lVar21 = lVar33;
          } while (iVar27 != iVar23);
          while( true ) {
            iVar39 = iVar36;
            lVar33 = lVar21 + 8;
            iVar36 = iVar39 + 1;
            if (*(long *)((long)plVar13 + lVar21) != 0) break;
LAB_001018c2:
            lVar21 = lVar33;
            if (iVar23 == iVar36) goto LAB_001018cb;
          }
        }
LAB_001018cb:
        piVar14 = local_58;
        if (0 < (int)local_50) {
          iVar23 = (int)local_50;
          do {
            iVar36 = *piVar14;
            iVar39 = piVar14[1];
            lVar33 = local_e0[iVar36];
            lVar15 = local_e0[iVar39];
            VP8LHistogramAdd(lVar15,lVar33,lVar33);
            iVar27 = *(int *)(lVar33 + 0xcac);
            if (*(int *)(lVar15 + 0xcac) != iVar27) {
              iVar27 = -1;
            }
            *(int *)(lVar33 + 0xcac) = iVar27;
            *(int *)(local_e0[iVar36] + 0xcb0) = piVar14[3];
            HistogramSetRemoveHistogram(param_8,iVar39,&local_5c);
            iVar27 = 0;
            bVar35 = false;
            do {
              while( true ) {
                bVar8 = bVar35;
                piVar32 = piVar14 + (long)iVar27 * 4;
                if (((iVar36 == *piVar32) || (iVar39 == *piVar32 || iVar36 == piVar32[1])) ||
                   (iVar39 == piVar32[1])) break;
                fVar45 = (float)piVar14[2];
                if ((float)piVar32[2] <= fVar45 && fVar45 != (float)piVar32[2]) {
                  uVar3 = *(undefined8 *)piVar14;
                  uVar6 = *(undefined8 *)(piVar32 + 2);
                  iVar37 = piVar14[3];
                  *(undefined8 *)piVar14 = *(undefined8 *)piVar32;
                  *(undefined8 *)(piVar14 + 2) = uVar6;
                  *(undefined8 *)piVar32 = uVar3;
                  *(ulong *)(piVar32 + 2) = CONCAT44(iVar37,fVar45);
                }
                iVar27 = iVar27 + 1;
                bVar35 = bVar8;
                if (iVar23 <= iVar27) goto LAB_001019f4;
              }
              lVar33 = (long)iVar23;
              iVar23 = iVar23 + -1;
              bVar8 = true;
              uVar3 = *(undefined8 *)(piVar14 + lVar33 * 4 + -4 + 2);
              *(undefined8 *)piVar32 = *(undefined8 *)(piVar14 + lVar33 * 4 + -4);
              *(undefined8 *)(piVar32 + 2) = uVar3;
              bVar35 = true;
            } while (iVar27 < iVar23);
LAB_001019f4:
            if (bVar8) {
              local_50 = CONCAT44(local_50._4_4_,iVar23);
            }
            if (0 < *param_8) {
              uVar34 = 0;
              do {
                if ((iVar36 != (int)uVar34) && (*(long *)(*(long *)(param_8 + 2) + uVar34 * 8) != 0)
                   ) {
                  HistoQueuePush(0,&local_58,*(long *)(param_8 + 2),iVar36,uVar34 & 0xffffffff);
                }
                uVar34 = uVar34 + 1;
                piVar14 = local_58;
              } while ((int)uVar34 < *param_8);
            }
            iVar23 = (int)local_50;
          } while (0 < (int)local_50);
        }
      }
    }
    WebPSafeFree(piVar14);
LAB_00102105:
    uVar24 = param_8[1];
    local_e0 = *(long **)(param_8 + 2);
  }
  iVar23 = *param_8;
  plVar13 = *(long **)(lVar11 + 8);
  if (iVar23 < 1) {
    local_98 = 0;
LAB_001022f0:
    if ((int)uVar24 < 1) {
      VP8LHistogramSetClear(param_8);
      *param_8 = (int)local_98;
    }
    else {
      memset(param_10,0,(ulong)uVar24 * 2);
LAB_0010225a:
      VP8LHistogramSetClear(param_8);
      *param_8 = (int)local_98;
      lVar33 = 0;
      do {
        lVar15 = plVar13[lVar33];
        if (lVar15 != 0) {
          lVar21 = local_e0[param_10[lVar33]];
          VP8LHistogramAdd(lVar15,lVar21,lVar21);
          iVar23 = *(int *)(lVar21 + 0xcac);
          if (*(int *)(lVar15 + 0xcac) != iVar23) {
            iVar23 = -1;
          }
          *(int *)(lVar21 + 0xcac) = iVar23;
        }
        lVar33 = lVar33 + 1;
      } while ((int)lVar33 < (int)uVar24);
    }
  }
  else {
    plVar17 = local_e0;
    uVar34 = 0;
    do {
      local_98 = uVar34;
      if (*plVar17 != 0) {
        local_98 = (ulong)((int)uVar34 + 1);
        local_e0[uVar34] = *plVar17;
      }
      plVar17 = plVar17 + 1;
      uVar34 = local_98;
    } while (plVar17 != local_e0 + iVar23);
    iVar23 = (int)local_98;
    *param_8 = iVar23;
    if (iVar23 < 2) goto LAB_001022f0;
    if (0 < (int)uVar24) {
      puVar18 = param_10 + -1;
      plVar17 = plVar13;
LAB_00102198:
      lVar33 = *plVar17;
      if (lVar33 != 0) {
        uVar40 = 0;
        uVar34 = 0;
        fVar45 = _LC22;
        do {
          local_58 = (int *)CONCAT44(local_58._4_4_,*(uint *)(local_e0[uVar40] + 0xcb0) ^ __LC17);
          GetCombinedHistogramEntropy(local_e0[uVar40],lVar33,&local_58);
          if (uVar40 == 0) {
            uVar40 = 1;
            uVar34 = 0;
            fVar45 = local_58._0_4_;
          }
          else {
            if (local_58._0_4_ < fVar45) {
              uVar34 = uVar40 & 0xffffffff;
              fVar45 = local_58._0_4_;
            }
            uVar40 = uVar40 + 1;
            if (uVar40 == local_98) goto LAB_00102230;
          }
          lVar33 = *plVar17;
        } while( true );
      }
      uVar22 = *puVar18;
      goto LAB_00102237;
    }
    VP8LHistogramSetClear(param_8);
    *param_8 = iVar23;
  }
  WebPReportProgress(param_11,param_12 + *param_13);
LAB_00101aca:
  WebPSafeFree(lVar11);
  WebPSafeFree(__s);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return *(int *)(param_11 + 0x88) == 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102230:
  uVar22 = (ushort)uVar34;
LAB_00102237:
  plVar17 = plVar17 + 1;
  puVar18[1] = uVar22;
  puVar18 = puVar18 + 1;
  if (plVar17 == plVar13 + (int)uVar24) goto LAB_0010225a;
  goto LAB_00102198;
}


