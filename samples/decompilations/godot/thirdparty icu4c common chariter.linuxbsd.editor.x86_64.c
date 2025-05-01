
/* icu_76_godot::CharacterIterator::first32PostInc() */

void __thiscall icu_76_godot::CharacterIterator::first32PostInc(CharacterIterator *this)

{
  (**(code **)(*(long *)this + 0xc0))(this,0,0);
                    /* WARNING: Could not recover jumptable at 0x00100020. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x30))(this);
  return;
}



/* icu_76_godot::CharacterIterator::firstPostInc() */

void __thiscall icu_76_godot::CharacterIterator::firstPostInc(CharacterIterator *this)

{
  (**(code **)(*(long *)this + 0xc0))(this,0,0);
                    /* WARNING: Could not recover jumptable at 0x00100050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x28))(this);
  return;
}



/* icu_76_godot::ForwardCharacterIterator::~ForwardCharacterIterator() */

void __thiscall
icu_76_godot::ForwardCharacterIterator::~ForwardCharacterIterator(ForwardCharacterIterator *this)

{
  *(undefined **)this = &DAT_00100330;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::ForwardCharacterIterator::~ForwardCharacterIterator() */

void __thiscall
icu_76_godot::ForwardCharacterIterator::~ForwardCharacterIterator(ForwardCharacterIterator *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_00100330;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::ForwardCharacterIterator::ForwardCharacterIterator() */

void __thiscall
icu_76_godot::ForwardCharacterIterator::ForwardCharacterIterator(ForwardCharacterIterator *this)

{
  *(undefined **)this = &DAT_00100330;
  return;
}



/* icu_76_godot::ForwardCharacterIterator::ForwardCharacterIterator(icu_76_godot::ForwardCharacterIterator
   const&) */

void __thiscall
icu_76_godot::ForwardCharacterIterator::ForwardCharacterIterator
          (ForwardCharacterIterator *this,ForwardCharacterIterator *param_1)

{
  *(undefined **)this = &DAT_00100330;
  return;
}



/* icu_76_godot::CharacterIterator::CharacterIterator() */

void __thiscall icu_76_godot::CharacterIterator::CharacterIterator(CharacterIterator *this)

{
  *(undefined **)this = &DAT_00100380;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  return;
}



/* icu_76_godot::CharacterIterator::CharacterIterator(int) */

void __thiscall
icu_76_godot::CharacterIterator::CharacterIterator(CharacterIterator *this,int param_1)

{
  *(int *)(this + 8) = param_1;
  *(undefined **)this = &DAT_00100380;
  *(undefined8 *)(this + 0xc) = 0;
  if (-1 < param_1) {
    *(int *)(this + 0x14) = param_1;
    return;
  }
  *(undefined4 *)(this + 0x14) = 0;
  *(undefined4 *)(this + 8) = 0;
  return;
}



/* icu_76_godot::CharacterIterator::CharacterIterator(int, int) */

void __thiscall
icu_76_godot::CharacterIterator::CharacterIterator(CharacterIterator *this,int param_1,int param_2)

{
  *(int *)(this + 8) = param_1;
  *(undefined **)this = &DAT_00100380;
  *(int *)(this + 0xc) = param_2;
  *(undefined4 *)(this + 0x10) = 0;
  if (param_1 < 0) {
    *(undefined4 *)(this + 0x14) = 0;
    *(undefined4 *)(this + 8) = 0;
  }
  else {
    *(int *)(this + 0x14) = param_1;
  }
  if (-1 < param_2) {
    if (*(int *)(this + 0x14) < param_2) {
      *(int *)(this + 0xc) = *(int *)(this + 0x14);
    }
    return;
  }
  *(undefined4 *)(this + 0xc) = 0;
  return;
}



/* icu_76_godot::CharacterIterator::CharacterIterator(int, int, int, int) */

void __thiscall
icu_76_godot::CharacterIterator::CharacterIterator
          (CharacterIterator *this,int param_1,int param_2,int param_3,int param_4)

{
  *(undefined **)this = &DAT_00100380;
  if (param_1 < 0) {
    param_1 = 0;
  }
  *(ulong *)(this + 8) = CONCAT44(param_4,param_1);
  *(ulong *)(this + 0x10) = CONCAT44(param_3,param_2);
  if (param_2 < 0) {
    *(undefined4 *)(this + 0x10) = 0;
    param_2 = 0;
  }
  else if (param_1 < param_2) {
    *(int *)(this + 0x10) = param_1;
    param_2 = param_1;
  }
  if (param_3 < param_2) {
    *(int *)(this + 0x14) = param_2;
  }
  else if (param_1 < param_3) {
    *(int *)(this + 0x14) = param_1;
  }
  if ((param_4 < param_2) || (param_2 = *(int *)(this + 0x14), param_2 < param_4)) {
    *(int *)(this + 0xc) = param_2;
  }
  return;
}



/* icu_76_godot::CharacterIterator::~CharacterIterator() */

void __thiscall icu_76_godot::CharacterIterator::~CharacterIterator(CharacterIterator *this)

{
  *(undefined **)this = &DAT_00100330;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::CharacterIterator::~CharacterIterator() */

void __thiscall icu_76_godot::CharacterIterator::~CharacterIterator(CharacterIterator *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_00100330;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::CharacterIterator::CharacterIterator(icu_76_godot::CharacterIterator const&) */

void __thiscall
icu_76_godot::CharacterIterator::CharacterIterator
          (CharacterIterator *this,CharacterIterator *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)this = &DAT_00100380;
  *(undefined8 *)(this + 8) = uVar1;
  *(undefined8 *)(this + 0x10) = uVar2;
  return;
}



/* icu_76_godot::CharacterIterator::TEMPNAMEPLACEHOLDERVALUE(icu_76_godot::CharacterIterator const&)
    */

CharacterIterator * __thiscall
icu_76_godot::CharacterIterator::operator=(CharacterIterator *this,CharacterIterator *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x10) = uVar1;
  return this;
}


