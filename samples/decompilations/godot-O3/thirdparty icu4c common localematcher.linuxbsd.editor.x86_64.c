
/* icu_76_godot::(anonymous namespace)::hashLSR(UElement) */

undefined4 icu_76_godot::(anonymous_namespace)::hashLSR(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* icu_76_godot::Locale::ConvertingIterator<char const**, (anonymous
   namespace)::LocaleFromTag>::hasNext() const */

undefined8 __thiscall
icu_76_godot::Locale::ConvertingIterator<char_const**,(anonymous_namespace)::LocaleFromTag>::hasNext
          (ConvertingIterator<char_const**,(anonymous_namespace)::LocaleFromTag> *this)

{
  return CONCAT71((int7)((ulong)*(long *)(this + 0x10) >> 8),
                  *(long *)(this + 8) != *(long *)(this + 0x10));
}



/* icu_76_godot::(anonymous namespace)::compareLSRs(UElement, UElement) */

void icu_76_godot::(anonymous_namespace)::compareLSRs(void *param_1,LSR *param_2)

{
  icu_76_godot::LSR::operator==(param_1,param_2);
  return;
}



/* icu_76_godot::(anonymous namespace)::getMaximalLsrOrUnd(icu_76_godot::LikelySubtags const&,
   icu_76_godot::Locale const&, UErrorCode&) */

_anonymous_namespace_ * __thiscall
icu_76_godot::(anonymous_namespace)::getMaximalLsrOrUnd
          (_anonymous_namespace_ *this,LikelySubtags *param_1,Locale *param_2,UErrorCode *param_3)

{
  long lVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(int *)param_3 < 1) && (param_2[0xd8] == (Locale)0x0)) &&
     (**(char **)(param_2 + 0x28) != '\0')) {
    icu_76_godot::LikelySubtags::makeMaximizedLsrFrom
              ((Locale *)this,SUB81(param_1,0),(UErrorCode *)param_2);
  }
  else {
    *(undefined **)(this + 0x10) = &_LC1;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined **)this = &_LC0;
    *(undefined **)(this + 8) = &_LC1;
    uVar2 = icu_76_godot::LSR::indexForRegion("");
    *(undefined8 *)(this + 0x24) = 7;
    *(undefined4 *)(this + 0x20) = uVar2;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocaleMatcher::Builder::ensureSupportedLocaleVector() [clone .part.0] */

undefined8 icu_76_godot::LocaleMatcher::Builder::ensureSupportedLocaleVector(void)

{
  UVector *this;
  ulong in_RSI;
  UErrorCode *in_RDI;
  
  this = (UVector *)icu_76_godot::UMemory::operator_new((UMemory *)0x28,in_RSI);
  if (this == (UVector *)0x0) {
    if (*(int *)in_RDI < 1) {
      *(undefined4 *)in_RDI = 7;
    }
  }
  else {
    icu_76_godot::UVector::UVector
              (this,(_func_void_void_ptr *)&uprv_deleteUObject_76_godot,
               (_func_signed_UElement_UElement *)0x0,in_RDI);
    if (*(int *)in_RDI < 1) {
      *(UVector **)(in_RDI + 8) = this;
      return 1;
    }
    icu_76_godot::UVector::~UVector(this);
  }
  return 0;
}



/* icu_76_godot::LocaleMatcher::getBestSuppIndex(icu_76_godot::LSR,
   icu_76_godot::LocaleLsrIterator*, UErrorCode&) const [clone .part.0] */

undefined8 __thiscall
icu_76_godot::LocaleMatcher::getBestSuppIndex
          (LocaleMatcher *this,void *param_2,undefined8 *param_3,UErrorCode *param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  Locale *pLVar4;
  uint uVar5;
  void *pvVar6;
  ulong uVar7;
  int iVar8;
  long in_FS_OFFSET;
  int local_9c;
  char local_79;
  undefined4 local_78;
  uint uStack_74;
  long local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = -1;
  local_9c = 0;
  uVar5 = *(int *)(this + 0x10) * 8;
  do {
    if (*(long *)(this + 0x38) != 0) {
      icu_76_godot::LSR::setHashCode();
      local_79 = '\0';
      pvVar6 = param_2;
      uVar2 = uhash_getiAndFound_76_godot(*(undefined8 *)(this + 0x38),param_2,&local_79);
      if (local_79 != '\0') {
        if ((param_3 != (undefined8 *)0x0) && (*(int *)param_4 < 1)) {
          *(int *)(param_3 + 5) = local_9c;
          if (*(int *)(param_3 + 2) == 1) {
            param_3[4] = param_3[3];
          }
          else {
            if ((long *)param_3[4] != (long *)0x0) {
              (**(code **)(*(long *)param_3[4] + 8))();
            }
            pLVar4 = (Locale *)icu_76_godot::UMemory::operator_new((UMemory *)0xe0,(ulong)pvVar6);
            if (pLVar4 == (Locale *)0x0) {
              param_3[4] = 0;
              *(undefined4 *)param_4 = 7;
            }
            else {
              icu_76_godot::Locale::Locale(pLVar4,(Locale *)param_3[3]);
              param_3[4] = pLVar4;
            }
          }
        }
        uStack_74 = CONCAT31(uStack_74._1_3_,1);
        local_78 = uVar2;
        goto LAB_0010030a;
      }
    }
    uVar3 = icu_76_godot::LocaleDistance::getBestIndexAndDistance
                      (*(undefined8 *)(this + 8),param_2,*(undefined8 *)(this + 0x40),
                       *(undefined4 *)(this + 0x50),uVar5,*(undefined4 *)(this + 0x18),
                       *(undefined4 *)(this + 0x1c));
    if (-1 < (int)uVar3) {
      uVar5 = uVar3 & 0x3ff;
      if (param_3 != (undefined8 *)0x0) {
        uVar7 = (ulong)*(uint *)param_4;
        if (0 < (int)*(uint *)param_4) goto LAB_00100305;
        *(int *)(param_3 + 5) = local_9c;
        if (*(int *)(param_3 + 2) == 1) {
          param_3[4] = param_3[3];
        }
        else {
          if ((long *)param_3[4] != (long *)0x0) {
            (**(code **)(*(long *)param_3[4] + 8))();
          }
          pLVar4 = (Locale *)icu_76_godot::UMemory::operator_new((UMemory *)0xe0,uVar7);
          if (pLVar4 == (Locale *)0x0) {
            param_3[4] = 0;
            *(undefined4 *)param_4 = 7;
LAB_00100305:
            uStack_74 = uStack_74 & 0xffffff00;
LAB_0010030a:
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              return CONCAT44(uStack_74,local_78);
            }
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          icu_76_godot::Locale::Locale(pLVar4,(Locale *)param_3[3]);
          iVar8 = *(int *)param_4;
          param_3[4] = pLVar4;
          if (0 < iVar8) goto LAB_00100305;
        }
      }
      iVar8 = (int)uVar3 >> 10;
    }
    uVar5 = uVar5 + *(int *)(this + 0x14) * -8;
    if (((int)uVar5 < 1) || (param_3 == (undefined8 *)0x0)) {
LAB_00100348:
      if (-1 < iVar8) {
        uStack_74 = CONCAT31(uStack_74._1_3_,1);
        local_78 = *(undefined4 *)(*(long *)(this + 0x48) + (long)iVar8 * 4);
        goto LAB_0010030a;
      }
      goto LAB_00100305;
    }
    cVar1 = (**(code **)(*(long *)param_3[1] + 0x10))();
    if (cVar1 == '\0') goto LAB_00100348;
    pLVar4 = (Locale *)(**(code **)(*(long *)param_3[1] + 0x18))();
    param_3[3] = pLVar4;
    (anonymous_namespace)::getMaximalLsrOrUnd
              ((_anonymous_namespace_ *)&local_78,(LikelySubtags *)*param_3,pLVar4,param_4);
    icu_76_godot::LSR::operator=(param_2,(_anonymous_namespace_ *)&local_78);
    if (local_60 != 0) {
      icu_76_godot::LSR::deleteOwned();
    }
    if (0 < *(int *)param_4) goto LAB_00100305;
    local_9c = local_9c + 1;
  } while( true );
}



/* icu_76_godot::LocaleMatcher::Result::Result(icu_76_godot::LocaleMatcher::Result&&) */

void __thiscall icu_76_godot::LocaleMatcher::Result::Result(Result *this,Result *param_1)

{
  Result RVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  RVar1 = param_1[0x18];
  *(undefined8 *)this = uVar2;
  *(undefined8 *)(this + 8) = uVar3;
  this[0x18] = RVar1;
  if (RVar1 != (Result)0x0) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    param_1[0x18] = (Result)0x0;
  }
  return;
}



/* icu_76_godot::LocaleMatcher::Result::~Result() */

void __thiscall icu_76_godot::LocaleMatcher::Result::~Result(Result *this)

{
  if ((this[0x18] != (Result)0x0) && (*(long **)this != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00100455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)this + 8))();
    return;
  }
  return;
}



/* icu_76_godot::LocaleMatcher::Result::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::LocaleMatcher::Result&&)
    */

Result * __thiscall icu_76_godot::LocaleMatcher::Result::operator=(Result *this,Result *param_1)

{
  Result RVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if ((this[0x18] != (Result)0x0) && (*(long **)this != (long *)0x0)) {
    (**(code **)(**(long **)this + 8))();
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)this = *(undefined8 *)param_1;
  *(undefined8 *)(this + 8) = uVar3;
  *(undefined8 *)(this + 0x10) = uVar2;
  RVar1 = param_1[0x18];
  this[0x18] = RVar1;
  if (RVar1 != (Result)0x0) {
    *(undefined8 *)param_1 = 0;
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    param_1[0x18] = (Result)0x0;
  }
  return this;
}



/* icu_76_godot::LocaleMatcher::Builder::Builder(icu_76_godot::LocaleMatcher::Builder&&) */

void __thiscall icu_76_godot::LocaleMatcher::Builder::Builder(Builder *this,Builder *param_1)

{
  Builder BVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = *(undefined4 *)param_1;
  uVar3 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined4 *)this = uVar2;
  BVar1 = param_1[0x20];
  *(undefined8 *)(this + 8) = uVar3;
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  this[0x20] = BVar1;
  uVar5 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x10) = uVar3;
  *(undefined8 *)(this + 0x18) = uVar4;
  *(undefined8 *)(this + 0x24) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}



/* icu_76_godot::LocaleMatcher::Builder::~Builder() */

void __thiscall icu_76_godot::LocaleMatcher::Builder::~Builder(Builder *this)

{
  if (*(long **)(this + 8) != (long *)0x0) {
    (**(code **)(**(long **)(this + 8) + 8))();
  }
  if (*(long **)(this + 0x18) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x18) + 8))();
  }
  if (*(long **)(this + 0x30) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x30) + 8))();
  }
  if (*(long **)(this + 0x38) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00100566. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x38) + 8))();
    return;
  }
  return;
}



/* icu_76_godot::LocaleMatcher::Builder::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::LocaleMatcher::Builder&&)
    */

Builder * __thiscall icu_76_godot::LocaleMatcher::Builder::operator=(Builder *this,Builder *param_1)

{
  ~Builder(this);
  *(undefined4 *)this = *(undefined4 *)param_1;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined4 *)(this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  this[0x20] = param_1[0x20];
  *(undefined8 *)(this + 0x24) = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  return this;
}



/* icu_76_godot::LocaleMatcher::Builder::clearSupportedLocales() */

void __thiscall icu_76_godot::LocaleMatcher::Builder::clearSupportedLocales(Builder *this)

{
  if (*(long *)(this + 8) != 0) {
    icu_76_godot::UVector::removeAllElements();
    return;
  }
  return;
}



/* icu_76_godot::LocaleMatcher::Builder::ensureSupportedLocaleVector() */

undefined8 __thiscall
icu_76_godot::LocaleMatcher::Builder::ensureSupportedLocaleVector(Builder *this)

{
  undefined8 uVar1;
  
  if (0 < *(int *)this) {
    return 0;
  }
  if (*(long *)(this + 8) != 0) {
    return 1;
  }
  uVar1 = ensureSupportedLocaleVector();
  return uVar1;
}



/* icu_76_godot::LocaleMatcher::Builder::setSupportedLocalesFromListString(icu_76_godot::StringPiece)
    */

int * icu_76_godot::LocaleMatcher::Builder::setSupportedLocalesFromListString
                (int *param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  UErrorCode *pUVar2;
  int iVar3;
  long in_FS_OFFSET;
  LocalePriorityList aLStack_58 [8];
  int local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  icu_76_godot::LocalePriorityList::LocalePriorityList(aLStack_58,param_2,param_3,param_1);
  if (0 < *param_1) goto LAB_0010067b;
  if (*(long *)(param_1 + 2) == 0) {
LAB_001006b0:
    cVar1 = ensureSupportedLocaleVector();
    if (cVar1 == '\0') goto LAB_0010067b;
  }
  else {
    icu_76_godot::UVector::removeAllElements();
    if (0 < *param_1) goto LAB_0010067b;
    if (*(long *)(param_1 + 2) == 0) goto LAB_001006b0;
  }
  iVar3 = 0;
  if (0 < local_50) {
    do {
      pUVar2 = (UErrorCode *)icu_76_godot::LocalePriorityList::orphanLocaleAt((int)aLStack_58);
      if ((pUVar2 != (UErrorCode *)0x0) &&
         (icu_76_godot::UVector::adoptElement(*(void **)(param_1 + 2),pUVar2), 0 < *param_1)) break;
      iVar3 = iVar3 + 1;
    } while (iVar3 != local_50);
  }
LAB_0010067b:
  icu_76_godot::LocalePriorityList::~LocalePriorityList(aLStack_58);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::LocaleMatcher::Builder::setSupportedLocales(icu_76_godot::Locale::Iterator&) */

Builder * __thiscall
icu_76_godot::LocaleMatcher::Builder::setSupportedLocales(Builder *this,Iterator *param_1)

{
  char cVar1;
  UErrorCode *pUVar2;
  
  if (0 < *(int *)this) {
    return this;
  }
  if (*(long *)(this + 8) == 0) {
    cVar1 = ensureSupportedLocaleVector();
    if (cVar1 == '\0') {
      return this;
    }
    if (*(long *)(this + 8) == 0) goto LAB_0010074c;
  }
  icu_76_godot::UVector::removeAllElements();
LAB_0010074c:
  while ((cVar1 = (**(code **)(*(long *)param_1 + 0x10))(param_1), cVar1 != '\0' &&
         (*(int *)this < 1))) {
    (**(code **)(*(long *)param_1 + 0x18))(param_1);
    pUVar2 = (UErrorCode *)icu_76_godot::Locale::clone();
    if ((pUVar2 == (UErrorCode *)0x0) && (*(int *)this < 1)) {
      *(undefined4 *)this = 7;
    }
    icu_76_godot::UVector::adoptElement(*(void **)(this + 8),pUVar2);
  }
  return this;
}



/* icu_76_godot::LocaleMatcher::Builder::addSupportedLocale(icu_76_godot::Locale const&) */

Locale * icu_76_godot::LocaleMatcher::Builder::addSupportedLocale(Locale *param_1)

{
  char cVar1;
  UErrorCode *pUVar2;
  
  if (*(int *)param_1 < 1) {
    if (*(long *)(param_1 + 8) == 0) {
      cVar1 = ensureSupportedLocaleVector();
      if (cVar1 == '\0') {
        return param_1;
      }
    }
    pUVar2 = (UErrorCode *)icu_76_godot::Locale::clone();
    if ((pUVar2 == (UErrorCode *)0x0) && (*(int *)param_1 < 1)) {
      *(undefined4 *)param_1 = 7;
    }
    icu_76_godot::UVector::adoptElement(*(void **)(param_1 + 8),pUVar2);
  }
  return param_1;
}



/* icu_76_godot::LocaleMatcher::Builder::setNoDefaultLocale() */

Builder * __thiscall icu_76_godot::LocaleMatcher::Builder::setNoDefaultLocale(Builder *this)

{
  if (*(int *)this < 1) {
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    *(undefined8 *)(this + 0x18) = 0;
    this[0x20] = (Builder)0x0;
  }
  return this;
}



/* icu_76_godot::LocaleMatcher::Builder::setDefaultLocale(icu_76_godot::Locale const*) */

Builder * __thiscall
icu_76_godot::LocaleMatcher::Builder::setDefaultLocale(Builder *this,Locale *param_1)

{
  if (*(int *)this < 1) {
    if ((param_1 != (Locale *)0x0) &&
       (param_1 = (Locale *)icu_76_godot::Locale::clone(), param_1 == (Locale *)0x0)) {
      *(undefined4 *)this = 7;
      return this;
    }
    if (*(long **)(this + 0x18) != (long *)0x0) {
      (**(code **)(**(long **)(this + 0x18) + 8))();
    }
    *(Locale **)(this + 0x18) = param_1;
    this[0x20] = (Builder)0x1;
  }
  return this;
}



/* icu_76_godot::LocaleMatcher::Builder::setFavorSubtag(ULocMatchFavorSubtag) */

Builder * __thiscall
icu_76_godot::LocaleMatcher::Builder::setFavorSubtag(Builder *this,undefined4 param_2)

{
  if (*(int *)this < 1) {
    *(undefined4 *)(this + 0x24) = param_2;
  }
  return this;
}



/* icu_76_godot::LocaleMatcher::Builder::setDemotionPerDesiredLocale(ULocMatchDemotion) */

Builder * __thiscall
icu_76_godot::LocaleMatcher::Builder::setDemotionPerDesiredLocale(Builder *this,undefined4 param_2)

{
  if (*(int *)this < 1) {
    *(undefined4 *)(this + 0x14) = param_2;
  }
  return this;
}



/* icu_76_godot::LocaleMatcher::Builder::setMaxDistance(icu_76_godot::Locale const&,
   icu_76_godot::Locale const&) */

Locale * icu_76_godot::LocaleMatcher::Builder::setMaxDistance(Locale *param_1,Locale *param_2)

{
  long *plVar1;
  long *plVar2;
  
  if (0 < *(int *)param_1) {
    return param_1;
  }
  plVar1 = (long *)icu_76_godot::Locale::clone();
  plVar2 = (long *)icu_76_godot::Locale::clone();
  if (plVar1 != (long *)0x0) {
    if (plVar2 != (long *)0x0) {
      if (*(long **)(param_1 + 0x30) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x30) + 8))();
      }
      if (*(long **)(param_1 + 0x38) != (long *)0x0) {
        (**(code **)(**(long **)(param_1 + 0x38) + 8))();
      }
      *(long **)(param_1 + 0x30) = plVar1;
      *(long **)(param_1 + 0x38) = plVar2;
      return param_1;
    }
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))(plVar1);
    }
  }
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 8))(plVar2);
  }
  *(undefined4 *)param_1 = 7;
  return param_1;
}



/* icu_76_godot::LocaleMatcher::Builder::copyErrorTo(UErrorCode&) const */

undefined8 __thiscall
icu_76_godot::LocaleMatcher::Builder::copyErrorTo(Builder *this,UErrorCode *param_1)

{
  if (*(int *)param_1 < 1) {
    if (*(int *)this < 1) {
      return 0;
    }
    *(int *)param_1 = *(int *)this;
  }
  return 1;
}



/* icu_76_godot::LocaleMatcher::putIfAbsent(icu_76_godot::LSR const&, int, int, UErrorCode&) */

int __thiscall
icu_76_godot::LocaleMatcher::putIfAbsent
          (LocaleMatcher *this,LSR *param_1,int param_2,int param_3,UErrorCode *param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  
  if (((*(int *)param_4 < 1) &&
      (cVar2 = uhash_containsKey_76_godot(*(undefined8 *)(this + 0x38)), cVar2 == '\0')) &&
     (uhash_putiAllowZero_76_godot(*(undefined8 *)(this + 0x38),param_1,param_2,param_4),
     *(int *)param_4 < 1)) {
    lVar1 = *(long *)(this + 0x48);
    lVar3 = (long)param_3;
    *(LSR **)(*(long *)(this + 0x40) + lVar3 * 8) = param_1;
    param_3 = param_3 + 1;
    *(int *)(lVar1 + lVar3 * 4) = param_2;
  }
  return param_3;
}



/* icu_76_godot::LocaleMatcher::LocaleMatcher(icu_76_godot::LocaleMatcher::Builder const&,
   UErrorCode&) */

void __thiscall
icu_76_godot::LocaleMatcher::LocaleMatcher(LocaleMatcher *this,Builder *param_1,UErrorCode *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  long lVar3;
  Locale *pLVar4;
  ulong *puVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  Locale *pLVar11;
  ulong *puVar12;
  undefined1 *puVar13;
  _anonymous_namespace_ *this_00;
  undefined **ppuVar14;
  ulong uVar15;
  long lVar16;
  int iVar17;
  long in_FS_OFFSET;
  undefined **local_168;
  _anonymous_namespace_ *local_150;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  long local_130;
  undefined8 local_128;
  undefined4 local_120;
  _anonymous_namespace_ local_118 [24];
  long local_100;
  _anonymous_namespace_ local_e8 [24];
  long local_d0;
  undefined1 *local_b8;
  int local_b0;
  char local_ac;
  undefined1 local_ab [107];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (_anonymous_namespace_ *)param_1;
  uVar10 = icu_76_godot::LikelySubtags::getSingleton(param_2);
  *(undefined8 *)this = uVar10;
  uVar10 = icu_76_godot::LocaleDistance::getSingleton(param_2);
  iVar7 = *(int *)param_2;
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined8 *)(this + 8) = uVar10;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined4 *)(this + 0x10) = uVar1;
  uVar10 = *(undefined8 *)(param_1 + 0x24);
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x18) = uVar10;
  *(undefined4 *)(this + 0x50) = 0;
  *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x58) = (undefined1  [16])0x0;
  if (0 < iVar7) goto LAB_00100be2;
  local_130 = 0;
  local_138 = &_LC1;
  local_120 = 0;
  local_128 = 0;
  local_148 = &_LC0;
  puStack_140 = &_LC1;
  if (*(long *)(param_1 + 0x18) != 0) {
    pLVar11 = (Locale *)icu_76_godot::Locale::clone();
    *(Locale **)(this + 0x58) = pLVar11;
    if (pLVar11 != (Locale *)0x0) {
      this_00 = local_e8;
      (anonymous_namespace)::getMaximalLsrOrUnd(this_00,*(LikelySubtags **)this,pLVar11,param_2);
      local_168 = &local_148;
      icu_76_godot::LSR::operator=(local_168,this_00);
      if (local_d0 != 0) {
        icu_76_godot::LSR::deleteOwned();
      }
      if (*(int *)param_2 < 1) {
        lVar16 = *(long *)(param_1 + 8);
        goto joined_r0x00100bac;
      }
      goto LAB_00100bd0;
    }
    goto LAB_00100da0;
  }
  local_168 = (undefined **)0x0;
  lVar16 = *(long *)(param_1 + 8);
  pLVar11 = (Locale *)0x0;
joined_r0x00100bac:
  if (lVar16 == 0) {
    *(undefined4 *)(this + 0x30) = 0;
LAB_00100bb6:
    iVar7 = *(int *)(param_1 + 0x14);
    *(Locale **)(this + 0x60) = pLVar11;
    if (iVar7 == 1) {
      *(undefined4 *)(this + 0x14) = *(undefined4 *)(*(long *)(this + 8) + 0x54);
    }
    if (*(int *)(this + 0x10) < 0) {
      if (*(long *)(param_1 + 0x30) == 0) {
        *(undefined4 *)(this + 0x10) = *(undefined4 *)(*(long *)(this + 8) + 0x48);
      }
      else {
        (anonymous_namespace)::getMaximalLsrOrUnd
                  (local_118,*(LikelySubtags **)this,*(Locale **)(param_1 + 0x38),param_2);
        uVar10 = *(undefined8 *)(this + 8);
        uVar1 = *(undefined4 *)(this + 0x18);
        uVar2 = *(undefined4 *)(this + 0x1c);
        local_150 = local_118;
        (anonymous_namespace)::getMaximalLsrOrUnd
                  (local_e8,*(LikelySubtags **)this,*(Locale **)(param_1 + 0x30),param_2);
        iVar7 = icu_76_godot::LocaleDistance::getBestIndexAndDistance
                          (uVar10,local_e8,&local_150,1,800,uVar1,uVar2);
        if (local_d0 != 0) {
          icu_76_godot::LSR::deleteOwned();
        }
        iVar8 = 0;
        if (*(int *)param_2 < 1) {
          iVar8 = (iVar7 >> 3 & 0x7fU) + 1;
        }
        *(int *)(this + 0x10) = iVar8;
        if (local_100 != 0) {
          icu_76_godot::LSR::deleteOwned();
        }
      }
    }
  }
  else {
    iVar7 = *(int *)(lVar16 + 8);
    *(int *)(this + 0x30) = iVar7;
    if (iVar7 < 1) goto LAB_00100bb6;
    uVar10 = uprv_malloc_76_godot((long)iVar7 << 3);
    uVar15 = (ulong)*(int *)(this + 0x30);
    *(undefined8 *)(this + 0x20) = uVar10;
    if (uVar15 < 0x2aaaaaaaaaaaaab) {
      puVar12 = (ulong *)icu_76_godot::UMemory::operator_new__
                                   ((UMemory *)(uVar15 * 0x30 + 8),(ulong)this_00);
      if (puVar12 == (ulong *)0x0) {
LAB_00100e95:
        *(undefined8 *)(this + 0x28) = 0;
        goto LAB_00100da0;
      }
      *puVar12 = uVar15;
      puVar12 = puVar12 + 1;
      puVar5 = puVar12;
      for (; uVar15 != 0; uVar15 = uVar15 - 1) {
        puVar5[2] = (ulong)&_LC1;
        *puVar5 = (ulong)&_LC0;
        puVar5[1] = (ulong)&_LC1;
        puVar5[3] = 0;
        puVar5[4] = 0;
        *(undefined4 *)(puVar5 + 5) = 0;
        puVar5 = puVar5 + 6;
      }
    }
    else {
      puVar12 = (ulong *)icu_76_godot::UMemory::operator_new__
                                   ((UMemory *)0xffffffffffffffff,(ulong)this_00);
      if (puVar12 == (ulong *)0x0) goto LAB_00100e95;
      *puVar12 = uVar15;
      puVar12 = puVar12 + 1;
    }
    *(ulong **)(this + 0x28) = puVar12;
    if (*(void **)(this + 0x20) == (void *)0x0) {
LAB_00100da0:
      *(undefined4 *)param_2 = 7;
    }
    else {
      memset(*(void **)(this + 0x20),0,(long)*(int *)(this + 0x30) << 3);
      iVar7 = *(int *)(this + 0x30);
      if (0 < iVar7) {
        lVar16 = 0;
        do {
          icu_76_godot::UVector::elementAt((int)*(undefined8 *)(param_1 + 8));
          lVar3 = *(long *)(this + 0x20);
          uVar10 = icu_76_godot::Locale::clone();
          *(undefined8 *)(lVar3 + lVar16 * 8) = uVar10;
          pLVar4 = *(Locale **)(*(long *)(this + 0x20) + lVar16 * 8);
          if (pLVar4 == (Locale *)0x0) goto LAB_00100da0;
          (anonymous_namespace)::getMaximalLsrOrUnd(local_e8,*(LikelySubtags **)this,pLVar4,param_2)
          ;
          icu_76_godot::LSR::operator=((void *)(lVar16 * 0x30 + *(long *)(this + 0x28)),local_e8);
          if (local_d0 != 0) {
            icu_76_godot::LSR::deleteOwned();
          }
          icu_76_godot::LSR::setHashCode();
          if (0 < *(int *)param_2) goto LAB_00100bd0;
          iVar7 = *(int *)(this + 0x30);
          lVar16 = lVar16 + 1;
        } while ((int)lVar16 < iVar7);
      }
      uVar10 = uhash_openSize_76_godot
                         (0x100000,(anonymous_namespace)::compareLSRs,&uhash_compareLong_76_godot,
                          iVar7,param_2);
      iVar7 = *(int *)param_2;
      *(undefined8 *)(this + 0x38) = uVar10;
      if (iVar7 < 1) {
        uVar10 = uprv_malloc_76_godot((long)*(int *)(this + 0x30) << 3);
        *(undefined8 *)(this + 0x40) = uVar10;
        lVar16 = uprv_malloc_76_godot((long)*(int *)(this + 0x30) << 2);
        *(long *)(this + 0x48) = lVar16;
        if ((*(long *)(this + 0x40) == 0) || (lVar16 == 0)) goto LAB_00100da0;
        local_b8 = local_ab;
        iVar7 = *(int *)(this + 0x30);
        local_b0 = 100;
        local_ac = '\0';
        if (*(int *)param_2 < 1) {
          if (iVar7 < 0x65) {
            if (*(int *)param_2 < 1) {
LAB_00100f76:
              if (iVar7 < 1) {
                iVar7 = 0;
              }
              else {
                iVar8 = 0;
                lVar16 = 0;
                iVar7 = 0;
                do {
                  ppuVar14 = (undefined **)(lVar16 * 0x30 + *(long *)(this + 0x28));
                  pLVar4 = *(Locale **)(*(long *)(this + 0x20) + lVar16 * 8);
                  if (local_168 == (undefined **)0x0) {
                    if (param_1[0x20] == (Builder)0x0) {
LAB_00100fad:
                      cVar6 = icu_76_godot::LocaleDistance::isParadigmLSR(*(LSR **)(this + 8));
                      if (cVar6 == '\0') {
                        local_b8[lVar16] = 3;
                      }
                      else {
                        iVar8 = iVar8 + 1;
                        local_b8[lVar16] = 2;
                      }
                    }
                    else {
                      local_b8[lVar16] = 1;
                      iVar7 = putIfAbsent(this,(LSR *)ppuVar14,0,iVar7,param_2);
                      pLVar11 = pLVar4;
                      local_168 = ppuVar14;
                    }
                  }
                  else {
                    cVar6 = icu_76_godot::LSR::isEquivalentTo((LSR *)ppuVar14);
                    if (cVar6 == '\0') goto LAB_00100fad;
                    local_b8[lVar16] = 1;
                    iVar7 = putIfAbsent(this,(LSR *)ppuVar14,(int)lVar16,iVar7,param_2);
                  }
                  if (0 < *(int *)param_2) goto LAB_001010a4;
                  iVar9 = *(int *)(this + 0x30);
                  lVar16 = lVar16 + 1;
                } while ((int)lVar16 < iVar9);
                iVar8 = iVar8 + iVar7;
                if (0 < iVar9) {
                  if (iVar7 < iVar8) {
                    lVar16 = 0;
                    do {
                      iVar17 = (int)lVar16;
                      if (local_b8[lVar16] == '\x02') {
                        iVar7 = putIfAbsent(this,(LSR *)(lVar16 * 0x30 + *(long *)(this + 0x28)),
                                            iVar17,iVar7,param_2);
                        iVar9 = *(int *)(this + 0x30);
                      }
                      lVar16 = lVar16 + 1;
                    } while ((iVar17 + 1 < iVar9) && (iVar7 < iVar8));
                  }
                  if (0 < iVar9) {
                    lVar16 = 0;
                    do {
                      if (local_b8[lVar16] == '\x03') {
                        iVar7 = putIfAbsent(this,(LSR *)(lVar16 * 0x30 + *(long *)(this + 0x28)),
                                            (int)lVar16,iVar7,param_2);
                      }
                      lVar16 = lVar16 + 1;
                    } while ((int)lVar16 < *(int *)(this + 0x30));
                  }
                }
              }
              *(int *)(this + 0x50) = iVar7;
              if (local_ac != '\0') {
                uprv_free_76_godot(local_b8);
              }
              goto LAB_00100bb6;
            }
          }
          else {
            puVar13 = (undefined1 *)uprv_malloc_76_godot((long)iVar7);
            if (puVar13 == (undefined1 *)0x0) {
              if (*(int *)param_2 < 1) goto LAB_001011ed;
LAB_001010a4:
              if (local_ac == '\0') goto LAB_00100bd0;
            }
            else {
              if (local_ac != '\0') {
                uprv_free_76_godot(local_b8);
              }
              local_ac = '\x01';
              local_b8 = puVar13;
              local_b0 = iVar7;
              if (*(int *)param_2 < 1) {
LAB_001011ed:
                iVar7 = *(int *)(this + 0x30);
                goto LAB_00100f76;
              }
            }
            uprv_free_76_godot(local_b8);
          }
        }
      }
    }
  }
LAB_00100bd0:
  if (local_130 != 0) {
    icu_76_godot::LSR::deleteOwned();
  }
LAB_00100be2:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::LocaleMatcher::Builder::build(UErrorCode&) const */

UErrorCode * icu_76_godot::LocaleMatcher::Builder::build(UErrorCode *param_1)

{
  UErrorCode *in_RDX;
  Builder *in_RSI;
  
  if ((*(int *)in_RDX < 1) && (0 < *(int *)in_RSI)) {
    *(int *)in_RDX = *(int *)in_RSI;
    LocaleMatcher((LocaleMatcher *)param_1,in_RSI,in_RDX);
    return param_1;
  }
  LocaleMatcher((LocaleMatcher *)param_1,in_RSI,in_RDX);
  return param_1;
}



/* icu_76_godot::LocaleMatcher::LocaleMatcher(icu_76_godot::LocaleMatcher&&) */

void __thiscall
icu_76_godot::LocaleMatcher::LocaleMatcher(LocaleMatcher *this,LocaleMatcher *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  uVar8 = *(undefined8 *)(param_1 + 0x60);
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)param_1;
  uVar10 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x20) = uVar3;
  *(undefined8 *)(this + 0x28) = uVar4;
  *(undefined8 *)(this + 0x18) = uVar2;
  uVar1 = *(undefined4 *)(param_1 + 0x30);
  *(undefined8 *)this = uVar9;
  *(undefined8 *)(this + 8) = uVar10;
  *(undefined4 *)(this + 0x30) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(this + 0x38) = uVar5;
  *(undefined8 *)(this + 0x40) = uVar6;
  *(undefined8 *)(this + 0x58) = uVar7;
  *(undefined8 *)(this + 0x60) = uVar8;
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x58) = (undefined1  [16])0x0;
  return;
}



/* icu_76_godot::LocaleMatcher::~LocaleMatcher() */

void __thiscall icu_76_godot::LocaleMatcher::~LocaleMatcher(LocaleMatcher *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  void *in_RSI;
  
  lVar2 = *(long *)(this + 0x20);
  if (0 < *(int *)(this + 0x30)) {
    lVar3 = 0;
    do {
      plVar1 = *(long **)(lVar2 + lVar3 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar2 = *(long *)(this + 0x20);
      }
      lVar3 = lVar3 + 1;
    } while ((int)lVar3 < *(int *)(this + 0x30));
  }
  uprv_free_76_godot(lVar2);
  lVar2 = *(long *)(this + 0x28);
  if (lVar2 != 0) {
    lVar4 = *(long *)(lVar2 + -8) * 0x30 + lVar2;
    lVar3 = lVar4;
    if (lVar2 != lVar4) {
      do {
        lVar4 = lVar3 + -0x30;
        if (*(long *)(lVar3 + -0x18) != 0) {
          icu_76_godot::LSR::deleteOwned();
        }
        lVar3 = lVar4;
      } while (*(long *)(this + 0x28) != lVar4);
    }
    icu_76_godot::UMemory::operator_delete__((UMemory *)(lVar4 + -8),in_RSI);
  }
  uhash_close_76_godot(*(undefined8 *)(this + 0x38));
  uprv_free_76_godot(*(undefined8 *)(this + 0x40));
  uprv_free_76_godot(*(undefined8 *)(this + 0x48));
  if (*(long **)(this + 0x58) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0010138b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x58) + 8))();
    return;
  }
  return;
}



/* icu_76_godot::LocaleMatcher::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::LocaleMatcher&&) */

LocaleMatcher * __thiscall
icu_76_godot::LocaleMatcher::operator=(LocaleMatcher *this,LocaleMatcher *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  ~LocaleMatcher(this);
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined4 *)(this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(this + 0x40) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(this + 0x48) = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined4 *)(param_1 + 0x50);
  *(undefined8 *)(this + 0x58) = uVar2;
  *(undefined8 *)(this + 0x60) = uVar3;
  *(undefined4 *)(this + 0x50) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(param_1 + 0x58) = (undefined1  [16])0x0;
  return this;
}



/* icu_76_godot::LocaleMatcher::getBestMatch(icu_76_godot::Locale const&, UErrorCode&) const */

undefined8 __thiscall
icu_76_godot::LocaleMatcher::getBestMatch(LocaleMatcher *this,Locale *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long in_FS_OFFSET;
  int local_70;
  _anonymous_namespace_ local_68 [24];
  long local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = 0;
  if (*(int *)param_2 < 1) {
    cVar2 = '\0';
    (anonymous_namespace)::getMaximalLsrOrUnd(local_68,*(LikelySubtags **)this,param_1,param_2);
    if (*(int *)param_2 < 1) {
      uVar1 = getBestSuppIndex(this,local_68,0,param_2);
      local_70 = (int)uVar1;
      lVar3 = (long)local_70;
      cVar2 = (char)((ulong)uVar1 >> 0x20);
    }
    else {
      lVar3 = (long)local_70;
    }
    if (local_50 != 0) {
      icu_76_godot::LSR::deleteOwned();
    }
    if ((*(int *)param_2 < 1) && (cVar2 != '\0')) {
      uVar1 = *(undefined8 *)(*(long *)(this + 0x20) + lVar3 * 8);
    }
    else {
      uVar1 = *(undefined8 *)(this + 0x60);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocaleMatcher::getBestMatch(icu_76_godot::Locale::Iterator&, UErrorCode&) const */

undefined8 __thiscall
icu_76_godot::LocaleMatcher::getBestMatch(LocaleMatcher *this,Iterator *param_1,UErrorCode *param_2)

{
  LikelySubtags *pLVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  LikelySubtags *local_a8;
  Iterator *pIStack_a0;
  int local_98;
  Locale *local_90;
  long *local_88;
  undefined4 local_80;
  _anonymous_namespace_ local_78 [24];
  long local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = 0;
  if (*(int *)param_2 < 1) {
    cVar2 = (**(code **)(*(long *)param_1 + 0x10))(param_1);
    if (cVar2 == '\0') {
      uVar3 = *(undefined8 *)(this + 0x60);
    }
    else {
      pLVar1 = *(LikelySubtags **)this;
      local_98 = 0;
      local_80 = 0xffffffff;
      local_88 = (long *)0x0;
      local_a8 = pLVar1;
      pIStack_a0 = param_1;
      local_90 = (Locale *)(**(code **)(*(long *)param_1 + 0x18))(param_1);
      cVar2 = '\0';
      (anonymous_namespace)::getMaximalLsrOrUnd(local_78,pLVar1,local_90,param_2);
      iVar4 = 0;
      if (*(int *)param_2 < 1) {
        local_b0 = getBestSuppIndex(this,local_78,&local_a8,param_2);
        cVar2 = (char)((ulong)local_b0 >> 0x20);
        iVar4 = local_98;
      }
      if (local_60 != 0) {
        icu_76_godot::LSR::deleteOwned();
      }
      if ((*(int *)param_2 < 1) && (cVar2 != '\0')) {
        uVar3 = *(undefined8 *)(*(long *)(this + 0x20) + (long)(int)local_b0 * 8);
      }
      else {
        uVar3 = *(undefined8 *)(this + 0x60);
      }
      if ((iVar4 == 0) && (local_88 != (long *)0x0)) {
        (**(code **)(*local_88 + 8))();
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocaleMatcher::getBestMatchForListString(icu_76_godot::StringPiece, UErrorCode&)
   const */

undefined8
icu_76_godot::LocaleMatcher::getBestMatchForListString
          (LocaleMatcher *param_1,undefined8 param_2,undefined8 param_3,UErrorCode *param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  LocalePriorityList aLStack_88 [8];
  int local_80;
  int local_7c;
  undefined **local_68;
  undefined1 *puStack_60;
  undefined8 local_58;
  int local_50;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_4 < 1) {
    icu_76_godot::LocalePriorityList::LocalePriorityList(aLStack_88);
    local_50 = local_80 - local_7c;
    local_68 = &PTR__Iterator_001025c8;
    local_58 = 0;
    puStack_60 = aLStack_88;
    uVar1 = getBestMatch(param_1,(Iterator *)&local_68,param_4);
    local_68 = &PTR__Iterator_001025c8;
    icu_76_godot::Locale::Iterator::~Iterator((Iterator *)&local_68);
    icu_76_godot::LocalePriorityList::~LocalePriorityList(aLStack_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocaleMatcher::getBestMatchResult(icu_76_godot::Locale const&, UErrorCode&) const
    */

Locale * icu_76_godot::LocaleMatcher::getBestMatchResult(Locale *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  UErrorCode *in_RCX;
  Locale *in_RDX;
  char cVar2;
  long in_FS_OFFSET;
  int local_80;
  _anonymous_namespace_ local_78 [24];
  long local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RCX < 1) {
    cVar2 = '\0';
    (anonymous_namespace)::getMaximalLsrOrUnd(local_78,*(LikelySubtags **)param_2,in_RDX,in_RCX);
    if (*(int *)in_RCX < 1) {
      uVar1 = getBestSuppIndex((LocaleMatcher *)param_2,local_78,0);
      local_80 = (int)uVar1;
      cVar2 = (char)((ulong)uVar1 >> 0x20);
    }
    if (local_60 != 0) {
      icu_76_godot::LSR::deleteOwned();
    }
    if ((*(int *)in_RCX < 1) && (cVar2 != '\0')) {
      uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)local_80 * 8);
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(int *)(param_1 + 0x14) = local_80;
      param_1[0x18] = (Locale)0x0;
      *(Locale **)param_1 = in_RDX;
      *(undefined8 *)(param_1 + 8) = uVar1;
      goto LAB_0010177a;
    }
  }
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = uVar1;
  param_1[0x18] = (Locale)0x0;
LAB_0010177a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* icu_76_godot::LocaleMatcher::getBestMatchResult(icu_76_godot::Locale::Iterator&, UErrorCode&)
   const */

Iterator * icu_76_godot::LocaleMatcher::getBestMatchResult(Iterator *param_1,UErrorCode *param_2)

{
  undefined8 uVar1;
  LikelySubtags *pLVar2;
  char cVar3;
  UErrorCode *in_RCX;
  long *in_RDX;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  LikelySubtags *local_a8 [2];
  int local_98;
  Locale *local_90;
  long *local_88;
  undefined4 local_80;
  _anonymous_namespace_ local_78 [24];
  long local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RCX < 1) {
    cVar3 = (**(code **)(*in_RDX + 0x10))();
    if (cVar3 != '\0') {
      pLVar2 = *(LikelySubtags **)param_2;
      local_98 = 0;
      local_80 = 0xffffffff;
      local_88 = (long *)0x0;
      local_a8[0] = pLVar2;
      local_90 = (Locale *)(**(code **)(*in_RDX + 0x18))();
      cVar3 = '\0';
      (anonymous_namespace)::getMaximalLsrOrUnd(local_78,pLVar2,local_90,in_RCX);
      iVar4 = 0;
      if (*(int *)in_RCX < 1) {
        local_b0 = getBestSuppIndex((LocaleMatcher *)param_2,local_78,local_a8);
        cVar3 = (char)((ulong)local_b0 >> 0x20);
        iVar4 = local_98;
      }
      if (local_60 != 0) {
        icu_76_godot::LSR::deleteOwned();
      }
      if ((*(int *)in_RCX < 1) && (cVar3 != '\0')) {
        uVar1 = *(undefined8 *)(*(long *)(param_2 + 0x20) + (long)(int)local_b0 * 8);
        param_1[0x18] = (Iterator)0x1;
        *(long **)param_1 = local_88;
        *(undefined8 *)(param_1 + 8) = uVar1;
        *(ulong *)(param_1 + 0x10) = CONCAT44((int)local_b0,local_80);
      }
      else {
        uVar1 = *(undefined8 *)(param_2 + 0x60);
        *(undefined8 *)param_1 = 0;
        *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(param_1 + 8) = uVar1;
        param_1[0x18] = (Iterator)0x0;
        if ((iVar4 == 0) && (local_88 != (long *)0x0)) {
          (**(code **)(*local_88 + 8))();
        }
      }
      goto LAB_0010189f;
    }
  }
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(param_1 + 8) = uVar1;
  param_1[0x18] = (Iterator)0x0;
LAB_0010189f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::LocaleMatcher::getBestSuppIndex(icu_76_godot::LSR,
   icu_76_godot::LocaleLsrIterator*, UErrorCode&) const */

ulong icu_76_godot::LocaleMatcher::getBestSuppIndex(void)

{
  ulong uVar1;
  int *in_RCX;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (0 < *in_RCX) {
    return CONCAT44(uStack_c,local_10) & 0xffffff00ffffffff;
  }
  uVar1 = getBestSuppIndex();
  return uVar1;
}



/* icu_76_godot::LocaleMatcher::isMatch(icu_76_godot::Locale const&, icu_76_godot::Locale const&,
   UErrorCode&) const */

uint __thiscall
icu_76_godot::LocaleMatcher::isMatch
          (LocaleMatcher *this,Locale *param_1,Locale *param_2,UErrorCode *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  uint uVar5;
  long in_FS_OFFSET;
  _anonymous_namespace_ *local_b0;
  _anonymous_namespace_ local_a8 [24];
  long local_90;
  _anonymous_namespace_ local_78 [24];
  long local_60;
  long local_40;
  
  uVar5 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    (anonymous_namespace)::getMaximalLsrOrUnd(local_a8,*(LikelySubtags **)this,param_2,param_3);
    if (*(int *)param_3 < 1) {
      iVar1 = *(int *)(this + 0x10);
      uVar4 = *(undefined8 *)(this + 8);
      uVar2 = *(undefined4 *)(this + 0x18);
      uVar3 = *(undefined4 *)(this + 0x1c);
      local_b0 = local_a8;
      (anonymous_namespace)::getMaximalLsrOrUnd(local_78,*(LikelySubtags **)this,param_1,param_3);
      uVar5 = icu_76_godot::LocaleDistance::getBestIndexAndDistance
                        (uVar4,local_78,&local_b0,1,iVar1 * 8,uVar2,uVar3);
      if (local_60 != 0) {
        icu_76_godot::LSR::deleteOwned();
      }
      uVar5 = ~uVar5 >> 0x1f;
    }
    if (local_90 != 0) {
      icu_76_godot::LSR::deleteOwned();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::LocaleMatcher::internalMatch(icu_76_godot::Locale const&, icu_76_godot::Locale
   const&, UErrorCode&) const */

void __thiscall
icu_76_godot::LocaleMatcher::internalMatch
          (LocaleMatcher *this,Locale *param_1,Locale *param_2,UErrorCode *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  _anonymous_namespace_ *local_b0;
  _anonymous_namespace_ local_a8 [24];
  long local_90;
  _anonymous_namespace_ local_78 [24];
  long local_60;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_3 < 1) {
    (anonymous_namespace)::getMaximalLsrOrUnd(local_a8,*(LikelySubtags **)this,param_2,param_3);
    if (*(int *)param_3 < 1) {
      iVar1 = *(int *)(this + 0x10);
      uVar4 = *(undefined8 *)(this + 8);
      uVar2 = *(undefined4 *)(this + 0x18);
      uVar3 = *(undefined4 *)(this + 0x1c);
      local_b0 = local_a8;
      (anonymous_namespace)::getMaximalLsrOrUnd(local_78,*(LikelySubtags **)this,param_1,param_3);
      icu_76_godot::LocaleDistance::getBestIndexAndDistance
                (uVar4,local_78,&local_b0,1,iVar1 * 8,uVar2,uVar3);
      if (local_60 != 0) {
        icu_76_godot::LSR::deleteOwned();
      }
    }
    if (local_90 != 0) {
      icu_76_godot::LSR::deleteOwned();
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* icu_76_godot::LocaleMatcher::Result::makeResolvedLocale(UErrorCode&) const */

UErrorCode * icu_76_godot::LocaleMatcher::Result::makeResolvedLocale(UErrorCode *param_1)

{
  Locale *pLVar1;
  char cVar2;
  Locale *pLVar3;
  int *in_RDX;
  undefined8 *in_RSI;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  LocaleBuilder local_68 [56];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*in_RDX < 1) && (pLVar3 = (Locale *)in_RSI[1], pLVar3 != (Locale *)0x0)) {
    pLVar1 = (Locale *)*in_RSI;
    if (pLVar1 != (Locale *)0x0) {
      cVar2 = icu_76_godot::Locale::operator==(pLVar3,pLVar1);
      if (cVar2 == '\0') {
        icu_76_godot::LocaleBuilder::LocaleBuilder(local_68);
        icu_76_godot::LocaleBuilder::setLocale((Locale *)local_68);
        if (pLVar1[0x1a] != (Locale)0x0) {
          icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_78,(char *)(pLVar1 + 0x1a));
          icu_76_godot::LocaleBuilder::setRegion(local_68,local_78,local_70);
        }
        if ((pLVar1[0xd8] == (Locale)0x0) &&
           (*(char *)((long)*(int *)(pLVar1 + 0x20) + *(long *)(pLVar1 + 0xd0)) != '\0')) {
          icu_76_godot::StringPiece::StringPiece
                    ((StringPiece *)&local_78,
                     (char *)((long)*(int *)(pLVar1 + 0x20) + *(long *)(pLVar1 + 0xd0)));
          icu_76_godot::LocaleBuilder::setVariant(local_68,local_78,local_70);
        }
        icu_76_godot::LocaleBuilder::copyExtensionsFrom((Locale *)local_68,(UErrorCode *)pLVar1);
        icu_76_godot::LocaleBuilder::build(param_1);
        icu_76_godot::LocaleBuilder::~LocaleBuilder(local_68);
        goto LAB_00101d30;
      }
      pLVar3 = (Locale *)in_RSI[1];
    }
    icu_76_godot::Locale::Locale((Locale *)param_1,pLVar3);
  }
  else {
    pLVar3 = (Locale *)icu_76_godot::Locale::getRoot();
    icu_76_godot::Locale::Locale((Locale *)param_1,pLVar3);
  }
LAB_00101d30:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::Locale::ConvertingIterator<char const**, (anonymous
   namespace)::LocaleFromTag>::next() */

undefined8 __thiscall
icu_76_godot::Locale::ConvertingIterator<char_const**,(anonymous_namespace)::LocaleFromTag>::next
          (ConvertingIterator<char_const**,(anonymous_namespace)::LocaleFromTag> *this)

{
  char *pcVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  Locale aLStack_108 [232];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = (char *)**(undefined8 **)(this + 8);
  *(undefined8 **)(this + 8) = *(undefined8 **)(this + 8) + 1;
  icu_76_godot::Locale::Locale(aLStack_108,pcVar1,(char *)0x0,(char *)0x0,(char *)0x0);
  uVar2 = icu_76_godot::Locale::operator=((Locale *)(this + 0x18),aLStack_108);
  icu_76_godot::Locale::~Locale(aLStack_108);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* (anonymous namespace)::acceptLanguage(UEnumeration&, icu_76_godot::Locale::Iterator&, char*, int,
   UAcceptResult*, UErrorCode&) [clone .part.0] */

undefined4
(anonymous_namespace)::acceptLanguage
          (UEnumeration *param_1,Iterator *param_2,char *param_3,int param_4,UAcceptResult *param_5,
          UErrorCode *param_6)

{
  byte bVar1;
  undefined4 uVar2;
  char *pcVar3;
  size_t sVar4;
  long in_FS_OFFSET;
  Locale *local_1f8;
  Locale *local_1f0;
  int local_1e8;
  char local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined1 local_1a8 [16];
  LocaleMatcher local_198 [112];
  Locale local_128 [216];
  char local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_1a8 = (undefined1  [16])0x0;
  local_1d8 = 0;
  local_1d0 = 0;
  local_1c8 = 0x1ffffffff;
  local_1c0 = 0;
  local_1b8 = 1;
  local_1b0 = 0;
  do {
    pcVar3 = (char *)uenum_next_76_godot(param_1,0,param_6);
    if (pcVar3 == (char *)0x0) {
      if ((*(int *)param_6 < 1) && (0 < (int)local_1d8)) {
        *(int *)param_6 = (int)local_1d8;
      }
      uVar2 = 0;
      icu_76_godot::LocaleMatcher::LocaleMatcher(local_198,(Builder *)&local_1d8,param_6);
      icu_76_godot::LocaleMatcher::getBestMatchResult
                ((Iterator *)&local_1f8,(UErrorCode *)local_198);
      if (*(int *)param_6 < 1) {
        if (local_1e8 < 0) {
          if (param_5 != (UAcceptResult *)0x0) {
            *(undefined4 *)param_5 = 0;
          }
          uVar2 = u_terminateChars_76_godot(param_3,param_4,0,param_6);
        }
        else {
          if (param_5 != (UAcceptResult *)0x0) {
            bVar1 = icu_76_godot::Locale::operator==(local_1f8,local_1f0);
            *(uint *)param_5 = 2 - (uint)bVar1;
          }
          pcVar3 = *(char **)(local_1f0 + 0x28);
          sVar4 = strlen(pcVar3);
          if ((int)sVar4 <= param_4) {
            memcpy(param_3,pcVar3,(long)(int)sVar4);
          }
          uVar2 = u_terminateChars_76_godot(param_3,param_4,sVar4 & 0xffffffff,param_6);
        }
      }
      if ((local_1e0 != '\0') && (local_1f8 != (Locale *)0x0)) {
        (**(code **)(*(long *)local_1f8 + 8))();
      }
      icu_76_godot::LocaleMatcher::~LocaleMatcher(local_198);
LAB_00101fff:
      icu_76_godot::LocaleMatcher::Builder::~Builder((Builder *)&local_1d8);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return uVar2;
    }
    icu_76_godot::Locale::Locale(local_128,pcVar3,(char *)0x0,(char *)0x0,(char *)0x0);
    if (local_50 != '\0') {
      *(undefined4 *)param_6 = 1;
      uVar2 = 0;
      icu_76_godot::Locale::~Locale(local_128);
      goto LAB_00101fff;
    }
    icu_76_godot::LocaleMatcher::Builder::addSupportedLocale((Locale *)&local_1d8);
    icu_76_godot::Locale::~Locale(local_128);
  } while( true );
}



undefined4
uloc_acceptLanguageFromHTTP_76_godot
          (char *param_1,int param_2,UAcceptResult *param_3,char *param_4,UEnumeration *param_5,
          UErrorCode *param_6)

{
  undefined4 uVar1;
  long in_FS_OFFSET;
  LocalePriorityList local_88 [8];
  int local_80;
  int local_7c;
  undefined **local_68;
  LocalePriorityList *pLStack_60;
  undefined8 local_58;
  int local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_6 < 1) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) goto LAB_0010211e;
    }
    else if (-1 < param_2) {
LAB_0010211e:
      if ((param_4 != (char *)0x0) && (param_5 != (UEnumeration *)0x0)) {
        icu_76_godot::StringPiece::StringPiece((StringPiece *)&local_68,param_4);
        icu_76_godot::LocalePriorityList::LocalePriorityList(local_88,local_68,pLStack_60,param_6);
        local_50 = local_80 - local_7c;
        local_58 = 0;
        uVar1 = 0;
        local_68 = &PTR__Iterator_001025c8;
        pLStack_60 = local_88;
        if (*(int *)param_6 < 1) {
          uVar1 = (anonymous_namespace)::acceptLanguage
                            (param_5,(Iterator *)&local_68,param_1,param_2,param_3,param_6);
        }
        local_68 = &PTR__Iterator_001025c8;
        icu_76_godot::Locale::Iterator::~Iterator((Iterator *)&local_68);
        icu_76_godot::LocalePriorityList::~LocalePriorityList(local_88);
        goto LAB_001021c9;
      }
    }
    *(undefined4 *)param_6 = 1;
  }
  uVar1 = 0;
LAB_001021c9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* icu_76_godot::Locale::ConvertingIterator<char const**, (anonymous
   namespace)::LocaleFromTag>::~ConvertingIterator() */

void __thiscall
icu_76_godot::Locale::ConvertingIterator<char_const**,(anonymous_namespace)::LocaleFromTag>::
~ConvertingIterator(ConvertingIterator<char_const**,(anonymous_namespace)::LocaleFromTag> *this)

{
  *(undefined ***)this = &PTR__ConvertingIterator_001025f8;
  icu_76_godot::Locale::~Locale((Locale *)(this + 0x18));
  icu_76_godot::Locale::Iterator::~Iterator((Iterator *)this);
  return;
}



/* icu_76_godot::Locale::ConvertingIterator<char const**, (anonymous
   namespace)::LocaleFromTag>::~ConvertingIterator() */

void __thiscall
icu_76_godot::Locale::ConvertingIterator<char_const**,(anonymous_namespace)::LocaleFromTag>::
~ConvertingIterator(ConvertingIterator<char_const**,(anonymous_namespace)::LocaleFromTag> *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__ConvertingIterator_001025f8;
  icu_76_godot::Locale::~Locale((Locale *)(this + 0x18));
  icu_76_godot::Locale::Iterator::~Iterator((Iterator *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



undefined4
uloc_acceptLanguage_76_godot
          (char *param_1,int param_2,UAcceptResult *param_3,long param_4,int param_5,
          UEnumeration *param_6,UErrorCode *param_7)

{
  undefined4 uVar1;
  Locale *pLVar2;
  long in_FS_OFFSET;
  Locale local_2f8 [224];
  Locale local_218 [224];
  undefined **local_138;
  long local_130;
  long local_128;
  Locale local_120 [224];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_7 < 1) {
    if (param_1 == (char *)0x0) {
      if (param_2 == 0) goto LAB_001022cc;
    }
    else if (-1 < param_2) {
LAB_001022cc:
      if (param_4 == 0) {
        if (param_5 == 0) goto LAB_001022de;
      }
      else if (-1 < param_5) {
LAB_001022de:
        if (param_6 != (UEnumeration *)0x0) {
          pLVar2 = (Locale *)icu_76_godot::Locale::getRoot();
          icu_76_godot::Locale::Locale(local_2f8,pLVar2);
          icu_76_godot::Locale::Locale(local_218,local_2f8);
          local_128 = param_4 + (long)param_5 * 8;
          local_138 = &PTR__ConvertingIterator_001025f8;
          local_130 = param_4;
          icu_76_godot::Locale::Locale(local_120,local_218);
          icu_76_godot::Locale::~Locale(local_218);
          uVar1 = 0;
          if (*(int *)param_7 < 1) {
            uVar1 = (anonymous_namespace)::acceptLanguage
                              (param_6,(Iterator *)&local_138,param_1,param_2,param_3,param_7);
          }
          local_138 = &PTR__ConvertingIterator_001025f8;
          icu_76_godot::Locale::~Locale(local_120);
          icu_76_godot::Locale::Iterator::~Iterator((Iterator *)&local_138);
          icu_76_godot::Locale::~Locale(local_2f8);
          goto LAB_001023b8;
        }
      }
    }
    *(undefined4 *)param_7 = 1;
  }
  uVar1 = 0;
LAB_001023b8:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* icu_76_godot::LocalePriorityList::Iterator::hasNext() const */

undefined4 __thiscall icu_76_godot::LocalePriorityList::Iterator::hasNext(Iterator *this)

{
  return CONCAT31((int3)((uint)*(int *)(this + 0x18) >> 8),
                  *(int *)(this + 0x14) < *(int *)(this + 0x18));
}



/* icu_76_godot::LocalePriorityList::Iterator::next() */

void __thiscall icu_76_godot::LocalePriorityList::Iterator::next(Iterator *this)

{
  long lVar1;
  
  do {
    *(int *)(this + 0x10) = *(int *)(this + 0x10) + 1;
    lVar1 = icu_76_godot::LocalePriorityList::localeAt((int)*(undefined8 *)(this + 8));
  } while (lVar1 == 0);
  *(int *)(this + 0x14) = *(int *)(this + 0x14) + 1;
  return;
}



/* icu_76_godot::LocalePriorityList::Iterator::~Iterator() */

void __thiscall icu_76_godot::LocalePriorityList::Iterator::~Iterator(Iterator *this)

{
  *(undefined ***)this = &PTR__Iterator_001025c8;
  icu_76_godot::Locale::Iterator::~Iterator((Iterator *)this);
  return;
}



/* icu_76_godot::LocalePriorityList::Iterator::~Iterator() */

void __thiscall icu_76_godot::LocalePriorityList::Iterator::~Iterator(Iterator *this)

{
  *(undefined ***)this = &PTR__Iterator_001025c8;
  icu_76_godot::Locale::Iterator::~Iterator((Iterator *)this);
  operator_delete(this,0x20);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* icu_76_godot::LocalePriorityList::Iterator::~Iterator() */

void __thiscall icu_76_godot::LocalePriorityList::Iterator::~Iterator(Iterator *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


