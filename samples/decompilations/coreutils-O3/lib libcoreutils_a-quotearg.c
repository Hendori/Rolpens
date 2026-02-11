
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
  char cVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  ushort **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  byte *pbVar12;
  bool bVar13;
  ulong uVar14;
  long in_FS_OFFSET;
  bool bVar15;
  bool bVar16;
  bool local_c8;
  long local_c0;
  ulong local_b8;
  bool local_b0;
  bool local_af;
  bool local_ae;
  bool local_ad;
  int local_ac;
  char *local_90;
  ulong local_88;
  uint local_78;
  bool local_74;
  bool local_73;
  bool local_72;
  bool local_71;
  char *local_60;
  wint_t local_4c;
  undefined8 local_48;
  long local_40;
  
  local_c0 = param_7;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = param_9;
  local_ac = param_5;
  local_78 = param_6;
LAB_00100140:
  sVar5 = __ctype_get_mb_cur_max();
  bVar2 = true;
  local_72 = false;
  local_ad = false;
  local_b8 = 0;
  local_b0 = (bool)((byte)(local_78 >> 1) & 1);
  local_90 = (char *)0x0;
  local_88 = 0;
LAB_0010018a:
  switch(local_ac) {
  case 0:
    local_73 = false;
    local_af = false;
    uVar8 = 0;
    local_b0 = false;
    local_74 = (bool)(local_b8 != 0 & local_ad);
    local_ae = local_ad;
    local_71 = local_ad;
    break;
  case 1:
    local_73 = true;
    goto LAB_00100839;
  case 2:
    if (local_b0 == false) {
LAB_0010075a:
      if (param_2 != 0) {
        *param_1 = 0x27;
      }
      local_ae = false;
      uVar8 = 1;
      local_74 = false;
      local_73 = false;
      local_af = true;
      local_71 = false;
      local_b0 = false;
      local_b8 = 1;
      local_90 = "\'";
      local_ac = 2;
    }
    else {
      local_af = local_b0;
      local_74 = false;
      uVar8 = 0;
      local_71 = false;
      local_ae = local_b0;
      local_b8 = 1;
      local_90 = "\'";
      local_73 = local_af;
    }
    break;
  case 3:
    local_73 = true;
    local_ad = true;
    goto LAB_00100839;
  case 4:
    if (local_b0 == false) {
      local_ad = true;
      goto LAB_0010075a;
    }
    local_73 = local_b0;
LAB_00100839:
    local_71 = false;
    local_74 = false;
    local_ac = 2;
    uVar8 = 0;
    local_b8 = 1;
    local_90 = "\'";
    local_b0 = local_73;
    local_af = local_73;
    local_ae = local_73;
    break;
  case 5:
    if (local_b0 == false) {
      if (param_2 != 0) {
        *param_1 = 0x22;
      }
      local_73 = false;
      uVar8 = 1;
      local_af = false;
      local_ae = true;
      local_74 = true;
      local_71 = true;
      local_ad = true;
      local_b8 = 1;
      local_90 = "\"";
    }
    else {
      local_ae = local_b0;
      local_73 = false;
      uVar8 = 0;
      local_af = false;
      local_74 = local_b0;
      local_b8 = 1;
      local_90 = "\"";
      local_ad = local_ae;
      local_71 = local_ae;
    }
    break;
  case 6:
    local_ae = true;
    uVar8 = 0;
    local_74 = true;
    local_73 = false;
    local_af = false;
    local_71 = true;
    local_b0 = true;
    local_ad = true;
    local_b8 = 1;
    local_90 = "\"";
    local_ac = 5;
    break;
  case 7:
    local_74 = local_b8 != 0;
    local_ae = true;
    uVar8 = 0;
    local_73 = false;
    local_af = false;
    local_71 = true;
    local_b0 = false;
    local_ad = true;
    break;
  case 8:
  case 9:
  case 10:
    if (local_ac != 10) {
      param_8 = (char *)dcgettext("gnulib",&_LC6,5);
      if (param_8 == "`") {
        param_8 = (char *)gettext_quote_part_0(&_LC6,local_ac);
      }
      local_60 = (char *)dcgettext("gnulib",&_LC3,5);
      if (local_60 == "\'") {
        local_60 = (char *)gettext_quote_part_0(&_LC3,local_ac);
      }
    }
    uVar8 = 0;
    if (local_b0 == false) {
      cVar1 = *param_8;
      while (cVar1 != '\0') {
        while (uVar8 < param_2) {
          param_1[uVar8] = cVar1;
          uVar8 = uVar8 + 1;
          cVar1 = param_8[uVar8];
          if (cVar1 == '\0') goto LAB_00100227;
        }
        uVar8 = uVar8 + 1;
        cVar1 = param_8[uVar8];
      }
    }
LAB_00100227:
    local_b8 = strlen(local_60);
    local_90 = local_60;
    local_74 = local_b8 != 0;
    local_ae = true;
    local_73 = false;
    local_af = false;
    local_71 = true;
    local_ad = true;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    abort();
  }
  bVar16 = false;
  uVar14 = 0;
LAB_00100280:
  bVar15 = param_4 != uVar14;
  if (param_4 == 0xffffffffffffffff) {
    bVar15 = param_3[uVar14] != '\0';
  }
  if (bVar15 == false) goto LAB_00100eaf;
  __s1 = (byte *)(param_3 + uVar14);
  bVar3 = bVar16;
  if (local_74 != false) {
    if ((param_4 == 0xffffffffffffffff) && (1 < local_b8)) {
      param_4 = strlen(param_3);
    }
    if ((param_4 < uVar14 + local_b8) || (iVar4 = memcmp(__s1,local_90,local_b8), iVar4 != 0)) {
      bVar10 = *__s1;
      uVar11 = (ulong)bVar10;
      if ((char)bVar10 < '@') {
        switch(bVar10) {
        case 0:
          goto switchD_00100cd3_caseD_0;
        case 7:
          local_c8 = false;
          uVar11 = 7;
          bVar10 = 0x61;
          goto joined_r0x00100614;
        case 8:
          goto switchD_001002eb_caseD_8;
        case 9:
          goto switchD_001002eb_caseD_9;
        case 10:
          local_c8 = false;
          uVar11 = 10;
          bVar10 = 0x6e;
          goto LAB_001005b7;
        case 0xb:
          goto switchD_001002eb_caseD_b;
        case 0xc:
          goto switchD_001002eb_caseD_c;
        case 0xd:
          goto switchD_001002eb_caseD_d;
        case 0x20:
          local_c8 = false;
          uVar11 = 0x20;
          goto LAB_001004c8;
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
          goto switchD_001002eb_caseD_21;
        case 0x23:
          local_c8 = false;
          uVar11 = 0x23;
          goto LAB_00100698;
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
switchD_00100cd3_caseD_25:
          bVar15 = local_74;
          goto switchD_001002eb_caseD_25;
        case 0x27:
          goto switchD_001002eb_caseD_27;
        case 0x3f:
          goto switchD_001002eb_caseD_3f;
        }
      }
      else {
        if ('z' < (char)bVar10) {
          if (bVar10 == 0x7d) goto LAB_00100e70;
          local_c8 = false;
          if ('}' < (char)bVar10) goto LAB_00100e58;
          if (bVar10 == 0x7b) goto joined_r0x00100e79;
          uVar11 = 0x7c;
          bVar15 = false;
          goto LAB_001004c8;
        }
        if (bVar10 != 0x40) {
          uVar7 = 1L << (bVar10 + 0xbf & 0x3f);
          if ((uVar7 & 0x3ffffff53ffffff) == 0) goto LAB_00100dce;
          goto switchD_00100cd3_caseD_25;
        }
      }
switchD_001002eb_caseD_1:
      local_c8 = false;
joined_r0x001009cf:
      if (sVar5 != 1) {
        local_48 = 0;
        if (param_4 == 0xffffffffffffffff) {
          param_4 = strlen(param_3);
        }
        uVar7 = rpl_mbrtoc32(&local_4c,__s1,param_4 - uVar14,&local_48);
        if (uVar7 == 0) goto LAB_001004d3;
        if (uVar7 == 0xffffffffffffffff) {
          bVar13 = false;
          uVar7 = 0;
          bVar15 = local_ad;
          goto LAB_00100432;
        }
        if (uVar7 == 0xfffffffffffffffe) {
          uVar7 = 0;
          if (param_4 <= uVar14) {
LAB_001012aa:
            bVar13 = false;
            bVar15 = local_ad;
            goto LAB_00100432;
          }
          do {
            if (__s1[uVar7] == 0) break;
            uVar7 = uVar7 + 1;
          } while (param_4 - uVar14 != uVar7);
LAB_001012a0:
          if (uVar7 < 2) goto LAB_001012aa;
          goto LAB_0010043a;
        }
        if (local_73 != false) {
          if (uVar7 != 1) {
            pbVar12 = (byte *)(param_3 + uVar14 + 1);
            do {
              while ((byte)(*pbVar12 - 0x5b) < 0x22) {
                if ((0x20000002bU >> ((ulong)(*pbVar12 - 0x5b) & 0x3f) & 1) != 0) goto LAB_001005be;
                pbVar12 = pbVar12 + 1;
                if (__s1 + uVar7 == pbVar12) goto LAB_0010132e;
              }
              pbVar12 = pbVar12 + 1;
            } while (__s1 + uVar7 != pbVar12);
LAB_0010132e:
            iVar4 = iswprint(local_4c);
            if (iVar4 != 0) goto LAB_00100af0;
            goto LAB_0010043a;
          }
          iVar4 = iswprint(local_4c);
          if (iVar4 != 0) goto LAB_001004d3;
          bVar13 = false;
          bVar15 = local_ad;
          goto LAB_00100432;
        }
        iVar4 = iswprint(local_4c);
        if (iVar4 == 0) goto LAB_001012a0;
        if (uVar7 != 1) {
LAB_00100af0:
          uVar7 = uVar7 + uVar14;
          goto LAB_00100450;
        }
        goto LAB_001004d3;
      }
      ppuVar6 = __ctype_b_loc();
      bVar15 = (*(byte *)((long)*ppuVar6 + uVar11 * 2 + 1) & 0x40) == 0;
      uVar7 = 1;
      bVar13 = !bVar15;
      bVar15 = (bool)(bVar15 & local_ad);
LAB_00100432:
      if (bVar15 == false) goto LAB_00100335;
LAB_0010043a:
      uVar7 = uVar7 + uVar14;
      if (local_ad == false) {
        bVar15 = false;
LAB_00100450:
        uVar14 = uVar14 + 1;
        bVar10 = (byte)uVar11;
        if (local_c8 != false) {
          if (uVar8 < param_2) {
            param_1[uVar8] = 0x5c;
          }
          uVar8 = uVar8 + 1;
        }
        if (uVar14 < uVar7) {
          if (bVar16 != false) {
            if (uVar8 < param_2) {
              param_1[uVar8] = 0x27;
            }
            if (uVar8 + 1 < param_2) {
              param_1[uVar8 + 1] = 0x27;
            }
            uVar8 = uVar8 + 2;
          }
          do {
            if (uVar8 < param_2) {
              param_1[uVar8] = (char)uVar11;
            }
            bVar10 = param_3[uVar14];
            uVar11 = (ulong)bVar10;
            uVar14 = uVar14 + 1;
            uVar8 = uVar8 + 1;
          } while (uVar14 < uVar7);
          bVar16 = false;
          goto LAB_001003bd;
        }
        goto LAB_00100c22;
      }
      if (local_b0 == false) {
        do {
          bVar15 = (bool)((bVar16 ^ 1U) & local_af);
          uVar9 = uVar8;
          if (bVar15 != false) {
            if (uVar8 < param_2) {
              param_1[uVar8] = 0x27;
            }
            if (uVar8 + 1 < param_2) {
              param_1[uVar8 + 1] = 0x24;
            }
            if (uVar8 + 2 < param_2) {
              param_1[uVar8 + 2] = 0x27;
            }
            uVar9 = uVar8 + 3;
            bVar16 = bVar15;
          }
          if (uVar9 < param_2) {
            param_1[uVar9] = 0x5c;
          }
          if (uVar9 + 1 < param_2) {
            param_1[uVar9 + 1] = (char)(uVar11 >> 6) + '0';
          }
          if (uVar9 + 2 < param_2) {
            param_1[uVar9 + 2] = ((byte)(uVar11 >> 3) & 7) + 0x30;
          }
          uVar14 = uVar14 + 1;
          uVar8 = uVar9 + 3;
          bVar10 = ((byte)uVar11 & 7) + 0x30;
          if (uVar7 <= uVar14) {
            bVar15 = false;
            goto LAB_001003bd;
          }
          if (uVar8 < param_2) {
            param_1[uVar8] = bVar10;
          }
          uVar8 = uVar9 + 4;
          uVar11 = (ulong)(byte)param_3[uVar14];
        } while (bVar15 != false);
        uVar8 = uVar9 + 7;
        while( true ) {
          if (uVar8 - 3 < param_2) {
            param_1[uVar8 - 3] = 0x5c;
          }
          if (uVar8 - 2 < param_2) {
            param_1[uVar8 - 2] = (char)(uVar11 >> 6) + '0';
          }
          if (uVar8 - 1 < param_2) {
            param_1[uVar8 - 1] = ((byte)(uVar11 >> 3) & 7) + 0x30;
          }
          uVar14 = uVar14 + 1;
          bVar10 = ((byte)uVar11 & 7) + 0x30;
          if (uVar7 <= uVar14) break;
          if (uVar8 < param_2) {
            param_1[uVar8] = bVar10;
          }
          uVar11 = (ulong)(byte)param_3[uVar14];
          uVar8 = uVar8 + 4;
        }
        bVar15 = false;
        goto LAB_001003bd;
      }
    }
    else if (local_b0 == false) {
      bVar10 = *__s1;
      uVar11 = (ulong)bVar10;
      bVar13 = local_74;
      local_c8 = local_74;
      if ('?' < (char)bVar10) {
        if ((char)bVar10 < '{') {
          if (bVar10 != 0x40) {
            uVar7 = 1L << (bVar10 + 0xbf & 0x3f);
            if ((uVar7 & 0x3ffffff53ffffff) != 0) goto switchD_0010099f_caseD_25;
            if ((uVar7 & 0xa4000000) == 0) {
              if (local_ac != 2) goto LAB_00100fe8;
              goto LAB_00100e9b;
            }
            goto switchD_0010099f_caseD_21;
          }
switchD_0010099f_caseD_1:
        }
        else {
          if (bVar10 == 0x7d) goto joined_r0x00100e79;
          if ((char)bVar10 < '~') goto LAB_00100e25;
LAB_00100e58:
          if ((char)uVar11 == '~') goto LAB_00100698;
          uVar11 = 0x7f;
        }
        goto joined_r0x001009cf;
      }
      switch(bVar10) {
      case 0:
        bVar3 = (bool)((bVar16 ^ 1U) & local_af);
        if (bVar3 != false) goto LAB_00100bc8;
LAB_00100d04:
        uVar7 = uVar8 + 1;
        if (uVar8 < param_2) {
          param_1[uVar8] = 0x5c;
          if (local_71 == false) {
            bVar10 = 0x30;
            uVar8 = uVar7;
            bVar3 = bVar15;
            bVar13 = false;
            goto joined_r0x00100c0e;
          }
        }
        else if (local_71 == false) {
          uVar11 = 0x30;
          uVar8 = uVar7;
          bVar13 = false;
          goto LAB_00100335;
        }
        if ((uVar14 + 1 < param_4) && ((byte)(param_3[uVar14 + 1] - 0x30U) < 10)) {
          if (uVar7 < param_2) {
            param_1[uVar7] = 0x30;
          }
          if (uVar8 + 2 < param_2) {
            param_1[uVar8 + 2] = 0x30;
          }
          uVar7 = uVar8 + 3;
        }
        bVar13 = false;
        uVar11 = 0x30;
        break;
      default:
        goto switchD_0010099f_caseD_1;
      case 7:
        uVar11 = 7;
        bVar10 = 0x61;
        goto joined_r0x00100614;
      case 8:
        goto LAB_00100585;
      case 9:
        goto LAB_00100665;
      case 10:
        uVar11 = 10;
        bVar10 = 0x6e;
        goto LAB_001005b7;
      case 0xb:
        goto LAB_0010064d;
      case 0xc:
        goto LAB_00100605;
      case 0xd:
        goto LAB_001005ad;
      case 0x20:
        uVar11 = 0x20;
        goto LAB_001004c8;
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
switchD_0010099f_caseD_21:
        bVar15 = false;
        goto LAB_001004c8;
      case 0x23:
        uVar11 = 0x23;
        goto LAB_00100698;
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
switchD_0010099f_caseD_25:
        bVar15 = false;
        goto LAB_00100335;
      case 0x27:
        if (local_ac != 2) {
          bVar15 = false;
          uVar11 = 0x27;
          local_72 = local_74;
          goto LAB_00100335;
        }
LAB_00100f20:
        if ((param_2 == 0) || (uVar11 = 0, uVar7 = param_2, local_88 != 0)) {
          if (uVar8 < param_2) {
            param_1[uVar8] = 0x27;
          }
          if (uVar8 + 1 < param_2) {
            param_1[uVar8 + 1] = 0x5c;
          }
          uVar11 = param_2;
          uVar7 = local_88;
          if (uVar8 + 2 < param_2) {
            param_1[uVar8 + 2] = 0x27;
          }
        }
        bVar16 = false;
        bVar10 = 0x27;
        uVar8 = uVar8 + 3;
        param_2 = uVar11;
        bVar3 = false;
        local_88 = uVar7;
        local_72 = bVar15;
        bVar13 = bVar15;
        goto joined_r0x00100c0e;
      case 0x3f:
        if (local_ac == 2) {
          bVar3 = false;
          bVar10 = 0x3f;
          bVar13 = false;
          goto joined_r0x00100c0e;
        }
        goto LAB_001004f0;
      }
      goto LAB_0010033c;
    }
    goto LAB_001005d8;
  }
  bVar10 = *__s1;
  uVar11 = (ulong)bVar10;
  if ('?' < (char)bVar10) {
    if ('z' < (char)bVar10) {
      if (bVar10 != 0x7d) {
        local_c8 = false;
        if ('}' < (char)bVar10) goto LAB_00100e58;
LAB_00100e25:
        if ((char)uVar11 == '{') goto joined_r0x00100e79;
        bVar15 = false;
        uVar11 = 0x7c;
        goto LAB_001004c8;
      }
LAB_00100e70:
      local_c8 = false;
joined_r0x00100e79:
      if (param_4 == 0xffffffffffffffff) {
        if (param_3[1] == '\0') goto LAB_00100698;
      }
      else if (param_4 == 1) {
LAB_00100698:
        if (uVar14 == 0) goto LAB_001004c8;
      }
      goto LAB_0010059b;
    }
    if (bVar10 == 0x40) goto switchD_001002eb_caseD_1;
    uVar7 = 1L << (bVar10 + 0xbf & 0x3f);
    if ((uVar7 & 0x3ffffff53ffffff) != 0) goto switchD_001002eb_caseD_25;
LAB_00100dce:
    if ((uVar7 & 0xa4000000) != 0) goto switchD_001002eb_caseD_21;
    if (local_ac == 2) {
      if (local_b0 != false) goto LAB_00101016;
LAB_00100e9b:
      uVar14 = uVar14 + 1;
      bVar15 = false;
      bVar10 = 0x5c;
      goto LAB_00100c22;
    }
    local_c8 = (bool)(local_ad & local_b0);
    if ((bool)(local_ad & local_b0) == false) {
LAB_00100fe8:
      if (local_ad == false) goto LAB_0010059b;
      bVar15 = false;
      bVar10 = 0x5c;
      goto LAB_00100370;
    }
    if (local_b8 != 0) goto LAB_00100e9b;
    goto LAB_001005d8;
  }
  switch(bVar10) {
  case 0:
    if (local_ad != false) {
switchD_00100cd3_caseD_0:
      if (local_b0 == false) {
        bVar3 = (bool)((bVar16 ^ 1U) & local_af);
        local_c8 = false;
        if (bVar3 == false) goto LAB_00100d04;
LAB_00100bc8:
        if (uVar8 < param_2) {
          param_1[uVar8] = 0x27;
        }
        if (uVar8 + 1 < param_2) {
          param_1[uVar8 + 1] = 0x24;
        }
        if (uVar8 + 2 < param_2) {
          param_1[uVar8 + 2] = 0x27;
        }
        if (uVar8 + 3 < param_2) {
          param_1[uVar8 + 3] = 0x5c;
        }
        bVar10 = 0x30;
        uVar8 = uVar8 + 4;
        bVar16 = bVar3;
        bVar13 = false;
        goto joined_r0x00100c0e;
      }
      goto LAB_001005d8;
    }
    if ((local_78 & 1) == 0) {
      bVar15 = false;
      uVar11 = 0;
      bVar13 = false;
      local_c8 = false;
      goto LAB_00100335;
    }
    uVar14 = uVar14 + 1;
    goto LAB_00100280;
  default:
    goto switchD_001002eb_caseD_1;
  case 7:
    uVar11 = 7;
    bVar10 = 0x61;
    local_c8 = false;
    break;
  case 8:
switchD_001002eb_caseD_8:
    local_c8 = false;
LAB_00100585:
    uVar11 = 8;
    bVar10 = 0x62;
    break;
  case 9:
switchD_001002eb_caseD_9:
    local_c8 = false;
LAB_00100665:
    uVar11 = 9;
    bVar10 = 0x74;
    goto LAB_001005b7;
  case 10:
    uVar11 = 10;
    bVar10 = 0x6e;
    local_c8 = false;
    goto LAB_001005b7;
  case 0xb:
switchD_001002eb_caseD_b:
    local_c8 = false;
LAB_0010064d:
    uVar11 = 0xb;
    bVar10 = 0x76;
    break;
  case 0xc:
switchD_001002eb_caseD_c:
    local_c8 = false;
LAB_00100605:
    uVar11 = 0xc;
    bVar10 = 0x66;
    break;
  case 0xd:
switchD_001002eb_caseD_d:
    local_c8 = false;
LAB_001005ad:
    uVar11 = 0xd;
    bVar10 = 0x72;
LAB_001005b7:
    if (local_73 != false) goto LAB_001005be;
    break;
  case 0x20:
    uVar11 = 0x20;
    local_c8 = false;
    goto LAB_001004c8;
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
switchD_001002eb_caseD_21:
    bVar15 = false;
    local_c8 = false;
LAB_001004c8:
    if (local_73 == false) {
LAB_001004d3:
      bVar13 = bVar15;
      bVar15 = false;
      goto LAB_00100335;
    }
    goto LAB_001005be;
  case 0x23:
    uVar11 = 0x23;
    local_c8 = false;
    goto LAB_00100698;
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
switchD_001002eb_caseD_25:
    bVar13 = bVar15;
    bVar15 = false;
    local_c8 = false;
    goto LAB_00100335;
  case 0x27:
switchD_001002eb_caseD_27:
    if (local_ac != 2) {
      uVar11 = 0x27;
      local_72 = bVar15;
      bVar13 = bVar15;
      bVar15 = false;
      local_c8 = false;
      goto LAB_00100335;
    }
    if (local_b0 == false) {
      local_c8 = false;
      goto LAB_00100f20;
    }
LAB_00101016:
    local_af = local_ad;
    goto LAB_001005d8;
  case 0x3f:
switchD_001002eb_caseD_3f:
    if (local_ac == 2) {
      if (local_b0 != false) goto LAB_00101016;
      bVar15 = false;
      bVar3 = false;
      bVar10 = 0x3f;
      goto LAB_00100c18;
    }
    local_c8 = false;
LAB_001004f0:
    if ((((local_ac == 5) && ((local_78 & 4) != 0)) && (uVar7 = uVar14 + 2, uVar7 < param_4)) &&
       ((param_3[uVar14 + 1] == '?' &&
        (uVar11 = (ulong)(byte)param_3[uVar7], (byte)param_3[uVar7] < 0x3f)))) {
      bVar15 = (0x7000a38200000000U >> (uVar11 & 0x3f) & 1) != 0;
      if (!bVar15) {
        uVar11 = 0x3f;
        bVar13 = false;
        goto LAB_00100335;
      }
      iVar4 = local_ac;
      if (local_b0 != false) goto LAB_001005eb;
      if (uVar8 < param_2) {
        param_1[uVar8] = 0x3f;
      }
      if (uVar8 + 1 < param_2) {
        param_1[uVar8 + 1] = 0x22;
      }
      if (uVar8 + 2 < param_2) {
        param_1[uVar8 + 2] = 0x22;
      }
      if (uVar8 + 3 < param_2) {
        param_1[uVar8 + 3] = 0x3f;
      }
      uVar8 = uVar8 + 4;
      uVar14 = uVar7;
      bVar13 = false;
      bVar15 = false;
    }
    else {
      uVar11 = 0x3f;
      bVar13 = false;
      bVar15 = false;
    }
    goto LAB_00100335;
  }
joined_r0x00100614:
  if (local_ad == false) {
LAB_0010059b:
    bVar13 = false;
    bVar15 = false;
LAB_00100335:
    bVar10 = (byte)uVar11;
    uVar7 = uVar8;
    bVar3 = bVar15;
    if (local_ae != false) {
LAB_0010033c:
      bVar10 = (byte)uVar11;
      uVar8 = uVar7;
      bVar3 = bVar15;
      if ((local_c0 != 0) && ((*(uint *)(local_c0 + (uVar11 >> 5) * 4) >> (bVar10 & 0x1f) & 1) != 0)
         ) goto joined_r0x0010062a;
    }
joined_r0x00100c0e:
    bVar15 = bVar13;
    bVar13 = bVar15;
    if (local_c8 != false) goto joined_r0x0010062a;
LAB_00100c18:
    uVar14 = uVar14 + 1;
    bVar3 = (bool)((bVar3 ^ 1U) & bVar16);
LAB_00100c22:
    if (bVar3 != false) {
      if (uVar8 < param_2) {
        param_1[uVar8] = 0x27;
      }
      if (uVar8 + 1 < param_2) {
        param_1[uVar8 + 1] = 0x27;
      }
      uVar8 = uVar8 + 2;
      bVar16 = false;
    }
  }
  else {
    bVar13 = false;
joined_r0x0010062a:
    bVar15 = bVar13;
    if (local_b0 != false) {
      local_af = (bool)(local_af & local_ad);
      goto LAB_001005d8;
    }
LAB_00100370:
    bVar3 = (bool)((bVar16 ^ 1U) & local_af);
    if (bVar3 != false) {
      if (uVar8 < param_2) {
        param_1[uVar8] = 0x27;
      }
      if (uVar8 + 1 < param_2) {
        param_1[uVar8 + 1] = 0x24;
      }
      if (uVar8 + 2 < param_2) {
        param_1[uVar8 + 2] = 0x27;
      }
      uVar8 = uVar8 + 3;
      bVar16 = bVar3;
    }
    if (uVar8 < param_2) {
      param_1[uVar8] = 0x5c;
    }
    uVar8 = uVar8 + 1;
    uVar14 = uVar14 + 1;
  }
LAB_001003bd:
  if (uVar8 < param_2) {
    param_1[uVar8] = bVar10;
  }
  uVar8 = uVar8 + 1;
  if (bVar15 == false) {
    bVar2 = false;
  }
  goto LAB_00100280;
LAB_001014e8:
  local_ac = 5;
  param_2 = local_88;
  goto LAB_00100140;
LAB_00100eaf:
  if ((uVar8 == 0) && (local_af != false)) {
    if (local_b0 != false) {
LAB_001005be:
      local_ac = 2;
      local_af = local_ad;
LAB_001005d8:
      iVar4 = 4;
      if (local_af == false) {
        iVar4 = local_ac;
      }
LAB_001005eb:
      local_ac = iVar4;
      local_78 = local_78 & 0xfffffffd;
      local_c0 = 0;
      goto LAB_00100140;
    }
  }
  else {
    local_b0 = (bool)(local_b0 ^ 1);
    if ((local_b0 == false) || (local_af == false)) goto LAB_00101185;
  }
  if (local_72 == false) {
    local_b0 = true;
  }
  else {
    if (bVar2) goto LAB_001014e8;
    bVar16 = param_2 == 0;
    local_b0 = local_72;
    if (bVar16 && local_88 != 0) {
      local_b0 = false;
      param_2 = local_88;
      local_72 = bVar16 && local_88 != 0;
      goto LAB_0010018a;
    }
  }
LAB_00101185:
  uVar14 = uVar8;
  if ((local_90 != (char *)0x0) && (local_b0 != false)) {
    cVar1 = *local_90;
    while (cVar1 != '\0') {
      if (uVar14 < param_2) {
        param_1[uVar14] = cVar1;
        cVar1 = local_90[(uVar14 + 1) - uVar8];
      }
      else {
        cVar1 = local_90[(uVar14 + 1) - uVar8];
      }
      uVar14 = uVar14 + 1;
    }
  }
  if (uVar14 < param_2) {
    param_1[uVar14] = 0;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar14;
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
  undefined *puVar6;
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
    if ((undefined8 *)slotvec == &slotvec0) {
      puVar8 = (undefined8 *)xpalloc(0,&local_48,lVar10,0x7fffffff,0x10);
      puVar6 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar8;
      *puVar8 = slotvec0;
      puVar8[1] = puVar6;
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



void clone_quoting_options(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &default_quoting_options;
  }
  xmemdup(param_1,0x38);
  *piVar2 = iVar1;
  return;
}



undefined4 get_quoting_style(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &default_quoting_options;
  }
  return *param_1;
}



void set_quoting_style(undefined4 *param_1,undefined4 param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &default_quoting_options;
  }
  *param_1 = param_2;
  return;
}



void set_char_quoting(undefined4 *param_1,byte param_2,uint param_3)

{
  uint uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &default_quoting_options;
  }
  uVar1 = param_1[(ulong)(param_2 >> 5) + 2];
  param_1[(ulong)(param_2 >> 5) + 2] =
       (param_3 & 1 ^ uVar1 >> (param_2 & 0x1f) & 1) << (param_2 & 0x1f) ^ uVar1;
  return;
}



undefined4 set_quoting_flags(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &default_quoting_options;
  }
  uVar1 = param_1[1];
  param_1[1] = param_2;
  return uVar1;
}



void set_custom_quoting(undefined4 *param_1,long param_2,long param_3)

{
  if (param_1 == (undefined4 *)0x0) {
    param_1 = &default_quoting_options;
  }
  *param_1 = 10;
  if ((param_2 != 0) && (param_3 != 0)) {
    *(long *)(param_1 + 10) = param_2;
    *(long *)(param_1 + 0xc) = param_3;
    return;
  }
                    /* WARNING: Subroutine does not return */
  abort();
}



void quotearg_buffer(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined4 *param_5)

{
  int iVar1;
  int *piVar2;
  
  if (param_5 == (undefined4 *)0x0) {
    param_5 = &default_quoting_options;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  quotearg_buffer_restyled
            (param_1,param_2,param_3,param_4,*param_5,param_5[1],param_5 + 2,
             *(undefined8 *)(param_5 + 10),*(undefined8 *)(param_5 + 0xc));
  *piVar2 = iVar1;
  return;
}



undefined8 quotearg_alloc(undefined8 param_1,undefined8 param_2,undefined4 *param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_3 == (undefined4 *)0x0) {
    param_3 = &default_quoting_options;
  }
  piVar3 = __errno_location();
  iVar1 = *piVar3;
  uVar2 = param_3[1];
  lVar4 = quotearg_buffer_restyled
                    (0,0,param_1,param_2,*param_3,uVar2 | 1,param_3 + 2,
                     *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
  uVar5 = xcharalloc(lVar4 + 1);
  quotearg_buffer_restyled
            (uVar5,lVar4 + 1,param_1,param_2,*param_3,uVar2 | 1,param_3 + 2,
             *(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
  *piVar3 = iVar1;
  return uVar5;
}



undefined8
quotearg_alloc_mem(undefined8 param_1,undefined8 param_2,long *param_3,undefined4 *param_4)

{
  int iVar1;
  int *piVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  
  if (param_4 == (undefined4 *)0x0) {
    param_4 = &default_quoting_options;
  }
  piVar2 = __errno_location();
  iVar1 = *piVar2;
  uVar5 = (uint)(param_3 == (long *)0x0) | param_4[1];
  lVar3 = quotearg_buffer_restyled
                    (0,0,param_1,param_2,*param_4,uVar5,param_4 + 2,*(undefined8 *)(param_4 + 10),
                     *(undefined8 *)(param_4 + 0xc));
  uVar4 = xcharalloc(lVar3 + 1);
  quotearg_buffer_restyled
            (uVar4,lVar3 + 1,param_1,param_2,*param_4,uVar5,param_4 + 2,
             *(undefined8 *)(param_4 + 10),*(undefined8 *)(param_4 + 0xc));
  *piVar2 = iVar1;
  if (param_3 != (long *)0x0) {
    *param_3 = lVar3;
  }
  return uVar4;
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
    PTR_slot0_00104548 = slot0;
    slotvec0 = 0x100;
  }
  if ((undefined8 *)__ptr_00 != &slotvec0) {
    free(__ptr_00);
    slotvec = (undefined *)&slotvec0;
  }
  nslots = 1;
  return;
}



undefined1 * quotearg_n(uint param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *__ptr;
  long lVar9;
  ulong *puVar10;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  iVar1 = *piVar6;
  if (0x7ffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar7 = (undefined8 *)slotvec;
  if (nslots <= (int)param_1) {
    local_48 = (long)nslots;
    lVar9 = (long)(int)((param_1 - nslots) + 1);
    if ((undefined8 *)slotvec == &slotvec0) {
      puVar7 = (undefined8 *)xpalloc(0,&local_48,lVar9,0x7fffffff,0x10);
      puVar4 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar7;
      *puVar7 = slotvec0;
      puVar7[1] = puVar4;
    }
    else {
      puVar7 = (undefined8 *)xpalloc(slotvec,&local_48,lVar9,0x7fffffff,0x10);
      slotvec = (undefined *)puVar7;
    }
    memset(puVar7 + (long)nslots * 2,0,(local_48 - nslots) * 0x10);
    nslots = (int)local_48;
  }
  puVar10 = puVar7 + (long)(int)param_1 * 2;
  uVar5 = DAT_001040a4 | 1;
  uVar2 = *puVar10;
  __ptr = (undefined1 *)puVar10[1];
  uVar8 = quotearg_buffer_restyled
                    (__ptr,uVar2,param_2,0xffffffffffffffff,default_quoting_options,uVar5,
                     &DAT_001040a8,DAT_001040c8,DAT_001040d0);
  if (uVar2 <= uVar8) {
    uVar8 = uVar8 + 1;
    *puVar10 = uVar8;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar8);
    uVar3 = default_quoting_options;
    puVar10[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar8,param_2,0xffffffffffffffff,uVar3,uVar5,&DAT_001040a8,DAT_001040c8,
               DAT_001040d0);
  }
  *piVar6 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * quotearg_n_mem(uint param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
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
    if ((undefined8 *)slotvec == &slotvec0) {
      puVar8 = (undefined8 *)xpalloc(0,&local_48,lVar10,0x7fffffff,0x10);
      puVar5 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar8;
      *puVar8 = slotvec0;
      puVar8[1] = puVar5;
    }
    else {
      puVar8 = (undefined8 *)xpalloc(slotvec,&local_48,lVar10,0x7fffffff,0x10);
      slotvec = (undefined *)puVar8;
    }
    memset(puVar8 + (long)nslots * 2,0,(local_48 - nslots) * 0x10);
    nslots = (int)local_48;
  }
  puVar1 = puVar8 + (long)(int)param_1 * 2;
  uVar6 = DAT_001040a4 | 1;
  uVar3 = *puVar1;
  __ptr = (undefined1 *)puVar1[1];
  uVar9 = quotearg_buffer_restyled
                    (__ptr,uVar3,param_2,param_3,default_quoting_options,uVar6,&DAT_001040a8,
                     DAT_001040c8,DAT_001040d0);
  if (uVar3 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar1 = uVar9;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar9);
    uVar4 = default_quoting_options;
    puVar1[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar9,param_2,param_3,uVar4,uVar6,&DAT_001040a8,DAT_001040c8,DAT_001040d0);
  }
  *piVar7 = iVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * quotearg(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 *__ptr;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  iVar1 = *piVar6;
  puVar7 = (ulong *)slotvec;
  if (nslots < 1) {
    local_48 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar7 = (ulong *)xpalloc(0,&local_48,(long)(1 - nslots),0x7fffffff,0x10);
      puVar4 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar7;
      *puVar7 = slotvec0;
      puVar7[1] = (ulong)puVar4;
    }
    else {
      puVar7 = (ulong *)xpalloc(slotvec,&local_48,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar7;
    }
    memset(puVar7 + (long)nslots * 2,0,(local_48 - nslots) * 0x10);
    nslots = (int)local_48;
  }
  uVar2 = *puVar7;
  __ptr = (undefined1 *)puVar7[1];
  uVar5 = DAT_001040a4 | 1;
  uVar8 = quotearg_buffer_restyled
                    (__ptr,uVar2,param_1,0xffffffffffffffff,default_quoting_options,uVar5,
                     &DAT_001040a8,DAT_001040c8,DAT_001040d0);
  if (uVar2 <= uVar8) {
    uVar8 = uVar8 + 1;
    *puVar7 = uVar8;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar8);
    uVar3 = default_quoting_options;
    puVar7[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar8,param_1,0xffffffffffffffff,uVar3,uVar5,&DAT_001040a8,DAT_001040c8,
               DAT_001040d0);
  }
  *piVar6 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * quotearg_mem(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 *__ptr;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  iVar1 = *piVar6;
  puVar7 = (ulong *)slotvec;
  if (nslots < 1) {
    local_48 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar7 = (ulong *)xpalloc(0,&local_48,(long)(1 - nslots),0x7fffffff,0x10);
      puVar4 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar7;
      *puVar7 = slotvec0;
      puVar7[1] = (ulong)puVar4;
    }
    else {
      puVar7 = (ulong *)xpalloc(slotvec,&local_48,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar7;
    }
    memset(puVar7 + (long)nslots * 2,0,(local_48 - nslots) * 0x10);
    nslots = (int)local_48;
  }
  uVar2 = *puVar7;
  __ptr = (undefined1 *)puVar7[1];
  uVar5 = DAT_001040a4 | 1;
  uVar8 = quotearg_buffer_restyled
                    (__ptr,uVar2,param_1,param_2,default_quoting_options,uVar5,&DAT_001040a8,
                     DAT_001040c8,DAT_001040d0);
  if (uVar2 <= uVar8) {
    uVar8 = uVar8 + 1;
    *puVar7 = uVar8;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar8);
    uVar3 = default_quoting_options;
    puVar7[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar8,param_1,param_2,uVar3,uVar5,&DAT_001040a8,DAT_001040c8,DAT_001040d0);
  }
  *piVar6 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



undefined1 * quotearg_style(int param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  int *piVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 *__ptr;
  long in_FS_OFFSET;
  long local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_74 = 0;
  local_50 = (undefined1  [16])0x0;
  local_78 = param_1;
  piVar4 = __errno_location();
  iVar1 = *piVar4;
  puVar5 = (ulong *)slotvec;
  if (nslots < 1) {
    local_80 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar5 = (ulong *)xpalloc(0,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      puVar3 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar5;
      *puVar5 = slotvec0;
      puVar5[1] = (ulong)puVar3;
    }
    else {
      puVar5 = (ulong *)xpalloc(slotvec,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar5;
    }
    memset(puVar5 + (long)nslots * 2,0,(local_80 - nslots) * 0x10);
    nslots = (int)local_80;
  }
  uVar2 = *puVar5;
  __ptr = (undefined1 *)puVar5[1];
  uVar6 = quotearg_buffer_restyled(__ptr,uVar2,param_2,0xffffffffffffffff,param_1,1,local_70,0,0);
  if (uVar2 <= uVar6) {
    uVar6 = uVar6 + 1;
    *puVar5 = uVar6;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar6);
    puVar5[1] = (ulong)__ptr;
    quotearg_buffer_restyled(__ptr,uVar6,param_2,0xffffffffffffffff,param_1,1,local_70,0,0);
  }
  *piVar4 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * quotearg_style_mem(int param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  int *piVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined1 *__ptr;
  long in_FS_OFFSET;
  long local_80;
  int local_78;
  undefined4 local_74;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_74 = 0;
  local_50 = (undefined1  [16])0x0;
  local_78 = param_1;
  piVar4 = __errno_location();
  iVar1 = *piVar4;
  puVar5 = (ulong *)slotvec;
  if (nslots < 1) {
    local_80 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar5 = (ulong *)xpalloc(0,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      puVar3 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar5;
      *puVar5 = slotvec0;
      puVar5[1] = (ulong)puVar3;
    }
    else {
      puVar5 = (ulong *)xpalloc(slotvec,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar5;
    }
    memset(puVar5 + (long)nslots * 2,0,(local_80 - nslots) * 0x10);
    nslots = (int)local_80;
  }
  uVar2 = *puVar5;
  __ptr = (undefined1 *)puVar5[1];
  uVar6 = quotearg_buffer_restyled(__ptr,uVar2,param_2,param_3,param_1,1,local_70,0,0);
  if (uVar2 <= uVar6) {
    uVar6 = uVar6 + 1;
    *puVar5 = uVar6;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar6);
    puVar5[1] = (ulong)__ptr;
    quotearg_buffer_restyled(__ptr,uVar6,param_2,param_3,param_1,1,local_70,0,0);
  }
  *piVar4 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * quotearg_char_mem(undefined8 param_1,undefined8 param_2,uint param_3)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined1 *__ptr;
  uint uVar11;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  undefined8 auStack_70 [4];
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = _default_quoting_options;
  auStack_70[0] = _DAT_001040a8;
  auStack_70[1] = _DAT_001040b0;
  auStack_70[2] = uRam00000000001040b8;
  local_48 = DAT_001040d0;
  auStack_70[3] = _DAT_001040c0;
  uStack_50 = DAT_001040c8;
  puVar1 = (uint *)((long)auStack_70 + (ulong)(byte)((byte)param_3 >> 5) * 4);
  uVar11 = *puVar1;
  *puVar1 = (uint)((uVar11 >> (param_3 & 0x1f) & 1) == 0) << (sbyte)(param_3 & 0x1f) ^ uVar11;
  piVar8 = __errno_location();
  iVar2 = *piVar8;
  puVar9 = (ulong *)slotvec;
  if (nslots < 1) {
    local_80 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar9 = (ulong *)xpalloc(0,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      puVar4 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar9;
      *puVar9 = slotvec0;
      puVar9[1] = (ulong)puVar4;
    }
    else {
      puVar9 = (ulong *)xpalloc(slotvec,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar9;
    }
    memset(puVar9 + (long)nslots * 2,0,(local_80 - nslots) * 0x10);
    nslots = (int)local_80;
  }
  uVar7 = local_48;
  uVar6 = uStack_50;
  uVar5 = local_78;
  uVar11 = local_78._4_4_ | 1;
  uVar3 = *puVar9;
  __ptr = (undefined1 *)puVar9[1];
  uVar10 = quotearg_buffer_restyled
                     (__ptr,uVar3,param_1,param_2,local_78 & 0xffffffff,uVar11,auStack_70,uStack_50,
                      local_48);
  if (uVar3 <= uVar10) {
    uVar10 = uVar10 + 1;
    *puVar9 = uVar10;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar10);
    puVar9[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar10,param_1,param_2,uVar5 & 0xffffffff,uVar11,auStack_70,uVar6,uVar7);
  }
  *piVar8 = iVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * quotearg_char(undefined8 param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int *piVar8;
  ulong *puVar9;
  ulong uVar10;
  undefined1 *__ptr;
  uint uVar11;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  undefined8 auStack_70 [4];
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = _default_quoting_options;
  auStack_70[0] = _DAT_001040a8;
  auStack_70[1] = _DAT_001040b0;
  auStack_70[2] = uRam00000000001040b8;
  local_48 = DAT_001040d0;
  auStack_70[3] = _DAT_001040c0;
  uStack_50 = DAT_001040c8;
  puVar1 = (uint *)((long)auStack_70 + (ulong)(byte)((byte)param_2 >> 5) * 4);
  uVar11 = *puVar1;
  *puVar1 = (uint)((uVar11 >> (param_2 & 0x1f) & 1) == 0) << (sbyte)(param_2 & 0x1f) ^ uVar11;
  piVar8 = __errno_location();
  iVar2 = *piVar8;
  puVar9 = (ulong *)slotvec;
  if (nslots < 1) {
    local_80 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar9 = (ulong *)xpalloc(0,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      puVar4 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar9;
      *puVar9 = slotvec0;
      puVar9[1] = (ulong)puVar4;
    }
    else {
      puVar9 = (ulong *)xpalloc(slotvec,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar9;
    }
    memset(puVar9 + (long)nslots * 2,0,(local_80 - nslots) * 0x10);
    nslots = (int)local_80;
  }
  uVar7 = local_48;
  uVar6 = uStack_50;
  uVar5 = local_78;
  uVar11 = local_78._4_4_ | 1;
  uVar3 = *puVar9;
  __ptr = (undefined1 *)puVar9[1];
  uVar10 = quotearg_buffer_restyled
                     (__ptr,uVar3,param_1,0xffffffffffffffff,local_78 & 0xffffffff,uVar11,auStack_70
                      ,uStack_50,local_48);
  if (uVar3 <= uVar10) {
    uVar10 = uVar10 + 1;
    *puVar9 = uVar10;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar10);
    puVar9[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar10,param_1,0xffffffffffffffff,uVar5 & 0xffffffff,uVar11,auStack_70,uVar6,
               uVar7);
  }
  *piVar8 = iVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * quotearg_colon(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined1 *__ptr;
  uint uVar10;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = _default_quoting_options;
  local_68 = _DAT_001040b0;
  uStack_60 = uRam00000000001040b8;
  uStack_70 = _DAT_001040a8 | 0x400000000000000;
  local_48 = DAT_001040d0;
  local_58 = _DAT_001040c0;
  uStack_50 = DAT_001040c8;
  piVar7 = __errno_location();
  iVar1 = *piVar7;
  puVar8 = (ulong *)slotvec;
  if (nslots < 1) {
    local_80 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar8 = (ulong *)xpalloc(0,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      puVar3 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar8;
      *puVar8 = slotvec0;
      puVar8[1] = (ulong)puVar3;
    }
    else {
      puVar8 = (ulong *)xpalloc(slotvec,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar8;
    }
    memset(puVar8 + (long)nslots * 2,0,(local_80 - nslots) * 0x10);
    nslots = (int)local_80;
  }
  uVar6 = local_48;
  uVar5 = uStack_50;
  uVar4 = local_78;
  uVar10 = local_78._4_4_ | 1;
  uVar2 = *puVar8;
  __ptr = (undefined1 *)puVar8[1];
  uVar9 = quotearg_buffer_restyled
                    (__ptr,uVar2,param_1,0xffffffffffffffff,local_78 & 0xffffffff,uVar10,&uStack_70,
                     uStack_50,local_48);
  if (uVar2 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar8 = uVar9;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar9);
    puVar8[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar9,param_1,0xffffffffffffffff,uVar4 & 0xffffffff,uVar10,&uStack_70,uVar5,
               uVar6);
  }
  *piVar7 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * quotearg_colon_mem(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int *piVar7;
  ulong *puVar8;
  ulong uVar9;
  undefined1 *__ptr;
  uint uVar10;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  ulong uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = _default_quoting_options;
  local_68 = _DAT_001040b0;
  uStack_60 = uRam00000000001040b8;
  uStack_70 = _DAT_001040a8 | 0x400000000000000;
  local_48 = DAT_001040d0;
  local_58 = _DAT_001040c0;
  uStack_50 = DAT_001040c8;
  piVar7 = __errno_location();
  iVar1 = *piVar7;
  puVar8 = (ulong *)slotvec;
  if (nslots < 1) {
    local_80 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar8 = (ulong *)xpalloc(0,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      puVar3 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar8;
      *puVar8 = slotvec0;
      puVar8[1] = (ulong)puVar3;
    }
    else {
      puVar8 = (ulong *)xpalloc(slotvec,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar8;
    }
    memset(puVar8 + (long)nslots * 2,0,(local_80 - nslots) * 0x10);
    nslots = (int)local_80;
  }
  uVar6 = local_48;
  uVar5 = uStack_50;
  uVar4 = local_78;
  uVar10 = local_78._4_4_ | 1;
  uVar2 = *puVar8;
  __ptr = (undefined1 *)puVar8[1];
  uVar9 = quotearg_buffer_restyled
                    (__ptr,uVar2,param_1,param_2,local_78 & 0xffffffff,uVar10,&uStack_70,uStack_50,
                     local_48);
  if (uVar2 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar8 = uVar9;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar9);
    puVar8[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar9,param_1,param_2,uVar4 & 0xffffffff,uVar10,&uStack_70,uVar5,uVar6);
  }
  *piVar7 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
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
  local_40 = __LC17;
  uStack_38 = _UNK_001045c8;
  local_30 = (undefined1  [16])0x0;
  local_48[0] = param_2;
  quotearg_n_options(param_1,param_3,0xffffffffffffffff,local_48);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  uStack_40 = _DAT_001040a8;
  local_38 = _DAT_001040b0;
  uStack_30 = uRam00000000001040b8;
  local_18 = DAT_001040d0;
  _local_48 = CONCAT44((int)((ulong)_default_quoting_options >> 0x20),10);
  local_28 = _DAT_001040c0;
  lStack_20 = DAT_001040c8;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

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
  uStack_40 = _DAT_001040a8;
  local_38 = _DAT_001040b0;
  uStack_30 = uRam00000000001040b8;
  local_18 = DAT_001040d0;
  _local_48 = CONCAT44((int)((ulong)_default_quoting_options >> 0x20),10);
  local_28 = _DAT_001040c0;
  lStack_20 = DAT_001040c8;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * quotearg_custom(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  int *piVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 *__ptr;
  long in_FS_OFFSET;
  long local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_70 = _DAT_001040a8;
  local_68 = _DAT_001040b0;
  uStack_60 = uRam00000000001040b8;
  local_48 = DAT_001040d0;
  uStack_74 = (uint)((ulong)_default_quoting_options >> 0x20);
  _local_78 = CONCAT44(uStack_74,10);
  local_58 = _DAT_001040c0;
  lStack_50 = DAT_001040c8;
  if ((param_1 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lStack_50 = param_1;
  local_48 = param_2;
  piVar5 = __errno_location();
  iVar1 = *piVar5;
  puVar6 = (ulong *)slotvec;
  if (nslots < 1) {
    local_80 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar6 = (ulong *)xpalloc(0,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      puVar3 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar6;
      *puVar6 = slotvec0;
      puVar6[1] = (ulong)puVar3;
    }
    else {
      puVar6 = (ulong *)xpalloc(slotvec,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar6;
    }
    memset(puVar6 + (long)nslots * 2,0,(local_80 - nslots) * 0x10);
    nslots = (int)local_80;
  }
  uVar2 = *puVar6;
  __ptr = (undefined1 *)puVar6[1];
  uVar4 = uStack_74 | 1;
  uVar7 = quotearg_buffer_restyled
                    (__ptr,uVar2,param_3,0xffffffffffffffff,10,uVar4,&uStack_70,param_1,param_2);
  if (uVar2 <= uVar7) {
    uVar7 = uVar7 + 1;
    *puVar6 = uVar7;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar7);
    puVar6[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar7,param_3,0xffffffffffffffff,10,uVar4,&uStack_70,param_1,param_2);
  }
  *piVar5 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * quotearg_custom_mem(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  uint uVar4;
  int *piVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 *__ptr;
  long in_FS_OFFSET;
  long local_80;
  undefined4 local_78;
  uint uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  long lStack_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uStack_70 = _DAT_001040a8;
  local_68 = _DAT_001040b0;
  uStack_60 = uRam00000000001040b8;
  local_48 = DAT_001040d0;
  uStack_74 = (uint)((ulong)_default_quoting_options >> 0x20);
  _local_78 = CONCAT44(uStack_74,10);
  local_58 = _DAT_001040c0;
  lStack_50 = DAT_001040c8;
  if ((param_1 == 0) || (param_2 == 0)) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lStack_50 = param_1;
  local_48 = param_2;
  piVar5 = __errno_location();
  iVar1 = *piVar5;
  puVar6 = (ulong *)slotvec;
  if (nslots < 1) {
    local_80 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar6 = (ulong *)xpalloc(0,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      puVar3 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar6;
      *puVar6 = slotvec0;
      puVar6[1] = (ulong)puVar3;
    }
    else {
      puVar6 = (ulong *)xpalloc(slotvec,&local_80,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar6;
    }
    memset(puVar6 + (long)nslots * 2,0,(local_80 - nslots) * 0x10);
    nslots = (int)local_80;
  }
  uVar2 = *puVar6;
  __ptr = (undefined1 *)puVar6[1];
  uVar4 = uStack_74 | 1;
  uVar7 = quotearg_buffer_restyled(__ptr,uVar2,param_3,param_4,10,uVar4,&uStack_70,param_1,param_2);
  if (uVar2 <= uVar7) {
    uVar7 = uVar7 + 1;
    *puVar6 = uVar7;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar7);
    puVar6[1] = (ulong)__ptr;
    quotearg_buffer_restyled(__ptr,uVar7,param_3,param_4,10,uVar4,&uStack_70,param_1,param_2);
  }
  *piVar5 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * quote_n_mem(uint param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  int iVar2;
  ulong uVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
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
    if ((undefined8 *)slotvec == &slotvec0) {
      puVar8 = (undefined8 *)xpalloc(0,&local_48,lVar10,0x7fffffff,0x10);
      puVar5 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar8;
      *puVar8 = slotvec0;
      puVar8[1] = puVar5;
    }
    else {
      puVar8 = (undefined8 *)xpalloc(slotvec,&local_48,lVar10,0x7fffffff,0x10);
      slotvec = (undefined *)puVar8;
    }
    memset(puVar8 + (long)nslots * 2,0,(local_48 - nslots) * 0x10);
    nslots = (int)local_48;
  }
  puVar1 = puVar8 + (long)(int)param_1 * 2;
  uVar6 = DAT_00103f64 | 1;
  uVar3 = *puVar1;
  __ptr = (undefined1 *)puVar1[1];
  uVar9 = quotearg_buffer_restyled
                    (__ptr,uVar3,param_2,param_3,quote_quoting_options,uVar6,&DAT_00103f68,
                     DAT_00103f88,DAT_00103f90);
  if (uVar3 <= uVar9) {
    uVar9 = uVar9 + 1;
    *puVar1 = uVar9;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar9);
    uVar4 = quote_quoting_options;
    puVar1[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar9,param_2,param_3,uVar4,uVar6,&DAT_00103f68,DAT_00103f88,DAT_00103f90);
  }
  *piVar7 = iVar2;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * quote_mem(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 *__ptr;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  iVar1 = *piVar6;
  puVar7 = (ulong *)slotvec;
  if (nslots < 1) {
    local_48 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar7 = (ulong *)xpalloc(0,&local_48,(long)(1 - nslots),0x7fffffff,0x10);
      puVar4 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar7;
      *puVar7 = slotvec0;
      puVar7[1] = (ulong)puVar4;
    }
    else {
      puVar7 = (ulong *)xpalloc(slotvec,&local_48,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar7;
    }
    memset(puVar7 + (long)nslots * 2,0,(local_48 - nslots) * 0x10);
    nslots = (int)local_48;
  }
  uVar2 = *puVar7;
  __ptr = (undefined1 *)puVar7[1];
  uVar5 = DAT_00103f64 | 1;
  uVar8 = quotearg_buffer_restyled
                    (__ptr,uVar2,param_1,param_2,quote_quoting_options,uVar5,&DAT_00103f68,
                     DAT_00103f88,DAT_00103f90);
  if (uVar2 <= uVar8) {
    uVar8 = uVar8 + 1;
    *puVar7 = uVar8;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar8);
    uVar3 = quote_quoting_options;
    puVar7[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar8,param_1,param_2,uVar3,uVar5,&DAT_00103f68,DAT_00103f88,DAT_00103f90);
  }
  *piVar6 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * quote_n(uint param_1,undefined8 param_2)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined1 *__ptr;
  long lVar9;
  ulong *puVar10;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  iVar1 = *piVar6;
  if (0x7ffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  puVar7 = (undefined8 *)slotvec;
  if (nslots <= (int)param_1) {
    local_48 = (long)nslots;
    lVar9 = (long)(int)((param_1 - nslots) + 1);
    if ((undefined8 *)slotvec == &slotvec0) {
      puVar7 = (undefined8 *)xpalloc(0,&local_48,lVar9,0x7fffffff,0x10);
      puVar4 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar7;
      *puVar7 = slotvec0;
      puVar7[1] = puVar4;
    }
    else {
      puVar7 = (undefined8 *)xpalloc(slotvec,&local_48,lVar9,0x7fffffff,0x10);
      slotvec = (undefined *)puVar7;
    }
    memset(puVar7 + (long)nslots * 2,0,(local_48 - nslots) * 0x10);
    nslots = (int)local_48;
  }
  puVar10 = puVar7 + (long)(int)param_1 * 2;
  uVar5 = DAT_00103f64 | 1;
  uVar2 = *puVar10;
  __ptr = (undefined1 *)puVar10[1];
  uVar8 = quotearg_buffer_restyled
                    (__ptr,uVar2,param_2,0xffffffffffffffff,quote_quoting_options,uVar5,
                     &DAT_00103f68,DAT_00103f88,DAT_00103f90);
  if (uVar2 <= uVar8) {
    uVar8 = uVar8 + 1;
    *puVar10 = uVar8;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar8);
    uVar3 = quote_quoting_options;
    puVar10[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar8,param_2,0xffffffffffffffff,uVar3,uVar5,&DAT_00103f68,DAT_00103f88,
               DAT_00103f90);
  }
  *piVar6 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1 * quote(undefined8 param_1)

{
  int iVar1;
  ulong uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  uint uVar5;
  int *piVar6;
  ulong *puVar7;
  ulong uVar8;
  undefined1 *__ptr;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  piVar6 = __errno_location();
  iVar1 = *piVar6;
  puVar7 = (ulong *)slotvec;
  if (nslots < 1) {
    local_48 = (long)nslots;
    if ((ulong *)slotvec == &slotvec0) {
      puVar7 = (ulong *)xpalloc(0,&local_48,(long)(1 - nslots),0x7fffffff,0x10);
      puVar4 = PTR_slot0_00104548;
      slotvec = (undefined *)puVar7;
      *puVar7 = slotvec0;
      puVar7[1] = (ulong)puVar4;
    }
    else {
      puVar7 = (ulong *)xpalloc(slotvec,&local_48,(long)(1 - nslots),0x7fffffff,0x10);
      slotvec = (undefined *)puVar7;
    }
    memset(puVar7 + (long)nslots * 2,0,(local_48 - nslots) * 0x10);
    nslots = (int)local_48;
  }
  uVar2 = *puVar7;
  __ptr = (undefined1 *)puVar7[1];
  uVar5 = DAT_00103f64 | 1;
  uVar8 = quotearg_buffer_restyled
                    (__ptr,uVar2,param_1,0xffffffffffffffff,quote_quoting_options,uVar5,
                     &DAT_00103f68,DAT_00103f88,DAT_00103f90);
  if (uVar2 <= uVar8) {
    uVar8 = uVar8 + 1;
    *puVar7 = uVar8;
    if (__ptr != slot0) {
      free(__ptr);
    }
    __ptr = (undefined1 *)xcharalloc(uVar8);
    uVar3 = quote_quoting_options;
    puVar7[1] = (ulong)__ptr;
    quotearg_buffer_restyled
              (__ptr,uVar8,param_1,0xffffffffffffffff,uVar3,uVar5,&DAT_00103f68,DAT_00103f88,
               DAT_00103f90);
  }
  *piVar6 = iVar1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return __ptr;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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

void quotearg_n_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quotearg_n_mem_cold(void)

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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quote_n_mem_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void quote_n_cold(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


