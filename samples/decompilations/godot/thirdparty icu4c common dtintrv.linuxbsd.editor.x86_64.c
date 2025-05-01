
/* icu_76_godot::DateInterval::getDynamicClassID() const */

undefined1 * icu_76_godot::DateInterval::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::DateInterval::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::DateInterval const&) const */

ulong __thiscall icu_76_godot::DateInterval::operator==(DateInterval *this,DateInterval *param_1)

{
  undefined8 in_RAX;
  ulong uVar1;
  
  if (*(double *)(this + 8) != *(double *)(param_1 + 8)) {
    return 0;
  }
  uVar1 = CONCAT71((int7)((ulong)in_RAX >> 8),
                   !NAN(*(double *)(this + 0x10)) && !NAN(*(double *)(param_1 + 0x10))) & 0xffffffff
  ;
  if (*(double *)(this + 0x10) != *(double *)(param_1 + 0x10)) {
    uVar1 = 0;
  }
  return uVar1;
}



/* icu_76_godot::DateInterval::~DateInterval() */

void __thiscall icu_76_godot::DateInterval::~DateInterval(DateInterval *this)

{
  *(undefined ***)this = &PTR__DateInterval_00100188;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::DateInterval::~DateInterval() */

void __thiscall icu_76_godot::DateInterval::~DateInterval(DateInterval *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__DateInterval_00100188;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::DateInterval::clone() const */

void icu_76_godot::DateInterval::clone(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong in_RSI;
  undefined8 *in_RDI;
  
  puVar2 = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x18,in_RSI);
  if ((puVar2 != (undefined8 *)0x0) && (*puVar2 = &PTR__DateInterval_00100188, puVar2 != in_RDI)) {
    uVar1 = in_RDI[2];
    puVar2[1] = in_RDI[1];
    puVar2[2] = uVar1;
  }
  return;
}



/* icu_76_godot::DateInterval::getStaticClassID() */

undefined1 * icu_76_godot::DateInterval::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::DateInterval::DateInterval(double, double) */

void __thiscall
icu_76_godot::DateInterval::DateInterval(DateInterval *this,double param_1,double param_2)

{
  *(undefined ***)this = &PTR__DateInterval_00100188;
  *(double *)(this + 8) = param_1;
  *(double *)(this + 0x10) = param_2;
  return;
}



/* icu_76_godot::DateInterval::DateInterval(icu_76_godot::DateInterval const&) */

void __thiscall icu_76_godot::DateInterval::DateInterval(DateInterval *this,DateInterval *param_1)

{
  undefined8 uVar1;
  
  *(undefined ***)this = &PTR__DateInterval_00100188;
  if (this != param_1) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
  }
  return;
}



/* icu_76_godot::DateInterval::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::DateInterval const&) */

DateInterval * __thiscall
icu_76_godot::DateInterval::operator=(DateInterval *this,DateInterval *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
  }
  return this;
}


