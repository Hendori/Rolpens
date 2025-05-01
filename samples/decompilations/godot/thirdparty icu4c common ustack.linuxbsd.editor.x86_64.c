
/* icu_76_godot::UStack::getDynamicClassID() const */

undefined1 * icu_76_godot::UStack::getDynamicClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UStack::~UStack() */

void __thiscall icu_76_godot::UStack::~UStack(UStack *this)

{
  *(undefined ***)this = &PTR__UStack_001001a0;
  icu_76_godot::UVector::~UVector((UVector *)this);
  return;
}



/* icu_76_godot::UStack::~UStack() */

void __thiscall icu_76_godot::UStack::~UStack(UStack *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__UStack_001001a0;
  icu_76_godot::UVector::~UVector((UVector *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UStack::getStaticClassID() */

undefined1 * icu_76_godot::UStack::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UStack::UStack(UErrorCode&) */

void __thiscall icu_76_godot::UStack::UStack(UStack *this,UErrorCode *param_1)

{
  icu_76_godot::UVector::UVector((UVector *)this,param_1);
  *(undefined ***)this = &PTR__UStack_001001a0;
  return;
}



/* icu_76_godot::UStack::UStack(int, UErrorCode&) */

void __thiscall icu_76_godot::UStack::UStack(UStack *this,int param_1,UErrorCode *param_2)

{
  icu_76_godot::UVector::UVector((UVector *)this,param_1,param_2);
  *(undefined ***)this = &PTR__UStack_001001a0;
  return;
}



/* icu_76_godot::UStack::UStack(void (*)(void*), signed char (*)(UElement, UElement), UErrorCode&)
    */

void __thiscall
icu_76_godot::UStack::UStack
          (UStack *this,_func_void_void_ptr *param_1,_func_signed_UElement_UElement *param_2,
          UErrorCode *param_3)

{
  icu_76_godot::UVector::UVector((UVector *)this,param_1,param_2,param_3);
  *(undefined ***)this = &PTR__UStack_001001a0;
  return;
}



/* icu_76_godot::UStack::UStack(void (*)(void*), signed char (*)(UElement, UElement), int,
   UErrorCode&) */

void __thiscall
icu_76_godot::UStack::UStack
          (UStack *this,_func_void_void_ptr *param_1,_func_signed_UElement_UElement *param_2,
          int param_3,UErrorCode *param_4)

{
  icu_76_godot::UVector::UVector((UVector *)this,param_1,param_2,param_3,param_4);
  *(undefined ***)this = &PTR__UStack_001001a0;
  return;
}



/* icu_76_godot::UStack::pop() */

undefined8 __thiscall icu_76_godot::UStack::pop(UStack *this)

{
  undefined8 uVar1;
  
  if (-1 < *(int *)(this + 8) + -1) {
    uVar1 = icu_76_godot::UVector::orphanElementAt((int)this);
    return uVar1;
  }
  return 0;
}



/* icu_76_godot::UStack::popi() */

undefined4 __thiscall icu_76_godot::UStack::popi(UStack *this)

{
  undefined4 uVar1;
  
  if (*(int *)(this + 8) + -1 < 0) {
    return 0;
  }
  uVar1 = icu_76_godot::UVector::elementAti((int)this);
  icu_76_godot::UVector::removeElementAt((int)this);
  return uVar1;
}



/* icu_76_godot::UStack::search(void*) const */

ulong __thiscall icu_76_godot::UStack::search(UStack *this,void *param_1)

{
  ulong uVar1;
  
  uVar1 = icu_76_godot::UVector::indexOf(this,(int)param_1);
  if (-1 < (int)uVar1) {
    uVar1 = (ulong)(uint)(*(int *)(this + 8) - (int)uVar1);
  }
  return uVar1;
}


