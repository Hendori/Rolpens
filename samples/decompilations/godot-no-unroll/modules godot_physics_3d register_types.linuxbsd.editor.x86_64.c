
/* initialize_godot_physics_3d_module(ModuleInitializationLevel) */

void initialize_godot_physics_3d_module(int param_1)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  CallableCustom *this;
  long in_FS_OFFSET;
  long local_60;
  long local_58 [2];
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    pSVar3 = (String *)PhysicsServer3DManager::get_singleton();
    this = (CallableCustom *)operator_new(0x30,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC1;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined ***)this = &PTR_hash_00100528;
    *(undefined8 *)(this + 0x28) = 0x100000;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "createGodotPhysics3DCallback";
    Callable::Callable((Callable *)local_58,this);
    local_48 = "GodotPhysics3D";
    local_60 = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)&local_60);
    PhysicsServer3DManager::register_server(pSVar3,(Callable *)&local_60);
    lVar2 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Callable::~Callable((Callable *)local_58);
    pSVar3 = (String *)PhysicsServer3DManager::get_singleton();
    local_48 = "GodotPhysics3D";
    local_58[0] = 0;
    local_40 = 0xe;
    String::parse_latin1((StrRange *)local_58);
    PhysicsServer3DManager::set_default_server(pSVar3,(int)(Callable *)local_58);
    lVar2 = local_58[0];
    if (local_58[0] != 0) {
      LOCK();
      plVar1 = (long *)(local_58[0] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_58[0] = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* uninitialize_godot_physics_3d_module(ModuleInitializationLevel) */

void uninitialize_godot_physics_3d_module(void)

{
  return;
}



/* CallableCustomStaticMethodPointer<PhysicsServer3D*>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<PhysicsServer3D*>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<PhysicsServer3D*> *this)

{
  return;
}



/* CallableCustomStaticMethodPointer<PhysicsServer3D*>::is_valid() const */

undefined8 CallableCustomStaticMethodPointer<PhysicsServer3D*>::is_valid(void)

{
  return 1;
}



/* CallableCustomStaticMethodPointer<PhysicsServer3D*>::get_object() const */

undefined8 CallableCustomStaticMethodPointer<PhysicsServer3D*>::get_object(void)

{
  return 0;
}



/* CallableCustomStaticMethodPointer<PhysicsServer3D*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomStaticMethodPointer<PhysicsServer3D*>::get_argument_count
          (CallableCustomStaticMethodPointer<PhysicsServer3D*> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomStaticMethodPointer<PhysicsServer3D*>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<PhysicsServer3D*>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<PhysicsServer3D*> *this)

{
  operator_delete(this,0x30);
  return;
}



/* CallableCustomStaticMethodPointer<PhysicsServer3D*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomStaticMethodPointer<PhysicsServer3D*>::call
          (CallableCustomStaticMethodPointer<PhysicsServer3D*> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  code *pcVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  undefined4 local_28 [2];
  undefined8 local_20;
  undefined8 uStack_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(this + 0x28);
  if (param_2 == 0) {
    *(undefined4 *)param_4 = 0;
    pOVar2 = (Object *)(*pcVar1)();
    Variant::Variant((Variant *)local_28,pOVar2);
    if (Variant::needs_deinit[*(int *)param_3] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_3 = local_28[0];
    *(undefined8 *)(param_3 + 8) = local_20;
    *(undefined8 *)(param_3 + 0x10) = uStack_18;
  }
  else {
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomStaticMethodPointer<PhysicsServer3D*>::~CallableCustomStaticMethodPointer() */

void __thiscall
CallableCustomStaticMethodPointer<PhysicsServer3D*>::~CallableCustomStaticMethodPointer
          (CallableCustomStaticMethodPointer<PhysicsServer3D*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


