
/* WARNING: Type propagation algorithm not settling */

undefined8
pcre2_pattern_convert_32
          (uint *param_1,long param_2,uint param_3,long *param_4,long *param_5,undefined *param_6)

{
  uint *puVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  bool bVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined5 uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 uVar13;
  char *pcVar14;
  ushort **ppuVar15;
  uint *puVar16;
  uint *puVar17;
  ulong uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  byte *pbVar25;
  char *pcVar26;
  uint *puVar27;
  long lVar28;
  uint *puVar29;
  uint *puVar30;
  uint *puVar31;
  uint *puVar32;
  long lVar33;
  byte bVar34;
  long lVar35;
  uint uVar36;
  long in_FS_OFFSET;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  long local_2a0;
  int local_28c;
  int local_25c;
  int local_214;
  long local_200;
  uint *local_1f8;
  uint *local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  uint local_1d8 [102];
  long local_40;
  uint *puVar18;
  
  uVar36 = param_3 & 0x1c;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 == (uint *)0x0) || (param_5 == (long *)0x0)) {
    uVar13 = 0xffffffcd;
  }
  else if ((param_3 < 0x80) && ((~-uVar36 & uVar36) == 0 && (param_3 & 0x1c) != 0)) {
    local_2a0 = param_2;
    if (param_2 == -1) {
      local_2a0 = _pcre2_strlen_32(param_1);
    }
    if (param_6 == (undefined *)0x0) {
      param_6 = &_pcre2_default_convert_context_32;
    }
    if ((((param_3 & 1) == 0) || ((param_3 & 2) != 0)) ||
       (uVar13 = _pcre2_valid_utf_32(param_1,local_2a0,&local_200), (int)uVar13 == 0)) {
      if (param_4 == (long *)0x0) {
        local_25c = 2;
        lVar35 = 100;
        puVar29 = local_1d8;
        bVar37 = true;
        goto LAB_001000ea;
      }
      puVar29 = (uint *)*param_4;
      if (puVar29 == (uint *)0x0) {
        lVar35 = 100;
        puVar29 = local_1d8;
      }
      else {
        lVar35 = *param_5;
      }
      local_25c = 2;
LAB_001000d7:
      bVar37 = *param_4 == 0;
LAB_001000ea:
      if (uVar36 == 8) {
LAB_00100530:
        puVar1 = puVar29 + lVar35 + -1;
        pcVar26 = "(*NUL)";
        *param_5 = local_2a0;
        uVar10 = 0x28;
        puVar16 = puVar29;
        if (puVar29 < puVar1) {
          while( true ) {
            pcVar26 = pcVar26 + 1;
            *puVar16 = uVar10;
            puVar16 = puVar16 + 1;
            uVar10 = (uint)*pcVar26;
            if (*pcVar26 == '\0') break;
            if (puVar1 <= puVar16) goto LAB_00100706;
          }
          if (local_2a0 == 0) {
            lVar35 = 0;
          }
          else {
            uVar10 = 0;
            uVar11 = 0;
            lVar35 = 0;
            local_28c = 0;
            bVar3 = false;
            puVar21 = param_1;
            puVar27 = puVar29;
            lVar28 = local_2a0;
LAB_001005b8:
            uVar23 = *puVar21;
            puVar20 = puVar21 + 1;
            lVar33 = lVar28 + -1;
            lVar35 = lVar35 + ((long)puVar16 - (long)puVar27 >> 2);
            puVar27 = puVar16;
            if (bVar37) {
              puVar27 = puVar29;
            }
            puVar16 = puVar27;
            if (bVar3) {
              if (2 < uVar11) goto LAB_00100760;
switchD_001007e1_caseD_25:
              if (uVar23 < 0x80) {
LAB_00101676:
                pcVar26 = strchr("\\?*+|.^${}[]()",uVar23);
                if (pcVar26 == (char *)0x0) goto LAB_001005fc;
                goto LAB_00100837;
              }
              goto LAB_001005fc;
            }
            if (uVar11 < 3) {
              switch(uVar23) {
              case 0x24:
              case 0x2e:
                goto switchD_001007e1_caseD_24;
              default:
                goto switchD_001007e1_caseD_25;
              case 0x28:
                local_28c = local_28c + 1;
              case 0x2b:
              case 0x3f:
              case 0x7b:
              case 0x7c:
              case 0x7d:
                if ((param_3 & 8) != 0) {
switchD_001007e1_caseD_24:
                  uVar11 = 2;
                  goto LAB_001007f9;
                }
LAB_00100837:
                if (puVar1 <= puVar27) goto LAB_00100706;
                *puVar27 = 0x5c;
                puVar16 = puVar27 + 1;
LAB_001005fc:
                if (puVar1 < puVar16 + 1) goto LAB_00100706;
                uVar11 = 2;
                *puVar16 = *puVar21;
                puVar16 = puVar16 + 1;
                uVar10 = 0xff;
                break;
              case 0x29:
                if (((param_3 & 8) == 0) || (local_28c == 0)) goto LAB_00100837;
                local_28c = local_28c + -1;
                goto LAB_001007f9;
              case 0x2a:
                if (uVar10 != 0x2a) {
                  if ((param_3 & 8) != 0) goto LAB_001007f9;
                  if ((uVar11 < 2) || (uVar10 == 0x28)) goto LAB_00100837;
                  goto switchD_001007e1_caseD_24;
                }
                break;
              case 0x5b:
                if (puVar1 <= puVar27) goto LAB_00100706;
                *puVar27 = 0x5b;
                if (lVar33 == 0) goto LAB_0010172b;
                uVar23 = puVar21[1];
                puVar16 = puVar27 + 1;
                if (uVar23 == 0x5e) {
                  if (puVar1 <= puVar16) goto LAB_00100706;
                  puVar27[1] = 0x5e;
                  if (lVar28 + -2 == 0) goto LAB_0010172b;
                  uVar23 = puVar21[2];
                  puVar16 = puVar27 + 2;
                  puVar20 = puVar21 + 2;
                  lVar33 = lVar28 + -2;
                }
                lVar28 = lVar33;
                puVar21 = puVar20;
                uVar11 = 3;
                if (uVar23 != 0x5d) goto LAB_001005b8;
                if (puVar1 <= puVar16) goto LAB_00100706;
                *puVar16 = 0x5d;
                puVar20 = puVar21 + 1;
                lVar33 = lVar28 + -1;
                puVar16 = puVar16 + 1;
                break;
              case 0x5c:
                if (lVar33 == 0) {
                  uVar13 = 0x65;
                  goto LAB_00100119;
                }
                if ((param_3 & 8) == 0) {
                  uVar23 = puVar21[1];
                  if ((0x7e < uVar23) ||
                     (pcVar26 = strchr("(){}123456789",uVar23), pcVar26 == (char *)0x0))
                  goto LAB_00101663;
                  ppuVar15 = __ctype_b_loc();
                  puVar16 = puVar27;
                  if ((*(byte *)((long)*ppuVar15 + (ulong)uVar23 * 2 + 1) & 8) != 0) {
                    if (puVar1 <= puVar27) goto LAB_00100706;
                    *puVar27 = 0x5c;
                    puVar16 = puVar27 + 1;
                  }
                  if (puVar16 + 1 <= puVar1) {
                    uVar10 = puVar21[1];
                    lVar33 = lVar28 + -2;
                    puVar20 = puVar21 + 2;
                    *puVar16 = uVar10;
                    puVar16 = puVar16 + 1;
                    break;
                  }
                  goto LAB_00100706;
                }
LAB_00101663:
                bVar3 = true;
                puVar21 = puVar20;
                lVar28 = lVar33;
                goto LAB_001005b8;
              case 0x5e:
                if ((param_3 & 8) == 0) {
                  if ((uVar10 != 0x28) && (uVar11 != 0)) goto LAB_00101676;
                  uVar11 = 1;
                }
LAB_001007f9:
                if (puVar1 < puVar27 + 1) goto LAB_00100706;
                *puVar27 = uVar23;
                puVar16 = puVar27 + 1;
                uVar10 = uVar23;
              }
            }
            else {
LAB_00100760:
              if (uVar23 != 0x5d) {
                if (uVar11 == 4) {
                  if (uVar23 != 0x3a) goto LAB_00100794;
                  uVar11 = 5;
                }
                else if (uVar11 == 5) {
                  if (uVar23 < 0x80) {
                    ppuVar15 = __ctype_b_loc();
                    if ((*(byte *)((long)*ppuVar15 + (ulong)uVar23 * 2 + 1) & 2) != 0)
                    goto LAB_00100794;
                    if ((uVar23 != 0x3a) || (lVar33 == 0)) goto LAB_00100784;
                    uVar11 = 3;
                    if (puVar21[1] == 0x5d) {
                      if (puVar27 < puVar1) {
                        pcVar26 = ":]";
                        uVar11 = 0x3a;
                        while( true ) {
                          pcVar26 = pcVar26 + 1;
                          *puVar16 = uVar11;
                          puVar16 = puVar16 + 1;
                          uVar11 = (uint)*pcVar26;
                          if (*pcVar26 == '\0') break;
                          if (puVar1 <= puVar16) goto LAB_00100706;
                        }
                        lVar33 = lVar28 + -2;
                        puVar20 = puVar21 + 2;
                        uVar11 = 3;
                        goto LAB_00100620;
                      }
                      goto LAB_00100706;
                    }
                  }
                  else {
                    uVar11 = 3;
                  }
                }
                else {
                  if (uVar11 == 3) {
LAB_00100784:
                    uVar11 = 3;
                    if (uVar23 == 0x5b) {
                      uVar11 = 4;
                      goto LAB_001007a1;
                    }
                  }
LAB_00100794:
                  if (uVar23 == 0x5c) {
                    if (puVar1 <= puVar27) goto LAB_00100706;
                    *puVar27 = 0x5c;
                    puVar16 = puVar27 + 1;
                  }
                }
LAB_001007a1:
                if (puVar16 + 1 <= puVar1) {
                  *puVar16 = *puVar21;
                  puVar16 = puVar16 + 1;
                  goto LAB_00100620;
                }
                goto LAB_00100706;
              }
              if (puVar1 <= puVar27) goto LAB_00100706;
              *puVar27 = 0x5d;
              uVar11 = 2;
              puVar16 = puVar27 + 1;
            }
LAB_00100620:
            if (lVar33 != 0) {
              bVar3 = false;
              puVar21 = puVar20;
              lVar28 = lVar33;
              goto LAB_001005b8;
            }
            puVar29 = puVar27;
            if (2 < uVar11) {
LAB_0010172b:
              uVar13 = 0x6a;
              goto LAB_00100119;
            }
          }
          *param_5 = ((long)puVar16 - (long)puVar29 >> 2) + lVar35;
          *puVar16 = 0;
          goto LAB_00100f3d;
        }
LAB_00100706:
        uVar13 = 0xffffffd0;
        goto LAB_00100119;
      }
      if (uVar36 == 0x10) {
        uVar10 = *(uint *)(param_6 + 0x18);
        uVar11 = *(uint *)(param_6 + 0x1c);
        puVar16 = param_1 + local_2a0;
        if (((param_3 & 1) != 0) && (0x7f < (uVar10 | uVar11))) {
          *param_5 = 0;
          uVar13 = 0xffffffc0;
          goto LAB_00100119;
        }
        pcVar26 = strchr("\\?*+|.^${}[]()",uVar10);
        puVar1 = puVar29 + lVar35;
        local_1e0 = CONCAT44(local_1e0._4_4_,0x29733f28);
        lVar35 = 4;
        pbVar25 = (byte *)&local_1e0;
        puVar21 = puVar29;
        do {
          local_1f8 = puVar21;
          if (puVar21 < puVar1) {
            bVar2 = *pbVar25;
            local_1f8 = puVar21 + 1;
            pbVar25 = pbVar25 + 1;
            *puVar21 = (uint)bVar2;
          }
          lVar35 = lVar35 + -1;
          puVar21 = local_1f8;
        } while (lVar35 != 0);
        local_1e8 = 4;
        local_1f0 = puVar1;
        if (param_1 < puVar16) {
          if ((*param_1 != 0x2a) ||
             (((param_3 & 0x20) == 0 &&
              ((((param_3 & 0x40) != 0 || (puVar16 <= param_1 + 1)) || (param_1[1] != 0x2a)))))) {
            if (local_1f8 < puVar1) goto LAB_0010028a;
            goto LAB_001002a8;
          }
LAB_001002c7:
          puVar27 = param_1 + 1;
          bVar3 = false;
          bVar39 = false;
          puVar21 = param_1;
          do {
            lVar35 = local_1e8;
            puVar22 = local_1f8;
            uVar23 = *puVar21;
            puVar20 = puVar21 + 1;
            uVar8 = local_1e0._3_5_;
            if (uVar23 == 0x2a) {
              if ((bVar3) && (local_1e8 = local_1e8 + 1, local_1f8 < puVar1)) {
                *local_1f8 = 0x29;
                local_1f8 = local_1f8 + 1;
              }
              lVar35 = local_1e8;
              puVar32 = puVar20;
              if ((param_3 & 0x40) == 0) {
                if (puVar16 <= puVar20) goto joined_r0x00100940;
                if (puVar21[1] != 0x2a) goto joined_r0x00100436;
                bVar39 = true;
                if (puVar20 != puVar27) {
                  bVar39 = puVar21[-1] == uVar10;
                }
                do {
                  puVar21 = puVar32;
                  puVar32 = puVar21 + 1;
                  if (puVar16 <= puVar32) goto LAB_00100972;
                } while (*puVar32 == 0x2a);
                if ((((uVar11 != 0) && (bVar39)) && (uVar11 == *puVar32)) &&
                   ((puVar21 + 2 < puVar16 && (uVar10 == puVar21[2])))) {
                  puVar32 = puVar21 + 2;
                }
                if (puVar20 == puVar27) {
                  if (uVar10 != *puVar32) goto LAB_001015fe;
                  lVar35 = 6;
                  local_1e0 = CONCAT26(local_1e0._6_2_,0x7c415c3a3f28);
                  pbVar25 = (byte *)&local_1e0;
                  do {
                    puVar21 = local_1f8;
                    if (local_1f8 < puVar1) {
                      bVar2 = *pbVar25;
                      puVar21 = local_1f8 + 1;
                      pbVar25 = pbVar25 + 1;
                      *local_1f8 = (uint)bVar2;
                    }
                    lVar35 = lVar35 + -1;
                    local_1f8 = puVar21;
                  } while (lVar35 != 0);
                  lVar35 = local_1e8 + 6;
                  puVar20 = puVar21;
                  if (pcVar26 == (char *)0x0) {
LAB_00101de0:
                    local_1f8 = puVar20;
                    if (puVar1 <= puVar20) goto LAB_00101e21;
                    local_1f8 = puVar20 + 1;
                    local_1e8 = lVar35 + 2;
                    *puVar20 = uVar10;
                    if (local_1f8 < puVar1) {
                      local_1f8 = puVar20 + 2;
                      puVar20[1] = 0x29;
                    }
                  }
                  else {
                    lVar35 = local_1e8 + 7;
                    if (puVar21 < puVar1) {
                      puVar20 = puVar21 + 1;
                      *puVar21 = 0x5c;
                      goto LAB_00101de0;
                    }
LAB_00101e21:
                    local_1e8 = lVar35 + 2;
                  }
                  puVar32 = puVar32 + 1;
                }
                else {
                  lVar35 = 8;
                  pbVar25 = (byte *)&local_1e0;
                  do {
                    puVar21 = local_1f8;
                    if (local_1f8 < puVar1) {
                      bVar2 = *pbVar25;
                      puVar21 = local_1f8 + 1;
                      pbVar25 = pbVar25 + 1;
                      *local_1f8 = (uint)bVar2;
                    }
                    lVar35 = lVar35 + -1;
                    local_1f8 = puVar21;
                  } while (lVar35 != 0);
                  puVar20 = puVar21;
                  if (puVar21 < puVar1) {
                    puVar20 = puVar21 + 1;
                    *puVar21 = 0x29;
                  }
                  if ((bVar39) && (uVar10 == *puVar32)) {
                    lVar35 = 6;
                    local_1e0._6_2_ = (undefined2)((ulong)_LC8 >> 0x30);
                    local_1e0 = CONCAT26(local_1e0._6_2_,0x3f2a2e3a3f00);
                    uVar13 = local_1e0;
                    pbVar25 = (byte *)&local_1e0;
                    do {
                      puVar21 = puVar20;
                      if (puVar20 < puVar1) {
                        bVar2 = *pbVar25;
                        puVar21 = puVar20 + 1;
                        pbVar25 = pbVar25 + 1;
                        *puVar20 = (uint)bVar2;
                      }
                      lVar35 = lVar35 + -1;
                      puVar20 = puVar21;
                    } while (lVar35 != 0);
                    lVar35 = local_1e8 + 0xf;
                    if (pcVar26 == (char *)0x0) {
LAB_00101ce0:
                      lVar35 = lVar35 + 1;
                      puVar21 = puVar20;
                      if (puVar20 < puVar1) {
                        puVar21 = puVar20 + 1;
                        *puVar20 = uVar10;
                      }
                    }
                    else {
                      if (puVar21 < puVar1) {
                        puVar20 = puVar21 + 1;
                        *puVar21 = 0x5c;
                        lVar35 = local_1e8 + 0x10;
                        goto LAB_00101ce0;
                      }
                      lVar35 = local_1e8 + 0x11;
                    }
                    local_1e0 = CONCAT71(local_1e0._1_7_,0x29);
                    uVar7 = local_1e0;
                    lVar28 = 3;
                    local_1e0._3_5_ = SUB85(uVar13,3);
                    local_1e0._0_2_ = (undefined2)uVar7;
                    local_1e0._0_3_ = CONCAT12(0x3f,(undefined2)local_1e0);
                    pbVar25 = (byte *)&local_1e0;
                    do {
                      puVar22 = puVar21;
                      if (puVar21 < puVar1) {
                        bVar2 = *pbVar25;
                        puVar22 = puVar21 + 1;
                        pbVar25 = pbVar25 + 1;
                        *puVar21 = (uint)bVar2;
                      }
                      lVar28 = lVar28 + -1;
                      puVar21 = puVar22;
                    } while (lVar28 != 0);
                    local_1e8 = lVar35 + 3;
                    bVar3 = false;
                    puVar20 = puVar32 + 1;
                    goto LAB_001003c2;
                  }
                  local_1e0._1_7_ = (undefined7)((ulong)_LC8 >> 8);
                  local_1e0 = CONCAT71(local_1e0._1_7_,0x2e);
                  uVar13 = local_1e0;
                  lVar35 = 3;
                  local_1e0._3_5_ = (undefined5)((ulong)_LC8 >> 0x18);
                  local_1e0._0_2_ = (undefined2)uVar13;
                  local_1e0._0_3_ = CONCAT12(0x3f,(undefined2)local_1e0);
                  pbVar25 = (byte *)&local_1e0;
                  do {
                    local_1f8 = puVar20;
                    if (puVar20 < puVar1) {
                      bVar2 = *pbVar25;
                      local_1f8 = puVar20 + 1;
                      pbVar25 = pbVar25 + 1;
                      *puVar20 = (uint)bVar2;
                    }
                    lVar35 = lVar35 + -1;
                    puVar20 = local_1f8;
                  } while (lVar35 != 0);
                  local_1e8 = local_1e8 + 0xc;
                }
LAB_001015fe:
                bVar39 = true;
                bVar3 = false;
                puVar20 = puVar32;
                puVar22 = local_1f8;
              }
              else {
                if (puVar20 < puVar16) {
                  uVar23 = puVar21[1];
                  while (uVar23 == 0x2a) {
                    puVar32 = (uint *)((long)puVar32 + 4);
                    if (puVar16 <= puVar32) goto joined_r0x00100940;
                    uVar23 = *puVar32;
                  }
joined_r0x00100436:
                  if ((param_3 & 0x20) == 0) goto LAB_00100a2b;
                  if (puVar20 == puVar27) {
                    bVar3 = false;
                    puVar20 = puVar32;
                    puVar22 = local_1f8;
                    goto LAB_001003c2;
                  }
LAB_0010044a:
                  if (!bVar39) {
                    local_1e0 = _LC8;
                    lVar35 = 8;
                    puVar21 = local_1f8;
                    pbVar25 = (byte *)&local_1e0;
                    do {
                      local_1f8 = puVar21;
                      if (puVar21 < puVar1) {
                        bVar2 = *pbVar25;
                        local_1f8 = puVar21 + 1;
                        pbVar25 = pbVar25 + 1;
                        *puVar21 = (uint)bVar2;
                      }
                      lVar35 = lVar35 + -1;
                      puVar21 = local_1f8;
                    } while (lVar35 != 0);
                    lVar35 = local_1e8 + 9;
                    if (local_1f8 < puVar1) {
                      *local_1f8 = 0x29;
                      local_1f8 = local_1f8 + 1;
                      bVar3 = false;
                      goto LAB_001004b7;
                    }
                    if ((param_3 & 0x20) == 0) {
                      bVar3 = false;
                      local_1e8 = lVar35;
                      goto LAB_00100a51;
                    }
                    bVar3 = false;
                    lVar35 = local_1e8 + 10;
                    goto LAB_00100a6e;
                  }
                  lVar35 = 3;
                  local_1e0 = CONCAT53(local_1e0._3_5_,0x3e0000);
                  puVar21 = local_1f8;
                  pbVar25 = (byte *)&local_1e0;
                  do {
                    local_1f8 = puVar21;
                    if (puVar21 < puVar1) {
                      bVar2 = *pbVar25;
                      local_1f8 = puVar21 + 1;
                      pbVar25 = pbVar25 + 1;
                      *puVar21 = (uint)bVar2;
                    }
                    lVar35 = lVar35 + -1;
                    puVar21 = local_1f8;
                  } while (lVar35 != 0);
                  lVar35 = local_1e8 + 3;
                  bVar3 = bVar39;
LAB_001004b7:
                  local_1e8 = lVar35;
                  if ((param_3 & 0x20) == 0) goto LAB_00100a51;
                  lVar35 = lVar35 + 1;
                  if (puVar1 <= local_1f8) goto LAB_00100a6e;
                  *local_1f8 = 0x2e;
                  local_1f8 = local_1f8 + 1;
LAB_001004da:
                  local_1e0 = CONCAT71(local_1e0._1_7_,0x2a);
                  uVar23 = (-(uint)(puVar32 < puVar16) & 0x14) + 0x2b;
                  puVar20 = puVar32;
                }
                else {
joined_r0x00100940:
                  if ((param_3 & 0x20) != 0) goto LAB_00100972;
LAB_00100a2b:
                  if (puVar20 != puVar27) goto LAB_0010044a;
                  bVar3 = false;
LAB_00100a51:
                  if (local_1f8 < puVar1) {
                    puVar21 = local_1f8 + 1;
                    *local_1f8 = 0x5b;
                    if (puVar21 < puVar1) {
                      local_1f8[1] = 0x5e;
                      puVar21 = local_1f8 + 2;
                      if (pcVar26 == (char *)0x0) goto LAB_0010111e;
                      local_1e8 = local_1e8 + 3;
                      if (puVar1 <= puVar21) goto LAB_00100a6a;
                      local_1f8[2] = 0x5c;
                      puVar21 = local_1f8 + 3;
                    }
                    else {
                      if (pcVar26 != (char *)0x0) {
                        local_1e8 = local_1e8 + 3;
                        goto LAB_00100a6a;
                      }
LAB_0010111e:
                      local_1e8 = local_1e8 + 2;
                    }
                    if (puVar21 < puVar1) {
                      local_1f8 = puVar21 + 1;
                      *puVar21 = uVar10;
                      lVar35 = local_1e8 + 2;
                      if (puVar1 <= local_1f8) goto LAB_00100a6e;
                      puVar21[1] = 0x5d;
                      local_1f8 = puVar21 + 2;
                      goto LAB_001004da;
                    }
                  }
                  else {
                    puVar21 = local_1f8;
                    if (pcVar26 == (char *)0x0) goto LAB_0010111e;
                    local_1e8 = local_1e8 + 3;
                  }
LAB_00100a6a:
                  lVar35 = local_1e8 + 2;
                  local_1f8 = puVar21;
LAB_00100a6e:
                  local_1e0 = CONCAT71(local_1e0._1_7_,0x2a);
                  if (puVar16 <= puVar32) {
                    local_1e8 = lVar35 + 2;
                    break;
                  }
                  uVar23 = 0x3f;
                  puVar20 = puVar32;
                }
                local_1e0._0_2_ = CONCAT11((char)uVar23,(byte)local_1e0);
                local_1e8 = lVar35 + 2;
                puVar22 = local_1f8;
                if (local_1f8 < puVar1) {
                  *local_1f8 = 0x2a;
                  puVar22 = local_1f8 + 1;
                  if (local_1f8 + 1 < puVar1) {
                    local_1f8[1] = uVar23;
                    puVar22 = local_1f8 + 2;
                  }
                }
              }
            }
            else {
              if (uVar23 != 0x3f) {
                if (uVar23 != 0x5b) {
                  if ((uVar11 != 0) && (uVar11 == uVar23)) {
                    if (puVar16 <= puVar20) {
LAB_00101b6b:
                      uVar13 = 0xffffffc0;
                      puVar32 = puVar20;
                      goto LAB_001009c0;
                    }
                    uVar23 = puVar21[1];
                    puVar20 = puVar21 + 2;
                  }
                  puVar21 = puVar22;
                  if ((uVar23 < 0x80) &&
                     (pcVar14 = strchr("\\?*+|.^${}[]()",uVar23), pcVar14 != (char *)0x0)) {
                    if (puVar1 <= puVar22) {
                      local_1e8 = lVar35 + 2;
                      puVar22 = local_1f8;
                      goto LAB_001003c2;
                    }
                    puVar21 = puVar22 + 1;
                    *puVar22 = 0x5c;
                    lVar35 = lVar35 + 1;
                    local_1f8 = puVar21;
                  }
                  local_1e8 = lVar35 + 1;
                  puVar22 = local_1f8;
                  if (puVar21 < puVar1) {
                    *puVar21 = uVar23;
                    puVar22 = puVar21 + 1;
                  }
                  goto LAB_001003c2;
                }
                if (puVar20 < puVar16) {
                  uVar23 = puVar21[1];
                  if ((uVar23 == 0x21) || (uVar23 == 0x5e)) {
                    puVar20 = puVar21 + 2;
                    if (puVar16 <= puVar20) goto LAB_00100c61;
                    lVar28 = 3;
                    local_1e0 = CONCAT62(local_1e0._2_6_,0x5e5b);
                    pbVar25 = (byte *)&local_1e0;
                    lVar35 = lVar28;
                    if ((param_3 & 0x20) == 0) {
                      lVar35 = 2;
                      if (pcVar26 != (char *)0x0) {
                        local_1e0 = CONCAT53(uVar8,0x5c5e5b);
                        lVar28 = 4;
                        lVar35 = 3;
                      }
                      *(char *)((long)local_1d8 + lVar35 + -8) = (char)uVar10;
                      lVar35 = lVar28;
                    }
                    do {
                      puVar22 = local_1f8;
                      if (local_1f8 < puVar1) {
                        bVar2 = *pbVar25;
                        puVar22 = local_1f8 + 1;
                        pbVar25 = pbVar25 + 1;
                        *local_1f8 = (uint)bVar2;
                      }
                      lVar28 = lVar28 + -1;
                      local_1f8 = puVar22;
                    } while (lVar28 != 0);
                    local_1e8 = local_1e8 + lVar35;
                    uVar23 = puVar21[2];
                    bVar6 = true;
                  }
                  else {
                    bVar6 = false;
                    local_1e8 = local_1e8 + 1;
                    if (local_1f8 < puVar1) {
                      *local_1f8 = 0x5b;
                      uVar23 = puVar21[1];
                      local_1f8 = local_1f8 + 1;
                    }
                  }
                  if (uVar23 == 0x5d) {
                    local_1e0 = CONCAT62(local_1e0._2_6_,0x5d5c);
                    local_1e8 = local_1e8 + 2;
                    puVar21 = local_1f8;
                    if (local_1f8 < puVar1) {
                      puVar21 = local_1f8 + 1;
                      *local_1f8 = 0x5c;
                      if (puVar21 < puVar1) {
                        local_1f8[1] = 0x5d;
                        puVar21 = local_1f8 + 2;
                      }
                    }
                    puVar20 = puVar20 + 1;
                    local_1f8 = puVar21;
                    if (puVar16 <= puVar20) goto LAB_00100c61;
                    bVar2 = 1;
                    uVar23 = 0x5d;
                  }
                  else {
                    bVar2 = 0;
                    uVar23 = 0;
                  }
                  lVar28 = local_1e8;
                  puVar21 = local_1f8;
                  bVar5 = false;
                  bVar38 = false;
                  bVar34 = 0;
                  puVar22 = local_1f8;
                  puVar31 = puVar20;
                  lVar35 = local_1e8;
                  while( true ) {
                    uVar12 = *puVar31;
                    puVar32 = puVar31 + 1;
                    if (uVar12 == 0x5d) break;
                    if (puVar16 <= puVar32) {
                      uVar13 = 0x6a;
                      goto LAB_001009c0;
                    }
                    if (uVar12 == 0x5b) {
                      uVar24 = puVar31[1];
                      if (uVar24 == 0x3a) {
                        puVar20 = puVar31 + 2;
                        do {
                          if (puVar16 <= puVar20) goto LAB_00100ca0;
                          uVar24 = *puVar20;
                          puVar20 = puVar20 + 1;
                        } while (uVar24 - 0x61 < 0x1a);
                        if (((uVar24 == 0x3a) && (puVar20 < puVar16)) && (*puVar20 == 0x5d)) {
                          pcVar14 = 
                          "alnum:alpha:ascii:blank:cntrl:digit:graph:lower:print:punct:space:upper:word:xdigit:"
                          ;
                          local_214 = 1;
                          cVar9 = 'a';
                          do {
                            puVar20 = puVar31 + 2;
                            uVar24 = puVar31[2];
                            pcVar4 = pcVar14;
                            if (puVar31[2] == (int)cVar9) {
LAB_001011fc:
                              if (uVar24 != 0x3a) goto LAB_001011e0;
                              puVar32 = puVar20 + 2;
                              puVar17 = puVar31;
                              do {
                                puVar18 = puVar17 + 1;
                                puVar30 = puVar22;
                                if (puVar22 < puVar1) {
                                  puVar30 = puVar22 + 1;
                                  bVar5 = true;
                                  *puVar22 = *puVar17;
                                }
                                puVar17 = puVar18;
                                puVar22 = puVar30;
                              } while (puVar18 < puVar32);
                              uVar19 = (ulong)((long)puVar20 + (7 - (long)puVar31)) >> 2;
                              if (puVar32 < (uint *)((long)puVar31 + 1U)) {
                                uVar19 = 0;
                              }
                              lVar35 = lVar35 + 1 + uVar19;
                              if ((0xff < uVar10) || (bVar6)) {
                                uVar23 = 0;
                                bVar2 = 0;
                                goto LAB_00100c53;
                              }
                              switch(local_214) {
                              default:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 0x1000;
                                break;
                              case 1:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 8;
                                break;
                              case 2:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 0x400;
                                break;
                              case 3:
                                goto switchD_0010128d_caseD_3;
                              case 4:
                                uVar12 = (uint)(uVar10 == 9) |
                                         (uint)CONCAT71(0x1021,uVar10 == 0x20) & 0xff;
                                break;
                              case 5:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 2;
                                break;
                              case 6:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 0x800;
                                break;
                              case 7:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 0x8000;
                                break;
                              case 8:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 0x200;
                                break;
                              case 9:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 0x4000;
                                break;
                              case 10:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 4;
                                break;
                              case 0xb:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 0x2000;
                                break;
                              case 0xc:
                                ppuVar15 = __ctype_b_loc();
                                uVar12 = (*ppuVar15)[uVar10] & 0x100;
                                break;
                              case 0xd:
                                ppuVar15 = __ctype_b_loc();
                                if ((((*ppuVar15)[uVar10] & 8) == 0) && (uVar10 != 0x5f)) {
                                  uVar23 = 0;
                                  bVar2 = 0;
                                  goto LAB_00100c53;
                                }
                                goto switchD_0010128d_caseD_3;
                              }
                              uVar23 = 0;
                              bVar2 = 0;
                              if (uVar12 != 0) {
                                bVar34 = 1;
                              }
                              goto LAB_00100c53;
                            }
joined_r0x00101b82:
                            while (cVar9 != ':') {
                              cVar9 = pcVar4[1];
                              pcVar4 = pcVar4 + 1;
                            }
                            local_214 = local_214 + 1;
                            pcVar14 = pcVar4 + 1;
                            cVar9 = pcVar4[1];
                          } while (cVar9 != '\0');
                        }
                      }
                      else {
                        if (uVar11 == 0x5b) goto LAB_00100ce0;
                        uVar23 = 0x5b;
                        bVar2 = 1;
                      }
LAB_00100ca0:
                      lVar35 = lVar35 + 1;
                      if (puVar22 < puVar1) {
                        *puVar22 = 0x5c;
                        bVar5 = true;
                        puVar22 = puVar22 + 1;
                      }
                    }
                    else {
                      bVar38 = uVar12 == 0x2d;
                      if ((bool)(bVar2 & bVar38)) {
                        uVar12 = puVar31[1];
                        if (uVar12 == 0x5d) {
                          uVar24 = 0x5d;
                          if (uVar11 != 0x2d) {
                            uVar12 = 0x2d;
                            bVar2 = 1;
                            uVar23 = 0x2d;
                            goto LAB_00100ca0;
                          }
LAB_00100ce0:
                          puVar20 = puVar31 + 2;
                          if (puVar16 <= puVar20) goto LAB_00100c61;
                          bVar2 = 1;
                          puVar31 = puVar32;
                          uVar23 = uVar24;
                          uVar12 = uVar24;
                        }
                        else {
                          lVar35 = lVar35 + 1;
                          if (puVar22 < puVar1) {
                            *puVar22 = 0x2d;
                            uVar12 = puVar31[1];
                            puVar22 = puVar22 + 1;
                            bVar5 = (bool)(bVar2 & bVar38);
                          }
                          puVar17 = puVar31 + 2;
                          if (puVar16 <= puVar17) {
                            uVar13 = 0x6a;
                            puVar32 = puVar17;
                            goto LAB_001009c0;
                          }
                          if ((uVar11 == 0) || (uVar11 != uVar12)) {
                            puVar20 = puVar17;
                            if ((uVar12 == 0x5b) && (puVar31[2] == 0x3a)) {
                              uVar13 = 0xffffffc0;
                              puVar32 = puVar17;
                              goto LAB_001009c0;
                            }
                          }
                          else {
                            uVar12 = puVar31[2];
                            puVar20 = puVar31 + 3;
                            puVar32 = puVar17;
                          }
                          if (uVar12 < uVar23) goto LAB_00101b6b;
                          bVar38 = uVar23 < uVar10;
                          bVar2 = 0;
                          uVar23 = 0;
                          puVar31 = puVar32;
                          if ((bVar38) && (uVar10 < uVar12)) {
                            bVar34 = 1;
                          }
                        }
                        puVar32 = puVar20;
                        if ((uVar12 - 0x5b & 0xfffffffd) == 0) goto LAB_00100ca0;
                        bVar38 = uVar12 == 0x2d;
                      }
                      else {
                        if ((uVar11 != 0) && (uVar11 == uVar12)) {
                          uVar24 = puVar31[1];
                          goto LAB_00100ce0;
                        }
                        bVar2 = 1;
                        uVar23 = uVar12;
                      }
                      if ((uVar12 == 0x5c) || (bVar38)) goto LAB_00100ca0;
                    }
                    puVar20 = puVar31;
                    if (uVar10 == uVar12) {
                      bVar34 = 1;
                    }
                    do {
                      puVar17 = puVar20 + 1;
                      puVar30 = puVar22;
                      if (puVar22 < puVar1) {
                        puVar30 = puVar22 + 1;
                        bVar5 = true;
                        *puVar22 = *puVar20;
                      }
                      puVar20 = puVar17;
                      puVar22 = puVar30;
                    } while (puVar17 < puVar32);
                    uVar19 = (ulong)((long)puVar32 + (-1 - (long)puVar31)) >> 2;
                    if (puVar32 < (uint *)((long)puVar31 + 1U)) {
                      uVar19 = 0;
                    }
                    lVar35 = lVar35 + 1 + uVar19;
LAB_00100c53:
                    bVar38 = true;
                    puVar22 = puVar30;
                    puVar20 = puVar32;
                    puVar31 = puVar32;
                    if (puVar16 <= puVar32) goto LAB_00100c61;
                  }
                  if (bVar5) {
                    puVar21 = puVar22;
                    local_1f8 = puVar22;
                  }
                  if (!bVar38) {
                    lVar35 = lVar28;
                  }
                  local_1e8 = lVar35 + 1;
                  if (puVar21 < puVar1) {
                    local_1f8 = puVar21 + 1;
                    *puVar21 = 0x5d;
                  }
                  puVar20 = puVar32;
                  puVar22 = local_1f8;
                  if (!(bool)(((bVar6 | (param_3 & 0x20) != 0) ^ 1U) & bVar34)) goto LAB_001003c2;
                  local_1e0 = CONCAT44(local_1e0._4_4_,0x213c3f28);
                  lVar28 = 4;
                  pbVar25 = (byte *)&local_1e0;
                  do {
                    puVar21 = local_1f8;
                    if (local_1f8 < puVar1) {
                      bVar2 = *pbVar25;
                      puVar21 = local_1f8 + 1;
                      pbVar25 = pbVar25 + 1;
                      *local_1f8 = (uint)bVar2;
                    }
                    lVar28 = lVar28 + -1;
                    local_1f8 = puVar21;
                  } while (lVar28 != 0);
                  local_1e8 = lVar35 + 5;
                  if (pcVar26 == (char *)0x0) {
LAB_00101562:
                    if (local_1f8 < puVar1) {
                      local_1e8 = local_1e8 + 2;
                      *local_1f8 = uVar10;
                      puVar22 = local_1f8 + 1;
                      if (local_1f8 + 1 < puVar1) {
                        local_1f8[1] = 0x29;
                        puVar22 = local_1f8 + 2;
                      }
                      goto LAB_001003c2;
                    }
                  }
                  else {
                    local_1e8 = lVar35 + 6;
                    if (puVar21 < puVar1) {
                      local_1f8 = puVar21 + 1;
                      *puVar21 = 0x5c;
                      goto LAB_00101562;
                    }
                  }
                  local_1e8 = local_1e8 + 2;
                  puVar22 = local_1f8;
                  goto LAB_001003c2;
                }
LAB_00100c61:
                uVar13 = 0x6a;
                puVar32 = puVar20;
                goto LAB_001009c0;
              }
              if ((param_3 & 0x20) != 0) {
                local_1e8 = local_1e8 + 1;
                if (local_1f8 < puVar1) {
                  *local_1f8 = 0x2e;
                  puVar22 = local_1f8 + 1;
                }
                goto LAB_001003c2;
              }
              local_1e0 = CONCAT62(local_1e0._2_6_,0x5e5b);
              if (local_1f8 < puVar1) {
                puVar21 = local_1f8 + 1;
                *local_1f8 = 0x5b;
                if (puVar21 < puVar1) {
                  puVar21 = local_1f8 + 2;
                  local_1f8[1] = 0x5e;
                  if (pcVar26 == (char *)0x0) goto LAB_0010142c;
                  local_1e8 = local_1e8 + 3;
                  if (puVar1 <= puVar21) goto LAB_00100fe3;
                  local_1f8[2] = 0x5c;
                  local_1f8 = local_1f8 + 3;
                }
                else {
                  local_1f8 = puVar21;
                  if (pcVar26 != (char *)0x0) goto LAB_00100fdf;
LAB_0010142c:
                  local_1f8 = puVar21;
                  local_1e8 = local_1e8 + 2;
                }
                puVar21 = local_1f8;
                if (local_1f8 < puVar1) {
                  local_1e8 = local_1e8 + 2;
                  *local_1f8 = uVar10;
                  puVar22 = local_1f8 + 1;
                  if (local_1f8 + 1 < puVar1) {
                    local_1f8[1] = 0x5d;
                    puVar22 = local_1f8 + 2;
                  }
                  goto LAB_001003c2;
                }
              }
              else {
                puVar21 = local_1f8;
                if (pcVar26 == (char *)0x0) goto LAB_0010142c;
LAB_00100fdf:
                local_1e8 = local_1e8 + 3;
                puVar21 = local_1f8;
              }
LAB_00100fe3:
              local_1f8 = puVar21;
              local_1e8 = local_1e8 + 2;
              puVar22 = local_1f8;
            }
LAB_001003c2:
            local_1f8 = puVar22;
            puVar21 = puVar20;
            puVar32 = puVar20;
          } while (puVar20 < puVar16);
        }
        else {
          if (local_1f8 < puVar1) {
LAB_0010028a:
            puVar21 = local_1f8 + 1;
            *local_1f8 = 0x5c;
            if (puVar21 < puVar1) {
              local_1f8[1] = 0x41;
              puVar21 = local_1f8 + 2;
            }
LAB_001002a8:
            local_1e0 = CONCAT62(local_1e0._2_6_,0x415c);
            local_1e8 = 6;
            local_1f8 = puVar21;
            if (param_1 < puVar16) goto LAB_001002c7;
          }
          local_1e0 = CONCAT62(local_1e0._2_6_,0x415c);
          local_1e8 = 6;
          bVar3 = false;
          puVar32 = param_1;
        }
        local_1e0 = CONCAT62(local_1e0._2_6_,0x7a5c);
        puVar16 = local_1f8;
        if (local_1f8 < puVar1) {
          puVar16 = local_1f8 + 1;
          *local_1f8 = 0x5c;
          if (puVar16 < puVar1) {
            local_1f8[1] = 0x7a;
            puVar16 = local_1f8 + 2;
          }
        }
        lVar35 = local_1e8 + 2;
        local_1f8 = puVar16;
        if (bVar3) {
          lVar35 = local_1e8 + 3;
          if (puVar16 < puVar1) {
            local_1f8 = puVar16 + 1;
            *puVar16 = 0x29;
            goto LAB_00100972;
          }
          local_1e8 = local_1e8 + 4;
        }
        else {
LAB_00100972:
          local_1e8 = lVar35 + 1;
          if (local_1f8 < puVar1) {
            *local_1f8 = 0;
            local_1f8 = local_1f8 + 1;
          }
        }
        if ((!bVar37) && ((long)local_1f8 - (long)puVar29 >> 2 != local_1e8)) {
          uVar13 = 0xffffffd0;
LAB_001009c0:
          *param_5 = (long)puVar32 - (long)param_1 >> 2;
          goto LAB_00100119;
        }
        *param_5 = lVar35;
LAB_00100f3d:
        if ((param_4 == (long *)0x0) || (*param_4 != 0)) {
          uVar13 = 0;
          goto LAB_00100119;
        }
        lVar35 = _pcre2_memctl_malloc_32(*param_5 * 0x20 + 0x38,param_6);
        if (lVar35 == 0) goto LAB_00100706;
        local_25c = local_25c + -1;
        puVar29 = (uint *)(lVar35 + 0x18);
        *param_4 = (long)puVar29;
        if (local_25c == 0) goto LAB_00100114;
        lVar35 = *param_5 + 1;
        goto LAB_001000d7;
      }
      if (uVar36 == 4) goto LAB_00100530;
      *param_5 = 0;
LAB_00100114:
      uVar13 = 0xffffffd4;
    }
    else {
      *param_5 = local_200;
    }
  }
  else {
    *param_5 = 0;
    uVar13 = 0xffffffde;
  }
LAB_00100119:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar13;
LAB_001011e0:
  cVar9 = pcVar14[1];
  puVar17 = puVar20 + 1;
  pcVar14 = pcVar14 + 1;
  puVar20 = puVar20 + 1;
  uVar24 = *puVar17;
  pcVar4 = pcVar14;
  if (*puVar17 != (int)cVar9) goto joined_r0x00101b82;
  goto LAB_001011fc;
switchD_0010128d_caseD_3:
  uVar23 = 0;
  bVar2 = 0;
  bVar34 = 1;
  goto LAB_00100c53;
}



void pcre2_converted_pattern_free_32(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00101f78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + -0x10))(param_1 + -0x18,*(undefined8 *)(param_1 + -8));
    return;
  }
  return;
}


