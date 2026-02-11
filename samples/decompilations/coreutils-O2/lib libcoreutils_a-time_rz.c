
undefined8 revert_tz_part_0(long *param_1)

{
  long *plVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined8 uVar5;
  
  piVar3 = __errno_location();
  iVar4 = *piVar3;
  if ((char)param_1[1] == '\0') {
    iVar2 = unsetenv("TZ");
  }
  else {
    iVar2 = setenv("TZ",(char *)((long)param_1 + 9),1);
  }
  if (iVar2 == 0) {
    tzset();
    uVar5 = 1;
  }
  else {
    iVar4 = *piVar3;
    uVar5 = 0;
  }
  do {
    plVar1 = (long *)*param_1;
    free(param_1);
    param_1 = plVar1;
  } while (plVar1 != (long *)0x0);
  *piVar3 = iVar4;
  return uVar5;
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



undefined8 save_abbr(long *param_1,char *param_2)

{
  char *__s2;
  long *plVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  char *__s1;
  
  __s2 = *(char **)(param_2 + 0x30);
  if ((__s2 != (char *)0x0) && ((__s2 < param_2 || (param_2 + 0x38 <= __s2)))) {
    __s1 = (char *)((long)param_1 + 9);
    if (*__s2 != '\0') {
      do {
        iVar2 = strcmp(__s1,__s2);
        while( true ) {
          if (iVar2 == 0) goto LAB_001001c8;
          if ((*__s1 == '\0') &&
             ((__s1 != (char *)((long)param_1 + 9) || ((char)param_1[1] == '\0')))) {
            sVar3 = strlen(__s2);
            if ((long)(sVar3 + 1) < (long)param_1 + (0x80 - (long)__s1)) {
              memcpy(__s1,__s2,sVar3 + 1);
              __s1[sVar3 + 1] = '\0';
            }
            else {
              lVar4 = tzalloc(__s2);
              *param_1 = lVar4;
              if (lVar4 == 0) {
                return 0;
              }
              *(undefined1 *)(lVar4 + 8) = 0;
              __s1 = (char *)(lVar4 + 9);
            }
            goto LAB_001001c8;
          }
          sVar3 = strlen(__s1);
          __s1 = __s1 + sVar3 + 1;
          if ((*__s1 != '\0') || (plVar1 = (long *)*param_1, plVar1 == (long *)0x0)) break;
          __s1 = (char *)((long)plVar1 + 9);
          iVar2 = strcmp(__s1,__s2);
          param_1 = plVar1;
        }
      } while( true );
    }
    __s1 = "";
LAB_001001c8:
    *(char **)(param_2 + 0x30) = __s1;
  }
  return 1;
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



long * set_tz(long param_1)

{
  long *plVar1;
  int iVar2;
  char *__s2;
  long *__ptr;
  int *piVar3;
  
  __s2 = getenv("TZ");
  if (__s2 == (char *)0x0) {
    if (*(char *)(param_1 + 8) == '\0') {
      return (long *)0x1;
    }
  }
  else {
    if (*(char *)(param_1 + 8) == '\0') {
      __ptr = (long *)tzalloc(__s2);
      if (__ptr == (long *)0x0) {
        return (long *)0x0;
      }
      iVar2 = unsetenv("TZ");
      goto joined_r0x00100338;
    }
    iVar2 = strcmp((char *)(param_1 + 9),__s2);
    if (iVar2 == 0) {
      return (long *)0x1;
    }
  }
  __ptr = (long *)tzalloc(__s2);
  if (__ptr == (long *)0x0) {
    return (long *)0x0;
  }
  iVar2 = setenv("TZ",(char *)(param_1 + 9),1);
joined_r0x00100338:
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    if (__ptr != (long *)0x1) {
      do {
        plVar1 = (long *)*__ptr;
        free(__ptr);
        __ptr = plVar1;
      } while (plVar1 != (long *)0x0);
    }
    *piVar3 = iVar2;
    return (long *)0x0;
  }
  tzset();
  return __ptr;
}



undefined8 revert_tz(long param_1)

{
  undefined8 uVar1;
  
  if (param_1 != 1) {
    uVar1 = revert_tz_part_0();
    return uVar1;
  }
  return 1;
}



tm * localtime_rz(long param_1,time_t *param_2,tm *param_3)

{
  char cVar1;
  long lVar2;
  tm *ptVar3;
  
  if (param_1 == 0) {
    ptVar3 = gmtime_r(param_2,param_3);
    return ptVar3;
  }
  lVar2 = set_tz();
  if (lVar2 != 0) {
    ptVar3 = localtime_r(param_2,param_3);
    if ((ptVar3 != (tm *)0x0) && (cVar1 = save_abbr(param_1,param_3), cVar1 != '\0')) {
      if ((lVar2 != 1) && (cVar1 = revert_tz_part_0(lVar2), cVar1 == '\0')) {
        return (tm *)0x0;
      }
      return param_3;
    }
    if (lVar2 != 1) {
      revert_tz_part_0(lVar2);
    }
  }
  return (tm *)0x0;
}



time_t mktime_z(long param_1,tm *param_2)

{
  char cVar1;
  long lVar2;
  time_t tVar3;
  long in_FS_OFFSET;
  tm local_68;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      tVar3 = timegm(param_2);
      return tVar3;
    }
    goto LAB_00100594;
  }
  lVar2 = set_tz();
  if (lVar2 == 0) {
LAB_001004f0:
    tVar3 = -1;
  }
  else {
    local_68.tm_mon = param_2->tm_mon;
    local_68.tm_year = param_2->tm_year;
    local_68.tm_sec = param_2->tm_sec;
    local_68.tm_min = param_2->tm_min;
    local_68.tm_hour = param_2->tm_hour;
    local_68.tm_mday = param_2->tm_mday;
    local_68.tm_yday = -1;
    local_68.tm_isdst = param_2->tm_isdst;
    tVar3 = mktime(&local_68);
    if (local_68.tm_yday < 0) {
LAB_001004e2:
      if (lVar2 != 1) {
        revert_tz_part_0(lVar2);
      }
      goto LAB_001004f0;
    }
    cVar1 = save_abbr(param_1,&local_68);
    if (cVar1 == '\0') goto LAB_001004e2;
    if (lVar2 != 1) {
      cVar1 = revert_tz_part_0(lVar2);
      if (cVar1 == '\0') goto LAB_001004f0;
    }
    param_2->tm_sec = local_68.tm_sec;
    param_2->tm_min = local_68.tm_min;
    param_2->tm_hour = local_68.tm_hour;
    param_2->tm_mday = local_68.tm_mday;
    param_2->tm_zone = local_68.tm_zone;
    param_2->tm_mon = local_68.tm_mon;
    param_2->tm_year = local_68.tm_year;
    param_2->tm_wday = (int)CONCAT44(local_68.tm_yday,local_68.tm_wday);
    param_2->tm_yday = (int)(CONCAT44(local_68.tm_yday,local_68.tm_wday) >> 0x20);
    *(ulong *)&param_2->tm_isdst = CONCAT44(local_68._36_4_,local_68.tm_isdst);
    param_2->tm_gmtoff = local_68.tm_gmtoff;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return tVar3;
  }
LAB_00100594:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


