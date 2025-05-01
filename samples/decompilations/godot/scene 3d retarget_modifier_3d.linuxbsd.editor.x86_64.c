
/* RetargetModifier3D::is_using_global_pose() const */

RetargetModifier3D __thiscall RetargetModifier3D::is_using_global_pose(RetargetModifier3D *this)

{
  return this[0x558];
}



/* RetargetModifier3D::get_enable_flags() const */

undefined8 __thiscall RetargetModifier3D::get_enable_flags(RetargetModifier3D *this)

{
  return *(undefined8 *)(this + 0x560);
}



/* RetargetModifier3D::is_position_enabled() const */

uint __thiscall RetargetModifier3D::is_position_enabled(RetargetModifier3D *this)

{
  return (uint)*(undefined8 *)(this + 0x560) & 1;
}



/* RetargetModifier3D::is_rotation_enabled() const */

uint __thiscall RetargetModifier3D::is_rotation_enabled(RetargetModifier3D *this)

{
  return (uint)(*(ulong *)(this + 0x560) >> 1) & 1;
}



/* RetargetModifier3D::is_scale_enabled() const */

uint __thiscall RetargetModifier3D::is_scale_enabled(RetargetModifier3D *this)

{
  return (uint)(*(ulong *)(this + 0x560) >> 2) & 1;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<int>::_copy_on_write(CowData<int> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 4;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RetargetModifier3D::get_profile() const */

void RetargetModifier3D::get_profile(void)

{
  char cVar1;
  long in_RSI;
  long *in_RDI;
  
  *in_RDI = 0;
  if (*(long *)(in_RSI + 0x550) != 0) {
    *in_RDI = *(long *)(in_RSI + 0x550);
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *in_RDI = 0;
    }
  }
  return;
}



/* CowData<RetargetModifier3D::RetargetBoneInfo>::_ref(CowData<RetargetModifier3D::RetargetBoneInfo>
   const&) [clone .part.0] */

void __thiscall
CowData<RetargetModifier3D::RetargetBoneInfo>::_ref
          (CowData<RetargetModifier3D::RetargetBoneInfo> *this,CowData *param_1)

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



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* RetargetModifier3D::_validate_property(PropertyInfo&) const */

void __thiscall
RetargetModifier3D::_validate_property(RetargetModifier3D *this,PropertyInfo *param_1)

{
  char cVar1;
  
  if (this[0x558] == (RetargetModifier3D)0x0) {
    return;
  }
  cVar1 = String::operator==((String *)(param_1 + 8),"enable_flags");
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}



/* RetargetModifier3D::RetargetModifier3D() */

void __thiscall RetargetModifier3D::RetargetModifier3D(RetargetModifier3D *this)

{
  SkeletonModifier3D::SkeletonModifier3D((SkeletonModifier3D *)this);
  *(undefined8 *)(this + 0x550) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010ef30;
  this[0x558] = (RetargetModifier3D)0x0;
  *(undefined8 *)(this + 0x560) = 7;
  *(undefined8 *)(this + 0x570) = 0;
  *(undefined8 *)(this + 0x580) = 0;
  return;
}



/* RetargetModifier3D::remove_child_notify(Node*) */

void __thiscall RetargetModifier3D::remove_child_notify(RetargetModifier3D *this,Node *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  RetargetModifier3D aRStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Node *)0x0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&Skeleton3D::typeinfo,0);
    if (lVar1 != 0) {
      create_custom_callable_function_pointer<RetargetModifier3D>
                (aRStack_48,(char *)this,
                 (_func_void *)"&RetargetModifier3D::_update_child_skeletons");
      Variant::Variant((Variant *)local_38,0);
      Callable::call_deferredp((Variant **)aRStack_48,0);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)aRStack_48);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RetargetModifier3D::_bind_methods() */

void RetargetModifier3D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  long in_FS_OFFSET;
  CowData<char32_t> *local_e0;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  char *local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  long *local_88;
  int local_80;
  undefined8 local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "profile";
  uVar5 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_profile",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,Ref<SkeletonProfile>>(set_profile);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_profile",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,Ref<SkeletonProfile>>(get_profile);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "use_global_pose";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_use_global_pose",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,bool>(set_use_global_pose);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"is_using_global_pose",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,bool>(is_using_global_pose);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = "enable_flags";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_enable_flags",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,BitField<RetargetModifier3D::TransformFlag>>
                     (set_enable_flags);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"get_enable_flags",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,BitField<RetargetModifier3D::TransformFlag>>
                     (get_enable_flags);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "enabled";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_position_enabled",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,bool>(set_position_enabled);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"is_position_enabled",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,bool>(is_position_enabled);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "enabled";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_rotation_enabled",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,bool>(set_rotation_enabled);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"is_rotation_enabled",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,bool>(is_rotation_enabled);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  local_60 = 0;
  local_68 = "enabled";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_scale_enabled",uVar5);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,bool>(set_scale_enabled);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_98,(char ***)"is_scale_enabled",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<RetargetModifier3D,bool>(is_scale_enabled);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_88;
  if (local_88 != (long *)0x0) {
    LOCK();
    plVar7 = local_88 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_88 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_88[-1];
      lVar6 = 0;
      local_88 = (long *)0x0;
      plVar7 = plVar3;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_98 = "SkeletonProfile";
  local_c8 = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "profile";
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,0x18);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 0x11;
  local_78 = 0;
  if (local_c8 == 0) {
LAB_00101d18:
    local_e0 = (CowData<char32_t> *)&local_78;
    local_70 = 6;
    StringName::StringName((StringName *)&local_a8,(String *)local_e0,false);
    if (local_88 == (long *)local_a8) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = (long *)local_a8;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) goto LAB_00101d18;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
  }
  local_e0 = (CowData<char32_t> *)&local_78;
  local_d8 = 0;
  local_a8 = "RetargetModifier3D";
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "use_global_pose";
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,1);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 0;
  local_78 = 0;
  if (local_c8 == 0) {
LAB_001015d3:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
  }
  else {
    CowData<char32_t>::_ref(local_e0,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_001015d3;
    StringName::StringName((StringName *)&local_a8,(String *)local_e0,false);
    if (local_88 == (long *)local_a8) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = (long *)local_a8;
    }
  }
  local_a8 = "RetargetModifier3D";
  local_d8 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "Position,Rotation,Scale";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x17;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "enable";
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,2);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (long *)0x0;
  local_80 = 6;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref(local_e0,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)local_e0,false);
      if (local_88 == (long *)local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = (long *)local_a8;
      }
      goto LAB_001017f0;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_001017f0:
  local_a8 = "RetargetModifier3D";
  local_d8 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"TRANSFORM_FLAG_POSITION",false);
  local_98 = "TRANSFORM_FLAG_POSITION";
  local_b8 = 0;
  local_90 = 0x17;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void>::get_class_info
            ((GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void> *)&local_98);
  local_b0 = (char *)local_88;
  local_88 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "RetargetModifier3D";
  local_c0 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,1,true);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"TRANSFORM_FLAG_ROTATION",false);
  local_98 = "TRANSFORM_FLAG_ROTATION";
  local_b8 = 0;
  local_90 = 0x17;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void>::get_class_info
            ((GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void> *)&local_98);
  local_b0 = (char *)local_88;
  local_88 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "RetargetModifier3D";
  local_c0 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,2,true);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"TRANSFORM_FLAG_SCALE",false);
  local_98 = "TRANSFORM_FLAG_SCALE";
  local_b8 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void>::get_class_info
            ((GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void> *)&local_98);
  local_b0 = (char *)local_88;
  local_88 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "RetargetModifier3D";
  local_c0 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,4,true);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_a8,"TRANSFORM_FLAG_ALL",false);
  local_98 = "TRANSFORM_FLAG_ALL";
  local_b8 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_b8);
  GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void>::get_class_info
            ((GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void> *)&local_98);
  local_b0 = (char *)local_88;
  local_88 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_98);
  local_98 = "RetargetModifier3D";
  local_c0 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_98,(StringName *)&local_b0,(StringName *)&local_a8,7,true);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  if ((StringName::configured != '\0') && (local_b0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RetargetModifier3D::get_configuration_warnings() const */

void RetargetModifier3D::get_configuration_warnings(void)

{
  CowData<char32_t> *this;
  int iVar1;
  long lVar2;
  long in_RSI;
  long lVar3;
  long in_RDI;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  SkeletonModifier3D::get_configuration_warnings();
  if (*(long *)(in_RSI + 0x570) != 0) goto LAB_00101ff7;
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "There is no child Skeleton3D!";
  local_68 = 0;
  local_50 = 0x1d;
  String::parse_latin1((StrRange *)&local_68);
  RTR((String *)&local_58,(String *)&local_68);
  if (*(long *)(in_RDI + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(in_RDI + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(in_RDI + 8),lVar3);
  if (iVar1 == 0) {
    if (*(long *)(in_RDI + 8) == 0) {
      lVar2 = -1;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(*(long *)(in_RDI + 8) + -8);
      lVar2 = lVar3 + -1;
      if (-1 < lVar2) {
        CowData<String>::_copy_on_write((CowData<String> *)(in_RDI + 8));
        this = (CowData<char32_t> *)(*(long *)(in_RDI + 8) + lVar2 * 8);
        if (*(char **)this != local_58) {
          CowData<char32_t>::_ref(this,(CowData *)&local_58);
        }
        goto LAB_001020fe;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_001020fe:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00101ff7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<RetargetModifier3D::RetargetBoneInfo>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RetargetModifier3D::RetargetBoneInfo>::_copy_on_write
          (CowData<RetargetModifier3D::RetargetBoneInfo> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  size_t __n;
  ulong uVar4;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  __n = lVar1 * 0x4c;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RetargetModifier3D::~RetargetModifier3D() */

void __thiscall RetargetModifier3D::~RetargetModifier3D(RetargetModifier3D *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ef30;
  if (*(long *)(this + 0x580) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x580) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x580);
      *(undefined8 *)(this + 0x580) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  CowData<RetargetModifier3D::RetargetInfo>::_unref
            ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
  if (*(long *)(this + 0x550) != 0) {
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      pOVar3 = *(Object **)(this + 0x550);
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
  }
  bVar5 = StringName::configured != '\0';
  *(code **)this = predelete_handler;
  if ((bVar5) && (*(long *)(this + 0x538) != 0)) {
    StringName::unref();
  }
  Node3D::~Node3D((Node3D *)this);
  return;
}



/* RetargetModifier3D::~RetargetModifier3D() */

void __thiscall RetargetModifier3D::~RetargetModifier3D(RetargetModifier3D *this)

{
  ~RetargetModifier3D(this);
  operator_delete(this,0x588);
  return;
}



/* CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
          (CowData<RetargetModifier3D::RetargetInfo> *this)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar7 = lVar1 * 0x18 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar9 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar1;
    puVar8 = puVar5 + 2;
    if (lVar1 != 0) {
      do {
        puVar6 = (undefined8 *)((long)puVar8 + *(long *)this + (-0x10 - (long)puVar5));
        uVar2 = *puVar6;
        puVar8[2] = 0;
        lVar3 = puVar6[2];
        *puVar8 = uVar2;
        if (lVar3 != 0) {
          CowData<RetargetModifier3D::RetargetBoneInfo>::_ref
                    ((CowData<RetargetModifier3D::RetargetBoneInfo> *)(puVar8 + 2),
                     (CowData *)(puVar6 + 2));
        }
        lVar9 = lVar9 + 1;
        puVar8 = puVar8 + 3;
      } while (lVar1 != lVar9);
    }
    _unref(this);
    *(undefined8 **)this = puVar5 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* RetargetModifier3D::_reset_child_skeleton_poses() */

void __thiscall RetargetModifier3D::_reset_child_skeleton_poses(RetargetModifier3D *this)

{
  int *piVar1;
  ulong uVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  long *plVar6;
  uint uVar7;
  ulong *puVar8;
  int *piVar9;
  ulong *puVar10;
  ulong *puVar11;
  long in_FS_OFFSET;
  bool bVar12;
  RetargetModifier3D local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
            ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
  puVar11 = *(ulong **)(this + 0x570);
  CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
            ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
  puVar10 = *(ulong **)(this + 0x570);
  if (puVar10 != (ulong *)0x0) {
    puVar10 = puVar10 + puVar10[-1] * 3;
  }
  for (; puVar10 != puVar11; puVar11 = puVar11 + 3) {
    while( true ) {
      uVar7 = (uint)*puVar11 & 0xffffff;
      if ((uint)ObjectDB::slot_max <= uVar7) break;
      while( true ) {
        local_58[0] = (RetargetModifier3D)0x0;
        LOCK();
        bVar12 = (char)ObjectDB::spin_lock == '\0';
        if (bVar12) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar12) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
      if ((*puVar11 >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
        uVar2 = puVar8[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if ((uVar2 != 0) &&
           (plVar6 = (long *)__dynamic_cast(uVar2,&Object::typeinfo,&Skeleton3D::typeinfo,0),
           plVar6 != (long *)0x0)) {
          pcVar3 = *(code **)(*plVar6 + 0x118);
          create_custom_callable_function_pointer<RetargetModifier3D,int>
                    (local_58,(char *)this,
                     (_func_void_int *)"&RetargetModifier3D::_update_child_skeleton_rests");
          if ((_reset_child_skeleton_poses()::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar5 = __cxa_guard_acquire(&_reset_child_skeleton_poses()::{lambda()#1}::operator()()
                                           ::sname), iVar5 != 0)) {
            _scs_create((char *)&_reset_child_skeleton_poses()::{lambda()#1}::operator()()::sname,
                        true);
            __cxa_atexit(StringName::~StringName,
                         &_reset_child_skeleton_poses()::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_reset_child_skeleton_poses()::{lambda()#1}::operator()()::sname);
          }
          cVar4 = (*pcVar3)(plVar6,&_reset_child_skeleton_poses()::{lambda()#1}::operator()()::sname
                            ,local_58);
          Callable::~Callable((Callable *)local_58);
          if (cVar4 != '\0') {
            pcVar3 = *(code **)(*plVar6 + 0x110);
            create_custom_callable_function_pointer<RetargetModifier3D,int>
                      (local_58,(char *)this,
                       (_func_void_int *)"&RetargetModifier3D::_update_child_skeleton_rests");
            if ((_reset_child_skeleton_poses()::{lambda()#2}::operator()()::sname == '\0') &&
               (iVar5 = __cxa_guard_acquire(&_reset_child_skeleton_poses()::{lambda()#2}::
                                             operator()()::sname), iVar5 != 0)) {
              _scs_create((char *)&_reset_child_skeleton_poses()::{lambda()#2}::operator()()::sname,
                          true);
              __cxa_atexit(StringName::~StringName,
                           &_reset_child_skeleton_poses()::{lambda()#2}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&_reset_child_skeleton_poses()::{lambda()#2}::operator()()::sname)
              ;
            }
            (*pcVar3)(plVar6,&_reset_child_skeleton_poses()::{lambda()#2}::operator()()::sname,
                      local_58);
            Callable::~Callable((Callable *)local_58);
          }
          piVar9 = (int *)puVar11[2];
          if (piVar9 != (int *)0x0) {
            piVar1 = piVar9 + *(long *)(piVar9 + -2) * 0x13;
            for (; piVar1 != piVar9; piVar9 = piVar9 + 0x13) {
              if (-1 < *piVar9) {
                Skeleton3D::reset_bone_pose((int)plVar6);
              }
            }
          }
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
      puVar11 = puVar11 + 3;
      if (puVar10 == puVar11) goto LAB_001026b0;
    }
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
LAB_001026b0:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RetargetModifier3D::_set_active(bool) */

void __thiscall RetargetModifier3D::_set_active(RetargetModifier3D *this,bool param_1)

{
  if (param_1) {
    return;
  }
  _reset_child_skeleton_poses(this);
  return;
}



/* RetargetModifier3D::set_enable_flags(BitField<RetargetModifier3D::TransformFlag>) */

void __thiscall RetargetModifier3D::set_enable_flags(RetargetModifier3D *this,long param_2)

{
  if (*(long *)(this + 0x560) != param_2) {
    _reset_child_skeleton_poses(this);
  }
  *(long *)(this + 0x560) = param_2;
  return;
}



/* RetargetModifier3D::set_position_enabled(bool) */

void __thiscall RetargetModifier3D::set_position_enabled(RetargetModifier3D *this,bool param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x560);
  if (param_1 != (bool)((byte)uVar1 & 1)) {
    _reset_child_skeleton_poses(this);
    uVar1 = *(ulong *)(this + 0x560);
  }
  uVar2 = uVar1 & 0xfffffffffffffffe;
  if (param_1) {
    uVar2 = uVar1 | 1;
  }
  *(ulong *)(this + 0x560) = uVar2;
  return;
}



/* RetargetModifier3D::set_rotation_enabled(bool) */

void __thiscall RetargetModifier3D::set_rotation_enabled(RetargetModifier3D *this,bool param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x560);
  if (param_1 != (bool)((byte)(uVar1 >> 1) & 1)) {
    _reset_child_skeleton_poses(this);
    uVar1 = *(ulong *)(this + 0x560);
  }
  uVar2 = uVar1 & 0xfffffffffffffffd;
  if (param_1) {
    uVar2 = uVar1 | 2;
  }
  *(ulong *)(this + 0x560) = uVar2;
  return;
}



/* RetargetModifier3D::set_scale_enabled(bool) */

void __thiscall RetargetModifier3D::set_scale_enabled(RetargetModifier3D *this,bool param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x560);
  if (param_1 != (bool)((byte)(uVar1 >> 2) & 1)) {
    _reset_child_skeleton_poses(this);
    uVar1 = *(ulong *)(this + 0x560);
  }
  uVar2 = uVar1 & 0xfffffffffffffffb;
  if (param_1) {
    uVar2 = uVar1 | 4;
  }
  *(ulong *)(this + 0x560) = uVar2;
  return;
}



/* RetargetModifier3D::_force_update_child_skeletons() */

void __thiscall RetargetModifier3D::_force_update_child_skeletons(RetargetModifier3D *this)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  uint uVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  long in_FS_OFFSET;
  bool bVar8;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
            ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
  puVar7 = *(ulong **)(this + 0x570);
  CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
            ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
  puVar6 = *(ulong **)(this + 0x570);
  if (puVar6 != (ulong *)0x0) {
    puVar6 = puVar6 + puVar6[-1] * 3;
  }
  for (; puVar7 != puVar6; puVar7 = puVar7 + 3) {
    uVar4 = (uint)*puVar7 & 0xffffff;
    if (uVar4 < (uint)ObjectDB::slot_max) {
      while( true ) {
        LOCK();
        bVar8 = (char)ObjectDB::spin_lock == '\0';
        if (bVar8) {
          ObjectDB::spin_lock._0_1_ = '\x01';
        }
        UNLOCK();
        if (bVar8) break;
        do {
        } while ((char)ObjectDB::spin_lock != '\0');
      }
      puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
      if ((*puVar7 >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
        uVar2 = puVar5[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if ((uVar2 != 0) &&
           (plVar3 = (long *)__dynamic_cast(uVar2,&Object::typeinfo,&Skeleton3D::typeinfo,0),
           plVar3 != (long *)0x0)) {
          Skeleton3D::force_update_all_dirty_bones();
          (**(code **)(*plVar3 + 0xd0))(plVar3,SceneStringNames::singleton + 0x128,0,0);
          if (Variant::needs_deinit[0] != '\0') {
            Variant::_clear_internal();
          }
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
    }
    else {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
    }
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RetargetModifier3D::_reset_child_skeletons() */

void __thiscall RetargetModifier3D::_reset_child_skeletons(RetargetModifier3D *this)

{
  _reset_child_skeleton_poses(this);
  if ((*(long *)(this + 0x570) != 0) && (*(long *)(*(long *)(this + 0x570) + -8) != 0)) {
    CowData<RetargetModifier3D::RetargetInfo>::_unref
              ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
    return;
  }
  return;
}



/* Vector<RetargetModifier3D::RetargetBoneInfo>::push_back(RetargetModifier3D::RetargetBoneInfo)
   [clone .isra.0] */

void Vector<RetargetModifier3D::RetargetBoneInfo>::push_back(long param_1)

{
  undefined8 *puVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined4 uStack0000000000000048;
  undefined8 uStack000000000000004c;
  
  if (*(long *)(param_1 + 8) == 0) {
    lVar4 = 1;
  }
  else {
    lVar4 = *(long *)(*(long *)(param_1 + 8) + -8) + 1;
  }
  iVar2 = CowData<RetargetModifier3D::RetargetBoneInfo>::resize<false>
                    ((CowData<RetargetModifier3D::RetargetBoneInfo> *)(param_1 + 8),lVar4);
  if (iVar2 == 0) {
    if (*(long *)(param_1 + 8) == 0) {
      lVar3 = -1;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(*(long *)(param_1 + 8) + -8);
      lVar3 = lVar4 + -1;
      if (-1 < lVar3) {
        CowData<RetargetModifier3D::RetargetBoneInfo>::_copy_on_write
                  ((CowData<RetargetModifier3D::RetargetBoneInfo> *)(param_1 + 8));
        puVar1 = (undefined8 *)(*(long *)(param_1 + 8) + lVar3 * 0x4c);
        *puVar1 = in_stack_00000008;
        puVar1[1] = in_stack_00000010;
        puVar1[6] = in_stack_00000038;
        puVar1[7] = in_stack_00000040;
        puVar1[2] = in_stack_00000018;
        puVar1[3] = in_stack_00000020;
        puVar1[4] = in_stack_00000028;
        puVar1[5] = in_stack_00000030;
        *(ulong *)((long)puVar1 + 0x3c) = CONCAT44(uStack0000000000000048,in_stack_00000040._4_4_);
        *(undefined8 *)((long)puVar1 + 0x44) = uStack000000000000004c;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar4,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RetargetModifier3D::cache_bone_rests(Skeleton3D*) */

Skeleton3D * RetargetModifier3D::cache_bone_rests(Skeleton3D *param_1)

{
  int iVar1;
  String *pSVar2;
  long lVar3;
  String *in_RDX;
  long lVar4;
  long in_RSI;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_27c;
  float local_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  float local_268;
  float fStack_264;
  float fStack_260;
  float fStack_25c;
  float local_258;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_228;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined1 local_1c8 [8];
  float fStack_1c0;
  float fStack_1bc;
  float local_1b8;
  float local_1b4;
  float local_1a8;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  undefined8 uStack_140;
  float local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  int local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined8 uStack_54;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (String *)SkeletonModifier3D::get_skeleton();
  lVar3 = *(long *)(in_RSI + 0x550);
  *(undefined8 *)(param_1 + 8) = 0;
  if ((pSVar2 != (String *)0x0) && (lVar3 != 0)) {
    SkeletonProfile::get_bone_names();
    CowData<String>::_copy_on_write((CowData<String> *)&local_160);
    lVar4 = local_160;
    CowData<String>::_copy_on_write((CowData<String> *)&local_160);
    lVar3 = local_160;
    if (local_160 != 0) {
      lVar3 = local_160 + *(long *)(local_160 + -8) * 8;
    }
    for (; lVar4 != lVar3; lVar4 = lVar4 + 8) {
      iVar1 = Skeleton3D::find_bone(pSVar2);
      if (iVar1 < 0) {
        local_258 = 0.0;
        _local_1c8 = (undefined1  [16])0x0;
        fVar7 = 0.0;
        fVar8 = 0.0;
        fVar9 = 0.0;
        local_228 = _LC67;
        local_1d8 = __LC69;
        uStack_1d0 = _UNK_0010f558;
        local_1a8 = 0.0;
        local_1e8 = __LC70;
        uStack_1e0 = _UNK_0010f568;
        local_1b8 = 1.0;
        local_218 = _LC67;
        uStack_210 = _UNK_0010f548;
        local_1b4 = 0.0;
        local_248 = __LC71;
        uStack_240 = _UNK_0010f578;
        local_1f8 = __LC72;
        uStack_1f0 = _UNK_0010f588;
        local_208 = _LC67;
        uStack_200 = _UNK_0010f548;
        local_268 = _LC68;
        fStack_264 = 0.0;
        fStack_260 = 0.0;
        fStack_25c = 0.0;
        local_278 = _LC68;
        fStack_274 = 0.0;
        fStack_270 = 0.0;
        fStack_26c = 0.0;
        fVar6 = _LC68;
        fVar11 = _LC68;
        fVar5 = _UNK_0010f524;
      }
      else {
        _local_f8 = ZEXT416((uint)_LC68);
        local_d8 = 1.0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        local_e8 = _LC68;
        fStack_e4 = 0.0;
        fStack_e0 = 0.0;
        fStack_dc = 0.0;
        iVar1 = Skeleton3D::get_bone_parent((int)pSVar2);
        if (-1 < iVar1) {
          Skeleton3D::get_bone_global_rest((int)&local_198);
          uStack_f0 = uStack_190;
          local_f8 = (undefined1  [8])local_198;
          local_e8 = (float)local_188;
          fStack_e4 = (float)((ulong)local_188 >> 0x20);
          fStack_e0 = (float)uStack_180;
          fStack_dc = (float)((ulong)uStack_180 >> 0x20);
          local_d8 = (float)local_178;
          uStack_d4 = (undefined4)((ulong)local_178 >> 0x20);
          uStack_d0 = (undefined4)uStack_170;
          uStack_cc = (undefined4)((ulong)uStack_170 >> 0x20);
        }
        local_268 = local_e8;
        fStack_264 = fStack_e4;
        fStack_260 = fStack_e0;
        fStack_25c = fStack_dc;
        local_1f8 = CONCAT44(fStack_e4,local_e8);
        uStack_1f0 = CONCAT44(local_e8,uStack_f0._4_4_);
        local_218 = CONCAT44(local_d8,fStack_dc);
        local_208 = CONCAT44(local_e8,uStack_f0._4_4_);
        uStack_200 = CONCAT44(uStack_f0._4_4_,fStack_e4);
        local_278 = (float)local_f8._0_4_;
        fStack_274 = (float)local_f8._4_4_;
        fStack_270 = (float)uStack_f0;
        fStack_26c = uStack_f0._4_4_;
        uStack_240 = CONCAT44(fStack_e0,local_d8);
        uStack_210 = CONCAT44(fStack_dc,fStack_e0);
        local_248 = CONCAT44(fStack_dc,fStack_e0);
        Basis::inverse();
        Skeleton3D::get_bone_rest((int)&local_c8);
        Basis::inverse();
        fVar6 = (float)uStack_140;
        fVar11 = (float)((ulong)uStack_140 >> 0x20);
        local_228 = CONCAT44(fVar6 * fStack_120 + fVar11 * fStack_114 + local_138 * fStack_108,
                             fVar6 * fStack_124 + fVar11 * local_118 + local_138 * fStack_10c);
        local_258 = fVar11 * fStack_11c + local_128 * fVar6 + local_138 * fStack_110;
        local_1c8._4_4_ = fStack_120 * local_158 + fStack_114 * fStack_154 + fStack_108 * fStack_150
        ;
        local_1c8._0_4_ = fStack_120 * local_158 + fStack_114 * fStack_154 + fStack_108 * fStack_150
        ;
        fStack_1c0 = fStack_120 * local_158 + fStack_114 * fStack_154 + fStack_108 * fStack_150;
        fStack_1bc = fStack_120 * fStack_14c + fStack_114 * local_148 + fStack_108 * fStack_144;
        local_1d8 = CONCAT44(fStack_124 * local_158 + local_118 * fStack_154 +
                             fStack_10c * fStack_150,
                             fStack_124 * local_158 + local_118 * fStack_154 +
                             fStack_10c * fStack_150);
        uStack_1d0 = CONCAT44(fStack_124 * fStack_14c + local_118 * local_148 +
                              fStack_10c * fStack_144,
                              fStack_124 * local_158 + local_118 * fStack_154 +
                              fStack_10c * fStack_150);
        local_1e8 = CONCAT44(fStack_11c * fStack_154 + local_128 * local_158 +
                             fStack_110 * fStack_150,
                             fStack_11c * fStack_154 + local_128 * local_158 +
                             fStack_110 * fStack_150);
        uStack_1e0 = CONCAT44(fStack_11c * local_148 + local_128 * fStack_14c +
                              fStack_110 * fStack_144,
                              fStack_11c * fStack_154 + local_128 * local_158 +
                              fStack_110 * fStack_150);
        fVar7 = fStack_124 * local_158 + local_118 * fStack_154 + fStack_10c * fStack_150;
        fVar8 = fStack_120 * local_158 + fStack_114 * fStack_154 + fStack_108 * fStack_150;
        fVar9 = local_128 * fStack_14c + fStack_11c * local_148 + fStack_110 * fStack_144;
        local_1a8 = fStack_120 * fStack_14c + fStack_114 * local_148 + fStack_108 * fStack_144;
        local_1b8 = fStack_124 * fStack_14c + local_118 * local_148 + fStack_10c * fStack_144;
        local_1b4 = fStack_14c * local_128 + local_148 * fStack_11c + fStack_144 * fStack_110;
        fVar6 = local_128 * local_158 + fStack_11c * fStack_154 + fStack_110 * fStack_150;
        fVar11 = fStack_144 * fStack_10c + fStack_14c * fStack_124 + local_148 * local_118;
        fVar5 = fStack_144 * fStack_108 + fStack_14c * fStack_120 + local_148 * fStack_114;
      }
      local_27c = (float)uStack_240;
      local_98 = Skeleton3D::find_bone(in_RDX);
      if (-1 < local_98) {
        _local_f8 = ZEXT416((uint)_LC68);
        local_d8 = 1.0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        local_e8 = _LC68;
        fStack_e4 = 0.0;
        fStack_e0 = 0.0;
        fStack_dc = 0.0;
        iVar1 = Skeleton3D::get_bone_parent((int)in_RDX);
        if (-1 < iVar1) {
          Skeleton3D::get_bone_global_rest((int)&local_198);
          uStack_f0 = uStack_190;
          local_f8 = (undefined1  [8])local_198;
          local_d8 = (float)local_178;
          uStack_d4 = (undefined4)((ulong)local_178 >> 0x20);
          uStack_d0 = (undefined4)uStack_170;
          uStack_cc = (undefined4)((ulong)uStack_170 >> 0x20);
          local_e8 = (float)local_188;
          fStack_e4 = (float)((ulong)local_188 >> 0x20);
          fStack_e0 = (float)uStack_180;
          fStack_dc = (float)((ulong)uStack_180 >> 0x20);
        }
        fVar6 = (float)local_228;
        fVar5 = (float)((ulong)local_228 >> 0x20);
        Basis::inverse();
        fVar14 = local_c8 * fStack_274;
        fVar8 = fStack_bc * local_278;
        fVar7 = fStack_270 * fStack_bc;
        fVar11 = local_278 * fStack_b0;
        local_208._4_4_ = fStack_c4 * local_208._4_4_;
        local_27c = fStack_264 * fStack_ac + fStack_b0 * fStack_270 + (float)uStack_240 * fStack_a8;
        local_248._4_4_ = fStack_c0 * local_248._4_4_;
        local_278 = local_c8 * local_278 + fStack_c4 * (float)local_208 +
                    fStack_c0 * (float)local_248;
        fStack_270 = local_c8 * fStack_270 + fStack_c4 * (float)uStack_200 +
                     fStack_c0 * (float)uStack_240;
        fStack_26c = fVar8 + local_b8 * uStack_200._4_4_ + fStack_b4 * uStack_240._4_4_;
        local_268 = fStack_bc * fStack_274 + local_b8 * (float)local_1f8 +
                    fStack_b4 * (float)local_218;
        fStack_264 = fVar7 + local_b8 * local_1f8._4_4_ + fStack_b4 * local_218._4_4_;
        fStack_260 = fVar11 + fStack_ac * (float)uStack_1f0 + fStack_a8 * (float)uStack_210;
        fStack_25c = fStack_b0 * fStack_274 + fStack_ac * uStack_1f0._4_4_ +
                     fStack_a8 * uStack_210._4_4_;
        Skeleton3D::get_bone_rest((int)&local_c8);
        fVar10 = (float)uStack_f0 * local_258 + fStack_e4 * fVar6 + local_d8 * fVar5;
        fVar11 = fStack_dc * fVar5 + (float)local_f8._4_4_ * local_258 + local_e8 * fVar6;
        fVar12 = (float)local_f8._0_4_ * local_258 + fVar6 * uStack_f0._4_4_ + fVar5 * fStack_e0;
        fVar15 = (float)local_f8._4_4_ * local_1b4 + local_e8 * local_1b8 + fStack_dc * local_1a8;
        fVar13 = (float)uStack_f0 * local_1b4 + fStack_e4 * local_1b8 + local_d8 * local_1a8;
        fVar5 = local_1b4 * (float)local_f8._0_4_ + uStack_f0._4_4_ * local_1b8 +
                fStack_e0 * local_1a8;
        local_228 = CONCAT44(fVar11 * fStack_b4 + fVar12 * fStack_c0 + fVar10 * fStack_a8,
                             fVar11 * local_b8 + fVar12 * fStack_c4 + fVar10 * fStack_ac);
        fVar6 = ((float)local_f8._4_4_ * (float)local_1e8 + local_e8 * (float)local_1d8 +
                fStack_dc * (float)local_1c8._0_4_) * fStack_bc +
                (uStack_f0._4_4_ * (float)local_1d8 + (float)local_f8._0_4_ * (float)local_1e8 +
                fStack_e0 * (float)local_1c8._0_4_) * local_c8 +
                ((float)uStack_f0 * (float)local_1e8 + fStack_e4 * (float)local_1d8 +
                local_d8 * (float)local_1c8._0_4_) * fStack_b0;
        fVar7 = ((float)local_f8._4_4_ * local_1e8._4_4_ + local_e8 * local_1d8._4_4_ +
                fStack_dc * (float)local_1c8._4_4_) * local_b8 +
                (uStack_f0._4_4_ * local_1d8._4_4_ + (float)local_f8._0_4_ * local_1e8._4_4_ +
                fStack_e0 * (float)local_1c8._4_4_) * fStack_c4 +
                ((float)uStack_f0 * local_1e8._4_4_ + fStack_e4 * local_1d8._4_4_ +
                local_d8 * (float)local_1c8._4_4_) * fStack_ac;
        fVar8 = ((float)local_f8._4_4_ * (float)uStack_1e0 + local_e8 * (float)uStack_1d0 +
                fStack_dc * fStack_1c0) * fStack_b4 +
                (uStack_f0._4_4_ * (float)uStack_1d0 + (float)local_f8._0_4_ * (float)uStack_1e0 +
                fStack_e0 * fStack_1c0) * fStack_c0 +
                ((float)uStack_f0 * (float)uStack_1e0 + fStack_e4 * (float)uStack_1d0 +
                local_d8 * fStack_1c0) * fStack_a8;
        fVar9 = ((float)local_f8._4_4_ * uStack_1e0._4_4_ + local_e8 * uStack_1d0._4_4_ +
                fStack_dc * fStack_1bc) * fStack_bc +
                (uStack_f0._4_4_ * uStack_1d0._4_4_ + (float)local_f8._0_4_ * uStack_1e0._4_4_ +
                fStack_e0 * fStack_1bc) * local_c8 +
                ((float)uStack_f0 * uStack_1e0._4_4_ + fStack_e4 * uStack_1d0._4_4_ +
                local_d8 * fStack_1bc) * fStack_b0;
        local_258 = fVar11 * fStack_bc + local_c8 * fVar12 + fStack_b0 * fVar10;
        fStack_274 = fVar14 + local_208._4_4_ + local_248._4_4_;
        fVar11 = fVar13 * fStack_ac + fVar5 * fStack_c4 + fVar15 * local_b8;
        fVar5 = fVar13 * fStack_a8 + fVar5 * fStack_c0 + fVar15 * fStack_b4;
      }
      fStack_5c = fVar5;
      local_60 = fVar11;
      fStack_94 = local_278;
      fStack_90 = fStack_274;
      fStack_8c = fStack_270;
      fStack_88 = fStack_26c;
      fStack_84 = local_268;
      fStack_80 = fStack_264;
      fStack_7c = fStack_260;
      fStack_78 = fStack_25c;
      local_74 = local_27c;
      fStack_58 = local_258;
      uStack_54 = local_228;
      local_70 = fVar6;
      fStack_6c = fVar7;
      fStack_68 = fVar8;
      fStack_64 = fVar9;
      Vector<RetargetModifier3D::RetargetBoneInfo>::push_back(param_1);
    }
    CowData<String>::_unref((CowData<String> *)&local_160);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* RetargetModifier3D::cache_bone_global_rests(Skeleton3D*) */

Skeleton3D * RetargetModifier3D::cache_bone_global_rests(Skeleton3D *param_1)

{
  int iVar1;
  String *pSVar2;
  long lVar3;
  String *in_RDX;
  long lVar4;
  long in_RSI;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8 [8];
  float fStack_1e0;
  float fStack_1dc;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8 [8];
  float fStack_1b0;
  float fStack_1ac;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  long local_160;
  float local_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float local_108;
  undefined1 local_f8 [8];
  undefined8 uStack_f0;
  undefined1 local_e8 [8];
  undefined8 uStack_e0;
  float local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float local_a8;
  int local_98;
  float fStack_94;
  undefined8 uStack_90;
  undefined4 uStack_88;
  float fStack_84;
  undefined8 uStack_80;
  undefined4 uStack_78;
  undefined4 local_74;
  float local_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar2 = (String *)SkeletonModifier3D::get_skeleton();
  lVar3 = *(long *)(in_RSI + 0x550);
  *(undefined8 *)(param_1 + 8) = 0;
  if ((pSVar2 != (String *)0x0) && (lVar3 != 0)) {
    SkeletonProfile::get_bone_names();
    CowData<String>::_copy_on_write((CowData<String> *)&local_160);
    lVar4 = local_160;
    CowData<String>::_copy_on_write((CowData<String> *)&local_160);
    lVar3 = local_160;
    if (local_160 != 0) {
      lVar3 = local_160 + *(long *)(local_160 + -8) * 8;
    }
    for (; lVar4 != lVar3; lVar4 = lVar4 + 8) {
      local_74 = 0x3f800000;
      uStack_90 = 0;
      uStack_88 = 0;
      uStack_80 = 0;
      uStack_78 = 0;
      fStack_94 = _LC68;
      fStack_84 = _LC68;
      iVar1 = Skeleton3D::find_bone(pSVar2);
      if (iVar1 < 0) {
        fVar8 = 0.0;
        fVar9 = 0.0;
        fVar10 = 0.0;
        _local_1e8 = (undefined1  [16])0x0;
        fVar13 = 0.0;
        fVar14 = 0.0;
        fVar15 = 0.0;
        local_228 = __LC75;
        uStack_220 = _UNK_0010f598;
        _local_1b8 = (undefined1  [16])0x0;
        local_1c8 = __LC65;
        uStack_1c0 = _UNK_0010f538;
        local_1d8 = __LC69;
        uStack_1d0 = _UNK_0010f558;
        local_1f8 = __LC70;
        uStack_1f0 = _UNK_0010f568;
        fVar7 = _LC68;
        fVar12 = _LC68;
      }
      else {
        _local_f8 = ZEXT416((uint)_LC68);
        local_d8 = 1.0;
        uStack_d4 = 0;
        uStack_d0 = 0;
        uStack_cc = 0;
        _local_e8 = _local_f8;
        iVar1 = Skeleton3D::get_bone_parent((int)pSVar2);
        if (-1 < iVar1) {
          Skeleton3D::get_bone_global_rest((int)&local_198);
          uStack_f0 = uStack_190;
          local_f8 = (undefined1  [8])local_198;
          local_d8 = (float)local_178;
          uStack_d4 = (undefined4)((ulong)local_178 >> 0x20);
          uStack_d0 = (undefined4)uStack_170;
          uStack_cc = (undefined4)((ulong)uStack_170 >> 0x20);
          uStack_e0 = uStack_180;
          local_e8 = (undefined1  [8])local_188;
        }
        Basis::inverse();
        Skeleton3D::get_bone_rest((int)&local_c8);
        Basis::inverse();
        local_1b8._4_4_ = fStack_154 * fStack_114 + local_158 * fStack_120 + fStack_150 * local_108;
        local_1b8._0_4_ = fStack_154 * fStack_114 + local_158 * fStack_120 + fStack_150 * local_108;
        fStack_1b0 = fStack_154 * fStack_114 + local_158 * fStack_120 + fStack_150 * local_108;
        fStack_1ac = local_148 * fStack_114 + fStack_14c * fStack_120 + fStack_144 * local_108;
        local_228 = CONCAT44(fStack_114 * local_148 + fStack_120 * fStack_14c +
                             local_108 * fStack_144,
                             fStack_114 * local_148 + fStack_120 * fStack_14c +
                             local_108 * fStack_144);
        uStack_220 = CONCAT44(fStack_114 * fStack_13c + fStack_120 * fStack_140 +
                              local_108 * local_138,
                              fStack_114 * fStack_13c + fStack_120 * fStack_140 +
                              local_108 * local_138);
        local_1d8 = CONCAT44(local_118 * fStack_154 + local_158 * fStack_124 +
                             fStack_150 * fStack_10c,
                             local_118 * fStack_154 + local_158 * fStack_124 +
                             fStack_150 * fStack_10c);
        uStack_1d0 = CONCAT44(local_118 * local_148 + fStack_14c * fStack_124 +
                              fStack_144 * fStack_10c,
                              local_118 * fStack_154 + local_158 * fStack_124 +
                              fStack_150 * fStack_10c);
        local_1c8 = CONCAT44(local_118 * local_148 + fStack_124 * fStack_14c +
                             fStack_10c * fStack_144,
                             local_118 * local_148 + fStack_124 * fStack_14c +
                             fStack_10c * fStack_144);
        uStack_1c0 = CONCAT44(local_118 * fStack_13c + fStack_124 * fStack_140 +
                              fStack_10c * local_138,
                              local_118 * fStack_13c + fStack_124 * fStack_140 +
                              fStack_10c * local_138);
        local_1f8 = CONCAT44(local_128 * local_158 + fStack_154 * fStack_11c +
                             fStack_150 * fStack_110,
                             local_128 * local_158 + fStack_154 * fStack_11c +
                             fStack_150 * fStack_110);
        uStack_1f0 = CONCAT44(local_128 * fStack_14c + local_148 * fStack_11c +
                              fStack_144 * fStack_110,
                              local_128 * local_158 + fStack_154 * fStack_11c +
                              fStack_150 * fStack_110);
        local_1e8._4_4_ = local_128 * fStack_14c + fStack_11c * local_148 + fStack_110 * fStack_144;
        local_1e8._0_4_ = local_128 * fStack_14c + fStack_11c * local_148 + fStack_110 * fStack_144;
        fStack_1e0 = local_128 * fStack_140 + fStack_11c * fStack_13c + fStack_110 * local_138;
        fStack_1dc = local_128 * fStack_140 + fStack_11c * fStack_13c + fStack_110 * local_138;
        fVar8 = fStack_120 * fStack_14c + fStack_114 * local_148 + local_108 * fStack_144;
        fVar9 = local_128 * fStack_140 + fStack_11c * fStack_13c + fStack_110 * local_138;
        fVar10 = fStack_124 * fStack_140 + local_118 * fStack_13c + fStack_10c * local_138;
        fVar13 = local_118 * fStack_154 + fStack_124 * local_158 + fStack_10c * fStack_150;
        fVar14 = fStack_114 * fStack_154 + fStack_120 * local_158 + local_108 * fStack_150;
        fVar15 = fStack_11c * local_148 + local_128 * fStack_14c + fStack_110 * fStack_144;
        fVar7 = fStack_124 * fStack_14c + local_118 * local_148 + fStack_10c * fStack_144;
        fVar12 = fStack_11c * fStack_154 + local_128 * local_158 + fStack_110 * fStack_150;
      }
      local_98 = Skeleton3D::find_bone(in_RDX);
      if (-1 < local_98) {
        iVar1 = Skeleton3D::get_bone_parent((int)in_RDX);
        if (iVar1 < 0) {
          fVar6 = _LC68;
          fVar11 = 0.0;
          fVar17 = 0.0;
          fVar22 = _LC68;
          fVar10 = _LC68;
          fVar5 = 0.0;
          fVar21 = 0.0;
          fVar16 = 0.0;
          fVar20 = 0.0;
        }
        else {
          Skeleton3D::get_bone_global_rest((int)local_f8);
          fVar6 = (float)local_e8._0_4_;
          fVar11 = (float)uStack_e0;
          fVar17 = (float)local_f8._4_4_;
          fVar22 = local_d8;
          fVar10 = (float)local_f8._0_4_;
          fVar5 = uStack_e0._4_4_;
          fVar21 = (float)local_e8._4_4_;
          fVar16 = (float)uStack_f0;
          fVar20 = uStack_f0._4_4_;
        }
        fVar9 = fVar16 * fStack_1e0 + fVar21 * (float)uStack_1c0 + fVar22 * (float)uStack_220;
        fVar18 = fVar17 * fStack_1e0 + fVar6 * (float)uStack_1c0 + fVar5 * (float)uStack_220;
        fVar19 = fVar10 * fStack_1e0 + fVar20 * (float)uStack_1c0 + fVar11 * (float)uStack_220;
        Skeleton3D::get_bone_rest((int)&local_c8);
        uStack_220._0_4_ = fVar19 * fStack_c0 + fVar18 * fStack_b4 + fVar9 * local_a8;
        fVar12 = local_c8 *
                 ((float)local_1f8 * fVar10 + (float)local_1d8 * fVar20 +
                 (float)local_1b8._0_4_ * fVar11) +
                 fStack_bc *
                 ((float)local_1f8 * fVar17 + (float)local_1d8 * fVar6 +
                 (float)local_1b8._0_4_ * fVar5) +
                 fStack_b0 *
                 ((float)local_1f8 * fVar16 + (float)local_1d8 * fVar21 +
                 (float)local_1b8._0_4_ * fVar22);
        fVar13 = fStack_c4 *
                 (local_1f8._4_4_ * fVar10 + local_1d8._4_4_ * fVar20 +
                 (float)local_1b8._4_4_ * fVar11) +
                 local_b8 *
                 (local_1f8._4_4_ * fVar17 + local_1d8._4_4_ * fVar6 +
                 (float)local_1b8._4_4_ * fVar5) +
                 fStack_ac *
                 (local_1f8._4_4_ * fVar16 + local_1d8._4_4_ * fVar21 +
                 (float)local_1b8._4_4_ * fVar22);
        fVar14 = fStack_c0 *
                 ((float)uStack_1f0 * fVar10 + (float)uStack_1d0 * fVar20 + fStack_1b0 * fVar11) +
                 fStack_b4 *
                 ((float)uStack_1f0 * fVar17 + (float)uStack_1d0 * fVar6 + fStack_1b0 * fVar5) +
                 local_a8 *
                 ((float)uStack_1f0 * fVar16 + (float)uStack_1d0 * fVar21 + fStack_1b0 * fVar22);
        fVar15 = local_c8 *
                 (uStack_1f0._4_4_ * fVar10 + uStack_1d0._4_4_ * fVar20 + fStack_1ac * fVar11) +
                 fStack_bc *
                 (uStack_1f0._4_4_ * fVar17 + uStack_1d0._4_4_ * fVar6 + fStack_1ac * fVar5) +
                 fStack_b0 *
                 (uStack_1f0._4_4_ * fVar16 + uStack_1d0._4_4_ * fVar21 + fStack_1ac * fVar22);
        fVar7 = fStack_c4 *
                (fVar10 * (float)local_1e8._0_4_ + fVar20 * (float)local_1c8 +
                fVar11 * (float)local_228) +
                local_b8 *
                (fVar17 * (float)local_1e8._0_4_ + fVar6 * (float)local_1c8 +
                fVar5 * (float)local_228) +
                (fVar16 * (float)local_1e8._0_4_ + fVar21 * (float)local_1c8 +
                fVar22 * (float)local_228) * fStack_ac;
        fVar8 = fStack_c0 *
                (fVar10 * (float)local_1e8._4_4_ + fVar20 * local_1c8._4_4_ +
                fVar11 * local_228._4_4_) +
                fStack_b4 *
                (fVar17 * (float)local_1e8._4_4_ + fVar6 * local_1c8._4_4_ + fVar5 * local_228._4_4_
                ) + (fVar16 * (float)local_1e8._4_4_ + fVar21 * local_1c8._4_4_ +
                    fVar22 * local_228._4_4_) * local_a8;
        fVar9 = local_c8 * fVar19 + fStack_bc * fVar18 + fVar9 * fStack_b0;
        fVar10 = fStack_c4 *
                 (fVar10 * fStack_1dc + fVar20 * uStack_1c0._4_4_ + fVar11 * uStack_220._4_4_) +
                 local_b8 *
                 (fVar17 * fStack_1dc + fVar6 * uStack_1c0._4_4_ + fVar5 * uStack_220._4_4_) +
                 (fVar16 * fStack_1dc + fVar21 * uStack_1c0._4_4_ + fVar22 * uStack_220._4_4_) *
                 fStack_ac;
      }
      local_70 = fVar12;
      fStack_6c = fVar13;
      fStack_68 = fVar14;
      fStack_64 = fVar15;
      local_60 = fVar7;
      fStack_5c = fVar8;
      fStack_58 = fVar9;
      fStack_54 = fVar10;
      local_50 = (float)uStack_220;
      Vector<RetargetModifier3D::RetargetBoneInfo>::push_back(param_1);
    }
    CowData<String>::_unref((CowData<String> *)&local_160);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* RetargetModifier3D::_update_child_skeleton_rests(int) */

void __thiscall
RetargetModifier3D::_update_child_skeleton_rests(RetargetModifier3D *this,int param_1)

{
  long *plVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  bool bVar9;
  Skeleton3D local_48 [8];
  long local_40 [2];
  long local_30;
  
  lVar8 = (long)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(this + 0x570);
  if (param_1 < 0) {
    if (lVar4 == 0) goto LAB_001043ad;
    lVar7 = *(long *)(lVar4 + -8);
LAB_0010431f:
    _err_print_index_error
              ("_update_child_skeleton_rests","scene/3d/retarget_modifier_3d.cpp",0xa3,lVar8,lVar7,
               "p_child_skeleton_idx","child_skeletons.size()","",false,false);
  }
  else {
    if (lVar4 == 0) {
LAB_001043ad:
      lVar7 = 0;
      goto LAB_0010431f;
    }
    lVar7 = *(long *)(lVar4 + -8);
    if (lVar7 <= lVar8) goto LAB_0010431f;
    lVar7 = lVar8 * 0x18;
    uVar5 = (uint)*(ulong *)(lVar4 + lVar7) & 0xffffff;
    if ((uint)ObjectDB::slot_max <= uVar5) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
        return;
      }
      goto LAB_001043f9;
    }
    while( true ) {
      local_48[0] = (Skeleton3D)0x0;
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(lVar4 + lVar7) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      uVar2 = puVar6[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if ((uVar2 != 0) &&
         (lVar4 = __dynamic_cast(uVar2,&Object::typeinfo,&Skeleton3D::typeinfo,0), lVar4 != 0)) {
        if (this[0x558] == (RetargetModifier3D)0x0) {
          cache_bone_rests(local_48);
          if (*(long *)(this + 0x570) == 0) goto LAB_001043b5;
          lVar4 = *(long *)(*(long *)(this + 0x570) + -8);
          if (lVar4 <= lVar8) goto LAB_001043b8;
          CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
                    ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
          lVar4 = local_40[0];
          lVar7 = lVar7 + *(long *)(this + 0x570);
          if (*(long *)(lVar7 + 0x10) == local_40[0]) {
            if (local_40[0] != 0) {
              LOCK();
              plVar1 = (long *)(local_40[0] + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                  Memory::free_static((void *)(local_40[0] + -0x10),false);
                  return;
                }
                goto LAB_001043f9;
              }
            }
          }
          else {
            CowData<RetargetModifier3D::RetargetBoneInfo>::_unref
                      ((CowData<RetargetModifier3D::RetargetBoneInfo> *)(lVar7 + 0x10));
            *(long *)(lVar7 + 0x10) = lVar4;
          }
        }
        else {
          cache_bone_global_rests(local_48);
          if (*(long *)(this + 0x570) == 0) {
LAB_001043b5:
            lVar4 = 0;
LAB_001043b8:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,lVar8,lVar4,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
          lVar4 = *(long *)(*(long *)(this + 0x570) + -8);
          if (lVar4 <= lVar8) goto LAB_001043b8;
          CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
                    ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
          lVar7 = lVar7 + *(long *)(this + 0x570);
          if (*(long *)(lVar7 + 0x10) != local_40[0]) {
            CowData<RetargetModifier3D::RetargetBoneInfo>::_unref
                      ((CowData<RetargetModifier3D::RetargetBoneInfo> *)(lVar7 + 0x10));
            *(long *)(lVar7 + 0x10) = local_40[0];
            local_40[0] = 0;
          }
          CowData<RetargetModifier3D::RetargetBoneInfo>::_unref
                    ((CowData<RetargetModifier3D::RetargetBoneInfo> *)local_40);
        }
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001043f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RetargetModifier3D::cache_rests() */

void __thiscall RetargetModifier3D::cache_rests(RetargetModifier3D *this)

{
  long *plVar1;
  undefined4 uVar2;
  int iVar3;
  String *pSVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)(this + 0x580);
  if ((lVar5 != 0) && (*(long *)(lVar5 + -8) != 0)) {
    LOCK();
    plVar1 = (long *)(lVar5 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x580);
      *(undefined8 *)(this + 0x580) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
    else {
      *(undefined8 *)(this + 0x580) = 0;
    }
  }
  pSVar4 = (String *)SkeletonModifier3D::get_skeleton();
  if ((*(long *)(this + 0x550) != 0) && (pSVar4 != (String *)0x0)) {
    SkeletonProfile::get_bone_names();
    CowData<String>::_copy_on_write((CowData<String> *)local_50);
    lVar6 = local_50[0];
    CowData<String>::_copy_on_write((CowData<String> *)local_50);
    lVar5 = local_50[0];
    if (local_50[0] != 0) {
      lVar5 = local_50[0] + *(long *)(local_50[0] + -8) * 8;
    }
    for (; lVar6 != lVar5; lVar6 = lVar6 + 8) {
      uVar2 = Skeleton3D::find_bone(pSVar4);
      if (*(long *)(this + 0x580) == 0) {
        lVar7 = 1;
      }
      else {
        lVar7 = *(long *)(*(long *)(this + 0x580) + -8) + 1;
      }
      iVar3 = CowData<int>::resize<false>((CowData<int> *)(this + 0x580),lVar7);
      if (iVar3 == 0) {
        if (*(long *)(this + 0x580) == 0) {
          lVar8 = -1;
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(*(long *)(this + 0x580) + -8);
          lVar8 = lVar7 + -1;
          if (-1 < lVar8) {
            CowData<int>::_copy_on_write((CowData<int> *)(this + 0x580));
            *(undefined4 *)(*(long *)(this + 0x580) + lVar8 * 4) = uVar2;
            goto LAB_0010452b;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar8,lVar7,"p_index","size()","",false,
                   false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_0010452b:
    }
    lVar5 = *(long *)(this + 0x570);
    if (lVar5 != 0) {
      lVar6 = 0;
      do {
        if (*(long *)(lVar5 + -8) <= lVar6) break;
        _update_child_skeleton_rests(this,(int)lVar6);
        lVar5 = *(long *)(this + 0x570);
        lVar6 = lVar6 + 1;
      } while (lVar5 != 0);
    }
    CowData<String>::_unref((CowData<String> *)local_50);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RetargetModifier3D::_skeleton_changed(Skeleton3D*, Skeleton3D*) */

void __thiscall
RetargetModifier3D::_skeleton_changed
          (RetargetModifier3D *this,Skeleton3D *param_1,Skeleton3D *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  RetargetModifier3D local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Skeleton3D *)0x0) {
    pcVar1 = *(code **)(*(long *)param_1 + 0x118);
    create_custom_callable_function_pointer<RetargetModifier3D>
              (local_58,(char *)this,(_func_void *)"&RetargetModifier3D::cache_rests");
    if (_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#1}::
                                   operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#1}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#1}::operator()()
                             ::sname);
      }
    }
    cVar2 = (*pcVar1)(param_1,&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#1}::
                               operator()()::sname,local_58);
    if (cVar2 != '\0') {
      Callable::~Callable((Callable *)local_58);
      pcVar1 = *(code **)(*(long *)param_1 + 0x110);
      create_custom_callable_function_pointer<RetargetModifier3D>
                (local_58,(char *)this,(_func_void *)"&RetargetModifier3D::cache_rests");
      if (_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#2}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#2}::
                                     operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#2}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#2}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#2}::
                               operator()()::sname);
        }
      }
      (*pcVar1)(param_1,&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#2}::operator()()::
                         sname,local_58);
    }
    Callable::~Callable((Callable *)local_58);
  }
  if (param_2 != (Skeleton3D *)0x0) {
    pcVar1 = *(code **)(*(long *)param_2 + 0x118);
    create_custom_callable_function_pointer<RetargetModifier3D>
              (local_58,(char *)this,(_func_void *)"&RetargetModifier3D::cache_rests");
    if (_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#3}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#3}::
                                   operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#3}::operator()()
                             ::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#3}::operator()()
                             ::sname);
      }
    }
    cVar2 = (*pcVar1)(param_2,&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#3}::
                               operator()()::sname,local_58);
    if (cVar2 == '\0') {
      Callable::~Callable((Callable *)local_58);
      pcVar1 = *(code **)(*(long *)param_2 + 0x108);
      create_custom_callable_function_pointer<RetargetModifier3D>
                (local_58,(char *)this,(_func_void *)"&RetargetModifier3D::cache_rests");
      if (_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#4}::operator()()::sname == '\0') {
        iVar3 = __cxa_guard_acquire(&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#4}::
                                     operator()()::sname);
        if (iVar3 != 0) {
          _scs_create((char *)&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#4}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#4}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#4}::
                               operator()()::sname);
        }
      }
      (*pcVar1)(param_2,&_skeleton_changed(Skeleton3D*,Skeleton3D*)::{lambda()#4}::operator()()::
                         sname,local_58,0);
    }
    Callable::~Callable((Callable *)local_58);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    cache_rests(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RetargetModifier3D::cache_rests_with_reset() */

void __thiscall RetargetModifier3D::cache_rests_with_reset(RetargetModifier3D *this)

{
  _reset_child_skeleton_poses(this);
  cache_rests(this);
  return;
}



/* RetargetModifier3D::_profile_changed(Ref<SkeletonProfile>, Ref<SkeletonProfile>) */

void __thiscall
RetargetModifier3D::_profile_changed(RetargetModifier3D *this,long *param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  RetargetModifier3D local_58 [24];
  long local_40;
  
  plVar1 = (long *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar1 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar1 + 0x118);
    create_custom_callable_function_pointer<RetargetModifier3D>
              (local_58,(char *)this,(_func_void *)"&RetargetModifier3D::cache_rests_with_reset");
    if (_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::{lambda()#1}::operator()()::
        sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                                   {lambda()#1}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                             {lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::{lambda()#1}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                             {lambda()#1}::operator()()::sname);
      }
    }
    cVar4 = (*pcVar2)(plVar1,&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                              {lambda()#1}::operator()()::sname,local_58);
    if (cVar4 != '\0') {
      Callable::~Callable((Callable *)local_58);
      param_2 = (long *)*param_2;
      pcVar2 = *(code **)(*param_2 + 0x110);
      create_custom_callable_function_pointer<RetargetModifier3D>
                (local_58,(char *)this,(_func_void *)"&RetargetModifier3D::cache_rests_with_reset");
      if (_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::{lambda()#2}::operator()()::
          sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                                     {lambda()#2}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                               {lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::{lambda()#2}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                               {lambda()#2}::operator()()::sname);
        }
      }
      (*pcVar2)(param_2,&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::{lambda()#2}::
                         operator()()::sname,local_58);
    }
    Callable::~Callable((Callable *)local_58);
  }
  pOVar3 = (Object *)*param_3;
  pOVar6 = *(Object **)(this + 0x550);
  if (pOVar3 != pOVar6) {
    *(Object **)(this + 0x550) = pOVar3;
    if (pOVar3 != (Object *)0x0) {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        *(undefined8 *)(this + 0x550) = 0;
      }
    }
    if (pOVar6 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(pOVar6);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
          Memory::free_static(pOVar6,false);
        }
      }
    }
    pOVar6 = (Object *)*param_3;
  }
  if (pOVar6 != (Object *)0x0) {
    pcVar2 = *(code **)(*(long *)pOVar6 + 0x118);
    create_custom_callable_function_pointer<RetargetModifier3D>
              (local_58,(char *)this,(_func_void *)"&RetargetModifier3D::cache_rests_with_reset");
    if (_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::{lambda()#3}::operator()()::
        sname == '\0') {
      iVar5 = __cxa_guard_acquire(&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                                   {lambda()#3}::operator()()::sname);
      if (iVar5 != 0) {
        _scs_create((char *)&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                             {lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::{lambda()#3}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                             {lambda()#3}::operator()()::sname);
      }
    }
    cVar4 = (*pcVar2)(pOVar6,&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                              {lambda()#3}::operator()()::sname,local_58);
    if (cVar4 == '\0') {
      Callable::~Callable((Callable *)local_58);
      param_3 = (long *)*param_3;
      pcVar2 = *(code **)(*param_3 + 0x108);
      create_custom_callable_function_pointer<RetargetModifier3D>
                (local_58,(char *)this,(_func_void *)"&RetargetModifier3D::cache_rests_with_reset");
      if (_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::{lambda()#4}::operator()()::
          sname == '\0') {
        iVar5 = __cxa_guard_acquire(&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                                     {lambda()#4}::operator()()::sname);
        if (iVar5 != 0) {
          _scs_create((char *)&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                               {lambda()#4}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::{lambda()#4}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::
                               {lambda()#4}::operator()()::sname);
        }
      }
      (*pcVar2)(param_3,&_profile_changed(Ref<SkeletonProfile>,Ref<SkeletonProfile>)::{lambda()#4}::
                         operator()()::sname,local_58,0);
    }
    Callable::~Callable((Callable *)local_58);
  }
  _reset_child_skeleton_poses(this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    cache_rests(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RetargetModifier3D::set_profile(Ref<SkeletonProfile>) */

void __thiscall RetargetModifier3D::set_profile(RetargetModifier3D *this,long *param_2)

{
  char cVar1;
  Object *pOVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Object *local_30;
  Object *local_28;
  long local_20;
  
  pOVar3 = *(Object **)(this + 0x550);
  pOVar2 = (Object *)*param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar3 != pOVar2) {
    if (pOVar2 == (Object *)0x0) {
      local_30 = (Object *)0x0;
    }
    else {
      local_30 = pOVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_30 = (Object *)0x0;
        pOVar3 = *(Object **)(this + 0x550);
        pOVar2 = (Object *)0x0;
      }
      else {
        pOVar3 = *(Object **)(this + 0x550);
      }
    }
    if (pOVar3 == (Object *)0x0) {
LAB_00104e59:
      local_28 = (Object *)0x0;
      _profile_changed(this,&local_28,&local_30);
    }
    else {
      local_28 = pOVar3;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') goto LAB_00104e59;
      _profile_changed(this,&local_28,&local_30);
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(pOVar3);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
      }
    }
    if (pOVar2 != (Object *)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
        cVar1 = predelete_handler(pOVar2);
        if (cVar1 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
            Memory::free_static(pOVar2,false);
            return;
          }
          goto LAB_00104f5e;
        }
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104f5e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RetargetModifier3D::set_use_global_pose(bool) */

void __thiscall RetargetModifier3D::set_use_global_pose(RetargetModifier3D *this,bool param_1)

{
  if (this[0x558] != (RetargetModifier3D)param_1) {
    this[0x558] = (RetargetModifier3D)param_1;
    _reset_child_skeleton_poses(this);
    cache_rests(this);
    Object::notify_property_list_changed();
    return;
  }
  return;
}



/* RetargetModifier3D::_update_child_skeletons() */

void __thiscall RetargetModifier3D::_update_child_skeletons(RetargetModifier3D *this)

{
  CowData<RetargetModifier3D::RetargetInfo> *this_00;
  long *plVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  Callable local_b8 [16];
  long local_a8 [2];
  undefined8 local_98 [2];
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _reset_child_skeleton_poses(this);
  this_00 = (CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570);
  if ((*(long *)(this + 0x570) != 0) && (*(long *)(*(long *)(this + 0x570) + -8) != 0)) {
    CowData<RetargetModifier3D::RetargetInfo>::_unref(this_00);
  }
  iVar8 = 0;
  do {
    iVar3 = Node::get_child_count(SUB81(this,0));
    if (iVar3 <= iVar8) {
      cache_rests(this);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Node::update_configuration_warnings();
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar5 = Node::get_child((int)this,SUB41(iVar8,0));
    if (lVar5 != 0) {
      plVar6 = (long *)__dynamic_cast(lVar5,&Object::typeinfo,&Skeleton3D::typeinfo,0);
      if (plVar6 != (long *)0x0) {
        local_a8[0] = plVar6[0xc];
        if (*(long *)(this + 0x570) == 0) {
          lVar5 = 1;
          iVar3 = 0;
        }
        else {
          lVar5 = *(long *)(*(long *)(this + 0x570) + -8);
          iVar3 = (int)lVar5;
          lVar5 = lVar5 + 1;
        }
        local_98[0] = 0;
        iVar4 = CowData<RetargetModifier3D::RetargetInfo>::resize<false>(this_00,lVar5);
        if (iVar4 == 0) {
          if (*(long *)(this + 0x570) == 0) {
            lVar7 = -1;
            lVar5 = 0;
          }
          else {
            lVar5 = *(long *)(*(long *)(this + 0x570) + -8);
            lVar7 = lVar5 + -1;
            if (-1 < lVar7) {
              CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write(this_00);
              plVar1 = (long *)(*(long *)(this + 0x570) + lVar7 * 0x18);
              *plVar1 = local_a8[0];
              if (plVar1[2] != 0) {
                CowData<RetargetModifier3D::RetargetBoneInfo>::_ref
                          ((CowData<RetargetModifier3D::RetargetBoneInfo> *)(plVar1 + 2),
                           (CowData *)local_98);
              }
              goto LAB_00105117;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar5,"p_index","size()","",false
                     ,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_00105117:
        pcVar2 = *(code **)(*plVar6 + 0x108);
        create_custom_callable_function_pointer<RetargetModifier3D,int>
                  ((RetargetModifier3D *)local_b8,(char *)this,
                   (_func_void_int *)"&RetargetModifier3D::_update_child_skeleton_rests");
        Variant::Variant((Variant *)local_78,iVar3);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88 = (Variant *)local_78;
        Callable::bindp((Variant **)local_a8,(int)local_b8);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (_update_child_skeletons()::{lambda()#1}::operator()()::sname == '\0') {
          iVar3 = __cxa_guard_acquire(&_update_child_skeletons()::{lambda()#1}::operator()()::sname)
          ;
          if (iVar3 != 0) {
            _scs_create((char *)&_update_child_skeletons()::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_update_child_skeletons()::{lambda()#1}::operator()()::sname,&__dso_handle
                        );
            __cxa_guard_release(&_update_child_skeletons()::{lambda()#1}::operator()()::sname);
          }
        }
        (*pcVar2)(plVar6,&_update_child_skeletons()::{lambda()#1}::operator()()::sname,
                  (Callable *)local_a8);
        Callable::~Callable((Callable *)local_a8);
        Callable::~Callable(local_b8);
      }
    }
    iVar8 = iVar8 + 1;
  } while( true );
}



/* RetargetModifier3D::move_child_notify(Node*) */

void __thiscall RetargetModifier3D::move_child_notify(RetargetModifier3D *this,Node *param_1)

{
  long lVar1;
  
  if (param_1 == (Node *)0x0) {
    return;
  }
  lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&Skeleton3D::typeinfo,0);
  if (lVar1 != 0) {
    _update_child_skeletons(this);
    return;
  }
  return;
}



/* RetargetModifier3D::_notification(int) */

void __thiscall RetargetModifier3D::_notification(RetargetModifier3D *this,int param_1)

{
  if (param_1 == 10) {
    _update_child_skeletons(this);
    return;
  }
  if (param_1 == 0xb) {
    _reset_child_skeleton_poses(this);
    if ((*(long *)(this + 0x570) != 0) && (*(long *)(*(long *)(this + 0x570) + -8) != 0)) {
      CowData<RetargetModifier3D::RetargetInfo>::_unref
                ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
      return;
    }
  }
  return;
}



/* RetargetModifier3D::_retarget_global_pose() */

void __thiscall RetargetModifier3D::_retarget_global_pose(RetargetModifier3D *this)

{
  CowData<int> *this_00;
  uint *puVar1;
  float fVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [16];
  int iVar9;
  long lVar10;
  undefined8 *puVar11;
  ulong uVar12;
  void *pvVar13;
  undefined8 *puVar14;
  uint uVar15;
  ulong *puVar16;
  int iVar17;
  ulong uVar18;
  ulong *puVar19;
  long lVar20;
  long lVar21;
  ulong *puVar22;
  int *piVar23;
  int *piVar24;
  long lVar25;
  long in_FS_OFFSET;
  bool bVar26;
  float fVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined8 local_178;
  void *local_170;
  undefined1 local_168 [48];
  undefined1 local_138 [48];
  float local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  float local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  undefined8 uStack_b4;
  undefined4 uStack_ac;
  float local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  float local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58 [8];
  undefined4 uStack_50;
  undefined4 uStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = SkeletonModifier3D::get_skeleton();
  if ((*(long *)(this + 0x550) != 0) && (lVar10 != 0)) {
    this_00 = (CowData<int> *)(this + 0x580);
    local_178 = 0;
    local_170 = (void *)0x0;
    if (*(float *)(this + 0x52c) <= _LC68 && _LC68 != *(float *)(this + 0x52c)) {
      CowData<int>::_copy_on_write(this_00);
      piVar23 = *(int **)(this + 0x580);
      CowData<int>::_copy_on_write(this_00);
      piVar24 = *(int **)(this + 0x580);
      if (piVar24 != (int *)0x0) {
        piVar24 = piVar24 + *(long *)(piVar24 + -2);
      }
      if (piVar23 != piVar24) {
        pvVar13 = (void *)0x0;
        uVar18 = 0;
        fVar27 = _LC68;
        iVar9 = 0;
        while( true ) {
          uVar30 = 0;
          uVar29 = 0;
          uVar28 = 0;
          if (*piVar23 < 0) {
            uStack_e4 = 0;
            uStack_e0 = 0;
            uStack_dc = 0;
            local_108 = fVar27;
            uStack_104 = uVar28;
            uStack_100 = uVar29;
            uStack_fc = uVar30;
            local_e8 = _LC68;
            fVar33 = fVar27;
          }
          else {
            Skeleton3D::get_bone_global_rest((int)local_168);
            fVar27 = *(float *)(this + 0x52c);
            Skeleton3D::get_bone_global_pose((int)local_138);
            Transform3D::interpolate_with((Transform3D *)&local_108,fVar27);
            fVar27 = local_f8;
            uVar28 = uStack_f4;
            uVar29 = uStack_f0;
            uVar30 = uStack_ec;
            fVar33 = _LC68;
          }
          local_88 = CONCAT44(uStack_e4,local_e8);
          uStack_80 = CONCAT44(uStack_dc,uStack_e0);
          iVar17 = (int)uVar18;
          local_f8 = fVar27;
          uStack_f4 = uVar28;
          uStack_f0 = uVar29;
          uStack_ec = uVar30;
          local_a8 = local_108;
          uStack_a4 = uStack_104;
          uStack_a0 = uStack_100;
          uStack_9c = uStack_fc;
          local_98 = fVar27;
          uStack_94 = uVar28;
          uStack_90 = uVar29;
          uStack_8c = uVar30;
          if (iVar17 == iVar9) {
            uVar12 = (ulong)(uint)(iVar17 * 2);
            if (iVar17 * 2 == 0) {
              uVar12 = 1;
            }
            local_178 = CONCAT44((int)uVar12,(uint)local_178);
            pvVar13 = (void *)Memory::realloc_static(pvVar13,uVar12 * 0x30,false);
            fVar33 = _LC68;
            local_170 = pvVar13;
            if (pvVar13 == (void *)0x0) {
              local_170 = (void *)0x0;
              goto LAB_0010576d;
            }
          }
          piVar23 = piVar23 + 1;
          local_178 = CONCAT44(local_178._4_4_,iVar17 + 1U);
          puVar11 = (undefined8 *)(uVar18 * 0x30 + (long)pvVar13);
          *puVar11 = CONCAT44(uStack_a4,local_a8);
          puVar11[1] = CONCAT44(uStack_9c,uStack_a0);
          auVar8._8_8_ = uStack_80;
          auVar8._0_8_ = local_88;
          puVar11[2] = CONCAT44(uStack_94,local_98);
          puVar11[3] = CONCAT44(uStack_8c,uStack_90);
          *(undefined1 (*) [16])(puVar11 + 4) = auVar8;
          if (piVar24 == piVar23) break;
          uVar18 = (ulong)(iVar17 + 1U);
          fVar27 = fVar33;
          iVar9 = local_178._4_4_;
        }
      }
    }
    else {
      CowData<int>::_copy_on_write(this_00);
      piVar23 = *(int **)(this + 0x580);
      CowData<int>::_copy_on_write(this_00);
      piVar24 = *(int **)(this + 0x580);
      if (piVar24 != (int *)0x0) {
        piVar24 = piVar24 + *(long *)(piVar24 + -2);
      }
      if (piVar23 != piVar24) {
        pvVar13 = (void *)0x0;
        uVar18 = 0;
        fVar27 = _LC68;
        iVar9 = 0;
        do {
          uVar30 = 0;
          uVar29 = 0;
          uVar28 = 0;
          if (*piVar23 < 0) {
            uStack_b4 = 0;
            uStack_ac = 0;
            local_d8 = fVar27;
            uStack_d4 = uVar28;
            uStack_d0 = uVar29;
            uStack_cc = uVar30;
            local_b8 = _LC68;
            fVar33 = fVar27;
          }
          else {
            Skeleton3D::get_bone_global_pose((int)&local_d8);
            fVar27 = local_c8;
            uVar28 = uStack_c4;
            uVar29 = uStack_c0;
            uVar30 = uStack_bc;
            fVar33 = _LC68;
          }
          unique0x10000ae2 = uStack_b4;
          local_58._0_4_ = local_b8;
          uStack_4c = uStack_ac;
          local_78 = CONCAT44(uStack_d4,local_d8);
          uStack_70 = CONCAT44(uStack_cc,uStack_d0);
          local_68 = CONCAT44(uVar28,fVar27);
          uStack_60 = CONCAT44(uVar30,uVar29);
          iVar17 = (int)uVar18;
          local_c8 = fVar27;
          uStack_c4 = uVar28;
          uStack_c0 = uVar29;
          uStack_bc = uVar30;
          if (iVar17 == iVar9) {
            uVar12 = (ulong)(uint)(iVar17 * 2);
            if (iVar17 * 2 == 0) {
              uVar12 = 1;
            }
            local_178 = CONCAT44((int)uVar12,(uint)local_178);
            pvVar13 = (void *)Memory::realloc_static(pvVar13,uVar12 * 0x30,false);
            fVar33 = _LC68;
            local_170 = pvVar13;
            if (pvVar13 == (void *)0x0) {
LAB_0010576d:
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar3 = (code *)invalidInstructionException();
              (*pcVar3)();
            }
          }
          piVar23 = piVar23 + 1;
          local_178 = CONCAT44(local_178._4_4_,iVar17 + 1U);
          puVar11 = (undefined8 *)(uVar18 * 0x30 + (long)pvVar13);
          *puVar11 = local_78;
          puVar11[1] = uStack_70;
          puVar11[2] = local_68;
          puVar11[3] = uStack_60;
          *(undefined4 *)(puVar11 + 4) = local_58._0_4_;
          *(undefined4 *)((long)puVar11 + 0x24) = local_58._4_4_;
          *(undefined4 *)(puVar11 + 5) = uStack_50;
          *(undefined4 *)((long)puVar11 + 0x2c) = uStack_4c;
          if (piVar24 == piVar23) break;
          uVar18 = (ulong)(iVar17 + 1U);
          fVar27 = fVar33;
          iVar9 = local_178._4_4_;
        } while( true );
      }
    }
    CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
              ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
    puVar22 = *(ulong **)(this + 0x570);
    CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
              ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
    puVar19 = *(ulong **)(this + 0x570);
    if (puVar19 != (ulong *)0x0) {
      puVar19 = puVar19 + puVar19[-1] * 3;
    }
    puVar11 = &local_78;
    for (; puVar22 != puVar19; puVar22 = puVar22 + 3) {
      uVar15 = (uint)*puVar22 & 0xffffff;
      if (uVar15 < (uint)ObjectDB::slot_max) {
        while( true ) {
          LOCK();
          bVar26 = (char)ObjectDB::spin_lock == '\0';
          if (bVar26) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar26) break;
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar16 = (ulong *)((ulong)uVar15 * 0x10 + ObjectDB::object_slots);
        if ((*puVar22 >> 0x18 & 0x7fffffffff) == (*puVar16 & 0x7fffffffff)) {
          uVar18 = puVar16[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if (((uVar18 != 0) &&
              (lVar10 = __dynamic_cast(uVar18,&Object::typeinfo,&Skeleton3D::typeinfo,0),
              lVar10 != 0)) && (lVar20 = *(long *)(this + 0x580), lVar20 != 0)) {
            lVar25 = 0;
            do {
              if (*(long *)(lVar20 + -8) <= lVar25) break;
              uVar18 = puVar22[2];
              if (uVar18 == 0) {
                lVar21 = 0;
LAB_00105a75:
                _err_print_index_error
                          ("get","./core/templates/cowdata.h",0xdb,lVar25,lVar21,"p_index","size()",
                           "",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar3 = (code *)invalidInstructionException();
                (*pcVar3)();
              }
              lVar21 = *(long *)(uVar18 - 8);
              if (lVar21 <= lVar25) goto LAB_00105a75;
              puVar1 = (uint *)(uVar18 + lVar25 * 0x4c);
              if (-1 < (int)*puVar1) {
                if ((uint)local_178 <= (uint)lVar25) {
                  _err_print_index_error
                            ("operator[]","./core/templates/local_vector.h",0xb2,lVar25,
                             local_178 & 0xffffffff,"p_index","count","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar3 = (code *)invalidInstructionException();
                  (*pcVar3)();
                }
                puVar14 = (undefined8 *)(lVar25 * 0x30 + (long)local_170);
                local_78._0_4_ = (float)*puVar14;
                local_78._4_4_ = (float)((ulong)*puVar14 >> 0x20);
                uStack_70._4_4_ = (float)((ulong)puVar14[1] >> 0x20);
                local_68._0_4_ = (float)puVar14[2];
                uStack_60._0_4_ = (float)puVar14[3];
                uStack_60._4_4_ = (float)((ulong)puVar14[3] >> 0x20);
                fVar4 = (float)puVar1[10];
                fVar5 = (float)puVar1[0xb];
                fVar6 = (float)puVar1[0xd];
                fVar27 = (float)puVar1[0x12];
                fVar7 = (float)puVar1[0xe];
                fVar33 = (float)puVar1[0x11];
                local_58._0_4_ = (undefined4)*(undefined8 *)*(undefined1 (*) [16])(puVar14 + 4);
                uVar28 = local_58._0_4_;
                fVar34 = (float)puVar1[0xf] * local_78._4_4_;
                fVar2 = (float)puVar1[0x10];
                local_68._4_4_ = (float)((ulong)puVar14[2] >> 0x20);
                fVar35 = (float)puVar1[0xc] * (float)local_78;
                fVar31 = fVar5 * uStack_70._4_4_;
                fVar32 = (float)puVar1[0xc] * uStack_70._4_4_;
                uStack_70._0_4_ = (float)puVar14[1];
                stack0xffffffffffffffac = SUB1612(*(undefined1 (*) [16])(puVar14 + 4),4);
                local_58._0_4_ =
                     (float)puVar1[0xc] * (float)uStack_60 + (float)puVar1[0xf] * uStack_60._4_4_ +
                     fVar27 * (float)local_58._0_4_;
                local_78 = CONCAT44(fVar7 * local_78._4_4_ + fVar5 * (float)local_78 +
                                    (float)uStack_70 * fVar33,
                                    fVar6 * local_78._4_4_ + fVar4 * (float)local_78 +
                                    (float)uStack_70 * fVar2);
                uStack_70 = CONCAT44(fVar6 * (float)local_68 + fVar4 * uStack_70._4_4_ +
                                     local_68._4_4_ * fVar2,
                                     fVar34 + fVar35 + (float)uStack_70 * fVar27);
                local_68 = CONCAT44((float)puVar1[0xf] * (float)local_68 + fVar32 +
                                    local_68._4_4_ * fVar27,
                                    fVar7 * (float)local_68 + fVar31 + local_68._4_4_ * fVar33);
                uStack_60 = CONCAT44(fVar7 * uStack_60._4_4_ + fVar5 * (float)uStack_60 +
                                     (float)uVar28 * fVar33,
                                     fVar6 * uStack_60._4_4_ + fVar4 * (float)uStack_60 +
                                     (float)uVar28 * fVar2);
                Skeleton3D::set_bone_global_pose((int)lVar10,(Transform3D *)(ulong)*puVar1);
                lVar20 = *(long *)(this + 0x580);
              }
              lVar25 = lVar25 + 1;
            } while (lVar20 != 0);
          }
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0,puVar11);
      }
    }
    if ((local_170 != (void *)0x0) &&
       (LocalVector<Transform3D,unsigned_int,false,false>::resize
                  ((LocalVector<Transform3D,unsigned_int,false,false> *)&local_178,0),
       local_170 != (void *)0x0)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(local_170,false);
        return;
      }
      goto LAB_00105c14;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00105c14:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RetargetModifier3D::_retarget_pose() */

void __thiscall RetargetModifier3D::_retarget_pose(RetargetModifier3D *this)

{
  CowData<int> *this_00;
  code *pcVar1;
  undefined8 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long lVar15;
  undefined8 *puVar16;
  undefined1 (*pauVar17) [16];
  ulong uVar18;
  void *pvVar19;
  uint *puVar20;
  ulong uVar21;
  uint uVar22;
  int *piVar23;
  ulong *puVar24;
  int iVar25;
  long lVar26;
  int iVar27;
  long lVar28;
  int *piVar29;
  ulong *puVar30;
  ulong *puVar31;
  long lVar32;
  long in_FS_OFFSET;
  bool bVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  undefined4 extraout_XMM1_Da;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  undefined8 local_178;
  void *local_170;
  undefined1 local_168 [48];
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  Transform3D local_108 [16];
  float local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  float local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined1 local_d8 [16];
  float local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 local_a8 [16];
  float local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78 [16];
  float local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = SkeletonModifier3D::get_skeleton();
  if ((*(long *)(this + 0x550) != 0) && (lVar15 != 0)) {
    this_00 = (CowData<int> *)(this + 0x580);
    local_178 = 0;
    local_170 = (void *)0x0;
    if (*(float *)(this + 0x52c) <= _LC68 && _LC68 != *(float *)(this + 0x52c)) {
      CowData<int>::_copy_on_write(this_00);
      piVar29 = *(int **)(this + 0x580);
      CowData<int>::_copy_on_write(this_00);
      piVar23 = *(int **)(this + 0x580);
      if (piVar23 != (int *)0x0) {
        piVar23 = piVar23 + *(long *)(piVar23 + -2);
      }
      if (piVar29 != piVar23) {
        pvVar19 = (void *)0x0;
        uVar21 = 0;
        fVar34 = _LC68;
        iVar25 = 0;
        while( true ) {
          uVar38 = 0;
          uVar37 = 0;
          uVar36 = 0;
          if (*piVar29 < 0) {
            local_108 = (Transform3D  [16])ZEXT416((uint)fVar34);
            uStack_e4 = 0;
            uStack_e0 = 0;
            uStack_dc = 0;
            fVar35 = fVar34;
            local_e8 = _LC68;
          }
          else {
            Skeleton3D::get_bone_rest((int)local_168);
            fVar34 = *(float *)(this + 0x52c);
            Skeleton3D::get_bone_pose((int)&local_138);
            Transform3D::interpolate_with(local_108,fVar34);
            fVar34 = local_f8;
            uVar36 = uStack_f4;
            uVar37 = uStack_f0;
            uVar38 = uStack_ec;
            fVar35 = _LC68;
          }
          local_88 = CONCAT44(uStack_e4,local_e8);
          uStack_80 = CONCAT44(uStack_dc,uStack_e0);
          iVar27 = (int)uVar21;
          local_f8 = fVar34;
          uStack_f4 = uVar36;
          uStack_f0 = uVar37;
          uStack_ec = uVar38;
          local_a8 = (undefined1  [16])local_108;
          local_98 = fVar34;
          uStack_94 = uVar36;
          uStack_90 = uVar37;
          uStack_8c = uVar38;
          if (iVar27 == iVar25) {
            uVar18 = (ulong)(uint)(iVar27 * 2);
            if (iVar27 * 2 == 0) {
              uVar18 = 1;
            }
            local_178 = CONCAT44((int)uVar18,(uint)local_178);
            pvVar19 = (void *)Memory::realloc_static(pvVar19,uVar18 * 0x30,false);
            fVar35 = _LC68;
            local_170 = pvVar19;
            if (pvVar19 == (void *)0x0) {
              local_170 = (void *)0x0;
              goto LAB_00105ff6;
            }
          }
          auVar13._4_4_ = uStack_94;
          auVar13._0_4_ = local_98;
          auVar13._8_4_ = uStack_90;
          auVar13._12_4_ = uStack_8c;
          piVar29 = piVar29 + 1;
          local_178 = CONCAT44(local_178._4_4_,iVar27 + 1U);
          pauVar17 = (undefined1 (*) [16])(uVar21 * 0x30 + (long)pvVar19);
          *pauVar17 = local_a8;
          pauVar17[1] = auVar13;
          *(undefined8 *)pauVar17[2] = local_88;
          *(undefined8 *)(pauVar17[2] + 8) = uStack_80;
          if (piVar23 == piVar29) break;
          uVar21 = (ulong)(iVar27 + 1U);
          fVar34 = fVar35;
          iVar25 = local_178._4_4_;
        }
      }
    }
    else {
      CowData<int>::_copy_on_write(this_00);
      piVar29 = *(int **)(this + 0x580);
      CowData<int>::_copy_on_write(this_00);
      piVar23 = *(int **)(this + 0x580);
      if (piVar23 != (int *)0x0) {
        piVar23 = piVar23 + *(long *)(piVar23 + -2);
      }
      if (piVar29 != piVar23) {
        pvVar19 = (void *)0x0;
        uVar21 = 0;
        fVar34 = _LC68;
        iVar25 = 0;
        do {
          uVar38 = 0;
          uVar37 = 0;
          uVar36 = 0;
          if (*piVar29 < 0) {
            local_d8 = ZEXT416((uint)fVar34);
            fStack_b4 = 0.0;
            fStack_b0 = 0.0;
            fStack_ac = 0.0;
            fVar35 = fVar34;
            local_b8 = _LC68;
          }
          else {
            Skeleton3D::get_bone_pose((int)local_d8);
            fVar34 = local_c8;
            uVar36 = uStack_c4;
            uVar37 = uStack_c0;
            uVar38 = uStack_bc;
            fVar35 = _LC68;
          }
          fStack_54 = fStack_b4;
          fStack_50 = fStack_b0;
          fStack_4c = fStack_ac;
          iVar27 = (int)uVar21;
          local_c8 = fVar34;
          uStack_c4 = uVar36;
          uStack_c0 = uVar37;
          uStack_bc = uVar38;
          local_78 = local_d8;
          local_68 = fVar34;
          uStack_64 = uVar36;
          uStack_60 = uVar37;
          uStack_5c = uVar38;
          local_58 = local_b8;
          if (iVar27 == iVar25) {
            uVar18 = (ulong)(uint)(iVar27 * 2);
            if (iVar27 * 2 == 0) {
              uVar18 = 1;
            }
            local_178 = CONCAT44((int)uVar18,(uint)local_178);
            pvVar19 = (void *)Memory::realloc_static(pvVar19,uVar18 * 0x30,false);
            fVar35 = _LC68;
            local_170 = pvVar19;
            if (pvVar19 == (void *)0x0) {
LAB_00105ff6:
              _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                               "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
          }
          piVar29 = piVar29 + 1;
          local_178 = CONCAT44(local_178._4_4_,iVar27 + 1U);
          puVar16 = (undefined8 *)(uVar21 * 0x30 + (long)pvVar19);
          *puVar16 = local_78._0_8_;
          puVar16[1] = local_78._8_8_;
          auVar14._4_4_ = uStack_64;
          auVar14._0_4_ = local_68;
          auVar14._8_4_ = uStack_60;
          auVar14._12_4_ = uStack_5c;
          *(undefined1 (*) [16])(puVar16 + 2) = auVar14;
          puVar16[4] = CONCAT44(fStack_54,local_58);
          puVar16[5] = CONCAT44(fStack_4c,fStack_50);
          if (piVar23 == piVar29) break;
          uVar21 = (ulong)(iVar27 + 1U);
          fVar34 = fVar35;
          iVar25 = local_178._4_4_;
        } while( true );
      }
    }
    CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
              ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
    puVar30 = *(ulong **)(this + 0x570);
    CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write
              ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570));
    puVar31 = *(ulong **)(this + 0x570);
    if (puVar31 != (ulong *)0x0) {
      puVar31 = puVar31 + puVar31[-1] * 3;
    }
    for (; puVar30 != puVar31; puVar30 = puVar30 + 3) {
      uVar22 = (uint)*puVar30 & 0xffffff;
      if (uVar22 < (uint)ObjectDB::slot_max) {
        while( true ) {
          LOCK();
          bVar33 = (char)ObjectDB::spin_lock == '\0';
          if (bVar33) {
            ObjectDB::spin_lock._0_1_ = '\x01';
          }
          UNLOCK();
          if (bVar33) break;
          do {
          } while ((char)ObjectDB::spin_lock != '\0');
        }
        puVar24 = (ulong *)((ulong)uVar22 * 0x10 + ObjectDB::object_slots);
        if ((*puVar30 >> 0x18 & 0x7fffffffff) == (*puVar24 & 0x7fffffffff)) {
          uVar21 = puVar24[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if ((uVar21 != 0) &&
             (lVar15 = __dynamic_cast(uVar21,&Object::typeinfo,&Skeleton3D::typeinfo,0), lVar15 != 0
             )) {
            fVar34 = (float)Skeleton3D::get_motion_scale();
            fVar35 = (float)Skeleton3D::get_motion_scale();
            lVar32 = *(long *)(this + 0x580);
            fVar34 = fVar34 / fVar35;
            if (lVar32 != 0) {
              lVar28 = 0;
              do {
                if (*(long *)(lVar32 + -8) <= lVar28) break;
                uVar21 = puVar30[2];
                if (uVar21 == 0) {
LAB_001066dc:
                  lVar26 = 0;
LAB_001066e2:
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,lVar28,lVar26,"p_index",
                             "size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar1 = (code *)invalidInstructionException();
                  (*pcVar1)();
                }
                lVar26 = *(long *)(uVar21 - 8);
                if (lVar26 <= lVar28) goto LAB_001066e2;
                puVar20 = (uint *)(uVar21 + lVar28 * 0x4c);
                uVar22 = *puVar20;
                if ((-1 < (int)uVar22) && (-1 < *(int *)(lVar32 + lVar28 * 4))) {
                  if ((uint)local_178 <= (uint)lVar28) {
                    _err_print_index_error
                              ("operator[]","./core/templates/local_vector.h",0xb2,lVar28,
                               local_178 & 0xffffffff,"p_index","count","",false,true);
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar1 = (code *)invalidInstructionException();
                    (*pcVar1)();
                  }
                  puVar16 = (undefined8 *)(lVar28 * 0x30 + (long)local_170);
                  local_138._0_4_ = (float)*puVar16;
                  local_138._4_4_ = (float)((ulong)*puVar16 >> 0x20);
                  uStack_130._0_4_ = (float)puVar16[1];
                  uStack_130._4_4_ = (float)((ulong)puVar16[1] >> 0x20);
                  local_128._0_4_ = (float)puVar16[2];
                  local_128._4_4_ = (float)((ulong)puVar16[2] >> 0x20);
                  uStack_120._0_4_ = (float)puVar16[3];
                  uStack_120._4_4_ = (float)((ulong)puVar16[3] >> 0x20);
                  local_118 = (float)puVar16[4];
                  fStack_114 = (float)((ulong)puVar16[4] >> 0x20);
                  fStack_110 = (float)puVar16[5];
                  fStack_10c = (float)((ulong)puVar16[5] >> 0x20);
                  fVar44 = (float)puVar20[5];
                  fVar3 = (float)puVar20[6];
                  fVar43 = (float)puVar20[7];
                  fVar4 = (float)puVar20[8];
                  fVar5 = (float)puVar20[1];
                  fVar6 = (float)puVar20[2];
                  fVar7 = (float)puVar20[3];
                  fVar8 = (float)puVar20[4];
                  fVar9 = (float)puVar20[9];
                  fVar10 = (float)puVar20[10];
                  fVar11 = (float)puVar20[0xb];
                  fVar52 = (float)uStack_130 * fVar8;
                  fVar53 = (float)uStack_130 * fVar8;
                  fVar55 = (float)uStack_130 * fVar43;
                  fVar59 = local_128._4_4_ * fVar4;
                  fVar61 = fVar8 * local_138._4_4_;
                  fVar62 = fVar8 * local_138._4_4_;
                  fVar63 = fVar43 * local_138._4_4_;
                  fVar66 = local_138._4_4_ * fVar5;
                  fVar67 = local_138._4_4_ * fVar8;
                  fVar56 = local_118 * fVar3;
                  fVar57 = local_118 * fVar3;
                  fVar60 = local_118 * fVar9;
                  fVar68 = fVar4 * (float)local_128;
                  fVar54 = (float)uStack_130 * fVar43 + local_128._4_4_ * fVar4 + local_118 * fVar9;
                  fVar35 = (float)puVar20[0x12];
                  fVar45 = fVar8 * (float)local_138;
                  fVar46 = fVar8 * (float)local_138;
                  fVar48 = fVar43 * (float)local_138;
                  fVar49 = fVar44 * uStack_130._4_4_;
                  fVar50 = fVar44 * uStack_130._4_4_;
                  fVar51 = fVar4 * uStack_130._4_4_;
                  fVar64 = (float)local_138 * fVar5;
                  fVar65 = (float)local_138 * fVar8;
                  fVar58 = fVar4 * (float)local_128 + fVar43 * local_138._4_4_ +
                           uStack_120._4_4_ * fVar9;
                  fVar47 = fVar4 * uStack_130._4_4_ + fVar43 * (float)local_138 +
                           fVar9 * (float)uStack_120;
                  fVar4 = (float)puVar20[0xd];
                  fVar12 = (float)puVar20[0xe];
                  fVar39 = fVar7 * local_118;
                  fVar40 = fVar7 * local_118;
                  fVar41 = fVar7 * local_118;
                  fVar42 = fVar3 * local_118;
                  local_118 = fVar47 * (float)puVar20[0xc] + fVar58 * (float)puVar20[0xf] +
                              fVar54 * fVar35;
                  fVar43 = (float)puVar20[0x10];
                  uVar2 = *(undefined8 *)(puVar20 + 0x10);
                  local_138 = CONCAT44(fVar11 * ((float)uStack_120 * fVar7 +
                                                (float)local_138 * fVar5 + uStack_130._4_4_ * fVar6)
                                       + fVar12 * ((float)local_128 * fVar6 +
                                                   local_138._4_4_ * fVar5 +
                                                  uStack_120._4_4_ * fVar7) +
                                       ((float)uStack_130 * fVar5 + fVar6 * local_128._4_4_ + fVar40
                                       ) * (float)((ulong)uVar2 >> 0x20),
                                       fVar10 * ((float)uStack_120 * fVar7 +
                                                (float)local_138 * fVar5 + uStack_130._4_4_ * fVar6)
                                       + fVar4 * ((float)local_128 * fVar6 + local_138._4_4_ * fVar5
                                                 + uStack_120._4_4_ * fVar7) +
                                       ((float)uStack_130 * fVar5 + fVar6 * local_128._4_4_ + fVar39
                                       ) * (float)uVar2);
                  uStack_130 = CONCAT44(fVar10 * ((float)uStack_120 * fVar3 +
                                                 fVar65 + uStack_130._4_4_ * fVar44) +
                                        fVar4 * ((float)local_128 * fVar44 + fVar67 +
                                                uStack_120._4_4_ * fVar3) +
                                        ((float)uStack_130 * fVar8 + fVar44 * local_128._4_4_ +
                                        fVar42) * fVar43,
                                        (float)puVar20[0xc] *
                                        ((float)uStack_120 * fVar7 +
                                        fVar64 + uStack_130._4_4_ * fVar6) +
                                        (float)puVar20[0xf] *
                                        ((float)local_128 * fVar6 + fVar66 +
                                        uStack_120._4_4_ * fVar7) +
                                        ((float)uStack_130 * fVar5 + fVar6 * local_128._4_4_ +
                                        fVar41) * fVar35);
                  local_128 = CONCAT44((float)puVar20[0xc] *
                                       (fVar50 + fVar46 + fVar3 * (float)uStack_120) +
                                       (float)puVar20[0xf] *
                                       (fVar44 * (float)local_128 + fVar62 +
                                       uStack_120._4_4_ * fVar3) +
                                       fVar35 * (fVar53 + local_128._4_4_ * fVar44 + fVar57),
                                       fVar11 * (fVar49 + fVar45 + fVar3 * (float)uStack_120) +
                                       fVar12 * (fVar44 * (float)local_128 + fVar61 +
                                                uStack_120._4_4_ * fVar3) +
                                       (float)puVar20[0x11] *
                                       (fVar52 + local_128._4_4_ * fVar44 + fVar56));
                  uStack_120 = CONCAT44(fVar11 * (fVar51 + fVar48 + fVar9 * (float)uStack_120) +
                                        fVar12 * (fVar68 + fVar63 + uStack_120._4_4_ * fVar9) +
                                        (float)puVar20[0x11] * (fVar55 + fVar59 + fVar60),
                                        fVar10 * fVar47 + fVar4 * fVar58 + fVar43 * fVar54);
                  Skeleton3D::get_bone_rest((int)local_78);
                  uVar21 = puVar30[2];
                  if (uVar21 == 0) goto LAB_001066dc;
                  lVar26 = *(long *)(uVar21 - 8);
                  if (lVar26 <= lVar28) goto LAB_001066e2;
                  lVar32 = lVar28 * 0x4c + uVar21;
                  Skeleton3D::get_bone_rest((int)local_a8);
                  uVar21 = *(ulong *)(this + 0x560);
                  fVar43 = (fStack_110 - (float)uStack_80) * fVar34;
                  fVar44 = (fStack_114 - local_88._4_4_) * fVar34;
                  fVar35 = (fStack_10c - uStack_80._4_4_) * fVar34;
                  fStack_10c = *(float *)(lVar32 + 0x24) * fVar35 +
                               *(float *)(lVar32 + 0x1c) * fVar44 +
                               *(float *)(lVar32 + 0x20) * fVar43 + fStack_4c;
                  fStack_114 = (float)*(undefined8 *)(lVar32 + 4) * fVar44 +
                               fVar43 * *(float *)(lVar32 + 8) +
                               fVar35 * (float)*(undefined8 *)(lVar32 + 0xc) + fStack_54;
                  fStack_110 = (float)((ulong)*(undefined8 *)(lVar32 + 0xc) >> 0x20) * fVar44 +
                               fVar43 * *(float *)(lVar32 + 0x14) +
                               fVar35 * (float)((ulong)*(undefined8 *)(lVar32 + 0x14) >> 0x20) +
                               fStack_50;
                  iVar25 = (int)lVar15;
                  if ((uVar21 & 1) != 0) {
                    Skeleton3D::set_bone_pose_position(iVar25,(Vector3 *)(ulong)uVar22);
                    uVar21 = *(ulong *)(this + 0x560);
                  }
                  if ((uVar21 & 2) != 0) {
                    Basis::get_rotation_quaternion();
                    Skeleton3D::set_bone_pose_rotation(iVar25,(Quaternion *)(ulong)uVar22);
                    uVar21 = *(ulong *)(this + 0x560);
                  }
                  if ((uVar21 & 4) != 0) {
                    uVar2 = Basis::get_scale();
                    local_78._8_4_ = extraout_XMM1_Da;
                    local_78._0_8_ = uVar2;
                    Skeleton3D::set_bone_pose_scale(iVar25,(Vector3 *)(ulong)uVar22);
                  }
                  lVar32 = *(long *)(this + 0x580);
                }
                lVar28 = lVar28 + 1;
              } while (lVar32 != 0);
            }
          }
        }
        else {
          ObjectDB::spin_lock._0_1_ = '\0';
        }
      }
      else {
        _err_print_error("get_instance","./core/object/object.h",0x418,
                         "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      }
    }
    if ((local_170 != (void *)0x0) &&
       (LocalVector<Transform3D,unsigned_int,false,false>::resize
                  ((LocalVector<Transform3D,unsigned_int,false,false> *)&local_178,0),
       local_170 != (void *)0x0)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(local_170,false);
        return;
      }
      goto LAB_001067b1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001067b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RetargetModifier3D::_process_modification() */

void __thiscall RetargetModifier3D::_process_modification(RetargetModifier3D *this)

{
  if (this[0x558] != (RetargetModifier3D)0x0) {
    _retarget_global_pose(this);
    return;
  }
  _retarget_pose(this);
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



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_notification(int) */

void Object::_notification(int param_1)

{
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



/* Node3D::set_transform_gizmo_visible(bool) */

void __thiscall Node3D::set_transform_gizmo_visible(Node3D *this,bool param_1)

{
  this[0x518] = (Node3D)((byte)this[0x518] & 0xfb | param_1 * '\x04');
  return;
}



/* Node3D::is_transform_gizmo_visible() const */

byte __thiscall Node3D::is_transform_gizmo_visible(Node3D *this)

{
  return (byte)this[0x518] >> 2 & 1;
}



/* SkeletonModifier3D::has_process() const */

undefined8 SkeletonModifier3D::has_process(void)

{
  return 0;
}



/* RetargetModifier3D::is_class_ptr(void*) const */

uint __thiscall RetargetModifier3D::is_class_ptr(RetargetModifier3D *this,void *param_1)

{
  return (uint)CONCAT71(0x10f4,(undefined4 *)param_1 ==
                               &SkeletonModifier3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f4,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f4,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f4,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f4,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* RetargetModifier3D::_getv(StringName const&, Variant&) const */

undefined8 RetargetModifier3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RetargetModifier3D::_setv(StringName const&, Variant const&) */

undefined8 RetargetModifier3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RetargetModifier3D::is_processed_on_saving() const */

undefined8 RetargetModifier3D::is_processed_on_saving(void)

{
  return 1;
}



/* CallableCustomMethodPointer<RetargetModifier3D, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RetargetModifier3D,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<RetargetModifier3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RetargetModifier3D,void> *this)

{
  return;
}



/* MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::_gen_argument_type(int) const */

undefined8
MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::get_argument_meta(int) const */

undefined8
MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<BitField<RetargetModifier3D::TransformFlag> >::_gen_argument_type(int) const */

char __thiscall
MethodBindT<BitField<RetargetModifier3D::TransformFlag>>::_gen_argument_type
          (MethodBindT<BitField<RetargetModifier3D::TransformFlag>> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<BitField<RetargetModifier3D::TransformFlag> >::get_argument_meta(int) const */

undefined8 MethodBindT<BitField<RetargetModifier3D::TransformFlag>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTRC<bool>::get_argument_meta(int) const */

undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Ref<SkeletonProfile>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Ref<SkeletonProfile>>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Ref<SkeletonProfile>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Ref<SkeletonProfile>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Ref<SkeletonProfile> >::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Ref<SkeletonProfile>>::_gen_argument_type
          (MethodBindT<Ref<SkeletonProfile>> *this,int param_1)

{
  return -(param_1 == 0) & 0x18;
}



/* MethodBindT<Ref<SkeletonProfile> >::get_argument_meta(int) const */

undefined8 MethodBindT<Ref<SkeletonProfile>>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<RetargetModifier3D, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void,int>::get_argument_count
          (CallableCustomMethodPointer<RetargetModifier3D,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<RetargetModifier3D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void>::get_argument_count
          (CallableCustomMethodPointer<RetargetModifier3D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<RetargetModifier3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RetargetModifier3D,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<RetargetModifier3D, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RetargetModifier3D,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* MethodBindT<Ref<SkeletonProfile> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SkeletonProfile>>::~MethodBindT(MethodBindT<Ref<SkeletonProfile>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f268;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Ref<SkeletonProfile> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SkeletonProfile>>::~MethodBindT(MethodBindT<Ref<SkeletonProfile>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f268;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC(MethodBindTRC<Ref<SkeletonProfile>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f2c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC(MethodBindTRC<Ref<SkeletonProfile>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f2c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<BitField<RetargetModifier3D::TransformFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<RetargetModifier3D::TransformFlag>>::~MethodBindT
          (MethodBindT<BitField<RetargetModifier3D::TransformFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f3e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<BitField<RetargetModifier3D::TransformFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<RetargetModifier3D::TransformFlag>>::~MethodBindT
          (MethodBindT<BitField<RetargetModifier3D::TransformFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f3e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f448;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f448;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f328;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f328;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f388;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010f388;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RetargetModifier3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RetargetModifier3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* RetargetModifier3D::_property_can_revertv(StringName const&) const */

undefined8 RetargetModifier3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113008 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<int>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* RetargetModifier3D::_bind_methods() [clone .cold] */

void RetargetModifier3D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RetargetModifier3D::RetargetBoneInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RetargetModifier3D::RetargetBoneInfo>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<RetargetModifier3D::RetargetInfo>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<RetargetModifier3D, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void,int>::get_object
          (CallableCustomMethodPointer<RetargetModifier3D,void,int> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001071cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001071cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001071cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<RetargetModifier3D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void>::get_object
          (CallableCustomMethodPointer<RetargetModifier3D,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001072cd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001072cd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001072cd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* RetargetModifier3D::_validate_propertyv(PropertyInfo&) const */

void __thiscall
RetargetModifier3D::_validate_propertyv(RetargetModifier3D *this,PropertyInfo *param_1)

{
  char cVar1;
  
  Node::_validate_property((PropertyInfo *)this);
  Node3D::_validate_property((PropertyInfo *)this);
  if ((code *)PTR__validate_property_00113010 != Node3D::_validate_property) {
    SkeletonModifier3D::_validate_property((PropertyInfo *)this);
  }
  if ((this[0x558] != (RetargetModifier3D)0x0) &&
     (cVar1 = String::operator==((String *)(param_1 + 8),"enable_flags"), cVar1 != '\0')) {
    *(undefined4 *)(param_1 + 0x28) = 0;
    return;
  }
  return;
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



/* RetargetModifier3D::_get_class_namev() const */

undefined8 * RetargetModifier3D::_get_class_namev(void)

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
LAB_001074a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001074a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RetargetModifier3D");
      goto LAB_0010750e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RetargetModifier3D");
LAB_0010750e:
  return &_get_class_namev()::_class_name_static;
}



/* RetargetModifier3D::get_class() const */

void RetargetModifier3D::get_class(void)

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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  ulong uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
LAB_0010780f:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00107723;
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
            local_50 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
LAB_00107723:
    uVar5 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar5 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar5;
      }
      goto LAB_0010780f;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* Callable create_custom_callable_function_pointer<RetargetModifier3D>(RetargetModifier3D*, char
   const*, void (RetargetModifier3D::*)()) */

RetargetModifier3D *
create_custom_callable_function_pointer<RetargetModifier3D>
          (RetargetModifier3D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010f148;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<RetargetModifier3D, int>(RetargetModifier3D*,
   char const*, void (RetargetModifier3D::*)(int)) */

RetargetModifier3D *
create_custom_callable_function_pointer<RetargetModifier3D,int>
          (RetargetModifier3D *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010f1d8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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



/* CallableCustomMethodPointer<RetargetModifier3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void>::call
          (CallableCustomMethodPointer<RetargetModifier3D,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107d0f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00107d0f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107ce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00107dd1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00107d0f:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC16,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107dd1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<RetargetModifier3D, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void,int>::call
          (CallableCustomMethodPointer<RetargetModifier3D,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107f98;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00107f98;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC17;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107f47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0010805a;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00107f98:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC16,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010805a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonProfile>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Ref<SkeletonProfile>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = "SkeletonProfile";
  local_40 = 0xf;
  String::parse_latin1((StrRange *)&local_58);
  local_60 = 0;
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
      goto LAB_0010812d;
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
LAB_0010812d:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  puVar1 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = 0;
  local_58 = 0;
  local_48 = &_LC10;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar1 = 1;
  puVar1[6] = 0;
  *(undefined8 *)(puVar1 + 8) = 0;
  *(undefined1 (*) [16])(puVar1 + 2) = (undefined1  [16])0x0;
  if (local_58 == 0) {
    puVar1[10] = 6;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar1 + 8),(CowData *)&local_58);
    puVar1[10] = 6;
    if (puVar1[6] == 0x11) {
      StringName::StringName((StringName *)&local_48,(String *)(puVar1 + 8),false);
      if (*(undefined **)(puVar1 + 4) == local_48) {
        if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        *(undefined **)(puVar1 + 4) = local_48;
      }
      goto LAB_00108305;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00108305:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModifier3D::is_class(String const&) const */

undefined8 __thiscall SkeletonModifier3D::is_class(SkeletonModifier3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_001083ff;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001083ff:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_001084b3;
  }
  cVar6 = String::operator==(param_1,"SkeletonModifier3D");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_001084b3;
    }
    cVar6 = String::operator==(param_1,"Node3D");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_60 = 0;
        }
        else {
          pcVar4 = *(char **)(lVar5 + 8);
          local_60 = 0;
          if (pcVar4 == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_001084b3;
      }
      cVar6 = String::operator==(param_1,"Node");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = Object::is_class((Object *)this,param_1);
          return uVar8;
        }
        goto LAB_00108685;
      }
    }
  }
LAB_001084b3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108685:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RetargetModifier3D::is_class(String const&) const */

undefined8 __thiscall RetargetModifier3D::is_class(RetargetModifier3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_001086ff;
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
LAB_001086ff:
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
    if (cVar5 != '\0') goto LAB_001087b3;
  }
  cVar5 = String::operator==(param_1,"RetargetModifier3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = SkeletonModifier3D::is_class((SkeletonModifier3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001087b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC21;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC21;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010899d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010899d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x001089bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x001089bf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node3D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Node3D";
  local_98 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00108cf1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108cf1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModifier3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SkeletonModifier3D::_get_property_listv(SkeletonModifier3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Node3D::_get_property_listv((Node3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SkeletonModifier3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SkeletonModifier3D";
  local_98 = 0;
  local_70 = 0x12;
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
LAB_00108fcd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108fcd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108fef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108fef:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
  puVar4 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  *puVar4 = 0;
  puVar4[6] = 0;
  puVar4[10] = 6;
  *(undefined8 *)(puVar4 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar4 + 0xc) = (undefined1  [16])0x0;
  *puVar4 = local_78._0_4_;
  if (local_70 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar4 + 0xc) = 0;
  *(long **)(puVar4 + 0x10) = plVar1;
  *(long *)(puVar4 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar4;
  }
  plVar1[1] = (long)puVar4;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar4;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"SkeletonModifier3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Node3D::_get_property_listv((Node3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RetargetModifier3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
RetargetModifier3D::_get_property_listv(RetargetModifier3D *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    SkeletonModifier3D::_get_property_listv((SkeletonModifier3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "RetargetModifier3D";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RetargetModifier3D";
  local_98 = 0;
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00109381;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109381:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RetargetModifier3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SkeletonModifier3D::_get_property_listv((SkeletonModifier3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar5 = 0;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  puVar5[10] = 6;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00109509;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109605:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00109605;
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
  *puVar5 = local_68._0_4_;
  if (*(long *)(puVar5 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 2));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar5 + 2) = uVar3;
  }
  if (*(long *)(puVar5 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar5 + 4) = uVar3;
  }
  puVar5[6] = local_50;
  if (*(long *)(puVar5 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar5 + 8));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(puVar5 + 8) = lVar4;
  }
  puVar5[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00109509:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<Ref<SkeletonProfile> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Ref<SkeletonProfile>>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
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
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar4 = 0;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 6;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_00109779;
  local_78 = 0;
  local_68 = "SkeletonProfile";
  local_80 = 0;
  local_60._0_8_ = 0xf;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00109935:
    local_40 = 6;
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
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_00109935;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *puVar4 = local_68._0_4_;
  if (*(long *)(puVar4 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 2));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(puVar4 + 2) = uVar2;
  }
  if (*(long *)(puVar4 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar4 + 4) = uVar2;
  }
  puVar4[6] = local_50;
  if (*(long *)(puVar4 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar4 + 8));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(puVar4 + 8) = lVar3;
  }
  puVar4[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00109779:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBind* create_method_bind<RetargetModifier3D, Ref<SkeletonProfile> >(void
   (RetargetModifier3D::*)(Ref<SkeletonProfile>)) */

MethodBind * create_method_bind<RetargetModifier3D,Ref<SkeletonProfile>>(_func_void_Ref *param_1)

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
  *(_func_void_Ref **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f268;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RetargetModifier3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<RetargetModifier3D, Ref<SkeletonProfile>>(Ref<SkeletonProfile>
   (RetargetModifier3D::*)() const) */

MethodBind * create_method_bind<RetargetModifier3D,Ref<SkeletonProfile>>(_func_Ref *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010f2c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RetargetModifier3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<RetargetModifier3D, bool>(void (RetargetModifier3D::*)(bool)) */

MethodBind * create_method_bind<RetargetModifier3D,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f328;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RetargetModifier3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<RetargetModifier3D, bool>(bool (RetargetModifier3D::*)() const) */

MethodBind * create_method_bind<RetargetModifier3D,bool>(_func_bool *param_1)

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
  *(_func_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f388;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RetargetModifier3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<RetargetModifier3D, BitField<RetargetModifier3D::TransformFlag>
   >(void (RetargetModifier3D::*)(BitField<RetargetModifier3D::TransformFlag>)) */

MethodBind *
create_method_bind<RetargetModifier3D,BitField<RetargetModifier3D::TransformFlag>>
          (_func_void_BitField *param_1)

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
  *(_func_void_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f3e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "RetargetModifier3D";
  local_30 = 0x12;
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



/* MethodBind* create_method_bind<RetargetModifier3D,
   BitField<RetargetModifier3D::TransformFlag>>(BitField<RetargetModifier3D::TransformFlag>
   (RetargetModifier3D::*)() const) */

MethodBind *
create_method_bind<RetargetModifier3D,BitField<RetargetModifier3D::TransformFlag>>
          (_func_BitField *param_1)

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
  *(_func_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010f448;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "RetargetModifier3D";
  local_30 = 0x12;
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



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>, void>::get_class_info() */

GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void> * __thiscall
GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void>::get_class_info
          (GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  Vector local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "RetargetModifier3D::TransformFlag";
  local_50 = 0x21;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x10a162);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar3 = 0;
    }
    else {
      lVar3 = *(long *)(local_60 + -8);
      lVar2 = lVar3 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_0010a255;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar3,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010a255:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x206;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  local_70 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::_gen_argument_type_info(int) const */

undefined8
MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void>::get_class_info
            ((GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void> *)
             CONCAT44(in_register_0000003c,param_1));
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<RetargetModifier3D::TransformFlag> >::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<BitField<RetargetModifier3D::TransformFlag>>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void>::get_class_info
              ((GetTypeInfo<BitField<RetargetModifier3D::TransformFlag>,void> *)local_48);
    *puVar2 = local_48[0];
    if (*(long *)(puVar2 + 2) != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_40;
      local_40 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_30;
    if (*(long *)(puVar2 + 8) != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_28;
      local_28 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RetargetModifier3D::_initialize_classv() */

void RetargetModifier3D::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (SkeletonModifier3D::initialize_class()::initialized == '\0') {
      if (Node3D::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          local_50 = 6;
          local_58 = "Object";
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Node";
          local_70 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_70);
          StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
          if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_00113020 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node3D";
        local_70 = 0;
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Node3D::_bind_methods();
        Node3D::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node3D";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "SkeletonModifier3D";
      local_70 = 0;
      local_50 = 0x12;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00113018 != Node3D::_bind_methods) {
        SkeletonModifier3D::_bind_methods();
      }
      SkeletonModifier3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "SkeletonModifier3D";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "RetargetModifier3D";
    local_70 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010ad20:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_0010ad20;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_0010ad76;
  }
  if (lVar9 == lVar5) {
LAB_0010ac9b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0010ad76:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0010ac0f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010ac9b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_0010ac0f:
  puVar7[-1] = param_1;
  return 0;
}



/* CowData<int>::_realloc(long) */

undefined8 __thiscall CowData<int>::_realloc(CowData<int> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) */

undefined8 __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 4;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 4 == 0) {
LAB_0010b000:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 4 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_0010b000;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_0010af11;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010af11:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<RetargetModifier3D::RetargetBoneInfo>::_unref() */

void __thiscall
CowData<RetargetModifier3D::RetargetBoneInfo>::_unref
          (CowData<RetargetModifier3D::RetargetBoneInfo> *this)

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



/* CowData<RetargetModifier3D::RetargetInfo>::_unref() */

void __thiscall
CowData<RetargetModifier3D::RetargetInfo>::_unref(CowData<RetargetModifier3D::RetargetInfo> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    lVar2 = *(long *)this;
    if (lVar2 != 0) {
      lVar3 = *(long *)(lVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        lVar6 = lVar2;
        do {
          if (*(long *)(lVar6 + 0x10) != 0) {
            LOCK();
            plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar4 = *(long *)(lVar6 + 0x10);
              *(undefined8 *)(lVar6 + 0x10) = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          lVar6 = lVar6 + 0x18;
        } while (lVar3 != lVar7);
      }
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<RetargetModifier3D::RetargetBoneInfo>::_realloc(long) */

undefined8 __thiscall
CowData<RetargetModifier3D::RetargetBoneInfo>::_realloc
          (CowData<RetargetModifier3D::RetargetBoneInfo> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RetargetModifier3D::RetargetBoneInfo>::resize<false>(long) */

undefined8 __thiscall
CowData<RetargetModifier3D::RetargetBoneInfo>::resize<false>
          (CowData<RetargetModifier3D::RetargetBoneInfo> *this,long param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar15 = 0;
    lVar6 = 0;
  }
  else {
    lVar15 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar15) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar6 = lVar15 * 0x4c;
    if (lVar6 != 0) {
      uVar7 = lVar6 - 1U | lVar6 - 1U >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      lVar6 = (uVar7 | uVar7 >> 0x20) + 1;
    }
  }
  lVar14 = param_1 * 0x4c;
  if (lVar14 == 0) {
LAB_0010b430:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar7 = lVar14 - 1U >> 1 | lVar14 - 1U;
  uVar7 = uVar7 | uVar7 >> 2;
  uVar7 = uVar7 | uVar7 >> 4;
  uVar7 = uVar7 | uVar7 >> 8;
  uVar7 = uVar7 | uVar7 >> 0x10;
  uVar7 = uVar7 | uVar7 >> 0x20;
  lVar13 = uVar7 + 1;
  if (lVar13 == 0) goto LAB_0010b430;
  if (param_1 <= lVar15) {
    if ((lVar13 != lVar6) && (uVar11 = _realloc(this,lVar13), (int)uVar11 != 0)) {
      return uVar11;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
    _DAT_00000000 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  if (lVar13 == lVar6) {
LAB_0010b3bc:
    puVar12 = *(undefined8 **)this;
    if (puVar12 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar15 = puVar12[-1];
    if (param_1 <= lVar15) goto LAB_0010b363;
  }
  else {
    if (lVar15 != 0) {
      uVar11 = _realloc(this,lVar13);
      if ((int)uVar11 != 0) {
        return uVar11;
      }
      goto LAB_0010b3bc;
    }
    puVar8 = (undefined8 *)Memory::alloc_static(uVar7 + 0x11,false);
    if (puVar8 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar12 = puVar8 + 2;
    *puVar8 = 1;
    puVar8[1] = 0;
    *(undefined8 **)this = puVar12;
    lVar15 = 0;
  }
  uVar5 = _UNK_0010f548;
  uVar4 = _LC67;
  uVar3 = _UNK_0010f538;
  uVar11 = __LC65;
  uVar2 = _LC68;
  puVar9 = (undefined4 *)((long)puVar12 + lVar15 * 0x4c);
  do {
    *puVar9 = 0xffffffff;
    puVar10 = puVar9 + 0x13;
    *(undefined1 (*) [16])(puVar9 + 1) = ZEXT416(uVar2);
    *(undefined1 (*) [16])(puVar9 + 5) = ZEXT416(uVar2);
    *(undefined8 *)(puVar9 + 9) = uVar11;
    *(undefined8 *)(puVar9 + 0xb) = uVar3;
    *(undefined8 *)(puVar9 + 0xd) = uVar4;
    *(undefined8 *)(puVar9 + 0xf) = uVar5;
    *(undefined8 *)(puVar9 + 0x11) = uVar4;
    puVar9 = puVar10;
  } while ((undefined4 *)(lVar14 + (long)puVar12) != puVar10);
LAB_0010b363:
  puVar12[-1] = param_1;
  return 0;
}



/* CowData<RetargetModifier3D::RetargetInfo>::_realloc(long) */

undefined8 __thiscall
CowData<RetargetModifier3D::RetargetInfo>::_realloc
          (CowData<RetargetModifier3D::RetargetInfo> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<RetargetModifier3D::RetargetInfo>::resize<false>(long) */

undefined8 __thiscall
CowData<RetargetModifier3D::RetargetInfo>::resize<false>
          (CowData<RetargetModifier3D::RetargetInfo> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar10 = 0;
    lVar7 = 0;
  }
  else {
    lVar10 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar10) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar10 * 0x18;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_0010b7a0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x18 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar9 = uVar8 + 1;
  if (lVar9 == 0) goto LAB_0010b7a0;
  if (param_1 <= lVar10) {
    puVar6 = *(undefined8 **)this;
    uVar8 = param_1;
    while (puVar6 != (undefined8 *)0x0) {
      if ((ulong)puVar6[-1] <= uVar8) {
LAB_0010b661:
        if (lVar9 != lVar7) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          puVar6 = *(undefined8 **)this;
          if (puVar6 == (undefined8 *)0x0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        goto LAB_0010b708;
      }
      while (puVar6[uVar8 * 3 + 2] == 0) {
        uVar8 = uVar8 + 1;
        if ((ulong)puVar6[-1] <= uVar8) goto LAB_0010b661;
      }
      LOCK();
      plVar1 = (long *)(puVar6[uVar8 * 3 + 2] + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar10 = puVar6[uVar8 * 3 + 2];
        puVar6[uVar8 * 3 + 2] = 0;
        Memory::free_static((void *)(lVar10 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      puVar6 = *(undefined8 **)this;
    }
    goto LAB_0010b7f6;
  }
  if (lVar9 == lVar7) {
LAB_0010b723:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_0010b7f6:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar10 = puVar6[-1];
    if (param_1 <= lVar10) goto LAB_0010b708;
  }
  else {
    if (lVar10 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0010b723;
    }
    puVar4 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar4 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar4 + 2;
    *puVar4 = 1;
    puVar4[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar10 = 0;
  }
  puVar4 = puVar6 + lVar10 * 3;
  do {
    *puVar4 = 0;
    puVar5 = puVar4 + 3;
    puVar4[2] = 0;
    puVar4 = puVar5;
  } while (puVar5 != puVar6 + param_1 * 3);
LAB_0010b708:
  puVar6[-1] = param_1;
  return 0;
}



/* RetargetModifier3D::_notificationv(int, bool) */

void __thiscall
RetargetModifier3D::_notificationv(RetargetModifier3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (!param_2) {
    Node::_notification(iVar1);
    Node3D::_notification(iVar1);
    if ((code *)PTR__notification_00113028 != Node3D::_notification) {
      SkeletonModifier3D::_notification(iVar1);
    }
  }
  if (*(code **)(*(long *)this + 0x200) == _notification) {
    if (param_1 == 10) {
      _update_child_skeletons(this);
    }
    else if (param_1 == 0xb) {
      _reset_child_skeleton_poses(this);
      CowData<RetargetModifier3D::RetargetInfo>::resize<false>
                ((CowData<RetargetModifier3D::RetargetInfo> *)(this + 0x570),0);
    }
  }
  else {
    (**(code **)(*(long *)this + 0x200))(this,param_1);
  }
  if (!param_2) {
    return;
  }
  if ((code *)PTR__notification_00113028 != Node3D::_notification) {
    SkeletonModifier3D::_notification(iVar1);
  }
  Node3D::_notification(iVar1);
  Node::_notification(iVar1);
  return;
}



/* LocalVector<Transform3D, unsigned int, false, false>::resize(unsigned int) */

void __thiscall
LocalVector<Transform3D,unsigned_int,false,false>::resize
          (LocalVector<Transform3D,unsigned_int,false,false> *this,uint param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  undefined1 (*pauVar4) [16];
  undefined1 (*pauVar5) [16];
  long lVar6;
  uint uVar7;
  
  uVar3 = *(uint *)this;
  if (uVar3 <= param_1) {
    if (param_1 <= uVar3) {
      return;
    }
    uVar7 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar3 = uVar7 >> 1 | uVar7;
      uVar3 = uVar3 | uVar3 >> 2;
      uVar3 = uVar3 | uVar3 >> 4;
      uVar3 = uVar3 | uVar3 >> 8;
      uVar3 = (uVar3 | uVar3 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar3;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar3 * 0x30,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      uVar3 = *(uint *)this;
      if (param_1 <= uVar3) goto LAB_0010ba0d;
    }
    uVar2 = _LC68;
    lVar6 = *(long *)(this + 8);
    pauVar4 = (undefined1 (*) [16])((ulong)uVar3 * 0x30 + lVar6);
    do {
      *(undefined8 *)(pauVar4[2] + 4) = 0;
      pauVar5 = pauVar4 + 3;
      *pauVar4 = ZEXT416(uVar2);
      pauVar4[1] = ZEXT416(uVar2);
      *(uint *)pauVar4[2] = uVar2;
      *(undefined4 *)(pauVar4[2] + 0xc) = 0;
      pauVar4 = pauVar5;
    } while (pauVar5 !=
             (undefined1 (*) [16])(lVar6 + 0x30 + ((ulong)(uVar7 - uVar3) + (ulong)uVar3) * 0x30));
  }
LAB_0010ba0d:
  *(uint *)this = param_1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010bc48) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::validated_call(Object*, Variant
   const**, Variant*) const */

void __thiscall
MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::validated_call
          (MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>> *this,Object *param_1,
          Variant **param_2,Variant *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010bf42;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)(param_3 + 8) = uVar1;
LAB_0010bf42:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::ptrcall(Object*, void const**, void*)
   const */

void __thiscall
MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::ptrcall
          (MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>> *this,Object *param_1,
          void **param_2,void *param_3)

{
  undefined8 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c101;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined8 *)param_3 = uVar1;
LAB_0010c101:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<RetargetModifier3D::TransformFlag> >::validated_call(Object*, Variant
   const**, Variant*) const */

void MethodBindT<BitField<RetargetModifier3D::TransformFlag>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010c441;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c2cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010c441:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<RetargetModifier3D::TransformFlag> >::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<BitField<RetargetModifier3D::TransformFlag>>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010c621;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010c4ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010c621:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  bool bVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC16,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c780;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      bVar2 = (bool)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,bVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010c780:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<bool>::validated_call
          (MethodBindTRC<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant VVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c992;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar1 = (Variant)(*pcVar2)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar1;
LAB_0010c992:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined1 uVar1;
  long *plVar3;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar2;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010cb41;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar1;
LAB_0010cb41:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010ce81;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cd0d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010ce81:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010d069;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010cef2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010d069:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  Variant *pVVar3;
  
  plVar5 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar5 != (long *)0x0) && (plVar5[1] != 0)) && (*(char *)(plVar5[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar5[1] == 0) {
      plVar4 = (long *)plVar5[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*plVar5 + 0x40))(plVar5);
      }
    }
    else {
      plVar4 = (long *)(plVar5[1] + 0x20);
    }
    if (local_58 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC16,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d130;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar3 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar3 & 1) != 0) {
        pVVar3 = *(Variant **)(pVVar3 + *(long *)((long)plVar5 + (long)pVVar1) + -1);
      }
      lVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,lVar2);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
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
LAB_0010d130:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonProfile>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Ref<SkeletonProfile>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Object *pOVar2;
  char cVar3;
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
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
    if (local_58 == (Object *)*plVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10be18;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC16,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d410;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
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
      (*(code *)pVVar4)(&local_58);
      Variant::Variant((Variant *)local_48,local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_58;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_58);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
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
LAB_0010d410:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonProfile>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Ref<SkeletonProfile>>::ptrcall
          (MethodBindTRC<Ref<SkeletonProfile>> *this,Object *param_1,void **param_2,void *param_3)

{
  char cVar1;
  code *pcVar2;
  Object *pOVar3;
  long *plVar4;
  Object *extraout_RDX;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10be18;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d696;
    }
    param_2 = (void **)local_48;
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
      param_2 = (void **)extraout_RDX;
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar2 = *(code **)((Object *)((long)param_2 + -1) + (long)pcVar2);
  }
  (*pcVar2)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (local_48 == (Object *)0x0) {
                    /* WARNING: Load size is inaccurate */
    pOVar5 = *param_3;
    if (pOVar5 == (Object *)0x0) goto LAB_0010d696;
    *(undefined8 *)param_3 = 0;
    goto LAB_0010d6d9;
  }
  pOVar3 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&RefCounted::typeinfo,0);
                    /* WARNING: Load size is inaccurate */
  pOVar5 = *param_3;
  if (pOVar5 != pOVar3) {
    *(Object **)param_3 = pOVar3;
    if (pOVar3 == (Object *)0x0) {
      if (pOVar5 != (Object *)0x0) goto LAB_0010d6d9;
    }
    else {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        *(undefined8 *)param_3 = 0;
      }
      if (pOVar5 != (Object *)0x0) {
LAB_0010d6d9:
        cVar1 = RefCounted::unreference();
        if (cVar1 != '\0') {
          cVar1 = predelete_handler(pOVar5);
          if (cVar1 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      if (local_48 == (Object *)0x0) goto LAB_0010d696;
    }
  }
  cVar1 = RefCounted::unreference();
  pOVar5 = local_48;
  if (cVar1 != '\0') {
    cVar1 = predelete_handler(local_48);
    if (cVar1 != '\0') {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
  }
LAB_0010d696:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SkeletonProfile> >::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Ref<SkeletonProfile>>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  Object *pOVar4;
  Variant *pVVar5;
  code *pcVar6;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar5 = param_2[0x23];
      if (pVVar5 == (Variant *)0x0) {
        pVVar5 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar5 = param_2[1] + 0x20;
    }
    if (local_58 == (Object *)*(long *)pVVar5) {
      if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = (Object *)0x10be18;
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010d998;
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar6 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar6 & 1) != 0) {
    pcVar6 = *(code **)(pcVar6 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Variant::Variant((Variant *)local_48,*(Object **)(*(long *)param_3 + 0x10));
  local_58 = (Object *)0x0;
  pOVar4 = (Object *)Variant::get_validated_object();
  pOVar2 = local_58;
  if (pOVar4 != local_58) {
    if (pOVar4 == (Object *)0x0) {
      if (local_58 != (Object *)0x0) {
        local_58 = (Object *)0x0;
LAB_0010d956:
        cVar3 = RefCounted::unreference();
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(pOVar2);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(pOVar4,&Object::typeinfo,&SkeletonProfile::typeinfo,0);
      if (pOVar2 != pOVar4) {
        local_58 = pOVar4;
        if (pOVar4 != (Object *)0x0) {
          cVar3 = RefCounted::reference();
          if (cVar3 == '\0') {
            local_58 = (Object *)0x0;
          }
        }
        if (pOVar2 != (Object *)0x0) goto LAB_0010d956;
      }
    }
  }
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  (*pcVar6)((long *)((long)param_2 + lVar1));
  if (local_58 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_58;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_58);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010d998:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SkeletonProfile> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Ref<SkeletonProfile>>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  Object *pOVar2;
  char cVar3;
  long *plVar4;
  code *pcVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar4 = (long *)param_2[0x23];
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar4 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10be18;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010dc5c;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pcVar5 = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar5 & 1) != 0) {
    pcVar5 = *(code **)(pcVar5 + *(long *)((long)param_2 + lVar1) + -1);
  }
  if ((*param_3 == (long *)0x0) || (local_48 = (Object *)**param_3, local_48 == (Object *)0x0)) {
LAB_0010dc38:
    local_48 = (Object *)0x0;
  }
  else {
    cVar3 = RefCounted::init_ref();
    if (cVar3 == '\0') goto LAB_0010dc38;
  }
  (*pcVar5)((long *)((long)param_2 + lVar1));
  if (local_48 != (Object *)0x0) {
    cVar3 = RefCounted::unreference();
    pOVar2 = local_48;
    if (cVar3 != '\0') {
      cVar3 = predelete_handler(local_48);
      if (cVar3 != '\0') {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
    }
  }
LAB_0010dc5c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Ref<SkeletonProfile> >::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<Ref<SkeletonProfile>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  undefined4 uVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_48 == (Object *)*plVar9) {
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Object *)0x10be18;
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC16,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e040;
    }
    if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (1 < in_R8D) {
    uVar7 = 3;
LAB_0010e035:
    *in_R9 = uVar7;
    in_R9[2] = 1;
    goto LAB_0010e040;
  }
  pVVar12 = param_2[5];
  if (pVVar12 == (Variant *)0x0) {
    if (in_R8D != 1) goto LAB_0010e090;
LAB_0010e080:
    pVVar12 = *(Variant **)param_4;
  }
  else {
    lVar2 = *(long *)(pVVar12 + -8);
    if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010e090:
      uVar7 = 4;
      goto LAB_0010e035;
    }
    if (in_R8D == 1) goto LAB_0010e080;
    lVar10 = (long)((int)lVar2 + -1);
    if (lVar2 <= lVar10) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    pVVar12 = pVVar12 + lVar10 * 0x18;
  }
  *in_R9 = 0;
  if (((ulong)pVVar13 & 1) != 0) {
    pVVar13 = *(Variant **)(pVVar13 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
  }
  cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12);
  uVar4 = _LC101;
  if (cVar6 == '\0') {
    *in_R9 = 2;
    *(undefined8 *)(in_R9 + 1) = uVar4;
  }
  local_48 = (Object *)0x0;
  pOVar8 = (Object *)Variant::get_validated_object();
  pOVar5 = local_48;
  if (pOVar8 != local_48) {
    if (pOVar8 == (Object *)0x0) {
      if (local_48 != (Object *)0x0) {
        local_48 = (Object *)0x0;
LAB_0010e1ad:
        cVar6 = RefCounted::unreference();
        if (cVar6 != '\0') {
          cVar6 = predelete_handler(pOVar5);
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
    }
    else {
      pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&SkeletonProfile::typeinfo,0);
      if (pOVar5 != pOVar8) {
        local_48 = pOVar8;
        if (pOVar8 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_48 = (Object *)0x0;
          }
        }
        if (pOVar5 != (Object *)0x0) goto LAB_0010e1ad;
      }
    }
  }
  (*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1));
  if (local_48 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    pOVar5 = local_48;
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_48);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
  }
LAB_0010e040:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<SkeletonProfile>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Ref<SkeletonProfile>>::validated_call
          (MethodBindTRC<Ref<SkeletonProfile>> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  Object *pOVar1;
  char cVar2;
  code *pcVar3;
  long *plVar4;
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
      plVar4 = *(long **)(param_1 + 0x118);
      if (plVar4 == (long *)0x0) {
        plVar4 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10be18;
      local_50 = (Object *)0x0;
      local_40 = (Object *)0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e356;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar3 = *(code **)(pcVar3 + (long)param_2 + -1);
  }
  (*pcVar3)(&local_50,param_1 + *(long *)(this + 0x60),param_2);
  if (local_50 == (Object *)0x0) {
    Variant::ObjData::unref();
  }
  else {
    local_48 = *(Variant ***)(local_50 + 0x60);
    local_40 = local_50;
    Variant::ObjData::ref((ObjData *)(param_3 + 8));
  }
  if (local_50 != (Object *)0x0) {
    cVar2 = RefCounted::unreference();
    pOVar1 = local_50;
    if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_50);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
LAB_0010e356:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, BitField<RetargetModifier3D::TransformFlag>
   >(__UnexistingClass*, void (__UnexistingClass::*)(BitField<RetargetModifier3D::TransformFlag>),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,BitField<RetargetModifier3D::TransformFlag>>
               (__UnexistingClass *param_1,_func_void_BitField *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010e5fd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010e660;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010e660:
      uVar6 = 4;
LAB_0010e5fd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010e57b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010e57b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BitField **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC17;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0010e5d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<BitField<RetargetModifier3D::TransformFlag> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<BitField<RetargetModifier3D::TransformFlag>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC16,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010e6c6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,BitField<RetargetModifier3D::TransformFlag>>
            (p_Var2,(_func_void_BitField *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010e6c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0010e98d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010e9f0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010e9f0:
      uVar6 = 4;
LAB_0010e98d:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0010e90b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010e90b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC103;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010e967. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC16,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0010ea56;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010ea56:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>>::~MethodBindTRC
          (MethodBindTRC<BitField<RetargetModifier3D::TransformFlag>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<BitField<RetargetModifier3D::TransformFlag> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<RetargetModifier3D::TransformFlag>>::~MethodBindT
          (MethodBindT<BitField<RetargetModifier3D::TransformFlag>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<SkeletonProfile>>::~MethodBindTRC(MethodBindTRC<Ref<SkeletonProfile>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Ref<SkeletonProfile> >::~MethodBindT() */

void __thiscall
MethodBindT<Ref<SkeletonProfile>>::~MethodBindT(MethodBindT<Ref<SkeletonProfile>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<RetargetModifier3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RetargetModifier3D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<RetargetModifier3D, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<RetargetModifier3D,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<RetargetModifier3D,void,int> *this)

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


