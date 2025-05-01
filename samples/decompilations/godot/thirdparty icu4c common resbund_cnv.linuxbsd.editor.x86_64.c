
/* icu_76_godot::ResourceBundle::constructForLocale(icu_76_godot::UnicodeString const&,
   icu_76_godot::Locale const&, UErrorCode&) */

void __thiscall
icu_76_godot::ResourceBundle::constructForLocale
          (ResourceBundle *this,UnicodeString *param_1,Locale *param_2,UErrorCode *param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long in_FS_OFFSET;
  undefined2 local_7a;
  UnicodeString local_78 [8];
  ushort local_70;
  undefined1 local_6e [14];
  undefined1 *local_60;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(ushort *)(param_1 + 8) >> 5 == 0) {
    uVar1 = ures_open_76_godot(0,*(undefined8 *)(param_2 + 0x28),param_3);
    *(undefined8 *)(this + 8) = uVar1;
  }
  else {
    icu_76_godot::UnicodeString::UnicodeString(local_78,param_1);
    local_7a = 0;
    icu_76_godot::UnicodeString::doAppend((wchar16 *)local_78,(int)&local_7a,0);
    if ((local_70 & 0x11) == 0) {
      puVar2 = local_6e;
      if ((local_70 & 2) == 0) {
        puVar2 = local_60;
      }
    }
    else {
      puVar2 = (undefined1 *)0x0;
    }
    uVar1 = ures_openU_76_godot(puVar2,*(undefined8 *)(param_2 + 0x28),param_3);
    *(undefined8 *)(this + 8) = uVar1;
    icu_76_godot::UnicodeString::~UnicodeString(local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* icu_76_godot::ResourceBundle::ResourceBundle(icu_76_godot::UnicodeString const&,
   icu_76_godot::Locale const&, UErrorCode&) */

void __thiscall
icu_76_godot::ResourceBundle::ResourceBundle
          (ResourceBundle *this,UnicodeString *param_1,Locale *param_2,UErrorCode *param_3)

{
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0x101040;
  constructForLocale(this,param_1,param_2,param_3);
  return;
}



/* icu_76_godot::ResourceBundle::ResourceBundle(icu_76_godot::UnicodeString const&, UErrorCode&) */

void __thiscall
icu_76_godot::ResourceBundle::ResourceBundle
          (ResourceBundle *this,UnicodeString *param_1,UErrorCode *param_2)

{
  Locale *pLVar1;
  
  *(undefined8 *)this = 0x101040;
  *(undefined8 *)(this + 0x10) = 0;
  pLVar1 = (Locale *)icu_76_godot::Locale::getDefault();
  constructForLocale(this,param_1,pLVar1,param_2);
  return;
}


