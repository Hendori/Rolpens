
/* TOUPPER(unsigned char) */

int TOUPPER(uchar param_1)

{
  int iVar1;
  undefined3 in_register_00000039;
  
  iVar1 = CONCAT31(in_register_00000039,param_1) + -0x20;
  if (0x19 < (byte)(param_1 + 0x9f)) {
    iVar1 = CONCAT31(in_register_00000039,param_1);
  }
  return iVar1;
}



/* TOLOWER(unsigned char) */

int TOLOWER(uchar param_1)

{
  int iVar1;
  undefined3 in_register_00000039;
  
  iVar1 = CONCAT31(in_register_00000039,param_1) + 0x20;
  if (0x19 < (byte)(param_1 + 0xbf)) {
    iVar1 = CONCAT31(in_register_00000039,param_1);
  }
  return iVar1;
}



/* parse_private_use_subtag(char const*, unsigned int*, unsigned int*, char const*, unsigned char
   (*)(unsigned char)) */

undefined8
parse_private_use_subtag
          (char *param_1,uint *param_2,uint *param_3,char *param_4,_func_uchar_uchar *param_5)

{
  byte bVar1;
  uchar uVar2;
  uint uVar3;
  char *pcVar4;
  size_t sVar5;
  undefined8 uVar6;
  ulong uVar7;
  int iVar8;
  char cVar9;
  long lVar10;
  long in_FS_OFFSET;
  uint local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_2 == (uint *)0x0 || param_3 == (uint *)0x0) || (param_1 == (char *)0x0)) ||
      (*param_2 == 0)) || (pcVar4 = strstr(param_1,param_4), pcVar4 == (char *)0x0)) {
LAB_00100130:
    uVar6 = 0;
  }
  else {
    lVar10 = 0;
    sVar5 = strlen(param_4);
    pcVar4 = pcVar4 + sVar5;
    if (*pcVar4 == '-') {
      uVar7 = 0;
      do {
        bVar1 = pcVar4[uVar7 + 1];
        uVar3 = bVar1 - 0x30;
        if ((0x36 < (byte)uVar3) || ((0x7e0000007e03ffU >> ((ulong)uVar3 & 0x3f) & 1) == 0))
        goto LAB_00100130;
        if (9 < (byte)uVar3) {
          uVar3 = (uint)bVar1;
          if ((byte)(bVar1 + 0xbf) < 0x1a) {
            uVar3 = bVar1 + 0x20;
          }
          uVar3 = uVar3 - 0x57;
        }
        iVar8 = (int)uVar7 >> 1;
        if ((uVar7 & 1) == 0) {
          cVar9 = (char)(uVar3 << 4);
        }
        else {
          cVar9 = (char)uVar3 + *(char *)((long)&local_34 + (long)iVar8);
        }
        uVar7 = uVar7 + 1;
        *(char *)((long)&local_34 + (long)iVar8) = cVar9;
      } while (uVar7 != 8);
    }
    else {
      do {
        bVar1 = pcVar4[lVar10];
        if ((0x19 < (byte)((bVar1 & 0xdf) + 0xbf)) && (9 < (byte)(bVar1 - 0x30))) {
          iVar8 = (int)lVar10;
          if (iVar8 == 0) goto LAB_00100130;
          if (-iVar8 != -4) {
            uVar3 = 0;
            do {
              uVar7 = (ulong)uVar3;
              uVar3 = uVar3 + 1;
              *(undefined1 *)((long)&local_34 + uVar7 + (long)iVar8) = 0x20;
            } while (uVar3 < -iVar8 + 4U);
          }
          break;
        }
        uVar2 = (*param_5)(bVar1);
        *(uchar *)((long)&local_34 + lVar10) = uVar2;
        lVar10 = lVar10 + 1;
      } while (lVar10 != 4);
    }
    uVar3 = local_34 >> 0x18 | (local_34 & 0xff0000) >> 8 | (local_34 & 0xff00) << 8 |
            local_34 << 0x18;
    if ((uVar3 & 0xdfdfdfdf) == 0x44464c54) {
      uVar3 = uVar3 ^ 0x20202020;
    }
    *param_3 = uVar3;
    uVar6 = 1;
    *param_2 = 1;
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* hb_ot_ambiguous_tag_to_language(unsigned int) */

undefined8 hb_ot_ambiguous_tag_to_language(uint param_1)

{
  undefined8 uVar1;
  
  if (param_1 == 0x4d4c5920) {
    uVar1 = hb_language_from_string(&_LC32,0xffffffff);
    return uVar1;
  }
  if (param_1 < 0x4d4c5921) {
    if (param_1 == 0x48594520) {
      uVar1 = hb_language_from_string(&_LC16,0xffffffff);
      return uVar1;
    }
    if (param_1 < 0x48594521) {
      if (param_1 == 0x43525220) {
        uVar1 = hb_language_from_string(&_LC8,0xffffffff);
        return uVar1;
      }
      if (param_1 < 0x43525221) {
        if (param_1 == 0x42425220) {
          uVar1 = hb_language_from_string(&_LC4,0xffffffff);
          return uVar1;
        }
        if (param_1 < 0x42425221) {
          if (param_1 == 0x41524b20) {
            uVar1 = hb_language_from_string(&_LC2,0xffffffff);
            return uVar1;
          }
          if (param_1 < 0x41524b21) {
            if (param_1 == 0x414c5420) {
              uVar1 = hb_language_from_string(&_LC0,0xffffffff);
              return uVar1;
            }
            if (param_1 == 0x41505048) {
              uVar1 = hb_language_from_string("und-fonnapa",0xffffffff);
              return uVar1;
            }
          }
          else if (param_1 == 0x41544820) {
            uVar1 = hb_language_from_string(&_LC3,0xffffffff);
            return uVar1;
          }
        }
        else {
          if (param_1 == 0x42544b20) {
            uVar1 = hb_language_from_string(&_LC6,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x43505020) {
            uVar1 = hb_language_from_string(&_LC7,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x42494b20) {
            uVar1 = hb_language_from_string(&_LC5,0xffffffff);
            return uVar1;
          }
        }
      }
      else {
        if (param_1 == 0x474f4e20) {
          uVar1 = hb_language_from_string(&_LC12,0xffffffff);
          return uVar1;
        }
        if (param_1 < 0x474f4e21) {
          if (param_1 == 0x444e4b20) {
            uVar1 = hb_language_from_string(&_LC10,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x44524920) {
            uVar1 = hb_language_from_string(&_LC11,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x44475220) {
            uVar1 = hb_language_from_string(&_LC9,0xffffffff);
            return uVar1;
          }
        }
        else {
          if (param_1 == 0x484d4e20) {
            uVar1 = hb_language_from_string(&_LC14,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x484e4420) {
            uVar1 = hb_language_from_string(&_LC15,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x484d4120) {
            uVar1 = hb_language_from_string(&_LC13,0xffffffff);
            return uVar1;
          }
        }
      }
    }
    else {
      if (param_1 == 0x4b4f4820) {
        uVar1 = hb_language_from_string(&_LC24,0xffffffff);
        return uVar1;
      }
      if (param_1 < 0x4b4f4821) {
        if (param_1 == 0x49525420) {
          uVar1 = hb_language_from_string(&_LC20,0xffffffff);
          return uVar1;
        }
        if (param_1 < 0x49525421) {
          if (param_1 == 0x494a4f20) {
            uVar1 = hb_language_from_string(&_LC18,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x49505048) {
            uVar1 = hb_language_from_string("und-fonipa",0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x49424120) {
            uVar1 = hb_language_from_string(&_LC17,0xffffffff);
            return uVar1;
          }
        }
        else {
          if (param_1 == 0x4b414c20) {
            uVar1 = hb_language_from_string(&_LC22,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x4b474520) {
            uVar1 = hb_language_from_string("und-Geok",0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x4a494920) {
            uVar1 = hb_language_from_string(&_LC21,0xffffffff);
            return uVar1;
          }
        }
      }
      else {
        if (param_1 == 0x4b554920) {
          uVar1 = hb_language_from_string(&_LC28,0xffffffff);
          return uVar1;
        }
        if (param_1 < 0x4b554921) {
          if (param_1 == 0x4b504c20) {
            uVar1 = hb_language_from_string(&_LC26,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x4b524e20) {
            uVar1 = hb_language_from_string(&_LC27,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x4b4f4b20) {
            uVar1 = hb_language_from_string(&_LC25,0xffffffff);
            return uVar1;
          }
        }
        else {
          if (param_1 == 0x4c554820) {
            uVar1 = hb_language_from_string(&_LC30,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x4d415720) {
            uVar1 = hb_language_from_string(&_LC31,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x4c4d4120) {
            uVar1 = hb_language_from_string(&_LC29,0xffffffff);
            return uVar1;
          }
        }
      }
    }
  }
  else {
    if (param_1 == 0x53474120) {
      uVar1 = hb_language_from_string(&_LC48,0xffffffff);
      return uVar1;
    }
    if (param_1 < 0x53474121) {
      if (param_1 == 0x50475220) {
        uVar1 = hb_language_from_string("el-polyton",0xffffffff);
        return uVar1;
      }
      if (param_1 < 0x50475221) {
        if (param_1 == 0x4d594e20) {
          uVar1 = hb_language_from_string(&_LC36,0xffffffff);
          return uVar1;
        }
        if (param_1 < 0x4d594e21) {
          if (param_1 == 0x4d4f4c20) {
            uVar1 = hb_language_from_string("ro-MD",0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x4d4f4e54) {
            uVar1 = hb_language_from_string("mnw-TH",0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x4d4e4b20) {
            uVar1 = hb_language_from_string(&_LC33,0xffffffff);
            return uVar1;
          }
        }
        else {
          if (param_1 == 0x4e495320) {
            uVar1 = hb_language_from_string(&_LC38,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x4e4f5220) {
            uVar1 = hb_language_from_string(&_LC39,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x4e414820) {
            uVar1 = hb_language_from_string(&_LC37,0xffffffff);
            return uVar1;
          }
        }
      }
      else {
        if (param_1 == 0x51574820) {
          uVar1 = hb_language_from_string(&_LC44,0xffffffff);
          return uVar1;
        }
        if (param_1 < 0x51574821) {
          if (param_1 == 0x51554820) {
            uVar1 = hb_language_from_string(&_LC42,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x51564920) {
            uVar1 = hb_language_from_string(&_LC43,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x50524f20) {
            uVar1 = hb_language_from_string(&_LC41,0xffffffff);
            return uVar1;
          }
        }
        else {
          if (param_1 == 0x524f4d20) {
            uVar1 = hb_language_from_string(&_LC46,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x524f5920) {
            uVar1 = hb_language_from_string(&_LC47,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x52414a20) {
            uVar1 = hb_language_from_string(&_LC45,0xffffffff);
            return uVar1;
          }
        }
      }
    }
    else {
      if (param_1 == 0x544f4420) {
        uVar1 = hb_language_from_string(&_LC56,0xffffffff);
        return uVar1;
      }
      if (param_1 < 0x544f4421) {
        if (param_1 == 0x53595245) {
          uVar1 = hb_language_from_string("und-Syre",0xffffffff);
          return uVar1;
        }
        if (param_1 < 0x53595246) {
          if (param_1 == 0x53585420) {
            uVar1 = hb_language_from_string(&_LC50,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x53595220) {
            uVar1 = hb_language_from_string(&_LC51,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x53524220) {
            uVar1 = hb_language_from_string(&_LC49,0xffffffff);
            return uVar1;
          }
        }
        else {
          if (param_1 == 0x5359524e) {
            uVar1 = hb_language_from_string("und-Syrn",0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x544d4820) {
            uVar1 = hb_language_from_string(&_LC55,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x5359524a) {
            uVar1 = hb_language_from_string("und-Syrj",0xffffffff);
            return uVar1;
          }
        }
      }
      else {
        if (param_1 == 0x5a485320) {
          uVar1 = hb_language_from_string("zh-Hans",0xffffffff);
          return uVar1;
        }
        if (param_1 < 0x5a485321) {
          if (param_1 == 0x57594e20) {
            uVar1 = hb_language_from_string(&_LC58,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x5a484820) {
            uVar1 = hb_language_from_string("zh-HK",0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x57445420) {
            uVar1 = hb_language_from_string(&_LC57,0xffffffff);
            return uVar1;
          }
        }
        else {
          if (param_1 == 0x5a48544d) {
            uVar1 = hb_language_from_string("zh-MO",0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x5a5a4120) {
            uVar1 = hb_language_from_string(&_LC63,0xffffffff);
            return uVar1;
          }
          if (param_1 == 0x5a485420) {
            uVar1 = hb_language_from_string("zh-Hant",0xffffffff);
            return uVar1;
          }
        }
      }
    }
  }
  return 0;
}



void hb_ot_tag_to_language_part_0(int param_1)

{
  byte bVar1;
  ulong uVar2;
  byte *pbVar3;
  byte bVar4;
  undefined8 uVar5;
  byte bVar6;
  long in_FS_OFFSET;
  byte local_28;
  byte local_27;
  byte local_26;
  undefined1 local_25;
  undefined1 local_24 [20];
  long local_10;
  
  pbVar3 = &local_28;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = 0;
  do {
    if (*(int *)(&DAT_00106584 + uVar2 * 8) == param_1) {
      hb_tag_to_string((&ot_languages2)[(uVar2 & 0xffffffff) * 2],&local_28);
      hb_language_from_string(&local_28,2);
      goto LAB_00100b65;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0xcc);
  uVar2 = 0;
  do {
    if (param_1 == *(int *)(" eaa IQS oaa ARA taa IQS aba" + uVar2 * 8 + 4)) {
      hb_tag_to_string(*(undefined4 *)(" eaa IQS oaa ARA taa IQS aba" + (uVar2 & 0xffffffff) * 8),
                       &local_28);
      hb_language_from_string(&local_28,3);
      goto LAB_00100b65;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x4c9);
  bVar4 = (byte)((uint)param_1 >> 0x18);
  if (((((byte)((bVar4 & 0xdf) + 0xbf) < 0x1a) &&
       (bVar6 = (byte)((uint)param_1 >> 0x10), (byte)((bVar6 & 0xdf) + 0xbf) < 0x1a)) &&
      (bVar1 = (byte)((uint)param_1 >> 8), (byte)((bVar1 & 0xdf) + 0xbf) < 0x1a)) &&
     ((char)param_1 == ' ')) {
    local_25 = 0x2d;
    local_28 = bVar4;
    if ((byte)(bVar4 + 0xbf) < 0x1a) {
      local_28 = bVar4 + 0x20;
    }
    uVar5 = 0x10;
    local_27 = bVar6;
    if ((byte)(bVar6 + 0xbf) < 0x1a) {
      local_27 = bVar6 + 0x20;
    }
    local_26 = bVar1;
    if ((byte)(bVar1 + 0xbf) < 0x1a) {
      local_26 = bVar1 + 0x20;
    }
    pbVar3 = local_24;
  }
  else {
    uVar5 = 0x14;
  }
  __snprintf_chk(pbVar3,0x10,2,uVar5,"x-hbot-%08x",param_1);
  hb_language_from_string(&local_28,0xffffffff);
LAB_00100b65:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* subtag_matches(char const*, char const*, char const*, unsigned int) */

undefined8 subtag_matches(char *param_1,char *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  
  if ((uint)((int)param_2 - (int)param_1) < param_4) {
    return 0;
  }
  do {
    pcVar1 = strstr(param_1,param_3);
    if ((pcVar1 == (char *)0x0) || (param_2 <= pcVar1)) {
      return 0;
    }
    param_1 = pcVar1 + param_4;
  } while (((byte)((*param_1 & 0xdfU) + 0xbf) < 0x1a) || ((byte)(*param_1 - 0x30U) < 10));
  return 1;
}



uint hb_ot_tag_to_script(uint param_1)

{
  uint uVar1;
  
  if ((byte)((char)param_1 - 0x32U) < 2) {
    param_1 = param_1 & 0xffffff32;
    if (param_1 == 0x6d6c6d32) {
      return 0x4d6c796d;
    }
    if (param_1 < 0x6d6c6d33) {
      if (param_1 == 0x676a7232) {
        return 0x47756a72;
      }
      if (param_1 < 0x676a7233) {
        uVar1 = 0x42656e67;
        if (param_1 != 0x626e6732) {
          uVar1 = 0x5a7a7a7a;
          if (param_1 == 0x64657632) {
            uVar1 = 0x44657661;
          }
          return uVar1;
        }
      }
      else {
        uVar1 = 0x47757275;
        if (param_1 != 0x67757232) {
          uVar1 = 0x5a7a7a7a;
          if (param_1 == 0x6b6e6432) {
            uVar1 = 0x4b6e6461;
          }
          return uVar1;
        }
      }
    }
    else {
      uVar1 = 0x54656c75;
      if (param_1 != 0x74656c32) {
        if (0x74656c32 < param_1) {
          uVar1 = 0x5a7a7a7a;
          if (param_1 == 0x746d6c32) {
            uVar1 = 0x54616d6c;
          }
          return uVar1;
        }
        uVar1 = 0x4d796d72;
        if (param_1 != 0x6d796d32) {
          uVar1 = 0x5a7a7a7a;
          if (param_1 == 0x6f727932) {
            uVar1 = 0x4f727961;
          }
          return uVar1;
        }
      }
    }
  }
  else {
    if (param_1 == 0x44464c54) {
      return 0;
    }
    if (param_1 != 0x6d617468) {
      if ((param_1 & 0xff00) == 0x2000) {
        param_1 = param_1 | param_1 >> 8 & 0xff00;
      }
      if ((char)param_1 == ' ') {
        param_1 = param_1 >> 8 & 0xff | param_1;
      }
      return param_1 & 0xdfffffff;
    }
    uVar1 = 0x5a6d7468;
  }
  return uVar1;
}



void hb_ot_tags_from_script_and_language
               (uint param_1,long param_2,uint *param_3,uint *param_4,uint *param_5,uint *param_6)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  char *pcVar5;
  long lVar6;
  char *pcVar7;
  int *piVar8;
  ulong uVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  size_t sVar13;
  char *pcVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  char cVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  int iVar22;
  int iVar23;
  uint local_50;
  
  if (param_2 != 0) {
    pcVar5 = (char *)hb_language_to_string(param_2);
    cVar3 = pcVar5[1];
    if ((*pcVar5 != 'x') || (cVar3 != '-')) {
      pcVar7 = pcVar5 + 1;
      pcVar17 = pcVar7;
      if (cVar3 != '\0') {
        pcVar10 = (char *)0x0;
        cVar18 = *pcVar5;
        do {
          cVar1 = pcVar7[1];
          if ((cVar18 == '-') && (cVar1 == '-')) {
            if (cVar3 == 'x') {
              if (pcVar10 == (char *)0x0) {
                pcVar10 = pcVar7 + -1;
              }
              goto LAB_00100f3b;
            }
            if (pcVar10 == (char *)0x0) {
              pcVar10 = pcVar7 + -1;
            }
          }
          else {
            pcVar17 = pcVar7 + 1;
            if (cVar1 == '\0') goto LAB_00100f30;
          }
          pcVar7 = pcVar7 + 1;
          cVar18 = cVar3;
          cVar3 = cVar1;
        } while( true );
      }
      goto LAB_00101128;
    }
    pcVar7 = pcVar5;
    pcVar10 = (char *)0x0;
    goto LAB_00100f3b;
  }
  if ((param_5 != (uint *)0x0 && param_6 != (uint *)0x0) && (*param_5 != 0)) {
    *param_5 = 0;
  }
  bVar2 = 1;
  goto LAB_00100efe;
LAB_00100f30:
  if (pcVar10 == (char *)0x0) {
LAB_00101128:
    pcVar7 = (char *)0x0;
    pcVar10 = pcVar17;
  }
  else {
    pcVar7 = (char *)0x0;
  }
LAB_00100f3b:
  bVar2 = parse_private_use_subtag(pcVar7,param_3,param_4,"-hbsc",TOLOWER);
  cVar3 = parse_private_use_subtag(pcVar7,param_5,param_6,"-hbot",TOUPPER);
  if (((cVar3 == '\x01') || (param_5 == (uint *)0x0 || param_6 == (uint *)0x0)) || (*param_5 == 0))
  goto LAB_001010d0;
  lVar6 = (long)pcVar10 - (long)pcVar5;
  iVar22 = (int)pcVar10;
  local_50 = (uint)lVar6;
  if (((6 < lVar6) && (pcVar7 = strchr(pcVar5,0x2d), pcVar7 != (char *)0x0)) && (pcVar7 < pcVar10))
  {
    if (4 < (long)pcVar10 - (long)pcVar7) {
      uVar4 = (uint)((long)pcVar10 - (long)pcVar7);
      pcVar15 = pcVar7;
      pcVar17 = pcVar7;
      pcVar11 = pcVar7;
      if (uVar4 < 8) {
        if (uVar4 == 7) {
LAB_00102019:
          do {
            pcVar15 = strstr(pcVar11,"-fonipa");
            if ((pcVar15 == (char *)0x0) || (pcVar10 <= pcVar15)) goto LAB_001020be;
            pcVar11 = pcVar15 + 7;
          } while (((byte)((pcVar15[7] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar15[7] - 0x30U) < 10)
                  );
          uVar4 = 0x49505048;
        }
        else {
          if (uVar4 < 5) goto LAB_00100ff2;
LAB_001020be:
          do {
            pcVar11 = strstr(pcVar17,"-geok");
            pcVar17 = pcVar7;
            if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_00102154;
            pcVar17 = pcVar11 + 5;
          } while (((byte)((pcVar11[5] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar11[5] - 0x30U) < 10)
                  );
          uVar4 = 0x4b474520;
        }
      }
      else {
        do {
          pcVar12 = strstr(pcVar15,"-fonnapa");
          pcVar15 = pcVar7;
          if ((pcVar12 == (char *)0x0) || (pcVar10 <= pcVar12)) goto LAB_00101dcc;
          pcVar15 = pcVar12 + 8;
        } while (((byte)((pcVar12[8] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar12[8] - 0x30U) < 10));
        uVar4 = 0x41505048;
      }
      goto LAB_001012ff;
    }
LAB_00100ff2:
    switch(*pcVar5) {
    case 'a':
      goto switchD_00101013_caseD_61;
    default:
      pcVar7 = strchr(pcVar5,0x2d);
      break;
    case 'c':
      goto switchD_00101013_caseD_63;
    case 'g':
      goto switchD_00101013_caseD_67;
    case 'h':
      goto switchD_00101013_caseD_68;
    case 'i':
      goto switchD_00101013_caseD_69;
    case 'l':
      goto switchD_00101013_caseD_6c;
    case 'm':
      goto switchD_00101013_caseD_6d;
    case 'n':
      goto switchD_00101013_caseD_6e;
    case 'r':
      goto switchD_00101013_caseD_72;
    case 'w':
      goto switchD_00101013_caseD_77;
    case 'y':
      goto switchD_00101013_caseD_79;
    case 'z':
      goto switchD_00101013_caseD_7a;
    }
    goto LAB_001012a2;
  }
  switch(*pcVar5) {
  case 'a':
switchD_00101013_caseD_61:
    iVar23 = strcmp(pcVar5 + 1,"rt-lojban");
    if (iVar23 == 0) {
      uVar4 = 0x4a424f20;
      goto LAB_001012ff;
    }
    break;
  case 'c':
switchD_00101013_caseD_63:
    pcVar7 = pcVar5 + 1;
    uVar4 = iVar22 - (int)pcVar7;
    if (uVar4 < 10) {
      if (6 < uVar4) goto LAB_00102b66;
      goto LAB_001013c9;
    }
    iVar23 = strncmp(pcVar7,"do-hant-hk",10);
    if ((iVar23 != 0) || ((pcVar5[0xb] != '-' && (pcVar5[0xb] != '\0')))) {
      iVar23 = strncmp(pcVar7,"do-hant-mo",10);
      if ((iVar23 == 0) && ((pcVar5[0xb] == '\0' || (pcVar5[0xb] == '-')))) goto LAB_00101538;
      iVar23 = strncmp(pcVar7,"jy-hant-hk",10);
      if ((iVar23 != 0) || ((pcVar5[0xb] != '\0' && (pcVar5[0xb] != '-')))) {
        iVar23 = strncmp(pcVar7,"jy-hant-mo",10);
        if ((iVar23 == 0) && ((pcVar5[0xb] == '\0' || (pcVar5[0xb] == '-')))) goto LAB_00101538;
        iVar23 = strncmp(pcVar7,"mn-hant-hk",10);
        if ((iVar23 != 0) || ((pcVar5[0xb] != '-' && (pcVar5[0xb] != '\0')))) {
          iVar23 = strncmp(pcVar7,"mn-hant-mo",10);
          if ((iVar23 == 0) && ((pcVar5[0xb] == '-' || (pcVar5[0xb] == '\0')))) goto LAB_00101538;
          iVar23 = strncmp(pcVar7,"np-hant-hk",10);
          if ((iVar23 != 0) || ((pcVar5[0xb] != '-' && (pcVar5[0xb] != '\0')))) {
            iVar23 = strncmp(pcVar7,"np-hant-mo",10);
            if ((iVar23 == 0) && ((pcVar5[0xb] == '-' || (pcVar5[0xb] == '\0')))) goto LAB_00101538;
            iVar23 = strncmp(pcVar7,"px-hant-hk",10);
            if ((iVar23 != 0) || ((pcVar5[0xb] != '-' && (pcVar5[0xb] != '\0')))) {
              iVar23 = strncmp(pcVar7,"px-hant-mo",10);
              if ((iVar23 == 0) && ((pcVar5[0xb] == '-' || (pcVar5[0xb] == '\0'))))
              goto LAB_00101538;
              iVar23 = strncmp(pcVar7,"sp-hant-hk",10);
              if ((iVar23 != 0) || ((pcVar5[0xb] != '-' && (pcVar5[0xb] != '\0')))) {
                iVar23 = strncmp(pcVar7,"sp-hant-mo",10);
                if ((iVar23 == 0) && ((pcVar5[0xb] == '-' || (pcVar5[0xb] == '\0'))))
                goto LAB_00101538;
                iVar23 = strncmp(pcVar7,"zh-hant-hk",10);
                if ((iVar23 != 0) || ((pcVar5[0xb] != '-' && (pcVar5[0xb] != '\0')))) {
                  iVar23 = strncmp(pcVar7,"zh-hant-mo",10);
                  if (iVar23 == 0) {
                    if ((pcVar5[0xb] == '-') || (pcVar5[0xb] == '\0')) goto LAB_00101538;
                    iVar23 = strncmp(pcVar7,"zo-hant-hk",10);
                    if (iVar23 != 0) goto LAB_00103158;
LAB_00102b66:
                    iVar23 = strncmp(pcVar7,"do-hans",7);
                    if ((iVar23 == 0) && ((pcVar5[8] == '\0' || (pcVar5[8] == '-'))))
                    goto LAB_00101635;
                    iVar23 = strncmp(pcVar7,"do-hant",7);
                    if (iVar23 == 0) {
                      if ((pcVar5[8] == '-') || (pcVar5[8] == '\0')) goto LAB_00101c45;
                    }
                    else {
                      iVar23 = strncmp(pcVar7,"jy-hans",7);
                      if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0'))))
                      goto LAB_00101635;
                    }
                    iVar23 = strncmp(pcVar7,"jy-hant",7);
                    if (iVar23 == 0) {
                      if ((pcVar5[8] == '\0') || (pcVar5[8] == '-')) goto LAB_00101c45;
                    }
                    else {
                      iVar23 = strncmp(pcVar7,"mn-hans",7);
                      if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0'))))
                      goto LAB_00101635;
                    }
                    iVar23 = strncmp(pcVar7,"mn-hant",7);
                    if (iVar23 == 0) {
                      if ((pcVar5[8] == '-') || (pcVar5[8] == '\0')) goto LAB_00101c45;
                    }
                    else {
                      iVar23 = strncmp(pcVar7,"np-hans",7);
                      if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0'))))
                      goto LAB_00101635;
                    }
                    iVar23 = strncmp(pcVar7,"np-hant",7);
                    if (iVar23 == 0) {
                      if ((pcVar5[8] == '-') || (pcVar5[8] == '\0')) goto LAB_00101c45;
                    }
                    else {
                      iVar23 = strncmp(pcVar7,"px-hans",7);
                      if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0'))))
                      goto LAB_00101635;
                    }
                    iVar23 = strncmp(pcVar7,"px-hant",7);
                    if (iVar23 == 0) {
                      if ((pcVar5[8] == '-') || (pcVar5[8] == '\0')) goto LAB_00101c45;
                    }
                    else {
                      iVar23 = strncmp(pcVar7,"sp-hans",7);
                      if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0'))))
                      goto LAB_00101635;
                    }
                    iVar23 = strncmp(pcVar7,"sp-hant",7);
                    if (iVar23 == 0) {
                      if ((pcVar5[8] == '-') || (pcVar5[8] == '\0')) goto LAB_00101c45;
                    }
                    else {
                      iVar23 = strncmp(pcVar7,"zh-hans",7);
                      if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0'))))
                      goto LAB_00101635;
                    }
                    iVar23 = strncmp(pcVar7,"zh-hant",7);
                    if (iVar23 == 0) {
                      if ((pcVar5[8] == '-') || (pcVar5[8] == '\0')) goto LAB_00101c45;
                      iVar23 = strncmp(pcVar7,"zo-hans",7);
                      if (iVar23 != 0) goto LAB_00102d02;
                    }
                    else {
                      iVar23 = strncmp(pcVar7,"zo-hans",7);
                      if (iVar23 == 0) {
                        if ((pcVar5[8] != '\0') && (pcVar5[8] != '-')) goto LAB_001013c9;
                        goto LAB_00101635;
                      }
LAB_00102d02:
                      iVar23 = strncmp(pcVar7,"zo-hant",7);
                      if ((iVar23 == 0) && ((pcVar5[8] == '\0' || (pcVar5[8] == '-'))))
                      goto LAB_00101c45;
                    }
LAB_001013c9:
                    pcVar17 = pcVar5;
                    pcVar11 = pcVar5;
                    pcVar15 = pcVar5;
                    pcVar12 = pcVar5;
                    if ((*pcVar7 == 'd') && ((pcVar5[2] == 'o' && (pcVar5[3] == '-')))) {
                      pcVar16 = pcVar5;
                      if (local_50 < 3) {
LAB_001013f6:
                        iVar23 = strncmp(pcVar7,"mn-",3);
                        if (iVar23 == 0) {
                          if (local_50 < 3) {
                            iVar23 = strncmp(pcVar7,"np-",3);
                            if (iVar23 != 0) goto LAB_001021c3;
LAB_00101439:
                            iVar23 = strncmp(pcVar7,"px-",3);
                            if (iVar23 == 0) goto LAB_00101451;
                            goto LAB_00101495;
                          }
LAB_00102245:
                          do {
                            pcVar16 = strstr(pcVar11,"-hk");
                            pcVar17 = pcVar5;
                            if ((pcVar16 == (char *)0x0) || (pcVar10 <= pcVar16)) goto LAB_001022d3;
                            pcVar11 = pcVar16 + 3;
                          } while (((byte)((pcVar16[3] & 0xdfU) + 0xbf) < 0x1a) ||
                                  ((byte)(pcVar16[3] - 0x30U) < 10));
                        }
                        else {
LAB_00101412:
                          iVar23 = strncmp(pcVar7,"np-",3);
                          if (iVar23 != 0) {
LAB_001021c3:
                            iVar23 = strncmp(pcVar7,"px-",3);
                            if (iVar23 == 0) {
                              if (2 < local_50) {
LAB_001021f9:
                                do {
                                  pcVar17 = strstr(pcVar15,"-hk");
                                  if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17))
                                  goto LAB_00101451;
                                  pcVar15 = pcVar17 + 3;
                                } while (((byte)((pcVar17[3] & 0xdfU) + 0xbf) < 0x1a) ||
                                        ((byte)(pcVar17[3] - 0x30U) < 10));
                                goto LAB_001013a3;
                              }
LAB_00101451:
                              cVar3 = subtag_matches(pcVar5,pcVar10,"-mo",3);
                              if (cVar3 != '\0') goto LAB_00101538;
                              cVar3 = subtag_matches(pcVar5,pcVar10,"-tw",3);
                              if (cVar3 != '\0') goto LAB_00101c45;
                            }
LAB_00101495:
                            iVar23 = strncmp(pcVar7,"sp-",3);
                            if (iVar23 == 0) {
                              cVar3 = subtag_matches(pcVar5,pcVar10,"-hk",3);
                              if (cVar3 != '\0') goto LAB_001013a3;
                              cVar3 = subtag_matches(pcVar5,pcVar10,"-mo",3);
                              if (cVar3 != '\0') goto LAB_00101538;
                              cVar3 = subtag_matches(pcVar5,pcVar10,"-tw",3);
                              if (cVar3 != '\0') goto LAB_00101c45;
                              iVar23 = strncmp(pcVar7,"zh-",3);
                              if (iVar23 == 0) goto LAB_001026f8;
                              iVar23 = strncmp(pcVar7,"zo-",3);
                              if (iVar23 == 0) goto LAB_0010151b;
                            }
                            else {
                              iVar23 = strncmp(pcVar7,"zh-",3);
                              if (iVar23 == 0) {
                                cVar3 = subtag_matches(pcVar5,pcVar10,"-hk",3);
                                uVar4 = 0x5a484820;
                                if (cVar3 != '\0') goto LAB_001012ff;
                                cVar3 = subtag_matches(pcVar5,pcVar10,"-mo",3);
                                if (cVar3 != '\0') goto LAB_00101538;
LAB_001026f8:
                                cVar3 = subtag_matches(pcVar5,pcVar10,"-tw",3);
                                if (cVar3 != '\0') goto LAB_00101c45;
                                iVar23 = strncmp(pcVar7,"zo-",3);
                                if (iVar23 == 0) goto LAB_00102731;
                              }
                              else {
                                iVar23 = strncmp(pcVar7,"zo-",3);
                                if (iVar23 == 0) {
                                  cVar3 = subtag_matches(pcVar5,pcVar10,"-hk",3);
                                  uVar4 = 0x5a484820;
                                  if (cVar3 != '\0') goto LAB_001012ff;
LAB_0010151b:
                                  cVar3 = subtag_matches(pcVar5,pcVar10,"-mo",3);
                                  if (cVar3 != '\0') goto LAB_00101538;
LAB_00102731:
                                  cVar3 = subtag_matches(pcVar5,pcVar10,"-tw",3);
                                  if (cVar3 != '\0') goto LAB_00101c45;
                                }
                              }
                            }
                            break;
                          }
                          if (local_50 < 3) goto LAB_00101439;
LAB_001025da:
                          do {
                            pcVar11 = strstr(pcVar12,"-hk");
                            pcVar17 = pcVar5;
                            if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_0010266a;
                            pcVar12 = pcVar11 + 3;
                          } while (((byte)((pcVar11[3] & 0xdfU) + 0xbf) < 0x1a) ||
                                  ((byte)(pcVar11[3] - 0x30U) < 10));
                        }
                      }
                      else {
                        do {
                          pcVar14 = strstr(pcVar16,"-hk");
                          pcVar16 = pcVar5;
                          if ((pcVar14 == (char *)0x0) || (pcVar10 <= pcVar14)) goto LAB_0010288c;
                          pcVar16 = pcVar14 + 3;
                        } while (((byte)((pcVar14[3] & 0xdfU) + 0xbf) < 0x1a) ||
                                ((byte)(pcVar14[3] - 0x30U) < 10));
                      }
                    }
                    else {
                      iVar23 = strncmp(pcVar7,"jy-",3);
                      if ((iVar23 != 0) || (local_50 < 3)) goto LAB_001013f6;
LAB_00102a6f:
                      do {
                        pcVar16 = strstr(pcVar17,"-hk");
                        pcVar17 = pcVar5;
                        if ((pcVar16 == (char *)0x0) || (pcVar10 <= pcVar16)) goto LAB_00102af8;
                        pcVar17 = pcVar16 + 3;
                      } while (((byte)((pcVar16[3] & 0xdfU) + 0xbf) < 0x1a) ||
                              ((byte)(pcVar16[3] - 0x30U) < 10));
                    }
                  }
                  else {
                    iVar23 = strncmp(pcVar7,"zo-hant-hk",10);
                    if (iVar23 != 0) {
LAB_00103158:
                      iVar23 = strncmp(pcVar7,"zo-hant-mo",10);
                      if ((iVar23 != 0) || ((pcVar5[0xb] != '-' && (pcVar5[0xb] != '\0'))))
                      goto LAB_00102b66;
                      goto LAB_00101538;
                    }
                    if ((pcVar5[0xb] != '-') && (pcVar5[0xb] != '\0')) goto LAB_00102b66;
                  }
                }
              }
            }
          }
        }
      }
    }
    goto LAB_001013a3;
  case 'g':
switchD_00101013_caseD_67:
    pcVar7 = pcVar5 + 1;
    uVar4 = iVar22 - (int)pcVar7;
    if (uVar4 < 10) {
      if (6 < uVar4) goto LAB_00103227;
      if (uVar4 == 6) goto LAB_00103254;
    }
    else {
      iVar23 = strncmp(pcVar7,"an-hant-hk",10);
      if (iVar23 == 0) {
        if ((pcVar5[0xb] == '-') || (pcVar5[0xb] == '\0')) goto LAB_001013a3;
      }
      else {
        iVar23 = strncmp(pcVar7,"an-hant-mo",10);
        if ((iVar23 == 0) && ((pcVar5[0xb] == '-' || (pcVar5[0xb] == '\0')))) goto LAB_00101538;
      }
LAB_00103227:
      iVar23 = strncmp(pcVar7,"an-hans",7);
      if (iVar23 == 0) {
        if ((pcVar5[8] == '\0') || (pcVar5[8] == '-')) goto LAB_00101635;
      }
      else {
        iVar23 = strncmp(pcVar7,"an-hant",7);
        if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0')))) goto LAB_00101c45;
      }
LAB_00103254:
      iVar23 = strncmp(pcVar7,"a-latg",6);
      if ((iVar23 == 0) && ((pcVar5[7] == '-' || (pcVar5[7] == '\0')))) {
        uVar4 = 0x49525420;
        goto LAB_001012ff;
      }
    }
    if ((((*pcVar7 == 'a') && (pcVar5[2] == 'n')) && (pcVar5[3] == '-')) &&
       (pcVar7 = pcVar5, 2 < local_50)) {
      do {
        pcVar17 = strstr(pcVar7,"-hk");
        pcVar7 = pcVar5;
        if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto LAB_001032c9;
        pcVar7 = pcVar17 + 3;
      } while (((byte)((pcVar17[3] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar17[3] - 0x30U) < 10));
      goto LAB_001013a3;
    }
    break;
  case 'h':
switchD_00101013_caseD_68:
    pcVar7 = pcVar5 + 1;
    uVar4 = iVar22 - (int)pcVar7;
    if (uVar4 < 10) {
      if (6 < uVar4) goto LAB_001023e1;
      goto LAB_001016ad;
    }
    iVar23 = strncmp(pcVar7,"ak-hant-hk",10);
    if ((iVar23 == 0) && ((pcVar5[0xb] == '-' || (pcVar5[0xb] == '\0')))) goto LAB_001013a3;
    iVar23 = strncmp(pcVar7,"ak-hant-mo",10);
    if (iVar23 == 0) {
      if ((pcVar5[0xb] == '-') || (pcVar5[0xb] == '\0')) goto LAB_00101538;
      iVar23 = strncmp(pcVar7,"sn-hant-hk",10);
      if (iVar23 != 0) goto LAB_0010250b;
    }
    else {
      iVar23 = strncmp(pcVar7,"sn-hant-hk",10);
      if (iVar23 == 0) {
        if ((pcVar5[0xb] != '-') && (pcVar5[0xb] != '\0')) goto LAB_001023e1;
        goto LAB_001013a3;
      }
LAB_0010250b:
      iVar23 = strncmp(pcVar7,"sn-hant-mo",10);
      if ((iVar23 == 0) && ((pcVar5[0xb] == '-' || (pcVar5[0xb] == '\0')))) goto LAB_00101538;
    }
LAB_001023e1:
    iVar23 = strncmp(pcVar7,"ak-hans",7);
    if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0')))) goto LAB_00101635;
    iVar23 = strncmp(pcVar7,"ak-hant",7);
    if (iVar23 == 0) {
      if ((pcVar5[8] == '-') || (pcVar5[8] == '\0')) goto LAB_00101c45;
      iVar23 = strncmp(pcVar7,"sn-hans",7);
      if (iVar23 != 0) goto LAB_0010245b;
    }
    else {
      iVar23 = strncmp(pcVar7,"sn-hans",7);
      if (iVar23 == 0) {
        if ((pcVar5[8] != '\0') && (pcVar5[8] != '-')) goto LAB_001016ad;
        goto LAB_00101635;
      }
LAB_0010245b:
      iVar23 = strncmp(pcVar7,"sn-hant",7);
      if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0')))) goto LAB_00101c45;
    }
LAB_001016ad:
    if ((*pcVar7 == 'a') && ((pcVar5[2] == 'k' && (pcVar5[3] == '-')))) {
      pcVar17 = pcVar5;
      if (2 < local_50) {
        do {
          pcVar11 = strstr(pcVar17,"-hk");
          pcVar17 = pcVar5;
          if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_00102068;
          pcVar17 = pcVar11 + 3;
        } while (((byte)((pcVar11[3] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar11[3] - 0x30U) < 10));
        goto LAB_001013a3;
      }
    }
    else {
LAB_001016b7:
      iVar23 = strncmp(pcVar7,"sn-",3);
      if ((iVar23 == 0) && (pcVar7 = pcVar5, 2 < local_50)) {
        do {
          pcVar17 = strstr(pcVar7,"-hk");
          pcVar7 = pcVar5;
          if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto LAB_00102586;
          pcVar7 = pcVar17 + 3;
        } while (((byte)((pcVar17[3] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar17[3] - 0x30U) < 10));
        goto LAB_001013a3;
      }
    }
    break;
  case 'i':
switchD_00101013_caseD_69:
    pcVar7 = pcVar5 + 1;
    iVar23 = strcmp(pcVar7,"-navajo");
    if (iVar23 != 0) {
      iVar23 = strcmp(pcVar7,"-hak");
      if (iVar23 == 0) goto LAB_00101635;
      iVar23 = strcmp(pcVar7,"-lux");
      if (iVar23 == 0) {
        uVar4 = 0x4c545a20;
        goto LAB_001012ff;
      }
      break;
    }
    *param_6 = 0x4e415620;
    if (1 < *param_5) {
      param_6[1] = 0x41544820;
      *param_5 = 2;
      goto LAB_001010d0;
    }
    goto LAB_00101303;
  case 'l':
switchD_00101013_caseD_6c:
    if ((6 < (uint)(iVar22 - (int)(pcVar5 + 1))) &&
       ((iVar23 = strncmp(pcVar5 + 1,"zh-hans",7), iVar23 == 0 &&
        ((pcVar5[8] == '\0' || (pcVar5[8] == '-')))))) {
LAB_00101635:
      uVar4 = 0x5a485320;
      goto LAB_001012ff;
    }
    break;
  case 'm':
switchD_00101013_caseD_6d:
    pcVar7 = pcVar5 + 1;
    uVar4 = iVar22 - (int)pcVar7;
    if (uVar4 < 10) {
      if (6 < uVar4) goto LAB_00103598;
    }
    else {
      iVar23 = strncmp(pcVar7,"np-hant-hk",10);
      if (iVar23 == 0) {
        if ((pcVar5[0xb] == '-') || (pcVar5[0xb] == '\0')) goto LAB_001013a3;
      }
      else {
        iVar23 = strncmp(pcVar7,"np-hant-mo",10);
        if ((iVar23 == 0) && ((pcVar5[0xb] == '-' || (pcVar5[0xb] == '\0')))) goto LAB_00101538;
      }
LAB_00103598:
      iVar23 = strncmp(pcVar7,"np-hans",7);
      if (iVar23 == 0) {
        if ((pcVar5[8] == '-') || (pcVar5[8] == '\0')) goto LAB_00101635;
      }
      else {
        iVar23 = strncmp(pcVar7,"np-hant",7);
        if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0')))) goto LAB_00101c45;
      }
    }
    if (((*pcVar7 == 'n') && (pcVar5[2] == 'p')) && (pcVar5[3] == '-')) {
      pcVar17 = pcVar5;
      if (2 < local_50) {
        do {
          pcVar11 = strstr(pcVar17,"-hk");
          pcVar17 = pcVar5;
          if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_00101f25;
          pcVar17 = pcVar11 + 3;
        } while (((byte)((pcVar11[3] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar11[3] - 0x30U) < 10));
        goto LAB_001013a3;
      }
    }
    else {
LAB_00101584:
      iVar23 = strncmp(pcVar7,"nw-",3);
      if ((iVar23 == 0) && (pcVar7 = pcVar5, 2 < local_50)) {
        do {
          pcVar17 = strstr(pcVar7,"-th");
          if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto switchD_001011cc_caseD_62;
          pcVar7 = pcVar17 + 3;
        } while (((byte)((pcVar17[3] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar17[3] - 0x30U) < 10));
        uVar4 = 0x4d4f4e54;
        goto LAB_001012ff;
      }
    }
    break;
  case 'n':
switchD_00101013_caseD_6e:
    pcVar7 = pcVar5 + 1;
    uVar4 = iVar22 - (int)pcVar7;
    if (uVar4 < 10) {
      if (6 < uVar4) goto LAB_001033ad;
    }
    else {
      iVar23 = strncmp(pcVar7,"an-hant-hk",10);
      if (iVar23 == 0) {
        if ((pcVar5[0xb] == '-') || (pcVar5[0xb] == '\0')) goto LAB_001013a3;
      }
      else {
        iVar23 = strncmp(pcVar7,"an-hant-mo",10);
        if ((iVar23 == 0) && ((pcVar5[0xb] == '-' || (pcVar5[0xb] == '\0')))) goto LAB_00101538;
      }
LAB_001033ad:
      iVar23 = strncmp(pcVar7,"an-hans",7);
      if (iVar23 == 0) {
        if ((pcVar5[8] == '-') || (pcVar5[8] == '\0')) goto LAB_00101635;
      }
      else {
        iVar23 = strncmp(pcVar7,"an-hant",7);
        if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0')))) goto LAB_00101c45;
      }
    }
    if ((((*pcVar7 != 'a') || (pcVar5[2] != 'n')) || (pcVar5[3] != '-')) ||
       (pcVar17 = pcVar5, local_50 < 3)) {
LAB_0010188a:
      iVar23 = strcmp(pcVar7,"o-bok");
      if (iVar23 == 0) {
        uVar4 = 0x4e4f5220;
      }
      else {
        iVar23 = strcmp(pcVar7,"o-nyn");
        if (iVar23 != 0) break;
        uVar4 = 0x4e594e20;
      }
      goto LAB_001012ff;
    }
    do {
      pcVar11 = strstr(pcVar17,"-hk");
      pcVar17 = pcVar5;
      if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_0010352a;
      pcVar17 = pcVar11 + 3;
    } while (((byte)((pcVar11[3] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar11[3] - 0x30U) < 10));
LAB_001013a3:
    uVar4 = 0x5a484820;
    goto LAB_001012ff;
  case 'r':
switchD_00101013_caseD_72:
    if (((pcVar5[1] == 'o') && (pcVar5[2] == '-')) && (pcVar7 = pcVar5, 2 < local_50)) {
      do {
        pcVar17 = strstr(pcVar7,"-md");
        if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto switchD_001011cc_caseD_62;
        pcVar7 = pcVar17 + 3;
      } while (((byte)((pcVar17[3] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar17[3] - 0x30U) < 10));
      *param_6 = 0x4d4f4c20;
      if (1 < *param_5) {
        param_6[1] = 0x524f4d20;
        *param_5 = 2;
        goto LAB_001010d0;
      }
      goto LAB_00101303;
    }
    break;
  case 'w':
switchD_00101013_caseD_77:
    pcVar7 = pcVar5 + 1;
    uVar4 = iVar22 - (int)pcVar7;
    if (uVar4 < 10) {
      if (6 < uVar4) goto LAB_001035ff;
    }
    else {
      iVar23 = strncmp(pcVar7,"uu-hant-hk",10);
      if (iVar23 == 0) {
        if ((pcVar5[0xb] == '-') || (pcVar5[0xb] == '\0')) goto LAB_001013a3;
      }
      else {
        iVar23 = strncmp(pcVar7,"uu-hant-mo",10);
        if ((iVar23 == 0) && ((pcVar5[0xb] == '-' || (pcVar5[0xb] == '\0')))) goto LAB_00101538;
      }
LAB_001035ff:
      iVar23 = strncmp(pcVar7,"uu-hans",7);
      if (iVar23 == 0) {
        if ((pcVar5[8] == '-') || (pcVar5[8] == '\0')) goto LAB_00101635;
      }
      else {
        iVar23 = strncmp(pcVar7,"uu-hant",7);
        if ((iVar23 == 0) && ((pcVar5[8] == '-' || (pcVar5[8] == '\0')))) goto LAB_00101c45;
      }
    }
    if ((((*pcVar7 == 'u') && (pcVar5[2] == 'u')) && (pcVar5[3] == '-')) &&
       (pcVar7 = pcVar5, 2 < local_50)) {
      do {
        pcVar17 = strstr(pcVar7,"-hk");
        pcVar7 = pcVar5;
        if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto LAB_00103456;
        pcVar7 = pcVar17 + 3;
      } while (((byte)((pcVar17[3] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar17[3] - 0x30U) < 10));
      goto LAB_001013a3;
    }
    break;
  case 'y':
switchD_00101013_caseD_79:
    if (((6 < (uint)(iVar22 - (int)(pcVar5 + 1))) &&
        (iVar23 = strncmp(pcVar5 + 1,"ue-hans",7), iVar23 == 0)) &&
       ((pcVar5[8] == '-' || (pcVar5[8] == '\0')))) goto LAB_00101635;
    break;
  case 'z':
switchD_00101013_caseD_7a:
    pcVar7 = pcVar5 + 1;
    uVar4 = iVar22 - (int)pcVar7;
    if (uVar4 < 9) {
      iVar23 = strcmp(pcVar7,"h-min-nan");
      if (iVar23 == 0) goto LAB_00101635;
      if (5 < uVar4) goto LAB_0010279b;
    }
    else {
      iVar23 = strncmp(pcVar7,"h-hant-hk",9);
      if (iVar23 == 0) {
        if ((pcVar5[10] == '-') || (pcVar5[10] == '\0')) goto LAB_001013a3;
      }
      else {
        iVar23 = strncmp(pcVar7,"h-hant-mo",9);
        if ((iVar23 == 0) && ((pcVar5[10] == '-' || (pcVar5[10] == '\0')))) goto LAB_00101538;
      }
      iVar23 = strcmp(pcVar7,"h-min-nan");
      if (iVar23 == 0) goto LAB_00101635;
LAB_0010279b:
      iVar23 = strncmp(pcVar7,"h-hans",6);
      if (iVar23 == 0) {
        if ((pcVar5[7] == '-') || (pcVar5[7] == '\0')) goto LAB_00101635;
      }
      else {
        iVar23 = strncmp(pcVar7,"h-hant",6);
        if ((iVar23 == 0) && ((pcVar5[7] == '-' || (pcVar5[7] == '\0')))) goto LAB_00101c45;
      }
    }
    iVar23 = strcmp(pcVar7,"h-min");
    if (iVar23 == 0) goto LAB_00101635;
    if (((*pcVar7 == 'h') && (pcVar5[2] == '-')) && (pcVar7 = pcVar5, 2 < local_50)) {
      do {
        pcVar17 = strstr(pcVar7,"-hk");
        pcVar7 = pcVar5;
        if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto LAB_00102848;
        pcVar7 = pcVar17 + 3;
      } while (((byte)((pcVar17[3] & 0xdfU) + 0xbf) < 0x1a) || ((byte)(pcVar17[3] - 0x30U) < 10));
      goto LAB_001013a3;
    }
  }
switchD_001011cc_caseD_62:
  pcVar7 = strchr(pcVar5,0x2d);
  pcVar10 = pcVar7;
  pcVar17 = pcVar5;
  if ((lVar6 < 6) || (pcVar7 == (char *)0x0)) {
LAB_00101228:
    iVar22 = iVar22 - (int)pcVar17;
    pcVar15 = pcVar10;
    pcVar5 = pcVar17;
    if (pcVar10 != (char *)0x0) goto LAB_00101233;
  }
  else {
LAB_001012a2:
    pcVar17 = pcVar7 + 1;
    pcVar10 = strchr(pcVar17,0x2d);
    if (pcVar10 == (char *)0x0) {
      pcVar11 = (char *)strlen(pcVar17);
    }
    else {
      pcVar11 = pcVar10 + (-1 - (long)pcVar7);
    }
    pcVar15 = pcVar7;
    if ((pcVar11 == (char *)0x3) && ((byte)((pcVar7[1] & 0xdfU) + 0xbf) < 0x1a)) goto LAB_00101228;
LAB_00101233:
    iVar22 = (int)pcVar15 - (int)pcVar5;
    pcVar17 = pcVar5;
  }
  if (iVar22 == 2) {
    uVar4 = 0xcc;
    pcVar5 = 
    "  aa RFA  ba KBA  fa KFA  ka AKA  ma HMA  na GRA  ra ARA  sa MSA  va RVA  ya MYA  za EZA  ab HSB  eb LEB  gb RGB  ib SIB  ib PPC  mb BMB  nb NEB  ob BIT  rb ERB  sb SOB  ac TAC  ec EHC  hc AHC  oc SOC  rc ERC  sc YSC  uc LSC  vc UHC  yc LEW  ad NAD  ed UED  vd VID  vd VHD  zd NZD  ee EWE  le LLE  ne GNE  oe OTN  se PSE  te ITE  ue QUE  af RAF  ff LUF  if NIF  jf IJF  of SOF  rf ARF  yf IRF  ag IRI  ag TRI  dg EAG  lg LAG  ng AUG  ug JUG  vg XNM  ah UAH  eh RWI  ih NIH  oh OMH  oh PPC  rh VRH  th IAH  th PPC  uh NUH  yh0EYH  yh EYH  zh REH  ai ANI  di DNI  di YLM  ei ELI  gi OBI  ii MIY  ki KPI  ni DNI  ni YLM  oi ODI  si LSI  ti ATI  ui UNI  uiKUNI  wi RWI  aj NAJ  ij IIJ  vj VAJ  wj VAJ  ak TAK  gk0NOK  ik KIK  jk AUK  kk ZAK  lk NRG  mk MHK  nk NAK  ok ROK  ok HOK  rk RNK  sk HSK  uk RUK  vk MOK  wk ROC  yk RIK  al TAL  bl ZTL  gl GUL  il MIL  nl NIL  ol OAL  tl HTL  ul BUL  vl IVL  gm GLM  hm HAM  im IRM  km DKM  lm LAM  lm RLM  nm GNM  om LOM  om MOR  rm RAM  sm YLM  tm STM  ym MRB  an UAN  bn RON  dn BDN  en PEN  gn GDN  ln DLN  nn NYN  on RON  rn BDN  vn VAN  vn HTA  yn IHC  co ICO  jo BJO  mo ORO  ro IRO  so SSO  ap NAP  ip LAP  lp KLP  sp SAP  tp GTP  uq ZUQ  mr SMR  nr NUR  or MOR  ur SUR  wr AUR  as NAS  cs DRS  ds DNS  es MSN  gs OGS  hs SOB  hs VRH  hs BRS  is HNS  ks YKS  ls VLS  ms OMS  ns0ANS  os LMS  qs IQS  rs BRS  ss ZWS  ts TOS  us NUS  vs EVS  ws KWS  at MAT  et LET  gt JAT  ht AHT  it YGT  kt MKT  lt LGT  nt ANT  ot NGT  rt KRT  st GST  tt TAT  wt IWT  wt AKA  yt THT  gu GYU  ku RKU  ru DRU  zu BZU  ev NEV  iv TIV  ov LOV  aw NLW  ow FLW  hx SHX  iy IIJ  oy ABY  az AHZ  hz SHZ  uz LUZ\x04"
    ;
LAB_00101023:
    uVar20 = hb_tag_from_string();
    uVar21 = (ulong)hb_ot_tags_from_language(char_const*,char_const*,unsigned_int*,unsigned_int*)::
                    last_tag_idx;
    if ((uVar4 <= hb_ot_tags_from_language(char_const*,char_const*,unsigned_int*,unsigned_int*)::
                  last_tag_idx) ||
       (*(uint *)(pcVar5 + (ulong)hb_ot_tags_from_language(char_const*,char_const*,unsigned_int*,unsigned_int*)
                                  ::last_tag_idx * 8) != uVar20)) {
      iVar22 = uVar4 - 1;
      iVar23 = 0;
      do {
        uVar19 = (uint)(iVar23 + iVar22) >> 1;
        uVar21 = (ulong)uVar19;
        if (uVar20 < *(uint *)(pcVar5 + uVar21 * 8)) {
          iVar22 = uVar19 - 1;
        }
        else {
          if (uVar20 <= *(uint *)(pcVar5 + uVar21 * 8)) goto LAB_00101052;
          iVar23 = uVar19 + 1;
        }
      } while (iVar23 <= iVar22);
      goto LAB_00101262;
    }
LAB_00101052:
    hb_ot_tags_from_language(char_const*,char_const*,unsigned_int*,unsigned_int*)::last_tag_idx =
         (uint)uVar21;
    piVar8 = (int *)(pcVar5 + uVar21 * 8);
    while (uVar20 = (uint)uVar21, uVar20 != 0) {
      iVar22 = *piVar8;
      piVar8 = piVar8 + -2;
      if (iVar22 != *(int *)(pcVar5 + (ulong)(uVar20 - 1) * 8)) {
        uVar19 = *param_5;
        if (uVar19 == 0) goto LAB_001010c5;
        if (uVar20 < uVar4) goto LAB_00101082;
        *param_5 = 0;
        goto LAB_001010d0;
      }
      uVar21 = (ulong)(uVar20 - 1);
    }
    uVar19 = *param_5;
    if (uVar19 != 0) {
LAB_00101082:
      uVar19 = 0;
      uVar9 = uVar21;
      while ((*(uint *)(pcVar5 + uVar9 * 8 + 4) != 0 &&
             (*(int *)(pcVar5 + uVar9 * 8) == *(int *)(pcVar5 + uVar21 * 8)))) {
        param_6[uVar9 - uVar21] = *(uint *)(pcVar5 + uVar9 * 8 + 4);
        uVar19 = uVar19 + 1;
        if ((*param_5 <= uVar19) || (uVar9 = uVar9 + 1, uVar19 == uVar4 - uVar20)) break;
      }
    }
LAB_001010c5:
    *param_5 = uVar19;
  }
  else {
    if (iVar22 == 3) {
      uVar4 = 0x4c9;
      pcVar5 = " eaa IQS oaa ARA taa IQS aba";
      goto LAB_00101023;
    }
    hb_tag_from_string(pcVar17);
LAB_00101262:
    if (pcVar7 == (char *)0x0) {
      sVar13 = strlen(pcVar17);
      pcVar7 = pcVar17 + sVar13;
    }
    if ((long)pcVar7 - (long)pcVar17 == 3) {
      uVar4 = hb_tag_from_string(pcVar17,3);
      *param_6 = uVar4 & 0xdfdfdfff;
      *param_5 = 1;
    }
    else {
      *param_5 = 0;
    }
  }
  goto LAB_001010d0;
  while( true ) {
    pcVar15 = pcVar12 + 8;
    if ((0x19 < (byte)((pcVar12[8] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar12[8] - 0x30U))) break;
LAB_00101dcc:
    pcVar12 = strstr(pcVar15,"-polyton");
    pcVar15 = pcVar7;
    if ((pcVar12 == (char *)0x0) || (pcVar10 <= pcVar12)) goto LAB_00101ea1;
  }
  uVar4 = 0x50475220;
  goto LAB_001012ff;
  while( true ) {
    pcVar15 = pcVar12 + 8;
    if ((0x19 < (byte)((pcVar12[8] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar12[8] - 0x30U))) break;
LAB_00101ea1:
    pcVar12 = strstr(pcVar15,"-arevmda");
    pcVar15 = pcVar7;
    if ((pcVar12 == (char *)0x0) || (pcVar10 <= pcVar12)) goto LAB_00101f70;
  }
  uVar4 = 0x48594520;
  goto LAB_001012ff;
  while( true ) {
    pcVar15 = pcVar12 + 8;
    if ((0x19 < (byte)((pcVar12[8] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar12[8] - 0x30U))) break;
LAB_00101f70:
    pcVar12 = strstr(pcVar15,"-provenc");
    if ((pcVar12 == (char *)0x0) || (pcVar10 <= pcVar12)) goto LAB_00102019;
  }
  uVar4 = 0x50524f20;
  goto LAB_001012ff;
  while( true ) {
    pcVar17 = pcVar11 + 5;
    if ((0x19 < (byte)((pcVar11[5] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[5] - 0x30U))) break;
LAB_00102154:
    pcVar11 = strstr(pcVar17,"-syre");
    pcVar17 = pcVar7;
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_00102284;
  }
  uVar4 = 0x53595245;
  goto LAB_001012ff;
  while( true ) {
    pcVar17 = pcVar11 + 5;
    if ((0x19 < (byte)((pcVar11[5] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[5] - 0x30U))) break;
LAB_00102284:
    pcVar11 = strstr(pcVar17,"-syrj");
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_0010231a;
  }
  uVar4 = 0x5359524a;
  goto LAB_001012ff;
  while( true ) {
    pcVar7 = pcVar17 + 5;
    if ((0x19 < (byte)((pcVar17[5] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar17[5] - 0x30U))) break;
LAB_0010231a:
    pcVar17 = strstr(pcVar7,"-syrn");
    if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto LAB_00100ff2;
  }
  uVar4 = 0x5359524e;
  goto LAB_001012ff;
  while( true ) {
    pcVar7 = pcVar17 + 3;
    if ((0x19 < (byte)((pcVar17[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar17[3] - 0x30U))) break;
LAB_00102848:
    pcVar17 = strstr(pcVar7,"-mo");
    pcVar7 = pcVar5;
    if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto LAB_001028d0;
  }
  goto LAB_00101538;
  while( true ) {
    pcVar7 = pcVar17 + 3;
    if ((0x19 < (byte)((pcVar17[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar17[3] - 0x30U))) break;
LAB_001028d0:
    pcVar17 = strstr(pcVar7,"-tw");
    if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto switchD_001011cc_caseD_62;
  }
  goto LAB_00101c45;
  while( true ) {
    pcVar7 = pcVar17 + 3;
    if ((0x19 < (byte)((pcVar17[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar17[3] - 0x30U))) break;
LAB_00103456:
    pcVar17 = strstr(pcVar7,"-mo");
    pcVar7 = pcVar5;
    if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto LAB_001034de;
  }
  goto LAB_00101538;
  while( true ) {
    pcVar7 = pcVar17 + 3;
    if ((0x19 < (byte)((pcVar17[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar17[3] - 0x30U))) break;
LAB_001034de:
    pcVar17 = strstr(pcVar7,"-tw");
    if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto switchD_001011cc_caseD_62;
  }
  goto LAB_00101c45;
  while( true ) {
    pcVar17 = pcVar11 + 3;
    if ((0x19 < (byte)((pcVar11[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[3] - 0x30U))) break;
LAB_0010352a:
    pcVar11 = strstr(pcVar17,"-mo");
    pcVar17 = pcVar5;
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_00101c0d;
  }
  goto LAB_00101538;
  while( true ) {
    pcVar17 = pcVar11 + 3;
    if ((0x19 < (byte)((pcVar11[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[3] - 0x30U))) break;
LAB_00101c0d:
    pcVar11 = strstr(pcVar17,"-tw");
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_0010188a;
  }
  goto LAB_00101c45;
  while( true ) {
    pcVar17 = pcVar11 + 3;
    if ((0x19 < (byte)((pcVar11[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[3] - 0x30U))) break;
LAB_00101f25:
    pcVar11 = strstr(pcVar17,"-mo");
    pcVar17 = pcVar5;
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_00101fbf;
  }
  goto LAB_00101538;
  while( true ) {
    pcVar17 = pcVar11 + 3;
    if ((0x19 < (byte)((pcVar11[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[3] - 0x30U))) break;
LAB_00101fbf:
    pcVar11 = strstr(pcVar17,"-tw");
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_00101584;
  }
  goto LAB_00101c45;
  while( true ) {
    pcVar17 = pcVar11 + 3;
    if ((0x19 < (byte)((pcVar11[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[3] - 0x30U))) break;
LAB_00102068:
    pcVar11 = strstr(pcVar17,"-mo");
    pcVar17 = pcVar5;
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_0010210d;
  }
  goto LAB_00101538;
  while( true ) {
    pcVar17 = pcVar11 + 3;
    if ((0x19 < (byte)((pcVar11[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[3] - 0x30U))) break;
LAB_0010210d:
    pcVar11 = strstr(pcVar17,"-tw");
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_001016b7;
  }
  goto LAB_00101c45;
  while( true ) {
    pcVar7 = pcVar17 + 3;
    if ((0x19 < (byte)((pcVar17[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar17[3] - 0x30U))) break;
LAB_00102586:
    pcVar17 = strstr(pcVar7,"-mo");
    pcVar7 = pcVar5;
    if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto LAB_0010261e;
  }
  goto LAB_00101538;
  while( true ) {
    pcVar7 = pcVar17 + 3;
    if ((0x19 < (byte)((pcVar17[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar17[3] - 0x30U))) break;
LAB_0010261e:
    pcVar17 = strstr(pcVar7,"-tw");
    if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto switchD_001011cc_caseD_62;
  }
  goto LAB_00101c45;
  while( true ) {
    pcVar7 = pcVar17 + 3;
    if ((0x19 < (byte)((pcVar17[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar17[3] - 0x30U))) break;
LAB_001032c9:
    pcVar17 = strstr(pcVar7,"-mo");
    pcVar7 = pcVar5;
    if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto LAB_0010330d;
  }
  goto LAB_00101538;
  while( true ) {
    pcVar7 = pcVar17 + 3;
    if ((0x19 < (byte)((pcVar17[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar17[3] - 0x30U))) break;
LAB_0010330d:
    pcVar17 = strstr(pcVar7,"-tw");
    if ((pcVar17 == (char *)0x0) || (pcVar10 <= pcVar17)) goto switchD_001011cc_caseD_62;
  }
  goto LAB_00101c45;
  while( true ) {
    pcVar16 = pcVar14 + 3;
    if ((0x19 < (byte)((pcVar14[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar14[3] - 0x30U))) break;
LAB_0010288c:
    pcVar14 = strstr(pcVar16,"-mo");
    pcVar16 = pcVar5;
    if ((pcVar14 == (char *)0x0) || (pcVar10 <= pcVar14)) goto LAB_0010291c;
  }
  goto LAB_00101538;
  while( true ) {
    pcVar16 = pcVar14 + 3;
    if ((0x19 < (byte)((pcVar14[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar14[3] - 0x30U))) break;
LAB_0010291c:
    pcVar14 = strstr(pcVar16,"-tw");
    if ((pcVar14 == (char *)0x0) || (pcVar10 <= pcVar14)) {
      iVar23 = strncmp(pcVar7,"jy-",3);
      if (iVar23 != 0) goto LAB_001013f6;
      goto LAB_00102a6f;
    }
  }
  goto LAB_00101c45;
  while( true ) {
    pcVar17 = pcVar16 + 3;
    if ((0x19 < (byte)((pcVar16[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar16[3] - 0x30U))) break;
LAB_00102af8:
    pcVar16 = strstr(pcVar17,"-mo");
    pcVar17 = pcVar5;
    if ((pcVar16 == (char *)0x0) || (pcVar10 <= pcVar16)) goto LAB_0010319d;
  }
  goto LAB_00101538;
  while( true ) {
    pcVar17 = pcVar16 + 3;
    if ((0x19 < (byte)((pcVar16[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar16[3] - 0x30U))) break;
LAB_0010319d:
    pcVar16 = strstr(pcVar17,"-tw");
    if ((pcVar16 == (char *)0x0) || (pcVar10 <= pcVar16)) {
      iVar23 = strncmp(pcVar7,"mn-",3);
      if (iVar23 != 0) goto LAB_00101412;
      goto LAB_00102245;
    }
  }
  goto LAB_00101c45;
  while( true ) {
    pcVar17 = pcVar11 + 3;
    if ((0x19 < (byte)((pcVar11[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[3] - 0x30U))) break;
LAB_001022d3:
    pcVar11 = strstr(pcVar17,"-mo");
    pcVar17 = pcVar5;
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_00102369;
  }
  goto LAB_00101538;
  while( true ) {
    pcVar17 = pcVar11 + 3;
    if ((0x19 < (byte)((pcVar11[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[3] - 0x30U))) break;
LAB_00102369:
    pcVar11 = strstr(pcVar17,"-tw");
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) {
      iVar23 = strncmp(pcVar7,"np-",3);
      if (iVar23 != 0) goto LAB_001021c3;
      goto LAB_001025da;
    }
  }
  goto LAB_00101c45;
  while( true ) {
    pcVar17 = pcVar11 + 3;
    if ((0x19 < (byte)((pcVar11[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[3] - 0x30U))) break;
LAB_00102a23:
    pcVar11 = strstr(pcVar17,"-tw");
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) {
      iVar23 = strncmp(pcVar7,"px-",3);
      if (iVar23 != 0) goto LAB_00101495;
      goto LAB_001021f9;
    }
  }
LAB_00101c45:
  uVar4 = 0x5a485420;
LAB_001012ff:
  *param_6 = uVar4;
  goto LAB_00101303;
  while( true ) {
    pcVar17 = pcVar11 + 3;
    if ((0x19 < (byte)((pcVar11[3] & 0xdfU) + 0xbf)) && (9 < (byte)(pcVar11[3] - 0x30U))) break;
LAB_0010266a:
    pcVar11 = strstr(pcVar17,"-mo");
    pcVar17 = pcVar5;
    if ((pcVar11 == (char *)0x0) || (pcVar10 <= pcVar11)) goto LAB_00102a23;
  }
LAB_00101538:
  *param_6 = 0x5a48544d;
  if (*param_5 < 2) {
LAB_00101303:
    *param_5 = 1;
  }
  else {
    param_6[1] = 0x5a484820;
    *param_5 = 2;
  }
LAB_001010d0:
  bVar2 = bVar2 ^ 1;
LAB_00100efe:
  if (((param_3 == (uint *)0x0 || param_4 == (uint *)0x0) || (bVar2 == 0)) || (*param_3 == 0)) {
    return;
  }
  if (param_1 == 0x4d6c796d) {
    uVar4 = 0x6d6c6d33;
    uVar20 = 0x6d6c6d32;
    goto LAB_00101188;
  }
  if (param_1 < 0x4d6c796e) {
    if (param_1 == 0x47756a72) {
      uVar4 = 0x676a7233;
      uVar20 = 0x676a7232;
      goto LAB_00101188;
    }
    if (param_1 < 0x47756a73) {
      if (param_1 != 0x42656e67) {
        uVar4 = 0x64657633;
        uVar20 = 0x64657632;
        if (param_1 == 0x44657661) goto LAB_00101188;
        uVar4 = 0;
LAB_001019e7:
        if (param_1 == 0) goto LAB_0010119d;
        goto LAB_001019f3;
      }
      uVar4 = 0x626e6733;
      uVar20 = 0x626e6732;
LAB_00101188:
      *param_4 = uVar4;
      if (*param_3 < 2) {
        uVar4 = 1;
        goto LAB_0010119d;
      }
      lVar6 = 1;
LAB_00101adf:
      uVar4 = (int)lVar6 + 1;
      param_4[lVar6] = uVar20;
      if (*param_3 <= uVar4) goto LAB_0010119d;
      if (param_1 == 0x4e6b6f6f) {
        uVar21 = (ulong)uVar4;
        uVar20 = 0x6e6b6f20;
      }
      else {
        if (0x4e6b6f6f < param_1) goto LAB_00101b1e;
        if (param_1 != 0x48697261) goto LAB_001019d9;
        uVar21 = (ulong)uVar4;
        uVar20 = 0x6b616e61;
      }
    }
    else {
      if (param_1 == 0x47757275) {
        uVar4 = 0x67757233;
        uVar20 = 0x67757232;
        goto LAB_00101188;
      }
      uVar4 = 0x6b6e6433;
      uVar20 = 0x6b6e6432;
      if (param_1 == 0x4b6e6461) goto LAB_00101188;
      if (param_1 != 0x48697261) {
        if (param_1 == 0x4c616f6f) {
          uVar21 = 0;
          uVar20 = 0x6c616f20;
          goto LAB_001019ff;
        }
        uVar4 = 0;
        goto LAB_001019f3;
      }
      uVar21 = 0;
      uVar20 = 0x6b616e61;
    }
  }
  else {
    if (param_1 == 0x54616d6c) {
      uVar4 = 0x746d6c33;
      uVar20 = 0x746d6c32;
      goto LAB_00101188;
    }
    if (param_1 < 0x54616d6d) {
      if (param_1 == 0x4d796d72) {
        lVar6 = 0;
        uVar20 = 0x6d796d32;
        goto LAB_00101adf;
      }
      uVar4 = 0x6f727933;
      uVar20 = 0x6f727932;
      if (param_1 == 0x4f727961) goto LAB_00101188;
      if (param_1 == 0x4e6b6f6f) {
        uVar21 = 0;
        uVar20 = 0x6e6b6f20;
        goto LAB_001019ff;
      }
      uVar4 = 0;
      if (param_1 < 0x4e6b6f70) {
LAB_001019d9:
        if (param_1 == 0x4c616f6f) {
          uVar21 = (ulong)uVar4;
          uVar20 = 0x6c616f20;
          goto LAB_001019ff;
        }
        goto LAB_001019e7;
      }
    }
    else {
      if (param_1 == 0x54656c75) {
        uVar4 = 0x74656c33;
        uVar20 = 0x74656c32;
        goto LAB_00101188;
      }
      uVar4 = 0;
LAB_00101b1e:
      if (param_1 == 0x59696969) {
        uVar21 = (ulong)uVar4;
        uVar20 = 0x79692020;
        goto LAB_001019ff;
      }
    }
    uVar21 = (ulong)uVar4;
    uVar20 = 0x6d617468;
    if ((param_1 != 0x5a6d7468) && (uVar20 = 0x76616920, param_1 != 0x56616969)) {
LAB_001019f3:
      uVar21 = (ulong)uVar4;
      uVar20 = param_1 | 0x20000000;
    }
  }
LAB_001019ff:
  uVar4 = (int)uVar21 + 1;
  param_4[uVar21] = uVar20;
LAB_0010119d:
  *param_3 = uVar4;
  return;
}



void hb_ot_tags_from_script(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  long in_FS_OFFSET;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 2;
  hb_ot_tags_from_script_and_language(param_1,0,&local_2c,&local_28,0,0);
  if (local_2c == 0) {
    *param_2 = 0x44464c54;
  }
  else {
    *param_2 = local_28;
    if (local_2c != 1) goto LAB_00103768;
  }
  local_24 = 0x44464c54;
LAB_00103768:
  *param_3 = local_24;
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



undefined4 hb_ot_tag_from_language(undefined8 param_1)

{
  long in_FS_OFFSET;
  int local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 1;
  hb_ot_tags_from_script_and_language(0x5a7a7a7a,param_1,0,0,&local_18,&local_14);
  if (local_18 == 0) {
    local_14 = 0x64666c74;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_14;
}



long hb_ot_tag_to_language(uint param_1)

{
  long lVar1;
  
  if (param_1 == 0x64666c74) {
    return 0;
  }
  lVar1 = hb_ot_ambiguous_tag_to_language(param_1);
  if (lVar1 != 0) {
    return lVar1;
  }
  lVar1 = hb_ot_tag_to_language_part_0(param_1);
  return lVar1;
}



void hb_ot_tags_to_script_and_language(uint param_1,uint param_2,undefined4 *param_3,long *param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  char *__s;
  size_t sVar5;
  void *__ptr;
  int iVar6;
  long in_FS_OFFSET;
  int local_48;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = hb_ot_tag_to_script();
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar3;
  }
  if (param_4 != (long *)0x0) {
    local_48 = 1;
    hb_ot_tags_from_script_and_language(uVar3,0,&local_48,&local_44,0,0);
    if (param_2 == 0x64666c74) {
      lVar4 = 0;
    }
    else {
      lVar4 = hb_ot_ambiguous_tag_to_language(param_2);
      if (lVar4 == 0) {
        lVar4 = hb_ot_tag_to_language_part_0(param_2);
      }
    }
    *param_4 = lVar4;
    if ((local_48 == 0) || (local_44 != param_1)) {
      __s = (char *)hb_language_to_string(lVar4);
      sVar5 = strlen(__s);
      __ptr = malloc(sVar5 + 0x10);
      if (__ptr != (void *)0x0) {
        if (sVar5 != 0) {
          __memcpy_chk(__ptr,__s,sVar5,sVar5 + 0x10);
        }
        if ((*__s != 'x') || (__s[1] != '-')) {
          *(undefined2 *)((long)__ptr + sVar5) = 0x782d;
          sVar5 = sVar5 + 2;
        }
        iVar6 = 0x1c;
        *(undefined4 *)((long)__ptr + sVar5) = 0x7362682d;
        *(undefined2 *)((long)__ptr + sVar5 + 4) = 0x2d63;
        lVar4 = (long)__ptr + sVar5;
        do {
          bVar1 = (byte)(param_1 >> ((byte)iVar6 & 0x1f)) & 0xf;
          cVar2 = bVar1 + 0x30;
          if (9 < bVar1) {
            cVar2 = bVar1 + 0x57;
          }
          iVar6 = iVar6 + -4;
          *(char *)(lVar4 + 6) = cVar2;
          lVar4 = lVar4 + 1;
        } while (iVar6 != -4);
        lVar4 = hb_language_from_string(__ptr,(int)sVar5 + 0xe);
        *param_4 = lVar4;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          free(__ptr);
          return;
        }
        goto LAB_00103a20;
      }
      *param_4 = 0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103a20:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


