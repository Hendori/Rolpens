
void u_charsToUChars_76_godot(long param_1,long param_2,uint param_3)

{
  ulong uVar1;
  
  if (0 < (int)param_3) {
    uVar1 = 0;
    do {
      *(ushort *)(param_2 + uVar1 * 2) = (ushort)*(byte *)(param_1 + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 != param_3);
  }
  return;
}



void u_UCharsToChars_76_godot(long param_1,long param_2,uint param_3)

{
  ushort uVar1;
  ulong uVar2;
  ushort uVar3;
  
  uVar2 = 0;
  if (0 < (int)param_3) {
    do {
      uVar1 = *(ushort *)(param_1 + uVar2 * 2);
      uVar3 = 0;
      if ((uVar1 < 0x80) &&
         (uVar3 = uVar1,
         (*(uint *)(invariantChars + (ulong)(uVar1 >> 5) * 4) >> ((byte)uVar1 & 0x1f) & 1) == 0)) {
        uVar3 = 0;
      }
      *(char *)(param_2 + uVar2) = (char)uVar3;
      uVar2 = uVar2 + 1;
    } while (param_3 != uVar2);
  }
  return;
}



undefined8 uprv_isInvariantString_76_godot(long param_1,int param_2)

{
  byte bVar1;
  
  param_1 = param_1 + 1;
  do {
    if (param_2 < 0) {
      bVar1 = *(byte *)(param_1 + -1);
      if (bVar1 == 0) {
        return 1;
      }
LAB_001000b5:
      if ((char)bVar1 < '\0') {
        return 0;
      }
      if ((*(uint *)(invariantChars + (ulong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0) {
        return 0;
      }
    }
    else {
      if (param_2 == 0) {
        return 1;
      }
      bVar1 = *(byte *)(param_1 + -1);
      param_2 = param_2 + -1;
      if (bVar1 != 0) goto LAB_001000b5;
    }
    param_1 = param_1 + 1;
  } while( true );
}



undefined8 uprv_isInvariantUString_76_godot(long param_1,int param_2)

{
  ushort uVar1;
  
  param_1 = param_1 + 2;
  do {
    if (param_2 < 0) {
      uVar1 = *(ushort *)(param_1 + -2);
      if (uVar1 == 0) {
        return 1;
      }
    }
    else {
      if (param_2 == 0) {
        return 1;
      }
      uVar1 = *(ushort *)(param_1 + -2);
      param_2 = param_2 + -1;
    }
  } while ((uVar1 < 0x80) &&
          (param_1 = param_1 + 2,
          (*(uint *)(invariantChars + (ulong)(uVar1 >> 5) * 4) >> (uVar1 & 0x1f) & 1) != 0));
  return 0;
}



uint uprv_ebcdicFromAscii_76_godot(long param_1,long param_2,uint param_3,long param_4,int *param_5)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_5 == (int *)0x0) {
    return 0;
  }
  if (*param_5 < 1) {
    if (((param_1 == 0 || param_2 == 0) || ((int)param_3 < 0)) ||
       ((0 < (int)param_3 && (param_4 == 0)))) {
      *param_5 = 1;
    }
    else {
      uVar2 = 0;
      if (param_3 != 0) {
        while( true ) {
          bVar1 = *(byte *)(param_2 + uVar2);
          if (((char)bVar1 < '\0') ||
             ((*(uint *)(invariantChars + (ulong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0))
          break;
          *(undefined1 *)(param_4 + uVar2) = ebcdicFromAscii[bVar1];
          uVar2 = uVar2 + 1;
          if (uVar2 == param_3) {
            return param_3;
          }
        }
        udata_printError_76_godot
                  (param_1,
                   "uprv_ebcdicFromAscii() string[%d] contains a variant character in position %d\n"
                   ,param_3,uVar2 & 0xffffffff);
        *param_5 = 10;
      }
    }
  }
  return 0;
}



int uprv_copyAscii_76_godot(long param_1,byte *param_2,int param_3,byte *param_4,int *param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  if (param_5 == (int *)0x0) {
    return 0;
  }
  if (*param_5 < 1) {
    if (((param_2 == (byte *)0x0 || param_3 < 0) || (param_1 == 0)) ||
       ((0 < param_3 && (param_4 == (byte *)0x0)))) {
      *param_5 = 1;
    }
    else {
      pbVar2 = param_2;
      iVar3 = param_3;
      if (param_3 == 0) {
        return 0;
      }
      while( true ) {
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
        if (((char)bVar1 < '\0') ||
           ((*(uint *)(invariantChars + (ulong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0))
        break;
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          if (param_2 == param_4) {
            return param_3;
          }
          memcpy(param_4,param_2,(long)param_3);
          return param_3;
        }
      }
      udata_printError_76_godot
                (param_1,
                 "uprv_copyFromAscii() string[%d] contains a variant character in position %d\n",
                 param_3,param_3 - iVar3);
      *param_5 = 10;
    }
  }
  return 0;
}



uint uprv_asciiFromEbcdic_76_godot(long param_1,long param_2,uint param_3,long param_4,int *param_5)

{
  byte bVar1;
  ulong uVar2;
  
  if (param_5 == (int *)0x0) {
    return 0;
  }
  if (*param_5 < 1) {
    if (((param_1 == 0 || param_2 == 0) || ((int)param_3 < 0)) ||
       ((0 < (int)param_3 && (param_4 == 0)))) {
      *param_5 = 1;
    }
    else {
      uVar2 = 0;
      if (param_3 != 0) {
        while( true ) {
          bVar1 = *(byte *)(param_2 + uVar2);
          if ((bVar1 != 0) &&
             ((bVar1 = (&asciiFromEbcdic)[bVar1], (char)bVar1 < '\x01' ||
              ((*(uint *)(invariantChars + (ulong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0))))
          break;
          *(byte *)(param_4 + uVar2) = bVar1;
          uVar2 = uVar2 + 1;
          if (uVar2 == param_3) {
            return param_3;
          }
        }
        udata_printError_76_godot
                  (param_1,
                   "uprv_asciiFromEbcdic() string[%d] contains a variant character in position %d\n"
                   ,param_3,uVar2 & 0xffffffff);
        *param_5 = 10;
      }
    }
  }
  return 0;
}



int uprv_copyEbcdic_76_godot(long param_1,byte *param_2,int param_3,byte *param_4,int *param_5)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  
  if (param_5 == (int *)0x0) {
    return 0;
  }
  if (*param_5 < 1) {
    if (((param_2 == (byte *)0x0 || param_3 < 0) || (param_1 == 0)) ||
       ((0 < param_3 && (param_4 == (byte *)0x0)))) {
      *param_5 = 1;
    }
    else {
      pbVar2 = param_2;
      iVar3 = param_3;
      if (param_3 == 0) {
        return 0;
      }
      while( true ) {
        if ((*pbVar2 != 0) &&
           ((bVar1 = (&asciiFromEbcdic)[*pbVar2], (char)bVar1 < '\x01' ||
            ((*(uint *)(invariantChars + (ulong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0))))
        break;
        iVar3 = iVar3 + -1;
        pbVar2 = pbVar2 + 1;
        if (iVar3 == 0) {
          if (param_2 == param_4) {
            return param_3;
          }
          memcpy(param_4,param_2,(long)param_3);
          return param_3;
        }
      }
      udata_printError_76_godot
                (param_1,"uprv_copyEbcdic() string[%] contains a variant character in position %d\n"
                 ,param_3,param_3 - iVar3);
      *param_5 = 10;
    }
  }
  return 0;
}



bool uprv_isEbcdicAtSign_76_godot(char param_1)

{
  char *pcVar1;
  
  if (param_1 != '\0') {
    pcVar1 = strchr(uprv_isEbcdicAtSign_76_godot::ebcdicAtSigns,(int)param_1);
    return pcVar1 != (char *)0x0;
  }
  return false;
}



int uprv_compareInvAscii_76_godot
              (undefined8 param_1,char *param_2,uint param_3,long param_4,uint param_5)

{
  byte bVar1;
  int iVar2;
  size_t sVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar7 = (ulong)param_3;
  if ((((int)param_3 < -1) || (param_4 == 0)) || ((int)param_5 < -1)) {
    iVar2 = 0;
  }
  else {
    if (param_3 == 0xffffffff) {
      sVar3 = strlen(param_2);
      uVar7 = sVar3 & 0xffffffff;
    }
    if (param_5 == 0xffffffff) {
      param_5 = u_strlen_76_godot(param_4);
    }
    uVar6 = (ulong)param_5;
    if ((int)uVar7 <= (int)param_5) {
      uVar6 = uVar7;
    }
    if (0 < (int)uVar6) {
      uVar5 = 0;
      do {
        bVar1 = param_2[uVar5];
        iVar2 = -1;
        if ((-1 < (char)bVar1) &&
           (iVar2 = (int)(char)bVar1,
           (*(uint *)(invariantChars + (ulong)(bVar1 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0)) {
          iVar2 = -1;
        }
        uVar4 = (uint)*(ushort *)(param_4 + uVar5 * 2);
        if ((0x7f < uVar4) ||
           ((*(uint *)(invariantChars + (long)((int)uVar4 >> 5) * 4) >> (uVar4 & 0x1f) & 1) == 0)) {
          return iVar2 + 2;
        }
        if (iVar2 - uVar4 != 0) {
          return iVar2 - uVar4;
        }
        uVar5 = uVar5 + 1;
      } while (uVar5 != uVar6);
    }
    iVar2 = (int)uVar7 - param_5;
  }
  return iVar2;
}



int uprv_compareInvEbcdic_76_godot
              (undefined8 param_1,char *param_2,uint param_3,long param_4,uint param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  uVar8 = (ulong)param_3;
  if ((((int)param_3 < -1) || (param_4 == 0)) || ((int)param_5 < -1)) {
    iVar3 = 0;
  }
  else {
    if (param_3 == 0xffffffff) {
      sVar4 = strlen(param_2);
      uVar8 = sVar4 & 0xffffffff;
    }
    if (param_5 == 0xffffffff) {
      param_5 = u_strlen_76_godot(param_4);
    }
    uVar7 = (ulong)param_5;
    if ((int)uVar8 <= (int)param_5) {
      uVar7 = uVar8;
    }
    if (0 < (int)uVar7) {
      uVar6 = 0;
      do {
        uVar2 = 0;
        if (param_2[uVar6] != 0) {
          bVar1 = (&asciiFromEbcdic)[(byte)param_2[uVar6]];
          uVar2 = 0xffffffff;
          if (('\0' < (char)bVar1) &&
             (uVar2 = (uint)bVar1,
             (*(uint *)(invariantChars + (long)((int)uVar2 >> 5) * 4) >> (bVar1 & 0x1f) & 1) == 0))
          {
            uVar2 = 0xffffffff;
          }
        }
        uVar5 = (uint)*(ushort *)(param_4 + uVar6 * 2);
        if ((0x7f < uVar5) ||
           ((*(uint *)(invariantChars + (long)((int)uVar5 >> 5) * 4) >> (uVar5 & 0x1f) & 1) == 0)) {
          return uVar2 + 2;
        }
        if (uVar2 - uVar5 != 0) {
          return uVar2 - uVar5;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 != uVar7);
    }
    iVar3 = (int)uVar8 - param_5;
  }
  return iVar3;
}



uint uprv_compareInvEbcdicAsAscii_76_godot(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)*param_1;
  bVar2 = *param_2;
  lVar3 = 1;
  if (*param_1 == bVar2) {
    do {
      if (uVar4 == 0) {
        return 0;
      }
      pbVar1 = param_1 + lVar3;
      uVar4 = (uint)*pbVar1;
      bVar2 = param_2[lVar3];
      lVar3 = lVar3 + 1;
    } while (*pbVar1 == bVar2);
  }
  uVar6 = (uint)bVar2;
  uVar5 = uVar4;
  if ((uVar4 != 0) &&
     ((bVar2 = (&asciiFromEbcdic)[(int)uVar4], (char)bVar2 < '\x01' ||
      (uVar5 = (uint)bVar2,
      (*(uint *)(invariantChars + (long)((int)(uint)bVar2 >> 5) * 4) >> (bVar2 & 0x1f) & 1) == 0))))
  {
    uVar5 = -uVar4;
  }
  if (uVar6 != 0) {
    bVar2 = (&asciiFromEbcdic)[(int)uVar6];
    if (((char)bVar2 < '\x01') ||
       ((*(uint *)(invariantChars + (long)((int)(uint)bVar2 >> 5) * 4) >> (bVar2 & 0x1f) & 1) == 0))
    {
      return uVar5 + uVar6;
    }
    uVar5 = uVar5 - bVar2;
  }
  return uVar5;
}



undefined1 uprv_ebcdicToAscii_76_godot(byte param_1)

{
  return (&asciiFromEbcdic)[param_1];
}



undefined1 uprv_ebcdicToLowercaseAscii_76_godot(byte param_1)

{
  return (&lowercaseAsciiFromEbcdic)[param_1];
}



undefined1 * uprv_aestrncpy_76_godot(undefined1 *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  size_t sVar2;
  undefined1 *__s;
  
  if (param_3 == -1) {
    sVar2 = strlen((char *)param_2);
    param_3 = (int)sVar2 + 1;
  }
  bVar1 = *param_2;
  __s = param_1;
  if (param_3 < 1) {
LAB_00100920:
    if (0 < param_3) {
      memset(__s,0,(long)param_3);
      return param_1;
    }
  }
  else {
    do {
      if (bVar1 == 0) goto LAB_00100920;
      param_2 = param_2 + 1;
      param_3 = param_3 + -1;
      *__s = (&asciiFromEbcdic)[bVar1];
      bVar1 = *param_2;
      __s = __s + 1;
    } while (0 < param_3);
  }
  return param_1;
}



char * uprv_eastrncpy_76_godot(char *param_1,byte *param_2,int param_3)

{
  byte bVar1;
  size_t sVar2;
  char cVar3;
  char *pcVar4;
  char *__s;
  
  if (param_3 == -1) {
    sVar2 = strlen((char *)param_2);
    param_3 = (int)sVar2 + 1;
  }
  bVar1 = *param_2;
  __s = param_1;
  if ((0 < param_3) && (bVar1 != 0)) {
    pcVar4 = param_1;
    do {
      param_2 = param_2 + 1;
      cVar3 = ebcdicFromAscii[bVar1];
      if (ebcdicFromAscii[bVar1] == '\0') {
        cVar3 = 'o';
      }
      param_3 = param_3 + -1;
      __s = pcVar4 + 1;
      *pcVar4 = cVar3;
      bVar1 = *param_2;
      if (param_3 < 1) {
        return param_1;
      }
      pcVar4 = __s;
    } while (bVar1 != 0);
  }
  if (param_3 < 1) {
    return param_1;
  }
  memset(__s,0,(long)param_3);
  return param_1;
}


