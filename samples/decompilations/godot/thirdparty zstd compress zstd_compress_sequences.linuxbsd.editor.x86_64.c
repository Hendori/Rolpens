
void ZSTD_NCountCost(undefined8 param_1,undefined4 param_2,ulong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined1 auStack_2a8 [112];
  undefined1 local_238 [520];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FSE_optimalTableLog(param_4,param_3,param_2);
  uVar2 = FSE_normalizeCount(auStack_2a8,uVar1,param_1,param_3,param_2,0x7ff < param_3);
  if (uVar2 < 0xffffffffffffff89) {
    FSE_writeNCount(local_238,0x200,auStack_2a8,param_2,uVar1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



long ZSTD_encodeSequences_bmi2
               (ulong *param_1,ulong param_2,ushort *param_3,long param_4,ushort *param_5,
               long param_6,ushort *param_7,long param_8,long param_9,ulong param_10,int param_11)

{
  int *piVar1;
  ulong *puVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong local_90;
  
  puVar2 = (ulong *)((long)param_1 + (param_2 - 8));
  if (8 < param_2) {
    uVar7 = *param_3;
    bVar4 = *(byte *)(param_4 + -1 + param_10);
    lVar14 = 8;
    if (uVar7 != 0) {
      lVar14 = (long)(1 << (uVar7 - 1 & 0x1f)) * 4 + 4;
    }
    uVar8 = *param_5;
    piVar1 = (int *)((long)param_3 + (ulong)bVar4 * 8 + lVar14);
    iVar10 = piVar1[1];
    uVar20 = iVar10 + 0x8000;
    lVar15 = 8;
    uVar17 = (ulong)param_3[((long)(ulong)((uVar20 & 0xffff0000) - iVar10) >>
                            ((ulong)(uVar20 >> 0x10) & 0x3f)) + (long)*piVar1 + 2];
    bVar5 = *(byte *)(param_6 + -1 + param_10);
    uVar20 = (uint)bVar5;
    if (uVar8 != 0) {
      lVar15 = (long)(1 << (uVar8 - 1 & 0x1f)) * 4 + 4;
    }
    uVar9 = *param_7;
    piVar1 = (int *)((long)param_5 + (ulong)bVar5 * 8 + lVar15);
    iVar10 = piVar1[1];
    uVar21 = iVar10 + 0x8000;
    local_90 = (ulong)param_5[((long)(ulong)((uVar21 & 0xffff0000) - iVar10) >>
                              ((ulong)(uVar21 >> 0x10) & 0x3f)) + (long)*piVar1 + 2];
    uVar12 = (ulong)*(byte *)(param_8 + -1 + param_10);
    lVar11 = 8;
    if (uVar9 != 0) {
      lVar11 = (long)(1 << (uVar9 - 1 & 0x1f)) * 4 + 4;
    }
    piVar1 = (int *)((long)param_7 + uVar12 * 8 + lVar11);
    iVar10 = piVar1[1];
    uVar21 = iVar10 + 0x8000;
    uVar13 = (ulong)param_7[((long)(ulong)((uVar21 & 0xffff0000) - iVar10) >>
                            ((ulong)(uVar21 >> 0x10) & 0x3f)) + (long)*piVar1 + 2];
    bVar6 = LL_bits[uVar12];
    puVar3 = (uint *)(param_9 + -8 + param_10 * 8);
    uVar19 = (uint)(byte)ML_bits[bVar4] + (uint)bVar6;
    uVar23 = (ulong)uVar19;
    uVar21 = *puVar3;
    uVar12 = (ulong)(ushort)puVar3[1] & (ulong)*(uint *)(BIT_mask + (ulong)(uint)bVar6 * 4) |
             ((ulong)*(ushort *)((long)puVar3 + 6) &
             (ulong)*(uint *)(BIT_mask + (ulong)(byte)ML_bits[bVar4] * 4)) << ((ulong)bVar6 & 0x3f);
    puVar16 = param_1;
    if (param_11 == 0) {
      uVar19 = uVar19 + bVar5;
      uVar12 = uVar12 | (ulong)(uVar21 & *(uint *)(BIT_mask + (ulong)bVar5 * 4)) << (uVar23 & 0x3f);
    }
    else {
      if (bVar5 < 0x38) {
        uVar12 = uVar12 | (ulong)(uVar21 & *(uint *)(BIT_mask + (ulong)(uint)bVar5 * 4)) <<
                          (uVar23 & 0x3f);
      }
      else {
        uVar22 = bVar5 - 0x38;
        uVar20 = 0x38;
        if (uVar22 != 0) {
          uVar12 = (ulong)(uVar21 & *(uint *)(BIT_mask + (ulong)uVar22 * 4)) << (uVar23 & 0x3f) |
                   uVar12;
          *param_1 = uVar12;
          uVar21 = uVar22 + uVar19 >> 3;
          puVar16 = (ulong *)((ulong)uVar21 + (long)param_1);
          if (puVar2 <= puVar16) {
            puVar16 = puVar2;
          }
          uVar19 = uVar22 + uVar19 & 7;
          uVar12 = uVar12 >> ((ulong)(uVar21 * 8) & 0x3f);
        }
      }
      uVar19 = uVar19 + uVar20;
    }
    *puVar16 = uVar12;
    puVar16 = (ulong *)((long)puVar16 + (ulong)(uVar19 >> 3));
    if (puVar2 <= puVar16) {
      puVar16 = puVar2;
    }
    uVar20 = uVar19 & 7;
    uVar12 = uVar12 >> ((ulong)((uVar19 >> 3) << 3) & 0x3f);
    uVar23 = param_10 - 2;
    if (1 < param_10) {
      do {
        bVar4 = *(byte *)(param_6 + uVar23);
        uVar18 = (ulong)bVar4;
        bVar5 = LL_bits[*(byte *)(param_8 + uVar23)];
        piVar1 = (int *)((long)param_5 + uVar18 * 8 + lVar15);
        bVar6 = ML_bits[*(byte *)(param_4 + uVar23)];
        lVar24 = (uint)piVar1[1] + local_90;
        uVar25 = lVar24 >> 0x10;
        uVar27 = *(uint *)(BIT_mask + uVar25 * 4) & local_90;
        uVar21 = uVar20 + (int)((ulong)lVar24 >> 0x10);
        local_90 = (ulong)param_5[((long)local_90 >> (uVar25 & 0x3f)) + (long)*piVar1 + 2];
        piVar1 = (int *)((long)param_3 + (ulong)*(byte *)(param_4 + uVar23) * 8 + lVar14);
        lVar24 = (uint)piVar1[1] + uVar17;
        uVar25 = lVar24 >> 0x10;
        uVar26 = *(uint *)(BIT_mask + uVar25 * 4) & uVar17;
        uVar19 = uVar21 + (int)((ulong)lVar24 >> 0x10);
        uVar17 = (ulong)param_3[((long)uVar17 >> (uVar25 & 0x3f)) + (long)*piVar1 + 2];
        piVar1 = (int *)((long)param_7 + (ulong)*(byte *)(param_8 + uVar23) * 8 + lVar11);
        lVar24 = (uint)piVar1[1] + uVar13;
        uVar25 = lVar24 >> 0x10;
        uVar22 = uVar19 + (int)((ulong)lVar24 >> 0x10);
        uVar12 = (*(uint *)(BIT_mask + uVar25 * 4) & uVar13) << ((ulong)uVar19 & 0x3f) |
                 uVar27 << uVar20 | uVar26 << ((ulong)uVar21 & 0x3f) | uVar12;
        uVar20 = (uint)bVar4;
        uVar21 = (uint)bVar5 + (uint)bVar6 + uVar20;
        uVar13 = (ulong)param_7[((long)uVar13 >> (uVar25 & 0x3f)) + (long)*piVar1 + 2];
        if (0x1e < uVar21) {
          *puVar16 = uVar12;
          uVar19 = uVar22 >> 3;
          puVar16 = (ulong *)((ulong)uVar19 + (long)puVar16);
          if (puVar2 <= puVar16) {
            puVar16 = puVar2;
          }
          uVar22 = uVar22 & 7;
          uVar12 = uVar12 >> ((ulong)(uVar19 << 3) & 0x3f);
        }
        uVar12 = ((ulong)*(ushort *)(param_9 + 6 + uVar23 * 8) &
                 (ulong)*(uint *)(BIT_mask + (ulong)bVar6 * 4)) << ((ulong)(bVar5 + uVar22) & 0x3f)
                 | ((ulong)*(ushort *)(param_9 + 4 + uVar23 * 8) &
                   (ulong)*(uint *)(BIT_mask + (ulong)bVar5 * 4)) << ((ulong)uVar22 & 0x3f) | uVar12
        ;
        uVar22 = bVar5 + uVar22 + (uint)bVar6;
        uVar25 = (ulong)uVar22;
        uVar19 = *(uint *)(param_9 + uVar23 * 8);
        if (uVar21 < 0x39) {
          if (param_11 == 0) goto LAB_001006d0;
          uVar12 = uVar12 | (ulong)(*(uint *)(BIT_mask + uVar18 * 4) & uVar19) << (uVar25 & 0x3f);
        }
        else {
          *puVar16 = uVar12;
          uVar21 = uVar22 >> 3;
          puVar16 = (ulong *)((ulong)uVar21 + (long)puVar16);
          if (puVar2 <= puVar16) {
            puVar16 = puVar2;
          }
          uVar22 = uVar22 & 7;
          uVar25 = (ulong)uVar22;
          uVar12 = uVar12 >> ((ulong)(uVar21 << 3) & 0x3f);
          if (param_11 == 0) {
LAB_001006d0:
            uVar22 = (uint)uVar25;
            uVar12 = uVar12 | (ulong)(uVar19 & *(uint *)(BIT_mask + uVar18 * 4)) << (uVar25 & 0x3f);
          }
          else if (uVar20 < 0x38) {
            uVar12 = uVar12 | (ulong)(uVar19 & *(uint *)(BIT_mask + uVar18 * 4)) << uVar25;
          }
          else {
            uVar21 = bVar4 - 0x38;
            uVar20 = 0x38;
            if (uVar21 != 0) {
              uVar12 = (ulong)(uVar19 & *(uint *)(BIT_mask + (ulong)uVar21 * 4)) << uVar25 | uVar12;
              uVar19 = uVar21 + uVar22 >> 3;
              *puVar16 = uVar12;
              puVar16 = (ulong *)((ulong)uVar19 + (long)puVar16);
              if (puVar2 <= puVar16) {
                puVar16 = puVar2;
              }
              uVar22 = uVar21 + uVar22 & 7;
              uVar12 = uVar12 >> ((ulong)(uVar19 << 3) & 0x3f);
            }
          }
        }
        *puVar16 = uVar12;
        uVar21 = uVar20 + uVar22 >> 3;
        puVar16 = (ulong *)((ulong)uVar21 + (long)puVar16);
        if (puVar2 <= puVar16) {
          puVar16 = puVar2;
        }
        uVar20 = uVar20 + uVar22 & 7;
        uVar23 = uVar23 - 1;
        uVar12 = uVar12 >> ((ulong)(uVar21 << 3) & 0x3f);
      } while (uVar23 < param_10);
    }
    uVar21 = uVar7 + uVar20;
    uVar12 = (*(uint *)(BIT_mask + (ulong)(uint)uVar7 * 4) & uVar17) << uVar20 | uVar12;
    uVar20 = uVar21 >> 3;
    *puVar16 = uVar12;
    puVar16 = (ulong *)((long)puVar16 + (ulong)uVar20);
    if (puVar2 <= puVar16) {
      puVar16 = puVar2;
    }
    uVar21 = uVar21 & 7;
    uVar19 = uVar8 + uVar21;
    uVar17 = (*(uint *)(BIT_mask + (ulong)(uint)uVar8 * 4) & local_90) << uVar21 |
             uVar12 >> ((ulong)(uVar20 << 3) & 0x3f);
    uVar20 = uVar19 >> 3;
    *puVar16 = uVar17;
    puVar16 = (ulong *)((long)puVar16 + (ulong)uVar20);
    if (puVar2 <= puVar16) {
      puVar16 = puVar2;
    }
    uVar19 = uVar19 & 7;
    uVar21 = uVar9 + uVar19;
    uVar17 = (*(uint *)(BIT_mask + (ulong)(uint)uVar9 * 4) & uVar13) << uVar19 |
             uVar17 >> ((ulong)(uVar20 << 3) & 0x3f);
    uVar20 = uVar21 >> 3;
    *puVar16 = uVar17;
    puVar16 = (ulong *)((long)puVar16 + (ulong)uVar20);
    if (puVar2 <= puVar16) {
      puVar16 = puVar2;
    }
    uVar21 = uVar21 & 7;
    uVar19 = uVar21 + 1;
    *puVar16 = uVar17 >> ((ulong)(uVar20 << 3) & 0x3f) | 1L << uVar21;
    puVar16 = (ulong *)((long)puVar16 + (ulong)(uVar19 >> 3));
    if (((puVar16 <= puVar2) && (puVar2 != puVar16)) &&
       (lVar14 = (long)puVar16 + ((1 - (long)param_1) - (ulong)((uVar19 & 7) == 0)), lVar14 != 0)) {
      return lVar14;
    }
  }
  return -0x46;
}



ulong ZSTD_fseBitCost(ushort *param_1,long param_2,uint param_3)

{
  ushort uVar1;
  uint uVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  bool bVar9;
  
  lVar6 = 8;
  uVar1 = *param_1;
  bVar4 = (byte)uVar1;
  if (uVar1 != 0) {
    lVar6 = (long)(1 << (bVar4 - 1 & 0x1f)) * 4 + 4;
  }
  uVar3 = 0xffffffffffffffff;
  if (param_3 <= param_1[1]) {
    uVar3 = 0;
    uVar7 = 0;
    do {
      uVar2 = *(uint *)(param_2 + uVar7 * 4);
      if (uVar2 != 0) {
        uVar8 = *(uint *)((long)param_1 + uVar7 * 8 + lVar6 + 4);
        iVar5 = (uVar8 >> 0x10) + 1;
        uVar8 = iVar5 * 0x100 -
                ((iVar5 * 0x10000 - (uVar8 + (1 << (bVar4 & 0x1f)))) * 0x100 >> (bVar4 & 0x1f));
        if ((uVar1 + 1) * 0x100 <= uVar8) {
          return 0xffffffffffffffff;
        }
        uVar3 = uVar3 + (ulong)uVar2 * (ulong)uVar8;
      }
      bVar9 = uVar7 != param_3;
      uVar7 = uVar7 + 1;
    } while (bVar9);
    uVar3 = uVar3 >> 8;
  }
  return uVar3;
}



ulong ZSTD_crossEntropyCost(long param_1,char param_2,long param_3,uint param_4)

{
  short sVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  
  uVar4 = 0;
  uVar2 = 0;
  do {
    uVar5 = (ulong)uVar4;
    sVar1 = *(short *)(param_1 + uVar5 * 2);
    iVar3 = (int)sVar1;
    if (sVar1 == -1) {
      iVar3 = 1;
    }
    uVar4 = uVar4 + 1;
    uVar2 = uVar2 + (uint)(*(int *)(param_3 + uVar5 * 4) *
                          *(int *)(kInverseProbabilityLog256 +
                                  (ulong)(uint)(iVar3 << (8U - param_2 & 0x1f)) * 4));
  } while (uVar4 <= param_4);
  return uVar2 >> 8;
}



undefined1
ZSTD_selectEncodingType
          (int *param_1,long param_2,uint param_3,ulong param_4,ulong param_5,undefined4 param_6,
          undefined8 param_7,long param_8,byte param_9,int param_10,uint param_11)

{
  short sVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (param_4 == param_5) {
    *param_1 = 0;
    return param_10 == 0 || 2 < param_4;
  }
  if (param_11 < 4) {
    if (param_10 != 0) {
      if ((*param_1 == 2) && (param_5 < 1000)) {
        return 3;
      }
      if ((param_5 < ((ulong)(10 - param_11) << (param_9 & 0x3f)) >> 3) ||
         (param_4 < param_5 >> (param_9 - 1 & 0x3f))) goto LAB_001009f8;
    }
  }
  else {
    uVar9 = 0xffffffffffffffff;
    if (param_10 != 0) {
      uVar9 = 0;
      uVar7 = 0;
      do {
        uVar10 = (ulong)uVar7;
        sVar1 = *(short *)(param_8 + uVar10 * 2);
        iVar2 = (int)sVar1;
        if (sVar1 == -1) {
          iVar2 = 1;
        }
        uVar7 = uVar7 + 1;
        uVar9 = uVar9 + (uint)(*(int *)(param_2 + uVar10 * 4) *
                              *(int *)(kInverseProbabilityLog256 +
                                      (ulong)(uint)(iVar2 << (8 - param_9 & 0x1f)) * 4));
      } while (uVar7 <= param_3);
      uVar9 = uVar9 >> 8;
    }
    uVar10 = 0xffffffffffffffff;
    if (*param_1 != 0) {
      uVar10 = ZSTD_fseBitCost(param_7,param_2,param_3);
    }
    lVar3 = ZSTD_NCountCost(param_2,param_3,param_5,param_6);
    uVar7 = 0;
    uVar4 = 0;
    do {
      iVar2 = *(int *)(param_2 + uVar4 * 4);
      if ((param_5 <= (uint)(iVar2 << 8)) || (iVar5 = 0x800, iVar2 == 0)) {
        iVar5 = *(int *)(kInverseProbabilityLog256 + ((uint)(iVar2 << 8) / param_5) * 4);
      }
      uVar6 = (int)uVar4 + 1;
      uVar4 = (ulong)uVar6;
      uVar7 = uVar7 + iVar2 * iVar5;
    } while (uVar6 <= param_3);
    uVar8 = (ulong)(uVar7 >> 8) + lVar3 * 8;
    uVar4 = uVar8;
    if (uVar10 <= uVar8) {
      uVar4 = uVar10;
    }
    if (uVar9 <= uVar4) {
LAB_001009f8:
      *param_1 = 0;
      return false;
    }
    if (uVar10 <= uVar8) {
      return 3;
    }
  }
  *param_1 = 1;
  return 2;
}



ulong ZSTD_buildCTable(undefined1 *param_1,long param_2,void *param_3,undefined4 param_4,
                      uint param_5,long param_6,undefined4 param_7,undefined1 *param_8,ulong param_9
                      ,undefined8 param_10,undefined4 param_11,undefined4 param_12,void *param_13,
                      size_t param_14,long param_15,undefined8 param_16)

{
  uint *puVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (param_5 == 2) {
    uVar3 = FSE_optimalTableLog(param_4,param_9,param_7);
    puVar1 = (uint *)(param_6 + (ulong)(byte)param_8[param_9 - 1] * 4);
    uVar2 = *puVar1;
    if (1 < uVar2) {
      *puVar1 = uVar2 - 1;
      param_9 = param_9 - 1;
    }
    uVar4 = FSE_normalizeCount(param_15,uVar3,param_6,param_9,param_7,0x7ff < param_9);
    if ((uVar4 < 0xffffffffffffff89) &&
       ((uVar5 = FSE_writeNCount(param_1,param_2,param_15,param_7,uVar3), 0xffffffffffffff88 < uVar5
        || (uVar4 = FSE_buildCTable_wksp(param_3,param_15,param_7,uVar3,param_15 + 0x6c,0x474),
           uVar4 < 0xffffffffffffff89)))) {
      uVar4 = uVar5;
    }
  }
  else if (param_5 < 3) {
    if (param_5 == 0) {
      uVar4 = FSE_buildCTable_wksp(param_3,param_10,param_12,param_11,param_15,param_16);
      if (uVar4 < 0xffffffffffffff89) {
        return 0;
      }
    }
    else {
      uVar4 = FSE_buildCTable_rle(param_3,(undefined1)param_7);
      if ((uVar4 < 0xffffffffffffff89) && (uVar4 = 0xffffffffffffffba, param_2 != 0)) {
        *param_1 = *param_8;
        uVar4 = 1;
      }
    }
  }
  else {
    uVar4 = 0xffffffffffffffff;
    if (param_5 == 3) {
      memcpy(param_3,param_13,param_14);
      return 0;
    }
  }
  return uVar4;
}



long ZSTD_encodeSequences
               (ulong *param_1,ulong param_2,ushort *param_3,long param_4,ushort *param_5,
               long param_6,ushort *param_7,long param_8,long param_9,ulong param_10,int param_11,
               int param_12)

{
  int *piVar1;
  ulong *puVar2;
  uint *puVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  ulong *puVar16;
  uint uVar17;
  ulong uVar18;
  uint uVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong local_c0;
  ulong local_b8;
  ulong local_b0;
  
  if (param_12 != 0) {
    lVar12 = ZSTD_encodeSequences_bmi2(param_1);
    return lVar12;
  }
  puVar2 = (ulong *)((long)param_1 + (param_2 - 8));
  if (8 < param_2) {
    lVar12 = 8;
    uVar6 = *param_3;
    bVar9 = *(byte *)(param_4 + -1 + param_10);
    if (uVar6 != 0) {
      lVar12 = (long)(1 << ((char)uVar6 - 1U & 0x1f)) * 4 + 4;
    }
    uVar7 = *param_5;
    piVar1 = (int *)((long)param_3 + (ulong)bVar9 * 8 + lVar12);
    iVar20 = piVar1[1];
    uVar17 = iVar20 + 0x8000;
    lVar13 = 8;
    local_b8 = (ulong)param_3[((long)(ulong)((uVar17 & 0xffff0000) - iVar20) >>
                              ((byte)(uVar17 >> 0x10) & 0x3f)) + (long)*piVar1 + 2];
    bVar4 = *(byte *)(param_6 + -1 + param_10);
    uVar17 = (uint)bVar4;
    if (uVar7 != 0) {
      lVar13 = (long)(1 << ((char)uVar7 - 1U & 0x1f)) * 4 + 4;
    }
    uVar8 = *param_7;
    piVar1 = (int *)((long)param_5 + (ulong)bVar4 * 8 + lVar13);
    iVar20 = piVar1[1];
    uVar10 = iVar20 + 0x8000;
    lVar14 = 8;
    local_c0 = (ulong)param_5[((long)(ulong)((uVar10 & 0xffff0000) - iVar20) >>
                              ((byte)(uVar10 >> 0x10) & 0x3f)) + (long)*piVar1 + 2];
    uVar15 = (ulong)*(byte *)(param_8 + -1 + param_10);
    if (uVar8 != 0) {
      lVar14 = (long)(1 << ((char)uVar8 - 1U & 0x1f)) * 4 + 4;
    }
    piVar1 = (int *)((long)param_7 + uVar15 * 8 + lVar14);
    iVar20 = piVar1[1];
    uVar10 = iVar20 + 0x8000;
    uVar24 = (ulong)param_7[((long)(ulong)((uVar10 & 0xffff0000) - iVar20) >>
                            ((byte)(uVar10 >> 0x10) & 0x3f)) + (long)*piVar1 + 2];
    bVar5 = LL_bits[uVar15];
    puVar3 = (uint *)(param_9 + -8 + param_10 * 8);
    uVar19 = (uint)(byte)ML_bits[bVar9] + (uint)bVar5;
    uVar10 = *puVar3;
    local_b0 = ((ulong)*(uint *)(BIT_mask + (ulong)(byte)ML_bits[bVar9] * 4) &
               (ulong)*(ushort *)((long)puVar3 + 6)) << (bVar5 & 0x3f) |
               (ulong)(ushort)puVar3[1] & (ulong)*(uint *)(BIT_mask + (ulong)bVar5 * 4);
    bVar9 = (byte)uVar19;
    puVar16 = param_1;
    if (param_11 == 0) {
      uVar19 = uVar19 + bVar4;
      local_b0 = local_b0 |
                 (ulong)(uVar10 & *(uint *)(BIT_mask + (ulong)bVar4 * 4)) << (bVar9 & 0x3f);
    }
    else {
      if (bVar4 < 0x38) {
        local_b0 = local_b0 |
                   (ulong)(uVar10 & *(uint *)(BIT_mask + (ulong)(uint)bVar4 * 4)) << (bVar9 & 0x3f);
      }
      else {
        uVar22 = bVar4 - 0x38;
        uVar17 = 0x38;
        if (uVar22 != 0) {
          local_b0 = (ulong)(uVar10 & *(uint *)(BIT_mask + (ulong)uVar22 * 4)) << (bVar9 & 0x3f) |
                     local_b0;
          uVar10 = uVar19 + uVar22 >> 3;
          *param_1 = local_b0;
          puVar16 = (ulong *)((ulong)uVar10 + (long)param_1);
          if (puVar2 <= puVar16) {
            puVar16 = puVar2;
          }
          uVar19 = uVar19 + uVar22 & 7;
          local_b0 = local_b0 >> ((byte)(uVar10 << 3) & 0x3f);
        }
      }
      uVar19 = uVar19 + uVar17;
    }
    *puVar16 = local_b0;
    puVar16 = (ulong *)((long)puVar16 + (ulong)(uVar19 >> 3));
    if (puVar2 <= puVar16) {
      puVar16 = puVar2;
    }
    local_b0 = local_b0 >> ((char)(uVar19 >> 3) * '\b' & 0x3fU);
    uVar19 = uVar19 & 7;
    uVar15 = param_10 - 2;
    if (1 < param_10) {
      do {
        bVar9 = *(byte *)(param_6 + uVar15);
        uVar25 = (ulong)bVar9;
        bVar4 = LL_bits[*(byte *)(param_8 + uVar15)];
        bVar5 = ML_bits[*(byte *)(param_4 + uVar15)];
        piVar1 = (int *)((long)param_5 + uVar25 * 8 + lVar13);
        lVar23 = (uint)piVar1[1] + local_c0;
        iVar20 = uVar19 + (int)((ulong)lVar23 >> 0x10);
        uVar26 = *(uint *)(BIT_mask + (lVar23 >> 0x10) * 4) & local_c0;
        local_c0 = (ulong)param_5[((long)local_c0 >> ((byte)((ulong)lVar23 >> 0x10) & 0x3f)) +
                                  (long)*piVar1 + 2];
        piVar1 = (int *)((long)param_3 + (ulong)*(byte *)(param_4 + uVar15) * 8 + lVar12);
        lVar23 = (uint)piVar1[1] + local_b8;
        iVar21 = iVar20 + (int)((ulong)lVar23 >> 0x10);
        uVar18 = *(uint *)(BIT_mask + (lVar23 >> 0x10) * 4) & local_b8;
        local_b8 = (ulong)param_3[((long)local_b8 >> ((byte)((ulong)lVar23 >> 0x10) & 0x3f)) +
                                  (long)*piVar1 + 2];
        piVar1 = (int *)((long)param_7 + (ulong)*(byte *)(param_8 + uVar15) * 8 + lVar14);
        lVar23 = (uint)piVar1[1] + uVar24;
        uVar10 = iVar21 + (int)((ulong)lVar23 >> 0x10);
        local_b0 = (*(uint *)(BIT_mask + (lVar23 >> 0x10) * 4) & uVar24) << ((byte)iVar21 & 0x3f) |
                   uVar18 << ((byte)iVar20 & 0x3f) | uVar26 << (sbyte)uVar19 | local_b0;
        uVar19 = (uint)bVar9;
        uVar17 = (uint)bVar4 + (uint)bVar5 + uVar19;
        uVar24 = (ulong)param_7[((long)uVar24 >> ((byte)((ulong)lVar23 >> 0x10) & 0x3f)) +
                                (long)*piVar1 + 2];
        if (0x1e < uVar17) {
          *puVar16 = local_b0;
          uVar22 = uVar10 >> 3;
          puVar16 = (ulong *)((ulong)uVar22 + (long)puVar16);
          if (puVar2 <= puVar16) {
            puVar16 = puVar2;
          }
          uVar10 = uVar10 & 7;
          local_b0 = local_b0 >> ((byte)(uVar22 << 3) & 0x3f);
        }
        uVar22 = bVar4 + uVar10 + (uint)bVar5;
        local_b0 = ((ulong)*(uint *)(BIT_mask + (ulong)bVar5 * 4) &
                   (ulong)*(ushort *)(param_9 + 6 + uVar15 * 8)) << ((byte)(bVar4 + uVar10) & 0x3f)
                   | ((ulong)*(uint *)(BIT_mask + (ulong)bVar4 * 4) &
                     (ulong)*(ushort *)(param_9 + 4 + uVar15 * 8)) << ((byte)uVar10 & 0x3f) |
                     local_b0;
        uVar10 = *(uint *)(param_9 + uVar15 * 8);
        if (uVar17 < 0x39) {
          uVar18 = uVar25;
          if (param_11 == 0) goto LAB_001012d0;
          local_b0 = local_b0 |
                     (ulong)(uVar10 & *(uint *)(BIT_mask + uVar25 * 4)) << ((byte)uVar22 & 0x3f);
        }
        else {
          *puVar16 = local_b0;
          uVar17 = uVar22 >> 3;
          puVar16 = (ulong *)((ulong)uVar17 + (long)puVar16);
          if (puVar2 <= puVar16) {
            puVar16 = puVar2;
          }
          uVar22 = uVar22 & 7;
          local_b0 = local_b0 >> ((byte)(uVar17 << 3) & 0x3f);
          uVar18 = (ulong)uVar19;
          if (param_11 == 0) {
LAB_001012d0:
            local_b0 = local_b0 |
                       (ulong)(uVar10 & *(uint *)(BIT_mask + uVar18 * 4)) << ((byte)uVar22 & 0x3f);
          }
          else if (uVar19 < 0x38) {
            local_b0 = local_b0 |
                       (ulong)(uVar10 & *(uint *)(BIT_mask + uVar25 * 4)) << (sbyte)uVar22;
          }
          else {
            uVar17 = bVar9 - 0x38;
            uVar19 = 0x38;
            if (uVar17 != 0) {
              uVar11 = uVar17 + uVar22 >> 3;
              local_b0 = (ulong)(uVar10 & *(uint *)(BIT_mask + (ulong)uVar17 * 4)) << (sbyte)uVar22
                         | local_b0;
              *puVar16 = local_b0;
              puVar16 = (ulong *)((ulong)uVar11 + (long)puVar16);
              if (puVar2 <= puVar16) {
                puVar16 = puVar2;
              }
              uVar22 = uVar17 + uVar22 & 7;
              local_b0 = local_b0 >> ((byte)(uVar11 << 3) & 0x3f);
            }
          }
        }
        *puVar16 = local_b0;
        uVar17 = uVar19 + uVar22 >> 3;
        puVar16 = (ulong *)((ulong)uVar17 + (long)puVar16);
        if (puVar2 <= puVar16) {
          puVar16 = puVar2;
        }
        uVar15 = uVar15 - 1;
        uVar19 = uVar19 + uVar22 & 7;
        local_b0 = local_b0 >> ((byte)(uVar17 << 3) & 0x3f);
      } while (uVar15 < param_10);
    }
    uVar10 = uVar6 + uVar19;
    local_b0 = local_b0 | (*(uint *)(BIT_mask + (ulong)(uint)uVar6 * 4) & local_b8) << (sbyte)uVar19
    ;
    uVar17 = uVar10 >> 3;
    *puVar16 = local_b0;
    puVar16 = (ulong *)((long)puVar16 + (ulong)uVar17);
    if (puVar2 <= puVar16) {
      puVar16 = puVar2;
    }
    uVar10 = uVar10 & 7;
    uVar22 = uVar7 + uVar10;
    uVar19 = uVar22 >> 3;
    uVar15 = (*(uint *)(BIT_mask + (ulong)(uint)uVar7 * 4) & local_c0) << (sbyte)uVar10 |
             local_b0 >> ((char)uVar17 * '\b' & 0x3fU);
    *puVar16 = uVar15;
    puVar16 = (ulong *)((long)puVar16 + (ulong)uVar19);
    if (puVar2 <= puVar16) {
      puVar16 = puVar2;
    }
    uVar22 = uVar22 & 7;
    uVar10 = uVar8 + uVar22;
    uVar17 = uVar10 >> 3;
    uVar15 = (*(uint *)(BIT_mask + (ulong)(uint)uVar8 * 4) & uVar24) << (sbyte)uVar22 |
             uVar15 >> ((char)uVar19 * '\b' & 0x3fU);
    *puVar16 = uVar15;
    puVar16 = (ulong *)((long)puVar16 + (ulong)uVar17);
    if (puVar2 <= puVar16) {
      puVar16 = puVar2;
    }
    uVar10 = uVar10 & 7;
    uVar19 = uVar10 + 1;
    *puVar16 = uVar15 >> ((byte)(uVar17 << 3) & 0x3f) | 1L << uVar10;
    puVar16 = (ulong *)((long)puVar16 + (ulong)(uVar19 >> 3));
    if (((puVar16 <= puVar2) && (puVar2 != puVar16)) &&
       (lVar12 = (long)puVar16 + ((1 - (long)param_1) - (ulong)((uVar19 & 7) == 0)), lVar12 != 0)) {
      return lVar12;
    }
  }
  return -0x46;
}


