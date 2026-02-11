
/* icu_76_godot::ErrorCode::~ErrorCode() */

void __thiscall icu_76_godot::ErrorCode::~ErrorCode(ErrorCode *this)

{
  return;
}



/* icu_76_godot::ErrorCode::~ErrorCode() */

void __thiscall icu_76_godot::ErrorCode::~ErrorCode(ErrorCode *this)

{
  void *in_RSI;
  
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::ErrorCode::reset() */

undefined4 __thiscall icu_76_godot::ErrorCode::reset(ErrorCode *this)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(this + 8);
  *(undefined4 *)(this + 8) = 0;
  return uVar1;
}



/* icu_76_godot::ErrorCode::assertSuccess() const */

void __thiscall icu_76_godot::ErrorCode::assertSuccess(ErrorCode *this)

{
  if ((0 < *(int *)(this + 8)) && (*(code **)(*(long *)this + 0x10) != handleFailure)) {
                    /* WARNING: Could not recover jumptable at 0x00100050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x10))();
    return;
  }
  return;
}



/* icu_76_godot::ErrorCode::errorName() const */

void __thiscall icu_76_godot::ErrorCode::errorName(ErrorCode *this)

{
  u_errorName_76_godot(*(undefined4 *)(this + 8));
  return;
}



/* icu_76_godot::ErrorCode::handleFailure() const */

void icu_76_godot::ErrorCode::handleFailure(void)

{
  return;
}


