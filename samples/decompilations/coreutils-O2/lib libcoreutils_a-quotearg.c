
undefined * gettext_quote_part_0(char *param_1,int param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  
  pbVar1 = (byte *)locale_charset();
  if ((*pbVar1 & 0xdf) == 0x55) {
    if (((((pbVar1[1] & 0xdf) == 0x54) && ((pbVar1[2] & 0xdf) == 0x46)) && (pbVar1[3] == 0x2d)) &&
       ((pbVar1[4] == 0x38 && (pbVar1[5] == 0)))) {
      puVar2 = &_LC0;
      if (*param_1 == '`') {
        puVar2 = &_LC5;
      }
      return puVar2;
    }
  }
  else if (((((*pbVar1 & 0xdf) == 0x47) && ((pbVar1[1] & 0xdf) == 0x42)) && (pbVar1[2] == 0x31)) &&
          (((pbVar1[3] == 0x38 && (pbVar1[4] == 0x30)) &&
           ((pbVar1[5] == 0x33 && ((pbVar1[6] == 0x30 && (pbVar1[7] == 0)))))))) {
    puVar2 = &_LC1;
    if (*param_1 == '`') {
      puVar2 = &_LC4;
    }
    return puVar2;
  }
  puVar2 = &_LC3;
  if (param_2 == 9) {
    puVar2 = &_LC2;
  }
  return puVar2;
}



/* WARNING: Type propagation algorithm not settling */

ulong quotearg_buffer_restyled
                (undefined1 *param_1,ulong param_2,char *param_3,ulong param_4,int param_5,
                uint param_6,long param_7,char *param_8,char *param_9)

{
  byte *__s1;
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  size_t sVar10;
  ushort **ppuVar11;
  ulong uVar12;
  ulong uVar13;
  char cVar14;
  byte *pbVar15;
  ulong uVar16;
  byte bVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  long in_FS_OFFSET;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  int local_dc;
  ulong local_c0;
  long local_b8;
  char *local_90;
  ulong local_88;
  bool local_7d;
  uint local_7c;
  char *local_68;
  char *local_60;
  wint_t local_4c;
  undefined8 local_48;
  long local_40;
  
  local_b8 = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_8;
  local_68 = param_9;
  local_dc = param_5;
  local_7c = param_6;
LAB_00100160:
  sVar10 = __ctype_get_mb_cur_max();
  uVar18 = local_7c & 2;
  bVar21 = uVar18 != 0;
  switch(local_dc) {
  case 0:
    bVar7 = true;
    uVar16 = 0;
    local_7d = false;
    local_88 = 0;
    bVar21 = false;
    bVar3 = false;
    local_c0 = 0;
    local_90 = (char *)0x0;
    break;
  case 1:
    bVar3 = false;
    goto LAB_00100a32;
  case 2:
    bVar7 = true;
    uVar20 = 0;
    bVar3 = false;
    local_7d = false;
    local_88 = param_2;
    goto LAB_001011ec;
  case 3:
    bVar3 = true;
    goto LAB_00100a32;
  case 4:
    bVar7 = true;
    local_7d = false;
    local_88 = 0;
    if (uVar18 == 0) {
      bVar3 = true;
      goto LAB_0010089a;
    }
    bVar3 = false;
LAB_00100a32:
    bVar7 = true;
    local_7d = false;
    bVar21 = true;
    local_88 = 0;
    local_dc = 2;
    uVar16 = 0;
    local_c0 = 1;
    local_90 = "\'";
    break;
  case 5:
    if (uVar18 == 0) {
      if (param_2 != 0) {
        *param_1 = 0x22;
      }
      bVar7 = true;
      local_7d = false;
      local_88 = 0;
      bVar21 = false;
      uVar16 = 1;
      bVar3 = true;
      local_c0 = 1;
      local_90 = "\"";
    }
    else {
      bVar7 = true;
      uVar16 = 0;
      local_7d = false;
      local_88 = 0;
      bVar21 = true;
      bVar3 = true;
      local_c0 = 1;
      local_90 = "\"";
    }
    break;
  case 6:
    bVar7 = true;
    uVar16 = 0;
    local_7d = false;
    local_88 = 0;
    bVar21 = true;
    bVar3 = true;
    local_c0 = 1;
    local_90 = "\"";
    local_dc = 5;
    break;
  case 7:
    bVar7 = true;
    uVar16 = 0;
    local_7d = false;
    local_88 = 0;
    bVar21 = false;
    bVar3 = true;
    local_c0 = 0;
    local_90 = (char *)0x0;
    break;
  case 8:
  case 9:
  case 10:
    if (local_dc != 10) {
      local_60 = (char *)dcgettext("gnulib",&_LC6,5);
      if (local_60 == "`") {
        local_60 = (char *)gettext_quote_part_0(&_LC6,local_dc);
      }
      local_68 = (char *)dcgettext("gnulib",&_LC3,5);
      if (local_68 == "\'") {
        local_68 = (char *)gettext_quote_part_0(&_LC3,local_dc);
      }
    }
    uVar16 = 0;
    if (uVar18 == 0) {
      cVar14 = *local_60;
      while (cVar14 != '\0') {
        if (uVar16 < param_2) {
          param_1[uVar16] = cVar14;
        }
        uVar16 = uVar16 + 1;
        cVar14 = local_60[uVar16];
      }
    }
    local_c0 = strlen(local_68);
    local_90 = local_68;
    bVar7 = true;
    local_7d = false;
    local_88 = 0;
    bVar3 = true;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
LAB_00100290:
  bVar26 = false;
  uVar20 = 0;
  bVar1 = local_7d;
LAB_001002a0:
  bVar22 = param_4 != uVar20;
  if (param_4 == 0xffffffffffffffff) {
    bVar22 = param_3[uVar20] != '\0';
  }
  bVar24 = bVar3;
  if (!bVar22) goto LAB_00101094;
  bVar4 = (bool)(local_dc != 2 & bVar3);
  __s1 = (byte *)(param_3 + uVar20);
  bVar5 = (bool)(local_c0 != 0 & bVar4);
  iVar9 = local_dc;
  bVar2 = bVar26;
  if (!bVar5) {
    bVar17 = *__s1;
    uVar19 = (ulong)bVar17;
    if ('?' < (char)bVar17) {
      if ('z' < (char)bVar17) {
        if (bVar17 != 0x7d) {
          if ('}' < (char)bVar17) {
            if (bVar17 == 0x7e) goto LAB_00100824;
            uVar19 = 0x7f;
            goto switchD_0010032d_caseD_1;
          }
          if (bVar17 != 0x7b) {
            bVar22 = false;
            uVar19 = 0x7c;
            goto LAB_00100613;
          }
        }
LAB_00100ebe:
        bVar25 = param_4 != 1;
        if (param_4 == 0xffffffffffffffff) {
          bVar25 = param_3[1] != '\0';
        }
        if (bVar25) goto switchD_00100b4a_caseD_21;
        goto LAB_00100824;
      }
      if (bVar17 == 0x40) goto switchD_0010032d_caseD_1;
      uVar13 = 1L << (bVar17 + 0xbf & 0x3f);
      if ((uVar13 & 0x3ffffff53ffffff) != 0) goto switchD_0010032d_caseD_25;
      if ((uVar13 & 0xa4000000) != 0) goto switchD_0010032d_caseD_21;
      if (local_dc == 2) {
        if (bVar21) goto LAB_00100636;
      }
      else {
LAB_00100f25:
        bVar5 = (bool)(bVar3 & bVar21);
        if (!bVar5) goto LAB_0010117d;
        if (local_c0 == 0) goto LAB_00100646;
      }
      uVar20 = uVar20 + 1;
      bVar22 = false;
      bVar17 = 0x5c;
      goto LAB_0010043b;
    }
    switch(uVar19) {
    case 0:
      if (bVar3) {
switchD_00100c97_caseD_0:
        if (!bVar21) {
          bVar24 = (bool)(local_dc == 2 & (bVar26 ^ 1U));
          bVar5 = bVar24;
          if (bVar24) {
            if (uVar16 < param_2) {
              param_1[uVar16] = 0x27;
            }
            if (uVar16 + 1 < param_2) {
              param_1[uVar16 + 1] = 0x24;
            }
            if (uVar16 + 2 < param_2) {
              param_1[uVar16 + 2] = 0x27;
            }
            if (uVar16 + 3 < param_2) {
              param_1[uVar16 + 3] = 0x5c;
            }
            uVar16 = uVar16 + 4;
            bVar22 = false;
            bVar17 = 0x30;
            bVar2 = bVar24;
            goto LAB_00100431;
          }
LAB_00100bf8:
          uVar13 = uVar16 + 1;
          if (uVar16 < param_2) {
            param_1[uVar16] = 0x5c;
          }
          if (!bVar4) {
            bVar17 = 0x30;
            uVar16 = uVar13;
            bVar24 = bVar22;
            bVar6 = bVar5;
            bVar5 = false;
            goto LAB_00100420;
          }
          if ((uVar20 + 1 < param_4) && ((byte)(param_3[uVar20 + 1] - 0x30U) < 10)) {
            if (uVar13 < param_2) {
              param_1[uVar13] = 0x30;
            }
            if (uVar16 + 2 < param_2) {
              param_1[uVar16 + 2] = 0x30;
            }
            uVar13 = uVar16 + 3;
          }
          bVar25 = false;
          uVar19 = 0x30;
          bVar23 = bVar5;
          goto LAB_00100365;
        }
        iVar9 = 4;
        if (local_dc != 2) {
          iVar9 = local_dc;
        }
        goto LAB_00100646;
      }
      if ((local_7c & 1) == 0) {
        uVar19 = 0;
        bVar17 = 0;
        bVar23 = false;
        bVar25 = false;
        if ((bool)(bVar4 | bVar21)) goto LAB_00100363;
        bVar24 = false;
        bVar6 = false;
        bVar5 = false;
        goto LAB_00100420;
      }
      uVar20 = uVar20 + 1;
      goto LAB_001002a0;
    default:
switchD_0010032d_caseD_1:
      bVar6 = bVar3;
      if (sVar10 == 1) {
        ppuVar11 = __ctype_b_loc();
        uVar13 = 1;
        bVar24 = (*(byte *)((long)*ppuVar11 + uVar19 * 2 + 1) & 0x40) == 0;
        bVar22 = !bVar24;
        bVar24 = (bool)(bVar24 & bVar3);
        goto LAB_001004ca;
      }
      local_48 = 0;
      if (param_4 == 0xffffffffffffffff) {
        param_4 = strlen(param_3);
      }
      uVar13 = rpl_mbrtoc32(&local_4c,__s1,param_4 - uVar20,&local_48);
      if (uVar13 == 0) goto switchD_0010032d_caseD_25;
      if (uVar13 == 0xffffffffffffffff) {
        bVar22 = false;
        uVar13 = 0;
LAB_001004ca:
        if (!bVar24) goto switchD_0010032d_caseD_25;
      }
      else {
        if (uVar13 == 0xfffffffffffffffe) {
          uVar13 = 0;
          if (uVar20 < param_4) {
            do {
              if (__s1[uVar13] == 0) break;
              uVar13 = uVar13 + 1;
            } while (param_4 - uVar20 != uVar13);
            goto LAB_0010133f;
          }
          bVar22 = false;
          goto LAB_001004ca;
        }
        bVar25 = (bool)(local_dc == 2 & bVar21);
        if (!bVar25) {
          iVar9 = iswprint(local_4c);
          if (iVar9 != 0) {
            if (uVar13 != 1) {
              bVar6 = false;
              goto LAB_001004da;
            }
            goto switchD_0010032d_caseD_25;
          }
LAB_0010133f:
          bVar22 = false;
          if (1 < uVar13) goto LAB_001004da;
          goto LAB_001004ca;
        }
        if (uVar13 == 1) {
          iVar9 = iswprint(local_4c);
          bVar23 = bVar5;
          if (iVar9 != 0) goto LAB_00100363;
          bVar22 = false;
          goto LAB_001004ca;
        }
        pbVar15 = (byte *)(param_3 + uVar20 + 1);
        do {
          while (0x21 < (byte)(*pbVar15 - 0x5b)) {
            pbVar15 = pbVar15 + 1;
            if (__s1 + uVar13 == pbVar15) goto LAB_00101419;
          }
          if ((0x20000002bU >> ((ulong)(*pbVar15 - 0x5b) & 0x3f) & 1) != 0) goto LAB_00100629;
          pbVar15 = pbVar15 + 1;
        } while (__s1 + uVar13 != pbVar15);
LAB_00101419:
        iVar9 = iswprint(local_4c);
        if (iVar9 != 0) {
          bVar6 = false;
          goto LAB_001004da;
        }
      }
      bVar22 = false;
LAB_001004da:
      uVar13 = uVar13 + uVar20;
      bVar24 = false;
      uVar12 = uVar20;
      do {
        bVar17 = (byte)uVar19;
        if (bVar6) {
          bVar24 = local_dc == 2;
          if (bVar21) goto LAB_00100636;
          bVar26 = (bool)((bVar2 ^ 1U) & local_dc == 2);
          if (bVar26) {
            if (uVar16 < param_2) {
              param_1[uVar16] = 0x27;
            }
            if (uVar16 + 1 < param_2) {
              param_1[uVar16 + 1] = 0x24;
            }
            if (uVar16 + 2 < param_2) {
              param_1[uVar16 + 2] = 0x27;
            }
            uVar16 = uVar16 + 3;
            bVar2 = bVar26;
          }
          if (uVar16 < param_2) {
            param_1[uVar16] = 0x5c;
          }
          if (uVar16 + 1 < param_2) {
            param_1[uVar16 + 1] = (char)(uVar19 >> 6) + '0';
          }
          if (uVar16 + 2 < param_2) {
            param_1[uVar16 + 2] = ((byte)(uVar19 >> 3) & 7) + 0x30;
          }
          uVar20 = uVar12 + 1;
          uVar16 = uVar16 + 3;
          bVar17 = (bVar17 & 7) + 0x30;
          bVar24 = bVar6;
          if (uVar13 <= uVar20) goto LAB_001003e8;
        }
        else {
          bVar26 = (bool)((bVar24 ^ 1U) & bVar2);
          if (bVar5) {
            if (uVar16 < param_2) {
              param_1[uVar16] = 0x5c;
            }
            uVar16 = uVar16 + 1;
          }
          uVar20 = uVar12 + 1;
          if (uVar13 <= uVar20) goto LAB_0010043b;
          if (bVar26) {
            if (uVar16 < param_2) {
              param_1[uVar16] = 0x27;
            }
            if (uVar16 + 1 < param_2) {
              param_1[uVar16 + 1] = 0x27;
            }
            uVar16 = uVar16 + 2;
            bVar5 = false;
            bVar2 = false;
          }
          else {
            bVar5 = false;
          }
        }
        uVar12 = uVar12 + 1;
        if (uVar16 < param_2) {
          param_1[uVar16] = bVar17;
        }
        uVar19 = (ulong)(byte)param_3[uVar12];
        uVar16 = uVar16 + 1;
      } while( true );
    case 7:
      bVar23 = local_dc == 2;
      uVar19 = 7;
      bVar17 = 0x61;
      break;
    case 8:
      bVar23 = local_dc == 2;
      uVar19 = 8;
      bVar17 = 0x62;
      break;
    case 9:
      uVar19 = 9;
      bVar17 = 0x74;
      goto LAB_00100846;
    case 10:
      uVar19 = 10;
      bVar17 = 0x6e;
      goto LAB_00100846;
    case 0xb:
      bVar23 = local_dc == 2;
      uVar19 = 0xb;
      bVar17 = 0x76;
      break;
    case 0xc:
      bVar23 = local_dc == 2;
      uVar19 = 0xc;
      bVar17 = 0x66;
      break;
    case 0xd:
      uVar19 = 0xd;
      bVar17 = 0x72;
LAB_00100846:
      bVar23 = local_dc == 2;
      bVar5 = (bool)(bVar21 & bVar23);
      if (bVar5) goto LAB_00100629;
      break;
    case 0x20:
      uVar19 = 0x20;
      goto LAB_00100613;
    case 0x21:
    case 0x22:
    case 0x24:
    case 0x26:
    case 0x28:
    case 0x29:
    case 0x2a:
    case 0x3b:
    case 0x3c:
    case 0x3d:
    case 0x3e:
switchD_0010032d_caseD_21:
      bVar22 = false;
      goto LAB_00100613;
    case 0x23:
switchD_0010032d_caseD_23:
      uVar19 = 0x23;
LAB_00100824:
      if (uVar20 != 0) goto switchD_00100b4a_caseD_21;
LAB_00100613:
      if ((local_dc != 2) || (!bVar21)) goto switchD_0010032d_caseD_25;
      goto LAB_00100629;
    case 0x25:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
      goto switchD_0010032d_caseD_25;
    case 0x27:
      uVar19 = 0x27;
      bVar1 = bVar22;
      if (local_dc != 2) goto switchD_0010032d_caseD_25;
      if (!bVar21) {
        if ((param_2 == 0) || (uVar13 = 0, uVar19 = param_2, local_88 != 0)) {
          if (uVar16 < param_2) {
            param_1[uVar16] = 0x27;
          }
          if (uVar16 + 1 < param_2) {
            param_1[uVar16 + 1] = 0x5c;
          }
          uVar13 = param_2;
          uVar19 = local_88;
          if (uVar16 + 2 < param_2) {
            param_1[uVar16 + 2] = 0x27;
          }
        }
        uVar16 = uVar16 + 3;
        bVar24 = false;
        bVar17 = 0x27;
        param_2 = uVar13;
        local_88 = uVar19;
        bVar2 = false;
        goto LAB_00100431;
      }
      goto LAB_00100636;
    case 0x3f:
      if (local_dc == 2) {
        if (!bVar21) {
          bVar22 = false;
          bVar24 = false;
          bVar17 = 0x3f;
          goto LAB_00100431;
        }
        goto LAB_00100636;
      }
switchD_00100b4a_caseD_3f:
joined_r0x00100d68:
      bVar23 = bVar5;
      bVar6 = bVar5;
      if ((local_dc != 5) || ((local_7c & 4) == 0)) {
        uVar19 = 0x3f;
        bVar17 = 0x3f;
        bVar25 = false;
        if ((bool)(bVar4 | bVar21)) goto LAB_00100363;
        bVar24 = false;
        bVar5 = false;
        goto LAB_00100420;
      }
      uVar13 = uVar20 + 2;
      bVar22 = false;
      uVar19 = 0x3f;
      if ((param_4 <= uVar13) || (param_3[uVar20 + 1] != '?')) goto switchD_0010032d_caseD_25;
      bVar17 = param_3[uVar13];
      uVar19 = (ulong)bVar17;
      if ((bVar17 < 0x3f) && (bVar22 = (0x7000a38200000000U >> (uVar19 & 0x3f) & 1) != 0, bVar22)) {
        if (!bVar21) {
          if (uVar16 < param_2) {
            param_1[uVar16] = 0x3f;
          }
          if (uVar16 + 1 < param_2) {
            param_1[uVar16 + 1] = 0x22;
          }
          if (uVar16 + 2 < param_2) {
            param_1[uVar16 + 2] = 0x22;
          }
          if (uVar16 + 3 < param_2) {
            param_1[uVar16 + 3] = 0x3f;
          }
          uVar16 = uVar16 + 4;
          uVar20 = uVar13;
          bVar25 = false;
          if (bVar4) goto LAB_00100363;
          bVar24 = false;
          bVar5 = false;
          goto LAB_00100420;
        }
        goto LAB_00100646;
      }
      uVar19 = 0x3f;
      bVar17 = 0x3f;
      bVar25 = bVar22;
      if ((bool)(bVar4 | bVar21)) goto LAB_00100363;
      bVar24 = false;
      bVar5 = bVar22;
LAB_00100420:
      bVar22 = bVar5;
      bVar23 = local_dc == 2;
      if (bVar6) goto joined_r0x001007b2;
LAB_00100431:
      uVar20 = uVar20 + 1;
      bVar26 = (bool)((bVar24 ^ 1U) & bVar2);
LAB_0010043b:
      if (bVar26) {
        if (uVar16 < param_2) {
          param_1[uVar16] = 0x27;
        }
        if (uVar16 + 1 < param_2) {
          param_1[uVar16 + 1] = 0x27;
        }
        uVar16 = uVar16 + 2;
        bVar2 = false;
      }
      goto LAB_001003e8;
    }
joined_r0x0010079e:
    if (!bVar3) {
switchD_00100b4a_caseD_21:
      bVar22 = false;
switchD_0010032d_caseD_25:
      bVar17 = (byte)uVar19;
      bVar24 = (bool)(bVar4 | bVar21);
      bVar23 = bVar5;
      bVar6 = bVar5;
      bVar5 = bVar22;
      bVar25 = bVar22;
      if ((bool)(bVar4 | bVar21)) {
LAB_00100363:
        bVar22 = false;
        uVar13 = uVar16;
LAB_00100365:
        bVar17 = (byte)uVar19;
        uVar16 = uVar13;
        bVar24 = bVar22;
        bVar6 = bVar23;
        bVar5 = bVar25;
        if ((local_b8 != 0) &&
           ((*(uint *)(local_b8 + (uVar19 >> 5) * 4) >> (bVar17 & 0x1f) & 1) != 0)) {
          bVar23 = local_dc == 2;
          bVar22 = bVar25;
          goto joined_r0x001007b2;
        }
      }
      goto LAB_00100420;
    }
    bVar22 = false;
    goto joined_r0x001007b2;
  }
  if ((param_4 == 0xffffffffffffffff) && (1 < local_c0)) {
    param_4 = strlen(param_3);
  }
  uVar13 = uVar16;
  bVar25 = bVar5;
  if ((uVar20 + local_c0 <= param_4) && (iVar8 = memcmp(__s1,local_90,local_c0), iVar8 == 0)) {
    if (!bVar21) {
      bVar17 = *__s1;
      uVar19 = (ulong)bVar17;
      bVar23 = bVar5;
      if ('?' < (char)bVar17) {
        if ('z' < (char)bVar17) {
          if (bVar17 != 0x7d) {
            if ('}' < (char)bVar17) {
              if (bVar17 == 0x7e) {
LAB_001012cb:
                if (uVar20 == 0) {
                  uVar19 = 0x7e;
                  bVar17 = 0x7e;
                  if ((bool)(bVar4 | bVar21)) goto LAB_00100363;
                  bVar24 = false;
                  bVar6 = bVar23;
                  goto LAB_00100420;
                }
                bVar25 = false;
                bVar22 = false;
                uVar19 = 0x7e;
                goto LAB_00100365;
              }
              uVar19 = 0x7f;
              goto switchD_0010032d_caseD_1;
            }
            if (bVar17 != 0x7b) {
              uVar19 = 0x7c;
              goto switchD_00100b4a_caseD_21;
            }
          }
          goto LAB_00100ebe;
        }
        if (bVar17 == 0x40) goto switchD_0010032d_caseD_1;
        uVar12 = 1L << (bVar17 + 0xbf & 0x3f);
        if ((uVar12 & 0x3ffffff53ffffff) != 0) {
LAB_0010128e:
          bVar22 = false;
          goto LAB_00100365;
        }
        if ((uVar12 & 0xa4000000) != 0) goto switchD_00100b4a_caseD_21;
LAB_0010117d:
        if (!bVar3) goto switchD_00100b4a_caseD_21;
        bVar22 = false;
        bVar17 = 0x5c;
        goto LAB_001003d6;
      }
      bVar6 = bVar5;
      switch(uVar19) {
      case 0:
        goto LAB_00100bf8;
      default:
        goto switchD_0010032d_caseD_1;
      case 7:
        bVar23 = false;
        bVar22 = false;
        bVar17 = 0x61;
        break;
      case 8:
        bVar23 = false;
        bVar22 = false;
        bVar17 = 0x62;
        break;
      case 9:
        bVar23 = false;
        uVar19 = 9;
        bVar17 = 0x74;
        goto joined_r0x0010079e;
      case 10:
        bVar23 = false;
        uVar19 = 10;
        bVar17 = 0x6e;
        goto joined_r0x0010079e;
      case 0xb:
        bVar23 = false;
        bVar22 = false;
        bVar17 = 0x76;
        break;
      case 0xc:
        bVar23 = false;
        bVar22 = false;
        bVar17 = 0x66;
        break;
      case 0xd:
        bVar23 = false;
        uVar19 = 0xd;
        bVar17 = 0x72;
        goto joined_r0x0010079e;
      case 0x20:
        uVar19 = 0x20;
        bVar17 = 0x20;
        if (!bVar4) {
          bVar24 = false;
          goto LAB_00100420;
        }
        goto LAB_00100363;
      case 0x21:
      case 0x22:
      case 0x24:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
        goto switchD_00100b4a_caseD_21;
      case 0x23:
        goto switchD_0010032d_caseD_23;
      case 0x25:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3a:
        if (bVar4) goto LAB_00100363;
        bVar24 = false;
        goto LAB_00100420;
      case 0x27:
        uVar19 = 0x27;
        bVar17 = 0x27;
        bVar1 = bVar5;
        if (bVar4) goto LAB_00100363;
        bVar24 = false;
        goto LAB_00100420;
      case 0x3f:
        goto switchD_00100b4a_caseD_3f;
      }
      goto LAB_0010039d;
    }
    goto LAB_00100646;
  }
  bVar17 = *__s1;
  uVar19 = (ulong)bVar17;
  if ('?' < (char)bVar17) {
    if ('z' < (char)bVar17) {
      if (bVar17 == 0x7d) {
        bVar5 = false;
      }
      else {
        if ('}' < (char)bVar17) {
          bVar23 = false;
          if (bVar17 == 0x7e) goto LAB_001012cb;
          uVar19 = 0x7f;
          bVar5 = false;
          goto switchD_0010032d_caseD_1;
        }
        bVar5 = false;
        if (bVar17 != 0x7b) {
          uVar19 = 0x7c;
          goto switchD_00100b4a_caseD_21;
        }
      }
      goto LAB_00100ebe;
    }
    if (bVar17 != 0x40) {
      uVar12 = 1L << (bVar17 + 0xbf & 0x3f);
      if ((uVar12 & 0x3ffffff53ffffff) != 0) {
        bVar23 = false;
        goto LAB_0010128e;
      }
      if ((uVar12 & 0xa4000000) == 0) goto LAB_00100f25;
      bVar5 = false;
      goto switchD_00100b4a_caseD_21;
    }
switchD_00100c97_caseD_1:
    bVar5 = false;
    goto switchD_0010032d_caseD_1;
  }
  switch(uVar19) {
  case 0:
    goto switchD_00100c97_caseD_0;
  default:
    goto switchD_00100c97_caseD_1;
  case 7:
    bVar23 = false;
    bVar22 = false;
    bVar17 = 0x61;
    break;
  case 8:
    bVar23 = false;
    bVar22 = false;
    bVar17 = 0x62;
    break;
  case 9:
    bVar23 = false;
    uVar19 = 9;
    bVar5 = false;
    bVar17 = 0x74;
    goto joined_r0x0010079e;
  case 10:
    bVar23 = false;
    uVar19 = 10;
    bVar5 = false;
    bVar17 = 0x6e;
    goto joined_r0x0010079e;
  case 0xb:
    bVar23 = false;
    bVar22 = false;
    bVar17 = 0x76;
    break;
  case 0xc:
    bVar23 = false;
    bVar22 = false;
    bVar17 = 0x66;
    break;
  case 0xd:
    bVar23 = false;
    uVar19 = 0xd;
    bVar5 = false;
    bVar17 = 0x72;
    goto joined_r0x0010079e;
  case 0x20:
    uVar19 = 0x20;
    bVar17 = 0x20;
    bVar6 = false;
    bVar23 = false;
    if ((bool)(bVar4 | bVar21)) goto LAB_00100363;
    bVar24 = false;
    goto LAB_00100420;
  case 0x21:
  case 0x22:
  case 0x24:
  case 0x26:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
    bVar6 = false;
    bVar23 = false;
    bVar25 = false;
    if ((bool)(bVar4 | bVar21)) goto LAB_00100363;
    bVar24 = false;
    bVar5 = false;
    goto LAB_00100420;
  case 0x23:
    uVar19 = 0x23;
    bVar5 = false;
    goto LAB_00100824;
  case 0x25:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
    bVar6 = false;
    bVar23 = false;
    if ((bool)(bVar4 | bVar21)) goto LAB_00100363;
    bVar24 = false;
    goto LAB_00100420;
  case 0x27:
    uVar19 = 0x27;
    bVar17 = 0x27;
    bVar6 = false;
    bVar23 = false;
    bVar1 = bVar5;
    if ((bool)(bVar4 | bVar21)) goto LAB_00100363;
    bVar24 = false;
    goto LAB_00100420;
  case 0x3f:
    bVar5 = false;
    goto joined_r0x00100d68;
  }
joined_r0x001007b2:
  if (bVar21) {
    bVar24 = (bool)(bVar23 & bVar3);
    goto LAB_00100636;
  }
LAB_0010039d:
  bVar23 = (bool)((bVar26 ^ 1U) & bVar23);
  if (bVar23) {
    if (uVar16 < param_2) {
      param_1[uVar16] = 0x27;
    }
    if (uVar16 + 1 < param_2) {
      param_1[uVar16 + 1] = 0x24;
    }
    if (uVar16 + 2 < param_2) {
      param_1[uVar16 + 2] = 0x27;
    }
    uVar16 = uVar16 + 3;
    bVar26 = bVar23;
  }
LAB_001003d6:
  if (uVar16 < param_2) {
    param_1[uVar16] = 0x5c;
  }
  uVar16 = uVar16 + 1;
  uVar20 = uVar20 + 1;
  bVar2 = bVar26;
LAB_001003e8:
  bVar26 = bVar2;
  if (uVar16 < param_2) {
    param_1[uVar16] = bVar17;
  }
  uVar16 = uVar16 + 1;
  if (!bVar22) {
    bVar7 = false;
  }
  goto LAB_001002a0;
LAB_001015f9:
  local_dc = 5;
  param_2 = local_88;
  goto LAB_00100160;
LAB_00101094:
  bVar26 = local_dc == 2;
  bVar22 = uVar16 == 0;
  if (bVar22 && bVar26) {
    if (bVar21) {
LAB_00100629:
      local_dc = 2;
LAB_00100636:
      iVar9 = 4;
      if (!bVar24) {
        iVar9 = local_dc;
      }
LAB_00100646:
      local_dc = iVar9;
      local_7c = local_7c & 0xfffffffd;
      local_b8 = 0;
      goto LAB_00100160;
    }
    if (bVar1) {
      if (bVar7) goto LAB_001015f9;
      local_7d = local_88 != 0 && param_2 == 0;
      uVar20 = local_88;
      uVar13 = local_88;
      if (local_88 != 0 && param_2 == 0) {
LAB_001008d9:
        local_88 = uVar13;
        uVar16 = 1;
        *param_1 = 0x27;
        bVar21 = false;
        local_c0 = 1;
        local_90 = "\'";
        local_dc = 2;
        param_2 = local_88;
        local_88 = uVar20;
        goto LAB_00100290;
      }
      uVar16 = 0;
      bVar21 = bVar1;
    }
    else {
      uVar16 = 0;
      bVar21 = bVar22 && bVar26;
    }
  }
  else {
    bVar26 = (bool)(bVar26 & (bVar21 ^ 1U));
    bVar21 = (bool)(bVar21 ^ 1U);
    if ((bVar26) && (bVar21 = bVar26, bVar1)) {
      if (bVar7) goto LAB_001015f9;
      local_7d = param_2 == 0 && local_88 != 0;
      bVar21 = bVar1;
      if (param_2 == 0 && local_88 != 0) {
        uVar20 = local_88;
        bVar21 = bVar7;
        bVar7 = false;
LAB_001011ec:
        uVar16 = 0;
        local_dc = 2;
        local_90 = "\'";
        local_c0 = 1;
        param_2 = local_88;
        local_88 = uVar20;
        if (bVar21) goto LAB_00100290;
LAB_0010089a:
        bVar21 = false;
        uVar16 = 1;
        local_dc = 2;
        local_90 = "\'";
        local_c0 = 1;
        uVar20 = local_88;
        uVar13 = param_2;
        if (param_2 == 0) goto LAB_00100290;
        goto LAB_001008d9;
      }
    }
  }
  uVar20 = uVar16;
  if (((local_90 != (char *)0x0) && (bVar21)) && (cVar14 = *local_90, cVar14 != '\0')) {
    do {
      if (uVar20 < param_2) {
        param_1[uVar20] = cVar14;
      }
      uVar20 = uVar20 + 1;
      cVar14 = local_90[uVar20 - uVar16];
    } while (cVar14 != '\0');
  }
  if (uVar20 < param_2) {
    param_1[uVar20] = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar20;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 *
quotearg_n_options(uint param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  ulong *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined1 *__ptr;
  long lVar10;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar7 = __errno_location();
  iVar2 = *piVar7;
  if (0x7ffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar8 = (undefined8 *)slotvec;
  if (nslots <= (int)param_1) {
    local_48 = (long)nslots;
    lVar10 = (long)(int)((param_1 - nslots) + 1);
    if (slotvec == slotvec0) {
      puVar8 = (undefined8 *)xpalloc(0,&local_48,lVar10,0x7fffffff,0x10);
      uVar6 = slotvec0._8_8_;
      slotvec = (undefined *)puVar8;
      *puVar8 = slotvec0._0_8_;
      puVar8[1] = uVar6;
    }
    else {
      puVar8 = (undefined8 *)xpalloc(slotvec,&local_48,lVar10,0x7fffffff,0x10);
      slotvec = (undefined *)puVar8;
    }
    memset(puVar8 + (long)nslots * 2,0,(local_48 - nslots) * 0x10);
    nslots = (int)local_48;
  }
  uVar3 = param_4[1];
  puVar1 = puVar8 + (long)(int)param_1 * 2;
  uVar5 = *puVar1;
  __ptr = (undefined1 *)puVar1[1];
  uVar9 = quotearg_buffer_restyled
                    (__ptr,uVar5,param_2,param_3,*param_4,uVar3 | 1,param_4 + 2,
                     *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  if (uVar5 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar1 = uVar9;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar9);
    uVar4 = *param_4;
    puVar1[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar9,param_2,param_3,uVar4,uVar3 | 1,param_4 + 2,*(undefined8 *)(param_4 + 10)
               ,*(undefined8 *)(param_4 + 0xc));
  }
  *piVar7 = iVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void clone_quoting_options(undefined1 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined1 *)0x0) {
    param_1 = default_quoting_options;
  }
  xmemdup(param_1,0x38);
  *piVar2 = iVar1;
  return;
}



undefined4 get_quoting_style(undefined1 *param_1)

{
  if ((undefined4 *)param_1 == (undefined4 *)0x0) {
    param_1 = default_quoting_options;
  }
  return *(undefined4 *)param_1;
}



void set_quoting_style(undefined1 *param_1,undefined4 param_2)

{
  if ((undefined4 *)param_1 == (undefined4 *)0x0) {
    param_1 = default_quoting_options;
  }
  *(undefined4 *)param_1 = param_2;
  return;
}



void set_char_quoting(undefined1 *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    param_1 = default_quoting_options;
  }
  uVar1 = *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8);
  *(uint *)(param_1 + (ulong)(param_2 >> 5) * 4 + 8) =
       (param_3 & 1 ^ uVar1 >> (param_2 & 0x1f) & 1) << (param_2 & 0x1f) ^ uVar1;
  return;
}



undefined4 set_quoting_flags(undefined1 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined1 *)0x0) {
    param_1 = default_quoting_options;
  }
  uVar1 = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 4) = param_2;
  return uVar1;
}



void set_custom_quoting(undefined1 *param_1,long param_2,long param_3)

{
  if ((undefined4 *)param_1 == (undefined4 *)0x0) {
    param_1 = default_quoting_options;
  }
  *(undefined4 *)param_1 = 10;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(long *)((long)param_1 + 0x28) = param_2;
    *(long *)((long)param_1 + 0x30) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void quotearg_buffer(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined1 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if ((undefined4 *)param_5 == (undefined4 *)0x0) {
    param_5 = default_quoting_options;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  quotearg_buffer_restyled
            (param_1,param_2,param_3,param_4,*(undefined4 *)param_5,
             *(undefined4 *)((long)param_5 + 4),(undefined4 *)((long)param_5 + 8),
             *(undefined8 *)((long)param_5 + 0x28),*(undefined8 *)((long)param_5 + 0x30));
  *piVar2 = iVar1;
  return;
}



undefined8
quotearg_alloc_mem(undefined8 param_1,undefined8 param_2,long *param_3,undefined1 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if ((undefined4 *)param_4 == (undefined4 *)0x0) {
    param_4 = default_quoting_options;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | *(uint *)((long)param_4 + 4);
  lVar3 = quotearg_buffer_restyled
                    (0,0,param_1,param_2,*(undefined4 *)param_4,uVar5,
                     (undefined4 *)((long)param_4 + 8),*(undefined8 *)((long)param_4 + 0x28),
                     *(undefined8 *)((long)param_4 + 0x30));
  uVar4 = xcharalloc(lVar3 + 1);
  quotearg_buffer_restyled
            (uVar4,lVar3 + 1,param_1,param_2,*(undefined4 *)param_4,uVar5,
             (undefined4 *)((long)param_4 + 8),*(undefined8 *)((long)param_4 + 0x28),
             *(undefined8 *)((long)param_4 + 0x30));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
}



void quotearg_alloc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  quotearg_alloc_mem(param_1,param_2,0,param_3);
  return;
}



void quotearg_free(void)

{
  undefined8 *puVar1;
  void *__ptr;
  undefined *__ptr_00;
  undefined8 *puVar2;
  
  __ptr_00 = slotvec;
  if (1 < nslots) {
    puVar2 = (undefined8 *)(slotvec + 0x18);
    puVar1 = (undefined8 *)(slotvec + (ulong)(nslots - 2) * 0x10 + 0x28);
    do {
      __ptr = (void *)*puVar2;
      puVar2 = puVar2 + 2;
      free(__ptr);
    } while (puVar2 != puVar1);
  }
  if (*(undefined1 **)(__ptr_00 + 8) != slot0) {
    free(*(undefined1 **)(__ptr_00 + 8));
    slotvec0._8_8_ = slot0;
    slotvec0._0_8_ = 0x100;
  }
  if (__ptr_00 != slotvec0) {
    free(__ptr_00);
    slotvec = slotvec0;
  }
  nslots = 1;
  return;
}



void quotearg_n(undefined8 param_1,undefined8 param_2)

{
  quotearg_n_options(param_1,param_2,0xffffffffffffffff,default_quoting_options);
  return;
}



void quotearg_n_mem(void)

{
  quotearg_n_options();
  return;
}



void quotearg(undefined8 param_1)

{
  quotearg_n_options(0,param_1,0xffffffffffffffff,default_quoting_options);
  return;
}



void quotearg_mem(undefined8 param_1,undefined8 param_2)

{
  quotearg_n_options(0,param_1,param_2,default_quoting_options);
  return;
}



void quotearg_n_style(undefined8 param_1,int param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  int local_48 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  local_48[1] = 0;
  local_20 = (undefined1  [16])0x0;
  local_48[0] = param_2;
  quotearg_n_options(param_1,param_3,0xffffffffffffffff,local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quotearg_n_style_mem(undefined8 param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  int local_48 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  local_48[1] = 0;
  local_20 = (undefined1  [16])0x0;
  local_48[0] = param_2;
  quotearg_n_options(param_1,param_3,param_4,local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quotearg_style(int param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  int local_48 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  local_48[1] = 0;
  local_20 = (undefined1  [16])0x0;
  local_48[0] = param_1;
  quotearg_n_options(0,param_2,0xffffffffffffffff,local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quotearg_style_mem(int param_1,undefined8 param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  int local_48 [2];
  undefined1 local_40 [16];
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_40 = (undefined1  [16])0x0;
  local_30 = (undefined1  [16])0x0;
  local_48[1] = 0;
  local_20 = (undefined1  [16])0x0;
  local_48[0] = param_1;
  quotearg_n_options(0,param_2,param_3,local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quotearg_char_mem(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  uint auStack_40 [12];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = default_quoting_options._0_8_;
  auStack_40._0_8_ = default_quoting_options._8_8_;
  auStack_40._40_8_ = default_quoting_options._48_8_;
  auStack_40._8_8_ = default_quoting_options._16_8_;
  auStack_40._16_8_ = default_quoting_options._24_8_;
  auStack_40._24_8_ = default_quoting_options._32_8_;
  auStack_40._32_8_ = default_quoting_options._40_8_;
  uVar1 = auStack_40[(byte)((byte)param_3 >> 5)];
  auStack_40[(byte)((byte)param_3 >> 5)] =
       (uint)((uVar1 >> (param_3 & 0x1f) & 1) == 0) << (sbyte)(param_3 & 0x1f) ^ uVar1;
  quotearg_n_options(0,param_1,param_2,&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quotearg_char(undefined8 param_1,uint param_2)

{
  uint uVar1;
  long in_FS_OFFSET;
  undefined8 local_48;
  uint auStack_40 [12];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = default_quoting_options._0_8_;
  auStack_40._0_8_ = default_quoting_options._8_8_;
  auStack_40._40_8_ = default_quoting_options._48_8_;
  auStack_40._8_8_ = default_quoting_options._16_8_;
  auStack_40._16_8_ = default_quoting_options._24_8_;
  auStack_40._24_8_ = default_quoting_options._32_8_;
  auStack_40._32_8_ = default_quoting_options._40_8_;
  uVar1 = auStack_40[(byte)((byte)param_2 >> 5)];
  auStack_40[(byte)((byte)param_2 >> 5)] =
       (uint)((uVar1 >> (param_2 & 0x1f) & 1) == 0) << (sbyte)(param_2 & 0x1f) ^ uVar1;
  quotearg_n_options(0,param_1,0xffffffffffffffff,&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quotearg_colon(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = default_quoting_options._0_8_;
  local_38 = default_quoting_options._16_8_;
  uStack_30 = default_quoting_options._24_8_;
  uStack_40 = default_quoting_options._8_8_ | 0x400000000000000;
  local_18 = default_quoting_options._48_8_;
  local_28 = default_quoting_options._32_8_;
  uStack_20 = default_quoting_options._40_8_;
  quotearg_n_options(0,param_1,0xffffffffffffffff,&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quotearg_colon_mem(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined8 local_48;
  ulong uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = default_quoting_options._0_8_;
  local_38 = default_quoting_options._16_8_;
  uStack_30 = default_quoting_options._24_8_;
  uStack_40 = default_quoting_options._8_8_ | 0x400000000000000;
  local_18 = default_quoting_options._48_8_;
  local_28 = default_quoting_options._32_8_;
  uStack_20 = default_quoting_options._40_8_;
  quotearg_n_options(0,param_1,param_2,&local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void quotearg_n_style_colon(undefined8 param_1,int param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  int local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined1 local_30 [16];
  undefined1 local_20 [16];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_20 = (undefined1  [16])0x0;
  local_48[1] = 0;
  local_40 = __LC15;
  uStack_38 = _UNK_00102a88;
  local_30 = (undefined1  [16])0x0;
  local_48[0] = param_2;
  quotearg_n_options(param_1,param_3,0xffffffffffffffff,local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void quotearg_n_custom(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = default_quoting_options._8_8_;
  local_38 = default_quoting_options._16_8_;
  uStack_30 = default_quoting_options._24_8_;
  local_18 = default_quoting_options._48_8_;
  _local_48 = CONCAT44(SUB84(default_quoting_options._0_8_,4),10);
  local_28 = default_quoting_options._32_8_;
  lStack_20 = default_quoting_options._40_8_;
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    quotearg_n_options(param_1,param_4,0xffffffffffffffff,&local_48);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void quotearg_n_custom_mem
               (undefined4 param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = default_quoting_options._8_8_;
  local_38 = default_quoting_options._16_8_;
  uStack_30 = default_quoting_options._24_8_;
  local_18 = default_quoting_options._48_8_;
  _local_48 = CONCAT44(SUB84(default_quoting_options._0_8_,4),10);
  local_28 = default_quoting_options._32_8_;
  lStack_20 = default_quoting_options._40_8_;
  if ((param_2 != 0) && (param_3 != 0)) {
    lStack_20 = param_2;
    local_18 = param_3;
    quotearg_n_options(param_1,param_4,param_5,&local_48);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void quotearg_custom(long param_1,long param_2,undefined8 param_3)

{
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = default_quoting_options._8_8_;
  local_38 = default_quoting_options._16_8_;
  uStack_30 = default_quoting_options._24_8_;
  local_18 = default_quoting_options._48_8_;
  _local_48 = CONCAT44(SUB84(default_quoting_options._0_8_,4),10);
  local_28 = default_quoting_options._32_8_;
  lStack_20 = default_quoting_options._40_8_;
  if ((param_1 != 0) && (param_2 != 0)) {
    lStack_20 = param_1;
    local_18 = param_2;
    quotearg_n_options(0,param_3,0xffffffffffffffff,&local_48);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void quotearg_custom_mem(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long in_FS_OFFSET;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  long lStack_20;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_40 = default_quoting_options._8_8_;
  local_38 = default_quoting_options._16_8_;
  uStack_30 = default_quoting_options._24_8_;
  local_18 = default_quoting_options._48_8_;
  _local_48 = CONCAT44(SUB84(default_quoting_options._0_8_,4),10);
  local_28 = default_quoting_options._32_8_;
  lStack_20 = default_quoting_options._40_8_;
  if ((param_1 != 0) && (param_2 != 0)) {
    lStack_20 = param_1;
    local_18 = param_2;
    quotearg_n_options(0,param_3,param_4,&local_48);
    if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void quote_n_mem(void)

{
  quotearg_n_options();
  return;
}



void quote_mem(undefined8 param_1,undefined8 param_2)

{
  quotearg_n_options(0,param_1,param_2,quote_quoting_options);
  return;
}



void quote_n(undefined8 param_1,undefined8 param_2)

{
  quotearg_n_options(param_1,param_2,0xffffffffffffffff,quote_quoting_options);
  return;
}



void quote(undefined8 param_1)

{
  quotearg_n_options(0,param_1,0xffffffffffffffff,quote_quoting_options);
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_buffer_restyled_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_n_options_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



void set_custom_quoting_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_n_style_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_n_style_mem_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_style_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_style_mem_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_n_style_colon_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_n_custom_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_n_custom_mem_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_custom_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_custom_mem_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


