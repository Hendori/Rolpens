
/* icu_76_godot::LocaleBased::getLocale(ULocDataLocaleType, UErrorCode&) const */

Locale * icu_76_godot::LocaleBased::getLocale
                   (Locale *param_1,long *param_2,int param_3,int *param_4)

{
  char *pcVar1;
  
  if (*param_4 < 1) {
    if (param_3 == 0) {
      pcVar1 = (char *)param_2[1];
    }
    else {
      if (param_3 != 1) {
        *param_4 = 1;
        goto LAB_0010003e;
      }
      pcVar1 = (char *)*param_2;
    }
    if (pcVar1 != (char *)0x0) goto LAB_0010001f;
  }
LAB_0010003e:
  pcVar1 = "";
LAB_0010001f:
  icu_76_godot::Locale::Locale(param_1,pcVar1,(char *)0x0,(char *)0x0,(char *)0x0);
  return param_1;
}



/* icu_76_godot::LocaleBased::getLocaleID(ULocDataLocaleType, UErrorCode&) const */

undefined8 __thiscall
icu_76_godot::LocaleBased::getLocaleID(LocaleBased *this,int param_2,int *param_3)

{
  if (*param_3 < 1) {
    if (param_2 == 0) {
      return *(undefined8 *)(this + 8);
    }
    if (param_2 == 1) {
      return *(undefined8 *)this;
    }
    *param_3 = 1;
  }
  return 0;
}



/* icu_76_godot::LocaleBased::setLocaleIDs(char const*, char const*) */

void __thiscall
icu_76_godot::LocaleBased::setLocaleIDs(LocaleBased *this,char *param_1,char *param_2)

{
  if (param_1 != (char *)0x0) {
    strncpy(*(char **)this,param_1,0x9d);
    *(undefined1 *)(*(long *)this + 0x9c) = 0;
  }
  if (param_2 != (char *)0x0) {
    strncpy(*(char **)(this + 8),param_2,0x9d);
    *(undefined1 *)(*(long *)(this + 8) + 0x9c) = 0;
  }
  return;
}



/* icu_76_godot::LocaleBased::setLocaleIDs(icu_76_godot::Locale const&, icu_76_godot::Locale const&)
    */

void __thiscall
icu_76_godot::LocaleBased::setLocaleIDs(LocaleBased *this,Locale *param_1,Locale *param_2)

{
  strcpy(*(char **)this,*(char **)(param_1 + 0x28));
  strcpy(*(char **)(this + 8),*(char **)(param_2 + 0x28));
  return;
}


