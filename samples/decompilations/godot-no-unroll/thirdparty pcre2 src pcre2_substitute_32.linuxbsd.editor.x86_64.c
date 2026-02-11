
int find_text_end(ulong param_1,long *param_2,int *param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long in_FS_OFFSET;
  ulong uStack_68;
  int local_50;
  undefined1 local_4c [4];
  int *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (int *)*param_2;
  uStack_68 = param_1;
  if (local_48 < param_3) {
    iVar5 = 0;
    uVar7 = 0;
    piVar1 = param_3 + -1;
    do {
      iVar3 = *local_48;
      if (iVar5 == 0) {
        piVar4 = local_48;
        iVar6 = 0;
        if (iVar3 == 0x7d) {
          if (uVar7 == 0) goto LAB_001000a5;
          uVar7 = uVar7 - 1;
          local_48 = local_48 + 1;
        }
        else if (iVar3 == 0x3a) {
          uStack_68 = (ulong)(uVar7 | param_4);
          if ((uVar7 | param_4) == 0) goto LAB_001000a5;
LAB_0010004e:
          local_48 = local_48 + 1;
        }
        else if (iVar3 == 0x24) {
          if ((piVar1 <= local_48) || (local_48[1] != 0x7b)) goto LAB_0010004e;
          local_48 = local_48 + 2;
          uVar7 = uVar7 + 1;
        }
        else {
          if (iVar3 != 0x5c) goto LAB_0010004e;
          piVar4 = local_48 + 1;
          if ((local_48 < piVar1) && (piVar2 = local_48 + 1, *piVar2 - 0x4cU < 0x2a)) {
            local_48 = local_48 + 2;
            uStack_68 = 0x20100000201;
            if ((0x20100000201U >> ((ulong)(*piVar2 - 0x4cU) & 0x3f) & 1) != 0)
            goto joined_r0x00100097;
          }
          uStack_68 = 0;
          local_48 = piVar4;
          iVar5 = _pcre2_check_escape_32
                            (&local_48,param_3,local_4c,&local_50,*(undefined4 *)(param_1 + 0x58),
                             *(undefined4 *)(param_1 + 0x5c));
          piVar4 = local_48 + -1;
          iVar6 = local_50;
          if (local_50 != 0) goto LAB_001000a5;
          if (iVar5 == 0x19) {
            iVar5 = 0;
            uStack_68 = 0;
          }
          else if (iVar5 == 0x1a) {
            iVar5 = 1;
            uStack_68 = 0;
          }
          else if (iVar5 != 0) {
            iVar6 = -0x39;
            goto LAB_001000a5;
          }
        }
      }
      else {
        if (((iVar3 != 0x5c) || (piVar1 <= local_48)) || (local_48[1] != 0x45)) goto LAB_0010004e;
        local_48 = local_48 + 2;
        iVar5 = 0;
      }
joined_r0x00100097:
    } while (local_48 < param_3);
  }
  piVar4 = local_48;
  iVar6 = -0x3a;
LAB_001000a5:
  local_48 = piVar4;
  *param_2 = (long)local_48;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_68);
  }
  return iVar6;
}



uint pcre2_substitute_32(long param_1,undefined *param_2,ulong param_3,ulong param_4,uint param_5,
                        void *param_6,long param_7,uint *param_8,ulong param_9,void *param_10,
                        ulong *param_11)

{
  int *piVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  ulong uVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  ulong *puVar17;
  undefined *puVar18;
  int *__src;
  uint *puVar19;
  uint uVar20;
  ulong uVar21;
  int *piVar22;
  size_t __n;
  uint uVar23;
  uint *puVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  uint *puVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  uint *puVar33;
  uint uVar34;
  long in_FS_OFFSET;
  void *local_2c0;
  ulong local_2b8;
  uint local_2b0;
  undefined *local_2a8;
  uint *local_298;
  ulong local_288;
  ulong local_280;
  uint local_278;
  uint *local_268;
  long local_260;
  void *local_250;
  uint *local_248;
  int local_22c;
  size_t local_220;
  uint *local_210;
  uint *local_208;
  int local_200;
  uint *local_1f0;
  uint local_1e8;
  undefined4 uStack_1e4;
  int local_1e0;
  undefined4 uStack_1dc;
  uint local_1d8 [8];
  undefined4 local_1b8 [2];
  undefined *local_1b0;
  void *local_1a8;
  ulong local_1a0;
  ulong local_198;
  ulong *local_190;
  uint local_188;
  uint local_184;
  uint local_178 [36];
  undefined8 auStack_e8 [21];
  long local_40;
  
  local_298 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = *(uint *)(param_1 + 0x58);
  uVar12 = uVar6 & 0x80000;
  uVar7 = *param_11;
  *param_11 = 0xffffffffffffffff;
  if ((param_5 & 0x30) != 0) {
    uVar14 = 0xffffffde;
    goto LAB_001004ac;
  }
  if (param_8 == (uint *)0x0) {
    if (param_9 == 0) {
      local_220 = 0;
      local_268 = (uint *)&_LC0;
      local_298 = (uint *)&_LC0;
      goto LAB_001002bf;
    }
LAB_0010169a:
    uVar14 = 0xffffffcd;
    goto LAB_001004ac;
  }
  if (param_9 == 0xffffffffffffffff) {
    param_9 = _pcre2_strlen_32(param_8);
    local_220 = param_9 * 4;
    local_268 = param_8 + param_9;
  }
  else {
    local_220 = param_9 * 4;
    local_268 = param_8 + param_9;
  }
LAB_001002bf:
  if (param_6 == (void *)0x0) {
    if ((param_5 & 0x10000) != 0) goto LAB_0010169a;
    lVar30 = param_1;
    if (param_7 != 0) {
      lVar30 = param_7;
    }
    local_2c0 = (void *)pcre2_match_data_create_from_pattern_32(param_1,lVar30);
    local_250 = local_2c0;
    if (local_2c0 == (void *)0x0) goto LAB_00101be8;
  }
  else if ((param_5 & 0x10000) == 0) {
    local_250 = (void *)0x0;
    local_2c0 = param_6;
  }
  else {
    uVar5 = *(ushort *)((long)param_6 + 0x62);
    lVar30 = param_1;
    if (param_7 != 0) {
      lVar30 = param_7;
    }
    uVar14 = *(ushort *)(param_1 + 0x80) + 1;
    if (uVar5 < uVar14) {
      uVar14 = (uint)uVar5;
    }
    local_2c0 = (void *)pcre2_match_data_create_32(uVar5,lVar30);
    if (local_2c0 == (void *)0x0) {
LAB_00101be8:
      uVar14 = 0xffffffd0;
      goto LAB_001004ac;
    }
    memcpy(local_2c0,param_6,(long)(int)(uVar14 * 2 + 0xd) << 3);
    *(undefined8 *)((long)local_2c0 + 0x30) = 0;
    *(undefined8 *)((long)local_2c0 + 0x38) = 0;
    local_250 = local_2c0;
  }
  puVar17 = (ulong *)pcre2_get_ovector_pointer_32(local_2c0);
  uVar13 = pcre2_get_ovector_count_32(local_2c0);
  local_1b8[0] = 0;
  local_1a8 = param_10;
  local_2b8 = param_3;
  local_1b0 = param_2;
  local_190 = puVar17;
  if (param_2 == (undefined *)0x0) {
    if (param_3 != 0) goto LAB_0010169a;
    local_2a8 = &_LC0;
  }
  else {
    local_2a8 = param_2;
    if (param_3 == 0xffffffffffffffff) {
      local_2b8 = _pcre2_strlen_32(param_2);
    }
  }
  if (((uVar12 == 0) || ((param_5 & 0x40000000) != 0)) ||
     (uVar14 = _pcre2_valid_utf_32(local_298,param_9,(long)local_2c0 + 0x58), uVar14 == 0)) {
    if (param_4 <= local_2b8) {
      local_288 = uVar7;
      if ((param_5 & 0x20000) != 0) {
        bVar9 = false;
        local_280 = 0;
        local_260 = 0;
LAB_00100522:
        bVar11 = false;
        local_2b0 = param_5 & 0x39f00;
        local_200 = 0;
        uVar23 = param_5 & 0xfffc60ff;
        uVar34 = 0;
        uVar32 = 0xffffffffffffffff;
        uVar26 = 0xffffffffffffffff;
        local_278 = 0;
        uVar28 = 0xffffffffffffffff;
        local_22c = 0;
        if ((param_5 & 0x10000) == 0) goto LAB_001006b2;
        uVar14 = *(uint *)((long)local_2c0 + 100);
        uVar27 = param_4;
        do {
          if (uVar12 != 0) {
            uVar23 = uVar23 | 0x40000000;
          }
          if ((int)uVar14 < 0) {
            if (uVar14 != 0xffffffff) goto LAB_0010049d;
            if ((uVar34 == 0) || (local_2b8 <= uVar27)) goto LAB_00100438;
            param_4 = uVar27 + 1;
            uVar21 = 1;
            if (*(int *)(local_2a8 + param_4 * 4 + -4) == 0xd) {
              if (((ushort)(*(short *)(param_1 + 0x7a) - 1U) < 2) || (local_2b8 <= param_4)) {
                uVar21 = 1;
              }
              else if (*(int *)(local_2a8 + param_4 * 4) == 10) {
                param_4 = uVar27 + 2;
                uVar21 = 2;
              }
            }
            if ((param_5 & 0x20000) == 0) {
              if ((bVar9) || (uVar21 <= local_288)) {
                if (bVar9) {
                  local_260 = local_260 + uVar21;
                  uVar34 = 0;
                }
                else {
                  puVar2 = (undefined8 *)((long)param_10 + local_280 * 4);
                  uVar25 = uVar21 * 4;
                  puVar3 = (undefined8 *)(local_2a8 + uVar27 * 4);
                  uVar14 = (uint)uVar25;
                  if (uVar14 < 8) {
                    if ((uVar25 & 4) == 0) {
                      if (uVar14 != 0) {
                        *(undefined1 *)puVar2 = *(undefined1 *)puVar3;
                      }
                    }
                    else {
                      *(undefined4 *)puVar2 = *(undefined4 *)puVar3;
                      *(undefined4 *)((long)puVar2 + (uVar25 - 4)) =
                           *(undefined4 *)((uVar25 - 4) + (long)puVar3);
                    }
                  }
                  else {
                    *puVar2 = *puVar3;
                    *(undefined8 *)((long)puVar2 + (uVar25 - 8)) =
                         *(undefined8 *)((uVar25 - 8) + (long)puVar3);
                    lVar30 = (long)puVar2 - ((ulong)(puVar2 + 1) & 0xfffffffffffffff8);
                    uVar14 = uVar14 + (int)lVar30 & 0xfffffff8;
                    if (7 < uVar14) {
                      uVar34 = 0;
                      do {
                        uVar25 = (ulong)uVar34;
                        uVar34 = uVar34 + 8;
                        *(undefined8 *)(((ulong)(puVar2 + 1) & 0xfffffffffffffff8) + uVar25) =
                             *(undefined8 *)((long)puVar3 + (uVar25 - lVar30));
                      } while (uVar34 < uVar14);
                    }
                  }
                  local_280 = local_280 + uVar21;
                  uVar34 = 0;
                  local_288 = (uVar27 + local_288) - param_4;
                }
              }
              else {
                if ((local_2b0 & 0x1000) == 0) goto LAB_00100498;
                local_260 = uVar21 - local_288;
                uVar34 = 0;
                bVar9 = true;
              }
            }
            else {
              uVar34 = 0;
            }
LAB_0010078d:
            uVar20 = local_2b0 & 0x100;
          }
          else {
            uVar21 = puVar17[1];
            uVar25 = *puVar17;
            if ((uVar21 < uVar25) || (uVar25 < uVar27)) {
              uVar14 = 0xffffffc4;
              goto LAB_0010049d;
            }
            if ((uVar25 == uVar28) && (uVar26 == uVar21)) {
              if ((uVar27 != uVar32) && (uVar21 == uVar25)) {
                uVar34 = 0x80000008;
                param_4 = uVar27;
                uVar32 = uVar27;
                goto LAB_0010078d;
              }
              uVar14 = 0xffffffbf;
              goto LAB_0010049d;
            }
            if (local_278 == 0x7fffffff) {
              uVar14 = 0xffffffc3;
              goto LAB_0010049d;
            }
            local_278 = local_278 + 1;
            if (uVar14 == 0) {
              uVar14 = uVar13;
            }
            if ((param_5 & 0x20000) == 0) {
              uVar28 = uVar25 - uVar27;
              if ((bVar9) || (uVar28 <= local_288)) {
                if (!bVar9) {
                  lVar30 = local_280 * 4;
                  local_280 = local_280 + uVar28;
                  memcpy((void *)((long)param_10 + lVar30),local_2a8 + uVar27 * 4,uVar28 * 4);
                  local_288 = (local_288 + uVar27) - uVar25;
                  goto LAB_001007f0;
                }
              }
              else {
                if ((local_2b0 & 0x1000) == 0) goto LAB_00100498;
                local_260 = -local_288;
              }
              local_260 = uVar28 + local_260;
              bVar9 = true;
              local_1a0 = local_280;
              if ((local_2b0 & 0x8000) != 0) goto LAB_00100675;
LAB_00100860:
              uVar28 = 0;
              local_1f0 = local_298;
              local_1a0 = local_280;
              local_188 = uVar14;
LAB_0010086b:
              iVar15 = local_22c;
              puVar33 = local_268;
              uVar34 = (uint)uVar28;
              if (local_1f0 < local_268) {
                uVar14 = *local_1f0;
                uVar26 = (ulong)uVar14;
                puVar29 = local_1f0;
                if (bVar11) {
                  if (((uVar14 == 0x5c) && (local_1f0 < local_268 + -1)) && (local_1f0[1] == 0x45))
                  {
                    bVar11 = false;
                    local_1f0 = local_1f0 + 2;
                  }
                  else {
LAB_0010099e:
                    local_1f0 = puVar29 + 1;
                    local_1e8 = (uint)uVar26;
LAB_001009b1:
                    if (local_22c == 0) {
LAB_00100a3c:
                      if (uVar12 == 0) goto LAB_00100a48;
                      uVar14 = _pcre2_ord2utf_32();
                      uVar26 = (ulong)uVar14;
                    }
                    else {
                      uVar14 = (uint)uVar26;
                      if ((uVar6 & 0xa0000) != 0) {
                        puVar18 = &_pcre2_dummy_ucd_record_32;
                        if (uVar14 < 0x110000) {
                          puVar18 = &_pcre2_ucd_records_32 +
                                    (ulong)*(ushort *)
                                            (&_pcre2_ucd_stage2_32 +
                                            (long)(int)((uint)*(ushort *)
                                                               (&_pcre2_ucd_stage1_32 +
                                                               (long)((int)uVar14 >> 7) * 2) * 0x80
                                                       + (uVar14 & 0x7f)) * 2) * 0xc;
                        }
                        if (*(int *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar18[1] * 4) == 1) {
                          local_22c = local_200;
                          if ((byte)((0 < iVar15) * '\x04' + 5U) != puVar18[1]) {
                            local_1e8 = uVar14 + *(int *)(puVar18 + 4);
                            uVar26 = (ulong)local_1e8;
                          }
                        }
                        else {
                          local_22c = local_200;
                        }
                        goto LAB_00100a3c;
                      }
                      lVar30 = 0x280;
                      if (0 < local_22c) {
                        lVar30 = 0x260;
                      }
                      local_22c = local_200;
                      if ((*(byte *)(lVar30 + *(long *)(param_1 + 0x18) + (uVar26 >> 3)) >>
                           (uVar14 & 7) & 1) == 0) {
                        bVar4 = *(byte *)(*(long *)(param_1 + 0x18) + 0x100 + uVar26);
                        uVar26 = (ulong)bVar4;
                        local_1e8 = (uint)bVar4;
                      }
LAB_00100a48:
                      local_1d8[0] = (uint)uVar26;
                      uVar26 = 1;
                      uVar14 = 1;
                    }
                    if (bVar9) goto LAB_00100c50;
                    if (local_288 < uVar26) {
                      if ((local_2b0 & 0x1000) == 0) goto LAB_00100498;
                      local_260 = uVar26 - local_288;
                      bVar9 = true;
                    }
                    else {
                      lVar30 = local_280 * 4;
                      local_280 = local_280 + uVar26;
                      memcpy((void *)((long)param_10 + lVar30),local_1d8,(ulong)(uVar14 * 4));
                      local_288 = local_288 - uVar26;
                    }
                  }
                  goto LAB_0010086b;
                }
                if (uVar14 == 0x24) {
                  puVar29 = local_1f0 + 1;
                  if (local_268 <= puVar29) {
LAB_00100de7:
                    local_1f0 = puVar29;
                    uVar14 = 0xffffffdd;
                    goto LAB_00100dec;
                  }
                  uVar14 = local_1f0[1];
                  uVar26 = (ulong)uVar14;
                  if (uVar14 == 0x24) goto LAB_0010099e;
                  bVar8 = false;
                  if (uVar14 == 0x7b) {
                    puVar29 = local_1f0 + 2;
                    if (local_268 <= puVar29) goto LAB_00100de7;
                    uVar26 = (ulong)local_1f0[2];
                    bVar8 = true;
                  }
                  local_1f0 = puVar29;
                  if ((int)uVar26 != 0x2a) {
                    uVar20 = (int)uVar26 - 0x30;
                    bVar10 = false;
                    if (9 < uVar20) goto LAB_00100d6c;
                    do {
                      puVar29 = local_1f0;
                      uVar14 = (uint)uVar26;
                      local_1f0 = puVar29 + 1;
                      if (local_268 <= local_1f0) {
LAB_001013ef:
                        if (bVar8) goto LAB_0010132c;
                        local_210 = (uint *)0x0;
                        iVar15 = 0;
                        puVar24 = (uint *)0x0;
                        local_208 = (uint *)0x0;
                        local_248 = (uint *)0x0;
                        goto LAB_0010124d;
                      }
                      uVar14 = *local_1f0;
                      uVar26 = (ulong)uVar14;
                      if (9 < uVar14 - 0x30) goto LAB_001013ef;
                      uVar20 = (uVar14 - 0x30) + uVar20 * 10;
                    } while ((int)uVar20 <= (int)(uint)*(ushort *)(param_1 + 0x80));
                    if ((local_2b0 & 0x800) != 0) {
                      puVar29 = puVar29 + 2;
                      do {
                        local_1f0 = puVar29;
                        if (local_268 <= local_1f0) break;
                        puVar29 = local_1f0 + 1;
                      } while (*local_1f0 - 0x30 < 10);
                      if (bVar8) {
LAB_0010132c:
                        bVar10 = false;
                        goto LAB_0010132f;
                      }
                      local_210 = (uint *)0x0;
                      iVar15 = 0;
                      puVar24 = (uint *)0x0;
                      local_208 = (uint *)0x0;
                      local_248 = (uint *)0x0;
                      goto LAB_00101261;
                    }
LAB_00101b55:
                    uVar14 = 0xffffffcf;
                    goto LAB_00100dec;
                  }
                  puVar29 = local_1f0 + 1;
                  if (local_268 <= puVar29) goto LAB_00100de7;
                  uVar26 = (ulong)local_1f0[1];
                  bVar10 = true;
                  local_1f0 = puVar29;
LAB_00100d6c:
                  lVar30 = *(long *)(param_1 + 0x18);
                  puVar29 = local_1f0;
                  if (0xff < (uint)uVar26) goto LAB_00100de7;
                  puVar24 = local_178;
                  iVar15 = 0;
                  do {
                    uVar14 = (uint)uVar26;
                    puVar29 = local_1f0;
                    if ((*(byte *)(lVar30 + (ulong)(uVar14 + 0x340)) & 0x10) == 0) {
                      if (iVar15 == 0) goto LAB_00100de7;
                      break;
                    }
                    iVar15 = iVar15 + 1;
                    *puVar24 = uVar14;
                    if (iVar15 == 0x21) goto LAB_00100de7;
                    puVar29 = local_1f0 + 1;
                    if (local_268 <= puVar29) break;
                    uVar14 = local_1f0[1];
                    uVar26 = (ulong)uVar14;
                    puVar24 = puVar24 + 1;
                    local_1f0 = puVar29;
                  } while (uVar14 < 0x100);
                  local_1f0 = puVar29;
                  uVar20 = 0xffffffff;
                  local_178[iVar15] = 0;
                  if (bVar8) {
LAB_0010132f:
                    if ((((local_2b0 & 0x200) == 0) || (bVar10)) ||
                       ((local_268 + -2 <= local_1f0 || (uVar14 != 0x3a)))) {
                      if ((local_1f0 < local_268) && (*local_1f0 == 0x7d)) {
                        local_210 = (uint *)0x0;
                        iVar15 = 0;
                        puVar24 = (uint *)0x0;
                        local_208 = (uint *)0x0;
                        local_248 = (uint *)0x0;
                        goto LAB_0010138e;
                      }
                      uVar14 = 0xffffffc6;
                    }
                    else {
                      uVar31 = local_1f0[1];
                      if ((uVar31 - 0x2b & 0xfffffffd) == 0) {
                        puVar24 = local_1f0 + 2;
                        local_1f0 = puVar24;
                        uVar14 = find_text_end(param_1,&local_1f0,local_268,uVar31 == 0x2d);
                        if (uVar14 == 0) {
                          local_248 = local_1f0;
                          if (uVar31 == 0x2b) {
                            iVar15 = 0x2b;
                            if (*local_1f0 == 0x3a) {
                              local_208 = local_1f0 + 1;
                              local_1f0 = local_208;
                              uVar14 = find_text_end(param_1,&local_1f0,local_268,1);
                              if (uVar14 != 0) goto LAB_00100dec;
                              local_210 = local_1f0;
                            }
                            else {
                              local_210 = (uint *)0x0;
                              local_208 = (uint *)0x0;
                            }
                          }
                          else {
                            local_210 = (uint *)0x0;
                            local_208 = (uint *)0x0;
                            iVar15 = 0x2d;
                          }
LAB_0010138e:
                          local_1f0 = local_1f0 + 1;
                          goto LAB_0010123c;
                        }
                      }
                      else {
                        uVar14 = 0xffffffc5;
                        local_1f0 = local_1f0 + 1;
                      }
                    }
                    goto LAB_00100dec;
                  }
                  iVar15 = 0;
                  uVar20 = 0xffffffff;
                  puVar24 = (uint *)0x0;
                  local_210 = (uint *)0x0;
                  local_208 = (uint *)0x0;
                  local_248 = (uint *)0x0;
LAB_0010123c:
                  if (bVar10) {
                    iVar15 = _pcre2_strcmp_c8_32(local_178);
                    puVar29 = local_1f0;
                    if (iVar15 != 0) goto LAB_00100de7;
                    __src = (int *)pcre2_get_mark_32(local_2c0);
                    if (__src != (int *)0x0) {
                      piVar22 = __src;
                      if (*__src == 0) {
                        uVar26 = 0;
                        __n = 0;
                      }
                      else {
                        do {
                          piVar1 = piVar22 + 1;
                          piVar22 = piVar22 + 1;
                        } while (*piVar1 != 0);
                        __n = (long)piVar22 - (long)__src;
                        uVar26 = (long)__n >> 2;
                        if ((!bVar9) && (local_288 < uVar26)) {
                          if ((local_2b0 & 0x1000) == 0) goto LAB_00100498;
                          local_260 = uVar26 - local_288;
                          bVar9 = bVar10;
                          goto LAB_0010086b;
                        }
                      }
                      if (bVar9) {
LAB_00100c50:
                        local_260 = local_260 + uVar26;
                      }
                      else {
                        lVar30 = local_280 * 4;
                        local_280 = local_280 + uVar26;
                        memcpy((void *)((long)param_10 + lVar30),__src,__n);
                        local_288 = local_288 - uVar26;
                      }
                    }
                    goto LAB_0010086b;
                  }
LAB_0010124d:
                  if ((int)uVar20 < 0) {
                    uVar14 = pcre2_substring_nametable_scan_32(param_1,local_178,&local_1e8);
                    if (uVar14 == 0xffffffcf) {
                      if ((local_2b0 & 0x800) != 0) {
                        uVar20 = *(ushort *)(param_1 + 0x80) + 1;
                        goto LAB_00101261;
                      }
                    }
                    else if (-1 < (int)uVar14) {
                      puVar29 = (uint *)CONCAT44(uStack_1e4,local_1e8);
                      puVar19 = puVar29;
                      if (puVar29 <= (uint *)CONCAT44(uStack_1dc,local_1e0)) {
                        do {
                          uVar31 = *puVar19;
                          if (uVar31 < uVar13) {
                            if ((int)uVar20 < 0) {
                              uVar20 = uVar31;
                            }
                            if (puVar17[uVar31 * 2] != 0xffffffffffffffff) break;
                          }
                          puVar19 = puVar19 + (int)uVar14;
                          uVar31 = uVar20;
                        } while (puVar19 <= (uint *)CONCAT44(uStack_1dc,local_1e0));
                        uVar20 = uVar31;
                        if (-1 < (int)uVar31) goto LAB_00101261;
                      }
                      uVar20 = *puVar29;
                      goto LAB_00101261;
                    }
                  }
                  else {
LAB_00101261:
                    uVar14 = pcre2_substring_length_bynumber_32(local_2c0,uVar20,&local_1e0);
                    puVar29 = local_1f0;
                    if (-1 < (int)uVar14) {
                      if (iVar15 != 0) {
                        if (iVar15 != 0x2d) {
                          if (0x13 < uVar34) goto LAB_00100de7;
                          auStack_e8[uVar28] = local_1f0;
                          auStack_e8[uVar28 + 1] = local_268;
                          if (uVar14 != 0) {
                            local_268 = local_210;
                            goto LAB_00101565;
                          }
                          uVar28 = (ulong)(uVar34 + 2);
                          local_268 = local_248;
                          local_1f0 = puVar24;
                          goto LAB_0010086b;
                        }
                        if (uVar14 != 0) goto LAB_0010152f;
                      }
                      uVar26 = puVar17[(long)(int)(uVar20 * 2) + 1];
                      puVar33 = (uint *)(local_2a8 + puVar17[(int)(uVar20 * 2)] * 4);
                      while (puVar33 < local_2a8 + uVar26 * 4) {
                        local_1e8 = *puVar33;
                        puVar33 = puVar33 + 1;
                        iVar15 = local_22c;
                        if (local_22c == 0) {
LAB_00101887:
                          if (uVar12 == 0) goto LAB_0010188f;
                          uVar14 = _pcre2_ord2utf_32();
                          uVar32 = (ulong)uVar14;
                        }
                        else {
                          iVar15 = local_200;
                          if ((uVar6 & 0xa0000) != 0) {
                            puVar18 = &_pcre2_dummy_ucd_record_32;
                            if (local_1e8 < 0x110000) {
                              puVar18 = &_pcre2_ucd_records_32 +
                                        (ulong)*(ushort *)
                                                (&_pcre2_ucd_stage2_32 +
                                                (long)(int)((uint)*(ushort *)
                                                                   (&_pcre2_ucd_stage1_32 +
                                                                   (long)((int)local_1e8 >> 7) * 2)
                                                            * 0x80 + (local_1e8 & 0x7f)) * 2) * 0xc;
                            }
                            if ((*(int *)(&_pcre2_ucp_gentype_32 + (ulong)(byte)puVar18[1] * 4) == 1
                                ) && ((byte)((0 < local_22c) * '\x04' + 5U) != puVar18[1])) {
                              local_1e8 = local_1e8 + *(int *)(puVar18 + 4);
                            }
                            goto LAB_00101887;
                          }
                          lVar30 = 0x280;
                          if (0 < local_22c) {
                            lVar30 = 0x260;
                          }
                          if ((*(byte *)(lVar30 + *(long *)(param_1 + 0x18) +
                                        (ulong)(local_1e8 >> 3)) >> (local_1e8 & 7) & 1) == 0) {
                            local_1e8 = (uint)*(byte *)(*(long *)(param_1 + 0x18) + 0x100 +
                                                       (ulong)local_1e8);
                          }
LAB_0010188f:
                          uVar32 = 1;
                          uVar14 = 1;
                          local_1d8[0] = local_1e8;
                        }
                        local_22c = iVar15;
                        if (bVar9) {
                          local_260 = local_260 + uVar32;
                        }
                        else if (local_288 < uVar32) {
                          if ((local_2b0 & 0x1000) == 0) goto LAB_00100498;
                          local_260 = uVar32 - local_288;
                          bVar9 = true;
                        }
                        else {
                          memcpy((void *)((long)param_10 + local_280 * 4),local_1d8,
                                 (ulong)(uVar14 * 4));
                          local_280 = local_280 + uVar32;
                          local_288 = local_288 - uVar32;
                        }
                      }
                      goto LAB_0010086b;
                    }
                    if (uVar14 == 0xffffffcf) {
                      if ((local_2b0 & 0x800) == 0) goto LAB_00101b55;
                    }
                    else if (uVar14 != 0xffffffc9) goto LAB_00100dec;
                    if (iVar15 != 0) {
                      if (iVar15 != 0x2d) {
                        puVar24 = local_208;
                        local_248 = local_210;
                      }
LAB_0010152f:
                      local_208 = puVar24;
                      if (0x13 < uVar34) goto LAB_00100de7;
                      local_268 = local_248;
                      auStack_e8[uVar28] = local_1f0;
                      auStack_e8[uVar28 + 1] = puVar33;
LAB_00101565:
                      uVar28 = (ulong)(uVar34 + 2);
                      local_1f0 = local_208;
                      goto LAB_0010086b;
                    }
                    if ((local_2b0 & 0x400) != 0) goto LAB_0010086b;
                    uVar14 = 0xffffffc9;
                  }
LAB_00100dec:
                  *param_11 = (long)local_1f0 - (long)local_298 >> 2;
                  goto LAB_0010049d;
                }
                if (((local_2b0 & 0x200) == 0) || (uVar14 != 0x5c)) goto LAB_0010099e;
                if (local_1f0 < local_268 + -1) {
                  uVar14 = local_1f0[1];
                  if (uVar14 == 0x6c) {
                    local_200 = 0;
                    local_22c = -1;
                    local_1f0 = local_1f0 + 2;
                    goto LAB_0010086b;
                  }
                  if (uVar14 < 0x6d) {
                    if (uVar14 == 0x4c) {
                      local_200 = -1;
                      local_22c = -1;
                      local_1f0 = local_1f0 + 2;
                      goto LAB_0010086b;
                    }
                    if (uVar14 == 0x55) {
                      local_200 = 1;
                      local_22c = 1;
                      local_1f0 = local_1f0 + 2;
                      goto LAB_0010086b;
                    }
                  }
                  else if (uVar14 == 0x75) {
                    local_200 = 0;
                    local_22c = 1;
                    local_1f0 = local_1f0 + 2;
                    goto LAB_0010086b;
                  }
                }
                local_1f0 = local_1f0 + 1;
                iVar16 = _pcre2_check_escape_32
                                   (&local_1f0,local_268,&local_1e8,&local_1e0,
                                    *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                                    0,0);
                if (local_1e0 != 0) {
LAB_00101667:
                  uVar14 = 0xffffffc7;
                  goto LAB_00100dec;
                }
                if (iVar16 == 0x19) {
                  bVar11 = false;
                  local_200 = 0;
                  local_22c = 0;
                }
                else {
                  if (iVar16 != 0x1a) {
                    if (iVar16 != 0) goto LAB_00101667;
                    uVar26 = (ulong)local_1e8;
                    goto LAB_001009b1;
                  }
                  bVar11 = true;
                }
                goto LAB_0010086b;
              }
              if (uVar34 != 0) {
                local_268 = (uint *)auStack_e8[uVar34 - 1];
                uVar28 = (ulong)(uVar34 - 2);
                local_1f0 = (uint *)auStack_e8[uVar28];
                goto LAB_0010086b;
              }
              bVar8 = (bool)(bVar9 ^ 1);
LAB_0010088d:
              if (((param_7 != 0) && (bVar8)) && (*(code **)(param_7 + 0x38) != (code *)0x0)) {
                local_198 = local_280;
                local_184 = local_278;
                iVar15 = (**(code **)(param_7 + 0x38))(local_1b8,*(undefined8 *)(param_7 + 0x40));
                if (iVar15 != 0) {
                  local_280 = local_280 + (local_1a0 - local_198);
                  uVar26 = puVar17[1];
                  local_288 = local_288 + (local_198 - local_1a0);
                  uVar28 = *puVar17;
                  if ((param_5 & 0x20000) == 0) {
                    uVar32 = uVar26 - uVar28;
                    if (local_288 < uVar32) {
                      if ((local_2b0 & 0x1000) == 0) goto LAB_00100498;
                      local_260 = uVar32 - local_288;
                      bVar9 = true;
                    }
                    else if (bVar9) {
                      local_260 = local_260 + uVar32;
                    }
                    else {
                      lVar30 = local_280 * 4;
                      local_280 = local_280 + uVar32;
                      memcpy((void *)((long)param_10 + lVar30),local_2a8 + uVar28 * 4,uVar32 * 4);
                      lVar30 = uVar28 - uVar26;
                      uVar26 = puVar17[1];
                      local_288 = local_288 + lVar30;
                      uVar28 = *puVar17;
                    }
                  }
                  if (iVar15 < 0) {
                    local_2b0 = local_2b0 & 0xfffffeff;
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = local_2b0 & 0x100;
                  }
                  goto LAB_00100691;
                }
              }
              uVar28 = *puVar17;
              uVar26 = puVar17[1];
              uVar20 = local_2b0 & 0x100;
            }
            else {
LAB_001007f0:
              local_1a0 = local_280;
              local_1f0 = local_298;
              if ((local_2b0 & 0x8000) == 0) goto LAB_00100860;
              if ((bVar9) || (param_9 <= local_288)) {
                if (bVar9) goto LAB_00100675;
                local_188 = uVar14;
                memcpy((void *)((long)param_10 + local_280 * 4),local_298,local_220);
                local_288 = local_288 - param_9;
                local_280 = local_280 + param_9;
                bVar8 = true;
                goto LAB_0010088d;
              }
              local_188 = uVar14;
              if ((local_2b0 & 0x1000) == 0) goto LAB_00100498;
              local_260 = -local_288;
LAB_00100675:
              local_260 = local_260 + param_9;
              local_1f0 = local_298;
              bVar9 = true;
              uVar28 = *puVar17;
              uVar26 = puVar17[1];
              uVar20 = local_2b0 & 0x100;
              local_280 = local_1a0;
              local_188 = uVar14;
            }
LAB_00100691:
            param_4 = uVar26;
            if ((uVar28 != uVar26) || (uVar34 = 0x80000008, uVar32 = uVar27, uVar27 < uVar28)) {
              uVar34 = 0;
              uVar32 = uVar27;
            }
          }
          uVar27 = param_4;
          if (uVar20 == 0) goto LAB_00100438;
LAB_001006b2:
          uVar14 = pcre2_match_32(param_1,local_2a8,local_2b8,param_4,uVar23 | uVar34,local_2c0,
                                  param_7);
          uVar27 = param_4;
        } while( true );
      }
      if (param_4 <= uVar7) {
        memcpy(param_10,local_2a8,param_4 * 4);
        bVar9 = false;
        local_260 = 0;
        local_288 = uVar7 - param_4;
        local_280 = param_4;
        goto LAB_00100522;
      }
      if ((param_5 & 0x1000) != 0) {
        bVar9 = true;
        local_280 = 0;
        local_260 = param_4 - uVar7;
        goto LAB_00100522;
      }
      goto LAB_00100498;
    }
    uVar14 = 0xffffffdf;
    *(undefined8 *)((long)local_2c0 + 0x48) = 0;
  }
  else {
    *(undefined8 *)((long)local_2c0 + 0x48) = 0;
  }
  goto LAB_0010049d;
LAB_00100438:
  if ((param_5 & 0x20000) == 0) {
    uVar28 = local_2b8 - uVar27;
    if ((local_288 < uVar28) && ((bool)(bVar9 ^ 1U))) {
      if ((local_2b0 & 0x1000) == 0) goto LAB_00100498;
      local_260 = -local_288;
    }
    else if (!bVar9) {
      memcpy((void *)((long)param_10 + local_280 * 4),local_2a8 + uVar27 * 4,uVar28 * 4);
      if (local_2b8 != uVar27 + local_288) {
        local_280 = local_280 + uVar28;
        goto LAB_00101726;
      }
      goto LAB_0010046c;
    }
    local_260 = uVar28 + local_260;
LAB_0010111f:
    local_260 = local_260 + 1;
LAB_0010047b:
    local_1d8[0] = 0;
    *param_11 = local_260 + uVar7;
  }
  else {
    if ((local_288 != 0) || (!(bool)(bVar9 ^ 1U))) {
      if (bVar9) goto LAB_0010111f;
LAB_00101726:
      local_1d8[0] = 0;
      *(undefined4 *)((long)param_10 + local_280 * 4) = 0;
      *param_11 = local_280;
      uVar14 = local_278;
      goto LAB_0010049d;
    }
LAB_0010046c:
    local_1d8[0] = 0;
    local_260 = 1;
    if ((local_2b0 & 0x1000) != 0) goto LAB_0010047b;
  }
LAB_00100498:
  uVar14 = 0xffffffd0;
LAB_0010049d:
  if (local_250 == (void *)0x0) {
    *(uint *)((long)local_2c0 + 100) = uVar14;
  }
  else {
    pcre2_match_data_free_32();
  }
LAB_001004ac:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


