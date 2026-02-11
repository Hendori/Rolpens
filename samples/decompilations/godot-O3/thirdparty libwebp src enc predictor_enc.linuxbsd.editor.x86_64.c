
int MaxDiffBetweenPixels(uint param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 >> 0x18) - (param_2 >> 0x18);
  iVar1 = -iVar2;
  if (0 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = (param_1 & 0xff) - (param_2 & 0xff);
  if (iVar2 < 1) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = (param_1 >> 0x10 & 0xff) - (param_2 >> 0x10 & 0xff);
  if (iVar2 < 1) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  iVar2 = (param_1 >> 8 & 0xff) - (param_2 >> 8 & 0xff);
  if (iVar2 < 1) {
    iVar2 = -iVar2;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  return iVar1;
}



uint NearLosslessComponent(char param_1,char param_2,char param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)(byte)(param_1 - param_2);
  uVar4 = (uint)(byte)(param_3 - param_2);
  uVar2 = -param_4 & uVar3;
  uVar1 = param_4 + uVar2;
  if ((int)(uVar3 - uVar2) <
      (int)((uint)((byte)(param_3 - param_1) < (byte)(param_3 - param_2)) + (uVar1 - uVar3))) {
    uVar1 = uVar2;
    if (uVar4 < uVar3) {
      if (uVar2 <= uVar4) {
        uVar2 = (param_4 >> 1) + uVar2;
      }
      return uVar2;
    }
  }
  else if ((uVar3 <= uVar4) && ((int)uVar4 < (int)uVar1)) {
    uVar1 = (param_4 >> 1) + uVar2;
  }
  return uVar1;
}



void MaxDiffsForRow_part_0(int param_1,int param_2,uint *param_3,long param_4,int param_5)

{
  byte bVar6;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  uint uVar13;
  
  uVar7 = *param_3;
  uVar8 = param_3[1];
  if (param_5 != 0) {
    uVar7 = (uVar7 >> 8 & 0xff) * 0x10001 + (uVar7 & 0xff00ff) & 0xff00ff | uVar7 & 0xff00ff00;
    uVar8 = uVar8 & 0xff00ff00 | (uVar8 >> 8 & 0xff) * 0x10001 + (uVar8 & 0xff00ff) & 0xff00ff;
  }
  lVar12 = 1;
  puVar10 = param_3;
  do {
    uVar9 = param_3[lVar12 - param_2];
    uVar13 = puVar10[lVar12 + 1];
    uVar1 = param_3[param_2 + lVar12];
    if (param_5 != 0) {
      bVar6 = (byte)(uVar9 >> 8);
      uVar9 = uVar9 & 0xff00ff00 |
              (uint)bVar6 * 0x10000 + (uint)bVar6 + (uVar9 & 0xff00ff) & 0xff00ff;
      bVar6 = (byte)(uVar1 >> 8);
      uVar1 = (uint)bVar6 * 0x10000 + (uint)bVar6 + (uVar1 & 0xff00ff) & 0xff00ff |
              uVar1 & 0xff00ff00;
      uVar13 = uVar13 & 0xff00ff00 | (uVar13 >> 8 & 0xff) * 0x10001 + (uVar13 & 0xff00ff) & 0xff00ff
      ;
    }
    uVar11 = (ulong)uVar1;
    iVar2 = MaxDiffBetweenPixels(uVar8,uVar9);
    iVar3 = MaxDiffBetweenPixels(uVar8,uVar11 & 0xffffffff);
    iVar4 = MaxDiffBetweenPixels(uVar8,uVar7);
    iVar5 = MaxDiffBetweenPixels(uVar8,uVar13);
    if (iVar2 < iVar3) {
      iVar2 = iVar3;
    }
    if (iVar2 < iVar4) {
      iVar2 = iVar4;
    }
    if (iVar2 < iVar5) {
      iVar2 = iVar5;
    }
    *(char *)(param_4 + lVar12) = (char)iVar2;
    lVar12 = lVar12 + 1;
    uVar7 = uVar8;
    uVar8 = uVar13;
  } while ((int)lVar12 < param_1 + -1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
GetPredictionCostCrossColorBlue_isra_0
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5,
          char param_6,char param_7,char param_8,int param_9,int param_10,undefined8 param_11)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_448;
  int local_444 [15];
  int local_408 [239];
  int local_4c [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar5 = &local_448;
  for (lVar4 = 0x80; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)piVar5 = 0;
    piVar5 = (int *)((long)piVar5 + 8);
  }
  (*_VP8LCollectColorBlueTransforms)(param_1,param_2,param_3,param_4,param_9,param_10,&local_448);
  fVar6 = (float)(*_VP8LCombinedShannonEntropy)(&local_448,param_11);
  piVar3 = local_444;
  piVar5 = local_4c;
  fVar8 = (float)local_448 * _LC1;
  fVar9 = _LC0;
  do {
    iVar1 = *piVar5;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + -1;
    fVar7 = (float)(iVar1 + iVar2) * fVar9;
    fVar9 = fVar9 * _LC2;
    fVar8 = fVar8 + fVar7;
  } while (local_408 != piVar3);
  fVar6 = (float)((double)fVar8 * __LC3) + fVar6;
  if ((char)param_9 == param_5) {
    fVar6 = fVar6 - _LC1;
  }
  if ((char)param_9 == param_7) {
    fVar6 = fVar6 - _LC1;
  }
  if ((char)param_10 == param_6) {
    fVar6 = fVar6 - _LC1;
  }
  if ((char)param_10 == param_8) {
    fVar6 = fVar6 - _LC1;
  }
  if (param_9 == 0) {
    fVar6 = fVar6 - _LC1;
  }
  if (param_10 == 0) {
    fVar6 = fVar6 - _LC1;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44((int)((ulong)((double)fVar8 * __LC3) >> 0x20),fVar6);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void GetResidual_part_0(int param_1,int param_2,uint *param_3,uint *param_4,long param_5,int param_6
                       ,int param_7,int param_8,int param_9,int param_10,int param_11,long param_12)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  byte bVar4;
  char cVar7;
  uint uVar5;
  uint uVar6;
  uint uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint *puVar15;
  uint local_58;
  
  pcVar2 = *(code **)(&VP8LPredictors + (long)param_6 * 8);
  if (param_7 < param_8) {
    lVar9 = (long)param_7;
    lVar1 = (ulong)(uint)(param_8 - param_7) + lVar9;
    puVar15 = param_4 + lVar9 + -1;
    lVar3 = lVar9 * -4;
    do {
      iVar14 = (int)lVar9;
      if (param_9 == 0) {
        if (iVar14 == 0) {
          uVar11 = 0;
          uVar12 = 0xff000000;
          uVar5 = 0;
        }
        else {
          uVar5 = *puVar15;
          uVar12 = uVar5 & 0xff00ff00;
          uVar11 = uVar5 & 0xff00ff;
        }
LAB_001004b0:
        uVar6 = puVar15[1];
        uVar12 = (uVar6 | 0xff00ff) - uVar12;
        uVar10 = uVar12 & 0xff00ff00 | (uVar6 | 0xff00ff00) - uVar11 & 0xff00ff;
        if (uVar6 < 0x1000000) {
          uVar10 = uVar12 & 0xff000000;
          puVar15[1] = uVar5 & 0xffffff;
          if ((iVar14 == 0) && (param_9 != 0)) {
            param_3[param_1] = *param_4;
          }
        }
      }
      else {
        if (iVar14 == 0) {
          uVar5 = *param_3;
          uVar12 = uVar5 & 0xff00ff00;
          uVar11 = uVar5 & 0xff00ff;
          goto LAB_001004b0;
        }
        uVar5 = (*pcVar2)(puVar15,param_3 + lVar9);
        if ((param_6 == 0) || (param_10 == 1)) {
          uVar12 = uVar5 & 0xff00ff00;
          uVar11 = uVar5 & 0xff00ff;
          goto LAB_001004b0;
        }
        uVar6 = puVar15[1];
        uVar12 = uVar5 & 0xff00ff00;
        uVar11 = uVar5 & 0xff00ff;
        if ((param_9 == param_2 + -1) || (param_1 + -1 == iVar14)) goto LAB_001004b0;
        bVar4 = *(byte *)(param_5 + lVar9);
        if (bVar4 < 3) {
          uVar10 = (uVar6 | 0xff00ff) - uVar12 & 0xff00ff00 |
                   (uVar6 | 0xff00ff00) - uVar11 & 0xff00ff;
        }
        else {
          iVar14 = param_10;
          if ((int)(uint)bVar4 <= param_10) {
            do {
              iVar14 = iVar14 >> 1;
            } while ((int)(uint)bVar4 <= iVar14);
          }
          uVar10 = uVar6 >> 0x18;
          if ((uVar10 == 0) || (uVar10 == 0xff)) {
            bVar4 = (char)(uVar6 >> 0x18) - (char)(uVar5 >> 0x18);
          }
          else {
            bVar4 = NearLosslessComponent(uVar10,uVar5 >> 0x18,0xff,iVar14);
          }
          local_58 = (uint)bVar4;
          cVar7 = (char)(uVar6 >> 8);
          uVar10 = NearLosslessComponent(cVar7,uVar5 >> 8 & 0xff,0xff,iVar14);
          if (param_11 == 0) {
            uVar8 = 0xff;
            uVar13 = 0;
          }
          else {
            uVar8 = (uVar5 >> 8 & 0xff) + uVar10;
            uVar13 = (uint)(byte)((char)uVar8 - cVar7);
            uVar8 = ~uVar8 & 0xff;
          }
          bVar4 = NearLosslessComponent
                            ((uVar6 >> 0x10) - uVar13 & 0xff,uVar5 >> 0x10 & 0xff,uVar8,iVar14);
          uVar6 = NearLosslessComponent(uVar6 - uVar13 & 0xff,uVar5 & 0xff,uVar8,iVar14);
          uVar10 = (uint)bVar4 << 0x10 | local_58 << 0x18 | (uVar10 & 0xff) << 8 | uVar6 & 0xff;
        }
        uVar11 = (uVar10 & 0xff00ff00) + uVar12 & 0xff00ff00 |
                 (uVar10 & 0xff00ff) + uVar11 & 0xff00ff;
        puVar15[1] = uVar11;
        if (uVar11 < 0x1000000) {
          uVar10 = uVar10 & 0xff000000;
          puVar15[1] = uVar5 & 0xffffff;
        }
      }
      *(uint *)(param_12 + lVar3 + lVar9 * 4) = uVar10;
      puVar15 = puVar15 + 1;
      lVar9 = lVar9 + 1;
    } while (lVar1 != lVar9);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
GetPredictionCostCrossColorRed_isra_0
          (undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,char param_5,
          char param_6,int param_7,undefined8 param_8)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  long lVar4;
  int *piVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int local_438;
  int local_434 [15];
  int local_3f8 [239];
  int local_3c [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  piVar5 = &local_438;
  for (lVar4 = 0x80; lVar4 != 0; lVar4 = lVar4 + -1) {
    *(undefined8 *)piVar5 = 0;
    piVar5 = (int *)((long)piVar5 + 8);
  }
  (*_VP8LCollectColorRedTransforms)(param_1,param_2,param_3,param_4,param_7,&local_438);
  fVar6 = (float)(*_VP8LCombinedShannonEntropy)(&local_438,param_8);
  piVar3 = local_434;
  piVar5 = local_3c;
  fVar9 = (float)local_438 * _LC1;
  fVar8 = _LC0;
  do {
    iVar1 = *piVar5;
    iVar2 = *piVar3;
    piVar3 = piVar3 + 1;
    piVar5 = piVar5 + -1;
    fVar7 = (float)(iVar1 + iVar2) * fVar8;
    fVar8 = fVar8 * _LC2;
    fVar9 = fVar9 + fVar7;
  } while (local_3f8 != piVar3);
  fVar6 = (float)((double)fVar9 * __LC3) + fVar6;
  if ((char)param_7 == param_5) {
    fVar6 = fVar6 - _LC1;
  }
  if ((char)param_7 == param_6) {
    fVar6 = fVar6 - _LC1;
  }
  if (param_7 == 0) {
    fVar6 = fVar6 - _LC1;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44((int)((ulong)((double)fVar9 * __LC3) >> 0x20),fVar6);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void VP8LResidualImage(int param_1,int param_2,byte param_3,int param_4,long param_5,void *param_6,
                      undefined4 *param_7,int param_8,int param_9,undefined4 param_10,
                      undefined8 param_11,int param_12,int *param_13)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  long lVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  void *pvVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  uint uVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  uint uVar27;
  ulong uVar28;
  ulong uVar29;
  int iVar30;
  int iVar31;
  int iVar32;
  void *__src;
  void *pvVar33;
  void *pvVar34;
  int iVar35;
  int iVar36;
  long lVar37;
  int iVar38;
  long in_FS_OFFSET;
  byte bVar39;
  float fVar40;
  double dVar41;
  float fVar42;
  float fVar43;
  undefined1 auVar44 [16];
  long local_3298;
  float local_3220;
  uint local_3210;
  uint local_320c;
  int *local_3208;
  uint local_31ec;
  int local_31cc;
  uint local_3148 [64];
  int local_3048 [1024];
  int local_2048 [1024];
  int local_1048 [1026];
  long local_40;
  
  bVar39 = 0;
  iVar38 = param_1 + -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar30 = 1 << (param_3 & 0x1f);
  uVar23 = iVar30 + -1 + param_2;
  uVar24 = uVar23 >> (param_3 & 0x1f);
  uVar26 = (uint)(iVar38 + iVar30) >> (param_3 & 0x1f);
  iVar1 = *param_13;
  iVar16 = 1 << (5U - (char)(param_8 / 0x14) & 0x1f);
  lVar37 = (long)param_1 * 4;
  lVar7 = lVar37 + 4;
  pvVar33 = (void *)((long)param_6 + lVar7);
  lVar7 = (long)pvVar33 + lVar7;
  if (param_4 == 0) {
    piVar21 = local_3048;
    for (lVar13 = 0x200; lVar13 != 0; lVar13 = lVar13 + -1) {
      piVar21[0] = 0;
      piVar21[1] = 0;
      piVar21 = piVar21 + 2;
    }
    if (0 < (int)(uVar23 >> (param_3 & 0x1f))) {
      iVar5 = 0;
      local_31cc = -uVar26;
      uVar23 = 0;
      do {
        if (0 < (int)uVar26) {
          iVar25 = uVar23 << (param_3 & 0x1f);
          iVar12 = param_2 - iVar25;
          if (iVar30 < param_2 - iVar25) {
            iVar12 = iVar30;
          }
          uVar29 = 0;
          do {
            iVar32 = (int)uVar29;
            local_3210 = 0xff;
            iVar35 = iVar32 << (param_3 & 0x1f);
            iVar17 = param_1 - iVar35;
            iVar31 = iVar17;
            if (iVar30 <= iVar17) {
              iVar31 = iVar30;
            }
            bVar3 = 0 < iVar32 << (param_3 & 0x1f);
            iVar18 = iVar31 + (uint)bVar3;
            iVar17 = (uint)(iVar31 < iVar17) + iVar18;
            if (uVar29 != 0) {
              local_3210 = (uint)*(byte *)((long)param_7 +
                                          uVar29 * 4 + (long)(int)(local_31cc + uVar26) * 4 + -3);
            }
            local_320c = 0xff;
            if (uVar23 != 0) {
              local_320c = (uint)*(byte *)((long)param_7 + (long)(local_31cc + iVar32) * 4 + 1);
            }
            lVar13 = (long)(int)(iVar35 - (uint)bVar3);
            local_31ec = 0;
            uVar28 = 0;
            local_3220 = 1e+30;
            pvVar19 = pvVar33;
            piVar21 = local_2048;
            pvVar34 = param_6;
            local_3208 = local_1048;
            do {
              uVar27 = (uint)uVar28;
              piVar20 = piVar21;
              for (lVar10 = 0x200; lVar10 != 0; lVar10 = lVar10 + -1) {
                piVar20[0] = 0;
                piVar20[1] = 0;
                piVar20 = piVar20 + (ulong)bVar39 * -4 + 2;
              }
              if (0 < iVar25) {
                memcpy((void *)((long)pvVar19 + lVar13 * 4),
                       (void *)(param_5 + ((iVar25 + -1) * param_1 + lVar13) * 4),
                       (long)(iVar18 + 1) << 2);
              }
              if (0 < iVar12) {
                pvVar4 = pvVar34;
                __src = (void *)(param_5 + (iVar25 * param_1 + lVar13) * 4);
                iVar32 = iVar25;
                do {
                  pvVar34 = pvVar19;
                  pvVar19 = pvVar4;
                  iVar36 = iVar32 + 1;
                  memcpy((void *)((long)pvVar19 + lVar13 * 4),__src,
                         (long)(int)((uint)(iVar36 < param_2) + iVar18) << 2);
                  puVar14 = local_3148;
                  iVar6 = iVar31;
                  if ((iVar32 < 1) || (iVar16 < 2)) {
                    if (param_9 == 0) goto LAB_00101198;
                    if (iVar35 == 0) {
                      if (iVar32 != 0) goto LAB_001012e3;
                      (*_VP8LPredictorsSub)(pvVar19,0,1,local_3148);
                      lVar10 = 4;
                      puVar14 = local_3148 + 1;
                      iVar6 = iVar31 + -1;
                    }
                    else {
                      lVar10 = (long)iVar35 << 2;
                      if (iVar32 != 0) goto LAB_0010130e;
                    }
                    (*_memcpy)(lVar10 + (long)pvVar19,0,iVar6,puVar14);
                  }
                  else {
                    if ((iVar36 < param_2) && (2 < iVar17)) {
                      MaxDiffsForRow_part_0(iVar17,param_1,__src,lVar7 + lVar13,param_10);
                    }
                    if (param_9 == 0) {
LAB_00101198:
                      GetResidual_part_0(param_1,param_2,pvVar34,pvVar19,lVar7,uVar28 & 0xffffffff,
                                         iVar35,iVar31 + iVar35,iVar32,iVar16,param_10,local_3148);
                    }
                    else {
                      if (iVar35 == 0) {
LAB_001012e3:
                        (*_WebPReportProgress)(pvVar19,pvVar34,1,local_3148);
                        lVar10 = 4;
                        puVar14 = local_3148 + 1;
                        iVar6 = iVar31 + -1;
                      }
                      else {
                        lVar10 = (long)iVar35 << 2;
                      }
LAB_0010130e:
                      (**(code **)(&VP8LPredictorsSub + uVar28 * 8))
                                (lVar10 + (long)pvVar19,(long)pvVar34 + lVar10,iVar6,puVar14);
                    }
                  }
                  puVar14 = local_3148;
                  if (0 < iVar31) {
                    do {
                      uVar2 = *puVar14;
                      puVar14 = puVar14 + 1;
                      piVar21[uVar2 >> 0x18] = piVar21[uVar2 >> 0x18] + 1;
                      piVar21[(ulong)(uVar2 >> 0x10 & 0xff) + 0x100] =
                           piVar21[(ulong)(uVar2 >> 0x10 & 0xff) + 0x100] + 1;
                      piVar21[(ulong)(uVar2 >> 8 & 0xff) + 0x200] =
                           piVar21[(ulong)(uVar2 >> 8 & 0xff) + 0x200] + 1;
                      piVar21[(ulong)(uVar2 & 0xff) + 0x300] =
                           piVar21[(ulong)(uVar2 & 0xff) + 0x300] + 1;
                    } while (puVar14 != local_3148 + iVar31);
                  }
                  __src = (void *)((long)__src + lVar37);
                  pvVar4 = pvVar34;
                  iVar32 = iVar36;
                } while (iVar36 != iVar12 + iVar25);
              }
              auVar44 = (undefined1  [16])0x0;
              piVar20 = piVar21;
              piVar15 = local_3048;
              do {
                fVar40 = (float)*piVar20;
                lVar10 = 0;
                fVar43 = _LC6;
                do {
                  lVar11 = lVar10 + 4;
                  fVar42 = (float)(*(int *)((long)piVar20 + lVar10 + 4) +
                                  *(int *)((long)piVar20 + (0x3fc - lVar10))) * fVar43;
                  fVar43 = fVar43 * _LC2;
                  fVar40 = fVar40 + fVar42;
                  lVar10 = lVar11;
                } while (lVar11 != 0x3c);
                dVar41 = (double)fVar40 * __LC3;
                piVar22 = piVar15 + 0x100;
                fVar43 = (float)(*_VP8LCombinedShannonEntropy)(piVar20,piVar15);
                fVar43 = (float)dVar41 + auVar44._0_4_ + fVar43;
                auVar44 = ZEXT416((uint)fVar43);
                piVar20 = piVar20 + 0x100;
                piVar15 = piVar22;
              } while (piVar22 != local_2048);
              if (local_3210 == uVar27) {
                auVar44 = ZEXT416((uint)(fVar43 - __LC7));
              }
              if (local_320c == uVar27) {
                auVar44._0_4_ = auVar44._0_4_ - __LC7;
              }
              piVar20 = piVar21;
              if (auVar44._0_4_ < local_3220) {
                piVar20 = local_3208;
                local_3220 = auVar44._0_4_;
                local_3208 = piVar21;
                local_31ec = uVar27;
              }
              uVar28 = uVar28 + 1;
              piVar15 = local_3048;
              piVar21 = piVar20;
            } while (uVar28 != 0xe);
            do {
              lVar13 = 0;
              do {
                piVar21 = (int *)((long)piVar15 + lVar13);
                iVar31 = piVar21[1];
                iVar35 = piVar21[2];
                iVar17 = piVar21[3];
                piVar20 = (int *)((long)local_3208 + lVar13);
                iVar32 = piVar20[1];
                iVar18 = piVar20[2];
                iVar6 = piVar20[3];
                piVar22 = (int *)((long)piVar15 + lVar13);
                *piVar22 = *piVar21 + *piVar20;
                piVar22[1] = iVar31 + iVar32;
                piVar22[2] = iVar35 + iVar18;
                piVar22[3] = iVar17 + iVar6;
                lVar13 = lVar13 + 0x10;
              } while (lVar13 != 0x400);
              piVar15 = piVar15 + 0x100;
              local_3208 = local_3208 + 0x100;
            } while (piVar15 != local_2048);
            param_7[(long)(int)(local_31cc + uVar26) + uVar29] = local_31ec << 8 | 0xff000000;
            uVar29 = uVar29 + 1;
          } while (uVar26 != uVar29);
        }
        iVar12 = WebPReportProgress(param_11,iVar1 + iVar5 / (int)uVar24,param_13);
        if (iVar12 == 0) goto LAB_00100d31;
        uVar23 = uVar23 + 1;
        local_31cc = local_31cc + uVar26;
        iVar5 = iVar5 + param_12;
      } while (uVar24 != uVar23);
    }
  }
  else {
    uVar24 = uVar24 * uVar26;
    if (0 < (int)uVar24) {
      puVar8 = param_7;
      if ((uVar24 & 1) != 0) {
        *param_7 = 0xff000b00;
        puVar8 = param_7 + 1;
        if (param_7 + 1 == param_7 + (int)uVar24) goto LAB_00100a90;
      }
      do {
        *puVar8 = 0xff000b00;
        puVar9 = puVar8 + 2;
        puVar8[1] = 0xff000b00;
        puVar8 = puVar9;
      } while (puVar9 != param_7 + (int)uVar24);
    }
  }
LAB_00100a90:
  local_3298 = lVar7 + param_1;
  if (0 < param_2) {
    iVar30 = 0;
    do {
      pvVar34 = param_6;
      iVar5 = iVar30 + 1;
      iVar12 = param_1 * iVar30;
      pvVar19 = (void *)(param_5 + (long)iVar12 * 4);
      memcpy(pvVar34,pvVar19,(long)(int)((uint)(iVar5 < param_2) + param_1) << 2);
      lVar37 = local_3298;
      if (param_4 == 0) {
        lVar13 = lVar7;
        if (((iVar16 < 2) || (lVar37 = lVar7, lVar13 = local_3298, param_2 <= iVar30 + 2)) ||
           (param_1 < 3)) {
          local_3298 = lVar13;
          lVar7 = local_3298;
          if (param_1 < 1) goto joined_r0x00100b37;
        }
        else {
          MaxDiffsForRow_part_0
                    (param_1,param_1,param_5 + (long)(param_1 + iVar12) * 4,lVar7,param_10);
        }
        iVar25 = 0;
        do {
          while( true ) {
            bVar39 = *(byte *)((long)param_7 +
                              (long)(int)((iVar25 >> (param_3 & 0x1f)) +
                                         (iVar30 >> (param_3 & 0x1f)) * uVar26) * 4 + 1);
            uVar29 = (ulong)bVar39;
            iVar31 = (1 << (param_3 & 0x1f)) + iVar25;
            lVar13 = param_5 + ((long)iVar12 + (long)iVar25) * 4;
            if (param_1 < iVar31) {
              iVar31 = param_1;
            }
            lVar7 = local_3298;
            if (param_9 == 0) break;
            iVar35 = iVar31 - iVar25;
            if (iVar25 == 0) {
              if (iVar30 != 0) {
                lVar13 = lVar13 + 4;
                iVar35 = iVar35 + -1;
                (*_WebPReportProgress)(pvVar34,pvVar33,1);
                uVar29 = (ulong)(int)(uint)bVar39;
                lVar10 = 4;
LAB_00100d67:
                (**(code **)(&VP8LPredictorsSub + uVar29 * 8))
                          ((long)pvVar34 + lVar10,(long)pvVar33 + lVar10,iVar35,lVar13);
                goto LAB_00100c2d;
              }
              iVar35 = iVar35 + -1;
              (*_VP8LPredictorsSub)(pvVar34,0,1);
              lVar10 = 4;
              lVar13 = lVar13 + 4;
            }
            else {
              lVar10 = (long)iVar25 << 2;
              if (iVar30 != 0) goto LAB_00100d67;
            }
            (*_memcpy)((long)pvVar34 + lVar10,0,iVar35,lVar13);
            iVar25 = iVar31;
            if (param_1 <= iVar31) goto joined_r0x00100b37;
          }
          GetResidual_part_0(param_1,param_2,pvVar33,pvVar34,local_3298,uVar29,iVar25,iVar31,iVar30,
                             iVar16,param_10,lVar13);
LAB_00100c2d:
          iVar25 = iVar31;
        } while (iVar31 < param_1);
      }
      else if (iVar30 == 0) {
        (*_VP8LPredictorsSub)(pvVar34,0);
        (*_memcpy)((long)pvVar34 + 4,0,iVar38,(long)pvVar19 + 4);
        iVar5 = 1;
      }
      else {
        (*_WebPReportProgress)(pvVar34,pvVar33,1,pvVar19);
        (*_DAT_00103080)((long)pvVar34 + 4,(long)pvVar33 + 4,iVar38,(long)pvVar19 + 4);
      }
joined_r0x00100b37:
      iVar30 = iVar5;
      local_3298 = lVar37;
      param_6 = pvVar33;
      pvVar33 = pvVar34;
    } while (iVar30 < param_2);
  }
  WebPReportProgress(param_11,iVar1 + param_12,param_13);
LAB_00100d31:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
VP8LColorSpaceTransform
          (int param_1,int param_2,byte param_3,int param_4,long param_5,long param_6,
          undefined8 param_7,int param_8,int *param_9)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  int *piVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  float local_958;
  undefined1 local_948;
  undefined1 local_947;
  undefined1 local_946;
  undefined1 local_945;
  uint local_944;
  undefined1 local_91e;
  ulong local_910;
  uint local_900;
  uint local_8e4;
  int local_890;
  undefined1 local_85b;
  undefined1 local_85a;
  undefined1 local_859;
  undefined8 local_858;
  undefined8 uStack_850;
  int local_848 [256];
  int local_448 [256];
  undefined4 local_47;
  undefined3 uStack_43;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = 1 << (param_3 & 0x1f);
  uVar5 = (uint)(iVar4 + -1 + param_1) >> (param_3 & 0x1f);
  uVar6 = (uint)(iVar4 + -1 + param_2) >> (param_3 & 0x1f);
  iVar2 = *param_9;
  piVar26 = local_848;
  for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
    piVar26[0] = 0;
    piVar26[1] = 0;
    piVar26 = piVar26 + 2;
  }
  piVar26 = local_448;
  for (lVar14 = 0x80; lVar14 != 0; lVar14 = lVar14 + -1) {
    piVar26[0] = 0;
    piVar26[1] = 0;
    piVar26 = piVar26 + 2;
  }
  if (0 < (int)uVar6) {
    local_91e = 0;
    local_944 = 0;
    local_945 = 0;
    local_948 = 0;
    iVar7 = (param_4 * 7 >> 8) + 4;
    local_946 = 0;
    iVar20 = 0;
    local_890 = 0;
    local_8e4 = 0;
    local_947 = 0;
    do {
      if (0 < (int)uVar5) {
        local_910 = 0;
        iVar15 = local_8e4 << (param_3 & 0x1f);
        iVar8 = iVar4 + iVar15;
        if (param_2 < iVar4 + iVar15) {
          iVar8 = param_2;
        }
        iVar9 = iVar8 - iVar15;
        iVar10 = param_1 * iVar15;
        iVar3 = param_2 - iVar15;
        if (iVar4 < param_2 - iVar15) {
          iVar3 = iVar4;
        }
        do {
          iVar11 = (int)local_910 << (param_3 & 0x1f);
          iVar21 = iVar11 + iVar4;
          if (param_1 < iVar11 + iVar4) {
            iVar21 = param_1;
          }
          if (local_8e4 != 0) {
            uVar24 = *(uint *)(param_6 + (long)(int)((iVar20 - uVar5) + (int)local_910) * 4);
            local_944 = uVar24 >> 8 & 0xff;
            local_945 = (undefined1)uVar24;
            local_91e = (undefined1)(uVar24 >> 0x10);
          }
          iVar16 = iVar21 - iVar11;
          lVar12 = (long)iVar11 + (long)iVar10;
          lVar14 = param_5 + lVar12 * 4;
          fVar27 = (float)GetPredictionCostCrossColorRed_isra_0
                                    (lVar14,param_1,iVar16,iVar9,local_948,local_945,0,local_848);
          if (iVar7 < 1) {
            local_900 = 0;
            iVar25 = 1;
            local_948 = 0;
          }
          else {
            local_900 = 0;
            iVar25 = 0;
            do {
              iVar17 = 0x20 >> ((byte)iVar25 & 0x1f);
              iVar23 = -iVar17;
              do {
                fVar28 = (float)GetPredictionCostCrossColorRed_isra_0
                                          (lVar14,param_1,iVar16,iVar9,local_948,local_945,
                                           local_900 + iVar23,local_848);
                if (fVar28 < fVar27) {
                  local_900 = local_900 + iVar23;
                  fVar27 = fVar28;
                }
                iVar23 = iVar23 + iVar17 * 2;
              } while (iVar23 <= iVar17);
              iVar25 = iVar25 + 1;
            } while (iVar7 != iVar25);
            local_948 = (undefined1)local_900;
            local_900 = local_900 & 0xff;
            iVar25 = 1;
            if (0x18 < param_4) {
              iVar25 = (uint)(0x32 < param_4) * 3 + 4;
            }
          }
          uVar24 = 0;
          uVar22 = 0;
          local_47 = 0x4081010;
          uStack_43 = 0x20202;
          local_858 = __LC8;
          uStack_850 = _UNK_00101e28;
          local_958 = (float)GetPredictionCostCrossColorBlue_isra_0
                                       (lVar14,param_1,iVar16,iVar9,local_947,local_946,
                                        (undefined1)local_944,local_91e,0,0,local_448);
          lVar18 = 0;
LAB_00101a38:
          do {
            iVar17 = (int)*(char *)((long)&local_47 + lVar18);
            piVar26 = (int *)&local_858;
            do {
              uVar1 = *(char *)((long)piVar26 + 1) * iVar17 + uVar24;
              uVar19 = (char)*piVar26 * iVar17 + uVar22;
              fVar27 = (float)GetPredictionCostCrossColorBlue_isra_0
                                        (lVar14,param_1,iVar16,iVar9,local_947,local_946,
                                         (undefined1)local_944,local_91e,uVar19,uVar1,local_448);
              if (fVar27 < local_958) {
                uVar24 = uVar1;
                uVar22 = uVar19;
                local_958 = fVar27;
              }
              if ((int)lVar18 == 4 && param_4 < 0x19) {
                if ((uVar22 == 0 && uVar24 == 0) && (iVar17 == 2)) goto LAB_00101dc7;
                lVar18 = 5;
                goto LAB_00101a38;
              }
              piVar26 = (int *)((long)piVar26 + 2);
            } while (local_848 != piVar26);
            if ((uVar22 == 0 && uVar24 == 0) && (iVar17 == 2)) {
LAB_00101dc7:
              local_946 = 0;
              local_947 = 0;
              goto LAB_00101b2e;
            }
            lVar18 = lVar18 + 1;
          } while (iVar25 != lVar18);
          local_947 = (undefined1)uVar22;
          local_946 = (undefined1)uVar24;
          local_900 = local_900 | (uVar24 & 0xff) << 0x10 | (uVar22 & 0xff) << 8;
LAB_00101b2e:
          *(uint *)(param_6 + (long)iVar20 * 4 + local_910 * 4) = local_900 | 0xff000000;
          local_85b = local_948;
          local_85a = local_947;
          local_859 = local_946;
          iVar16 = param_1 - iVar11;
          if (iVar4 < param_1 - iVar11) {
            iVar16 = iVar4;
          }
          iVar25 = iVar3;
          if (0 < iVar3) {
            do {
              iVar25 = iVar25 + -1;
              (*_VP8LTransformColor)(&local_85b,lVar14,iVar16);
              lVar14 = lVar14 + (long)param_1 * 4;
            } while (iVar25 != 0);
          }
          iVar21 = iVar21 + iVar10;
          iVar11 = iVar11 + iVar10;
          iVar16 = iVar15;
          if (iVar15 < iVar8) {
            do {
              iVar25 = iVar11 - param_1;
              lVar14 = lVar12;
              iVar17 = iVar11;
              while (iVar17 < iVar21) {
                while( true ) {
                  uVar24 = *(uint *)(param_5 + lVar14 * 4);
                  if ((((int)lVar14 < 2) || (*(uint *)(param_5 + -8 + lVar14 * 4) != uVar24)) ||
                     (*(uint *)(param_5 + -4 + lVar14 * 4) != uVar24)) break;
                  lVar14 = lVar14 + 1;
                  iVar25 = iVar25 + 1;
                  if (iVar21 <= (int)lVar14) goto LAB_00101cb0;
                }
                if (param_1 + 1 < (int)lVar14) {
                  lVar18 = (long)iVar25;
                  if (((*(int *)(param_5 + -8 + lVar14 * 4) != *(int *)(param_5 + -8 + lVar18 * 4))
                      || (*(int *)(param_5 + -4 + lVar14 * 4) != *(int *)(param_5 + -4 + lVar18 * 4)
                         )) || (*(uint *)(param_5 + lVar18 * 4) != uVar24)) goto LAB_00101c60;
                }
                else {
LAB_00101c60:
                  local_448[(byte)uVar24] = local_448[(byte)uVar24] + 1;
                  local_848[uVar24 >> 0x10 & 0xff] = local_848[uVar24 >> 0x10 & 0xff] + 1;
                }
                lVar14 = lVar14 + 1;
                iVar25 = iVar25 + 1;
                iVar17 = (int)lVar14;
              }
LAB_00101cb0:
              iVar16 = iVar16 + 1;
              iVar11 = iVar11 + param_1;
              iVar21 = iVar21 + param_1;
              lVar12 = lVar12 + param_1;
            } while (iVar16 != iVar8);
          }
          local_910 = local_910 + 1;
        } while (uVar5 != local_910);
      }
      uVar13 = WebPReportProgress(param_7,local_890 / (int)uVar6 + iVar2,param_9);
      if ((int)uVar13 == 0) goto LAB_00101d5e;
      local_8e4 = local_8e4 + 1;
      iVar20 = iVar20 + uVar5;
      local_890 = local_890 + param_8;
    } while (uVar6 != local_8e4);
  }
  uVar13 = 1;
LAB_00101d5e:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
}


