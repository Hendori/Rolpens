/* icu_76_godot::UObject::~UObject() */void icu_76_godot::UObject::~UObject(UObject *this) {
   return;
}/* icu_76_godot::UObject::getDynamicClassID() const */undefined8 icu_76_godot::UObject::getDynamicClassID(void) {
   return 0;
}/* icu_76_godot::UObject::~UObject() */void icu_76_godot::UObject::~UObject(UObject *this) {
   uprv_free_76_godot();
   return;
}/* icu_76_godot::UMemory::operator new(unsigned long) */void *__thiscallicu_76_godot::UMemory::operator_new(UMemory *this, ulong param_1) {
   void *pvVar1;
   pvVar1 = (void*)uprv_malloc_76_godot();
   return pvVar1;
}/* icu_76_godot::UMemory::operator delete(void*) */void icu_76_godot::UMemory::operator_delete(UMemory *this, void *param_1) {
   if (this != (UMemory*)0x0) {
      uprv_free_76_godot();
      return;
   }
   return;
}/* icu_76_godot::UMemory::operator new[](unsigned long) */void *__thiscallicu_76_godot::UMemory::operator_new__(UMemory *this, ulong param_1) {
   void *pvVar1;
   pvVar1 = (void*)uprv_malloc_76_godot();
   return pvVar1;
}/* icu_76_godot::UMemory::operator delete[](void*) */void icu_76_godot::UMemory::operator_delete__(UMemory *this, void *param_1) {
   if (this != (UMemory*)0x0) {
      uprv_free_76_godot();
      return;
   }
   return;
}void uprv_deleteUObject_76_godot(long *param_1) {
   if (param_1 == (long*)0x0) {
      return;
   }
   if (*(code**)( *param_1 + 8 ) == icu_76_godot::UObject::~UObject) {
      uprv_free_76_godot();
      return;
   }
   for (int i_1835 = 0; i_1835 < 2; i_1835++) {
      /* WARNING: Could not recover jumptable at 0x001000c0. Too many branches */
   }
   ( **(code**)( *param_1 + 8 ) )();
   return;
}
