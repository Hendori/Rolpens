
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
  byte bVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  lVar2 = 0;
  lVar3 = 0;
LAB_001000e9:
  if (lVar2 < param_2) goto LAB_00100100;
  if (param_4 <= lVar3) {
    return 0;
  }
  do {
    if (lVar2 < param_2) {
LAB_00100100:
      uVar7 = (uint)*(char *)(param_1 + lVar2);
      if (uVar7 - 0x30 < 10) goto LAB_001001a0;
LAB_00100116:
      cVar6 = (char)uVar7;
      if (cVar6 < '[') {
        if (cVar6 < 'A') goto LAB_0010017a;
LAB_00100122:
        iVar4 = (int)cVar6;
        if (lVar3 == param_4) {
          return iVar4 + 1;
        }
      }
      else {
        if ((byte)(cVar6 + 0x9fU) < 0x1a) goto LAB_00100122;
LAB_0010017a:
        if (cVar6 == '~') {
          if (lVar3 == param_4) {
            return -1;
          }
          bVar1 = *(byte *)(param_3 + lVar3);
          uVar9 = (uint)bVar1;
          if (uVar9 - 0x30 < 10) {
            return -2;
          }
          if ((char)bVar1 < '[') {
            if ((char)bVar1 < 'A') {
              iVar5 = -2;
              goto LAB_001002fa;
            }
          }
          else if (0x19 < (byte)(bVar1 + 0x9f)) {
            iVar5 = -2;
            goto LAB_001002ec;
          }
          iVar8 = (int)(char)bVar1;
          iVar4 = -2;
          goto LAB_00100354;
        }
        iVar4 = (uVar7 & 0xff) + 0x100;
        if (lVar3 == param_4) {
          return (uVar7 & 0xff) + 0x101;
        }
      }
      bVar1 = *(byte *)(param_3 + lVar3);
      uVar9 = (uint)bVar1;
      if (bVar1 - 0x30 < 10) {
        return iVar4;
      }
      iVar5 = iVar4;
      if ((char)bVar1 < '[') {
        if ((char)bVar1 < 'A') {
          if (bVar1 == 0x7e) {
            iVar8 = -2;
            goto LAB_00100354;
          }
          uVar9 = (uint)bVar1;
          goto LAB_001002fa;
        }
      }
      else if (0x19 < (byte)(bVar1 + 0x9f)) goto LAB_001002ec;
      iVar8 = (int)(char)bVar1;
    }
    else {
LAB_001001a0:
      if (param_4 <= lVar3) break;
      bVar1 = *(byte *)(param_3 + lVar3);
      iVar8 = (int)(char)bVar1;
      if (iVar8 - 0x30U < 10) break;
      uVar9 = (uint)bVar1;
      if (lVar2 == param_2) {
        if ((char)bVar1 < '[') {
          if ((char)bVar1 < 'A') {
            iVar8 = bVar1 + 0x100;
          }
          iVar4 = -1;
          goto LAB_00100354;
        }
        iVar5 = -1;
        iVar4 = -1;
joined_r0x001002ea:
        if ((byte)(bVar1 + 0x9f) < 0x1a) goto LAB_00100354;
LAB_001002ec:
        if ((char)uVar9 == '~') {
          iVar8 = -2;
          iVar4 = iVar5;
          goto LAB_00100301;
        }
      }
      else {
        uVar7 = (uint)*(byte *)(param_1 + lVar2);
        if (9 < uVar7 - 0x30) goto LAB_00100116;
        if ('Z' < (char)bVar1) {
          iVar5 = 0;
          iVar4 = 0;
          goto joined_r0x001002ea;
        }
        iVar4 = 0;
        iVar5 = 0;
        if ('@' < (char)bVar1) goto LAB_00100354;
        uVar9 = (uint)bVar1;
      }
LAB_001002fa:
      iVar8 = uVar9 + 0x100;
      iVar4 = iVar5;
    }
LAB_00100301:
    if (iVar8 != iVar4) {
LAB_00100354:
      return iVar4 - iVar8;
    }
    lVar2 = lVar2 + 1;
    lVar3 = lVar3 + 1;
  } while( true );
  if (lVar2 < param_2) {
    do {
      if (*(char *)(param_1 + lVar2) != '0') break;
      lVar2 = lVar2 + 1;
    } while (param_2 != lVar2);
    if (lVar3 < param_4) goto LAB_001001fd;
    iVar8 = 0;
    if (param_2 <= lVar2) goto LAB_001000e9;
  }
  else {
    if (param_4 <= lVar3) goto LAB_001000e9;
LAB_001001fd:
    do {
      if (*(char *)(param_3 + lVar3) != '0') {
        iVar8 = 0;
        if ((param_4 <= lVar3) || (param_2 <= lVar2)) goto LAB_00100250;
        goto LAB_00100210;
      }
      lVar3 = lVar3 + 1;
    } while (param_4 != lVar3);
    iVar8 = 0;
LAB_00100250:
    if (param_2 <= lVar2) goto LAB_00100268;
  }
  if ((int)*(char *)(param_1 + lVar2) - 0x30U < 10) {
    return 1;
  }
LAB_00100268:
  if ((lVar3 < param_4) && ((int)*(char *)(param_3 + lVar3) - 0x30U < 10)) {
    return -1;
  }
  if (iVar8 != 0) {
    return iVar8;
  }
  goto LAB_001000e9;
LAB_00100210:
  if (9 < (int)*(char *)(param_1 + lVar2) - 0x30U) goto LAB_00100250;
  if (9 < (int)*(char *)(param_3 + lVar3) - 0x30U) {
    if (lVar2 < param_2) {
      return 1;
    }
    goto LAB_00100268;
  }
  if (iVar8 == 0) {
    iVar8 = (int)*(char *)(param_1 + lVar2) - (int)*(char *)(param_3 + lVar3);
  }
  lVar2 = lVar2 + 1;
  lVar3 = lVar3 + 1;
  if ((param_2 <= lVar2) || (param_4 <= lVar3)) goto LAB_00100250;
  goto LAB_00100210;
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
      if (bVar4) goto LAB_00100518;
      if (bVar5 != false) {
        return 1;
      }
      if (param_1[1] == '.') {
        if (param_2 < 0) {
          if (param_1[2] == '\0') goto LAB_001005b3;
        }
        else if (param_2 == 2) {
LAB_001005b3:
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
LAB_00100518:
  return (ulong)(bVar5 - 1);
}



void filevercmp(undefined8 param_1,undefined8 param_2)

{
  filenvercmp(param_1,0xffffffffffffffff,param_2,0xffffffffffffffff);
  return;
}


