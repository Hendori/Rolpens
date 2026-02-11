
/* SkeletonModification2DPhysicalBones::get_physical_bone_chain_length() */

undefined4 __thiscall
SkeletonModification2DPhysicalBones::get_physical_bone_chain_length
          (SkeletonModification2DPhysicalBones *this)

{
  if (*(long *)(this + 0x2a8) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x2a8) + -8);
  }
  return 0;
}



/* SkeletonModification2DPhysicalBones::get_physical_bone_node(int) const */

NodePath * SkeletonModification2DPhysicalBones::get_physical_bone_node(int param_1)

{
  long lVar1;
  long lVar2;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  NodePath *this;
  long lVar3;
  
  this = (NodePath *)CONCAT44(in_register_0000003c,param_1);
  lVar2 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x2a8);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar3 = *(long *)(lVar1 + -8);
      goto LAB_00100061;
    }
  }
  else if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + -8);
    if (lVar2 < lVar3) {
      NodePath::NodePath(this,(NodePath *)(lVar1 + lVar2 * 0x10));
      return this;
    }
    goto LAB_00100061;
  }
  lVar3 = 0;
LAB_00100061:
  _err_print_index_error
            ("get_physical_bone_node",
             "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp",0x10e,lVar2,
             lVar3,"p_joint_idx","physical_bone_chain.size()","Joint index out of range!",false,
             false);
  *(undefined8 *)this = 0;
  return this;
}



/* SkeletonModification2DPhysicalBones::_update_simulation_state() [clone .part.0] */

void __thiscall
SkeletonModification2DPhysicalBones::_update_simulation_state
          (SkeletonModification2DPhysicalBones *this)

{
  ulong uVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  ulong *puVar6;
  long lVar7;
  long in_FS_OFFSET;
  bool bVar8;
  StringName local_60;
  undefined7 uStack_5f;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x2b0] = (SkeletonModification2DPhysicalBones)0x0;
  iVar3 = Array::size();
  lVar4 = *(long *)(this + 0x2a8);
  if (iVar3 < 1) {
    if (lVar4 != 0) {
      lVar7 = 0;
      do {
        if (*(long *)(lVar4 + -8) <= lVar7) break;
        lVar4 = Node::get_node(*(NodePath **)(*(long *)(this + 0x240) + 0x240));
        if ((lVar4 != 0) &&
           (lVar4 = __dynamic_cast(lVar4,&Object::typeinfo,&PhysicalBone2D::typeinfo,0), lVar4 != 0)
           ) {
          PhysicalBone2D::set_simulate_physics(SUB81(lVar4,0));
        }
        lVar4 = *(long *)(this + 0x2a8);
        lVar7 = lVar7 + 1;
      } while (lVar4 != 0);
    }
LAB_00100262:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  lVar7 = 0;
joined_r0x00100109:
  if (lVar4 != 0) {
    do {
      if (*(long *)(lVar4 + -8) <= lVar7) break;
      uVar1 = *(ulong *)(lVar4 + 8 + lVar7 * 0x10);
      uVar5 = (uint)uVar1 & 0xffffff;
      if (uVar5 < (uint)ObjectDB::slot_max) {
        while( true ) {
          local_60 = (StringName)0x0;
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
        puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
        if ((uVar1 >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
          uVar1 = puVar6[1];
          ObjectDB::spin_lock._0_1_ = '\0';
          if ((uVar1 != 0) &&
             (lVar4 = __dynamic_cast(uVar1,&Object::typeinfo,&PhysicalBone2D::typeinfo,0),
             lVar4 != 0)) {
            Node::get_name();
            Variant::Variant((Variant *)local_58,&local_60);
            cVar2 = Array::has((Variant *)(this + 0x2b8));
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
              StringName::unref();
            }
            if (cVar2 != '\0') goto LAB_0010023f;
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
      lVar4 = *(long *)(this + 0x2a8);
      lVar7 = lVar7 + 1;
      if (lVar4 == 0) break;
    } while( true );
  }
  goto LAB_00100262;
LAB_0010023f:
  lVar7 = lVar7 + 1;
  PhysicalBone2D::set_simulate_physics(SUB81(lVar4,0));
  lVar4 = *(long *)(this + 0x2a8);
  goto joined_r0x00100109;
}



/* SkeletonModification2DPhysicalBones::stop_simulation(TypedArray<StringName> const&) */

void __thiscall
SkeletonModification2DPhysicalBones::stop_simulation
          (SkeletonModification2DPhysicalBones *this,TypedArray *param_1)

{
  this[0x2b0] = (SkeletonModification2DPhysicalBones)0x1;
  Array::operator=((Array *)(this + 0x2b8),(Array *)param_1);
  this[0x2c0] = (SkeletonModification2DPhysicalBones)0x0;
  if ((this[0x24d] != (SkeletonModification2DPhysicalBones)0x0) &&
     (this[0x2b0] != (SkeletonModification2DPhysicalBones)0x0)) {
    _update_simulation_state(this);
    return;
  }
  return;
}



/* SkeletonModification2DPhysicalBones::start_simulation(TypedArray<StringName> const&) */

void __thiscall
SkeletonModification2DPhysicalBones::start_simulation
          (SkeletonModification2DPhysicalBones *this,TypedArray *param_1)

{
  this[0x2b0] = (SkeletonModification2DPhysicalBones)0x1;
  Array::operator=((Array *)(this + 0x2b8),(Array *)param_1);
  this[0x2c0] = (SkeletonModification2DPhysicalBones)0x1;
  if ((this[0x24d] != (SkeletonModification2DPhysicalBones)0x0) &&
     (this[0x2b0] != (SkeletonModification2DPhysicalBones)0x0)) {
    _update_simulation_state(this);
    return;
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



/* SkeletonModification2DPhysicalBones::_update_simulation_state() */

void __thiscall
SkeletonModification2DPhysicalBones::_update_simulation_state
          (SkeletonModification2DPhysicalBones *this)

{
  if (this[0x2b0] == (SkeletonModification2DPhysicalBones)0x0) {
    return;
  }
  _update_simulation_state(this);
  return;
}



/* SkeletonModification2DPhysicalBones::_get_property_list(List<PropertyInfo, DefaultAllocator>*)
   const */

void __thiscall
SkeletonModification2DPhysicalBones::_get_property_list
          (SkeletonModification2DPhysicalBones *this,List *param_1)

{
  long *plVar1;
  char *pcVar2;
  long lVar3;
  long lVar4;
  undefined4 *puVar5;
  undefined1 (*pauVar6) [16];
  long lVar7;
  long in_FS_OFFSET;
  long local_a8;
  long local_a0;
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
  lVar4 = Engine::get_singleton();
  if (*(char *)(lVar4 + 0xc0) == '\0') goto LAB_001004d2;
  local_88 = 0;
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"");
  local_98 = 0;
  String::parse_latin1((String *)&local_98,"fetch_bones");
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00100add:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00100add;
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
  }
  if (*(long *)param_1 == 0) {
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar6;
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
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
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
  lVar4 = plVar1[1];
  *(undefined8 *)(puVar5 + 0xc) = 0;
  *(long **)(puVar5 + 0x10) = plVar1;
  *(long *)(puVar5 + 0xe) = lVar4;
  if (lVar4 != 0) {
    *(undefined4 **)(lVar4 + 0x30) = puVar5;
  }
  plVar1[1] = (long)puVar5;
  if (*plVar1 == 0) {
    *plVar1 = (long)puVar5;
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
LAB_001004d2:
  lVar7 = 0;
  lVar4 = *(long *)(this + 0x2a8);
  do {
    if ((lVar4 == 0) || (*(long *)(lVar4 + -8) <= lVar7)) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_80 = 0;
    local_70 = 1;
    local_78 = "_";
    String::parse_latin1((StrRange *)&local_80);
    itos((long)&local_88);
    operator+((char *)&local_78,(String *)"joint_");
    String::operator+((String *)&local_a8,(String *)&local_78);
    pcVar2 = local_78;
    if (local_78 != (undefined *)0x0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = (undefined *)0x0;
        Memory::free_static(pcVar2 + -0x10,false);
      }
    }
    lVar4 = local_88;
    if (local_88 != 0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    local_88 = 0;
    local_78 = "PhysicalBone2D";
    local_90 = 0;
    local_70 = 0xe;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = "nodepath";
    local_a0 = 0;
    local_70 = 8;
    String::parse_latin1((StrRange *)&local_a0);
    String::operator+((String *)&local_98,(String *)&local_a8);
    local_78 = (char *)CONCAT44(local_78._4_4_,0x16);
    local_70 = 0;
    if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    }
    local_68 = 0;
    local_60 = 0x1a;
    local_58 = 0;
    if (local_90 == 0) {
LAB_00100934:
      local_50 = 6;
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
      lVar4 = *(long *)param_1;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00100934;
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
      lVar4 = *(long *)param_1;
    }
    if (lVar4 == 0) {
      pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])param_1 = pauVar6;
      *(undefined4 *)pauVar6[1] = 0;
      *pauVar6 = (undefined1  [16])0x0;
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
    lVar4 = plVar1[1];
    *(undefined8 *)(puVar5 + 0xc) = 0;
    *(long **)(puVar5 + 0x10) = plVar1;
    *(long *)(puVar5 + 0xe) = lVar4;
    if (lVar4 != 0) {
      *(undefined4 **)(lVar4 + 0x30) = puVar5;
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
    lVar4 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar4 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    lVar4 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
    lVar7 = lVar7 + 1;
    lVar4 = *(long *)(this + 0x2a8);
  } while( true );
}



/* SkeletonModification2DPhysicalBones::_get(StringName const&, Variant&) const */

undefined4 __thiscall
SkeletonModification2DPhysicalBones::_get
          (SkeletonModification2DPhysicalBones *this,StringName *param_1,Variant *param_2)

{
  char *__s;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  wchar32 wVar6;
  long in_FS_OFFSET;
  undefined8 local_78;
  String local_70 [8];
  char *local_68;
  size_t local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar4 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar4 == 0) {
    local_78 = 0;
  }
  else {
    __s = *(char **)(lVar4 + 8);
    local_78 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar4 + 0x10));
    }
    else {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_78);
    }
  }
  lVar4 = Engine::get_singleton();
  if (*(char *)(lVar4 + 0xc0) != '\0') {
    uVar2 = String::begins_with((char *)&local_78);
    if ((char)uVar2 != '\0') goto LAB_00100d28;
  }
  cVar1 = String::begins_with((char *)&local_78);
  if (cVar1 == '\0') {
LAB_00100d25:
    uVar2 = 0;
    goto LAB_00100d28;
  }
  iVar5 = (int)(CowData<char32_t> *)&local_78;
  wVar6 = (wchar32)(CowData<char32_t> *)&local_68;
  String::get_slicec(wVar6,iVar5);
  iVar3 = String::to_int();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  String::get_slicec((wchar32)local_70,iVar5);
  if (iVar3 < 0) {
    if (*(long *)(this + 0x2a8) == 0) goto LAB_00100ee0;
    lVar4 = *(long *)(*(long *)(this + 0x2a8) + -8);
LAB_00100ea3:
    uVar2 = 0;
    _err_print_index_error
              ("_get","scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp",0x4e,
               (long)iVar3,lVar4,"which","physical_bone_chain.size()","",false,false);
  }
  else {
    if (*(long *)(this + 0x2a8) == 0) {
LAB_00100ee0:
      lVar4 = 0;
      goto LAB_00100ea3;
    }
    lVar4 = *(long *)(*(long *)(this + 0x2a8) + -8);
    if (lVar4 <= iVar3) goto LAB_00100ea3;
    uVar2 = String::operator==(local_70,"nodepath");
    if ((char)uVar2 == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      goto LAB_00100d25;
    }
    get_physical_bone_node(wVar6);
    Variant::Variant((Variant *)local_58,(NodePath *)&local_68);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_58[0];
    *(undefined8 *)(param_2 + 8) = local_50;
    *(undefined8 *)(param_2 + 0x10) = uStack_48;
    NodePath::~NodePath((NodePath *)&local_68);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
LAB_00100d28:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DPhysicalBones::_bind_methods() */

void SkeletonModification2DPhysicalBones::_bind_methods(void)

{
  char cVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long *plVar5;
  MethodBind *pMVar6;
  long *plVar7;
  uint uVar8;
  long lVar9;
  long in_FS_OFFSET;
  CowData<char32_t> *local_138;
  undefined8 local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  char *local_d8;
  undefined8 local_d0;
  long *local_c8;
  int local_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  puVar4 = PTR__LC22_0010aa08;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_a8 = "length";
  local_78 = (Variant **)&local_a8;
  uVar8 = (uint)(Variant *)&local_78;
  D_METHODP((char *)&local_d8,(char ***)"set_physical_bone_chain_length",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<SkeletonModification2DPhysicalBones,int>
                     (set_physical_bone_chain_length);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_c8[-1];
      lVar9 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_physical_bone_chain_length",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<SkeletonModification2DPhysicalBones,int>
                     (get_physical_bone_chain_length);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_c8[-1];
      lVar9 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = 0;
  auStack_70._0_8_ = &pcStack_90;
  local_98 = (Variant *)puVar4;
  pcStack_90 = "physicalbone2d_node";
  local_78 = &local_98;
  D_METHODP((char *)&local_d8,(char ***)"set_physical_bone_node",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<SkeletonModification2DPhysicalBones,int,NodePath_const&>
                     (set_physical_bone_node);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_c8[-1];
      lVar9 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_98 = (Variant *)0x1035b2;
  pcStack_90 = (char *)0x0;
  local_78 = &local_98;
  D_METHODP((char *)&local_d8,(char ***)"get_physical_bone_node",uVar8);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<SkeletonModification2DPhysicalBones,NodePath,int>
                     (get_physical_bone_node);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_c8[-1];
      lVar9 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"fetch_physical_bones",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar6 = create_method_bind<SkeletonModification2DPhysicalBones>(fetch_physical_bones);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_c8[-1];
      lVar9 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  Array::Array((Array *)&local_e8);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x103603;
  local_78 = &local_98;
  D_METHODP((char *)&local_d8,(char ***)"start_simulation",uVar8);
  Variant::Variant((Variant *)&local_78,(Array *)&local_e8);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar6 = create_method_bind<SkeletonModification2DPhysicalBones,TypedArray<StringName>const&>
                     (start_simulation);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,&local_98,1);
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
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_c8[-1];
      lVar9 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  Array::~Array((Array *)&local_e8);
  Array::Array((Array *)&local_e8);
  pcStack_90 = (char *)0x0;
  local_98 = (Variant *)0x103603;
  local_78 = &local_98;
  D_METHODP((char *)&local_d8,(char ***)"stop_simulation",uVar8);
  Variant::Variant((Variant *)&local_78,(Array *)&local_e8);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar6 = create_method_bind<SkeletonModification2DPhysicalBones,TypedArray<StringName>const&>
                     (stop_simulation);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,&local_98,1);
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
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar7 = local_c8 + -2;
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = local_c8[-1];
      lVar9 = 0;
      local_c8 = (long *)0x0;
      plVar7 = plVar5;
      if (lVar2 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar2 != lVar9);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  Array::~Array((Array *)&local_e8);
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_d8 = "0,100,1";
  local_100 = 0;
  local_108 = 0;
  local_d0 = 7;
  String::parse_latin1((StrRange *)&local_108);
  local_d8 = "physical_bone_chain_length";
  local_110 = 0;
  local_d0 = 0x1a;
  String::parse_latin1((StrRange *)&local_110);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,2);
  local_d0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_110);
  }
  local_c8 = (long *)0x0;
  local_c0 = 1;
  local_b8 = 0;
  if (local_108 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
    local_b0 = 6;
    if (local_c0 == 0x11) {
      StringName::StringName((StringName *)&local_e8,(String *)&local_b8,false);
      if (local_c8 == (long *)local_e8) {
        if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_c8 = (long *)local_e8;
      }
      goto LAB_0010196a;
    }
  }
  local_b0 = 6;
  StringName::operator=((StringName *)&local_c8,(StringName *)&local_100);
LAB_0010196a:
  local_138 = (CowData<char32_t> *)&local_b8;
  local_118 = 0;
  local_e8 = "SkeletonModification2DPhysicalBones";
  local_e0 = 0x23;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref(local_138);
  if ((StringName::configured != '\0') && (local_c8 != (long *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((((StringName::configured != '\0') &&
       ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_f0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DPhysicalBones::~SkeletonModification2DPhysicalBones() */

void __thiscall
SkeletonModification2DPhysicalBones::~SkeletonModification2DPhysicalBones
          (SkeletonModification2DPhysicalBones *this)

{
  bool bVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_0010a578;
  Array::~Array((Array *)(this + 0x2b8));
  CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_unref
            ((CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *)(this + 0x2a8));
  bVar1 = StringName::configured != '\0';
  *(code **)this = SkeletonModification2D::SkeletonModification2D;
  if (bVar1) {
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101c25;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101c25;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_00101c25:
  Resource::~Resource((Resource *)this);
  return;
}



/* SkeletonModification2DPhysicalBones::SkeletonModification2DPhysicalBones() */

void __thiscall
SkeletonModification2DPhysicalBones::SkeletonModification2DPhysicalBones
          (SkeletonModification2DPhysicalBones *this)

{
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  SkeletonModification2D::SkeletonModification2D((SkeletonModification2D *)this);
  this[0x2b0] = (SkeletonModification2DPhysicalBones)0x0;
  *(undefined ***)this = &PTR__initialize_classv_0010a578;
  *(undefined8 *)(this + 0x2a8) = 0;
  Array::Array((Array *)(this + 0x2b8));
  local_48 = 0;
  local_58 = 0;
  local_40 = (undefined1  [16])0x0;
  Array::set_typed((uint)(Array *)(this + 0x2b8),(StringName *)0x15,(Variant *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  this[0x2c0] = (SkeletonModification2DPhysicalBones)0x0;
  *(undefined8 *)(this + 0x240) = 0;
  this[0x24d] = (SkeletonModification2DPhysicalBones)0x0;
  local_50 = 0;
  if (*(long *)(this + 0x2a8) != 0) {
    CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_unref
              ((CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *)(this + 0x2a8));
    *(undefined8 *)(this + 0x2a8) = 0;
  }
  CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_unref
            ((CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *)&local_50);
  this[0x24c] = (SkeletonModification2DPhysicalBones)0x1;
  this[0x298] = (SkeletonModification2DPhysicalBones)0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_copy_on_write() [clone
   .isra.0] */

void __thiscall
CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_copy_on_write
          (CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  NodePath *pNVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  NodePath *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  if (lVar1 * 0x10 != 0) {
    uVar5 = lVar1 * 0x10 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    lVar6 = 0;
    this_00 = (NodePath *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        lVar7 = lVar6 + 1;
        pNVar4 = (NodePath *)(lVar6 * 0x10 + *(long *)this);
        NodePath::NodePath(this_00,pNVar4);
        *(undefined8 *)(this_00 + 8) = *(undefined8 *)(pNVar4 + 8);
        lVar6 = lVar7;
        this_00 = this_00 + 0x10;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(NodePath **)this = (NodePath *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* SkeletonModification2DPhysicalBones::_physical_bone_update_cache(int) */

void __thiscall
SkeletonModification2DPhysicalBones::_physical_bone_update_cache
          (SkeletonModification2DPhysicalBones *this,int param_1)

{
  NodePath *pNVar1;
  code *pcVar2;
  char cVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long in_FS_OFFSET;
  CowData<char32_t> local_50 [8];
  String local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  lVar7 = (long)param_1;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar4 == 0) goto LAB_001020d0;
    lVar4 = *(long *)(lVar4 + -8);
  }
  else if (lVar4 == 0) {
LAB_001020d0:
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + -8);
    if (lVar7 < lVar4) {
      if (this[0x24d] != (SkeletonModification2DPhysicalBones)0x0) {
        if (*(long *)(this + 0x240) == 0) {
          if (_physical_bone_update_cache(int)::first_print != '\0') {
            _err_print_error("_physical_bone_update_cache",
                             "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp"
                             ,0x9d,
                             "Cannot update PhysicalBone2D cache: modification is not properly setup!"
                             ,0,0);
            _physical_bone_update_cache(int)::first_print = '\0';
          }
          goto LAB_00102020;
        }
        CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_copy_on_write
                  ((CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *)
                   (this + 0x2a8));
        lVar4 = *(long *)(this + 0x2a8);
        pNVar1 = *(NodePath **)(*(long *)(this + 0x240) + 0x240);
        *(undefined8 *)(lVar4 + lVar7 * 0x10 + 8) = 0;
        if ((pNVar1 == (NodePath *)0x0) || (((byte)pNVar1[0x2fa] & 0x40) == 0)) goto LAB_00102020;
        if (lVar4 != 0) {
          lVar4 = *(long *)(lVar4 + -8);
          if (lVar4 <= lVar7) goto LAB_001020db;
          cVar3 = Node::has_node(pNVar1);
          if (cVar3 == '\0') goto LAB_00102020;
          if (*(long *)(this + 0x2a8) != 0) {
            lVar4 = *(long *)(*(long *)(this + 0x2a8) + -8);
            if (lVar4 <= lVar7) goto LAB_001020db;
            lVar4 = Node::get_node(*(NodePath **)(*(long *)(this + 0x240) + 0x240));
            if ((lVar4 == 0) || (*(long *)(*(long *)(this + 0x240) + 0x240) == lVar4)) {
              local_40 = 0;
              String::parse_latin1
                        ((String *)&local_40,
                         " cache: node is this modification\'s skeleton or cannot be found!");
              itos((long)local_50);
              operator+((char *)local_48,(String *)"Cannot update Physical Bone2D ");
              String::operator+(local_38,local_48);
              pcVar5 = "Condition \"!node || stack->skeleton == node\" is true.";
              uVar6 = 0xa7;
            }
            else {
              if ((*(byte *)(lVar4 + 0x2fa) & 0x40) != 0) {
                uVar6 = *(undefined8 *)(lVar4 + 0x60);
                if (*(long *)(this + 0x2a8) == 0) {
                  lVar4 = 0;
                }
                else {
                  lVar4 = *(long *)(*(long *)(this + 0x2a8) + -8);
                  if (lVar7 < lVar4) {
                    CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::
                    _copy_on_write((CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>
                                    *)(this + 0x2a8));
                    *(undefined8 *)(*(long *)(this + 0x2a8) + 8 + lVar7 * 0x10) = uVar6;
                    goto LAB_00102020;
                  }
                }
                _err_print_index_error
                          ("operator[]","./core/templates/vector.h",0x38,lVar7,lVar4,"p_index",
                           "((Vector<T> *)(this))->_cowdata.size()","",false,true);
                _err_flush_stdout();
                    /* WARNING: Does not return */
                pcVar2 = (code *)invalidInstructionException();
                (*pcVar2)();
              }
              local_40 = 0;
              String::parse_latin1((String *)&local_40," cache: node is not in scene tree!");
              itos((long)local_50);
              operator+((char *)local_48,(String *)"Cannot update Physical Bone2D ");
              String::operator+(local_38,local_48);
              pcVar5 = "Condition \"!node->is_inside_tree()\" is true.";
              uVar6 = 0xa9;
            }
            _err_print_error("_physical_bone_update_cache",
                             "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp"
                             ,uVar6,pcVar5,(CowData<char32_t> *)local_38,0,0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
            CowData<char32_t>::_unref(local_50);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
            goto LAB_00102020;
          }
        }
        lVar4 = 0;
LAB_001020db:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar4,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      goto LAB_00102020;
    }
  }
  _err_print_index_error
            ("_physical_bone_update_cache",
             "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp",0x9a,lVar7,
             lVar4,"p_joint_idx","physical_bone_chain.size()",
             "Cannot update PhysicalBone2D cache: joint index out of range!",false,false);
LAB_00102020:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DPhysicalBones::_execute(float) */

void SkeletonModification2DPhysicalBones::_execute(float param_1)

{
  NodePath *pNVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  long *plVar9;
  Transform2D *pTVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  ulong *puVar14;
  SkeletonModification2DPhysicalBones *in_RDI;
  long in_FS_OFFSET;
  bool bVar15;
  CowData<char32_t> local_b0 [8];
  String local_a8 [8];
  undefined8 local_a0;
  NodePath local_98 [8];
  ulong local_90;
  char *local_88;
  undefined8 local_80;
  undefined1 local_78 [32];
  undefined1 local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)(in_RDI + 0x240) == 0) ||
      (in_RDI[0x24d] == (SkeletonModification2DPhysicalBones)0x0)) ||
     (*(long *)(*(long *)(in_RDI + 0x240) + 0x240) == 0)) {
    param_1 = (float)_err_print_error("_execute",
                                      "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp"
                                      ,0x67,
                                      "Condition \"!stack || !is_setup || stack->skeleton == nullptr\" is true."
                                      ,"Modification is not setup and therefore cannot execute!",0,0
                                     );
  }
  else if (in_RDI[0x24c] != (SkeletonModification2DPhysicalBones)0x0) {
    if (in_RDI[0x2b0] != (SkeletonModification2DPhysicalBones)0x0) {
      param_1 = (float)_update_simulation_state(in_RDI);
    }
    lVar11 = *(long *)(in_RDI + 0x2a8);
    if (lVar11 != 0) {
      lVar12 = 0;
      do {
        if (*(long *)(lVar11 + -8) <= lVar12) break;
        pNVar1 = (NodePath *)(lVar11 + lVar12 * 0x10);
        NodePath::NodePath(local_98,pNVar1);
        local_90 = *(ulong *)(pNVar1 + 8);
        if (local_90 != 0) {
          uVar13 = (uint)local_90 & 0xffffff;
          if (uVar13 < (uint)ObjectDB::slot_max) {
            while( true ) {
              uVar3 = (ulong)local_88 >> 8;
              local_88 = (char *)(uVar3 << 8);
              LOCK();
              bVar15 = (char)ObjectDB::spin_lock == '\0';
              if (bVar15) {
                ObjectDB::spin_lock._0_1_ = '\x01';
              }
              UNLOCK();
              if (bVar15) break;
              local_88 = (char *)(uVar3 << 8);
              do {
              } while ((char)ObjectDB::spin_lock != '\0');
            }
            puVar14 = (ulong *)((ulong)uVar13 * 0x10 + ObjectDB::object_slots);
            if ((local_90 >> 0x18 & 0x7fffffffff) != (*puVar14 & 0x7fffffffff)) {
              ObjectDB::spin_lock._0_1_ = '\0';
              goto LAB_00102668;
            }
            uVar3 = puVar14[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if ((uVar3 == 0) ||
               (plVar9 = (long *)__dynamic_cast(uVar3,&Object::typeinfo,&PhysicalBone2D::typeinfo,0)
               , plVar9 == (long *)0x0)) goto LAB_00102668;
            iVar6 = PhysicalBone2D::get_bone2d_index();
            if (-1 < iVar6) {
              iVar6 = PhysicalBone2D::get_bone2d_index();
              iVar7 = Skeleton2D::get_bone_count();
              if (iVar6 <= iVar7) {
                uVar4 = *(undefined8 *)(*(long *)(in_RDI + 0x240) + 0x240);
                PhysicalBone2D::get_bone2d_index();
                pTVar10 = (Transform2D *)Skeleton2D::get_bone((int)uVar4);
                cVar5 = PhysicalBone2D::get_simulate_physics();
                if ((cVar5 != '\0') &&
                   (cVar5 = PhysicalBone2D::get_follow_bone_when_simulating(), cVar5 == '\0')) {
                  (**(code **)(*plVar9 + 0x298))(local_78,plVar9);
                  Node2D::set_global_transform(pTVar10);
                  uVar2 = *(undefined4 *)(*(long *)(in_RDI + 0x240) + 0x24c);
                  uVar4 = *(undefined8 *)(*(long *)(in_RDI + 0x240) + 0x240);
                  (**(code **)(*(long *)pTVar10 + 0x290))(local_58,pTVar10);
                  uVar8 = PhysicalBone2D::get_bone2d_index();
                  Skeleton2D::set_bone_local_pose_override(uVar2,uVar4,uVar8,1);
                }
                param_1 = (float)NodePath::~NodePath(local_98);
                goto LAB_001023e7;
              }
            }
            if (_execute(float)::first_print != '\0') {
              local_a0 = 0;
              String::parse_latin1((String *)&local_a0," has invalid Bone2D!");
              itos((long)local_b0);
              operator+((char *)local_a8,(String *)"PhysicalBone2D at index ");
              String::operator+((String *)&local_88,local_a8);
              _err_print_error("_execute",
                               "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp"
                               ,0x7f,(String *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
              CowData<char32_t>::_unref(local_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              _execute(float)::first_print = '\0';
            }
          }
          else {
            _err_print_error("get_instance","./core/object/object.h",0x418,
                             "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00102668:
            if (_execute(float)::first_print != '\0') {
              local_a0 = 0;
              String::parse_latin1((String *)&local_a0,"!");
              itos((long)local_b0);
              operator+((char *)local_a8,(String *)"PhysicalBone2D not found at index ");
              String::operator+((String *)&local_88,local_a8);
              _err_print_error("_execute",
                               "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp"
                               ,0x7b,(String *)&local_88,0,0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
              CowData<char32_t>::_unref(local_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
              _execute(float)::first_print = '\0';
            }
          }
          param_1 = (float)NodePath::~NodePath(local_98);
          break;
        }
        if (_execute(float)::first_print != '\0') {
          local_a0 = 0;
          local_88 = " is out of date. Attempting to update...";
          local_80 = 0x28;
          String::parse_latin1((StrRange *)&local_a0);
          itos((long)local_b0);
          operator+((char *)local_a8,(String *)"PhysicalBone2D cache ");
          String::operator+((String *)&local_88,local_a8);
          _err_print_error("_execute",
                           "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp",
                           0x74,(String *)&local_88,0,1);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
          CowData<char32_t>::_unref(local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
          _execute(float)::first_print = '\0';
        }
        _physical_bone_update_cache(in_RDI,(int)lVar12);
        param_1 = (float)NodePath::~NodePath(local_98);
LAB_001023e7:
        lVar11 = *(long *)(in_RDI + 0x2a8);
        lVar12 = lVar12 + 1;
      } while (lVar11 != 0);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(param_1);
  }
  return;
}



/* SkeletonModification2DPhysicalBones::set_physical_bone_node(int, NodePath const&) */

void __thiscall
SkeletonModification2DPhysicalBones::set_physical_bone_node
          (SkeletonModification2DPhysicalBones *this,int param_1,NodePath *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)param_1;
  lVar2 = *(long *)(this + 0x2a8);
  if (param_1 < 0) {
    if (lVar2 != 0) {
      lVar2 = *(long *)(lVar2 + -8);
      goto LAB_00102889;
    }
  }
  else if (lVar2 != 0) {
    lVar2 = *(long *)(lVar2 + -8);
    if (lVar1 < lVar2) {
      CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_copy_on_write
                ((CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *)(this + 0x2a8)
                );
      NodePath::operator=((NodePath *)(lVar1 * 0x10 + *(long *)(this + 0x2a8)),param_2);
      _physical_bone_update_cache(this,param_1);
      return;
    }
    goto LAB_00102889;
  }
  lVar2 = 0;
LAB_00102889:
  _err_print_index_error
            ("set_physical_bone_node",
             "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp",0x108,lVar1,
             lVar2,"p_joint_idx","physical_bone_chain.size()","Joint index out of range!",false,
             false);
  return;
}



/* SkeletonModification2DPhysicalBones::_setup_modification(SkeletonModificationStack2D*) */

void __thiscall
SkeletonModification2DPhysicalBones::_setup_modification
          (SkeletonModification2DPhysicalBones *this,SkeletonModificationStack2D *param_1)

{
  long lVar1;
  long lVar2;
  
  *(SkeletonModificationStack2D **)(this + 0x240) = param_1;
  if (param_1 == (SkeletonModificationStack2D *)0x0) {
    return;
  }
  lVar1 = *(long *)(param_1 + 0x240);
  this[0x24d] = (SkeletonModification2DPhysicalBones)0x1;
  if ((lVar1 != 0) && (lVar1 = *(long *)(this + 0x2a8), lVar1 != 0)) {
    lVar2 = 0;
    do {
      if (*(long *)(lVar1 + -8) <= lVar2) {
        return;
      }
      _physical_bone_update_cache(this,(int)lVar2);
      lVar1 = *(long *)(this + 0x2a8);
      lVar2 = lVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* SkeletonModification2DPhysicalBones::~SkeletonModification2DPhysicalBones() */

void __thiscall
SkeletonModification2DPhysicalBones::~SkeletonModification2DPhysicalBones
          (SkeletonModification2DPhysicalBones *this)

{
  bool bVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_0010a578;
  Array::~Array((Array *)(this + 0x2b8));
  CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_unref
            ((CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *)(this + 0x2a8));
  bVar1 = StringName::configured != '\0';
  *(code **)this = SkeletonModification2D::SkeletonModification2D;
  if (bVar1) {
    if (*(long *)(this + 0x280) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001029f5;
    }
    if (*(long *)(this + 0x268) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001029f5;
    }
    if (*(long *)(this + 0x250) != 0) {
      StringName::unref();
    }
  }
LAB_001029f5:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x2c8);
  return;
}



/* SkeletonModification2DPhysicalBones::set_physical_bone_chain_length(int) */

void __thiscall
SkeletonModification2DPhysicalBones::set_physical_bone_chain_length
          (SkeletonModification2DPhysicalBones *this,int param_1)

{
  if (-1 < param_1) {
    CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::resize<false>
              ((CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *)(this + 0x2a8),
               (long)param_1);
    Object::notify_property_list_changed();
    return;
  }
  _err_print_error("set_physical_bone_chain_length",
                   "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp",0xb6,
                   "Condition \"p_length < 0\" is true.",0,0);
  return;
}



/* SkeletonModification2DPhysicalBones::fetch_physical_bones() */

void __thiscall
SkeletonModification2DPhysicalBones::fetch_physical_bones(SkeletonModification2DPhysicalBones *this)

{
  undefined1 (*pauVar1) [16];
  CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *this_00;
  long *plVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  undefined1 (*pauVar6) [16];
  undefined8 *puVar7;
  long lVar8;
  NodePath *this_01;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  Node local_58 [8];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x240) == 0) {
    _err_print_error("fetch_physical_bones",
                     "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp",0xbc,
                     "Parameter \"stack\" is null.",
                     "No modification stack found! Cannot fetch physical bones!",0,0);
  }
  else if (*(long *)(*(long *)(this + 0x240) + 0x240) == 0) {
    _err_print_error("fetch_physical_bones",
                     "scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp",0xbd,
                     "Parameter \"stack->skeleton\" is null.",
                     "No skeleton found! Cannot fetch physical bones!",0,0);
  }
  else {
    this_00 = (CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *)(this + 0x2a8);
    CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::resize<false>(this_00,0);
    uVar9 = *(undefined8 *)(*(long *)(this + 0x240) + 0x240);
    pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar6[1] = 0;
    *pauVar6 = (undefined1  [16])0x0;
    puVar7 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
    lVar10 = *(long *)(*pauVar6 + 8);
    puVar7[1] = 0;
    *puVar7 = uVar9;
    puVar7[2] = lVar10;
    puVar7[3] = pauVar6;
    if (lVar10 != 0) {
      *(undefined8 **)(lVar10 + 8) = puVar7;
    }
    lVar10 = *(long *)*pauVar6;
    *(undefined8 **)(*pauVar6 + 8) = puVar7;
    if (lVar10 == 0) {
      *(undefined8 **)*pauVar6 = puVar7;
    }
    *(int *)pauVar6[1] = *(int *)pauVar6[1] + 1;
LAB_00102b25:
    do {
      if (*(int *)pauVar6[1] < 1) goto LAB_00102e20;
      plVar2 = *(long **)*pauVar6;
      lVar10 = *plVar2;
      if ((undefined1 (*) [16])plVar2[3] == pauVar6) {
        lVar8 = plVar2[1];
        lVar11 = plVar2[2];
        *(long *)*pauVar6 = lVar8;
        if (plVar2 == *(long **)(*pauVar6 + 8)) {
          *(long *)(*pauVar6 + 8) = lVar11;
        }
        if (lVar11 != 0) {
          *(long *)(lVar11 + 8) = lVar8;
          lVar8 = plVar2[1];
        }
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x10) = lVar11;
        }
        Memory::free_static(plVar2,false);
        pauVar1 = pauVar6 + 1;
        *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
        if (*(int *)*pauVar1 != 0) goto LAB_00102b7e;
LAB_00102f68:
        Memory::free_static(pauVar6,false);
        if (lVar10 == 0) break;
        pauVar6 = (undefined1 (*) [16])0x0;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        if (*(int *)pauVar6[1] == 0) goto LAB_00102f68;
LAB_00102b7e:
        if (lVar10 == 0) goto LAB_00102b25;
      }
      lVar8 = __dynamic_cast(lVar10,&Object::typeinfo,&PhysicalBone2D::typeinfo,0);
      if (lVar8 != 0) {
        local_68 = 0;
        local_60 = 0;
        Node::get_path_to(local_58,SUB81(*(undefined8 *)(*(long *)(this + 0x240) + 0x240),0));
        NodePath::operator=((NodePath *)&local_68,(NodePath *)local_58);
        NodePath::~NodePath((NodePath *)local_58);
        local_60 = *(undefined8 *)(lVar8 + 0x60);
        NodePath::NodePath((NodePath *)local_58,(NodePath *)&local_68);
        local_50 = local_60;
        if (*(long *)(this + 0x2a8) == 0) {
          lVar8 = 1;
        }
        else {
          lVar8 = *(long *)(*(long *)(this + 0x2a8) + -8) + 1;
        }
        iVar4 = CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::resize<false>
                          (this_00,lVar8);
        if (iVar4 == 0) {
          if (*(long *)(this + 0x2a8) == 0) {
            lVar11 = -1;
            lVar8 = 0;
          }
          else {
            lVar8 = *(long *)(*(long *)(this + 0x2a8) + -8);
            lVar11 = lVar8 + -1;
            if (-1 < lVar11) {
              CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_copy_on_write
                        (this_00);
              this_01 = (NodePath *)(lVar11 * 0x10 + *(long *)(this + 0x2a8));
              NodePath::operator=(this_01,(NodePath *)local_58);
              *(undefined8 *)(this_01 + 8) = local_50;
              goto LAB_00102c9f;
            }
          }
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar8,"p_index","size()","",
                     false,false);
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
        }
LAB_00102c9f:
        NodePath::~NodePath((NodePath *)local_58);
        NodePath::~NodePath((NodePath *)&local_68);
      }
      for (iVar4 = 0; iVar5 = Node::get_child_count(SUB81(lVar10,0)), iVar4 < iVar5;
          iVar4 = iVar4 + 1) {
        uVar9 = Node::get_child((int)lVar10,SUB41(iVar4,0));
        if (pauVar6 == (undefined1 (*) [16])0x0) {
          pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)pauVar6[1] = 0;
          *pauVar6 = (undefined1  [16])0x0;
        }
        puVar7 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
        lVar8 = *(long *)(*pauVar6 + 8);
        puVar7[1] = 0;
        *puVar7 = uVar9;
        puVar7[2] = lVar8;
        puVar7[3] = pauVar6;
        if (lVar8 != 0) {
          *(undefined8 **)(lVar8 + 8) = puVar7;
        }
        lVar8 = *(long *)*pauVar6;
        *(undefined8 **)(*pauVar6 + 8) = puVar7;
        if (lVar8 == 0) {
          *(undefined8 **)*pauVar6 = puVar7;
        }
        *(int *)pauVar6[1] = *(int *)pauVar6[1] + 1;
      }
    } while (pauVar6 != (undefined1 (*) [16])0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
  goto LAB_0010300b;
  while( true ) {
    if (pauVar6 == *(undefined1 (**) [16])((long)pvVar3 + 0x18)) {
      lVar10 = *(long *)((long)pvVar3 + 8);
      lVar8 = *(long *)((long)pvVar3 + 0x10);
      *(long *)*pauVar6 = lVar10;
      if (pvVar3 == *(void **)(*pauVar6 + 8)) {
        *(long *)(*pauVar6 + 8) = lVar8;
      }
      if (lVar8 != 0) {
        *(long *)(lVar8 + 8) = lVar10;
        lVar10 = *(long *)((long)pvVar3 + 8);
      }
      if (lVar10 != 0) {
        *(long *)(lVar10 + 0x10) = lVar8;
      }
      Memory::free_static(pvVar3,false);
      pauVar1 = pauVar6 + 1;
      *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
      iVar4 = *(int *)*pauVar1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      iVar4 = *(int *)pauVar6[1];
    }
    if (iVar4 == 0) break;
LAB_00102e20:
    pvVar3 = *(void **)*pauVar6;
    if (pvVar3 == (void *)0x0) {
      if (*(int *)pauVar6[1] != 0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          return;
        }
        goto LAB_0010300b;
      }
      break;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Memory::free_static(pauVar6,false);
    return;
  }
LAB_0010300b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DPhysicalBones::_set(StringName const&, Variant const&) */

undefined4 SkeletonModification2DPhysicalBones::_set(StringName *param_1,Variant *param_2)

{
  long *plVar1;
  char *__s;
  long lVar2;
  char cVar3;
  int iVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined8 local_68;
  String local_60 [8];
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar6 = *(long *)param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 == 0) {
LAB_00103131:
    local_68 = 0;
  }
  else {
    __s = *(char **)(lVar6 + 8);
    local_68 = 0;
    if (__s == (char *)0x0) {
      plVar1 = (long *)(*(long *)(lVar6 + 0x10) + -0x10);
      if (*(long *)(lVar6 + 0x10) == 0) goto LAB_00103131;
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_00103131;
        LOCK();
        lVar7 = *plVar1;
        bVar9 = lVar2 == lVar7;
        if (bVar9) {
          *plVar1 = lVar2 + 1;
          lVar7 = lVar2;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar7 != -1) {
        local_68 = *(undefined8 *)(lVar6 + 0x10);
      }
    }
    else {
      local_50 = strlen(__s);
      local_58 = __s;
      String::parse_latin1((StrRange *)&local_68);
    }
  }
  if (((param_1[0x24d] != (StringName)0x0) &&
      (lVar6 = Engine::get_singleton(), *(char *)(lVar6 + 0xc0) != '\0')) &&
     (uVar5 = String::begins_with((char *)&local_68), (char)uVar5 != '\0')) {
    fetch_physical_bones((SkeletonModification2DPhysicalBones *)param_1);
    Object::notify_property_list_changed();
    goto LAB_001030b3;
  }
  cVar3 = String::begins_with((char *)&local_68);
  if (cVar3 == '\0') {
LAB_001030b0:
    uVar5 = 0;
    goto LAB_001030b3;
  }
  iVar8 = (int)(CowData<char32_t> *)&local_68;
  String::get_slicec((wchar32)(CowData<char32_t> *)&local_58,iVar8);
  iVar4 = String::to_int();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  String::get_slicec((wchar32)local_60,iVar8);
  if (iVar4 < 0) {
    if (*(long *)(param_1 + 0x2a8) == 0) goto LAB_00103298;
    lVar6 = *(long *)(*(long *)(param_1 + 0x2a8) + -8);
LAB_00103253:
    uVar5 = 0;
    _err_print_index_error
              ("_set","scene/resources/2d/skeleton/skeleton_modification_2d_physicalbones.cpp",0x36,
               (long)iVar4,lVar6,"which","physical_bone_chain.size()","",false,false);
  }
  else {
    if (*(long *)(param_1 + 0x2a8) == 0) {
LAB_00103298:
      lVar6 = 0;
      goto LAB_00103253;
    }
    lVar6 = *(long *)(*(long *)(param_1 + 0x2a8) + -8);
    if (lVar6 <= iVar4) goto LAB_00103253;
    uVar5 = String::operator==(local_60,"nodepath");
    if ((char)uVar5 == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
      goto LAB_001030b0;
    }
    Variant::operator_cast_to_NodePath((Variant *)&local_58);
    set_physical_bone_node
              ((SkeletonModification2DPhysicalBones *)param_1,iVar4,(NodePath *)&local_58);
    NodePath::~NodePath((NodePath *)&local_58);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001030b3:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
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



/* Resource::set_last_modified_time(unsigned long) */

void __thiscall Resource::set_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x198) = param_1;
  return;
}



/* Resource::set_import_last_modified_time(unsigned long) */

void __thiscall Resource::set_import_last_modified_time(Resource *this,ulong param_1)

{
  *(ulong *)(this + 0x1a0) = param_1;
  return;
}



/* SkeletonModification2DPhysicalBones::is_class_ptr(void*) const */

uint __thiscall
SkeletonModification2DPhysicalBones::is_class_ptr
          (SkeletonModification2DPhysicalBones *this,void *param_1)

{
  return (uint)CONCAT71(0x10a9,(undefined4 *)param_1 ==
                               &SkeletonModification2D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a9,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a9,(undefined4 *)param_1 == &Resource::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a9,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10a9,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SkeletonModification2DPhysicalBones::_validate_propertyv(PropertyInfo&) const */

void SkeletonModification2DPhysicalBones::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* SkeletonModification2DPhysicalBones::_property_can_revertv(StringName const&) const */

undefined8 SkeletonModification2DPhysicalBones::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SkeletonModification2DPhysicalBones::_property_get_revertv(StringName const&, Variant&) const */

undefined8
SkeletonModification2DPhysicalBones::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SkeletonModification2DPhysicalBones::_notificationv(int, bool) */

void SkeletonModification2DPhysicalBones::_notificationv(int param_1,bool param_2)

{
  return;
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



/* MethodBindTRC<NodePath, int>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<NodePath,int>::_gen_argument_type(MethodBindTRC<NodePath,int> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xffffffec) + 0x16;
}



/* MethodBindTRC<NodePath, int>::get_argument_meta(int) const */

byte __thiscall
MethodBindTRC<NodePath,int>::get_argument_meta(MethodBindTRC<NodePath,int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int, NodePath const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<int,NodePath_const&>::_gen_argument_type
          (MethodBindT<int,NodePath_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xffffffec) + 0x16;
  }
  return iVar1;
}



/* MethodBindT<int, NodePath const&>::get_argument_meta(int) const */

byte __thiscall
MethodBindT<int,NodePath_const&>::get_argument_meta
          (MethodBindT<int,NodePath_const&> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindTR<int>::_gen_argument_type(int) const */

undefined8 MethodBindTR<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTR<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTR<int>::get_argument_meta(MethodBindTR<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindT<int>::_gen_argument_type(int) const */

char __thiscall MethodBindT<int>::_gen_argument_type(MethodBindT<int> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<int>::get_argument_meta(int) const */

byte __thiscall MethodBindT<int>::get_argument_meta(MethodBindT<int> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a768;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a768;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a7c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a7c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<int, NodePath const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,NodePath_const&>::~MethodBindT(MethodBindT<int,NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a828;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<int, NodePath const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,NodePath_const&>::~MethodBindT(MethodBindT<int,NodePath_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a828;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<NodePath, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath,int>::~MethodBindTRC(MethodBindTRC<NodePath,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a888;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<NodePath, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath,int>::~MethodBindTRC(MethodBindTRC<NodePath,int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a888;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a8e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a8e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<TypedArray<StringName> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<StringName>const&>::~MethodBindT
          (MethodBindT<TypedArray<StringName>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a948;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<TypedArray<StringName> const&>::~MethodBindT() */

void __thiscall
MethodBindT<TypedArray<StringName>const&>::~MethodBindT
          (MethodBindT<TypedArray<StringName>const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0010a948;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* Resource::get_base_extension() const */

Resource * __thiscall Resource::get_base_extension(Resource *this)

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



/* SkeletonModification2DPhysicalBones::_get_class_namev() const */

undefined8 * SkeletonModification2DPhysicalBones::_get_class_namev(void)

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
LAB_00103ed3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103ed3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,
                 "SkeletonModification2DPhysicalBones");
      goto LAB_00103f3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,
             "SkeletonModification2DPhysicalBones");
LAB_00103f3e:
  return &_get_class_namev()::_class_name_static;
}



/* String::parse_latin1(char const*) */

void __thiscall String::parse_latin1(String *this,char *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (char *)0x0) {
    strlen(param_1);
  }
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* SkeletonModification2DPhysicalBones::get_class() const */

void SkeletonModification2DPhysicalBones::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* SkeletonModification2DPhysicalBones::_getv(StringName const&, Variant&) const */

void __thiscall
SkeletonModification2DPhysicalBones::_getv
          (SkeletonModification2DPhysicalBones *this,StringName *param_1,Variant *param_2)

{
  _get(this,param_1,param_2);
  return;
}



/* Resource::is_class(String const&) const */

undefined8 __thiscall Resource::is_class(Resource *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_001041af;
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
LAB_001041af:
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
    if (cVar6 != '\0') goto LAB_00104263;
  }
  cVar6 = String::operator==(param_1,"Resource");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00104263;
    }
    cVar6 = String::operator==(param_1,"RefCounted");
    if (cVar6 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar5 = *(long *)(lVar2 + 0x20);
        if (lVar5 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar5 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
          }
        }
        cVar6 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar6 != '\0') goto LAB_00104263;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = String::operator==(param_1,"Object");
        return uVar8;
      }
      goto LAB_001043ee;
    }
  }
LAB_00104263:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001043ee:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DPhysicalBones::is_class(String const&) const */

undefined8 __thiscall
SkeletonModification2DPhysicalBones::is_class
          (SkeletonModification2DPhysicalBones *this,String *param_1)

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
            if (lVar3 == 0) goto LAB_0010447f;
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
LAB_0010447f:
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
    if (cVar6 != '\0') goto LAB_00104533;
  }
  cVar6 = String::operator==(param_1,"SkeletonModification2DPhysicalBones");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00104533;
    }
    cVar6 = String::operator==(param_1,"SkeletonModification2D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Resource::is_class((Resource *)this,param_1);
        return uVar8;
      }
      goto LAB_0010463e;
    }
  }
LAB_00104533:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010463e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<int>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  undefined4 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
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
  local_60 = 0;
  *puVar1 = 2;
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
      goto LAB_00104745;
    }
  }
  StringName::operator=((StringName *)(puVar1 + 4),(StringName *)&local_50);
LAB_00104745:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
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



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

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
  char *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
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
LAB_0010493d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010493d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010495f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010495f:
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Resource::_get_property_listv(Resource *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Resource";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Resource";
  local_98 = 0;
  local_70 = 8;
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
LAB_00104cbd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104cbd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104cdf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104cdf:
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
  StringName::StringName((StringName *)&local_78,"Resource",false);
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



/* SkeletonModification2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SkeletonModification2D::_get_property_listv(SkeletonModification2D *this,List *param_1,bool param_2)

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
    Resource::_get_property_listv((Resource *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SkeletonModification2D";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SkeletonModification2D";
  local_98 = 0;
  local_70 = 0x16;
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
LAB_0010509d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010509d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001050bf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001050bf:
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
  StringName::StringName((StringName *)&local_78,"SkeletonModification2D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Resource::_get_property_listv((Resource *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SkeletonModification2DPhysicalBones::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */

void __thiscall
SkeletonModification2DPhysicalBones::_get_property_listv
          (SkeletonModification2DPhysicalBones *this,List *param_1,bool param_2)

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
    SkeletonModification2D::_get_property_listv((SkeletonModification2D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SkeletonModification2DPhysicalBones";
  local_70 = 0x23;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SkeletonModification2DPhysicalBones";
  local_98 = 0;
  local_70 = 0x23;
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
LAB_0010547d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010547d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010549f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010549f:
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
  StringName::StringName((StringName *)&local_78,"SkeletonModification2DPhysicalBones",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SkeletonModification2D::_get_property_listv((SkeletonModification2D *)this,param_1,true);
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
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  CowData<char32_t> local_90 [8];
  long local_88;
  long local_80;
  undefined4 local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_88 = 0;
    Variant::get_type_name(local_90,0x15);
    local_98 = 0;
    local_78 = 0x1c;
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0x1f;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_90);
    local_50 = 6;
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
    }
    else {
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref(local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_78;
    if (*(long *)(puVar2 + 2) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_60;
    if (*(long *)(puVar2 + 8) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_88 = 0;
    local_78 = &_LC10;
    local_90 = 0;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    }
    else {
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_78._0_4_;
    if (*(long *)(puVar2 + 2) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_60;
    if (*(long *)(puVar2 + 8) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, NodePath const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<int,NodePath_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
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
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar6 = 0;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  puVar6[10] = 6;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_78 = 0;
    local_68 = &_LC10;
    local_80 = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  }
  else {
    if (in_EDX != 1) goto LAB_00105bf8;
    local_78 = 0;
    local_68 = &_LC10;
    local_80 = 0;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x16);
  }
  local_88 = 0;
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00105cf5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00105cf5;
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
  *puVar6 = local_68._0_4_;
  if (*(long *)(puVar6 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
    uVar4 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(puVar6 + 2) = uVar4;
  }
  if (*(long *)(puVar6 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar6 + 4) = uVar4;
  }
  puVar6[6] = local_50;
  if (*(long *)(puVar6 + 8) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 8));
    lVar5 = local_48;
    local_48 = 0;
    *(long *)(puVar6 + 8) = lVar5;
  }
  puVar6[10] = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00105bf8:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar6;
}



/* MethodBind* create_method_bind<SkeletonModification2DPhysicalBones, int>(void
   (SkeletonModification2DPhysicalBones::*)(int)) */

MethodBind * create_method_bind<SkeletonModification2DPhysicalBones,int>(_func_void_int *param_1)

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
  *(_func_void_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a768;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SkeletonModification2DPhysicalBones";
  local_30 = 0x23;
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



/* MethodBind* create_method_bind<SkeletonModification2DPhysicalBones, int>(int
   (SkeletonModification2DPhysicalBones::*)()) */

MethodBind * create_method_bind<SkeletonModification2DPhysicalBones,int>(_func_int *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a7c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SkeletonModification2DPhysicalBones";
  local_30 = 0x23;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<SkeletonModification2DPhysicalBones, int, NodePath const&>(void
   (SkeletonModification2DPhysicalBones::*)(int, NodePath const&)) */

MethodBind *
create_method_bind<SkeletonModification2DPhysicalBones,int,NodePath_const&>
          (_func_void_int_NodePath_ptr *param_1)

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
  *(_func_void_int_NodePath_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a828;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "SkeletonModification2DPhysicalBones";
  local_30 = 0x23;
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



/* MethodBind* create_method_bind<SkeletonModification2DPhysicalBones, NodePath, int>(NodePath
   (SkeletonModification2DPhysicalBones::*)(int) const) */

MethodBind *
create_method_bind<SkeletonModification2DPhysicalBones,NodePath,int>(_func_NodePath_int *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_NodePath_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0010a888;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SkeletonModification2DPhysicalBones";
  local_30 = 0x23;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<SkeletonModification2DPhysicalBones>(void
   (SkeletonModification2DPhysicalBones::*)()) */

MethodBind * create_method_bind<SkeletonModification2DPhysicalBones>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0010a8e8;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SkeletonModification2DPhysicalBones";
  local_30 = 0x23;
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



/* MethodBind* create_method_bind<SkeletonModification2DPhysicalBones, TypedArray<StringName>
   const&>(void (SkeletonModification2DPhysicalBones::*)(TypedArray<StringName> const&)) */

MethodBind *
create_method_bind<SkeletonModification2DPhysicalBones,TypedArray<StringName>const&>
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
  *(undefined ***)this = &PTR__gen_argument_type_0010a948;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SkeletonModification2DPhysicalBones";
  local_30 = 0x23;
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



/* SkeletonModification2DPhysicalBones::_bind_methods() [clone .cold] */

void SkeletonModification2DPhysicalBones::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_copy_on_write() [clone
   .isra.0] [clone .cold] */

void CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SkeletonModification2DPhysicalBones::_initialize_classv() */

void SkeletonModification2DPhysicalBones::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (SkeletonModification2D::initialize_class()::initialized == '\0') {
      if (Resource::initialize_class()::initialized == '\0') {
        if (RefCounted::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Object");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"RefCounted");
          StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
          ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((code *)PTR__bind_methods_0010e008 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Resource";
        local_70 = 0;
        local_50 = 8;
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
        Resource::_bind_methods();
        Resource::initialize_class()::initialized = '\x01';
      }
      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "SkeletonModification2D";
      local_70 = 0;
      local_50 = 0x16;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != Resource::_bind_methods) {
        SkeletonModification2D::_bind_methods();
      }
      SkeletonModification2D::initialize_class()::initialized = '\x01';
    }
    local_58 = "SkeletonModification2D";
    local_68 = 0;
    local_50 = 0x16;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "SkeletonModification2DPhysicalBones";
    local_70 = 0;
    local_50 = 0x23;
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



/* CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_unref() */

void __thiscall
CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_unref
          (CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *this)

{
  long *plVar1;
  NodePath *pNVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  NodePath *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pNVar2 = *(NodePath **)this;
    if (pNVar2 != (NodePath *)0x0) {
      lVar3 = *(long *)(pNVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pNVar2;
        do {
          lVar5 = lVar5 + 1;
          NodePath::~NodePath(this_00);
          this_00 = this_00 + 0x10;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pNVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_realloc(long) */

undefined8 __thiscall
CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::_realloc
          (CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *this,long param_1)

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
/* Error CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::resize<false>(long) */

undefined8 __thiscall
CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D>::resize<false>
          (CowData<SkeletonModification2DPhysicalBones::PhysicalBone_Data2D> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
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
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 0x10;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00106dc0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x10 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_00106dc0;
  uVar6 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar6) {
        if (lVar10 != lVar8) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      NodePath::~NodePath((NodePath *)(lVar7 + uVar6 * 0x10));
      uVar6 = uVar6 + 1;
    }
    goto LAB_00106e16;
  }
  if (lVar10 == lVar8) {
LAB_00106d33:
    puVar5 = *(undefined8 **)this;
    if (puVar5 == (undefined8 *)0x0) {
LAB_00106e16:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar5[-1];
    if (param_1 <= lVar7) goto LAB_00106c98;
  }
  else {
    if (lVar7 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00106d33;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar5 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar5;
    lVar7 = 0;
  }
  puVar2 = puVar5 + lVar7 * 2;
  do {
    *puVar2 = 0;
    puVar3 = puVar2 + 2;
    puVar2[1] = 0;
    puVar2 = puVar3;
  } while (puVar3 != puVar5 + param_1 * 2);
LAB_00106c98:
  puVar5[-1] = param_1;
  return 0;
}



/* SkeletonModification2DPhysicalBones::_setv(StringName const&, Variant const&) */

void SkeletonModification2DPhysicalBones::_setv(StringName *param_1,Variant *param_2)

{
  _set(param_1,param_2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00106fc8) */
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
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107310;
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
LAB_00107310:
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



/* MethodBindTRC<NodePath, int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<NodePath,int>::validated_call
          (MethodBindTRC<NodePath,int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010794f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  NodePath::operator=((NodePath *)(param_3 + 8),(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_0010794f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath, int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<NodePath,int>::ptrcall
          (MethodBindTRC<NodePath,int> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((NodePath *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(NodePath *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00107b3d;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)((NodePath *)&local_48,param_1 + *(long *)(this + 0x60),**param_2);
  NodePath::operator=((NodePath *)param_3,(NodePath *)&local_48);
  NodePath::~NodePath((NodePath *)&local_48);
LAB_00107b3d:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int,NodePath_const&>::validated_call
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
      goto LAB_00107e8f;
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
                    /* WARNING: Could not recover jumptable at 0x00107d39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(long *)(param_3 + 8) + 8);
    return;
  }
LAB_00107e8f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, NodePath const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int,NodePath_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00108079;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00107f02. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00108079:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  int iVar2;
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
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001081d0;
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
      iVar2 = (*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,iVar2);
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
LAB_001081d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<int>::validated_call
          (MethodBindTR<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  int iVar1;
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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001083e4;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)(param_3 + 8) = (long)iVar1;
LAB_001083e4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<int>::ptrcall(MethodBindTR<int> *this,Object *param_1,void **param_2,void *param_3)

{
  int iVar1;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00108593;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  iVar1 = (*pcVar2)(param_1 + *(long *)(this + 0x60));
  *(long *)param_3 = (long)iVar1;
LAB_00108593:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<int>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001088d1;
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
                    /* WARNING: Could not recover jumptable at 0x0010875c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001088d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<int>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00108ab1;
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
                    /* WARNING: Could not recover jumptable at 0x0010893b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00108ab1:
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
      goto LAB_00108ba9;
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
LAB_00108ba9:
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
      goto LAB_00108e45;
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
LAB_00108e45:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_001091a0;
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
      if (in_R8D != 1) goto LAB_001091f0;
LAB_001091e0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001091f0:
        uVar6 = 4;
        goto LAB_00109195;
      }
      if (in_R8D == 1) goto LAB_001091e0;
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
    uVar4 = _LC95;
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
LAB_00109195:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_001091a0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath, int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<NodePath,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_68 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00109550;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_001095a0;
LAB_00109590:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_001095a0:
        uVar7 = 4;
        goto LAB_00109545;
      }
      if (in_R8D == 1) goto LAB_00109590;
      lVar9 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar4 = _LC97;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(pVVar11);
    (*(code *)pVVar12)((NodePath *)&local_68,(Variant *)((long)plVar10 + (long)pVVar1),iVar6);
    Variant::Variant((Variant *)local_58,(NodePath *)&local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_58[0];
    *(undefined8 *)(param_1 + 8) = local_50;
    *(undefined8 *)(param_1 + 0x10) = uStack_48;
    NodePath::~NodePath((NodePath *)&local_68);
  }
  else {
    uVar7 = 3;
LAB_00109545:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00109550:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, int, NodePath const&>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, NodePath const&), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,int,NodePath_const&>
               (__UnexistingClass *param_1,_func_void_int_NodePath_ptr *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_48 [8];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_001098e0;
      this = (Variant *)*plVar8;
LAB_0010992d:
      puVar12 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_001098e0:
        uVar7 = 4;
        goto LAB_001098e5;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00109948;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0010992d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00109948:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar12 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_int_NodePath_ptr **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
      ;
    }
    cVar5 = Variant::can_convert_strict(*puVar12,0x16);
    uVar4 = _LC98;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_NodePath(aVStack_48);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC97;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    iVar6 = Variant::operator_cast_to_int(this);
    (*param_2)((int)(param_1 + (long)param_3),(NodePath *)iVar6);
    NodePath::~NodePath((NodePath *)aVStack_48);
  }
  else {
    uVar7 = 3;
LAB_001098e5:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<int, NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<int,NodePath_const&>::call
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
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001099e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int,NodePath_const&>
            (p_Var2,(_func_void_int_NodePath_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001099e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, int>(__UnexistingClass*, void
   (__UnexistingClass::*)(int), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,int>
               (__UnexistingClass *param_1,_func_void_int *param_2,Variant **param_3,int param_4,
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
    goto LAB_00109cad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00109d10;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00109d10:
      uVar6 = 4;
LAB_00109cad:
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
      goto LAB_00109c2b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_00109c2b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_int **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC97;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_int(this);
                    /* WARNING: Could not recover jumptable at 0x00109c86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((int)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC90,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00109d76;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,int>
            (p_Var2,(_func_void_int *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,in_R9
            );
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00109d76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<int>(int param_1,int *param_2,PropertyInfo *param_3)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = *param_2;
  if (iVar2 == param_1) {
    local_88 = 0;
    local_78 = &_LC10;
    local_90 = 0;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_70 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
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
    }
    else {
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)param_3 = local_78._0_4_;
    if (*(long *)(param_3 + 8) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
      lVar1 = local_70;
      local_70 = 0;
      *(long *)(param_3 + 8) = lVar1;
    }
    if (*(long *)(param_3 + 0x10) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long *)(param_3 + 0x10) = lVar1;
    }
    *(int *)(param_3 + 0x18) = local_60;
    if (*(long *)(param_3 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(param_3 + 0x20) = lVar1;
    }
    *(undefined4 *)(param_3 + 0x28) = local_50;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    iVar2 = *param_2;
  }
  *param_2 = iVar2 + 1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<NodePath, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<NodePath,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar5;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  ulong local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<int>(0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_0010a268;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC10;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 0x16;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0010a34f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0010a34f;
    StringName::StringName((StringName *)&local_68,(String *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_0010a268:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
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
/* MethodBindTRC<NodePath, int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<NodePath,int>::~MethodBindTRC(MethodBindTRC<NodePath,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int, NodePath const&>::~MethodBindT() */

void __thiscall
MethodBindT<int,NodePath_const&>::~MethodBindT(MethodBindT<int,NodePath_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTR<int>::~MethodBindTR() */

void __thiscall MethodBindTR<int>::~MethodBindTR(MethodBindTR<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<int>::~MethodBindT() */

void __thiscall MethodBindT<int>::~MethodBindT(MethodBindT<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


