
void BackwardRefsSwap(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar2 = (undefined8 *)param_1[2];
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)param_2[2];
  uVar4 = *param_1;
  uVar6 = param_1[3];
  uVar7 = param_1[4];
  if (puVar3 == (undefined8 *)0x0) {
    uVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    uVar5 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar5;
    param_1[4] = param_2[4];
    *param_2 = uVar4;
    param_2[1] = uVar1;
    param_2[2] = puVar2;
    param_2[3] = uVar6;
    param_2[4] = uVar7;
  }
  else {
    uVar5 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    uVar5 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = uVar5;
    param_1[4] = param_2[4];
    *param_2 = uVar4;
    param_2[1] = uVar1;
    param_2[2] = puVar2;
    param_2[3] = uVar6;
    param_2[4] = uVar7;
    if (puVar3 == param_2 + 1) {
      param_1[2] = param_1 + 1;
    }
  }
  if (puVar2 != (undefined8 *)0x0 && puVar2 == param_1 + 1) {
    param_2[2] = param_2 + 1;
    return;
  }
  return;
}



void BackwardRefsNewBlock(int *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = *(undefined8 **)(param_1 + 6);
  if (puVar1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)WebPSafeMalloc(1,(long)*param_1 * 8 + 0x18);
    if (puVar1 == (undefined8 *)0x0) {
      param_1[1] = param_1[1] | 1;
      return;
    }
    puVar1[1] = puVar1 + 3;
  }
  else {
    *(undefined8 *)(param_1 + 6) = *puVar1;
  }
  **(undefined8 **)(param_1 + 4) = puVar1;
  *(undefined8 **)(param_1 + 4) = puVar1;
  *(undefined8 **)(param_1 + 8) = puVar1;
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  return;
}



undefined8 BackwardRefsClone_isra_0(long *param_1,long param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (*(undefined8 **)(param_2 + 0x10) != (undefined8 *)0x0) {
    **(undefined8 **)(param_2 + 0x10) = *(undefined8 *)(param_2 + 0x18);
  }
  *(undefined8 *)(param_2 + 0x20) = 0;
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  *(undefined8 *)(param_2 + 0x18) = uVar2;
  *(long *)(param_2 + 0x10) = param_2 + 8;
  if (param_1 != (long *)0x0) {
    do {
      lVar3 = BackwardRefsNewBlock(param_2);
      if (lVar3 == 0) {
        return 0;
      }
      memcpy(*(void **)(lVar3 + 8),(void *)param_1[1],(long)(int)param_1[2] << 3);
      plVar1 = param_1 + 2;
      param_1 = (long *)*param_1;
      *(int *)(lVar3 + 0x10) = (int)*plVar1;
    } while (param_1 != (long *)0x0);
  }
  return 1;
}



undefined8 CalculateBestCacheSize_isra_0(uint *param_1,int param_2,long *param_3,uint *param_4)

{
  ushort uVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  int *piVar9;
  long lVar10;
  long **pplVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  uint uVar15;
  long lVar16;
  char *pcVar17;
  float fVar18;
  uint uVar19;
  undefined8 uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  float fVar22;
  uint *local_1d8;
  byte local_1d0;
  char *local_1c0;
  long *local_1b8;
  undefined1 local_188 [16];
  undefined1 local_178 [12];
  undefined4 uStack_16c;
  undefined1 auStack_168 [12];
  long *local_158 [8];
  long alStack_118 [4];
  long local_f8 [23];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0x1a) {
    uVar15 = 0;
    local_178 = SUB1612((undefined1  [16])0x0,0);
    local_188 = (undefined1  [16])0x0;
    uStack_16c = 0;
    auStack_168 = SUB1612((undefined1  [16])0x0,4);
    if (param_3 != (long *)0x0) goto LAB_00100218;
LAB_0010032a:
    auStack_168 = SUB1612((undefined1  [16])0x0,4);
    uStack_16c = 0;
    local_178 = SUB1612((undefined1  [16])0x0,0);
    local_188 = (undefined1  [16])0x0;
    *param_4 = 0;
  }
  else {
    uVar15 = *param_4;
    local_178 = SUB1612((undefined1  [16])0x0,0);
    local_188 = (undefined1  [16])0x0;
    uStack_16c = 0;
    auStack_168 = SUB1612((undefined1  [16])0x0,4);
    if (param_3 == (long *)0x0) {
      local_1c0 = (char *)0x0;
      pcVar17 = (char *)0x0;
    }
    else {
LAB_00100218:
      pcVar17 = (char *)param_3[1];
      local_1c0 = pcVar17 + (long)(int)param_3[2] * 8;
    }
    auStack_168 = SUB1612((undefined1  [16])0x0,4);
    uStack_16c = 0;
    local_178 = SUB1612((undefined1  [16])0x0,0);
    local_188 = (undefined1  [16])0x0;
    pplVar11 = local_158;
    for (lVar7 = 0xb; lVar7 != 0; lVar7 = lVar7 + -1) {
      *pplVar11 = (long *)0x0;
      pplVar11 = pplVar11 + 1;
    }
    if (uVar15 == 0) goto LAB_0010032a;
    if (-1 < (int)uVar15) {
      uVar13 = 0;
      do {
        plVar5 = (long *)VP8LAllocateHistogram(uVar13 & 0xffffffff);
        local_158[uVar13] = plVar5;
        if (plVar5 == (long *)0x0) {
LAB_001002c5:
          uVar20 = 0;
          goto LAB_001002c8;
        }
        VP8LHistogramInit(plVar5,uVar13 & 0xffffffff,1);
        if (uVar13 != 0) {
          iVar3 = VP8LColorCacheInit(local_f8 + uVar13 * 2,uVar13 & 0xffffffff);
          *(int *)(local_188 + uVar13 * 4) = iVar3;
          if (iVar3 == 0) goto LAB_001002c5;
        }
        uVar13 = uVar13 + 1;
      } while ((int)uVar13 <= (int)uVar15);
      if (pcVar17 != (char *)0x0) goto LAB_00100378;
LAB_00100524:
      lVar7 = 0;
      fVar18 = _LC0;
      do {
        fVar22 = (float)VP8LHistogramEstimateBits(local_158[lVar7]);
        if ((lVar7 == 0) || (fVar22 < fVar18)) {
          *param_4 = (uint)lVar7;
          fVar18 = fVar22;
        }
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 <= (int)uVar15);
      uVar20 = 1;
LAB_001002c8:
      lVar7 = 0;
      do {
        if (*(int *)(local_188 + lVar7 * 4) != 0) {
          VP8LColorCacheClear(local_f8 + lVar7 * 2);
        }
        pplVar11 = local_158 + lVar7;
        lVar7 = lVar7 + 1;
        VP8LFreeHistogram(*pplVar11);
      } while ((int)lVar7 <= (int)uVar15);
      goto LAB_00100336;
    }
    local_158[0] = (long *)0x0;
    if (pcVar17 != (char *)0x0) {
LAB_00100378:
      lVar7 = (long)(int)uVar15;
      local_1d0 = 0x20 - (char)uVar15;
      local_1d8 = param_1;
      local_1b8 = param_3;
      do {
        do {
          uVar12 = *local_1d8;
          if (*pcVar17 == '\0') {
            uVar13 = (ulong)(uVar12 >> 0x10 & 0xff);
            piVar9 = (int *)((long)local_158[0] + (ulong)(uVar12 & 0xff) * 4 + 0x408);
            *piVar9 = *piVar9 + 1;
            lVar16 = (ulong)(uVar12 >> 8 & 0xff) * 4;
            piVar9 = (int *)(*local_158[0] + lVar16);
            *piVar9 = *piVar9 + 1;
            piVar9 = (int *)((long)local_158[0] + uVar13 * 4 + 8);
            *piVar9 = *piVar9 + 1;
            piVar9 = (int *)((long)local_158[0] + (ulong)(uVar12 >> 0x18) * 4 + 0x808);
            *piVar9 = *piVar9 + 1;
            lVar10 = lVar7;
            uVar4 = uVar12 * 0x1e35a7bd >> (local_1d0 & 0x1f);
            uVar19 = uVar15;
            while (0 < (int)uVar19) {
              while( true ) {
                puVar14 = (uint *)(local_f8[lVar10 * 2] + (ulong)uVar4 * 4);
                plVar5 = local_158[lVar10];
                lVar2 = *plVar5;
                if (*puVar14 != uVar12) break;
                lVar10 = lVar10 + -1;
                piVar9 = (int *)(lVar2 + (long)(int)(uVar4 + 0x118) * 4);
                *piVar9 = *piVar9 + 1;
                uVar4 = (int)uVar4 >> 1;
                if ((int)lVar10 < 1) goto LAB_001004d2;
              }
              lVar10 = lVar10 + -1;
              *puVar14 = uVar12;
              piVar9 = (int *)((long)plVar5 + ((ulong)(uVar12 & 0xff) + 0x100) * 4 + 8);
              *piVar9 = *piVar9 + 1;
              piVar9 = (int *)(lVar2 + lVar16);
              *piVar9 = *piVar9 + 1;
              piVar9 = (int *)((long)plVar5 + uVar13 * 4 + 8);
              *piVar9 = *piVar9 + 1;
              piVar9 = (int *)((long)plVar5 + ((ulong)(uVar12 >> 0x18) + 0x200) * 4 + 8);
              *piVar9 = *piVar9 + 1;
              uVar4 = (int)uVar4 >> 1;
              uVar19 = (uint)lVar10;
            }
LAB_001004d2:
            local_1d8 = local_1d8 + 1;
          }
          else {
            uVar1 = *(ushort *)(pcVar17 + 2);
            uVar4 = ~uVar12;
            if (uVar1 < 0x200) {
              uVar19 = uVar1 - 1;
              iVar3 = (int)(char)(&kPrefixEncodeCode)[(long)(int)(uint)uVar1 * 2];
            }
            else {
              uVar19 = uVar1 - 1;
              iVar3 = 0x1f;
              if (uVar19 != 0) {
                for (; uVar19 >> iVar3 == 0; iVar3 = iVar3 + -1) {
                }
              }
              iVar3 = ((int)uVar19 >> ((char)iVar3 - 1U & 0x1f) & 1U) + iVar3 * 2;
            }
            if (-1 < (int)uVar15) {
              pplVar11 = local_158;
              do {
                plVar5 = *pplVar11;
                pplVar11 = pplVar11 + 1;
                piVar9 = (int *)(*plVar5 + (long)(iVar3 + 0x100) * 4);
                *piVar9 = *piVar9 + 1;
              } while (pplVar11 != local_158 + (ulong)uVar15 + 1);
              uVar12 = *local_1d8;
            }
            puVar14 = local_1d8;
            while( true ) {
              bVar21 = uVar4 != uVar12;
              uVar4 = uVar12;
              if (bVar21) {
                uVar8 = uVar12 * 0x1e35a7bd >> (local_1d0 & 0x1f);
                if (0 < (int)uVar15) {
                  *(uint *)(local_f8[lVar7 * 2] + (ulong)uVar8 * 4) = uVar12;
                  plVar5 = alStack_118 + lVar7 * 2 + 2;
                  if (uVar15 != 1) {
                    do {
                      uVar8 = (int)uVar8 >> 1;
                      plVar6 = plVar5 + -2;
                      *(uint *)(*plVar5 + (long)(int)uVar8 * 4) = *puVar14;
                      plVar5 = plVar6;
                    } while (plVar6 != alStack_118 + lVar7 * 2 + (ulong)(uVar15 - 2) * -2);
                  }
                  uVar4 = *puVar14;
                }
              }
              if (puVar14 + 1 == local_1d8 + (ulong)(uVar1 - 1) + 1) break;
              puVar14 = puVar14 + 1;
              uVar12 = *puVar14;
            }
            local_1d8 = local_1d8 + (ulong)uVar19 + 1;
          }
          pcVar17 = pcVar17 + 8;
        } while (local_1c0 != pcVar17);
        local_1b8 = (long *)*local_1b8;
        if (local_1b8 == (long *)0x0) break;
        pcVar17 = (char *)local_1b8[1];
        local_1c0 = pcVar17 + (long)*(int *)(local_1b8 + 2) * 8;
      } while (pcVar17 != (char *)0x0);
      if (-1 < (int)uVar15) goto LAB_00100524;
    }
  }
  uVar20 = 1;
LAB_00100336:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar20;
}



int VP8LDistanceToPlaneCode(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_2 / param_1;
  iVar2 = param_2 % param_1;
  if ((iVar2 < 9) && (iVar1 < 8)) {
    return (byte)plane_to_code_lut[(iVar1 * 0x10 + 8) - iVar2] + 1;
  }
  if ((param_1 + -7 <= iVar2) && (iVar1 < 7)) {
    return (byte)plane_to_code_lut[iVar1 * 0x10 + 0x18 + (param_1 - iVar2)] + 1;
  }
  return param_2 + 0x78;
}



void BackwardReferences2DLocality_isra_0(uint param_1,long *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  char *pcVar3;
  ulong uVar4;
  
  uVar4 = (ulong)param_1;
  if (param_2 == (long *)0x0) {
    pcVar3 = (char *)0x0;
    pcVar2 = (char *)0x0;
    goto LAB_00100730;
  }
  do {
    pcVar2 = (char *)param_2[1];
    pcVar3 = pcVar2 + (long)(int)param_2[2] * 8;
LAB_00100730:
    do {
      if (pcVar2 == (char *)0x0) {
        return;
      }
      if (*pcVar2 == '\x02') {
        uVar1 = VP8LDistanceToPlaneCode(uVar4 & 0xffffffff,*(undefined4 *)(pcVar2 + 4));
        *(undefined4 *)(pcVar2 + 4) = uVar1;
      }
      pcVar2 = pcVar2 + 8;
    } while (pcVar3 != pcVar2);
    param_2 = (long *)*param_2;
  } while (param_2 != (long *)0x0);
  return;
}



void VP8LClearBackwardRefs(long param_1)

{
  undefined8 uVar1;
  
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  }
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(long *)(param_1 + 0x10) = param_1 + 8;
  return;
}



void VP8LBackwardRefsClear(long param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if (*(undefined8 **)(param_1 + 0x10) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  }
  puVar1 = *(undefined8 **)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(long *)(param_1 + 0x10) = param_1 + 8;
  *(undefined8 **)(param_1 + 0x18) = puVar1;
  *(undefined8 *)(param_1 + 8) = 0;
  while (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined8 *)*puVar1;
    WebPSafeFree(puVar1);
    *(undefined8 **)(param_1 + 0x18) = puVar2;
    puVar1 = puVar2;
  }
  return;
}



void VP8LBackwardRefsInit(int *param_1,int param_2)

{
  param_1[9] = 0;
  *(undefined1 (*) [16])(param_1 + 1) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 5) = (undefined1  [16])0x0;
  *(int **)(param_1 + 4) = param_1 + 2;
  if (param_2 < 0x100) {
    param_2 = 0x100;
  }
  *param_1 = param_2;
  return;
}



void VP8LRefsCursorInit(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(param_2 + 8);
  if (lVar1 == 0) {
    lVar3 = 0;
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(lVar1 + 8);
    lVar3 = lVar2 + (long)*(int *)(lVar1 + 0x10) * 8;
  }
  param_1[2] = lVar3;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  return;
}



void VP8LRefsCursorNextBlock(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)param_1[1];
  if (lVar1 == 0) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    lVar2 = *(long *)(lVar1 + 8);
    lVar3 = lVar2 + (long)*(int *)(lVar1 + 0x10) * 8;
  }
  param_1[2] = lVar3;
  *param_1 = lVar2;
  param_1[1] = lVar1;
  return;
}



void VP8LBackwardRefsCursorAdd(int *param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((lVar2 == 0) || (iVar1 = *(int *)(lVar2 + 0x10), iVar1 == *param_1)) {
    lVar2 = BackwardRefsNewBlock();
    if (lVar2 == 0) {
      return;
    }
    iVar1 = *(int *)(lVar2 + 0x10);
  }
  *(int *)(lVar2 + 0x10) = iVar1 + 1;
  *(undefined8 *)(*(long *)(lVar2 + 8) + (long)iVar1 * 8) = param_2;
  return;
}



bool BackwardReferencesLz77_constprop_0
               (int param_1,int param_2,long param_3,long *param_4,long param_5)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong unaff_RBX;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined8 in_R11;
  long lVar11;
  uint uVar12;
  int iVar13;
  
  param_1 = param_1 * param_2;
  if (*(undefined8 **)(param_5 + 0x10) != (undefined8 *)0x0) {
    **(undefined8 **)(param_5 + 0x10) = *(undefined8 *)(param_5 + 0x18);
  }
  uVar3 = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(param_5 + 0x20) = 0;
  *(undefined8 *)(param_5 + 8) = 0;
  *(undefined8 *)(param_5 + 0x18) = uVar3;
  *(long *)(param_5 + 0x10) = param_5 + 8;
  if (0 < param_1) {
    iVar13 = -1;
    iVar8 = 0;
    do {
      while( true ) {
        lVar11 = (long)iVar8;
        uVar1 = *(uint *)(*param_4 + lVar11 * 4);
        if ((uVar1 & 0xffc) != 0) break;
LAB_00100990:
        iVar8 = iVar8 + 1;
        unaff_RBX = CONCAT44(*(undefined4 *)(param_3 + lVar11 * 4),(int)unaff_RBX) &
                    0xffffffff0000ff00 | 0x10000;
        VP8LBackwardRefsCursorAdd(param_5,unaff_RBX);
        if (param_1 <= iVar8) goto LAB_00100ab5;
      }
      uVar12 = uVar1 & 0xfff;
      iVar4 = uVar12 + iVar8;
      if (param_1 <= (int)(uVar12 + iVar8)) {
        iVar4 = param_1 + -1;
      }
      if (iVar13 < iVar8) {
        iVar13 = iVar8;
      }
      if (iVar13 + 1 <= iVar4) {
        lVar7 = (long)(iVar13 + 1);
        iVar10 = 0;
        uVar9 = iVar13 - iVar8;
        do {
          uVar9 = uVar9 + 1;
          uVar2 = *(uint *)(*param_4 + lVar7 * 4);
          uVar5 = uVar2 & 0xfff;
          if ((uVar2 & 0xffc) == 0) {
            uVar5 = 1;
          }
          iVar6 = uVar5 + (int)lVar7;
        } while (((iVar6 <= iVar10) || (uVar12 = uVar9, iVar10 = iVar6, iVar6 < param_1)) &&
                (lVar7 = lVar7 + 1, (int)lVar7 <= iVar4));
      }
      if (uVar12 == 1) goto LAB_00100990;
      iVar8 = iVar8 + uVar12;
      in_R11 = CONCAT44(uVar1 >> 0xc,
                        (uint)CONCAT71((int7)((ulong)in_R11 >> 8),2) & 0xffff | uVar12 << 0x10);
      VP8LBackwardRefsCursorAdd(param_5,in_R11);
    } while (iVar8 < param_1);
  }
LAB_00100ab5:
  return *(int *)(param_5 + 4) == 0;
}



undefined8
BackwardReferencesLz77Box_constprop_0
          (int param_1,int param_2,long param_3,long *param_4,undefined8 *param_5,undefined8 param_6
          )

{
  ushort uVar1;
  undefined4 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  long lVar7;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  int *piVar22;
  long in_FS_OFFSET;
  uint local_194;
  int local_16c;
  int local_14c;
  undefined8 local_148 [16];
  uint local_c8 [34];
  long local_40;
  
  uVar14 = param_2 * param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  puVar6 = (uint *)local_148;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    puVar6[0] = 0;
    puVar6[1] = 0;
    puVar6 = puVar6 + 2;
  }
  puVar6 = local_c8;
  for (lVar10 = 0x10; lVar10 != 0; lVar10 = lVar10 + -1) {
    puVar6[0] = 0;
    puVar6[1] = 0;
    puVar6 = puVar6 + 2;
  }
  lVar10 = WebPSafeMalloc((long)(int)uVar14,2);
  if (lVar10 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 0;
    }
  }
  else {
    iVar12 = uVar14 - 2;
    lVar5 = (long)iVar12;
    lVar15 = lVar10 + lVar5 * 2;
    *(undefined2 *)(lVar15 + 2) = 1;
    lVar15 = lVar15 + (long)(int)uVar14 * -2;
    while (-1 < iVar12) {
      sVar11 = 1;
      if (*(int *)(param_3 + lVar5 * 4) == *(int *)(param_3 + 4 + lVar5 * 4)) {
        sVar11 = *(short *)(lVar15 + 6 + lVar5 * 2);
        sVar11 = (ushort)(sVar11 != 0xfff) + sVar11;
      }
      *(short *)(lVar15 + 4 + lVar5 * 2) = sVar11;
      lVar5 = lVar5 + -1;
      iVar12 = (int)lVar5;
    }
    uVar18 = 7;
    uVar20 = 7;
    do {
      iVar12 = (int)uVar18 + -0xd;
      do {
        if (0 < iVar12) {
          iVar4 = VP8LDistanceToPlaneCode(param_1);
          if (iVar4 + -1 < 0x20) {
            *(int *)((long)local_148 + (long)(iVar4 + -1) * 4) = iVar12;
          }
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 != (int)uVar18);
      uVar18 = (ulong)(uint)(iVar12 + param_1);
      uVar19 = (int)uVar20 - 1;
      uVar20 = (ulong)uVar19;
    } while (uVar19 != 0);
    iVar12 = 0;
    puVar6 = (uint *)local_148;
    do {
      if (*puVar6 != 0) {
        lVar15 = (long)iVar12;
        iVar12 = iVar12 + 1;
        *(uint *)((long)local_148 + lVar15 * 4) = *puVar6;
      }
      puVar6 = puVar6 + 1;
    } while (local_c8 != puVar6);
    if (iVar12 < 1) {
      local_16c = 0;
    }
    else {
      local_16c = 0;
      puVar6 = (uint *)local_148;
      do {
        lVar15 = 1;
        bVar3 = false;
        do {
          bVar3 = (bool)(bVar3 | *(int *)((long)local_148 + lVar15 * 4 + -4) + 1U == *puVar6);
          iVar4 = (int)lVar15;
          lVar15 = lVar15 + 1;
        } while ((bool)(iVar4 < iVar12 & (bVar3 ^ 1U)));
        if (!bVar3) {
          lVar15 = (long)local_16c;
          local_16c = local_16c + 1;
          local_c8[lVar15] = *puVar6;
        }
        puVar6 = puVar6 + 1;
      } while ((uint *)((long)local_148 + (long)iVar12 * 4) != puVar6);
    }
    puVar2 = (undefined4 *)*param_5;
    *puVar2 = 0;
    if (1 < (int)uVar14) {
      lVar15 = *param_4;
      piVar22 = (int *)(param_3 + 4);
      uVar19 = 0xffffffff;
      local_194 = 0xffffffff;
      uVar18 = 1;
      do {
        uVar17 = *(uint *)(lVar15 + uVar18 * 4);
        iVar4 = iVar12;
        if ((uVar17 & 0xfff) == 0xfff) {
          uVar17 = uVar17 >> 0xc;
          puVar6 = (uint *)local_148;
          if (iVar12 < 1) {
            if (uVar19 - 2 < 0xffd) goto LAB_00100f20;
          }
          else {
            do {
              if (uVar17 == *puVar6) {
                uVar21 = 0xfff;
                local_194 = uVar17;
                goto LAB_00100f71;
              }
              puVar6 = puVar6 + 1;
            } while (puVar6 != (uint *)((long)local_148 + (long)iVar12 * 4));
            if (0xffc < uVar19 - 2) {
              local_194 = 0;
              uVar21 = 0;
              goto LAB_00100d25;
            }
LAB_00100f20:
            uVar21 = uVar19 - 1;
            iVar4 = local_16c;
            if (0 < local_16c) goto LAB_00100d25;
LAB_00100e36:
            if (4 < (int)uVar21) {
LAB_00100f71:
              uVar17 = local_194 << 0xc | uVar21;
              goto LAB_00100e4e;
            }
          }
          local_194 = 0;
          uVar17 = 0;
          uVar21 = 0;
        }
        else {
          if (uVar19 - 2 < 0xffd) goto LAB_00100f20;
          local_194 = 0;
          uVar21 = 0;
          uVar17 = 0;
          if (0 < iVar12) {
LAB_00100d25:
            lVar5 = 0;
            uVar17 = uVar21;
            do {
              while( true ) {
                if (uVar19 - 2 < 0xffd) {
                  uVar21 = local_c8[lVar5];
                }
                else {
                  uVar21 = *(uint *)((long)local_148 + lVar5 * 4);
                }
                iVar13 = (int)uVar18 - uVar21;
                if ((-1 < iVar13) &&
                   (lVar7 = (long)iVar13, *(int *)(param_3 + lVar7 * 4) == *piVar22)) break;
LAB_00100d63:
                lVar5 = lVar5 + 1;
                uVar21 = uVar17;
                if (iVar4 <= (int)lVar5) goto LAB_00100e36;
              }
              uVar20 = uVar18 & 0xffffffff;
              uVar21 = 0;
              lVar16 = (long)(int)uVar18;
              while( true ) {
                uVar1 = *(ushort *)(lVar10 + lVar16 * 2);
                uVar9 = (uint)*(ushort *)(lVar10 + lVar7 * 2);
                if (uVar9 != uVar1) break;
                uVar21 = uVar21 + uVar9;
                iVar13 = iVar13 + uVar9;
                uVar9 = (int)uVar20 + uVar9;
                uVar20 = (ulong)uVar9;
                if ((0xfff < (int)uVar21) || ((int)uVar14 <= (int)uVar9)) goto LAB_00100de6;
                lVar16 = (long)(int)uVar9;
                lVar7 = (long)iVar13;
                if (*(int *)(param_3 + lVar7 * 4) != *(int *)(param_3 + lVar16 * 4))
                goto LAB_00100de6;
              }
              if (uVar1 < uVar9) {
                uVar9 = (uint)uVar1;
              }
              uVar21 = uVar21 + uVar9;
LAB_00100de6:
              if ((int)uVar21 <= (int)uVar17) goto LAB_00100d63;
              if (uVar19 - 2 < 0xffd) {
                local_194 = local_c8[lVar5];
              }
              else {
                local_194 = *(uint *)((long)local_148 + lVar5 * 4);
              }
              if (0xffe < (int)uVar21) {
                uVar21 = 0xfff;
                goto LAB_00100f71;
              }
              lVar5 = lVar5 + 1;
              uVar17 = uVar21;
            } while ((int)lVar5 < iVar4);
            goto LAB_00100e36;
          }
        }
LAB_00100e4e:
        uVar19 = uVar21;
        piVar22 = piVar22 + 1;
        puVar2[uVar18] = uVar17;
        uVar18 = uVar18 + 1;
        local_14c = param_1;
      } while (uVar14 != uVar18);
    }
    *puVar2 = 0;
    WebPSafeFree(lVar10);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = BackwardReferencesLz77_constprop_0(param_1,param_2,param_3,param_5,param_6);
      return uVar8;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 VP8LHashChainInit(long *param_1,int param_2)

{
  long lVar1;
  
  lVar1 = WebPSafeMalloc((long)param_2,4);
  *param_1 = lVar1;
  if (lVar1 != 0) {
    *(int *)(param_1 + 1) = param_2;
    return 1;
  }
  return 0;
}



void VP8LHashChainClear(undefined8 *param_1)

{
  WebPSafeFree(*param_1);
  *(undefined4 *)(param_1 + 1) = 0;
  *param_1 = 0;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
VP8LHashChainFill(long *param_1,int param_2,int *param_3,uint param_4,int param_5,int param_6,
                 undefined8 param_7,int param_8,int *param_9)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 uVar12;
  void *__s;
  long lVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  ulong uVar25;
  bool bVar26;
  uint local_84;
  uint local_6c;
  
  local_6c = 0xfff88;
  param_5 = param_4 * param_5;
  if (param_2 < 0x4c) {
    if (param_2 < 0x33) {
      if (param_2 < 0x1a) {
        local_6c = 0xfff88;
        if ((int)(param_4 << 4) < 0xfff89) {
          local_6c = param_4 << 4;
        }
      }
      else {
        local_6c = 0xfff88;
        if ((int)(param_4 << 6) < 0xfff89) {
          local_6c = param_4 << 6;
        }
      }
    }
    else {
      local_6c = 0xfff88;
      if ((int)(param_4 * 0x100) < 0xfff89) {
        local_6c = param_4 * 0x100;
      }
    }
  }
  iVar5 = *param_9;
  puVar6 = (undefined4 *)*param_1;
  if (param_5 < 3) {
    uVar12 = 1;
    puVar6[(long)param_5 + -1] = 0;
    *puVar6 = 0;
  }
  else {
    __s = (void *)WebPSafeMalloc(0x40000,4);
    if (__s == (void *)0x0) {
      uVar12 = WebPEncodingSetError(param_7,1);
      return uVar12;
    }
    iVar8 = param_8 / 2;
    memset(__s,0xff,0x100000);
    iVar9 = *param_3;
    bVar26 = param_3[1] == iVar9;
    uVar1 = param_5 - 2;
    iVar23 = 0;
    lVar13 = 0;
    while( true ) {
      iVar21 = iVar9 * 0x5bd1e996;
      piVar3 = puVar6 + lVar13;
      if ((int)uVar1 <= iVar23) break;
      iVar19 = param_3[lVar13 + 2];
      iVar16 = param_3[lVar13 + 1];
      if ((bVar26) && (iVar16 == iVar19)) {
        uVar15 = iVar23 + 3;
        uVar22 = 1;
        if ((int)uVar15 < param_5) {
          do {
            if (param_3[uVar15] != iVar9) break;
            uVar15 = uVar15 + 1;
            uVar22 = uVar22 + 1;
          } while ((int)uVar15 < param_5);
          if (0xfff < uVar22) {
            uVar15 = uVar22 - 0xfff;
            iVar23 = iVar23 + -0xfff + uVar22;
            uVar22 = 0xfff;
            memset(piVar3,0xff,(ulong)uVar15 << 2);
            lVar13 = (long)iVar23;
          }
        }
        lVar14 = lVar13;
        lVar17 = lVar13 + 1;
        uVar15 = uVar22 * -0x395b586d + iVar21;
        while( true ) {
          puVar4 = (undefined4 *)((long)__s + (ulong)(uVar15 >> 0xe) * 4);
          puVar6[lVar14] = *puVar4;
          *puVar4 = (int)lVar14;
          if (lVar17 == (ulong)(uVar22 - 1) + lVar13 + 1) break;
          lVar14 = lVar17;
          lVar17 = lVar17 + 1;
          uVar15 = uVar15 + 0x395b586d;
        }
        iVar23 = iVar23 + uVar22;
        bVar26 = false;
      }
      else {
        piVar2 = (int *)((long)__s +
                        (ulong)((uint)(param_3[lVar13 + 1] * -0x395b586d + iVar21) >> 0xe) * 4);
        *piVar3 = *piVar2;
        *piVar2 = iVar23;
        iVar23 = iVar23 + 1;
        bVar26 = iVar16 == iVar19;
      }
      iVar9 = WebPReportProgress(param_7,iVar5 + (iVar8 * iVar23) / (int)uVar1,param_9);
      if (iVar9 == 0) {
        WebPSafeFree(__s);
        goto LAB_00101528;
      }
      lVar13 = (long)iVar23;
      iVar9 = param_3[lVar13];
    }
    *piVar3 = *(int *)((long)__s +
                      (ulong)((uint)(param_3[lVar13 + 1] * -0x395b586d + iVar21) >> 0xe) * 4);
    WebPSafeFree(__s);
    iVar23 = WebPReportProgress(param_7,iVar5 + iVar8,param_9);
    if (iVar23 != 0) {
      iVar23 = param_2 * param_2 >> 7;
      iVar9 = iVar23 + 8;
      puVar4 = (undefined4 *)*param_1;
      puVar4[(long)param_5 + -1] = 0;
      *puVar4 = 0;
      uVar15 = uVar1;
      do {
        uVar25 = (ulong)uVar15;
        piVar3 = param_3 + uVar25;
        iVar21 = puVar6[uVar25];
        iVar16 = (param_5 + -1) - uVar15;
        iVar19 = *piVar3;
        if (0xfff < iVar16) {
          iVar16 = 0xfff;
        }
        iVar7 = uVar15 - local_6c;
        if (uVar15 <= local_6c) {
          iVar7 = 0;
        }
        iVar10 = 0x100;
        if (iVar16 < 0x101) {
          iVar10 = iVar16;
        }
        if (param_6 == 0) {
          piVar2 = piVar3 + -1;
          if (uVar15 < param_4) {
            if (piVar3[-1] != iVar19) {
              uVar22 = 0;
              local_84 = 0;
              iVar24 = iVar23 + 7;
              goto LAB_001015aa;
            }
            uVar11 = (*_VP8LVectorMismatch)(piVar2);
            local_84 = 1;
            iVar24 = iVar9;
            if (0 < (int)uVar11) goto LAB_00101458;
LAB_00101741:
            uVar11 = 0;
            local_84 = 0;
LAB_00101746:
            iVar19 = piVar3[(int)uVar11];
            iVar24 = iVar24 + -1;
            uVar22 = uVar11;
            goto LAB_001015aa;
          }
          if (piVar3[-(long)(int)param_4] == iVar19) {
            uVar11 = (*_VP8LVectorMismatch)();
            if ((int)uVar11 < 1) {
              iVar19 = *piVar3;
              goto LAB_00101772;
            }
            iVar24 = iVar23 + 7;
            local_84 = param_4;
            if (piVar2[(int)uVar11] != piVar3[(int)uVar11]) goto LAB_00101458;
          }
          else {
LAB_00101772:
            iVar24 = iVar23 + 7;
            if (piVar3[-1] != iVar19) goto LAB_00101741;
            uVar11 = 0;
            local_84 = 0;
          }
          iVar24 = iVar23 + 7;
          uVar22 = (*_VP8LVectorMismatch)(piVar2);
          if ((int)uVar11 < (int)uVar22) {
            local_84 = 1;
            uVar11 = uVar22;
          }
LAB_00101458:
          uVar22 = 0xfff;
          if (uVar11 != 0xfff) goto LAB_00101746;
        }
        else {
          local_84 = 0;
          uVar22 = 0;
          iVar24 = iVar9;
LAB_001015aa:
          uVar11 = uVar22;
          if (iVar7 <= iVar21) {
            iVar24 = iVar24 + -1;
            do {
              if ((param_3[(int)(iVar21 + uVar22)] == iVar19) &&
                 (uVar11 = (*_VP8LVectorMismatch)(param_3 + iVar21,piVar3,iVar16),
                 (int)uVar22 < (int)uVar11)) {
                local_84 = uVar15 - iVar21;
                iVar19 = piVar3[(int)uVar11];
                uVar22 = uVar11;
                if (iVar10 <= (int)uVar11) break;
              }
              iVar21 = puVar6[iVar21];
              uVar11 = uVar22;
              if ((iVar21 < iVar7) || (iVar24 = iVar24 + -1, iVar24 == 0)) break;
            } while( true );
          }
        }
        uVar18 = uVar15 - 1;
        lVar13 = *param_1;
        *(uint *)(lVar13 + uVar25 * 4) = uVar22 | local_84 << 0xc;
        if (local_84 - 1 < uVar18) {
          uVar22 = uVar18 - local_84;
          lVar14 = (ulong)uVar18 << 2;
          while (param_3[uVar22] == *(int *)((long)param_3 + lVar14)) {
            if ((uVar11 == 0xfff) && (local_84 != 1)) {
              if (uVar18 + 0xfff < uVar15) break;
              uVar20 = 0xfff;
            }
            else {
              uVar20 = uVar11;
              if ((int)uVar11 < 0xfff) {
                uVar20 = uVar11 + 1;
                uVar15 = uVar18;
                uVar11 = uVar20;
              }
            }
            uVar22 = uVar22 - 1;
            *(uint *)(lVar13 + lVar14) = uVar20 | local_84 << 0xc;
            lVar14 = lVar14 + -4;
            uVar18 = uVar18 - 1;
            if ((uVar18 == 0) || (uVar18 < local_84)) break;
          }
        }
        uVar15 = uVar18;
        iVar21 = WebPReportProgress(param_7,iVar5 + iVar8 +
                                            ((uVar1 - uVar15) * (param_8 - iVar8)) / uVar1,param_9);
        if (iVar21 == 0) break;
        if (uVar15 == 0) {
          uVar12 = WebPReportProgress(param_7,param_8 + iVar5,param_9);
          return uVar12;
        }
      } while( true );
    }
LAB_00101528:
    uVar12 = 0;
  }
  return uVar12;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8LGetBackwardReferences
               (int param_1,undefined8 param_2,undefined4 *param_3,int param_4,int param_5,
               uint param_6,int param_7,int param_8,undefined1 *param_9,long param_10,int *param_11,
               undefined8 param_12,int param_13,int *param_14)

{
  long lVar1;
  uint *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  byte bVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  uint uVar14;
  int *piVar15;
  long lVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  char *pcVar19;
  uint uVar20;
  undefined8 unaff_R14;
  ulong uVar21;
  long in_FS_OFFSET;
  bool bVar22;
  float fVar23;
  char *local_110;
  long *local_100;
  ulong local_f8;
  ulong local_f0;
  ulong local_a0;
  int local_7c;
  undefined1 local_78 [16];
  long local_68 [3];
  uint local_50 [2];
  undefined8 local_48;
  long local_40;
  
  iVar9 = (int)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 0) {
    local_78 = (undefined1  [16])0x0;
    local_48 = _LC3;
    local_50[0] = 0;
    local_50[1] = 0;
    lVar1 = param_10 + 0x50 + (-(ulong)(param_8 == 0) & 0xffffffffffffffd8);
    lVar13 = VP8LAllocateHistogram(10);
    if (lVar13 != 0) {
      if (param_6 != 0) {
        uVar20 = 1;
        do {
          if ((param_6 & uVar20) != 0) {
            if (uVar20 == 2) {
              iVar10 = param_1 * iVar9;
              if (*(undefined8 **)(lVar1 + 0x10) != (undefined8 *)0x0) {
                **(undefined8 **)(lVar1 + 0x10) = *(undefined8 *)(lVar1 + 0x18);
              }
              uVar4 = *param_3;
              *(undefined8 *)(lVar1 + 0x20) = 0;
              *(undefined8 *)(lVar1 + 0x18) = *(undefined8 *)(lVar1 + 8);
              *(long *)(lVar1 + 0x10) = lVar1 + 8;
              *(undefined8 *)(lVar1 + 8) = 0;
              local_a0 = CONCAT44(uVar4,(int)((local_a0 >> 8 & 0xffffffff0000ff) << 8)) | 0x10000;
              VP8LBackwardRefsCursorAdd(lVar1,local_a0);
              if (1 < iVar10) {
                iVar11 = 1;
                do {
                  while( true ) {
                    iVar12 = iVar10 - iVar11;
                    if (0xfff < iVar10 - iVar11) {
                      iVar12 = 0xfff;
                    }
                    puVar2 = param_3 + iVar11;
                    uVar14 = *puVar2;
                    uVar21 = (ulong)uVar14;
                    if (uVar14 != param_3[(long)iVar11 + -1]) break;
                    uVar14 = (*_VP8LVectorMismatch)();
                    if (iVar11 < param_1) {
                      if ((int)uVar14 < 4) {
LAB_00101fd0:
                        uVar21 = (ulong)*puVar2;
                        goto LAB_00101df2;
                      }
                    }
                    else {
                      uVar21 = (ulong)*puVar2;
                      if (*puVar2 == param_3[(long)iVar11 - (long)param_1]) {
                        iVar12 = (*_VP8LVectorMismatch)
                                           (puVar2,param_3 + ((long)iVar11 - (long)param_1),iVar12);
                        if (((int)uVar14 < iVar12) || ((int)uVar14 < 4)) goto LAB_00101f35;
                      }
                      else if ((int)uVar14 < 4) goto LAB_00101df2;
                    }
                    local_f8 = (ulong)((uint)CONCAT71((int7)(local_f8 >> 8),2) & 0xffff |
                                      (uint)(((ulong)uVar14 & 0xffff) << 0x10)) | 0x100000000;
                    VP8LBackwardRefsCursorAdd(lVar1,local_f8);
                    iVar11 = iVar11 + uVar14;
                    if (iVar10 <= iVar11) goto LAB_00101efb;
                  }
                  if ((iVar11 < param_1) || (uVar14 != param_3[(long)iVar11 - (long)param_1])) {
LAB_00101df2:
                    iVar11 = iVar11 + 1;
                    local_f0 = (ulong)((uint)local_f0 & 0xff00 | 0x10000) | uVar21 << 0x20;
                    VP8LBackwardRefsCursorAdd(lVar1,local_f0);
                  }
                  else {
                    iVar12 = (*_VP8LVectorMismatch)();
LAB_00101f35:
                    if (iVar12 < 4) goto LAB_00101fd0;
                    unaff_R14 = CONCAT44(param_1,(uint)CONCAT71((int7)((ulong)unaff_R14 >> 8),2) &
                                                 0xffff | iVar12 << 0x10);
                    VP8LBackwardRefsCursorAdd(lVar1,unaff_R14);
                    iVar11 = iVar11 + iVar12;
                  }
                } while (iVar11 < iVar10);
              }
LAB_00101efb:
              if (*(int *)(lVar1 + 4) == 0) goto LAB_001019af;
            }
            else {
              if (uVar20 == 4) {
                lVar16 = WebPSafeMalloc((long)(param_1 * iVar9),4);
                auVar6 = local_78;
                local_78._0_8_ = lVar16;
                if (lVar16 == 0) {
                  uVar17 = 0;
                  goto LAB_00101bed;
                }
                local_78._12_4_ = auVar6._12_4_;
                local_78._8_4_ = param_1 * iVar9;
                iVar10 = BackwardReferencesLz77Box_constprop_0
                                   (param_1,iVar9,param_3,param_9,local_78,lVar1);
              }
              else {
                if (uVar20 != 1) goto LAB_00101be0;
                iVar10 = BackwardReferencesLz77_constprop_0(param_1,iVar9,param_3,param_9,lVar1);
              }
              if (iVar10 != 0) {
LAB_001019af:
                fVar23 = 0.0;
                lVar16 = 1;
LAB_001019bf:
                do {
                  if ((int)lVar16 == 1) {
                    if (param_8 == 0) {
                      do {
                        lVar16 = lVar16 + -1;
                      } while ((int)lVar16 == 1);
                    }
                    else {
                      do {
                        local_7c = 0;
                        VP8LHistogramCreate(lVar13,lVar1,0);
                        fVar23 = (float)VP8LHistogramEstimateBits(lVar13);
                        if (*(float *)((long)&local_48 + lVar16 * 4) <= fVar23) {
                          lVar16 = lVar16 + -1;
                          goto LAB_001019bf;
                        }
                        iVar10 = BackwardRefsClone_isra_0
                                           (*(undefined8 *)(lVar1 + 8),param_10 + 0x28);
                        if (iVar10 == 0) goto LAB_00101be0;
                        lVar16 = lVar16 + -1;
                        local_50[1] = uVar20;
                        local_48 = CONCAT44(fVar23,(undefined4)local_48);
                      } while ((int)lVar16 == 1);
                    }
                  }
                  local_7c = param_7;
                  iVar11 = CalculateBestCacheSize_isra_0
                                     (param_3,param_4,*(undefined8 *)(lVar1 + 8),&local_7c);
                  iVar10 = local_7c;
                  if (iVar11 == 0) goto LAB_00101be0;
                  if (local_7c < 1) {
                    if ((param_8 == 0) || (local_7c != 0)) goto LAB_00102228;
                    if (fVar23 < *(float *)((long)&local_48 + lVar16 * 4)) goto LAB_00101a23;
                  }
                  else {
                    local_100 = *(long **)(lVar1 + 8);
                    if (local_100 == (long *)0x0) {
                      iVar11 = VP8LColorCacheInit(local_68,local_7c);
                      if (iVar11 == 0) goto LAB_00101be0;
                    }
                    else {
                      pcVar19 = (char *)local_100[1];
                      local_110 = pcVar19 + (long)(int)local_100[2] * 8;
                      iVar11 = VP8LColorCacheInit(local_68,local_7c);
                      if (iVar11 == 0) goto LAB_00101be0;
                      if (pcVar19 != (char *)0x0) {
                        iVar11 = 0;
                        do {
                          do {
                            if (*pcVar19 == '\0') {
                              iVar12 = *(int *)(pcVar19 + 4);
                              bVar5 = (byte)(undefined4)local_68[1] & 0x1f;
                              uVar14 = (uint)(iVar12 * 0x1e35a7bd) >> bVar5;
                              piVar15 = (int *)(local_68[0] + (long)(int)uVar14 * 4);
                              if ((*piVar15 == iVar12) &&
                                 (-1 < (int)((uint)(iVar12 * 0x1e35a7bd) >> bVar5))) {
                                *pcVar19 = '\x01';
                                pcVar19[2] = '\x01';
                                pcVar19[3] = '\0';
                                *(uint *)(pcVar19 + 4) = uVar14;
                              }
                              else {
                                *piVar15 = iVar12;
                              }
                              iVar11 = iVar11 + 1;
                            }
                            else {
                              uVar3 = *(ushort *)(pcVar19 + 2);
                              if (uVar3 != 0) {
                                piVar15 = param_3 + iVar11;
                                do {
                                  iVar12 = *piVar15;
                                  piVar15 = piVar15 + 1;
                                  *(int *)(local_68[0] +
                                          (long)(int)((uint)(iVar12 * 0x1e35a7bd) >>
                                                     ((byte)(undefined4)local_68[1] & 0x1f)) * 4) =
                                       iVar12;
                                } while (param_3 + (ulong)(uVar3 - 1) + (long)iVar11 + 1 != piVar15)
                                ;
                                iVar11 = iVar11 + (uint)uVar3;
                              }
                            }
                            pcVar19 = pcVar19 + 8;
                          } while (pcVar19 != local_110);
                          local_100 = (long *)*local_100;
                          if (local_100 == (long *)0x0) break;
                          pcVar19 = (char *)local_100[1];
                          local_110 = pcVar19 + (long)*(int *)(local_100 + 2) * 8;
                        } while (pcVar19 != (char *)0x0);
                      }
                    }
                    VP8LColorCacheClear(local_68);
LAB_00102228:
                    VP8LHistogramCreate(lVar13,lVar1);
                    fVar23 = (float)VP8LHistogramEstimateBits(lVar13);
                    if (fVar23 < *(float *)((long)&local_48 + lVar16 * 4)) {
LAB_00101a23:
                      BackwardRefsSwap(lVar1,param_10);
                      local_50[0] = uVar20;
                      *param_11 = iVar10;
                      local_48 = CONCAT44(local_48._4_4_,fVar23);
                    }
                  }
                  bVar22 = lVar16 != 0;
                  lVar16 = lVar16 + -1;
                } while (bVar22);
                goto LAB_00101a63;
              }
            }
LAB_00101be0:
            uVar17 = local_78._0_8_;
            goto LAB_00101bed;
          }
LAB_00101a63:
          param_6 = param_6 & ~uVar20;
          uVar20 = uVar20 * 2;
        } while (param_6 != 0);
      }
      uVar21 = 1;
      lVar16 = param_10 + 0x28;
      do {
        if (((uVar21 & 1) == 0) || (param_8 != 0)) {
          uVar20 = local_50[uVar21];
          if ((uVar20 == 1 || uVar20 == 4) && (0x18 < param_4)) {
            puVar18 = local_78;
            if (uVar20 == 1) {
              puVar18 = param_9;
            }
            iVar10 = 0;
            if ((int)uVar21 != 1) {
              iVar10 = *param_11;
            }
            iVar11 = VP8LBackwardReferencesTraceBackwards
                               (param_1,iVar9,param_3,iVar10,puVar18,lVar16);
            if (iVar11 == 0) {
              uVar17 = local_78._0_8_;
              goto LAB_00101bed;
            }
            VP8LHistogramCreate(lVar13,lVar1,iVar10);
            fVar23 = (float)VP8LHistogramEstimateBits(lVar13);
            if (fVar23 < *(float *)((long)&local_48 + uVar21 * 4)) {
              BackwardRefsSwap(lVar1,lVar16);
            }
          }
          BackwardReferences2DLocality_isra_0(param_1,*(undefined8 *)(lVar16 + 8));
          if ((int)uVar21 != 1) {
            goto LAB_00101b7e;
          }
          if ((local_50[0] == local_50[1]) && (*param_11 == 0)) goto code_r0x001022b8;
        }
        uVar21 = uVar21 - 1;
        lVar16 = lVar16 + -0x28;
      } while( true );
    }
    WebPSafeFree(local_78._0_8_);
    local_78._8_4_ = 0;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = local_78._8_8_;
    local_78 = auVar8 << 0x40;
    VP8LFreeHistogram(0);
  }
  else {
    *param_11 = 0;
    iVar9 = BackwardReferencesLz77_constprop_0(param_1,param_2,param_3,param_9,param_10);
    if (iVar9 != 0) {
      BackwardReferences2DLocality_isra_0(param_1,*(undefined8 *)(param_10 + 8));
      BackwardRefsSwap(param_10,param_10);
      goto LAB_00101891;
    }
  }
  goto LAB_00101c13;
code_r0x001022b8:
  iVar9 = BackwardRefsClone_isra_0(*(undefined8 *)(param_10 + 0x30));
  uVar17 = local_78._0_8_;
  if (iVar9 != 0) {
LAB_00101b7e:
    WebPSafeFree(local_78._0_8_);
    local_78._8_4_ = 0;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_78._8_8_;
    local_78 = auVar6 << 0x40;
    VP8LFreeHistogram(lVar13);
LAB_00101891:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      WebPReportProgress(param_12,*param_14 + param_13);
      return;
    }
    goto LAB_001022f0;
  }
LAB_00101bed:
  WebPSafeFree(uVar17);
  local_78._8_4_ = 0;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_78._8_8_;
  local_78 = auVar7 << 0x40;
  VP8LFreeHistogram(lVar13);
LAB_00101c13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    WebPEncodingSetError(param_12,1);
    return;
  }
LAB_001022f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


