
/* icu_76_godot::RuleBasedBreakIterator::getDynamicClassID() const */

undefined1 * icu_76_godot::RuleBasedBreakIterator::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::RuleBasedBreakIterator::getText() const */

undefined8 __thiscall icu_76_godot::RuleBasedBreakIterator::getText(RuleBasedBreakIterator *this)

{
  return *(undefined8 *)(this + 0x2b0);
}



/* icu_76_godot::RuleBasedBreakIterator::current() const */

undefined4 __thiscall icu_76_godot::RuleBasedBreakIterator::current(RuleBasedBreakIterator *this)

{
  return *(undefined4 *)(this + 0x27c);
}



/* icu_76_godot::RuleBasedBreakIterator::getRuleStatus() const */

undefined4 __thiscall
icu_76_godot::RuleBasedBreakIterator::getRuleStatus(RuleBasedBreakIterator *this)

{
  return *(undefined4 *)
          (*(long *)(*(long *)(this + 0x270) + 0x20) +
          (long)(*(int *)(this + 0x280) +
                *(int *)(*(long *)(*(long *)(this + 0x270) + 0x20) +
                        (long)*(int *)(this + 0x280) * 4)) * 4);
}



/* icu_76_godot::RuleBasedBreakIterator::getBinaryRules(unsigned int&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::getBinaryRules(RuleBasedBreakIterator *this,uint *param_1)

{
  long *plVar1;
  
  plVar1 = *(long **)(this + 0x270);
  *param_1 = 0;
  if (plVar1 != (long *)0x0) {
    *param_1 = *(uint *)(*plVar1 + 8);
  }
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::getUText(UText*, UErrorCode&) const */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::getUText
          (RuleBasedBreakIterator *this,UText *param_1,UErrorCode *param_2)

{
  utext_clone_76_godot(param_1,this + 0x1e0,0,1,param_2);
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::hashCode() const */

undefined8 __thiscall icu_76_godot::RuleBasedBreakIterator::hashCode(RuleBasedBreakIterator *this)

{
  undefined8 uVar1;
  
  if (*(long *)(this + 0x270) != 0) {
    uVar1 = icu_76_godot::RBBIDataWrapper::hashCode();
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::RuleBasedBreakIterator::first() */

undefined8 __thiscall icu_76_godot::RuleBasedBreakIterator::first(RuleBasedBreakIterator *this)

{
  long lVar1;
  char cVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = icu_76_godot::RuleBasedBreakIterator::BreakCache::seek((int)*(undefined8 *)(this + 0x288))
  ;
  if (cVar2 == '\0') {
    icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear
              ((int)*(undefined8 *)(this + 0x288),(UErrorCode *)0x0);
  }
  icu_76_godot::RuleBasedBreakIterator::BreakCache::current();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RuleBasedBreakIterator::last() */

undefined4 __thiscall icu_76_godot::RuleBasedBreakIterator::last(RuleBasedBreakIterator *this)

{
  undefined4 uVar1;
  
  uVar1 = utext_nativeLength_76_godot(this + 0x1e0);
  (**(code **)(*(long *)this + 0x88))(this,uVar1);
  return uVar1;
}



/* icu_76_godot::RuleBasedBreakIterator::next() */

undefined4 __thiscall icu_76_godot::RuleBasedBreakIterator::next(RuleBasedBreakIterator *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  lVar2 = *(long *)(this + 0x288);
  if (*(int *)(lVar2 + 0x1c) == *(int *)(lVar2 + 0x14)) {
    icu_76_godot::RuleBasedBreakIterator::BreakCache::nextOL();
  }
  else {
    lVar3 = *(long *)(lVar2 + 8);
    uVar4 = *(int *)(lVar2 + 0x1c) + 1U & 0x7f;
    *(uint *)(lVar2 + 0x1c) = uVar4;
    uVar1 = *(undefined4 *)(lVar2 + 0x20 + (ulong)uVar4 * 4);
    *(undefined4 *)(lVar3 + 0x27c) = uVar1;
    *(undefined4 *)(lVar2 + 0x18) = uVar1;
    *(uint *)(lVar3 + 0x280) = (uint)*(ushort *)(lVar2 + 0x220 + (long)*(int *)(lVar2 + 0x1c) * 2);
  }
  if (this[0x2d8] == (RuleBasedBreakIterator)0x0) {
    return *(undefined4 *)(this + 0x27c);
  }
  return 0xffffffff;
}



/* icu_76_godot::RuleBasedBreakIterator::previous() */

undefined4 __thiscall icu_76_godot::RuleBasedBreakIterator::previous(RuleBasedBreakIterator *this)

{
  long lVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::RuleBasedBreakIterator::BreakCache::previous(*(UErrorCode **)(this + 0x288));
  if (this[0x2d8] == (RuleBasedBreakIterator)0x0) {
    uVar2 = *(undefined4 *)(this + 0x27c);
  }
  else {
    uVar2 = 0xffffffff;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



undefined1  [16] rbbi_cleanup_76_godot(void)

{
  uint uVar1;
  undefined1 auVar2 [16];
  
  if (gLanguageBreakFactories != (long *)0x0) {
    (**(code **)(*gLanguageBreakFactories + 8))();
  }
  gLanguageBreakFactories = (long *)0x0;
  if (gEmptyString != (long *)0x0) {
    (**(code **)(*gEmptyString + 8))();
  }
  uVar1 = gLanguageBreakFactoriesInitOnce;
  gEmptyString = (long *)0x0;
  LOCK();
  gLanguageBreakFactoriesInitOnce = 0;
  auVar2._12_4_ = 0;
  auVar2._8_4_ = uVar1;
  UNLOCK();
  LOCK();
  gRBBIInitOnce = 0;
  UNLOCK();
  auVar2._0_8_ = 1;
  return auVar2;
}



/* icu_76_godot::RuleBasedBreakIterator::getRuleStatusVec(int*, int, UErrorCode&) */

uint __thiscall
icu_76_godot::RuleBasedBreakIterator::getRuleStatusVec
          (RuleBasedBreakIterator *this,int *param_1,int param_2,UErrorCode *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  if (*(int *)param_3 < 1) {
    lVar2 = *(long *)(*(long *)(this + 0x270) + 0x20);
    iVar1 = *(int *)(this + 0x280);
    uVar5 = *(uint *)(lVar2 + (long)iVar1 * 4);
    uVar4 = uVar5;
    if (param_2 < (int)uVar5) {
      *(undefined4 *)param_3 = 0xf;
      uVar4 = param_2;
    }
    if (0 < (int)uVar4) {
      *param_1 = *(int *)(lVar2 + 4 + (long)iVar1 * 4);
      uVar3 = 1;
      if (uVar4 != 1) {
        do {
          param_1[uVar3] = *(int *)(lVar2 + 4 + (long)(*(int *)(this + 0x280) + (int)uVar3) * 4);
          uVar3 = uVar3 + 1;
        } while (uVar4 != uVar3);
      }
    }
  }
  return uVar5;
}



/* icu_76_godot::RuleBasedBreakIterator::refreshInputText(UText*, UErrorCode&) */

RuleBasedBreakIterator * __thiscall
icu_76_godot::RuleBasedBreakIterator::refreshInputText
          (RuleBasedBreakIterator *this,UText *param_1,UErrorCode *param_2)

{
  RuleBasedBreakIterator *pRVar1;
  long lVar2;
  long lVar3;
  
  if (*(int *)param_2 < 1) {
    if (param_1 == (UText *)0x0) {
LAB_001003d8:
      *(undefined4 *)param_2 = 1;
      return this;
    }
    pRVar1 = this + 0x1e0;
    lVar2 = utext_getNativeIndex_76_godot(pRVar1);
    utext_clone_76_godot(pRVar1,param_1,0,1,param_2);
    if (*(int *)param_2 < 1) {
      utext_setNativeIndex_76_godot(pRVar1,lVar2);
      lVar3 = utext_getNativeIndex_76_godot(pRVar1);
      if (lVar2 != lVar3) goto LAB_001003d8;
    }
  }
  return this;
}



/* icu_76_godot::RuleBasedBreakIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::RuleBasedBreakIterator
   const&) [clone .part.0] */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::operator=
          (RuleBasedBreakIterator *this,RuleBasedBreakIterator *param_1)

{
  UCharCharacterIterator *this_00;
  RuleBasedBreakIterator RVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  UCharCharacterIterator *pUVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  undefined4 local_34;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::BreakIterator::operator=((BreakIterator *)this,(BreakIterator *)param_1);
  if (*(long **)(this + 0x298) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x298) + 8))();
    *(undefined8 *)(this + 0x298) = 0;
  }
  local_34 = 0;
  this_00 = (UCharCharacterIterator *)(this + 0x2b8);
  utext_clone_76_godot(this + 0x1e0,param_1 + 0x1e0,0,1,&local_34);
  pUVar5 = *(UCharCharacterIterator **)(this + 0x2b0);
  if ((pUVar5 != (UCharCharacterIterator *)0x0) && (pUVar5 != this_00)) {
    (**(code **)(*(long *)pUVar5 + 8))();
  }
  *(UCharCharacterIterator **)(this + 0x2b0) = this_00;
  pUVar5 = *(UCharCharacterIterator **)(param_1 + 0x2b0);
  if ((pUVar5 != (UCharCharacterIterator *)0x0) &&
     (pUVar5 != (UCharCharacterIterator *)(param_1 + 0x2b8))) {
    uVar6 = (**(code **)(*(long *)pUVar5 + 0x40))();
    *(undefined8 *)(this + 0x2b0) = uVar6;
  }
  icu_76_godot::UCharCharacterIterator::operator=
            (this_00,(UCharCharacterIterator *)(param_1 + 0x2b8));
  if (*(long *)(this + 0x2b0) == 0) {
    *(UCharCharacterIterator **)(this + 0x2b0) = this_00;
  }
  if (*(long *)(this + 0x270) != 0) {
    icu_76_godot::RBBIDataWrapper::removeReference();
    *(undefined8 *)(this + 0x270) = 0;
  }
  if (*(long *)(param_1 + 0x270) != 0) {
    uVar6 = icu_76_godot::RBBIDataWrapper::addReference();
    *(undefined8 *)(this + 0x270) = uVar6;
  }
  uprv_free_76_godot(*(undefined8 *)(this + 0x2e0));
  *(undefined8 *)(this + 0x2e0) = 0;
  if ((*(long *)(this + 0x270) != 0) &&
     (uVar2 = *(uint *)(*(long *)(*(long *)(this + 0x270) + 8) + 0xc), uVar2 != 0)) {
    uVar6 = uprv_malloc_76_godot((ulong)uVar2 << 2);
    *(undefined8 *)(this + 0x2e0) = uVar6;
  }
  iVar3 = *(int *)(param_1 + 0x27c);
  RVar1 = param_1[0x2d8];
  *(int *)(this + 0x27c) = iVar3;
  uVar4 = *(undefined4 *)(param_1 + 0x280);
  this[0x2d8] = RVar1;
  *(undefined4 *)(this + 0x280) = uVar4;
  icu_76_godot::RuleBasedBreakIterator::BreakCache::reset((int)*(undefined8 *)(this + 0x288),iVar3);
  icu_76_godot::RuleBasedBreakIterator::DictionaryCache::reset();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::initLanguageFactories(UErrorCode&) */

void __thiscall icu_76_godot::initLanguageFactories(icu_76_godot *this,UErrorCode *param_1)

{
  UStack *this_00;
  ICULanguageBreakFactory *this_01;
  
  this_00 = (UStack *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,(ulong)param_1);
  if (this_00 == (UStack *)0x0) {
    gLanguageBreakFactories = (UStack *)0x0;
  }
  else {
    icu_76_godot::UStack::UStack
              (this_00,_deleteFactory,(_func_signed_UElement_UElement *)0x0,(UErrorCode *)this);
    gLanguageBreakFactories = this_00;
    if ((int)*(uint *)this < 1) {
      this_01 = (ICULanguageBreakFactory *)
                icu_76_godot::UMemory::operator_new((UMemory *)0x10,(ulong)*(uint *)this);
      if (this_01 == (ICULanguageBreakFactory *)0x0) {
        if (*(int *)this < 1) {
          *(undefined4 *)this = 7;
        }
      }
      else {
        icu_76_godot::ICULanguageBreakFactory::ICULanguageBreakFactory(this_01,(UErrorCode *)this);
        if (*(int *)this < 1) {
          gICULanguageBreakFactory = this_01;
          if (*(long *)(gLanguageBreakFactories + 0x18) == 0) {
            icu_76_godot::UVector::addElement(gLanguageBreakFactories,(UErrorCode *)this_01);
          }
          else {
            icu_76_godot::UVector::adoptElement(gLanguageBreakFactories,(UErrorCode *)this_01);
          }
        }
        else {
          icu_76_godot::ICULanguageBreakFactory::~ICULanguageBreakFactory(this_01);
        }
      }
    }
  }
  ucln_common_registerCleanup_76_godot(3,rbbi_cleanup_76_godot);
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::BreakIterator
   const&) const */

undefined8 __thiscall
icu_76_godot::RuleBasedBreakIterator::operator==
          (RuleBasedBreakIterator *this,BreakIterator *param_1)

{
  char *__s1;
  char *pcVar1;
  RBBIDataWrapper *this_00;
  RBBIDataWrapper *pRVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  
  __s1 = *(char **)(*(long *)(*(long *)this + -8) + 8);
  pcVar1 = *(char **)(*(long *)(*(long *)param_1 + -8) + 8);
  if (__s1 != pcVar1) {
    if (*__s1 == '*') {
      return 0;
    }
    iVar4 = strcmp(__s1,pcVar1 + (*pcVar1 == '*'));
    if (iVar4 != 0) {
      return 0;
    }
  }
  if (this == (RuleBasedBreakIterator *)param_1) {
    return 1;
  }
  cVar3 = utext_equals_76_godot(this + 0x1e0,param_1 + 0x1e0);
  if ((((cVar3 != '\0') && (*(int *)(this + 0x27c) == *(int *)(param_1 + 0x27c))) &&
      (*(int *)(this + 0x280) == *(int *)(param_1 + 0x280))) &&
     (*(BreakIterator *)(this + 0x2d8) == param_1[0x2d8])) {
    this_00 = *(RBBIDataWrapper **)(param_1 + 0x270);
    pRVar2 = *(RBBIDataWrapper **)(this + 0x270);
    if (this_00 == pRVar2) {
      return 1;
    }
    if ((this_00 != (RBBIDataWrapper *)0x0) && (pRVar2 != (RBBIDataWrapper *)0x0)) {
      uVar5 = icu_76_godot::RBBIDataWrapper::operator==(this_00,pRVar2);
      return uVar5;
    }
  }
  return 0;
}



/* icu_76_godot::RuleBasedBreakIterator::getRules() const */

undefined8 * icu_76_godot::RuleBasedBreakIterator::getRules(void)

{
  char cVar1;
  undefined8 *puVar2;
  ulong in_RSI;
  long in_RDI;
  
  if (*(long *)(in_RDI + 0x270) != 0) {
    puVar2 = (undefined8 *)icu_76_godot::RBBIDataWrapper::getRuleSourceString();
    return puVar2;
  }
  if (gRBBIInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gRBBIInitOnce);
    if (cVar1 != '\0') {
      gEmptyString = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,in_RSI);
      if (gEmptyString != (undefined8 *)0x0) {
        *gEmptyString = icu_76_godot::RuleBasedBreakIterator::BreakCache::preceding;
        *(undefined2 *)(gEmptyString + 1) = 2;
      }
      ucln_common_registerCleanup_76_godot(3,rbbi_cleanup_76_godot);
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gRBBIInitOnce);
    }
    return gEmptyString;
  }
  return gEmptyString;
}



/* icu_76_godot::RuleBasedBreakIterator::next(int) */

ulong __thiscall
icu_76_godot::RuleBasedBreakIterator::next(RuleBasedBreakIterator *this,int param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = *(long *)this;
  if (param_1 < 1) {
    if (param_1 != 0) {
      do {
        if (*(code **)(lVar2 + 0x60) == previous) {
          icu_76_godot::RuleBasedBreakIterator::BreakCache::previous(*(UErrorCode **)(this + 0x288))
          ;
          if (this[0x2d8] != (RuleBasedBreakIterator)0x0) {
            uVar3 = 0xffffffff;
            goto LAB_00100836;
          }
          uVar3 = (ulong)*(uint *)(this + 0x27c);
        }
        else {
          uVar3 = (**(code **)(lVar2 + 0x60))(this);
        }
        param_1 = param_1 + 1;
        if ((-1 < param_1) || ((int)uVar3 == -1)) goto LAB_00100836;
        lVar2 = *(long *)this;
      } while( true );
    }
    if (*(code **)(lVar2 + 0x70) != current) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001008ed. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(lVar2 + 0x70))();
        return uVar3;
      }
      goto LAB_001008f9;
    }
    uVar3 = (ulong)*(uint *)(this + 0x27c);
  }
  else {
    while( true ) {
      param_1 = param_1 + -1;
      uVar3 = (**(code **)(lVar2 + 0x68))(this);
      if ((param_1 < 1) || ((int)uVar3 == -1)) break;
      lVar2 = *(long *)this;
    }
  }
LAB_00100836:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
LAB_001008f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RuleBasedBreakIterator::preceding(int) */

ulong __thiscall
icu_76_godot::RuleBasedBreakIterator::preceding(RuleBasedBreakIterator *this,int param_1)

{
  RuleBasedBreakIterator *pRVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  
  pRVar1 = this + 0x1e0;
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = utext_nativeLength_76_godot(pRVar1);
  if (lVar4 < param_1) {
    if (*(code **)(*(long *)this + 0x58) != last) {
      if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001009db. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar5 = (**(code **)(*(long *)this + 0x58))(this);
        return uVar5;
      }
      goto LAB_001009e7;
    }
    uVar3 = utext_nativeLength_76_godot(pRVar1);
    uVar5 = (ulong)uVar3;
    (**(code **)(*(long *)this + 0x88))(this,uVar3);
  }
  else {
    utext_setNativeIndex_76_godot(pRVar1,(long)param_1);
    uVar3 = utext_getNativeIndex_76_godot(pRVar1);
    icu_76_godot::RuleBasedBreakIterator::BreakCache::preceding
              ((int)*(undefined8 *)(this + 0x288),(UErrorCode *)(ulong)uVar3);
    if (this[0x2d8] == (RuleBasedBreakIterator)0x0) {
      uVar5 = (ulong)*(uint *)(this + 0x27c);
    }
    else {
      uVar5 = 0xffffffff;
    }
  }
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
LAB_001009e7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RuleBasedBreakIterator::adoptText(icu_76_godot::CharacterIterator*) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::adoptText
          (RuleBasedBreakIterator *this,CharacterIterator *param_1)

{
  RuleBasedBreakIterator *pRVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined4 local_28;
  undefined4 local_24;
  long local_20;
  
  pRVar1 = *(RuleBasedBreakIterator **)(this + 0x2b0);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if ((pRVar1 != this + 0x2b8) && (pRVar1 != (RuleBasedBreakIterator *)0x0)) {
    (**(code **)(*(long *)pRVar1 + 8))();
  }
  *(CharacterIterator **)(this + 0x2b0) = param_1;
  local_28 = 0;
  icu_76_godot::RuleBasedBreakIterator::BreakCache::reset((int)*(undefined8 *)(this + 0x288),0);
  icu_76_godot::RuleBasedBreakIterator::DictionaryCache::reset();
  if ((param_1 == (CharacterIterator *)0x0) || (*(int *)(param_1 + 0x10) != 0)) {
    utext_openUChars_76_godot(this + 0x1e0,0,0,&local_28);
  }
  else {
    utext_openCharacterIterator_76_godot(this + 0x1e0,param_1,&local_28);
  }
  if (*(code **)(*(long *)this + 0x50) == first) {
    local_24 = 0;
    cVar2 = icu_76_godot::RuleBasedBreakIterator::BreakCache::seek
                      ((int)*(undefined8 *)(this + 0x288));
    if (cVar2 == '\0') {
      icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear
                ((int)*(undefined8 *)(this + 0x288),(UErrorCode *)0x0);
    }
    icu_76_godot::RuleBasedBreakIterator::BreakCache::current();
  }
  else {
    (**(code **)(*(long *)this + 0x50))(this);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RuleBasedBreakIterator::following(int) */

ulong __thiscall
icu_76_godot::RuleBasedBreakIterator::following(RuleBasedBreakIterator *this,int param_1)

{
  long lVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    if (*(code **)(*(long *)this + 0x50) != first) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (**(code **)(*(long *)this + 0x50))();
        return uVar4;
      }
      goto LAB_00100c22;
    }
    cVar2 = icu_76_godot::RuleBasedBreakIterator::BreakCache::seek
                      ((int)*(undefined8 *)(this + 0x288));
    if (cVar2 == '\0') {
      icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear
                ((int)*(undefined8 *)(this + 0x288),(UErrorCode *)0x0);
    }
    icu_76_godot::RuleBasedBreakIterator::BreakCache::current();
    uVar4 = 0;
  }
  else {
    utext_setNativeIndex_76_godot(this + 0x1e0,(long)param_1);
    uVar3 = utext_getNativeIndex_76_godot(this + 0x1e0);
    icu_76_godot::RuleBasedBreakIterator::BreakCache::following
              ((int)*(undefined8 *)(this + 0x288),(UErrorCode *)(ulong)uVar3);
    if (this[0x2d8] == (RuleBasedBreakIterator)0x0) {
      uVar4 = (ulong)*(uint *)(this + 0x27c);
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
LAB_00100c22:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RuleBasedBreakIterator::setText(icu_76_godot::UnicodeString const&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::setText(RuleBasedBreakIterator *this,UnicodeString *param_1)

{
  RuleBasedBreakIterator *pRVar1;
  ushort uVar2;
  RuleBasedBreakIterator *pRVar3;
  char cVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined4 local_2c;
  UnicodeString *local_28;
  long local_20;
  
  pRVar1 = this + 0x2b8;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = 0;
  icu_76_godot::RuleBasedBreakIterator::BreakCache::reset((int)*(undefined8 *)(this + 0x288),0);
  icu_76_godot::RuleBasedBreakIterator::DictionaryCache::reset();
  utext_openConstUnicodeString_76_godot(this + 0x1e0,param_1,&local_2c);
  uVar2 = *(ushort *)(param_1 + 8);
  if ((short)uVar2 < 0) {
    iVar5 = *(int *)(param_1 + 0xc);
  }
  else {
    iVar5 = (int)((short)uVar2 >> 5);
  }
  if ((uVar2 & 0x11) == 0) {
    if ((uVar2 & 2) == 0) {
      local_28 = *(UnicodeString **)(param_1 + 0x18);
    }
    else {
      local_28 = param_1 + 10;
    }
  }
  else {
    local_28 = (UnicodeString *)0x0;
  }
  icu_76_godot::UCharCharacterIterator::setText(pRVar1,&local_28,iVar5);
  pRVar3 = *(RuleBasedBreakIterator **)(this + 0x2b0);
  if ((pRVar3 != (RuleBasedBreakIterator *)0x0) && (pRVar1 != pRVar3)) {
    (**(code **)(*(long *)pRVar3 + 8))();
  }
  *(RuleBasedBreakIterator **)(this + 0x2b0) = pRVar1;
  if (*(code **)(*(long *)this + 0x50) == first) {
    local_28 = (UnicodeString *)((ulong)local_28 & 0xffffffff00000000);
    cVar4 = icu_76_godot::RuleBasedBreakIterator::BreakCache::seek
                      ((int)*(undefined8 *)(this + 0x288));
    if (cVar4 == '\0') {
      icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear
                ((int)*(undefined8 *)(this + 0x288),(UErrorCode *)0x0);
    }
    icu_76_godot::RuleBasedBreakIterator::BreakCache::current();
  }
  else {
    (**(code **)(*(long *)this + 0x50))(this);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::setText(UText*, UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::setText
          (RuleBasedBreakIterator *this,UText *param_1,UErrorCode *param_2)

{
  RuleBasedBreakIterator *pRVar1;
  RuleBasedBreakIterator *pRVar2;
  char cVar3;
  long in_FS_OFFSET;
  undefined *local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_2 < 1) {
    icu_76_godot::RuleBasedBreakIterator::BreakCache::reset((int)*(undefined8 *)(this + 0x288),0);
    icu_76_godot::RuleBasedBreakIterator::DictionaryCache::reset();
    pRVar1 = this + 0x2b8;
    utext_clone_76_godot(this + 0x1e0,param_1,0,1,param_2);
    local_28 = &_LC0;
    icu_76_godot::UCharCharacterIterator::setText(pRVar1,&local_28,0);
    pRVar2 = *(RuleBasedBreakIterator **)(this + 0x2b0);
    if ((pRVar1 != pRVar2) && (pRVar2 != (RuleBasedBreakIterator *)0x0)) {
      (**(code **)(*(long *)pRVar2 + 8))();
    }
    *(RuleBasedBreakIterator **)(this + 0x2b0) = pRVar1;
    if (*(code **)(*(long *)this + 0x50) != first) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00100ec3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)this + 0x50))(this);
        return;
      }
      goto LAB_00100ec5;
    }
    local_28 = (undefined *)((ulong)local_28 & 0xffffffff00000000);
    cVar3 = icu_76_godot::RuleBasedBreakIterator::BreakCache::seek
                      ((int)*(undefined8 *)(this + 0x288));
    if (cVar3 == '\0') {
      icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear
                ((int)*(undefined8 *)(this + 0x288),(UErrorCode *)0x0);
    }
    icu_76_godot::RuleBasedBreakIterator::BreakCache::current();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100ec5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RuleBasedBreakIterator::isBoundary(int) */

undefined8 __thiscall
icu_76_godot::RuleBasedBreakIterator::isBoundary(RuleBasedBreakIterator *this,int param_1)

{
  RuleBasedBreakIterator *pRVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    if (*(code **)(*(long *)this + 0x50) != first) {
      (**(code **)(*(long *)this + 0x50))();
      uVar6 = 0;
      goto LAB_00100f6b;
    }
    cVar3 = icu_76_godot::RuleBasedBreakIterator::BreakCache::seek
                      ((int)*(undefined8 *)(this + 0x288));
    if (cVar3 == '\0') {
      icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear
                ((int)*(undefined8 *)(this + 0x288),(UErrorCode *)0x0);
    }
    icu_76_godot::RuleBasedBreakIterator::BreakCache::current();
LAB_00100ff1:
    uVar6 = 0;
    goto LAB_00100f6b;
  }
  pRVar1 = this + 0x1e0;
  utext_setNativeIndex_76_godot(pRVar1,(long)param_1);
  uVar4 = utext_getNativeIndex_76_godot(pRVar1);
  cVar3 = icu_76_godot::RuleBasedBreakIterator::BreakCache::seek((int)*(undefined8 *)(this + 0x288))
  ;
  if ((cVar3 == '\0') &&
     (cVar3 = icu_76_godot::RuleBasedBreakIterator::BreakCache::populateNear
                        ((int)*(undefined8 *)(this + 0x288),(UErrorCode *)(ulong)uVar4),
     cVar3 == '\0')) {
LAB_00100fa8:
    (**(code **)(*(long *)this + 0x68))(this);
    uVar6 = 0;
  }
  else {
    iVar5 = icu_76_godot::RuleBasedBreakIterator::BreakCache::current();
    if ((int)uVar4 < param_1) {
      if (iVar5 != param_1) goto LAB_00100fa8;
      iVar5 = utext_char32At_76_godot(pRVar1,(long)param_1);
      if (iVar5 == -1) goto LAB_00100ff1;
    }
    else if (iVar5 != param_1) goto LAB_00100fa8;
    uVar6 = 1;
  }
LAB_00100f6b:
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar6;
}



/* icu_76_godot::RuleBasedBreakIterator::getStaticClassID() */

undefined1 * icu_76_godot::RuleBasedBreakIterator::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator(UErrorCode*) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator
          (RuleBasedBreakIterator *this,UErrorCode *param_1)

{
  DictionaryCache *this_00;
  BreakCache *this_01;
  long lVar1;
  RuleBasedBreakIterator *pRVar2;
  long in_FS_OFFSET;
  byte bVar3;
  undefined *local_38;
  long local_30;
  
  bVar3 = 0;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::BreakIterator::BreakIterator((BreakIterator *)this);
  *(undefined ***)this = &PTR__RuleBasedBreakIterator_00103518;
  pRVar2 = this + 0x1e0;
  for (lVar1 = 0x12; lVar1 != 0; lVar1 = lVar1 + -1) {
    *(undefined8 *)pRVar2 = 0;
    pRVar2 = pRVar2 + (ulong)bVar3 * -0x10 + 8;
  }
  *(undefined4 *)(this + 0x1e0) = 0x345ad82c;
  *(undefined4 *)(this + 0x1ec) = 0x90;
  *(undefined8 *)(this + 0x270) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x280) = 0;
  *(undefined4 *)(this + 0x2a8) = 0;
  *(UCharCharacterIterator **)(this + 0x2b0) = (UCharCharacterIterator *)(this + 0x2b8);
  *(undefined1 (*) [16])(this + 0x288) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x298) = (undefined1  [16])0x0;
  local_38 = &_LC0;
  icu_76_godot::UCharCharacterIterator::UCharCharacterIterator
            ((UCharCharacterIterator *)(this + 0x2b8),&local_38,0);
  this[0x2d8] = (RuleBasedBreakIterator)0x0;
  if (param_1 == (UErrorCode *)0x0) {
    param_1 = (UErrorCode *)&local_38;
  }
  this[0x2e8] = (RuleBasedBreakIterator)0x0;
  pRVar2 = (RuleBasedBreakIterator *)0x0;
  *(undefined8 *)(this + 0x2e0) = 0;
  local_38 = (undefined *)((ulong)local_38 & 0xffffffff00000000);
  utext_openUChars_76_godot(this + 0x1e0,0,0,param_1);
  this_00 = (DictionaryCache *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,(ulong)pRVar2);
  if (this_00 == (DictionaryCache *)0x0) {
    if (*(int *)param_1 < 1) {
      *(undefined4 *)param_1 = 7;
    }
  }
  else {
    pRVar2 = this;
    icu_76_godot::RuleBasedBreakIterator::DictionaryCache::DictionaryCache(this_00,this,param_1);
  }
  this_01 = (BreakCache *)icu_76_godot::UMemory::operator_new((UMemory *)0x340,(ulong)pRVar2);
  if (this_01 == (BreakCache *)0x0) {
    if (*(int *)param_1 < 1) {
      *(undefined4 *)param_1 = 7;
      *(undefined4 *)(this + 0x278) = 7;
    }
    else {
      *(int *)(this + 0x278) = *(int *)param_1;
    }
  }
  else {
    pRVar2 = this;
    icu_76_godot::RuleBasedBreakIterator::BreakCache::BreakCache(this_01,this,param_1);
    if (*(int *)param_1 < 1) {
      *(DictionaryCache **)(this + 0x290) = this_00;
      *(BreakCache **)(this + 0x288) = this_01;
      goto LAB_00101198;
    }
    *(int *)(this + 0x278) = *(int *)param_1;
    icu_76_godot::RuleBasedBreakIterator::BreakCache::~BreakCache(this_01);
  }
  if (this_00 != (DictionaryCache *)0x0) {
    icu_76_godot::RuleBasedBreakIterator::DictionaryCache::~DictionaryCache(this_00);
    icu_76_godot::UMemory::operator_delete((UMemory *)this_00,pRVar2);
  }
LAB_00101198:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator(icu_76_godot::RBBIDataHeader*,
   UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator
          (RuleBasedBreakIterator *this,RBBIDataHeader *param_1,UErrorCode *param_2)

{
  int iVar1;
  RBBIDataWrapper *this_00;
  long lVar2;
  UErrorCode *pUVar3;
  
  pUVar3 = param_2;
  RuleBasedBreakIterator(this,param_2);
  this_00 = (RBBIDataWrapper *)icu_76_godot::UMemory::operator_new((UMemory *)0x90,(ulong)pUVar3);
  if (this_00 == (RBBIDataWrapper *)0x0) {
    iVar1 = *(int *)param_2;
    *(undefined8 *)(this + 0x270) = 0;
    if (0 < iVar1) {
      return;
    }
  }
  else {
    icu_76_godot::RBBIDataWrapper::RBBIDataWrapper(this_00,param_1,param_2);
    iVar1 = *(int *)param_2;
    *(RBBIDataWrapper **)(this + 0x270) = this_00;
    if (0 < iVar1) {
      return;
    }
    if (*(uint *)(*(long *)(this_00 + 8) + 0xc) == 0) {
      return;
    }
    lVar2 = uprv_malloc_76_godot((ulong)*(uint *)(*(long *)(this_00 + 8) + 0xc) << 2);
    *(long *)(this + 0x2e0) = lVar2;
    if (lVar2 != 0) {
      return;
    }
  }
  *(undefined4 *)param_2 = 7;
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator(unsigned char const*, unsigned int,
   UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator
          (RuleBasedBreakIterator *this,uchar *param_1,uint param_2,UErrorCode *param_3)

{
  int iVar1;
  RBBIDataWrapper *pRVar2;
  long lVar3;
  UErrorCode *pUVar4;
  
  pUVar4 = param_3;
  RuleBasedBreakIterator(this,param_3);
  if (*(int *)param_3 < 1) {
    if (((param_1 == (uchar *)0x0) || (param_2 < 0x50)) || (param_2 < *(uint *)(param_1 + 8))) {
      *(undefined4 *)param_3 = 1;
    }
    else {
      pRVar2 = (RBBIDataWrapper *)icu_76_godot::UMemory::operator_new((UMemory *)0x90,(ulong)pUVar4)
      ;
      if (pRVar2 == (RBBIDataWrapper *)0x0) {
        iVar1 = *(int *)param_3;
        *(undefined8 *)(this + 0x270) = 0;
        if (0 < iVar1) {
          return;
        }
      }
      else {
        icu_76_godot::RBBIDataWrapper::RBBIDataWrapper(pRVar2,param_1,0,param_3);
        iVar1 = *(int *)param_3;
        *(RBBIDataWrapper **)(this + 0x270) = pRVar2;
        if (0 < iVar1) {
          return;
        }
        if (*(uint *)(*(long *)(pRVar2 + 8) + 0xc) == 0) {
          return;
        }
        lVar3 = uprv_malloc_76_godot((ulong)*(uint *)(*(long *)(pRVar2 + 8) + 0xc) * 4);
        *(long *)(this + 0x2e0) = lVar3;
        if (lVar3 != 0) {
          return;
        }
      }
      *(undefined4 *)param_3 = 7;
    }
  }
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator(UDataMemory*, UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator
          (RuleBasedBreakIterator *this,UDataMemory *param_1,UErrorCode *param_2)

{
  int iVar1;
  RBBIDataWrapper *this_00;
  long lVar2;
  UErrorCode *pUVar3;
  
  pUVar3 = param_2;
  RuleBasedBreakIterator(this,param_2);
  this_00 = (RBBIDataWrapper *)icu_76_godot::UMemory::operator_new((UMemory *)0x90,(ulong)pUVar3);
  if (this_00 == (RBBIDataWrapper *)0x0) {
    iVar1 = *(int *)param_2;
    *(undefined8 *)(this + 0x270) = 0;
    if (0 < iVar1) {
      return;
    }
  }
  else {
    icu_76_godot::RBBIDataWrapper::RBBIDataWrapper(this_00,param_1,param_2);
    iVar1 = *(int *)param_2;
    *(RBBIDataWrapper **)(this + 0x270) = this_00;
    if (0 < iVar1) {
      return;
    }
    if (*(uint *)(*(long *)(this_00 + 8) + 0xc) == 0) {
      return;
    }
    lVar2 = uprv_malloc_76_godot((ulong)*(uint *)(*(long *)(this_00 + 8) + 0xc) << 2);
    *(long *)(this + 0x2e0) = lVar2;
    if (lVar2 != 0) {
      return;
    }
  }
  *(undefined4 *)param_2 = 7;
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator(UDataMemory*, signed char,
   UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator
          (RuleBasedBreakIterator *this,UDataMemory *param_1,RuleBasedBreakIterator param_3,
          UErrorCode *param_4)

{
  RuleBasedBreakIterator(this,param_1,param_4);
  this[0x2e8] = param_3;
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator() */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator(RuleBasedBreakIterator *this)

{
  RuleBasedBreakIterator(this,(UErrorCode *)0x0);
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::clone() const */

RuleBasedBreakIterator * icu_76_godot::RuleBasedBreakIterator::clone(void)

{
  RuleBasedBreakIterator *this;
  ulong in_RSI;
  RuleBasedBreakIterator *in_RDI;
  
  this = (RuleBasedBreakIterator *)icu_76_godot::UMemory::operator_new((UMemory *)0x2f0,in_RSI);
  if (this != (RuleBasedBreakIterator *)0x0) {
    RuleBasedBreakIterator(this,(UErrorCode *)0x0);
    if (this != in_RDI) {
      operator=(this,in_RDI);
    }
  }
  return this;
}



/* icu_76_godot::RuleBasedBreakIterator::createBufferClone(void*, int&, UErrorCode&) */

RuleBasedBreakIterator * __thiscall
icu_76_godot::RuleBasedBreakIterator::createBufferClone
          (RuleBasedBreakIterator *this,void *param_1,int *param_2,UErrorCode *param_3)

{
  RuleBasedBreakIterator *this_00;
  
  if ((int)*(uint *)param_3 < 1) {
    if (*param_2 == 0) {
      *param_2 = 1;
    }
    else {
      if (*(code **)(*(long *)this + 0x20) == clone) {
        this_00 = (RuleBasedBreakIterator *)
                  icu_76_godot::UMemory::operator_new((UMemory *)0x2f0,(ulong)*(uint *)param_3);
        if (this_00 != (RuleBasedBreakIterator *)0x0) {
          RuleBasedBreakIterator(this_00,(UErrorCode *)0x0);
          if (this != this_00) {
            operator=(this_00,this);
          }
LAB_00101519:
          *(undefined4 *)param_3 = 0xffffff82;
          return this_00;
        }
      }
      else {
        this_00 = (RuleBasedBreakIterator *)(**(code **)(*(long *)this + 0x20))();
        if (this_00 != (RuleBasedBreakIterator *)0x0) goto LAB_00101519;
      }
      *(undefined4 *)param_3 = 7;
    }
  }
  return (RuleBasedBreakIterator *)0x0;
}



/* icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator(icu_76_godot::RuleBasedBreakIterator
   const&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator
          (RuleBasedBreakIterator *this,RuleBasedBreakIterator *param_1)

{
  RuleBasedBreakIterator(this,(UErrorCode *)0x0);
  if (this != param_1) {
    operator=(this,param_1);
    return;
  }
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::RuleBasedBreakIterator
   const&) */

RuleBasedBreakIterator * __thiscall
icu_76_godot::RuleBasedBreakIterator::operator=
          (RuleBasedBreakIterator *this,RuleBasedBreakIterator *param_1)

{
  if (this != param_1) {
    operator=(this,param_1);
  }
  return this;
}



/* icu_76_godot::RuleBasedBreakIterator::handleNext() */

int __thiscall icu_76_godot::RuleBasedBreakIterator::handleNext(RuleBasedBreakIterator *this)

{
  RuleBasedBreakIterator *pRVar1;
  byte bVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  long lVar15;
  byte *pbVar16;
  ushort *puVar17;
  long *plVar18;
  byte bVar19;
  ulong uVar20;
  long lVar21;
  char cVar22;
  int local_40;
  
  lVar7 = *(long *)(*(long *)(this + 0x270) + 8);
  iVar9 = ucptrie_getValueWidth_76_godot(*(undefined8 *)(*(long *)(this + 0x270) + 0x30));
  lVar21 = *(long *)(*(long *)(this + 0x270) + 8);
  uVar4 = *(uint *)(lVar21 + 8);
  uVar5 = *(uint *)(lVar21 + 4);
  iVar6 = *(int *)(this + 0x27c);
  lVar13 = (long)iVar6;
  local_40 = iVar6;
  if ((*(byte *)(lVar7 + 0x10) & 4) == 0) {
    lVar15 = lVar13 - *(long *)(this + 0x200);
    lVar7 = lVar21 + 0x14;
    *(undefined4 *)(this + 0x280) = 0;
    *(undefined4 *)(this + 0x2a8) = 0;
    iVar10 = (int)lVar15;
    if (iVar9 == 2) {
      if (((lVar15 < 0) || (*(int *)(this + 0x1fc) <= lVar15)) ||
         (0xdbff < *(ushort *)(*(long *)(this + 0x210) + lVar15 * 2))) {
        utext_setNativeIndex_76_godot(this + 0x1e0,lVar13);
        iVar10 = *(int *)(this + 0x208);
      }
      else {
        *(int *)(this + 0x208) = iVar10;
      }
      if ((iVar10 < *(int *)(this + 0x20c)) &&
         (uVar3 = *(ushort *)(*(long *)(this + 0x210) + (long)iVar10 * 2), uVar11 = (uint)uVar3,
         uVar3 < 0xd800)) {
        *(int *)(this + 0x208) = iVar10 + 1;
      }
      else {
        uVar11 = utext_next32_76_godot(this + 0x1e0);
        if (uVar11 == 0xffffffff) goto LAB_001024f7;
      }
      puVar17 = (ushort *)(lVar7 + (ulong)uVar5);
      uVar12 = *(uint *)(lVar21 + 0x10) & 2;
      cVar22 = uVar12 == 0;
      pRVar1 = this + 0x1e0;
      uVar12 = (ushort)-(ushort)(uVar12 != 0) & 2;
LAB_0010220c:
      if (uVar11 != 0xffffffff) {
        if (cVar22 == '\x01') goto LAB_00102446;
        uVar14 = (uint)puVar17[(ulong)uVar12 + 3];
        puVar17 = (ushort *)(lVar7 + (ulong)(uVar14 * uVar5));
        uVar20 = (ulong)*puVar17;
        if (*puVar17 != 1) goto LAB_00102247;
        if (cVar22 == '\0') goto LAB_0010236b;
        goto LAB_00102349;
      }
      if (cVar22 != '\x02') {
LAB_001023ba:
        uVar11 = 0xffffffff;
        cVar22 = '\x02';
        uVar12 = 1;
        uVar14 = (uint)puVar17[4];
        puVar17 = (ushort *)(lVar7 + (ulong)(uVar14 * uVar5));
        uVar3 = *puVar17;
        uVar20 = (ulong)uVar3;
        if (uVar3 != 1) goto LAB_00102247;
        local_40 = *(int *)(this + 0x208);
        uVar12 = (uint)uVar3;
        uVar8 = (uint)uVar3;
        if (*(int *)(this + 0x1fc) < local_40) goto LAB_00102400;
LAB_0010235e:
        local_40 = local_40 + *(int *)(this + 0x200);
LAB_0010236b:
        do {
          *(uint *)(this + 0x280) = (uint)puVar17[2];
LAB_00102261:
          uVar3 = puVar17[1];
          if (1 < uVar3) {
            if (*(int *)(this + 0x1fc) < *(int *)(this + 0x208)) {
              iVar9 = (**(code **)(*(long *)(this + 0x218) + 0x40))(pRVar1);
            }
            else {
              iVar9 = *(int *)(this + 0x208) + *(int *)(this + 0x200);
            }
            *(int *)(*(long *)(this + 0x2e0) + (ulong)uVar3 * 4) = iVar9;
          }
          if ((short)uVar14 == 0) break;
          if (cVar22 != '\x01') {
            if (cVar22 == '\0') {
              cVar22 = '\x01';
            }
            goto LAB_0010220c;
          }
          iVar9 = *(int *)(this + 0x208);
          if ((iVar9 < *(int *)(this + 0x20c)) &&
             (uVar3 = *(ushort *)(*(long *)(this + 0x210) + (long)iVar9 * 2), uVar3 < 0xd800)) {
            uVar11 = (uint)uVar3;
            *(int *)(this + 0x208) = iVar9 + 1;
            plVar18 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar21 = plVar18[1];
LAB_001022ef:
            lVar15 = (long)(int)((uint)*(ushort *)(*plVar18 + (long)((int)uVar11 >> 6) * 2) +
                                (uVar11 & 0x3f));
          }
          else {
            uVar11 = utext_next32_76_godot(pRVar1);
            if (uVar11 == 0xffffffff) goto LAB_001023ba;
LAB_00102446:
            plVar18 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar21 = plVar18[1];
            if (uVar11 < 0x10000) goto LAB_001022ef;
            if (uVar11 < 0x110000) {
              if ((int)uVar11 < (int)plVar18[3]) {
                iVar9 = ucptrie_internalSmallIndex_76_godot(plVar18,uVar11);
                lVar15 = (long)iVar9;
              }
              else {
                lVar15 = (long)(*(int *)((long)plVar18 + 0x14) + -2);
              }
            }
            else {
              lVar15 = (long)(*(int *)((long)plVar18 + 0x14) + -1);
            }
          }
          uVar12 = (uint)*(byte *)(lVar21 + lVar15);
          cVar22 = '\x01';
          *(uint *)(this + 0x2a8) = (*(int *)(this + 0x2a8) + 1) - (uint)(uVar12 < uVar4);
          uVar14 = (uint)puVar17[(long)(int)uVar12 + 3];
          puVar17 = (ushort *)(lVar7 + (ulong)(uVar14 * uVar5));
          uVar20 = (ulong)*puVar17;
          if (*puVar17 != 1) {
LAB_00102247:
            if ((1 < (ushort)uVar20) &&
               (iVar9 = *(int *)(*(long *)(this + 0x2e0) + uVar20 * 4), -1 < iVar9))
            goto LAB_00102530;
            goto LAB_00102261;
          }
LAB_00102349:
          local_40 = *(int *)(this + 0x208);
          uVar8 = uVar12;
          if (local_40 <= *(int *)(this + 0x1fc)) goto LAB_0010235e;
LAB_00102400:
          uVar12 = uVar8;
          local_40 = (**(code **)(*(long *)(this + 0x218) + 0x40))(pRVar1);
        } while( true );
      }
    }
    else {
      if (((lVar15 < 0) || (*(int *)(this + 0x1fc) <= lVar15)) ||
         (0xdbff < *(ushort *)(*(long *)(this + 0x210) + lVar15 * 2))) {
        utext_setNativeIndex_76_godot(this + 0x1e0,lVar13);
        iVar10 = *(int *)(this + 0x208);
      }
      else {
        *(int *)(this + 0x208) = iVar10;
      }
      if ((iVar10 < *(int *)(this + 0x20c)) &&
         (uVar3 = *(ushort *)(*(long *)(this + 0x210) + (long)iVar10 * 2), uVar11 = (uint)uVar3,
         uVar3 < 0xd800)) {
        *(int *)(this + 0x208) = iVar10 + 1;
      }
      else {
        uVar11 = utext_next32_76_godot(this + 0x1e0);
        if (uVar11 == 0xffffffff) goto LAB_001024f7;
      }
      puVar17 = (ushort *)(lVar7 + (ulong)uVar5);
      uVar12 = *(uint *)(lVar21 + 0x10) & 2;
      cVar22 = uVar12 == 0;
      pRVar1 = this + 0x1e0;
      uVar12 = (ushort)-(ushort)(uVar12 != 0) & 2;
LAB_00101ad4:
      if (uVar11 != 0xffffffff) {
        if (cVar22 == '\x01') goto LAB_00101d06;
        uVar14 = (uint)puVar17[(ulong)uVar12 + 3];
        puVar17 = (ushort *)(lVar7 + (ulong)(uVar14 * uVar5));
        uVar20 = (ulong)*puVar17;
        if (*puVar17 != 1) goto LAB_00101b0f;
        if (cVar22 == '\0') goto LAB_00101c35;
        goto LAB_00101c13;
      }
      if (cVar22 != '\x02') {
LAB_00101c7a:
        uVar11 = 0xffffffff;
        cVar22 = '\x02';
        uVar12 = 1;
        uVar14 = (uint)puVar17[4];
        puVar17 = (ushort *)(lVar7 + (ulong)(uVar14 * uVar5));
        uVar3 = *puVar17;
        uVar20 = (ulong)uVar3;
        if (uVar3 != 1) goto LAB_00101b0f;
        local_40 = *(int *)(this + 0x208);
        uVar12 = (uint)uVar3;
        uVar8 = (uint)uVar3;
        if (*(int *)(this + 0x1fc) < local_40) goto LAB_00101cc0;
LAB_00101c28:
        local_40 = local_40 + *(int *)(this + 0x200);
LAB_00101c35:
        do {
          *(uint *)(this + 0x280) = (uint)puVar17[2];
LAB_00101b29:
          uVar3 = puVar17[1];
          if (1 < uVar3) {
            if (*(int *)(this + 0x1fc) < *(int *)(this + 0x208)) {
              iVar9 = (**(code **)(*(long *)(this + 0x218) + 0x40))(pRVar1);
            }
            else {
              iVar9 = *(int *)(this + 0x208) + *(int *)(this + 0x200);
            }
            *(int *)(*(long *)(this + 0x2e0) + (ulong)uVar3 * 4) = iVar9;
          }
          if ((short)uVar14 == 0) break;
          if (cVar22 != '\x01') {
            if (cVar22 == '\0') {
              cVar22 = '\x01';
            }
            goto LAB_00101ad4;
          }
          iVar9 = *(int *)(this + 0x208);
          if ((iVar9 < *(int *)(this + 0x20c)) &&
             (uVar3 = *(ushort *)(*(long *)(this + 0x210) + (long)iVar9 * 2), uVar3 < 0xd800)) {
            uVar11 = (uint)uVar3;
            *(int *)(this + 0x208) = iVar9 + 1;
            plVar18 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar21 = plVar18[1];
LAB_00101bb7:
            lVar15 = (long)(int)((uint)*(ushort *)(*plVar18 + (long)((int)uVar11 >> 6) * 2) +
                                (uVar11 & 0x3f)) * 2;
          }
          else {
            uVar11 = utext_next32_76_godot(pRVar1);
            if (uVar11 == 0xffffffff) goto LAB_00101c7a;
LAB_00101d06:
            plVar18 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar21 = plVar18[1];
            if (uVar11 < 0x10000) goto LAB_00101bb7;
            if (uVar11 < 0x110000) {
              if ((int)uVar11 < (int)plVar18[3]) {
                iVar9 = ucptrie_internalSmallIndex_76_godot(plVar18,uVar11);
                lVar15 = (long)iVar9 * 2;
              }
              else {
                lVar15 = (long)(*(int *)((long)plVar18 + 0x14) + -2) * 2;
              }
            }
            else {
              lVar15 = (long)(*(int *)((long)plVar18 + 0x14) + -1) * 2;
            }
          }
          uVar3 = *(ushort *)(lVar21 + lVar15);
          cVar22 = '\x01';
          uVar12 = (uint)uVar3;
          *(uint *)(this + 0x2a8) = (*(int *)(this + 0x2a8) + 1) - (uint)(uVar12 < uVar4);
          uVar14 = (uint)puVar17[(long)(int)(uint)uVar3 + 3];
          puVar17 = (ushort *)(lVar7 + (ulong)(uVar14 * uVar5));
          uVar20 = (ulong)*puVar17;
          if (*puVar17 != 1) {
LAB_00101b0f:
            if ((1 < (ushort)uVar20) &&
               (iVar9 = *(int *)(*(long *)(this + 0x2e0) + uVar20 * 4), -1 < iVar9)) {
LAB_00102530:
              uVar3 = puVar17[2];
              *(int *)(this + 0x27c) = iVar9;
              *(uint *)(this + 0x280) = (uint)uVar3;
              return iVar9;
            }
            goto LAB_00101b29;
          }
LAB_00101c13:
          local_40 = *(int *)(this + 0x208);
          uVar8 = uVar12;
          if (local_40 <= *(int *)(this + 0x1fc)) goto LAB_00101c28;
LAB_00101cc0:
          uVar12 = uVar8;
          local_40 = (**(code **)(*(long *)(this + 0x218) + 0x40))(pRVar1);
        } while( true );
      }
    }
  }
  else {
    lVar15 = lVar13 - *(long *)(this + 0x200);
    lVar7 = lVar21 + 0x14;
    *(undefined4 *)(this + 0x280) = 0;
    *(undefined4 *)(this + 0x2a8) = 0;
    iVar10 = (int)lVar15;
    if (iVar9 == 2) {
      if (((lVar15 < 0) || (*(int *)(this + 0x1fc) <= lVar15)) ||
         (0xdbff < *(ushort *)(*(long *)(this + 0x210) + lVar15 * 2))) {
        utext_setNativeIndex_76_godot(this + 0x1e0,lVar13);
        iVar10 = *(int *)(this + 0x208);
      }
      else {
        *(int *)(this + 0x208) = iVar10;
      }
      if ((iVar10 < *(int *)(this + 0x20c)) &&
         (uVar3 = *(ushort *)(*(long *)(this + 0x210) + (long)iVar10 * 2), uVar11 = (uint)uVar3,
         uVar3 < 0xd800)) {
        *(int *)(this + 0x208) = iVar10 + 1;
      }
      else {
        uVar11 = utext_next32_76_godot(this + 0x1e0);
        if (uVar11 == 0xffffffff) goto LAB_001024f7;
      }
      pbVar16 = (byte *)(lVar7 + (ulong)uVar5);
      uVar12 = *(uint *)(lVar21 + 0x10) & 2;
      cVar22 = uVar12 == 0;
      pRVar1 = this + 0x1e0;
      uVar12 = (ushort)-(ushort)(uVar12 != 0) & 2;
LAB_00101e4c:
      if (uVar11 != 0xffffffff) {
        if (cVar22 == '\x01') goto LAB_001020ee;
        uVar14 = (uint)pbVar16[(ulong)uVar12 + 3];
        pbVar16 = (byte *)(lVar7 + (ulong)(uVar14 * uVar5));
        uVar20 = (ulong)*pbVar16;
        if (*pbVar16 != 1) goto LAB_00101e89;
        if (cVar22 == '\0') goto LAB_00101fa8;
        goto LAB_00101f86;
      }
      if (cVar22 != '\x02') {
LAB_0010205a:
        bVar19 = pbVar16[4];
        uVar11 = 0xffffffff;
        cVar22 = '\x02';
        uVar12 = 1;
        uVar14 = (uint)bVar19;
        pbVar16 = (byte *)(lVar7 + (ulong)(uVar14 * uVar5));
        bVar2 = *pbVar16;
        uVar20 = (ulong)bVar2;
        if (bVar2 != 1) goto LAB_00101e89;
        local_40 = *(int *)(this + 0x208);
        uVar12 = (uint)bVar2;
        uVar8 = (uint)bVar2;
        if (*(int *)(this + 0x1fc) < local_40) goto LAB_001020a2;
LAB_00101f9b:
        local_40 = local_40 + *(int *)(this + 0x200);
LAB_00101fa8:
        do {
          *(uint *)(this + 0x280) = (uint)pbVar16[2];
LAB_00101ea2:
          bVar19 = pbVar16[1];
          if (1 < bVar19) {
            if (*(int *)(this + 0x1fc) < *(int *)(this + 0x208)) {
              iVar9 = (**(code **)(*(long *)(this + 0x218) + 0x40))(pRVar1);
            }
            else {
              iVar9 = *(int *)(this + 0x208) + *(int *)(this + 0x200);
            }
            *(int *)(*(long *)(this + 0x2e0) + (ulong)bVar19 * 4) = iVar9;
          }
          if ((char)uVar14 == '\0') break;
          if (cVar22 != '\x01') {
            if (cVar22 == '\0') {
              cVar22 = '\x01';
            }
            goto LAB_00101e4c;
          }
          iVar9 = *(int *)(this + 0x208);
          if ((iVar9 < *(int *)(this + 0x20c)) &&
             (uVar3 = *(ushort *)(*(long *)(this + 0x210) + (long)iVar9 * 2), uVar3 < 0xd800)) {
            uVar11 = (uint)uVar3;
            *(int *)(this + 0x208) = iVar9 + 1;
            plVar18 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar21 = plVar18[1];
LAB_00101f2a:
            lVar15 = (long)(int)((uint)*(ushort *)(*plVar18 + (long)((int)uVar11 >> 6) * 2) +
                                (uVar11 & 0x3f));
          }
          else {
            uVar11 = utext_next32_76_godot(pRVar1);
            if (uVar11 == 0xffffffff) goto LAB_0010205a;
LAB_001020ee:
            plVar18 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar21 = plVar18[1];
            if (uVar11 < 0x10000) goto LAB_00101f2a;
            if (uVar11 < 0x110000) {
              if ((int)uVar11 < (int)plVar18[3]) {
                iVar9 = ucptrie_internalSmallIndex_76_godot(plVar18,uVar11);
                lVar15 = (long)iVar9;
              }
              else {
                lVar15 = (long)(*(int *)((long)plVar18 + 0x14) + -2);
              }
            }
            else {
              lVar15 = (long)(*(int *)((long)plVar18 + 0x14) + -1);
            }
          }
          uVar12 = (uint)*(byte *)(lVar21 + lVar15);
          cVar22 = '\x01';
          *(uint *)(this + 0x2a8) = (*(int *)(this + 0x2a8) + 1) - (uint)(uVar12 < uVar4);
          uVar14 = (uint)pbVar16[(long)(int)uVar12 + 3];
          pbVar16 = (byte *)(lVar7 + (ulong)(uVar14 * uVar5));
          uVar20 = (ulong)*pbVar16;
          if (*pbVar16 != 1) {
LAB_00101e89:
            if ((1 < (ushort)uVar20) &&
               (iVar9 = *(int *)(*(long *)(this + 0x2e0) + uVar20 * 4), -1 < iVar9))
            goto LAB_00102550;
            goto LAB_00101ea2;
          }
LAB_00101f86:
          bVar19 = (byte)uVar14;
          local_40 = *(int *)(this + 0x208);
          uVar8 = uVar12;
          if (local_40 <= *(int *)(this + 0x1fc)) goto LAB_00101f9b;
LAB_001020a2:
          uVar12 = uVar8;
          local_40 = (**(code **)(*(long *)(this + 0x218) + 0x40))(pRVar1);
          uVar14 = (uint)bVar19;
        } while( true );
      }
    }
    else {
      if (((lVar15 < 0) || (*(int *)(this + 0x1fc) <= lVar15)) ||
         (0xdbff < *(ushort *)(*(long *)(this + 0x210) + lVar15 * 2))) {
        utext_setNativeIndex_76_godot(this + 0x1e0,lVar13);
        iVar10 = *(int *)(this + 0x208);
      }
      else {
        *(int *)(this + 0x208) = iVar10;
      }
      if ((iVar10 < *(int *)(this + 0x20c)) &&
         (uVar3 = *(ushort *)(*(long *)(this + 0x210) + (long)iVar10 * 2), uVar11 = (uint)uVar3,
         uVar3 < 0xd800)) {
        *(int *)(this + 0x208) = iVar10 + 1;
      }
      else {
        uVar11 = utext_next32_76_godot(this + 0x1e0);
        if (uVar11 == 0xffffffff) {
LAB_001024f7:
          this[0x2d8] = (RuleBasedBreakIterator)0x1;
          return -1;
        }
      }
      pbVar16 = (byte *)(lVar7 + (ulong)uVar5);
      uVar12 = *(uint *)(lVar21 + 0x10) & 2;
      cVar22 = uVar12 == 0;
      pRVar1 = this + 0x1e0;
      uVar12 = (ushort)-(ushort)(uVar12 != 0) & 2;
LAB_00101714:
      if (uVar11 != 0xffffffff) {
        if (cVar22 == '\x01') goto LAB_00101956;
        uVar14 = (uint)pbVar16[(ulong)uVar12 + 3];
        pbVar16 = (byte *)(lVar7 + (ulong)(uVar14 * uVar5));
        uVar20 = (ulong)*pbVar16;
        if (*pbVar16 != 1) goto LAB_00101751;
        if (cVar22 == '\0') goto LAB_00101872;
        goto LAB_00101850;
      }
      if (cVar22 != '\x02') {
LAB_001018c2:
        bVar19 = pbVar16[4];
        uVar11 = 0xffffffff;
        cVar22 = '\x02';
        uVar12 = 1;
        uVar14 = (uint)bVar19;
        pbVar16 = (byte *)(lVar7 + (ulong)(uVar14 * uVar5));
        bVar2 = *pbVar16;
        uVar20 = (ulong)bVar2;
        if (bVar2 != 1) goto LAB_00101751;
        local_40 = *(int *)(this + 0x208);
        uVar12 = (uint)bVar2;
        uVar8 = (uint)bVar2;
        if (*(int *)(this + 0x1fc) < local_40) goto LAB_0010190a;
LAB_00101865:
        local_40 = local_40 + *(int *)(this + 0x200);
LAB_00101872:
        do {
          *(uint *)(this + 0x280) = (uint)pbVar16[2];
LAB_0010176a:
          bVar19 = pbVar16[1];
          if (1 < bVar19) {
            if (*(int *)(this + 0x1fc) < *(int *)(this + 0x208)) {
              iVar9 = (**(code **)(*(long *)(this + 0x218) + 0x40))(pRVar1);
            }
            else {
              iVar9 = *(int *)(this + 0x208) + *(int *)(this + 0x200);
            }
            *(int *)(*(long *)(this + 0x2e0) + (ulong)bVar19 * 4) = iVar9;
          }
          if ((char)uVar14 == '\0') break;
          if (cVar22 != '\x01') {
            if (cVar22 == '\0') {
              cVar22 = '\x01';
            }
            goto LAB_00101714;
          }
          iVar9 = *(int *)(this + 0x208);
          if ((iVar9 < *(int *)(this + 0x20c)) &&
             (uVar3 = *(ushort *)(*(long *)(this + 0x210) + (long)iVar9 * 2), uVar3 < 0xd800)) {
            uVar11 = (uint)uVar3;
            *(int *)(this + 0x208) = iVar9 + 1;
            plVar18 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar21 = plVar18[1];
LAB_001017f2:
            lVar15 = (long)(int)((uint)*(ushort *)(*plVar18 + (long)((int)uVar11 >> 6) * 2) +
                                (uVar11 & 0x3f)) * 2;
          }
          else {
            uVar11 = utext_next32_76_godot(pRVar1);
            if (uVar11 == 0xffffffff) goto LAB_001018c2;
LAB_00101956:
            plVar18 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar21 = plVar18[1];
            if (uVar11 < 0x10000) goto LAB_001017f2;
            if (uVar11 < 0x110000) {
              if ((int)uVar11 < (int)plVar18[3]) {
                iVar9 = ucptrie_internalSmallIndex_76_godot(plVar18,uVar11);
                lVar15 = (long)iVar9 * 2;
              }
              else {
                lVar15 = (long)(*(int *)((long)plVar18 + 0x14) + -2) * 2;
              }
            }
            else {
              lVar15 = (long)(*(int *)((long)plVar18 + 0x14) + -1) * 2;
            }
          }
          uVar3 = *(ushort *)(lVar21 + lVar15);
          cVar22 = '\x01';
          uVar12 = (uint)uVar3;
          *(uint *)(this + 0x2a8) = (*(int *)(this + 0x2a8) + 1) - (uint)(uVar12 < uVar4);
          uVar14 = (uint)pbVar16[(long)(int)(uint)uVar3 + 3];
          pbVar16 = (byte *)(lVar7 + (ulong)(uVar14 * uVar5));
          uVar20 = (ulong)*pbVar16;
          if (*pbVar16 != 1) {
LAB_00101751:
            if ((1 < (ushort)uVar20) &&
               (iVar9 = *(int *)(*(long *)(this + 0x2e0) + uVar20 * 4), -1 < iVar9)) {
LAB_00102550:
              bVar19 = pbVar16[2];
              *(int *)(this + 0x27c) = iVar9;
              *(uint *)(this + 0x280) = (uint)bVar19;
              return iVar9;
            }
            goto LAB_0010176a;
          }
LAB_00101850:
          bVar19 = (byte)uVar14;
          local_40 = *(int *)(this + 0x208);
          uVar8 = uVar12;
          if (local_40 <= *(int *)(this + 0x1fc)) goto LAB_00101865;
LAB_0010190a:
          uVar12 = uVar8;
          local_40 = (**(code **)(*(long *)(this + 0x218) + 0x40))(pRVar1);
          uVar14 = (uint)bVar19;
        } while( true );
      }
    }
  }
  if (local_40 == iVar6) {
    pRVar1 = this + 0x1e0;
    utext_setNativeIndex_76_godot(pRVar1,lVar13);
    utext_next32_76_godot(pRVar1);
    local_40 = utext_getNativeIndex_76_godot(pRVar1);
    *(undefined4 *)(this + 0x280) = 0;
  }
  *(int *)(this + 0x27c) = local_40;
  return local_40;
}



/* icu_76_godot::RuleBasedBreakIterator::handleSafePrevious(int) */

ulong __thiscall
icu_76_godot::RuleBasedBreakIterator::handleSafePrevious(RuleBasedBreakIterator *this,int param_1)

{
  byte bVar1;
  ushort uVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  
  lVar8 = *(long *)(*(long *)(this + 0x270) + 0x10);
  iVar4 = ucptrie_getValueWidth_76_godot(*(undefined8 *)(*(long *)(this + 0x270) + 0x30));
  lVar9 = *(long *)(this + 0x270);
  lVar3 = *(long *)(lVar9 + 0x10);
  if ((*(byte *)(lVar8 + 0x10) & 4) == 0) {
    lVar8 = (long)param_1 - *(long *)(this + 0x200);
    if (iVar4 == 2) {
      if (((lVar8 < 0) || (*(int *)(this + 0x1fc) <= lVar8)) ||
         (0xdbff < *(ushort *)(*(long *)(this + 0x210) + lVar8 * 2))) {
        utext_setNativeIndex_76_godot(this + 0x1e0);
        lVar9 = *(long *)(this + 0x270);
      }
      else {
        *(int *)(this + 0x208) = (int)lVar8;
      }
      if (lVar9 != 0) {
        if (*(int *)(this + 0x1fc) < *(int *)(this + 0x208)) {
          lVar8 = (**(code **)(*(long *)(this + 0x218) + 0x40))(this + 0x1e0);
        }
        else {
          lVar8 = (long)*(int *)(this + 0x208) + *(long *)(this + 0x200);
        }
        if (lVar8 != 0) {
          iVar4 = *(int *)(this + 0x208);
          if ((iVar4 < 1) || (0xd7ff < *(ushort *)(*(long *)(this + 0x210) + -2 + (long)iVar4 * 2)))
          {
            uVar5 = utext_previous32_76_godot(this + 0x1e0);
            lVar8 = (ulong)*(uint *)(lVar3 + 4) + lVar3 + 0x14;
            if (uVar5 == 0xffffffff) goto LAB_00102b13;
          }
          else {
            *(int *)(this + 0x208) = iVar4 + -1;
            uVar5 = (uint)*(ushort *)(*(long *)(this + 0x210) + (long)(iVar4 + -1) * 2);
            lVar8 = (ulong)*(uint *)(lVar3 + 4) + lVar3 + 0x14;
          }
          do {
            plVar10 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar9 = plVar10[1];
            if (uVar5 < 0x10000) goto LAB_00102d82;
            if (uVar5 < 0x110000) {
              if ((int)uVar5 < (int)plVar10[3]) {
                iVar4 = ucptrie_internalSmallIndex_76_godot();
                lVar6 = (long)iVar4;
              }
              else {
                lVar6 = (long)(*(int *)((long)plVar10 + 0x14) + -2);
              }
            }
            else {
              lVar6 = (long)(*(int *)((long)plVar10 + 0x14) + -1);
            }
            while( true ) {
              uVar2 = *(ushort *)(lVar8 + 6 + (ulong)*(byte *)(lVar9 + lVar6) * 2);
              iVar4 = *(int *)(this + 0x208);
              lVar8 = (ulong)((uint)uVar2 * *(int *)(lVar3 + 4)) + lVar3 + 0x14;
              if (uVar2 == 0) goto LAB_00102b19;
              if ((iVar4 < 1) ||
                 (0xd7ff < *(ushort *)(*(long *)(this + 0x210) + -2 + (long)iVar4 * 2))) break;
              *(int *)(this + 0x208) = iVar4 + -1;
              uVar5 = (uint)*(ushort *)(*(long *)(this + 0x210) + (long)(iVar4 + -1) * 2);
              plVar10 = *(long **)(*(long *)(this + 0x270) + 0x30);
              lVar9 = plVar10[1];
LAB_00102d82:
              lVar6 = (long)(int)((uint)*(ushort *)(*plVar10 + (long)((int)uVar5 >> 6) * 2) +
                                 (uVar5 & 0x3f));
            }
            uVar5 = utext_previous32_76_godot(this + 0x1e0);
          } while (uVar5 != 0xffffffff);
          goto LAB_00102b13;
        }
      }
    }
    else {
      if (((lVar8 < 0) || (*(int *)(this + 0x1fc) <= lVar8)) ||
         (0xdbff < *(ushort *)(*(long *)(this + 0x210) + lVar8 * 2))) {
        utext_setNativeIndex_76_godot(this + 0x1e0);
        lVar9 = *(long *)(this + 0x270);
      }
      else {
        *(int *)(this + 0x208) = (int)lVar8;
      }
      if (lVar9 != 0) {
        if (*(int *)(this + 0x1fc) < *(int *)(this + 0x208)) {
          lVar8 = (**(code **)(*(long *)(this + 0x218) + 0x40))(this + 0x1e0);
        }
        else {
          lVar8 = (long)*(int *)(this + 0x208) + *(long *)(this + 0x200);
        }
        if (lVar8 != 0) {
          iVar4 = *(int *)(this + 0x208);
          if ((iVar4 < 1) || (0xd7ff < *(ushort *)(*(long *)(this + 0x210) + -2 + (long)iVar4 * 2)))
          {
            uVar5 = utext_previous32_76_godot(this + 0x1e0);
            lVar8 = (ulong)*(uint *)(lVar3 + 4) + lVar3 + 0x14;
            if (uVar5 == 0xffffffff) goto LAB_00102b13;
          }
          else {
            *(int *)(this + 0x208) = iVar4 + -1;
            uVar5 = (uint)*(ushort *)(*(long *)(this + 0x210) + (long)(iVar4 + -1) * 2);
            lVar8 = (ulong)*(uint *)(lVar3 + 4) + lVar3 + 0x14;
          }
          do {
            plVar10 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar9 = plVar10[1];
            if (uVar5 < 0x10000) goto LAB_0010291a;
            if (uVar5 < 0x110000) {
              if ((int)uVar5 < (int)plVar10[3]) {
                iVar4 = ucptrie_internalSmallIndex_76_godot();
                lVar6 = (long)iVar4 * 2;
              }
              else {
                lVar6 = (long)(*(int *)((long)plVar10 + 0x14) + -2) * 2;
              }
            }
            else {
              lVar6 = (long)(*(int *)((long)plVar10 + 0x14) + -1) * 2;
            }
            while( true ) {
              uVar2 = *(ushort *)(lVar8 + 6 + (ulong)*(ushort *)(lVar9 + lVar6) * 2);
              iVar4 = *(int *)(this + 0x208);
              lVar8 = (ulong)((uint)uVar2 * *(int *)(lVar3 + 4)) + lVar3 + 0x14;
              if (uVar2 == 0) goto LAB_00102b19;
              if ((iVar4 < 1) ||
                 (0xd7ff < *(ushort *)(*(long *)(this + 0x210) + -2 + (long)iVar4 * 2))) break;
              *(int *)(this + 0x208) = iVar4 + -1;
              uVar5 = (uint)*(ushort *)(*(long *)(this + 0x210) + (long)(iVar4 + -1) * 2);
              plVar10 = *(long **)(*(long *)(this + 0x270) + 0x30);
              lVar9 = plVar10[1];
LAB_0010291a:
              lVar6 = (long)(int)((uint)*(ushort *)(*plVar10 + (long)((int)uVar5 >> 6) * 2) +
                                 (uVar5 & 0x3f)) * 2;
            }
            uVar5 = utext_previous32_76_godot(this + 0x1e0);
          } while (uVar5 != 0xffffffff);
          goto LAB_00102b13;
        }
      }
    }
  }
  else {
    lVar8 = (long)param_1 - *(long *)(this + 0x200);
    if (iVar4 == 2) {
      if (((lVar8 < 0) || (*(int *)(this + 0x1fc) <= lVar8)) ||
         (0xdbff < *(ushort *)(*(long *)(this + 0x210) + lVar8 * 2))) {
        utext_setNativeIndex_76_godot(this + 0x1e0);
        lVar9 = *(long *)(this + 0x270);
      }
      else {
        *(int *)(this + 0x208) = (int)lVar8;
      }
      if (lVar9 != 0) {
        if (*(int *)(this + 0x1fc) < *(int *)(this + 0x208)) {
          lVar8 = (**(code **)(*(long *)(this + 0x218) + 0x40))(this + 0x1e0);
        }
        else {
          lVar8 = (long)*(int *)(this + 0x208) + *(long *)(this + 0x200);
        }
        if (lVar8 != 0) {
          iVar4 = *(int *)(this + 0x208);
          if ((iVar4 < 1) || (0xd7ff < *(ushort *)(*(long *)(this + 0x210) + -2 + (long)iVar4 * 2)))
          {
            uVar5 = utext_previous32_76_godot(this + 0x1e0);
            lVar8 = (ulong)*(uint *)(lVar3 + 4) + lVar3 + 0x14;
            if (uVar5 == 0xffffffff) goto LAB_00102b13;
          }
          else {
            *(int *)(this + 0x208) = iVar4 + -1;
            uVar5 = (uint)*(ushort *)(*(long *)(this + 0x210) + (long)(iVar4 + -1) * 2);
            lVar8 = (ulong)*(uint *)(lVar3 + 4) + lVar3 + 0x14;
          }
          do {
            plVar10 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar9 = plVar10[1];
            if (uVar5 < 0x10000) goto LAB_00102a81;
            if (uVar5 < 0x110000) {
              if ((int)uVar5 < (int)plVar10[3]) {
                iVar4 = ucptrie_internalSmallIndex_76_godot();
                lVar6 = (long)iVar4;
              }
              else {
                lVar6 = (long)(*(int *)((long)plVar10 + 0x14) + -2);
              }
            }
            else {
              lVar6 = (long)(*(int *)((long)plVar10 + 0x14) + -1);
            }
            while( true ) {
              bVar1 = *(byte *)(lVar8 + 3 + (ulong)*(byte *)(lVar9 + lVar6));
              iVar4 = *(int *)(this + 0x208);
              lVar8 = (ulong)((uint)bVar1 * *(int *)(lVar3 + 4)) + lVar3 + 0x14;
              if (bVar1 == 0) goto LAB_00102b19;
              if ((iVar4 < 1) ||
                 (0xd7ff < *(ushort *)(*(long *)(this + 0x210) + -2 + (long)iVar4 * 2))) break;
              *(int *)(this + 0x208) = iVar4 + -1;
              uVar5 = (uint)*(ushort *)(*(long *)(this + 0x210) + (long)(iVar4 + -1) * 2);
              plVar10 = *(long **)(*(long *)(this + 0x270) + 0x30);
              lVar9 = plVar10[1];
LAB_00102a81:
              lVar6 = (long)(int)((uint)*(ushort *)(*plVar10 + (long)((int)uVar5 >> 6) * 2) +
                                 (uVar5 & 0x3f));
            }
            uVar5 = utext_previous32_76_godot(this + 0x1e0);
          } while (uVar5 != 0xffffffff);
          goto LAB_00102b13;
        }
      }
    }
    else {
      if (((lVar8 < 0) || (*(int *)(this + 0x1fc) <= lVar8)) ||
         (0xdbff < *(ushort *)(*(long *)(this + 0x210) + lVar8 * 2))) {
        utext_setNativeIndex_76_godot(this + 0x1e0);
        lVar9 = *(long *)(this + 0x270);
      }
      else {
        *(int *)(this + 0x208) = (int)lVar8;
      }
      if (lVar9 != 0) {
        if (*(int *)(this + 0x1fc) < *(int *)(this + 0x208)) {
          lVar8 = (**(code **)(*(long *)(this + 0x218) + 0x40))(this + 0x1e0);
        }
        else {
          lVar8 = (long)*(int *)(this + 0x208) + *(long *)(this + 0x200);
        }
        if (lVar8 != 0) {
          iVar4 = *(int *)(this + 0x208);
          if ((iVar4 < 1) || (0xd7ff < *(ushort *)(*(long *)(this + 0x210) + -2 + (long)iVar4 * 2)))
          {
            uVar5 = utext_previous32_76_godot(this + 0x1e0);
            lVar8 = (ulong)*(uint *)(lVar3 + 4) + lVar3 + 0x14;
            if (uVar5 == 0xffffffff) goto LAB_00102b13;
          }
          else {
            *(int *)(this + 0x208) = iVar4 + -1;
            uVar5 = (uint)*(ushort *)(*(long *)(this + 0x210) + (long)(iVar4 + -1) * 2);
            lVar8 = (ulong)*(uint *)(lVar3 + 4) + lVar3 + 0x14;
          }
          do {
            plVar10 = *(long **)(*(long *)(this + 0x270) + 0x30);
            lVar9 = plVar10[1];
            if (uVar5 < 0x10000) goto LAB_001027a1;
            if (uVar5 < 0x110000) {
              if ((int)uVar5 < (int)plVar10[3]) {
                iVar4 = ucptrie_internalSmallIndex_76_godot();
                lVar6 = (long)iVar4 * 2;
              }
              else {
                lVar6 = (long)(*(int *)((long)plVar10 + 0x14) + -2) * 2;
              }
            }
            else {
              lVar6 = (long)(*(int *)((long)plVar10 + 0x14) + -1) * 2;
            }
            while( true ) {
              bVar1 = *(byte *)(lVar8 + 3 + (ulong)*(ushort *)(lVar9 + lVar6));
              iVar4 = *(int *)(this + 0x208);
              lVar8 = (ulong)((uint)bVar1 * *(int *)(lVar3 + 4)) + lVar3 + 0x14;
              if (bVar1 == 0) goto LAB_00102b19;
              if ((iVar4 < 1) ||
                 (0xd7ff < *(ushort *)(*(long *)(this + 0x210) + -2 + (long)iVar4 * 2))) break;
              *(int *)(this + 0x208) = iVar4 + -1;
              uVar5 = (uint)*(ushort *)(*(long *)(this + 0x210) + (long)(iVar4 + -1) * 2);
              plVar10 = *(long **)(*(long *)(this + 0x270) + 0x30);
              lVar9 = plVar10[1];
LAB_001027a1:
              lVar6 = (long)(int)((uint)*(ushort *)(*plVar10 + (long)((int)uVar5 >> 6) * 2) +
                                 (uVar5 & 0x3f)) * 2;
            }
            uVar5 = utext_previous32_76_godot(this + 0x1e0);
          } while (uVar5 != 0xffffffff);
LAB_00102b13:
          iVar4 = *(int *)(this + 0x208);
LAB_00102b19:
          if (iVar4 <= *(int *)(this + 0x1fc)) {
            return (ulong)(uint)(iVar4 + *(int *)(this + 0x200));
          }
          uVar7 = (**(code **)(*(long *)(this + 0x218) + 0x40))(this + 0x1e0);
          return uVar7;
        }
      }
    }
  }
  return 0xffffffff;
}



/* icu_76_godot::ensureLanguageFactories(UErrorCode&) */

void __thiscall icu_76_godot::ensureLanguageFactories(icu_76_godot *this,UErrorCode *param_1)

{
  char cVar1;
  
  if (0 < *(int *)this) {
    return;
  }
  if (gLanguageBreakFactoriesInitOnce != 2) {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLanguageBreakFactoriesInitOnce);
    if (cVar1 != '\0') {
      initLanguageFactories(this,param_1);
      DAT_0010348c = *(int *)this;
      icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLanguageBreakFactoriesInitOnce);
      return;
    }
  }
  if (0 < DAT_0010348c) {
    *(int *)this = DAT_0010348c;
  }
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::getLanguageBreakEngine(int, char const*) */

UErrorCode * __thiscall
icu_76_godot::RuleBasedBreakIterator::getLanguageBreakEngine
          (RuleBasedBreakIterator *this,int param_1,char *param_2)

{
  void *pvVar1;
  char cVar2;
  long *plVar3;
  UErrorCode *pUVar4;
  UStack *this_00;
  UnhandledEngine *this_01;
  int iVar5;
  undefined4 in_register_00000034;
  UErrorCode *pUVar6;
  long in_FS_OFFSET;
  int local_38;
  uint local_34;
  long local_30;
  
  pUVar4 = (UErrorCode *)&local_38;
  this_00 = *(UStack **)(this + 0x298);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = 0;
  pUVar6 = (UErrorCode *)CONCAT44(in_register_00000034,param_1);
  if (this_00 == (UStack *)0x0) {
    this_00 = (UStack *)
              icu_76_godot::UMemory::operator_new
                        ((UMemory *)0x28,CONCAT44(in_register_00000034,param_1));
    if (this_00 != (UStack *)0x0) {
      icu_76_godot::UStack::UStack(this_00,(UErrorCode *)&local_38);
      *(UStack **)(this + 0x298) = this_00;
      pUVar6 = pUVar4;
      if (local_38 < 1) goto LAB_00102f80;
      icu_76_godot::UStack::~UStack(this_00);
    }
    *(undefined8 *)(this + 0x298) = 0;
    pUVar4 = (UErrorCode *)0x0;
  }
  else {
LAB_00102f80:
    iVar5 = *(int *)(this_00 + 8);
    do {
      iVar5 = iVar5 + -1;
      if (iVar5 < 0) {
        local_34 = 0;
        if ((gLanguageBreakFactoriesInitOnce == 2) ||
           (cVar2 = icu_76_godot::umtx_initImplPreInit
                              ((UInitOnce *)&gLanguageBreakFactoriesInitOnce), cVar2 == '\0')) {
          pUVar6 = (UErrorCode *)(ulong)DAT_0010348c;
          if (0 < (int)DAT_0010348c) goto LAB_00103042;
        }
        else {
          initLanguageFactories((icu_76_godot *)&local_34,pUVar6);
          DAT_0010348c = local_34;
          icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLanguageBreakFactoriesInitOnce);
        }
        if (0 < (int)local_34) goto LAB_00103042;
        iVar5 = *(int *)(gLanguageBreakFactories + 8);
        goto LAB_0010303d;
      }
      pUVar4 = (UErrorCode *)icu_76_godot::UVector::elementAt((int)*(undefined8 *)(this + 0x298));
      pUVar6 = (UErrorCode *)(ulong)(uint)param_1;
      cVar2 = (**(code **)(*(long *)pUVar4 + 0x18))(pUVar4,pUVar6,param_2);
    } while (cVar2 == '\0');
  }
  goto LAB_00103062;
LAB_00103042:
  plVar3 = *(long **)(this + 0x2a0);
  if (plVar3 == (long *)0x0) {
    this_01 = (UnhandledEngine *)icu_76_godot::UMemory::operator_new((UMemory *)0x10,(ulong)pUVar6);
    if (this_01 == (UnhandledEngine *)0x0) {
      *(undefined8 *)(this + 0x2a0) = 0;
      if (local_38 < 1) {
        pUVar4 = (UErrorCode *)0x0;
        goto LAB_00103062;
      }
    }
    else {
      icu_76_godot::UnhandledEngine::UnhandledEngine(this_01,(UErrorCode *)&local_38);
      *(UnhandledEngine **)(this + 0x2a0) = this_01;
    }
    icu_76_godot::UVector::insertElementAt(*(void **)(this + 0x298),(int)this_01,(UErrorCode *)0x0);
    plVar3 = *(long **)(this + 0x2a0);
    if (0 < local_38) {
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 8))();
      }
      *(undefined8 *)(this + 0x2a0) = 0;
      pUVar4 = (UErrorCode *)0x0;
      goto LAB_00103062;
    }
  }
  (**(code **)(*plVar3 + 0x28))(plVar3,param_1);
  pUVar4 = *(UErrorCode **)(this + 0x2a0);
  goto LAB_00103062;
  while( true ) {
    plVar3 = (long *)icu_76_godot::UVector::elementAt((int)gLanguageBreakFactories);
    pUVar6 = (UErrorCode *)(ulong)(uint)param_1;
    pUVar4 = (UErrorCode *)(**(code **)(*plVar3 + 0x10))(plVar3,pUVar6,param_2);
    if (pUVar4 != (UErrorCode *)0x0) break;
LAB_0010303d:
    iVar5 = iVar5 + -1;
    if (iVar5 < 0) goto LAB_00103042;
  }
  pvVar1 = *(void **)(this + 0x298);
  if (*(long *)((long)pvVar1 + 0x18) == 0) {
    icu_76_godot::UVector::addElement(pvVar1,pUVar4);
  }
  else {
    icu_76_godot::UVector::adoptElement(pvVar1,pUVar4);
  }
LAB_00103062:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pUVar4;
}



/* icu_76_godot::RuleBasedBreakIterator::registerExternalBreakEngine(icu_76_godot::ExternalBreakEngine*,
   UErrorCode&) */

void icu_76_godot::RuleBasedBreakIterator::registerExternalBreakEngine
               (ExternalBreakEngine *param_1,UErrorCode *param_2)

{
  char cVar1;
  
  if (param_1 == (ExternalBreakEngine *)0x0) {
    if (0 < *(int *)param_2) {
      return;
    }
    *(undefined4 *)param_2 = 7;
    return;
  }
  if (0 < *(int *)param_2) goto LAB_001031c9;
  if (gLanguageBreakFactoriesInitOnce == 2) {
LAB_00103210:
    if (0 < DAT_0010348c) {
      *(int *)param_2 = DAT_0010348c;
      goto LAB_001031c9;
    }
  }
  else {
    cVar1 = icu_76_godot::umtx_initImplPreInit((UInitOnce *)&gLanguageBreakFactoriesInitOnce);
    if (cVar1 == '\0') goto LAB_00103210;
    initLanguageFactories((icu_76_godot *)param_2,param_2);
    DAT_0010348c = *(int *)param_2;
    icu_76_godot::umtx_initImplPostInit((UInitOnce *)&gLanguageBreakFactoriesInitOnce);
  }
  if (*(int *)param_2 < 1) {
                    /* WARNING: Could not recover jumptable at 0x00103277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*gICULanguageBreakFactory + 0x18))(gICULanguageBreakFactory,param_1,param_2);
    return;
  }
LAB_001031c9:
                    /* WARNING: Could not recover jumptable at 0x001031da. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 8))(param_1);
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::dumpCache() */

void icu_76_godot::RuleBasedBreakIterator::dumpCache(void)

{
  icu_76_godot::RuleBasedBreakIterator::BreakCache::dumpCache();
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::dumpTables() */

void icu_76_godot::RuleBasedBreakIterator::dumpTables(void)

{
  icu_76_godot::RBBIDataWrapper::printData();
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::~RuleBasedBreakIterator() */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::~RuleBasedBreakIterator(RuleBasedBreakIterator *this)

{
  UCharCharacterIterator *pUVar1;
  DictionaryCache *this_00;
  void *in_RSI;
  
  *(undefined ***)this = &PTR__RuleBasedBreakIterator_00103518;
  pUVar1 = *(UCharCharacterIterator **)(this + 0x2b0);
  if ((pUVar1 != (UCharCharacterIterator *)0x0) &&
     (pUVar1 != (UCharCharacterIterator *)(this + 0x2b8))) {
    (**(code **)(*(long *)pUVar1 + 8))();
  }
  *(undefined8 *)(this + 0x2b0) = 0;
  utext_close_76_godot(this + 0x1e0);
  if (*(long *)(this + 0x270) != 0) {
    icu_76_godot::RBBIDataWrapper::removeReference();
    *(undefined8 *)(this + 0x270) = 0;
  }
  if (*(long **)(this + 0x288) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x288) + 8))();
  }
  this_00 = *(DictionaryCache **)(this + 0x290);
  *(undefined8 *)(this + 0x288) = 0;
  if (this_00 != (DictionaryCache *)0x0) {
    icu_76_godot::RuleBasedBreakIterator::DictionaryCache::~DictionaryCache(this_00);
    icu_76_godot::UMemory::operator_delete((UMemory *)this_00,in_RSI);
  }
  *(undefined8 *)(this + 0x290) = 0;
  if (*(long **)(this + 0x298) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x298) + 8))();
  }
  *(undefined8 *)(this + 0x298) = 0;
  if (*(long **)(this + 0x2a0) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x2a0) + 8))();
  }
  *(undefined8 *)(this + 0x2a0) = 0;
  uprv_free_76_godot(*(undefined8 *)(this + 0x2e0));
  *(undefined8 *)(this + 0x2e0) = 0;
  icu_76_godot::UCharCharacterIterator::~UCharCharacterIterator
            ((UCharCharacterIterator *)(this + 0x2b8));
  icu_76_godot::BreakIterator::~BreakIterator((BreakIterator *)this);
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::~RuleBasedBreakIterator() */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::~RuleBasedBreakIterator(RuleBasedBreakIterator *this)

{
  void *in_RSI;
  
  ~RuleBasedBreakIterator(this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator(icu_76_godot::UnicodeString const&,
   UParseError&, UErrorCode&) */

void __thiscall
icu_76_godot::RuleBasedBreakIterator::RuleBasedBreakIterator
          (RuleBasedBreakIterator *this,UnicodeString *param_1,UParseError *param_2,
          UErrorCode *param_3)

{
  RuleBasedBreakIterator *this_00;
  
  RuleBasedBreakIterator(this,param_3);
  if ((0 < *(int *)param_3) ||
     (this_00 = (RuleBasedBreakIterator *)
                icu_76_godot::RBBIRuleBuilder::createRuleBasedBreakIterator(param_1,param_2,param_3)
     , 0 < *(int *)param_3)) {
    return;
  }
  if ((this != this_00) &&
     (param_2 = (UParseError *)this_00, operator=(this,this_00),
     this_00 == (RuleBasedBreakIterator *)0x0)) {
    return;
  }
  if (*(code **)(*(long *)this_00 + 8) != ~RuleBasedBreakIterator) {
                    /* WARNING: Could not recover jumptable at 0x00103475. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this_00 + 8))(this_00);
    return;
  }
  ~RuleBasedBreakIterator(this_00);
  icu_76_godot::UMemory::operator_delete((UMemory *)this_00,param_2);
  return;
}


