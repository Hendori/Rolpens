
/* PinJoint3D::_configure_joint(RID, PhysicsBody3D*, PhysicsBody3D*) */

void __thiscall
PinJoint3D::_configure_joint(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined1 local_74 [12];
  undefined1 local_68 [4] [12];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node3D::get_global_transform();
  local_74 = Node3D::to_local(param_3);
  local_68[0]._8_4_ = 0;
  local_68[0]._0_8_ = 0;
  if (param_4 == 0) {
    local_68[0]._0_8_ = local_68[3]._0_8_;
    local_68[0]._8_4_ = local_68[3]._8_4_;
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    uVar5 = 0;
    pcVar2 = *(code **)(*plVar1 + 0x628);
  }
  else {
    local_68[0] = Node3D::to_local(local_68[3]._0_8_,local_68[3]._8_4_,param_4);
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    uVar5 = *(undefined8 *)(param_4 + 0x538);
    pcVar2 = *(code **)(*plVar1 + 0x628);
  }
  uVar4 = 0;
  (*pcVar2)(plVar1,param_2,*(undefined8 *)(param_3 + 0x538),local_74,uVar5,local_68);
  do {
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    uVar3 = uVar4 & 0xffffffff;
    uVar4 = uVar4 + 1;
    (**(code **)(*plVar1 + 0x630))(plVar1,param_2,uVar3);
  } while (uVar4 != 3);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PinJoint3D::get_param(PinJoint3D::Param) const */

undefined4 __thiscall PinJoint3D::get_param(PinJoint3D *this,uint param_2)

{
  if (param_2 < 3) {
    return *(undefined4 *)(this + (long)(int)param_2 * 4 + 0x564);
  }
  _err_print_index_error
            ("get_param","scene/3d/physics/joints/pin_joint_3d.cpp",0x37,(ulong)param_2,3,"p_param",
             "3","",false,false);
  return 0;
}



/* PinJoint3D::set_param(PinJoint3D::Param, float) */

void __thiscall PinJoint3D::set_param(undefined4 param_1,PinJoint3D *this,uint param_3)

{
  PinJoint3D PVar1;
  long *plVar2;
  
  if (2 < param_3) {
    _err_print_index_error
              ("set_param","scene/3d/physics/joints/pin_joint_3d.cpp",0x2f,(ulong)param_3,3,
               "p_param","3","",false,false);
    return;
  }
  PVar1 = this[0x560];
  *(undefined4 *)(this + (long)(int)param_3 * 4 + 0x564) = param_1;
  if (PVar1 == (PinJoint3D)0x0) {
    return;
  }
  plVar2 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010022d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x630))(param_1,plVar2,*(undefined8 *)(this + 0x538),param_3);
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



/* PinJoint3D::PinJoint3D() */

void __thiscall PinJoint3D::PinJoint3D(PinJoint3D *this)

{
  Joint3D::Joint3D((Joint3D *)this);
  *(undefined4 *)(this + 0x56c) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00106398;
  *(undefined8 *)(this + 0x564) = _LC19;
  return;
}



/* PinJoint3D::_bind_methods() */

void PinJoint3D::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  MethodBind *pMVar15;
  long lVar16;
  long *plVar17;
  long in_FS_OFFSET;
  StringName *local_108;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  char *pcStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = 0;
  local_78 = PTR__LC20_001066c0;
  pcStack_70 = "value";
  auStack_50._8_8_ = auStack_50._0_8_;
  auStack_50._0_8_ = &pcStack_70;
  local_58 = &local_78;
  D_METHODP((char *)&local_a8,(char ***)"set_param",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<PinJoint3D,PinJoint3D::Param,float>(set_param);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_a0._8_8_;
  if ((long *)local_a0._8_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_a0._8_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_a0._8_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_a0._8_8_ + -8);
      lVar16 = 0;
      local_a0._8_8_ = 0;
      plVar17 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar1 != lVar16);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "param";
  pcStack_70 = (char *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_a8,(char ***)"get_param",(uint)&local_58);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar15 = create_method_bind<PinJoint3D,float,PinJoint3D::Param>(get_param);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_a8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = local_a0._8_8_;
  if ((long *)local_a0._8_8_ != (long *)0x0) {
    LOCK();
    plVar17 = (long *)(local_a0._8_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      if ((long *)local_a0._8_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_a0._8_8_ + -8);
      lVar16 = 0;
      local_a0._8_8_ = 0;
      plVar17 = (long *)uVar13;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar17 != 0)) {
            StringName::unref();
          }
          lVar16 = lVar16 + 1;
          plVar17 = plVar17 + 1;
        } while (lVar1 != lVar16);
      }
      Memory::free_static((long *)(uVar13 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_d0 = 0;
  local_a8 = "0.01,0.99,0.01";
  local_d8 = 0;
  local_a0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_d8);
  local_e0 = 0;
  local_a8 = "params/bias";
  local_a0._0_8_ = 0xb;
  String::parse_latin1((StrRange *)&local_e0);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,3);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_a0._8_8_;
  local_a0 = auVar9 << 0x40;
  uVar14 = 0;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_a0,(CowData *)&local_e0);
    uVar14 = local_a0._0_8_;
  }
  local_a0._0_8_ = uVar14;
  local_a0._8_8_ = 0;
  local_90 = CONCAT44(local_90._4_4_,1);
  local_88 = 0;
  if (local_d8 == 0) {
LAB_0010074b:
    local_80 = 6;
    StringName::operator=((StringName *)(local_a0 + 8),(StringName *)&local_d0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_d8);
    local_80 = 6;
    if ((int)local_90 != 0x11) goto LAB_0010074b;
    StringName::StringName((StringName *)&local_b8,(String *)&local_88,false);
    if ((char *)local_a0._8_8_ == local_b8) {
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_a0._8_8_ = local_b8;
    }
  }
  local_108 = (StringName *)(local_a0 + 8);
  local_e8 = 0;
  local_b8 = "PinJoint3D";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,0);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar17 = (long *)(local_e8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar17 = (long *)(local_88 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_a0._0_8_;
  if (local_a0._0_8_ != 0) {
    LOCK();
    plVar17 = (long *)(local_a0._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_a0._8_8_;
      local_a0 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  lVar1 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar17 = (long *)(local_e0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar17 = (long *)(local_d8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0.01,8.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  local_e0 = 0;
  local_a8 = "params/damping";
  local_a0._0_8_ = 0xe;
  String::parse_latin1((StrRange *)&local_e0);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,3);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_a0._8_8_;
  local_a0 = auVar10 << 0x40;
  uVar14 = 0;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_a0,(CowData *)&local_e0);
    uVar14 = local_a0._0_8_;
  }
  local_a0._0_8_ = uVar14;
  local_a0._8_8_ = 0;
  local_90 = CONCAT44(local_90._4_4_,1);
  local_88 = 0;
  if (local_d8 == 0) {
LAB_001009e3:
    local_80 = 6;
    StringName::operator=(local_108,(StringName *)&local_d0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_d8);
    local_80 = 6;
    if ((int)local_90 != 0x11) goto LAB_001009e3;
    StringName::StringName((StringName *)&local_b8,(String *)&local_88,false);
    if ((char *)local_a0._8_8_ == local_b8) {
      if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_a0._8_8_ = local_b8;
    }
  }
  local_e8 = 0;
  local_b8 = "PinJoint3D";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,1);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar17 = (long *)(local_e8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar17 = (long *)(local_88 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_a0._0_8_;
  if (local_a0._0_8_ != 0) {
    LOCK();
    plVar17 = (long *)(local_a0._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_a0._8_8_;
      local_a0 = auVar5 << 0x40;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  lVar1 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar17 = (long *)(local_e0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar17 = (long *)(local_d8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_c0,true);
  _scs_create((char *)&local_c8,true);
  local_a8 = "0.0,64.0,0.01";
  local_d0 = 0;
  local_d8 = 0;
  local_a0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  local_e0 = 0;
  local_a8 = "params/impulse_clamp";
  local_a0._0_8_ = 0x14;
  String::parse_latin1((StrRange *)&local_e0);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,3);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_a0._8_8_;
  local_a0 = auVar11 << 0x40;
  uVar14 = 0;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_a0,(CowData *)&local_e0);
    uVar14 = local_a0._0_8_;
  }
  local_a0._0_8_ = uVar14;
  local_a0._8_8_ = 0;
  local_90 = CONCAT44(local_90._4_4_,1);
  local_88 = 0;
  if (local_d8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_d8);
    local_80 = 6;
    if ((int)local_90 == 0x11) {
      StringName::StringName((StringName *)&local_b8,(String *)&local_88,false);
      if ((char *)local_a0._8_8_ == local_b8) {
        if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_a0._8_8_ = local_b8;
      }
      goto LAB_00100c77;
    }
  }
  local_80 = 6;
  StringName::operator=(local_108,(StringName *)&local_d0);
LAB_00100c77:
  local_e8 = 0;
  local_b8 = "PinJoint3D";
  local_b0 = 10;
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  ClassDB::add_property
            ((StringName *)&local_b8,(PropertyInfo *)&local_a8,(StringName *)&local_c8,
             (StringName *)&local_c0,2);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar17 = (long *)(local_e8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar17 = (long *)(local_88 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_a0._0_8_;
  if (local_a0._0_8_ != 0) {
    LOCK();
    plVar17 = (long *)(local_a0._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_a0._8_8_;
      local_a0 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  lVar1 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar17 = (long *)(local_e0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  lVar1 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar17 = (long *)(local_d8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((((StringName::configured != '\0') &&
       ((local_d0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_c8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_c0 != 0)
     ) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"PARAM_BIAS",false);
  local_a8 = "PARAM_BIAS";
  local_d8 = 0;
  local_a0._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "PinJoint3D::Param";
  local_b8 = (char *)0x0;
  local_a0._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_a8 = (char *)0x2;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0x10006;
  local_a0 = (undefined1  [16])0x0;
  StringName::operator=(local_108,(StringName *)&local_c8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar1 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar17 = (long *)(local_c0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  pcVar12 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar17 = (long *)((long)local_b8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar12 + -0x10),false);
    }
  }
  lVar1 = local_88;
  local_b8 = (char *)local_a0._8_8_;
  local_a0._8_8_ = 0;
  if (local_88 != 0) {
    LOCK();
    plVar17 = (long *)(local_88 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_a0._0_8_;
  if (local_a0._0_8_ != 0) {
    LOCK();
    plVar17 = (long *)(local_a0._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      auVar7._8_8_ = 0;
      auVar7._0_8_ = local_a0._8_8_;
      local_a0 = auVar7 << 0x40;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  local_c0 = 0;
  local_a8 = "PinJoint3D";
  local_a0._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b8,(StringName *)&local_d0,0,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar17 = (long *)(local_c0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar17 = (long *)(local_d8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"PARAM_DAMPING",false);
  local_a8 = "PARAM_DAMPING";
  local_d8 = 0;
  local_a0._0_8_ = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "PinJoint3D::Param";
  local_b8 = (char *)0x0;
  local_a0._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_a8 = (char *)0x2;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0x10006;
  local_a0 = (undefined1  [16])0x0;
  StringName::operator=(local_108,(StringName *)&local_c8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar1 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar17 = (long *)(local_c0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  pcVar12 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar17 = (long *)((long)local_b8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar12 + -0x10),false);
    }
  }
  lVar1 = local_88;
  local_b8 = (char *)local_a0._8_8_;
  local_a0._8_8_ = 0;
  if (local_88 != 0) {
    LOCK();
    plVar17 = (long *)(local_88 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_a0._0_8_;
  if (local_a0._0_8_ != 0) {
    LOCK();
    plVar17 = (long *)(local_a0._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      auVar6._8_8_ = 0;
      auVar6._0_8_ = local_a0._8_8_;
      local_a0 = auVar6 << 0x40;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  local_c0 = 0;
  local_a8 = "PinJoint3D";
  local_a0._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b8,(StringName *)&local_d0,1,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar17 = (long *)(local_c0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar17 = (long *)(local_d8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_d0,"PARAM_IMPULSE_CLAMP",false);
  local_a8 = "PARAM_IMPULSE_CLAMP";
  local_d8 = 0;
  local_a0._0_8_ = 0x13;
  String::parse_latin1((StrRange *)&local_d8);
  local_a8 = "PinJoint3D::Param";
  local_b8 = (char *)0x0;
  local_a0._0_8_ = 0x11;
  String::parse_latin1((StrRange *)&local_b8);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_c0,(String *)&local_b8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_c0,false);
  local_a8 = (char *)0x2;
  local_90 = 0;
  local_88 = 0;
  local_80 = 0x10006;
  local_a0 = (undefined1  [16])0x0;
  StringName::operator=(local_108,(StringName *)&local_c8);
  if ((StringName::configured != '\0') && (local_c8 != 0)) {
    StringName::unref();
  }
  lVar1 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar17 = (long *)(local_c0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  pcVar12 = local_b8;
  if (local_b8 != (char *)0x0) {
    LOCK();
    plVar17 = (long *)((long)local_b8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_b8 = (char *)0x0;
      Memory::free_static((void *)((long)pcVar12 + -0x10),false);
    }
  }
  lVar1 = local_88;
  local_b8 = (char *)local_a0._8_8_;
  local_a0._8_8_ = 0;
  if (local_88 != 0) {
    LOCK();
    plVar17 = (long *)(local_88 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_a0._8_8_ != 0)) {
    StringName::unref();
  }
  uVar13 = local_a0._0_8_;
  if (local_a0._0_8_ != 0) {
    LOCK();
    plVar17 = (long *)(local_a0._0_8_ + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_a0._8_8_;
      local_a0 = auVar8 << 0x40;
      Memory::free_static((void *)(uVar13 + -0x10),false);
    }
  }
  local_c0 = 0;
  local_a8 = "PinJoint3D";
  local_a0._0_8_ = 10;
  String::parse_latin1((StrRange *)&local_c0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_c0,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_a8,(StringName *)&local_b8,(StringName *)&local_d0,2,false);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar17 = (long *)(local_c0 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  lVar1 = local_d8;
  if (local_d8 != 0) {
    LOCK();
    plVar17 = (long *)(local_d8 + -0x10);
    *plVar17 = *plVar17 + -1;
    UNLOCK();
    if (*plVar17 == 0) {
      local_d8 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
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



/* PinJoint3D::is_class_ptr(void*) const */

uint __thiscall PinJoint3D::is_class_ptr(PinJoint3D *this,void *param_1)

{
  return (uint)CONCAT71(0x1066,(undefined4 *)param_1 == &Joint3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1066,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1066,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1066,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1066,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* PinJoint3D::_getv(StringName const&, Variant&) const */

undefined8 PinJoint3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PinJoint3D::_setv(StringName const&, Variant const&) */

undefined8 PinJoint3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* MethodBindTRC<float, PinJoint3D::Param>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<float,PinJoint3D::Param>::_gen_argument_type
          (MethodBindTRC<float,PinJoint3D::Param> *this,int param_1)

{
  return 3 - (uint)(param_1 == 0);
}



/* MethodBindTRC<float, PinJoint3D::Param>::get_argument_meta(int) const */

uint __thiscall
MethodBindTRC<float,PinJoint3D::Param>::get_argument_meta
          (MethodBindTRC<float,PinJoint3D::Param> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<PinJoint3D::Param, float>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<PinJoint3D::Param,float>::_gen_argument_type
          (MethodBindT<PinJoint3D::Param,float> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 3 - (uint)(param_1 == 0);
  if (1 < (uint)param_1) {
    iVar1 = 0;
  }
  return iVar1;
}



/* MethodBindT<PinJoint3D::Param, float>::get_argument_meta(int) const */

char __thiscall
MethodBindT<PinJoint3D::Param,float>::get_argument_meta
          (MethodBindT<PinJoint3D::Param,float> *this,int param_1)

{
  return (param_1 == 1) * '\t';
}



/* MethodBindT<PinJoint3D::Param, float>::~MethodBindT() */

void __thiscall
MethodBindT<PinJoint3D::Param,float>::~MethodBindT(MethodBindT<PinJoint3D::Param,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106588;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<PinJoint3D::Param, float>::~MethodBindT() */

void __thiscall
MethodBindT<PinJoint3D::Param,float>::~MethodBindT(MethodBindT<PinJoint3D::Param,float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106588;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float, PinJoint3D::Param>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,PinJoint3D::Param>::~MethodBindTRC(MethodBindTRC<float,PinJoint3D::Param> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001065e8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float, PinJoint3D::Param>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,PinJoint3D::Param>::~MethodBindTRC(MethodBindTRC<float,PinJoint3D::Param> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001065e8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* PinJoint3D::~PinJoint3D() */

void __thiscall PinJoint3D::~PinJoint3D(PinJoint3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106398;
  Joint3D::~Joint3D((Joint3D *)this);
  return;
}



/* PinJoint3D::~PinJoint3D() */

void __thiscall PinJoint3D::~PinJoint3D(PinJoint3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00106398;
  Joint3D::~Joint3D((Joint3D *)this);
  operator_delete(this,0x570);
  return;
}



/* PinJoint3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PinJoint3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* PinJoint3D::_property_can_revertv(StringName const&) const */

undefined8 PinJoint3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00109008 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* PinJoint3D::_validate_propertyv(PropertyInfo&) const */

void PinJoint3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_00109010 == Node::_validate_property) {
    return;
  }
  Node3D::_validate_property(param_1);
  return;
}



/* PinJoint3D::_notificationv(int, bool) */

void __thiscall PinJoint3D::_notificationv(PinJoint3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00109018 != Node3D::_notification) {
      Joint3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_00109018 == Node3D::_notification) {
    return;
  }
  Joint3D::_notification(iVar1);
  return;
}



/* PinJoint3D::_get_class_namev() const */

undefined8 * PinJoint3D::_get_class_namev(void)

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
LAB_00101ed3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00101ed3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PinJoint3D");
      goto LAB_00101f3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PinJoint3D");
LAB_00101f3e:
  return &_get_class_namev()::_class_name_static;
}



/* PinJoint3D::get_class() const */

void PinJoint3D::get_class(void)

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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x10204a);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC9;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar8 = 0;
      lVar7 = -2;
    }
    else {
      lVar8 = local_50[-1];
      lVar7 = lVar8 + -2;
      if (-1 < lVar7) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar7));
        String::operator+((String *)this,(String *)&local_48);
        puVar5 = local_48;
        lVar8 = local_60;
        if (local_48 != (undefined *)0x0) {
          LOCK();
          plVar1 = (long *)(local_48 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_48 = (undefined *)0x0;
            Memory::free_static(puVar5 + -0x10,false);
            lVar8 = local_60;
          }
        }
        goto joined_r0x0010211a;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar8,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC9;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar8 = local_60;
joined_r0x0010211a:
  local_60 = lVar8;
  if (lVar8 != 0) {
    LOCK();
    plVar1 = (long *)(lVar8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar8 + -0x10),false);
    }
  }
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar6 = local_50 + -2;
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar8 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar8 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar8 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
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
  local_78 = &_LC14;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC14;
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
LAB_00102468:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102468;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00102486;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00102486:
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



/* Node3D::is_class(String const&) const */

undefined8 __thiscall Node3D::is_class(Node3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010276f;
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
LAB_0010276f:
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
    if (cVar6 != '\0') goto LAB_00102823;
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
          plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
          if (*(long *)(lVar4 + 0x10) != 0) {
            do {
              lVar5 = *plVar1;
              if (lVar5 == 0) goto LAB_001028fb;
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
LAB_001028fb:
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
      if (cVar6 != '\0') goto LAB_00102823;
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
            plVar1 = (long *)(*(long *)(lVar4 + 0x10) + -0x10);
            if (*(long *)(lVar4 + 0x10) != 0) {
              do {
                lVar5 = *plVar1;
                if (lVar5 == 0) goto LAB_001029db;
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
LAB_001029db:
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
        if (cVar6 != '\0') goto LAB_00102823;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00102a84;
    }
  }
LAB_00102823:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00102a84:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PinJoint3D::is_class(String const&) const */

undefined8 __thiscall PinJoint3D::is_class(PinJoint3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00102b0f;
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
LAB_00102b0f:
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
    if (cVar6 != '\0') goto LAB_00102bc3;
  }
  cVar6 = String::operator==(param_1,"PinJoint3D");
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
              if (lVar5 == 0) goto LAB_00102c83;
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
LAB_00102c83:
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
      if (cVar6 != '\0') goto LAB_00102bc3;
    }
    cVar6 = String::operator==(param_1,"Joint3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node3D::is_class((Node3D *)this,param_1);
        return uVar7;
      }
      goto LAB_00102d2c;
    }
  }
LAB_00102bc3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00102d2c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_00102eb8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00102eb8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00102ed5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00102ed5:
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



/* Joint3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Joint3D::_get_property_listv(Joint3D *this,List *param_1,bool param_2)

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
  local_78 = "Joint3D";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Joint3D";
  local_98 = 0;
  local_70 = 7;
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
LAB_00103308:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103308;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103325;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103325:
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
  StringName::StringName((StringName *)&local_78,"Joint3D",false);
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



/* PinJoint3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PinJoint3D::_get_property_listv(PinJoint3D *this,List *param_1,bool param_2)

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
    Joint3D::_get_property_listv((Joint3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PinJoint3D";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PinJoint3D";
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
LAB_00103758:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103758;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00103775;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00103775:
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
  StringName::StringName((StringName *)&local_78,"PinJoint3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Joint3D::_get_property_listv((Joint3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<PinJoint3D::Param, void>::get_class_info() */

GetTypeInfo<PinJoint3D::Param,void> * __thiscall
GetTypeInfo<PinJoint3D::Param,void>::get_class_info(GetTypeInfo<PinJoint3D::Param,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  local_48 = "PinJoint3D::Param";
  local_40 = 0x11;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
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
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
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



/* MethodBindTRC<float, PinJoint3D::Param>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,PinJoint3D::Param>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_90 = (undefined1  [16])0x0;
    GetTypeInfo<PinJoint3D::Param,void>::get_class_info
              ((GetTypeInfo<PinJoint3D::Param,void> *)&local_68);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      lVar2 = local_60;
      local_60 = 0;
      local_90._0_8_ = lVar2;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      lVar2 = local_58;
      local_58 = 0;
      local_90._8_8_ = lVar2;
    }
    lVar2 = local_48;
    local_80 = CONCAT44(local_80._4_4_,local_50);
    if (local_78 == local_48) {
      local_70 = local_40;
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
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      local_78 = local_48;
      local_70 = local_40;
    }
    if ((StringName::configured != '\0') && (local_58 != 0)) {
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
    *puVar3 = (undefined4)local_98;
    *(undefined8 *)(puVar3 + 2) = local_90._0_8_;
    *(undefined8 *)(puVar3 + 4) = local_90._8_8_;
    puVar3[6] = (undefined4)local_80;
    *(long *)(puVar3 + 8) = local_78;
    puVar3[10] = local_70;
    goto LAB_00103ddb;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC4;
  String::parse_latin1((StrRange *)&local_a0);
  *puVar3 = 3;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar3[10] = 6;
LAB_00103e07:
    StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_98);
    lVar2 = local_a0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)&local_a0);
    puVar3[10] = 6;
    if (puVar3[6] != 0x11) goto LAB_00103e07;
    StringName::StringName((StringName *)&local_68,(String *)(puVar3 + 8),false);
    if (*(undefined **)(puVar3 + 4) == local_68) {
      lVar2 = local_a0;
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
        lVar2 = local_a0;
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar3 + 4) = local_68;
      lVar2 = local_a0;
    }
  }
  local_a0 = lVar2;
  if (lVar2 != 0) {
    LOCK();
    plVar1 = (long *)(lVar2 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_00103ddb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<PinJoint3D::Param, float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<PinJoint3D::Param,float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  long lVar6;
  undefined8 uVar7;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar8;
  long in_FS_OFFSET;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  ulong local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar8 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar8 = 0;
  puVar8[6] = 0;
  *(undefined8 *)(puVar8 + 8) = 0;
  puVar8[10] = 6;
  *(undefined1 (*) [16])(puVar8 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_68 = "PinJoint3D::Param";
    local_60._0_8_ = 0x11;
    String::parse_latin1((StrRange *)&local_70);
    godot::details::enum_qualified_name_to_class_info_name((details *)&local_78,(String *)&local_70)
    ;
    StringName::StringName((StringName *)&local_80,(String *)&local_78,false);
    local_60 = (undefined1  [16])0x0;
    local_68 = (char *)0x2;
    local_50 = 0;
    local_48 = 0;
    local_40 = 0x10006;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_80);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    lVar6 = local_78;
    if (local_78 != 0) {
      LOCK();
      plVar1 = (long *)(local_78 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_78 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    lVar6 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    *puVar8 = local_68._0_4_;
    if (*(long *)(puVar8 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar8 + 2));
      uVar7 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8 *)(puVar8 + 2) = uVar7;
    }
    if (*(long *)(puVar8 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar7 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar8 + 4) = uVar7;
    }
    lVar6 = local_48;
    puVar8[6] = (int)local_50;
    if (*(long *)(puVar8 + 8) == local_48) {
      puVar8[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar8 + 8));
      *(long *)(puVar8 + 8) = local_48;
      puVar8[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
  }
  else {
    if (in_EDX != 1) goto LAB_00103f16;
    local_78 = 0;
    local_68 = "";
    local_80 = 0;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_60._8_8_;
    local_60 = auVar4 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (char *)CONCAT44(local_68._4_4_,3);
    local_50 = local_50 & 0xffffffff00000000;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_001041d8:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if ((int)local_50 != 0x11) goto LAB_001041d8;
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
    lVar6 = local_80;
    if (local_80 != 0) {
      LOCK();
      plVar1 = (long *)(local_80 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_80 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    *puVar8 = local_68._0_4_;
    if (*(long *)(puVar8 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar8 + 2));
      uVar7 = local_60._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_60._8_8_;
      local_60 = auVar5 << 0x40;
      *(undefined8 *)(puVar8 + 2) = uVar7;
    }
    if (*(long *)(puVar8 + 4) != local_60._8_8_) {
      StringName::unref();
      uVar7 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8 *)(puVar8 + 4) = uVar7;
    }
    lVar6 = local_48;
    puVar8[6] = (int)local_50;
    if (*(long *)(puVar8 + 8) == local_48) {
      puVar8[10] = local_40;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar8 + 8));
      *(long *)(puVar8 + 8) = local_48;
      puVar8[10] = local_40;
    }
    if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
      StringName::unref();
    }
  }
  uVar7 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      Memory::free_static((void *)(uVar7 + -0x10),false);
    }
  }
LAB_00103f16:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar8;
}



/* MethodBind* create_method_bind<PinJoint3D, PinJoint3D::Param, float>(void
   (PinJoint3D::*)(PinJoint3D::Param, float)) */

MethodBind * create_method_bind<PinJoint3D,PinJoint3D::Param,float>(_func_void_Param_float *param_1)

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
  *(_func_void_Param_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00106588;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "PinJoint3D";
  local_30 = 10;
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



/* MethodBind* create_method_bind<PinJoint3D, float, PinJoint3D::Param>(float
   (PinJoint3D::*)(PinJoint3D::Param) const) */

MethodBind * create_method_bind<PinJoint3D,float,PinJoint3D::Param>(_func_float_Param *param_1)

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
  *(_func_float_Param **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001065e8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PinJoint3D";
  local_30 = 10;
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



/* PinJoint3D::_bind_methods() [clone .cold] */

void PinJoint3D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PinJoint3D::_initialize_classv() */

void PinJoint3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Joint3D::initialize_class()::initialized == '\0') {
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
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          lVar2 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar2 + -0x10),false);
            }
          }
          if ((code *)PTR__bind_methods_00109028 != Node::_bind_methods) {
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
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar2 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        Node3D::_bind_methods();
        Node3D::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node3D";
      local_68 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Joint3D";
      local_70 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)PTR__bind_methods_00109020 != Node3D::_bind_methods) {
        Joint3D::_bind_methods();
      }
      Joint3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Joint3D";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "PinJoint3D";
    local_70 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00104cf8) */
/* WARNING: Removing unreachable block (ram,0x00104e28) */
/* WARNING: Removing unreachable block (ram,0x00104ff0) */
/* WARNING: Removing unreachable block (ram,0x00104e34) */
/* WARNING: Removing unreachable block (ram,0x00104e3e) */
/* WARNING: Removing unreachable block (ram,0x00104fd0) */
/* WARNING: Removing unreachable block (ram,0x00104e4a) */
/* WARNING: Removing unreachable block (ram,0x00104e54) */
/* WARNING: Removing unreachable block (ram,0x00104fb0) */
/* WARNING: Removing unreachable block (ram,0x00104e60) */
/* WARNING: Removing unreachable block (ram,0x00104e6a) */
/* WARNING: Removing unreachable block (ram,0x00104f90) */
/* WARNING: Removing unreachable block (ram,0x00104e76) */
/* WARNING: Removing unreachable block (ram,0x00104e80) */
/* WARNING: Removing unreachable block (ram,0x00104f70) */
/* WARNING: Removing unreachable block (ram,0x00104e8c) */
/* WARNING: Removing unreachable block (ram,0x00104e96) */
/* WARNING: Removing unreachable block (ram,0x00104f50) */
/* WARNING: Removing unreachable block (ram,0x00104ea2) */
/* WARNING: Removing unreachable block (ram,0x00104eac) */
/* WARNING: Removing unreachable block (ram,0x00104f30) */
/* WARNING: Removing unreachable block (ram,0x00104eb4) */
/* WARNING: Removing unreachable block (ram,0x00104eca) */
/* WARNING: Removing unreachable block (ram,0x00104ed6) */
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



/* MethodBindTRC<float, PinJoint3D::Param>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<float,PinJoint3D::Param>::validated_call
          (MethodBindTRC<float,PinJoint3D::Param> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010514e;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(double *)(param_3 + 8) = (double)fVar5;
LAB_0010514e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, PinJoint3D::Param>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float,PinJoint3D::Param>::ptrcall
          (MethodBindTRC<float,PinJoint3D::Param> *this,Object *param_1,void **param_2,void *param_3
          )

{
  long lVar1;
  char *pcVar2;
  code *pcVar3;
  long *plVar4;
  long in_FS_OFFSET;
  float fVar5;
  long local_58;
  long local_50;
  char *local_48;
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
    if (local_48 == (char *)*plVar4) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar4 = (long *)(local_48 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar4 = (long *)(local_50 + -0x10);
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010537c;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  fVar5 = (float)(*pcVar3)(param_1 + *(long *)(this + 0x60),**param_2);
  *(double *)param_3 = (double)fVar5;
LAB_0010537c:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<PinJoint3D::Param, float>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<PinJoint3D::Param,float>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined1 auVar5 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar4 = param_2[0x23];
      if (pVVar4 == (Variant *)0x0) {
        pVVar4 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar4 = param_2[1] + 0x20;
    }
    if (local_38 == *(char **)pVVar4) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar3 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
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
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00105775;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar5._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar5._0_4_ = (float)*(double *)(*(long *)(param_3 + 8) + 8);
                    /* WARNING: Could not recover jumptable at 0x001055b5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar5._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00105775:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<PinJoint3D::Param, float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<PinJoint3D::Param,float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  long lVar1;
  char *pcVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_38,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar3 = (long *)param_2[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar3 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_38 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_38 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0;
      local_30 = 0x35;
      String::parse_latin1((StrRange *)&local_40);
      vformat<StringName>((StringName *)&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_38,0);
      pcVar2 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_38 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_40;
      if (local_40 != 0) {
        LOCK();
        plVar3 = (long *)(local_40 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_40 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0010599d;
    }
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Load size is inaccurate */
    auVar4._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar4._0_4_ = (float)**(double **)((long)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x001057e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (auVar4._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010599d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float, PinJoint3D::Param>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<float,PinJoint3D::Param>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char *pcVar5;
  char cVar6;
  undefined4 uVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  float fVar14;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar9 = (long *)plVar11[0x23];
      if (plVar9 == (long *)0x0) {
        plVar9 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar9 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar9) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0);
      pcVar5 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar11 = (long *)(local_58 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar5 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar11 = (long *)(local_60 + -0x10);
        *plVar11 = *plVar11 + -1;
        UNLOCK();
        if (*plVar11 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00105b68;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar13 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar12 = param_2[5];
    if (pVVar12 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00105bb0;
LAB_00105ba0:
      pVVar12 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar12 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00105bb0:
        uVar7 = 4;
        goto LAB_00105b5d;
      }
      if (in_R8D == 1) goto LAB_00105ba0;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar12,2);
    uVar4 = _LC45;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(pVVar12);
    fVar14 = (float)(*(code *)pVVar13)((Variant *)((long)plVar11 + (long)pVVar1),uVar8 & 0xffffffff)
    ;
    Variant::Variant((Variant *)local_48,fVar14);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar7 = 3;
LAB_00105b5d:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_00105b68:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, PinJoint3D::Param, float>(__UnexistingClass*,
   void (__UnexistingClass::*)(PinJoint3D::Param, float), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,PinJoint3D::Param,float>
               (__UnexistingClass *param_1,_func_void_Param_float *param_2,Variant **param_3,
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
  Variant *this_00;
  float fVar12;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar7 = 3;
    goto LAB_00105f25;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  iVar6 = 2 - uVar10;
  if (lVar1 == 0) {
    if (iVar6 == 0) {
      this = (Variant *)*plVar8;
LAB_00105f5d:
      this_00 = (Variant *)plVar8[1];
      goto LAB_00105e85;
    }
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    iVar11 = (int)lVar2;
    if (iVar6 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_00105f78;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_00105f5d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00105f78:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
LAB_00105e85:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_Param_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
      }
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,3);
      uVar4 = _LC47;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      fVar12 = Variant::operator_cast_to_float(this_00);
      cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar4 = _LC45;
      if (cVar5 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar4;
      }
      Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x00105f0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((char)(param_1 + (long)param_3),fVar12);
      return;
    }
  }
  uVar7 = 4;
LAB_00105f25:
  *(undefined4 *)param_6 = uVar7;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<PinJoint3D::Param, float>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<PinJoint3D::Param,float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long lVar1;
  char *pcVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var4;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var4 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var4 != (__UnexistingClass *)0x0) && (*(long *)(p_Var4 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var4 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var4 + 8) == 0) {
      plVar3 = *(long **)(p_Var4 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)p_Var4 + 0x40))(p_Var4);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(p_Var4 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC44,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar3 = (long *)(local_48 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar3 = (long *)(local_50 + -0x10);
        *plVar3 = *plVar3 + -1;
        UNLOCK();
        if (*plVar3 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001060b6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,PinJoint3D::Param,float>
            (p_Var4,(_func_void_Param_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001060b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* PinJoint3D::~PinJoint3D() */

void __thiscall PinJoint3D::~PinJoint3D(PinJoint3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, PinJoint3D::Param>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,PinJoint3D::Param>::~MethodBindTRC(MethodBindTRC<float,PinJoint3D::Param> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<PinJoint3D::Param, float>::~MethodBindT() */

void __thiscall
MethodBindT<PinJoint3D::Param,float>::~MethodBindT(MethodBindT<PinJoint3D::Param,float> *this)

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


