
ulong ZSTD_ldm_gear_feed_constprop_0
                (ulong *param_1,long param_2,ulong param_3,long param_4,uint *param_5)

{
  byte *pbVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  
  uVar3 = *param_1;
  uVar2 = param_1[1];
  if (param_3 < 4) {
    uVar4 = 0;
    goto LAB_001000f0;
  }
  uVar4 = 0;
  do {
    uVar3 = *(long *)(ZSTD_ldm_gearTab + (ulong)*(byte *)(param_2 + uVar4) * 8) + uVar3 * 2;
    if ((uVar2 & uVar3) == 0) {
      uVar6 = *param_5;
      uVar5 = uVar4 + 1;
      *(ulong *)(param_4 + (ulong)uVar6 * 8) = uVar5;
      uVar6 = uVar6 + 1;
      *param_5 = uVar6;
      if (uVar6 == 0x40) goto LAB_001000bc;
    }
    uVar3 = *(long *)(ZSTD_ldm_gearTab + (ulong)*(byte *)(param_2 + 1 + uVar4) * 8) + uVar3 * 2;
    if ((uVar2 & uVar3) == 0) {
      uVar6 = *param_5;
      uVar5 = uVar4 + 2;
      *(ulong *)(param_4 + (ulong)uVar6 * 8) = uVar5;
      uVar6 = uVar6 + 1;
      *param_5 = uVar6;
      if (uVar6 == 0x40) goto LAB_001000bc;
    }
    uVar3 = *(long *)(ZSTD_ldm_gearTab + (ulong)*(byte *)(param_2 + 2 + uVar4) * 8) + uVar3 * 2;
    if ((uVar2 & uVar3) == 0) {
      uVar6 = *param_5;
      uVar5 = uVar4 + 3;
      *(ulong *)(param_4 + (ulong)uVar6 * 8) = uVar5;
      uVar6 = uVar6 + 1;
      *param_5 = uVar6;
      if (uVar6 == 0x40) {
LAB_001000bc:
        *param_1 = uVar3;
        return uVar5;
      }
    }
    pbVar1 = (byte *)(param_2 + 3 + uVar4);
    uVar4 = uVar4 + 4;
    uVar3 = *(long *)(ZSTD_ldm_gearTab + (ulong)*pbVar1 * 8) + uVar3 * 2;
    if ((uVar2 & uVar3) == 0) {
      uVar6 = *param_5;
      *(ulong *)(param_4 + (ulong)uVar6 * 8) = uVar4;
      uVar6 = uVar6 + 1;
      *param_5 = uVar6;
      if (uVar6 == 0x40) goto LAB_0010010b;
    }
  } while (uVar4 != (param_3 - 4 & 0xfffffffffffffffc) + 4);
  while (uVar4 < param_3) {
LAB_001000f0:
    while( true ) {
      pbVar1 = (byte *)(param_2 + uVar4);
      uVar4 = uVar4 + 1;
      uVar3 = *(long *)(ZSTD_ldm_gearTab + (ulong)*pbVar1 * 8) + uVar3 * 2;
      if ((uVar2 & uVar3) == 0) break;
      if (param_3 <= uVar4) goto LAB_0010010b;
    }
    uVar6 = *param_5;
    *(ulong *)(param_4 + (ulong)uVar6 * 8) = uVar4;
    uVar6 = uVar6 + 1;
    *param_5 = uVar6;
    if (uVar6 == 0x40) break;
  }
LAB_0010010b:
  *param_1 = uVar3;
  return uVar4;
}



void ZSTD_ldm_adjustParameters(long param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar2 = *(uint *)(param_1 + 8);
  uVar1 = *param_2;
  *(uint *)(param_1 + 0x14) = uVar1;
  if (uVar2 == 0) {
    uVar2 = 3;
  }
  if (*(int *)(param_1 + 0xc) == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0x40;
  }
  uVar4 = *(uint *)(param_1 + 4);
  if (uVar4 == 0) {
    uVar4 = uVar1 - 7;
    if (uVar1 - 7 < 6) {
      uVar4 = 6;
    }
    *(uint *)(param_1 + 4) = uVar4;
  }
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar3 = 0;
    if (uVar4 <= uVar1) {
      iVar3 = uVar1 - uVar4;
    }
    *(int *)(param_1 + 0x10) = iVar3;
  }
  if (uVar4 < uVar2) {
    uVar2 = uVar4;
  }
  *(uint *)(param_1 + 8) = uVar2;
  return;
}



long ZSTD_ldm_getTableSize(void)

{
  byte bVar1;
  int iStack0000000000000008;
  uint uStack000000000000000c;
  uint in_stack_00000010;
  
  if (iStack0000000000000008 != 1) {
    return 0;
  }
  if (uStack000000000000000c <= in_stack_00000010) {
    in_stack_00000010 = uStack000000000000000c;
  }
  bVar1 = (byte)((ulong)_iStack0000000000000008 >> 0x20);
  return (1L << (bVar1 - (char)in_stack_00000010 & 0x3f)) + (8L << (bVar1 & 0x3f));
}



ulong ZSTD_ldm_getMaxNbSeq(ulong param_1)

{
  int in_stack_00000008;
  ulong in_stack_00000010;
  
  if (in_stack_00000008 != 1) {
    return 0;
  }
  return param_1 / (in_stack_00000010 >> 0x20);
}



void ZSTD_ldm_fillHashTable(long param_1,ulong param_2,ulong param_3,long param_4)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  byte bVar9;
  byte bVar10;
  uint uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  long in_FS_OFFSET;
  uint local_5c;
  undefined8 local_58;
  long local_50;
  long local_40;
  
  uVar3 = *(uint *)(param_4 + 0xc);
  uVar4 = *(undefined4 *)(param_4 + 4);
  uVar5 = *(undefined4 *)(param_4 + 8);
  uVar6 = *(undefined8 *)(param_1 + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = 0x40;
  if (uVar3 < 0x41) {
    uVar11 = uVar3;
  }
  local_58 = 0xffffffff;
  bVar9 = (byte)*(int *)(param_4 + 0x10);
  local_50 = (1L << (bVar9 & 0x3f)) + -1;
  if (*(int *)(param_4 + 0x10) - 1U < uVar11) {
    local_50 = local_50 << ((char)uVar11 - bVar9 & 0x3f);
  }
  if (param_2 < param_3) {
    uVar16 = param_2;
    do {
      local_5c = 0;
      lVar7 = ZSTD_ldm_gear_feed_constprop_0
                        (&local_58,uVar16,param_3 - uVar16,param_1 + 0x40,&local_5c);
      if (local_5c != 0) {
        uVar13 = (ulong)uVar3;
        lVar1 = param_1 + (ulong)local_5c * 8;
        lVar17 = param_1;
        do {
          while (uVar16 + *(long *)(lVar17 + 0x40) < param_2 + uVar13) {
            lVar17 = lVar17 + 8;
            if (lVar1 == lVar17) goto LAB_00100434;
          }
          lVar12 = (*(long *)(lVar17 + 0x40) - uVar13) + uVar16;
          lVar17 = lVar17 + 8;
          uVar8 = ZSTD_XXH64(lVar12,uVar13,0);
          uVar14 = (ulong)(~(-1 << ((char)uVar4 - (char)uVar5 & 0x1fU)) & (uint)uVar8);
          pbVar15 = (byte *)(uVar14 + *(long *)(param_1 + 0x38));
          bVar9 = *pbVar15;
          bVar10 = (byte)*(undefined4 *)(param_4 + 8);
          piVar2 = (int *)(*(long *)(param_1 + 0x28) +
                          ((uVar14 << (bVar10 & 0x3f)) + (ulong)bVar9) * 8);
          piVar2[1] = (int)((ulong)uVar8 >> 0x20);
          *piVar2 = (int)lVar12 - (int)uVar6;
          *pbVar15 = bVar9 + 1 & (char)(1 << (bVar10 & 0x1f)) - 1U;
        } while (lVar1 != lVar17);
      }
LAB_00100434:
      uVar16 = uVar16 + lVar7;
    } while (uVar16 < param_3);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



char * ZSTD_ldm_generateSequences
                 (long param_1,long *param_2,long param_3,long param_4,ulong param_5)

{
  ulong *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong *puVar4;
  int *piVar5;
  undefined4 uVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  byte bVar15;
  byte bVar16;
  ulong uVar17;
  char *pcVar18;
  ulong uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  long lVar24;
  ulong *puVar25;
  ulong *puVar26;
  byte *pbVar27;
  char *pcVar28;
  ulong *puVar29;
  ulong *puVar30;
  ulong *puVar31;
  ulong *puVar32;
  ulong uVar33;
  char *pcVar34;
  byte bVar35;
  char cVar36;
  int iVar37;
  long lVar38;
  ulong uVar39;
  ulong *puVar40;
  ulong *puVar41;
  ulong *puVar42;
  char *pcVar43;
  undefined8 *puVar44;
  ulong *puVar45;
  long lVar46;
  long in_FS_OFFSET;
  bool bVar47;
  int iVar48;
  undefined8 *local_1b8;
  uint local_1ac;
  long local_1a8;
  ulong *local_1a0;
  uint *local_198;
  char *local_190;
  ulong local_188;
  char *local_178;
  ulong *local_168;
  uint local_130;
  uint local_12c;
  ulong *local_110;
  long local_100;
  long local_f0;
  char *local_e0;
  uint local_5c;
  undefined8 local_58;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar20 = 1 << ((byte)*(undefined4 *)(param_3 + 0x14) & 0x1f);
  lVar24 = (param_5 >> 0x14) + (ulong)((param_5 & 0xfffff) != 0);
  if (lVar24 != 0) {
    puVar45 = (ulong *)(param_4 + 0x100000);
    local_f0 = 0;
    pcVar28 = (char *)0x0;
    while (uVar7 = param_2[3], uVar7 < (ulong)param_2[4]) {
      puVar29 = puVar45 + -0x20000;
      local_e0 = (char *)(param_5 + local_f0 * -0x100000);
      local_1a0 = (ulong *)(param_4 + param_5);
      if ((char *)0xfffff < local_e0) {
        local_e0 = (char *)0x100000;
        local_1a0 = puVar45;
      }
      uVar23 = *(uint *)(param_1 + 0x1c);
      lVar10 = *(long *)(param_1 + 8);
      local_12c = *(uint *)(param_1 + 0x18);
      uVar21 = (int)local_1a0 - (int)lVar10;
      if (uVar21 < 0xe0000001) {
        uVar22 = *(int *)(param_1 + 0x30) + uVar20;
        local_1a8 = lVar10;
        local_130 = uVar23;
      }
      else {
        iVar48 = uVar20 + 2;
        uVar6 = *(undefined4 *)(param_3 + 4);
        iVar37 = (int)puVar29 - (int)lVar10;
        uVar21 = iVar37 - iVar48;
        local_1a8 = lVar10 + (ulong)uVar21;
        local_130 = (iVar48 + uVar23) - iVar37;
        *(ulong *)(param_1 + 8) = (ulong)uVar21 + lVar10;
        *(ulong *)(param_1 + 0x10) = (ulong)uVar21 + *(long *)(param_1 + 0x10);
        if (uVar23 < uVar21 + 2) {
          local_130 = 2;
        }
        *(uint *)(param_1 + 0x1c) = local_130;
        iVar9 = iVar48 + local_12c;
        bVar47 = uVar21 + 2 <= local_12c;
        local_12c = 2;
        if (bVar47) {
          local_12c = iVar9 - iVar37;
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
        puVar12 = *(uint **)(param_1 + 0x28);
        *(uint *)(param_1 + 0x18) = local_12c;
        puVar13 = puVar12;
        do {
          uVar23 = (iVar48 - iVar37) + *puVar13;
          if (*puVar13 < uVar21) {
            uVar23 = 0;
          }
          puVar14 = puVar13 + 2;
          *puVar13 = uVar23;
          puVar13 = puVar14;
        } while (puVar12 + (ulong)(uint)(1 << ((byte)uVar6 & 0x1f)) * 2 != puVar14);
        *(undefined4 *)(param_1 + 0x30) = 0;
        uVar21 = (int)local_1a0 - (int)local_1a8;
        uVar22 = uVar20;
      }
      if (uVar22 < uVar21) {
        uVar21 = uVar21 - uVar20;
        if (local_130 < uVar21) {
          *(uint *)(param_1 + 0x1c) = uVar21;
          local_130 = uVar21;
        }
        local_1ac = local_130;
        if (local_130 <= local_12c) {
          if (local_12c <= local_130) {
            local_1ac = local_12c;
          }
          *(undefined4 *)(param_1 + 0x30) = 0;
          goto LAB_001005c5;
        }
        uVar17 = (ulong)local_130;
        *(undefined4 *)(param_1 + 0x30) = 0;
        local_168 = (ulong *)0x0;
        *(uint *)(param_1 + 0x18) = local_130;
        uVar23 = *(uint *)(param_3 + 0xc);
        bVar35 = (byte)*(undefined4 *)(param_3 + 8);
        cVar36 = (char)*(undefined4 *)(param_3 + 4);
        local_100 = 0;
        local_110 = (ulong *)0x0;
        local_12c = local_1ac;
      }
      else {
        local_1ac = local_12c;
        if (local_130 <= local_12c) {
          local_1ac = local_130;
        }
LAB_001005c5:
        uVar17 = (ulong)local_12c;
        uVar23 = *(uint *)(param_3 + 0xc);
        bVar35 = (byte)*(undefined4 *)(param_3 + 8);
        cVar36 = (char)*(undefined4 *)(param_3 + 4);
        if (local_130 < local_12c) {
          local_100 = *(long *)(param_1 + 0x10);
          local_168 = (ulong *)(local_100 + (ulong)local_1ac);
          local_110 = (ulong *)(local_100 + uVar17);
        }
        else {
          local_168 = (ulong *)0x0;
          local_100 = 0;
          local_110 = (ulong *)0x0;
        }
      }
      pcVar43 = (char *)(ulong)uVar23;
      if (local_e0 < pcVar43) {
LAB_00101018:
        pcVar18 = pcVar28 + (long)local_e0;
      }
      else {
        local_58 = 0xffffffff;
        if (0x40 < uVar23) {
          uVar23 = 0x40;
        }
        bVar15 = (byte)*(int *)(param_3 + 0x10);
        local_50 = (1L << (bVar15 & 0x3f)) + -1;
        if (*(int *)(param_3 + 0x10) - 1U < uVar23) {
          local_50 = local_50 << ((char)uVar23 - bVar15 & 0x3f);
        }
        puVar1 = local_1a0 + -1;
        pcVar18 = local_e0;
        if ((ulong *)((long)puVar29 + (long)pcVar43) < puVar1) {
          puVar4 = (ulong *)(local_1a8 + uVar17);
          puVar2 = (ulong *)((long)local_1a0 - 7);
          puVar30 = (ulong *)((long)puVar29 + (long)pcVar43);
          do {
            local_5c = 0;
            lVar10 = ZSTD_ldm_gear_feed_constprop_0
                               (&local_58,puVar30,(long)puVar1 - (long)puVar30,param_1 + 0x40,
                                &local_5c);
            uVar17 = (ulong)local_5c;
            if (local_5c == 0) {
              puVar31 = (ulong *)((long)puVar30 + lVar10);
            }
            else {
              uVar6 = *(undefined4 *)(param_3 + 8);
              puVar44 = (undefined8 *)(param_1 + 0x240);
              lVar38 = param_1;
              do {
                lVar46 = lVar38 + 8;
                pcVar18 = (char *)((long)puVar30 + (*(long *)(lVar38 + 0x40) - (long)pcVar43));
                uVar11 = ZSTD_XXH64(pcVar18,pcVar43,0);
                local_1b8._0_1_ = (byte)uVar6;
                *puVar44 = pcVar18;
                uVar23 = ~(-1 << (cVar36 - bVar35 & 0x1f)) & (uint)uVar11;
                *(int *)((long)puVar44 + 0xc) = (int)((ulong)uVar11 >> 0x20);
                lVar38 = *(long *)(param_1 + 0x28);
                *(uint *)(puVar44 + 1) = uVar23;
                puVar44[2] = lVar38 + ((ulong)uVar23 << ((byte)local_1b8 & 0x3f)) * 8;
                puVar44 = puVar44 + 3;
                lVar38 = lVar46;
              } while (lVar46 != param_1 + uVar17 * 8);
              local_1b8 = (undefined8 *)(param_1 + 0x240);
              do {
                puVar31 = (ulong *)*local_1b8;
                uVar23 = *(uint *)(local_1b8 + 1);
                puVar12 = (uint *)local_1b8[2];
                iVar48 = (int)puVar31 - (int)local_1a8;
                uVar11 = CONCAT44(*(uint *)((long)local_1b8 + 0xc),iVar48);
                if ((puVar31 < puVar29) ||
                   (puVar13 = puVar12 + (ulong)(uint)(1 << (bVar35 & 0x1f)) * 2, puVar13 <= puVar12)
                   ) {
LAB_00100cd0:
                  pbVar27 = (byte *)(*(long *)(param_1 + 0x38) + (ulong)uVar23);
                  bVar15 = *pbVar27;
                  bVar16 = (byte)*(undefined4 *)(param_3 + 8);
                  *(undefined8 *)
                   (*(long *)(param_1 + 0x28) +
                   (((ulong)uVar23 << (bVar16 & 0x3f)) + (ulong)bVar15) * 8) = uVar11;
                  *pbVar27 = (char)(1 << (bVar16 & 0x1f)) - 1U & bVar15 + 1;
                }
                else {
                  local_198 = (uint *)0x0;
                  local_188 = 0;
                  local_190 = (char *)0x0;
                  local_178 = (char *)0x0;
                  do {
                    if ((*(uint *)((long)local_1b8 + 0xc) == puVar12[1]) &&
                       (uVar21 = *puVar12, local_1ac < uVar21)) {
                      if (local_130 < local_12c) {
                        puVar40 = local_1a0;
                        puVar26 = puVar4;
                        lVar38 = local_1a8;
                        if (uVar21 < local_12c) {
                          puVar40 = local_110;
                          puVar26 = local_168;
                          lVar38 = local_100;
                        }
                        puVar25 = (ulong *)((ulong)uVar21 + lVar38);
                        puVar32 = (ulong *)(((long)puVar40 - (long)puVar25) + (long)puVar31);
                        if (local_1a0 <= puVar32) {
                          puVar32 = local_1a0;
                        }
                        puVar3 = (ulong *)((long)puVar32 - 7);
                        puVar41 = puVar31;
                        puVar42 = puVar25;
                        if (puVar31 < puVar3) {
                          if (*puVar25 == *puVar31) {
                            puVar41 = puVar31 + 1;
                            puVar42 = puVar25 + 1;
                            if (puVar41 < puVar3) {
LAB_00100e51:
                              if (*puVar42 == *puVar41) goto LAB_00100f80;
                              uVar21 = 0;
                              for (uVar19 = *puVar42 ^ *puVar41; (uVar19 & 1) == 0;
                                  uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                                uVar21 = uVar21 + 1;
                              }
                              pcVar18 = (char *)((long)puVar41 +
                                                ((ulong)(uVar21 >> 3) - (long)puVar31));
                              goto joined_r0x00100d72;
                            }
                            goto LAB_00100d16;
                          }
                          uVar21 = 0;
                          for (uVar19 = *puVar25 ^ *puVar31; (uVar19 & 1) == 0;
                              uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                            uVar21 = uVar21 + 1;
                          }
                          pcVar18 = (char *)(ulong)(uVar21 >> 3);
                        }
                        else {
LAB_00100d16:
                          if ((puVar41 < (ulong *)((long)puVar32 - 3U)) &&
                             ((int)*puVar42 == (int)*puVar41)) {
                            puVar41 = (ulong *)((long)puVar41 + 4);
                            puVar42 = (ulong *)((long)puVar42 + 4);
                          }
                          if ((puVar41 < (ulong *)((long)puVar32 - 1U)) &&
                             ((short)*puVar42 == (short)*puVar41)) {
                            puVar41 = (ulong *)((long)puVar41 + 2);
                            puVar42 = (ulong *)((long)puVar42 + 2);
                          }
                          if (puVar41 < puVar32) {
                            puVar41 = (ulong *)((long)puVar41 +
                                               (ulong)((char)*puVar42 == (char)*puVar41));
                          }
                          pcVar18 = (char *)((long)puVar41 - (long)puVar31);
                        }
joined_r0x00100d72:
                        if (puVar40 == (ulong *)((long)puVar25 + (long)pcVar18)) {
                          puVar3 = (ulong *)((long)puVar31 + (long)pcVar18);
                          puVar40 = puVar3;
                          puVar32 = puVar4;
                          if (puVar3 < puVar2) {
                            if (*puVar4 == *puVar3) {
                              puVar40 = puVar3 + 1;
                              puVar32 = puVar4 + 1;
                              if (puVar40 < puVar2) {
LAB_00100f5e:
                                if (*puVar32 == *puVar40) goto LAB_00100fbb;
                                uVar21 = 0;
                                for (uVar19 = *puVar32 ^ *puVar40; (uVar19 & 1) == 0;
                                    uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                                  uVar21 = uVar21 + 1;
                                }
                                pcVar34 = (char *)((long)puVar40 +
                                                  ((ulong)(uVar21 >> 3) - (long)puVar3));
                                goto LAB_00100da4;
                              }
                              goto LAB_00100ede;
                            }
                            uVar21 = 0;
                            for (uVar19 = *puVar4 ^ *puVar3; (uVar19 & 1) == 0;
                                uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                              uVar21 = uVar21 + 1;
                            }
                            pcVar34 = (char *)(ulong)(uVar21 >> 3);
                          }
                          else {
LAB_00100ede:
                            if ((puVar40 < (ulong *)((long)local_1a0 - 3U)) &&
                               ((int)*puVar32 == (int)*puVar40)) {
                              puVar40 = (ulong *)((long)puVar40 + 4);
                              puVar32 = (ulong *)((long)puVar32 + 4);
                            }
                            if ((puVar40 < (ulong *)((long)local_1a0 + -1)) &&
                               ((short)*puVar32 == (short)*puVar40)) {
                              puVar40 = (ulong *)((long)puVar40 + 2);
                              puVar32 = (ulong *)((long)puVar32 + 2);
                            }
                            if (puVar40 < local_1a0) {
                              puVar40 = (ulong *)((long)puVar40 +
                                                 (ulong)((char)*puVar32 == (char)*puVar40));
                            }
                            pcVar34 = (char *)((long)puVar40 - (long)puVar3);
                          }
LAB_00100da4:
                          pcVar18 = pcVar18 + (long)pcVar34;
                        }
                        if (pcVar18 < pcVar43) goto LAB_00100a90;
                        if ((puVar29 < puVar31) &&
                           (puVar40 = puVar25, uVar19 = 0, puVar32 = puVar31, puVar26 < puVar25)) {
                          do {
                            uVar33 = uVar19;
                            if (*(char *)((long)puVar32 + -1) != *(char *)((long)puVar40 + -1)) {
                              puVar25 = (ulong *)((long)puVar25 - uVar33);
                              uVar39 = -uVar33;
                              uVar19 = uVar33;
                              goto LAB_00100a05;
                            }
                            puVar32 = (ulong *)((long)puVar32 + -1);
                            puVar40 = (ulong *)((long)puVar40 + -1);
                            uVar19 = uVar33 + 1;
                          } while ((puVar29 < puVar32) && (puVar26 < puVar40));
                          uVar39 = ~uVar33;
                          puVar25 = (ulong *)((long)puVar25 + uVar39);
                        }
                        else {
                          uVar39 = 0;
                          uVar19 = 0;
                        }
LAB_00100a05:
                        if ((((puVar26 != local_168) && (puVar26 == puVar25)) &&
                            (puVar40 = (ulong *)(uVar39 + (long)puVar31), puVar29 < puVar40)) &&
                           (lVar38 = 0, puVar26 = local_110, local_168 < local_110)) {
                          while (*(char *)((long)puVar40 + -1) == *(char *)((long)puVar26 + -1)) {
                            puVar40 = (ulong *)((long)puVar40 + -1);
                            puVar26 = (ulong *)((long)puVar26 + -1);
                            lVar38 = lVar38 + 1;
                            if ((puVar40 <= puVar29) || (puVar26 <= local_168)) break;
                          }
                          uVar19 = uVar19 + lVar38;
                        }
LAB_00100a68:
                        pcVar34 = pcVar18 + uVar19;
                      }
                      else {
                        puVar32 = (ulong *)((ulong)uVar21 + local_1a8);
                        puVar40 = puVar31;
                        puVar26 = puVar32;
                        if (puVar31 < puVar2) {
                          if (*puVar32 == *puVar31) {
                            puVar40 = puVar31 + 1;
                            puVar26 = puVar32 + 1;
                            if (puVar40 < puVar2) {
LAB_00100e96:
                              if (*puVar26 == *puVar40) goto LAB_00100fa0;
                              uVar21 = 0;
                              for (uVar19 = *puVar26 ^ *puVar40; (uVar19 & 1) == 0;
                                  uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                                uVar21 = uVar21 + 1;
                              }
                              pcVar18 = (char *)((long)puVar40 +
                                                ((ulong)(uVar21 >> 3) - (long)puVar31));
                              goto LAB_00100c70;
                            }
                            goto LAB_00100dce;
                          }
                          uVar21 = 0;
                          for (uVar19 = *puVar32 ^ *puVar31; (uVar19 & 1) == 0;
                              uVar19 = uVar19 >> 1 | 0x8000000000000000) {
                            uVar21 = uVar21 + 1;
                          }
                          pcVar18 = (char *)(ulong)(uVar21 >> 3);
                        }
                        else {
LAB_00100dce:
                          if ((puVar40 < (ulong *)((long)local_1a0 - 3U)) &&
                             ((int)*puVar26 == (int)*puVar40)) {
                            puVar40 = (ulong *)((long)puVar40 + 4);
                            puVar26 = (ulong *)((long)puVar26 + 4);
                          }
                          if ((puVar40 < (ulong *)((long)local_1a0 + -1)) &&
                             ((short)*puVar26 == (short)*puVar40)) {
                            puVar40 = (ulong *)((long)puVar40 + 2);
                            puVar26 = (ulong *)((long)puVar26 + 2);
                          }
                          if (puVar40 < local_1a0) {
                            puVar40 = (ulong *)((long)puVar40 +
                                               (ulong)((char)*puVar26 == (char)*puVar40));
                          }
                          pcVar18 = (char *)((long)puVar40 - (long)puVar31);
                        }
LAB_00100c70:
                        if (pcVar18 < pcVar43) goto LAB_00100a90;
                        if ((puVar4 < puVar32) && (uVar19 = 0, puVar40 = puVar31, puVar29 < puVar31)
                           ) {
                          while (*(char *)((long)puVar40 + -1) == *(char *)((long)puVar32 + -1)) {
                            puVar40 = (ulong *)((long)puVar40 + -1);
                            puVar32 = (ulong *)((long)puVar32 + -1);
                            uVar19 = uVar19 + 1;
                            if ((puVar40 <= puVar29) || (puVar32 <= puVar4)) break;
                          }
                          goto LAB_00100a68;
                        }
                        uVar19 = 0;
                        pcVar34 = pcVar18;
                      }
                      if (local_178 < pcVar34) {
                        local_198 = puVar12;
                        local_190 = pcVar18;
                        local_188 = uVar19;
                        local_178 = pcVar34;
                      }
                    }
LAB_00100a90:
                    puVar12 = puVar12 + 2;
                  } while (puVar12 < puVar13);
                  if (local_198 == (uint *)0x0) goto LAB_00100cd0;
                  lVar38 = param_2[3];
                  piVar5 = (int *)(*param_2 + lVar38 * 0xc);
                  if (lVar38 == param_2[4]) {
                    pcVar18 = (char *)0xffffffffffffffba;
                    goto LAB_00100c0e;
                  }
                  *piVar5 = iVar48 - *local_198;
                  piVar5[2] = (int)local_190 + (int)local_188;
                  lVar46 = *(long *)(param_1 + 0x28);
                  piVar5[1] = ((int)puVar31 - (int)local_188) - (int)puVar29;
                  lVar8 = *(long *)(param_1 + 0x38);
                  param_2[3] = lVar38 + 1;
                  puVar29 = (ulong *)(local_190 + (long)puVar31);
                  pbVar27 = (byte *)(lVar8 + (ulong)uVar23);
                  bVar15 = *pbVar27;
                  bVar16 = (byte)*(undefined4 *)(param_3 + 8);
                  *(undefined8 *)(lVar46 + ((ulong)bVar15 + ((ulong)uVar23 << (bVar16 & 0x3f))) * 8)
                       = uVar11;
                  *pbVar27 = (char)(1 << (bVar16 & 0x1f)) - 1U & bVar15 + 1;
                  puVar31 = puVar29;
                  if ((ulong *)((long)puVar30 + lVar10) < puVar29) goto LAB_00100b85;
                }
                local_1b8 = local_1b8 + 3;
              } while ((undefined8 *)(param_1 + 0x240 + uVar17 * 0x18) != local_1b8);
              puVar31 = (ulong *)((long)puVar30 + lVar10);
            }
LAB_00100b85:
            puVar30 = puVar31;
          } while (puVar31 < puVar1);
          pcVar18 = (char *)((long)local_1a0 - (long)puVar29);
          if ((char *)0xffffffffffffff88 < pcVar18) goto LAB_00100c0e;
        }
        if ((ulong)param_2[3] <= uVar7) goto LAB_00101018;
        piVar5 = (int *)(*param_2 + 4 + uVar7 * 0xc);
        *piVar5 = *piVar5 + (int)pcVar28;
      }
      local_f0 = local_f0 + 1;
      puVar45 = puVar45 + 0x20000;
      pcVar28 = pcVar18;
      if (lVar24 == local_f0) break;
    }
  }
  pcVar18 = (char *)0x0;
LAB_00100c0e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pcVar18;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00100fa0:
  puVar40 = puVar40 + 1;
  puVar26 = puVar26 + 1;
  if (puVar2 <= puVar40) goto LAB_00100dce;
  goto LAB_00100e96;
LAB_00100f80:
  puVar41 = puVar41 + 1;
  puVar42 = puVar42 + 1;
  if (puVar3 <= puVar41) goto LAB_00100d16;
  goto LAB_00100e51;
LAB_00100fbb:
  puVar40 = puVar40 + 1;
  puVar32 = puVar32 + 1;
  if (puVar2 <= puVar40) goto LAB_00100ede;
  goto LAB_00100f5e;
}



void ZSTD_ldm_skipSequences(long *param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    uVar3 = param_1[1];
    uVar1 = param_1[3];
    lVar4 = uVar3 * 0xc;
    do {
      if (uVar1 <= uVar3) {
        return;
      }
      lVar2 = *param_1 + lVar4;
      uVar5 = *(uint *)(lVar2 + 4);
      if (param_2 <= uVar5) {
        *(uint *)(lVar2 + 4) = uVar5 - (int)param_2;
        return;
      }
      param_2 = param_2 - uVar5;
      uVar5 = *(uint *)(lVar2 + 8);
      *(undefined4 *)(lVar2 + 4) = 0;
      if (param_2 < uVar5) {
        uVar5 = uVar5 - (int)param_2;
        *(uint *)(lVar2 + 8) = uVar5;
        if (param_3 <= uVar5) {
          return;
        }
        if (uVar3 + 1 < uVar1) {
          *(int *)(lVar2 + 0x10) = *(int *)(lVar2 + 0x10) + uVar5;
        }
        param_1[1] = uVar3 + 1;
        return;
      }
      uVar3 = uVar3 + 1;
      *(undefined4 *)(lVar2 + 8) = 0;
      lVar4 = lVar4 + 0xc;
      param_1[1] = uVar3;
      param_2 = param_2 - uVar5;
    } while (param_2 != 0);
  }
  return;
}



void ZSTD_ldm_skipRawSeqStoreBytes(long *param_1,int param_2)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar4 = param_2 + (int)param_1[2];
  if (uVar4 != 0) {
    uVar3 = param_1[1];
    lVar2 = uVar3 * 0xc;
    do {
      if ((ulong)param_1[3] <= uVar3) {
        if (param_1[3] != param_1[1]) {
          return;
        }
        break;
      }
      uVar1 = *(int *)(*param_1 + lVar2 + 8) + *(int *)(*param_1 + lVar2 + 4);
      if (uVar4 < uVar1) {
        param_1[2] = (ulong)uVar4;
        return;
      }
      uVar3 = uVar3 + 1;
      lVar2 = lVar2 + 0xc;
      param_1[1] = uVar3;
      uVar4 = uVar4 - uVar1;
    } while (uVar4 != 0);
  }
  param_1[2] = 0;
  return;
}



undefined8
ZSTD_ldm_blockCompress
          (long *param_1,long param_2,long *param_3,undefined8 *param_4,undefined4 param_5,
          ulong param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  undefined8 *puVar17;
  int iVar18;
  uint local_54;
  
  iVar11 = 1;
  uVar13 = *(uint *)(param_2 + 0x110);
  if (*(uint *)(param_2 + 0x18) <= *(uint *)(param_2 + 0x1c)) {
    iVar11 = 0;
    if (*(long *)(param_2 + 0xf8) != 0) {
      iVar11 = 3 - (uint)(*(int *)(*(long *)(param_2 + 0xf8) + 0x8c) == 0);
    }
  }
  UNRECOVERED_JUMPTABLE =
       (code *)ZSTD_selectBlockCompressor(*(undefined4 *)(param_2 + 0x118),param_5,iVar11);
  uVar4 = *(uint *)(param_2 + 0x118);
  if (6 < uVar4) {
    *(long **)(param_2 + 0x120) = param_1;
    uVar10 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6,param_7);
    ZSTD_ldm_skipRawSeqStoreBytes(param_1,param_7);
    return uVar10;
  }
  uVar2 = param_6 + param_7;
  uVar6 = param_1[1];
  if ((uVar6 < (ulong)param_1[3]) && (param_6 < uVar2)) {
    do {
      piVar5 = (int *)(*param_1 + uVar6 * 0xc);
      param_7 = uVar2 - param_6;
      local_54 = piVar5[2];
      uVar4 = piVar5[1];
      uVar12 = (uint)param_7;
      iVar18 = *piVar5;
      if (uVar12 < uVar4 + local_54) {
        if (uVar4 < uVar12) {
          local_54 = uVar12 - uVar4;
          if (local_54 < uVar13) {
            iVar18 = 0;
          }
        }
        else {
          iVar18 = 0;
        }
        ZSTD_ldm_skipSequences(param_1,param_7 & 0xffffffff,uVar13);
      }
      else {
        param_1[1] = uVar6 + 1;
      }
      iVar11 = *(int *)(param_2 + 0x2c);
      uVar12 = (int)param_6 - (int)*(undefined8 *)(param_2 + 8);
      if (iVar18 == 0) {
        uVar4 = *(uint *)(param_2 + 0x118);
        goto LAB_00101674;
      }
      if (iVar11 + 0x400U < uVar12) {
        uVar3 = (uVar12 - iVar11) - 0x400;
        if (0x200 < uVar3) {
          uVar3 = 0x200;
        }
        *(uint *)(param_2 + 0x2c) = uVar12 - uVar3;
      }
      if (*(int *)(param_2 + 0x118) == 1) {
        ZSTD_fillHashTable(param_2,param_6,0,0);
      }
      else if (*(int *)(param_2 + 0x118) == 2) {
        ZSTD_fillDoubleHashTable(param_2,param_6,0,0);
      }
      uVar6 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6);
      puVar14 = (undefined8 *)param_3[3];
      puVar17 = (undefined8 *)(uVar4 + param_6);
      puVar9 = (undefined8 *)(uVar2 - 0x20);
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)((long)param_4 + 4);
      *param_4 = CONCAT44(*(undefined4 *)param_4,iVar18);
      puVar7 = (undefined8 *)((long)puVar17 - uVar6);
      if (puVar9 < puVar17) {
        if (puVar9 < puVar7) {
          puVar9 = puVar7;
          puVar15 = puVar14;
          if (puVar17 <= puVar7) goto LAB_001015a2;
        }
        else {
          uVar10 = puVar7[1];
          puVar8 = puVar7 + 2;
          puVar15 = (undefined8 *)((long)puVar14 + ((long)puVar9 - (long)puVar7));
          *puVar14 = *puVar7;
          puVar14[1] = uVar10;
          puVar14 = puVar14 + 2;
          if (0x10 < (long)puVar9 - (long)puVar7) {
            do {
              uVar10 = puVar8[1];
              puVar7 = puVar14 + 4;
              *puVar14 = *puVar8;
              puVar14[1] = uVar10;
              uVar10 = puVar8[3];
              puVar14[2] = puVar8[2];
              puVar14[3] = uVar10;
              puVar8 = puVar8 + 4;
              puVar14 = puVar7;
            } while (puVar7 < puVar15);
          }
        }
        lVar16 = 0;
        do {
          *(undefined1 *)((long)puVar15 + lVar16) = *(undefined1 *)((long)puVar9 + lVar16);
          lVar16 = lVar16 + 1;
        } while (lVar16 != (long)puVar17 - (long)puVar9);
LAB_001015a2:
        param_3[3] = param_3[3] + uVar6;
        piVar5 = (int *)param_3[1];
        if (0xffff < uVar6) {
          *(undefined4 *)(param_3 + 9) = 1;
          *(int *)((long)param_3 + 0x4c) = (int)((long)piVar5 - *param_3 >> 3);
        }
      }
      else {
        uVar10 = puVar7[1];
        *puVar14 = *puVar7;
        puVar14[1] = uVar10;
        if (0x10 < uVar6) {
          lVar16 = param_3[3];
          uVar10 = puVar7[3];
          *(undefined8 *)(lVar16 + 0x10) = puVar7[2];
          *(undefined8 *)(lVar16 + 0x18) = uVar10;
          if (0x20 < (long)uVar6) {
            puVar9 = (undefined8 *)(lVar16 + 0x20);
            do {
              uVar10 = puVar7[5];
              puVar14 = puVar9 + 4;
              *puVar9 = puVar7[4];
              puVar9[1] = uVar10;
              uVar10 = puVar7[7];
              puVar9[2] = puVar7[6];
              puVar9[3] = uVar10;
              puVar9 = puVar14;
              puVar7 = puVar7 + 4;
            } while (puVar14 < (undefined8 *)(lVar16 + uVar6));
          }
          goto LAB_001015a2;
        }
        param_3[3] = param_3[3] + uVar6;
        piVar5 = (int *)param_3[1];
      }
      uVar1 = (ulong)local_54 - 3;
      *(short *)(piVar5 + 1) = (short)uVar6;
      *piVar5 = iVar18 + 3;
      if (0xffff < uVar1) {
        *(undefined4 *)(param_3 + 9) = 2;
        *(int *)((long)param_3 + 0x4c) = (int)((long)piVar5 - *param_3 >> 3);
      }
      *(short *)((long)piVar5 + 6) = (short)uVar1;
      uVar6 = param_1[1];
      param_6 = (long)puVar17 + (ulong)local_54;
      param_3[1] = (long)(piVar5 + 2);
    } while ((uVar6 < (ulong)param_1[3]) && (param_6 < uVar2));
    uVar4 = *(uint *)(param_2 + 0x118);
    iVar11 = *(int *)(param_2 + 0x2c);
    param_7 = uVar2 - param_6;
  }
  else {
    iVar11 = *(int *)(param_2 + 0x2c);
  }
LAB_00101674:
  uVar13 = (int)param_6 - (int)*(undefined8 *)(param_2 + 8);
  if (iVar11 + 0x400U < uVar13) {
    uVar12 = (uVar13 - iVar11) - 0x400;
    if (0x200 < uVar12) {
      uVar12 = 0x200;
    }
    *(uint *)(param_2 + 0x2c) = uVar13 - uVar12;
  }
  if (uVar4 == 1) {
    ZSTD_fillHashTable(param_2,param_6,0,0);
  }
  else if (uVar4 == 2) {
    ZSTD_fillDoubleHashTable(param_2,param_6,0,0);
  }
                    /* WARNING: Could not recover jumptable at 0x001016e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar10 = (*UNRECOVERED_JUMPTABLE)(param_2,param_3,param_4,param_6,param_7);
  return uVar10;
}


