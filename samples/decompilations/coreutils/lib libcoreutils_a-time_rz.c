
/* WARNING: Unknown calling convention */

_Bool revert_tz(timezone_t tz)

{
  tm_zone *ptVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  _Bool _Var5;
  
  piVar3 = __errno_location();
  iVar4 = *piVar3;
  if (tz->tz_is_set == '\0') {
    iVar2 = unsetenv("TZ");
  }
  else {
    iVar2 = setenv("TZ",&tz->field_0x9,1);
  }
  if (iVar2 == 0) {
    tzset();
    _Var5 = true;
  }
  else {
    iVar4 = *piVar3;
    _Var5 = false;
  }
  do {
    ptVar1 = tz->next;
    free(tz);
    tz = ptVar1;
  } while (ptVar1 != (tm_zone *)0x0);
  *piVar3 = iVar4;
  return _Var5;
}



/* WARNING: Unknown calling convention */

timezone_t tzalloc(char *name)

{
  ulong uVar1;
  size_t sVar2;
  timezone_t ptVar3;
  ulong uVar4;
  
  if (name == (char *)0x0) {
    ptVar3 = (timezone_t)malloc(0x80);
    if (ptVar3 != (timezone_t)0x0) {
      ptVar3->next = (tm_zone *)0x0;
      *(undefined2 *)&ptVar3->tz_is_set = 0;
      return ptVar3;
    }
  }
  else {
    sVar2 = strlen(name);
    uVar1 = sVar2 + 1;
    uVar4 = 0x76;
    if (0x75 < uVar1) {
      uVar4 = uVar1;
    }
    uVar4 = uVar4 + 0x11 & 0xfffffffffffffff8;
    ptVar3 = (timezone_t)malloc(uVar4);
    if (ptVar3 != (timezone_t)0x0) {
      ptVar3->next = (tm_zone *)0x0;
      *(undefined2 *)&ptVar3->tz_is_set = 1;
      __memcpy_chk(&ptVar3->field_0x9,name,uVar1,uVar4 - 9);
      (&ptVar3->field_0xa)[sVar2] = 0;
    }
  }
  return ptVar3;
}



/* WARNING: Unknown calling convention */

_Bool save_abbr(timezone_t tz,tm *tm)

{
  tm *__s2;
  tm_zone *ptVar1;
  int iVar2;
  size_t sVar3;
  timezone_t ptVar4;
  char *__s1;
  
  __s2 = (tm *)tm->tm_zone;
  if ((__s2 != (tm *)0x0) && ((__s2 < tm || (tm + 1 <= __s2)))) {
    __s1 = &tz->field_0x9;
    if ((char)__s2->tm_sec != '\0') {
      do {
        iVar2 = strcmp(__s1,(char *)__s2);
        while( true ) {
          if (iVar2 == 0) goto LAB_001001c8;
          if ((*__s1 == '\0') && ((__s1 != &tz->field_0x9 || (tz->tz_is_set == '\0')))) {
            sVar3 = strlen((char *)__s2);
            if ((long)(sVar3 + 1) < (long)tz + (0x80 - (long)__s1)) {
              memcpy(__s1,__s2,sVar3 + 1);
              __s1[sVar3 + 1] = '\0';
            }
            else {
              ptVar4 = tzalloc((char *)__s2);
              tz->next = ptVar4;
              if (ptVar4 == (timezone_t)0x0) {
                return false;
              }
              ptVar4->tz_is_set = '\0';
              __s1 = &ptVar4->field_0x9;
            }
            goto LAB_001001c8;
          }
          sVar3 = strlen(__s1);
          __s1 = __s1 + sVar3 + 1;
          if ((*__s1 != '\0') || (ptVar1 = tz->next, ptVar1 == (tm_zone *)0x0)) break;
          __s1 = &ptVar1->field_0x9;
          iVar2 = strcmp(__s1,(char *)__s2);
          tz = ptVar1;
        }
      } while( true );
    }
    __s1 = "";
LAB_001001c8:
    tm->tm_zone = __s1;
  }
  return true;
}



/* WARNING: Unknown calling convention */

void tzfree(timezone_t tz)

{
  tm_zone *ptVar1;
  
  if (tz == (timezone_t)0x1) {
    return;
  }
  if (tz != (timezone_t)0x0) {
    do {
      ptVar1 = tz->next;
      free(tz);
      tz = ptVar1;
    } while (ptVar1 != (tm_zone *)0x0);
  }
  return;
}



/* WARNING: Unknown calling convention */

timezone_t set_tz(timezone_t tz)

{
  tm_zone *ptVar1;
  int iVar2;
  char *__s2;
  timezone_t __ptr;
  int *piVar3;
  
  __s2 = getenv("TZ");
  if (__s2 == (char *)0x0) {
    if (tz->tz_is_set == '\0') {
      return (timezone_t)0x1;
    }
  }
  else {
    if (tz->tz_is_set == '\0') {
      __ptr = tzalloc(__s2);
      if (__ptr == (timezone_t)0x0) {
        return (timezone_t)0x0;
      }
      iVar2 = unsetenv("TZ");
      goto joined_r0x00100338;
    }
    iVar2 = strcmp(&tz->field_0x9,__s2);
    if (iVar2 == 0) {
      return (timezone_t)0x1;
    }
  }
  __ptr = tzalloc(__s2);
  if (__ptr == (timezone_t)0x0) {
    return (timezone_t)0x0;
  }
  iVar2 = setenv("TZ",&tz->field_0x9,1);
joined_r0x00100338:
  if (iVar2 != 0) {
    piVar3 = __errno_location();
    iVar2 = *piVar3;
    if (__ptr != (timezone_t)0x1) {
      do {
        ptVar1 = __ptr->next;
        free(__ptr);
        __ptr = ptVar1;
      } while (ptVar1 != (tm_zone *)0x0);
    }
    *piVar3 = iVar2;
    return (timezone_t)0x0;
  }
  tzset();
  return __ptr;
}



/* WARNING: Unknown calling convention */

_Bool revert_tz(timezone_t tz)

{
  _Bool _Var1;
  
  if (tz != (timezone_t)0x1) {
    _Var1 = revert_tz(tz);
    return _Var1;
  }
  return true;
}



/* WARNING: Unknown calling convention */

tm * localtime_rz(timezone_t tz,time_t *t,tm *tm)

{
  _Bool _Var1;
  timezone_t tz_00;
  tm *ptVar2;
  
  if (tz == (timezone_t)0x0) {
    ptVar2 = gmtime_r(t,(tm *)tm);
    return (tm *)ptVar2;
  }
  tz_00 = set_tz(tz);
  if (tz_00 != (timezone_t)0x0) {
    ptVar2 = localtime_r(t,(tm *)tm);
    if ((ptVar2 != (tm *)0x0) && (_Var1 = save_abbr(tz,tm), _Var1)) {
      if ((tz_00 != (timezone_t)0x1) && (_Var1 = revert_tz(tz_00), !_Var1)) {
        return (tm *)0x0;
      }
      return tm;
    }
    if (tz_00 != (timezone_t)0x1) {
      revert_tz(tz_00);
    }
  }
  return (tm *)0x0;
}



/* WARNING: Unknown calling convention */

time_t mktime_z(timezone_t tz,tm *tm)

{
  long lVar1;
  _Bool _Var2;
  timezone_t tz_00;
  time_t tVar3;
  long in_FS_OFFSET;
  tm tm_1;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (tz == (timezone_t)0x0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      tVar3 = timegm((tm *)tm);
      return tVar3;
    }
    goto LAB_00100594;
  }
  tz_00 = set_tz(tz);
  if (tz_00 == (timezone_t)0x0) {
LAB_001004f0:
    tVar3 = -1;
  }
  else {
    tm_1.tm_mon = tm->tm_mon;
    tm_1.tm_year = tm->tm_year;
    tm_1.tm_sec = tm->tm_sec;
    tm_1.tm_min = tm->tm_min;
    tm_1.tm_hour = tm->tm_hour;
    tm_1.tm_mday = tm->tm_mday;
    tm_1.tm_yday = -1;
    tm_1.tm_isdst = tm->tm_isdst;
    tVar3 = mktime((tm *)&tm_1);
    if (tm_1.tm_yday < 0) {
LAB_001004e2:
      if (tz_00 != (timezone_t)0x1) {
        revert_tz(tz_00);
      }
      goto LAB_001004f0;
    }
    _Var2 = save_abbr(tz,&tm_1);
    if (!_Var2) goto LAB_001004e2;
    if (tz_00 != (timezone_t)0x1) {
      _Var2 = revert_tz(tz_00);
      if (!_Var2) goto LAB_001004f0;
    }
    tm->tm_sec = tm_1.tm_sec;
    tm->tm_min = tm_1.tm_min;
    tm->tm_hour = tm_1.tm_hour;
    tm->tm_mday = tm_1.tm_mday;
    tm->tm_zone = tm_1.tm_zone;
    tm->tm_mon = tm_1.tm_mon;
    tm->tm_year = tm_1.tm_year;
    tm->tm_wday = (int)CONCAT44(tm_1.tm_yday,tm_1.tm_wday);
    tm->tm_yday = (int)(CONCAT44(tm_1.tm_yday,tm_1.tm_wday) >> 0x20);
    *(ulong *)&tm->tm_isdst = CONCAT44(tm_1._36_4_,tm_1.tm_isdst);
    tm->tm_gmtoff = tm_1.tm_gmtoff;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return tVar3;
  }
LAB_00100594:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


