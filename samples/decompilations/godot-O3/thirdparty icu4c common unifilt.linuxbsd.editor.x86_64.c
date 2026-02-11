
/* icu_76_godot::UnicodeFilter::toMatcher() const */

UnicodeFilter * __thiscall icu_76_godot::UnicodeFilter::toMatcher(UnicodeFilter *this)

{
  return this + 8;
}



/* icu_76_godot::UnicodeFilter::setData(icu_76_godot::TransliterationRuleData const*) */

void icu_76_godot::UnicodeFilter::setData(TransliterationRuleData *param_1)

{
  return;
}



/* icu_76_godot::UnicodeFilter::matches(icu_76_godot::Replaceable const&, int&, int, signed char) */

undefined1 __thiscall
icu_76_godot::UnicodeFilter::matches
          (UnicodeFilter *this,long *param_1,int *param_2,int param_3,char param_5)

{
  code *pcVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar6 = *param_2;
  if (iVar6 < param_3) {
    pcVar1 = *(code **)(*(long *)this + 0x38);
    uVar4 = (**(code **)(*param_1 + 0x50))(param_1);
    cVar2 = (*pcVar1)(this,uVar4);
    if (cVar2 == '\0') {
      iVar6 = *param_2;
      goto LAB_00100069;
    }
    *param_2 = *param_2 + (0xffff < uVar4) + 1;
LAB_001000d2:
    uVar3 = 2;
  }
  else {
LAB_00100069:
    if (param_3 < iVar6) {
      pcVar1 = *(code **)(*(long *)this + 0x38);
      uVar5 = (**(code **)(*param_1 + 0x50))(param_1);
      cVar2 = (*pcVar1)(this,uVar5);
      if (cVar2 != '\0') {
        iVar6 = *param_2;
        *param_2 = iVar6 + -1;
        if (-1 < iVar6 + -1) {
          uVar4 = (**(code **)(*param_1 + 0x50))(param_1);
          *param_2 = *param_2 - (uint)(0xffff < uVar4);
        }
        goto LAB_001000d2;
      }
    }
    uVar3 = 0;
    if (param_5 != '\0') {
      return *param_2 == param_3;
    }
  }
  return uVar3;
}



/* non-virtual thunk to icu_76_godot::UnicodeFilter::matches(icu_76_godot::Replaceable const&, int&,
   int, signed char) */

void __thiscall icu_76_godot::UnicodeFilter::matches(UnicodeFilter *this)

{
  matches(this + -8);
  return;
}



/* icu_76_godot::UnicodeFilter::getStaticClassID() */

undefined1 * icu_76_godot::UnicodeFilter::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UnicodeMatcher::~UnicodeMatcher() */

void __thiscall icu_76_godot::UnicodeMatcher::~UnicodeMatcher(UnicodeMatcher *this)

{
  return;
}



/* icu_76_godot::UnicodeMatcher::~UnicodeMatcher() */

void __thiscall icu_76_godot::UnicodeMatcher::~UnicodeMatcher(UnicodeMatcher *this)

{
  operator_delete(this,8);
  return;
}



/* icu_76_godot::UnicodeFilter::~UnicodeFilter() */

void __thiscall icu_76_godot::UnicodeFilter::~UnicodeFilter(UnicodeFilter *this)

{
  *(undefined **)this = &DAT_001002c8;
  icu_76_godot::UnicodeFunctor::~UnicodeFunctor((UnicodeFunctor *)this);
  return;
}



/* icu_76_godot::UnicodeFilter::~UnicodeFilter() */

void __thiscall icu_76_godot::UnicodeFilter::~UnicodeFilter(UnicodeFilter *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001002c8;
  icu_76_godot::UnicodeFunctor::~UnicodeFunctor((UnicodeFunctor *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* non-virtual thunk to icu_76_godot::UnicodeFilter::~UnicodeFilter() */

void __thiscall icu_76_godot::UnicodeFilter::~UnicodeFilter(UnicodeFilter *this)

{
  *(undefined **)(this + -8) = &DAT_001002c8;
  icu_76_godot::UnicodeFunctor::~UnicodeFunctor((UnicodeFunctor *)(this + -8));
  return;
}



/* non-virtual thunk to icu_76_godot::UnicodeFilter::~UnicodeFilter() */

void __thiscall icu_76_godot::UnicodeFilter::~UnicodeFilter(UnicodeFilter *this)

{
  void *in_RSI;
  
  *(undefined **)(this + -8) = &DAT_001002c8;
  icu_76_godot::UnicodeFunctor::~UnicodeFunctor((UnicodeFunctor *)(this + -8));
  icu_76_godot::UMemory::operator_delete((UMemory *)(this + -8),in_RSI);
  return;
}


