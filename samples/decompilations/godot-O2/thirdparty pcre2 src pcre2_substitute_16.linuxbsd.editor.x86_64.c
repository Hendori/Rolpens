
int find_text_end(ulong param_1,long *param_2,short *param_3,uint param_4)

{
  short *psVar1;
  ushort *puVar2;
  short sVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long in_FS_OFFSET;
  ulong uStack_68;
  int local_50;
  undefined1 local_4c [4];
  short *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = (short *)*param_2;
  uStack_68 = param_1;
  if (local_48 < param_3) {
    iVar5 = 0;
    uVar7 = 0;
    psVar1 = param_3 + -1;
    do {
      sVar3 = *local_48;
      if (iVar5 == 0) {
        psVar4 = local_48;
        iVar6 = 0;
        if (sVar3 == 0x7d) {
          if (uVar7 == 0) goto LAB_001000a5;
          uVar7 = uVar7 - 1;
          local_48 = local_48 + 1;
        }
        else if (sVar3 == 0x3a) {
          uStack_68 = (ulong)(uVar7 | param_4);
          if ((uVar7 | param_4) == 0) goto LAB_001000a5;
LAB_0010004f:
          local_48 = local_48 + 1;
        }
        else if (sVar3 == 0x24) {
          if ((psVar1 <= local_48) || (local_48[1] != 0x7b)) goto LAB_0010004f;
          local_48 = local_48 + 2;
          uVar7 = uVar7 + 1;
        }
        else {
          if (sVar3 != 0x5c) goto LAB_0010004f;
          psVar4 = local_48 + 1;
          if ((local_48 < psVar1) &&
             (puVar2 = (ushort *)(local_48 + 1), (ushort)(*puVar2 - 0x4c) < 0x2a)) {
            local_48 = local_48 + 2;
            uStack_68 = 0x20100000201;
            if ((0x20100000201U >> ((ulong)(*puVar2 - 0x4c) & 0x3f) & 1) != 0)
            goto joined_r0x0010009d;
          }
          uStack_68 = 0;
          local_48 = psVar4;
          iVar5 = _pcre2_check_escape_16
                            (&local_48,param_3,local_4c,&local_50,*(undefined4 *)(param_1 + 0x58),
                             *(undefined4 *)(param_1 + 0x5c));
          psVar4 = local_48 + -1;
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
        if (((sVar3 != 0x5c) || (psVar1 <= local_48)) || (local_48[1] != 0x45)) goto LAB_0010004f;
        local_48 = local_48 + 2;
        iVar5 = 0;
      }
joined_r0x0010009d:
    } while (local_48 < param_3);
  }
  psVar4 = local_48;
  iVar6 = -0x3a;
LAB_001000a5:
  local_48 = psVar4;
  *param_2 = (long)local_48;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uStack_68);
  }
  return iVar6;
}



uint pcre2_substitute_16(long param_1,undefined *param_2,ulong param_3,ulong param_4,uint param_5,
                        void *param_6,long param_7,ushort *param_8,ulong param_9,void *param_10,
                        ulong *param_11)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ushort *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  ushort *puVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  ulong *puVar17;
  long lVar18;
  short *__src;
  ushort *puVar19;
  short *psVar20;
  size_t __n;
  short sVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ushort *puVar25;
  ulong uVar26;
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  long in_FS_OFFSET;
  void *local_280;
  ulong local_278;
  uint local_270;
  undefined *local_268;
  ushort *local_250;
  ulong local_240;
  ulong local_238;
  uint local_230;
  ushort *local_228;
  long local_220;
  void *local_210;
  ushort *local_200;
  size_t local_1e0;
  int local_1cc;
  ushort *local_1c8;
  ushort *local_1c0;
  ushort *local_1a0;
  uint local_198;
  undefined4 uStack_194;
  int local_190;
  undefined4 uStack_18c;
  ushort local_184 [6];
  undefined4 local_178 [2];
  undefined *local_170;
  void *local_168;
  ulong local_160;
  ulong local_158;
  ulong *local_150;
  uint local_148;
  uint local_144;
  ushort local_138 [40];
  undefined8 auStack_e8 [21];
  long local_40;
  
  local_250 = param_8;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(uint *)(param_1 + 0x58);
  uVar12 = uVar2 & 0x80000;
  uVar3 = *param_11;
  *param_11 = 0xffffffffffffffff;
  if ((param_5 & 0x30) != 0) {
    uVar15 = 0xffffffde;
    goto LAB_001004b4;
  }
  if (param_8 == (ushort *)0x0) {
    if (param_9 == 0) {
      local_1e0 = 0;
      local_228 = (ushort *)&_LC0;
      local_250 = (ushort *)&_LC0;
      goto LAB_001002be;
    }
LAB_00101762:
    uVar15 = 0xffffffcd;
    goto LAB_001004b4;
  }
  if (param_9 == 0xffffffffffffffff) {
    param_9 = _pcre2_strlen_16(param_8);
    local_1e0 = param_9 * 2;
    local_228 = param_8 + param_9;
  }
  else {
    local_1e0 = param_9 * 2;
    local_228 = param_8 + param_9;
  }
LAB_001002be:
  if (param_6 == (void *)0x0) {
    if ((param_5 & 0x10000) != 0) goto LAB_00101762;
    lVar18 = param_1;
    if (param_7 != 0) {
      lVar18 = param_7;
    }
    local_280 = (void *)pcre2_match_data_create_from_pattern_16(param_1,lVar18);
    local_210 = local_280;
    if (local_280 == (void *)0x0) goto LAB_00101d14;
  }
  else if ((param_5 & 0x10000) == 0) {
    local_210 = (void *)0x0;
    local_280 = param_6;
  }
  else {
    uVar11 = *(ushort *)((long)param_6 + 0x62);
    lVar18 = param_1;
    if (param_7 != 0) {
      lVar18 = param_7;
    }
    uVar15 = *(ushort *)(param_1 + 0x80) + 1;
    if (uVar11 < uVar15) {
      uVar15 = (uint)uVar11;
    }
    local_280 = (void *)pcre2_match_data_create_16(uVar11,lVar18);
    if (local_280 == (void *)0x0) {
LAB_00101d14:
      uVar15 = 0xffffffd0;
      goto LAB_001004b4;
    }
    memcpy(local_280,param_6,(long)(int)(uVar15 * 2 + 0xd) << 3);
    *(undefined8 *)((long)local_280 + 0x30) = 0;
    *(undefined8 *)((long)local_280 + 0x38) = 0;
    local_210 = local_280;
  }
  puVar17 = (ulong *)pcre2_get_ovector_pointer_16(local_280);
  uVar13 = pcre2_get_ovector_count_16(local_280);
  local_178[0] = 0;
  local_168 = param_10;
  local_278 = param_3;
  local_170 = param_2;
  local_150 = puVar17;
  if (param_2 == (undefined *)0x0) {
    if (param_3 != 0) goto LAB_00101762;
    local_268 = &_LC0;
  }
  else {
    local_268 = param_2;
    if (param_3 == 0xffffffffffffffff) {
      local_278 = _pcre2_strlen_16();
    }
  }
  if (((uVar12 == 0) || ((param_5 & 0x40000000) != 0)) ||
     (uVar15 = _pcre2_valid_utf_16(local_250,param_9,(long)local_280 + 0x58), uVar15 == 0)) {
    if (param_4 <= local_278) {
      local_240 = uVar3;
      if ((param_5 & 0x20000) != 0) {
        bVar7 = false;
        local_238 = 0;
        local_220 = 0;
LAB_00100522:
        bVar9 = false;
        local_270 = param_5 & 0x39f00;
        local_1cc = 0;
        uVar27 = param_5 & 0xfffc60ff;
        uVar31 = 0;
        uVar30 = 0xffffffffffffffff;
        uVar29 = 0xffffffffffffffff;
        local_230 = 0;
        uVar26 = 0xffffffffffffffff;
        iVar22 = 0;
        if ((param_5 & 0x10000) == 0) goto LAB_001006b5;
        uVar15 = *(uint *)((long)local_280 + 100);
        uVar23 = param_4;
        do {
          if (uVar12 != 0) {
            uVar27 = uVar27 | 0x40000000;
          }
          if ((int)uVar15 < 0) {
            if (uVar15 != 0xffffffff) goto LAB_001004a5;
            if ((uVar31 == 0) || (local_278 <= uVar23)) goto LAB_00100440;
            param_4 = uVar23 + 1;
            if ((*(short *)(local_268 + param_4 * 2 + -2) == 0xd) &&
               ((1 < (ushort)(*(short *)(param_1 + 0x7a) - 1U) && (param_4 < local_278)))) {
              if (*(short *)(local_268 + param_4 * 2) == 10) {
                param_4 = uVar23 + 2;
                uVar32 = 2;
              }
              else {
                uVar32 = 1;
                if ((*(byte *)(param_1 + 0x5a) & 8) != 0) goto LAB_00100c31;
              }
            }
            else {
              uVar32 = 1;
              if (((*(byte *)(param_1 + 0x5a) & 8) != 0) && (param_4 < local_278)) {
LAB_00100c31:
                do {
                  if ((*(ushort *)(local_268 + param_4 * 2) & 0xfc00) != 0xdc00) break;
                  param_4 = param_4 + 1;
                } while (param_4 < local_278);
                uVar32 = param_4 - uVar23;
              }
            }
            if ((param_5 & 0x20000) == 0) {
              if ((bVar7) || (uVar32 <= local_240)) {
                if (bVar7) {
                  local_220 = local_220 + uVar32;
                  uVar31 = 0;
                }
                else {
                  memcpy((void *)((long)param_10 + local_238 * 2),local_268 + uVar23 * 2,uVar32 * 2)
                  ;
                  local_238 = local_238 + uVar32;
                  uVar31 = 0;
                  local_240 = (uVar23 + local_240) - param_4;
                }
              }
              else {
                if ((local_270 & 0x1000) == 0) goto LAB_001004a0;
                local_220 = uVar32 - local_240;
                bVar7 = true;
                uVar31 = 0;
              }
            }
            else {
              uVar31 = 0;
            }
LAB_001007a1:
            uVar14 = local_270 & 0x100;
          }
          else {
            uVar32 = puVar17[1];
            uVar4 = *puVar17;
            if ((uVar32 < uVar4) || (uVar4 < uVar23)) {
              uVar15 = 0xffffffc4;
              goto LAB_001004a5;
            }
            if ((uVar29 == uVar32) && (uVar4 == uVar26)) {
              if ((uVar32 == uVar4) && (uVar23 != uVar30)) {
                uVar31 = 0x80000008;
                param_4 = uVar23;
                uVar30 = uVar23;
                goto LAB_001007a1;
              }
              uVar15 = 0xffffffbf;
              goto LAB_001004a5;
            }
            if (local_230 == 0x7fffffff) {
              uVar15 = 0xffffffc3;
              goto LAB_001004a5;
            }
            local_230 = local_230 + 1;
            if (uVar15 == 0) {
              uVar15 = uVar13;
            }
            if ((param_5 & 0x20000) == 0) {
              uVar26 = uVar4 - uVar23;
              if ((bVar7) || (uVar26 <= local_240)) {
                if (!bVar7) {
                  lVar18 = local_238 * 2;
                  local_238 = local_238 + uVar26;
                  memcpy((void *)((long)param_10 + lVar18),local_268 + uVar23 * 2,uVar26 * 2);
                  local_240 = (local_240 + uVar23) - uVar4;
                  goto LAB_00100808;
                }
              }
              else {
                if ((local_270 & 0x1000) == 0) goto LAB_001004a0;
                local_220 = -local_240;
              }
              local_220 = uVar26 + local_220;
              bVar7 = true;
              local_160 = local_238;
              if ((local_270 & 0x8000) != 0) goto LAB_00100679;
LAB_00100878:
              local_1a0 = local_250;
              local_160 = local_238;
              local_148 = uVar15;
              uVar31 = 0;
LAB_0010088b:
              if (local_1a0 < local_228) {
                uVar11 = *local_1a0;
                uVar26 = (ulong)uVar11;
                if (bVar9) {
                  if (((uVar11 == 0x5c) && (local_1a0 < local_228 + -1)) && (local_1a0[1] == 0x45))
                  {
                    bVar9 = false;
                    local_1a0 = local_1a0 + 2;
                  }
                  else {
LAB_001009d8:
                    local_198 = (uint)uVar11;
                    puVar10 = local_1a0 + 1;
                    if (uVar12 == 0) {
LAB_00100c90:
                      local_1a0 = puVar10;
                      if (iVar22 != 0) goto LAB_00100d30;
LAB_00100c9f:
                      uVar26 = 1;
                      uVar15 = 1;
                      local_184[0] = uVar11;
                    }
                    else {
                      if ((uVar11 & 0xfc00) == 0xd800) {
                        local_198 = ((local_198 & 0x3ff) << 10 | local_1a0[1] & 0x3ff) + 0x10000;
                        uVar26 = (ulong)local_198;
                        puVar10 = local_1a0 + 2;
                      }
joined_r0x00100d29:
                      local_1a0 = puVar10;
                      if (iVar22 != 0) {
LAB_00100d30:
                        uVar15 = (uint)uVar26;
                        if ((uVar2 & 0xa0000) != 0) {
                          uVar29 = (ulong)(uVar15 + 0x7f);
                          if (-1 < (int)uVar15) {
                            uVar29 = uVar26;
                          }
                          iVar16 = local_1cc;
                          if ((*(int *)(&_pcre2_ucp_gentype_16 +
                                       (ulong)(byte)(&DAT_00102069)
                                                    [(ulong)*(ushort *)
                                                             (&_pcre2_ucd_stage2_16 +
                                                             (long)(int)((uint)*(ushort *)
                                                                                (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                                  (int)uVar15 % 0x80) * 2) * 0xc] * 4) == 1) &&
                             ((byte)((0 < iVar22) * '\x04' + 5U) !=
                              (&DAT_00102069)
                              [(ulong)*(ushort *)
                                       (&_pcre2_ucd_stage2_16 +
                                       (long)(int)((uint)*(ushort *)
                                                          (&_pcre2_ucd_stage1_16 +
                                                          (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                                  (int)uVar15 % 0x80) * 2) * 0xc])) {
                            local_198 = uVar15 + *(int *)(&DAT_0010206c +
                                                         (ulong)*(ushort *)
                                                                 (&_pcre2_ucd_stage2_16 +
                                                                 (long)(int)((uint)*(ushort *)
                                                                                    (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar29 >> 7) * 2) * 0x80 +
                                                  (int)uVar15 % 0x80) * 2) * 0xc);
                            uVar26 = (ulong)local_198;
                          }
                          goto LAB_00100db0;
                        }
                        lVar18 = 0x280;
                        if (0 < iVar22) {
                          lVar18 = 0x260;
                        }
                        if ((*(byte *)(lVar18 + *(long *)(param_1 + 0x18) + (uVar26 >> 3)) >>
                             (uVar15 & 7) & 1) == 0) {
                          bVar1 = *(byte *)(*(long *)(param_1 + 0x18) + 0x100 + uVar26);
                          local_198 = (uint)bVar1;
                          uVar11 = (ushort)bVar1;
                          iVar22 = local_1cc;
                        }
                        else {
                          uVar11 = (ushort)uVar26;
                          iVar22 = local_1cc;
                        }
                        goto LAB_00100c9f;
                      }
LAB_00100a19:
                      uVar15 = _pcre2_ord2utf_16();
                      uVar26 = (ulong)uVar15;
                    }
                    if (bVar7) goto LAB_00100a31;
                    if (local_240 < uVar26) {
                      if ((local_270 & 0x1000) == 0) goto LAB_001004a0;
                      local_220 = uVar26 - local_240;
                      bVar7 = true;
                    }
                    else {
                      lVar18 = local_238 * 2;
                      local_238 = local_238 + uVar26;
                      memcpy((void *)((long)param_10 + lVar18),local_184,(ulong)(uVar15 * 2));
                      local_240 = local_240 - uVar26;
                    }
                  }
                  goto LAB_0010088b;
                }
                if (uVar11 == 0x24) {
                  puVar10 = local_1a0 + 1;
                  if (local_228 <= puVar10) {
LAB_00100eea:
                    local_1a0 = puVar10;
                    uVar15 = 0xffffffdd;
                    goto LAB_00100eef;
                  }
                  uVar11 = local_1a0[1];
                  if (uVar11 == 0x24) {
                    uVar26 = 0x24;
                    local_198 = 0x24;
                    uVar11 = 0x24;
                    puVar10 = local_1a0 + 2;
                    if (uVar12 == 0) goto LAB_00100c90;
                    goto joined_r0x00100d29;
                  }
                  bVar6 = false;
                  if (uVar11 == 0x7b) {
                    puVar10 = local_1a0 + 2;
                    if (local_228 <= puVar10) goto LAB_00100eea;
                    uVar11 = local_1a0[2];
                    bVar6 = true;
                  }
                  local_1a0 = puVar10;
                  uVar15 = (uint)uVar11;
                  if (uVar11 != 0x2a) {
                    bVar8 = false;
                    if (9 < (ushort)(uVar11 - 0x30)) goto LAB_00100e6f;
                    uVar14 = uVar15 - 0x30;
                    do {
                      uVar11 = (ushort)uVar15;
                      local_1a0 = local_1a0 + 1;
                      if (local_228 <= local_1a0) {
LAB_001014be:
                        uVar28 = uVar14;
                        if (bVar6) goto LAB_001013f0;
                        local_1c0 = (ushort *)0x0;
                        sVar21 = 0;
                        puVar25 = (ushort *)0x0;
                        local_1c8 = (ushort *)0x0;
                        local_200 = (ushort *)0x0;
                        goto LAB_0010135b;
                      }
                      uVar11 = *local_1a0;
                      uVar15 = (uint)uVar11;
                      if (9 < (ushort)(uVar11 - 0x30)) goto LAB_001014be;
                      uVar28 = (uVar11 - 0x30) + uVar14 * 10;
                      uVar14 = uVar28;
                    } while ((int)uVar28 <= (int)(uint)*(ushort *)(param_1 + 0x80));
                    if ((local_270 & 0x800) != 0) {
                      do {
                        local_1a0 = local_1a0 + 1;
                        if (local_228 <= local_1a0) break;
                      } while ((ushort)(*local_1a0 - 0x30) < 10);
                      if (bVar6) {
LAB_001013f0:
                        bVar8 = false;
                        goto LAB_001013f3;
                      }
                      local_1c0 = (ushort *)0x0;
                      sVar21 = 0;
                      puVar25 = (ushort *)0x0;
                      local_1c8 = (ushort *)0x0;
                      local_200 = (ushort *)0x0;
                      uVar24 = uVar28;
                      goto LAB_0010136f;
                    }
LAB_00101c97:
                    uVar15 = 0xffffffcf;
                    goto LAB_00100eef;
                  }
                  puVar10 = local_1a0 + 1;
                  if (local_228 <= puVar10) goto LAB_00100eea;
                  uVar15 = (uint)local_1a0[1];
                  bVar8 = true;
                  local_1a0 = puVar10;
LAB_00100e6f:
                  lVar18 = *(long *)(param_1 + 0x18);
                  puVar10 = local_1a0;
                  if (0xff < (ushort)uVar15) goto LAB_00100eea;
                  puVar25 = local_138;
                  iVar16 = 0;
                  do {
                    uVar11 = (ushort)uVar15;
                    puVar10 = local_1a0;
                    if ((*(byte *)(lVar18 + (ulong)(uVar15 + 0x340 & 0xffff)) & 0x10) == 0) {
                      if (iVar16 == 0) goto LAB_00100eea;
                      break;
                    }
                    iVar16 = iVar16 + 1;
                    *puVar25 = uVar11;
                    if (iVar16 == 0x21) goto LAB_00100eea;
                    puVar10 = local_1a0 + 1;
                    if (local_228 <= puVar10) break;
                    uVar11 = local_1a0[1];
                    uVar15 = (uint)uVar11;
                    puVar25 = puVar25 + 1;
                    local_1a0 = puVar10;
                  } while (uVar11 < 0x100);
                  local_1a0 = puVar10;
                  uVar28 = 0xffffffff;
                  local_138[iVar16] = 0;
                  if (bVar6) {
LAB_001013f3:
                    if (((((local_270 & 0x200) == 0) || (bVar8)) || (local_228 + -2 <= local_1a0))
                       || (uVar11 != 0x3a)) {
                      if ((local_1a0 < local_228) && (*local_1a0 == 0x7d)) {
                        local_1c0 = (ushort *)0x0;
                        sVar21 = 0;
                        puVar25 = (ushort *)0x0;
                        local_1c8 = (ushort *)0x0;
                        local_200 = (ushort *)0x0;
                        goto LAB_00101452;
                      }
                      uVar15 = 0xffffffc6;
                    }
                    else {
                      uVar11 = local_1a0[1];
                      if ((uVar11 - 0x2b & 0xfffd) == 0) {
                        puVar25 = local_1a0 + 2;
                        local_1a0 = puVar25;
                        uVar15 = find_text_end(param_1,&local_1a0,local_228,uVar11 == 0x2d);
                        if (uVar15 == 0) {
                          local_200 = local_1a0;
                          if (uVar11 == 0x2b) {
                            sVar21 = 0x2b;
                            if (*local_1a0 == 0x3a) {
                              local_1c8 = local_1a0 + 1;
                              local_1a0 = local_1c8;
                              uVar15 = find_text_end(param_1,&local_1a0,local_228,1);
                              if (uVar15 != 0) goto LAB_00100eef;
                              local_1c0 = local_1a0;
                            }
                            else {
                              local_1c0 = (ushort *)0x0;
                              local_1c8 = (ushort *)0x0;
                            }
                          }
                          else {
                            sVar21 = 0x2d;
                            local_1c0 = (ushort *)0x0;
                            local_1c8 = (ushort *)0x0;
                          }
LAB_00101452:
                          local_1a0 = local_1a0 + 1;
                          uVar14 = uVar28;
                          goto LAB_0010134a;
                        }
                      }
                      else {
                        uVar15 = 0xffffffc5;
                        local_1a0 = local_1a0 + 1;
                      }
                    }
                    goto LAB_00100eef;
                  }
                  sVar21 = 0;
                  puVar25 = (ushort *)0x0;
                  local_1c0 = (ushort *)0x0;
                  local_1c8 = (ushort *)0x0;
                  local_200 = (ushort *)0x0;
                  uVar14 = 0xffffffff;
LAB_0010134a:
                  if (bVar8) {
                    iVar16 = _pcre2_strcmp_c8_16(local_138);
                    puVar10 = local_1a0;
                    if (iVar16 != 0) goto LAB_00100eea;
                    __src = (short *)pcre2_get_mark_16();
                    if (__src != (short *)0x0) {
                      psVar20 = __src;
                      if (*__src == 0) {
                        uVar26 = 0;
                        __n = 0;
                      }
                      else {
                        do {
                          psVar20 = psVar20 + 1;
                        } while (*psVar20 != 0);
                        __n = (long)psVar20 - (long)__src;
                        uVar26 = (long)__n >> 1;
                        if ((!bVar7) && (local_240 < uVar26)) {
                          if ((local_270 & 0x1000) == 0) goto LAB_001004a0;
                          local_220 = uVar26 - local_240;
                          bVar7 = bVar8;
                          goto LAB_0010088b;
                        }
                      }
                      if (bVar7) {
LAB_00100a31:
                        local_220 = local_220 + uVar26;
                      }
                      else {
                        lVar18 = local_238 * 2;
                        local_238 = local_238 + uVar26;
                        memcpy((void *)((long)param_10 + lVar18),__src,__n);
                        local_240 = local_240 - uVar26;
                      }
                    }
                    goto LAB_0010088b;
                  }
LAB_0010135b:
                  uVar28 = uVar14;
                  uVar24 = uVar14;
                  if ((int)uVar14 < 0) {
                    uVar15 = pcre2_substring_nametable_scan_16(param_1,local_138,&local_198);
                    if (uVar15 == 0xffffffcf) {
                      if ((local_270 & 0x800) != 0) {
                        uVar28 = *(ushort *)(param_1 + 0x80) + 1;
                        uVar24 = uVar28;
                        goto LAB_0010136f;
                      }
                    }
                    else if (-1 < (int)uVar15) {
                      puVar10 = (ushort *)CONCAT44(uStack_194,local_198);
                      puVar5 = (ushort *)CONCAT44(uStack_18c,local_190);
                      if (puVar10 <= puVar5) {
                        puVar19 = puVar10;
                        do {
                          uVar11 = *puVar19;
                          uVar28 = (uint)uVar11;
                          uVar24 = (uint)uVar11;
                          if (uVar24 < uVar13) {
                            if ((int)uVar14 < 0) {
                              uVar14 = (uint)uVar11;
                            }
                            do {
                              if (puVar17[uVar28 * 2] != 0xffffffffffffffff) goto LAB_0010136f;
                              puVar19 = puVar19 + (int)uVar15;
                              if (puVar5 < puVar19) goto LAB_00101c68;
                              uVar28 = (uint)*puVar19;
                              uVar24 = (uint)*puVar19;
                            } while (uVar24 < uVar13);
                          }
                          puVar19 = puVar19 + (int)uVar15;
                        } while (puVar19 <= puVar5);
LAB_00101c68:
                        uVar28 = uVar14;
                        uVar24 = uVar14;
                        if (-1 < (int)uVar14) goto LAB_0010136f;
                      }
                      uVar28 = (uint)*puVar10;
                      uVar24 = (uint)*puVar10;
                      goto LAB_0010136f;
                    }
                  }
                  else {
LAB_0010136f:
                    uVar15 = pcre2_substring_length_bynumber_16(local_280,uVar24,&local_190);
                    puVar10 = local_1a0;
                    if (-1 < (int)uVar15) {
                      if (sVar21 != 0) {
                        if (sVar21 != 0x2d) {
                          if (0x13 < uVar31) goto LAB_00100eea;
                          auStack_e8[uVar31] = local_1a0;
                          auStack_e8[(ulong)uVar31 + 1] = local_228;
                          if (uVar15 != 0) {
                            local_228 = local_1c0;
                            goto LAB_0010169c;
                          }
                          local_228 = local_200;
                          local_1a0 = puVar25;
                          uVar31 = uVar31 + 2;
                          goto LAB_0010088b;
                        }
                        if (uVar15 != 0) goto LAB_0010165d;
                      }
                      uVar26 = puVar17[(long)(int)(uVar28 * 2) + 1];
                      puVar10 = (ushort *)(local_268 + puVar17[(int)(uVar28 * 2)] * 2);
                      while (puVar10 < local_268 + uVar26 * 2) {
                        uVar11 = *puVar10;
                        uVar29 = (ulong)uVar11;
                        puVar25 = puVar10 + 1;
                        local_198 = (uint)uVar11;
                        if (uVar12 == 0) {
                          if (iVar22 != 0) goto LAB_00101990;
LAB_001018ab:
                          uVar29 = 1;
                          uVar15 = 1;
                          local_184[0] = uVar11;
                        }
                        else {
                          if ((uVar11 & 0xfc00) == 0xd800) {
                            puVar25 = puVar10 + 2;
                            local_198 = ((uVar11 & 0x3ff) << 10 | puVar10[1] & 0x3ff) + 0x10000;
                            uVar29 = (ulong)local_198;
                          }
                          if (iVar22 != 0) {
LAB_00101990:
                            uVar15 = (uint)uVar29;
                            if ((uVar2 & 0xa0000) == 0) {
                              lVar18 = 0x280;
                              if (0 < iVar22) {
                                lVar18 = 0x260;
                              }
                              if ((*(byte *)(lVar18 + *(long *)(param_1 + 0x18) + (uVar29 >> 3)) >>
                                   (uVar15 & 7) & 1) == 0) {
                                bVar1 = *(byte *)(*(long *)(param_1 + 0x18) +
                                                 (ulong)(uVar15 + 0x100));
                                local_198 = (uint)bVar1;
                                uVar11 = (ushort)bVar1;
                                iVar22 = local_1cc;
                              }
                              else {
                                uVar11 = (ushort)uVar29;
                                iVar22 = local_1cc;
                              }
                            }
                            else {
                              if ((*(int *)(&_pcre2_ucp_gentype_16 +
                                           (ulong)(byte)(&DAT_00102069)
                                                        [(ulong)*(ushort *)
                                                                 (&_pcre2_ucd_stage2_16 +
                                                                 (long)(int)((uint)*(ushort *)
                                                                                    (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar15 >> 7) * 2) * 0x80 +
                                                  (uVar15 & 0x7f)) * 2) * 0xc] * 4) == 1) &&
                                 ((byte)((0 < iVar22) * '\x04' + 5U) !=
                                  (&DAT_00102069)
                                  [(ulong)*(ushort *)
                                           (&_pcre2_ucd_stage2_16 +
                                           (long)(int)((uint)*(ushort *)
                                                              (&_pcre2_ucd_stage1_16 +
                                                              (long)((int)uVar15 >> 7) * 2) * 0x80 +
                                                      (uVar15 & 0x7f)) * 2) * 0xc])) {
                                local_198 = uVar15 + *(int *)(&DAT_0010206c +
                                                             (ulong)*(ushort *)
                                                                     (&_pcre2_ucd_stage2_16 +
                                                                     (long)(int)((uint)*(ushort *)
                                                                                        (&
                                                  _pcre2_ucd_stage1_16 +
                                                  (long)((int)uVar15 >> 7) * 2) * 0x80 +
                                                  (uVar15 & 0x7f)) * 2) * 0xc);
                                uVar29 = (ulong)local_198;
                              }
                              iVar22 = local_1cc;
                              if (uVar12 != 0) goto LAB_0010191b;
                              uVar11 = (ushort)uVar29;
                            }
                            goto LAB_001018ab;
                          }
LAB_0010191b:
                          uVar15 = _pcre2_ord2utf_16();
                          uVar29 = (ulong)uVar15;
                        }
                        puVar10 = puVar25;
                        if (bVar7) {
                          local_220 = local_220 + uVar29;
                        }
                        else if (local_240 < uVar29) {
                          if ((local_270 & 0x1000) == 0) goto LAB_001004a0;
                          bVar7 = true;
                          local_220 = uVar29 - local_240;
                        }
                        else {
                          memcpy((void *)((long)param_10 + local_238 * 2),local_184,
                                 (ulong)(uVar15 * 2));
                          local_238 = local_238 + uVar29;
                          local_240 = local_240 - uVar29;
                        }
                      }
                      goto LAB_0010088b;
                    }
                    if (uVar15 == 0xffffffcf) {
                      if ((local_270 & 0x800) == 0) goto LAB_00101c97;
                    }
                    else if (uVar15 != 0xffffffc9) goto LAB_00100eef;
                    if (sVar21 != 0) {
                      if (sVar21 != 0x2d) {
                        puVar25 = local_1c8;
                        local_200 = local_1c0;
                      }
LAB_0010165d:
                      local_1c8 = puVar25;
                      if (0x13 < uVar31) goto LAB_00100eea;
                      auStack_e8[uVar31] = local_1a0;
                      auStack_e8[(ulong)uVar31 + 1] = local_228;
                      local_228 = local_200;
LAB_0010169c:
                      uVar31 = uVar31 + 2;
                      local_1a0 = local_1c8;
                      goto LAB_0010088b;
                    }
                    if ((local_270 & 0x400) != 0) goto LAB_0010088b;
                    uVar15 = 0xffffffc9;
                  }
LAB_00100eef:
                  *param_11 = (long)local_1a0 - (long)local_250 >> 1;
                  goto LAB_001004a5;
                }
                if (((local_270 & 0x200) == 0) || (uVar11 != 0x5c)) goto LAB_001009d8;
                if (local_1a0 < local_228 + -1) {
                  uVar11 = local_1a0[1];
                  if (uVar11 == 0x6c) {
                    local_1cc = 0;
                    iVar22 = -1;
                    local_1a0 = local_1a0 + 2;
                    goto LAB_0010088b;
                  }
                  if (uVar11 < 0x6d) {
                    if (uVar11 == 0x4c) {
                      local_1cc = -1;
                      iVar22 = -1;
                      local_1a0 = local_1a0 + 2;
                      goto LAB_0010088b;
                    }
                    if (uVar11 == 0x55) {
                      local_1cc = 1;
                      iVar22 = 1;
                      local_1a0 = local_1a0 + 2;
                      goto LAB_0010088b;
                    }
                  }
                  else if (uVar11 == 0x75) {
                    local_1cc = 0;
                    iVar22 = 1;
                    local_1a0 = local_1a0 + 2;
                    goto LAB_0010088b;
                  }
                }
                local_1a0 = local_1a0 + 1;
                iVar16 = _pcre2_check_escape_16
                                   (&local_1a0,local_228,&local_198,&local_190,
                                    *(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                                    0,0);
                if (local_190 != 0) {
LAB_0010172b:
                  uVar15 = 0xffffffc7;
                  goto LAB_00100eef;
                }
                if (iVar16 == 0x19) {
                  bVar9 = false;
                  local_1cc = 0;
                  iVar22 = 0;
                }
                else {
                  if (iVar16 != 0x1a) {
                    if (iVar16 != 0) goto LAB_0010172b;
                    uVar26 = (ulong)local_198;
                    iVar16 = iVar22;
                    if (iVar22 != 0) goto LAB_00100d30;
LAB_00100db0:
                    iVar22 = iVar16;
                    uVar11 = (ushort)uVar26;
                    if (uVar12 != 0) goto LAB_00100a19;
                    goto LAB_00100c9f;
                  }
                  bVar9 = true;
                }
                goto LAB_0010088b;
              }
              if (uVar31 != 0) {
                local_228 = (ushort *)auStack_e8[uVar31 - 1];
                local_1a0 = (ushort *)auStack_e8[uVar31 - 2];
                uVar31 = uVar31 - 2;
                goto LAB_0010088b;
              }
              bVar6 = (bool)(bVar7 ^ 1);
LAB_001008b4:
              if (((param_7 != 0) && (bVar6)) && (*(code **)(param_7 + 0x38) != (code *)0x0)) {
                local_158 = local_238;
                local_144 = local_230;
                iVar16 = (**(code **)(param_7 + 0x38))(local_178,*(undefined8 *)(param_7 + 0x40));
                if (iVar16 != 0) {
                  param_4 = puVar17[1];
                  local_238 = local_238 + (local_160 - local_158);
                  local_240 = local_240 + (local_158 - local_160);
                  uVar26 = *puVar17;
                  if ((param_5 & 0x20000) == 0) {
                    uVar29 = param_4 - uVar26;
                    if (local_240 < uVar29) {
                      if ((local_270 & 0x1000) == 0) goto LAB_001004a0;
                      local_220 = uVar29 - local_240;
                      bVar7 = true;
                    }
                    else if (bVar7) {
                      local_220 = local_220 + uVar29;
                    }
                    else {
                      lVar18 = local_238 * 2;
                      local_238 = local_238 + uVar29;
                      memcpy((void *)((long)param_10 + lVar18),local_268 + uVar26 * 2,uVar29 * 2);
                      local_240 = local_240 + (uVar26 - param_4);
                      uVar26 = *puVar17;
                      param_4 = puVar17[1];
                    }
                  }
                  if (iVar16 < 0) {
                    local_270 = local_270 & 0xfffffeff;
                    uVar14 = 0;
                  }
                  else {
                    uVar14 = local_270 & 0x100;
                  }
                  goto LAB_00100694;
                }
              }
              uVar26 = *puVar17;
              param_4 = puVar17[1];
              uVar14 = local_270 & 0x100;
            }
            else {
LAB_00100808:
              local_160 = local_238;
              local_1a0 = local_250;
              if ((local_270 & 0x8000) == 0) goto LAB_00100878;
              if ((bVar7) || (param_9 <= local_240)) {
                if (bVar7) goto LAB_00100679;
                local_148 = uVar15;
                memcpy((void *)((long)param_10 + local_238 * 2),local_250,local_1e0);
                local_240 = local_240 - param_9;
                local_238 = local_238 + param_9;
                bVar6 = true;
                goto LAB_001008b4;
              }
              local_148 = uVar15;
              if ((local_270 & 0x1000) == 0) goto LAB_001004a0;
              local_220 = -local_240;
LAB_00100679:
              local_220 = local_220 + param_9;
              local_1a0 = local_250;
              bVar7 = true;
              uVar26 = *puVar17;
              param_4 = puVar17[1];
              uVar14 = local_270 & 0x100;
              local_238 = local_160;
              local_148 = uVar15;
            }
LAB_00100694:
            uVar29 = param_4;
            if ((uVar26 != param_4) || (uVar31 = 0x80000008, uVar30 = uVar23, uVar23 < uVar26)) {
              uVar31 = 0;
              uVar30 = uVar23;
            }
          }
          uVar23 = param_4;
          if (uVar14 == 0) goto LAB_00100440;
LAB_001006b5:
          uVar15 = pcre2_match_16(param_1,local_268,local_278,param_4,uVar27 | uVar31,local_280,
                                  param_7);
          uVar23 = param_4;
        } while( true );
      }
      if (param_4 <= uVar3) {
        memcpy(param_10,local_268,param_4 * 2);
        bVar7 = false;
        local_220 = 0;
        local_240 = uVar3 - param_4;
        local_238 = param_4;
        goto LAB_00100522;
      }
      if ((param_5 & 0x1000) != 0) {
        bVar7 = true;
        local_238 = 0;
        local_220 = param_4 - uVar3;
        goto LAB_00100522;
      }
      goto LAB_001004a0;
    }
    uVar15 = 0xffffffdf;
    *(undefined8 *)((long)local_280 + 0x48) = 0;
  }
  else {
    *(undefined8 *)((long)local_280 + 0x48) = 0;
  }
  goto LAB_001004a5;
LAB_00100440:
  if ((param_5 & 0x20000) == 0) {
    uVar26 = local_278 - uVar23;
    if ((local_240 < uVar26) && ((bool)(bVar7 ^ 1U))) {
      if ((local_270 & 0x1000) == 0) goto LAB_001004a0;
      local_220 = -local_240;
    }
    else if (!bVar7) {
      memcpy((void *)((long)param_10 + local_238 * 2),local_268 + uVar23 * 2,uVar26 * 2);
      if (local_278 != uVar23 + local_240) {
        local_238 = local_238 + uVar26;
        goto LAB_001017ec;
      }
      goto LAB_00100473;
    }
    local_220 = uVar26 + local_220;
LAB_001011d6:
    local_220 = local_220 + 1;
LAB_00100482:
    local_184[0] = 0;
    *param_11 = uVar3 + local_220;
  }
  else {
    if ((local_240 != 0) || (!(bool)(bVar7 ^ 1U))) {
      if (bVar7) goto LAB_001011d6;
LAB_001017ec:
      local_184[0] = 0;
      *(undefined2 *)((long)param_10 + local_238 * 2) = 0;
      *param_11 = local_238;
      uVar15 = local_230;
      goto LAB_001004a5;
    }
LAB_00100473:
    local_184[0] = 0;
    local_220 = 1;
    if ((local_270 & 0x1000) != 0) goto LAB_00100482;
  }
LAB_001004a0:
  uVar15 = 0xffffffd0;
LAB_001004a5:
  if (local_210 == (void *)0x0) {
    *(uint *)((long)local_280 + 100) = uVar15;
  }
  else {
    pcre2_match_data_free_16();
  }
LAB_001004b4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
}


