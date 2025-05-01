
/* parse_space(char const**, char const*) */

undefined8 parse_space(char **param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  pbVar2 = (byte *)*param_1;
  if (pbVar2 < param_2) {
    do {
      bVar1 = *pbVar2;
      if (((0x20 < bVar1) || ((0x100003400U >> ((ulong)bVar1 & 0x3f) & 1) == 0)) &&
         ((bVar1 & 0xfd) != 9)) {
        return 1;
      }
      pbVar2 = pbVar2 + 1;
      *param_1 = (char *)pbVar2;
    } while (pbVar2 != (byte *)param_2);
  }
  return 1;
}



/* WARNING: Type propagation algorithm not settling */
/* lang_find_or_insert(char const*) */

undefined8 * lang_find_or_insert(char *param_1)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  size_t sVar5;
  void *pvVar6;
  byte *pbVar7;
  char cVar8;
  byte *pbVar9;
  bool bVar10;
  
  puVar4 = langs;
joined_r0x00100057:
  do {
    while (puVar3 = langs, puVar4 == (undefined8 *)0x0) {
      puVar4 = (undefined8 *)calloc(1,0x10);
      if (puVar4 == (undefined8 *)0x0) {
        return (undefined8 *)0x0;
      }
      *puVar4 = puVar3;
      sVar5 = strlen(param_1);
      sVar5 = sVar5 + 1;
      pvVar6 = malloc(sVar5);
      puVar4[1] = pvVar6;
      if (pvVar6 == (void *)0x0) {
        free(puVar4);
        return (undefined8 *)0x0;
      }
      pbVar7 = (byte *)__memcpy_chk(pvVar6,param_1,sVar5,sVar5);
      bVar1 = *pbVar7;
      while (bVar1 != 0) {
        *pbVar7 = (&canon_map)[bVar1];
        bVar1 = pbVar7[1];
        pbVar7 = pbVar7 + 1;
      }
      LOCK();
      bVar10 = puVar3 == langs;
      puVar3 = puVar4;
      if (!bVar10) {
        puVar3 = langs;
      }
      langs = puVar3;
      UNLOCK();
      if (bVar10) {
        return puVar4;
      }
      free((void *)puVar4[1]);
      free(puVar4);
      puVar4 = langs;
    }
    pbVar7 = (byte *)puVar4[1];
    bVar1 = *pbVar7;
    pbVar2 = (byte *)param_1;
    if (bVar1 == 0) {
      cVar8 = (&canon_map)[(byte)*param_1];
    }
    else {
      do {
        pbVar9 = pbVar2;
        if ((uint)bVar1 != (int)(char)(&canon_map)[*pbVar9]) {
          puVar4 = (undefined8 *)*puVar4;
          goto joined_r0x00100057;
        }
        bVar1 = pbVar7[1];
        pbVar7 = pbVar7 + 1;
        pbVar2 = pbVar9 + 1;
      } while (bVar1 != 0);
      cVar8 = (&canon_map)[pbVar9[1]];
    }
    if (cVar8 == '\0') {
      return puVar4;
    }
    puVar4 = (undefined8 *)*puVar4;
  } while( true );
}



uint hb_tag_from_string(char *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  uint local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if ((param_1 == (char *)0x0) || (param_2 == 0)) {
    uVar1 = 0;
  }
  else if (*param_1 != '\0') {
    if (4 < param_2) {
      param_2 = 4;
    }
    uVar3 = 0;
    do {
      uVar2 = uVar3;
      uVar3 = uVar2 & 0xffffffff;
      if (param_1[uVar2] == '\0') goto LAB_001002a6;
      *(char *)((long)&local_14 + uVar2) = param_1[uVar2];
      uVar3 = uVar2 + 1;
    } while ((uint)(uVar2 + 1) < param_2);
    uVar1 = (int)uVar2 + 1;
    uVar3 = (ulong)uVar1;
    if (uVar1 != 4) {
LAB_001002a6:
      if (-(int)uVar3 != -4) {
        uVar1 = 0;
        do {
          uVar2 = (ulong)uVar1;
          uVar1 = uVar1 + 1;
          *(undefined1 *)((long)&local_14 + uVar2 + uVar3) = 0x20;
        } while (uVar1 < -(int)uVar3 + 4U);
      }
    }
    uVar1 = local_14 >> 0x18 | (local_14 & 0xff0000) >> 8 | (local_14 & 0xff00) << 8 |
            local_14 << 0x18;
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* parse_tag(char const**, char const*, unsigned int*) */

undefined8 parse_tag(char **param_1,char *param_2,uint *param_3)

{
  uint uVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ulong uVar5;
  
  parse_space(param_1,param_2);
  pbVar2 = (byte *)*param_1;
  if (pbVar2 < param_2) {
    bVar4 = *pbVar2;
    if ((bVar4 == 0x22) || (bVar4 == 0x27)) {
      pbVar2 = pbVar2 + 1;
      *param_1 = (char *)pbVar2;
      pbVar3 = pbVar2;
      if (param_2 <= pbVar2) {
        return 0;
      }
    }
    else {
      bVar4 = 0;
      pbVar3 = pbVar2;
    }
    do {
      uVar1 = *pbVar2 - 0x20;
      if ((((byte)uVar1 < 0x3c) && ((0x800000020000001U >> ((ulong)uVar1 & 0x3f) & 1) != 0)) ||
         (*pbVar2 == bVar4)) {
        if (pbVar2 == pbVar3) {
          return 0;
        }
        break;
      }
      pbVar2 = pbVar2 + 1;
      *param_1 = (char *)pbVar2;
    } while (pbVar2 != (byte *)param_2);
    uVar5 = (long)pbVar2 - (long)pbVar3;
    if ((long)uVar5 < 5) {
      uVar1 = hb_tag_from_string(pbVar3,uVar5 & 0xffffffff);
      *param_3 = uVar1;
      if (bVar4 != 0) {
        if ((byte *)param_2 == pbVar2) {
          return 0;
        }
        if (uVar5 != 4) {
          return 0;
        }
        if (*pbVar2 != bVar4) {
          return 0;
        }
        *param_1 = (char *)(pbVar2 + 1);
      }
      return 1;
    }
  }
  return 0;
}



void hb_tag_to_string(uint param_1,uint *param_2)

{
  *param_2 = param_1 >> 0x18 | (param_1 & 0xff0000) >> 8 | (param_1 & 0xff00) << 8 | param_1 << 0x18
  ;
  return;
}



undefined8 hb_direction_from_string(char *param_1,int param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  if (((param_1 == (char *)0x0) || (param_2 == 0)) || (cVar1 = *param_1, cVar1 == '\0')) {
    return 0;
  }
  if ((byte)(cVar1 + 0xbfU) < 0x1a) {
    cVar1 = cVar1 + ' ';
  }
  if (cVar1 != 'l') {
    if (cVar1 == 'r') {
      return 5;
    }
    if (cVar1 != 't') {
      uVar2 = 0;
      if (cVar1 == 'b') {
        uVar2 = 7;
      }
      return uVar2;
    }
    return 6;
  }
  return 4;
}



char * hb_direction_to_string(int param_1)

{
  char *pcVar1;
  
  pcVar1 = "invalid";
  if (param_1 - 4U < 4) {
    pcVar1 = direction_strings + (long)(int)(param_1 - 4U) * 4;
  }
  return pcVar1;
}



undefined8 hb_language_from_string(char *param_1,int param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 uVar3;
  size_t __n;
  long in_FS_OFFSET;
  undefined1 auStack_58 [72];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (char *)0x0) && (param_2 != 0)) && (*param_1 != '\0')) {
    if (param_2 < 0) {
      lVar2 = lang_find_or_insert(param_1);
    }
    else {
      if (param_2 < 0x40) {
        __n = (size_t)param_2;
      }
      else {
        __n = 0x3f;
      }
      pcVar1 = (char *)memcpy(auStack_58,param_1,__n);
      auStack_58[__n] = 0;
      lVar2 = lang_find_or_insert(pcVar1);
    }
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(lVar2 + 8);
      goto LAB_001004f9;
    }
  }
  uVar3 = 0;
LAB_001004f9:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 hb_language_to_string(undefined8 param_1)

{
  return param_1;
}



long hb_language_get_default(void)

{
  long lVar1;
  long lVar2;
  
  lVar2 = hb_language_get_default::default_language;
  if (hb_language_get_default::default_language == 0) {
    lVar1 = lang_find_or_insert("C");
    if (lVar1 != 0) {
      lVar1 = *(long *)(lVar1 + 8);
      lVar2 = lVar1;
    }
    LOCK();
    if (hb_language_get_default::default_language != 0) {
      lVar2 = hb_language_get_default::default_language;
    }
    hb_language_get_default::default_language = lVar2;
    UNLOCK();
    return lVar1;
  }
  return hb_language_get_default::default_language;
}



bool hb_language_matches(char *param_1,char *param_2)

{
  int iVar1;
  size_t sVar2;
  size_t sVar3;
  bool bVar4;
  
  if (param_1 == param_2) {
    return true;
  }
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    sVar2 = strlen(param_1);
    bVar4 = false;
    sVar3 = strlen(param_2);
    if ((uint)sVar2 <= (uint)sVar3) {
      iVar1 = strncmp(param_1,param_2,sVar2 & 0xffffffff);
      if (iVar1 == 0) {
        bVar4 = param_2[sVar2 & 0xffffffff] == '-' || param_2[sVar2 & 0xffffffff] == '\0';
      }
    }
    return bVar4;
  }
  return false;
}



uint hb_script_from_iso15924_tag(uint param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return 0;
  }
  uVar1 = param_1 & 0xdfdfdfdf | 0x202020;
  if (uVar1 == 0x4a616d6f) {
    return 0x48616e67;
  }
  if (uVar1 < 0x4a616d70) {
    if (uVar1 == 0x47656f6b) {
      return 0x47656f72;
    }
    if (uVar1 < 0x47656f6c) {
      if (uVar1 == 0x4172616e) {
        return 0x41726162;
      }
      if (uVar1 == 0x43797273) {
        return 0x4379726c;
      }
    }
    else if (uVar1 + 0xb79e918d < 2) {
      return 0x48616e69;
    }
  }
  else {
    if (uVar1 == 0x51616163) {
      return 0x436f7074;
    }
    if (uVar1 < 0x51616164) {
      if (uVar1 + 0xb39e8b9a < 2) {
        return 0x4c61746e;
      }
    }
    else {
      if (uVar1 == 0x51616169) {
        return 0x5a696e68;
      }
      if ((uVar1 + 0xac868d9b < 10) && ((0x221UL >> ((ulong)(uVar1 + 0xac868d9b) & 0x3f) & 1) != 0))
      {
        return 0x53797263;
      }
    }
  }
  if ((param_1 & 0xc0c0c0c0 | 0x202020) != 0x40606060) {
    uVar1 = 0x5a7a7a7a;
  }
  return uVar1;
}



ulong hb_script_from_string(void)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  uVar2 = hb_tag_from_string();
  uVar1 = (uint)uVar2;
  if (uVar1 != 0) {
    uVar3 = uVar1 & 0xdfdfdfdf | 0x202020;
    if (uVar3 == 0x4a616d6f) {
      uVar2 = 0x48616e67;
    }
    else {
      if (uVar3 < 0x4a616d70) {
        if (uVar3 == 0x47656f6b) {
          return 0x47656f72;
        }
        if (uVar3 < 0x47656f6c) {
          if (uVar3 == 0x4172616e) {
            return 0x41726162;
          }
          if (uVar3 == 0x43797273) {
            return 0x4379726c;
          }
        }
        else if (uVar3 + 0xb79e918d < 2) {
          return 0x48616e69;
        }
      }
      else {
        if (uVar3 == 0x51616163) {
          return 0x436f7074;
        }
        if (uVar3 < 0x51616164) {
          if (uVar3 + 0xb39e8b9a < 2) {
            return 0x4c61746e;
          }
        }
        else {
          if (uVar3 == 0x51616169) {
            return 0x5a696e68;
          }
          if ((uVar3 + 0xac868d9b < 10) &&
             ((0x221UL >> ((ulong)(uVar3 + 0xac868d9b) & 0x3f) & 1) != 0)) {
            return 0x53797263;
          }
        }
      }
      uVar2 = 0x5a7a7a7a;
      if ((uVar1 & 0xc0c0c0c0 | 0x202020) == 0x40606060) {
        uVar2 = (ulong)uVar3;
      }
    }
  }
  return uVar2;
}



undefined4 hb_script_to_iso15924_tag(undefined4 param_1)

{
  return param_1;
}



char hb_script_get_horizontal_direction(uint param_1)

{
  if (param_1 != 0x4e626174) {
    if (param_1 < 0x4e626175) {
      if (param_1 == 0x48756e67) {
        return '\0';
      }
      if (param_1 < 0x48756e68) {
        if (param_1 != 0x43687273) {
          if (param_1 < 0x43687274) {
            if (param_1 != 0x41726d69) {
              if (0x41726d69 < param_1) {
                return (param_1 == 0x41767374) + '\x04';
              }
              if (param_1 == 0x41646c6d) {
                return '\x05';
              }
              return (param_1 == 0x41726162) + '\x04';
            }
          }
          else if (param_1 != 0x48617472) {
            if (0x48617472 < param_1) {
              return (param_1 == 0x48656272) + '\x04';
            }
            if (param_1 == 0x43707274) {
              return '\x05';
            }
            return (param_1 == 0x456c796d) + '\x04';
          }
        }
      }
      else {
        if (param_1 == 0x4974616c) {
          return '\0';
        }
        if (param_1 < 0x4974616c) {
          return '\x04';
        }
        if (param_1 != 0x4d656e64) {
          if (0x4d656e64 < param_1) {
            if (param_1 == 0x4d65726f) {
              return '\x05';
            }
            if (param_1 == 0x4e617262) {
              return '\x05';
            }
            return (param_1 == 0x4d657263) + '\x04';
          }
          if (param_1 != 0x4d616e64) {
            if (0x4d616e64 < param_1) {
              return (param_1 == 0x4d616e69) + '\x04';
            }
            if (param_1 == 0x4b686172) {
              return '\x05';
            }
            return (param_1 == 0x4c796469) + '\x04';
          }
        }
      }
    }
    else {
      if (param_1 == 0x52756e72) {
        return '\0';
      }
      if (param_1 < 0x52756e73) {
        if (param_1 != 0x50686c69) {
          if (param_1 < 0x50686c6a) {
            if (param_1 != 0x4f756772) {
              if (0x4f756772 < param_1) {
                return (param_1 == 0x50616c6d) + '\x04';
              }
              if (param_1 == 0x4e6b6f6f) {
                return '\x05';
              }
              return (param_1 == 0x4f726b68) + '\x04';
            }
          }
          else if (param_1 != 0x50727469) {
            if (0x50727469 < param_1) {
              return (param_1 == 0x526f6867) + '\x04';
            }
            if (param_1 == 0x50686c70) {
              return '\x05';
            }
            return (param_1 == 0x50686e78) + '\x04';
          }
        }
      }
      else {
        if (param_1 == 0x54666e67) {
          return '\0';
        }
        if (param_1 < 0x54666e68) {
          if (param_1 != 0x536f6764) {
            if (0x536f6764 < param_1) {
              if (param_1 == 0x536f676f) {
                return '\x05';
              }
              return (param_1 == 0x53797263) + '\x04';
            }
            if (param_1 == 0x53616d72) {
              return '\x05';
            }
            return (param_1 == 0x53617262) + '\x04';
          }
        }
        else if (param_1 != 0x54686161) {
          return (param_1 == 0x59657a69) + '\x04';
        }
      }
    }
  }
  return '\x05';
}



void hb_version(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_1 = 10;
  *param_2 = 1;
  *param_3 = 0;
  return;
}



char * hb_version_string(void)

{
  return "10.1.0";
}



bool hb_version_atleast(int param_1,int param_2,int param_3)

{
  return (uint)(param_2 * 100 + param_3 + param_1 * 10000) < 0x18705;
}



undefined8 hb_feature_from_string(byte *param_1,int param_2,undefined1 (*param_3) [16])

{
  char cVar1;
  char cVar2;
  byte bVar3;
  size_t sVar4;
  undefined8 uVar5;
  byte *pbVar6;
  byte **ppbVar7;
  long in_FS_OFFSET;
  byte *local_60 [2];
  int local_4c;
  uint local_48;
  int iStack_44;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60[0] = param_1;
  if (param_2 < 0) {
    sVar4 = strlen((char *)param_1);
    param_2 = (int)sVar4;
  }
  param_1 = param_1 + param_2;
  parse_space((char **)local_60,(char *)param_1);
  if ((param_1 == local_60[0]) || (*local_60[0] != 0x2d)) {
    parse_space((char **)local_60,(char *)param_1);
    if ((param_1 == local_60[0]) || (*local_60[0] != 0x2b)) {
      iStack_44 = 1;
    }
    else {
      local_60[0] = local_60[0] + 1;
      iStack_44 = 1;
    }
  }
  else {
    local_60[0] = local_60[0] + 1;
    iStack_44 = 0;
  }
  cVar1 = parse_tag((char **)local_60,(char *)param_1,&local_48);
  if (cVar1 != '\0') {
    pbVar6 = param_1;
    ppbVar7 = local_60;
    parse_space((char **)local_60,(char *)param_1);
    uStack_40 = _LC5;
    parse_space((char **)ppbVar7,(char *)pbVar6);
    if ((param_1 != local_60[0]) && (*local_60[0] == 0x5b)) {
      local_60[0] = local_60[0] + 1;
      cVar2 = hb_parse_int((char **)ppbVar7,(char *)pbVar6,&local_4c,false);
      if (cVar2 != '\0') {
        uStack_40 = CONCAT44(uStack_40._4_4_,local_4c);
      }
      parse_space((char **)local_60,(char *)param_1);
      if (((param_1 == local_60[0]) || (*local_60[0] != 0x3a)) &&
         ((parse_space((char **)local_60,(char *)param_1), param_1 == local_60[0] ||
          (*local_60[0] != 0x3b)))) {
        if (cVar2 != '\0') {
          uStack_40 = CONCAT44((int)uStack_40 + 1,(int)uStack_40);
        }
      }
      else {
        local_60[0] = local_60[0] + 1;
        cVar2 = hb_parse_int((char **)local_60,(char *)param_1,&local_4c,false);
        if (cVar2 != '\0') {
          uStack_40 = CONCAT44(local_4c,(int)uStack_40);
        }
      }
      parse_space((char **)local_60,(char *)param_1);
      if ((param_1 == local_60[0]) || (*local_60[0] != 0x5d)) goto LAB_00100c21;
      local_60[0] = local_60[0] + 1;
    }
    parse_space((char **)local_60,(char *)param_1);
    if ((param_1 == local_60[0]) || (*local_60[0] != 0x3d)) {
      cVar1 = '\0';
    }
    else {
      local_60[0] = local_60[0] + 1;
    }
    cVar2 = hb_parse_int((char **)local_60,(char *)param_1,&local_4c,false);
    if (cVar2 == '\0') {
      parse_space((char **)local_60,(char *)param_1);
      pbVar6 = local_60[0];
      if (local_60[0] < param_1) {
        do {
          if (0x19 < (byte)((*local_60[0] & 0xdf) + 0xbf)) break;
          local_60[0] = local_60[0] + 1;
        } while (param_1 != local_60[0]);
        if ((long)local_60[0] - (long)pbVar6 == 2) {
          bVar3 = *pbVar6;
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 + 0x20;
          }
          if (bVar3 == 0x6f) {
            bVar3 = pbVar6[1];
            if ((byte)(bVar3 + 0xbf) < 0x1a) {
              bVar3 = bVar3 + 0x20;
            }
            if (bVar3 == 0x6e) {
              iStack_44 = 1;
              goto LAB_00100d17;
            }
          }
        }
        else if ((long)local_60[0] - (long)pbVar6 == 3) {
          bVar3 = *pbVar6;
          if ((byte)(bVar3 + 0xbf) < 0x1a) {
            bVar3 = bVar3 + 0x20;
          }
          if (bVar3 == 0x6f) {
            bVar3 = pbVar6[1];
            if ((byte)(bVar3 + 0xbf) < 0x1a) {
              bVar3 = bVar3 + 0x20;
            }
            if (bVar3 == 0x66) {
              bVar3 = pbVar6[2];
              if ((byte)(bVar3 + 0xbf) < 0x1a) {
                bVar3 = bVar3 + 0x20;
              }
              if (bVar3 == 0x66) {
                iStack_44 = 0;
                goto LAB_00100d17;
              }
            }
          }
        }
      }
      if (cVar1 != '\0') goto LAB_00100c21;
    }
    else {
      iStack_44 = local_4c;
    }
LAB_00100d17:
    cVar1 = parse_space((char **)local_60,(char *)param_1);
    if ((cVar1 != '\0') && (param_1 == local_60[0])) {
      if (param_3 != (undefined1 (*) [16])0x0) {
        *(ulong *)*param_3 = CONCAT44(iStack_44,local_48);
        *(undefined8 *)(*param_3 + 8) = uStack_40;
      }
      uVar5 = 1;
      goto LAB_00100c32;
    }
  }
LAB_00100c21:
  if (param_3 != (undefined1 (*) [16])0x0) {
    *param_3 = (undefined1  [16])0x0;
  }
  uVar5 = 0;
LAB_00100c32:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}



void hb_feature_to_string(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  uint *puVar5;
  char *pcVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long in_FS_OFFSET;
  undefined8 uStack_c0;
  undefined1 local_b8 [4];
  undefined4 uStack_b4;
  long local_30;
  
  puVar5 = (uint *)local_b8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 0) goto LAB_0010105e;
  uVar8 = param_1[1];
  if (uVar8 == 0) {
    local_b8[0] = 0x2d;
    uVar9 = 5;
    puVar5 = (uint *)(local_b8 + 1);
  }
  else {
    uVar9 = 4;
  }
  uVar1 = *param_1;
  *puVar5 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  uVar3 = (ulong)(uVar9 - 1);
  pcVar6 = local_b8 + uVar3;
  while( true ) {
    uVar7 = (ulong)uVar9;
    uVar9 = (uint)uVar3;
    if (*pcVar6 != ' ') break;
    pcVar6 = pcVar6 + -1;
    if (uVar9 == 0) {
      uVar7 = 0;
      break;
    }
    uVar3 = (ulong)(uVar9 - 1);
  }
  iVar2 = (int)uVar7;
  if (param_1[2] == 0) {
    uVar9 = param_1[3];
    if (uVar9 != 0xffffffff) {
      uVar3 = (ulong)(iVar2 + 1);
      local_b8[uVar7] = 0x5b;
      if (uVar9 != 1) {
        local_b8[uVar3] = 0x3a;
        uVar9 = iVar2 + 2;
        goto LAB_001010c9;
      }
      goto LAB_00100fef;
    }
  }
  else {
    uVar9 = iVar2 + 1;
    local_b8[uVar7] = 0x5b;
    uStack_c0 = (undefined *)0x100fc4;
    iVar2 = __snprintf_chk(local_b8 + uVar9,0x80 - uVar9,2,0x80 - (ulong)uVar9,&_LC7);
    uVar8 = param_1[3];
    uVar9 = iVar2 + uVar9;
    if (uVar8 == param_1[2] + 1) {
      uVar8 = param_1[1];
      uVar3 = (ulong)uVar9;
    }
    else {
      local_b8[uVar9] = 0x3a;
      uVar9 = uVar9 + 1;
      if (uVar8 != 0xffffffff) {
LAB_001010c9:
        uStack_c0 = (undefined *)0x1010f2;
        iVar2 = __snprintf_chk(local_b8 + uVar9,0x80 - uVar9,2,0x80 - (ulong)uVar9,&_LC7);
        uVar9 = iVar2 + uVar9;
      }
      uVar3 = (ulong)uVar9;
      uVar8 = param_1[1];
    }
LAB_00100fef:
    local_b8[uVar3] = 0x5d;
    uVar7 = (ulong)((int)uVar3 + 1);
  }
  if (1 < uVar8) {
    uVar9 = (int)uVar7 + 1;
    local_b8[uVar7] = 0x3d;
    uStack_c0 = (undefined *)0x10102e;
    iVar2 = __snprintf_chk(local_b8 + uVar9,0x80 - uVar9,2,0x80 - (ulong)uVar9,&_LC7,uVar8);
    uVar7 = (ulong)(iVar2 + uVar9);
  }
  uVar3 = (ulong)(param_3 - 1U);
  if ((uint)uVar7 < param_3 - 1U) {
    uVar3 = uVar7;
  }
  uVar8 = (uint)uVar3;
  if (uVar8 != 0) {
    if (uVar8 < 8) {
      if ((uVar3 & 4) == 0) {
        if (uVar8 != 0) {
          *(undefined1 *)param_2 = local_b8[0];
          if ((uVar3 & 2) != 0) {
            *(undefined2 *)((long)param_2 + (uVar3 - 2)) =
                 *(undefined2 *)((long)&uStack_c0 + uVar3 + 6);
          }
        }
      }
      else {
        *param_2 = (uint)local_b8;
        *(undefined4 *)((long)param_2 + (uVar3 - 4)) = *(undefined4 *)((long)&uStack_c0 + uVar3 + 4)
        ;
      }
    }
    else {
      *(ulong *)param_2 = CONCAT44(uStack_b4,local_b8);
      *(undefined8 *)((long)param_2 + (uVar3 - 8)) = *(undefined8 *)((long)&uStack_c0 + uVar3);
      lVar4 = (long)param_2 - ((ulong)(param_2 + 2) & 0xfffffffffffffff8);
      uVar8 = uVar8 + (int)lVar4 & 0xfffffff8;
      if (7 < uVar8) {
        uVar9 = 0;
        do {
          uVar7 = (ulong)uVar9;
          uVar9 = uVar9 + 8;
          *(undefined8 *)(((ulong)(param_2 + 2) & 0xfffffffffffffff8) + uVar7) =
               *(undefined8 *)(local_b8 + (uVar7 - lVar4));
        } while (uVar9 < uVar8);
        *(undefined1 *)((long)param_2 + uVar3) = 0;
        goto LAB_0010105e;
      }
    }
  }
  *(undefined1 *)((long)param_2 + uVar3) = 0;
LAB_0010105e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    uStack_c0 = &UNK_001011be;
    __stack_chk_fail();
  }
  return;
}



undefined8 hb_variation_from_string(char *param_1,int param_2,undefined8 *param_3)

{
  char cVar1;
  size_t sVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  char *local_40 [2];
  double local_30;
  uint local_28;
  float fStack_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40[0] = param_1;
  if (param_2 < 0) {
    sVar2 = strlen(param_1);
    param_2 = (int)sVar2;
  }
  param_1 = param_1 + param_2;
  cVar1 = parse_tag(local_40,param_1,&local_28);
  if (cVar1 != '\0') {
    parse_space(local_40,param_1);
    if ((param_1 != local_40[0]) && (*local_40[0] == '=')) {
      local_40[0] = local_40[0] + 1;
    }
    cVar1 = hb_parse_double(local_40,param_1,&local_30,false);
    if (cVar1 != '\0') {
      fStack_24 = (float)local_30;
      cVar1 = parse_space(local_40,param_1);
      if ((cVar1 != '\0') && (param_1 == local_40[0])) {
        if (param_3 != (undefined8 *)0x0) {
          *param_3 = CONCAT44(fStack_24,local_28);
        }
        uVar3 = 1;
        goto LAB_00101291;
      }
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    *param_3 = 0;
  }
  uVar3 = 0;
LAB_00101291:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void hb_variation_to_string(uint *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  undefined4 *puVar4;
  ulong uVar5;
  int iVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  undefined8 uStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  long local_30;
  
  puVar4 = &local_b8;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 != 0) {
    uVar1 = *param_1;
    local_b8 = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
    uVar1 = 4;
    do {
      if (*(char *)((long)puVar4 + 3) != ' ') {
        uVar3 = uVar1 + 1;
        uVar7 = (ulong)uVar3;
        iVar6 = 0x80 - uVar3;
        lVar2 = 0x80 - uVar7;
        goto LAB_00101338;
      }
      puVar4 = (undefined4 *)((long)puVar4 + -1);
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
    lVar2 = 0x7f;
    uVar7 = 1;
    iVar6 = 0x7f;
    uVar3 = 1;
LAB_00101338:
    *(undefined1 *)((long)&local_b8 + (ulong)uVar1) = 0x3d;
    uStack_c0 = (undefined *)0x101364;
    iVar6 = __snprintf_chk((double)(float)param_1[1],(long)&local_b8 + uVar7,iVar6,2,lVar2,&_LC8);
    uVar1 = iVar6 + uVar3;
    if (param_3 - 1U < iVar6 + uVar3) {
      uVar1 = param_3 - 1U;
    }
    uVar7 = (ulong)uVar1;
    if (uVar1 != 0) {
      if (uVar1 < 8) {
        if ((uVar1 & 4) == 0) {
          if (uVar1 != 0) {
            *(undefined1 *)param_2 = (undefined1)local_b8;
            if ((uVar1 & 2) != 0) {
              *(undefined2 *)((long)param_2 + (uVar7 - 2)) =
                   *(undefined2 *)((long)&uStack_c0 + uVar7 + 6);
            }
          }
        }
        else {
          *param_2 = local_b8;
          *(undefined4 *)((long)param_2 + (uVar7 - 4)) =
               *(undefined4 *)((long)&uStack_c0 + uVar7 + 4);
        }
      }
      else {
        *(ulong *)param_2 = CONCAT44(uStack_b4,local_b8);
        *(undefined8 *)((long)param_2 + (uVar7 - 8)) = *(undefined8 *)((long)&uStack_c0 + uVar7);
        lVar2 = (long)param_2 - ((ulong)(param_2 + 2) & 0xfffffffffffffff8);
        uVar1 = uVar1 + (int)lVar2 & 0xfffffff8;
        if (7 < uVar1) {
          uVar5 = 0;
          do {
            uVar3 = (int)uVar5 + 8;
            *(undefined8 *)(((ulong)(param_2 + 2) & 0xfffffffffffffff8) + uVar5) =
                 *(undefined8 *)((long)&local_b8 + (uVar5 - lVar2));
            uVar5 = (ulong)uVar3;
          } while (uVar3 < uVar1);
          *(undefined1 *)((long)param_2 + uVar7) = 0;
          goto LAB_0010138b;
        }
      }
    }
    *(undefined1 *)((long)param_2 + uVar7) = 0;
  }
LAB_0010138b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  uStack_c0 = &UNK_00101456;
  __stack_chk_fail();
}



undefined4 hb_color_get_alpha(undefined4 param_1)

{
  return param_1;
}



uint hb_color_get_red(uint param_1)

{
  return param_1 >> 8 & 0xff;
}



uint hb_color_get_green(uint param_1)

{
  return param_1 >> 0x10;
}



uint hb_color_get_blue(uint param_1)

{
  return param_1 >> 0x18;
}


