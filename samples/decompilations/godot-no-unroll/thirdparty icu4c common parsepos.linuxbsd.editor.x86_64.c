
/* icu_76_godot::ParsePosition::getDynamicClassID() const */

undefined1 * icu_76_godot::ParsePosition::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::ParsePosition::~ParsePosition() */

void __thiscall icu_76_godot::ParsePosition::~ParsePosition(ParsePosition *this)

{
  *(undefined ***)this = &PTR__ParsePosition_001000e8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::ParsePosition::~ParsePosition() */

void __thiscall icu_76_godot::ParsePosition::~ParsePosition(ParsePosition *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__ParsePosition_001000e8;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::ParsePosition::getStaticClassID() */

undefined1 * icu_76_godot::ParsePosition::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::ParsePosition::clone() const */

void icu_76_godot::ParsePosition::clone(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong in_RSI;
  long in_RDI;
  
  puVar2 = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x10,in_RSI);
  if (puVar2 != (undefined8 *)0x0) {
    uVar1 = *(undefined8 *)(in_RDI + 8);
    *puVar2 = &PTR__ParsePosition_001000e8;
    puVar2[1] = uVar1;
  }
  return;
}


