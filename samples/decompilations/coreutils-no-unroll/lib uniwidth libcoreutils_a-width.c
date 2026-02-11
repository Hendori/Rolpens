
uint uc_width(uint param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  uVar3 = param_1 >> 9;
  if (param_1 < 0x1f000) {
    if ((-1 < (char)nonspacing_table_ind[uVar3]) &&
       (((byte)nonspacing_table_data
               [(char)nonspacing_table_ind[uVar3] * 0x40 + (param_1 >> 3 & 0x3f)] >> (param_1 & 7) &
        1) != 0)) {
      return -(uint)(param_1 - 1 < 0x9f);
    }
    iVar2 = *(int *)(u_width2 + (ulong)((param_1 >> 0x10) + 1) * 4);
    if (-1 < iVar2) goto LAB_00100066;
  }
  else {
    if (uVar3 == 0x700) {
      if (0xe00ff < param_1) {
        return (uint)(0xe01ef < param_1);
      }
      if (param_1 < 0xe0020) {
        bVar4 = param_1 == 0xe0001;
      }
      else {
        bVar4 = param_1 < 0xe0080;
      }
      return (uint)(bVar4 ^ 1);
    }
    if (0x3ffff < param_1) {
      return 1;
    }
    iVar2 = *(int *)(u_width2 + (ulong)((param_1 >> 0x10) + 1) * 4);
    if (iVar2 < 0) {
      return 1;
    }
LAB_00100066:
    if ((-1 < *(short *)(u_width2 + (ulong)((uVar3 & 0x7f) + iVar2) * 2)) &&
       ((*(uint *)(u_width2 +
                  (ulong)((int)*(short *)(u_width2 + (ulong)((uVar3 & 0x7f) + iVar2) * 2) +
                         (param_1 >> 5 & 0xf)) * 4) >> (param_1 & 0x1f) & 1) != 0)) {
      return 2;
    }
  }
  if ((0xfebf < param_1 - 0xa1) || (param_1 == 0x20a9)) {
    return 1;
  }
  cVar1 = *param_2;
  if (cVar1 != 'E') {
    if (cVar1 != 'G') {
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
      }
      return 2 - (param_2[5] != '\0');
    }
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
    if (param_2[5] != '2') {
      return 1;
    }
    goto LAB_001001f2;
  }
  if (param_2[1] != 'U') {
    return 1;
  }
  if (param_2[2] != 'C') {
    return 1;
  }
  if (param_2[3] == '-') {
    if (param_2[4] == 'J') {
      if (param_2[5] == 'P') {
LAB_001000bd:
        if (param_2[6] == '\0') {
          return 2;
        }
      }
    }
    else if ((param_2[4] == 'T') && (param_2[5] == 'W')) goto LAB_001000bd;
  }
  if (((param_2[3] != '-') || (param_2[4] != 'K')) || (param_2[5] != 'R')) {
    return 1;
  }
LAB_001001f2:
  return 2 - (param_2[6] != '\0');
}


