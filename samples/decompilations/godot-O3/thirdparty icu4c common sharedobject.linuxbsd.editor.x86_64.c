
/* icu_76_godot::SharedObject::~SharedObject() */

void __thiscall icu_76_godot::SharedObject::~SharedObject(SharedObject *this)

{
  *(undefined ***)this = &PTR__SharedObject_00100208;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::SharedObject::~SharedObject() */

void __thiscall icu_76_godot::SharedObject::~SharedObject(SharedObject *this)

{
  void *in_RSI;
  
  *(undefined ***)this = &PTR__SharedObject_00100208;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::UnifiedCacheBase::~UnifiedCacheBase() */

void __thiscall icu_76_godot::UnifiedCacheBase::~UnifiedCacheBase(UnifiedCacheBase *this)

{
  *(undefined **)this = &DAT_00100230;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::UnifiedCacheBase::~UnifiedCacheBase() */

void __thiscall icu_76_godot::UnifiedCacheBase::~UnifiedCacheBase(UnifiedCacheBase *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_00100230;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}



/* icu_76_godot::SharedObject::addRef() const */

void __thiscall icu_76_godot::SharedObject::addRef(SharedObject *this)

{
  LOCK();
  *(int *)(this + 0xc) = *(int *)(this + 0xc) + 1;
  UNLOCK();
  return;
}



/* icu_76_godot::SharedObject::removeRef() const */

void icu_76_godot::SharedObject::removeRef(void)

{
  UObject *pUVar1;
  void *in_RSI;
  UObject *in_RDI;
  
  LOCK();
  pUVar1 = in_RDI + 0xc;
  *(int *)pUVar1 = *(int *)pUVar1 + -1;
  UNLOCK();
  if (*(int *)pUVar1 != 0) {
    return;
  }
  if (*(long **)(in_RDI + 0x10) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(in_RDI + 0x10) + 0x18))();
    return;
  }
  if (*(code **)(*(long *)in_RDI + 8) == ~SharedObject) {
    *(undefined ***)in_RDI = &PTR__SharedObject_00100208;
    icu_76_godot::UObject::~UObject(in_RDI);
    icu_76_godot::UMemory::operator_delete((UMemory *)in_RDI,in_RSI);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001000f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)in_RDI + 8))();
  return;
}



/* icu_76_godot::SharedObject::getRefCount() const */

undefined4 __thiscall icu_76_godot::SharedObject::getRefCount(SharedObject *this)

{
  return *(undefined4 *)(this + 0xc);
}



/* icu_76_godot::SharedObject::deleteIfZeroRefCount() const */

void icu_76_godot::SharedObject::deleteIfZeroRefCount(void)

{
  void *in_RSI;
  UObject *in_RDI;
  
  if ((*(long *)(in_RDI + 0x10) == 0) && (*(int *)(in_RDI + 0xc) == 0)) {
    if (*(code **)(*(long *)in_RDI + 8) == ~SharedObject) {
      *(undefined ***)in_RDI = &PTR__SharedObject_00100208;
      icu_76_godot::UObject::~UObject(in_RDI);
      icu_76_godot::UMemory::operator_delete((UMemory *)in_RDI,in_RSI);
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00100160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)in_RDI + 8))();
    return;
  }
  return;
}


