
/* icu_76_godot::WholeStringBreakIterator::getDynamicClassID() const */

undefined1 * icu_76_godot::WholeStringBreakIterator::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::WholeStringBreakIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::BreakIterator
   const&) const */

undefined8 __thiscall
icu_76_godot::WholeStringBreakIterator::operator==
          (WholeStringBreakIterator *this,BreakIterator *param_1)

{
  return 0;
}



/* icu_76_godot::WholeStringBreakIterator::clone() const */

undefined8 icu_76_godot::WholeStringBreakIterator::clone(void)

{
  return 0;
}



/* icu_76_godot::WholeStringBreakIterator::getUText(UText*, UErrorCode&) const */

undefined8 __thiscall
icu_76_godot::WholeStringBreakIterator::getUText
          (WholeStringBreakIterator *this,UText *param_1,UErrorCode *param_2)

{
  if (*(int *)param_2 < 1) {
    *(undefined4 *)param_2 = 0x10;
  }
  return 0;
}



/* icu_76_godot::WholeStringBreakIterator::setText(icu_76_godot::UnicodeString const&) */

void __thiscall
icu_76_godot::WholeStringBreakIterator::setText
          (WholeStringBreakIterator *this,UnicodeString *param_1)

{
  if (-1 < *(short *)(param_1 + 8)) {
    *(int *)(this + 0x1e0) = (int)(*(short *)(param_1 + 8) >> 5);
    return;
  }
  *(undefined4 *)(this + 0x1e0) = *(undefined4 *)(param_1 + 0xc);
  return;
}



/* icu_76_godot::WholeStringBreakIterator::previous() */

undefined8 icu_76_godot::WholeStringBreakIterator::previous(void)

{
  return 0;
}



/* icu_76_godot::WholeStringBreakIterator::next() */

undefined4 __thiscall icu_76_godot::WholeStringBreakIterator::next(WholeStringBreakIterator *this)

{
  return *(undefined4 *)(this + 0x1e0);
}



/* icu_76_godot::WholeStringBreakIterator::next(int) */

undefined4 icu_76_godot::WholeStringBreakIterator::next(int param_1)

{
  undefined4 in_register_0000003c;
  
  return *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x1e0);
}



/* icu_76_godot::WholeStringBreakIterator::preceding(int) */

undefined8 icu_76_godot::WholeStringBreakIterator::preceding(int param_1)

{
  return 0;
}



/* icu_76_godot::WholeStringBreakIterator::isBoundary(int) */

undefined8 icu_76_godot::WholeStringBreakIterator::isBoundary(int param_1)

{
  return 0;
}



/* icu_76_godot::WholeStringBreakIterator::createBufferClone(void*, int&, UErrorCode&) */

undefined8
icu_76_godot::WholeStringBreakIterator::createBufferClone
          (void *param_1,int *param_2,UErrorCode *param_3)

{
  int *in_RCX;
  
  if (*in_RCX < 1) {
    *in_RCX = 0x10;
  }
  return 0;
}



/* icu_76_godot::WholeStringBreakIterator::refreshInputText(UText*, UErrorCode&) */

WholeStringBreakIterator * __thiscall
icu_76_godot::WholeStringBreakIterator::refreshInputText
          (WholeStringBreakIterator *this,UText *param_1,UErrorCode *param_2)

{
  if (0 < *(int *)param_2) {
    return this;
  }
  *(undefined4 *)param_2 = 0x10;
  return this;
}



/* icu_76_godot::WholeStringBreakIterator::~WholeStringBreakIterator() */

void __thiscall
icu_76_godot::WholeStringBreakIterator::~WholeStringBreakIterator(WholeStringBreakIterator *this)

{
  *(undefined ***)this = &PTR__WholeStringBreakIterator_00100958;
  icu_76_godot::BreakIterator::~BreakIterator((BreakIterator *)this);
  return;
}



/* icu_76_godot::WholeStringBreakIterator::~WholeStringBreakIterator() */

void __thiscall
icu_76_godot::WholeStringBreakIterator::~WholeStringBreakIterator(WholeStringBreakIterator *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__WholeStringBreakIterator_00100958;
  icu_76_godot::BreakIterator::~BreakIterator((BreakIterator *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::WholeStringBreakIterator::setText(UText*, UErrorCode&) */

void __thiscall
icu_76_godot::WholeStringBreakIterator::setText
          (WholeStringBreakIterator *this,UText *param_1,UErrorCode *param_2)

{
  long lVar1;
  
  if (0 < *(int *)param_2) {
    return;
  }
  lVar1 = utext_nativeLength_76_godot(param_1);
  if (0x7fffffff < lVar1) {
    *(undefined4 *)param_2 = 8;
    return;
  }
  *(int *)(this + 0x1e0) = (int)lVar1;
  return;
}



/* icu_76_godot::WholeStringBreakIterator::getStaticClassID() */

undefined1 * icu_76_godot::WholeStringBreakIterator::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



BreakIterator *
ustrcase_getTitleBreakIterator_76_godot
          (Locale *param_1,UErrorCode *param_2,uint param_3,BreakIterator *param_4,
          undefined8 *param_5,UErrorCode *param_6)

{
  BreakIterator *this;
  long in_FS_OFFSET;
  Locale local_118 [232];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_6 < 1) {
    param_3 = param_3 & 0xe0;
    if ((param_3 == 0) || (param_4 == (BreakIterator *)0x0)) {
      if (param_4 == (BreakIterator *)0x0) {
        if (param_3 == 0x20) {
          param_4 = (BreakIterator *)
                    icu_76_godot::UMemory::operator_new((UMemory *)0x1e8,(ulong)param_2);
          if (param_4 == (BreakIterator *)0x0) {
            *(undefined4 *)param_6 = 7;
            param_4 = (BreakIterator *)0x0;
          }
          else {
            icu_76_godot::BreakIterator::BreakIterator(param_4);
            *(undefined4 *)(param_4 + 0x1e0) = 0;
            *(undefined ***)param_4 = &PTR__WholeStringBreakIterator_00100958;
          }
        }
        else if (param_3 == 0x40) {
          if (param_1 == (Locale *)0x0) {
            icu_76_godot::Locale::Locale
                      (local_118,(char *)param_2,(char *)0x0,(char *)0x0,(char *)0x0);
          }
          else {
            icu_76_godot::Locale::Locale(local_118,param_1);
          }
          param_4 = (BreakIterator *)
                    icu_76_godot::BreakIterator::createSentenceInstance(local_118,param_6);
          icu_76_godot::Locale::~Locale(local_118);
          param_2 = param_6;
        }
        else if (param_3 == 0) {
          if (param_1 == (Locale *)0x0) {
            icu_76_godot::Locale::Locale
                      (local_118,(char *)param_2,(char *)0x0,(char *)0x0,(char *)0x0);
          }
          else {
            icu_76_godot::Locale::Locale(local_118,param_1);
          }
          param_4 = (BreakIterator *)
                    icu_76_godot::BreakIterator::createWordInstance(local_118,param_6);
          icu_76_godot::Locale::~Locale(local_118);
          param_2 = param_6;
        }
        else {
          *(undefined4 *)param_6 = 1;
          param_4 = (BreakIterator *)0x0;
        }
        this = (BreakIterator *)*param_5;
        if (this != (BreakIterator *)0x0) {
          if (*(code **)(*(long *)this + 8) ==
              icu_76_godot::WholeStringBreakIterator::~WholeStringBreakIterator) {
            *(undefined ***)this = &PTR__WholeStringBreakIterator_00100958;
            icu_76_godot::BreakIterator::~BreakIterator(this);
            icu_76_godot::UMemory::operator_delete((UMemory *)this,param_2);
          }
          else {
            (**(code **)(*(long *)this + 8))(this);
          }
        }
        *param_5 = param_4;
      }
      goto LAB_001001fe;
    }
    *(undefined4 *)param_6 = 1;
  }
  param_4 = (BreakIterator *)0x0;
LAB_001001fe:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::CaseMap::toTitle(char const*, unsigned int, icu_76_godot::BreakIterator*, char16_t
   const*, int, char16_t*, int, icu_76_godot::Edits*, UErrorCode&) */

undefined4
icu_76_godot::CaseMap::toTitle
          (char *param_1,uint param_2,BreakIterator *param_3,wchar16 *param_4,int param_5,
          wchar16 *param_6,int param_7,Edits *param_8,UErrorCode *param_9)

{
  BreakIterator *this;
  undefined4 uVar1;
  long *plVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  BreakIterator *local_98;
  wchar16 *local_90;
  UnicodeString local_88 [8];
  short local_80;
  int local_7c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (BreakIterator *)0x0;
  pcVar3 = param_1;
  plVar2 = (long *)ustrcase_getTitleBreakIterator_76_godot
                             (0,param_1,param_2,param_3,&local_98,param_9);
  if (plVar2 != (long *)0x0) {
    local_90 = param_4;
    icu_76_godot::UnicodeString::UnicodeString(local_88,(uint)param_5 >> 0x1f,&local_90,param_5);
    if (*(code **)(*plVar2 + 0x38) == WholeStringBreakIterator::setText) {
      if (-1 < local_80) {
        local_7c = (int)(local_80 >> 5);
      }
      *(int *)(plVar2 + 0x3c) = local_7c;
    }
    else {
      (**(code **)(*plVar2 + 0x38))(plVar2,local_88);
    }
    uVar1 = ustrcase_getCaseLocale_76_godot(param_1);
    pcVar3 = (char *)(ulong)param_2;
    uVar1 = ustrcase_map_76_godot
                      (uVar1,pcVar3,plVar2,param_6,param_7,param_4,param_5,_GLOBAL_OFFSET_TABLE_,
                       param_8,param_9);
    icu_76_godot::UnicodeString::~UnicodeString(local_88);
  }
  this = local_98;
  if (local_98 != (BreakIterator *)0x0) {
    if (*(code **)(*(long *)local_98 + 8) == WholeStringBreakIterator::~WholeStringBreakIterator) {
      *(undefined ***)local_98 = &PTR__WholeStringBreakIterator_00100958;
      icu_76_godot::BreakIterator::~BreakIterator(local_98);
      icu_76_godot::UMemory::operator_delete((UMemory *)this,pcVar3);
    }
    else {
      (**(code **)(*(long *)local_98 + 8))(local_98);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined4
u_strToTitle_76_godot
          (undefined8 param_1,undefined4 param_2,undefined8 param_3,uint param_4,undefined8 param_5,
          void *param_6,undefined8 param_7)

{
  BreakIterator *this;
  undefined4 uVar1;
  long *plVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  BreakIterator *local_98;
  undefined8 local_90;
  UnicodeString local_88 [8];
  short local_80;
  int local_7c;
  long local_40;
  
  uVar1 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = (BreakIterator *)0x0;
  pvVar3 = param_6;
  plVar2 = (long *)ustrcase_getTitleBreakIterator_76_godot(0,param_6,0,param_5,&local_98,param_7);
  if (plVar2 != (long *)0x0) {
    local_90 = param_3;
    icu_76_godot::UnicodeString::UnicodeString(local_88,param_4 >> 0x1f,&local_90,param_4);
    if (*(code **)(*plVar2 + 0x38) == icu_76_godot::WholeStringBreakIterator::setText) {
      if (-1 < local_80) {
        local_7c = (int)(local_80 >> 5);
      }
      *(int *)(plVar2 + 0x3c) = local_7c;
    }
    else {
      (**(code **)(*plVar2 + 0x38))(plVar2);
    }
    uVar1 = ustrcase_getCaseLocale_76_godot(param_6);
    pvVar3 = (void *)0x0;
    uVar1 = ustrcase_mapWithOverlap_76_godot
                      (uVar1,0,plVar2,param_1,param_2,param_3,param_4,_GLOBAL_OFFSET_TABLE_,param_7)
    ;
    icu_76_godot::UnicodeString::~UnicodeString(local_88);
  }
  this = local_98;
  if (local_98 != (BreakIterator *)0x0) {
    if (*(code **)(*(long *)local_98 + 8) ==
        icu_76_godot::WholeStringBreakIterator::~WholeStringBreakIterator) {
      *(undefined ***)local_98 = &PTR__WholeStringBreakIterator_00100958;
      icu_76_godot::BreakIterator::~BreakIterator(local_98);
      icu_76_godot::UMemory::operator_delete((UMemory *)this,pvVar3);
    }
    else {
      (**(code **)(*(long *)local_98 + 8))(local_98);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



undefined4
ucasemap_toTitle_76_godot
          (long *param_1,undefined8 param_2,undefined4 param_3,BreakIterator *param_4,uint param_5,
          int *param_6)

{
  BreakIterator *this;
  undefined4 uVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  BreakIterator *local_90;
  UnicodeString local_88 [8];
  short local_80;
  int local_7c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_6 < 1) {
    if (*param_1 == 0) {
      plVar3 = param_1 + 1;
      local_90 = (BreakIterator *)0x0;
      lVar2 = ustrcase_getTitleBreakIterator_76_godot
                        (0,plVar3,*(undefined4 *)((long)param_1 + 0x2c),0);
      this = local_90;
      if (lVar2 == 0) {
        if (local_90 != (BreakIterator *)0x0) {
          if (*(code **)(*(long *)local_90 + 8) !=
              icu_76_godot::WholeStringBreakIterator::~WholeStringBreakIterator) {
            uVar1 = 0;
            (**(code **)(*(long *)local_90 + 8))(local_90);
            goto LAB_001007f3;
          }
          *(undefined ***)local_90 = &PTR__WholeStringBreakIterator_00100958;
          icu_76_godot::BreakIterator::~BreakIterator(local_90);
          icu_76_godot::UMemory::operator_delete((UMemory *)this,plVar3);
        }
        goto LAB_001008c0;
      }
      *param_1 = (long)local_90;
    }
    local_90 = param_4;
    icu_76_godot::UnicodeString::UnicodeString(local_88,param_5 >> 0x1f,&local_90,param_5);
    plVar3 = (long *)*param_1;
    if (*(code **)(*plVar3 + 0x38) == icu_76_godot::WholeStringBreakIterator::setText) {
      if (-1 < local_80) {
        local_7c = (int)(local_80 >> 5);
      }
      *(int *)(plVar3 + 0x3c) = local_7c;
    }
    else {
      (**(code **)(*plVar3 + 0x38))(plVar3,local_88);
      plVar3 = (long *)*param_1;
    }
    uVar1 = ustrcase_map_76_godot
                      ((int)param_1[5],*(undefined4 *)((long)param_1 + 0x2c),plVar3,param_2,param_3,
                       param_4,param_5,_GLOBAL_OFFSET_TABLE_,0,param_6);
    icu_76_godot::UnicodeString::~UnicodeString(local_88);
  }
  else {
LAB_001008c0:
    uVar1 = 0;
  }
LAB_001007f3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}



/* icu_76_godot::WholeStringBreakIterator::getText() const */

void icu_76_godot::WholeStringBreakIterator::getText(void)

{
                    /* WARNING: Subroutine does not return */
  abort();
}



/* icu_76_godot::WholeStringBreakIterator::adoptText(icu_76_godot::CharacterIterator*) */

void icu_76_godot::WholeStringBreakIterator::adoptText(CharacterIterator *param_1)

{
                    /* WARNING: Subroutine does not return */
  abort();
}


