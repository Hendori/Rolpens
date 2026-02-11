
/* (anonymous namespace)::AvailableLocalesStringEnumeration::reset(UErrorCode&) */

void __thiscall
(anonymous_namespace)::AvailableLocalesStringEnumeration::reset
          (AvailableLocalesStringEnumeration *this,UErrorCode *param_1)

{
  if (*(int *)param_1 < 1) {
    *(undefined4 *)(this + 0x78) = 0;
  }
  return;
}



/* icu_76_godot::(anonymous namespace)::locale_available_cleanup() */

undefined8 icu_76_godot::(anonymous_namespace)::locale_available_cleanup(void)

{
  undefined8 *puVar1;
  long lVar2;
  void *in_RSI;
  
  if (availableLocaleList != 0) {
    lVar2 = *(long *)(availableLocaleList + -8) * 0xe0 + availableLocaleList;
    if (availableLocaleList != lVar2) {
      do {
        puVar1 = (undefined8 *)(lVar2 + -0xe0);
        lVar2 = lVar2 + -0xe0;
        (**(code **)*puVar1)(lVar2);
      } while (availableLocaleList != lVar2);
    }
    icu_76_godot::UMemory::operator_delete__((UMemory *)(lVar2 + -8),in_RSI);
    availableLocaleList = 0;
  }
  availableLocaleListCount = 0;
  LOCK();
  gInitOnceLocale = 0;
  UNLOCK();
  return 1;
}



/* (anonymous namespace)::uloc_cleanup() */

undefined8 (anonymous_namespace)::uloc_cleanup(void)

{
  uprv_free_76_godot(gAvailableLocaleNames);
  gAvailableLocaleNames = 0;
  gAvailableLocaleCounts = 0;
  uprv_free_76_godot(DAT_001008d8);
  DAT_001008d8 = 0;
  DAT_001008cc = 0;
  LOCK();
  ginstalledLocalesInitOnce = 0;
  UNLOCK();
  return 1;
}



/* (anonymous namespace)::AvailableLocalesSink::put(char const*, icu_76_godot::ResourceValue&,
   signed char, UErrorCode&) */

void __thiscall
(anonymous_namespace)::AvailableLocalesSink::put
          (undefined8 param_1_00,char *param_1,long *param_2,undefined8 param_4,int *param_5)

{
  uint uVar1;
  char *__s1;
  char cVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long in_FS_OFFSET;
  char *local_a0;
  undefined1 local_98 [48];
  undefined1 local_68 [32];
  int local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = param_1;
  if (*param_5 < 1) {
    (**(code **)(*param_2 + 0x58))(local_98,param_2,param_5);
    if (*param_5 < 1) {
      uVar1 = 0;
      while (cVar2 = icu_76_godot::ResourceTable::getKeyAndValue
                               ((int)local_98,(char **)(ulong)uVar1,(ResourceValue *)&local_a0),
            __s1 = local_a0, cVar2 != '\0') {
        iVar3 = strcmp(local_a0,"InstalledLocales");
        if (iVar3 == 0) {
          lVar5 = 0;
LAB_001001d3:
          (**(code **)(*param_2 + 0x58))(local_68,param_2,param_5);
          if (0 < *param_5) break;
          (&gAvailableLocaleCounts)[lVar5] = local_48;
          lVar4 = uprv_malloc_76_godot((long)local_48 << 3);
          (&gAvailableLocaleNames)[lVar5] = lVar4;
          if (lVar4 == 0) {
            *param_5 = 7;
            break;
          }
          uVar6 = 0;
          while (cVar2 = icu_76_godot::ResourceTable::getKeyAndValue
                                   ((int)local_68,(char **)(uVar6 & 0xffffffff),
                                    (ResourceValue *)&local_a0), cVar2 != '\0') {
            *(char **)((&gAvailableLocaleNames)[lVar5] + uVar6 * 8) = local_a0;
            uVar6 = uVar6 + 1;
          }
        }
        else {
          iVar3 = strcmp(__s1,"AliasLocales");
          if (iVar3 == 0) {
            lVar5 = 1;
            goto LAB_001001d3;
          }
        }
        uVar1 = uVar1 + 1;
      }
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* (anonymous namespace)::AvailableLocalesSink::~AvailableLocalesSink() */

void __thiscall
(anonymous_namespace)::AvailableLocalesSink::~AvailableLocalesSink(AvailableLocalesSink *this)

{
  *(undefined ***)this = &PTR__AvailableLocalesSink_00100968;
  icu_76_godot::ResourceSink::~ResourceSink((ResourceSink *)this);
  return;
}



/* (anonymous namespace)::AvailableLocalesSink::~AvailableLocalesSink() */

void __thiscall
(anonymous_namespace)::AvailableLocalesSink::~AvailableLocalesSink(AvailableLocalesSink *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__AvailableLocalesSink_00100968;
  icu_76_godot::ResourceSink::~ResourceSink((ResourceSink *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* (anonymous namespace)::loadInstalledLocales(UErrorCode&) */

void (anonymous_namespace)::loadInstalledLocales(UErrorCode *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined **local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ucln_common_registerCleanup_76_godot(0xc,uloc_cleanup);
  lVar1 = ures_openDirect_76_godot(0,"res_index",param_1);
  local_38 = &PTR__AvailableLocalesSink_00100968;
  ures_getAllItemsWithFallback_76_godot(lVar1,&_LC3,&local_38,param_1);
  local_38 = &PTR__AvailableLocalesSink_00100968;
  icu_76_godot::ResourceSink::~ResourceSink((ResourceSink *)&local_38);
  if (lVar1 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    ures_close_76_godot(lVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::AvailableLocalesStringEnumeration::next(int*, UErrorCode&) */

char * __thiscall
(anonymous_namespace)::AvailableLocalesStringEnumeration::next
          (AvailableLocalesStringEnumeration *this,int *param_1,UErrorCode *param_2)

{
  char *__s;
  long lVar1;
  size_t sVar2;
  int iVar3;
  
  if (*(int *)param_2 < 1) {
    iVar3 = *(int *)(this + 0x78);
    lVar1 = (long)*(int *)(this + 0x74);
    *(int *)(this + 0x78) = iVar3 + 1;
    if (*(int *)(this + 0x74) == 2) {
      if (iVar3 < gAvailableLocaleCounts) {
        lVar1 = 0;
        goto LAB_001003d1;
      }
      iVar3 = iVar3 - gAvailableLocaleCounts;
      lVar1 = 1;
    }
    if (iVar3 < (&gAvailableLocaleCounts)[lVar1]) {
LAB_001003d1:
      __s = *(char **)((&gAvailableLocaleNames)[lVar1] + (long)iVar3 * 8);
      if (param_1 != (int *)0x0) {
        sVar2 = strlen(__s);
        *param_1 = (int)sVar2;
      }
      return __s;
    }
    if (param_1 != (int *)0x0) {
      *param_1 = 0;
    }
  }
  return (char *)0x0;
}



/* (anonymous namespace)::AvailableLocalesStringEnumeration::~AvailableLocalesStringEnumeration() */

void __thiscall
(anonymous_namespace)::AvailableLocalesStringEnumeration::~AvailableLocalesStringEnumeration
          (AvailableLocalesStringEnumeration *this)

{
  *(undefined ***)this = &PTR__AvailableLocalesStringEnumeration_00100998;
  icu_76_godot::StringEnumeration::~StringEnumeration((StringEnumeration *)this);
  return;
}



/* (anonymous namespace)::AvailableLocalesStringEnumeration::~AvailableLocalesStringEnumeration() */

void __thiscall
(anonymous_namespace)::AvailableLocalesStringEnumeration::~AvailableLocalesStringEnumeration
          (AvailableLocalesStringEnumeration *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__AvailableLocalesStringEnumeration_00100998;
  icu_76_godot::StringEnumeration::~StringEnumeration((StringEnumeration *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* (anonymous namespace)::AvailableLocalesStringEnumeration::count(UErrorCode&) const */

int __thiscall
(anonymous_namespace)::AvailableLocalesStringEnumeration::count
          (AvailableLocalesStringEnumeration *this,UErrorCode *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)param_1 < 1) {
    if (*(int *)(this + 0x74) == 2) {
      return DAT_001008cc + gAvailableLocaleCounts;
    }
    iVar1 = (&gAvailableLocaleCounts)[*(int *)(this + 0x74)];
  }
  return iVar1;
}



undefined8 uloc_getAvailable_76_godot(int param_1)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  code *local_38;
  int local_30 [4];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  local_38 = icu_76_godot::umtx_initImplPostInit;
  if ((anonymous_namespace)::ginstalledLocalesInitOnce == 2) {
LAB_001004e9:
    if (DAT_001008c4 < 1) goto LAB_0010052f;
    local_30[0] = DAT_001008c4;
  }
  else {
    cVar1 = icu_76_godot::umtx_initImplPreInit
                      ((UInitOnce *)&(anonymous_namespace)::ginstalledLocalesInitOnce);
    if (cVar1 == '\0') goto LAB_001004e9;
    (anonymous_namespace)::loadInstalledLocales((UErrorCode *)local_30);
    DAT_001008c4 = local_30[0];
    icu_76_godot::umtx_initImplPostInit
              ((UInitOnce *)&(anonymous_namespace)::ginstalledLocalesInitOnce);
LAB_0010052f:
    if ((local_30[0] < 1) && (param_1 <= (anonymous_namespace)::gAvailableLocaleCounts)) {
      uVar2 = *(undefined8 *)((anonymous_namespace)::gAvailableLocaleNames + (long)param_1 * 8);
      goto LAB_0010054a;
    }
  }
  uVar2 = 0;
LAB_0010054a:
  icu_76_godot::ErrorCode::~ErrorCode((ErrorCode *)&local_38);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 uloc_countAvailable_76_godot(void)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  code *local_28;
  int local_20 [4];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20[0] = 0;
  local_28 = icu_76_godot::umtx_initImplPostInit;
  if ((anonymous_namespace)::ginstalledLocalesInitOnce == 2) {
LAB_001005b5:
    if (DAT_001008c4 < 1) goto LAB_001005ff;
    local_20[0] = DAT_001008c4;
  }
  else {
    cVar1 = icu_76_godot::umtx_initImplPreInit
                      ((UInitOnce *)&(anonymous_namespace)::ginstalledLocalesInitOnce);
    if (cVar1 == '\0') goto LAB_001005b5;
    (anonymous_namespace)::loadInstalledLocales((UErrorCode *)local_20);
    DAT_001008c4 = local_20[0];
    icu_76_godot::umtx_initImplPostInit
              ((UInitOnce *)&(anonymous_namespace)::ginstalledLocalesInitOnce);
LAB_001005ff:
    uVar2 = (anonymous_namespace)::gAvailableLocaleCounts;
    if (local_20[0] < 1) goto LAB_0010060d;
  }
  uVar2 = 0;
LAB_0010060d:
  icu_76_godot::ErrorCode::~ErrorCode((ErrorCode *)&local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::locale_available_init() */

void icu_76_godot::locale_available_init(void)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  Locale *pLVar5;
  ulong in_RSI;
  Locale *this;
  long lVar6;
  
  availableLocaleListCount = uloc_countAvailable_76_godot();
  if (availableLocaleListCount == 0) {
    if (availableLocaleList != (Locale *)0x0) goto LAB_00100724;
LAB_0010071a:
    availableLocaleListCount = 0;
  }
  else {
    uVar4 = (ulong)availableLocaleListCount;
    if (uVar4 < 0x92492492492493) {
      puVar1 = (ulong *)icu_76_godot::UMemory::operator_new__((UMemory *)(uVar4 * 0xe0 + 8),in_RSI);
      if (puVar1 == (ulong *)0x0) {
LAB_00100751:
        availableLocaleList = (Locale *)0x0;
        goto LAB_0010071a;
      }
      pLVar5 = (Locale *)(puVar1 + 1);
      *puVar1 = uVar4;
      this = pLVar5;
      do {
        uVar4 = uVar4 - 1;
        icu_76_godot::Locale::Locale(this);
        this = this + 0xe0;
      } while (uVar4 != 0);
    }
    else {
      puVar1 = (ulong *)icu_76_godot::UMemory::operator_new__((UMemory *)0xffffffffffffffff,in_RSI);
      if (puVar1 == (ulong *)0x0) goto LAB_00100751;
      *puVar1 = uVar4;
      pLVar5 = (Locale *)(puVar1 + 1);
    }
    iVar2 = availableLocaleListCount + -1;
    availableLocaleList = pLVar5;
    if (-1 < iVar2) {
      lVar6 = (long)iVar2 * 0xe0;
      do {
        pLVar5 = availableLocaleList + lVar6;
        iVar3 = iVar2 + -1;
        lVar6 = lVar6 + -0xe0;
        uloc_getAvailable_76_godot(iVar2);
        icu_76_godot::Locale::setFromPOSIXID((char *)pLVar5);
        iVar2 = iVar3;
      } while (iVar3 != -1);
    }
  }
LAB_00100724:
  ucln_common_registerCleanup_76_godot(9,(anonymous_namespace)::locale_available_cleanup);
  return;
}



/* icu_76_godot::Locale::getAvailableLocales(int&) */

undefined8 icu_76_godot::Locale::getAvailableLocales(int *param_1)

{
  char cVar1;
  
  if (gInitOnceLocale != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gInitOnceLocale);
    if (cVar1 != '\0') {
      locale_available_init();
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gInitOnceLocale);
    }
  }
  *param_1 = availableLocaleListCount;
  return availableLocaleList;
}



undefined8 uloc_openAvailableByType_76_godot(uint param_1,UErrorCode *param_2)

{
  int iVar1;
  char cVar2;
  StringEnumeration *this;
  undefined8 uVar3;
  UErrorCode *pUVar4;
  
  if (0 < *(int *)param_2) {
    return 0;
  }
  if (param_1 < 3) {
    pUVar4 = param_2;
    if (((anonymous_namespace)::ginstalledLocalesInitOnce == 2) ||
       (cVar2 = icu_76_godot::umtx_initImplPreInit
                          ((UInitOnce *)&(anonymous_namespace)::ginstalledLocalesInitOnce),
       cVar2 == '\0')) {
      if (0 < DAT_001008c4) {
        *(int *)param_2 = DAT_001008c4;
        return 0;
      }
    }
    else {
      (anonymous_namespace)::loadInstalledLocales(param_2);
      DAT_001008c4 = *(int *)param_2;
      icu_76_godot::umtx_initImplPostInit
                ((UInitOnce *)&(anonymous_namespace)::ginstalledLocalesInitOnce);
    }
    if (*(int *)param_2 < 1) {
      this = (StringEnumeration *)icu_76_godot::UMemory::operator_new((UMemory *)0x80,(ulong)pUVar4)
      ;
      if (this != (StringEnumeration *)0x0) {
        icu_76_godot::StringEnumeration::StringEnumeration(this);
        *(uint *)(this + 0x74) = param_1;
        *(undefined ***)this = &PTR__AvailableLocalesStringEnumeration_00100998;
        iVar1 = *(int *)param_2;
        *(undefined4 *)(this + 0x78) = 0;
        if (iVar1 < 1) {
          uVar3 = uenum_openFromStringEnumeration_76_godot(this,param_2);
          return uVar3;
        }
        icu_76_godot::StringEnumeration::~StringEnumeration(this);
        icu_76_godot::UMemory::operator_delete((UMemory *)this,pUVar4);
        return 0;
      }
      if (*(int *)param_2 < 1) {
        *(undefined4 *)param_2 = 7;
      }
    }
    return 0;
  }
  *(undefined4 *)param_2 = 1;
  return 0;
}


