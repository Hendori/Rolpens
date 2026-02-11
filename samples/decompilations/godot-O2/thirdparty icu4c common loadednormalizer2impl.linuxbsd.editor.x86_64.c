
/* icu_76_godot::LoadedNormalizer2Impl::isAcceptable(void*, char const*, char const*, UDataInfo
   const*) */

bool icu_76_godot::LoadedNormalizer2Impl::isAcceptable
               (void *param_1,char *param_2,char *param_3,UDataInfo *param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if ((((0x13 < *(ushort *)param_4) && (*(short *)(param_4 + 4) == 0)) &&
      (*(short *)(param_4 + 8) == 0x724e)) && (bVar1 = false, *(short *)(param_4 + 10) == 0x326d)) {
    bVar1 = param_4[0xc] == (UDataInfo)0x5;
  }
  return bVar1;
}



/* icu_76_godot::LoadedNormalizer2Impl::~LoadedNormalizer2Impl() */

void __thiscall
icu_76_godot::LoadedNormalizer2Impl::~LoadedNormalizer2Impl(LoadedNormalizer2Impl *this)

{
  *(undefined ***)this = &PTR__LoadedNormalizer2Impl_00101190;
  udata_close_76_godot(*(undefined8 *)(this + 0x50));
  ucptrie_close_76_godot(*(undefined8 *)(this + 0x58));
  icu_76_godot::Normalizer2Impl::~Normalizer2Impl((Normalizer2Impl *)this);
  return;
}



undefined8 uprv_loaded_normalizer2_cleanup(undefined8 param_1,void *param_2)

{
  Norm2AllModes *pNVar1;
  
  pNVar1 = icu_76_godot::nfkcSingleton;
  if (icu_76_godot::nfkcSingleton != (Norm2AllModes *)0x0) {
    icu_76_godot::Norm2AllModes::~Norm2AllModes(icu_76_godot::nfkcSingleton);
    icu_76_godot::UMemory::operator_delete((UMemory *)pNVar1,param_2);
  }
  pNVar1 = icu_76_godot::nfkc_cfSingleton;
  icu_76_godot::nfkcSingleton = (Norm2AllModes *)0x0;
  LOCK();
  icu_76_godot::nfkcInitOnce = 0;
  UNLOCK();
  if (icu_76_godot::nfkc_cfSingleton != (Norm2AllModes *)0x0) {
    icu_76_godot::Norm2AllModes::~Norm2AllModes(icu_76_godot::nfkc_cfSingleton);
    icu_76_godot::UMemory::operator_delete((UMemory *)pNVar1,param_2);
  }
  pNVar1 = icu_76_godot::nfkc_scfSingleton;
  icu_76_godot::nfkc_cfSingleton = (Norm2AllModes *)0x0;
  LOCK();
  icu_76_godot::nfkc_cfInitOnce = 0;
  UNLOCK();
  if (icu_76_godot::nfkc_scfSingleton != (Norm2AllModes *)0x0) {
    icu_76_godot::Norm2AllModes::~Norm2AllModes(icu_76_godot::nfkc_scfSingleton);
    icu_76_godot::UMemory::operator_delete((UMemory *)pNVar1,param_2);
  }
  icu_76_godot::nfkc_scfSingleton = (Norm2AllModes *)0x0;
  LOCK();
  icu_76_godot::nfkc_scfInitOnce = 0;
  UNLOCK();
  uhash_close_76_godot(icu_76_godot::cache);
  icu_76_godot::cache = 0;
  return 1;
}



void deleteNorm2AllModes(Norm2AllModes *param_1,void *param_2)

{
  if (param_1 != (Norm2AllModes *)0x0) {
    icu_76_godot::Norm2AllModes::~Norm2AllModes(param_1);
    icu_76_godot::UMemory::operator_delete((UMemory *)param_1,param_2);
    return;
  }
  return;
}



/* icu_76_godot::LoadedNormalizer2Impl::load(char const*, char const*, UErrorCode&) [clone .part.0]
    */

void __thiscall
icu_76_godot::LoadedNormalizer2Impl::load
          (LoadedNormalizer2Impl *this,char *param_1,char *param_2,UErrorCode *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  UCPTrie *pUVar4;
  ushort *puVar5;
  
  uVar3 = udata_openChoice_76_godot(param_1,&_LC0,param_2,0x100000,this,param_3);
  iVar1 = *(int *)param_3;
  *(undefined8 *)(this + 0x50) = uVar3;
  if (iVar1 < 1) {
    pUVar4 = (UCPTrie *)udata_getMemory_76_godot(uVar3);
    iVar1 = *(int *)pUVar4;
    if (iVar1 < 0x4c) {
      *(undefined4 *)param_3 = 3;
      return;
    }
    iVar2 = *(int *)(pUVar4 + 4);
    puVar5 = (ushort *)ucptrie_openFromBinary_76_godot(0,0,pUVar4 + iVar1,iVar2 - iVar1,0,param_3);
    *(ushort **)(this + 0x58) = puVar5;
    if (*(int *)param_3 < 1) {
      icu_76_godot::Normalizer2Impl::init((int *)this,pUVar4,puVar5,(uchar *)(pUVar4 + iVar2));
      return;
    }
  }
  return;
}



/* icu_76_godot::LoadedNormalizer2Impl::~LoadedNormalizer2Impl() */

void __thiscall
icu_76_godot::LoadedNormalizer2Impl::~LoadedNormalizer2Impl(LoadedNormalizer2Impl *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__LoadedNormalizer2Impl_00101190;
  udata_close_76_godot(*(undefined8 *)(this + 0x50));
  ucptrie_close_76_godot(*(undefined8 *)(this + 0x58));
  icu_76_godot::Normalizer2Impl::~Normalizer2Impl((Normalizer2Impl *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::LoadedNormalizer2Impl::load(char const*, char const*, UErrorCode&) */

void __thiscall
icu_76_godot::LoadedNormalizer2Impl::load
          (LoadedNormalizer2Impl *this,char *param_1,char *param_2,UErrorCode *param_3)

{
  if (0 < *(int *)param_3) {
    return;
  }
  load(this,param_1,param_2,param_3);
  return;
}



/* icu_76_godot::Norm2AllModes::createInstance(char const*, char const*, UErrorCode&) */

undefined8
icu_76_godot::Norm2AllModes::createInstance(char *param_1,char *param_2,UErrorCode *param_3)

{
  int iVar1;
  Normalizer2Impl *this;
  undefined8 uVar2;
  
  if (0 < *(int *)param_3) {
    return 0;
  }
  this = (Normalizer2Impl *)icu_76_godot::UMemory::operator_new((UMemory *)0x60,(ulong)param_2);
  if (this != (Normalizer2Impl *)0x0) {
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined1 (*) [16])(this + 0x48) = (undefined1  [16])0x0;
    iVar1 = *(int *)param_3;
    *(undefined ***)this = &PTR__LoadedNormalizer2Impl_00101190;
    *(undefined8 *)(this + 0x58) = 0;
    if (iVar1 < 1) {
      LoadedNormalizer2Impl::load((LoadedNormalizer2Impl *)this,param_1,param_2,param_3);
    }
    uVar2 = icu_76_godot::Norm2AllModes::createInstance(this,param_3);
    return uVar2;
  }
  *(undefined4 *)param_3 = 7;
  return 0;
}



/* icu_76_godot::initSingletons(char const*, UErrorCode&) */

void icu_76_godot::initSingletons(char *param_1,UErrorCode *param_2)

{
  int iVar1;
  
  iVar1 = strcmp(param_1,"nfkc");
  if (iVar1 == 0) {
    nfkcSingleton = Norm2AllModes::createInstance((char *)0x0,"nfkc",param_2);
  }
  else {
    iVar1 = strcmp(param_1,"nfkc_cf");
    if (iVar1 == 0) {
      nfkc_cfSingleton = Norm2AllModes::createInstance((char *)0x0,"nfkc_cf",param_2);
    }
    else {
      iVar1 = strcmp(param_1,"nfkc_scf");
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      nfkc_scfSingleton = Norm2AllModes::createInstance((char *)0x0,"nfkc_scf",param_2);
    }
  }
  ucln_common_registerCleanup_76_godot(0xe,uprv_loaded_normalizer2_cleanup);
  return;
}



/* icu_76_godot::Norm2AllModes::getNFKCInstance(UErrorCode&) */

undefined8 icu_76_godot::Norm2AllModes::getNFKCInstance(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if ((nfkcInitOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkcInitOnce), cVar1 != '\0')) {
    initSingletons("nfkc",param_1);
    DAT_001010ec = *(int *)param_1;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkcInitOnce);
    return nfkcSingleton;
  }
  if (0 < DAT_001010ec) {
    *(int *)param_1 = DAT_001010ec;
  }
  return nfkcSingleton;
}



/* icu_76_godot::Norm2AllModes::getNFKC_CFInstance(UErrorCode&) */

undefined8 icu_76_godot::Norm2AllModes::getNFKC_CFInstance(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if ((nfkc_cfInitOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkc_cfInitOnce), cVar1 != '\0')) {
    initSingletons("nfkc_cf",param_1);
    DAT_001010dc = *(int *)param_1;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkc_cfInitOnce);
    return nfkc_cfSingleton;
  }
  if (0 < DAT_001010dc) {
    *(int *)param_1 = DAT_001010dc;
  }
  return nfkc_cfSingleton;
}



/* icu_76_godot::Norm2AllModes::getNFKC_SCFInstance(UErrorCode&) */

undefined8 icu_76_godot::Norm2AllModes::getNFKC_SCFInstance(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if ((nfkc_scfInitOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkc_scfInitOnce), cVar1 != '\0')) {
    initSingletons("nfkc_scf",param_1);
    DAT_001010cc = *(int *)param_1;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkc_scfInitOnce);
    return nfkc_scfSingleton;
  }
  if (0 < DAT_001010cc) {
    *(int *)param_1 = DAT_001010cc;
  }
  return nfkc_scfSingleton;
}



/* icu_76_godot::Normalizer2::getNFKCInstance(UErrorCode&) */

long icu_76_godot::Normalizer2::getNFKCInstance(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (nfkcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkcInitOnce);
    if (cVar1 != '\0') {
      initSingletons("nfkc",param_1);
      DAT_001010ec = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkcInitOnce);
      goto LAB_0010057e;
    }
  }
  if (0 < DAT_001010ec) {
    *(int *)param_1 = DAT_001010ec;
  }
LAB_0010057e:
  if (nfkcSingleton != 0) {
    return nfkcSingleton + 8;
  }
  return 0;
}



/* icu_76_godot::Normalizer2::getNFKDInstance(UErrorCode&) */

long icu_76_godot::Normalizer2::getNFKDInstance(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (nfkcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkcInitOnce);
    if (cVar1 != '\0') {
      initSingletons("nfkc",param_1);
      DAT_001010ec = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkcInitOnce);
      goto LAB_0010061e;
    }
  }
  if (0 < DAT_001010ec) {
    *(int *)param_1 = DAT_001010ec;
  }
LAB_0010061e:
  if (nfkcSingleton != 0) {
    return nfkcSingleton + 0x20;
  }
  return 0;
}



/* icu_76_godot::Normalizer2::getNFKCCasefoldInstance(UErrorCode&) */

long icu_76_godot::Normalizer2::getNFKCCasefoldInstance(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (nfkc_cfInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkc_cfInitOnce);
    if (cVar1 != '\0') {
      initSingletons("nfkc_cf",param_1);
      DAT_001010dc = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkc_cfInitOnce);
      goto LAB_001006be;
    }
  }
  if (0 < DAT_001010dc) {
    *(int *)param_1 = DAT_001010dc;
  }
LAB_001006be:
  if (nfkc_cfSingleton != 0) {
    return nfkc_cfSingleton + 8;
  }
  return 0;
}



/* icu_76_godot::Normalizer2::getNFKCSimpleCasefoldInstance(UErrorCode&) */

long icu_76_godot::Normalizer2::getNFKCSimpleCasefoldInstance(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (nfkc_scfInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkc_scfInitOnce);
    if (cVar1 != '\0') {
      initSingletons("nfkc_scf",param_1);
      DAT_001010cc = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkc_scfInitOnce);
      goto LAB_0010075e;
    }
  }
  if (0 < DAT_001010cc) {
    *(int *)param_1 = DAT_001010cc;
  }
LAB_0010075e:
  if (nfkc_scfSingleton != 0) {
    return nfkc_scfSingleton + 8;
  }
  return 0;
}



/* icu_76_godot::Normalizer2::getInstance(char const*, char const*, UNormalization2Mode,
   UErrorCode&) */

Norm2AllModes *
icu_76_godot::Normalizer2::getInstance(char *param_1,char *param_2,uint param_3,UErrorCode *param_4)

{
  char cVar1;
  int iVar2;
  Norm2AllModes *pNVar3;
  Norm2AllModes *pNVar4;
  size_t sVar5;
  long lVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  
  if (0 < *(int *)param_4) {
    return (Norm2AllModes *)0x0;
  }
  if ((param_2 == (char *)0x0) || (*param_2 == '\0')) {
    *(undefined4 *)param_4 = 1;
    return (Norm2AllModes *)0x0;
  }
  if (param_1 == (char *)0x0) {
    iVar2 = strcmp(param_2,"nfc");
    if (iVar2 == 0) {
      pNVar3 = (Norm2AllModes *)icu_76_godot::Norm2AllModes::getNFCInstance(param_4);
      iVar2 = *(int *)param_4;
    }
    else {
      iVar2 = strcmp(param_2,"nfkc");
      if (iVar2 == 0) {
        if ((nfkcInitOnce == 2) ||
           (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkcInitOnce), cVar1 == '\0'))
        {
          iVar2 = DAT_001010ec;
          if (0 < DAT_001010ec) {
LAB_00100aa2:
            *(int *)param_4 = iVar2;
            return (Norm2AllModes *)0x0;
          }
          iVar2 = *(int *)param_4;
          pNVar3 = nfkcSingleton;
        }
        else {
          initSingletons("nfkc",param_4);
          DAT_001010ec = *(int *)param_4;
          icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkcInitOnce);
          iVar2 = *(int *)param_4;
          pNVar3 = nfkcSingleton;
        }
      }
      else {
        iVar2 = strcmp(param_2,"nfkc_cf");
        if (iVar2 == 0) {
          if ((nfkc_cfInitOnce == 2) ||
             (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkc_cfInitOnce),
             cVar1 == '\0')) {
            iVar2 = DAT_001010dc;
            if (0 < DAT_001010dc) goto LAB_00100aa2;
            iVar2 = *(int *)param_4;
            pNVar3 = nfkc_cfSingleton;
          }
          else {
            initSingletons("nfkc_cf",param_4);
            DAT_001010dc = *(int *)param_4;
            icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkc_cfInitOnce);
            iVar2 = *(int *)param_4;
            pNVar3 = nfkc_cfSingleton;
          }
        }
        else {
          iVar2 = strcmp(param_2,"nfkc_scf");
          if (iVar2 != 0) goto LAB_00100811;
          if ((nfkc_scfInitOnce == 2) ||
             (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkc_scfInitOnce),
             cVar1 == '\0')) {
            iVar2 = DAT_001010cc;
            if (0 < DAT_001010cc) goto LAB_00100aa2;
            iVar2 = *(int *)param_4;
            pNVar3 = nfkc_scfSingleton;
          }
          else {
            initSingletons("nfkc_scf",param_4);
            DAT_001010cc = *(int *)param_4;
            icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkc_scfInitOnce);
            iVar2 = *(int *)param_4;
            pNVar3 = nfkc_scfSingleton;
          }
        }
      }
    }
    if (pNVar3 == (Norm2AllModes *)0x0) {
      if (0 < iVar2) {
        return (Norm2AllModes *)0x0;
      }
      goto LAB_00100811;
    }
LAB_00100846:
    if (iVar2 < 1) {
      if (param_3 == 2) {
        pNVar4 = pNVar3 + 0x30;
      }
      else if (param_3 < 3) {
        pNVar4 = pNVar3 + 8;
        if (param_3 != 0) {
          pNVar4 = pNVar3 + 0x20;
        }
      }
      else {
        pNVar4 = pNVar3 + 0x40;
        if (param_3 != 3) {
          return (Norm2AllModes *)0x0;
        }
      }
      return pNVar4;
    }
  }
  else {
LAB_00100811:
    umtx_lock_76_godot(0);
    if (cache != 0) {
      pNVar3 = (Norm2AllModes *)uhash_get_76_godot(cache,param_2);
      umtx_unlock_76_godot(0);
      if (pNVar3 == (Norm2AllModes *)0x0) goto LAB_0010099f;
      goto LAB_00100843;
    }
    umtx_unlock_76_godot(0);
LAB_0010099f:
    ucln_common_registerCleanup_76_godot(0xe,uprv_loaded_normalizer2_cleanup);
    pcVar8 = param_2;
    pNVar4 = (Norm2AllModes *)Norm2AllModes::createInstance(param_1,param_2,param_4);
    if (*(int *)param_4 < 1) {
      umtx_lock_76_godot(0);
      if (cache != 0) {
LAB_001009ff:
        pcVar8 = param_2;
        pNVar3 = (Norm2AllModes *)uhash_get_76_godot(cache);
        if (pNVar3 == (Norm2AllModes *)0x0) {
          sVar5 = strlen(param_2);
          lVar9 = (long)((int)sVar5 + 1);
          lVar6 = uprv_malloc_76_godot(lVar9);
          if (lVar6 == 0) {
            *(undefined4 *)param_4 = 7;
            goto LAB_00100bdd;
          }
          uVar7 = __memcpy_chk(lVar6,param_2,lVar9,lVar9);
          uhash_put_76_godot(cache,uVar7,pNVar4,param_4);
          umtx_unlock_76_godot(0);
          pNVar3 = pNVar4;
          if (pNVar4 == (Norm2AllModes *)0x0) {
            return (Norm2AllModes *)0x0;
          }
        }
        else {
          umtx_unlock_76_godot(0);
          if (pNVar4 != (Norm2AllModes *)0x0) {
            icu_76_godot::Norm2AllModes::~Norm2AllModes(pNVar4);
            icu_76_godot::UMemory::operator_delete((UMemory *)pNVar4,pcVar8);
          }
        }
LAB_00100843:
        iVar2 = *(int *)param_4;
        goto LAB_00100846;
      }
      pcVar8 = &uhash_compareChars_76_godot;
      cache = uhash_open_76_godot(&uhash_hashChars_76_godot,&uhash_compareChars_76_godot,0,param_4);
      if (*(int *)param_4 < 1) {
        uhash_setKeyDeleter_76_godot(cache,&uprv_free_76_godot);
        uhash_setValueDeleter_76_godot(cache,deleteNorm2AllModes);
        goto LAB_001009ff;
      }
LAB_00100bdd:
      umtx_unlock_76_godot(0);
    }
    if (pNVar4 != (Norm2AllModes *)0x0) {
      icu_76_godot::Norm2AllModes::~Norm2AllModes(pNVar4);
      icu_76_godot::UMemory::operator_delete((UMemory *)pNVar4,pcVar8);
    }
  }
  return (Norm2AllModes *)0x0;
}



/* icu_76_godot::Normalizer2Factory::getInstance(UNormalizationMode, UErrorCode&) */

undefined8 icu_76_godot::Normalizer2Factory::getInstance(undefined4 param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  
  if (*(int *)param_2 < 1) {
    switch(param_1) {
    default:
      uVar1 = icu_76_godot::Normalizer2Factory::getNoopInstance(param_2);
      return uVar1;
    case 2:
      uVar1 = icu_76_godot::Normalizer2::getNFDInstance(param_2);
      return uVar1;
    case 3:
      uVar1 = Normalizer2::getNFKDInstance(param_2);
      return uVar1;
    case 4:
      uVar1 = icu_76_godot::Normalizer2::getNFCInstance(param_2);
      return uVar1;
    case 5:
      uVar1 = Normalizer2::getNFKCInstance(param_2);
      return uVar1;
    case 6:
      uVar1 = icu_76_godot::Normalizer2Factory::getFCDInstance(param_2);
      return uVar1;
    }
  }
  return 0;
}



/* icu_76_godot::Normalizer2Factory::getNFKCImpl(UErrorCode&) */

undefined8 icu_76_godot::Normalizer2Factory::getNFKCImpl(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (nfkcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkcInitOnce);
    if (cVar1 != '\0') {
      initSingletons("nfkc",param_1);
      DAT_001010ec = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkcInitOnce);
      goto LAB_00100c8a;
    }
  }
  if (0 < DAT_001010ec) {
    *(int *)param_1 = DAT_001010ec;
  }
LAB_00100c8a:
  if (nfkcSingleton != (undefined8 *)0x0) {
    return *nfkcSingleton;
  }
  return 0;
}



/* icu_76_godot::Normalizer2Factory::getNFKC_CFImpl(UErrorCode&) */

undefined8 icu_76_godot::Normalizer2Factory::getNFKC_CFImpl(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (nfkc_cfInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfkc_cfInitOnce);
    if (cVar1 != '\0') {
      initSingletons("nfkc_cf",param_1);
      DAT_001010dc = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfkc_cfInitOnce);
      goto LAB_00100d1a;
    }
  }
  if (0 < DAT_001010dc) {
    *(int *)param_1 = DAT_001010dc;
  }
LAB_00100d1a:
  if (nfkc_cfSingleton != (undefined8 *)0x0) {
    return *nfkc_cfSingleton;
  }
  return 0;
}



long unorm2_getNFKCInstance_76_godot(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (icu_76_godot::nfkcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::nfkcInitOnce);
    if (cVar1 != '\0') {
      icu_76_godot::initSingletons("nfkc",param_1);
      DAT_001010ec = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::nfkcInitOnce);
      goto LAB_00100dae;
    }
  }
  if (0 < DAT_001010ec) {
    *(int *)param_1 = DAT_001010ec;
  }
LAB_00100dae:
  if (icu_76_godot::nfkcSingleton != 0) {
    return icu_76_godot::nfkcSingleton + 8;
  }
  return 0;
}



long unorm2_getNFKDInstance_76_godot(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (icu_76_godot::nfkcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::nfkcInitOnce);
    if (cVar1 != '\0') {
      icu_76_godot::initSingletons("nfkc",param_1);
      DAT_001010ec = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::nfkcInitOnce);
      goto LAB_00100e4e;
    }
  }
  if (0 < DAT_001010ec) {
    *(int *)param_1 = DAT_001010ec;
  }
LAB_00100e4e:
  if (icu_76_godot::nfkcSingleton != 0) {
    return icu_76_godot::nfkcSingleton + 0x20;
  }
  return 0;
}



long unorm2_getNFKCCasefoldInstance_76_godot(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (icu_76_godot::nfkc_cfInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::nfkc_cfInitOnce);
    if (cVar1 != '\0') {
      icu_76_godot::initSingletons("nfkc_cf",param_1);
      DAT_001010dc = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::nfkc_cfInitOnce);
      goto LAB_00100eee;
    }
  }
  if (0 < DAT_001010dc) {
    *(int *)param_1 = DAT_001010dc;
  }
LAB_00100eee:
  if (icu_76_godot::nfkc_cfSingleton != 0) {
    return icu_76_godot::nfkc_cfSingleton + 8;
  }
  return 0;
}



long unorm2_getNFKCSimpleCasefoldInstance_76_godot(UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (icu_76_godot::nfkc_scfInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::nfkc_scfInitOnce);
    if (cVar1 != '\0') {
      icu_76_godot::initSingletons("nfkc_scf",param_1);
      DAT_001010cc = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::nfkc_scfInitOnce);
      goto LAB_00100f8e;
    }
  }
  if (0 < DAT_001010cc) {
    *(int *)param_1 = DAT_001010cc;
  }
LAB_00100f8e:
  if (icu_76_godot::nfkc_scfSingleton != 0) {
    return icu_76_godot::nfkc_scfSingleton + 8;
  }
  return 0;
}



void icu_76_godot::Normalizer2::unorm2_getInstance_76_godot(void)

{
  getInstance();
  return;
}



undefined8 unorm_getQuickCheck_76_godot(undefined4 param_1,int param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 1;
  if (param_2 - 2U < 4) {
    local_14 = 0;
    if (param_2 == 4) {
      plVar2 = (long *)icu_76_godot::Normalizer2::getNFCInstance((UErrorCode *)&local_14);
    }
    else if (param_2 == 5) {
      plVar2 = (long *)icu_76_godot::Normalizer2::getNFKCInstance((UErrorCode *)&local_14);
    }
    else if (param_2 == 3) {
      plVar2 = (long *)icu_76_godot::Normalizer2::getNFKDInstance((UErrorCode *)&local_14);
    }
    else {
      plVar2 = (long *)icu_76_godot::Normalizer2::getNFDInstance((UErrorCode *)&local_14);
    }
    uVar1 = 2;
    if (local_14 < 1) {
      uVar1 = (**(code **)(*plVar2 + 0xa8))(plVar2,param_1);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::initSingletons(char const*, UErrorCode&) [clone .cold] */

void icu_76_godot::initSingletons(char *param_1,UErrorCode *param_2)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


