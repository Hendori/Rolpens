
/* icu_76_godot::ucache_hashKeys(UElement) */

void icu_76_godot::ucache_hashKeys(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100007. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))();
  return;
}



/* icu_76_godot::ucache_compareKeys(UElement, UElement) */

void icu_76_godot::ucache_compareKeys(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00100017. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x38))();
  return;
}



/* icu_76_godot::ucache_deleteKey(void*) */

void icu_76_godot::ucache_deleteKey(void *param_1)

{
  if (param_1 != (void *)0x0) {
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x0010002c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



/* icu_76_godot::UnifiedCache::_putNew(icu_76_godot::CacheKeyBase const&, icu_76_godot::SharedObject
   const*, UErrorCode, UErrorCode&) const [clone .part.0] */

void __thiscall
icu_76_godot::UnifiedCache::_putNew
          (UnifiedCache *this,long *param_1,long param_2,undefined4 param_4,int *param_5)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
  if (lVar4 == 0) {
    *param_5 = 7;
    return;
  }
  iVar2 = *(int *)(param_2 + 8);
  *(undefined4 *)(lVar4 + 8) = param_4;
  uVar3 = _LC0;
  if (iVar2 == 0) {
    *(undefined1 *)(lVar4 + 0xc) = 1;
    uVar1 = *(undefined8 *)(this + 0x14);
    *(UnifiedCache **)(param_2 + 0x10) = this;
    *(ulong *)(this + 0x14) =
         CONCAT44((int)((ulong)uVar1 >> 0x20) + (int)((ulong)uVar3 >> 0x20),(int)uVar1 + (int)uVar3)
    ;
  }
  uhash_put_76_godot(*(undefined8 *)(this + 8),lVar4,param_2,param_5);
  if (0 < *param_5) {
    return;
  }
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  return;
}



/* icu_76_godot::CacheKeyBase::~CacheKeyBase() */

void __thiscall icu_76_godot::CacheKeyBase::~CacheKeyBase(CacheKeyBase *this)

{
  *(undefined **)this = &DAT_001010c8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::CacheKeyBase::~CacheKeyBase() */

void __thiscall icu_76_godot::CacheKeyBase::~CacheKeyBase(CacheKeyBase *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001010c8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::UnifiedCache::UnifiedCache(UErrorCode&) */

void __thiscall
icu_76_godot::UnifiedCache::UnifiedCache(UnifiedCache *this,UErrorCode_conflict *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar2 = _UNK_00101148;
  uVar4 = __LC1;
  iVar1 = *(int *)param_1;
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__UnifiedCache_00101118;
  *(undefined4 *)(this + 0x20) = 100;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x10) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar2;
  if (0 < iVar1) {
    return;
  }
  puVar3 = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x18,(ulong)param_1);
  if (puVar3 == (undefined8 *)0x0) {
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined4 *)param_1 = 7;
  }
  else {
    *(undefined4 *)((long)puVar3 + 0xc) = 0;
    *puVar3 = uhash_setKeyDeleter_76_godot;
    puVar3[2] = 0;
    *(undefined8 **)(this + 0x30) = puVar3;
    *(undefined4 *)(puVar3 + 1) = 1;
    LOCK();
    *(undefined4 *)((long)puVar3 + 0xc) = 1;
    UNLOCK();
    *(UnifiedCache **)(*(long *)(this + 0x30) + 0x10) = this;
    uVar4 = uhash_open_76_godot(0x100000,ucache_compareKeys,0,param_1);
    iVar1 = *(int *)param_1;
    *(undefined8 *)(this + 8) = uVar4;
    if (iVar1 < 1) {
      uhash_setKeyDeleter_76_godot(uVar4,ucache_deleteKey);
      return;
    }
  }
  return;
}



/* icu_76_godot::UnifiedCache::setEvictionPolicy(int, int, UErrorCode&) */

void __thiscall
icu_76_godot::UnifiedCache::setEvictionPolicy
          (UnifiedCache *this,int param_1,int param_2,UErrorCode_conflict *param_3)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = gCacheMutex;
  if (0 < *(int *)param_3) {
    return;
  }
  if ((param_1 | param_2) < 0) {
    *(undefined4 *)param_3 = 1;
    return;
  }
  iVar1 = pthread_mutex_lock(gCacheMutex);
  if (iVar1 == 0) {
    *(int *)(this + 0x1c) = param_1;
    *(int *)(this + 0x20) = param_2;
    pthread_mutex_unlock(__mutex);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* icu_76_godot::UnifiedCache::unusedCount() const */

int __thiscall icu_76_godot::UnifiedCache::unusedCount(UnifiedCache *this)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  int iVar2;
  
  __mutex = gCacheMutex;
  iVar1 = pthread_mutex_lock(gCacheMutex);
  if (iVar1 == 0) {
    iVar2 = uhash_count_76_godot(*(undefined8 *)(this + 8));
    iVar1 = *(int *)(this + 0x18);
    pthread_mutex_unlock(__mutex);
    return iVar2 - iVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* icu_76_godot::UnifiedCache::autoEvictedCount() const */

undefined8 __thiscall icu_76_godot::UnifiedCache::autoEvictedCount(UnifiedCache *this)

{
  undefined8 uVar1;
  pthread_mutex_t *__mutex;
  int iVar2;
  
  __mutex = gCacheMutex;
  iVar2 = pthread_mutex_lock(gCacheMutex);
  if (iVar2 == 0) {
    uVar1 = *(undefined8 *)(this + 0x28);
    pthread_mutex_unlock(__mutex);
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* icu_76_godot::UnifiedCache::keyCount() const */

undefined4 __thiscall icu_76_godot::UnifiedCache::keyCount(UnifiedCache *this)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  undefined4 uVar2;
  
  __mutex = gCacheMutex;
  iVar1 = pthread_mutex_lock(gCacheMutex);
  if (iVar1 == 0) {
    uVar2 = uhash_count_76_godot(*(undefined8 *)(this + 8));
    pthread_mutex_unlock(__mutex);
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* icu_76_godot::UnifiedCache::_nextElement() const */

void __thiscall icu_76_godot::UnifiedCache::_nextElement(UnifiedCache *this)

{
  long lVar1;
  
  lVar1 = uhash_nextElement_76_godot(*(undefined8 *)(this + 8),this + 0x10);
  if (lVar1 != 0) {
    return;
  }
  *(undefined4 *)(this + 0x10) = 0xffffffff;
  uhash_nextElement_76_godot(*(undefined8 *)(this + 8),this + 0x10);
  return;
}



/* icu_76_godot::UnifiedCache::_flush(signed char) const */

undefined1 __thiscall icu_76_godot::UnifiedCache::_flush(UnifiedCache *this,char param_2)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  undefined1 local_41;
  
  iVar2 = uhash_count_76_godot(*(undefined8 *)(this + 8));
  if (iVar2 < 1) {
    local_41 = 0;
  }
  else {
    local_41 = 0;
    iVar5 = 0;
    do {
      while( true ) {
        lVar4 = uhash_nextElement_76_godot(*(undefined8 *)(this + 8),this + 0x10);
        if (lVar4 == 0) {
          *(undefined4 *)(this + 0x10) = 0xffffffff;
          lVar4 = uhash_nextElement_76_godot(*(undefined8 *)(this + 8),this + 0x10);
          if (lVar4 == 0) {
            return local_41;
          }
        }
        plVar6 = *(long **)(lVar4 + 8);
        if (param_2 == '\0') break;
LAB_00100446:
        uhash_removeElement_76_godot(*(undefined8 *)(this + 8));
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
          iVar3 = icu_76_godot::SharedObject::getRefCount();
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
          else {
            plVar6[2] = 0;
          }
        }
        iVar5 = iVar5 + 1;
        local_41 = 1;
        if (iVar2 == iVar5) {
          return 1;
        }
      }
      if ((*(int *)(*(long *)(lVar4 + 0x10) + 8) != 0) || (*(long **)(this + 0x30) != plVar6)) {
        if (*(char *)(*(long *)(lVar4 + 0x10) + 0xc) != '\0') {
          if (((int)plVar6[1] != 1) ||
             (iVar3 = icu_76_godot::SharedObject::getRefCount(), iVar3 != 0)) goto LAB_00100422;
          plVar6 = *(long **)(lVar4 + 8);
        }
        goto LAB_00100446;
      }
LAB_00100422:
      iVar5 = iVar5 + 1;
    } while (iVar2 != iVar5);
  }
  return local_41;
}



/* icu_76_godot::UnifiedCache::flush() const */

void __thiscall icu_76_godot::UnifiedCache::flush(UnifiedCache *this)

{
  pthread_mutex_t *__mutex;
  char cVar1;
  int iVar2;
  
  __mutex = gCacheMutex;
  iVar2 = pthread_mutex_lock(gCacheMutex);
  if (iVar2 == 0) {
    do {
      cVar1 = _flush(this,0);
    } while (cVar1 != '\0');
    pthread_mutex_unlock(__mutex);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar2);
}



/* icu_76_godot::UnifiedCache::~UnifiedCache() */

void __thiscall icu_76_godot::UnifiedCache::~UnifiedCache(UnifiedCache *this)

{
  pthread_mutex_t *ppVar1;
  char cVar2;
  int iVar3;
  
  *(undefined ***)this = &PTR__UnifiedCache_00101118;
  ppVar1 = gCacheMutex;
  iVar3 = pthread_mutex_lock(gCacheMutex);
  if (iVar3 == 0) {
    do {
      cVar2 = _flush(this,0);
    } while (cVar2 != '\0');
    pthread_mutex_unlock(ppVar1);
    ppVar1 = gCacheMutex;
    iVar3 = pthread_mutex_lock(gCacheMutex);
    if (iVar3 == 0) {
      _flush(this,1);
      pthread_mutex_unlock(ppVar1);
      uhash_close_76_godot(*(undefined8 *)(this + 8));
      *(undefined8 *)(this + 8) = 0;
      if (*(long **)(this + 0x30) != (long *)0x0) {
        (**(code **)(**(long **)(this + 0x30) + 8))();
      }
      *(undefined8 *)(this + 0x30) = 0;
      icu_76_godot::UnifiedCacheBase::~UnifiedCacheBase((UnifiedCacheBase *)this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar3);
}



/* icu_76_godot::UnifiedCache::~UnifiedCache() */

void __thiscall icu_76_godot::UnifiedCache::~UnifiedCache(UnifiedCache *this)

{
  void *in_RSI;
  
  ~UnifiedCache(this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



undefined8 unifiedcache_cleanup(undefined8 param_1,void *param_2)

{
  UnifiedCache *this;
  
  this = gCache;
  LOCK();
  gCacheInitOnce = 0;
  UNLOCK();
  if (gCache != (UnifiedCache *)0x0) {
    if (*(code **)(*(long *)gCache + 8) == icu_76_godot::UnifiedCache::~UnifiedCache) {
      icu_76_godot::UnifiedCache::~UnifiedCache(gCache);
      icu_76_godot::UMemory::operator_delete((UMemory *)this,param_2);
    }
    else {
      (**(code **)(*(long *)gCache + 8))();
    }
  }
  gCache = (UnifiedCache *)0x0;
  gCacheMutex = 0;
  std::condition_variable::~condition_variable(gInProgressValueAddedCond);
  gInProgressValueAddedCond = (condition_variable *)0x0;
  return 1;
}



/* icu_76_godot::UnifiedCache::getInstance(UErrorCode&) */

UnifiedCache * icu_76_godot::UnifiedCache::getInstance(UErrorCode_conflict *param_1)

{
  char cVar1;
  int iVar2;
  UnifiedCache *this;
  code *pcVar3;
  UErrorCode_conflict *pUVar4;
  
  if (0 < *(int *)param_1) {
    return (UnifiedCache *)0x0;
  }
  if ((gCacheInitOnce == 2) ||
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gCacheInitOnce), cVar1 == '\0')) {
    if (0 < DAT_00101024) {
      *(int *)param_1 = DAT_00101024;
      return (UnifiedCache *)0x0;
    }
    goto LAB_0010077d;
  }
  pcVar3 = unifiedcache_cleanup;
  ucln_common_registerCleanup_76_godot(0x1a);
  gCacheMutex = cacheInit(UErrorCode&)::{lambda()#1}::operator()()::storage;
  cacheInit(UErrorCode&)::{lambda()#1}::operator()()::storage._0_16_ = (undefined1  [16])0x0;
  cacheInit(UErrorCode&)::{lambda()#1}::operator()()::storage._16_16_ = (undefined1  [16])0x0;
  cacheInit(UErrorCode&)::{lambda()#1}::operator()()::storage._32_8_ = 0;
  std::condition_variable::condition_variable
            ((condition_variable *)cacheInit(UErrorCode&)::{lambda()#2}::operator()()::storage);
  gInProgressValueAddedCond = cacheInit(UErrorCode&)::{lambda()#2}::operator()()::storage;
  this = (UnifiedCache *)icu_76_godot::UMemory::operator_new((UMemory *)0x38,(ulong)pcVar3);
  if (this == (UnifiedCache *)0x0) {
    *(undefined4 *)param_1 = 7;
LAB_001007b9:
    gCache = (UnifiedCache *)0x0;
    iVar2 = *(int *)param_1;
  }
  else {
    pUVar4 = param_1;
    UnifiedCache(this,param_1);
    iVar2 = *(int *)param_1;
    gCache = this;
    if (0 < iVar2) {
      if (*(code **)(*(long *)this + 8) == ~UnifiedCache) {
        ~UnifiedCache(this);
        icu_76_godot::UMemory::operator_delete((UMemory *)this,pUVar4);
      }
      else {
        ~UnifiedCache(this);
      }
      goto LAB_001007b9;
    }
  }
  DAT_00101024 = iVar2;
  icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gCacheInitOnce);
LAB_0010077d:
  if (0 < *(int *)param_1) {
    return (UnifiedCache *)0x0;
  }
  return gCache;
}



/* icu_76_godot::UnifiedCache::_computeCountOfItemsToEvict() const */

int __thiscall icu_76_godot::UnifiedCache::_computeCountOfItemsToEvict(UnifiedCache *this)

{
  int iVar1;
  int iVar2;
  
  iVar1 = uhash_count_76_godot(*(undefined8 *)(this + 8));
  iVar2 = (*(int *)(this + 0x20) * *(int *)(this + 0x18)) / 100;
  if (iVar2 < *(int *)(this + 0x1c)) {
    iVar2 = *(int *)(this + 0x1c);
  }
  iVar2 = (iVar1 - *(int *)(this + 0x18)) - iVar2;
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  return iVar2;
}



/* icu_76_godot::UnifiedCache::_runEvictionSlice() const */

void __thiscall icu_76_godot::UnifiedCache::_runEvictionSlice(UnifiedCache *this)

{
  long *plVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  long *plVar6;
  
  iVar2 = _computeCountOfItemsToEvict(this);
  if (0 < iVar2) {
    iVar5 = 10;
    do {
      lVar4 = uhash_nextElement_76_godot(*(undefined8 *)(this + 8),this + 0x10);
      if (lVar4 == 0) {
        *(undefined4 *)(this + 0x10) = 0xffffffff;
        lVar4 = uhash_nextElement_76_godot(*(undefined8 *)(this + 8),this + 0x10);
        if (lVar4 == 0) {
          return;
        }
      }
      plVar6 = *(long **)(lVar4 + 8);
      if ((*(int *)(*(long *)(lVar4 + 0x10) + 8) != 0) || (*(long **)(this + 0x30) != plVar6)) {
        if (*(char *)(*(long *)(lVar4 + 0x10) + 0xc) != '\0') {
          if (((int)plVar6[1] != 1) ||
             (iVar3 = icu_76_godot::SharedObject::getRefCount(), iVar3 != 0)) goto LAB_00100881;
          plVar6 = *(long **)(lVar4 + 8);
        }
        uhash_removeElement_76_godot(*(undefined8 *)(this + 8),lVar4);
        plVar1 = plVar6 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        if ((int)*plVar1 == 0) {
          *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
          iVar3 = icu_76_godot::SharedObject::getRefCount();
          if (iVar3 == 0) {
            (**(code **)(*plVar6 + 8))(plVar6);
          }
          else {
            plVar6[2] = 0;
          }
        }
        *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
        iVar2 = iVar2 + -1;
        if (iVar2 == 0) {
          return;
        }
      }
LAB_00100881:
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}



/* icu_76_godot::UnifiedCache::handleUnreferencedObject() const */

void __thiscall icu_76_godot::UnifiedCache::handleUnreferencedObject(UnifiedCache *this)

{
  pthread_mutex_t *__mutex;
  int iVar1;
  
  __mutex = gCacheMutex;
  iVar1 = pthread_mutex_lock(gCacheMutex);
  if (iVar1 == 0) {
    *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    _runEvictionSlice(this);
    pthread_mutex_unlock(__mutex);
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::__throw_system_error(iVar1);
}



/* icu_76_godot::UnifiedCache::_putNew(icu_76_godot::CacheKeyBase const&, icu_76_godot::SharedObject
   const*, UErrorCode, UErrorCode&) const */

void icu_76_godot::UnifiedCache::_putNew(void)

{
  int *in_R8;
  
  if (*in_R8 < 1) {
    _putNew();
    return;
  }
  return;
}



/* icu_76_godot::UnifiedCache::_registerPrimary(icu_76_godot::CacheKeyBase const*,
   icu_76_godot::SharedObject const*) const */

void __thiscall
icu_76_godot::UnifiedCache::_registerPrimary
          (UnifiedCache *this,CacheKeyBase *param_1,SharedObject *param_2)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = _LC0._4_4_;
  iVar2 = (int)_LC0;
  param_1[0xc] = (CacheKeyBase)0x1;
  uVar1 = *(undefined8 *)(this + 0x14);
  *(UnifiedCache **)(param_2 + 0x10) = this;
  *(ulong *)(this + 0x14) = CONCAT44((int)((ulong)uVar1 >> 0x20) + iVar3,(int)uVar1 + iVar2);
  return;
}



/* icu_76_godot::UnifiedCache::_put(UHashElement const*, icu_76_godot::SharedObject const*,
   UErrorCode) const */

void __thiscall
icu_76_godot::UnifiedCache::_put(UnifiedCache *this,long param_1,long param_2,undefined4 param_4)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  lVar3 = *(long *)(param_1 + 0x10);
  plVar4 = *(long **)(param_1 + 8);
  *(undefined4 *)(lVar3 + 8) = param_4;
  iVar6 = _LC0._4_4_;
  iVar5 = (int)_LC0;
  iVar7 = *(int *)(param_2 + 8);
  if (iVar7 == 0) {
    *(undefined1 *)(lVar3 + 0xc) = 1;
    uVar2 = *(undefined8 *)(this + 0x14);
    *(UnifiedCache **)(param_2 + 0x10) = this;
    *(ulong *)(this + 0x14) = CONCAT44((int)((ulong)uVar2 >> 0x20) + iVar6,(int)uVar2 + iVar5);
  }
  *(int *)(param_2 + 8) = iVar7 + 1;
  *(long *)(param_1 + 8) = param_2;
  plVar1 = plVar4 + 1;
  *(int *)plVar1 = (int)*plVar1 + -1;
  if ((int)*plVar1 != 0) {
    std::condition_variable::notify_all();
    return;
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  iVar7 = icu_76_godot::SharedObject::getRefCount();
  if (iVar7 == 0) {
    (**(code **)(*plVar4 + 8))(plVar4);
    std::condition_variable::notify_all();
    return;
  }
  plVar4[2] = 0;
  std::condition_variable::notify_all();
  return;
}



/* icu_76_godot::UnifiedCache::_fetch(UHashElement const*, icu_76_godot::SharedObject const*&,
   UErrorCode&) const */

void __thiscall
icu_76_godot::UnifiedCache::_fetch
          (UnifiedCache *this,UHashElement *param_1,SharedObject **param_2,
          UErrorCode_conflict *param_3)

{
  SharedObject *pSVar1;
  int iVar2;
  
  *(undefined4 *)param_3 = *(undefined4 *)(*(long *)(param_1 + 0x10) + 8);
  if (*param_2 != (SharedObject *)0x0) {
    LOCK();
    pSVar1 = *param_2 + 0xc;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    }
  }
  pSVar1 = *(SharedObject **)(param_1 + 8);
  *param_2 = pSVar1;
  if (pSVar1 != (SharedObject *)0x0) {
    LOCK();
    pSVar1 = pSVar1 + 0xc;
    iVar2 = *(int *)pSVar1;
    *(int *)pSVar1 = *(int *)pSVar1 + 1;
    UNLOCK();
    if (iVar2 == 0) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      return;
    }
  }
  return;
}



/* icu_76_godot::UnifiedCache::_inProgress(UHashElement const*) const */

uint __thiscall icu_76_godot::UnifiedCache::_inProgress(UnifiedCache *this,UHashElement *param_1)

{
  SharedObject *pSVar1;
  SharedObject *pSVar2;
  UErrorCode_conflict *pUVar3;
  long in_FS_OFFSET;
  int local_1c;
  SharedObject *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pUVar3 = (UErrorCode_conflict *)&local_1c;
  local_18 = (SharedObject *)0x0;
  _fetch(this,param_1,&local_18,pUVar3);
  pSVar2 = *(SharedObject **)(this + 0x30);
  if (local_18 != (SharedObject *)0x0) {
    LOCK();
    pSVar1 = local_18 + 0xc;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    if (*(int *)pSVar1 == 0) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT31((int3)((uint)local_1c >> 8),local_1c == 0) &
           (uint)CONCAT71((int7)((ulong)pUVar3 >> 8),pSVar2 == local_18);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnifiedCache::_putIfAbsentAndGet(icu_76_godot::CacheKeyBase const&,
   icu_76_godot::SharedObject const*&, UErrorCode&) const */

void __thiscall
icu_76_godot::UnifiedCache::_putIfAbsentAndGet
          (UnifiedCache *this,CacheKeyBase *param_1,SharedObject **param_2,
          UErrorCode_conflict *param_3)

{
  long *plVar1;
  undefined8 uVar2;
  SharedObject *pSVar3;
  long lVar4;
  long *plVar5;
  pthread_mutex_t *__mutex;
  int iVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  UHashElement *pUVar10;
  long in_FS_OFFSET;
  undefined4 local_44;
  long local_40;
  
  __mutex = gCacheMutex;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar9 = pthread_mutex_lock(gCacheMutex);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar9);
  }
  pUVar10 = (UHashElement *)uhash_find_76_godot(*(undefined8 *)(this + 8),param_1);
  if (pUVar10 == (UHashElement *)0x0) {
    local_44 = 0;
    _putNew(this,param_1,*param_2,*(undefined4 *)param_3,&local_44);
  }
  else {
    cVar8 = _inProgress(this,pUVar10);
    if (cVar8 == '\0') {
      _fetch(this,pUVar10,param_2,param_3);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00100cbd;
      goto LAB_00100c31;
    }
    pSVar3 = *param_2;
    lVar4 = *(long *)(pUVar10 + 0x10);
    plVar5 = *(long **)(pUVar10 + 8);
    *(undefined4 *)(lVar4 + 8) = *(undefined4 *)param_3;
    iVar7 = _LC0._4_4_;
    iVar6 = (int)_LC0;
    iVar9 = *(int *)(pSVar3 + 8);
    if (iVar9 == 0) {
      *(undefined1 *)(lVar4 + 0xc) = 1;
      uVar2 = *(undefined8 *)(this + 0x14);
      *(UnifiedCache **)(pSVar3 + 0x10) = this;
      *(ulong *)(this + 0x14) = CONCAT44((int)((ulong)uVar2 >> 0x20) + iVar7,(int)uVar2 + iVar6);
    }
    *(int *)(pSVar3 + 8) = iVar9 + 1;
    *(SharedObject **)(pUVar10 + 8) = pSVar3;
    plVar1 = plVar5 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    if ((int)*plVar1 == 0) {
      *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
      iVar9 = icu_76_godot::SharedObject::getRefCount();
      if (iVar9 == 0) {
        (**(code **)(*plVar5 + 8))(plVar5);
      }
      else {
        plVar5[2] = 0;
      }
    }
    std::condition_variable::notify_all();
  }
  _runEvictionSlice(this);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00100cbd:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00100c31:
  pthread_mutex_unlock(__mutex);
  return;
}



/* icu_76_godot::UnifiedCache::_poll(icu_76_godot::CacheKeyBase const&, icu_76_godot::SharedObject
   const*&, UErrorCode&) const */

undefined8 __thiscall
icu_76_godot::UnifiedCache::_poll
          (UnifiedCache *this,CacheKeyBase *param_1,SharedObject **param_2,
          UErrorCode_conflict *param_3)

{
  long lVar1;
  pthread_mutex_t *__mutex;
  char cVar2;
  int iVar3;
  UHashElement *pUVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  
  __mutex = gCacheMutex;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (gCacheMutex == (pthread_mutex_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(1);
  }
  iVar3 = pthread_mutex_lock(gCacheMutex);
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    std::__throw_system_error(iVar3);
  }
  pUVar4 = (UHashElement *)uhash_find_76_godot(*(undefined8 *)(this + 8),param_1);
  do {
    if (pUVar4 == (UHashElement *)0x0) {
      if (*(int *)param_3 < 1) {
        _putNew(this,param_1,*(undefined8 *)(this + 0x30),0,param_3);
      }
      uVar5 = 0;
LAB_00100df4:
      if (__mutex != (pthread_mutex_t *)0x0) {
        pthread_mutex_unlock(__mutex);
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return uVar5;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    cVar2 = _inProgress(this,pUVar4);
    if (cVar2 == '\0') {
      _fetch(this,pUVar4,param_2,param_3);
      uVar5 = 1;
      goto LAB_00100df4;
    }
    std::condition_variable::wait(gInProgressValueAddedCond);
    pUVar4 = (UHashElement *)uhash_find_76_godot(*(undefined8 *)(this + 8),param_1);
  } while( true );
}



/* icu_76_godot::UnifiedCache::_get(icu_76_godot::CacheKeyBase const&, icu_76_godot::SharedObject
   const*&, void const*, UErrorCode&) const */

void __thiscall
icu_76_godot::UnifiedCache::_get
          (UnifiedCache *this,CacheKeyBase *param_1,SharedObject **param_2,void *param_3,
          UErrorCode_conflict *param_4)

{
  char cVar1;
  SharedObject *pSVar2;
  
  cVar1 = _poll(this,param_1,param_2,param_4);
  if (cVar1 == '\0') {
    if (0 < *(int *)param_4) {
      return;
    }
    pSVar2 = (SharedObject *)(**(code **)(*(long *)param_1 + 0x28))(param_1,param_3,param_4);
    *param_2 = pSVar2;
    if ((pSVar2 == (SharedObject *)0x0) && (*(SharedObject **)(this + 0x30) != (SharedObject *)0x0))
    {
      *param_2 = *(SharedObject **)(this + 0x30);
      icu_76_godot::SharedObject::addRef();
    }
    _putIfAbsentAndGet(this,param_1,param_2,param_4);
  }
  if ((*(SharedObject **)(this + 0x30) == *param_2) && (*param_2 != (SharedObject *)0x0)) {
    icu_76_godot::SharedObject::removeRef();
    *param_2 = (SharedObject *)0x0;
    return;
  }
  return;
}



/* icu_76_godot::UnifiedCache::_inProgress(icu_76_godot::SharedObject const*, UErrorCode) const */

uint __thiscall icu_76_godot::UnifiedCache::_inProgress(UnifiedCache *this,long param_1,int param_3)

{
  undefined8 in_RAX;
  
  return (uint)CONCAT71((int7)((ulong)in_RAX >> 8),*(long *)(this + 0x30) == param_1) &
         CONCAT31((int3)((uint)param_3 >> 8),param_3 == 0);
}



/* icu_76_godot::UnifiedCache::_isEvictable(UHashElement const*) const */

bool __thiscall icu_76_godot::UnifiedCache::_isEvictable(UnifiedCache *this,UHashElement *param_1)

{
  bool bVar1;
  int iVar2;
  
  if ((((*(int *)(*(long *)(param_1 + 0x10) + 8) != 0) ||
       (bVar1 = false, *(long *)(this + 0x30) != *(long *)(param_1 + 8))) &&
      (bVar1 = true, *(char *)(*(long *)(param_1 + 0x10) + 0xc) != '\0')) &&
     (bVar1 = false, *(int *)(*(long *)(param_1 + 8) + 8) == 1)) {
    iVar2 = icu_76_godot::SharedObject::getRefCount();
    return iVar2 == 0;
  }
  return bVar1;
}



/* icu_76_godot::UnifiedCache::removeSoftRef(icu_76_godot::SharedObject const*) const */

void __thiscall icu_76_godot::UnifiedCache::removeSoftRef(UnifiedCache *this,SharedObject *param_1)

{
  SharedObject *pSVar1;
  int iVar2;
  
  pSVar1 = param_1 + 8;
  *(int *)pSVar1 = *(int *)pSVar1 + -1;
  if (*(int *)pSVar1 != 0) {
    return;
  }
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + -1;
  iVar2 = icu_76_godot::SharedObject::getRefCount();
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00100f5f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))(param_1);
    return;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* icu_76_godot::UnifiedCache::removeHardRef(icu_76_godot::SharedObject const*) const */

int __thiscall icu_76_godot::UnifiedCache::removeHardRef(UnifiedCache *this,SharedObject *param_1)

{
  SharedObject *pSVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != (SharedObject *)0x0) {
    LOCK();
    pSVar1 = param_1 + 0xc;
    iVar2 = *(int *)pSVar1;
    *(int *)pSVar1 = *(int *)pSVar1 + -1;
    UNLOCK();
    iVar2 = iVar2 + -1;
    if (iVar2 == 0) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + -1;
    }
  }
  return iVar2;
}



/* icu_76_godot::UnifiedCache::addHardRef(icu_76_godot::SharedObject const*) const */

int __thiscall icu_76_godot::UnifiedCache::addHardRef(UnifiedCache *this,SharedObject *param_1)

{
  SharedObject *pSVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (param_1 != (SharedObject *)0x0) {
    LOCK();
    pSVar1 = param_1 + 0xc;
    iVar2 = *(int *)pSVar1;
    *(int *)pSVar1 = *(int *)pSVar1 + 1;
    UNLOCK();
    iVar3 = iVar2 + 1;
    if (iVar2 == 0) {
      *(int *)(this + 0x18) = *(int *)(this + 0x18) + 1;
      return iVar3;
    }
  }
  return iVar3;
}


