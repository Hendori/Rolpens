
/* icu_76_godot::UnicodeString::toTitle(icu_76_godot::BreakIterator*, icu_76_godot::Locale const&,
   unsigned int) */

UnicodeString * __thiscall
icu_76_godot::UnicodeString::toTitle
          (UnicodeString *this,BreakIterator *param_1,Locale *param_2,uint param_3)

{
  uint uVar1;
  _func_int_int_uint_BreakIterator_ptr_wchar16_ptr_int_wchar16_ptr_int_Edits_ptr_UErrorCode_ptr
  *p_Var2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined4 local_3c;
  long *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = (long *)0x0;
  local_3c = 0;
  p_Var2 = (_func_int_int_uint_BreakIterator_ptr_wchar16_ptr_int_wchar16_ptr_int_Edits_ptr_UErrorCode_ptr
            *)ustrcase_getTitleBreakIterator_76_godot
                        (param_2,&_LC0,param_3,param_1,&local_38,&local_3c);
  if (p_Var2 == (_func_int_int_uint_BreakIterator_ptr_wchar16_ptr_int_wchar16_ptr_int_Edits_ptr_UErrorCode_ptr
                 *)0x0) {
    icu_76_godot::UnicodeString::setToBogus();
  }
  else {
    uVar3 = icu_76_godot::Locale::getBaseName();
    uVar1 = ustrcase_getCaseLocale_76_godot(uVar3);
    icu_76_godot::UnicodeString::caseMap((int)this,uVar1,(BreakIterator *)(ulong)param_3,p_Var2);
  }
  if (local_38 != (long *)0x0) {
    (**(code **)(*local_38 + 8))();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::UnicodeString::toTitle(icu_76_godot::BreakIterator*) */

void __thiscall icu_76_godot::UnicodeString::toTitle(UnicodeString *this,BreakIterator *param_1)

{
  Locale *pLVar1;
  
  pLVar1 = (Locale *)icu_76_godot::Locale::getDefault();
  toTitle(this,param_1,pLVar1,0);
  return;
}



/* icu_76_godot::UnicodeString::toTitle(icu_76_godot::BreakIterator*, icu_76_godot::Locale const&)
    */

void __thiscall
icu_76_godot::UnicodeString::toTitle(UnicodeString *this,BreakIterator *param_1,Locale *param_2)

{
  toTitle(this,param_1,param_2,0);
  return;
}


