
/* icu_76_godot::Normalizer2::getRawDecomposition(int, icu_76_godot::UnicodeString&) const */

undefined8 icu_76_godot::Normalizer2::getRawDecomposition(int param_1,UnicodeString *param_2)

{
  return 0;
}



/* icu_76_godot::Normalizer2::composePair(int, int) const */

undefined8 icu_76_godot::Normalizer2::composePair(int param_1,int param_2)

{
  return 0xffffffff;
}



/* icu_76_godot::Normalizer2::getCombiningClass(int) const */

undefined8 icu_76_godot::Normalizer2::getCombiningClass(int param_1)

{
  return 0;
}



/* icu_76_godot::NoopNormalizer2::~NoopNormalizer2() */

void __thiscall icu_76_godot::NoopNormalizer2::~NoopNormalizer2(NoopNormalizer2 *this)

{
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::DecomposeNormalizer2::~DecomposeNormalizer2() */

void __thiscall
icu_76_godot::DecomposeNormalizer2::~DecomposeNormalizer2(DecomposeNormalizer2 *this)

{
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::ComposeNormalizer2::~ComposeNormalizer2() */

void __thiscall icu_76_godot::ComposeNormalizer2::~ComposeNormalizer2(ComposeNormalizer2 *this)

{
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::FCDNormalizer2::~FCDNormalizer2() */

void __thiscall icu_76_godot::FCDNormalizer2::~FCDNormalizer2(FCDNormalizer2 *this)

{
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::NoopNormalizer2::~NoopNormalizer2() */

void __thiscall icu_76_godot::NoopNormalizer2::~NoopNormalizer2(NoopNormalizer2 *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::DecomposeNormalizer2::~DecomposeNormalizer2() */

void __thiscall
icu_76_godot::DecomposeNormalizer2::~DecomposeNormalizer2(DecomposeNormalizer2 *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::ComposeNormalizer2::~ComposeNormalizer2() */

void __thiscall icu_76_godot::ComposeNormalizer2::~ComposeNormalizer2(ComposeNormalizer2 *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::FCDNormalizer2::~FCDNormalizer2() */

void __thiscall icu_76_godot::FCDNormalizer2::~FCDNormalizer2(FCDNormalizer2 *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::Normalizer2::isNormalizedUTF8(icu_76_godot::StringPiece, UErrorCode&) const */

ulong icu_76_godot::Normalizer2::isNormalizedUTF8
                (long *param_1,undefined8 param_2,undefined8 param_3,int *param_4)

{
  code *pcVar1;
  char cVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  UnicodeString aUStack_78 [72];
  long local_30;
  
  uVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 1) {
    pcVar1 = *(code **)(*param_1 + 0x58);
    icu_76_godot::UnicodeString::fromUTF8(aUStack_78);
    cVar2 = (*pcVar1)(param_1,aUStack_78,param_4);
    uVar3 = CONCAT71((int7)((ulong)pcVar1 >> 8),cVar2 != '\0');
    icu_76_godot::UnicodeString::~UnicodeString(aUStack_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3 & 0xffffffff;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer2::normalizeUTF8(unsigned int, icu_76_godot::StringPiece,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) const */

void icu_76_godot::Normalizer2::normalizeUTF8
               (long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
               undefined8 param_5,long param_6,int *param_7)

{
  long in_FS_OFFSET;
  UnicodeString local_b8 [64];
  code *local_78;
  undefined2 local_70;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_7 < 1) {
    if (param_6 == 0) {
      icu_76_godot::UnicodeString::fromUTF8(local_b8,param_3,param_4);
      local_78 = icu_76_godot::Normalizer2Impl::makeFCD;
      local_70 = 2;
      (**(code **)(*param_1 + 0x18))(param_1,local_b8,(ByteSink *)&local_78,param_7);
      icu_76_godot::UnicodeString::toUTF8((ByteSink *)&local_78);
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_78);
      icu_76_godot::UnicodeString::~UnicodeString(local_b8);
    }
    else {
      *param_7 = 0x10;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* normalizeSecondAndAppend(UNormalizer2 const*, char16_t*, int, int, char16_t const*, int, signed
   char, UErrorCode*) */

undefined4
normalizeSecondAndAppend
          (long *param_1,wchar16 *param_2,int param_3,int param_4,wchar16 *param_5,uint param_6,
          char param_7,int *param_8)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  wchar16 *pwVar4;
  long in_FS_OFFSET;
  wchar16 **local_130;
  UnicodeString *local_120;
  int local_118;
  wchar16 *local_108;
  UnicodeString *local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  UnicodeString local_c8 [8];
  short local_c0;
  int local_bc;
  code *local_88;
  short local_80;
  int local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_8 < 1) {
    if (param_5 == (wchar16 *)0x0) {
      if (param_6 == 0) {
        if (param_2 == (wchar16 *)0x0) goto LAB_00100560;
        if ((-2 < param_3) && (-1 < param_4)) goto LAB_00100347;
      }
    }
    else if (-2 < (int)param_6) {
      if (param_2 == (wchar16 *)0x0) {
LAB_00100560:
        if (param_4 == 0 && param_3 == 0) goto LAB_00100347;
      }
      else if (((-1 < param_4) && (-2 < param_3)) && (param_5 != param_2)) {
LAB_00100347:
        icu_76_godot::UnicodeString::UnicodeString(local_c8,param_2,param_3,param_4);
        if (local_c0 < 0) {
          local_118 = local_bc;
        }
        else {
          local_118 = (int)(local_c0 >> 5);
        }
        if (param_6 != 0) {
          if ((param_1 == (long *)0x0) ||
             (plVar3 = (long *)__dynamic_cast(param_1,&icu_76_godot::Normalizer2::typeinfo,
                                              &icu_76_godot::Normalizer2WithImpl::typeinfo,0),
             plVar3 == (long *)0x0)) {
            local_108 = param_5;
            icu_76_godot::UnicodeString::UnicodeString
                      ((UnicodeString *)&local_88,param_6 >> 0x1f,&local_108,param_6);
            if (param_7 == '\0') {
              (**(code **)(*param_1 + 0x30))(param_1,local_c8,(UnicodeString *)&local_88,param_8);
            }
            else {
              (**(code **)(*param_1 + 0x28))(param_1,local_c8,(UnicodeString *)&local_88);
            }
          }
          else {
            local_88 = icu_76_godot::Normalizer2Impl::makeFCD;
            local_108 = (wchar16 *)plVar3[1];
            local_80 = 2;
            local_f8 = 0;
            local_f0 = 0;
            local_e0 = 0;
            local_e8 = 0;
            local_dc = 0;
            local_100 = local_c8;
            cVar1 = icu_76_godot::ReorderingBuffer::init
                              ((int)&local_108,(UErrorCode *)(ulong)(local_118 + 1 + param_6));
            if (cVar1 != '\0') {
              pwVar4 = (wchar16 *)0x0;
              if (param_6 != 0xffffffff) {
                pwVar4 = param_5 + (int)param_6;
              }
              (**(code **)(*plVar3 + 0x98))
                        (plVar3,param_5,pwVar4,(int)param_7,&local_88,&local_108,param_8);
            }
            local_120 = (UnicodeString *)&local_88;
            if (local_f8 != 0) {
              icu_76_godot::UnicodeString::releaseBuffer((int)local_100);
            }
            if (*param_8 < 1) {
              if (-1 < local_c0) {
                local_bc = (int)(local_c0 >> 5);
              }
              if (local_bc <= param_4) goto LAB_00100520;
            }
            if (param_2 != (wchar16 *)0x0) {
              if (-1 < local_80) {
                local_7c = (int)(local_80 >> 5);
              }
              icu_76_godot::UnicodeString::doExtract
                        ((int)local_120,0,(wchar16 *)0x7fffffff,
                         (int)param_2 + (local_118 - local_7c) * 2);
              if (local_118 < param_4) {
                param_2[local_118] = L'\0';
              }
            }
          }
LAB_00100520:
          local_120 = (UnicodeString *)&local_88;
          icu_76_godot::UnicodeString::~UnicodeString(local_120);
        }
        local_130 = &local_108;
        local_108 = param_2;
        uVar2 = icu_76_godot::UnicodeString::extract(local_c8,local_130,param_4,param_8);
        icu_76_godot::UnicodeString::~UnicodeString(local_c8);
        goto LAB_00100303;
      }
    }
    *param_8 = 1;
  }
  uVar2 = 0;
LAB_00100303:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* icu_76_godot::Normalizer2::~Normalizer2() */

void __thiscall icu_76_godot::Normalizer2::~Normalizer2(Normalizer2 *this)

{
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::Normalizer2::~Normalizer2() */

void __thiscall icu_76_godot::Normalizer2::~Normalizer2(Normalizer2 *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::Normalizer2WithImpl::~Normalizer2WithImpl() */

void __thiscall icu_76_godot::Normalizer2WithImpl::~Normalizer2WithImpl(Normalizer2WithImpl *this)

{
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::Normalizer2WithImpl::~Normalizer2WithImpl() */

void __thiscall icu_76_godot::Normalizer2WithImpl::~Normalizer2WithImpl(Normalizer2WithImpl *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::Normalizer2Factory::getNoopInstance(UErrorCode&) */

undefined8 * __thiscall
icu_76_godot::Normalizer2Factory::getNoopInstance(Normalizer2Factory *this,UErrorCode *param_1)

{
  char cVar1;
  int iVar2;
  
  if (0 < *(int *)this) {
    return (undefined8 *)0x0;
  }
  if ((noopInitOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&noopInitOnce), cVar1 != '\0')) {
    iVar2 = *(int *)this;
    if (iVar2 < 1) {
      noopSingleton =
           (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x8,(ulong)param_1);
      if (noopSingleton == (undefined8 *)0x0) {
        *(undefined4 *)this = 7;
        noopSingleton = (undefined8 *)0x0;
        iVar2 = 7;
      }
      else {
        *noopSingleton = &PTR__NoopNormalizer2_00103150;
        ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
        iVar2 = *(int *)this;
      }
    }
    DAT_0010180c = iVar2;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&noopInitOnce);
    return noopSingleton;
  }
  if (0 < DAT_0010180c) {
    *(int *)this = DAT_0010180c;
  }
  return noopSingleton;
}



/* icu_76_godot::Normalizer2Factory::getImpl(icu_76_godot::Normalizer2 const*) */

undefined8 icu_76_godot::Normalizer2Factory::getImpl(Normalizer2 *param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* icu_76_godot::Norm2AllModes::~Norm2AllModes() */

void __thiscall icu_76_godot::Norm2AllModes::~Norm2AllModes(Norm2AllModes *this)

{
  if (*(long **)this != (long *)0x0) {
    (**(code **)(**(long **)this + 8))();
  }
  *(undefined **)(this + 0x40) = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)(this + 0x40));
  *(undefined **)(this + 0x30) = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)(this + 0x30));
  *(undefined **)(this + 0x20) = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)(this + 0x20));
  *(undefined **)(this + 8) = &DAT_001030b0;
  icu_76_godot::UObject::~UObject((UObject *)(this + 8));
  return;
}



undefined8 uprv_normalizer2_cleanup(undefined8 param_1,void *param_2)

{
  Norm2AllModes *this;
  
  if (icu_76_godot::noopSingleton != (long *)0x0) {
    (**(code **)(*icu_76_godot::noopSingleton + 8))();
  }
  this = icu_76_godot::nfcSingleton;
  icu_76_godot::noopSingleton = (long *)0x0;
  LOCK();
  icu_76_godot::noopInitOnce = 0;
  UNLOCK();
  if (icu_76_godot::nfcSingleton != (Norm2AllModes *)0x0) {
    icu_76_godot::Norm2AllModes::~Norm2AllModes(icu_76_godot::nfcSingleton);
    icu_76_godot::UMemory::operator_delete((UMemory *)this,param_2);
  }
  icu_76_godot::nfcSingleton = (Norm2AllModes *)0x0;
  LOCK();
  icu_76_godot::nfcInitOnce = 0;
  UNLOCK();
  return 1;
}



/* icu_76_godot::Norm2AllModes::createInstance(icu_76_godot::Normalizer2Impl*, UErrorCode&) */

undefined8 *
icu_76_godot::Norm2AllModes::createInstance(Normalizer2Impl *param_1,UErrorCode *param_2)

{
  undefined8 *puVar1;
  
  if (*(int *)param_2 < 1) {
    puVar1 = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x58,(ulong)param_2);
    if (puVar1 != (undefined8 *)0x0) {
      *puVar1 = param_1;
      puVar1[4] = &PTR__DecomposeNormalizer2_001032b0;
      puVar1[2] = param_1;
      puVar1[1] = &PTR__ComposeNormalizer2_00103370;
      *(undefined1 *)(puVar1 + 3) = 0;
      puVar1[5] = param_1;
      puVar1[7] = param_1;
      puVar1[6] = &PTR__FCDNormalizer2_00103430;
      puVar1[9] = param_1;
      puVar1[8] = &PTR__ComposeNormalizer2_00103370;
      *(undefined1 *)(puVar1 + 10) = 1;
      return puVar1;
    }
    *(undefined4 *)param_2 = 7;
  }
  if (param_1 != (Normalizer2Impl *)0x0) {
    (**(code **)(*(long *)param_1 + 8))(param_1);
  }
  return (undefined8 *)0x0;
}



/* icu_76_godot::Norm2AllModes::createNFCInstance(UErrorCode&) */

undefined8 __thiscall
icu_76_godot::Norm2AllModes::createNFCInstance(Norm2AllModes *this,UErrorCode *param_1)

{
  Normalizer2Impl *pNVar1;
  undefined8 uVar2;
  
  if (0 < *(int *)this) {
    return 0;
  }
  pNVar1 = (Normalizer2Impl *)icu_76_godot::UMemory::operator_new((UMemory *)0x50,(ulong)param_1);
  if (pNVar1 != (Normalizer2Impl *)0x0) {
    *(undefined8 *)(pNVar1 + 0x28) = 0;
    *(undefined **)pNVar1 = &__cxxabiv1::__si_class_type_info::vtable;
    *(undefined8 *)(pNVar1 + 0x40) = 0;
    *(undefined8 *)(pNVar1 + 0x48) = 0;
    icu_76_godot::Normalizer2Impl::init
              ((int *)pNVar1,(UCPTrie *)norm2_nfc_data_indexes,(ushort *)norm2_nfc_data_trie,
               norm2_nfc_data_extraData);
    uVar2 = createInstance(pNVar1,(UErrorCode *)this);
    return uVar2;
  }
  *(undefined4 *)this = 7;
  return 0;
}



/* icu_76_godot::Norm2AllModes::getNFCInstance(UErrorCode&) */

undefined8 __thiscall
icu_76_godot::Norm2AllModes::getNFCInstance(Norm2AllModes *this,UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)this) {
    return 0;
  }
  if ((nfcInitOnce != 2) &&
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfcInitOnce), cVar1 != '\0')) {
    nfcSingleton = createNFCInstance(this,param_1);
    ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
    DAT_001017fc = *(int *)this;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfcInitOnce);
    return nfcSingleton;
  }
  if (0 < DAT_001017fc) {
    *(int *)this = DAT_001017fc;
  }
  return nfcSingleton;
}



/* icu_76_godot::Normalizer2::getNFCInstance(UErrorCode&) */

long __thiscall icu_76_godot::Normalizer2::getNFCInstance(Normalizer2 *this,UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)this) {
    return 0;
  }
  if (nfcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfcInitOnce);
    if (cVar1 != '\0') {
      nfcSingleton = Norm2AllModes::createNFCInstance((Norm2AllModes *)this,param_1);
      ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
      DAT_001017fc = *(int *)this;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfcInitOnce);
      goto LAB_00100a1e;
    }
  }
  if (0 < DAT_001017fc) {
    *(int *)this = DAT_001017fc;
  }
LAB_00100a1e:
  if (nfcSingleton != 0) {
    return nfcSingleton + 8;
  }
  return 0;
}



/* icu_76_godot::Normalizer2::getNFDInstance(UErrorCode&) */

long __thiscall icu_76_godot::Normalizer2::getNFDInstance(Normalizer2 *this,UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)this) {
    return 0;
  }
  if (nfcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfcInitOnce);
    if (cVar1 != '\0') {
      nfcSingleton = Norm2AllModes::createNFCInstance((Norm2AllModes *)this,param_1);
      ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
      DAT_001017fc = *(int *)this;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfcInitOnce);
      goto LAB_00100ace;
    }
  }
  if (0 < DAT_001017fc) {
    *(int *)this = DAT_001017fc;
  }
LAB_00100ace:
  if (nfcSingleton != 0) {
    return nfcSingleton + 0x20;
  }
  return 0;
}



/* icu_76_godot::Normalizer2Factory::getFCDInstance(UErrorCode&) */

long __thiscall
icu_76_godot::Normalizer2Factory::getFCDInstance(Normalizer2Factory *this,UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)this) {
    return 0;
  }
  if (nfcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfcInitOnce);
    if (cVar1 != '\0') {
      nfcSingleton = Norm2AllModes::createNFCInstance((Norm2AllModes *)this,param_1);
      ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
      DAT_001017fc = *(int *)this;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfcInitOnce);
      goto LAB_00100b7e;
    }
  }
  if (0 < DAT_001017fc) {
    *(int *)this = DAT_001017fc;
  }
LAB_00100b7e:
  if (nfcSingleton != 0) {
    return nfcSingleton + 0x30;
  }
  return 0;
}



/* icu_76_godot::Normalizer2Factory::getFCCInstance(UErrorCode&) */

long __thiscall
icu_76_godot::Normalizer2Factory::getFCCInstance(Normalizer2Factory *this,UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)this) {
    return 0;
  }
  if (nfcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfcInitOnce);
    if (cVar1 != '\0') {
      nfcSingleton = Norm2AllModes::createNFCInstance((Norm2AllModes *)this,param_1);
      ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
      DAT_001017fc = *(int *)this;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfcInitOnce);
      goto LAB_00100c2e;
    }
  }
  if (0 < DAT_001017fc) {
    *(int *)this = DAT_001017fc;
  }
LAB_00100c2e:
  if (nfcSingleton != 0) {
    return nfcSingleton + 0x40;
  }
  return 0;
}



/* icu_76_godot::Normalizer2Factory::getNFCImpl(UErrorCode&) */

undefined8 __thiscall
icu_76_godot::Normalizer2Factory::getNFCImpl(Normalizer2Factory *this,UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)this) {
    return 0;
  }
  if (nfcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&nfcInitOnce);
    if (cVar1 != '\0') {
      nfcSingleton = (undefined8 *)Norm2AllModes::createNFCInstance((Norm2AllModes *)this,param_1);
      ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
      DAT_001017fc = *(int *)this;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&nfcInitOnce);
      goto LAB_00100cde;
    }
  }
  if (0 < DAT_001017fc) {
    *(int *)this = DAT_001017fc;
  }
LAB_00100cde:
  if (nfcSingleton != (undefined8 *)0x0) {
    return *nfcSingleton;
  }
  return 0;
}



long unorm2_getNFCInstance_76_godot(Norm2AllModes *param_1,UErrorCode *param_2)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (icu_76_godot::nfcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::nfcInitOnce);
    if (cVar1 != '\0') {
      icu_76_godot::nfcSingleton = icu_76_godot::Norm2AllModes::createNFCInstance(param_1,param_2);
      ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
      DAT_001017fc = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::nfcInitOnce);
      goto LAB_00100d8e;
    }
  }
  if (0 < DAT_001017fc) {
    *(int *)param_1 = DAT_001017fc;
  }
LAB_00100d8e:
  if (icu_76_godot::nfcSingleton != 0) {
    return icu_76_godot::nfcSingleton + 8;
  }
  return 0;
}



long unorm2_getNFDInstance_76_godot(Norm2AllModes *param_1,UErrorCode *param_2)

{
  char cVar1;
  
  if (0 < *(int *)param_1) {
    return 0;
  }
  if (icu_76_godot::nfcInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::nfcInitOnce);
    if (cVar1 != '\0') {
      icu_76_godot::nfcSingleton = icu_76_godot::Norm2AllModes::createNFCInstance(param_1,param_2);
      ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
      DAT_001017fc = *(int *)param_1;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::nfcInitOnce);
      goto LAB_00100e3e;
    }
  }
  if (0 < DAT_001017fc) {
    *(int *)param_1 = DAT_001017fc;
  }
LAB_00100e3e:
  if (icu_76_godot::nfcSingleton != 0) {
    return icu_76_godot::nfcSingleton + 0x20;
  }
  return 0;
}



void unorm2_close_76_godot(long *param_1)

{
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100ecc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 8))();
    return;
  }
  return;
}



undefined4
unorm2_normalize_76_godot
          (long *param_1,wchar16 *param_2,uint param_3,wchar16 *param_4,int param_5,int *param_6)

{
  char cVar1;
  undefined4 uVar2;
  long *plVar3;
  wchar16 *pwVar4;
  long in_FS_OFFSET;
  wchar16 *local_108;
  UnicodeString *local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  UnicodeString local_c8 [64];
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 < 1) {
    if (param_2 == (wchar16 *)0x0) {
      if (param_3 == 0) {
        if (param_4 == (wchar16 *)0x0) {
          if (param_5 == 0) goto LAB_00100f8b;
        }
        else if (-1 < param_5) {
LAB_00100f8b:
          icu_76_godot::UnicodeString::UnicodeString(local_c8,param_4,0,param_5);
          goto LAB_00100fa5;
        }
      }
    }
    else if (-2 < (int)param_3) {
      if (param_4 == (wchar16 *)0x0) {
        if (param_5 == 0) goto LAB_00100fd9;
      }
      else if ((-1 < param_5) && (param_2 != param_4)) {
LAB_00100fd9:
        icu_76_godot::UnicodeString::UnicodeString(local_c8,param_4,0,param_5);
        if (param_3 != 0) {
          if ((param_1 == (long *)0x0) ||
             (plVar3 = (long *)__dynamic_cast(param_1,&icu_76_godot::Normalizer2::typeinfo,
                                              &icu_76_godot::Normalizer2WithImpl::typeinfo,0),
             plVar3 == (long *)0x0)) {
            local_108 = param_2;
            icu_76_godot::UnicodeString::UnicodeString
                      (local_88,param_3 == 0xffffffff,&local_108,param_3);
            (**(code **)(*param_1 + 0x18))(param_1,local_88,local_c8,param_6);
            icu_76_godot::UnicodeString::~UnicodeString(local_88);
          }
          else {
            local_108 = (wchar16 *)plVar3[1];
            local_f8 = 0;
            local_f0 = 0;
            local_e8 = 0;
            local_e0 = 0;
            local_dc = 0;
            local_100 = local_c8;
            cVar1 = icu_76_godot::ReorderingBuffer::init
                              ((int)&local_108,(UErrorCode *)(ulong)param_3);
            if (cVar1 != '\0') {
              pwVar4 = (wchar16 *)0x0;
              if (param_3 != 0xffffffff) {
                pwVar4 = param_2 + (int)param_3;
              }
              (**(code **)(*plVar3 + 0x90))(plVar3,param_2,pwVar4,&local_108,param_6);
            }
            if (local_f8 != 0) {
              icu_76_godot::UnicodeString::releaseBuffer((int)local_100);
            }
          }
        }
LAB_00100fa5:
        local_108 = param_4;
        uVar2 = icu_76_godot::UnicodeString::extract(local_c8,&local_108,param_5,param_6);
        icu_76_godot::UnicodeString::~UnicodeString(local_c8);
        goto LAB_00100f4b;
      }
    }
    *param_6 = 1;
  }
  uVar2 = 0;
LAB_00100f4b:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



void unorm2_normalizeSecondAndAppend_76_godot(void)

{
  normalizeSecondAndAppend();
  return;
}



void unorm2_append_76_godot(void)

{
  normalizeSecondAndAppend();
  return;
}



undefined4
unorm2_getDecomposition_76_godot
          (long *param_1,undefined4 param_2,wchar16 *param_3,int param_4,int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  wchar16 *local_90;
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_5 < 1) {
    if (param_3 == (wchar16 *)0x0) {
      if (param_4 == 0) goto LAB_00101224;
    }
    else if (-1 < param_4) {
LAB_00101224:
      icu_76_godot::UnicodeString::UnicodeString(local_88,param_3,0,param_4);
      uVar2 = 0xffffffff;
      cVar1 = (**(code **)(*param_1 + 0x38))(param_1,param_2,local_88);
      if (cVar1 == '\0') {
        icu_76_godot::UnicodeString::~UnicodeString(local_88);
      }
      else {
        local_90 = param_3;
        uVar2 = icu_76_godot::UnicodeString::extract(local_88,&local_90,param_4,param_5);
        icu_76_godot::UnicodeString::~UnicodeString(local_88);
      }
      goto LAB_001011f9;
    }
    *param_5 = 1;
  }
  uVar2 = 0;
LAB_001011f9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4
unorm2_getRawDecomposition_76_godot
          (long *param_1,undefined4 param_2,wchar16 *param_3,int param_4,int *param_5)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  wchar16 *local_90;
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_5 < 1) {
    if (param_3 == (wchar16 *)0x0) {
      if (param_4 == 0) goto LAB_00101304;
    }
    else if (-1 < param_4) {
LAB_00101304:
      icu_76_godot::UnicodeString::UnicodeString(local_88,param_3,0,param_4);
      uVar2 = 0xffffffff;
      cVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2,local_88);
      if (cVar1 == '\0') {
        icu_76_godot::UnicodeString::~UnicodeString(local_88);
      }
      else {
        local_90 = param_3;
        uVar2 = icu_76_godot::UnicodeString::extract(local_88,&local_90,param_4,param_5);
        icu_76_godot::UnicodeString::~UnicodeString(local_88);
      }
      goto LAB_001012d9;
    }
    *param_5 = 1;
  }
  uVar2 = 0;
LAB_001012d9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void unorm2_composePair_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00101377. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x48))();
  return;
}



void unorm2_getCombiningClass_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00101387. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))();
  return;
}



undefined1 unorm2_isNormalized_76_godot(long *param_1,long param_2,int param_3,int *param_4)

{
  undefined1 uVar1;
  long in_FS_OFFSET;
  long local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 1) {
    if ((param_2 != 0 || param_3 == 0) && (-2 < param_3)) {
      local_70 = param_2;
      icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70,param_3);
      uVar1 = (**(code **)(*param_1 + 0x58))(param_1,local_68,param_4);
      icu_76_godot::UnicodeString::~UnicodeString(local_68);
      goto LAB_00101415;
    }
    *param_4 = 1;
  }
  uVar1 = 0;
LAB_00101415:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 unorm2_quickCheck_76_godot(long *param_1,long param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 1) {
    if ((param_2 != 0 || param_3 == 0) && (-2 < param_3)) {
      local_70 = param_2;
      icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70,param_3);
      uVar1 = (**(code **)(*param_1 + 0x68))(param_1,local_68,param_4);
      icu_76_godot::UnicodeString::~UnicodeString(local_68);
      goto LAB_001014c4;
    }
    *param_4 = 1;
  }
  uVar1 = 0;
LAB_001014c4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined4 unorm2_spanQuickCheckYes_76_godot(long *param_1,long param_2,int param_3,int *param_4)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  long local_70;
  UnicodeString local_68 [72];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_4 < 1) {
    if ((param_2 != 0 || param_3 == 0) && (-2 < param_3)) {
      local_70 = param_2;
      icu_76_godot::UnicodeString::UnicodeString(local_68,param_3 == -1,&local_70,param_3);
      uVar1 = (**(code **)(*param_1 + 0x70))(param_1,local_68,param_4);
      icu_76_godot::UnicodeString::~UnicodeString(local_68);
      goto LAB_00101574;
    }
    *param_4 = 1;
  }
  uVar1 = 0;
LAB_00101574:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



void unorm2_hasBoundaryBefore_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001015a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x78))();
  return;
}



void unorm2_hasBoundaryAfter_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001015b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x80))();
  return;
}



void unorm2_isInert_76_godot(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001015c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x88))();
  return;
}



undefined8 u_getCombiningClass_76_godot(undefined4 param_1,UErrorCode *param_2)

{
  char cVar1;
  undefined8 uVar2;
  int iVar3;
  long *plVar4;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  if ((icu_76_godot::nfcInitOnce == 2) ||
     (cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::nfcInitOnce),
     cVar1 == '\0')) {
    iVar3 = local_24;
    if (DAT_001017fc < 1) goto LAB_00101634;
  }
  else {
    icu_76_godot::nfcSingleton =
         (long *)icu_76_godot::Norm2AllModes::createNFCInstance((Norm2AllModes *)&local_24,param_2);
    ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
    iVar3 = local_24;
    DAT_001017fc = local_24;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::nfcInitOnce);
LAB_00101634:
    plVar4 = icu_76_godot::nfcSingleton;
    if (icu_76_godot::nfcSingleton != (long *)0x0) {
      plVar4 = icu_76_godot::nfcSingleton + 4;
    }
    if (iVar3 < 1) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010166b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,param_1);
        return uVar2;
      }
      goto LAB_001016c0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001016c0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined8 unorm_getFCD16_76_godot(uint param_1,UErrorCode *param_2)

{
  byte bVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_24 = 0;
  if ((icu_76_godot::nfcInitOnce == 2) ||
     (cVar2 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&icu_76_godot::nfcInitOnce),
     cVar2 == '\0')) {
    iVar4 = local_24;
    if (DAT_001017fc < 1) goto LAB_00101734;
  }
  else {
    icu_76_godot::nfcSingleton =
         (undefined8 *)
         icu_76_godot::Norm2AllModes::createNFCInstance((Norm2AllModes *)&local_24,param_2);
    ucln_common_registerCleanup_76_godot(0xf,uprv_normalizer2_cleanup);
    iVar4 = local_24;
    DAT_001017fc = local_24;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&icu_76_godot::nfcInitOnce);
LAB_00101734:
    puVar5 = icu_76_godot::nfcSingleton;
    if (icu_76_godot::nfcSingleton != (undefined8 *)0x0) {
      puVar5 = (undefined8 *)*icu_76_godot::nfcSingleton;
    }
    if (((iVar4 < 1) && ((int)(uint)*(ushort *)(puVar5 + 1) <= (int)param_1)) &&
       ((0xffff < (int)param_1 ||
        ((bVar1 = *(byte *)(puVar5[7] + (long)((int)param_1 >> 8)), bVar1 != 0 &&
         ((bVar1 >> (param_1 >> 5 & 7) & 1) != 0)))))) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar3 = icu_76_godot::Normalizer2Impl::getFCD16FromNormData((int)puVar5);
        return uVar3;
      }
      goto LAB_001017f0;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_001017f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer2WithImpl::isNormalized(icu_76_godot::UnicodeString const&, UErrorCode&)
   const */

bool __thiscall
icu_76_godot::Normalizer2WithImpl::isNormalized
          (Normalizer2WithImpl *this,UnicodeString *param_1,UErrorCode *param_2)

{
  ushort uVar1;
  long lVar2;
  UnicodeString *pUVar3;
  UnicodeString *pUVar4;
  
  if (*(int *)param_2 < 1) {
    uVar1 = *(ushort *)(param_1 + 8);
    if (((uVar1 & 0x11) == 0) &&
       ((pUVar4 = param_1 + 10, (uVar1 & 2) != 0 ||
        (pUVar4 = *(UnicodeString **)(param_1 + 0x18), pUVar4 != (UnicodeString *)0x0)))) {
      if ((short)uVar1 < 0) {
        lVar2 = (long)*(int *)(param_1 + 0xc);
      }
      else {
        lVar2 = (long)((short)uVar1 >> 5);
      }
      pUVar3 = (UnicodeString *)
               (**(code **)(*(long *)this + 0xa0))(this,pUVar4,pUVar4 + lVar2 * 2,param_2);
      return pUVar4 + lVar2 * 2 == pUVar3;
    }
    *(undefined4 *)param_2 = 1;
  }
  return false;
}



/* icu_76_godot::Normalizer2WithImpl::spanQuickCheckYes(icu_76_godot::UnicodeString const&,
   UErrorCode&) const */

long __thiscall
icu_76_godot::Normalizer2WithImpl::spanQuickCheckYes
          (Normalizer2WithImpl *this,UnicodeString *param_1,UErrorCode *param_2)

{
  ushort uVar1;
  long lVar2;
  UnicodeString *pUVar3;
  
  if (*(int *)param_2 < 1) {
    uVar1 = *(ushort *)(param_1 + 8);
    if ((uVar1 & 0x11) == 0) {
      pUVar3 = param_1 + 10;
      if (((uVar1 & 2) == 0) &&
         (pUVar3 = *(UnicodeString **)(param_1 + 0x18), pUVar3 == (UnicodeString *)0x0)) {
        *(undefined4 *)param_2 = 1;
        return 0;
      }
      if ((short)uVar1 < 0) {
        lVar2 = (long)*(int *)(param_1 + 0xc);
      }
      else {
        lVar2 = (long)((short)uVar1 >> 5);
      }
      lVar2 = (**(code **)(*(long *)this + 0xa0))(this,pUVar3,pUVar3 + lVar2 * 2,param_2);
      return lVar2 - (long)pUVar3 >> 1;
    }
    *(undefined4 *)param_2 = 1;
  }
  return 0;
}



/* icu_76_godot::Normalizer2WithImpl::getQuickCheck(int) const */

undefined8 icu_76_godot::Normalizer2WithImpl::getQuickCheck(int param_1)

{
  return 1;
}



/* icu_76_godot::NoopNormalizer2::getDecomposition(int, icu_76_godot::UnicodeString&) const */

undefined8 icu_76_godot::NoopNormalizer2::getDecomposition(int param_1,UnicodeString *param_2)

{
  return 0;
}



/* icu_76_godot::NoopNormalizer2::isNormalized(icu_76_godot::UnicodeString const&, UErrorCode&)
   const */

undefined4 __thiscall
icu_76_godot::NoopNormalizer2::isNormalized
          (NoopNormalizer2 *this,UnicodeString *param_1,UErrorCode *param_2)

{
  return CONCAT31((int3)((uint)*(int *)param_2 >> 8),*(int *)param_2 < 1);
}



/* icu_76_godot::NoopNormalizer2::isNormalizedUTF8(icu_76_godot::StringPiece, UErrorCode&) const */

undefined4 icu_76_godot::NoopNormalizer2::isNormalizedUTF8(void)

{
  int *in_RCX;
  
  return CONCAT31((int3)((uint)*in_RCX >> 8),*in_RCX < 1);
}



/* icu_76_godot::NoopNormalizer2::quickCheck(icu_76_godot::UnicodeString const&, UErrorCode&) const
    */

undefined8 icu_76_godot::NoopNormalizer2::quickCheck(UnicodeString *param_1,UErrorCode *param_2)

{
  return 1;
}



/* icu_76_godot::NoopNormalizer2::spanQuickCheckYes(icu_76_godot::UnicodeString const&, UErrorCode&)
   const */

int icu_76_godot::NoopNormalizer2::spanQuickCheckYes(UnicodeString *param_1,UErrorCode *param_2)

{
  if (-1 < *(short *)(param_2 + 8)) {
    return (int)(*(short *)(param_2 + 8) >> 5);
  }
  return *(int *)(param_2 + 0xc);
}



/* icu_76_godot::NoopNormalizer2::hasBoundaryBefore(int) const */

undefined8 icu_76_godot::NoopNormalizer2::hasBoundaryBefore(int param_1)

{
  return 1;
}



/* icu_76_godot::NoopNormalizer2::hasBoundaryAfter(int) const */

undefined8 icu_76_godot::NoopNormalizer2::hasBoundaryAfter(int param_1)

{
  return 1;
}



/* icu_76_godot::NoopNormalizer2::isInert(int) const */

undefined8 icu_76_godot::NoopNormalizer2::isInert(int param_1)

{
  return 1;
}



/* icu_76_godot::FCDNormalizer2::normalize(char16_t const*, char16_t const*,
   icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

void icu_76_godot::FCDNormalizer2::normalize
               (wchar16 *param_1,wchar16 *param_2,ReorderingBuffer *param_3,UErrorCode *param_4)

{
  icu_76_godot::Normalizer2Impl::makeFCD(*(wchar16 **)(param_1 + 4),param_2,param_3,param_4);
  return;
}



/* icu_76_godot::FCDNormalizer2::spanQuickCheckYes(char16_t const*, char16_t const*, UErrorCode&)
   const */

void icu_76_godot::FCDNormalizer2::spanQuickCheckYes
               (wchar16 *param_1,wchar16 *param_2,UErrorCode *param_3)

{
  icu_76_godot::Normalizer2Impl::makeFCD
            (*(wchar16 **)(param_1 + 4),param_2,(ReorderingBuffer *)param_3,(UErrorCode *)0x0);
  return;
}



/* icu_76_godot::ComposeNormalizer2::normalize(char16_t const*, char16_t const*,
   icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

void __thiscall
icu_76_godot::ComposeNormalizer2::normalize
          (ComposeNormalizer2 *this,wchar16 *param_1,wchar16 *param_2,ReorderingBuffer *param_3,
          UErrorCode *param_4)

{
  icu_76_godot::Normalizer2Impl::compose
            (*(undefined8 *)(this + 8),param_1,param_2,(int)(char)this[0x10],1,param_3,param_4);
  return;
}



/* icu_76_godot::DecomposeNormalizer2::normalize(char16_t const*, char16_t const*,
   icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

void icu_76_godot::DecomposeNormalizer2::normalize
               (wchar16 *param_1,wchar16 *param_2,ReorderingBuffer *param_3,UErrorCode *param_4)

{
  icu_76_godot::Normalizer2Impl::decompose(*(wchar16 **)(param_1 + 4),param_2,param_3,param_4);
  return;
}



/* icu_76_godot::DecomposeNormalizer2::spanQuickCheckYes(char16_t const*, char16_t const*,
   UErrorCode&) const */

void icu_76_godot::DecomposeNormalizer2::spanQuickCheckYes
               (wchar16 *param_1,wchar16 *param_2,UErrorCode *param_3)

{
  icu_76_godot::Normalizer2Impl::decompose
            (*(wchar16 **)(param_1 + 4),param_2,(ReorderingBuffer *)param_3,(UErrorCode *)0x0);
  return;
}



/* icu_76_godot::ComposeNormalizer2::spanQuickCheckYes(char16_t const*, char16_t const*,
   UErrorCode&) const */

void icu_76_godot::ComposeNormalizer2::spanQuickCheckYes
               (wchar16 *param_1,wchar16 *param_2,UErrorCode *param_3)

{
  icu_76_godot::Normalizer2Impl::composeQuickCheck
            (*(undefined8 *)(param_1 + 4),param_2,param_3,(int)(char)param_1[8],0);
  return;
}



/* icu_76_godot::ComposeNormalizer2::quickCheck(icu_76_godot::UnicodeString const&, UErrorCode&)
   const */

undefined4 __thiscall
icu_76_godot::ComposeNormalizer2::quickCheck
          (ComposeNormalizer2 *this,UnicodeString *param_1,UErrorCode *param_2)

{
  ushort uVar1;
  undefined4 uVar2;
  long lVar3;
  UnicodeString *pUVar4;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    uVar1 = *(ushort *)(param_1 + 8);
    if (((uVar1 & 0x11) == 0) &&
       ((pUVar4 = param_1 + 10, (uVar1 & 2) != 0 ||
        (pUVar4 = *(UnicodeString **)(param_1 + 0x18), pUVar4 != (UnicodeString *)0x0)))) {
      local_14 = 1;
      if ((short)uVar1 < 0) {
        lVar3 = (long)*(int *)(param_1 + 0xc);
      }
      else {
        lVar3 = (long)((short)uVar1 >> 5);
      }
      icu_76_godot::Normalizer2Impl::composeQuickCheck
                (*(undefined8 *)(this + 8),pUVar4,pUVar4 + lVar3 * 2,(int)(char)this[0x10],&local_14
                );
      uVar2 = local_14;
      goto LAB_00101acc;
    }
    *(undefined4 *)param_2 = 1;
  }
  uVar2 = 2;
LAB_00101acc:
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::FCDNormalizer2::normalizeAndAppend(char16_t const*, char16_t const*, signed char,
   icu_76_godot::UnicodeString&, icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

void icu_76_godot::FCDNormalizer2::normalizeAndAppend
               (long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  icu_76_godot::Normalizer2Impl::makeFCDAndAppend
            (*(undefined8 *)(param_1 + 8),param_2,param_3,(int)param_4);
  return;
}



/* icu_76_godot::ComposeNormalizer2::normalizeAndAppend(char16_t const*, char16_t const*, signed
   char, icu_76_godot::UnicodeString&, icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

void __thiscall
icu_76_godot::ComposeNormalizer2::normalizeAndAppend
          (ComposeNormalizer2 *this,undefined8 param_1,undefined8 param_2,char param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  icu_76_godot::Normalizer2Impl::composeAndAppend
            (*(undefined8 *)(this + 8),param_1,param_2,(int)param_4,(int)(char)this[0x10],param_5,
             param_6,param_7);
  return;
}



/* icu_76_godot::DecomposeNormalizer2::normalizeAndAppend(char16_t const*, char16_t const*, signed
   char, icu_76_godot::UnicodeString&, icu_76_godot::ReorderingBuffer&, UErrorCode&) const */

void icu_76_godot::DecomposeNormalizer2::normalizeAndAppend
               (long param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  icu_76_godot::Normalizer2Impl::decomposeAndAppend
            (*(undefined8 *)(param_1 + 8),param_2,param_3,(int)param_4);
  return;
}



/* icu_76_godot::Normalizer2WithImpl::composePair(int, int) const */

void icu_76_godot::Normalizer2WithImpl::composePair(int param_1,int param_2)

{
  undefined4 in_register_0000003c;
  
  icu_76_godot::Normalizer2Impl::composePair
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 8),param_2);
  return;
}



/* icu_76_godot::DecomposeNormalizer2::hasBoundaryBefore(int) const */

void icu_76_godot::DecomposeNormalizer2::hasBoundaryBefore(int param_1)

{
  undefined4 in_register_0000003c;
  
  icu_76_godot::Normalizer2Impl::hasDecompBoundaryBefore
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 8));
  return;
}



/* icu_76_godot::FCDNormalizer2::hasBoundaryBefore(int) const */

void icu_76_godot::FCDNormalizer2::hasBoundaryBefore(int param_1)

{
  undefined4 in_register_0000003c;
  
  icu_76_godot::Normalizer2Impl::hasDecompBoundaryBefore
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 8));
  return;
}



/* icu_76_godot::DecomposeNormalizer2::hasBoundaryAfter(int) const */

void icu_76_godot::DecomposeNormalizer2::hasBoundaryAfter(int param_1)

{
  undefined4 in_register_0000003c;
  
  icu_76_godot::Normalizer2Impl::hasDecompBoundaryAfter
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 8));
  return;
}



/* icu_76_godot::FCDNormalizer2::hasBoundaryAfter(int) const */

void icu_76_godot::FCDNormalizer2::hasBoundaryAfter(int param_1)

{
  undefined4 in_register_0000003c;
  
  icu_76_godot::Normalizer2Impl::hasDecompBoundaryAfter
            ((int)*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 8));
  return;
}



/* icu_76_godot::ComposeNormalizer2::isNormalizedUTF8(icu_76_godot::StringPiece, UErrorCode&) const
    */

undefined8
icu_76_godot::ComposeNormalizer2::isNormalizedUTF8
          (long param_1,long param_2,int param_3,int *param_4)

{
  undefined8 uVar1;
  
  if (0 < *param_4) {
    return 0;
  }
  uVar1 = icu_76_godot::Normalizer2Impl::composeUTF8
                    (*(undefined8 *)(param_1 + 8),0,(int)*(char *)(param_1 + 0x10),param_2,
                     param_2 + param_3,0,0,param_4);
  return uVar1;
}



/* icu_76_godot::ComposeNormalizer2::normalizeUTF8(unsigned int, icu_76_godot::StringPiece,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) const */

void icu_76_godot::ComposeNormalizer2::normalizeUTF8
               (long param_1,ulong param_2,long param_3,int param_4,long *param_5,long param_6,
               int *param_7)

{
  if (*param_7 < 1) {
    if ((param_6 != 0) && ((param_2 & 0x2000) == 0)) {
      icu_76_godot::Edits::reset();
      param_2 = param_2 & 0xffffffff;
    }
    icu_76_godot::Normalizer2Impl::composeUTF8
              (*(undefined8 *)(param_1 + 8),param_2,(int)*(char *)(param_1 + 0x10),param_3,
               param_3 + param_4,param_5,param_6,param_7);
                    /* WARNING: Could not recover jumptable at 0x00101c55. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_5 + 0x20))(param_5);
    return;
  }
  return;
}



/* icu_76_godot::DecomposeNormalizer2::isNormalizedUTF8(icu_76_godot::StringPiece, UErrorCode&)
   const */

undefined1  [16]
icu_76_godot::DecomposeNormalizer2::isNormalizedUTF8
          (long param_1,uchar *param_2,ulong param_3,int *param_4)

{
  undefined1 auVar1 [16];
  ByteSink *pBVar2;
  undefined1 auVar3 [16];
  
  if (0 < *param_4) {
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_3;
    return auVar1 << 0x40;
  }
  pBVar2 = (ByteSink *)
           icu_76_godot::Normalizer2Impl::decomposeUTF8
                     ((uint)*(undefined8 *)(param_1 + 8),(uchar *)0x0,param_2,
                      (ByteSink *)(param_2 + (int)param_3),(Edits *)0x0,(UErrorCode *)0x0);
  auVar3._1_7_ = (undefined7)((ulong)pBVar2 >> 8);
  auVar3[0] = (ByteSink *)(param_2 + (int)param_3) == pBVar2;
  auVar3._8_8_ = param_4;
  return auVar3;
}



/* icu_76_godot::DecomposeNormalizer2::normalizeUTF8(unsigned int, icu_76_godot::StringPiece,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) const */

void icu_76_godot::DecomposeNormalizer2::normalizeUTF8
               (long param_1,uchar *param_2,uchar *param_3,int param_4,Edits *param_5,
               UErrorCode *param_6,int *param_7)

{
  if (*param_7 < 1) {
    if ((param_6 != (UErrorCode *)0x0) && (((ulong)param_2 & 0x2000) == 0)) {
      icu_76_godot::Edits::reset();
      param_2 = (uchar *)((ulong)param_2 & 0xffffffff);
    }
    icu_76_godot::Normalizer2Impl::decomposeUTF8
              ((uint)*(undefined8 *)(param_1 + 8),param_2,param_3,(ByteSink *)(param_3 + param_4),
               param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x00101d36. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_5 + 0x20))(param_5);
    return;
  }
  return;
}



/* icu_76_godot::NoopNormalizer2::normalize(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::NoopNormalizer2::normalize
          (NoopNormalizer2 *this,UnicodeString *param_1,UnicodeString *param_2,UErrorCode *param_3)

{
  if (0 < *(int *)param_3) {
    return param_2;
  }
  if (param_2 != param_1) {
    icu_76_godot::UnicodeString::operator=(param_2,param_1);
    return param_2;
  }
  *(undefined4 *)param_3 = 1;
  return param_2;
}



/* icu_76_godot::NoopNormalizer2::normalizeUTF8(unsigned int, icu_76_godot::StringPiece,
   icu_76_godot::ByteSink&, icu_76_godot::Edits*, UErrorCode&) const */

void icu_76_godot::NoopNormalizer2::normalizeUTF8
               (undefined8 param_1,uint param_2,undefined8 param_3,undefined4 param_4,long *param_5,
               long param_6,int *param_7)

{
  if (0 < *param_7) {
    return;
  }
  if (param_6 != 0) {
    if ((param_2 & 0x2000) == 0) {
      icu_76_godot::Edits::reset();
    }
    icu_76_godot::Edits::addUnchanged((int)param_6);
  }
  if ((param_2 & 0x4000) == 0) {
    (**(code **)(*param_5 + 0x10))(param_5,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00101e37. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_5 + 0x20))(param_5);
  return;
}



/* icu_76_godot::ComposeNormalizer2::hasBoundaryBefore(int) const */

bool __thiscall
icu_76_godot::ComposeNormalizer2::hasBoundaryBefore(ComposeNormalizer2 *this,int param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  ushort uVar6;
  
  lVar1 = *(long *)(this + 8);
  if ((int)(uint)*(ushort *)(lVar1 + 10) <= param_1) {
    uVar6 = 1;
    if ((param_1 & 0xfffffc00U) != 0xd800) {
      plVar2 = *(long **)(lVar1 + 0x28);
      lVar3 = plVar2[1];
      if ((uint)param_1 < 0x10000) {
        lVar5 = (long)(int)((uint)*(ushort *)(*plVar2 + (long)(param_1 >> 6) * 2) +
                           (param_1 & 0x3fU)) * 2;
      }
      else if ((uint)param_1 < 0x110000) {
        if (param_1 < (int)plVar2[3]) {
          iVar4 = ucptrie_internalSmallIndex_76_godot();
          lVar5 = (long)iVar4 * 2;
        }
        else {
          lVar5 = (long)(*(int *)((long)plVar2 + 0x14) + -2) * 2;
        }
      }
      else {
        lVar5 = (long)(*(int *)((long)plVar2 + 0x14) + -1) * 2;
      }
      uVar6 = *(ushort *)(lVar3 + lVar5);
    }
    if (*(ushort *)(lVar1 + 0x16) <= uVar6) {
      if (uVar6 < *(ushort *)(lVar1 + 0x1a)) {
        return false;
      }
      return uVar6 < *(ushort *)(lVar1 + 0x1e);
    }
  }
  return true;
}



/* icu_76_godot::NoopNormalizer2::append(icu_76_godot::UnicodeString&, icu_76_godot::UnicodeString
   const&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::NoopNormalizer2::append
          (NoopNormalizer2 *this,UnicodeString *param_1,UnicodeString *param_2,UErrorCode *param_3)

{
  if (0 < *(int *)param_3) {
    return param_1;
  }
  if (param_1 != param_2) {
    icu_76_godot::UnicodeString::doAppend(param_1,(int)param_2,0);
    return param_1;
  }
  *(undefined4 *)param_3 = 1;
  return param_1;
}



/* icu_76_godot::Normalizer2WithImpl::getRawDecomposition(int, icu_76_godot::UnicodeString&) const
    */

undefined8 __thiscall
icu_76_godot::Normalizer2WithImpl::getRawDecomposition
          (Normalizer2WithImpl *this,int param_1,UnicodeString *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined4 local_74;
  int *local_70;
  int local_68 [18];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)icu_76_godot::Normalizer2Impl::getRawDecomposition
                            ((int)*(undefined8 *)(this + 8),
                             (wchar16 *)CONCAT44(in_register_00000034,param_1),local_68);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    if (piVar1 == local_68) {
      icu_76_godot::UnicodeString::unBogus();
      if (*(short *)(param_2 + 8) < 0) {
        uVar3 = *(uint *)(param_2 + 0xc);
      }
      else {
        uVar3 = (uint)(*(short *)(param_2 + 8) >> 5);
      }
      icu_76_godot::UnicodeString::doReplace((int)param_2,0,(wchar16 *)(ulong)uVar3,(int)local_68,0)
      ;
    }
    else {
      local_70 = piVar1;
      icu_76_godot::UnicodeString::setTo(param_2,0,&local_70,local_74);
    }
    uVar2 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::NoopNormalizer2::normalizeSecondAndAppend(icu_76_godot::UnicodeString&,
   icu_76_godot::UnicodeString const&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::NoopNormalizer2::normalizeSecondAndAppend
          (NoopNormalizer2 *this,UnicodeString *param_1,UnicodeString *param_2,UErrorCode *param_3)

{
  if (0 < *(int *)param_3) {
    return param_1;
  }
  if (param_1 != param_2) {
    icu_76_godot::UnicodeString::doAppend(param_1,(int)param_2,0);
    return param_1;
  }
  *(undefined4 *)param_3 = 1;
  return param_1;
}



/* icu_76_godot::Normalizer2WithImpl::getDecomposition(int, icu_76_godot::UnicodeString&) const */

undefined8 __thiscall
icu_76_godot::Normalizer2WithImpl::getDecomposition
          (Normalizer2WithImpl *this,int param_1,UnicodeString *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  uint uVar3;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined4 local_34;
  int *local_30;
  int local_28 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  piVar1 = (int *)icu_76_godot::Normalizer2Impl::getDecomposition
                            ((int)*(undefined8 *)(this + 8),
                             (wchar16 *)CONCAT44(in_register_00000034,param_1),local_28);
  if (piVar1 == (int *)0x0) {
    uVar2 = 0;
  }
  else {
    if (piVar1 == local_28) {
      icu_76_godot::UnicodeString::unBogus();
      if (*(short *)(param_2 + 8) < 0) {
        uVar3 = *(uint *)(param_2 + 0xc);
      }
      else {
        uVar3 = (uint)(*(short *)(param_2 + 8) >> 5);
      }
      icu_76_godot::UnicodeString::doReplace((int)param_2,0,(wchar16 *)(ulong)uVar3,(int)local_28,0)
      ;
    }
    else {
      local_30 = piVar1;
      icu_76_godot::UnicodeString::setTo(param_2,0,&local_30,local_34);
    }
    uVar2 = 1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::FCDNormalizer2::isInert(int) const */

bool __thiscall icu_76_godot::FCDNormalizer2::isInert(FCDNormalizer2 *this,int param_1)

{
  byte bVar1;
  long lVar2;
  ushort uVar3;
  
  lVar2 = *(long *)(this + 8);
  if (((int)(uint)*(ushort *)(lVar2 + 8) <= param_1) &&
     ((0xffff < param_1 ||
      ((bVar1 = *(byte *)(*(long *)(lVar2 + 0x38) + (long)(param_1 >> 8)), bVar1 != 0 &&
       ((bVar1 >> ((uint)param_1 >> 5 & 7) & 1) != 0)))))) {
    uVar3 = icu_76_godot::Normalizer2Impl::getFCD16FromNormData((int)lVar2);
    return uVar3 < 2;
  }
  return true;
}



/* icu_76_godot::Normalizer2WithImpl::quickCheck(icu_76_godot::UnicodeString const&, UErrorCode&)
   const */

bool __thiscall
icu_76_godot::Normalizer2WithImpl::quickCheck
          (Normalizer2WithImpl *this,UnicodeString *param_1,UErrorCode *param_2)

{
  ushort uVar1;
  long lVar2;
  UnicodeString *pUVar3;
  UnicodeString *pUVar4;
  
  if (*(int *)param_2 < 1) {
    uVar1 = *(ushort *)(param_1 + 8);
    if (((uVar1 & 0x11) == 0) &&
       ((pUVar4 = param_1 + 10, (uVar1 & 2) != 0 ||
        (pUVar4 = *(UnicodeString **)(param_1 + 0x18), pUVar4 != (UnicodeString *)0x0)))) {
      if ((short)uVar1 < 0) {
        lVar2 = (long)*(int *)(param_1 + 0xc);
      }
      else {
        lVar2 = (long)((short)uVar1 >> 5);
      }
      pUVar3 = (UnicodeString *)
               (**(code **)(*(long *)this + 0xa0))(this,pUVar4,pUVar4 + lVar2 * 2,param_2);
      return pUVar4 + lVar2 * 2 == pUVar3;
    }
    *(undefined4 *)param_2 = 1;
  }
  return false;
}



/* icu_76_godot::Normalizer2WithImpl::normalize(icu_76_godot::UnicodeString const&,
   icu_76_godot::UnicodeString&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::Normalizer2WithImpl::normalize
          (Normalizer2WithImpl *this,UnicodeString *param_1,UnicodeString *param_2,
          UErrorCode *param_3)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  UnicodeString *pUVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  UnicodeString *pUStack_80;
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined4 local_60;
  undefined1 local_5c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    if ((*(ushort *)(param_1 + 8) & 0x11) == 0) {
      pUVar5 = param_1 + 10;
      if ((*(ushort *)(param_1 + 8) & 2) == 0) {
        pUVar5 = *(UnicodeString **)(param_1 + 0x18);
      }
      if ((param_1 != param_2) && (pUVar5 != (UnicodeString *)0x0)) {
        local_88 = *(undefined8 *)(this + 8);
        local_68 = 0;
        local_60 = 0;
        local_5c = 0;
        uVar2 = *(ushort *)(param_2 + 8) & 0x1f;
        if ((*(ushort *)(param_2 + 8) & 1) != 0) {
          uVar2 = 2;
        }
        local_78 = (undefined1  [16])0x0;
        *(ushort *)(param_2 + 8) = uVar2;
        if (*(short *)(param_1 + 8) < 0) {
          uVar4 = *(uint *)(param_1 + 0xc);
        }
        else {
          uVar4 = (uint)(*(short *)(param_1 + 8) >> 5);
        }
        pUStack_80 = param_2;
        cVar1 = icu_76_godot::ReorderingBuffer::init((int)&local_88,(UErrorCode *)(ulong)uVar4);
        if (cVar1 != '\0') {
          if (*(short *)(param_1 + 8) < 0) {
            lVar3 = (long)*(int *)(param_1 + 0xc);
          }
          else {
            lVar3 = (long)(*(short *)(param_1 + 8) >> 5);
          }
          (**(code **)(*(long *)this + 0x90))(this,pUVar5,pUVar5 + lVar3 * 2,&local_88,param_3);
        }
        if (local_78._0_8_ != 0) {
          icu_76_godot::UnicodeString::releaseBuffer((int)pUStack_80);
        }
        goto LAB_00102374;
      }
    }
    *(undefined4 *)param_3 = 1;
  }
  icu_76_godot::UnicodeString::setToBogus();
LAB_00102374:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ComposeNormalizer2::isNormalized(icu_76_godot::UnicodeString const&, UErrorCode&)
   const */

undefined4 __thiscall
icu_76_godot::ComposeNormalizer2::isNormalized
          (ComposeNormalizer2 *this,UnicodeString *param_1,UErrorCode *param_2)

{
  undefined4 uVar1;
  long lVar2;
  UnicodeString *pUVar3;
  long in_FS_OFFSET;
  undefined8 local_c8;
  UnicodeString *local_c0;
  long local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  code *local_88;
  undefined2 local_80;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    if (((*(ushort *)(param_1 + 8) & 0x11) == 0) &&
       ((pUVar3 = param_1 + 10, (*(ushort *)(param_1 + 8) & 2) != 0 ||
        (pUVar3 = *(UnicodeString **)(param_1 + 0x18), pUVar3 != (UnicodeString *)0x0)))) {
      local_88 = icu_76_godot::Normalizer2Impl::makeFCD;
      local_c8 = *(undefined8 *)(this + 8);
      local_80 = 2;
      local_b8 = 0;
      local_b0 = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_9c = 0;
      local_c0 = (UnicodeString *)&local_88;
      uVar1 = icu_76_godot::ReorderingBuffer::init((int)&local_c8,(UErrorCode *)0x5);
      if ((char)uVar1 != '\0') {
        if (*(short *)(param_1 + 8) < 0) {
          lVar2 = (long)*(int *)(param_1 + 0xc);
        }
        else {
          lVar2 = (long)(*(short *)(param_1 + 8) >> 5);
        }
        uVar1 = icu_76_godot::Normalizer2Impl::compose
                          (*(undefined8 *)(this + 8),pUVar3,pUVar3 + lVar2 * 2,(int)(char)this[0x10]
                           ,0,&local_c8,param_2);
      }
      if (local_b8 != 0) {
        icu_76_godot::UnicodeString::releaseBuffer((int)local_c0);
      }
      icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
      goto LAB_00102521;
    }
    *(undefined4 *)param_2 = 1;
  }
  uVar1 = 0;
LAB_00102521:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Normalizer2WithImpl::normalizeSecondAndAppend(icu_76_godot::UnicodeString&,
   icu_76_godot::UnicodeString const&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::Normalizer2WithImpl::normalizeSecondAndAppend
          (Normalizer2WithImpl *this,UnicodeString *param_1,UnicodeString *param_2,
          UErrorCode *param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  UnicodeString *pUVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_c8;
  UnicodeString *pUStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  code *local_88;
  short local_80;
  int local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    uVar1 = *(ushort *)(param_1 + 8);
    if (((uVar1 & 1) == 0) && (uVar2 = *(ushort *)(param_2 + 8), (uVar2 & 0x11) == 0)) {
      pUVar6 = param_2 + 10;
      if ((uVar2 & 2) == 0) {
        pUVar6 = *(UnicodeString **)(param_2 + 0x18);
      }
      if ((param_1 != param_2) && (pUVar6 != (UnicodeString *)0x0)) {
        if ((short)uVar1 < 0) {
          iVar7 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar7 = (int)((short)uVar1 >> 5);
        }
        local_c8 = *(undefined8 *)(this + 8);
        local_88 = icu_76_godot::Normalizer2Impl::makeFCD;
        local_80 = 2;
        local_a8 = 0;
        local_a0 = 0;
        local_9c = 0;
        local_b8 = (undefined1  [16])0x0;
        if ((short)uVar2 < 0) {
          iVar5 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar5 = (int)((short)uVar2 >> 5);
        }
        pUStack_c0 = param_1;
        cVar3 = icu_76_godot::ReorderingBuffer::init
                          ((int)&local_c8,(UErrorCode *)(ulong)(uint)(iVar5 + iVar7));
        if (cVar3 != '\0') {
          if (*(short *)(param_2 + 8) < 0) {
            lVar4 = (long)*(int *)(param_2 + 0xc);
          }
          else {
            lVar4 = (long)(*(short *)(param_2 + 8) >> 5);
          }
          (**(code **)(*(long *)this + 0x98))
                    (this,pUVar6,pUVar6 + lVar4 * 2,1,&local_88,&local_c8,param_3);
        }
        if (local_b8._0_8_ != 0) {
          icu_76_godot::UnicodeString::releaseBuffer((int)pUStack_c0);
        }
        if (0 < *(int *)param_3) {
          if (-1 < local_80) {
            local_7c = (int)(local_80 >> 5);
          }
          icu_76_godot::UnicodeString::doReplace
                    ((int)param_1,iVar7 - local_7c,(UnicodeString *)0x7fffffff,
                     (int)(UnicodeString *)&local_88,0);
        }
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
        goto LAB_001025a3;
      }
    }
    *(undefined4 *)param_3 = 1;
  }
LAB_001025a3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::DecomposeNormalizer2::getQuickCheck(int) const */

bool __thiscall
icu_76_godot::DecomposeNormalizer2::getQuickCheck(DecomposeNormalizer2 *this,int param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  bool bVar7;
  
  uVar4 = 1;
  lVar1 = *(long *)(this + 8);
  if ((param_1 & 0xfffffc00U) != 0xd800) {
    plVar2 = *(long **)(lVar1 + 0x28);
    lVar3 = plVar2[1];
    if ((uint)param_1 < 0x10000) {
      lVar6 = (long)(int)((uint)*(ushort *)(*plVar2 + (long)(param_1 >> 6) * 2) + (param_1 & 0x3fU))
              * 2;
    }
    else if ((uint)param_1 < 0x110000) {
      if (param_1 < (int)plVar2[3]) {
        iVar5 = ucptrie_internalSmallIndex_76_godot();
        lVar6 = (long)iVar5 * 2;
      }
      else {
        lVar6 = (long)(*(int *)((long)plVar2 + 0x14) + -2) * 2;
      }
    }
    else {
      lVar6 = (long)(*(int *)((long)plVar2 + 0x14) + -1) * 2;
    }
    uVar4 = *(ushort *)(lVar3 + lVar6);
  }
  bVar7 = true;
  if (*(ushort *)(lVar1 + 0xe) <= uVar4) {
    bVar7 = *(ushort *)(lVar1 + 0x22) <= uVar4;
  }
  return bVar7;
}



/* icu_76_godot::ComposeNormalizer2::getQuickCheck(int) const */

char __thiscall
icu_76_godot::ComposeNormalizer2::getQuickCheck(ComposeNormalizer2 *this,int param_1)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  ushort uVar4;
  int iVar5;
  long lVar6;
  
  lVar1 = *(long *)(this + 8);
  plVar2 = *(long **)(lVar1 + 0x28);
  if ((param_1 & 0xfffffc00U) == 0xd800) {
    uVar4 = 1;
    if (*(ushort *)(lVar1 + 0x12) < 2) goto LAB_001028e4;
  }
  else {
    lVar3 = plVar2[1];
    if ((uint)param_1 < 0x10000) {
      lVar6 = (long)(int)((uint)*(ushort *)(*plVar2 + (long)(param_1 >> 6) * 2) + (param_1 & 0x3fU))
              * 2;
    }
    else if ((uint)param_1 < 0x110000) {
      if (param_1 < (int)plVar2[3]) {
        iVar5 = ucptrie_internalSmallIndex_76_godot();
        lVar6 = (long)iVar5 * 2;
      }
      else {
        lVar6 = (long)(*(int *)((long)plVar2 + 0x14) + -2) * 2;
      }
    }
    else {
      lVar6 = (long)(*(int *)((long)plVar2 + 0x14) + -1) * 2;
    }
    uVar4 = *(ushort *)(lVar3 + lVar6);
    if ((*(ushort *)(lVar1 + 0x12) <= uVar4) && (uVar4 < 0xfe02)) {
LAB_001028e4:
      return (*(ushort *)(lVar1 + 0x1e) <= uVar4) * '\x02';
    }
  }
  return '\x01';
}



/* icu_76_godot::DecomposeNormalizer2::isInert(int) const */

uint icu_76_godot::DecomposeNormalizer2::isInert(int param_1)

{
  ushort uVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long in_RDX;
  long extraout_RDX;
  uint in_ESI;
  undefined4 in_register_0000003c;
  
  lVar2 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
  plVar3 = *(long **)(lVar2 + 0x28);
  if ((in_ESI & 0xfffffc00) == 0xd800) {
    if (*(ushort *)(lVar2 + 0xe) < 2) {
      uVar8 = 1;
      uVar7 = 1;
      goto LAB_001029c1;
    }
  }
  else {
    lVar4 = plVar3[1];
    if (in_ESI < 0x10000) {
      in_RDX = *plVar3;
      lVar6 = (long)(int)((uint)*(ushort *)(in_RDX + (long)((int)in_ESI >> 6) * 2) + (in_ESI & 0x3f)
                         ) * 2;
    }
    else if (in_ESI < 0x110000) {
      if ((int)in_ESI < (int)plVar3[3]) {
        iVar5 = ucptrie_internalSmallIndex_76_godot();
        lVar6 = (long)iVar5 * 2;
        in_RDX = extraout_RDX;
      }
      else {
        lVar6 = (long)(*(int *)((long)plVar3 + 0x14) + -2) * 2;
      }
    }
    else {
      lVar6 = (long)(*(int *)((long)plVar3 + 0x14) + -1) * 2;
    }
    uVar1 = *(ushort *)(lVar4 + lVar6);
    uVar7 = (ulong)uVar1;
    if ((*(ushort *)(lVar2 + 0xe) <= uVar1) &&
       (uVar8 = (uint)CONCAT71((int7)((ulong)in_RDX >> 8),uVar1 < 0xfc01), uVar1 != 0xfe00)) {
LAB_001029c1:
      return (uint)CONCAT71((int7)(uVar7 >> 8),*(ushort *)(lVar2 + 0x22) <= (ushort)uVar7) & uVar8;
    }
  }
  return 1;
}



/* icu_76_godot::Normalizer2WithImpl::append(icu_76_godot::UnicodeString&,
   icu_76_godot::UnicodeString const&, UErrorCode&) const */

UnicodeString * __thiscall
icu_76_godot::Normalizer2WithImpl::append
          (Normalizer2WithImpl *this,UnicodeString *param_1,UnicodeString *param_2,
          UErrorCode *param_3)

{
  ushort uVar1;
  ushort uVar2;
  char cVar3;
  long lVar4;
  int iVar5;
  UnicodeString *pUVar6;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_c8;
  UnicodeString *pUStack_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  code *local_88;
  short local_80;
  int local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    uVar1 = *(ushort *)(param_1 + 8);
    if (((uVar1 & 1) == 0) && (uVar2 = *(ushort *)(param_2 + 8), (uVar2 & 0x11) == 0)) {
      pUVar6 = param_2 + 10;
      if ((uVar2 & 2) == 0) {
        pUVar6 = *(UnicodeString **)(param_2 + 0x18);
      }
      if ((param_1 != param_2) && (pUVar6 != (UnicodeString *)0x0)) {
        if ((short)uVar1 < 0) {
          iVar7 = *(int *)(param_1 + 0xc);
        }
        else {
          iVar7 = (int)((short)uVar1 >> 5);
        }
        local_c8 = *(undefined8 *)(this + 8);
        local_88 = icu_76_godot::Normalizer2Impl::makeFCD;
        local_80 = 2;
        local_a8 = 0;
        local_a0 = 0;
        local_9c = 0;
        local_b8 = (undefined1  [16])0x0;
        if ((short)uVar2 < 0) {
          iVar5 = *(int *)(param_2 + 0xc);
        }
        else {
          iVar5 = (int)((short)uVar2 >> 5);
        }
        pUStack_c0 = param_1;
        cVar3 = icu_76_godot::ReorderingBuffer::init
                          ((int)&local_c8,(UErrorCode *)(ulong)(uint)(iVar5 + iVar7));
        if (cVar3 != '\0') {
          if (*(short *)(param_2 + 8) < 0) {
            lVar4 = (long)*(int *)(param_2 + 0xc);
          }
          else {
            lVar4 = (long)(*(short *)(param_2 + 8) >> 5);
          }
          (**(code **)(*(long *)this + 0x98))
                    (this,pUVar6,pUVar6 + lVar4 * 2,0,&local_88,&local_c8,param_3);
        }
        if (local_b8._0_8_ != 0) {
          icu_76_godot::UnicodeString::releaseBuffer((int)pUStack_c0);
        }
        if (0 < *(int *)param_3) {
          if (-1 < local_80) {
            local_7c = (int)(local_80 >> 5);
          }
          icu_76_godot::UnicodeString::doReplace
                    ((int)param_1,iVar7 - local_7c,(UnicodeString *)0x7fffffff,
                     (int)(UnicodeString *)&local_88,0);
        }
        icu_76_godot::UnicodeString::~UnicodeString((UnicodeString *)&local_88);
        goto LAB_00102a33;
      }
    }
    *(undefined4 *)param_3 = 1;
  }
LAB_00102a33:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::ComposeNormalizer2::isInert(int) const */

ulong icu_76_godot::ComposeNormalizer2::isInert(int param_1)

{
  char cVar1;
  ushort uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  undefined8 in_RDX;
  ulong uVar8;
  uint in_ESI;
  undefined4 in_register_0000003c;
  
  lVar3 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
  if ((in_ESI & 0xfffffc00) != 0xd800) {
    cVar1 = *(char *)(CONCAT44(in_register_0000003c,param_1) + 0x10);
    plVar4 = *(long **)(lVar3 + 0x28);
    lVar5 = plVar4[1];
    if (in_ESI < 0x10000) {
      lVar7 = (long)(int)((uint)*(ushort *)(*plVar4 + (long)((int)in_ESI >> 6) * 2) +
                         (in_ESI & 0x3f)) * 2;
    }
    else if (in_ESI < 0x110000) {
      if ((int)in_ESI < (int)plVar4[3]) {
        iVar6 = ucptrie_internalSmallIndex_76_godot();
        lVar7 = (long)iVar6 * 2;
      }
      else {
        lVar7 = (long)(*(int *)((long)plVar4 + 0x14) + -2) * 2;
      }
    }
    else {
      lVar7 = (long)(*(int *)((long)plVar4 + 0x14) + -1) * 2;
    }
    uVar2 = *(ushort *)(lVar5 + lVar7);
    uVar8 = 0;
    if ((uVar2 < *(ushort *)(lVar3 + 0x12)) && ((uVar2 & 1) != 0)) {
      if ((cVar1 == '\0') || (uVar2 == 1)) {
        uVar8 = 1;
      }
      else {
        uVar8 = CONCAT71((int7)((ulong)*(long *)(lVar3 + 0x30) >> 8),
                         *(ushort *)(*(long *)(lVar3 + 0x30) + (ulong)(uVar2 >> 1) * 2) < 0x200);
      }
    }
    return uVar8 & 0xffffffff;
  }
  return CONCAT71((int7)((ulong)in_RDX >> 8),1 < *(ushort *)(lVar3 + 0x12)) & 0xffffffff;
}



/* icu_76_godot::Normalizer2WithImpl::getCombiningClass(int) const */

ushort __thiscall
icu_76_godot::Normalizer2WithImpl::getCombiningClass(Normalizer2WithImpl *this,int param_1)

{
  byte *pbVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  int iVar6;
  long lVar7;
  
  lVar2 = *(long *)(this + 8);
  plVar3 = *(long **)(lVar2 + 0x28);
  if ((param_1 & 0xfffffc00U) == 0xd800) {
    uVar5 = 1;
    goto LAB_00102da0;
  }
  lVar4 = plVar3[1];
  if ((uint)param_1 < 0x10000) {
    lVar7 = (long)(int)((uint)*(ushort *)(*plVar3 + (long)(param_1 >> 6) * 2) + (param_1 & 0x3fU)) *
            2;
LAB_00102d58:
    uVar5 = *(ushort *)(lVar4 + lVar7);
  }
  else {
    if (0x10ffff < (uint)param_1) {
      lVar7 = (long)(*(int *)((long)plVar3 + 0x14) + -1) * 2;
      goto LAB_00102d58;
    }
    if (param_1 < (int)plVar3[3]) {
      iVar6 = ucptrie_internalSmallIndex_76_godot();
      lVar7 = (long)iVar6 * 2;
      goto LAB_00102d58;
    }
    uVar5 = *(ushort *)(lVar4 + (long)(*(int *)((long)plVar3 + 0x14) + -2) * 2);
  }
  if (0xfbff < uVar5) {
    return uVar5 >> 1;
  }
LAB_00102da0:
  if (((*(ushort *)(lVar2 + 0x12) <= uVar5) && (uVar5 < *(ushort *)(lVar2 + 0x1a))) &&
     (pbVar1 = (byte *)(*(long *)(lVar2 + 0x30) + (ulong)(uVar5 >> 1) * 2), (*pbVar1 & 0x80) != 0))
  {
    return (ushort)pbVar1[-2];
  }
  return 0;
}



/* icu_76_godot::ComposeNormalizer2::hasBoundaryAfter(int) const */

ulong __thiscall
icu_76_godot::ComposeNormalizer2::hasBoundaryAfter(ComposeNormalizer2 *this,int param_1)

{
  ComposeNormalizer2 CVar1;
  ushort uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  
  lVar3 = *(long *)(this + 8);
  CVar1 = this[0x10];
  plVar4 = *(long **)(lVar3 + 0x28);
  if ((param_1 & 0xfffffc00U) == 0xd800) {
    return 1;
  }
  lVar5 = plVar4[1];
  if ((uint)param_1 < 0x10000) {
    lVar7 = (long)(int)((uint)*(ushort *)(*plVar4 + (long)(param_1 >> 6) * 2) + (param_1 & 0x3fU)) *
            2;
  }
  else if ((uint)param_1 < 0x110000) {
    if ((int)plVar4[3] <= param_1) {
      uVar2 = *(ushort *)(lVar5 + (long)(*(int *)((long)plVar4 + 0x14) + -2) * 2);
      goto joined_r0x00102e85;
    }
    iVar6 = ucptrie_internalSmallIndex_76_godot();
    lVar7 = (long)iVar6 * 2;
  }
  else {
    lVar7 = (long)(*(int *)((long)plVar4 + 0x14) + -1) * 2;
  }
  uVar2 = *(ushort *)(lVar5 + lVar7);
joined_r0x00102e85:
  uVar8 = 0;
  if ((uVar2 & 1) != 0) {
    if ((CVar1 == (ComposeNormalizer2)0x0) || (uVar2 == 1)) {
      return 1;
    }
    if ((uVar2 < *(ushort *)(lVar3 + 0x1a)) || (*(ushort *)(lVar3 + 0x1e) <= uVar2)) {
      return CONCAT71((int7)((ulong)*(long *)(lVar3 + 0x30) >> 8),
                      *(ushort *)(*(long *)(lVar3 + 0x30) + (ulong)(uVar2 >> 1) * 2) < 0x200) &
             0xffffffff;
    }
    uVar8 = (ulong)((uVar2 & 6) < 3);
  }
  return uVar8;
}


