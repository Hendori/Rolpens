
bool streq5(long param_1,long param_2,char param_3,char param_4,char param_5,char param_6)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = false;
  if (((((*(char *)(param_1 + 5) == param_3) && (bVar2 = true, param_3 != '\0')) &&
       (bVar2 = false, param_4 == *(char *)(param_1 + 6))) &&
      ((bVar2 = true, param_4 != '\0' && (bVar2 = false, param_5 == *(char *)(param_1 + 7))))) &&
     ((bVar2 = true, param_5 != '\0' &&
      ((bVar2 = false, param_6 == *(char *)(param_1 + 8) && (bVar2 = true, param_6 != '\0')))))) {
    iVar1 = strcmp((char *)(param_1 + 9),(char *)(param_2 + 9));
    return iVar1 == 0;
  }
  return bVar2;
}



uint uc_width(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  char *pcVar5;
  bool bVar6;
  
  uVar3 = param_1 >> 9;
  if (param_1 < 0x1f000) {
    if ((-1 < (char)nonspacing_table_ind[uVar3]) &&
       (((byte)nonspacing_table_data
               [(char)nonspacing_table_ind[uVar3] * 0x40 + (param_1 >> 3 & 0x3f)] >> (param_1 & 7) &
        1) != 0)) {
      return -(uint)(param_1 - 1 < 0x9f);
    }
    iVar2 = *(int *)(u_width2 + (ulong)((param_1 >> 0x10) + 1) * 4);
    if (-1 < iVar2) goto LAB_001000ea;
  }
  else {
    if (uVar3 == 0x700) {
      if (0xe00ff < param_1) {
        return (uint)(0xe01ef < param_1);
      }
      if (param_1 < 0xe0020) {
        bVar6 = param_1 == 0xe0001;
      }
      else {
        bVar6 = param_1 < 0xe0080;
      }
      return (uint)(bVar6 ^ 1);
    }
    if (0x3ffff < param_1) {
      return 1;
    }
    iVar2 = *(int *)(u_width2 + (ulong)((param_1 >> 0x10) + 1) * 4);
    if (iVar2 < 0) {
      return 1;
    }
LAB_001000ea:
    if ((-1 < *(short *)(u_width2 + (ulong)((uVar3 & 0x7f) + iVar2) * 2)) &&
       ((*(uint *)(u_width2 +
                  (ulong)((int)*(short *)(u_width2 + (ulong)((uVar3 & 0x7f) + iVar2) * 2) +
                         (param_1 >> 5 & 0xf)) * 4) >> (param_1 & 0x1f) & 1) != 0)) {
      return 2;
    }
  }
  if (0xfebf < param_1 - 0xa1) {
    return 1;
  }
  if (param_1 == 0x20a9) {
    return 1;
  }
  cVar1 = *param_2;
  if (cVar1 != 'E') {
    if (cVar1 == 'G') {
      if (param_2[1] != 'B') {
        return 1;
      }
      if (param_2[2] != '2') {
        if (param_2[2] != 'K') {
          return 1;
        }
        return 2 - (param_2[3] != '\0');
      }
      if (param_2[3] != '3') {
        return 1;
      }
      if (param_2[4] != '1') {
        return 1;
      }
      uVar4 = 0x32;
      pcVar5 = "GB2312";
    }
    else {
      if (cVar1 == 'B') {
        if (param_2[1] != 'I') {
          return 1;
        }
        if (param_2[2] != 'G') {
          return 1;
        }
        if (param_2[3] != '5') {
          return 1;
        }
        return 2 - (param_2[4] != '\0');
      }
      if (cVar1 == 'C') {
        if (param_2[1] != 'P') {
          return 1;
        }
        if (param_2[2] != '9') {
          return 1;
        }
        if (param_2[3] != '4') {
          return 1;
        }
        if (param_2[4] != '9') {
          return 1;
        }
        uVar4 = 0;
        pcVar5 = "CP949";
      }
      else {
        if (cVar1 != 'J') {
          return 1;
        }
        if (param_2[1] != 'O') {
          return 1;
        }
        if (param_2[2] != 'H') {
          return 1;
        }
        if (param_2[3] != 'A') {
          return 1;
        }
        if (param_2[4] != 'B') {
          return 1;
        }
        uVar4 = 0;
        pcVar5 = "JOHAB";
      }
    }
    goto LAB_001002a4;
  }
  if (param_2[1] != 'U') {
    return 1;
  }
  if (param_2[2] != 'C') {
    return 1;
  }
  if (param_2[3] == '-') {
    if (param_2[4] == 'J') {
      uVar4 = 0x50;
      pcVar5 = "EUC-JP";
    }
    else {
      if (param_2[4] != 'T') goto LAB_00100158;
      uVar4 = 0x57;
      pcVar5 = "EUC-TW";
    }
    iVar2 = streq5(param_2,pcVar5,uVar4,0,0,0);
    if (iVar2 != 0) {
      return 2;
    }
  }
LAB_00100158:
  if ((param_2[3] != '-') || (param_2[4] != 'K')) {
    return 1;
  }
  uVar4 = 0x52;
  pcVar5 = "EUC-KR";
LAB_001002a4:
  iVar2 = streq5(param_2,pcVar5,uVar4,0,0,0);
  return 2 - (iVar2 == 0);
}


