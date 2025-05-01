
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* putil_cleanup() */

undefined8 putil_cleanup(void)

{
  UMemory *this;
  void *in_RSI;
  
  if ((gDataDirectory != (char *)0x0) && (*gDataDirectory != '\0')) {
    uprv_free_76_godot();
  }
  this = gTimeZoneFilesDirectory;
  gDataDirectory = (char *)0x0;
  LOCK();
  gDataDirInitOnce = 0;
  UNLOCK();
  if (gTimeZoneFilesDirectory != (UMemory *)0x0) {
    if (gTimeZoneFilesDirectory[0xc] != (UMemory)0x0) {
      uprv_free_76_godot(*(undefined8 *)gTimeZoneFilesDirectory);
    }
    icu_76_godot::UMemory::operator_delete(this,in_RSI);
  }
  gTimeZoneFilesDirectory = (UMemory *)0x0;
  LOCK();
  gTimeZoneFilesInitOnce_76_godot = 0;
  UNLOCK();
  if ((gCorrectedPOSIXLocale != 0) && (gCorrectedPOSIXLocaleHeapAllocated != '\0')) {
    uprv_free_76_godot();
    gCorrectedPOSIXLocaleHeapAllocated = 0;
    gCorrectedPOSIXLocale = 0;
    return 1;
  }
  return 1;
}



/* TimeZoneDataDirInitFn(UErrorCode&) */

void TimeZoneDataDirInitFn(UErrorCode *param_1)

{
  undefined1 *puVar1;
  long *plVar2;
  char *pcVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  int local_38 [2];
  uint local_30;
  long local_20;
  
  uVar4 = 0x100000;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  ucln_common_registerCleanup_76_godot(0x18);
  gTimeZoneFilesDirectory = (long *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,uVar4);
  if (gTimeZoneFilesDirectory == (long *)0x0) {
    *(undefined4 *)param_1 = 7;
    gTimeZoneFilesDirectory = (long *)0x0;
  }
  else {
    *(undefined4 *)(gTimeZoneFilesDirectory + 1) = 0x28;
    *gTimeZoneFilesDirectory = (long)gTimeZoneFilesDirectory + 0xd;
    *(undefined4 *)(gTimeZoneFilesDirectory + 7) = 0;
    *(undefined2 *)((long)gTimeZoneFilesDirectory + 0xc) = 0;
    pcVar3 = getenv("ICU_TIMEZONE_FILES_DIR");
    plVar2 = gTimeZoneFilesDirectory;
    if (pcVar3 == (char *)0x0) {
      pcVar3 = "";
    }
    if (*(int *)param_1 < 1) {
      puVar1 = (undefined1 *)*gTimeZoneFilesDirectory;
      *(undefined4 *)(gTimeZoneFilesDirectory + 7) = 0;
      *puVar1 = 0;
      icu_76_godot::StringPiece::StringPiece((StringPiece *)local_38,pcVar3);
      icu_76_godot::CharString::append((char *)plVar2,local_38[0],(UErrorCode *)(ulong)local_30);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



double uprv_getUTCtime_76_godot(void)

{
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (double)(local_28.tv_sec * 1000 + local_28.tv_usec / 1000);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



double uprv_getRawUTCtime_76_godot(void)

{
  long in_FS_OFFSET;
  timeval local_28;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  gettimeofday(&local_28,(__timezone_ptr_t)0x0);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (double)(local_28.tv_sec * 1000 + local_28.tv_usec / 1000);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 uprv_isNaN_76_godot(ulong param_1)

{
  return CONCAT71((int7)((param_1 & 0x7fffffffffffffff) >> 8),
                  0x7ff0000000000000 < (param_1 & 0x7fffffffffffffff));
}



undefined8 uprv_isInfinite_76_godot(ulong param_1)

{
  return CONCAT71((int7)((param_1 & 0x7fffffffffffffff) >> 8),
                  (param_1 & 0x7fffffffffffffff) == 0x7ff0000000000000);
}



undefined8 uprv_isPositiveInfinity_76_godot(double param_1)

{
  if (0.0 < param_1) {
    return CONCAT71((int7)((ulong)ABS(param_1) >> 8),ABS(param_1) == INFINITY);
  }
  return 0;
}



undefined8 uprv_isNegativeInfinity_76_godot(double param_1)

{
  if (0.0 <= param_1) {
    return 0;
  }
  return CONCAT71((int7)((ulong)ABS(param_1) >> 8),ABS(param_1) == INFINITY);
}



undefined8 uprv_getNaN_76_godot(void)

{
  return _LC3;
}



undefined8 uprv_getInfinity_76_godot(void)

{
  return _LC4;
}



double uprv_floor_76_godot(double param_1)

{
  if ((double)((ulong)param_1 & _LC8) < _LC5) {
    param_1 = (double)((ulong)((double)(long)param_1 -
                              (double)(-(ulong)(param_1 < (double)(long)param_1) & _LC7)) |
                      ~_LC8 & (ulong)param_1);
  }
  return param_1;
}



double uprv_ceil_76_godot(double param_1)

{
  if ((double)((ulong)param_1 & _LC8) < _LC5) {
    param_1 = (double)((ulong)((double)(long)param_1 +
                              (double)(-(ulong)((double)(long)param_1 < param_1) & _LC7)) |
                      ~_LC8 & (ulong)param_1);
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double uprv_round_76_godot(double param_1)

{
  param_1 = param_1 + __LC9;
  if ((double)((ulong)param_1 & _LC8) < _LC5) {
    param_1 = (double)((ulong)((double)(long)param_1 -
                              (double)(-(ulong)(param_1 < (double)(long)param_1) & _LC7)) |
                      ~_LC8 & (ulong)param_1);
  }
  return param_1;
}



ulong uprv_fabs_76_godot(ulong param_1)

{
  return param_1 & _LC8;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double uprv_modf_76_godot(double __x,double *__iptr)

{
  double dVar1;
  
  dVar1 = modf(__x,__iptr);
  return dVar1;
}



double uprv_fmod_76_godot(double param_1,double param_2)

{
  double dVar1;
  ushort in_FPUStatusWord;
  
  dVar1 = param_1;
  do {
    dVar1 = dVar1 - (dVar1 / param_2) * param_2;
  } while ((in_FPUStatusWord & 0x400) != 0);
  if (NAN(dVar1)) {
    fmod(param_1,param_2);
  }
  return dVar1;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double uprv_pow_76_godot(double __x,double __y)

{
  double dVar1;
  
  dVar1 = pow(__x,__y);
  return dVar1;
}



void uprv_pow10_76_godot(int param_1)

{
  pow(_LC11,(double)param_1);
  return;
}



double uprv_fmax_76_godot(double param_1,double param_2)

{
  double dVar1;
  
  if (0x7ff0000000000000 < (ulong)ABS(param_1)) {
    return _LC3;
  }
  dVar1 = _LC3;
  if (((ulong)ABS(param_2) < 0x7ff0000000000001) &&
     ((param_1 != 0.0 || (dVar1 = param_2, param_2 != 0.0)))) {
    if (param_1 <= param_2) {
      param_1 = param_2;
    }
    return param_1;
  }
  return dVar1;
}



double uprv_fmin_76_godot(double param_1,double param_2)

{
  double dVar1;
  
  if (0x7ff0000000000000 < (ulong)ABS(param_1)) {
    return _LC3;
  }
  dVar1 = _LC3;
  if ((ulong)ABS(param_2) < 0x7ff0000000000001) {
    if ((param_1 != 0.0) || (param_2 != 0.0)) {
      if (param_1 <= param_2) {
        param_2 = param_1;
      }
      return param_2;
    }
    dVar1 = param_2;
    if (-1 < (long)param_2) {
      return param_1;
    }
  }
  return dVar1;
}



undefined8 uprv_add32_overflow_76_godot(int param_1,int param_2,int *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_1 + (long)param_2;
  *param_3 = (int)lVar1;
  return CONCAT71((int7)(int3)((ulong)lVar1 >> 8),(int)lVar1 != lVar1);
}



undefined8 uprv_mul32_overflow_76_godot(int param_1,int param_2,int *param_3)

{
  long lVar1;
  
  lVar1 = (long)param_1 * (long)param_2;
  *param_3 = (int)lVar1;
  return CONCAT71((int7)(int3)((ulong)lVar1 >> 8),(int)lVar1 != lVar1);
}



double uprv_trunc_76_godot(double param_1)

{
  double dVar1;
  
  if (0x7ff0000000000000 < (ulong)ABS(param_1)) {
    return _LC3;
  }
  dVar1 = _LC4;
  if (ABS(param_1) != INFINITY) {
    dVar1 = param_1;
    if ((long)param_1 < 0) {
      if ((double)((ulong)param_1 & _LC8) < _LC5) {
        return (double)((ulong)((double)(long)param_1 +
                               (double)(-(ulong)((double)(long)param_1 < param_1) & _LC7)) |
                       ~_LC8 & (ulong)param_1);
      }
    }
    else if ((double)((ulong)param_1 & _LC8) < _LC5) {
      return (double)((ulong)((double)(long)param_1 -
                             (double)(-(ulong)(param_1 < (double)(long)param_1) & _LC7)) |
                     ~_LC8 & (ulong)param_1);
    }
  }
  return dVar1;
}



undefined8 uprv_maxMantissa_76_godot(void)

{
  return _LC12;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

double uprv_log_76_godot(double __x)

{
  double dVar1;
  
  dVar1 = log(__x);
  return dVar1;
}



long uprv_maximumPtr_76_godot(ulong param_1)

{
  if (0xffffffff80000000 < param_1) {
    param_1 = 0xffffffff80000000;
  }
  return param_1 + 0x7fffffff;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void uprv_tzset_76_godot(void)

{
  tzset();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 uprv_timezone_76_godot(void)

{
  return ___timezone;
}



void uprv_tzname_clear_cache_76_godot(void)

{
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char * uprv_tzname_76_godot(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  char *pcVar7;
  int *piVar8;
  int iVar9;
  uint uVar10;
  long in_FS_OFFSET;
  tm local_b8;
  tm local_78;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar4 = getenv("TZ");
  if (pcVar4 == (char *)0x0) {
LAB_00100955:
    uVar10 = 2;
    localtime_r(&uprv_tzname_76_godot::juneSolstice,&local_b8);
    localtime_r(&uprv_tzname_76_godot::decemberSolstice,&local_78);
    pcVar7 = _strlen;
    pcVar4 = _tzname;
    iVar2 = ___timezone;
    if (local_78.tm_isdst < 1) {
      uVar10 = (uint)(0 < local_b8.tm_isdst);
    }
    piVar8 = &OFFSET_ZONE_MAPPINGS;
    iVar9 = 0;
    do {
      if (((iVar2 == *piVar8) && (uVar10 == piVar8[1])) &&
         ((iVar3 = strcmp(*(char **)(piVar8 + 2),pcVar4), iVar3 == 0 &&
          (iVar3 = strcmp(*(char **)(piVar8 + 4),pcVar7), iVar3 == 0)))) {
        pcVar4 = (&PTR_s_Pacific_Chatham_00101cf8)[(long)iVar9 * 4];
        if (pcVar4 != (char *)0x0) goto LAB_001008ec;
        break;
      }
      iVar9 = iVar9 + 1;
      piVar8 = piVar8 + 8;
    } while (iVar9 != 0x3b);
    pcVar4 = *(char **)(&tzname + (long)param_1 * 8);
  }
  else {
    cVar1 = *pcVar4;
    if (cVar1 != '\0') {
      iVar2 = 0;
      pcVar7 = pcVar4 + 1;
      cVar6 = cVar1;
LAB_00100872:
      if ((9 < (byte)(cVar6 - 0x30U)) && (cVar6 != ',')) goto code_r0x00100864;
      cVar6 = pcVar4[iVar2];
      if ((byte)(cVar6 - 0x30U) < 10) {
        lVar5 = (long)(iVar2 + 1);
        do {
          cVar6 = pcVar4[lVar5];
          iVar9 = (int)lVar5;
          lVar5 = lVar5 + 1;
        } while ((byte)(cVar6 - 0x30U) < 10 && iVar9 < iVar2 + 2);
      }
      if ((((cVar6 != '\0') && (iVar2 = strcmp(pcVar4,"PST8PDT"), iVar2 != 0)) &&
          (iVar2 = strcmp(pcVar4,"MST7MDT"), iVar2 != 0)) &&
         ((iVar2 = strcmp(pcVar4,"CST6CDT"), iVar2 != 0 &&
          (iVar2 = strcmp(pcVar4,"EST5EDT"), iVar2 != 0)))) goto LAB_00100955;
LAB_001008c4:
      if (cVar1 == ':') {
        pcVar4 = pcVar4 + 1;
      }
    }
    iVar2 = strncmp(pcVar4,"posix/",6);
    if ((iVar2 == 0) || (iVar2 = strncmp(pcVar4,"right/",6), iVar2 == 0)) {
      pcVar4 = pcVar4 + 6;
    }
  }
LAB_001008ec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pcVar4;
code_r0x00100864:
  cVar6 = *pcVar7;
  pcVar7 = pcVar7 + 1;
  iVar2 = iVar2 + 1;
  if (cVar6 == '\0') goto LAB_001008c4;
  goto LAB_00100872;
}



void u_setDataDirectory_76_godot(char *param_1)

{
  size_t sVar1;
  undefined *puVar2;
  long lVar3;
  
  if (param_1 == (char *)0x0) {
    puVar2 = &_LC0;
  }
  else {
    puVar2 = &_LC0;
    if (*param_1 != '\0') {
      sVar1 = strlen(param_1);
      lVar3 = (long)((int)sVar1 + 2);
      puVar2 = (undefined *)uprv_malloc_76_godot(lVar3);
      if (puVar2 == (undefined *)0x0) {
        return;
      }
      __strcpy_chk(puVar2,param_1,lVar3);
    }
  }
  if ((gDataDirectory != (char *)0x0) && (*gDataDirectory != '\0')) {
    uprv_free_76_godot();
  }
  gDataDirectory = puVar2;
  ucln_common_registerCleanup_76_godot(0x18,0x100000);
  return;
}



bool uprv_pathIsAbsolute_76_godot(char *param_1)

{
  if (param_1 != (char *)0x0) {
    return *param_1 == '/';
  }
  return false;
}



long u_getDataDirectory_76_godot(void)

{
  char cVar1;
  
  if (gDataDirInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gDataDirInitOnce);
    if (cVar1 != '\0') {
      if (gDataDirectory == 0) {
        u_setDataDirectory_76_godot(&_LC0);
      }
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gDataDirInitOnce);
    }
    return gDataDirectory;
  }
  return gDataDirectory;
}



undefined * u_getTimeZoneFilesDirectory_76_godot(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return &_LC0;
  }
  if ((gTimeZoneFilesInitOnce_76_godot == 2) ||
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gTimeZoneFilesInitOnce_76_godot),
     cVar1 == '\0')) {
    if (0 < DAT_0010129c) {
      *(int *)param_1 = DAT_0010129c;
      return &_LC0;
    }
  }
  else {
    TimeZoneDataDirInitFn(param_1);
    DAT_0010129c = *(int *)param_1;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gTimeZoneFilesInitOnce_76_godot);
  }
  if (0 < *(int *)param_1) {
    return &_LC0;
  }
  return (undefined *)*gTimeZoneFilesDirectory;
}



void u_setTimeZoneFilesDirectory_76_godot(char *param_1,UErrorCode *param_2)

{
  char *pcVar1;
  char cVar2;
  long in_FS_OFFSET;
  int local_38 [2];
  uint local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)param_2) goto LAB_00100c42;
  if (gTimeZoneFilesInitOnce_76_godot == 2) {
LAB_00100c71:
    if (0 < DAT_0010129c) {
      *(int *)param_2 = DAT_0010129c;
      goto LAB_00100c42;
    }
  }
  else {
    cVar2 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gTimeZoneFilesInitOnce_76_godot);
    if (cVar2 == '\0') goto LAB_00100c71;
    TimeZoneDataDirInitFn(param_2);
    DAT_0010129c = *(int *)param_2;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gTimeZoneFilesInitOnce_76_godot);
  }
  pcVar1 = gTimeZoneFilesDirectory;
  if (*(int *)param_2 < 1) {
    pcVar1[0x38] = '\0';
    pcVar1[0x39] = '\0';
    pcVar1[0x3a] = '\0';
    pcVar1[0x3b] = '\0';
    **(undefined1 **)pcVar1 = 0;
    icu_76_godot::StringPiece::StringPiece((StringPiece *)local_38,param_1);
    icu_76_godot::CharString::append(pcVar1,local_38[0],(UErrorCode *)(ulong)local_30);
  }
LAB_00100c42:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



char * uprv_getDefaultLocaleID_76_godot(void)

{
  long lVar1;
  int iVar2;
  size_t sVar3;
  char *__s;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = uprv_getPOSIXIDForDefaultLocale()::posixID;
  if (((uprv_getPOSIXIDForDefaultLocale()::posixID == (char *)0x0) &&
      ((pcVar5 = setlocale(5,(char *)0x0), pcVar5 == (char *)0x0 ||
       (((*pcVar5 == 'C' && (pcVar5[1] == '\0')) || (iVar2 = strcmp("POSIX",pcVar5), iVar2 == 0)))))
      ) && (((((pcVar5 = getenv("LC_ALL"), pcVar5 == (char *)0x0 &&
               (pcVar5 = getenv("LC_MESSAGES"), pcVar5 == (char *)0x0)) &&
              (pcVar5 = getenv("LANG"), pcVar5 == (char *)0x0)) ||
             ((*pcVar5 == 'C' && (pcVar5[1] == '\0')))) ||
            (iVar2 = strcmp("POSIX",pcVar5), iVar2 == 0)))) {
    pcVar5 = "en_US_POSIX";
  }
  uprv_getPOSIXIDForDefaultLocale()::posixID = pcVar5;
  pcVar4 = gCorrectedPOSIXLocale;
  pcVar5 = uprv_getPOSIXIDForDefaultLocale()::posixID;
  if (gCorrectedPOSIXLocale == (char *)0x0) {
    sVar3 = strlen(uprv_getPOSIXIDForDefaultLocale()::posixID);
    lVar1 = sVar3 + 0xb;
    __s = (char *)uprv_malloc_76_godot(lVar1);
    if (__s != (char *)0x0) {
      __strcpy_chk(__s,pcVar5,lVar1);
      pcVar4 = strchr(__s,0x2e);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      pcVar4 = strchr(__s,0x40);
      if (pcVar4 != (char *)0x0) {
        *pcVar4 = '\0';
      }
      if (((*__s == 'C') && (__s[1] == '\0')) || (iVar2 = strcmp("POSIX",__s), iVar2 == 0)) {
        __memcpy_chk(__s,"en_US_POSIX",0xc,lVar1);
      }
      pcVar5 = strrchr(pcVar5,0x40);
      if (pcVar5 != (char *)0x0) {
        pcVar5 = pcVar5 + 1;
        iVar2 = strcmp(pcVar5,"nynorsk");
        if (iVar2 == 0) {
          pcVar5 = "NY";
        }
        pcVar4 = strchr(__s,0x5f);
        if (pcVar4 == (char *)0x0) {
          __strcat_chk(__s,&_LC27,lVar1);
        }
        else {
          __strcat_chk(__s,&_LC28,lVar1);
        }
        pcVar4 = strchr(pcVar5,0x2e);
        if (pcVar4 == (char *)0x0) {
          __strcat_chk(__s,pcVar5,lVar1);
        }
        else {
          sVar3 = strlen(__s);
          __strncat_chk(__s,pcVar5,(long)pcVar4 - (long)pcVar5,lVar1);
          __s[(int)sVar3 + (int)((long)pcVar4 - (long)pcVar5)] = '\0';
        }
      }
      pcVar5 = gCorrectedPOSIXLocale;
      if (gCorrectedPOSIXLocale != (char *)0x0) {
        uprv_free_76_godot(__s);
        return pcVar5;
      }
      gCorrectedPOSIXLocaleHeapAllocated = 1;
      gCorrectedPOSIXLocale = __s;
      ucln_common_registerCleanup_76_godot(0x18,0x100000);
      pcVar4 = gCorrectedPOSIXLocale;
    }
  }
  return pcVar4;
}



void u_versionFromString_76_godot(long param_1,char *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  uint uVar6;
  long in_FS_OFFSET;
  char *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 0) {
    if (param_2 == (char *)0x0) {
      uVar6 = 0;
    }
    else {
      lVar5 = 0;
      while( true ) {
        uVar6 = (uint)lVar5;
        uVar1 = __isoc23_strtoul(param_2,&local_38,10);
        *(undefined1 *)(param_1 + lVar5) = uVar1;
        if (local_38 == param_2) break;
        if (lVar5 == 3) goto LAB_0010102b;
        lVar5 = lVar5 + 1;
        if (*local_38 != '.') {
          uVar6 = uVar6 + 1;
          break;
        }
        param_2 = local_38 + 1;
      }
    }
    uVar2 = 4 - uVar6 & 0xffff;
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        uVar4 = (ulong)uVar3;
        uVar3 = uVar3 + 1;
        *(undefined1 *)(param_1 + (ulong)(uVar6 & 0xffff) + uVar4) = 0;
      } while (uVar3 < uVar2);
    }
  }
LAB_0010102b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void u_versionFromUString_76_godot(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined1 auStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != 0) && (param_2 != 0)) {
    iVar1 = u_strlen_76_godot(param_2);
    iVar2 = 0x14;
    if (iVar1 < 0x15) {
      iVar2 = iVar1;
    }
    u_UCharsToChars_76_godot(param_2,auStack_48);
    auStack_48[iVar2] = 0;
    u_versionFromString_76_godot(param_1,auStack_48);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void u_versionToString_76_godot(byte *param_1,char *param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  char *pcVar4;
  char *pcVar5;
  ushort uVar6;
  
  if (param_2 == (char *)0x0) {
    return;
  }
  lVar1 = 0;
  if (param_1 == (byte *)0x0) {
    *param_2 = '\0';
    return;
  }
  do {
    if (param_1[lVar1 + 3] != 0) {
      uVar6 = (short)lVar1 + 4;
      if (uVar6 < 2) {
        uVar6 = 2;
      }
      goto LAB_0010112b;
    }
    lVar1 = lVar1 + -1;
  } while (lVar1 != -4);
  uVar6 = 2;
LAB_0010112b:
  bVar2 = *param_1;
  uVar3 = (ushort)bVar2;
  pcVar4 = param_2;
  if (99 < bVar2) {
    pcVar4 = param_2 + 1;
    *param_2 = (byte)((ushort)((ushort)bVar2 * 0x29) >> 0xc) + 0x30;
    uVar3 = (ushort)bVar2 + ((ushort)((ushort)bVar2 * 0x29) >> 0xc) * -100;
  }
  bVar2 = (byte)uVar3;
  pcVar5 = pcVar4;
  if (9 < bVar2) {
    pcVar5 = pcVar4 + 1;
    *pcVar4 = bVar2 / 10 + 0x30;
    bVar2 = bVar2 + (char)((uVar3 & 0xff) / 10) * -10;
  }
  lVar1 = 1;
  *pcVar5 = bVar2 + 0x30;
  do {
    pcVar5[1] = '.';
    bVar2 = param_1[lVar1];
    uVar3 = (ushort)bVar2;
    pcVar4 = pcVar5 + 2;
    if (99 < bVar2) {
      pcVar4 = pcVar5 + 3;
      pcVar5[2] = (byte)((ushort)((ushort)bVar2 * 0x29) >> 0xc) + 0x30;
      uVar3 = (ushort)bVar2 + ((ushort)((ushort)bVar2 * 0x29) >> 0xc) * -100;
    }
    bVar2 = (byte)uVar3;
    pcVar5 = pcVar4;
    if (9 < bVar2) {
      pcVar5 = pcVar4 + 1;
      *pcVar4 = bVar2 / 10 + 0x30;
      bVar2 = bVar2 + (char)((uVar3 & 0xff) / 10) * -10;
    }
    lVar1 = lVar1 + 1;
    *pcVar5 = bVar2 + 0x30;
  } while ((ushort)lVar1 < uVar6);
  pcVar5[1] = '\0';
  return;
}



void u_getVersion_76_godot(undefined8 param_1)

{
  u_versionFromString_76_godot(param_1,&_LC29);
  return;
}



undefined8 uprv_dl_open_76_godot(undefined8 param_1,int *param_2)

{
  if (*param_2 < 1) {
    *param_2 = 0x10;
  }
  return 0;
}



void uprv_dl_close_76_godot(undefined8 param_1,int *param_2)

{
  if (*param_2 < 1) {
    *param_2 = 0x10;
  }
  return;
}



undefined8 uprv_dlsym_func_76_godot(undefined8 param_1,undefined8 param_2,int *param_3)

{
  if (*param_3 < 1) {
    *param_3 = 0x10;
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,int param_1,int param_3)

{
  long lVar1;
  
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  if ((0x28 < param_1) && (param_3 < 1)) {
    lVar1 = uprv_malloc_76_godot((long)param_1);
    if (lVar1 != 0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar1;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
    }
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  __src = *(MaybeStackArray **)param_1;
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  *(MaybeStackArray **)this = __src;
  *(int *)(this + 8) = iVar1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return;
  }
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return;
}



/* icu_76_godot::MaybeStackArray<char,
   40>::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::MaybeStackArray<char, 40>&&) */

MaybeStackArray<char,40> * __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator=
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1)

{
  int iVar1;
  MaybeStackArray *__src;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uprv_free_76_godot(*(undefined8 *)this);
  }
  *(undefined4 *)(this + 8) = *(undefined4 *)(param_1 + 8);
  *(MaybeStackArray *)(this + 0xc) = param_1[0xc];
  __src = *(MaybeStackArray **)param_1;
  if (__src != param_1 + 0xd) {
    *(MaybeStackArray **)this = __src;
    *(MaybeStackArray **)param_1 = param_1 + 0xd;
    *(undefined4 *)(param_1 + 8) = 0x28;
    param_1[0xc] = (MaybeStackArray)0x0;
    return this;
  }
  iVar1 = *(int *)(param_1 + 8);
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  memcpy(this + 0xd,__src,(long)iVar1);
  return this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getCapacity() const */

undefined4 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getCapacity(MaybeStackArray<char,40> *this)

{
  return *(undefined4 *)(this + 8);
}



/* icu_76_godot::MaybeStackArray<char, 40>::getAlias() const */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::getAlias(MaybeStackArray<char,40> *this)

{
  return *(undefined8 *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::getArrayLimit() const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::getArrayLimit(MaybeStackArray<char,40> *this)

{
  return (long)*(int *)(this + 8) + *(long *)this;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) const */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::operator[](long) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::operator[](MaybeStackArray<char,40> *this,long param_1)

{
  return *(long *)this + param_1;
}



/* icu_76_godot::MaybeStackArray<char, 40>::aliasInstead(char*, int) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::aliasInstead
          (MaybeStackArray<char,40> *this,char *param_1,int param_2)

{
  if ((param_1 != (char *)0x0) && (0 < param_2)) {
    if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
      *(char **)this = param_1;
      *(int *)(this + 8) = param_2;
      this[0xc] = (MaybeStackArray<char,40>)0x0;
      return;
    }
    uprv_free_76_godot(*(undefined8 *)this);
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    *(char **)this = param_1;
    *(int *)(this + 8) = param_2;
    return;
  }
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resize(int, int) */

long __thiscall
icu_76_godot::MaybeStackArray<char,40>::resize
          (MaybeStackArray<char,40> *this,int param_1,int param_2)

{
  MaybeStackArray<char,40> MVar1;
  long lVar2;
  
  if (0 < param_1) {
    lVar2 = uprv_malloc_76_godot((long)param_1);
    if (lVar2 != 0) {
      if (param_2 < 1) {
        MVar1 = this[0xc];
      }
      else {
        if (*(int *)(this + 8) < param_2) {
          param_2 = *(int *)(this + 8);
        }
        if (param_1 < param_2) {
          param_2 = param_1;
        }
        __memcpy_chk(lVar2,*(undefined8 *)this,(long)param_2,(long)param_1);
        MVar1 = this[0xc];
      }
      if (MVar1 != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(long *)this = lVar2;
      *(int *)(this + 8) = param_1;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      return lVar2;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::orphanOrClone(int, int&) */

undefined8 __thiscall
icu_76_godot::MaybeStackArray<char,40>::orphanOrClone
          (MaybeStackArray<char,40> *this,int param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
    uVar2 = *(undefined8 *)this;
LAB_00101b7f:
    *param_2 = param_1;
    *(MaybeStackArray<char,40> **)this = this + 0xd;
    *(undefined4 *)(this + 8) = 0x28;
    this[0xc] = (MaybeStackArray<char,40>)0x0;
    return uVar2;
  }
  if (0 < param_1) {
    if (*(int *)(this + 8) < param_1) {
      param_1 = *(int *)(this + 8);
    }
    lVar3 = (long)param_1;
    lVar1 = uprv_malloc_76_godot(lVar3);
    if (lVar1 != 0) {
      uVar2 = __memcpy_chk(lVar1,*(undefined8 *)this,lVar3,lVar3);
      goto LAB_00101b7f;
    }
  }
  return 0;
}



/* icu_76_godot::MaybeStackArray<char, 40>::copyFrom(icu_76_godot::MaybeStackArray<char, 40> const&,
   UErrorCode&) */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::copyFrom
          (MaybeStackArray<char,40> *this,MaybeStackArray *param_1,UErrorCode *param_2)

{
  int iVar1;
  void *__src;
  void *__dest;
  
  if (0 < *(int *)param_2) {
    return;
  }
  iVar1 = *(int *)(param_1 + 8);
  if (0 < iVar1) {
    __dest = (void *)uprv_malloc_76_godot((long)iVar1);
    if (__dest != (void *)0x0) {
      if (this[0xc] != (MaybeStackArray<char,40>)0x0) {
        uprv_free_76_godot(*(undefined8 *)this);
      }
      *(void **)this = __dest;
      this[0xc] = (MaybeStackArray<char,40>)0x1;
      __src = *(void **)param_1;
      *(int *)(this + 8) = iVar1;
      memcpy(__dest,__src,(long)iVar1);
      return;
    }
  }
  *(undefined4 *)param_2 = 7;
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::releaseArray() */

void __thiscall icu_76_godot::MaybeStackArray<char,40>::releaseArray(MaybeStackArray<char,40> *this)

{
  if (this[0xc] == (MaybeStackArray<char,40>)0x0) {
    return;
  }
  uprv_free_76_godot(*(undefined8 *)this);
  return;
}



/* icu_76_godot::MaybeStackArray<char, 40>::resetToStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::resetToStackArray(MaybeStackArray<char,40> *this)

{
  *(undefined4 *)(this + 8) = 0x28;
  *(MaybeStackArray<char,40> **)this = this + 0xd;
  this[0xc] = (MaybeStackArray<char,40>)0x0;
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(icu_76_godot::MaybeStackArray<char,
   40>&&) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(MaybeStackArray *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::~MaybeStackArray() */

void __thiscall
icu_76_godot::MaybeStackArray<char,40>::~MaybeStackArray(MaybeStackArray<char,40> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray(int, UErrorCode) */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::MaybeStackArray<char, 40>::MaybeStackArray() */

void icu_76_godot::MaybeStackArray<char,40>::MaybeStackArray(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


