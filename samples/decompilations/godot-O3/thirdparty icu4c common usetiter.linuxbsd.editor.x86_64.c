
/* icu_76_godot::UnicodeSetIterator::getDynamicClassID() const */

undefined1 * icu_76_godot::UnicodeSetIterator::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UnicodeSetIterator::~UnicodeSetIterator() */

void __thiscall icu_76_godot::UnicodeSetIterator::~UnicodeSetIterator(UnicodeSetIterator *this)

{
  *(undefined ***)this = &PTR__UnicodeSetIterator_00100530;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::UnicodeSetIterator::~UnicodeSetIterator() */

void __thiscall icu_76_godot::UnicodeSetIterator::~UnicodeSetIterator(UnicodeSetIterator *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UnicodeSetIterator_00100530;
  if (*(long **)(this + 0x38) != (long *)0x0) {
    (**(code **)(**(long **)(this + 0x38) + 8))();
  }
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UnicodeSetIterator::getStaticClassID() */

undefined1 * icu_76_godot::UnicodeSetIterator::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UnicodeSetIterator::getString() */

void icu_76_godot::UnicodeSetIterator::getString(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  int iVar3;
  ulong in_RSI;
  long in_RDI;
  
  if (*(long *)(in_RDI + 0x10) != 0) {
    return;
  }
  if (*(int *)(in_RDI + 8) == -1) {
    return;
  }
  puVar2 = *(undefined8 **)(in_RDI + 0x38);
  if (puVar2 == (undefined8 *)0x0) {
    puVar2 = (undefined8 *)icu_76_godot::UMemory::operator_new((UMemory *)0x40,in_RSI);
    if (puVar2 == (undefined8 *)0x0) {
      *(undefined8 *)(in_RDI + 0x38) = 0;
      uVar1 = 0;
      goto LAB_001000ec;
    }
    *puVar2 = icu_76_godot::UnicodeSet::getRangeEnd;
    *(undefined2 *)(puVar2 + 1) = 2;
    *(undefined8 **)(in_RDI + 0x38) = puVar2;
  }
  icu_76_godot::UnicodeString::unBogus();
  if (*(short *)(puVar2 + 1) < 0) {
    iVar3 = *(int *)((long)puVar2 + 0xc);
  }
  else {
    iVar3 = (int)(*(short *)(puVar2 + 1) >> 5);
  }
  icu_76_godot::UnicodeString::replace((int)puVar2,0,iVar3);
  uVar1 = *(undefined8 *)(in_RDI + 0x38);
LAB_001000ec:
  *(undefined8 *)(in_RDI + 0x10) = uVar1;
  return;
}



/* icu_76_godot::UnicodeSetIterator::loadRange(int) */

void icu_76_godot::UnicodeSetIterator::loadRange(int param_1)

{
  undefined4 uVar1;
  undefined4 in_register_0000003c;
  long lVar2;
  
  lVar2 = CONCAT44(in_register_0000003c,param_1);
  uVar1 = icu_76_godot::UnicodeSet::getRangeStart((int)*(undefined8 *)(lVar2 + 0x18));
  *(undefined4 *)(lVar2 + 0x2c) = uVar1;
  uVar1 = icu_76_godot::UnicodeSet::getRangeEnd((int)*(undefined8 *)(lVar2 + 0x18));
  *(undefined4 *)(lVar2 + 0x28) = uVar1;
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* icu_76_godot::UnicodeSetIterator::UnicodeSetIterator() */

void __thiscall icu_76_godot::UnicodeSetIterator::UnicodeSetIterator(UnicodeSetIterator *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = _UNK_00100558;
  uVar1 = __LC0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined ***)this = &PTR__UnicodeSetIterator_00100530;
  *(undefined8 *)(this + 0x20) = uVar1;
  *(undefined8 *)(this + 0x28) = uVar2;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined1 (*) [16])(this + 0x10) = (undefined1  [16])0x0;
  return;
}



/* icu_76_godot::UnicodeSetIterator::reset() */

void __thiscall icu_76_godot::UnicodeSetIterator::reset(UnicodeSetIterator *this)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(long *)(this + 0x18) == 0) {
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined8 *)(this + 0x20) = 0xffffffff;
    *(undefined8 *)(this + 0x28) = 0xffffffff;
  }
  else {
    iVar1 = icu_76_godot::UnicodeSet::getRangeCount();
    *(int *)(this + 0x20) = iVar1 + -1;
    uVar2 = icu_76_godot::UnicodeSet::stringsSize();
    *(undefined4 *)(this + 0x2c) = 0;
    *(undefined4 *)(this + 0x34) = uVar2;
    *(undefined8 *)(this + 0x24) = _LC2;
    if (-1 < *(int *)(this + 0x20)) {
      uVar2 = icu_76_godot::UnicodeSet::getRangeStart((int)*(undefined8 *)(this + 0x18));
      *(undefined4 *)(this + 0x2c) = uVar2;
      uVar2 = icu_76_godot::UnicodeSet::getRangeEnd((int)*(undefined8 *)(this + 0x18));
      *(undefined4 *)(this + 0x28) = uVar2;
    }
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* icu_76_godot::UnicodeSetIterator::next() */

undefined8 __thiscall icu_76_godot::UnicodeSetIterator::next(UnicodeSetIterator *this)

{
  undefined4 uVar1;
  undefined8 uVar2;
  int iVar3;
  
  iVar3 = (int)((ulong)*(undefined8 *)(this + 0x28) >> 0x20);
  if (*(int *)(this + 0x28) < iVar3) {
    if (*(int *)(this + 0x24) < *(int *)(this + 0x20)) {
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
      uVar1 = icu_76_godot::UnicodeSet::getRangeStart((int)*(undefined8 *)(this + 0x18));
      *(undefined4 *)(this + 0x2c) = uVar1;
      uVar1 = icu_76_godot::UnicodeSet::getRangeEnd((int)*(undefined8 *)(this + 0x18));
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined4 *)(this + 0x28) = uVar1;
      iVar3 = *(int *)(this + 0x2c);
      *(int *)(this + 0x2c) = iVar3 + 1;
      *(ulong *)(this + 8) = CONCAT44(iVar3,iVar3);
    }
    else {
      if (*(int *)(this + 0x34) <= *(int *)(this + 0x30)) {
        return 0;
      }
      *(undefined4 *)(this + 8) = 0xffffffff;
      uVar2 = *(undefined8 *)(*(long *)(this + 0x18) + 0x50);
      *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
      uVar2 = icu_76_godot::UVector::elementAt((int)uVar2);
      *(undefined8 *)(this + 0x10) = uVar2;
    }
  }
  else {
    *(undefined8 *)(this + 0x10) = 0;
    *(int *)(this + 0x2c) = iVar3 + 1;
    *(ulong *)(this + 8) = CONCAT44(iVar3,iVar3);
  }
  return 1;
}



/* icu_76_godot::UnicodeSetIterator::nextRange() */

undefined8 __thiscall icu_76_godot::UnicodeSetIterator::nextRange(UnicodeSetIterator *this)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  
  *(undefined8 *)(this + 0x10) = 0;
  iVar2 = (int)*(undefined8 *)(this + 0x28);
  iVar4 = (int)((ulong)*(undefined8 *)(this + 0x28) >> 0x20);
  if (iVar2 < iVar4) {
    if (*(int *)(this + 0x24) < *(int *)(this + 0x20)) {
      *(int *)(this + 0x24) = *(int *)(this + 0x24) + 1;
      uVar1 = icu_76_godot::UnicodeSet::getRangeStart((int)*(undefined8 *)(this + 0x18));
      *(undefined4 *)(this + 0x2c) = uVar1;
      iVar2 = icu_76_godot::UnicodeSet::getRangeEnd((int)*(undefined8 *)(this + 0x18));
      uVar1 = *(undefined4 *)(this + 0x2c);
      *(int *)(this + 0x28) = iVar2;
      *(int *)(this + 0x2c) = iVar2 + 1;
      *(ulong *)(this + 8) = CONCAT44(iVar2,uVar1);
    }
    else {
      if (*(int *)(this + 0x34) <= *(int *)(this + 0x30)) {
        return 0;
      }
      *(undefined4 *)(this + 8) = 0xffffffff;
      uVar3 = *(undefined8 *)(*(long *)(this + 0x18) + 0x50);
      *(int *)(this + 0x30) = *(int *)(this + 0x30) + 1;
      uVar3 = icu_76_godot::UVector::elementAt((int)uVar3);
      *(undefined8 *)(this + 0x10) = uVar3;
    }
  }
  else {
    *(int *)(this + 0x2c) = iVar2 + 1;
    *(ulong *)(this + 8) = CONCAT44(iVar2,iVar4);
  }
  return 1;
}



/* icu_76_godot::UnicodeSetIterator::reset(icu_76_godot::UnicodeSet const&) */

void __thiscall
icu_76_godot::UnicodeSetIterator::reset(UnicodeSetIterator *this,UnicodeSet *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(UnicodeSet **)(this + 0x18) = param_1;
  iVar1 = icu_76_godot::UnicodeSet::getRangeCount();
  *(int *)(this + 0x20) = iVar1 + -1;
  uVar2 = icu_76_godot::UnicodeSet::stringsSize();
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined8 *)(this + 0x24) = _LC2;
  if (-1 < *(int *)(this + 0x20)) {
    uVar2 = icu_76_godot::UnicodeSet::getRangeStart((int)*(undefined8 *)(this + 0x18));
    *(undefined4 *)(this + 0x2c) = uVar2;
    uVar2 = icu_76_godot::UnicodeSet::getRangeEnd((int)*(undefined8 *)(this + 0x18));
    *(undefined4 *)(this + 0x28) = uVar2;
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}



/* icu_76_godot::UnicodeSetIterator::UnicodeSetIterator(icu_76_godot::UnicodeSet const&) */

void __thiscall
icu_76_godot::UnicodeSetIterator::UnicodeSetIterator(UnicodeSetIterator *this,UnicodeSet *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(UnicodeSet **)(this + 0x18) = param_1;
  *(undefined ***)this = &PTR__UnicodeSetIterator_00100530;
  *(undefined8 *)(this + 0x38) = 0;
  iVar1 = icu_76_godot::UnicodeSet::getRangeCount();
  *(int *)(this + 0x20) = iVar1 + -1;
  uVar2 = icu_76_godot::UnicodeSet::stringsSize();
  *(undefined4 *)(this + 0x2c) = 0;
  *(undefined4 *)(this + 0x34) = uVar2;
  *(undefined8 *)(this + 0x24) = _LC2;
  if (-1 < *(int *)(this + 0x20)) {
    uVar2 = icu_76_godot::UnicodeSet::getRangeStart((int)*(undefined8 *)(this + 0x18));
    *(undefined4 *)(this + 0x2c) = uVar2;
    uVar2 = icu_76_godot::UnicodeSet::getRangeEnd((int)*(undefined8 *)(this + 0x18));
    *(undefined4 *)(this + 0x28) = uVar2;
  }
  *(undefined4 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  return;
}


