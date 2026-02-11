
ulong file_prefixlen(long param_1,ulong *param_2)

{
  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar2 = *param_2;
  uVar5 = 0;
  uVar6 = 0;
LAB_00100015:
  uVar3 = uVar5;
  if ((long)uVar2 < 0) goto LAB_0010008c;
  do {
    do {
      if (uVar2 == uVar3) {
LAB_001000a8:
        *param_2 = uVar3;
        return uVar6;
      }
      uVar5 = uVar3 + 1;
      uVar4 = uVar3 + 2;
      uVar3 = uVar5;
      uVar6 = uVar5;
    } while (uVar2 <= uVar4);
LAB_00100040:
    do {
      if (*(char *)(param_1 + uVar5) != '.') goto LAB_00100015;
      cVar1 = *(char *)(param_1 + 1 + uVar5);
      if (cVar1 < '[') {
        if (cVar1 < 'A') goto LAB_00100015;
      }
      else if ((0x19 < (byte)(cVar1 + 0x9fU)) && (cVar1 != '~')) goto LAB_00100015;
      for (uVar5 = uVar5 + 2; uVar5 < uVar2; uVar5 = uVar5 + 1) {
        cVar1 = *(char *)(param_1 + uVar5);
        if (cVar1 < '[') {
          if ((cVar1 < 'A') && (9 < (byte)(cVar1 - 0x30U))) break;
        }
        else if ((0x19 < (byte)(cVar1 + 0x9fU)) && (cVar1 != '~')) break;
      }
    } while (uVar5 + 1 < uVar2);
    uVar3 = uVar5;
  } while (-1 < (long)uVar2);
LAB_0010008c:
  cVar1 = *(char *)(param_1 + uVar5);
  uVar3 = uVar5;
  while( true ) {
    if (cVar1 == '\0') goto LAB_001000a8;
    uVar5 = uVar3 + 1;
    uVar6 = uVar5;
    if (uVar3 + 2 < uVar2) break;
    cVar1 = *(char *)(param_1 + uVar5);
    uVar3 = uVar5;
  }
  goto LAB_00100040;
}



int verrevcmp(long param_1,long param_2,long param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  int iVar7;
  char cVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  lVar4 = 0;
  lVar5 = 0;
LAB_001000e9:
  if (lVar4 < param_2) goto LAB_00100100;
  if (param_4 <= lVar5) {
    return 0;
  }
  do {
    if (lVar4 < param_2) {
LAB_00100100:
      uVar9 = (uint)*(char *)(param_1 + lVar4);
      if (uVar9 - 0x30 < 10) goto LAB_001001a0;
LAB_00100116:
      cVar8 = (char)uVar9;
      if (cVar8 < '[') {
        if (cVar8 < 'A') goto LAB_0010017a;
LAB_00100122:
        iVar6 = (int)cVar8;
        if (lVar5 == param_4) {
          return iVar6 + 1;
        }
      }
      else {
        if ((byte)(cVar8 + 0x9fU) < 0x1a) goto LAB_00100122;
LAB_0010017a:
        if (cVar8 == '~') {
          if (lVar5 == param_4) {
            return -1;
          }
          bVar3 = *(byte *)(param_3 + lVar5);
          uVar11 = (uint)bVar3;
          if (uVar11 - 0x30 < 10) {
            return -2;
          }
          if ((char)bVar3 < '[') {
            if ((char)bVar3 < 'A') {
              iVar7 = -2;
              goto LAB_001002fe;
            }
          }
          else if (0x19 < (byte)(bVar3 + 0x9f)) {
            iVar7 = -2;
            goto LAB_001002f0;
          }
          iVar10 = (int)(char)bVar3;
          iVar6 = -2;
          goto LAB_00100384;
        }
        iVar6 = (uVar9 & 0xff) + 0x100;
        if (lVar5 == param_4) {
          return (uVar9 & 0xff) + 0x101;
        }
      }
      bVar3 = *(byte *)(param_3 + lVar5);
      uVar11 = (uint)bVar3;
      if (bVar3 - 0x30 < 10) {
        return iVar6;
      }
      iVar7 = iVar6;
      if ((char)bVar3 < '[') {
        if ((char)bVar3 < 'A') {
          if (bVar3 == 0x7e) {
            iVar10 = -2;
            goto LAB_00100384;
          }
          uVar11 = (uint)bVar3;
          goto LAB_001002fe;
        }
      }
      else if (0x19 < (byte)(bVar3 + 0x9f)) goto LAB_001002f0;
      iVar10 = (int)(char)bVar3;
    }
    else {
LAB_001001a0:
      if (param_4 <= lVar5) break;
      bVar3 = *(byte *)(param_3 + lVar5);
      iVar10 = (int)(char)bVar3;
      if (iVar10 - 0x30U < 10) break;
      uVar11 = (uint)bVar3;
      if (lVar4 == param_2) {
        if ((char)bVar3 < '[') {
          if ((char)bVar3 < 'A') {
            iVar10 = bVar3 + 0x100;
          }
          iVar6 = -1;
          goto LAB_00100384;
        }
        iVar7 = -1;
        iVar6 = -1;
joined_r0x001002ea:
        if ((byte)(bVar3 + 0x9f) < 0x1a) goto LAB_00100384;
LAB_001002f0:
        if ((char)uVar11 == '~') {
          iVar10 = -2;
          iVar6 = iVar7;
          goto LAB_00100305;
        }
      }
      else {
        uVar9 = (uint)*(byte *)(param_1 + lVar4);
        if (9 < uVar9 - 0x30) goto LAB_00100116;
        if ('Z' < (char)bVar3) {
          iVar7 = 0;
          iVar6 = 0;
          goto joined_r0x001002ea;
        }
        iVar6 = 0;
        iVar7 = 0;
        if ('@' < (char)bVar3) goto LAB_00100384;
        uVar11 = (uint)bVar3;
      }
LAB_001002fe:
      iVar10 = uVar11 + 0x100;
      iVar6 = iVar7;
    }
LAB_00100305:
    if (iVar10 != iVar6) {
LAB_00100384:
      return iVar6 - iVar10;
    }
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + 1;
  } while( true );
  if (lVar4 < param_2) {
    do {
      if (*(char *)(param_1 + lVar4) != '0') break;
      lVar4 = lVar4 + 1;
    } while (param_2 != lVar4);
    if (lVar5 < param_4) goto LAB_001001fd;
    iVar10 = 0;
    if (param_2 <= lVar4) goto LAB_001000e9;
  }
  else {
    if (param_4 <= lVar5) goto LAB_001000e9;
LAB_001001fd:
    do {
      if (*(char *)(param_3 + lVar5) != '0') {
        iVar10 = 0;
        if (lVar5 < param_4) goto joined_r0x0010020e;
        goto LAB_00100258;
      }
      lVar5 = lVar5 + 1;
    } while (param_4 != lVar5);
    iVar10 = 0;
LAB_00100258:
    if (param_2 <= lVar4) goto LAB_00100270;
  }
  if ((int)*(char *)(param_1 + lVar4) - 0x30U < 10) {
    return 1;
  }
LAB_00100270:
  if ((lVar5 < param_4) && ((int)*(char *)(param_3 + lVar5) - 0x30U < 10)) {
    return -1;
  }
  if (iVar10 != 0) {
    return iVar10;
  }
  goto LAB_001000e9;
joined_r0x0010020e:
  if (param_2 <= lVar4) goto LAB_00100258;
  while( true ) {
    pcVar1 = (char *)(param_1 + lVar4);
    if (9 < (int)*pcVar1 - 0x30U) goto LAB_00100258;
    pcVar2 = (char *)(param_3 + lVar5);
    if (9 < (int)*pcVar2 - 0x30U) {
      if (lVar4 < param_2) {
        return 1;
      }
      goto LAB_00100270;
    }
    if (iVar10 == 0) break;
    lVar4 = lVar4 + 1;
    lVar5 = lVar5 + 1;
    if ((param_2 <= lVar4) || (param_4 <= lVar5)) goto LAB_00100258;
  }
  lVar5 = lVar5 + 1;
  lVar4 = lVar4 + 1;
  iVar10 = (int)*pcVar1 - (int)*pcVar2;
  if (param_4 <= lVar5) goto LAB_00100258;
  goto joined_r0x0010020e;
}



ulong filevercmp(char *param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  bool bVar7;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = *param_2;
  local_40 = -1;
  local_38 = -1;
  if (*param_1 == '\0') {
LAB_001005a0:
    uVar5 = (ulong)-(uint)(cVar1 != '\0');
    goto LAB_00100585;
  }
  if (cVar1 == '\0') {
LAB_00100580:
    uVar5 = 1;
  }
  else {
    if (*param_1 != '.') {
      if (cVar1 != '.') goto LAB_001004cd;
      goto LAB_00100580;
    }
    if (cVar1 != '.') {
LAB_001005d0:
      uVar5 = 0xffffffff;
      goto LAB_00100585;
    }
    cVar1 = param_2[1];
    if (param_1[1] == '\0') goto LAB_001005a0;
    if (cVar1 == '\0') goto LAB_00100580;
    if (param_1[1] == '.') {
      cVar2 = param_1[2];
      if (cVar1 != '.') {
        if (cVar2 == '\0') goto LAB_001005d0;
        goto LAB_001004cd;
      }
      if (param_2[2] == '\0') {
        uVar5 = (ulong)(cVar2 != '\0');
      }
      else {
        uVar5 = 0xffffffff;
        if (cVar2 != '\0') goto LAB_001004cd;
      }
    }
    else {
      if ((cVar1 == '.') && (param_2[2] == '\0')) goto LAB_00100580;
LAB_001004cd:
      lVar3 = file_prefixlen(param_1,&local_40);
      lVar4 = file_prefixlen(param_2,&local_38);
      bVar6 = lVar3 != local_40;
      bVar7 = local_38 != lVar4;
      uVar5 = verrevcmp(param_1,lVar3,param_2,lVar4);
      if (((int)uVar5 == 0) && (bVar6 || bVar7)) {
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = verrevcmp();
          return uVar5;
        }
        goto LAB_001005d7;
      }
    }
  }
LAB_00100585:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_001005d7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



ulong filenvercmp(char *param_1,long param_2,char *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  bool bVar4;
  bool bVar5;
  long local_30;
  long local_28;
  
  bVar4 = param_2 == 0;
  if (param_2 < 0) {
    bVar4 = *param_1 == '\0';
  }
  bVar5 = param_4 == 0;
  if (param_4 < 0) {
    bVar5 = *param_3 == '\0';
  }
  if (!bVar4) {
    if (bVar5 != false) {
      return 1;
    }
    if (*param_1 == '.') {
      if (*param_3 != '.') {
        return 0xffffffff;
      }
      bVar4 = param_2 == 1;
      if (param_2 < 0) {
        bVar4 = param_1[1] == '\0';
      }
      bVar5 = param_4 == 1;
      if (param_4 < 0) {
        bVar5 = param_3[1] == '\0';
      }
      if (bVar4) goto LAB_001006d8;
      if (bVar5 != false) {
        return 1;
      }
      if (param_1[1] == '.') {
        if (param_2 < 0) {
          if (param_1[2] == '\0') goto LAB_00100773;
        }
        else if (param_2 == 2) {
LAB_00100773:
          if (param_3[1] != '.') {
            return 0xffffffff;
          }
          if (param_4 < 0) {
            return (ulong)-(uint)(param_3[2] != '\0');
          }
          return (ulong)((param_4 == 2) - 1);
        }
      }
      if (param_3[1] == '.') {
        if (param_4 < 0) {
          if (param_3[2] == '\0') {
            return 1;
          }
        }
        else if (param_4 == 2) {
          return 1;
        }
      }
    }
    else if (*param_3 == '.') {
      return 1;
    }
    local_30 = param_4;
    local_28 = param_2;
    lVar1 = file_prefixlen(param_1,&local_28);
    lVar2 = file_prefixlen(param_3,&local_30);
    bVar4 = local_28 != lVar1;
    bVar5 = local_30 != lVar2;
    uVar3 = verrevcmp(param_1,lVar1,param_3,lVar2);
    if (((int)uVar3 == 0) && (bVar4 || bVar5)) {
      uVar3 = verrevcmp();
    }
    return uVar3;
  }
LAB_001006d8:
  return (ulong)(bVar5 - 1);
}


