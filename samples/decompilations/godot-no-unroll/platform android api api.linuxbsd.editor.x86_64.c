
/* JavaObject::callp(StringName const&, Variant const**, int, Callable::CallError&) */

StringName * JavaObject::callp(StringName *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  return param_1;
}



/* JavaClass::get_java_parent_class() const */

JavaClass * __thiscall JavaClass::get_java_parent_class(JavaClass *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* JavaClass::~JavaClass() */

void __thiscall JavaClass::~JavaClass(JavaClass *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ab10;
  Object::~Object((Object *)this);
  return;
}



/* JavaClass::~JavaClass() */

void __thiscall JavaClass::~JavaClass(JavaClass *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ab10;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* JavaClass::get_java_method_list() const */

JavaClass * __thiscall JavaClass::get_java_method_list(JavaClass *this)

{
  long in_FS_OFFSET;
  long local_40;
  undefined8 local_38;
  undefined1 local_30 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array((Array *)this);
  local_38 = 0;
  local_40 = 0;
  local_30 = (undefined1  [16])0x0;
  Array::set_typed((uint)this,(StringName *)0x1b,(Variant *)&local_40);
  if ((StringName::configured != '\0') && (local_40 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_38] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaObject::get_java_class() const */

JavaObject * __thiscall JavaObject::get_java_class(JavaObject *this)

{
  *(undefined8 *)this = 0;
  return this;
}



/* JavaClass::get_java_class_name() const */

JavaClass * __thiscall JavaClass::get_java_class_name(JavaClass *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)this = 0;
    }
  }
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) {
        return;
      }
      LOCK();
      lVar3 = *plVar1;
      bVar4 = lVar2 == lVar3;
      if (bVar4) {
        *plVar1 = lVar2 + 1;
        lVar3 = lVar2;
      }
      UNLOCK();
    } while (!bVar4);
    if (lVar3 != -1) {
      *(undefined8 *)this = *(undefined8 *)param_1;
    }
  }
  return;
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* unregister_android_api() */

void unregister_android_api(void)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = java_class_wrapper;
  cVar2 = predelete_handler(java_class_wrapper);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* JavaObject::_bind_methods() */

void JavaObject::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  MethodBind *this;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68 [2];
  long *local_58;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_68,(char ***)"get_java_class",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(undefined ***)this = &PTR__gen_argument_type_0010b2b0;
  *(code **)(this + 0x58) = get_java_class;
  *(undefined8 *)(this + 0x60) = 0;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_80 = 0;
  local_78 = "JavaObject";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_80);
  StringName::StringName((StringName *)&local_78,(String *)&local_80,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_78);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  ClassDB::bind_methodfi(1,this,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_58;
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar4 = local_58 + -2;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      if (local_58 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_58[-1];
      local_58 = (long *)0x0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaClass::_get(StringName const&, Variant&) const */

undefined8 JavaClass::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JavaClass::JavaClass() */

void __thiscall JavaClass::JavaClass(JavaClass *this)

{
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010af30;
  return;
}



/* JavaClassWrapper::_wrap(String const&, bool) */

String * JavaClassWrapper::_wrap(String *param_1,bool param_2)

{
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* JavaClassWrapper::JavaClassWrapper() */

void __thiscall JavaClassWrapper::JavaClassWrapper(JavaClassWrapper *this)

{
  Object::Object((Object *)this);
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010ac70;
  singleton = this;
  return;
}



/* JavaClass::_bind_methods() */

void JavaClass::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_90;
  char *local_88;
  undefined8 local_80;
  long local_78 [2];
  long *local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_78,(char ***)"get_java_class_name",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<JavaClass,String>(get_java_class_name);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar2 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"get_java_method_list",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<JavaClass,TypedArray<Dictionary>>(get_java_method_list);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar2 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"get_java_parent_class",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_0010b2b0;
  *(code **)(pMVar4 + 0x58) = get_java_parent_class;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_90 = 0;
  local_88 = "JavaClass";
  local_80 = 9;
  String::parse_latin1((StrRange *)&local_90);
  StringName::StringName((StringName *)&local_88,(String *)&local_90,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_88);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar1 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar2 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaClassWrapper::_bind_methods() */

void JavaClassWrapper::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_88 [2];
  long *local_78;
  undefined *local_68;
  undefined8 local_60;
  undefined **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = &_LC20;
  local_58 = &local_68;
  D_METHODP((char *)local_88,(char ***)&_LC21,(uint)&local_58);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = create_method_bind<JavaClassWrapper,Ref<JavaClass>,String_const&>(wrap);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_88,(char ***)"get_exception",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (undefined **)0x0;
  pMVar4 = create_method_bind<JavaClassWrapper,Ref<JavaObject>>(get_exception);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_88,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_78;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar5 = local_78 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_78 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_78[-1];
      local_78 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_88[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* register_android_api() */

void register_android_api(void)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined4 uVar28;
  uint uVar29;
  Object *pOVar30;
  Singleton *pSVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  undefined4 *puVar35;
  ulong uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  long in_FS_OFFSET;
  StrRange *local_a8;
  StrRange *local_a0;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  long local_58;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar30 = (Object *)operator_new(0x180,"");
  Object::Object(pOVar30);
  *(undefined8 *)(pOVar30 + 0x178) = 0;
  *(undefined ***)pOVar30 = &PTR__initialize_classv_0010ac70;
  JavaClassWrapper::singleton = pOVar30;
  postinitialize_handler(pOVar30);
  java_class_wrapper = pOVar30;
  _global_lock();
  if (JNISingleton::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_78 = 0;
    local_60 = 6;
    local_68 = "Object";
    String::parse_latin1((StrRange *)&local_78);
    StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
    local_68 = "JNISingleton";
    local_80 = 0;
    local_60 = 0xc;
    String::parse_latin1((StrRange *)&local_80);
    StringName::StringName((StringName *)&local_68,(String *)&local_80,false);
    ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_70);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    lVar3 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    lVar3 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        JNISingleton::initialize_class()::initialized = '\x01';
        goto LAB_00100c4a;
      }
    }
    JNISingleton::initialize_class()::initialized = '\x01';
  }
LAB_00100c4a:
  local_a0 = (StrRange *)&local_78;
  local_a8 = (StrRange *)&local_70;
  local_68 = "JNISingleton";
  local_70 = 0;
  local_60 = 0xc;
  String::parse_latin1(local_a8);
  StringName::StringName((StringName *)&local_68,(String *)local_a8,false);
  if ((CONCAT44(ClassDB::current_api._4_4_,(undefined4)ClassDB::current_api) != 0) &&
     (_DAT_0010d1b4 != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)_postinitialize_handler * 4);
    uVar39 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)_postinitialize_handler * 8);
    if (local_68 == (char *)0x0) {
      uVar29 = StringName::get_empty_hash();
    }
    else {
      uVar29 = *(uint *)(local_68 + 0x20);
    }
    lVar34 = local_70;
    if (uVar29 == 0) {
      uVar29 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar29 * lVar3;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar39;
    lVar33 = SUB168(auVar4 * auVar16,8);
    uVar37 = *(uint *)(__global_unlock + lVar33 * 4);
    uVar32 = SUB164(auVar4 * auVar16,8);
    if (uVar37 != 0) {
      uVar38 = 0;
      do {
        if ((uVar37 == uVar29) &&
           (*(char **)(*(long *)(CONCAT44(ClassDB::current_api._4_4_,
                                          (undefined4)ClassDB::current_api) + lVar33 * 8) + 0x10) ==
            local_68)) {
          puVar35 = (undefined4 *)
                    (*(long *)(CONCAT44(ClassDB::current_api._4_4_,(undefined4)ClassDB::current_api)
                              + (ulong)uVar32 * 8) + 0x18);
          if (StringName::configured == '\0') {
            if (local_70 != 0) {
              LOCK();
              plVar1 = (long *)(local_70 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_70 = 0;
                Memory::free_static((void *)(lVar34 + -0x10),false);
              }
            }
            goto LAB_00100dbf;
          }
          if (local_68 != (char *)0x0) {
            StringName::unref();
          }
          if (local_70 == 0) goto LAB_00100dbf;
          goto LAB_00100d95;
        }
        uVar38 = uVar38 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar32 + 1) * lVar3;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = uVar39;
        lVar33 = SUB168(auVar5 * auVar17,8);
        uVar37 = *(uint *)(__global_unlock + lVar33 * 4);
        uVar32 = SUB164(auVar5 * auVar17,8);
      } while ((uVar37 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar37 * lVar3, auVar18._8_8_ = 0,
              auVar18._0_8_ = uVar39, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar32) - SUB164(auVar6 * auVar18,8)) * lVar3,
              auVar19._8_8_ = 0, auVar19._0_8_ = uVar39, uVar38 <= SUB164(auVar7 * auVar19,8)));
    }
  }
  lVar3 = local_70;
  if (StringName::configured == '\0') {
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
LAB_0010177e:
    _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0
                    );
    _global_unlock();
  }
  else {
    if (local_68 == (char *)0x0) {
      puVar35 = (undefined4 *)0x0;
      if (local_70 != 0) goto LAB_00100d95;
      goto LAB_0010177e;
    }
    puVar35 = (undefined4 *)0x0;
    StringName::unref();
    if (local_70 == 0) goto LAB_0010177e;
LAB_00100d95:
    lVar3 = local_70;
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
    if (puVar35 == (undefined4 *)0x0) goto LAB_0010177e;
LAB_00100dbf:
    *(undefined1 *)((long)puVar35 + 0x289) = 1;
    *(code **)(puVar35 + 0xa4) = ClassDB::creator<JNISingleton>;
    *(undefined4 **)(puVar35 + 4) = &JNISingleton::get_class_ptr_static()::ptr;
    uVar28 = (undefined4)ClassDB::current_api;
    *(undefined1 *)((long)puVar35 + 0x28b) = 0;
    *puVar35 = uVar28;
    _global_unlock();
  }
  _global_lock();
  if (JavaClass::initialize_class()::initialized != '\0') goto LAB_0010102d;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = "Object";
    local_78 = 0;
    local_60 = 6;
    String::parse_latin1(local_a0);
    StringName::StringName((StringName *)local_a8,(String *)local_a0,false);
    local_68 = "RefCounted";
    local_80 = 0;
    local_60 = 10;
    String::parse_latin1((StrRange *)&local_80);
    StringName::StringName((StringName *)&local_68,(String *)&local_80,false);
    ClassDB::_add_class2((StringName *)&local_68,(StringName *)local_a8);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    lVar3 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    lVar3 = local_78;
    if (local_78 == 0) {
LAB_00100f03:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_00100f13:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00100f03;
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_00100f13;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_68 = "RefCounted";
  local_78 = 0;
  local_60 = 10;
  String::parse_latin1(local_a0);
  StringName::StringName((StringName *)local_a8,(String *)local_a0,false);
  local_68 = "JavaClass";
  local_80 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_80);
  StringName::StringName((StringName *)&local_68,(String *)&local_80,false);
  ClassDB::_add_class2((StringName *)&local_68,(StringName *)local_a8);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  lVar3 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  JavaClass::_bind_methods();
  JavaClass::initialize_class()::initialized = '\x01';
LAB_0010102d:
  local_68 = "JavaClass";
  local_70 = 0;
  local_60 = 9;
  String::parse_latin1(local_a8);
  StringName::StringName((StringName *)&local_68,(String *)local_a8,false);
  if ((CONCAT44(ClassDB::current_api._4_4_,(undefined4)ClassDB::current_api) != 0) &&
     (_DAT_0010d1b4 != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)_postinitialize_handler * 4);
    uVar39 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)_postinitialize_handler * 8);
    if (local_68 == (char *)0x0) {
      uVar29 = StringName::get_empty_hash();
    }
    else {
      uVar29 = *(uint *)(local_68 + 0x20);
    }
    if (uVar29 == 0) {
      uVar29 = 1;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar29 * lVar3;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar39;
    lVar34 = SUB168(auVar8 * auVar20,8);
    uVar37 = *(uint *)(__global_unlock + lVar34 * 4);
    uVar36 = (ulong)uVar37;
    uVar32 = SUB164(auVar8 * auVar20,8);
    if (uVar37 != 0) {
      uVar37 = 0;
      do {
        if ((uVar29 == (uint)uVar36) &&
           (*(char **)(*(long *)(CONCAT44(ClassDB::current_api._4_4_,
                                          (undefined4)ClassDB::current_api) + lVar34 * 8) + 0x10) ==
            local_68)) {
          lVar3 = *(long *)(CONCAT44(ClassDB::current_api._4_4_,(undefined4)ClassDB::current_api) +
                           (ulong)uVar32 * 8);
          if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
            StringName::unref();
          }
          lVar34 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar34 + -0x10),false);
            }
          }
          *(undefined1 *)(lVar3 + 0x2a1) = 1;
          *(code **)(lVar3 + 0x2a8) = ClassDB::creator<JavaClass>;
          *(undefined4 **)(lVar3 + 0x28) = &JavaClass::get_class_ptr_static()::ptr;
          uVar28 = (undefined4)ClassDB::current_api;
          *(undefined1 *)(lVar3 + 0x2a3) = 0;
          *(undefined4 *)(lVar3 + 0x18) = uVar28;
          _global_unlock();
          goto LAB_001011ae;
        }
        uVar37 = uVar37 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar32 + 1) * lVar3;
        auVar21._8_8_ = 0;
        auVar21._0_8_ = uVar39;
        lVar34 = SUB168(auVar9 * auVar21,8);
        uVar38 = *(uint *)(__global_unlock + lVar34 * 4);
        uVar36 = (ulong)uVar38;
        uVar32 = SUB164(auVar9 * auVar21,8);
      } while ((uVar38 != 0) &&
              (auVar10._8_8_ = 0, auVar10._0_8_ = uVar36 * lVar3, auVar22._8_8_ = 0,
              auVar22._0_8_ = uVar39, auVar11._8_8_ = 0,
              auVar11._0_8_ = (ulong)((uVar2 + uVar32) - SUB164(auVar10 * auVar22,8)) * lVar3,
              auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar37 <= SUB164(auVar11 * auVar23,8)));
    }
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  _global_unlock();
LAB_001011ae:
  ClassDB::register_class<JavaObject>(false);
  _global_lock();
  if (JavaClassWrapper::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_68 = "Object";
    local_78 = 0;
    local_60 = 6;
    String::parse_latin1(local_a0);
    StringName::StringName((StringName *)local_a8,(String *)local_a0,false);
    local_68 = "JavaClassWrapper";
    local_80 = 0;
    local_60 = 0x10;
    String::parse_latin1((StrRange *)&local_80);
    StringName::StringName((StringName *)&local_68,(String *)&local_80,false);
    ClassDB::_add_class2((StringName *)&local_68,(StringName *)local_a8);
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    lVar3 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    lVar3 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    JavaClassWrapper::_bind_methods();
    JavaClassWrapper::initialize_class()::initialized = '\x01';
  }
  local_68 = "JavaClassWrapper";
  local_70 = 0;
  local_60 = 0x10;
  String::parse_latin1(local_a8);
  StringName::StringName((StringName *)&local_68,(String *)local_a8,false);
  if ((CONCAT44(ClassDB::current_api._4_4_,(undefined4)ClassDB::current_api) != 0) &&
     (_DAT_0010d1b4 != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)_postinitialize_handler * 4);
    uVar39 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)_postinitialize_handler * 8);
    if (local_68 == (char *)0x0) {
      uVar29 = StringName::get_empty_hash();
    }
    else {
      uVar29 = *(uint *)(local_68 + 0x20);
    }
    if (uVar29 == 0) {
      uVar29 = 1;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar29 * lVar3;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar39;
    lVar34 = SUB168(auVar12 * auVar24,8);
    uVar37 = *(uint *)(__global_unlock + lVar34 * 4);
    uVar32 = SUB164(auVar12 * auVar24,8);
    if (uVar37 != 0) {
      uVar38 = 0;
      do {
        if ((uVar29 == uVar37) &&
           (*(char **)(*(long *)(CONCAT44(ClassDB::current_api._4_4_,
                                          (undefined4)ClassDB::current_api) + lVar34 * 8) + 0x10) ==
            local_68)) {
          lVar3 = *(long *)(CONCAT44(ClassDB::current_api._4_4_,(undefined4)ClassDB::current_api) +
                           (ulong)uVar32 * 8);
          if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
            StringName::unref();
          }
          lVar34 = local_70;
          if (local_70 != 0) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar34 + -0x10),false);
            }
          }
          *(undefined1 *)(lVar3 + 0x2a1) = 1;
          *(code **)(lVar3 + 0x2a8) = ClassDB::creator<JavaClassWrapper>;
          *(undefined4 **)(lVar3 + 0x28) = &JavaClassWrapper::get_class_ptr_static()::ptr;
          uVar28 = (undefined4)ClassDB::current_api;
          *(undefined1 *)(lVar3 + 0x2a3) = 0;
          *(undefined4 *)(lVar3 + 0x18) = uVar28;
          _global_unlock();
          goto LAB_0010145e;
        }
        uVar38 = uVar38 + 1;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = (ulong)(uVar32 + 1) * lVar3;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar39;
        lVar34 = SUB168(auVar13 * auVar25,8);
        uVar37 = *(uint *)(__global_unlock + lVar34 * 4);
        uVar32 = SUB164(auVar13 * auVar25,8);
      } while ((uVar37 != 0) &&
              (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar37 * lVar3, auVar26._8_8_ = 0,
              auVar26._0_8_ = uVar39, auVar15._8_8_ = 0,
              auVar15._0_8_ = (ulong)((uVar2 + uVar32) - SUB164(auVar14 * auVar26,8)) * lVar3,
              auVar27._8_8_ = 0, auVar27._0_8_ = uVar39, uVar38 <= SUB164(auVar15 * auVar27,8)));
    }
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  lVar3 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  _global_unlock();
LAB_0010145e:
  pSVar31 = (Singleton *)Engine::get_singleton();
  pOVar30 = JavaClassWrapper::singleton;
  local_70 = 0;
  StringName::StringName((StringName *)local_a0,"JavaClassWrapper",false);
  Engine::Singleton::Singleton
            ((Singleton *)&local_68,(StringName *)local_a0,pOVar30,(StringName *)local_a8);
  Engine::add_singleton(pSVar31);
  if ((((StringName::configured != '\0') &&
       ((local_58 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_68 == (char *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_78 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_70 != 0)))
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DefaultAllocator::alloc(unsigned long) */

void DefaultAllocator::alloc(ulong param_1)

{
  Memory::alloc_static(param_1,false);
  return;
}



/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
  if ((configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* Object::get_save_class() const */

void Object::get_save_class(void)

{
  long lVar1;
  long *in_RSI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RSI + 0x48))();
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind::is_valid() const */

undefined8 MethodBind::is_valid(void)

{
  return 1;
}



/* MethodBind::is_vararg() const */

undefined8 MethodBind::is_vararg(void)

{
  return 0;
}



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* JavaClass::is_class_ptr(void*) const */

uint __thiscall JavaClass::is_class_ptr(JavaClass *this,void *param_1)

{
  return (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* JavaClass::_getv(StringName const&, Variant&) const */

undefined8 JavaClass::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JavaClass::_setv(StringName const&, Variant const&) */

undefined8 JavaClass::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JavaClass::_validate_propertyv(PropertyInfo&) const */

void JavaClass::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JavaClass::_property_can_revertv(StringName const&) const */

undefined8 JavaClass::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JavaClass::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JavaClass::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JavaClass::_notificationv(int, bool) */

void JavaClass::_notificationv(int param_1,bool param_2)

{
  return;
}



/* JavaObject::is_class_ptr(void*) const */

uint __thiscall JavaObject::is_class_ptr(JavaObject *this,void *param_1)

{
  return (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b3,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* JavaObject::_getv(StringName const&, Variant&) const */

undefined8 JavaObject::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JavaObject::_setv(StringName const&, Variant const&) */

undefined8 JavaObject::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JavaObject::_validate_propertyv(PropertyInfo&) const */

void JavaObject::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JavaObject::_property_can_revertv(StringName const&) const */

undefined8 JavaObject::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JavaObject::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JavaObject::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JavaObject::_notificationv(int, bool) */

void JavaObject::_notificationv(int param_1,bool param_2)

{
  return;
}



/* JavaClassWrapper::is_class_ptr(void*) const */

uint __thiscall JavaClassWrapper::is_class_ptr(JavaClassWrapper *this,void *param_1)

{
  return (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b3,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* JavaClassWrapper::_getv(StringName const&, Variant&) const */

undefined8 JavaClassWrapper::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JavaClassWrapper::_setv(StringName const&, Variant const&) */

undefined8 JavaClassWrapper::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JavaClassWrapper::_validate_propertyv(PropertyInfo&) const */

void JavaClassWrapper::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JavaClassWrapper::_property_can_revertv(StringName const&) const */

undefined8 JavaClassWrapper::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JavaClassWrapper::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JavaClassWrapper::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JavaClassWrapper::_notificationv(int, bool) */

void JavaClassWrapper::_notificationv(int param_1,bool param_2)

{
  return;
}



/* JavaClassWrapper::wrap(String const&) */

String * JavaClassWrapper::wrap(String *param_1)

{
  *(undefined8 *)param_1 = 0;
  return param_1;
}



/* JNISingleton::is_class_ptr(void*) const */

uint __thiscall JNISingleton::is_class_ptr(JNISingleton *this,void *param_1)

{
  return (uint)CONCAT71(0x10b4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b3,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* JNISingleton::_getv(StringName const&, Variant&) const */

undefined8 JNISingleton::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JNISingleton::_setv(StringName const&, Variant const&) */

undefined8 JNISingleton::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JNISingleton::_validate_propertyv(PropertyInfo&) const */

void JNISingleton::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* JNISingleton::_property_can_revertv(StringName const&) const */

undefined8 JNISingleton::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* JNISingleton::_property_get_revertv(StringName const&, Variant&) const */

undefined8 JNISingleton::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* JNISingleton::_notificationv(int, bool) */

void JNISingleton::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTR<Ref<JavaObject>>::_gen_argument_type(int) const */

undefined8 MethodBindTR<Ref<JavaObject>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTR<Ref<JavaObject>>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<JavaObject>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTR<Ref<JavaClass>, String const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindTR<Ref<JavaClass>,String_const&>::_gen_argument_type
          (MethodBindTR<Ref<JavaClass>,String_const&> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffec) + 0x18;
}



/* MethodBindTR<Ref<JavaClass>, String const&>::get_argument_meta(int) const */

undefined8 MethodBindTR<Ref<JavaClass>,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<JavaClass>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<JavaClass>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<JavaClass>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<JavaClass>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<TypedArray<Dictionary>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<TypedArray<Dictionary>>::_gen_argument_type(int param_1)

{
  return 0x1c;
}



/* MethodBindTRC<TypedArray<Dictionary>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<TypedArray<Dictionary>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* Object* ClassDB::creator<JavaClassWrapper>(bool) */

Object * ClassDB::creator<JavaClassWrapper>(bool param_1)

{
  Object *this;
  
  this = (Object *)operator_new(0x180,"");
  Object::Object(this);
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010ac70;
  JavaClassWrapper::singleton = this;
  Object::_initialize();
  if (!param_1) {
    return this;
  }
  Object::_postinitialize();
  return this;
}



/* Object* ClassDB::creator<JNISingleton>(bool) */

Object * ClassDB::creator<JNISingleton>(bool param_1)

{
  Object *this;
  
  this = (Object *)operator_new(0x198,"");
  Object::Object(this);
  *(undefined8 *)(this + 0x178) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010add0;
  *(undefined4 *)(this + 0x188) = 0;
  *(undefined8 **)(this + 0x180) = &_GlobalNilClass::_nil;
  *(undefined8 *)(this + 400) = 0;
  Object::_initialize();
  if (!param_1) {
    return this;
  }
  Object::_postinitialize();
  return this;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ab10;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ab10;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* JavaObject::~JavaObject() */

void __thiscall JavaObject::~JavaObject(JavaObject *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ab10;
  Object::~Object((Object *)this);
  return;
}



/* JavaObject::~JavaObject() */

void __thiscall JavaObject::~JavaObject(JavaObject *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010ab10;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* Object* ClassDB::creator<JavaClass>(bool) */

Object * ClassDB::creator<JavaClass>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x180,"");
  RefCounted::RefCounted(this);
  *(undefined ***)this = &PTR__initialize_classv_0010af30;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* Object* ClassDB::creator<JavaObject>(bool) */

Object * ClassDB::creator<JavaObject>(bool param_1)

{
  RefCounted *this;
  
  this = (RefCounted *)operator_new(0x180,"");
  RefCounted::RefCounted(this);
  *(undefined ***)this = &PTR__initialize_classv_0010b090;
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b1f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b1f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC(MethodBindTRC<TypedArray<Dictionary>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b250;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC(MethodBindTRC<TypedArray<Dictionary>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b250;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<JavaClass>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<JavaClass>>::~MethodBindTRC(MethodBindTRC<Ref<JavaClass>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b2b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<JavaClass>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<JavaClass>>::~MethodBindTRC(MethodBindTRC<Ref<JavaClass>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b2b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<JavaClass>, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<JavaClass>,String_const&>::~MethodBindTR
          (MethodBindTR<Ref<JavaClass>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b310;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<JavaClass>, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<JavaClass>,String_const&>::~MethodBindTR
          (MethodBindTR<Ref<JavaClass>,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b310;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<Ref<JavaObject>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<JavaObject>>::~MethodBindTR(MethodBindTR<Ref<JavaObject>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b370;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<Ref<JavaObject>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<JavaObject>>::~MethodBindTR(MethodBindTR<Ref<JavaObject>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010b370;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* JNISingleton::callp(StringName const&, Variant const**, int, Callable::CallError&) */

JNISingleton * __thiscall
JNISingleton::callp(JNISingleton *this,StringName *param_1,Variant **param_2,int param_3,
                   CallError *param_4)

{
  long lVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  undefined4 in_register_0000000c;
  CallError *pCVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long lVar10;
  long in_FS_OFFSET;
  
  pCVar5 = (CallError *)CONCAT44(in_register_0000000c,param_3);
  plVar8 = *(long **)(param_1 + 400);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if ((plVar8 != (long *)0x0) && (*(long *)(param_1 + 0x178) != 0)) {
    for (lVar7 = *(long *)(*(long *)(param_1 + 0x178) + 0x10); *(long *)(param_1 + 0x180) != lVar7;
        lVar7 = *(long *)(lVar7 + 8)) {
      while (*param_2 < *(Variant **)(lVar7 + 0x30)) {
        lVar7 = *(long *)(lVar7 + 0x10);
        if (*(long *)(param_1 + 0x180) == lVar7) goto LAB_0010228f;
      }
      if (*param_2 <= *(Variant **)(lVar7 + 0x30)) {
        lVar4 = *(long *)(lVar7 + 0x48);
        iVar9 = (int)param_4;
        if (lVar4 == 0) {
          if (iVar9 == 0) goto LAB_001023ac;
        }
        else if ((long)iVar9 == *(long *)(lVar4 + -8)) {
          if (iVar9 < 1) goto LAB_001023ac;
          lVar10 = 0;
          goto LAB_00102358;
        }
        break;
      }
    }
  }
LAB_0010228f:
  Object::callp((StringName *)this,(Variant **)param_1,(int)param_2,pCVar5);
LAB_001022a0:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00102358:
  if (lVar4 == 0) {
    lVar6 = 0;
LAB_0010235f:
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar6,"p_index","size()","",false,true
              );
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar6 = *(long *)(lVar4 + -8);
  if (lVar6 <= lVar10) goto LAB_0010235f;
  cVar3 = Variant::can_convert
                    (**(undefined4 **)(pCVar5 + lVar10 * 8),*(undefined4 *)(lVar4 + lVar10 * 4));
  if (cVar3 == '\0') goto LAB_0010228f;
  lVar10 = lVar10 + 1;
  if (iVar9 == lVar10) {
    plVar8 = *(long **)(param_1 + 400);
LAB_001023ac:
    if (*(code **)(*plVar8 + 0x68) == JavaObject::callp) {
      *(undefined4 *)this = 0;
      *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    }
    else {
      (**(code **)(*plVar8 + 0x68))(this,plVar8,param_2,pCVar5);
    }
    goto LAB_001022a0;
  }
  lVar4 = *(long *)(lVar7 + 0x48);
  goto LAB_00102358;
}



/* JavaObject::_get_class_namev() const */

undefined8 * JavaObject::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00102433:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102433;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JavaObject");
      goto LAB_0010249e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JavaObject");
LAB_0010249e:
  return &_get_class_namev()::_class_name_static;
}



/* JavaClassWrapper::~JavaClassWrapper() */

void __thiscall JavaClassWrapper::~JavaClassWrapper(JavaClassWrapper *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ac70;
  if (*(long *)(this + 0x178) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x178);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Object::~Object((Object *)this);
        return;
      }
    }
  }
  Object::~Object((Object *)this);
  return;
}



/* JavaClassWrapper::~JavaClassWrapper() */

void __thiscall JavaClassWrapper::~JavaClassWrapper(JavaClassWrapper *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ac70;
  if (*(long *)(this + 0x178) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x178);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* JavaClassWrapper::get_exception() */

void JavaClassWrapper::get_exception(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x178) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x178);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* JavaClass::_get_class_namev() const */

undefined8 * JavaClass::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00102653:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102653;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JavaClass");
      goto LAB_001026be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JavaClass");
LAB_001026be:
  return &_get_class_namev()::_class_name_static;
}



/* JavaClassWrapper::_get_class_namev() const */

undefined8 * JavaClassWrapper::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00102743:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102743;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JavaClassWrapper");
      goto LAB_001027ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JavaClassWrapper");
LAB_001027ae:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00102823:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102823;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010288e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010288e:
  return &_get_class_namev()::_class_name_static;
}



/* JNISingleton::_get_class_namev() const */

undefined8 * JNISingleton::_get_class_namev(void)

{
  int iVar1;
  
  if ((_get_class_namev()::_class_name_static == '\0') &&
     (iVar1 = __cxa_guard_acquire(&_get_class_namev()::_class_name_static), iVar1 != 0)) {
    _get_class_namev()::_class_name_static = 0;
    __cxa_atexit(StringName::~StringName,&_get_class_namev()::_class_name_static,&__dso_handle);
    __cxa_guard_release(&_get_class_namev()::_class_name_static);
  }
  if (_get_class_namev()::_class_name_static != 0) {
    if (*(long *)(_get_class_namev()::_class_name_static + 8) != 0) {
LAB_00102913:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00102913;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"JNISingleton");
      goto LAB_0010297e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"JNISingleton");
LAB_0010297e:
  return &_get_class_namev()::_class_name_static;
}



/* JNISingleton::get_class() const */

void JNISingleton::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaObject::get_class() const */

void JavaObject::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaClassWrapper::get_class() const */

void JavaClassWrapper::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaClass::get_class() const */

void JavaClass::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI);
  }
  else {
    lVar2 = *(long *)(*(long *)(in_RSI + 8) + 0x20);
    if (lVar2 == 0) {
      *(undefined8 *)in_RDI = 0;
    }
    else {
      __s = *(char **)(lVar2 + 8);
      *(undefined8 *)in_RDI = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar2 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
        }
      }
      else {
        strlen(__s);
        String::parse_latin1(in_RDI);
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JNISingleton::is_class(String const&) const */

undefined8 __thiscall JNISingleton::is_class(JNISingleton *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_00102e4f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00102e4f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00102f03;
  }
  cVar6 = String::operator==(param_1,"JNISingleton");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00102fb3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00102fb3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00102f03;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00102f03:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_001030df;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001030df:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00103193;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_00103243;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00103243:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00103193;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103193:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaObject::is_class(String const&) const */

undefined8 __thiscall JavaObject::is_class(JavaObject *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0010336f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010336f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_00103423;
  }
  cVar5 = String::operator==(param_1,"JavaObject");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00103423:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaClass::is_class(String const&) const */

undefined8 __thiscall JavaClass::is_class(JavaClass *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001034ef;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001034ef:
    cVar5 = String::operator==(param_1,(String *)&local_60);
    lVar3 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (cVar5 != '\0') goto LAB_001035a3;
  }
  cVar5 = String::operator==(param_1,"JavaClass");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001035a3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaClassWrapper::is_class(String const&) const */

undefined8 __thiscall JavaClassWrapper::is_class(JavaClassWrapper *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  undefined8 uVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar4 = *(long *)(lVar2 + 0x20);
    if (lVar4 == 0) {
      local_60 = 0;
    }
    else {
      pcVar3 = *(char **)(lVar4 + 8);
      local_60 = 0;
      if (pcVar3 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
        if (*(long *)(lVar4 + 0x10) != 0) {
          do {
            lVar5 = *plVar1;
            if (lVar5 == 0) goto LAB_0010366f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar5 == lVar8;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar8 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
            local_60 = *(long *)(lVar4 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010366f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar4 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00103723;
  }
  cVar6 = String::operator==(param_1,"JavaClassWrapper");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_001037d3;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar5 == lVar8;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar8 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar4 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_001037d3:
      cVar6 = String::operator==(param_1,(String *)&local_60);
      lVar4 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (cVar6 != '\0') goto LAB_00103723;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00103723:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Dictionary>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<TypedArray<Dictionary>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  long local_28;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  Variant::get_type_name(&local_38,0x1b);
  *puVar3 = 0x1c;
  puVar3[6] = 0x1f;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_38 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_38);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_28,(String *)(puVar3 + 8),false);
      if (*(long *)(puVar3 + 4) == local_28) {
        lVar2 = local_38;
        if ((StringName::configured != '\0') && (local_28 != 0)) {
          StringName::unref();
          lVar2 = local_38;
        }
      }
      else {
        StringName::unref();
        *(long *)(puVar3 + 4) = local_28;
        lVar2 = local_38;
      }
      goto joined_r0x001039ac;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_30);
  lVar2 = local_38;
joined_r0x001039ac:
  local_38 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_30 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<JavaObject>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<JavaObject>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "JavaObject";
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_00103aa0;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_00103aa0:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<JavaClass>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<JavaClass>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "JavaClass";
  local_40 = 9;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) {
      StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
      goto LAB_00103c30;
    }
  }
  StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
  if (*(char **)(puVar3 + 4) == local_48) {
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    *(char **)(puVar3 + 4) = local_48;
  }
LAB_00103c30:
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC0;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar3[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_58);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar3 + 8),false);
      if (*(undefined **)(puVar3 + 4) == local_48) {
        lVar2 = local_58;
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
          lVar2 = local_58;
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar3 + 4) = local_48;
        lVar2 = local_58;
      }
      goto joined_r0x00103e4c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00103e4c:
  local_58 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JNISingleton::_initialize_classv() */

void JNISingleton::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "JNISingleton";
    local_50 = 0;
    local_30 = 0xc;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        initialize_class()::initialized = '\x01';
        goto LAB_00103eb5;
      }
    }
    initialize_class()::initialized = '\x01';
  }
LAB_00103eb5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "RefCounted";
    local_50 = 0;
    local_30 = 10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JNISingleton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void JNISingleton::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "JNISingleton";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "JNISingleton";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00104328:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104328;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104346;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104346:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"JNISingleton",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "RefCounted";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00104718:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104718;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104736;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104736:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaClassWrapper::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void JavaClassWrapper::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  undefined7 in_register_00000031;
  List *pLVar6;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar6 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = 0;
  local_90 = 0;
  local_78 = "JavaClassWrapper";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "JavaClassWrapper";
  local_98 = 0;
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00104b08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104b08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104b26;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104b26:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar6 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)pLVar6;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"JavaClassWrapper",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaClass::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall JavaClass::_get_property_listv(JavaClass *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "JavaClass";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "JavaClass";
  local_98 = 0;
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00104f08:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104f08;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104f25;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104f25:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"JavaClass",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaObject::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall JavaObject::_get_property_listv(JavaObject *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "JavaObject";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "JavaObject";
  local_98 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105358:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105358;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00105375;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00105375:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar5 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  *puVar5 = 0;
  puVar5[6] = 0;
  puVar5[10] = 6;
  *(undefined8 *)(puVar5 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar5 + 0xc) = (undefined1  [16])0x0;
  *puVar5 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_58);
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  lVar2 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"JavaObject",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaObject::_bind_methods() [clone .cold] */

void JavaObject::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JavaClass::_bind_methods() [clone .cold] */

void JavaClass::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JavaClassWrapper::_bind_methods() [clone .cold] */

void JavaClassWrapper::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* JavaObject::_initialize_classv() */

void JavaObject::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00105829;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_0010593a:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010594a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010593a;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010594a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_48 = "RefCounted";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "JavaObject";
  local_60 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  _bind_methods();
  initialize_class()::initialized = '\x01';
LAB_00105829:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<JavaObject>(bool) */

void ClassDB::register_class<JavaObject>(bool param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (JavaObject::initialize_class()::initialized == '\0') {
    if (RefCounted::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_68 = 0;
      local_50 = 6;
      local_58 = "Object";
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "RefCounted";
      local_70 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar3 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar3 = local_68;
      if (local_68 == 0) {
LAB_00105e6e:
        if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_00105e7e:
          RefCounted::_bind_methods();
        }
      }
      else {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 != 0) goto LAB_00105e6e;
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_00105e7e;
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "JavaObject";
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar3 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    JavaObject::_bind_methods();
    JavaObject::initialize_class()::initialized = '\x01';
  }
  local_58 = "JavaObject";
  local_60 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_0010d1b4 != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)_postinitialize_handler * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)_postinitialize_handler * 8);
    if (local_58 == (char *)0x0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(local_58 + 0x20);
    }
    lVar12 = local_60;
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar17 == uVar13) &&
           (*(char **)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar15 * 8) +
                      0x10) == local_58)) {
          puVar16 = (undefined4 *)
                    (*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) +
                              (ulong)uVar14 * 8) + 0x18);
          if (StringName::configured == '\0') {
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            goto LAB_00105ce7;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_00105ce7;
          goto LAB_00105cbd;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar17 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  lVar3 = local_60;
  if (StringName::configured == '\0') {
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  else {
    if (local_58 != (char *)0x0) {
      StringName::unref();
    }
    puVar16 = (undefined4 *)0x0;
    if (local_60 != 0) {
LAB_00105cbd:
      lVar3 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
      if (puVar16 != (undefined4 *)0x0) {
LAB_00105ce7:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(code **)(puVar16 + 0xa4) = creator<JavaObject>;
        *(bool *)((long)puVar16 + 0x28b) = param_1;
        *(undefined4 **)(puVar16 + 4) = &JavaObject::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00105ed7;
        goto LAB_00105d2f;
      }
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00105ed7:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00105d2f:
  _global_unlock();
  return;
}



/* MethodBind* create_method_bind<JavaClass, String>(String (JavaClass::*)() const) */

MethodBind * create_method_bind<JavaClass,String>(_func_String *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b1f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "JavaClass";
  local_30 = 9;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<JavaClass, TypedArray<Dictionary>>(TypedArray<Dictionary>
   (JavaClass::*)() const) */

MethodBind * create_method_bind<JavaClass,TypedArray<Dictionary>>(_func_TypedArray *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_TypedArray **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b250;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "JavaClass";
  local_30 = 9;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaClass::_initialize_classv() */

void JavaClass::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized != '\0') goto LAB_00106379;
  if (RefCounted::initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
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
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    lVar2 = local_58;
    if (local_58 == 0) {
LAB_0010648a:
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
LAB_0010649a:
        RefCounted::_bind_methods();
      }
    }
    else {
      LOCK();
      plVar1 = (long *)(local_58 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_0010648a;
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010649a;
    }
    RefCounted::initialize_class()::initialized = '\x01';
  }
  local_48 = "RefCounted";
  local_58 = 0;
  local_40 = 10;
  String::parse_latin1((StrRange *)&local_58);
  StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
  local_48 = "JavaClass";
  local_60 = 0;
  local_40 = 9;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
  ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
    StringName::unref();
  }
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
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  lVar2 = local_58;
  if (local_58 != 0) {
    LOCK();
    plVar1 = (long *)(local_58 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_58 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  _bind_methods();
  initialize_class()::initialized = '\x01';
LAB_00106379:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBind* create_method_bind<JavaClassWrapper, Ref<JavaClass>, String const&>(Ref<JavaClass>
   (JavaClassWrapper::*)(String const&)) */

MethodBind *
create_method_bind<JavaClassWrapper,Ref<JavaClass>,String_const&>(_func_Ref_String_ptr *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b310;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "JavaClassWrapper";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<JavaClassWrapper, Ref<JavaObject>>(Ref<JavaObject>
   (JavaClassWrapper::*)()) */

MethodBind * create_method_bind<JavaClassWrapper,Ref<JavaObject>>(_func_Ref *param_1)

{
  long *plVar1;
  long lVar2;
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010b370;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "JavaClassWrapper";
  local_30 = 0x10;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  lVar2 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JavaClassWrapper::_initialize_classv() */

void JavaClassWrapper::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "JavaClassWrapper";
    local_50 = 0;
    local_30 = 0x10;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
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
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        _bind_methods();
        initialize_class()::initialized = '\x01';
        goto LAB_00106795;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_00106795:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void memdelete_allocator<RBMap<StringName, JNISingleton::MethodData, Comparator<StringName>,
   DefaultAllocator>::Element, DefaultAllocator>(RBMap<StringName, JNISingleton::MethodData,
   Comparator<StringName>, DefaultAllocator>::Element*) */

void memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
               (Element *param_1)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(param_1 + 0x48) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x48) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0x48) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x30) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* RBMap<StringName, JNISingleton::MethodData, Comparator<StringName>,
   DefaultAllocator>::_cleanup_tree(RBMap<StringName, JNISingleton::MethodData,
   Comparator<StringName>, DefaultAllocator>::Element*) [clone .part.0] */

void __thiscall
RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::_cleanup_tree
          (RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator> *this,
          Element *param_1)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar1 = *(Element **)(param_1 + 0x10);
  pEVar2 = *(Element **)(this + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (pEVar4 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar2 + 0x10);
          if (pEVar6 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar2);
        }
        memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar5);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
        }
        memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar2);
      }
      memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                (pEVar3);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
        }
        memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar5);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
        }
        memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar5);
      }
      memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                (pEVar2);
    }
    memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
              (pEVar1);
    pEVar2 = *(Element **)(this + 8);
  }
  pEVar1 = *(Element **)(param_1 + 8);
  if (pEVar1 != pEVar2) {
    pEVar3 = *(Element **)(pEVar1 + 0x10);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar3 + 0x10);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar4 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar4) {
            _cleanup_tree(this,pEVar4);
            pEVar4 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar4) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar5 + 8);
        if (pEVar2 != pEVar6) {
          if (*(Element **)(pEVar2 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar2);
        }
        memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar5);
        pEVar5 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar3 + 8);
      if (pEVar2 != pEVar5) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
          pEVar5 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar2 + 8);
        if (pEVar6 != pEVar5) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar5 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar5) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
        }
        memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar2);
      }
      memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                (pEVar3);
      pEVar3 = *(Element **)(this + 8);
    }
    pEVar2 = *(Element **)(pEVar1 + 8);
    if (pEVar2 != pEVar3) {
      pEVar5 = *(Element **)(pEVar2 + 0x10);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
        }
        memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar5);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar5 = *(Element **)(pEVar2 + 8);
      if (pEVar5 != pEVar3) {
        pEVar6 = *(Element **)(pEVar5 + 0x10);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
          pEVar3 = *(Element **)(this + 8);
        }
        pEVar6 = *(Element **)(pEVar5 + 8);
        if (pEVar6 != pEVar3) {
          if (*(Element **)(pEVar6 + 0x10) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 0x10));
            pEVar3 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar6 + 8) != pEVar3) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
        }
        memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar5);
      }
      memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                (pEVar2);
    }
    memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
              (pEVar1);
  }
  memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
            (param_1);
  return;
}



/* RBMap<StringName, JNISingleton::MethodData, Comparator<StringName>, DefaultAllocator>::clear() */

void __thiscall
RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::clear
          (RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator> *this)

{
  Element *pEVar1;
  Element *pEVar2;
  Element *pEVar3;
  Element *pEVar4;
  Element *pEVar5;
  Element *pEVar6;
  
  pEVar3 = *(Element **)this;
  if (pEVar3 != (Element *)0x0) {
    pEVar1 = *(Element **)(pEVar3 + 0x10);
    pEVar2 = *(Element **)(this + 8);
    if (pEVar1 != pEVar2) {
      pEVar3 = *(Element **)(pEVar1 + 0x10);
      if (pEVar2 != pEVar3) {
        pEVar6 = *(Element **)(pEVar3 + 0x10);
        if (pEVar2 != pEVar6) {
          pEVar5 = *(Element **)(pEVar6 + 0x10);
          if (pEVar2 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          if (pEVar5 != *(Element **)(pEVar6 + 8)) {
            _cleanup_tree(this,*(Element **)(pEVar6 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar2 = *(Element **)(pEVar3 + 8);
        if (pEVar2 != pEVar6) {
          pEVar5 = *(Element **)(pEVar2 + 0x10);
          if (pEVar5 != pEVar6) {
            pEVar4 = *(Element **)(pEVar5 + 0x10);
            if (pEVar6 != pEVar4) {
              _cleanup_tree(this,pEVar4);
              pEVar4 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar5 + 8) != pEVar4) {
              _cleanup_tree(this,*(Element **)(pEVar5 + 8));
            }
            memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                      (pEVar5);
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar2 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar2 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar2);
        }
        memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar3);
        pEVar3 = *(Element **)(this + 8);
      }
      pEVar2 = *(Element **)(pEVar1 + 8);
      if (pEVar3 != pEVar2) {
        pEVar6 = *(Element **)(pEVar2 + 0x10);
        if (pEVar3 != pEVar6) {
          pEVar5 = *(Element **)(pEVar6 + 0x10);
          if (pEVar3 != pEVar5) {
            _cleanup_tree(this,pEVar5);
            pEVar5 = *(Element **)(this + 8);
          }
          pEVar3 = *(Element **)(pEVar6 + 8);
          if (pEVar3 != pEVar5) {
            if (*(Element **)(pEVar3 + 0x10) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
              pEVar5 = *(Element **)(this + 8);
            }
            if (*(Element **)(pEVar3 + 8) != pEVar5) {
              _cleanup_tree(this,*(Element **)(pEVar3 + 8));
            }
            memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                      (pEVar3);
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar6);
          pEVar6 = *(Element **)(this + 8);
        }
        pEVar3 = *(Element **)(pEVar2 + 8);
        if (pEVar3 != pEVar6) {
          if (*(Element **)(pEVar3 + 0x10) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 0x10));
            pEVar6 = *(Element **)(this + 8);
          }
          if (*(Element **)(pEVar3 + 8) != pEVar6) {
            _cleanup_tree(this,*(Element **)(pEVar3 + 8));
          }
          memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                    (pEVar3);
        }
        memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                  (pEVar2);
      }
      memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
                (pEVar1);
      pEVar3 = *(Element **)this;
      pEVar2 = *(Element **)(this + 8);
    }
    *(Element **)(pEVar3 + 0x10) = pEVar2;
    *(undefined4 *)(this + 0x10) = 0;
    memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
              (pEVar3);
    *(undefined8 *)this = 0;
  }
  return;
}



/* JNISingleton::~JNISingleton() */

void __thiscall JNISingleton::~JNISingleton(JNISingleton *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010add0;
  RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::clear
            ((RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator> *)
             (this + 0x178));
  if (*(long *)(this + 400) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 400);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::clear
            ((RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator> *)
             (this + 0x178));
  if (*(Element **)(this + 0x178) != (Element *)0x0) {
    memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
              (*(Element **)(this + 0x178));
  }
  Object::~Object((Object *)this);
  return;
}



/* JNISingleton::~JNISingleton() */

void __thiscall JNISingleton::~JNISingleton(JNISingleton *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010add0;
  RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::clear
            ((RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator> *)
             (this + 0x178));
  if (*(long *)(this + 400) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 400);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::clear
            ((RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator> *)
             (this + 0x178));
  if (*(Element **)(this + 0x178) != (Element *)0x0) {
    memdelete_allocator<RBMap<StringName,JNISingleton::MethodData,Comparator<StringName>,DefaultAllocator>::Element,DefaultAllocator>
              (*(Element **)(this + 0x178));
  }
  Object::~Object((Object *)this);
  operator_delete(this,0x198);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00107428) */
/* WARNING: Removing unreachable block (ram,0x00107558) */
/* WARNING: Removing unreachable block (ram,0x00107720) */
/* WARNING: Removing unreachable block (ram,0x00107564) */
/* WARNING: Removing unreachable block (ram,0x0010756e) */
/* WARNING: Removing unreachable block (ram,0x00107700) */
/* WARNING: Removing unreachable block (ram,0x0010757a) */
/* WARNING: Removing unreachable block (ram,0x00107584) */
/* WARNING: Removing unreachable block (ram,0x001076e0) */
/* WARNING: Removing unreachable block (ram,0x00107590) */
/* WARNING: Removing unreachable block (ram,0x0010759a) */
/* WARNING: Removing unreachable block (ram,0x001076c0) */
/* WARNING: Removing unreachable block (ram,0x001075a6) */
/* WARNING: Removing unreachable block (ram,0x001075b0) */
/* WARNING: Removing unreachable block (ram,0x001076a0) */
/* WARNING: Removing unreachable block (ram,0x001075bc) */
/* WARNING: Removing unreachable block (ram,0x001075c6) */
/* WARNING: Removing unreachable block (ram,0x00107680) */
/* WARNING: Removing unreachable block (ram,0x001075d2) */
/* WARNING: Removing unreachable block (ram,0x001075dc) */
/* WARNING: Removing unreachable block (ram,0x00107660) */
/* WARNING: Removing unreachable block (ram,0x001075e4) */
/* WARNING: Removing unreachable block (ram,0x001075fa) */
/* WARNING: Removing unreachable block (ram,0x00107606) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindTRC<TypedArray<Dictionary>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<TypedArray<Dictionary>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC33,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00107900;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((Array *)&local_58);
      Variant::Variant((Variant *)local_48,(Array *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      Array::~Array((Array *)&local_58);
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00107900:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_58 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC33,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar6 = (long *)(local_60 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00107c20;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar4)((String *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar3 = local_58;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00107c20:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x107748;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107f61;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar3 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar3 + -2,false);
    }
  }
LAB_00107f61:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x107748;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010819e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar3 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar3 + -2,false);
    }
  }
LAB_0010819e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<JavaObject>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<Ref<JavaObject>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x107748;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC33,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pOVar4 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar4 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108450;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar6 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar6 & 1) != 0) {
        pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar2) + -1);
      }
      (*(code *)pVVar6)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        pOVar4 = local_58;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_58);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00108450:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<JavaObject>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<JavaObject>>::ptrcall
          (MethodBindTR<Ref<JavaObject>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  Object *pOVar4;
  long *plVar5;
  Object *extraout_RDX;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x107748;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pOVar6 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar4 = local_48 + -0x10;
        *(void **)pOVar4 = (void *)((long)*(void **)pOVar4 + -1);
        UNLOCK();
        if (*(void **)pOVar4 == (void *)0x0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108726;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar3);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 == (Object *)0x0) goto LAB_00108726;
    *(undefined8 *)param_3 = 0;
    goto LAB_00108769;
  }
  pOVar4 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar6 = *param_3;
  if (pOVar6 != pOVar4) {
    *(Object **)param_3 = pOVar4;
    if (pOVar4 == (Object *)0x0) {
      if (pOVar6 != (Object *)0x0) goto LAB_00108769;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar6 != (Object *)0x0) {
LAB_00108769:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar6);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00108726;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar6 = local_48;
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_48);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
LAB_00108726:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<JavaClass>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Ref<JavaClass>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  Variant *pVVar6;
  long *plVar7;
  undefined4 in_register_00000014;
  long *plVar8;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar8 != (long *)0x0) && (plVar8[1] != 0)) && (*(char *)(plVar8[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar8[1] == 0) {
      plVar7 = (long *)plVar8[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar8 + 0x40))(plVar8);
      }
    }
    else {
      plVar7 = (long *)(plVar8[1] + 0x20);
    }
    if (local_58 == (Object *)*plVar7) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x107748;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC33,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pOVar4 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_58 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar4 + -0x10,false);
        }
      }
      lVar3 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00108aa0;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar6 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar6 & 1) != 0) {
        pVVar6 = *(Variant **)(pVVar6 + *(long *)((long)plVar8 + (long)pVVar2) + -1);
      }
      (*(code *)pVVar6)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        pOVar4 = local_58;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_58);
          if (cVar5 != '\0') {
            if (*(code **)(*(long *)pOVar4 + 0x140) == JavaClass::~JavaClass) {
              *(undefined ***)pOVar4 = &PTR__initialize_classv_0010ab10;
              Object::~Object(pOVar4);
            }
            else {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            }
            Memory::free_static(pOVar4,false);
          }
        }
      }
    }
    else {
      *in_R9 = 4;
      in_R9[2] = 0;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00108aa0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<JavaClass>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<JavaClass>>::ptrcall
          (MethodBindTRC<Ref<JavaClass>> *this,Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  Object *pOVar4;
  long *plVar5;
  Object *extraout_RDX;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x107748;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pOVar6 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar4 = local_48 + -0x10;
        *(void **)pOVar4 = (void *)((long)*(void **)pOVar4 + -1);
        UNLOCK();
        if (*(void **)pOVar4 == (void *)0x0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108d86;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar3);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 == (Object *)0x0) goto LAB_00108d86;
    *(undefined8 *)param_3 = 0;
    goto LAB_00108dc9;
  }
  pOVar4 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar6 = *param_3;
  if (pOVar6 != pOVar4) {
    *(Object **)param_3 = pOVar4;
    if (pOVar4 == (Object *)0x0) {
      if (pOVar6 != (Object *)0x0) goto LAB_00108dc9;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar6 != (Object *)0x0) {
LAB_00108dc9:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar6);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_00108d86;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar6 = local_48;
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_48);
    if (cVar2 != '\0') {
      if (*(code **)(*(long *)pOVar6 + 0x140) == JavaClass::~JavaClass) {
        *(undefined ***)pOVar6 = &PTR__initialize_classv_0010ab10;
        Object::~Object(pOVar6);
      }
      else {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      }
      Memory::free_static(pOVar6,false);
    }
  }
LAB_00108d86:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<JavaClass>, String const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<Ref<JavaClass>,String_const&>::ptrcall
          (MethodBindTR<Ref<JavaClass>,String_const&> *this,Object *param_1,void **param_2,
          void *param_3)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  Object *pOVar4;
  long *plVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x107748;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pOVar6 = local_48;
      if (local_48 != (Object *)0x0) {
        LOCK();
        pOVar4 = local_48 + -0x10;
        *(long *)pOVar4 = *(long *)pOVar4 + -1;
        UNLOCK();
        if (*(long *)pOVar4 == 0) {
          local_48 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001090b9;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar3)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),*param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar6 = *param_3;
    if (pOVar6 == (Object *)0x0) goto LAB_001090b9;
    *(undefined8 *)param_3 = 0;
    goto LAB_00109101;
  }
  pOVar4 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar6 = *param_3;
  if (pOVar6 != pOVar4) {
    *(Object **)param_3 = pOVar4;
    if (pOVar4 == (Object *)0x0) {
      if (pOVar6 != (Object *)0x0) goto LAB_00109101;
    }
    else {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar6 != (Object *)0x0) {
LAB_00109101:
        cVar2 = RefCounted::unreference();
        if (cVar2 != '\0') {
          cVar2 = predelete_handler(pOVar6);
          if (cVar2 != '\0') {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_001090b9;
    }
  }
  cVar2 = RefCounted::unreference();
  pOVar6 = local_48;
  if (cVar2 != '\0') {
    cVar2 = predelete_handler(local_48);
    if (cVar2 != '\0') {
      if (*(code **)(*(long *)pOVar6 + 0x140) == JavaClass::~JavaClass) {
        *(undefined ***)pOVar6 = &PTR__initialize_classv_0010ab10;
        Object::~Object(pOVar6);
      }
      else {
        (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      }
      Memory::free_static(pOVar6,false);
    }
  }
LAB_001090b9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Dictionary>>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>>::validated_call
          (MethodBindTRC<TypedArray<Dictionary>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x107748;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001093a9;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)(param_3 + 8),(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_001093a9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<TypedArray<Dictionary>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>>::ptrcall
          (MethodBindTRC<TypedArray<Dictionary>> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar5 = *(long **)(param_1 + 0x118);
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x107748;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((Array *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(Array *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001095ba;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((Array *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  Array::operator=((Array *)param_3,(Array *)&local_48);
  Array::~Array((Array *)&local_48);
LAB_001095ba:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<JavaClass>, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTR<Ref<JavaClass>,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Object *pOVar1;
  Variant *pVVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  Object *pOVar6;
  char *pcVar7;
  char cVar8;
  undefined4 uVar9;
  long *plVar10;
  long lVar11;
  undefined4 in_register_00000014;
  long *plVar12;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar13;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  Object *local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar12 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar12 != (long *)0x0) && (plVar12[1] != 0)) && (*(char *)(plVar12[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar12[1] == 0) {
      plVar10 = (long *)plVar12[0x23];
      if (plVar10 == (long *)0x0) {
        plVar10 = (long *)(**(code **)(*plVar12 + 0x40))(plVar12);
      }
    }
    else {
      plVar10 = (long *)(plVar12[1] + 0x20);
    }
    if (local_58 == (char *)*plVar10) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = (Object *)0x0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC33,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar7 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar12 = (long *)(local_58 + -0x10);
        *plVar12 = *plVar12 + -1;
        UNLOCK();
        if (*plVar12 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar7 + -0x10,false);
        }
      }
      pOVar6 = local_60;
      if (local_60 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_60 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_60 = (Object *)0x0;
          Memory::free_static(pOVar6 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00109930;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar2 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar13 = param_2[5];
    if (pVVar13 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00109970;
LAB_00109960:
      pVVar13 = *(Variant **)param_4;
    }
    else {
      lVar3 = *(long *)(pVVar13 + -8);
      if ((int)lVar3 < (int)(in_R8D ^ 1)) {
LAB_00109970:
        uVar9 = 4;
        goto LAB_00109925;
      }
      if (in_R8D == 1) goto LAB_00109960;
      lVar11 = (long)((int)lVar3 + -1);
      if (lVar3 <= lVar11) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar3,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pVVar13 = pVVar13 + lVar11 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar12 + (long)pVVar2) + -1);
    }
    cVar8 = Variant::can_convert_strict(*(undefined4 *)pVVar13,4);
    uVar5 = _LC37;
    if (cVar8 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    Variant::operator_cast_to_String((Variant *)&local_58);
    (*(code *)pVVar14)(&local_60,(Variant *)((long)plVar12 + (long)pVVar2),(Variant *)&local_58);
    Variant::Variant((Variant *)local_48,local_60);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
    if (local_60 != (Object *)0x0) {
      cVar8 = RefCounted::unreference();
      pOVar6 = local_60;
      if (cVar8 != '\0') {
        cVar8 = predelete_handler(local_60);
        if (cVar8 != '\0') {
          if (*(code **)(*(long *)pOVar6 + 0x140) == JavaClass::~JavaClass) {
            *(undefined ***)pOVar6 = &PTR__initialize_classv_0010ab10;
            Object::~Object(pOVar6);
          }
          else {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          }
          Memory::free_static(pOVar6,false);
        }
      }
    }
    pcVar7 = local_58;
    if (local_58 != (char *)0x0) {
      LOCK();
      plVar12 = (long *)(local_58 + -0x10);
      *plVar12 = *plVar12 + -1;
      UNLOCK();
      if (*plVar12 == 0) {
        local_58 = (char *)0x0;
        Memory::free_static(pcVar7 + -0x10,false);
      }
    }
  }
  else {
    uVar9 = 3;
LAB_00109925:
    *in_R9 = uVar9;
    in_R9[2] = 1;
  }
LAB_00109930:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<JavaObject>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<Ref<JavaObject>>::validated_call
          (MethodBindTR<Ref<JavaObject>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Object *pOVar2;
  Object *pOVar3;
  Variant **ppVVar4;
  char cVar5;
  code *pcVar6;
  long *plVar7;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x107748;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar4 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar4 + -2,false);
        }
      }
      pOVar3 = local_50;
      if (local_50 != (Object *)0x0) {
        LOCK();
        pOVar2 = local_50 + -0x10;
        *(long *)pOVar2 = *(long *)pOVar2 + -1;
        UNLOCK();
        if (*(long *)pOVar2 == 0) {
          local_50 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109c46;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  if (((ulong)pcVar6 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar6 = *(code **)(pcVar6 + (long)param_2 + -1);
  }
  (*pcVar6)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar3 = local_50;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_50);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00109c46:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<JavaClass>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<JavaClass>>::validated_call
          (MethodBindTRC<Ref<JavaClass>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  Object *pOVar2;
  Object *pOVar3;
  Variant **ppVVar4;
  char cVar5;
  code *pcVar6;
  long *plVar7;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  Variant **local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar7 = *(long **)(param_1 + 0x118);
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar7 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x107748;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar4 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar4 + -2,false);
        }
      }
      pOVar3 = local_50;
      if (local_50 != (Object *)0x0) {
        LOCK();
        pOVar2 = local_50 + -0x10;
        *(long *)pOVar2 = *(long *)pOVar2 + -1;
        UNLOCK();
        if (*(long *)pOVar2 == 0) {
          local_50 = (Object *)0x0;
          Memory::free_static(pOVar3 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00109eb6;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar6 = *(code **)(this + 0x58);
  if (((ulong)pcVar6 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar6 = *(code **)(pcVar6 + (long)param_2 + -1);
  }
  (*pcVar6)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar3 = local_50;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_50);
      if (cVar5 != '\0') {
        if (*(code **)(*(long *)pOVar3 + 0x140) == JavaClass::~JavaClass) {
          *(undefined ***)pOVar3 = &PTR__initialize_classv_0010ab10;
          Object::~Object(pOVar3);
        }
        else {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        }
        Memory::free_static(pOVar3,false);
      }
    }
  }
LAB_00109eb6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<Ref<JavaClass>, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTR<Ref<JavaClass>,String_const&>::validated_call
          (MethodBindTR<Ref<JavaClass>,String_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  Object *pOVar2;
  char *pcVar3;
  char cVar4;
  code *pcVar5;
  long *plVar6;
  long in_FS_OFFSET;
  long local_58;
  Object *local_50;
  char *local_48;
  Object *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar6 = *(long **)(param_1 + 0x118);
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar6 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar3 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_48 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      pOVar2 = local_50;
      if (local_50 != (Object *)0x0) {
        LOCK();
        pOVar1 = local_50 + -0x10;
        *(long *)pOVar1 = *(long *)pOVar1 + -1;
        UNLOCK();
        if (*(long *)pOVar1 == 0) {
          local_50 = (Object *)0x0;
          Memory::free_static(pOVar2 + -0x10,false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010a15d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(this + 0x58);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar5)(&local_50,param_1 + *(long *)(this + 0x60),*param_2 + 8);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(char **)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar4 = RefCounted::unreference();
    pOVar2 = local_50;
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_50);
      if (cVar4 != '\0') {
        if (*(code **)(*(long *)pOVar2 + 0x140) == JavaClass::~JavaClass) {
          *(undefined ***)pOVar2 = &PTR__initialize_classv_0010ab10;
          Object::~Object(pOVar2);
        }
        else {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        }
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010a15d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  long *plVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar8 = *param_2;
  if (iVar8 != param_1) goto LAB_0010a3d5;
  local_78 = 0;
  local_68 = &_LC0;
  local_80 = 0;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = local_60._8_8_;
  local_60 = auVar3 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010a4c8:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010a4c8;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  lVar2 = local_80;
  if (local_80 != 0) {
    LOCK();
    plVar1 = (long *)(local_80 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  lVar2 = *(long *)(param_3 + 8);
  if (lVar2 != local_60._0_8_) {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 8);
        *(undefined8 *)(param_3 + 8) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(undefined8 *)(param_3 + 8) = local_60._0_8_;
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_60._8_8_;
    local_60 = auVar5 << 0x40;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar6 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar6;
  }
  lVar7 = local_48;
  *(int *)(param_3 + 0x18) = local_50;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 == local_48) {
    *(undefined4 *)(param_3 + 0x28) = local_40;
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar7 + -0x10),false);
      }
    }
  }
  else {
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_3 + 0x20);
        *(undefined8 *)(param_3 + 0x20) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *(long *)(param_3 + 0x20) = local_48;
    *(undefined4 *)(param_3 + 0x28) = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar6 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar6 + -0x10),false);
    }
  }
  iVar8 = *param_2;
LAB_0010a3d5:
  *param_2 = iVar8 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindTR<Ref<JavaClass>, String const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<Ref<JavaClass>,String_const&>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_78;
  ulong local_70;
  char *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (char *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<String_const&>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    *puVar3 = local_68._0_4_;
    *(undefined8 *)(puVar3 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_60._8_8_;
    puVar3[6] = (undefined4)local_50;
    *(undefined8 *)(puVar3 + 8) = local_48;
    puVar3[10] = local_40;
    goto LAB_0010a735;
  }
  local_70 = 0;
  local_68 = "JavaClass";
  local_78 = 0;
  local_60._8_8_ = local_60._0_8_;
  local_60._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_78);
  *puVar3 = 0x18;
  puVar3[6] = 0x11;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar3[10] = 6;
LAB_0010a847:
    StringName::StringName((StringName *)&local_68,(String *)(puVar3 + 8),false);
    if (*(char **)(puVar3 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar3 + 4) = local_68;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_78);
    puVar3[10] = 6;
    if (puVar3[6] == 0x11) goto LAB_0010a847;
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_70);
  }
  lVar2 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010a735:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* JavaClassWrapper::~JavaClassWrapper() */

void __thiscall JavaClassWrapper::~JavaClassWrapper(JavaClassWrapper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<JavaObject>>::~MethodBindTR() */

void __thiscall MethodBindTR<Ref<JavaObject>>::~MethodBindTR(MethodBindTR<Ref<JavaObject>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<Ref<JavaClass>, String const&>::~MethodBindTR() */

void __thiscall
MethodBindTR<Ref<JavaClass>,String_const&>::~MethodBindTR
          (MethodBindTR<Ref<JavaClass>,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<JavaClass>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Ref<JavaClass>>::~MethodBindTRC(MethodBindTRC<Ref<JavaClass>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<TypedArray<Dictionary>>::~MethodBindTRC(MethodBindTRC<TypedArray<Dictionary>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JavaObject::~JavaObject() */

void __thiscall JavaObject::~JavaObject(JavaObject *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JNISingleton::~JNISingleton() */

void __thiscall JNISingleton::~JNISingleton(JNISingleton *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


