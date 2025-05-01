
/* WARNING: Unknown calling convention */

int streq5(char *s1,char *s2,char s25,char s26,char s27,char s28)

{
  int iVar1;
  
  iVar1 = 0;
  if (((((s1[5] == s25) && (iVar1 = 1, s25 != '\0')) && (iVar1 = 0, s26 == s1[6])) &&
      ((iVar1 = 1, s26 != '\0' && (iVar1 = 0, s27 == s1[7])))) &&
     ((iVar1 = 1, s27 != '\0' && ((iVar1 = 0, s28 == s1[8] && (iVar1 = 1, s28 != '\0')))))) {
    iVar1 = strcmp(s1 + 9,s2 + 9);
    return (int)(iVar1 == 0);
  }
  return iVar1;
}



/* WARNING: Unknown calling convention */

int uc_width(ucs4_t uc,char *encoding)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  char *pcVar5;
  bool bVar6;
  
  uVar2 = uc >> 9;
  if (uc < 0x1f000) {
    if ((-1 < ""[uVar2]) &&
       ((nonspacing_table_data[""[uVar2] * 0x40 + (uc >> 3 & 0x3f)] >> (uc & 7) & 1) != 0)) {
      return -(uint)(uc - 1 < 0x9f);
    }
    iVar3 = u_width2.header[(uc >> 0x10) + 1];
    if (-1 < iVar3) goto LAB_001000ea;
  }
  else {
    if (uVar2 == 0x700) {
      if (0xe00ff < uc) {
        return (int)(0xe01ef < uc);
      }
      if (uc < 0xe0020) {
        bVar6 = uc == 0xe0001;
      }
      else {
        bVar6 = uc < 0xe0080;
      }
      return (int)(bVar6 ^ 1);
    }
    if (0x3ffff < uc) {
      return 1;
    }
    iVar3 = u_width2.header[(uc >> 0x10) + 1];
    if (iVar3 < 0) {
      return 1;
    }
LAB_001000ea:
    sVar1 = *(short *)((long)u_width2.header + (ulong)((uVar2 & 0x7f) + iVar3) * 2);
    if ((-1 < sVar1) &&
       (((uint)u_width2.header[(int)sVar1 + (uc >> 5 & 0xf)] >> (uc & 0x1f) & 1) != 0)) {
      return 2;
    }
  }
  if (0xfebf < uc - 0xa1) {
    return 1;
  }
  if (uc == 0x20a9) {
    return 1;
  }
  cVar4 = *encoding;
  if (cVar4 != 'E') {
    if (cVar4 == 'G') {
      if (encoding[1] != 'B') {
        return 1;
      }
      if (encoding[2] != '2') {
        if (encoding[2] != 'K') {
          return 1;
        }
        return 2 - (uint)(encoding[3] != '\0');
      }
      if (encoding[3] != '3') {
        return 1;
      }
      if (encoding[4] != '1') {
        return 1;
      }
      cVar4 = '2';
      pcVar5 = "GB2312";
    }
    else {
      if (cVar4 == 'B') {
        if (encoding[1] != 'I') {
          return 1;
        }
        if (encoding[2] != 'G') {
          return 1;
        }
        if (encoding[3] != '5') {
          return 1;
        }
        return 2 - (uint)(encoding[4] != '\0');
      }
      if (cVar4 == 'C') {
        if (encoding[1] != 'P') {
          return 1;
        }
        if (encoding[2] != '9') {
          return 1;
        }
        if (encoding[3] != '4') {
          return 1;
        }
        if (encoding[4] != '9') {
          return 1;
        }
        cVar4 = '\0';
        pcVar5 = "CP949";
      }
      else {
        if (cVar4 != 'J') {
          return 1;
        }
        if (encoding[1] != 'O') {
          return 1;
        }
        if (encoding[2] != 'H') {
          return 1;
        }
        if (encoding[3] != 'A') {
          return 1;
        }
        if (encoding[4] != 'B') {
          return 1;
        }
        cVar4 = '\0';
        pcVar5 = "JOHAB";
      }
    }
    goto LAB_001002a4;
  }
  if (encoding[1] != 'U') {
    return 1;
  }
  if (encoding[2] != 'C') {
    return 1;
  }
  if (encoding[3] == '-') {
    if (encoding[4] == 'J') {
      cVar4 = 'P';
      pcVar5 = "EUC-JP";
    }
    else {
      if (encoding[4] != 'T') goto LAB_00100158;
      cVar4 = 'W';
      pcVar5 = "EUC-TW";
    }
    iVar3 = streq5(encoding,pcVar5,cVar4,'\0','\0','\0');
    if (iVar3 != 0) {
      return 2;
    }
  }
LAB_00100158:
  if ((encoding[3] != '-') || (encoding[4] != 'K')) {
    return 1;
  }
  cVar4 = 'R';
  pcVar5 = "EUC-KR";
LAB_001002a4:
  iVar3 = streq5(encoding,pcVar5,cVar4,'\0','\0','\0');
  return 2 - (uint)(iVar3 == 0);
}


