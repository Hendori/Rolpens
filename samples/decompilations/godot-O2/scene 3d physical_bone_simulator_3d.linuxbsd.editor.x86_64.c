
/* PhysicalBoneSimulator3D::is_simulating_physics() const */

PhysicalBoneSimulator3D __thiscall
PhysicalBoneSimulator3D::is_simulating_physics(PhysicalBoneSimulator3D *this)

{
  return this[0x550];
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



/* PhysicalBoneSimulator3D::_set_active(bool) */

void PhysicalBoneSimulator3D::_set_active(bool param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined7 in_register_00000039;
  
  lVar1 = Engine::get_singleton();
  if ((*(char *)(lVar1 + 0xc0) == '\0') &&
     (lVar1 = *(long *)(CONCAT71(in_register_00000039,param_1) + 0x560), lVar1 != 0)) {
    lVar3 = 0;
    lVar2 = 0;
    while (lVar2 < *(long *)(lVar1 + -8)) {
      if (*(long *)(lVar1 + 0x48 + lVar3) != 0) {
        PhysicalBone3D::reset_physics_simulation_state();
        lVar1 = *(long *)(CONCAT71(in_register_00000039,param_1) + 0x560);
      }
      lVar2 = lVar2 + 1;
      lVar3 = lVar3 + 0x58;
      if (lVar1 == 0) {
        return;
      }
    }
  }
  return;
}



/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */

void __thiscall CowData<int>::_ref(CowData<int> *this,CowData *param_1)

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



/* PhysicalBoneSimulator3D::_reset_physical_bones_state() */

void __thiscall PhysicalBoneSimulator3D::_reset_physical_bones_state(PhysicalBoneSimulator3D *this)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = *(long *)(this + 0x560);
  if (lVar1 == 0) {
    return;
  }
  lVar3 = 0;
  lVar2 = 0;
  do {
    if (*(long *)(lVar1 + -8) <= lVar2) {
      return;
    }
    if (*(long *)(lVar1 + 0x48 + lVar3) != 0) {
      PhysicalBone3D::reset_physics_simulation_state();
      lVar1 = *(long *)(this + 0x560);
    }
    lVar2 = lVar2 + 1;
    lVar3 = lVar3 + 0x58;
  } while (lVar1 != 0);
  return;
}



/* PhysicalBoneSimulator3D::find_bone(String const&) const */

undefined8 PhysicalBoneSimulator3D::find_bone(String *param_1)

{
  String *pSVar1;
  undefined8 uVar2;
  
  pSVar1 = (String *)SkeletonModifier3D::get_skeleton();
  if (pSVar1 != (String *)0x0) {
    uVar2 = Skeleton3D::find_bone(pSVar1);
    return uVar2;
  }
  return 0xffffffff;
}



/* PhysicalBoneSimulator3D::get_bone_name(int) const */

undefined8 * PhysicalBoneSimulator3D::get_bone_name(int param_1)

{
  long lVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = SkeletonModifier3D::get_skeleton();
  if (lVar2 == 0) {
    *(undefined8 *)CONCAT44(in_register_0000003c,param_1) = 0;
  }
  else {
    Skeleton3D::get_bone_name(param_1);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (undefined8 *)CONCAT44(in_register_0000003c,param_1);
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBoneSimulator3D::get_bone_count() const */

undefined4 __thiscall PhysicalBoneSimulator3D::get_bone_count(PhysicalBoneSimulator3D *this)

{
  if (*(long *)(this + 0x560) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x560) + -8);
  }
  return 0;
}



/* PhysicalBoneSimulator3D::is_bone_parent_of(int, int) const */

undefined8 PhysicalBoneSimulator3D::is_bone_parent_of(int param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = SkeletonModifier3D::get_skeleton();
  if (lVar1 != 0) {
    uVar2 = Skeleton3D::is_bone_parent_of((int)lVar1,param_2);
    return uVar2;
  }
  return 0;
}



/* PhysicalBoneSimulator3D::get_physical_bone(int) */

undefined8 __thiscall
PhysicalBoneSimulator3D::get_physical_bone(PhysicalBoneSimulator3D *this,int param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar1 = *(long *)(this + 0x560);
  if (lVar1 == 0) {
    iVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar1 + -8);
    iVar4 = (int)lVar5;
  }
  lVar3 = (long)param_1;
  if ((-1 < param_1) && (param_1 < iVar4)) {
    if (lVar3 < lVar5) {
      return *(undefined8 *)(lVar1 + 0x48 + lVar3 * 0x58);
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("get_physical_bone","scene/3d/physical_bone_simulator_3d.cpp",0x9e,lVar3,(long)iVar4,
             "p_bone","bone_size","",false,false);
  return 0;
}



/* PhysicalBoneSimulator3D::_get_physical_bone_parent(int) */

long __thiscall
PhysicalBoneSimulator3D::_get_physical_bone_parent(PhysicalBoneSimulator3D *this,int param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar2 = *(long *)(this + 0x560);
  if (lVar2 == 0) {
    iVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar2 + -8);
    iVar4 = (int)lVar5;
  }
  lVar3 = (long)param_1;
  if ((param_1 < 0) || (iVar4 <= param_1)) {
    _err_print_index_error
              ("_get_physical_bone_parent","scene/3d/physical_bone_simulator_3d.cpp",0xb0,lVar3,
               (long)iVar4,"p_bone","bone_size","",false,false);
    return 0;
  }
  if (lVar3 < lVar5) {
    iVar4 = *(int *)(lVar2 + lVar3 * 0x58);
    if (iVar4 < 0) {
      return 0;
    }
    lVar3 = (long)iVar4;
    if (lVar3 < lVar5) {
      lVar2 = *(long *)(lVar2 + 0x48 + lVar3 * 0x58);
      if (lVar2 == 0) {
        lVar2 = get_physical_bone_parent(this,iVar4);
        return lVar2;
      }
      return lVar2;
    }
  }
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar5,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PhysicalBoneSimulator3D::get_physical_bone_parent(int) */

long __thiscall
PhysicalBoneSimulator3D::get_physical_bone_parent(PhysicalBoneSimulator3D *this,int param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  
  lVar2 = *(long *)(this + 0x560);
  if (lVar2 == 0) {
    iVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar2 + -8);
    iVar4 = (int)lVar5;
  }
  lVar3 = (long)param_1;
  if ((param_1 < 0) || (iVar4 <= param_1)) {
    _err_print_index_error
              ("get_physical_bone_parent","scene/3d/physical_bone_simulator_3d.cpp",0xa5,lVar3,
               (long)iVar4,"p_bone","bone_size","",false,false);
    return 0;
  }
  if (lVar5 <= lVar3) {
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  lVar2 = *(long *)(lVar2 + 0x50 + lVar3 * 0x58);
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = _get_physical_bone_parent(this,param_1);
  return lVar2;
}



/* PhysicalBoneSimulator3D::physical_bones_stop_simulation() */

void __thiscall
PhysicalBoneSimulator3D::physical_bones_stop_simulation(PhysicalBoneSimulator3D *this)

{
  long lVar1;
  Node *pNVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = 0;
  lVar1 = *(long *)(this + 0x560);
  this[0x550] = (PhysicalBoneSimulator3D)0x0;
  for (lVar3 = 0; (lVar1 != 0 && (lVar3 < *(long *)(lVar1 + -8))); lVar3 = lVar3 + 1) {
    if (*(long *)(lVar1 + 0x48 + lVar4) != 0) {
      PhysicalBone3D::reset_physics_simulation_state();
      lVar1 = *(long *)(this + 0x560);
    }
    lVar4 = lVar4 + 0x58;
  }
  if (this[0x568] != (PhysicalBoneSimulator3D)0x0) {
    pNVar2 = (Node *)SkeletonModifier3D::get_skeleton();
    if (pNVar2 != (Node *)0x0) {
      _pb_stop_simulation_compat(pNVar2);
      return;
    }
    return;
  }
  _pb_stop_simulation((Node *)this);
  return;
}



/* PhysicalBoneSimulator3D::physical_bones_add_collision_exception(RID) */

void __thiscall
PhysicalBoneSimulator3D::physical_bones_add_collision_exception
          (PhysicalBoneSimulator3D *this,undefined8 param_2)

{
  _physical_bones_add_remove_collision_exception(1,this,param_2);
  return;
}



/* PhysicalBoneSimulator3D::physical_bones_remove_collision_exception(RID) */

void __thiscall
PhysicalBoneSimulator3D::physical_bones_remove_collision_exception
          (PhysicalBoneSimulator3D *this,undefined8 param_2)

{
  _physical_bones_add_remove_collision_exception(0,this,param_2);
  return;
}



/* PhysicalBoneSimulator3D::get_bone_global_pose(int) const */

void PhysicalBoneSimulator3D::get_bone_global_pose(int param_1)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  int in_EDX;
  long in_RSI;
  int iVar10;
  undefined4 in_register_0000003c;
  undefined1 (*pauVar11) [16];
  long lVar12;
  
  pauVar11 = (undefined1 (*) [16])CONCAT44(in_register_0000003c,param_1);
  lVar1 = *(long *)(in_RSI + 0x560);
  if (lVar1 == 0) {
    iVar10 = 0;
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(lVar1 + -8);
    iVar10 = (int)lVar12;
  }
  lVar9 = (long)in_EDX;
  if ((-1 < in_EDX) && (in_EDX < iVar10)) {
    if (lVar9 < lVar12) {
      lVar1 = lVar1 + lVar9 * 0x58;
      uVar3 = *(undefined8 *)(lVar1 + 0x20);
      uVar4 = *(undefined8 *)(lVar1 + 0x28);
      uVar5 = *(undefined8 *)(lVar1 + 0x30);
      uVar6 = *(undefined8 *)(lVar1 + 0x38);
      uVar7 = *(undefined8 *)(lVar1 + 0x40);
      *(undefined8 *)*pauVar11 = *(undefined8 *)(lVar1 + 0x18);
      *(undefined8 *)(*pauVar11 + 8) = uVar3;
      *(undefined8 *)pauVar11[1] = uVar4;
      *(undefined8 *)(pauVar11[1] + 8) = uVar5;
      *(undefined8 *)pauVar11[2] = uVar6;
      *(undefined8 *)(pauVar11[2] + 8) = uVar7;
      return;
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar12,"p_index","size()","",false,true
              );
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  _err_print_index_error
            ("get_bone_global_pose","scene/3d/physical_bone_simulator_3d.cpp",0x165,lVar9,
             (long)iVar10,"p_bone","bone_size","",false,false);
  uVar8 = _LC21;
  *(undefined4 *)pauVar11[2] = 0x3f800000;
  *(undefined8 *)(pauVar11[2] + 4) = 0;
  *(undefined4 *)(pauVar11[2] + 0xc) = 0;
  *pauVar11 = ZEXT416(uVar8);
  pauVar11[1] = ZEXT416(uVar8);
  return;
}



/* PhysicalBoneSimulator3D::PhysicalBoneSimulator3D() */

void __thiscall PhysicalBoneSimulator3D::PhysicalBoneSimulator3D(PhysicalBoneSimulator3D *this)

{
  SkeletonModifier3D::SkeletonModifier3D((SkeletonModifier3D *)this);
  this[0x550] = (PhysicalBoneSimulator3D)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00108d70;
  *(undefined8 *)(this + 0x560) = 0;
  this[0x568] = (PhysicalBoneSimulator3D)0x0;
  return;
}



/* PhysicalBoneSimulator3D::_bind_methods() */

void PhysicalBoneSimulator3D::_bind_methods(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  MethodBind *pMVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  long in_FS_OFFSET;
  Array local_b0 [8];
  long local_a8 [2];
  long *local_98;
  Variant *local_88;
  undefined8 local_80;
  Variant **local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_a8,(char ***)"is_simulating_physics",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<PhysicalBoneSimulator3D,bool>(is_simulating_physics);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar7 = local_98 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_98[-1];
      local_98 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_a8,(char ***)"physical_bones_stop_simulation",0);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<PhysicalBoneSimulator3D>(physical_bones_stop_simulation);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar7 = local_98 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_98[-1];
      local_98 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Array::Array(local_b0);
  local_88 = (Variant *)0x10322f;
  local_80 = 0;
  uVar6 = (uint)(Variant *)&local_78;
  local_78 = &local_88;
  D_METHODP((char *)local_a8,(char ***)"physical_bones_start_simulation",uVar6);
  Variant::Variant((Variant *)&local_78,local_b0);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_88 = (Variant *)&local_78;
  pMVar5 = create_method_bind<PhysicalBoneSimulator3D,TypedArray<StringName>const&>
                     (physical_bones_start_simulation_on);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_a8,&local_88,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar7 = local_98 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_98[-1];
      local_98 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Array::~Array(local_b0);
  local_88 = (Variant *)0x103235;
  local_80 = 0;
  local_78 = &local_88;
  D_METHODP((char *)local_a8,(char ***)"physical_bones_add_collision_exception",uVar6);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<PhysicalBoneSimulator3D,RID>(physical_bones_add_collision_exception);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar7 = local_98 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_98[-1];
      local_98 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  local_80 = 0;
  local_88 = (Variant *)0x103235;
  local_78 = &local_88;
  D_METHODP((char *)local_a8,(char ***)"physical_bones_remove_collision_exception",uVar6);
  local_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar5 = create_method_bind<PhysicalBoneSimulator3D,RID>
                     (physical_bones_remove_collision_exception);
  ClassDB::bind_methodfi(1,pMVar5,false,(MethodDefinition *)local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar4 = local_98;
  if (local_98 != (long *)0x0) {
    LOCK();
    plVar7 = local_98 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_98 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_98[-1];
      local_98 = (long *)0x0;
      if (lVar2 != 0) {
        lVar8 = 0;
        plVar7 = plVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar8);
      }
      Memory::free_static(plVar4 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Error CowData<int>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<int>::resize<false>(CowData<int> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<int> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<int> *pCVar10;
  CowData<int> *pCVar11;
  long lVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar2 = *(long *)this;
  if (lVar2 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar12 = 0;
    pCVar4 = (CowData<int> *)0x0;
  }
  else {
    lVar12 = *(long *)(lVar2 + -8);
    if (param_1 == lVar12) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
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
    _copy_on_write(this);
    pCVar4 = (CowData<int> *)(lVar12 * 4);
    if (pCVar4 != (CowData<int> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<int> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 4 != 0) {
    uVar5 = param_1 * 4 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<int> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<int> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_00103344();
        return;
      }
      if (pCVar10 != pCVar4) {
        if (lVar12 == 0) {
          puVar6 = (undefined8 *)Memory::alloc_static((ulong)(pCVar11 + 0x11),false);
          if (puVar6 != (undefined8 *)0x0) {
            puVar8 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8 **)this = puVar8;
            goto LAB_00101601;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_001016f2;
        }
        pCVar11 = this;
        iVar3 = _realloc(this,(long)pCVar10);
        if (iVar3 != 0) {
          return;
        }
      }
      puVar8 = *(undefined8 **)this;
      if (puVar8 == (undefined8 *)0x0) {
        resize<false>((long)pCVar11);
        return;
      }
LAB_00101601:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_001016f2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* CowData<PhysicalBoneSimulator3D::SimulatedBone>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<PhysicalBoneSimulator3D::SimulatedBone>::_copy_on_write
          (CowData<PhysicalBoneSimulator3D::SimulatedBone> *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  CowData<int> *this_00;
  CowData<int> *pCVar13;
  ulong uVar14;
  long lVar15;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar14 = 0x10;
  if (lVar2 * 0x58 != 0) {
    uVar14 = lVar2 * 0x58 - 1;
    uVar14 = uVar14 | uVar14 >> 1;
    uVar14 = uVar14 | uVar14 >> 2;
    uVar14 = uVar14 | uVar14 >> 4;
    uVar14 = uVar14 | uVar14 >> 8;
    uVar14 = uVar14 | uVar14 >> 0x10;
    uVar14 = (uVar14 | uVar14 >> 0x20) + 0x11;
  }
  puVar12 = (undefined8 *)Memory::alloc_static(uVar14,false);
  if (puVar12 != (undefined8 *)0x0) {
    lVar15 = 0;
    *puVar12 = 1;
    puVar12[1] = lVar2;
    this_00 = (CowData<int> *)(puVar12 + 4);
    if (lVar2 != 0) {
      do {
        pCVar13 = this_00 + *(long *)this + (-0x20 - (long)puVar12);
        uVar1 = *(undefined4 *)pCVar13;
        *(undefined8 *)this_00 = 0;
        lVar3 = *(long *)(pCVar13 + 0x10);
        *(undefined4 *)(this_00 + -0x10) = uVar1;
        if (lVar3 != 0) {
          CowData<int>::_ref(this_00,(CowData *)(pCVar13 + 0x10));
        }
        uVar5 = *(undefined8 *)(pCVar13 + 0x20);
        uVar6 = *(undefined8 *)(pCVar13 + 0x28);
        uVar7 = *(undefined8 *)(pCVar13 + 0x30);
        lVar15 = lVar15 + 1;
        uVar8 = *(undefined8 *)(pCVar13 + 0x38);
        uVar9 = *(undefined8 *)(pCVar13 + 0x40);
        uVar10 = *(undefined8 *)(pCVar13 + 0x48);
        uVar11 = *(undefined8 *)(pCVar13 + 0x50);
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pCVar13 + 0x18);
        *(undefined8 *)(this_00 + 0x10) = uVar5;
        *(undefined8 *)(this_00 + 0x18) = uVar6;
        *(undefined8 *)(this_00 + 0x20) = uVar7;
        *(undefined8 *)(this_00 + 0x28) = uVar8;
        *(undefined8 *)(this_00 + 0x30) = uVar9;
        *(undefined8 *)(this_00 + 0x38) = uVar10;
        *(undefined8 *)(this_00 + 0x40) = uVar11;
        this_00 = this_00 + 0x58;
      } while (lVar2 != lVar15);
    }
    _unref(this);
    *(undefined8 **)this = puVar12 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* PhysicalBoneSimulator3D::_rebuild_physical_bones_cache() */

void __thiscall
PhysicalBoneSimulator3D::_rebuild_physical_bones_cache(PhysicalBoneSimulator3D *this)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  bool bVar8;
  
  if ((*(long *)(this + 0x560) == 0) ||
     (iVar3 = (int)*(undefined8 *)(*(long *)(this + 0x560) + -8), iVar3 < 1)) {
    return;
  }
  lVar7 = 0;
  uVar5 = 0;
  while( true ) {
    lVar4 = _get_physical_bone_parent(this,(int)uVar5);
    lVar1 = *(long *)(this + 0x560);
    if (lVar1 == 0) break;
    lVar6 = *(long *)(lVar1 + -8);
    if (lVar6 <= (long)uVar5) goto LAB_00101975;
    if (*(long *)(lVar1 + 0x50 + lVar7) != lVar4) {
      CowData<PhysicalBoneSimulator3D::SimulatedBone>::_copy_on_write
                ((CowData<PhysicalBoneSimulator3D::SimulatedBone> *)(this + 0x560));
      lVar1 = *(long *)(this + 0x560);
      *(long *)(lVar1 + lVar7 + 0x50) = lVar4;
      if (lVar1 == 0) {
        lVar4 = 0;
LAB_001019c3:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,uVar5,lVar4,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar4 = *(long *)(lVar1 + -8);
      if (lVar4 <= (long)uVar5) goto LAB_001019c3;
      if (*(long *)(lVar1 + lVar7 + 0x48) != 0) {
        PhysicalBone3D::_on_bone_parent_changed();
      }
    }
    lVar7 = lVar7 + 0x58;
    bVar8 = uVar5 == iVar3 - 1;
    uVar5 = uVar5 + 1;
    if (bVar8) {
      return;
    }
  }
  lVar6 = 0;
LAB_00101975:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,uVar5,lVar6,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* PhysicalBoneSimulator3D::unbind_physical_bone_from_bone(int) */

void __thiscall
PhysicalBoneSimulator3D::unbind_physical_bone_from_bone(PhysicalBoneSimulator3D *this,int param_1)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  if (*(long *)(this + 0x560) == 0) {
    iVar2 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(this + 0x560) + -8);
    iVar2 = (int)lVar4;
  }
  lVar3 = (long)param_1;
  if ((-1 < param_1) && (param_1 < iVar2)) {
    if (lVar3 < lVar4) {
      CowData<PhysicalBoneSimulator3D::SimulatedBone>::_copy_on_write
                ((CowData<PhysicalBoneSimulator3D::SimulatedBone> *)(this + 0x560));
      *(undefined8 *)(*(long *)(this + 0x560) + lVar3 * 0x58 + 0x48) = 0;
      _rebuild_physical_bones_cache(this);
      return;
    }
    _err_print_index_error
              ("operator[]","./core/templates/vector.h",0x38,lVar3,lVar4,"p_index",
               "((Vector<T> *)(this))->_cowdata.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  _err_print_index_error
            ("unbind_physical_bone_from_bone","scene/3d/physical_bone_simulator_3d.cpp",0x96,lVar3,
             (long)iVar2,"p_bone","bone_size","",false,false);
  return;
}



/* PhysicalBoneSimulator3D::bind_physical_bone_to_bone(int, PhysicalBone3D*) */

void __thiscall
PhysicalBoneSimulator3D::bind_physical_bone_to_bone
          (PhysicalBoneSimulator3D *this,int param_1,PhysicalBone3D *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  char *pcVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  
  lVar1 = *(long *)(this + 0x560);
  if (lVar1 == 0) {
    iVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar1 + -8);
    iVar5 = (int)lVar7;
  }
  lVar3 = (long)param_1;
  if ((-1 < param_1) && (param_1 < iVar5)) {
    if (lVar7 <= lVar3) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar7,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    if (*(long *)(lVar1 + 0x48 + lVar3 * 0x58) == 0) {
      if (param_2 != (PhysicalBone3D *)0x0) {
        CowData<PhysicalBoneSimulator3D::SimulatedBone>::_copy_on_write
                  ((CowData<PhysicalBoneSimulator3D::SimulatedBone> *)(this + 0x560));
        *(PhysicalBone3D **)(*(long *)(this + 0x560) + 0x48 + lVar3 * 0x58) = param_2;
        _rebuild_physical_bones_cache(this);
        return;
      }
      uVar6 = 0x8e;
      pcVar4 = "Parameter \"p_physical_bone\" is null.";
    }
    else {
      uVar6 = 0x8d;
      pcVar4 = "Condition \"bones[p_bone].physical_bone\" is true.";
    }
    _err_print_error("bind_physical_bone_to_bone","scene/3d/physical_bone_simulator_3d.cpp",uVar6,
                     pcVar4,0,0);
    return;
  }
  _err_print_index_error
            ("bind_physical_bone_to_bone","scene/3d/physical_bone_simulator_3d.cpp",0x8c,lVar3,
             (long)iVar5,"p_bone","bone_size","",false,false);
  return;
}



/* PhysicalBoneSimulator3D::set_bone_global_pose(int, Transform3D const&) */

void __thiscall
PhysicalBoneSimulator3D::set_bone_global_pose
          (PhysicalBoneSimulator3D *this,int param_1,Transform3D *param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)(this + 0x560) == 0) {
    iVar3 = 0;
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)(this + 0x560) + -8);
    iVar3 = (int)lVar4;
  }
  lVar5 = (long)param_1;
  if ((-1 < param_1) && (param_1 < iVar3)) {
    if (lVar5 < lVar4) {
      CowData<PhysicalBoneSimulator3D::SimulatedBone>::_copy_on_write
                ((CowData<PhysicalBoneSimulator3D::SimulatedBone> *)(this + 0x560));
      uVar2 = *(undefined8 *)(param_2 + 8);
      lVar4 = *(long *)(this + 0x560) + lVar5 * 0x58;
      *(undefined8 *)(lVar4 + 0x18) = *(undefined8 *)param_2;
      *(undefined8 *)(lVar4 + 0x20) = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(lVar4 + 0x28) = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)(lVar4 + 0x30) = uVar2;
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(lVar4 + 0x38) = *(undefined8 *)(param_2 + 0x20);
      *(undefined8 *)(lVar4 + 0x40) = uVar2;
      return;
    }
    _err_print_index_error
              ("operator[]","./core/templates/vector.h",0x38,lVar5,lVar4,"p_index",
               "((Vector<T> *)(this))->_cowdata.size()","",false,true);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
  }
  _err_print_index_error
            ("set_bone_global_pose","scene/3d/physical_bone_simulator_3d.cpp",0x16b,lVar5,
             (long)iVar3,"p_bone","bone_size","",false,false);
  return;
}



/* PhysicalBoneSimulator3D::_bone_pose_updated(Skeleton3D*, int) */

void __thiscall
PhysicalBoneSimulator3D::_bone_pose_updated
          (PhysicalBoneSimulator3D *this,Skeleton3D *param_1,int param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  long local_20;
  
  lVar2 = (long)param_2;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = *(long *)(this + 0x560);
  if (param_2 < 0) {
    if (lVar3 == 0) goto LAB_00101f30;
    lVar3 = *(long *)(lVar3 + -8);
  }
  else if (lVar3 == 0) {
LAB_00101f30:
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + -8);
    if (lVar2 < lVar3) {
      Skeleton3D::get_bone_global_pose((int)&local_58);
      if (*(long *)(this + 0x560) == 0) {
        lVar3 = 0;
LAB_00101eeb:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar2,lVar3,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar3 = *(long *)(*(long *)(this + 0x560) + -8);
      if (lVar3 <= lVar2) goto LAB_00101eeb;
      CowData<PhysicalBoneSimulator3D::SimulatedBone>::_copy_on_write
                ((CowData<PhysicalBoneSimulator3D::SimulatedBone> *)(this + 0x560));
      lVar3 = *(long *)(this + 0x560) + lVar2 * 0x58;
      *(undefined8 *)(lVar3 + 0x18) = local_58;
      *(undefined8 *)(lVar3 + 0x20) = uStack_50;
      *(undefined8 *)(lVar3 + 0x28) = local_48;
      *(undefined8 *)(lVar3 + 0x30) = uStack_40;
      *(undefined8 *)(lVar3 + 0x38) = local_38;
      *(undefined8 *)(lVar3 + 0x40) = uStack_30;
      goto LAB_00101e78;
    }
  }
  _err_print_index_error
            ("_bone_pose_updated","scene/3d/physical_bone_simulator_3d.cpp",0x58,lVar2,lVar3,
             "p_bone_id","bones.size()","",false,false);
LAB_00101e78:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBoneSimulator3D::_process_modification() */

void __thiscall PhysicalBoneSimulator3D::_process_modification(PhysicalBoneSimulator3D *this)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  Skeleton3D *pSVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  pSVar4 = (Skeleton3D *)SkeletonModifier3D::get_skeleton();
  if (pSVar4 != (Skeleton3D *)0x0) {
    iVar3 = Skeleton3D::get_bone_count();
    if (*(long *)(this + 0x560) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(*(long *)(this + 0x560) + -8);
    }
    lVar8 = 0;
    uVar6 = 0;
    if (iVar3 != lVar5) {
      _err_print_error("_process_modification","scene/3d/physical_bone_simulator_3d.cpp",0x174,
                       "Condition \"skeleton->get_bone_count() != bones.size()\" is true.",0,0);
      return;
    }
    while( true ) {
      iVar3 = Skeleton3D::get_bone_count();
      if (iVar3 <= (int)uVar6) break;
      lVar5 = *(long *)(this + 0x560);
      if (lVar5 == 0) goto LAB_00102038;
      lVar7 = *(long *)(lVar5 + -8);
      if (lVar7 <= (long)uVar6) goto LAB_0010203b;
      if (*(long *)(lVar5 + 0x48 + lVar8) != 0) {
        cVar2 = PhysicalBone3D::is_simulating_physics();
        if (cVar2 == '\0') {
          _bone_pose_updated(this,pSVar4,(int)uVar6);
          if (*(long *)(this + 0x560) == 0) {
LAB_00102038:
            lVar7 = 0;
LAB_0010203b:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,uVar6,lVar7,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar7 = *(long *)(*(long *)(this + 0x560) + -8);
          if (lVar7 <= (long)uVar6) goto LAB_0010203b;
          PhysicalBone3D::reset_to_rest_position();
        }
        else if (this[0x550] != (PhysicalBoneSimulator3D)0x0) {
          if (*(long *)(this + 0x560) == 0) goto LAB_00102038;
          lVar7 = *(long *)(*(long *)(this + 0x560) + -8);
          if (lVar7 <= (long)uVar6) goto LAB_0010203b;
          Skeleton3D::set_bone_global_pose((int)pSVar4,(Transform3D *)(uVar6 & 0xffffffff));
        }
      }
      uVar6 = uVar6 + 1;
      lVar8 = lVar8 + 0x58;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhysicalBoneSimulator3D::_bone_list_changed() */

void __thiscall PhysicalBoneSimulator3D::_bone_list_changed(PhysicalBoneSimulator3D *this)

{
  CowData<PhysicalBoneSimulator3D::SimulatedBone> *this_00;
  undefined4 *puVar1;
  long *plVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined1 local_108 [8];
  long local_100;
  undefined4 local_f8;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined1 local_b0 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (CowData<PhysicalBoneSimulator3D::SimulatedBone> *)(this + 0x560);
  if ((*(long *)(this + 0x560) != 0) && (*(long *)(*(long *)(this + 0x560) + -8) != 0)) {
    CowData<PhysicalBoneSimulator3D::SimulatedBone>::_unref(this_00);
  }
  lVar7 = SkeletonModifier3D::get_skeleton();
  if (lVar7 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    for (iVar9 = 0; iVar5 = Skeleton3D::get_bone_count(), iVar9 < iVar5; iVar9 = iVar9 + 1) {
      local_e0 = CONCAT44(_UNK_001091f4,_LC21);
      uStack_74 = 0;
      uStack_70 = 0;
      local_98 = ZEXT416(_LC21);
      uStack_6c = 0;
      local_78 = 0x3f800000;
      local_c0 = 0x3f800000;
      uStack_b8 = 0;
      local_b0 = (undefined1  [16])0x0;
      uStack_d8 = _UNK_001091f8;
      uStack_c8 = _UNK_001091f8;
      local_e8 = 0;
      local_d0 = local_e0;
      local_88 = local_98;
      uVar6 = Skeleton3D::get_bone_parent((int)lVar7);
      local_f8 = uVar6;
      Skeleton3D::get_bone_children((int)local_108);
      lVar8 = local_100;
      if (local_100 == 0) {
        local_98._0_4_ = uVar6;
        local_88._0_8_ = 0;
      }
      else {
        local_e8 = local_100;
        local_98._0_4_ = uVar6;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = local_88._8_8_;
        local_88 = auVar3 << 0x40;
        CowData<int>::_ref((CowData<int> *)local_88,(CowData *)&local_e8);
      }
      uVar4 = local_88._0_8_;
      local_50 = (undefined1  [16])0x0;
      local_88._8_8_ = local_e0;
      local_78 = (undefined4)uStack_d8;
      uStack_74 = (undefined4)((ulong)uStack_d8 >> 0x20);
      uStack_70 = (undefined4)local_d0;
      uStack_6c = (undefined4)((ulong)local_d0 >> 0x20);
      uStack_68 = uStack_c8;
      local_60 = local_c0;
      uStack_58 = uStack_b8;
      if (*(long *)(this + 0x560) == 0) {
        lVar10 = 1;
      }
      else {
        lVar10 = *(long *)(*(long *)(this + 0x560) + -8) + 1;
      }
      iVar5 = CowData<PhysicalBoneSimulator3D::SimulatedBone>::resize<false>(this_00,lVar10);
      if (iVar5 == 0) {
        if (*(long *)(this + 0x560) == 0) {
          lVar11 = -1;
          lVar10 = 0;
        }
        else {
          lVar10 = *(long *)(*(long *)(this + 0x560) + -8);
          lVar11 = lVar10 + -1;
          if (-1 < lVar11) {
            CowData<PhysicalBoneSimulator3D::SimulatedBone>::_copy_on_write(this_00);
            puVar1 = (undefined4 *)(*(long *)(this + 0x560) + lVar11 * 0x58);
            *puVar1 = local_98._0_4_;
            if (*(long *)(puVar1 + 4) != uVar4) {
              CowData<int>::_ref((CowData<int> *)(puVar1 + 4),(CowData *)local_88);
            }
            *(undefined1 (*) [16])(puVar1 + 0x12) = (undefined1  [16])0x0;
            *(undefined8 *)(puVar1 + 6) = local_88._8_8_;
            *(ulong *)(puVar1 + 8) = CONCAT44(uStack_74,local_78);
            *(ulong *)(puVar1 + 10) = CONCAT44(uStack_6c,uStack_70);
            *(undefined8 *)(puVar1 + 0xc) = uStack_68;
            *(undefined8 *)(puVar1 + 0xe) = local_60;
            *(undefined8 *)(puVar1 + 0x10) = uStack_58;
            goto LAB_00102273;
          }
        }
        _err_print_index_error
                  ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar10,"p_index","size()","",false
                   ,false);
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
      }
LAB_00102273:
      if (uVar4 != 0) {
        LOCK();
        plVar2 = (long *)(uVar4 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        lVar8 = local_e8;
        if (*plVar2 == 0) {
          Memory::free_static((void *)(local_88._0_8_ + -0x10),false);
          lVar8 = local_e8;
        }
      }
      if (lVar8 != 0) {
        LOCK();
        plVar2 = (long *)(lVar8 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static((void *)(local_e8 + -0x10),false);
        }
      }
    }
    _rebuild_physical_bones_cache(this);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _pose_updated(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBoneSimulator3D::_skeleton_changed(Skeleton3D*, Skeleton3D*) */

void __thiscall
PhysicalBoneSimulator3D::_skeleton_changed
          (PhysicalBoneSimulator3D *this,Skeleton3D *param_1,Skeleton3D *param_2)

{
  code *pcVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  PhysicalBoneSimulator3D local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Skeleton3D *)0x0) {
    pcVar1 = *(code **)(*(long *)param_1 + 0x118);
    create_custom_callable_function_pointer<PhysicalBoneSimulator3D>
              (local_58,(char *)this,(_func_void *)"&PhysicalBoneSimulator3D::_bone_list_changed");
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
    Callable::~Callable((Callable *)local_58);
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(*(long *)param_1 + 0x110);
      create_custom_callable_function_pointer<PhysicalBoneSimulator3D>
                (local_58,(char *)this,(_func_void *)"&PhysicalBoneSimulator3D::_bone_list_changed")
      ;
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
      Callable::~Callable((Callable *)local_58);
    }
    pcVar1 = *(code **)(*(long *)param_1 + 0x118);
    create_custom_callable_function_pointer<PhysicalBoneSimulator3D>
              (local_58,(char *)this,(_func_void *)"&PhysicalBoneSimulator3D::_pose_updated");
    cVar2 = (*pcVar1)(param_1,SceneStringNames::singleton + 0x120,local_58);
    Callable::~Callable((Callable *)local_58);
    if (cVar2 != '\0') {
      pcVar1 = *(code **)(*(long *)param_1 + 0x110);
      create_custom_callable_function_pointer<PhysicalBoneSimulator3D>
                (local_58,(char *)this,(_func_void *)"&PhysicalBoneSimulator3D::_pose_updated");
      (*pcVar1)(param_1,SceneStringNames::singleton + 0x120,local_58);
      Callable::~Callable((Callable *)local_58);
    }
  }
  if (param_2 != (Skeleton3D *)0x0) {
    pcVar1 = *(code **)(*(long *)param_2 + 0x118);
    create_custom_callable_function_pointer<PhysicalBoneSimulator3D>
              (local_58,(char *)this,(_func_void *)"&PhysicalBoneSimulator3D::_bone_list_changed");
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
    Callable::~Callable((Callable *)local_58);
    if (cVar2 == '\0') {
      pcVar1 = *(code **)(*(long *)param_2 + 0x108);
      create_custom_callable_function_pointer<PhysicalBoneSimulator3D>
                (local_58,(char *)this,(_func_void *)"&PhysicalBoneSimulator3D::_bone_list_changed")
      ;
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
      Callable::~Callable((Callable *)local_58);
    }
    pcVar1 = *(code **)(*(long *)param_2 + 0x118);
    create_custom_callable_function_pointer<PhysicalBoneSimulator3D>
              (local_58,(char *)this,(_func_void *)"&PhysicalBoneSimulator3D::_pose_updated");
    cVar2 = (*pcVar1)(param_2,SceneStringNames::singleton + 0x120,local_58);
    Callable::~Callable((Callable *)local_58);
    if (cVar2 == '\0') {
      pcVar1 = *(code **)(*(long *)param_2 + 0x108);
      create_custom_callable_function_pointer<PhysicalBoneSimulator3D>
                (local_58,(char *)this,(_func_void *)"&PhysicalBoneSimulator3D::_pose_updated");
      (*pcVar1)(param_2,SceneStringNames::singleton + 0x120,local_58,0);
      Callable::~Callable((Callable *)local_58);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _bone_list_changed(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBoneSimulator3D::_pose_updated() */

void __thiscall PhysicalBoneSimulator3D::_pose_updated(PhysicalBoneSimulator3D *this)

{
  int iVar1;
  Skeleton3D *pSVar2;
  long lVar3;
  int iVar4;
  
  pSVar2 = (Skeleton3D *)SkeletonModifier3D::get_skeleton();
  if ((pSVar2 == (Skeleton3D *)0x0) || (this[0x550] != (PhysicalBoneSimulator3D)0x0)) {
    return;
  }
  iVar1 = Skeleton3D::get_bone_count();
  if (*(long *)(this + 0x560) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 0x560) + -8);
  }
  iVar4 = 0;
  if (iVar1 != lVar3) {
    _bone_list_changed(this);
    return;
  }
  while( true ) {
    iVar1 = Skeleton3D::get_bone_count();
    if (iVar1 <= iVar4) break;
    _bone_pose_updated(this,pSVar2,iVar4);
    iVar4 = iVar4 + 1;
  }
  return;
}



/* PhysicalBoneSimulator3D::physical_bones_start_simulation_on(TypedArray<StringName> const&) */

void __thiscall
PhysicalBoneSimulator3D::physical_bones_start_simulation_on
          (PhysicalBoneSimulator3D *this,TypedArray *param_1)

{
  long *plVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  Node *pNVar5;
  long lVar6;
  String *pSVar7;
  long lVar8;
  int iVar9;
  long lVar10;
  long in_FS_OFFSET;
  bool bVar11;
  long local_60;
  Vector local_58 [8];
  long local_50 [2];
  long local_40;
  
  lVar10 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _pose_updated(this);
  lVar6 = *(long *)(this + 0x560);
  this[0x550] = (PhysicalBoneSimulator3D)0x1;
  for (lVar8 = 0; (lVar6 != 0 && (lVar8 < *(long *)(lVar6 + -8))); lVar8 = lVar8 + 1) {
    if (*(long *)(lVar6 + 0x48 + lVar10) != 0) {
      PhysicalBone3D::reset_physics_simulation_state();
      lVar6 = *(long *)(this + 0x560);
    }
    lVar10 = lVar10 + 0x58;
  }
  local_50[0] = 0;
  iVar3 = Array::size();
  if (0 < iVar3) {
    iVar3 = Array::size();
    CowData<int>::resize<false>((CowData<int> *)local_50,(long)iVar3);
    if ((local_50[0] == 0) || (iVar3 = (int)*(undefined8 *)(local_50[0] + -8) + -1, iVar3 < 0)) {
      lVar6 = 0;
    }
    else {
      iVar9 = 0;
      do {
        Array::operator[]((int)param_1);
        Variant::operator_cast_to_String((Variant *)&local_60);
        pSVar7 = (String *)SkeletonModifier3D::get_skeleton();
        lVar6 = local_60;
        if (pSVar7 == (String *)0x0) {
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
        }
        else {
          iVar4 = Skeleton3D::find_bone(pSVar7);
          lVar6 = local_60;
          if (local_60 != 0) {
            LOCK();
            plVar1 = (long *)(local_60 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_60 = 0;
              Memory::free_static((void *)(lVar6 + -0x10),false);
            }
          }
          if (iVar4 != -1) {
            lVar6 = (long)iVar9;
            if (iVar9 < 0) {
              if (local_50[0] != 0) {
LAB_00102c14:
                lVar8 = *(long *)(local_50[0] + -8);
                goto LAB_00102c18;
              }
            }
            else if (local_50[0] != 0) {
              if (*(long *)(local_50[0] + -8) <= lVar6) goto LAB_00102c14;
              CowData<int>::_copy_on_write((CowData<int> *)local_50);
              *(int *)(local_50[0] + lVar6 * 4) = iVar4;
              iVar9 = iVar9 + 1;
              goto LAB_00102b8c;
            }
            lVar8 = 0;
LAB_00102c18:
            _err_print_index_error
                      ("operator[]","./core/templates/vector.h",0x38,lVar6,lVar8,"p_index",
                       "((Vector<T> *)(this))->_cowdata.size()","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
LAB_00102b8c:
        bVar11 = iVar3 != 0;
        iVar3 = iVar3 + -1;
      } while (bVar11);
      lVar6 = (long)iVar9;
    }
    CowData<int>::resize<false>((CowData<int> *)local_50,lVar6);
  }
  if (this[0x568] == (PhysicalBoneSimulator3D)0x0) {
    _pb_start_simulation(this,(Node *)this,local_58);
  }
  else {
    pNVar5 = (Node *)SkeletonModifier3D::get_skeleton();
    if ((pNVar5 != (Node *)0x0) &&
       (lVar6 = __dynamic_cast(pNVar5,&Object::typeinfo,&typeinfo,0), lVar6 == 0)) {
      _pb_start_simulation_compat(this,pNVar5,local_58);
    }
  }
  lVar6 = local_50[0];
  if (local_50[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_50[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_50[0] = 0;
      Memory::free_static((void *)(lVar6 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* SkeletonModifier3D::is_processed_on_saving() const */

undefined8 SkeletonModifier3D::is_processed_on_saving(void)

{
  return 0;
}



/* PhysicalBoneSimulator3D::is_class_ptr(void*) const */

uint __thiscall PhysicalBoneSimulator3D::is_class_ptr(PhysicalBoneSimulator3D *this,void *param_1)

{
  return (uint)CONCAT71(0x1091,(undefined4 *)param_1 ==
                               &SkeletonModifier3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1091,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1091,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1091,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1091,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PhysicalBoneSimulator3D::_getv(StringName const&, Variant&) const */

undefined8 PhysicalBoneSimulator3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicalBoneSimulator3D::_setv(StringName const&, Variant const&) */

undefined8 PhysicalBoneSimulator3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<PhysicalBoneSimulator3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicalBoneSimulator3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicalBoneSimulator3D,void> *this)

{
  return;
}



/* MethodBindT<RID>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<RID>::_gen_argument_type(MethodBindT<RID> *this,int param_1)

{
  return -(param_1 == 0) & 0x17;
}



/* MethodBindT<RID>::get_argument_meta(int) const */

undefined8 MethodBindT<RID>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<TypedArray<StringName> const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<TypedArray<StringName>const&>::_gen_argument_type
          (MethodBindT<TypedArray<StringName>const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x1c;
}



/* MethodBindT<TypedArray<StringName> const&>::get_argument_meta(int) const */

undefined8 MethodBindT<TypedArray<StringName>const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

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



/* CallableCustomMethodPointer<PhysicalBoneSimulator3D, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<PhysicalBoneSimulator3D,void>::get_argument_count
          (CallableCustomMethodPointer<PhysicalBoneSimulator3D,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<PhysicalBoneSimulator3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicalBoneSimulator3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicalBoneSimulator3D,void> *this)

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



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109010;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109010;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109070;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109070;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TypedArray<StringName> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<StringName>const&>::~MethodBindT
          (MethodBindT<TypedArray<StringName>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001090d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TypedArray<StringName> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<StringName>const&>::~MethodBindT
          (MethodBindT<TypedArray<StringName>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001090d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<RID>::~MethodBindT() */

void __thiscall MethodBindT<RID>::~MethodBindT(MethodBindT<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109130;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<RID>::~MethodBindT() */

void __thiscall MethodBindT<RID>::~MethodBindT(MethodBindT<RID> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00109130;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* PhysicalBoneSimulator3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PhysicalBoneSimulator3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* PhysicalBoneSimulator3D::_property_can_revertv(StringName const&) const */

undefined8 PhysicalBoneSimulator3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010c008 != Object::_property_can_revert) {
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



/* PhysicalBoneSimulator3D::_bind_methods() [clone .cold] */

void PhysicalBoneSimulator3D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<int>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<int>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00103344(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<PhysicalBoneSimulator3D::SimulatedBone>::_copy_on_write() [clone .isra.0] [clone .cold]
    */

void CowData<PhysicalBoneSimulator3D::SimulatedBone>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<PhysicalBoneSimulator3D, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<PhysicalBoneSimulator3D,void>::get_object
          (CallableCustomMethodPointer<PhysicalBoneSimulator3D,void> *this)

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
      goto LAB_0010344d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010344d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010344d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* PhysicalBoneSimulator3D::_validate_propertyv(PropertyInfo&) const */

void PhysicalBoneSimulator3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010c010 == Node3D::_validate_property) {
    return;
  }
  SkeletonModifier3D::_validate_property(param_1);
  return;
}



/* PhysicalBoneSimulator3D::_notificationv(int, bool) */

void __thiscall
PhysicalBoneSimulator3D::_notificationv(PhysicalBoneSimulator3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010c018 != Node3D::_notification) {
      SkeletonModifier3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_0010c018 == Node3D::_notification) {
    return;
  }
  SkeletonModifier3D::_notification(iVar1);
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



/* PhysicalBoneSimulator3D::_get_class_namev() const */

undefined8 * PhysicalBoneSimulator3D::_get_class_namev(void)

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
LAB_001036c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001036c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PhysicalBoneSimulator3D");
      goto LAB_0010372e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PhysicalBoneSimulator3D");
LAB_0010372e:
  return &_get_class_namev()::_class_name_static;
}



/* PhysicalBoneSimulator3D::get_class() const */

void PhysicalBoneSimulator3D::get_class(void)

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



/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC9;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 1;
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
      goto joined_r0x0010397c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010397c:
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

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
  undefined *local_78;
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
  local_78 = &_LC12;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC12;
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
LAB_00103b38:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103b38;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103b56;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103b56:
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable
   create_custom_callable_function_pointer<PhysicalBoneSimulator3D>(PhysicalBoneSimulator3D*, char
   const*, void (PhysicalBoneSimulator3D::*)()) */

PhysicalBoneSimulator3D *
create_custom_callable_function_pointer<PhysicalBoneSimulator3D>
          (PhysicalBoneSimulator3D *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC9;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00108f80;
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



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  StringName *local_a0;
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
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010434a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010434a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
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



/* CallableCustomMethodPointer<PhysicalBoneSimulator3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<PhysicalBoneSimulator3D,void>::call
          (CallableCustomMethodPointer<PhysicalBoneSimulator3D,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_001047cf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001047cf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001047a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00104891;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001047cf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC27,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00104891:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RID>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<RID>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001048e9;
  local_78 = 0;
  local_68 = &_LC9;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x17);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001049e5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001049e5;
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
LAB_001048e9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* SkeletonModifier3D::is_class(String const&) const */

undefined8 __thiscall SkeletonModifier3D::is_class(SkeletonModifier3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
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
            if (lVar5 == 0) goto LAB_00104b9f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_00104b9f:
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
    if (cVar6 != '\0') goto LAB_00104c53;
  }
  cVar6 = String::operator==(param_1,"SkeletonModifier3D");
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
              if (lVar5 == 0) goto LAB_00104d9b;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
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
LAB_00104d9b:
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
      if (cVar6 != '\0') goto LAB_00104c53;
    }
    cVar6 = String::operator==(param_1,"Node3D");
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
            if (*(long *)(lVar4 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_00104c53;
      }
      cVar6 = String::operator==(param_1,"Node");
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
              if (*(long *)(lVar4 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
              }
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
          cVar6 = String::operator==(param_1,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar6 != '\0') goto LAB_00104c53;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_00104f1e;
      }
    }
  }
LAB_00104c53:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00104f1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBoneSimulator3D::is_class(String const&) const */

undefined8 __thiscall
PhysicalBoneSimulator3D::is_class(PhysicalBoneSimulator3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_00104f9f;
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
LAB_00104f9f:
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
    if (cVar5 != '\0') goto LAB_00105053;
  }
  cVar5 = String::operator==(param_1,"PhysicalBoneSimulator3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = SkeletonModifier3D::is_class((SkeletonModifier3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00105053:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
LAB_00105230:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105230;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010524d;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010524d:
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
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



/* PhysicalBoneSimulator3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
PhysicalBoneSimulator3D::_get_property_listv
          (PhysicalBoneSimulator3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
  long in_FS_OFFSET;
  StringName *local_a0;
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
    SkeletonModifier3D::_get_property_listv((SkeletonModifier3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PhysicalBoneSimulator3D";
  local_70 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicalBoneSimulator3D";
  local_98 = 0;
  local_70 = 0x17;
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
LAB_00105668:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00105668;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010568a;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010568a:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  local_a0 = (StringName *)&local_68;
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
  StringName::operator=((StringName *)(puVar5 + 4),local_a0);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"PhysicalBoneSimulator3D",false);
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



/* MethodBindT<TypedArray<StringName> const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<TypedArray<StringName>const&>::_gen_argument_type_info(int param_1)

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
  undefined4 local_68;
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
  if (in_EDX != 0) goto LAB_00105969;
  local_78 = 0;
  Variant::get_type_name((CowData<char32_t> *)&local_80,0x15);
  local_88 = 0;
  local_68 = 0x1c;
  local_50 = 0x1f;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00105a45:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00105a45;
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
  *puVar4 = local_68;
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
LAB_00105969:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar4;
}



/* MethodBind* create_method_bind<PhysicalBoneSimulator3D, bool>(bool (PhysicalBoneSimulator3D::*)()
   const) */

MethodBind * create_method_bind<PhysicalBoneSimulator3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00109010;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PhysicalBoneSimulator3D";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<PhysicalBoneSimulator3D>(void (PhysicalBoneSimulator3D::*)()) */

MethodBind * create_method_bind<PhysicalBoneSimulator3D>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00109070;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PhysicalBoneSimulator3D";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<PhysicalBoneSimulator3D, TypedArray<StringName> const&>(void
   (PhysicalBoneSimulator3D::*)(TypedArray<StringName> const&)) */

MethodBind *
create_method_bind<PhysicalBoneSimulator3D,TypedArray<StringName>const&>
          (_func_void_TypedArray_ptr *param_1)

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
  *(_func_void_TypedArray_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001090d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalBoneSimulator3D";
  local_30 = 0x17;
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



/* MethodBind* create_method_bind<PhysicalBoneSimulator3D, RID>(void
   (PhysicalBoneSimulator3D::*)(RID)) */

MethodBind * create_method_bind<PhysicalBoneSimulator3D,RID>(_func_void_RID *param_1)

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
  *(_func_void_RID **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00109130;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalBoneSimulator3D";
  local_30 = 0x17;
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



/* PhysicalBoneSimulator3D::_initialize_classv() */

void PhysicalBoneSimulator3D::_initialize_classv(void)

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
          if ((code *)PTR__bind_methods_0010c028 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_0010c020 != Node3D::_bind_methods) {
        SkeletonModifier3D::_bind_methods();
      }
      SkeletonModifier3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "SkeletonModifier3D";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "PhysicalBoneSimulator3D";
    local_70 = 0;
    local_50 = 0x17;
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



/* CowData<PhysicalBoneSimulator3D::SimulatedBone>::_unref() */

void __thiscall
CowData<PhysicalBoneSimulator3D::SimulatedBone>::_unref
          (CowData<PhysicalBoneSimulator3D::SimulatedBone> *this)

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
          lVar6 = lVar6 + 0x58;
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



/* PhysicalBoneSimulator3D::~PhysicalBoneSimulator3D() */

void __thiscall PhysicalBoneSimulator3D::~PhysicalBoneSimulator3D(PhysicalBoneSimulator3D *this)

{
  bool bVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_00108d70;
  CowData<PhysicalBoneSimulator3D::SimulatedBone>::_unref
            ((CowData<PhysicalBoneSimulator3D::SimulatedBone> *)(this + 0x560));
  bVar1 = StringName::configured != '\0';
  *(code **)this = PhysicalBone3D::_on_bone_parent_changed;
  if ((bVar1) && (*(long *)(this + 0x538) != 0)) {
    StringName::unref();
  }
  Node3D::~Node3D((Node3D *)this);
  return;
}



/* PhysicalBoneSimulator3D::~PhysicalBoneSimulator3D() */

void __thiscall PhysicalBoneSimulator3D::~PhysicalBoneSimulator3D(PhysicalBoneSimulator3D *this)

{
  bool bVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_00108d70;
  CowData<PhysicalBoneSimulator3D::SimulatedBone>::_unref
            ((CowData<PhysicalBoneSimulator3D::SimulatedBone> *)(this + 0x560));
  bVar1 = StringName::configured != '\0';
  *(code **)this = PhysicalBone3D::_on_bone_parent_changed;
  if ((bVar1) && (*(long *)(this + 0x538) != 0)) {
    StringName::unref();
  }
  Node3D::~Node3D((Node3D *)this);
  operator_delete(this,0x570);
  return;
}



/* CowData<PhysicalBoneSimulator3D::SimulatedBone>::_realloc(long) */

undefined8 __thiscall
CowData<PhysicalBoneSimulator3D::SimulatedBone>::_realloc
          (CowData<PhysicalBoneSimulator3D::SimulatedBone> *this,long param_1)

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
/* Error CowData<PhysicalBoneSimulator3D::SimulatedBone>::resize<false>(long) */

undefined8 __thiscall
CowData<PhysicalBoneSimulator3D::SimulatedBone>::resize<false>
          (CowData<PhysicalBoneSimulator3D::SimulatedBone> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long in_FS_OFFSET;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    uVar8 = 0x1f;
    goto LAB_0010687f;
  }
  if (*(long *)this == 0) {
    if (param_1 != 0) {
      _copy_on_write(this);
      lVar12 = 0;
      lVar13 = 0;
LAB_0010676b:
      lVar15 = param_1 * 0x58;
      if (lVar15 == 0) {
LAB_00106a00:
        _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                         "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                         ,0,0);
      }
      else {
        uVar14 = lVar15 - 1U >> 1 | lVar15 - 1U;
        uVar14 = uVar14 | uVar14 >> 2;
        uVar14 = uVar14 | uVar14 >> 4;
        uVar14 = uVar14 | uVar14 >> 8;
        uVar14 = uVar14 | uVar14 >> 0x10;
        uVar14 = uVar14 | uVar14 >> 0x20;
        lVar7 = uVar14 + 1;
        if (lVar7 == 0) goto LAB_00106a00;
        if (param_1 <= lVar12) {
          lVar12 = *(long *)this;
          uVar14 = param_1;
          while (lVar12 != 0) {
            if (*(ulong *)(lVar12 + -8) <= uVar14) {
LAB_0010683d:
              if (lVar7 != lVar13) {
                uVar8 = _realloc(this,lVar7);
                if ((int)uVar8 != 0) goto LAB_0010687f;
                lVar12 = *(long *)this;
                if (lVar12 == 0) {
                  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
                  pcVar4 = (code *)invalidInstructionException();
                  (*pcVar4)();
                }
              }
              *(long *)(lVar12 + -8) = param_1;
              goto LAB_0010687d;
            }
            while( true ) {
              lVar2 = lVar12 + lVar15;
              if (*(long *)(lVar2 + 0x10) != 0) break;
              uVar14 = uVar14 + 1;
              lVar15 = lVar15 + 0x58;
              if (*(ulong *)(lVar12 + -8) <= uVar14) goto LAB_0010683d;
            }
            LOCK();
            plVar1 = (long *)(*(long *)(lVar2 + 0x10) + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              lVar12 = *(long *)(lVar2 + 0x10);
              *(undefined8 *)(lVar2 + 0x10) = 0;
              Memory::free_static((void *)(lVar12 + -0x10),false);
            }
            uVar14 = uVar14 + 1;
            lVar15 = lVar15 + 0x58;
            lVar12 = *(long *)this;
          }
          goto LAB_00106a5b;
        }
        if (lVar7 == lVar13) {
LAB_00106975:
          puVar11 = *(undefined8 **)this;
          if (puVar11 == (undefined8 *)0x0) {
LAB_00106a5b:
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          lVar12 = puVar11[-1];
          if (lVar12 < param_1) goto LAB_001068e7;
LAB_00106955:
          puVar11[-1] = param_1;
          goto LAB_0010687d;
        }
        if (lVar12 != 0) {
          uVar8 = _realloc(this,lVar7);
          if ((int)uVar8 != 0) goto LAB_0010687f;
          goto LAB_00106975;
        }
        puVar9 = (undefined8 *)Memory::alloc_static(uVar14 + 0x11,false);
        if (puVar9 != (undefined8 *)0x0) {
          puVar11 = puVar9 + 2;
          *puVar9 = 1;
          puVar9[1] = 0;
          *(undefined8 **)this = puVar11;
          lVar12 = 0;
LAB_001068e7:
          uVar5 = _LC21;
          puVar9 = puVar11 + lVar12 * 0xb;
          do {
            uVar6 = _UNK_001091f8;
            uVar8 = CONCAT44(_UNK_001091f4,_LC21);
            puVar10 = puVar9 + 0xb;
            puVar9[2] = 0;
            *(undefined1 (*) [16])(puVar9 + 9) = (undefined1  [16])0x0;
            *(undefined4 *)puVar9 = 0xffffffff;
            puVar9[3] = uVar8;
            puVar9[4] = uVar6;
            puVar9[5] = uVar8;
            puVar9[6] = uVar6;
            puVar9[7] = (ulong)uVar5;
            puVar9[8] = 0;
            puVar9 = puVar10;
          } while (puVar10 != puVar11 + param_1 * 0xb);
          goto LAB_00106955;
        }
        _err_print_error("resize","./core/templates/cowdata.h",0x171,
                         "Parameter \"mem_new\" is null.",0,0);
      }
      uVar8 = 6;
      goto LAB_0010687f;
    }
  }
  else {
    lVar12 = *(long *)(*(long *)this + -8);
    if (param_1 != lVar12) {
      if (param_1 != 0) {
        _copy_on_write(this);
        lVar13 = lVar12 * 0x58;
        if (lVar13 != 0) {
          uVar14 = lVar13 - 1U | lVar13 - 1U >> 1;
          uVar14 = uVar14 | uVar14 >> 2;
          uVar14 = uVar14 | uVar14 >> 4;
          uVar14 = uVar14 | uVar14 >> 8;
          uVar14 = uVar14 | uVar14 >> 0x10;
          lVar13 = (uVar14 | uVar14 >> 0x20) + 1;
        }
        goto LAB_0010676b;
      }
      _unref(this);
    }
  }
LAB_0010687d:
  uVar8 = 0;
LAB_0010687f:
  if (lVar3 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}



/* WARNING: Removing unreachable block (ram,0x00106bf8) */
/* WARNING: Removing unreachable block (ram,0x00106d8d) */
/* WARNING: Removing unreachable block (ram,0x00106d99) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  Variant *this;
  int iVar1;
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
  iVar1 = (int)local_c8;
  Array::resize(iVar1);
  this = (Variant *)Array::operator[](iVar1);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* MethodBindT<RID>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<RID>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001070a1;
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
                    /* WARNING: Could not recover jumptable at 0x00106f2d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001070a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RID>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<RID>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00107281;
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
                    /* WARNING: Could not recover jumptable at 0x0010710c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00107281:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC27,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001073a0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
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
LAB_001073a0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_0010771f;
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
                    /* WARNING: Could not recover jumptable at 0x001075c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0010771f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_40 = 0x35;
      local_50 = 0;
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
      goto LAB_001078df;
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
                    /* WARNING: Could not recover jumptable at 0x00107786. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001078df:
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
      _err_print_error(&_LC27,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00107a40;
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
LAB_00107a40:
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
      goto LAB_00107c52;
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
LAB_00107c52:
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
      goto LAB_00107e01;
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
LAB_00107e01:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<StringName> const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<TypedArray<StringName>const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long lVar1;
  char cVar2;
  Variant *pVVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar3 = param_2[0x23];
      if (pVVar3 == (Variant *)0x0) {
        pVVar3 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar3 = param_2[1] + 0x20;
    }
    if (local_68 == (char *)*(long *)pVVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00108059;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_70);
  local_58 = 0;
  local_68 = (char *)0x0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)(Array *)&local_70,(StringName *)0x15,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_70);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_70);
  }
  else {
    Array::_ref((Array *)&local_70);
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(Array *)&local_70);
  Array::~Array((Array *)&local_70);
LAB_00108059:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<StringName> const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<TypedArray<StringName>const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char cVar2;
  long *plVar3;
  code *pcVar4;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_68 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001082f5;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(param_1 + 0x58);
  lVar1 = *(long *)(param_1 + 0x60);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)((long)param_2 + lVar1) + -1);
  }
  Array::Array((Array *)&local_70);
  local_58 = 0;
  local_68 = (char *)0x0;
  local_50 = (undefined1  [16])0x0;
  Array::set_typed((uint)(Array *)&local_70,(StringName *)0x15,(Variant *)&local_68);
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = Array::is_same_typed((Array *)&local_70);
  if (cVar2 == '\0') {
    Array::assign((Array *)&local_70);
  }
  else {
    Array::_ref((Array *)&local_70);
  }
  (*pcVar4)((long *)((long)param_2 + lVar1),(Array *)&local_70);
  Array::~Array((Array *)&local_70);
LAB_001082f5:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<RID>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<RID>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC27,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001085b0;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00108600;
LAB_001085f0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00108600:
        uVar5 = 4;
        goto LAB_001085a5;
      }
      if (in_R8D == 1) goto LAB_001085f0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x17);
    uVar6 = _LC78;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar6;
    }
    uVar6 = Variant::operator_cast_to_RID(pVVar10);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),uVar6);
  }
  else {
    uVar5 = 3;
LAB_001085a5:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_001085b0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<TypedArray<StringName> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<TypedArray<StringName>const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_68 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC27,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00108970;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001089c0;
LAB_001089b0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001089c0:
        uVar6 = 4;
        goto LAB_00108965;
      }
      if (in_R8D == 1) goto LAB_001089b0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x1c);
    uVar4 = _LC80;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Array((Variant *)&local_68);
    Array::Array((Array *)&local_78);
    local_58 = 0;
    local_70 = 0;
    local_50 = (undefined1  [16])0x0;
    Array::set_typed((uint)(Array *)&local_78,(StringName *)0x15,(Variant *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    cVar5 = Array::is_same_typed((Array *)&local_78);
    if (cVar5 == '\0') {
      Array::assign((Array *)&local_78);
    }
    else {
      Array::_ref((Array *)&local_78);
    }
    Array::~Array((Array *)&local_68);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Array *)&local_78);
    Array::~Array((Array *)&local_78);
  }
  else {
    uVar6 = 3;
LAB_00108965:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00108970:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PhysicalBoneSimulator3D::~PhysicalBoneSimulator3D() */

void __thiscall PhysicalBoneSimulator3D::~PhysicalBoneSimulator3D(PhysicalBoneSimulator3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<RID>::~MethodBindT() */

void __thiscall MethodBindT<RID>::~MethodBindT(MethodBindT<RID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<TypedArray<StringName> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<StringName>const&>::~MethodBindT
          (MethodBindT<TypedArray<StringName>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

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
/* CallableCustomMethodPointer<PhysicalBoneSimulator3D, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicalBoneSimulator3D,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicalBoneSimulator3D,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


