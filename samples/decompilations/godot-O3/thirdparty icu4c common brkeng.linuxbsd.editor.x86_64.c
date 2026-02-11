
/* icu_76_godot::ICULanguageBreakFactory::~ICULanguageBreakFactory() */

void __thiscall
icu_76_godot::ICULanguageBreakFactory::~ICULanguageBreakFactory(ICULanguageBreakFactory *this)

{
  *(undefined ***)this = &PTR__ICULanguageBreakFactory_00101558;
  if (*(long **)(this + 8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010001a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 8) + 8))();
    return;
  }
  return;
}



/* icu_76_godot::BreakEngineWrapper::handles(int, char const*) const */

void icu_76_godot::BreakEngineWrapper::handles(int param_1,char *param_2)

{
  undefined4 in_register_0000003c;
  
                    /* WARNING: Could not recover jumptable at 0x0010003b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(CONCAT44(in_register_0000003c,param_1) + 8) + 0x18))();
  return;
}



/* icu_76_godot::ICULanguageBreakFactory::loadEngineFor(int, char const*) */

CjkBreakEngine * icu_76_godot::ICULanguageBreakFactory::loadEngineFor(int param_1,char *param_2)

{
  uint uVar1;
  long lVar2;
  DictionaryMatcher *pDVar3;
  CjkBreakEngine *this;
  ulong uVar4;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  int local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_34 = 0;
  uVar1 = uscript_getScript_76_godot((ulong)param_2 & 0xffffffff,(UErrorCode *)&local_34);
  if (local_34 < 1) {
    uVar4 = (ulong)uVar1;
    lVar2 = CreateLSTMDataForScript_76_godot(uVar1,(UErrorCode *)&local_34);
    if ((local_34 < 1) && (lVar2 != 0)) {
      this = (CjkBreakEngine *)CreateLSTMBreakEngine_76_godot(uVar4,lVar2,(UErrorCode *)&local_34);
      if (local_34 < 1) {
        if (this != (CjkBreakEngine *)0x0) goto LAB_00100084;
      }
      else if (this != (CjkBreakEngine *)0x0) {
        (**(code **)(*(long *)this + 8))(this);
        goto LAB_001000cc;
      }
      DeleteLSTMData_76_godot(lVar2);
    }
LAB_001000cc:
    local_34 = 0;
    pDVar3 = (DictionaryMatcher *)
             (**(code **)(*(long *)CONCAT44(in_register_0000003c,param_1) + 0x28))
                       ((long *)CONCAT44(in_register_0000003c,param_1));
    if (pDVar3 != (DictionaryMatcher *)0x0) {
      switch(uVar1) {
      case 0x11:
      case 0x14:
      case 0x16:
        this = (CjkBreakEngine *)icu_76_godot::UMemory::operator_new((UMemory *)0x3a0,uVar4);
        if (this != (CjkBreakEngine *)0x0) {
          icu_76_godot::CjkBreakEngine::CjkBreakEngine(this,pDVar3,1,(UErrorCode *)&local_34);
LAB_00100178:
          if (local_34 < 1) goto LAB_00100084;
          (**(code **)(*(long *)this + 8))(this);
          goto LAB_00100082;
        }
        break;
      case 0x12:
        this = (CjkBreakEngine *)icu_76_godot::UMemory::operator_new((UMemory *)0x3a0,uVar4);
        if (this != (CjkBreakEngine *)0x0) {
          icu_76_godot::CjkBreakEngine::CjkBreakEngine(this,pDVar3,0,(UErrorCode *)&local_34);
          goto LAB_00100178;
        }
        break;
      case 0x17:
        this = (CjkBreakEngine *)icu_76_godot::UMemory::operator_new((UMemory *)0x330,uVar4);
        if (this != (CjkBreakEngine *)0x0) {
          icu_76_godot::KhmerBreakEngine::KhmerBreakEngine
                    ((KhmerBreakEngine *)this,pDVar3,(UErrorCode *)&local_34);
          goto LAB_00100178;
        }
        break;
      case 0x18:
        this = (CjkBreakEngine *)icu_76_godot::UMemory::operator_new((UMemory *)0x330,uVar4);
        if (this != (CjkBreakEngine *)0x0) {
          icu_76_godot::LaoBreakEngine::LaoBreakEngine
                    ((LaoBreakEngine *)this,pDVar3,(UErrorCode *)&local_34);
          goto LAB_00100178;
        }
        break;
      case 0x1c:
        this = (CjkBreakEngine *)icu_76_godot::UMemory::operator_new((UMemory *)0x330,uVar4);
        if (this != (CjkBreakEngine *)0x0) {
          icu_76_godot::BurmeseBreakEngine::BurmeseBreakEngine
                    ((BurmeseBreakEngine *)this,pDVar3,(UErrorCode *)&local_34);
          goto LAB_00100178;
        }
        break;
      case 0x26:
        this = (CjkBreakEngine *)icu_76_godot::UMemory::operator_new((UMemory *)0x3f8,uVar4);
        if (this != (CjkBreakEngine *)0x0) {
          icu_76_godot::ThaiBreakEngine::ThaiBreakEngine
                    ((ThaiBreakEngine *)this,pDVar3,(UErrorCode *)&local_34);
          goto LAB_00100178;
        }
      }
      (**(code **)(*(long *)pDVar3 + 8))(pDVar3);
    }
  }
LAB_00100082:
  this = (CjkBreakEngine *)0x0;
LAB_00100084:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::BreakEngineWrapper::findBreaks(UText*, int, int, icu_76_godot::UVector32&, signed
   char, UErrorCode&) const */

undefined4 __thiscall
icu_76_godot::BreakEngineWrapper::findBreaks
          (BreakEngineWrapper *this,undefined8 param_1,int param_2,int param_3,long param_4,
          undefined8 param_6,int *param_7)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  
  if (*param_7 < 1) {
    utext_setNativeIndex_76_godot(param_1,(long)param_2);
    iVar4 = utext_getNativeIndex_76_godot(param_1);
    uVar5 = utext_current32_76_godot(param_1);
    while( true ) {
      iVar6 = utext_getNativeIndex_76_godot(param_1);
      if ((param_3 <= iVar6) ||
         (cVar3 = (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),uVar5),
         cVar3 == '\0')) break;
      utext_next32_76_godot(param_1);
      uVar5 = utext_current32_76_godot(param_1);
    }
    iVar2 = *(int *)(param_4 + 8);
    iVar1 = (iVar6 - iVar4) + 1;
    uVar7 = iVar2 + iVar1;
    iVar8 = (int)param_4;
    if (((int)uVar7 < 0) || (*(int *)(param_4 + 0xc) < (int)uVar7)) {
      icu_76_godot::UVector32::expandCapacity(iVar8,(UErrorCode *)(ulong)uVar7);
    }
    if (*param_7 < 1) {
      icu_76_godot::UVector32::setSize(iVar8);
      uVar5 = (**(code **)(**(long **)(this + 8) + 0x28))
                        (*(long **)(this + 8),param_1,iVar4,iVar6,
                         *(long *)(param_4 + 0x18) + (long)iVar2 * 4,iVar1,param_7);
      if (*param_7 < 1) {
        icu_76_godot::UVector32::setSize(iVar8);
        utext_setNativeIndex_76_godot(param_1,(long)iVar6);
        return uVar5;
      }
    }
  }
  return 0;
}



/* icu_76_godot::BreakEngineWrapper::~BreakEngineWrapper() */

void __thiscall icu_76_godot::BreakEngineWrapper::~BreakEngineWrapper(BreakEngineWrapper *this)

{
  *(undefined ***)this = &PTR__BreakEngineWrapper_00101598;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(undefined **)this = &DAT_001014b8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::BreakEngineWrapper::~BreakEngineWrapper() */

void __thiscall icu_76_godot::BreakEngineWrapper::~BreakEngineWrapper(BreakEngineWrapper *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__BreakEngineWrapper_00101598;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  *(undefined **)this = &DAT_001014b8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::ICULanguageBreakFactory::~ICULanguageBreakFactory() */

void __thiscall
icu_76_godot::ICULanguageBreakFactory::~ICULanguageBreakFactory(ICULanguageBreakFactory *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__ICULanguageBreakFactory_00101558;
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::LanguageBreakEngine::LanguageBreakEngine() */

void __thiscall icu_76_godot::LanguageBreakEngine::LanguageBreakEngine(LanguageBreakEngine *this)

{
  *(undefined **)this = &DAT_001014b8;
  return;
}



/* icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine() */

void __thiscall icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine(LanguageBreakEngine *this)

{
  *(undefined **)this = &DAT_001014b8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine() */

void __thiscall icu_76_godot::LanguageBreakEngine::~LanguageBreakEngine(LanguageBreakEngine *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001014b8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::LanguageBreakFactory::LanguageBreakFactory() */

void __thiscall icu_76_godot::LanguageBreakFactory::LanguageBreakFactory(LanguageBreakFactory *this)

{
  *(undefined **)this = &DAT_001014f0;
  return;
}



/* icu_76_godot::LanguageBreakFactory::~LanguageBreakFactory() */

void __thiscall
icu_76_godot::LanguageBreakFactory::~LanguageBreakFactory(LanguageBreakFactory *this)

{
  return;
}



/* icu_76_godot::LanguageBreakFactory::~LanguageBreakFactory() */

void __thiscall
icu_76_godot::LanguageBreakFactory::~LanguageBreakFactory(LanguageBreakFactory *this)

{
  void *in_RSI;
  
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UnhandledEngine::UnhandledEngine(UErrorCode&) */

void __thiscall
icu_76_godot::UnhandledEngine::UnhandledEngine(UnhandledEngine *this,UErrorCode *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__UnhandledEngine_00101518;
  return;
}



/* icu_76_godot::ICULanguageBreakFactory::ICULanguageBreakFactory(UErrorCode&) */

void __thiscall
icu_76_godot::ICULanguageBreakFactory::ICULanguageBreakFactory
          (ICULanguageBreakFactory *this,UErrorCode *param_1)

{
  *(undefined8 *)(this + 8) = 0;
  *(undefined ***)this = &PTR__ICULanguageBreakFactory_00101558;
  return;
}



/* icu_76_godot::ICULanguageBreakFactory::ensureEngines(UErrorCode&) */

void __thiscall
icu_76_godot::ICULanguageBreakFactory::ensureEngines
          (ICULanguageBreakFactory *this,UErrorCode *param_1)

{
  UStack *this_00;
  UErrorCode *pUVar1;
  
  pUVar1 = param_1;
  umtx_lock_76_godot(ensureEngines(UErrorCode&)::gBreakEngineMutex);
  if (*(long *)(this + 8) == 0) {
    this_00 = (UStack *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)pUVar1);
    if (this_00 == (UStack *)0x0) {
      if (*(int *)param_1 < 1) {
        *(undefined4 *)param_1 = 7;
      }
    }
    else {
      icu_76_godot::UStack::UStack
                (this_00,(_func_void_void_ptr *)&uprv_deleteUObject_76_godot,
                 (_func_signed_UElement_UElement *)0x0,param_1);
      if (*(int *)param_1 < 1) {
        *(UStack **)(this + 8) = this_00;
      }
      else {
        icu_76_godot::UStack::~UStack(this_00);
      }
    }
  }
  umtx_unlock_76_godot(ensureEngines(UErrorCode&)::gBreakEngineMutex);
  return;
}



/* icu_76_godot::ICULanguageBreakFactory::getEngineFor(int, char const*) */

UErrorCode * __thiscall
icu_76_godot::ICULanguageBreakFactory::getEngineFor
          (ICULanguageBreakFactory *this,int param_1,char *param_2)

{
  void *pvVar1;
  char cVar2;
  UErrorCode *pUVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  bool bVar6;
  int local_44;
  long local_40;
  
  pUVar3 = (UErrorCode *)0x0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_44 = 0;
  ensureEngines(this,(UErrorCode *)&local_44);
  if (local_44 < 1) {
    umtx_lock_76_godot(getEngineFor(int,char_const*)::gBreakEngineMutex);
    lVar5 = *(long *)(this + 8);
    iVar4 = *(int *)(lVar5 + 8) + -1;
    if (-1 < iVar4) {
      while( true ) {
        pUVar3 = (UErrorCode *)icu_76_godot::UVector::elementAt((int)lVar5);
        if ((pUVar3 != (UErrorCode *)0x0) &&
           (cVar2 = (**(code **)(*(long *)pUVar3 + 0x18))(pUVar3,param_1,param_2), cVar2 != '\0'))
        goto LAB_001006b3;
        bVar6 = iVar4 == 0;
        iVar4 = iVar4 + -1;
        if (bVar6) break;
        lVar5 = *(long *)(this + 8);
      }
    }
    pUVar3 = (UErrorCode *)(**(code **)(*(long *)this + 0x20))(this,param_1,param_2);
    if (pUVar3 != (UErrorCode *)0x0) {
      pvVar1 = *(void **)(this + 8);
      if (*(long *)((long)pvVar1 + 0x18) == 0) {
        icu_76_godot::UVector::addElement(pvVar1,pUVar3);
      }
      else {
        icu_76_godot::UVector::adoptElement(pvVar1,pUVar3);
      }
    }
    if (0 < local_44) {
      pUVar3 = (UErrorCode *)0x0;
    }
LAB_001006b3:
    umtx_unlock_76_godot(getEngineFor(int,char_const*)::gBreakEngineMutex);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pUVar3;
}



/* icu_76_godot::ICULanguageBreakFactory::addExternalEngine(icu_76_godot::ExternalBreakEngine*,
   UErrorCode&) */

void __thiscall
icu_76_godot::ICULanguageBreakFactory::addExternalEngine
          (ICULanguageBreakFactory *this,ExternalBreakEngine *param_1,UErrorCode *param_2)

{
  void *pvVar1;
  UErrorCode *pUVar2;
  
  if (param_1 == (ExternalBreakEngine *)0x0) {
    if (*(int *)param_2 < 1) {
      *(undefined4 *)param_2 = 7;
    }
    pUVar2 = param_2;
    ensureEngines(this,param_2);
    pUVar2 = (UErrorCode *)icu_76_godot::UMemory::operator_new((UMemory *)0x10,(ulong)pUVar2);
    if (pUVar2 != (UErrorCode *)0x0) {
      *(undefined8 *)(pUVar2 + 8) = 0;
      *(undefined ***)pUVar2 = &PTR__BreakEngineWrapper_00101598;
      if (*(int *)param_2 < 1) {
        *(undefined4 *)param_2 = 7;
      }
      goto LAB_00100779;
    }
  }
  else {
    pUVar2 = param_2;
    ensureEngines(this,param_2);
    pUVar2 = (UErrorCode *)icu_76_godot::UMemory::operator_new((UMemory *)0x10,(ulong)pUVar2);
    if (pUVar2 != (UErrorCode *)0x0) {
      *(ExternalBreakEngine **)(pUVar2 + 8) = param_1;
      param_1 = (ExternalBreakEngine *)0x0;
      *(undefined ***)pUVar2 = &PTR__BreakEngineWrapper_00101598;
      goto LAB_00100779;
    }
  }
  if (*(int *)param_2 < 1) {
    *(undefined4 *)param_2 = 7;
    pUVar2 = (UErrorCode *)0x0;
  }
  else {
    pUVar2 = (UErrorCode *)0x0;
  }
LAB_00100779:
  umtx_lock_76_godot(addExternalEngine(icu_76_godot::ExternalBreakEngine*,UErrorCode&)::
                     gBreakEngineMutex);
  pvVar1 = *(void **)(this + 8);
  if (*(long *)((long)pvVar1 + 0x18) == 0) {
    icu_76_godot::UVector::addElement(pvVar1,pUVar2);
  }
  else {
    icu_76_godot::UVector::adoptElement(pvVar1,pUVar2);
  }
  umtx_unlock_76_godot
            (addExternalEngine(icu_76_godot::ExternalBreakEngine*,UErrorCode&)::gBreakEngineMutex);
  if (param_1 != (ExternalBreakEngine *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001007c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 8))(param_1);
    return;
  }
  return;
}



/* icu_76_godot::BreakEngineWrapper::BreakEngineWrapper(icu_76_godot::ExternalBreakEngine*,
   UErrorCode&) */

void __thiscall
icu_76_godot::BreakEngineWrapper::BreakEngineWrapper
          (BreakEngineWrapper *this,ExternalBreakEngine *param_1,UErrorCode *param_2)

{
  *(ExternalBreakEngine **)(this + 8) = param_1;
  *(undefined ***)this = &PTR__BreakEngineWrapper_00101598;
  if ((param_1 == (ExternalBreakEngine *)0x0) && (*(int *)param_2 < 1)) {
    *(undefined4 *)param_2 = 7;
    return;
  }
  return;
}



/* icu_76_godot::UnhandledEngine::~UnhandledEngine() */

void __thiscall icu_76_godot::UnhandledEngine::~UnhandledEngine(UnhandledEngine *this)

{
  *(undefined ***)this = &PTR__UnhandledEngine_00101518;
  if (*(UnicodeSet **)(this + 8) != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::~UnicodeSet(*(UnicodeSet **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)this = &DAT_001014b8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::UnhandledEngine::~UnhandledEngine() */

void __thiscall icu_76_godot::UnhandledEngine::~UnhandledEngine(UnhandledEngine *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UnhandledEngine_00101518;
  if (*(UnicodeSet **)(this + 8) != (UnicodeSet *)0x0) {
    icu_76_godot::UnicodeSet::~UnicodeSet(*(UnicodeSet **)(this + 8));
  }
  *(undefined8 *)(this + 8) = 0;
  *(undefined **)this = &DAT_001014b8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UnhandledEngine::handles(int, char const*) const */

bool icu_76_godot::UnhandledEngine::handles(int param_1,char *param_2)

{
  long lVar1;
  char cVar2;
  undefined4 in_register_0000003c;
  
  lVar1 = *(long *)(CONCAT44(in_register_0000003c,param_1) + 8);
  if (lVar1 != 0) {
    cVar2 = icu_76_godot::UnicodeSet::contains((int)lVar1);
    return cVar2 != '\0';
  }
  return false;
}



/* icu_76_godot::UnhandledEngine::findBreaks(UText*, int, int, icu_76_godot::UVector32&, signed
   char, UErrorCode&) const */

undefined8 __thiscall
icu_76_godot::UnhandledEngine::findBreaks
          (UnhandledEngine *this,undefined8 param_1,int param_2,int param_3,undefined8 param_5,
          undefined8 param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  
  if (*param_7 < 1) {
    utext_setNativeIndex_76_godot(param_1,(long)param_2);
    utext_current32_76_godot(param_1);
    while( true ) {
      iVar2 = utext_getNativeIndex_76_godot(param_1);
      if (param_3 <= iVar2) {
        return 0;
      }
      cVar1 = icu_76_godot::UnicodeSet::contains((int)*(undefined8 *)(this + 8));
      if (cVar1 == '\0') break;
      utext_next32_76_godot(param_1);
      utext_current32_76_godot(param_1);
    }
  }
  return 0;
}



/* icu_76_godot::UnhandledEngine::handleCharacter(int) */

void __thiscall icu_76_godot::UnhandledEngine::handleCharacter(UnhandledEngine *this,int param_1)

{
  char cVar1;
  undefined4 uVar2;
  UnicodeSet *this_00;
  undefined4 in_register_00000034;
  long in_FS_OFFSET;
  undefined4 local_24;
  long local_20;
  
  this_00 = *(UnicodeSet **)(this + 8);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this_00 == (UnicodeSet *)0x0) {
    this_00 = (UnicodeSet *)
              icu_76_godot::UMemory::operator_new
                        ((UMemory *)0xc8,CONCAT44(in_register_00000034,param_1));
    if (this_00 == (UnicodeSet *)0x0) {
      *(undefined8 *)(this + 8) = 0;
      goto LAB_00100a2a;
    }
    icu_76_godot::UnicodeSet::UnicodeSet(this_00);
    *(UnicodeSet **)(this + 8) = this_00;
  }
  cVar1 = icu_76_godot::UnicodeSet::contains((int)this_00);
  if (cVar1 == '\0') {
    local_24 = 0;
    uVar2 = u_getIntPropertyValue_76_godot(param_1,0x100a);
    icu_76_godot::UnicodeSet::applyIntPropertyValue
              (*(undefined8 *)(this + 8),0x100a,uVar2,&local_24);
  }
LAB_00100a2a:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ICULanguageBreakFactory::loadDictionaryMatcherFor(UScriptCode) */

undefined8 * __thiscall
icu_76_godot::ICULanguageBreakFactory::loadDictionaryMatcherFor
          (undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int *piVar7;
  undefined8 *puVar8;
  ulong uVar9;
  uint uVar10;
  long in_FS_OFFSET;
  int local_118;
  uint local_114;
  long local_110;
  long local_108;
  undefined4 local_100;
  undefined2 local_fc;
  undefined4 local_d0;
  ulong local_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined4 local_90;
  UnicodeString local_88 [72];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_118 = 0;
  uVar3 = ures_open_76_godot("icudt76l-brkitr",&_LC0,&local_118);
  uVar3 = ures_getByKeyWithFallback_76_godot(uVar3,"dictionaries",uVar3,&local_118);
  local_114 = 0;
  uVar4 = uscript_getShortName_76_godot(param_2);
  lVar5 = ures_getStringByKeyWithFallback_76_godot(uVar3,uVar4,&local_114);
  if (0 < local_118) {
    puVar8 = (undefined8 *)0x0;
    ures_close_76_godot(uVar3);
    goto LAB_00100cca;
  }
  local_108 = (long)&local_fc + 1;
  local_fc = 0;
  local_c8 = (long)&local_bc + 1;
  local_100 = 0x28;
  local_d0 = 0;
  local_c0 = 0x28;
  local_90 = 0;
  local_bc = 0;
  lVar6 = u_memrchr_76_godot(lVar5,0x2e,local_114);
  if (lVar6 != 0) {
    local_110 = lVar6 + 2;
    uVar10 = (uint)(lVar6 - lVar5 >> 1);
    icu_76_godot::UnicodeString::UnicodeString(local_88,0,&local_110,~uVar10 + local_114);
    icu_76_godot::CharString::appendInvariantChars
              ((UnicodeString *)&local_c8,(UErrorCode *)local_88);
    icu_76_godot::UnicodeString::~UnicodeString(local_88);
    local_114 = uVar10;
  }
  local_110 = lVar5;
  icu_76_godot::UnicodeString::UnicodeString(local_88,0,&local_110,local_114);
  icu_76_godot::CharString::appendInvariantChars((UnicodeString *)&local_108,(UErrorCode *)local_88)
  ;
  icu_76_godot::UnicodeString::~UnicodeString(local_88);
  ures_close_76_godot(uVar3);
  uVar9 = local_c8;
  uVar3 = udata_open_76_godot("icudt76l-brkitr",local_c8,local_108,&local_118);
  if (local_118 < 1) {
    piVar7 = (int *)udata_getMemory_76_godot(uVar3);
    iVar1 = *piVar7;
    if ((uint)DictionaryData::TRIE_TYPE_BYTES != (piVar7[4] & (uint)DictionaryData::TRIE_TYPE_MASK))
    {
      if ((uint)DictionaryData::TRIE_TYPE_UCHARS ==
          (piVar7[4] & (uint)DictionaryData::TRIE_TYPE_MASK)) {
        puVar8 = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x18,uVar9);
        if (puVar8 != (undefined8 *)0x0) {
          puVar8[1] = (long)piVar7 + (long)iVar1;
          *puVar8 = &__cxxabiv1::__si_class_type_info::vtable;
          puVar8[2] = uVar3;
          goto LAB_00100c83;
        }
      }
LAB_00100d34:
      udata_close_76_godot(uVar3);
      goto LAB_00100c81;
    }
    iVar2 = piVar7[5];
    puVar8 = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x20,uVar9);
    if (puVar8 == (undefined8 *)0x0) goto LAB_00100d34;
    puVar8[1] = (long)piVar7 + (long)iVar1;
    *puVar8 = &__cxxabiv1::__class_type_info::vtable;
    *(int *)(puVar8 + 2) = iVar2;
    puVar8[3] = uVar3;
  }
  else {
    if (lVar5 != 0) {
      local_118 = 0;
    }
LAB_00100c81:
    puVar8 = (undefined8 *)0x0;
  }
LAB_00100c83:
  if ((char)local_bc != '\0') {
    uprv_free_76_godot(local_c8);
  }
  if ((char)local_fc != '\0') {
    uprv_free_76_godot(local_108);
  }
LAB_00100cca:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
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
LAB_001011af:
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
      goto LAB_001011af;
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


