
/* icu_76_godot::UnicodeString::toLower() */

void __thiscall icu_76_godot::UnicodeString::toLower(UnicodeString *this)

{
  uint uVar1;
  
  uVar1 = ustrcase_getCaseLocale_76_godot(0);
  icu_76_godot::UnicodeString::caseMap
            ((int)this,uVar1,(BreakIterator *)0x0,
             (_func_int_int_uint_BreakIterator_ptr_wchar16_ptr_int_wchar16_ptr_int_Edits_ptr_UErrorCode_ptr
              *)0x0);
  return;
}



/* icu_76_godot::UnicodeString::toLower(icu_76_godot::Locale const&) */

void icu_76_godot::UnicodeString::toLower(Locale *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = icu_76_godot::Locale::getBaseName();
  uVar2 = ustrcase_getCaseLocale_76_godot(uVar1);
  icu_76_godot::UnicodeString::caseMap
            ((int)param_1,uVar2,(BreakIterator *)0x0,
             (_func_int_int_uint_BreakIterator_ptr_wchar16_ptr_int_wchar16_ptr_int_Edits_ptr_UErrorCode_ptr
              *)0x0);
  return;
}



/* icu_76_godot::UnicodeString::toUpper() */

void __thiscall icu_76_godot::UnicodeString::toUpper(UnicodeString *this)

{
  uint uVar1;
  
  uVar1 = ustrcase_getCaseLocale_76_godot(0);
  icu_76_godot::UnicodeString::caseMap
            ((int)this,uVar1,(BreakIterator *)0x0,
             (_func_int_int_uint_BreakIterator_ptr_wchar16_ptr_int_wchar16_ptr_int_Edits_ptr_UErrorCode_ptr
              *)0x0);
  return;
}



/* icu_76_godot::UnicodeString::toUpper(icu_76_godot::Locale const&) */

void icu_76_godot::UnicodeString::toUpper(Locale *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar1 = icu_76_godot::Locale::getBaseName();
  uVar2 = ustrcase_getCaseLocale_76_godot(uVar1);
  icu_76_godot::UnicodeString::caseMap
            ((int)param_1,uVar2,(BreakIterator *)0x0,
             (_func_int_int_uint_BreakIterator_ptr_wchar16_ptr_int_wchar16_ptr_int_Edits_ptr_UErrorCode_ptr
              *)0x0);
  return;
}


