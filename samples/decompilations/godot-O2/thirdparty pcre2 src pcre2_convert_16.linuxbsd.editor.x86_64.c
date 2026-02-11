
/* WARNING: Type propagation algorithm not settling */

undefined8
pcre2_pattern_convert_16
          (ushort *param_1,long param_2,uint param_3,long *param_4,long *param_5,undefined *param_6)

{
  ushort *puVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  char *pcVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined5 uVar9;
  char cVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  char *pcVar16;
  ushort *puVar17;
  ushort **ppuVar18;
  ushort *puVar19;
  ushort *puVar20;
  ulong uVar22;
  ushort *puVar23;
  ushort *puVar24;
  ushort uVar25;
  uint uVar26;
  byte *pbVar27;
  char *pcVar28;
  ushort *puVar29;
  byte bVar30;
  ushort uVar31;
  uint uVar32;
  long lVar33;
  ushort *puVar34;
  ushort *puVar35;
  ushort *puVar36;
  ushort uVar37;
  uint uVar38;
  uint uVar39;
  long lVar40;
  ushort uVar41;
  long lVar42;
  byte bVar43;
  ushort *puVar44;
  long lVar45;
  uint uVar46;
  long in_FS_OFFSET;
  bool bVar47;
  bool bVar48;
  long local_1e8;
  int local_1d0;
  int local_18c;
  undefined1 local_178;
  int local_14c;
  long local_130;
  ushort *local_128;
  ushort *local_120;
  long local_118;
  undefined8 local_110;
  ushort local_108 [100];
  long local_40;
  ushort *puVar21;
  
  uVar38 = param_3 & 1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = param_3 & 0x1c;
  if ((param_1 == (ushort *)0x0) || (param_5 == (long *)0x0)) {
    uVar15 = 0xffffffcd;
  }
  else if ((param_3 < 0x80) && ((uVar11 & ~-uVar11) == 0 && uVar11 != 0)) {
    local_1e8 = param_2;
    if (param_2 == -1) {
      local_1e8 = _pcre2_strlen_16(param_1);
    }
    puVar14 = &_pcre2_default_convert_context_16;
    if (param_6 != (undefined *)0x0) {
      puVar14 = param_6;
    }
    if (((uVar38 == 0) || ((param_3 & 2) != 0)) ||
       (uVar15 = _pcre2_valid_utf_16(param_1,local_1e8,&local_130), (int)uVar15 == 0)) {
      if (param_4 == (long *)0x0) {
        local_18c = 2;
        lVar45 = 100;
        puVar36 = local_108;
        bVar47 = true;
        goto LAB_001000f3;
      }
      puVar36 = (ushort *)*param_4;
      if (puVar36 == (ushort *)0x0) {
        lVar45 = 100;
        puVar36 = local_108;
      }
      else {
        lVar45 = *param_5;
      }
      local_18c = 2;
LAB_001000e0:
      bVar47 = *param_4 == 0;
LAB_001000f3:
      if (uVar11 == 8) {
LAB_00100550:
        puVar1 = puVar36 + lVar45 + -1;
        uVar31 = 0x28;
        pcVar28 = "(*NUL)";
        *param_5 = local_1e8;
        puVar17 = puVar36;
        if (puVar36 < puVar1) {
          while( true ) {
            pcVar28 = pcVar28 + 1;
            *puVar17 = uVar31;
            puVar17 = puVar17 + 1;
            uVar31 = (ushort)*pcVar28;
            if (*pcVar28 == '\0') break;
            if (puVar1 <= puVar17) goto LAB_00100784;
          }
          if (local_1e8 == 0) {
            lVar45 = 0;
          }
          else {
            uVar32 = 0;
            uVar26 = 0;
            local_1d0 = 0;
            bVar3 = false;
            lVar45 = 0;
            uVar39 = param_3 & 8;
            lVar42 = local_1e8;
            puVar44 = param_1;
            puVar24 = puVar36;
LAB_001005d8:
            uVar31 = *puVar44;
            uVar46 = (uint)uVar31;
            lVar45 = lVar45 + ((long)puVar17 - (long)puVar24 >> 1);
            puVar24 = puVar17;
            if (bVar47) {
              puVar24 = puVar36;
            }
            if (uVar38 == 0) {
              lVar33 = 2;
              lVar40 = 1;
            }
            else {
              lVar33 = 2;
              lVar40 = 1;
              if ((uVar31 & 0xfc00) == 0xd800) {
                lVar33 = 4;
                lVar40 = 2;
                uVar46 = ((uVar31 & 0x3ff) << 10 | puVar44[1] & 0x3ff) + 0x10000;
              }
            }
            puVar23 = (ushort *)((long)puVar44 + lVar33);
            lVar42 = lVar42 - lVar40;
            uVar12 = (uint)lVar33;
            puVar17 = puVar24;
            if (bVar3) {
              if (2 < uVar26) goto LAB_001007e0;
switchD_00100870_caseD_25:
              if (uVar46 < 0x80) {
LAB_001018b3:
                pcVar28 = strchr("\\?*+|.^${}[]()",uVar46);
                if (pcVar28 == (char *)0x0) goto LAB_0010066d;
                goto LAB_001008c3;
              }
              goto LAB_0010066d;
            }
            if (uVar26 < 3) {
              switch(uVar46) {
              case 0x24:
              case 0x2e:
                goto switchD_00100870_caseD_24;
              default:
                goto switchD_00100870_caseD_25;
              case 0x28:
                local_1d0 = local_1d0 + 1;
              case 0x2b:
              case 0x3f:
              case 0x7b:
              case 0x7c:
              case 0x7d:
                if (uVar39 != 0) {
switchD_00100870_caseD_24:
                  uVar26 = 2;
                  goto LAB_00100887;
                }
LAB_001008c3:
                if (puVar1 <= puVar24) goto LAB_00100784;
                puVar17 = puVar24 + 1;
                *puVar24 = 0x5c;
LAB_0010066d:
                if (puVar1 < (ushort *)((long)puVar17 + lVar33)) goto LAB_00100784;
                if (uVar12 != 0) {
                  uVar22 = 0;
                  do {
                    uVar32 = (int)uVar22 + 1;
                    *(undefined1 *)((long)puVar17 + uVar22) =
                         *(undefined1 *)((long)puVar44 + uVar22);
                    uVar22 = (ulong)uVar32;
                  } while (uVar32 < uVar12);
                }
                uVar26 = 2;
                puVar17 = (ushort *)((long)puVar17 + lVar33);
                uVar32 = 0xff;
                break;
              case 0x29:
                if ((uVar39 == 0) || (local_1d0 == 0)) goto LAB_001008c3;
                local_1d0 = local_1d0 + -1;
                goto LAB_00100887;
              case 0x2a:
                if (uVar32 != 0x2a) {
                  if (uVar39 != 0) goto LAB_00100887;
                  if ((uVar26 < 2) || (uVar32 == 0x28)) goto LAB_001008c3;
                  goto switchD_00100870_caseD_24;
                }
                break;
              case 0x5b:
                if (puVar1 <= puVar24) goto LAB_00100784;
                *puVar24 = 0x5b;
                if (lVar42 == 0) goto LAB_00101956;
                uVar31 = *puVar23;
                puVar17 = puVar24 + 1;
                if (uVar31 == 0x5e) {
                  if (puVar1 <= puVar17) goto LAB_00100784;
                  puVar24[1] = 0x5e;
                  lVar42 = lVar42 + -1;
                  if (lVar42 == 0) goto LAB_00101956;
                  uVar31 = puVar23[1];
                  puVar17 = puVar24 + 2;
                  puVar23 = puVar23 + 1;
                }
                uVar26 = 3;
                puVar44 = puVar23;
                if (uVar31 != 0x5d) goto LAB_001005d8;
                if (puVar1 <= puVar17) goto LAB_00100784;
                *puVar17 = 0x5d;
                puVar23 = puVar23 + 1;
                lVar42 = lVar42 + -1;
                puVar17 = puVar17 + 1;
                break;
              case 0x5c:
                if (lVar42 == 0) {
                  uVar15 = 0x65;
                  goto LAB_0010011b;
                }
                if (uVar39 == 0) {
                  uVar31 = *puVar23;
                  if ((0x7e < uVar31) ||
                     (pcVar28 = strchr("(){}123456789",(uint)uVar31), pcVar28 == (char *)0x0))
                  goto LAB_001018a3;
                  ppuVar18 = __ctype_b_loc();
                  puVar17 = puVar24;
                  if ((*(byte *)((long)*ppuVar18 + (ulong)uVar31 * 2 + 1) & 8) != 0) {
                    if (puVar1 <= puVar24) goto LAB_00100784;
                    puVar17 = puVar24 + 1;
                    *puVar24 = 0x5c;
                  }
                  if (puVar17 + 1 <= puVar1) {
                    uVar31 = *puVar23;
                    puVar23 = puVar23 + 1;
                    lVar42 = lVar42 + -1;
                    *puVar17 = uVar31;
                    uVar32 = (uint)uVar31;
                    puVar17 = puVar17 + 1;
                    break;
                  }
                  goto LAB_00100784;
                }
LAB_001018a3:
                bVar3 = true;
                puVar44 = puVar23;
                goto LAB_001005d8;
              case 0x5e:
                if (uVar39 == 0) {
                  if ((uVar32 != 0x28) && (uVar26 != 0)) goto LAB_001018b3;
                  uVar26 = 1;
                }
LAB_00100887:
                if (puVar1 < puVar24 + 1) goto LAB_00100784;
                *puVar24 = (ushort)uVar46;
                puVar17 = puVar24 + 1;
                uVar32 = uVar46;
              }
            }
            else {
LAB_001007e0:
              if (uVar46 != 0x5d) {
                puVar29 = puVar24;
                if (uVar26 == 4) {
                  if (uVar46 != 0x3a) goto LAB_00100810;
                  uVar26 = 5;
                }
                else if (uVar26 == 5) {
                  if (uVar46 < 0x80) {
                    ppuVar18 = __ctype_b_loc();
                    if ((*(byte *)((long)*ppuVar18 + (ulong)uVar46 * 2 + 1) & 2) != 0)
                    goto LAB_00100810;
                    if ((uVar46 != 0x3a) || (lVar42 == 0)) goto LAB_00100801;
                    uVar26 = 3;
                    if (*puVar23 == 0x5d) {
                      if (puVar24 < puVar1) {
                        pcVar28 = ":]";
                        uVar31 = 0x3a;
                        while( true ) {
                          pcVar28 = pcVar28 + 1;
                          *puVar17 = uVar31;
                          puVar17 = puVar17 + 1;
                          uVar31 = (ushort)*pcVar28;
                          if (*pcVar28 == '\0') break;
                          if (puVar1 <= puVar17) goto LAB_00100784;
                        }
                        lVar42 = lVar42 + -1;
                        puVar23 = puVar23 + 1;
                        uVar26 = 3;
                        goto LAB_001006a8;
                      }
                      goto LAB_00100784;
                    }
                  }
                  else {
                    uVar26 = 3;
                  }
                }
                else {
                  if (uVar26 == 3) {
LAB_00100801:
                    uVar26 = 3;
                    if (uVar46 == 0x5b) {
                      uVar26 = 4;
                      goto LAB_0010081d;
                    }
                  }
LAB_00100810:
                  if (uVar46 == 0x5c) {
                    if (puVar1 <= puVar24) goto LAB_00100784;
                    *puVar24 = 0x5c;
                    puVar29 = puVar24 + 1;
                  }
                }
LAB_0010081d:
                puVar17 = (ushort *)((long)puVar29 + lVar33);
                if (puVar17 <= puVar1) {
                  if (uVar12 != 0) {
                    uVar46 = 0;
                    do {
                      uVar22 = (ulong)uVar46;
                      uVar46 = uVar46 + 1;
                      *(undefined1 *)((long)puVar29 + uVar22) =
                           *(undefined1 *)((long)puVar44 + uVar22);
                    } while (uVar46 < uVar12);
                  }
                  goto LAB_001006a8;
                }
                goto LAB_00100784;
              }
              if (puVar1 <= puVar24) goto LAB_00100784;
              uVar26 = 2;
              *puVar24 = 0x5d;
              puVar17 = puVar24 + 1;
            }
LAB_001006a8:
            if (lVar42 != 0) {
              bVar3 = false;
              puVar44 = puVar23;
              goto LAB_001005d8;
            }
            puVar36 = puVar24;
            if (2 < uVar26) {
LAB_00101956:
              uVar15 = 0x6a;
              goto LAB_0010011b;
            }
          }
          *param_5 = ((long)puVar17 - (long)puVar36 >> 1) + lVar45;
          *puVar17 = 0;
          goto LAB_00101052;
        }
LAB_00100784:
        uVar15 = 0xffffffd0;
        goto LAB_0010011b;
      }
      if (uVar11 == 0x10) {
        uVar32 = *(uint *)(puVar14 + 0x18);
        uVar26 = *(uint *)(puVar14 + 0x1c);
        puVar17 = param_1 + local_1e8;
        uVar31 = (ushort)uVar32;
        uVar37 = (ushort)uVar26;
        uVar39 = param_3 & 0x20;
        if ((uVar38 != 0) && (0x7f < (uVar37 | uVar31))) {
          *param_5 = 0;
          uVar15 = 0xffffffc0;
          goto LAB_0010011b;
        }
        uVar46 = uVar32 & 0xffff;
        pcVar28 = strchr("\\?*+|.^${}[]()",uVar46);
        puVar1 = puVar36 + lVar45;
        lVar45 = 4;
        local_110 = CONCAT44(local_110._4_4_,0x29733f28);
        puVar24 = puVar36;
        pbVar27 = (byte *)&local_110;
        do {
          local_128 = puVar24;
          if (puVar24 < puVar1) {
            bVar2 = *pbVar27;
            local_128 = puVar24 + 1;
            pbVar27 = pbVar27 + 1;
            *puVar24 = (ushort)bVar2;
          }
          lVar45 = lVar45 + -1;
          puVar24 = local_128;
        } while (lVar45 != 0);
        local_118 = 4;
        local_120 = puVar1;
        if (param_1 < puVar17) {
          if ((*param_1 != 0x2a) ||
             ((uVar39 == 0 &&
              ((((param_3 & 0x40) != 0 || (puVar17 <= param_1 + 1)) || (param_1[1] != 0x2a)))))) {
            if (local_128 < puVar1) goto LAB_001002b4;
            goto LAB_001002d6;
          }
LAB_001002f5:
          bVar48 = false;
          puVar44 = param_1 + 1;
          bVar3 = false;
          puVar24 = param_1;
LAB_001003e3:
          lVar45 = local_118;
          puVar29 = local_128;
          uVar25 = *puVar24;
          puVar23 = puVar24 + 1;
          uVar9 = local_110._3_5_;
          if (uVar25 == 0x2a) {
            if ((bVar3) && (local_118 = local_118 + 1, local_128 < puVar1)) {
              *local_128 = 0x29;
              local_128 = local_128 + 1;
            }
            lVar45 = local_118;
            puVar29 = puVar23;
            if ((param_3 & 0x40) == 0) {
              if (puVar17 <= puVar23) goto joined_r0x001009d6;
              if (puVar24[1] != 0x2a) goto joined_r0x00100451;
              bVar48 = true;
              if (puVar23 != puVar44) {
                bVar48 = puVar24[-1] == uVar31;
              }
              do {
                puVar24 = puVar29;
                puVar29 = puVar24 + 1;
                if (puVar17 <= puVar29) goto LAB_001009fc;
              } while (*puVar29 == 0x2a);
              if ((((uVar37 != 0) && (bVar48)) && (uVar37 == *puVar29)) &&
                 ((puVar24 + 2 < puVar17 && (uVar31 == puVar24[2])))) {
                puVar29 = puVar24 + 2;
              }
              if (puVar23 == puVar44) {
                puVar23 = puVar29;
                if (uVar31 != *puVar29) goto LAB_00101832;
                lVar45 = 6;
                local_110 = CONCAT26(local_110._6_2_,0x7c415c3a3f28);
                pbVar27 = (byte *)&local_110;
                do {
                  puVar24 = local_128;
                  if (local_128 < puVar1) {
                    bVar2 = *pbVar27;
                    puVar24 = local_128 + 1;
                    pbVar27 = pbVar27 + 1;
                    *local_128 = (ushort)bVar2;
                  }
                  lVar45 = lVar45 + -1;
                  local_128 = puVar24;
                } while (lVar45 != 0);
                lVar45 = local_118 + 6;
                puVar23 = puVar24;
                if (pcVar28 == (char *)0x0) {
LAB_00101f57:
                  local_128 = puVar23;
                  if (puVar1 <= puVar23) goto LAB_001021e9;
                  local_128 = puVar23 + 1;
                  local_118 = lVar45 + 2;
                  *puVar23 = uVar31;
                  if (local_128 < puVar1) {
                    local_128 = puVar23 + 2;
                    puVar23[1] = 0x29;
                  }
                }
                else {
                  lVar45 = local_118 + 7;
                  if (puVar24 < puVar1) {
                    puVar23 = puVar24 + 1;
                    *puVar24 = 0x5c;
                    goto LAB_00101f57;
                  }
LAB_001021e9:
                  local_118 = lVar45 + 2;
                }
                puVar23 = puVar29 + 1;
              }
              else {
                lVar45 = 8;
                pbVar27 = (byte *)&local_110;
                do {
                  puVar24 = local_128;
                  if (local_128 < puVar1) {
                    bVar2 = *pbVar27;
                    puVar24 = local_128 + 1;
                    pbVar27 = pbVar27 + 1;
                    *local_128 = (ushort)bVar2;
                  }
                  lVar45 = lVar45 + -1;
                  local_128 = puVar24;
                } while (lVar45 != 0);
                puVar23 = puVar24;
                if (puVar24 < puVar1) {
                  puVar23 = puVar24 + 1;
                  *puVar24 = 0x29;
                }
                if ((bVar48) && (uVar31 == *puVar29)) {
                  lVar45 = 6;
                  local_110._6_2_ = (undefined2)((ulong)_LC8 >> 0x30);
                  local_110 = CONCAT26(local_110._6_2_,0x3f2a2e3a3f00);
                  uVar15 = local_110;
                  pbVar27 = (byte *)&local_110;
                  do {
                    puVar24 = puVar23;
                    if (puVar23 < puVar1) {
                      bVar2 = *pbVar27;
                      puVar24 = puVar23 + 1;
                      pbVar27 = pbVar27 + 1;
                      *puVar23 = (ushort)bVar2;
                    }
                    lVar45 = lVar45 + -1;
                    puVar23 = puVar24;
                  } while (lVar45 != 0);
                  if (pcVar28 == (char *)0x0) {
                    local_118 = local_118 + 0xf;
LAB_00102002:
                    local_118 = local_118 + 1;
                    puVar24 = puVar23;
                    if (puVar23 < puVar1) {
                      puVar24 = puVar23 + 1;
                      *puVar23 = uVar31;
                    }
                  }
                  else {
                    if (puVar24 < puVar1) {
                      puVar23 = puVar24 + 1;
                      local_118 = local_118 + 0x10;
                      *puVar24 = 0x5c;
                      goto LAB_00102002;
                    }
                    local_118 = local_118 + 0x11;
                  }
                  local_110 = CONCAT71(local_110._1_7_,0x29);
                  uVar8 = local_110;
                  lVar45 = 3;
                  local_110._3_5_ = SUB85(uVar15,3);
                  local_110._0_2_ = (undefined2)uVar8;
                  local_110._0_3_ = CONCAT12(0x3f,(undefined2)local_110);
                  pbVar27 = (byte *)&local_110;
                  do {
                    puVar35 = puVar24;
                    if (puVar24 < puVar1) {
                      bVar2 = *pbVar27;
                      puVar35 = puVar24 + 1;
                      pbVar27 = pbVar27 + 1;
                      *puVar24 = (ushort)bVar2;
                    }
                    lVar45 = lVar45 + -1;
                    puVar24 = puVar35;
                  } while (lVar45 != 0);
                  local_118 = local_118 + 3;
                  puVar23 = puVar29 + 1;
                  bVar3 = false;
                  goto LAB_001003da;
                }
                local_110._1_7_ = (undefined7)((ulong)_LC8 >> 8);
                local_110 = CONCAT71(local_110._1_7_,0x2e);
                uVar15 = local_110;
                lVar45 = 3;
                local_110._3_5_ = (undefined5)((ulong)_LC8 >> 0x18);
                local_110._0_2_ = (undefined2)uVar15;
                local_110._0_3_ = CONCAT12(0x3f,(undefined2)local_110);
                pbVar27 = (byte *)&local_110;
                do {
                  local_128 = puVar23;
                  if (puVar23 < puVar1) {
                    bVar2 = *pbVar27;
                    local_128 = puVar23 + 1;
                    pbVar27 = pbVar27 + 1;
                    *puVar23 = (ushort)bVar2;
                  }
                  lVar45 = lVar45 + -1;
                  puVar23 = local_128;
                } while (lVar45 != 0);
                local_118 = local_118 + 0xc;
                puVar23 = puVar29;
              }
LAB_00101832:
              bVar48 = true;
              bVar3 = false;
              puVar35 = local_128;
              goto LAB_001003da;
            }
            if (puVar23 < puVar17) {
              uVar25 = puVar24[1];
              while (uVar25 == 0x2a) {
                puVar29 = puVar29 + 1;
                if (puVar17 <= puVar29) goto joined_r0x001009d6;
                uVar25 = *puVar29;
              }
joined_r0x00100451:
              if (uVar39 == 0) goto LAB_00100ac1;
              if (puVar23 == puVar44) {
                bVar3 = false;
                puVar23 = puVar29;
                puVar35 = local_128;
                goto LAB_001003da;
              }
LAB_00100465:
              if (!bVar48) {
                local_110 = _LC8;
                lVar45 = 8;
                puVar24 = local_128;
                pbVar27 = (byte *)&local_110;
                do {
                  local_128 = puVar24;
                  if (puVar24 < puVar1) {
                    bVar2 = *pbVar27;
                    local_128 = puVar24 + 1;
                    pbVar27 = pbVar27 + 1;
                    *puVar24 = (ushort)bVar2;
                  }
                  lVar45 = lVar45 + -1;
                  puVar24 = local_128;
                } while (lVar45 != 0);
                lVar45 = local_118 + 9;
                if (local_128 < puVar1) {
                  bVar3 = false;
                  puVar24 = local_128 + 1;
                  *local_128 = 0x29;
                  goto LAB_001004ce;
                }
                if (uVar39 == 0) {
                  bVar3 = false;
                  local_118 = lVar45;
                  goto LAB_00100ae7;
                }
                bVar3 = false;
                lVar45 = local_118 + 10;
                goto LAB_00100b07;
              }
              lVar45 = 3;
              local_110 = CONCAT53(local_110._3_5_,0x3e0000);
              pbVar27 = (byte *)&local_110;
              do {
                puVar24 = local_128;
                if (local_128 < puVar1) {
                  bVar2 = *pbVar27;
                  puVar24 = local_128 + 1;
                  pbVar27 = pbVar27 + 1;
                  *local_128 = (ushort)bVar2;
                }
                lVar45 = lVar45 + -1;
                local_128 = puVar24;
              } while (lVar45 != 0);
              lVar45 = local_118 + 3;
              bVar3 = bVar48;
LAB_001004ce:
              local_128 = puVar24;
              local_118 = lVar45;
              if (uVar39 == 0) goto LAB_00100ae7;
              lVar45 = lVar45 + 1;
              if (puVar1 <= puVar24) goto LAB_00100b07;
              local_128 = puVar24 + 1;
              *puVar24 = 0x2e;
LAB_001004f6:
              local_110 = CONCAT71(local_110._1_7_,0x2a);
              uVar25 = (-(ushort)(puVar29 < puVar17) & 0x14) + 0x2b;
              puVar23 = puVar29;
            }
            else {
joined_r0x001009d6:
              if (uVar39 != 0) goto LAB_001009fc;
LAB_00100ac1:
              if (puVar23 != puVar44) goto LAB_00100465;
              bVar3 = false;
LAB_00100ae7:
              if (local_128 < puVar1) {
                puVar24 = local_128 + 1;
                *local_128 = 0x5b;
                if (puVar24 < puVar1) {
                  puVar24 = local_128 + 2;
                  local_128[1] = 0x5e;
                  if (pcVar28 == (char *)0x0) goto LAB_00101271;
                  local_118 = local_118 + 3;
                  if (puVar1 <= puVar24) goto LAB_00100b03;
                  puVar24 = local_128 + 3;
                  local_128[2] = 0x5c;
                }
                else {
                  if (pcVar28 != (char *)0x0) {
                    local_118 = local_118 + 3;
                    goto LAB_00100b03;
                  }
LAB_00101271:
                  local_118 = local_118 + 2;
                }
                if (puVar24 < puVar1) {
                  local_128 = puVar24 + 1;
                  lVar45 = local_118 + 2;
                  *puVar24 = uVar31;
                  if (puVar1 <= local_128) goto LAB_00100b07;
                  local_128 = puVar24 + 2;
                  puVar24[1] = 0x5d;
                  goto LAB_001004f6;
                }
              }
              else {
                puVar24 = local_128;
                if (pcVar28 == (char *)0x0) goto LAB_00101271;
                local_118 = local_118 + 3;
              }
LAB_00100b03:
              lVar45 = local_118 + 2;
              local_128 = puVar24;
LAB_00100b07:
              local_110 = CONCAT71(local_110._1_7_,0x2a);
              if (puVar17 <= puVar29) {
                local_118 = lVar45 + 2;
                goto LAB_00100fd2;
              }
              uVar25 = 0x3f;
              puVar23 = puVar29;
            }
            local_110._0_2_ = CONCAT11((char)uVar25,(byte)local_110);
            local_118 = lVar45 + 2;
            puVar35 = local_128;
            if (local_128 < puVar1) {
              *local_128 = 0x2a;
              puVar35 = local_128 + 1;
              if (local_128 + 1 < puVar1) {
                local_128[1] = uVar25;
                puVar35 = local_128 + 2;
              }
            }
          }
          else {
            if (uVar25 != 0x3f) {
              if (uVar25 != 0x5b) {
                if ((uVar37 != 0) && (uVar37 == uVar25)) {
                  if (puVar17 <= puVar23) {
                    uVar15 = 0xffffffc0;
                    goto LAB_00100a50;
                  }
                  uVar25 = puVar24[1];
                  puVar23 = puVar24 + 2;
                }
                puVar24 = puVar29;
                if ((uVar25 < 0x80) &&
                   (pcVar16 = strchr("\\?*+|.^${}[]()",(uint)uVar25), pcVar16 != (char *)0x0)) {
                  if (puVar1 <= puVar29) {
                    local_118 = lVar45 + 2;
                    puVar35 = local_128;
                    goto LAB_001003da;
                  }
                  puVar24 = puVar29 + 1;
                  lVar45 = lVar45 + 1;
                  *puVar29 = 0x5c;
                  local_128 = puVar24;
                }
                local_118 = lVar45 + 1;
                puVar35 = local_128;
                if (puVar24 < puVar1) {
                  *puVar24 = uVar25;
                  puVar35 = puVar24 + 1;
                }
                goto LAB_001003da;
              }
              puVar29 = puVar23;
              if (puVar23 < puVar17) {
                uVar25 = puVar24[1];
                if ((uVar25 == 0x21) || (uVar25 == 0x5e)) {
                  puVar29 = puVar24 + 2;
                  if (puVar17 <= puVar29) goto LAB_00100d4a;
                  lVar42 = 3;
                  local_110 = CONCAT62(local_110._2_6_,0x5e5b);
                  pbVar27 = (byte *)&local_110;
                  lVar45 = lVar42;
                  if (uVar39 == 0) {
                    lVar45 = 2;
                    if (pcVar28 != (char *)0x0) {
                      local_110 = CONCAT53(uVar9,0x5c5e5b);
                      lVar42 = 4;
                      lVar45 = 3;
                    }
                    local_178 = (undefined1)uVar32;
                    *(undefined1 *)((long)local_108 + lVar45 + -8) = local_178;
                    lVar45 = lVar42;
                  }
                  do {
                    puVar23 = local_128;
                    if (local_128 < puVar1) {
                      bVar2 = *pbVar27;
                      puVar23 = local_128 + 1;
                      pbVar27 = pbVar27 + 1;
                      *local_128 = (ushort)bVar2;
                    }
                    lVar42 = lVar42 + -1;
                    local_128 = puVar23;
                  } while (lVar42 != 0);
                  local_118 = local_118 + lVar45;
                  uVar25 = puVar24[2];
                  bVar7 = true;
                }
                else {
                  local_118 = local_118 + 1;
                  bVar7 = false;
                  if (local_128 < puVar1) {
                    *local_128 = 0x5b;
                    uVar25 = puVar24[1];
                    local_128 = local_128 + 1;
                  }
                }
                if (uVar25 == 0x5d) {
                  local_110 = CONCAT62(local_110._2_6_,0x5d5c);
                  local_118 = local_118 + 2;
                  puVar24 = local_128;
                  if (local_128 < puVar1) {
                    puVar24 = local_128 + 1;
                    *local_128 = 0x5c;
                    if (puVar24 < puVar1) {
                      puVar24 = local_128 + 2;
                      local_128[1] = 0x5d;
                    }
                  }
                  puVar29 = puVar29 + 1;
                  local_128 = puVar24;
                  if (puVar17 <= puVar29) goto LAB_00100d4a;
                  uVar12 = 0x5d;
                  uVar25 = 1;
                }
                else {
                  uVar12 = 0;
                  uVar25 = 0;
                }
                lVar42 = local_118;
                puVar24 = local_128;
                bVar43 = 0;
                bVar4 = false;
                bVar2 = 0;
                uVar6 = uVar26 & 0xffff;
                puVar35 = local_128;
                lVar45 = local_118;
                puVar19 = puVar29;
LAB_00100be0:
                uVar41 = *puVar19;
                puVar23 = puVar19 + 1;
                uVar13 = (uint)uVar41;
                puVar20 = puVar19;
                if ((uVar38 == 0) || ((uVar41 & 0xfc00) != 0xd800)) {
                  if (uVar13 == 0x5d) goto LAB_001016f7;
                  if (puVar17 <= puVar23) {
                    uVar15 = 0x6a;
                    goto LAB_00100a50;
                  }
                  if (uVar13 == 0x5b) {
                    if (puVar19[1] != 0x3a) goto LAB_00100dd7;
                    puVar29 = puVar19 + 2;
                    do {
                      if (puVar17 <= puVar29) goto LAB_00100da8;
                      uVar41 = *puVar29;
                      puVar29 = puVar29 + 1;
                    } while ((ushort)(uVar41 - 0x61) < 0x1a);
                    if (((uVar41 == 0x3a) && (puVar29 < puVar17)) && (*puVar29 == 0x5d)) {
                      pcVar16 = 
                      "alnum:alpha:ascii:blank:cntrl:digit:graph:lower:print:punct:space:upper:word:xdigit:"
                      ;
                      local_14c = 1;
                      cVar10 = 'a';
                      do {
                        puVar29 = puVar19 + 2;
                        uVar41 = puVar19[2];
                        pcVar5 = pcVar16;
                        if ((short)cVar10 == puVar19[2]) {
LAB_00101358:
                          if (uVar41 != 0x3a) goto LAB_00101338;
                          puVar23 = puVar29 + 2;
                          puVar34 = puVar35;
                          do {
                            puVar21 = puVar20 + 1;
                            puVar35 = puVar34;
                            if (puVar34 < puVar1) {
                              puVar35 = puVar34 + 1;
                              bVar43 = 1;
                              *puVar34 = *puVar20;
                            }
                            puVar20 = puVar21;
                            puVar34 = puVar35;
                          } while (puVar21 < puVar23);
                          uVar22 = (ulong)((long)puVar29 + (3 - (long)puVar19)) >> 1;
                          if (puVar23 < (ushort *)((long)puVar19 + 1U)) {
                            uVar22 = 0;
                          }
                          lVar45 = lVar45 + 1 + uVar22;
                          if ((0xff < uVar31) || (bVar7)) {
                            uVar12 = 0;
                            uVar25 = 0;
                          }
                          else {
                            switch(local_14c) {
                            default:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 0x1000;
                              break;
                            case 1:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 8;
                              break;
                            case 2:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 0x400;
                              break;
                            case 3:
                              uVar12 = 0;
                              uVar25 = 0;
                              bVar2 = 1;
                              goto LAB_00100d3c;
                            case 4:
                              uVar25 = (ushort)(uVar31 == 9 || uVar31 == 0x20);
                              break;
                            case 5:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 2;
                              break;
                            case 6:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 0x800;
                              break;
                            case 7:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 0x8000;
                              break;
                            case 8:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 0x200;
                              break;
                            case 9:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 0x4000;
                              break;
                            case 10:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 4;
                              break;
                            case 0xb:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 0x2000;
                              break;
                            case 0xc:
                              ppuVar18 = __ctype_b_loc();
                              uVar25 = (*ppuVar18)[uVar31] & 0x100;
                              break;
                            case 0xd:
                              ppuVar18 = __ctype_b_loc();
                              uVar12 = 0;
                              uVar25 = 0;
                              if ((((*ppuVar18)[uVar31] & 8) == 0) && (uVar31 != 0x5f))
                              goto LAB_00100d3c;
                              goto LAB_00101a12;
                            }
                            uVar12 = 0;
                            if (uVar25 != 0) {
LAB_00101a12:
                              uVar12 = 0;
                              uVar25 = 0;
                              bVar2 = 1;
                            }
                          }
                          goto LAB_00100d3c;
                        }
joined_r0x00101dc2:
                        while (cVar10 != ':') {
                          cVar10 = pcVar5[1];
                          pcVar5 = pcVar5 + 1;
                        }
                        local_14c = local_14c + 1;
                        pcVar16 = pcVar5 + 1;
                        cVar10 = pcVar5[1];
                      } while (cVar10 != '\0');
                    }
                    goto LAB_00100da8;
                  }
                  bVar30 = uVar13 == 0x2d & (byte)uVar25;
                  if (bVar30 != 0) {
                    uVar25 = puVar19[1];
                    if (uVar25 == 0x5d) {
                      uVar13 = 0x2d;
                      goto LAB_00100dd7;
                    }
                    lVar45 = lVar45 + 1;
                    puVar29 = puVar35;
                    if (puVar35 < puVar1) {
                      puVar29 = puVar35 + 1;
                      *puVar35 = 0x2d;
                      uVar25 = puVar19[1];
                      bVar43 = bVar30;
                    }
                    puVar20 = puVar19 + 2;
                    uVar13 = (uint)uVar25;
                    if ((uVar38 != 0) && ((uVar25 & 0xfc00) == 0xd800)) {
                      puVar34 = puVar19 + 3;
                      uVar13 = ((uVar13 & 0x3ff) << 10 | puVar19[2] & 0x3ff) + 0x10000;
                      if (puVar34 < puVar17) goto LAB_00100ca5;
LAB_001010d2:
                      uVar15 = 0x6a;
                      puVar23 = puVar34;
                      goto LAB_00100a50;
                    }
                    puVar34 = puVar20;
                    if (puVar17 <= puVar20) goto LAB_001010d2;
                    if ((uVar37 == 0) || (uVar6 != uVar13)) {
                      if ((uVar13 != 0x5b) || (puVar19[2] != 0x3a)) goto LAB_00100ca5;
LAB_00100e9c:
                      uVar15 = 0xffffffc0;
                      puVar23 = puVar20;
                      goto LAB_00100a50;
                    }
                    puVar34 = puVar19 + 3;
                    uVar13 = (uint)puVar19[2];
                    puVar23 = puVar20;
                    if ((uVar38 == 0) || ((puVar19[2] & 0xfc00) != 0xd800)) {
LAB_00100ca5:
                      puVar20 = puVar34;
                      if (uVar12 <= uVar13) {
                        puVar20 = puVar23;
                        puVar35 = puVar29;
                        puVar23 = puVar34;
                        if ((uVar46 < uVar13) && (uVar12 < uVar46)) {
                          uVar12 = 0;
                          uVar25 = 0;
                          bVar2 = 1;
                        }
                        else {
                          uVar12 = 0;
                          uVar25 = 0;
                        }
                        goto LAB_00100cc7;
                      }
                      goto LAB_00100e9c;
                    }
                    puVar23 = puVar19 + 4;
                    uVar13 = ((uVar13 & 0x3ff) << 10 | puVar19[3] & 0x3ff) + 0x10000;
                    if (uVar13 < uVar12) {
                      uVar15 = 0xffffffc0;
                      goto LAB_00100a50;
                    }
                    if (uVar12 < uVar46) {
                      bVar2 = 1;
                    }
                    uVar12 = 0;
                    uVar25 = 0;
                    goto LAB_00100ce8;
                  }
LAB_00100dd7:
                  uVar12 = uVar13;
                  if ((uVar37 != 0) && (uVar6 == uVar12)) {
                    uVar25 = puVar19[1];
                    puVar29 = puVar19 + 2;
                    uVar12 = (uint)uVar25;
                    if ((uVar38 != 0) && ((uVar25 & 0xfc00) == 0xd800)) {
                      puVar29 = puVar19 + 3;
                      uVar12 = ((uVar25 & 0x3ff) << 10 | puVar19[2] & 0x3ff) + 0x10000;
                    }
                    if (puVar29 < puVar17) {
                      uVar25 = 1;
                      puVar20 = puVar23;
                      puVar23 = puVar29;
                      uVar13 = uVar12;
                      goto LAB_00100cc7;
                    }
                    goto LAB_00100d4a;
                  }
                  uVar25 = 1;
                  uVar13 = uVar12;
                }
                else {
                  puVar23 = puVar19 + 2;
                  uVar12 = ((uVar41 & 0x3ff) << 10 | puVar19[1] & 0x3ff) + 0x10000;
                  if (puVar17 <= puVar23) {
                    uVar15 = 0x6a;
                    goto LAB_00100a50;
                  }
                  uVar25 = 1;
                  uVar13 = uVar12;
                }
LAB_00100cc7:
                if ((((uVar13 - 0x5b & 0xfffffffd) == 0) || (uVar13 == 0x5c)) ||
                   (puVar29 = puVar35, uVar13 == 0x2d)) {
LAB_00100da8:
                  lVar45 = lVar45 + 1;
                  puVar29 = puVar35;
                  if (puVar35 < puVar1) {
                    puVar29 = puVar35 + 1;
                    bVar43 = 1;
                    *puVar35 = 0x5c;
                  }
                }
LAB_00100ce8:
                puVar19 = puVar20;
                if (uVar46 == uVar13) {
                  bVar2 = 1;
                }
                do {
                  puVar34 = puVar19 + 1;
                  puVar35 = puVar29;
                  if (puVar29 < puVar1) {
                    puVar35 = puVar29 + 1;
                    bVar43 = 1;
                    *puVar29 = *puVar19;
                  }
                  puVar19 = puVar34;
                  puVar29 = puVar35;
                } while (puVar34 < puVar23);
                uVar22 = (ulong)((long)puVar23 + (-1 - (long)puVar20)) >> 1;
                if (puVar23 < (ushort *)((long)puVar20 + 1U)) {
                  uVar22 = 0;
                }
                lVar45 = lVar45 + 1 + uVar22;
LAB_00100d3c:
                bVar4 = true;
                puVar29 = puVar23;
                puVar19 = puVar23;
                if (puVar17 <= puVar23) goto LAB_00100d4a;
                goto LAB_00100be0;
              }
LAB_00100d4a:
              uVar15 = 0x6a;
              puVar23 = puVar29;
              goto LAB_00100a50;
            }
            if (uVar39 == 0) {
              local_110 = CONCAT62(local_110._2_6_,0x5e5b);
              if (local_128 < puVar1) {
                puVar24 = local_128 + 1;
                *local_128 = 0x5b;
                if (puVar24 < puVar1) {
                  puVar24 = local_128 + 2;
                  local_128[1] = 0x5e;
                  if (pcVar28 == (char *)0x0) goto LAB_00101667;
                  local_118 = local_118 + 3;
                  if (puVar1 <= puVar24) goto LAB_0010110f;
                  local_128[2] = 0x5c;
                  local_128 = local_128 + 3;
                }
                else {
                  local_128 = puVar24;
                  if (pcVar28 != (char *)0x0) goto LAB_0010110b;
LAB_00101667:
                  local_128 = puVar24;
                  local_118 = local_118 + 2;
                }
                puVar24 = local_128;
                if (local_128 < puVar1) {
                  local_118 = local_118 + 2;
                  *local_128 = uVar31;
                  puVar35 = local_128 + 1;
                  if (local_128 + 1 < puVar1) {
                    local_128[1] = 0x5d;
                    puVar35 = local_128 + 2;
                  }
                  goto LAB_001003da;
                }
              }
              else {
                puVar24 = local_128;
                if (pcVar28 == (char *)0x0) goto LAB_00101667;
LAB_0010110b:
                local_118 = local_118 + 3;
                puVar24 = local_128;
              }
LAB_0010110f:
              local_128 = puVar24;
              local_118 = local_118 + 2;
              puVar35 = local_128;
            }
            else {
              local_118 = local_118 + 1;
              puVar35 = local_128;
              if (local_128 < puVar1) {
                *local_128 = 0x2e;
                puVar35 = local_128 + 1;
              }
            }
          }
          goto LAB_001003da;
        }
        if (local_128 < puVar1) {
LAB_001002b4:
          puVar24 = local_128 + 1;
          *local_128 = 0x5c;
          if (puVar24 < puVar1) {
            puVar24 = local_128 + 2;
            local_128[1] = 0x41;
          }
LAB_001002d6:
          local_110 = CONCAT62(local_110._2_6_,0x415c);
          local_118 = 6;
          local_128 = puVar24;
          if (param_1 < puVar17) goto LAB_001002f5;
        }
        local_110 = CONCAT62(local_110._2_6_,0x415c);
        local_118 = 6;
        bVar3 = false;
        puVar29 = param_1;
LAB_00100fd2:
        local_110 = CONCAT62(local_110._2_6_,0x7a5c);
        puVar17 = local_128;
        if (local_128 < puVar1) {
          puVar17 = local_128 + 1;
          *local_128 = 0x5c;
          if (puVar17 < puVar1) {
            puVar17 = local_128 + 2;
            local_128[1] = 0x7a;
          }
        }
        lVar45 = local_118 + 2;
        local_128 = puVar17;
        if (bVar3) {
          lVar45 = local_118 + 3;
          if (puVar17 < puVar1) {
            local_128 = puVar17 + 1;
            *puVar17 = 0x29;
            goto LAB_001009fc;
          }
          local_118 = local_118 + 4;
        }
        else {
LAB_001009fc:
          local_118 = lVar45 + 1;
          if (local_128 < puVar1) {
            *local_128 = 0;
            local_128 = local_128 + 1;
          }
        }
        if ((!bVar47) && ((long)local_128 - (long)puVar36 >> 1 != local_118)) {
          uVar15 = 0xffffffd0;
          puVar23 = puVar29;
LAB_00100a50:
          *param_5 = (long)puVar23 - (long)param_1 >> 1;
          goto LAB_0010011b;
        }
        *param_5 = lVar45;
LAB_00101052:
        if ((param_4 == (long *)0x0) || (*param_4 != 0)) {
          uVar15 = 0;
          goto LAB_0010011b;
        }
        lVar45 = _pcre2_memctl_malloc_16(*param_5 * 0x10 + 0x28,puVar14);
        if (lVar45 == 0) goto LAB_00100784;
        local_18c = local_18c + -1;
        puVar36 = (ushort *)(lVar45 + 0x18);
        *param_4 = (long)puVar36;
        if (local_18c == 0) goto LAB_00100116;
        lVar45 = *param_5 + 1;
        goto LAB_001000e0;
      }
      if (uVar11 == 4) goto LAB_00100550;
      *param_5 = 0;
LAB_00100116:
      uVar15 = 0xffffffd4;
    }
    else {
      *param_5 = local_130;
    }
  }
  else {
    *param_5 = 0;
    uVar15 = 0xffffffde;
  }
LAB_0010011b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar15;
LAB_001016f7:
  if (bVar43 != 0) {
    puVar24 = puVar35;
    local_128 = puVar35;
  }
  if (!bVar4) {
    lVar45 = lVar42;
  }
  local_118 = lVar45 + 1;
  if (puVar24 < puVar1) {
    local_128 = puVar24 + 1;
    *puVar24 = 0x5d;
  }
  puVar35 = local_128;
  if (!(bool)(((bVar7 | (param_3 & 0x20) != 0) ^ 1U) & bVar2)) goto LAB_001003da;
  local_110 = CONCAT44(local_110._4_4_,0x213c3f28);
  lVar42 = 4;
  puVar24 = local_128;
  pbVar27 = (byte *)&local_110;
  do {
    local_128 = puVar24;
    if (puVar24 < puVar1) {
      bVar2 = *pbVar27;
      local_128 = puVar24 + 1;
      pbVar27 = pbVar27 + 1;
      *puVar24 = (ushort)bVar2;
    }
    lVar42 = lVar42 + -1;
    puVar24 = local_128;
  } while (lVar42 != 0);
  if (pcVar28 == (char *)0x0) {
    lVar45 = lVar45 + 5;
LAB_001017af:
    local_128 = puVar24;
    if (puVar24 < puVar1) {
      local_118 = lVar45 + 2;
      *puVar24 = uVar31;
      puVar35 = puVar24 + 1;
      if (puVar24 + 1 < puVar1) {
        puVar24[1] = 0x29;
        puVar35 = puVar24 + 2;
      }
      goto LAB_001003da;
    }
  }
  else {
    lVar45 = lVar45 + 6;
    if (local_128 < puVar1) {
      puVar24 = local_128 + 1;
      *local_128 = 0x5c;
      goto LAB_001017af;
    }
  }
  local_118 = lVar45 + 2;
  puVar35 = local_128;
LAB_001003da:
  local_128 = puVar35;
  puVar24 = puVar23;
  puVar29 = puVar23;
  if (puVar17 <= puVar23) goto LAB_00100fd2;
  goto LAB_001003e3;
LAB_00101338:
  cVar10 = pcVar16[1];
  puVar34 = puVar29 + 1;
  pcVar16 = pcVar16 + 1;
  puVar29 = puVar29 + 1;
  uVar41 = *puVar34;
  pcVar5 = pcVar16;
  if (*puVar34 != (short)cVar10) goto joined_r0x00101dc2;
  goto LAB_00101358;
}



void pcre2_converted_pattern_free_16(long param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00102238. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + -0x10))(param_1 + -0x18,*(undefined8 *)(param_1 + -8));
    return;
  }
  return;
}


