
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* create_jolt_physics_server() */

PhysicsServer3DWrapMT * create_jolt_physics_server(void)

{
  bool bVar1;
  JoltPhysicsServer3D *this;
  PhysicsServer3DWrapMT *this_00;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"physics/3d/run_on_separate_thread",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  bVar1 = Variant::operator_cast_to_bool((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  this = (JoltPhysicsServer3D *)operator_new(0x3c0,"");
  JoltPhysicsServer3D::JoltPhysicsServer3D(this,bVar1);
  postinitialize_handler((Object *)this);
  this_00 = (PhysicsServer3DWrapMT *)operator_new(0x228,"");
  PhysicsServer3DWrapMT::PhysicsServer3DWrapMT(this_00,(PhysicsServer3D *)this,bVar1);
  postinitialize_handler((Object *)this_00);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this_00;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* initialize_jolt_physics_module(ModuleInitializationLevel) */

void initialize_jolt_physics_module(int param_1)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  CallableCustom *this;
  long in_FS_OFFSET;
  long local_50;
  Callable local_48 [16];
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    jolt_initialize();
    pSVar3 = (String *)PhysicsServer3DManager::get_singleton();
    this = (CallableCustom *)operator_new(0x30,"");
    CallableCustom::CallableCustom(this);
    *(undefined **)(this + 0x20) = &_LC1;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined ***)this = &PTR_hash_001004c8;
    *(undefined8 *)(this + 0x28) = 0x100000;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "create_jolt_physics_server";
    Callable::Callable(local_48,this);
    local_38 = "Jolt Physics";
    local_50 = 0;
    local_30 = 0xc;
    String::parse_latin1((StrRange *)&local_50);
    PhysicsServer3DManager::register_server(pSVar3,(Callable *)&local_50);
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Callable::~Callable(local_48);
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      JoltProjectSettings::register_settings();
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* uninitialize_jolt_physics_module(ModuleInitializationLevel) */

void uninitialize_jolt_physics_module(int param_1)

{
  if (param_1 != 1) {
    return;
  }
  jolt_deinitialize();
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


