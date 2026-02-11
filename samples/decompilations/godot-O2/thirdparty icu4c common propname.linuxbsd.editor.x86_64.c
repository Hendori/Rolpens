
/* icu_76_godot::PropNameData::findPropertyValueNameGroup(int, int) [clone .part.0] */

undefined4 icu_76_godot::PropNameData::findPropertyValueNameGroup(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  
  iVar2 = param_1 + 2;
  iVar3 = *(int *)(valueMaps + (long)(param_1 + 1) * 4);
  if (iVar3 < 0x10) {
    if (0 < iVar3) {
      while( true ) {
        iVar1 = *(int *)(valueMaps + (long)iVar2 * 4);
        if (param_2 < iVar1) break;
        if (param_2 < *(int *)(valueMaps + (long)(iVar2 + 1) * 4)) {
          return *(undefined4 *)(valueMaps + (long)((iVar2 + 2 + param_2) - iVar1) * 4);
        }
        iVar2 = iVar2 + 2 + (*(int *)(valueMaps + (long)(iVar2 + 1) * 4) - iVar1);
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          return 0;
        }
      }
    }
  }
  else {
    iVar3 = param_1 + -0xe + iVar3;
    lVar4 = (long)iVar2;
    do {
      if (param_2 < *(int *)(valueMaps + lVar4 * 4)) {
        return 0;
      }
      if (param_2 == *(int *)(valueMaps + lVar4 * 4)) {
        return *(undefined4 *)(valueMaps + (long)((iVar3 + (int)lVar4) - iVar2) * 4);
      }
      lVar4 = lVar4 + 1;
    } while ((int)lVar4 < iVar3);
  }
  return 0;
}



void uprv_compareASCIIPropertyNames_76_godot(long param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  
LAB_00100111:
  lVar3 = 1;
  do {
    bVar2 = *(byte *)(param_1 + -1 + lVar3);
    if (bVar2 != 0x5f) {
      if (0x2d < bVar2) goto LAB_00100139;
      if ((0xffffdffeffffc1ffU >> ((ulong)(uint)(int)(char)bVar2 & 0x3f) & 1) != 0) break;
    }
    lVar3 = lVar3 + 1;
  } while( true );
  uVar5 = (int)lVar3 << 8;
  if (bVar2 != 0) {
LAB_00100139:
    bVar2 = uprv_asciitolower_76_godot();
    uVar5 = (int)lVar3 << 8 | (uint)bVar2;
  }
  lVar3 = 1;
  do {
    bVar2 = *(byte *)(param_2 + -1 + lVar3);
    if (bVar2 != 0x5f) {
      if (0x2d < bVar2) goto LAB_001000d1;
      if ((0xffffdffeffffc1ffU >> ((ulong)(uint)(int)(char)bVar2 & 0x3f) & 1) != 0) break;
    }
    lVar3 = lVar3 + 1;
  } while( true );
  uVar4 = (int)lVar3 << 8;
  uVar1 = uVar5;
  if (bVar2 != 0) {
LAB_001000d1:
    bVar2 = uprv_asciitolower_76_godot();
    uVar4 = (int)lVar3 << 8 | (uint)bVar2;
    uVar1 = uVar4 | uVar5;
  }
  if (((uVar1 & 0xff) == 0) || ((uVar4 != uVar5 && ((uVar5 & 0xff) != (uVar4 & 0xff))))) {
    return;
  }
  param_1 = param_1 + ((int)uVar5 >> 8);
  param_2 = param_2 + ((int)uVar4 >> 8);
  goto LAB_00100111;
}



void uprv_compareEBCDICPropertyNames_76_godot(char *param_1,char *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  
  do {
    uVar6 = 1;
    uVar11 = (uint)*param_1;
    uVar9 = 1;
    iVar5 = 1;
    if ('%' < *param_1) goto LAB_0010022a;
LAB_00100208:
    iVar5 = (int)uVar9;
    if ('\x04' < (char)uVar11) {
      uVar9 = 0x2000203820 >> ((ulong)uVar11 & 0x3f);
      uVar1 = uVar6;
      do {
        if ((uVar9 & 1) == 0) {
LAB_00100238:
          uVar10 = iVar5 << 8;
          goto LAB_0010023d;
        }
        uVar6 = uVar1 + 1;
        uVar11 = (uint)param_1[uVar1];
        uVar9 = uVar6 & 0xffffffff;
        iVar5 = (int)uVar6;
        if (param_1[uVar1] < '&') goto LAB_00100208;
LAB_0010022a:
        if (0x2d < (byte)(uVar11 - 0x40)) goto LAB_00100238;
        uVar9 = 0x200100000001 >> ((ulong)(uVar11 - 0x40) & 0x3f);
        uVar1 = uVar6;
      } while( true );
    }
    uVar10 = (int)uVar6 << 8;
    if ((char)uVar11 != '\0') {
LAB_0010023d:
      bVar4 = uprv_ebcdictolower_76_godot();
      uVar10 = uVar10 | bVar4;
    }
    lVar7 = 1;
    uVar11 = (uint)*param_2;
    iVar5 = 1;
    if ('%' < *param_2) goto LAB_0010027d;
LAB_00100260:
    if ('\x04' < (char)uVar11) {
      uVar6 = 0x2000203820 >> ((ulong)uVar11 & 0x3f);
      lVar2 = lVar7;
      do {
        if ((uVar6 & 1) == 0) {
LAB_0010028b:
          uVar8 = iVar5 << 8;
          goto LAB_00100291;
        }
        lVar7 = lVar2 + 1;
        uVar11 = (uint)param_2[lVar2];
        iVar5 = (int)lVar7;
        if (param_2[lVar2] < '&') goto LAB_00100260;
LAB_0010027d:
        if (0x2d < (byte)(uVar11 - 0x40)) goto LAB_0010028b;
        uVar6 = 0x200100000001 >> ((ulong)(uVar11 - 0x40) & 0x3f);
        lVar2 = lVar7;
      } while( true );
    }
    uVar8 = iVar5 << 8;
    uVar3 = uVar10;
    if ((char)uVar11 != '\0') {
LAB_00100291:
      bVar4 = uprv_ebcdictolower_76_godot();
      uVar8 = uVar8 | bVar4;
      uVar3 = uVar8 | uVar10;
    }
    if (((uVar3 & 0xff) == 0) || ((uVar8 != uVar10 && ((uVar10 & 0xff) != (uVar8 & 0xff))))) {
      return;
    }
    param_1 = param_1 + ((int)uVar10 >> 8);
    param_2 = param_2 + ((int)uVar8 >> 8);
  } while( true );
}



/* icu_76_godot::PropNameData::findProperty(int) */

int icu_76_godot::PropNameData::findProperty(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar2 = 6;
  iVar3 = 0x4c;
  iVar1 = 3;
  if (-1 < param_1) {
    do {
      if (param_1 < iVar3) {
        return iVar1 + (param_1 - iVar4) * 2;
      }
      iVar3 = iVar1 + (iVar3 - iVar4) * 2;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        return 0;
      }
      iVar4 = *(int *)(valueMaps + (long)iVar3 * 4);
      iVar1 = iVar3 + 2;
      iVar3 = *(int *)(valueMaps + (long)(iVar3 + 1) * 4);
    } while (iVar4 <= param_1);
  }
  return 0;
}



/* icu_76_godot::PropNameData::findPropertyValueNameGroup(int, int) */

undefined8 icu_76_godot::PropNameData::findPropertyValueNameGroup(int param_1,int param_2)

{
  undefined8 uVar1;
  
  if (param_1 != 0) {
    uVar1 = findPropertyValueNameGroup(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::PropNameData::getName(char const*, int) */

char * icu_76_godot::PropNameData::getName(char *param_1,int param_2)

{
  size_t sVar1;
  char *__s;
  
  if ((param_2 < *param_1) && (-1 < param_2)) {
    __s = param_1 + 1;
    if (param_2 != 0) {
      do {
        sVar1 = strlen(__s);
        __s = __s + sVar1 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    if (*__s == '\0') {
      __s = (char *)0x0;
    }
    return __s;
  }
  return (char *)0x0;
}



/* icu_76_godot::PropNameData::containsName(icu_76_godot::BytesTrie&, char const*) */

char icu_76_godot::PropNameData::containsName(BytesTrie *param_1,char *param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  if (param_2 == (char *)0x0) {
    return '\0';
  }
  pcVar4 = param_2 + 1;
  cVar1 = *param_2;
  if (cVar1 != '\0') {
    uVar2 = 1;
LAB_00100469:
    do {
      iVar3 = uprv_asciitolower_76_godot((int)cVar1);
      if ((byte)(iVar3 - 0x20U) < 0x40) {
        if ((0x8000000000002001U >> ((ulong)(iVar3 - 0x20U) & 0x3f) & 1) != 0) {
          cVar1 = *pcVar4;
          pcVar4 = pcVar4 + 1;
          if (cVar1 == '\0') break;
          goto LAB_00100469;
        }
LAB_00100448:
        if ((uVar2 & 1) == 0) {
          return '\0';
        }
        uVar2 = icu_76_godot::BytesTrie::next((int)param_1);
      }
      else if (4 < (byte)((char)iVar3 - 9U)) goto LAB_00100448;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    cVar1 = 1 < (int)uVar2;
  }
  return cVar1;
}



/* icu_76_godot::PropNameData::getPropertyName(int, int) */

char * icu_76_godot::PropNameData::getPropertyName(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  char *__s;
  
  iVar1 = findProperty(param_1);
  if (((iVar1 != 0) &&
      (__s = "Alpha" + *(int *)(valueMaps + (long)iVar1 * 4),
      param_2 < (char)(&nameGroups)[*(int *)(valueMaps + (long)iVar1 * 4)])) && (-1 < param_2)) {
    if (param_2 != 0) {
      do {
        sVar2 = strlen(__s);
        __s = __s + sVar2 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    if (*__s == '\0') {
      __s = (char *)0x0;
    }
    return __s;
  }
  return (char *)0x0;
}



/* icu_76_godot::PropNameData::getPropertyValueName(int, int, int) */

char * icu_76_godot::PropNameData::getPropertyValueName(int param_1,int param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  char *__s;
  
  iVar1 = findProperty(param_1);
  if (iVar1 == 0) {
    return (char *)0x0;
  }
  __s = (char *)0x0;
  if ((*(int *)(valueMaps + (long)(iVar1 + 1) * 4) != 0) &&
     (iVar1 = findPropertyValueNameGroup(*(int *)(valueMaps + (long)(iVar1 + 1) * 4),param_2),
     iVar1 != 0)) {
    __s = "Alpha" + iVar1;
    if ((char)(&nameGroups)[iVar1] <= param_3) {
      return (char *)0x0;
    }
    if (param_3 < 0) {
      return (char *)0x0;
    }
    if (param_3 != 0) {
      do {
        sVar2 = strlen(__s);
        __s = __s + sVar2 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (*__s == '\0') {
      __s = (char *)0x0;
    }
  }
  return __s;
}



/* icu_76_godot::PropNameData::getPropertyOrValueEnum(int, char const*) */

undefined4 icu_76_godot::PropNameData::getPropertyOrValueEnum(int param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  byte *local_40;
  byte *local_38;
  undefined4 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  local_40 = &bytesTries + param_1;
  local_30 = 0xffffffff;
  local_38 = local_40;
  cVar1 = containsName((BytesTrie *)&local_48,param_2);
  if (cVar1 == '\0') {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = icu_76_godot::BytesTrie::readValue(local_38 + 1,(int)(uint)*local_38 >> 1);
  }
  icu_76_godot::BytesTrie::~BytesTrie((BytesTrie *)&local_48);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::PropNameData::getPropertyEnum(char const*) */

void icu_76_godot::PropNameData::getPropertyEnum(char *param_1)

{
  getPropertyOrValueEnum(0,param_1);
  return;
}



/* icu_76_godot::PropNameData::getPropertyValueEnum(int, char const*) */

undefined8 icu_76_godot::PropNameData::getPropertyValueEnum(int param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = findProperty(param_1);
  if ((iVar1 != 0) && (*(int *)(valueMaps + (long)(iVar1 + 1) * 4) != 0)) {
    uVar2 = getPropertyOrValueEnum
                      (*(int *)(valueMaps + (long)*(int *)(valueMaps + (long)(iVar1 + 1) * 4) * 4),
                       param_2);
    return uVar2;
  }
  return 0xffffffff;
}



char * u_getPropertyName_76_godot(int param_1,int param_2)

{
  int iVar1;
  size_t sVar2;
  char *__s;
  
  iVar1 = icu_76_godot::PropNameData::findProperty(param_1);
  if (((iVar1 != 0) &&
      (__s = "Alpha" + *(int *)(icu_76_godot::PropNameData::valueMaps + (long)iVar1 * 4),
      param_2 < (char)(&icu_76_godot::PropNameData::nameGroups)
                      [*(int *)(icu_76_godot::PropNameData::valueMaps + (long)iVar1 * 4)])) &&
     (-1 < param_2)) {
    if (param_2 != 0) {
      do {
        sVar2 = strlen(__s);
        __s = __s + sVar2 + 1;
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
    if (*__s == '\0') {
      __s = (char *)0x0;
    }
    return __s;
  }
  return (char *)0x0;
}



void u_getPropertyEnum_76_godot(char *param_1)

{
  icu_76_godot::PropNameData::getPropertyOrValueEnum(0,param_1);
  return;
}



char * u_getPropertyValueName_76_godot(int param_1,int param_2,int param_3)

{
  int iVar1;
  size_t sVar2;
  char *__s;
  
  iVar1 = icu_76_godot::PropNameData::findProperty(param_1);
  if (iVar1 == 0) {
    return (char *)0x0;
  }
  __s = (char *)0x0;
  if ((*(int *)(icu_76_godot::PropNameData::valueMaps + (long)(iVar1 + 1) * 4) != 0) &&
     (iVar1 = icu_76_godot::PropNameData::findPropertyValueNameGroup
                        (*(int *)(icu_76_godot::PropNameData::valueMaps + (long)(iVar1 + 1) * 4),
                         param_2), iVar1 != 0)) {
    __s = "Alpha" + iVar1;
    if ((char)(&icu_76_godot::PropNameData::nameGroups)[iVar1] <= param_3) {
      return (char *)0x0;
    }
    if (param_3 < 0) {
      return (char *)0x0;
    }
    if (param_3 != 0) {
      do {
        sVar2 = strlen(__s);
        __s = __s + sVar2 + 1;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    if (*__s == '\0') {
      __s = (char *)0x0;
    }
  }
  return __s;
}



undefined8 u_getPropertyValueEnum_76_godot(int param_1,char *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = icu_76_godot::PropNameData::findProperty(param_1);
  if ((iVar1 != 0) && (*(int *)(icu_76_godot::PropNameData::valueMaps + (long)(iVar1 + 1) * 4) != 0)
     ) {
    uVar2 = icu_76_godot::PropNameData::getPropertyOrValueEnum
                      (*(int *)(icu_76_godot::PropNameData::valueMaps +
                               (long)*(int *)(icu_76_godot::PropNameData::valueMaps +
                                             (long)(iVar1 + 1) * 4) * 4),param_2);
    return uVar2;
  }
  return 0xffffffff;
}



char * uscript_getName_76_godot(int param_1)

{
  int iVar1;
  long lVar2;
  size_t sVar3;
  char *pcVar4;
  
  iVar1 = icu_76_godot::PropNameData::findProperty(0x100a);
  if (iVar1 != 0) {
    pcVar4 = (char *)0x0;
    if (*(int *)(icu_76_godot::PropNameData::valueMaps + (long)(iVar1 + 1) * 4) != 0) {
      iVar1 = icu_76_godot::PropNameData::findPropertyValueNameGroup
                        (*(int *)(icu_76_godot::PropNameData::valueMaps + (long)(iVar1 + 1) * 4),
                         param_1);
      if (iVar1 != 0) {
        lVar2 = (long)iVar1;
        if ('\x01' < (char)(&icu_76_godot::PropNameData::nameGroups)[lVar2]) {
          sVar3 = strlen("Alpha" + lVar2);
          pcVar4 = "Alpha" + sVar3 + lVar2 + 1;
          if (*pcVar4 == '\0') {
            pcVar4 = (char *)0x0;
          }
        }
      }
    }
    return pcVar4;
  }
  return (char *)0x0;
}



char * uscript_getShortName_76_godot(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = icu_76_godot::PropNameData::findProperty(0x100a);
  if (iVar1 != 0) {
    pcVar2 = (char *)0x0;
    if (*(int *)(icu_76_godot::PropNameData::valueMaps + (long)(iVar1 + 1) * 4) != 0) {
      iVar1 = icu_76_godot::PropNameData::findPropertyValueNameGroup
                        (*(int *)(icu_76_godot::PropNameData::valueMaps + (long)(iVar1 + 1) * 4),
                         param_1);
      if (((iVar1 != 0) && ('\0' < (char)(&icu_76_godot::PropNameData::nameGroups)[iVar1])) &&
         ("Alpha"[iVar1] != '\0')) {
        pcVar2 = "Alpha" + iVar1;
      }
    }
    return pcVar2;
  }
  return (char *)0x0;
}


