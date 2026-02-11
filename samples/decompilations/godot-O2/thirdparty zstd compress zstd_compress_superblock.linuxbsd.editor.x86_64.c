
ulong ZSTD_estimateSubBlockSize_symbolType_constprop_0
                (int param_1,byte *param_2,uint param_3,long param_4,undefined8 param_5,long param_6
                ,undefined8 param_7,undefined4 param_8,uint param_9,undefined8 param_10)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = param_3;
  HIST_countFast_wksp(param_10,&local_44,param_2,param_4,param_10,0x22d8);
  if (param_1 == 0) {
    if (local_44 <= param_9) {
      uVar2 = ZSTD_crossEntropyCost(param_7,param_8,param_10);
LAB_001000bd:
      if (uVar2 < 0xffffffffffffff89) goto LAB_001000c3;
    }
    uVar2 = param_4 * 10;
  }
  else {
    if (param_1 - 2U < 2) {
      uVar2 = ZSTD_fseBitCost(param_5,param_10,local_44);
      goto LAB_001000bd;
    }
    uVar2 = 0;
LAB_001000c3:
    pbVar1 = param_2 + param_4;
    if (param_2 < pbVar1) {
      uVar3 = (ulong)*param_2;
      if (param_6 == 0) {
        while( true ) {
          param_2 = param_2 + 1;
          uVar2 = uVar2 + uVar3;
          if (pbVar1 == param_2) break;
          uVar3 = (ulong)*param_2;
        }
        uVar2 = uVar2 >> 3;
        goto LAB_00100074;
      }
      while( true ) {
        param_2 = param_2 + 1;
        uVar2 = uVar2 + *(byte *)(param_6 + uVar3);
        if (pbVar1 == param_2) break;
        uVar3 = (ulong)*param_2;
      }
    }
    uVar2 = uVar2 >> 3;
  }
LAB_00100074:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



char * ZSTD_compressSubBlock_constprop_0
                 (long param_1,int *param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
                 ulong param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
                 long param_10,undefined2 *param_11,long param_12,int param_13,uint param_14,
                 int param_15,undefined4 *param_16,undefined4 *param_17,int param_18)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  char *pcVar10;
  long lVar11;
  undefined2 *__dest;
  char *pcVar12;
  int iVar13;
  int local_70;
  ulong local_68;
  long local_60;
  
  lVar11 = (long)param_11 + 3;
  if (param_14 == 0) {
    if (0x3ff < param_6) {
      local_70 = 3;
      iVar13 = (0x3fff < param_6) + 4;
      local_68 = (ulong)iVar13;
      __dest = (undefined2 *)(lVar11 + local_68);
      *param_16 = 0;
      goto LAB_00100217;
    }
    local_70 = 3;
LAB_001002ca:
    __dest = param_11 + 3;
    *param_16 = 0;
    if (param_6 != 0) {
      local_68 = 3;
      iVar13 = 3;
      goto LAB_00100217;
    }
LAB_001002e1:
    pcVar5 = (char *)ZSTD_noCompressLiterals(lVar11,param_12 + -3,param_5);
  }
  else {
    if (param_6 < 0x338) {
      local_70 = *param_2;
      goto LAB_001002ca;
    }
    iVar13 = (0x3f37 < param_6) + 4;
    local_68 = (ulong)iVar13;
    __dest = (undefined2 *)(lVar11 + local_68);
    local_70 = *param_2;
    *param_16 = 0;
LAB_00100217:
    iVar7 = *param_2;
    if (iVar7 == 0) goto LAB_001002e1;
    if (iVar7 == 1) {
      pcVar5 = (char *)ZSTD_compressRleLiteralsBlock(lVar11,param_12 + -3,param_5);
    }
    else {
      if ((iVar7 == 2) && ((param_14 & 1) != 0)) {
        pvVar6 = memcpy(__dest,param_2 + 1,*(size_t *)(param_2 + 0x22));
        local_60 = *(long *)(param_2 + 0x22);
        __dest = (undefined2 *)((long)pvVar6 + local_60);
      }
      else {
        local_60 = 0;
      }
      if (iVar13 == 3) {
        lVar3 = HUF_compress1X_usingCTable
                          (__dest,(long)param_11 + (param_12 - (long)__dest),param_5,param_6,param_1
                           ,param_13 != 0);
      }
      else {
        lVar3 = HUF_compress4X_usingCTable();
      }
      if (0xffffffffffffff87 < lVar3 - 1U) {
        return (char *)0x0;
      }
      uVar9 = local_60 + lVar3;
      if ((((param_14 & 1) == 0) && (param_6 <= uVar9)) ||
         ((0x3ff < uVar9 && (local_68 < (ulong)(0x3fff < uVar9) + 4)))) goto LAB_001002e1;
      iVar7 = (int)param_6 * 0x10;
      iVar8 = (int)uVar9;
      if (iVar13 == 4) {
        *(int *)((long)param_11 + 3) = iVar8 * 0x40000 + local_70 + 8 + iVar7;
      }
      else if (iVar13 == 5) {
        *(char *)((long)param_11 + 7) = (char)(uVar9 >> 10);
        *(int *)((long)param_11 + 3) = local_70 + 0xc + iVar7 + iVar8 * 0x400000;
      }
      else {
        iVar13 = iVar7 + local_70 + iVar8 * 0x4000;
        *(short *)((long)param_11 + 3) = (short)iVar13;
        *(char *)((long)param_11 + 5) = (char)((uint)iVar13 >> 0x10);
      }
      pcVar5 = (char *)((long)__dest + (lVar3 - lVar11));
      *param_16 = 1;
    }
  }
  if ((char *)0xffffffffffffff88 < pcVar5) {
    return pcVar5;
  }
  if (pcVar5 != (char *)0x0) {
    pcVar5 = pcVar5 + lVar11;
    uVar1 = *(uint *)(param_10 + 4);
    *param_17 = 0;
    if ((long)param_11 + (param_12 - (long)pcVar5) < 4) {
      return (char *)0xffffffffffffffba;
    }
    if (param_4 < 0x80) {
      *pcVar5 = (char)param_4;
      pcVar10 = (char *)0x1;
      pcVar12 = pcVar5 + 1;
      if (param_4 == 0) goto LAB_00100507;
    }
    else if (param_4 < 0x7f00) {
      pcVar5[1] = (char)param_4;
      pcVar12 = pcVar5 + 2;
      *pcVar5 = (char)(param_4 >> 8) + -0x80;
    }
    else {
      *pcVar5 = -1;
      pcVar12 = pcVar5 + 3;
      *(short *)(pcVar5 + 1) = (short)param_4 + -0x7f00;
    }
    pcVar10 = pcVar12 + 1;
    bVar2 = 0x39 < uVar1;
    if (param_15 == 0) {
      *pcVar12 = -4;
      pcVar4 = (char *)ZSTD_encodeSequences
                                 (pcVar10,(long)param_11 + (param_12 - (long)pcVar10),
                                  param_1 + 0xb14,param_8,param_1 + 0x810,param_9,param_1 + 0x10c0,
                                  param_7,param_3,param_4,bVar2,param_13);
      if ((char *)0xffffffffffffff88 < pcVar4) {
        return pcVar4;
      }
      pcVar10 = pcVar10 + (long)pcVar4;
    }
    else {
      *pcVar12 = (char)param_2[0x24] * '@' + (char)param_2[0x25] * '\x10' +
                 (char)param_2[0x26] * '\x04';
      pvVar6 = memcpy(pcVar10,param_2 + 0x27,*(size_t *)(param_2 + 0x4a));
      lVar11 = *(long *)(param_2 + 0x4a) + (long)pvVar6;
      pcVar4 = (char *)ZSTD_encodeSequences
                                 (lVar11,(long)param_11 + (param_12 - lVar11),param_1 + 0xb14,
                                  param_8,param_1 + 0x810,param_9,param_1 + 0x10c0,param_7,param_3,
                                  param_4,bVar2,param_13);
      if ((char *)0xffffffffffffff88 < pcVar4) {
        return pcVar4;
      }
      pcVar10 = pcVar4 + lVar11;
      if ((*(long *)(param_2 + 0x4c) != 0) && (pcVar4 + *(long *)(param_2 + 0x4c) < (char *)0x4)) {
        return (char *)0x0;
      }
    }
    if (3 < (long)pcVar10 - (long)pcVar12) {
      *param_17 = 1;
      pcVar10 = pcVar10 + -(long)pcVar5;
      if ((char *)0xffffffffffffff88 < pcVar10) {
        return pcVar10;
      }
      if (pcVar10 != (char *)0x0) {
LAB_00100507:
        iVar13 = param_18 + -0x14 + (int)(pcVar5 + ((long)pcVar10 - (long)param_11)) * 8;
        *param_11 = (short)iVar13;
        *(char *)(param_11 + 1) = (char)((uint)iVar13 >> 0x10);
        return pcVar5 + ((long)pcVar10 - (long)param_11);
      }
    }
  }
  return (char *)0x0;
}



ulong ZSTD_compressSuperBlock
                (long param_1,undefined2 *param_2,long param_3,void *param_4,ulong param_5,
                int param_6)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  uint *puVar16;
  int iVar17;
  uint *puVar18;
  size_t __n;
  long lVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  uint uVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  uint *puVar27;
  long in_FS_OFFSET;
  bool bVar28;
  byte bVar29;
  undefined2 *local_280;
  ulong local_278;
  ulong local_258;
  long local_250;
  long local_248;
  long local_240;
  long local_230;
  int *local_200;
  int *local_1f8;
  void *local_1c8;
  int local_190;
  int local_18c;
  undefined8 local_188;
  undefined4 local_180;
  int local_178 [34];
  long local_f0;
  int local_e8;
  int local_e4;
  int local_e0;
  long local_50;
  long local_40;
  
  bVar29 = 0;
  lVar19 = param_1 + 0xe8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = ZSTD_buildBlockEntropyStats
                    (param_1 + 0x3b8,*(undefined8 *)(param_1 + 0xc80),
                     *(undefined8 *)(param_1 + 0xc88),lVar19,local_178,
                     *(undefined8 *)(param_1 + 0xdc0),0x22d8);
  if (0xffffffffffffff88 < uVar9) goto LAB_00100796;
  uVar2 = *(undefined4 *)(param_1 + 8);
  puVar5 = *(uint **)(param_1 + 0x3c0);
  lVar24 = *(long *)(param_1 + 0x3d0);
  uVar6 = *(undefined8 *)(param_1 + 0xdc0);
  puVar7 = *(undefined8 **)(param_1 + 0xc88);
  uVar9 = *(ulong *)(param_1 + 0x120);
  puVar8 = *(undefined8 **)(param_1 + 0xc80);
  puVar14 = *(uint **)(param_1 + 0x3b8);
  local_230 = *(long *)(param_1 + 0x3c8);
  local_258 = (long)puVar5 - (long)puVar14 >> 3;
  uVar25 = lVar24 - local_230;
  local_250 = *(long *)(param_1 + 0x3d8);
  local_248 = *(long *)(param_1 + 0x3e0);
  local_240 = *(long *)(param_1 + 1000);
  bVar28 = local_178[0] == 2;
  puVar27 = puVar14;
  local_280 = param_2;
  local_1c8 = param_4;
  if (local_258 == 0) {
LAB_00100d68:
    iVar17 = 1;
    local_278 = param_3;
LAB_00100db5:
    local_1f8 = &local_18c;
    local_200 = &local_190;
    local_18c = 0;
    uVar13 = uVar25;
    if (puVar5 != puVar27) {
      lVar24 = 0;
      uVar9 = 0;
      puVar18 = puVar27;
      do {
        uVar13 = (ulong)(*(ushort *)((long)puVar18 + 6) + 3);
        if ((*(int *)(param_1 + 0x404) == (int)((long)puVar18 - *(long *)(param_1 + 0x3b8) >> 3) &&
             *(int *)(param_1 + 0x400) != 1) && (*(int *)(param_1 + 0x400) == 2)) {
          uVar13 = (ulong)(*(ushort *)((long)puVar18 + 6) + 0x10003);
        }
        uVar9 = uVar9 + 1;
        lVar24 = lVar24 + uVar13;
        puVar18 = puVar18 + 2;
      } while (uVar9 < local_258);
      uVar13 = lVar24 + uVar25;
    }
    uVar9 = ZSTD_compressSubBlock_constprop_0
                      (puVar7,local_178,puVar27,local_258,local_230,uVar25,local_250,local_248,
                       local_240,lVar19,local_280,local_278,uVar2,bVar28,iVar17,local_200,local_1f8,
                       param_6);
    if (0xffffffffffffff88 < uVar9) goto LAB_00100796;
    if ((uVar9 == 0) || (uVar13 <= uVar9)) {
LAB_00100f10:
      if (bVar28 != false) {
        *puVar7 = *puVar8;
        puVar7[0x101] = puVar8[0x101];
        lVar19 = (long)puVar7 - (long)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
        puVar21 = (undefined8 *)((long)puVar8 - lVar19);
        puVar22 = (undefined8 *)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
        for (uVar9 = (ulong)((int)lVar19 + 0x810U >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
          *puVar22 = *puVar21;
          puVar21 = puVar21 + (ulong)bVar29 * -2 + 1;
          puVar22 = puVar22 + (ulong)bVar29 * -2 + 1;
        }
      }
LAB_00100f5a:
      if ((iVar17 != 0) && (((local_e8 - 1U < 2 || (local_e0 - 1U < 2)) || (local_e4 - 1U < 2))))
      goto LAB_00100fc8;
    }
    else {
      local_280 = (undefined2 *)((long)local_280 + uVar9);
      local_1c8 = (void *)((long)local_1c8 + uVar13);
      puVar27 = puVar5;
      if (local_190 == 0) {
        if (local_18c == 0) goto LAB_00100f10;
        if (bVar28 != false) {
          *puVar7 = *puVar8;
          puVar7[0x101] = puVar8[0x101];
          lVar19 = (long)puVar7 - (long)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
          puVar21 = (undefined8 *)((long)puVar8 - lVar19);
          puVar22 = (undefined8 *)((ulong)(puVar7 + 1) & 0xfffffffffffffff8);
          for (uVar9 = (ulong)((int)lVar19 + 0x810U >> 3); uVar9 != 0; uVar9 = uVar9 - 1) {
            *puVar22 = *puVar21;
            puVar21 = puVar21 + (ulong)bVar29 * -2 + 1;
            puVar22 = puVar22 + (ulong)bVar29 * -2 + 1;
          }
        }
      }
      else if (local_18c == 0) goto LAB_00100f5a;
    }
    if (local_1c8 < (void *)((long)param_4 + param_5)) {
      uVar9 = 0xffffffffffffffba;
      __n = (long)((long)param_4 + param_5) - (long)local_1c8;
      if ((ulong)((long)param_2 + (param_3 - (long)local_280)) < __n + 3) goto LAB_00100796;
      param_6 = param_6 + (int)__n * 8;
      *local_280 = (short)param_6;
      *(char *)(local_280 + 1) = (char)((uint)param_6 >> 0x10);
      memcpy((void *)((long)local_280 + 3),local_1c8,__n);
      if (puVar27 < puVar5) {
        local_188 = puVar8[0x2be];
        local_180 = *(undefined4 *)(puVar8 + 0x2bf);
        if (puVar14 < puVar27) {
          do {
            if ((*(int *)(param_1 + 0x404) == (int)((long)puVar14 - *(long *)(param_1 + 0x3b8) >> 3)
                ) && (*(int *)(param_1 + 0x400) == 1)) {
              uVar23 = 0;
            }
            else {
              uVar23 = (uint)((short)puVar14[1] == 0);
            }
            uVar4 = *puVar14;
            if (uVar4 < 4) {
              uVar23 = (uVar4 - 1) + uVar23;
              if (uVar23 != 0) {
                if (uVar23 == 3) {
                  iVar17 = (int)local_188 + -1;
LAB_00101261:
                  local_180 = local_188._4_4_;
                }
                else {
                  iVar17 = *(int *)((long)&local_188 + (ulong)uVar23 * 4);
                  if (uVar23 != 1) goto LAB_00101261;
                }
                local_188 = CONCAT44((int)local_188,iVar17);
              }
            }
            else {
              local_180 = local_188._4_4_;
              local_188 = CONCAT44((int)local_188,uVar4 - 3);
            }
            puVar14 = puVar14 + 2;
          } while (puVar14 < puVar27);
        }
        puVar7[0x2be] = local_188;
        *(undefined4 *)(puVar7 + 0x2bf) = local_180;
      }
      local_280 = (undefined2 *)((long)local_280 + __n + 3);
    }
    uVar9 = (long)local_280 - (long)param_2;
  }
  else {
    local_18c = 0xff;
    uVar13 = uVar25;
    if ((((local_178[0] != 0) && (uVar13 = 1, local_178[0] != 1)) &&
        (uVar13 = 0, local_178[0] - 2U < 2)) &&
       (uVar26 = HIST_count_wksp(uVar6,&local_18c,local_230,uVar25,uVar6,0x22d8), uVar13 = uVar25,
       uVar26 < 0xffffffffffffff89)) {
      lVar10 = HUF_estimateCompressedSize(puVar7,uVar6,local_18c);
      if (local_178[0] == 2) {
        lVar10 = lVar10 + local_f0;
      }
      uVar13 = lVar10 + 3;
    }
    lVar10 = ZSTD_estimateSubBlockSize_symbolType_constprop_0
                       (local_e4,local_240,0x1f,local_258,puVar7 + 0x102,0,OF_defaultNorm,5,0x1c,
                        uVar6);
    lVar11 = ZSTD_estimateSubBlockSize_symbolType_constprop_0
                       (local_e8,local_250,0x23,local_258,puVar7 + 0x218,LL_bits,LL_defaultNorm,6,
                        0x23,uVar6);
    uVar26 = 0x100;
    lVar12 = ZSTD_estimateSubBlockSize_symbolType_constprop_0
                       (local_e0,local_248,0x34,local_258,(long)puVar7 + 0xb14,ML_bits,
                        ML_defaultNorm,6,0x34,uVar6);
    uVar15 = uVar13 + 6 + local_50 + lVar10 + lVar11 + lVar12;
    if (uVar25 != 0) {
      uVar26 = (uVar13 << 8) / uVar25;
    }
    if (uVar15 <= param_5) {
      if (uVar9 < 0x53c) {
        uVar9 = 0x53c;
      }
      uVar9 = ((uVar9 >> 1) + uVar15) / uVar9;
      uVar20 = 1;
      if (uVar9 != 0) {
        uVar20 = uVar9;
      }
      if (uVar9 < 2) goto LAB_00100d68;
      iVar17 = 1;
      uVar25 = ((uVar15 - uVar13) * 0x100) / local_258;
      local_278 = 0;
      uVar13 = (uVar15 * 0x100) / uVar20;
      do {
        puVar18 = puVar27 + 2;
        uVar15 = 1;
        local_258 = (long)puVar5 - (long)puVar27 >> 3;
        uVar9 = (ulong)(-(uint)(local_278 == 0) & 0x7800) + (ushort)puVar27[1] * uVar26 + uVar25;
        if ((uVar9 <= uVar13) &&
           (lVar10 = (long)(int)(*(ushort *)((long)puVar27 + 6) + 3 + (uint)(ushort)puVar27[1]),
           8 < (ulong)((long)puVar5 - (long)puVar27))) {
          do {
            uVar9 = uVar9 + (ushort)puVar18[1] * uVar26 + uVar25;
            lVar10 = lVar10 + (int)(*(ushort *)((long)puVar18 + 6) + 3 + (uint)(ushort)puVar18[1]);
            if ((uVar13 < uVar9) && (uVar9 < (ulong)(lVar10 * 0x100))) goto LAB_00100b33;
            uVar15 = uVar15 + 1;
            puVar18 = puVar18 + 2;
          } while (uVar15 < local_258);
          puVar18 = puVar27 + uVar15 * 2;
        }
LAB_00100b33:
        if (puVar5 == puVar18) {
          uVar25 = lVar24 - local_230;
          local_278 = (long)param_2 + (param_3 - (long)local_280);
          goto LAB_00100db5;
        }
        local_18c = 0;
        iVar3 = *(int *)(param_1 + 0x400);
        lVar10 = 0;
        puVar16 = puVar27;
        do {
          uVar1 = (ushort)puVar16[1];
          uVar9 = (ulong)uVar1;
          if ((*(int *)(param_1 + 0x404) == (int)((long)puVar16 - *(long *)(param_1 + 0x3b8) >> 3))
             && (iVar3 == 1)) {
            uVar9 = (ulong)(uVar1 + 0x10000);
          }
          puVar16 = puVar16 + 2;
          lVar10 = lVar10 + uVar9;
        } while (puVar27 + uVar15 * 2 != puVar16);
        lVar11 = 0;
        puVar16 = puVar27;
        do {
          uVar9 = (ulong)(*(ushort *)((long)puVar16 + 6) + 3);
          if ((*(int *)(param_1 + 0x404) == (int)((long)puVar16 - *(long *)(param_1 + 0x3b8) >> 3)
               && iVar3 != 1) && (iVar3 == 2)) {
            uVar9 = (ulong)(*(ushort *)((long)puVar16 + 6) + 0x10003);
          }
          puVar16 = puVar16 + 2;
          lVar11 = lVar11 + uVar9;
        } while (puVar27 + uVar15 * 2 != puVar16);
        lVar12 = (long)param_2 + (param_3 - (long)local_280);
        uVar9 = ZSTD_compressSubBlock_constprop_0
                          (puVar7,local_178,puVar27,uVar15,local_230,lVar10,local_250,local_248,
                           local_240,lVar19,local_280,lVar12,uVar2,bVar28,iVar17,&local_190,
                           &local_18c,0);
        if (0xffffffffffffff88 < uVar9) goto LAB_00100796;
        iVar3 = iVar17;
        if ((uVar9 != 0) && (uVar9 < (ulong)(lVar10 + lVar11))) {
          local_250 = local_250 + uVar15;
          local_248 = local_248 + uVar15;
          local_240 = local_240 + uVar15;
          local_280 = (undefined2 *)((long)local_280 + uVar9);
          local_1c8 = (void *)((long)local_1c8 + lVar10 + lVar11);
          local_230 = local_230 + lVar10;
          if (local_190 != 0) {
            bVar28 = false;
          }
          lVar12 = (long)param_2 + (param_3 - (long)local_280);
          local_258 = (long)puVar5 - (long)puVar18 >> 3;
          puVar27 = puVar18;
          iVar3 = 0;
          if (local_18c == 0) {
            iVar3 = iVar17;
          }
        }
        iVar17 = iVar3;
        local_278 = local_278 + 1;
      } while (local_278 < uVar20 - 1);
      uVar25 = lVar24 - local_230;
      local_278 = lVar12;
      goto LAB_00100db5;
    }
LAB_00100fc8:
    uVar9 = 0;
  }
LAB_00100796:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar9;
}


