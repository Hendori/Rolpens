
undefined8 save_abbr(undefined8 *param_1,char *param_2)

{
  ulong __n;
  char *__s2;
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  char *__s1;
  ulong uVar4;
  
  __s2 = *(char **)(param_2 + 0x30);
  if ((__s2 != (char *)0x0) && ((__s2 < param_2 || (param_2 + 0x38 <= __s2)))) {
    __s1 = (char *)((long)param_1 + 9);
    if (*__s2 != '\0') {
      do {
        iVar1 = strcmp(__s1,__s2);
        while( true ) {
          if (iVar1 == 0) goto LAB_00100098;
          if ((*__s1 == '\0') &&
             ((__s1 != (char *)((long)param_1 + 9) || (*(char *)(param_1 + 1) == '\0')))) {
            sVar2 = strlen(__s2);
            __n = sVar2 + 1;
            if ((long)__n < (long)param_1 + (0x80 - (long)__s1)) {
              memcpy(__s1,__s2,__n);
              __s1[sVar2 + 1] = '\0';
            }
            else {
              uVar4 = 0x76;
              if (0x75 < __n) {
                uVar4 = __n;
              }
              uVar4 = uVar4 + 0x11 & 0xfffffffffffffff8;
              puVar3 = (undefined8 *)malloc(uVar4);
              if (puVar3 == (undefined8 *)0x0) {
                *param_1 = 0;
                return 0;
              }
              __s1 = (char *)((long)puVar3 + 9);
              *puVar3 = 0;
              *(undefined2 *)(puVar3 + 1) = 1;
              __memcpy_chk(__s1,__s2,__n,uVar4 - 9);
              *(undefined1 *)((long)puVar3 + sVar2 + 10) = 0;
              *param_1 = puVar3;
              *(undefined1 *)(puVar3 + 1) = 0;
            }
            goto LAB_00100098;
          }
          sVar2 = strlen(__s1);
          __s1 = __s1 + sVar2 + 1;
          if ((*__s1 != '\0') || (puVar3 = (undefined8 *)*param_1, puVar3 == (undefined8 *)0x0))
          break;
          __s1 = (char *)((long)puVar3 + 9);
          iVar1 = strcmp(__s1,__s2);
          param_1 = puVar3;
        }
      } while( true );
    }
    __s1 = "";
LAB_00100098:
    *(char **)(param_2 + 0x30) = __s1;
  }
  return 1;
}



undefined8 * tzalloc(char *param_1)

{
  ulong uVar1;
  size_t sVar2;
  undefined8 *puVar3;
  ulong uVar4;
  
  if (param_1 == (char *)0x0) {
    puVar3 = (undefined8 *)malloc(0x80);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 0;
      return puVar3;
    }
  }
  else {
    sVar2 = strlen(param_1);
    uVar1 = sVar2 + 1;
    uVar4 = 0x76;
    if (0x75 < uVar1) {
      uVar4 = uVar1;
    }
    uVar4 = uVar4 + 0x11 & 0xfffffffffffffff8;
    puVar3 = (undefined8 *)malloc(uVar4);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      *(undefined2 *)(puVar3 + 1) = 1;
      __memcpy_chk((long)puVar3 + 9,param_1,uVar1,uVar4 - 9);
      *(undefined1 *)((long)puVar3 + sVar2 + 10) = 0;
    }
  }
  return puVar3;
}



void tzfree(long *param_1)

{
  long *plVar1;
  
  if (param_1 == (long *)0x1) {
    return;
  }
  if (param_1 != (long *)0x0) {
    do {
      plVar1 = (long *)*param_1;
      free(param_1);
      param_1 = plVar1;
    } while (plVar1 != (long *)0x0);
  }
  return;
}



undefined8 * set_tz(long param_1)

{
  ulong uVar1;
  char cVar2;
  undefined8 *puVar3;
  int iVar4;
  char *__s2;
  size_t sVar5;
  undefined8 *__ptr;
  long lVar6;
  int *piVar7;
  ulong uVar8;
  
  __s2 = getenv("TZ");
  if (__s2 == (char *)0x0) {
    if (*(char *)(param_1 + 8) == '\0') {
      return (undefined8 *)0x1;
    }
    __ptr = (undefined8 *)malloc(0x80);
    if (__ptr == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *__ptr = 0;
    *(undefined2 *)(__ptr + 1) = 0;
  }
  else {
    cVar2 = *(char *)(param_1 + 8);
    if ((cVar2 != '\0') && (iVar4 = strcmp((char *)(param_1 + 9),__s2), iVar4 == 0)) {
      return (undefined8 *)0x1;
    }
    sVar5 = strlen(__s2);
    uVar1 = sVar5 + 1;
    uVar8 = 0x76;
    if (0x75 < uVar1) {
      uVar8 = uVar1;
    }
    uVar8 = uVar8 + 0x11 & 0xfffffffffffffff8;
    __ptr = (undefined8 *)malloc(uVar8);
    if (__ptr == (undefined8 *)0x0) {
      return (undefined8 *)0x0;
    }
    *__ptr = 0;
    *(undefined2 *)(__ptr + 1) = 1;
    lVar6 = __memcpy_chk((long)__ptr + 9,__s2,uVar1,uVar8 - 9);
    *(undefined1 *)(lVar6 + 1 + sVar5) = 0;
    if (cVar2 == '\0') {
      iVar4 = unsetenv("TZ");
      goto joined_r0x0010039d;
    }
  }
  iVar4 = setenv("TZ",(char *)(param_1 + 9),1);
joined_r0x0010039d:
  if (iVar4 != 0) {
    piVar7 = __errno_location();
    iVar4 = *piVar7;
    do {
      puVar3 = (undefined8 *)*__ptr;
      free(__ptr);
      __ptr = puVar3;
    } while (puVar3 != (undefined8 *)0x0);
    *piVar7 = iVar4;
    return (undefined8 *)0x0;
  }
  tzset();
  return __ptr;
}



undefined8 revert_tz(long *param_1)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  undefined8 uVar4;
  int iVar5;
  
  if (param_1 != (long *)0x1) {
    piVar3 = __errno_location();
    iVar5 = *piVar3;
    if ((char)param_1[1] == '\0') {
      iVar2 = unsetenv("TZ");
    }
    else {
      iVar2 = setenv("TZ",(char *)((long)param_1 + 9),1);
    }
    if (iVar2 == 0) {
      tzset();
      uVar4 = 1;
    }
    else {
      iVar5 = *piVar3;
      uVar4 = 0;
    }
    do {
      plVar1 = (long *)*param_1;
      free(param_1);
      param_1 = plVar1;
    } while (plVar1 != (long *)0x0);
    *piVar3 = iVar5;
    return uVar4;
  }
  return 1;
}



tm * localtime_rz(long param_1,time_t *param_2,tm *param_3)

{
  long *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  long *__ptr;
  tm *ptVar6;
  int *piVar7;
  int iVar8;
  
  if (param_1 == 0) {
    ptVar6 = gmtime_r(param_2,param_3);
    return ptVar6;
  }
  __ptr = (long *)set_tz();
  if (__ptr == (long *)0x0) {
    return (tm *)0x0;
  }
  ptVar6 = localtime_r(param_2,param_3);
  if ((ptVar6 == (tm *)0x0) || (cVar4 = save_abbr(param_1,param_3), cVar4 == '\0')) {
    bVar3 = false;
    if (__ptr == (long *)0x1) {
      return (tm *)0x0;
    }
  }
  else {
    bVar3 = true;
    if (__ptr == (long *)0x1) {
      return param_3;
    }
  }
  piVar7 = __errno_location();
  iVar8 = *piVar7;
  if ((char)__ptr[1] == '\0') {
    iVar5 = unsetenv("TZ");
  }
  else {
    iVar5 = setenv("TZ",(char *)((long)__ptr + 9),1);
  }
  if (iVar5 == 0) {
    tzset();
    bVar2 = true;
  }
  else {
    iVar8 = *piVar7;
    bVar2 = false;
  }
  do {
    plVar1 = (long *)*__ptr;
    free(__ptr);
    __ptr = plVar1;
  } while (plVar1 != (long *)0x0);
  *piVar7 = iVar8;
  if ((bVar2) && (bVar3)) {
    return param_3;
  }
  return (tm *)0x0;
}



time_t mktime_z(long param_1,tm *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long *__ptr;
  time_t tVar4;
  int *piVar5;
  int iVar6;
  long in_FS_OFFSET;
  tm local_78;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      tVar4 = timegm(param_2);
      return tVar4;
    }
    goto LAB_00100756;
  }
  __ptr = (long *)set_tz();
  if (__ptr == (long *)0x0) {
LAB_001006f0:
    tVar4 = -1;
  }
  else {
    local_78.tm_mon = param_2->tm_mon;
    local_78.tm_year = param_2->tm_year;
    local_78.tm_sec = param_2->tm_sec;
    local_78.tm_min = param_2->tm_min;
    local_78.tm_hour = param_2->tm_hour;
    local_78.tm_mday = param_2->tm_mday;
    local_78.tm_yday = -1;
    local_78.tm_isdst = param_2->tm_isdst;
    tVar4 = mktime(&local_78);
    if (local_78.tm_yday < 0) {
LAB_0010061d:
      cVar2 = '\0';
      if (__ptr == (long *)0x1) goto LAB_001006f0;
LAB_0010062a:
      piVar5 = __errno_location();
      iVar6 = *piVar5;
      if ((char)__ptr[1] == '\0') {
        iVar3 = unsetenv("TZ");
        if (iVar3 != 0) goto LAB_0010071d;
LAB_00100653:
        tzset();
      }
      else {
        iVar3 = setenv("TZ",(char *)((long)__ptr + 9),1);
        if (iVar3 == 0) goto LAB_00100653;
LAB_0010071d:
        iVar6 = *piVar5;
        cVar2 = '\0';
      }
      do {
        plVar1 = (long *)*__ptr;
        free(__ptr);
        __ptr = plVar1;
      } while (plVar1 != (long *)0x0);
      *piVar5 = iVar6;
      if (cVar2 == '\0') goto LAB_001006f0;
    }
    else {
      cVar2 = save_abbr(param_1,&local_78);
      if (cVar2 == '\0') goto LAB_0010061d;
      if (__ptr != (long *)0x1) goto LAB_0010062a;
    }
    param_2->tm_zone = local_78.tm_zone;
    param_2->tm_sec = local_78.tm_sec;
    param_2->tm_min = local_78.tm_min;
    param_2->tm_hour = local_78.tm_hour;
    param_2->tm_mday = local_78.tm_mday;
    param_2->tm_mon = local_78.tm_mon;
    param_2->tm_year = local_78.tm_year;
    param_2->tm_wday = (int)CONCAT44(local_78.tm_yday,local_78.tm_wday);
    param_2->tm_yday = (int)(CONCAT44(local_78.tm_yday,local_78.tm_wday) >> 0x20);
    *(ulong *)&param_2->tm_isdst = CONCAT44(local_78._36_4_,local_78.tm_isdst);
    param_2->tm_gmtoff = local_78.tm_gmtoff;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return tVar4;
  }
LAB_00100756:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


