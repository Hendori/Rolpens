
/* CowData<RID>::_ref(CowData<RID> const&) [clone .part.0] */

void __thiscall CowData<RID>::_ref(CowData<RID> *this,CowData *param_1)

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



/* UniformSetCacheRD::_bind_methods() */

void UniformSetCacheRD::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *this;
  long *plVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_a0;
  long local_98 [2];
  long *local_88;
  char *local_78;
  undefined *puStack_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 auStack_50 [32];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "uniforms";
  local_58 = &local_78;
  local_78 = "shader";
  puStack_70 = &_LC13;
  auStack_50._8_8_ = &local_68;
  auStack_50._0_8_ = &puStack_70;
  D_METHODP((char *)local_98,(char ***)"get_cache",(uint)&local_58);
  StringName::StringName((StringName *)&local_a0,"UniformSetCacheRD",false);
  auStack_50._0_16_ = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  this = (MethodBind *)operator_new(0x60,"");
  MethodBind::MethodBind(this);
  *(undefined ***)this = &PTR__gen_argument_type_001032c0;
  *(code **)(this + 0x58) = get_cache_array;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 3;
  MethodBind::_set_static(SUB81(this,0));
  MethodBind::_set_returns(SUB81(this,0));
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_a0);
  ClassDB::bind_methodfi(1,this,false,(MethodDefinition *)local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar4 = local_88 + -2;
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      local_88 = (long *)0x0;
      if (lVar1 != 0) {
        lVar5 = 0;
        plVar4 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar1 != lVar5);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98[0] != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UniformSetCacheRD::_invalidate(UniformSetCacheRD::Cache*) */

void __thiscall UniformSetCacheRD::_invalidate(UniformSetCacheRD *this,Cache *param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  if (*(long *)param_1 == 0) {
    *(undefined8 *)(this + (ulong)(*(uint *)(param_1 + 0x10) % 0x3ffd) * 8 + 0x1e0) =
         *(undefined8 *)(param_1 + 8);
  }
  else {
    *(undefined8 *)(*(long *)param_1 + 8) = *(undefined8 *)(param_1 + 8);
  }
  if (*(undefined8 **)(param_1 + 8) != (undefined8 *)0x0) {
    **(undefined8 **)(param_1 + 8) = *(undefined8 *)param_1;
  }
  pvVar5 = *(void **)(param_1 + 0x38);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0x30) != 0) {
      lVar4 = 0;
      do {
        lVar3 = *(long *)((long)pvVar5 + lVar4 * 0x28 + 0x20);
        if (lVar3 != 0) {
          LOCK();
          plVar1 = (long *)(lVar3 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            lVar3 = *(long *)((long)pvVar5 + lVar4 * 0x28 + 0x20);
            *(undefined8 *)((long)pvVar5 + lVar4 * 0x28 + 0x20) = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
          pvVar5 = *(void **)(param_1 + 0x38);
        }
        lVar4 = lVar4 + 1;
      } while ((uint)lVar4 < *(uint *)(param_1 + 0x30));
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (pvVar5 == (void *)0x0) goto LAB_001003ca;
    }
    Memory::free_static(pvVar5,false);
  }
LAB_001003ca:
  uVar2 = *(uint *)(this + 0x18c);
  *(Cache **)
   (*(long *)(*(long *)(this + 0x180) +
             (ulong)(uVar2 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)) * 8) +
   (ulong)(uVar2 & *(uint *)(this + 0x194)) * 8) = param_1;
  *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + -1;
  *(uint *)(this + 0x18c) = uVar2 + 1;
  return;
}



/* UniformSetCacheRD::_uniform_set_invalidation_callback(void*) */

void UniformSetCacheRD::_uniform_set_invalidation_callback(void *param_1)

{
  _invalidate(singleton,(Cache *)param_1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* UniformSetCacheRD::UniformSetCacheRD() */

void __thiscall UniformSetCacheRD::UniformSetCacheRD(UniformSetCacheRD *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  
  Object::Object((Object *)this);
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  uVar2 = _UNK_001033b8;
  uVar1 = __LC17;
  *(undefined ***)this = &PTR__initialize_classv_00103160;
  this[0x19c] = (UniformSetCacheRD)0x0;
  *(undefined4 *)(this + 0x198) = 0x1000;
  *(undefined8 *)(this + 0x188) = uVar1;
  *(undefined8 *)(this + 400) = uVar2;
  memset(this + 0x1e0,0,0x1ffe8);
  bVar3 = singleton == (UniformSetCacheRD *)0x0;
  *(undefined4 *)(this + 0x201c8) = 0;
  if (bVar3) {
    singleton = this;
    return;
  }
  _err_print_error("UniformSetCacheRD","servers/rendering/renderer_rd/uniform_set_cache_rd.cpp",0x4a
                   ,"Condition \"singleton != nullptr\" is true.",0,0);
  return;
}



/* UniformSetCacheRD::~UniformSetCacheRD() */

void __thiscall UniformSetCacheRD::~UniformSetCacheRD(UniformSetCacheRD *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  String local_60 [8];
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined ***)this = &PTR__initialize_classv_00103160;
  if (*(int *)(this + 0x201c8) != 0) {
    local_50 = 0;
    local_40 = 0x2c;
    local_48 = " uniform set cache instance(s) still in use.";
    String::parse_latin1((StrRange *)&local_50);
    itos((long)&local_48);
    operator+((char *)&local_58,(String *)"At exit: ");
    String::operator+(local_60,(String *)&local_58);
    _err_print_error("~UniformSetCacheRD","servers/rendering/renderer_rd/uniform_set_cache_rd.cpp",
                     0x50,local_60,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (*(uint *)(this + 0x18c) < (uint)(*(int *)(this + 0x198) * *(int *)(this + 0x188))) {
    if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
      local_50 = 0;
      local_48 = "N17UniformSetCacheRD5CacheE";
      local_40 = 0x1b;
      String::parse_latin1((StrRange *)&local_50);
      local_48 = "Pages in use exist at exit in PagedAllocator: ";
      local_58 = 0;
      local_40 = 0x2e;
      String::parse_latin1((StrRange *)&local_58);
      String::operator+((String *)&local_48,(String *)&local_58);
      _err_print_error("~PagedAllocator","./core/templates/paged_allocator.h",0xaa,
                       (String *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
  }
  else if (*(int *)(this + 0x188) != 0) {
    lVar2 = 0;
    do {
      Memory::free_static(*(void **)(*(long *)(this + 0x178) + lVar2 * 8),false);
      lVar1 = lVar2 * 8;
      lVar2 = lVar2 + 1;
      Memory::free_static(*(void **)(*(long *)(this + 0x180) + lVar1),false);
    } while ((uint)lVar2 < *(uint *)(this + 0x188));
    Memory::free_static(*(void **)(this + 0x178),false);
    Memory::free_static(*(void **)(this + 0x180),false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Object::~Object((Object *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UniformSetCacheRD::~UniformSetCacheRD() */

void __thiscall UniformSetCacheRD::~UniformSetCacheRD(UniformSetCacheRD *this)

{
  ~UniformSetCacheRD(this);
  operator_delete(this,0x201d0);
  return;
}



/* UniformSetCacheRD::get_cache_array(RID, unsigned int, TypedArray<RDUniform> const&) */

void UniformSetCacheRD::get_cache_array(undefined8 param_1,undefined4 param_2,int param_3)

{
  long *plVar1;
  undefined8 *puVar2;
  Object OVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  char cVar8;
  int iVar9;
  Object *pOVar10;
  ulong uVar11;
  void *pvVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  long lVar16;
  uint *in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 10);
  if ((char)*in_FS_OFFSET == '\0') {
    uVar5 = *(undefined8 *)in_FS_OFFSET;
    in_FS_OFFSET[0] = 0;
    in_FS_OFFSET[1] = 0;
    in_FS_OFFSET[0] = 0;
    in_FS_OFFSET[1] = 0;
    *(undefined1 *)in_FS_OFFSET = 1;
    __cxa_thread_atexit(LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>::~LocalVector
                        ,uVar5,&__dso_handle);
  }
  if (*in_FS_OFFSET != 0) {
    lVar16 = 0;
    uVar14 = 0;
    do {
      lVar13 = *(long *)(in_FS_OFFSET + 2) + lVar16;
      if (*(long *)(lVar13 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar13 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)(lVar13 + 0x20);
          *(undefined8 *)(lVar13 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      uVar14 = uVar14 + 1;
      lVar16 = lVar16 + 0x28;
    } while (uVar14 < *in_FS_OFFSET);
    *in_FS_OFFSET = 0;
  }
  iVar15 = 0;
  do {
    iVar9 = Array::size();
    if (iVar9 <= iVar15) {
      if (local_40 == *(long *)(in_FS_OFFSET + 10)) {
        get_cache_vec<>(singleton,param_1,param_2,*(undefined8 *)in_FS_OFFSET);
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Array::operator[](param_3);
    lVar16 = Variant::get_validated_object();
    if (lVar16 != 0) {
      pOVar10 = (Object *)__dynamic_cast(lVar16,&Object::typeinfo,&RDUniform::typeinfo,0);
      if (pOVar10 != (Object *)0x0) {
        cVar8 = RefCounted::reference();
        if (cVar8 != '\0') {
          uVar5 = *(undefined8 *)(pOVar10 + 0x180);
          local_48 = 0;
          OVar3 = pOVar10[0x188];
          uVar6 = *(undefined8 *)(pOVar10 + 400);
          if (*(long *)(pOVar10 + 0x1a0) != 0) {
            CowData<RID>::_ref((CowData<RID> *)&local_48,(CowData *)(pOVar10 + 0x1a0));
          }
          uVar14 = *in_FS_OFFSET;
          pvVar12 = *(void **)in_FS_OFFSET;
          if (uVar14 == *in_FS_OFFSET) {
            uVar11 = (ulong)(uVar14 * 2);
            if (uVar14 * 2 == 0) {
              uVar11 = 1;
            }
            *in_FS_OFFSET = (uint)uVar11;
            pvVar12 = (void *)Memory::realloc_static(pvVar12,uVar11 * 0x28,false);
            *(void **)in_FS_OFFSET = pvVar12;
            if (pvVar12 == (void *)0x0) {
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar7 = (code *)invalidInstructionException();
              (*pcVar7)();
            }
            uVar14 = *in_FS_OFFSET;
          }
          lVar16 = local_48;
          *in_FS_OFFSET = uVar14 + 1;
          puVar2 = (undefined8 *)((long)pvVar12 + (ulong)uVar14 * 0x28);
          puVar2[4] = 0;
          *puVar2 = uVar5;
          *(Object *)(puVar2 + 1) = OVar3;
          puVar2[2] = uVar6;
          if (local_48 != 0) {
            CowData<RID>::_ref((CowData<RID> *)(puVar2 + 4),(CowData *)&local_48);
            LOCK();
            plVar1 = (long *)(lVar16 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              Memory::free_static((void *)(local_48 + -0x10),false);
            }
          }
          cVar8 = RefCounted::unreference();
          if (cVar8 != '\0') {
            cVar8 = predelete_handler(pOVar10);
            if (cVar8 != '\0') {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
        }
      }
    }
    iVar15 = iVar15 + 1;
  } while( true );
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



/* UniformSetCacheRD::is_class_ptr(void*) const */

uint __thiscall UniformSetCacheRD::is_class_ptr(UniformSetCacheRD *this,void *param_1)

{
  return (uint)CONCAT71(0x1033,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1033,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* UniformSetCacheRD::_getv(StringName const&, Variant&) const */

undefined8 UniformSetCacheRD::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* UniformSetCacheRD::_setv(StringName const&, Variant const&) */

undefined8 UniformSetCacheRD::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* UniformSetCacheRD::_validate_propertyv(PropertyInfo&) const */

void UniformSetCacheRD::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* UniformSetCacheRD::_property_can_revertv(StringName const&) const */

undefined8 UniformSetCacheRD::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* UniformSetCacheRD::_property_get_revertv(StringName const&, Variant&) const */

undefined8 UniformSetCacheRD::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* UniformSetCacheRD::_notificationv(int, bool) */

void UniformSetCacheRD::_notificationv(int param_1,bool param_2)

{
  return;
}



/* LocalVector<RenderingDevice::Uniform, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>::~LocalVector
          (LocalVector<RenderingDevice::Uniform,unsigned_int,false,false> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(this + 8);
  if (pvVar4 == (void *)0x0) {
    return;
  }
  if (*(int *)this != 0) {
    lVar3 = 0;
    do {
      lVar2 = *(long *)((long)pvVar4 + lVar3 * 0x28 + 0x20);
      if (lVar2 != 0) {
        LOCK();
        plVar1 = (long *)(lVar2 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar2 = *(long *)((long)pvVar4 + lVar3 * 0x28 + 0x20);
          *(undefined8 *)((long)pvVar4 + lVar3 * 0x28 + 0x20) = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
        pvVar4 = *(void **)(this + 8);
      }
      lVar3 = lVar3 + 1;
    } while ((uint)lVar3 < *(uint *)this);
    *(undefined4 *)this = 0;
    if (pvVar4 == (void *)0x0) {
      return;
    }
  }
  Memory::free_static(pvVar4,false);
  return;
}



/* MethodBindTRS<RID, RID, unsigned int, TypedArray<RDUniform> const&>::_gen_argument_type(int)
   const */

undefined8 __thiscall
MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&>::_gen_argument_type
          (MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x17;
  if ((param_1 - 1U < 2) && (uVar1 = 0x1c, param_1 == 1)) {
    uVar1 = 2;
  }
  return uVar1;
}



/* MethodBindTRS<RID, RID, unsigned int, TypedArray<RDUniform> const&>::get_argument_meta(int) const
    */

undefined8 __thiscall
MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&>::get_argument_meta
          (MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&> *this,int param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_1 == 1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* MethodBindTRS<RID, RID, unsigned int, TypedArray<RDUniform> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&>::~MethodBindTRS
          (MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001032c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRS<RID, RID, unsigned int, TypedArray<RDUniform> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&>::~MethodBindTRS
          (MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001032c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x60);
  return;
}



/* UniformSetCacheRD::_get_class_namev() const */

undefined8 * UniformSetCacheRD::_get_class_namev(void)

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
LAB_00100d63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00100d63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"UniformSetCacheRD");
      goto LAB_00100dce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"UniformSetCacheRD");
LAB_00100dce:
  return &_get_class_namev()::_class_name_static;
}



/* UniformSetCacheRD::get_class() const */

void UniformSetCacheRD::get_class(void)

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



/* MethodBindTRS<RID, RID, unsigned int, TypedArray<RDUniform> const&>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&>::ptrcall
          (MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&> *this,Object *param_1,
          void **param_2,void *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  Array local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  pcVar2 = *(code **)(this + 0x58);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_78);
  local_68 = "RDUniform";
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_70 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)local_78,(StringName *)0x18,(Variant *)&local_68);
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
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar4 = Array::is_same_typed(local_78);
  if (cVar4 == '\0') {
    Array::assign(local_78);
  }
  else {
    Array::_ref(local_78);
  }
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Load size is inaccurate */
  uVar5 = (*pcVar2)(**param_2,*param_2[1],local_78);
  *(undefined8 *)param_3 = uVar5;
  Array::~Array(local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<RID, RID, unsigned int, TypedArray<RDUniform> const&>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&>::validated_call
          (MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  Array local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  pcVar2 = *(code **)(this + 0x58);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Array::Array(local_78);
  local_68 = "RDUniform";
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_70 = 0;
  local_60 = 9;
  String::parse_latin1((StrRange *)&local_70);
  StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
  Array::set_typed((uint)local_78,(StringName *)0x18,(Variant *)&local_68);
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
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar4 = Array::is_same_typed(local_78);
  if (cVar4 == '\0') {
    Array::assign(local_78);
  }
  else {
    Array::_ref(local_78);
  }
  uVar5 = (*pcVar2)(*(undefined8 *)(*param_2 + 8),*(undefined4 *)(param_2[1] + 8),local_78);
  *(undefined8 *)(param_3 + 8) = uVar5;
  Array::~Array(local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UniformSetCacheRD::is_class(String const&) const */

undefined8 __thiscall UniformSetCacheRD::is_class(UniformSetCacheRD *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010129f;
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
LAB_0010129f:
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
    if (cVar6 != '\0') goto LAB_00101353;
  }
  cVar6 = String::operator==(param_1,"UniformSetCacheRD");
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
              if (lVar5 == 0) goto LAB_00101403;
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
LAB_00101403:
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
      if (cVar6 != '\0') goto LAB_00101353;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00101353:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<RID, RID, unsigned int, TypedArray<RDUniform> const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  Variant *pVVar2;
  Variant *pVVar3;
  code *pcVar4;
  char cVar5;
  uint uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  int iVar10;
  Variant *pVVar11;
  uint in_R8D;
  undefined4 *in_R9;
  long lVar12;
  long in_FS_OFFSET;
  Array local_a0 [8];
  long local_98;
  Variant local_90 [8];
  char *local_88;
  undefined8 local_80;
  Variant *local_78 [4];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  pVVar2 = param_2[0xb];
  *(undefined4 *)param_1 = 0;
  if (in_R8D < 4) {
    pVVar3 = param_2[5];
    if (pVVar3 == (Variant *)0x0) {
      iVar10 = 0;
      lVar12 = 0;
    }
    else {
      lVar12 = *(long *)(pVVar3 + -8);
      iVar10 = (int)lVar12;
    }
    if ((int)(3 - in_R8D) <= iVar10) {
      lVar8 = 0;
      do {
        if ((int)lVar8 < (int)in_R8D) {
          pVVar11 = *(Variant **)(param_4 + lVar8 * 8);
        }
        else {
          uVar6 = iVar10 + -3 + (int)lVar8;
          if (lVar12 <= (int)uVar6) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,(long)(int)uVar6,lVar12,"p_index",
                       "size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          pVVar11 = pVVar3 + (ulong)uVar6 * 0x18;
        }
        local_78[lVar8] = pVVar11;
        lVar8 = lVar8 + 1;
      } while (lVar8 != 3);
      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[2],0x1c);
      uVar9 = _LC8;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar9;
      }
      Variant::operator_cast_to_Array(local_90);
      Array::Array(local_a0);
      local_88 = "RDUniform";
      local_50 = (undefined1  [16])0x0;
      local_58[0] = 0;
      local_58[1] = 0;
      local_98 = 0;
      local_80 = 9;
      String::parse_latin1((StrRange *)&local_98);
      StringName::StringName((StringName *)&local_88,(String *)&local_98,false);
      Array::set_typed((uint)local_a0,(StringName *)0x18,(Variant *)&local_88);
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      lVar12 = local_98;
      if (local_98 != 0) {
        LOCK();
        plVar1 = (long *)(local_98 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_98 = 0;
          Memory::free_static((void *)(lVar12 + -0x10),false);
        }
      }
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar5 = Array::is_same_typed(local_a0);
      if (cVar5 == '\0') {
        Array::assign(local_a0);
      }
      else {
        Array::_ref(local_a0);
      }
      Array::~Array((Array *)local_90);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[1],2);
      uVar9 = _LC9;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar9;
      }
      uVar6 = Variant::operator_cast_to_unsigned_int(local_78[1]);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)local_78[0],0x17);
      uVar9 = _LC10;
      if (cVar5 == '\0') {
        *in_R9 = 2;
        *(undefined8 *)(in_R9 + 1) = uVar9;
      }
      uVar9 = Variant::operator_cast_to_RID(local_78[0]);
      local_88 = (char *)(*(code *)pVVar2)(uVar9,uVar6,local_a0);
      Variant::Variant((Variant *)local_58,(StringName *)&local_88);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_1 = local_58[0];
      *(undefined8 *)(param_1 + 8) = local_50._0_8_;
      *(undefined8 *)(param_1 + 0x10) = local_50._8_8_;
      Array::~Array(local_a0);
      goto LAB_00101757;
    }
    uVar7 = 4;
  }
  else {
    uVar7 = 3;
  }
  *in_R9 = uVar7;
  in_R9[2] = 3;
LAB_00101757:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* UniformSetCacheRD::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void UniformSetCacheRD::_get_property_listv(List *param_1,bool param_2)

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
  local_78 = "UniformSetCacheRD";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "UniformSetCacheRD";
  local_98 = 0;
  local_70 = 0x11;
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
LAB_001019f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001019f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00101a16;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00101a16:
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
  StringName::StringName((StringName *)&local_78,"UniformSetCacheRD",false);
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



/* UniformSetCacheRD::_bind_methods() [clone .cold] */

void UniformSetCacheRD::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* UniformSetCacheRD::_initialize_classv() */

void UniformSetCacheRD::_initialize_classv(void)

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
    local_38 = "UniformSetCacheRD";
    local_50 = 0;
    local_30 = 0x11;
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
        goto LAB_00101d05;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_00101d05:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_unref() */

void __thiscall CowData<char32_t>::_unref(CowData<char32_t> *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  lVar2 = *(long *)this;
  *(undefined8 *)this = 0;
  Memory::free_static((void *)(lVar2 + -0x10),false);
  return;
}



/* RID UniformSetCacheRD::_allocate_from_uniforms<LocalVector<RenderingDevice::Uniform, unsigned
   int, false, false> >(RID, unsigned int, unsigned int, unsigned int,
   LocalVector<RenderingDevice::Uniform, unsigned int, false, false> const&) */

long __thiscall
UniformSetCacheRD::
_allocate_from_uniforms<LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>>
          (UniformSetCacheRD *this,undefined8 param_2,undefined4 param_3,undefined4 param_4,
          uint param_5,uint *param_6)

{
  uint uVar1;
  undefined1 (*pauVar2) [16];
  long lVar3;
  long lVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long *plVar14;
  undefined8 *puVar15;
  
  uVar9 = RenderingDevice::get_singleton();
  lVar10 = RenderingDevice::
           uniform_set_create<LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>>
                     (uVar9,param_6,param_2,param_3,0);
  if (lVar10 == 0) {
    _err_print_error("_allocate_from_uniforms",
                     "servers/rendering/renderer_rd/uniform_set_cache_rd.h",0x83,
                     "Condition \"rid.is_null()\" is true. Returning: rid",0,0);
  }
  else {
    iVar8 = *(int *)(this + 0x18c);
    if (iVar8 == 0) {
      uVar1 = *(uint *)(this + 0x188);
      uVar6 = uVar1 + 1;
      *(uint *)(this + 0x188) = uVar6;
      uVar9 = Memory::realloc_static(*(void **)(this + 0x178),(ulong)uVar6 * 8,false);
      *(undefined8 *)(this + 0x178) = uVar9;
      uVar9 = Memory::realloc_static
                        (*(void **)(this + 0x180),(ulong)*(uint *)(this + 0x188) << 3,false);
      lVar3 = *(long *)(this + 0x178);
      *(undefined8 *)(this + 0x180) = uVar9;
      lVar11 = (ulong)uVar1 * 8;
      uVar9 = Memory::alloc_static((ulong)*(uint *)(this + 0x198) << 6,false);
      uVar6 = *(uint *)(this + 0x198);
      *(undefined8 *)(lVar3 + lVar11) = uVar9;
      lVar3 = *(long *)(this + 0x180);
      uVar9 = Memory::alloc_static((ulong)uVar6 << 3,false);
      *(undefined8 *)(lVar3 + lVar11) = uVar9;
      uVar6 = *(uint *)(this + 0x198);
      if (uVar6 == 0) {
        plVar14 = *(long **)(this + 0x180);
      }
      else {
        plVar14 = *(long **)(this + 0x180);
        lVar3 = *(long *)(this + 0x178);
        uVar12 = 0;
        lVar4 = *plVar14;
        do {
          *(ulong *)(lVar4 + uVar12 * 8) = uVar12 * 0x40 + *(long *)(lVar3 + lVar11);
          uVar12 = uVar12 + 1;
        } while (uVar6 != uVar12);
      }
      iVar8 = uVar6 + *(int *)(this + 0x18c);
    }
    else {
      plVar14 = *(long **)(this + 0x180);
    }
    uVar6 = iVar8 - 1;
    *(uint *)(this + 0x18c) = uVar6;
    pauVar2 = *(undefined1 (**) [16])
               (plVar14[uVar6 >> ((byte)*(undefined4 *)(this + 400) & 0x1f)] +
               (ulong)(uVar6 & *(uint *)(this + 0x194)) * 8);
    pauVar2[1] = (undefined1  [16])0x0;
    pauVar2[2] = (undefined1  [16])0x0;
    *(undefined8 *)(pauVar2[1] + 8) = param_2;
    *pauVar2 = (undefined1  [16])0x0;
    pauVar2[3] = (undefined1  [16])0x0;
    uVar6 = *param_6;
    *(undefined4 *)pauVar2[1] = param_4;
    *(undefined4 *)pauVar2[2] = param_3;
    *(long *)(pauVar2[2] + 8) = lVar10;
    if (uVar6 != 0) {
      uVar1 = uVar6 - 1;
      uVar7 = uVar1 >> 1 | uVar1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = (uVar7 | uVar7 >> 0x10) + 1;
      *(uint *)(pauVar2[3] + 4) = uVar7;
      lVar11 = Memory::realloc_static((void *)0x0,(ulong)uVar7 * 0x28,false);
      *(long *)(pauVar2[3] + 8) = lVar11;
      uVar9 = _LC34;
      if (lVar11 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      uVar7 = *(uint *)pauVar2[3];
      if (uVar7 < uVar6) {
        puVar13 = (undefined8 *)(lVar11 + (ulong)uVar7 * 0x28);
        do {
          *puVar13 = uVar9;
          puVar15 = puVar13 + 5;
          *(undefined1 *)(puVar13 + 1) = 0;
          puVar13[2] = 0;
          puVar13[4] = 0;
          puVar13 = puVar15;
        } while ((undefined8 *)(lVar11 + ((ulong)uVar7 + 1 + (ulong)(uVar1 - uVar7)) * 0x28) !=
                 puVar15);
      }
      *(uint *)pauVar2[3] = uVar6;
      lVar11 = 0;
      uVar6 = 0;
      do {
        if (*param_6 <= uVar6) {
          _err_print_index_error
                    ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar6,
                     (ulong)*param_6,"p_index","count","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar5 = (code *)invalidInstructionException();
          (*pcVar5)();
        }
        puVar13 = (undefined8 *)(*(long *)(param_6 + 2) + lVar11);
        puVar15 = (undefined8 *)(*(long *)(pauVar2[3] + 8) + lVar11);
        *puVar15 = *puVar13;
        *(undefined1 *)(puVar15 + 1) = *(undefined1 *)(puVar13 + 1);
        puVar15[2] = puVar13[2];
        if (puVar15[4] != puVar13[4]) {
          CowData<RID>::_ref((CowData<RID> *)(puVar15 + 4),(CowData *)(puVar13 + 4));
        }
        uVar6 = uVar6 + 1;
        lVar11 = lVar11 + 0x28;
      } while (uVar6 < *(uint *)pauVar2[3]);
    }
    *(undefined8 *)*pauVar2 = 0;
    puVar13 = *(undefined8 **)(this + (ulong)param_5 * 8 + 0x1e0);
    *(undefined8 **)(*pauVar2 + 8) = puVar13;
    if (puVar13 != (undefined8 *)0x0) {
      *puVar13 = pauVar2;
    }
    *(undefined1 (**) [16])(this + (ulong)param_5 * 8 + 0x1e0) = pauVar2;
    uVar9 = RenderingDevice::get_singleton();
    RenderingDevice::uniform_set_set_invalidation_callback
              (uVar9,lVar10,_uniform_set_invalidation_callback,pauVar2);
    *(int *)(this + 0x201c8) = *(int *)(this + 0x201c8) + 1;
  }
  return lVar10;
}



/* RID UniformSetCacheRD::get_cache_vec<>(RID, unsigned int, LocalVector<RenderingDevice::Uniform,
   unsigned int, false, false> const&) */

undefined8 __thiscall
UniformSetCacheRD::get_cache_vec<>(UniformSetCacheRD *this,long param_2,int param_3,uint *param_4)

{
  long lVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  int *piVar11;
  int *piVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  iVar7 = (int)((ulong)param_2 >> 0x20);
  uVar3 = ((int)param_2 * 0x16a88000 | (uint)((int)param_2 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          0x7f07c65;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64 ^
          (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593;
  uVar3 = (param_3 * 0x16a88000 | (uint)(param_3 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64;
  uVar13 = (ulong)uVar3;
  if (*param_4 != 0) {
    lVar10 = 0;
    uVar13 = (ulong)uVar3;
    do {
      piVar11 = (int *)(*(long *)(param_4 + 2) + lVar10 * 0x28);
      uVar3 = (*piVar11 * 0x16a88000 | (uint)(*piVar11 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
              (uint)uVar13;
      uVar3 = (uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64 ^
              (piVar11[1] * 0x16a88000 | (uint)(piVar11[1] * -0x3361d2af) >> 0x11) * 0x1b873593;
      lVar15 = *(long *)(piVar11 + 4);
      uVar13 = (ulong)((uVar3 << 0xd | uVar3 >> 0x13) * 5 + 0xe6546b64);
      if (lVar15 != 0) {
        uVar3 = 1;
LAB_001025f2:
        uVar14 = 0;
        do {
          uVar9 = (uint)uVar13;
          if (lVar15 == 0) {
            lVar15 = *(long *)(piVar11 + 8);
            if (lVar15 == 0) {
              lVar6 = 0;
LAB_00102851:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,uVar14,lVar6,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar6 = *(long *)(lVar15 + -8);
            if (lVar6 <= (long)uVar14) goto LAB_00102851;
            lVar15 = *(long *)(lVar15 + uVar14 * 8);
LAB_00102609:
            iVar7 = (int)((ulong)lVar15 >> 0x20);
            uVar8 = (iVar7 * 0x16a88000 | (uint)(iVar7 * -0x3361d2af) >> 0x11) * 0x1b873593;
            uVar9 = uVar9 ^ ((int)lVar15 * 0x16a88000 | (uint)((int)lVar15 * -0x3361d2af) >> 0x11) *
                            0x1b873593;
          }
          else {
            if (uVar14 == 0) goto LAB_00102609;
            _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                             "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
            uVar8 = 0;
          }
          uVar14 = uVar14 + 1;
          uVar8 = uVar8 ^ (uVar9 << 0xd | uVar9 >> 0x13) * 5 + 0xe6546b64;
          uVar13 = (ulong)((uVar8 << 0xd | uVar8 >> 0x13) * 5 + 0xe6546b64);
          if (uVar3 == uVar14) goto LAB_00102678;
          lVar15 = *(long *)(piVar11 + 4);
        } while( true );
      }
      if ((*(long *)(piVar11 + 8) != 0) &&
         (uVar3 = (uint)*(undefined8 *)(*(long *)(piVar11 + 8) + -8), uVar3 != 0))
      goto LAB_001025f2;
LAB_00102678:
      lVar10 = lVar10 + 1;
      uVar3 = ((uint)(uVar13 >> 0x10) ^ (uint)uVar13) * -0x7a143595;
      uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
      uVar13 = (ulong)(uVar3 >> 0x10 ^ uVar3);
    } while ((uint)lVar10 < *param_4);
  }
  uVar3 = ((uint)uVar13 ^ (uint)(uVar13 >> 0x10)) * -0x7a143595;
  uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
  uVar3 = uVar3 ^ uVar3 >> 0x10;
  lVar10 = *(long *)(this + (ulong)(uVar3 % 0x3ffd) * 8 + 0x1e0);
  while( true ) {
    if (lVar10 == 0) {
      uVar4 = _allocate_from_uniforms<LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>>
                        (this,param_2,param_3,uVar3,uVar3 % 0x3ffd,param_4);
      return uVar4;
    }
    if ((((*(uint *)(lVar10 + 0x10) == uVar3) && (*(int *)(lVar10 + 0x20) == param_3)) &&
        (param_2 == *(long *)(lVar10 + 0x18))) && (*(uint *)(lVar10 + 0x30) == *param_4)) break;
LAB_00102720:
    lVar10 = *(long *)(lVar10 + 8);
  }
  if (*param_4 == 0) {
LAB_00102abd:
    return *(undefined8 *)(lVar10 + 0x28);
  }
  lVar15 = 0;
  uVar9 = 0;
  do {
    piVar12 = (int *)(*(long *)(lVar10 + 0x38) + lVar15);
    piVar11 = (int *)(*(long *)(param_4 + 2) + lVar15);
    if ((piVar11[1] != piVar12[1]) || (*piVar11 != *piVar12)) goto LAB_00102720;
    lVar5 = *(long *)(piVar12 + 4);
    if (*(long *)(piVar11 + 4) != 0) {
      if (lVar5 == 0) {
        if ((*(long *)(piVar12 + 8) == 0) ||
           (uVar8 = (uint)*(undefined8 *)(*(long *)(piVar12 + 8) + -8), uVar8 != 1))
        goto LAB_00102720;
      }
      else {
        uVar8 = 1;
      }
LAB_0010289b:
      uVar13 = 0;
      do {
        uVar14 = uVar13;
        if (lVar5 == 0) {
          lVar5 = *(long *)(piVar12 + 8);
          if (lVar5 == 0) {
            lVar6 = 0;
            goto LAB_00102851;
          }
          lVar6 = *(long *)(lVar5 + -8);
          if (lVar6 <= (long)uVar13) goto LAB_00102851;
          lVar6 = *(long *)(piVar11 + 4);
          lVar5 = *(long *)(lVar5 + uVar13 * 8);
          if (lVar6 == 0) goto LAB_001028cd;
          if (uVar13 != 0) goto LAB_0010294e;
        }
        else if (uVar13 == 0) {
          lVar6 = *(long *)(piVar11 + 4);
          uVar14 = 0;
          if (lVar6 == 0) {
LAB_001028cd:
            lVar1 = *(long *)(piVar11 + 8);
            if (lVar1 == 0) {
              lVar6 = 0;
              goto LAB_00102851;
            }
            lVar6 = *(long *)(lVar1 + -8);
            if (lVar6 <= (long)uVar14) goto LAB_00102851;
            lVar6 = *(long *)(lVar1 + uVar13 * 8);
          }
        }
        else {
          _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                           "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
          if (*(long *)(piVar11 + 4) == 0) {
            lVar5 = 0;
            goto LAB_001028cd;
          }
          lVar5 = 0;
LAB_0010294e:
          _err_print_error("get_id","./servers/rendering/rendering_device.h",0x3ca,
                           "Condition \"p_idx != 0\" is true. Returning: RID()",0,0);
          lVar6 = 0;
        }
        if (lVar6 != lVar5) goto LAB_00102720;
        uVar13 = uVar13 + 1;
        if (uVar8 <= (uint)uVar13) goto LAB_001029b4;
        lVar5 = *(long *)(piVar12 + 4);
      } while( true );
    }
    if (*(long *)(piVar11 + 8) == 0) {
      if (lVar5 != 0) goto LAB_00102720;
      if (*(long *)(piVar12 + 8) != 0) {
        uVar8 = *(uint *)(*(long *)(piVar12 + 8) + -8);
joined_r0x00102aaf:
        if (uVar8 != 0) goto LAB_00102720;
      }
    }
    else {
      uVar8 = (uint)*(undefined8 *)(*(long *)(piVar11 + 8) + -8);
      if (lVar5 != 0) {
        if (uVar8 == 1) goto LAB_0010289b;
        goto LAB_00102720;
      }
      if (*(long *)(piVar12 + 8) == 0) goto joined_r0x00102aaf;
      if (*(uint *)(*(long *)(piVar12 + 8) + -8) != uVar8) goto LAB_00102720;
      if (uVar8 != 0) goto LAB_0010289b;
    }
LAB_001029b4:
    uVar9 = uVar9 + 1;
    lVar15 = lVar15 + 0x28;
    if (*param_4 <= uVar9) goto LAB_00102abd;
    if (*(uint *)(lVar10 + 0x30) <= uVar9) {
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xae,(ulong)uVar9,
                 (ulong)*(uint *)(lVar10 + 0x30),"p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
  } while( true );
}



/* void call_get_argument_type_info<RID, unsigned int, TypedArray<RDUniform> const&>(int,
   PropertyInfo&) */

void call_get_argument_type_info<RID,unsigned_int,TypedArray<RDUniform>const&>
               (int param_1,PropertyInfo *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    local_78 = 0;
    local_68 = "";
    local_80 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x17);
LAB_00102cc9:
    local_50 = 0;
    if (local_80 != 0) goto LAB_00102c1f;
LAB_00102cef:
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
LAB_00102cfc:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    if (param_1 == 1) {
      local_78 = 0;
      local_68 = "";
      local_80 = 0;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      String::parse_latin1((StrRange *)&local_80);
      local_68 = (char *)CONCAT44(local_68._4_4_,2);
      goto LAB_00102cc9;
    }
    if (param_1 != 2) goto LAB_00102b87;
    local_78 = 0;
    local_68 = "RDUniform";
    local_80 = 0;
    local_60._0_8_ = 9;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (char *)CONCAT44(local_68._4_4_,0x1c);
    local_50 = 0x1f;
    if (local_80 == 0) goto LAB_00102cef;
LAB_00102c1f:
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00102cfc;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_2 = local_68._0_4_;
  if (*(long *)(param_2 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 8));
    uVar4 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_2 + 8) = uVar4;
  }
  if (*(long *)(param_2 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_2 + 0x10) = uVar4;
  }
  *(int *)(param_2 + 0x18) = local_50;
  if (*(long *)(param_2 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_2 + 0x20));
    lVar5 = local_48;
    local_48 = 0;
    *(long *)(param_2 + 0x20) = lVar5;
  }
  *(undefined4 *)(param_2 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00102b87:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRS<RID, RID, unsigned int, TypedArray<RDUniform> const&>::_gen_argument_type_info(int)
   const */

undefined4 *
MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&>::_gen_argument_type_info
          (int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 3) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info<RID,unsigned_int,TypedArray<RDUniform>const&>
              (in_EDX,(PropertyInfo *)&local_68);
    *puVar4 = local_68._0_4_;
    *(undefined8 *)(puVar4 + 2) = local_60._0_8_;
    *(undefined8 *)(puVar4 + 4) = local_60._8_8_;
    puVar4[6] = (undefined4)local_50;
    *(undefined8 *)(puVar4 + 8) = local_48;
    puVar4[10] = local_40;
    goto LAB_00102ef9;
  }
  local_70 = 0;
  local_68 = &_LC6;
  local_78 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  *puVar4 = 0x17;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar4[10] = 6;
LAB_00103007:
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_70);
    lVar3 = local_78;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_78);
    puVar4[10] = 6;
    if (puVar4[6] != 0x11) goto LAB_00103007;
    StringName::StringName((StringName *)&local_68,(String *)(puVar4 + 8),false);
    if (*(undefined **)(puVar4 + 4) == local_68) {
      lVar3 = local_78;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar3 = local_78;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar4 + 4) = local_68;
      lVar3 = local_78;
    }
  }
  local_78 = lVar3;
  if (lVar3 != 0) {
    LOCK();
    plVar1 = (long *)(lVar3 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00102ef9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRS<RID, RID, unsigned int, TypedArray<RDUniform> const&>::~MethodBindTRS() */

void __thiscall
MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&>::~MethodBindTRS
          (MethodBindTRS<RID,RID,unsigned_int,TypedArray<RDUniform>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* LocalVector<RenderingDevice::Uniform, unsigned int, false, false>::~LocalVector() */

void __thiscall
LocalVector<RenderingDevice::Uniform,unsigned_int,false,false>::~LocalVector
          (LocalVector<RenderingDevice::Uniform,unsigned_int,false,false> *this)

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


