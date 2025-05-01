
/* icu_76_godot::UnicodeFunctor::toReplacer() const */

undefined8 icu_76_godot::UnicodeFunctor::toReplacer(void)

{
  return 0;
}



/* icu_76_godot::UnicodeFunctor::getStaticClassID() */

undefined1 * icu_76_godot::UnicodeFunctor::getStaticClassID(void)

{
  return &getStaticClassID()::classID;
}



/* icu_76_godot::UnicodeFunctor::~UnicodeFunctor() */

void __thiscall icu_76_godot::UnicodeFunctor::~UnicodeFunctor(UnicodeFunctor *this)

{
  *(undefined **)this = &DAT_001000d0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  return;
}



/* icu_76_godot::UnicodeFunctor::~UnicodeFunctor() */

void __thiscall icu_76_godot::UnicodeFunctor::~UnicodeFunctor(UnicodeFunctor *this)

{
  void *in_RSI;
  
  *(undefined **)this = &DAT_001000d0;
  icu_76_godot::UObject::~UObject((UObject *)this);
  icu_76_godot::UMemory::operator_delete((UMemory *)this,in_RSI);
  return;
}


