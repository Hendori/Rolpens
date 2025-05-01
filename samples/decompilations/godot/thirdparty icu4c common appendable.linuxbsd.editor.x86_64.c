
/* icu_76_godot::Appendable::appendString(char16_t const*, int) */

undefined8 __thiscall
icu_76_godot::Appendable::appendString(Appendable *this,wchar16 *param_1,int param_2)

{
  wchar16 wVar1;
  char cVar2;
  wchar16 *pwVar3;
  wchar16 *pwVar4;
  
  if (-1 < param_2) {
    if (param_2 != 0) {
      pwVar3 = param_1;
      do {
        pwVar4 = pwVar3 + 1;
        cVar2 = (**(code **)(*(long *)this + 0x18))(this,*pwVar3);
        if (cVar2 == '\0') {
          return 0;
        }
        pwVar3 = pwVar4;
      } while (pwVar4 < param_1 + param_2);
    }
    return 1;
  }
  do {
    wVar1 = *param_1;
    param_1 = param_1 + 1;
    if (wVar1 == L'\0') {
      return 1;
    }
    cVar2 = (**(code **)(*(long *)this + 0x18))(this);
  } while (cVar2 != '\0');
  return 0;
}



/* icu_76_godot::Appendable::reserveAppendCapacity(int) */

undefined8 icu_76_godot::Appendable::reserveAppendCapacity(int param_1)

{
  return 1;
}



/* icu_76_godot::Appendable::getAppendBuffer(int, int, char16_t*, int, int*) */

wchar16 * __thiscall
icu_76_godot::Appendable::getAppendBuffer
          (Appendable *this,int param_1,int param_2,wchar16 *param_3,int param_4,int *param_5)

{
  if ((0 < param_1) && (param_1 <= param_4)) {
    *param_5 = param_4;
    return param_3;
  }
  *param_5 = 0;
  return (wchar16 *)0x0;
}



/* icu_76_godot::Appendable::appendCodePoint(int) */

char __thiscall icu_76_godot::Appendable::appendCodePoint(Appendable *this,int param_1)

{
  char cVar1;
  
  if (param_1 < 0x10000) {
                    /* WARNING: Could not recover jumptable at 0x001000d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    cVar1 = (**(code **)(*(long *)this + 0x18))(this,(short)param_1);
    return cVar1;
  }
  cVar1 = (**(code **)(*(long *)this + 0x18))(this,(short)(param_1 >> 10) + -0x2840);
  if (cVar1 != '\0') {
    cVar1 = (**(code **)(*(long *)this + 0x18))(this,param_1 & 0x3ffU | 0xdc00);
    cVar1 = cVar1 != '\0';
  }
  return cVar1;
}



/* icu_76_godot::Appendable::~Appendable() */

void __thiscall icu_76_godot::Appendable::~Appendable(Appendable *this)

{
  *(undefined **)this = &DAT_001001a8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::Appendable::~Appendable() */

void __thiscall icu_76_godot::Appendable::~Appendable(Appendable *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001001a8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}


