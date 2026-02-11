
/* XRBodyTracker::set_has_tracking_data(bool) */

void __thiscall XRBodyTracker::set_has_tracking_data(XRBodyTracker *this,bool param_1)

{
  this[0x280] = (XRBodyTracker)param_1;
  return;
}



/* XRBodyTracker::get_has_tracking_data() const */

XRBodyTracker __thiscall XRBodyTracker::get_has_tracking_data(XRBodyTracker *this)

{
  return this[0x280];
}



/* XRBodyTracker::set_body_flags(BitField<XRBodyTracker::BodyFlags>) */

void __thiscall XRBodyTracker::set_body_flags(XRBodyTracker *this,undefined8 param_2)

{
  *(undefined8 *)(this + 0x288) = param_2;
  return;
}



/* XRBodyTracker::get_body_flags() const */

undefined8 __thiscall XRBodyTracker::get_body_flags(XRBodyTracker *this)

{
  return *(undefined8 *)(this + 0x288);
}



/* XRBodyTracker::set_joint_flags(XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags>) */

void __thiscall XRBodyTracker::set_joint_flags(XRBodyTracker *this,uint param_2,undefined8 param_3)

{
  if (param_2 < 0x4c) {
    *(undefined8 *)(this + (long)(int)param_2 * 8 + 0x290) = param_3;
    return;
  }
  _err_print_index_error
            ("set_joint_flags","servers/xr/xr_body_tracker.cpp",0xa2,(ulong)param_2,0x4c,"p_joint",
             "JOINT_MAX","",false,false);
  return;
}



/* XRBodyTracker::set_joint_transform(XRBodyTracker::Joint, Transform3D const&) */

void __thiscall
XRBodyTracker::set_joint_transform(XRBodyTracker *this,uint param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_2 < 0x4c) {
    uVar1 = param_3[1];
    *(undefined8 *)(this + (long)(int)param_2 * 0x30 + 0x4f0) = *param_3;
    *(undefined8 *)(this + (long)(int)param_2 * 0x30 + 0x4f8) = uVar1;
    uVar1 = param_3[3];
    *(undefined8 *)(this + (long)(int)param_2 * 0x30 + 0x500) = param_3[2];
    *(undefined8 *)(this + (long)(int)param_2 * 0x30 + 0x508) = uVar1;
    uVar1 = param_3[5];
    *(undefined8 *)(this + (long)(int)param_2 * 0x30 + 0x510) = param_3[4];
    *(undefined8 *)(this + (long)(int)param_2 * 0x30 + 0x518) = uVar1;
    return;
  }
  _err_print_index_error
            ("set_joint_transform","servers/xr/xr_body_tracker.cpp",0xac,(ulong)param_2,0x4c,
             "p_joint","JOINT_MAX","",false,false);
  return;
}



/* XRBodyTracker::set_tracker_type(XRServer::TrackerType) */

void __thiscall XRBodyTracker::set_tracker_type(undefined8 param_1,int param_2)

{
  if (param_2 == 0x20) {
    return;
  }
  _err_print_error("set_tracker_type","servers/xr/xr_body_tracker.cpp",0x8a,
                   "Condition \"p_type != XRServer::TRACKER_BODY\" is true.",
                   "XRBodyTracker must be of type TRACKER_BODY.",0,0);
  return;
}



/* XRBodyTracker::set_tracker_hand(XRPositionalTracker::TrackerHand) */

void __thiscall XRBodyTracker::set_tracker_hand(undefined8 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  _err_print_error("set_tracker_hand","servers/xr/xr_body_tracker.cpp",0x8e,
                   "Condition \"p_hand != XRPositionalTracker::TRACKER_HAND_UNKNOWN\" is true.",
                   "XRBodyTracker cannot specify hand.",0,0);
  return;
}



/* XRBodyTracker::get_joint_transform(XRBodyTracker::Joint) const */

undefined1 (*) [16]
XRBodyTracker::get_joint_transform(undefined1 (*param_1) [16],long param_2,uint param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  uint uVar6;
  
  if (param_3 < 0x4c) {
    param_2 = param_2 + (long)(int)param_3 * 0x30;
    uVar1 = *(undefined8 *)(param_2 + 0x4f8);
    uVar2 = *(undefined8 *)(param_2 + 0x500);
    uVar3 = *(undefined8 *)(param_2 + 0x508);
    uVar4 = *(undefined8 *)(param_2 + 0x510);
    uVar5 = *(undefined8 *)(param_2 + 0x518);
    *(undefined8 *)*param_1 = *(undefined8 *)(param_2 + 0x4f0);
    *(undefined8 *)(*param_1 + 8) = uVar1;
    *(undefined8 *)param_1[1] = uVar2;
    *(undefined8 *)(param_1[1] + 8) = uVar3;
    *(undefined8 *)param_1[2] = uVar4;
    *(undefined8 *)(param_1[2] + 8) = uVar5;
    return param_1;
  }
  _err_print_index_error
            ("get_joint_transform","servers/xr/xr_body_tracker.cpp",0xb1,(ulong)param_3,0x4c,
             "p_joint","JOINT_MAX","",false,false);
  uVar6 = _LC14;
  *(undefined4 *)param_1[2] = 0x3f800000;
  *(undefined8 *)(param_1[2] + 4) = 0;
  *(undefined4 *)(param_1[2] + 0xc) = 0;
  *param_1 = ZEXT416(uVar6);
  param_1[1] = ZEXT416(uVar6);
  return param_1;
}



/* XRBodyTracker::get_joint_flags(XRBodyTracker::Joint) const */

undefined8 __thiscall XRBodyTracker::get_joint_flags(XRBodyTracker *this,uint param_2)

{
  if (param_2 < 0x4c) {
    return *(undefined8 *)(this + (long)(int)param_2 * 8 + 0x290);
  }
  _err_print_index_error
            ("get_joint_flags","servers/xr/xr_body_tracker.cpp",0xa7,(ulong)param_2,0x4c,"p_joint",
             "JOINT_MAX","",false,false);
  return 0;
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



/* XRBodyTracker::XRBodyTracker() */

void __thiscall XRBodyTracker::XRBodyTracker(XRBodyTracker *this)

{
  uint uVar1;
  undefined8 uVar2;
  XRBodyTracker *pXVar3;
  XRBodyTracker *pXVar4;
  long lVar5;
  byte bVar6;
  undefined1 auVar7 [16];
  
  bVar6 = 0;
  RefCounted::RefCounted((RefCounted *)this);
  *(undefined1 (*) [16])(this + 400) = (undefined1  [16])0x0;
  *(code **)this = Variant::_clear_internal;
  *(undefined8 *)(this + 0x1a0) = 0;
  *(undefined4 *)(this + 400) = 1;
  *(undefined4 *)(this + 0x1a8) = 0x80;
  *(undefined1 (*) [16])(this + 0x180) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x1b0),"Unknown",false);
  uVar2 = _LC22;
  *(undefined1 (*) [16])(this + 0x200) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x220) = uVar2;
  *(undefined8 *)(this + 0x250) = uVar2;
  *(undefined ***)this = &PTR__initialize_classv_00110680;
  *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x230) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
  uVar1 = _LC14;
  *(undefined1 (*) [16])(this + 0x1d0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x268) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1c0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
  auVar7 = ZEXT416(_LC14);
  *(undefined8 *)(this + 0x1b8) = 0;
  *(undefined8 *)(this + 0x1e0) = 0;
  *(undefined4 *)(this + 0x1d0) = 1;
  *(undefined8 *)(this + 0x1e8) = 0;
  *(undefined4 *)(this + 0x1f0) = 0;
  *(undefined8 *)(this + 0x278) = 0;
  *(undefined4 *)(this + 0x268) = 1;
  this[0x280] = (XRBodyTracker)0x0;
  *(undefined8 *)(this + 0x288) = 0;
  pXVar3 = this + 0x290;
  for (lVar5 = 0x4c; lVar5 != 0; lVar5 = lVar5 + -1) {
    *(undefined8 *)pXVar3 = 0;
    pXVar3 = pXVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  pXVar3 = this + 0x4f0;
  do {
    *(undefined8 *)(pXVar3 + 0x24) = 0;
    pXVar4 = pXVar3 + 0x30;
    *(undefined1 (*) [16])pXVar3 = auVar7;
    *(undefined1 (*) [16])(pXVar3 + 0x10) = auVar7;
    *(uint *)(pXVar3 + 0x20) = uVar1;
    *(undefined4 *)(pXVar3 + 0x2c) = 0;
    pXVar3 = pXVar4;
  } while (pXVar4 != this + 0x1330);
  *(undefined4 *)(this + 0x1a8) = 0x20;
  return;
}



/* XRBodyTracker::_bind_methods() */

void XRBodyTracker::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  MethodBind *pMVar6;
  uint uVar7;
  long lVar8;
  long *plVar9;
  long in_FS_OFFSET;
  undefined8 local_118;
  long local_110;
  long local_108;
  long local_100;
  long local_f8;
  char *local_f0;
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
  char *local_98;
  char *pcStack_90;
  undefined8 local_88;
  char *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  char **local_58;
  undefined1 auStack_50 [16];
  long local_40;
  
  puVar4 = PTR__LC36_00110c40;
  puVar3 = PTR__LC34_00110c38;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = 0;
  local_a8 = "has_data";
  uVar7 = (uint)&local_58;
  local_58 = &local_a8;
  D_METHODP((char *)&local_d8,(char ***)"set_has_tracking_data",uVar7);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<XRBodyTracker,bool>(set_has_tracking_data);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar9 = local_c8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      lVar8 = 0;
      local_c8 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_has_tracking_data",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<XRBodyTracker,bool>(get_has_tracking_data);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar9 = local_c8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      lVar8 = 0;
      local_c8 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_a8 = "flags";
  local_a0 = 0;
  local_58 = &local_a8;
  D_METHODP((char *)&local_d8,(char ***)"set_body_flags",uVar7);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<XRBodyTracker,BitField<XRBodyTracker::BodyFlags>>(set_body_flags);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar9 = local_c8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      lVar8 = 0;
      local_c8 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_d8,(char ***)"get_body_flags",0);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<XRBodyTracker,BitField<XRBodyTracker::BodyFlags>>(get_body_flags);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar9 = local_c8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      lVar8 = 0;
      local_c8 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_68 = 0;
  local_78 = puVar3;
  puStack_70 = puVar4;
  auStack_50._0_8_ = &puStack_70;
  local_58 = &local_78;
  D_METHODP((char *)&local_d8,(char ***)"set_joint_flags",uVar7);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<XRBodyTracker,XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>
                     (set_joint_flags);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar9 = local_c8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      lVar8 = 0;
      local_c8 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "joint";
  puStack_70 = (undefined *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_d8,(char ***)"get_joint_flags",uVar7);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<XRBodyTracker,BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>
                     (get_joint_flags);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar9 = local_c8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      lVar8 = 0;
      local_c8 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_98 = puVar3;
  pcStack_90 = "transform";
  auStack_50._0_8_ = &pcStack_90;
  local_58 = &local_98;
  D_METHODP((char *)&local_d8,(char ***)"set_joint_transform",uVar7);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<XRBodyTracker,XRBodyTracker::Joint,Transform3D_const&>
                     (set_joint_transform);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar9 = local_c8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      lVar8 = 0;
      local_c8 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  local_78 = "joint";
  puStack_70 = (undefined *)0x0;
  local_58 = &local_78;
  D_METHODP((char *)&local_d8,(char ***)"get_joint_transform",uVar7);
  auStack_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar6 = create_method_bind<XRBodyTracker,Transform3D,XRBodyTracker::Joint>(get_joint_transform);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_d8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar5 = local_c8;
  if (local_c8 != (long *)0x0) {
    LOCK();
    plVar9 = local_c8 + -2;
    *plVar9 = *plVar9 + -1;
    UNLOCK();
    if (*plVar9 == 0) {
      if (local_c8 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_c8[-1];
      lVar8 = 0;
      local_c8 = (long *)0x0;
      plVar9 = plVar5;
      if (lVar1 != 0) {
        do {
          if ((StringName::configured != '\0') && (*plVar9 != 0)) {
            StringName::unref();
          }
          lVar8 = lVar8 + 1;
          plVar9 = plVar9 + 1;
        } while (lVar1 != lVar8);
      }
      Memory::free_static(plVar5 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_100 = 0;
  local_d8 = "";
  local_108 = 0;
  local_d0 = 0;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_d8 = "has_tracking_data";
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_110);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,1);
  local_d0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_110);
  }
  local_c8 = (long *)0x0;
  local_c0 = 0;
  local_b8 = 0;
  if (local_108 == 0) {
LAB_0010127b:
    local_b0 = 6;
    StringName::operator=((StringName *)&local_c8,(StringName *)&local_100);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_108);
    local_b0 = 6;
    if (local_c0 != 0x11) goto LAB_0010127b;
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
  }
  local_118 = 0;
  local_e8 = "XRBodyTracker";
  local_e0 = 0xd;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if ((((StringName::configured != '\0') &&
       ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_f0,true);
  _scs_create((char *)&local_f8,true);
  local_d8 = "Upper Body,Lower Body,Hands";
  local_100 = 0;
  local_108 = 0;
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_108);
  local_110 = 0;
  local_d8 = "body_flags";
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_110);
  local_d8 = (char *)CONCAT44(local_d8._4_4_,2);
  local_d0 = 0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d0,(CowData *)&local_110);
  }
  local_c8 = (long *)0x0;
  local_c0 = 6;
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
      goto LAB_0010150b;
    }
  }
  local_b0 = 6;
  StringName::operator=((StringName *)&local_c8,(StringName *)&local_100);
LAB_0010150b:
  local_118 = 0;
  local_e8 = "XRBodyTracker";
  local_e0 = 0xd;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_property
            ((StringName *)&local_e8,(PropertyInfo *)&local_d8,(StringName *)&local_f8,
             (StringName *)&local_f0,-1);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
  if (((StringName::configured != '\0') &&
      ((local_100 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_f8 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (local_f0 != (char *)0x0)))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"BODY_FLAG_UPPER_BODY_SUPPORTED",false);
  local_d8 = "BODY_FLAG_UPPER_BODY_SUPPORTED";
  local_f8 = 0;
  local_d0 = 0x1e;
  String::parse_latin1((StrRange *)&local_f8);
  GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void> *)&local_d8);
  local_f0 = (char *)local_c8;
  local_c8 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,1,true);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"BODY_FLAG_LOWER_BODY_SUPPORTED",false);
  local_d8 = "BODY_FLAG_LOWER_BODY_SUPPORTED";
  local_f8 = 0;
  local_d0 = 0x1e;
  String::parse_latin1((StrRange *)&local_f8);
  GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void> *)&local_d8);
  local_f0 = (char *)local_c8;
  local_c8 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,2,true);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"BODY_FLAG_HANDS_SUPPORTED",false);
  local_d8 = "BODY_FLAG_HANDS_SUPPORTED";
  local_f8 = 0;
  local_d0 = 0x19;
  String::parse_latin1((StrRange *)&local_f8);
  GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void> *)&local_d8);
  local_f0 = (char *)local_c8;
  local_c8 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,4,true);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_ROOT",false);
  local_d8 = "JOINT_ROOT";
  local_f8 = 0;
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_HIPS",false);
  local_d8 = "JOINT_HIPS";
  local_f8 = 0;
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,1,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_SPINE",false);
  local_d8 = "JOINT_SPINE";
  local_f8 = 0;
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,2,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_CHEST",false);
  local_d8 = "JOINT_CHEST";
  local_f8 = 0;
  local_d0 = 0xb;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,3,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_UPPER_CHEST",false);
  local_d8 = "JOINT_UPPER_CHEST";
  local_f8 = 0;
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,4,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_NECK",false);
  local_d8 = "JOINT_NECK";
  local_f8 = 0;
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,5,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_HEAD",false);
  local_d8 = "JOINT_HEAD";
  local_f8 = 0;
  local_d0 = 10;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,6,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_HEAD_TIP",false);
  local_d8 = "JOINT_HEAD_TIP";
  local_f8 = 0;
  local_d0 = 0xe;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,7,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_SHOULDER",false);
  local_d8 = "JOINT_LEFT_SHOULDER";
  local_f8 = 0;
  local_d0 = 0x13;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,8,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_UPPER_ARM",false);
  local_d8 = "JOINT_LEFT_UPPER_ARM";
  local_f8 = 0;
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,9,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_LOWER_ARM",false);
  local_d8 = "JOINT_LEFT_LOWER_ARM";
  local_f8 = 0;
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,10,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_SHOULDER",false);
  local_d8 = "JOINT_RIGHT_SHOULDER";
  local_f8 = 0;
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0xb,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_UPPER_ARM",false);
  local_d8 = "JOINT_RIGHT_UPPER_ARM";
  local_f8 = 0;
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0xc,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_LOWER_ARM",false);
  local_d8 = "JOINT_RIGHT_LOWER_ARM";
  local_f8 = 0;
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0xd,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_UPPER_LEG",false);
  local_d8 = "JOINT_LEFT_UPPER_LEG";
  local_f8 = 0;
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0xe,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_LOWER_LEG",false);
  local_d8 = "JOINT_LEFT_LOWER_LEG";
  local_f8 = 0;
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0xf,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_FOOT",false);
  local_d8 = "JOINT_LEFT_FOOT";
  local_f8 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x10,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_TOES",false);
  local_d8 = "JOINT_LEFT_TOES";
  local_f8 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x11,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_UPPER_LEG",false);
  local_d8 = "JOINT_RIGHT_UPPER_LEG";
  local_f8 = 0;
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x12,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_LOWER_LEG",false);
  local_d8 = "JOINT_RIGHT_LOWER_LEG";
  local_f8 = 0;
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x13,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_FOOT",false);
  local_d8 = "JOINT_RIGHT_FOOT";
  local_f8 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x14,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_TOES",false);
  local_d8 = "JOINT_RIGHT_TOES";
  local_f8 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x15,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_HAND",false);
  local_d8 = "JOINT_LEFT_HAND";
  local_f8 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x16,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_PALM",false);
  local_d8 = "JOINT_LEFT_PALM";
  local_f8 = 0;
  local_d0 = 0xf;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x17,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_WRIST",false);
  local_d8 = "JOINT_LEFT_WRIST";
  local_f8 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x18,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_THUMB_METACARPAL",false);
  local_d8 = "JOINT_LEFT_THUMB_METACARPAL";
  local_f8 = 0;
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x19,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_THUMB_PHALANX_PROXIMAL",false);
  local_d8 = "JOINT_LEFT_THUMB_PHALANX_PROXIMAL";
  local_f8 = 0;
  local_d0 = 0x21;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x1a,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_THUMB_PHALANX_DISTAL",false);
  local_d8 = "JOINT_LEFT_THUMB_PHALANX_DISTAL";
  local_f8 = 0;
  local_d0 = 0x1f;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x1b,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_THUMB_TIP",false);
  local_d8 = "JOINT_LEFT_THUMB_TIP";
  local_f8 = 0;
  local_d0 = 0x14;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x1c,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_INDEX_FINGER_METACARPAL",false);
  local_d8 = "JOINT_LEFT_INDEX_FINGER_METACARPAL";
  local_f8 = 0;
  local_d0 = 0x22;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x1d,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_INDEX_FINGER_PHALANX_PROXIMAL",false);
  local_d8 = "JOINT_LEFT_INDEX_FINGER_PHALANX_PROXIMAL";
  local_f8 = 0;
  local_d0 = 0x28;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x1e,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_e8,"JOINT_LEFT_INDEX_FINGER_PHALANX_INTERMEDIATE",false);
  local_d8 = "JOINT_LEFT_INDEX_FINGER_PHALANX_INTERMEDIATE";
  local_f8 = 0;
  local_d0 = 0x2c;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x1f,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_INDEX_FINGER_PHALANX_DISTAL",false);
  local_d8 = "JOINT_LEFT_INDEX_FINGER_PHALANX_DISTAL";
  local_f8 = 0;
  local_d0 = 0x26;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x20,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_INDEX_FINGER_TIP",false);
  local_d8 = "JOINT_LEFT_INDEX_FINGER_TIP";
  local_f8 = 0;
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x21,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_MIDDLE_FINGER_METACARPAL",false);
  local_d8 = "JOINT_LEFT_MIDDLE_FINGER_METACARPAL";
  local_f8 = 0;
  local_d0 = 0x23;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x22,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_MIDDLE_FINGER_PHALANX_PROXIMAL",false);
  local_d8 = "JOINT_LEFT_MIDDLE_FINGER_PHALANX_PROXIMAL";
  local_f8 = 0;
  local_d0 = 0x29;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x23,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_e8,"JOINT_LEFT_MIDDLE_FINGER_PHALANX_INTERMEDIATE",false);
  local_d8 = "JOINT_LEFT_MIDDLE_FINGER_PHALANX_INTERMEDIATE";
  local_f8 = 0;
  local_d0 = 0x2d;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x24,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_MIDDLE_FINGER_PHALANX_DISTAL",false);
  local_d8 = "JOINT_LEFT_MIDDLE_FINGER_PHALANX_DISTAL";
  local_f8 = 0;
  local_d0 = 0x27;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x25,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_MIDDLE_FINGER_TIP",false);
  local_d8 = "JOINT_LEFT_MIDDLE_FINGER_TIP";
  local_f8 = 0;
  local_d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x26,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_RING_FINGER_METACARPAL",false);
  local_d8 = "JOINT_LEFT_RING_FINGER_METACARPAL";
  local_f8 = 0;
  local_d0 = 0x21;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x27,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_RING_FINGER_PHALANX_PROXIMAL",false);
  local_d8 = "JOINT_LEFT_RING_FINGER_PHALANX_PROXIMAL";
  local_f8 = 0;
  local_d0 = 0x27;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x28,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_e8,"JOINT_LEFT_RING_FINGER_PHALANX_INTERMEDIATE",false);
  local_d8 = "JOINT_LEFT_RING_FINGER_PHALANX_INTERMEDIATE";
  local_f8 = 0;
  local_d0 = 0x2b;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x29,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_RING_FINGER_PHALANX_DISTAL",false);
  local_d8 = "JOINT_LEFT_RING_FINGER_PHALANX_DISTAL";
  local_f8 = 0;
  local_d0 = 0x25;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x2a,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_RING_FINGER_TIP",false);
  local_d8 = "JOINT_LEFT_RING_FINGER_TIP";
  local_f8 = 0;
  local_d0 = 0x1a;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x2b,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_PINKY_FINGER_METACARPAL",false);
  local_d8 = "JOINT_LEFT_PINKY_FINGER_METACARPAL";
  local_f8 = 0;
  local_d0 = 0x22;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x2c,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_PINKY_FINGER_PHALANX_PROXIMAL",false);
  local_d8 = "JOINT_LEFT_PINKY_FINGER_PHALANX_PROXIMAL";
  local_f8 = 0;
  local_d0 = 0x28;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x2d,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_e8,"JOINT_LEFT_PINKY_FINGER_PHALANX_INTERMEDIATE",false);
  local_d8 = "JOINT_LEFT_PINKY_FINGER_PHALANX_INTERMEDIATE";
  local_f8 = 0;
  local_d0 = 0x2c;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x2e,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_PINKY_FINGER_PHALANX_DISTAL",false);
  local_d8 = "JOINT_LEFT_PINKY_FINGER_PHALANX_DISTAL";
  local_f8 = 0;
  local_d0 = 0x26;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x2f,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_LEFT_PINKY_FINGER_TIP",false);
  local_d8 = "JOINT_LEFT_PINKY_FINGER_TIP";
  local_f8 = 0;
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x30,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_HAND",false);
  local_d8 = "JOINT_RIGHT_HAND";
  local_f8 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x31,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_PALM",false);
  local_d8 = "JOINT_RIGHT_PALM";
  local_f8 = 0;
  local_d0 = 0x10;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x32,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_WRIST",false);
  local_d8 = "JOINT_RIGHT_WRIST";
  local_f8 = 0;
  local_d0 = 0x11;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x33,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_THUMB_METACARPAL",false);
  local_d8 = "JOINT_RIGHT_THUMB_METACARPAL";
  local_f8 = 0;
  local_d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x34,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_THUMB_PHALANX_PROXIMAL",false);
  local_d8 = "JOINT_RIGHT_THUMB_PHALANX_PROXIMAL";
  local_f8 = 0;
  local_d0 = 0x22;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x35,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_THUMB_PHALANX_DISTAL",false);
  local_d8 = "JOINT_RIGHT_THUMB_PHALANX_DISTAL";
  local_f8 = 0;
  local_d0 = 0x20;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x36,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_THUMB_TIP",false);
  local_d8 = "JOINT_RIGHT_THUMB_TIP";
  local_f8 = 0;
  local_d0 = 0x15;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x37,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_INDEX_FINGER_METACARPAL",false);
  local_d8 = "JOINT_RIGHT_INDEX_FINGER_METACARPAL";
  local_f8 = 0;
  local_d0 = 0x23;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x38,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_INDEX_FINGER_PHALANX_PROXIMAL",false);
  local_d8 = "JOINT_RIGHT_INDEX_FINGER_PHALANX_PROXIMAL";
  local_f8 = 0;
  local_d0 = 0x29;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x39,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_e8,"JOINT_RIGHT_INDEX_FINGER_PHALANX_INTERMEDIATE",false);
  local_d8 = "JOINT_RIGHT_INDEX_FINGER_PHALANX_INTERMEDIATE";
  local_f8 = 0;
  local_d0 = 0x2d;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x3a,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_INDEX_FINGER_PHALANX_DISTAL",false);
  local_d8 = "JOINT_RIGHT_INDEX_FINGER_PHALANX_DISTAL";
  local_f8 = 0;
  local_d0 = 0x27;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x3b,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_INDEX_FINGER_TIP",false);
  local_d8 = "JOINT_RIGHT_INDEX_FINGER_TIP";
  local_f8 = 0;
  local_d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x3c,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_MIDDLE_FINGER_METACARPAL",false);
  local_d8 = "JOINT_RIGHT_MIDDLE_FINGER_METACARPAL";
  local_f8 = 0;
  local_d0 = 0x24;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x3d,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_MIDDLE_FINGER_PHALANX_PROXIMAL",false)
  ;
  local_d8 = "JOINT_RIGHT_MIDDLE_FINGER_PHALANX_PROXIMAL";
  local_f8 = 0;
  local_d0 = 0x2a;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x3e,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_e8,"JOINT_RIGHT_MIDDLE_FINGER_PHALANX_INTERMEDIATE",false);
  local_d8 = "JOINT_RIGHT_MIDDLE_FINGER_PHALANX_INTERMEDIATE";
  local_f8 = 0;
  local_d0 = 0x2e;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x3f,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_MIDDLE_FINGER_PHALANX_DISTAL",false);
  local_d8 = "JOINT_RIGHT_MIDDLE_FINGER_PHALANX_DISTAL";
  local_f8 = 0;
  local_d0 = 0x28;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x40,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_MIDDLE_FINGER_TIP",false);
  local_d8 = "JOINT_RIGHT_MIDDLE_FINGER_TIP";
  local_f8 = 0;
  local_d0 = 0x1d;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x41,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_RING_FINGER_METACARPAL",false);
  local_d8 = "JOINT_RIGHT_RING_FINGER_METACARPAL";
  local_f8 = 0;
  local_d0 = 0x22;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x42,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_RING_FINGER_PHALANX_PROXIMAL",false);
  local_d8 = "JOINT_RIGHT_RING_FINGER_PHALANX_PROXIMAL";
  local_f8 = 0;
  local_d0 = 0x28;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x43,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_e8,"JOINT_RIGHT_RING_FINGER_PHALANX_INTERMEDIATE",false);
  local_d8 = "JOINT_RIGHT_RING_FINGER_PHALANX_INTERMEDIATE";
  local_f8 = 0;
  local_d0 = 0x2c;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x44,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_RING_FINGER_PHALANX_DISTAL",false);
  local_d8 = "JOINT_RIGHT_RING_FINGER_PHALANX_DISTAL";
  local_f8 = 0;
  local_d0 = 0x26;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x45,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_RING_FINGER_TIP",false);
  local_d8 = "JOINT_RIGHT_RING_FINGER_TIP";
  local_f8 = 0;
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x46,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_PINKY_FINGER_METACARPAL",false);
  local_d8 = "JOINT_RIGHT_PINKY_FINGER_METACARPAL";
  local_f8 = 0;
  local_d0 = 0x23;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x47,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_PINKY_FINGER_PHALANX_PROXIMAL",false);
  local_d8 = "JOINT_RIGHT_PINKY_FINGER_PHALANX_PROXIMAL";
  local_f8 = 0;
  local_d0 = 0x29;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x48,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName
            ((StringName *)&local_e8,"JOINT_RIGHT_PINKY_FINGER_PHALANX_INTERMEDIATE",false);
  local_d8 = "JOINT_RIGHT_PINKY_FINGER_PHALANX_INTERMEDIATE";
  local_f8 = 0;
  local_d0 = 0x2d;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x49,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_PINKY_FINGER_PHALANX_DISTAL",false);
  local_d8 = "JOINT_RIGHT_PINKY_FINGER_PHALANX_DISTAL";
  local_f8 = 0;
  local_d0 = 0x27;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x4a,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_RIGHT_PINKY_FINGER_TIP",false);
  local_d8 = "JOINT_RIGHT_PINKY_FINGER_TIP";
  local_f8 = 0;
  local_d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x4b,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_MAX",false);
  local_d8 = "JOINT_MAX";
  local_f8 = 0;
  local_d0 = 9;
  String::parse_latin1((StrRange *)&local_f8);
  __constant_get_enum_name<XRBodyTracker::Joint>((StringName *)&local_f0);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,0x4c,false);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_FLAG_ORIENTATION_VALID",false);
  local_d8 = "JOINT_FLAG_ORIENTATION_VALID";
  local_f8 = 0;
  local_d0 = 0x1c;
  String::parse_latin1((StrRange *)&local_f8);
  GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void> *)&local_d8);
  local_f0 = (char *)local_c8;
  local_c8 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,1,true);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_FLAG_ORIENTATION_TRACKED",false);
  local_d8 = "JOINT_FLAG_ORIENTATION_TRACKED";
  local_f8 = 0;
  local_d0 = 0x1e;
  String::parse_latin1((StrRange *)&local_f8);
  GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void> *)&local_d8);
  local_f0 = (char *)local_c8;
  local_c8 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,2,true);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_FLAG_POSITION_VALID",false);
  local_d8 = "JOINT_FLAG_POSITION_VALID";
  local_f8 = 0;
  local_d0 = 0x19;
  String::parse_latin1((StrRange *)&local_f8);
  GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void> *)&local_d8);
  local_f0 = (char *)local_c8;
  local_c8 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,4,true);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_e8,"JOINT_FLAG_POSITION_TRACKED",false);
  local_d8 = "JOINT_FLAG_POSITION_TRACKED";
  local_f8 = 0;
  local_d0 = 0x1b;
  String::parse_latin1((StrRange *)&local_f8);
  GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void>::get_class_info
            ((GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void> *)&local_d8);
  local_f0 = (char *)local_c8;
  local_c8 = (long *)0x0;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_d8);
  local_100 = 0;
  local_d8 = "XRBodyTracker";
  local_d0 = 0xd;
  String::parse_latin1((StrRange *)&local_100);
  StringName::StringName((StringName *)&local_d8,(String *)&local_100,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_d8,(StringName *)&local_f0,(StringName *)&local_e8,8,true);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if ((StringName::configured != '\0') && (local_f0 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
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
  return (uint)CONCAT71(0x110b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* XRBodyTracker::is_class_ptr(void*) const */

uint __thiscall XRBodyTracker::is_class_ptr(XRBodyTracker *this,void *param_1)

{
  return (uint)CONCAT71(0x110a,(undefined4 *)param_1 ==
                               &XRPositionalTracker::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110a,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,(undefined4 *)param_1 == &XRTracker::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x110b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* XRBodyTracker::_getv(StringName const&, Variant&) const */

undefined8 XRBodyTracker::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRBodyTracker::_setv(StringName const&, Variant const&) */

undefined8 XRBodyTracker::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRBodyTracker::_validate_propertyv(PropertyInfo&) const */

void XRBodyTracker::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* XRBodyTracker::_property_can_revertv(StringName const&) const */

undefined8 XRBodyTracker::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* XRBodyTracker::_property_get_revertv(StringName const&, Variant&) const */

undefined8 XRBodyTracker::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* XRBodyTracker::_notificationv(int, bool) */

void XRBodyTracker::_notificationv(int param_1,bool param_2)

{
  return;
}



/* MethodBindTRC<Transform3D, XRBodyTracker::Joint>::_gen_argument_type(int) const */

int __thiscall
MethodBindTRC<Transform3D,XRBodyTracker::Joint>::_gen_argument_type
          (MethodBindTRC<Transform3D,XRBodyTracker::Joint> *this,int param_1)

{
  return (-(uint)(param_1 == 0) & 0xfffffff0) + 0x12;
}



/* MethodBindTRC<Transform3D, XRBodyTracker::Joint>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Transform3D,XRBodyTracker::Joint>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<XRBodyTracker::Joint, Transform3D const&>::_gen_argument_type(int) const */

int __thiscall
MethodBindT<XRBodyTracker::Joint,Transform3D_const&>::_gen_argument_type
          (MethodBindT<XRBodyTracker::Joint,Transform3D_const&> *this,int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if ((uint)param_1 < 2) {
    iVar1 = (-(uint)(param_1 == 0) & 0xfffffff0) + 0x12;
  }
  return iVar1;
}



/* MethodBindT<XRBodyTracker::Joint, Transform3D const&>::get_argument_meta(int) const */

undefined8 MethodBindT<XRBodyTracker::Joint,Transform3D_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<BitField<XRBodyTracker::JointFlags>, XRBodyTracker::Joint>::_gen_argument_type(int)
   const */

undefined8
MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>::_gen_argument_type
          (int param_1)

{
  return 2;
}



/* MethodBindTRC<BitField<XRBodyTracker::JointFlags>, XRBodyTracker::Joint>::get_argument_meta(int)
   const */

undefined8
MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindT<XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags> >::_gen_argument_type(int)
   const */

char __thiscall
MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>::_gen_argument_type
          (MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>> *this,int param_1)

{
  return ((uint)param_1 < 2) * '\x02';
}



/* MethodBindT<XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags> >::get_argument_meta(int)
   const */

undefined8
MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>::get_argument_meta
          (int param_1)

{
  return 0;
}



/* MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::get_argument_meta(int) const */

undefined8 MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<BitField<XRBodyTracker::BodyFlags> >::_gen_argument_type(int) const */

char __thiscall
MethodBindT<BitField<XRBodyTracker::BodyFlags>>::_gen_argument_type
          (MethodBindT<BitField<XRBodyTracker::BodyFlags>> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<BitField<XRBodyTracker::BodyFlags> >::get_argument_meta(int) const */

undefined8 MethodBindT<BitField<XRBodyTracker::BodyFlags>>::get_argument_meta(int param_1)

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



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001107f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001107f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110850;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110850;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<BitField<XRBodyTracker::BodyFlags> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<XRBodyTracker::BodyFlags>>::~MethodBindT
          (MethodBindT<BitField<XRBodyTracker::BodyFlags>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001108b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<BitField<XRBodyTracker::BodyFlags> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<XRBodyTracker::BodyFlags>>::~MethodBindT
          (MethodBindT<BitField<XRBodyTracker::BodyFlags>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001108b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::~MethodBindTRC
          (MethodBindTRC<BitField<XRBodyTracker::BodyFlags>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110910;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::~MethodBindTRC
          (MethodBindTRC<BitField<XRBodyTracker::BodyFlags>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110910;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags> >::~MethodBindT() */

void __thiscall
MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>::~MethodBindT
          (MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110970;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags> >::~MethodBindT() */

void __thiscall
MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>::~MethodBindT
          (MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110970;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<BitField<XRBodyTracker::JointFlags>, XRBodyTracker::Joint>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>::~MethodBindTRC
          (MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001109d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<BitField<XRBodyTracker::JointFlags>, XRBodyTracker::Joint>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>::~MethodBindTRC
          (MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001109d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<XRBodyTracker::Joint, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<XRBodyTracker::Joint,Transform3D_const&>::~MethodBindT
          (MethodBindT<XRBodyTracker::Joint,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110a30;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<XRBodyTracker::Joint, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<XRBodyTracker::Joint,Transform3D_const&>::~MethodBindT
          (MethodBindT<XRBodyTracker::Joint,Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110a30;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Transform3D, XRBodyTracker::Joint>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform3D,XRBodyTracker::Joint>::~MethodBindTRC
          (MethodBindTRC<Transform3D,XRBodyTracker::Joint> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110a90;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Transform3D, XRBodyTracker::Joint>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform3D,XRBodyTracker::Joint>::~MethodBindTRC
          (MethodBindTRC<Transform3D,XRBodyTracker::Joint> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00110a90;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110520;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110520;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* XRBodyTracker::_get_class_namev() const */

undefined8 * XRBodyTracker::_get_class_namev(void)

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
LAB_00107d33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107d33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"XRBodyTracker");
      goto LAB_00107d9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"XRBodyTracker");
LAB_00107d9e:
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
LAB_00107e13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107e13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_00107e7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_00107e7e:
  return &_get_class_namev()::_class_name_static;
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



/* XRBodyTracker::get_class() const */

void XRBodyTracker::get_class(void)

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
            if (lVar5 == 0) goto LAB_001080df;
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
LAB_001080df:
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
    if (cVar6 != '\0') goto LAB_00108193;
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
              if (lVar5 == 0) goto LAB_00108243;
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
LAB_00108243:
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
      if (cVar6 != '\0') goto LAB_00108193;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_00108193:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
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
  local_48 = &_LC3;
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
      goto joined_r0x0010843c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010843c:
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
LAB_00108788:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108788;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x001087a6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x001087a6:
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



/* XRTracker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall XRTracker::_get_property_listv(XRTracker *this,List *param_1,bool param_2)

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
  local_78 = "XRTracker";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRTracker";
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
LAB_00108c18:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108c18;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108c35;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108c35:
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
  StringName::StringName((StringName *)&local_78,"XRTracker",false);
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



/* XRPositionalTracker::is_class(String const&) const */

undefined8 __thiscall XRPositionalTracker::is_class(XRPositionalTracker *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00108f6f;
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
LAB_00108f6f:
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
    if (cVar6 != '\0') goto LAB_00109023;
  }
  cVar6 = String::operator==(param_1,"XRPositionalTracker");
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
              if (lVar5 == 0) goto LAB_001090e3;
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
LAB_001090e3:
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
      if (cVar6 != '\0') goto LAB_00109023;
    }
    cVar6 = String::operator==(param_1,"XRTracker");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
        return uVar7;
      }
      goto LAB_0010918c;
    }
  }
LAB_00109023:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010918c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRBodyTracker::is_class(String const&) const */

undefined8 __thiscall XRBodyTracker::is_class(XRBodyTracker *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010920f;
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
LAB_0010920f:
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
    if (cVar5 != '\0') goto LAB_001092c3;
  }
  cVar5 = String::operator==(param_1,"XRBodyTracker");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = XRPositionalTracker::is_class((XRPositionalTracker *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_001092c3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRPositionalTracker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
XRPositionalTracker::_get_property_listv(XRPositionalTracker *this,List *param_1,bool param_2)

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
    XRTracker::_get_property_listv((XRTracker *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "XRPositionalTracker";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRPositionalTracker";
  local_98 = 0;
  local_70 = 0x13;
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
LAB_00109498:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109498;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001094b5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001094b5:
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
  StringName::StringName((StringName *)&local_78,"XRPositionalTracker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      XRTracker::_get_property_listv((XRTracker *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRBodyTracker::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall XRBodyTracker::_get_property_listv(XRBodyTracker *this,List *param_1,bool param_2)

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
    XRPositionalTracker::_get_property_listv((XRPositionalTracker *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "XRBodyTracker";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "XRBodyTracker";
  local_98 = 0;
  local_70 = 0xd;
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
LAB_001098e8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001098e8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00109905;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00109905:
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
  StringName::StringName((StringName *)&local_78,"XRBodyTracker",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      XRPositionalTracker::_get_property_listv((XRPositionalTracker *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* XRPositionalTracker::~XRPositionalTracker() */

void __thiscall XRPositionalTracker::~XRPositionalTracker(XRPositionalTracker *this)

{
  long *plVar1;
  uint uVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  
  *(undefined **)this = &XRTracker::vtable;
  pvVar6 = *(void **)(this + 0x230);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x254) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x250) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x254) = 0;
        *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x238) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x238) + lVar5) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar6 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x230);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while ((ulong)uVar2 << 2 != lVar5);
        *(undefined4 *)(this + 0x254) = 0;
        *(undefined1 (*) [16])(this + 0x240) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00109cba;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x238),false);
  }
LAB_00109cba:
  pvVar6 = *(void **)(this + 0x200);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0x224) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x220) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x224) = 0;
        *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x208) + lVar5) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar5 * 2);
            *(int *)(*(long *)(this + 0x208) + lVar5) = 0;
            if (*(long *)((long)pvVar6 + 0x18) != 0) {
              cVar4 = RefCounted::unreference();
              if (cVar4 != '\0') {
                pOVar3 = *(Object **)((long)pvVar6 + 0x18);
                cVar4 = predelete_handler(pOVar3);
                if (cVar4 != '\0') {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0x200);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x224) = 0;
        *(undefined1 (*) [16])(this + 0x210) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00109d91;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0x208),false);
  }
LAB_00109d91:
  if (*(long *)(this + 0x1e8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1e8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x1e8);
      *(undefined8 *)(this + 0x1e8) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  *(code **)this = Variant::_clear_internal;
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar5 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x1b0) != 0)) {
    StringName::unref();
  }
  *(undefined ***)this = &PTR__initialize_classv_00110520;
  Object::~Object((Object *)this);
  return;
}



/* XRBodyTracker::~XRBodyTracker() */

void __thiscall XRBodyTracker::~XRBodyTracker(XRBodyTracker *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110680;
  XRPositionalTracker::~XRPositionalTracker((XRPositionalTracker *)this);
  return;
}



/* XRBodyTracker::~XRBodyTracker() */

void __thiscall XRBodyTracker::~XRBodyTracker(XRBodyTracker *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00110680;
  XRPositionalTracker::~XRPositionalTracker((XRPositionalTracker *)this);
  operator_delete(this,0x1330);
  return;
}



/* XRPositionalTracker::~XRPositionalTracker() */

void __thiscall XRPositionalTracker::~XRPositionalTracker(XRPositionalTracker *this)

{
  ~XRPositionalTracker(this);
  operator_delete(this,600);
  return;
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



/* godot::details::enum_qualified_name_to_class_info_name(String const&) */

details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  long local_60;
  char local_58 [8];
  long *local_50;
  undefined *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(local_58,SUB81(param_1,0),0x109fbd);
  if ((local_50 != (long *)0x0) && (2 < local_50[-1])) {
    local_60 = 0;
    local_48 = &_LC26;
    local_40 = 1;
    String::parse_latin1((StrRange *)&local_60);
    if (local_50 == (long *)0x0) {
      lVar7 = 0;
      lVar6 = -2;
    }
    else {
      lVar7 = local_50[-1];
      lVar6 = lVar7 + -2;
      if (-1 < lVar6) {
        String::operator+((String *)&local_48,(String *)(local_50 + lVar6));
        String::operator+((String *)this,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        goto LAB_0010a0ad;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar6,lVar7,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  local_60 = 0;
  local_48 = &_LC26;
  local_40 = 1;
  String::parse_latin1((StrRange *)&local_60);
  String::join((Vector *)this);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
LAB_0010a0ad:
  plVar1 = local_50;
  if (local_50 != (long *)0x0) {
    LOCK();
    plVar5 = local_50 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_50 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar7 = local_50[-1];
      local_50 = (long *)0x0;
      if (lVar7 != 0) {
        lVar6 = 0;
        plVar5 = plVar1;
        do {
          if (*plVar5 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar5 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar3 = *plVar5;
              *plVar5 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar7 != lVar6);
      }
      Memory::free_static(plVar1 + -2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GetTypeInfo<BitField<XRBodyTracker::BodyFlags>, void>::get_class_info() */

GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void> * __thiscall
GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void>::get_class_info
          (GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void> *this)

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
  local_48 = "XRBodyTracker::BodyFlags";
  local_40 = 0x18;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x206;
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



/* GetTypeInfo<XRBodyTracker::Joint, void>::get_class_info() */

GetTypeInfo<XRBodyTracker::Joint,void> * __thiscall
GetTypeInfo<XRBodyTracker::Joint,void>::get_class_info(GetTypeInfo<XRBodyTracker::Joint,void> *this)

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
  local_48 = "XRBodyTracker::Joint";
  local_40 = 0x14;
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



/* GetTypeInfo<BitField<XRBodyTracker::JointFlags>, void>::get_class_info() */

GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void> * __thiscall
GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void>::get_class_info
          (GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void> *this)

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
  local_48 = "XRBodyTracker::JointFlags";
  local_40 = 0x19;
  String::parse_latin1((StrRange *)&local_58);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_50,(String *)&local_58);
  StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x206;
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



/* MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x18;
  local_38 = "XRBodyTracker::BodyFlags";
  String::parse_latin1((StrRange *)&local_40);
  godot::details::enum_qualified_name_to_class_info_name((details *)&local_38,(String *)&local_40);
  StringName::StringName((StringName *)&local_48,(String *)&local_38,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x206;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
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
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D, XRBodyTracker::Joint>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Transform3D,XRBodyTracker::Joint>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar6;
  long in_FS_OFFSET;
  undefined8 local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  long local_60;
  ulong local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar6 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_98 = 0;
  if (in_EDX == 0) {
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    GetTypeInfo<XRBodyTracker::Joint,void>::get_class_info
              ((GetTypeInfo<XRBodyTracker::Joint,void> *)&local_68);
    local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
    if (local_90._0_8_ != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      local_90._0_8_ = local_60;
      local_60 = 0;
    }
    if (local_90._8_8_ != local_58) {
      StringName::unref();
      local_90._8_8_ = local_58;
      local_58 = 0;
    }
    lVar5 = local_48;
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
          Memory::free_static((void *)(lVar5 + -0x10),false);
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
    uVar4 = local_90._8_8_;
    uVar3 = local_90._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_90._8_8_;
    local_90 = auVar2 << 0x40;
    *puVar6 = (undefined4)local_98;
    *(undefined8 *)(puVar6 + 2) = uVar3;
    *(undefined8 *)(puVar6 + 4) = uVar4;
    puVar6[6] = (undefined4)local_80;
    *(long *)(puVar6 + 8) = local_78;
    puVar6[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_0010a9e0;
  }
  local_a0 = 0;
  local_60 = 0;
  local_68 = &_LC3;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar6 = 0x12;
  puVar6[6] = 0;
  *(undefined8 *)(puVar6 + 8) = 0;
  *(undefined1 (*) [16])(puVar6 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar6[10] = 6;
LAB_0010a9a7:
    StringName::operator=((StringName *)(puVar6 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar6 + 8),(CowData *)&local_a0);
    puVar6[10] = 6;
    if (puVar6[6] != 0x11) goto LAB_0010a9a7;
    StringName::StringName((StringName *)&local_68,(String *)(puVar6 + 8),false);
    if (*(undefined **)(puVar6 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar6 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_0010a9e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<XRBodyTracker::BodyFlags> >::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<BitField<XRBodyTracker::BodyFlags>>::_gen_argument_type_info(int param_1)

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
    GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void>::get_class_info
              ((GetTypeInfo<BitField<XRBodyTracker::BodyFlags>,void> *)local_48);
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



/* MethodBindT<XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags>
   >::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>::_gen_argument_type_info
          (int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined4 local_58 [2];
  long local_50;
  long local_48;
  undefined4 local_40;
  long local_38;
  undefined4 local_30;
  long local_20;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    GetTypeInfo<XRBodyTracker::Joint,void>::get_class_info
              ((GetTypeInfo<XRBodyTracker::Joint,void> *)local_58);
  }
  else {
    if (in_EDX != 1) goto LAB_0010ac02;
    GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void>::get_class_info
              ((GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void> *)local_58);
  }
  *puVar2 = local_58[0];
  if (*(long *)(puVar2 + 2) != local_50) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
    lVar1 = local_50;
    local_50 = 0;
    *(long *)(puVar2 + 2) = lVar1;
  }
  if (*(long *)(puVar2 + 4) != local_48) {
    StringName::unref();
    lVar1 = local_48;
    local_48 = 0;
    *(long *)(puVar2 + 4) = lVar1;
  }
  puVar2[6] = local_40;
  if (*(long *)(puVar2 + 8) != local_38) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
    lVar1 = local_38;
    local_38 = 0;
    *(long *)(puVar2 + 8) = lVar1;
  }
  puVar2[10] = local_30;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010ac02:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
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
  if (in_EDX != 0) goto LAB_0010ad49;
  local_78 = 0;
  local_68 = &_LC3;
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
LAB_0010ae45:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010ae45;
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
LAB_0010ad49:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<XRBodyTracker::Joint, Transform3D const&>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindT<XRBodyTracker::Joint,Transform3D_const&>::_gen_argument_type_info(int param_1)

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
    GetTypeInfo<XRBodyTracker::Joint,void>::get_class_info
              ((GetTypeInfo<XRBodyTracker::Joint,void> *)&local_68);
    *puVar6 = local_68._0_4_;
    if (*(long *)(puVar6 + 2) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar6 + 2));
      uVar4 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
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
    if (StringName::configured != '\0') {
      goto joined_r0x0010b098;
    }
  }
  else {
    if (in_EDX != 1) goto LAB_0010afc8;
    local_78 = 0;
    local_68 = &_LC3;
    local_80 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x12);
    local_50 = 0;
    local_48 = 0;
    local_60 = (undefined1  [16])0x0;
    if (local_80 == 0) {
LAB_0010b18d:
      local_40 = 6;
      StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010b18d;
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
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
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
    if (StringName::configured != '\0') {
joined_r0x0010b098:
      if (local_60._8_8_ != 0) {
        StringName::unref();
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0010afc8:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<XRBodyTracker::JointFlags>,
   XRBodyTracker::Joint>::_gen_argument_type_info(int) const */

GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void> *
MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>::_gen_argument_type_info
          (int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void> *this;
  long in_FS_OFFSET;
  undefined1 local_70 [16];
  undefined8 local_60;
  long local_58;
  undefined4 local_50;
  undefined4 local_48 [2];
  long local_40;
  long local_38;
  undefined4 local_30;
  long local_28;
  undefined4 local_20;
  long local_10;
  
  this = (GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void> *)
         CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_60 = 0;
    local_58 = 0;
    local_50 = 6;
    local_70 = (undefined1  [16])0x0;
    GetTypeInfo<XRBodyTracker::Joint,void>::get_class_info
              ((GetTypeInfo<XRBodyTracker::Joint,void> *)local_48);
    if (local_70._0_8_ != local_40) {
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      lVar1 = local_40;
      local_40 = 0;
      local_70._0_8_ = lVar1;
    }
    if (local_70._8_8_ != local_38) {
      StringName::unref();
      lVar1 = local_38;
      local_38 = 0;
      local_70._8_8_ = lVar1;
    }
    local_60 = CONCAT44(local_60._4_4_,local_30);
    if (local_58 != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      local_58 = local_28;
      local_28 = 0;
    }
    local_50 = local_20;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
    *(undefined4 *)this = local_48[0];
    *(undefined8 *)(this + 8) = local_70._0_8_;
    *(undefined8 *)(this + 0x10) = local_70._8_8_;
    *(undefined4 *)(this + 0x18) = (undefined4)local_60;
    *(long *)(this + 0x20) = local_58;
    *(undefined4 *)(this + 0x28) = local_50;
  }
  else {
    GetTypeInfo<BitField<XRBodyTracker::JointFlags>,void>::get_class_info(this);
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<XRBodyTracker, bool>(void (XRBodyTracker::*)(bool)) */

MethodBind * create_method_bind<XRBodyTracker,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001107f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRBodyTracker";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<XRBodyTracker, bool>(bool (XRBodyTracker::*)() const) */

MethodBind * create_method_bind<XRBodyTracker,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00110850;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "XRBodyTracker";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<XRBodyTracker, BitField<XRBodyTracker::BodyFlags> >(void
   (XRBodyTracker::*)(BitField<XRBodyTracker::BodyFlags>)) */

MethodBind *
create_method_bind<XRBodyTracker,BitField<XRBodyTracker::BodyFlags>>(_func_void_BitField *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001108b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRBodyTracker";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<XRBodyTracker,
   BitField<XRBodyTracker::BodyFlags>>(BitField<XRBodyTracker::BodyFlags> (XRBodyTracker::*)()
   const) */

MethodBind *
create_method_bind<XRBodyTracker,BitField<XRBodyTracker::BodyFlags>>(_func_BitField *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00110910;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "XRBodyTracker";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<XRBodyTracker, XRBodyTracker::Joint,
   BitField<XRBodyTracker::JointFlags> >(void (XRBodyTracker::*)(XRBodyTracker::Joint,
   BitField<XRBodyTracker::JointFlags>)) */

MethodBind *
create_method_bind<XRBodyTracker,XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>
          (_func_void_Joint_BitField *param_1)

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
  *(_func_void_Joint_BitField **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110970;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "XRBodyTracker";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<XRBodyTracker, BitField<XRBodyTracker::JointFlags>,
   XRBodyTracker::Joint>(BitField<XRBodyTracker::JointFlags>
   (XRBodyTracker::*)(XRBodyTracker::Joint) const) */

MethodBind *
create_method_bind<XRBodyTracker,BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>
          (_func_BitField_Joint *param_1)

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
  *(_func_BitField_Joint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_001109d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRBodyTracker";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<XRBodyTracker, XRBodyTracker::Joint, Transform3D const&>(void
   (XRBodyTracker::*)(XRBodyTracker::Joint, Transform3D const&)) */

MethodBind *
create_method_bind<XRBodyTracker,XRBodyTracker::Joint,Transform3D_const&>
          (_func_void_Joint_Transform3D_ptr *param_1)

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
  *(_func_void_Joint_Transform3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110a30;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "XRBodyTracker";
  local_30 = 0xd;
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



/* MethodBind* create_method_bind<XRBodyTracker, Transform3D, XRBodyTracker::Joint>(Transform3D
   (XRBodyTracker::*)(XRBodyTracker::Joint) const) */

MethodBind *
create_method_bind<XRBodyTracker,Transform3D,XRBodyTracker::Joint>(_func_Transform3D_Joint *param_1)

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
  *(_func_Transform3D_Joint **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00110a90;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "XRBodyTracker";
  local_30 = 0xd;
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



/* XRBodyTracker::_bind_methods() [clone .cold] */

void XRBodyTracker::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* XRBodyTracker::_initialize_classv() */

void XRBodyTracker::_initialize_classv(void)

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
    if (XRPositionalTracker::initialize_class()::initialized == '\0') {
      if (XRTracker::initialize_class()::initialized == '\0') {
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
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if ((StringName::configured != '\0') && (local_60 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((code *)PTR__bind_methods_00114010 != RefCounted::_bind_methods) {
            RefCounted::_bind_methods();
          }
          RefCounted::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "RefCounted";
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "XRTracker";
        local_70 = 0;
        local_50 = 9;
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
        XRTracker::_bind_methods();
        XRTracker::initialize_class()::initialized = '\x01';
      }
      local_58 = "XRTracker";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "XRPositionalTracker";
      local_70 = 0;
      local_50 = 0x13;
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
      if ((code *)PTR__bind_methods_00114008 != XRTracker::_bind_methods) {
        XRPositionalTracker::_bind_methods();
      }
      XRPositionalTracker::initialize_class()::initialized = '\x01';
    }
    local_58 = "XRPositionalTracker";
    local_68 = 0;
    local_50 = 0x13;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "XRBodyTracker";
    local_70 = 0;
    local_50 = 0xd;
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



/* WARNING: Removing unreachable block (ram,0x0010c388) */
/* WARNING: Removing unreachable block (ram,0x0010c51d) */
/* WARNING: Removing unreachable block (ram,0x0010c529) */
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



/* MethodBindTRC<Transform3D, XRBodyTracker::Joint>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<Transform3D,XRBodyTracker::Joint>::validated_call
          (MethodBindTRC<Transform3D,XRBodyTracker::Joint> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  long *plVar3;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar3 = *(long **)(param_1 + 0x118);
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar3 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c6ca;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar2 = *(code **)(this + 0x58);
  if (((ulong)pcVar2 & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar2)(&local_68,param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  puVar1 = *(undefined8 **)(param_3 + 8);
  *puVar1 = local_68;
  puVar1[1] = uStack_60;
  puVar1[2] = local_58;
  puVar1[3] = uStack_50;
  puVar1[4] = local_48;
  puVar1[5] = uStack_40;
LAB_0010c6ca:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D, XRBodyTracker::Joint>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Transform3D,XRBodyTracker::Joint>::ptrcall
          (MethodBindTRC<Transform3D,XRBodyTracker::Joint> *this,Object *param_1,void **param_2,
          void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_78 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0010c8d7;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
                    /* WARNING: Load size is inaccurate */
  (*pcVar1)(&local_68,param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = local_68;
  *(undefined8 *)((long)param_3 + 8) = uStack_60;
  *(undefined8 *)((long)param_3 + 0x10) = local_58;
  *(undefined8 *)((long)param_3 + 0x18) = uStack_50;
  *(undefined8 *)((long)param_3 + 0x20) = local_48;
  *(undefined8 *)((long)param_3 + 0x28) = uStack_40;
LAB_0010c8d7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRBodyTracker::Joint, Transform3D const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<XRBodyTracker::Joint,Transform3D_const&>::validated_call
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
      goto LAB_0010cc51;
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
                    /* WARNING: Could not recover jumptable at 0x0010cad7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined8 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010cc51:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRBodyTracker::Joint, Transform3D const&>::ptrcall(Object*, void const**, void*)
   const */

void MethodBindT<XRBodyTracker::Joint,Transform3D_const&>::ptrcall
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
      goto LAB_0010ce39;
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
                    /* WARNING: Could not recover jumptable at 0x0010ccc2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0010ce39:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<XRBodyTracker::JointFlags>, XRBodyTracker::Joint>::validated_call(Object*,
   Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>::validated_call
          (MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint> *this,
          Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010ce89;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),*(undefined4 *)(*param_2 + 8));
  *(undefined8 *)(param_3 + 8) = uVar2;
LAB_0010ce89:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<XRBodyTracker::JointFlags>, XRBodyTracker::Joint>::ptrcall(Object*, void
   const**, void*) const */

void __thiscall
MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>::ptrcall
          (MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint> *this,
          Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long *plVar3;
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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_0010d068;
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
  uVar2 = (*pcVar1)(param_1 + *(long *)(this + 0x60),**param_2);
  *(undefined8 *)param_3 = uVar2;
LAB_0010d068:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags> >::validated_call(Object*,
   Variant const**, Variant*) const */

void MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>::validated_call
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
      goto LAB_0010d3e1;
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
                    /* WARNING: Could not recover jumptable at 0x0010d267. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8),*(undefined8 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_0010d3e1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags> >::ptrcall(Object*, void
   const**, void*) const */

void MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>::ptrcall
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
      goto LAB_0010d5d1;
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
                    /* WARNING: Could not recover jumptable at 0x0010d455. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3,
               **(undefined8 **)((long)param_3 + 8));
    return;
  }
LAB_0010d5d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::validated_call(Object*, Variant const**,
   Variant*) const */

void __thiscall
MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::validated_call
          (MethodBindTRC<BitField<XRBodyTracker::BodyFlags>> *this,Object *param_1,Variant **param_2
          ,Variant *param_3)

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
      goto LAB_0010d622;
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
LAB_0010d622:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::ptrcall
          (MethodBindTRC<BitField<XRBodyTracker::BodyFlags>> *this,Object *param_1,void **param_2,
          void *param_3)

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
      goto LAB_0010d7d1;
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
LAB_0010d7d1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<XRBodyTracker::BodyFlags> >::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<BitField<XRBodyTracker::BodyFlags>>::validated_call
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
      goto LAB_0010db11;
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
                    /* WARNING: Could not recover jumptable at 0x0010d99d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010db11:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<BitField<XRBodyTracker::BodyFlags> >::ptrcall(Object*, void const**, void*) const */

void MethodBindT<BitField<XRBodyTracker::BodyFlags>>::ptrcall
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
      goto LAB_0010dcf1;
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
                    /* WARNING: Could not recover jumptable at 0x0010db7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0010dcf1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
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
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010de50;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_0010de50:
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
      goto LAB_0010e0b2;
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
LAB_0010e0b2:
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
      goto LAB_0010e261;
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
LAB_0010e261:
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
      goto LAB_0010e5a1;
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
                    /* WARNING: Could not recover jumptable at 0x0010e42d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0010e5a1:
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
      goto LAB_0010e789;
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
                    /* WARNING: Could not recover jumptable at 0x0010e612. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_0010e789:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  long lVar3;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
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
  Variant *pVVar4;
  
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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar2 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010e850;
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
      lVar3 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,lVar3);
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
LAB_0010e850:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<BitField<XRBodyTracker::JointFlags>, XRBodyTracker::Joint>::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  undefined4 uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0010eb80;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ebc0;
LAB_0010ebb0:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar7 = *(long *)(pVVar11 + -8);
      if ((int)lVar7 < (int)(in_R8D ^ 1)) {
LAB_0010ebc0:
        uVar5 = 4;
        goto LAB_0010eb75;
      }
      if (in_R8D == 1) goto LAB_0010ebb0;
      lVar9 = (long)((int)lVar7 + -1);
      if (lVar7 <= lVar9) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar7,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pVVar11 = pVVar11 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar12 & 1) != 0) {
      pVVar12 = *(Variant **)(pVVar12 + *(long *)((long)plVar10 + (long)pVVar1) + -1);
    }
    cVar4 = Variant::can_convert_strict(*(undefined4 *)pVVar11,2);
    uVar3 = _LC143;
    if (cVar4 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar3;
    }
    uVar6 = Variant::operator_cast_to_long(pVVar11);
    lVar7 = (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),uVar6 & 0xffffffff);
    Variant::Variant((Variant *)local_48,lVar7);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_48[0];
    *(undefined8 *)(param_1 + 8) = local_40;
    *(undefined8 *)(param_1 + 0x10) = uStack_38;
  }
  else {
    uVar5 = 3;
LAB_0010eb75:
    *in_R9 = uVar5;
    in_R9[2] = 1;
  }
LAB_0010eb80:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D, XRBodyTracker::Joint>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<Transform3D,XRBodyTracker::Joint>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined4 in_register_00000014;
  long *plVar10;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar11;
  Variant *pVVar12;
  long in_FS_OFFSET;
  long local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined4 local_88 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  Transform3D local_68 [56];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_98,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_98 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_a0 = 0;
      local_90 = 0x35;
      String::parse_latin1((StrRange *)&local_a0);
      vformat<StringName>((StringName *)&local_98,(StrRange *)&local_a0,&local_a8);
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_98,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      goto LAB_0010ef10;
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0010ef60;
LAB_0010ef50:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0010ef60:
        uVar6 = 4;
        goto LAB_0010ef05;
      }
      if (in_R8D == 1) goto LAB_0010ef50;
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
    uVar4 = _LC143;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    uVar7 = Variant::operator_cast_to_long(pVVar11);
    (*(code *)pVVar12)(local_68,(Variant *)((long)plVar10 + (long)pVVar1),uVar7 & 0xffffffff);
    Variant::Variant((Variant *)local_88,local_68);
    if (Variant::needs_deinit[*(int *)param_1] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_1 = local_88[0];
    *(undefined8 *)(param_1 + 8) = local_80;
    *(undefined8 *)(param_1 + 0x10) = uStack_78;
  }
  else {
    uVar6 = 3;
LAB_0010ef05:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0010ef10:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* void call_with_variant_args_dv<__UnexistingClass, XRBodyTracker::Joint, Transform3D
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(XRBodyTracker::Joint, Transform3D
   const&), Variant const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,XRBodyTracker::Joint,Transform3D_const&>
               (__UnexistingClass *param_1,_func_void_Joint_Transform3D_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  ulong uVar8;
  undefined4 in_register_0000000c;
  long *plVar9;
  long lVar10;
  Variant *this;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_78 [56];
  long local_40;
  
  plVar9 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_0010f2a0;
      this = (Variant *)*plVar9;
LAB_0010f2ed:
      puVar13 = (undefined4 *)plVar9[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0010f2a0:
        uVar7 = 4;
        goto LAB_0010f2a5;
      }
      if (uVar11 == 0) {
        lVar10 = (long)(iVar12 + -2);
        if (lVar2 <= lVar10) goto LAB_0010f308;
        this = (Variant *)(lVar1 + lVar10 * 0x18);
      }
      else {
        this = (Variant *)*plVar9;
        if (uVar11 == 2) goto LAB_0010f2ed;
      }
      lVar10 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar10) {
LAB_0010f308:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar10 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Joint_Transform3D_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,0x12);
    uVar4 = _LC145;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_Transform3D(aVStack_78);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC143;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    uVar8 = Variant::operator_cast_to_long(this);
    (*param_2)((char)(param_1 + (long)param_3),(Transform3D *)(uVar8 & 0xffffffff));
  }
  else {
    uVar7 = 3;
LAB_0010f2a5:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<XRBodyTracker::Joint, Transform3D const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<XRBodyTracker::Joint,Transform3D_const&>::call
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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x154,
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
      goto LAB_0010f446;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,XRBodyTracker::Joint,Transform3D_const&>
            (p_Var4,(_func_void_Joint_Transform3D_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010f446:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, XRBodyTracker::Joint,
   BitField<XRBodyTracker::JointFlags> >(__UnexistingClass*, void
   (__UnexistingClass::*)(XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags>), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>
               (__UnexistingClass *param_1,_func_void_Joint_BitField *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  Variant *this;
  uint uVar10;
  int iVar11;
  Variant *this_00;
  long in_stack_00000008;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  uVar10 = (uint)param_5;
  if (2 < uVar10) {
    uVar6 = 3;
    goto LAB_0010f77d;
  }
  lVar7 = *(long *)(in_stack_00000008 + 8);
  iVar5 = 2 - uVar10;
  if (lVar7 == 0) {
    if (iVar5 == 0) {
      this = (Variant *)*plVar8;
LAB_0010f7ad:
      this_00 = (Variant *)plVar8[1];
      goto LAB_0010f6e5;
    }
  }
  else {
    lVar1 = *(long *)(lVar7 + -8);
    iVar11 = (int)lVar1;
    if (iVar5 <= iVar11) {
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar1 <= lVar9) goto LAB_0010f7c8;
        this = (Variant *)(lVar7 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0010f7ad;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar5));
      if (lVar1 <= lVar9) {
LAB_0010f7c8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar1,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      this_00 = (Variant *)(lVar7 + lVar9 * 0x18);
LAB_0010f6e5:
      *(undefined4 *)param_6 = 0;
      if (((ulong)param_2 & 1) != 0) {
        param_2 = *(_func_void_Joint_BitField **)(param_2 + *(long *)(param_1 + (long)param_3) + -1)
        ;
      }
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this_00,2);
      uVar3 = _LC147;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      Variant::operator_cast_to_long(this_00);
      cVar4 = Variant::can_convert_strict(*(undefined4 *)this,2);
      uVar3 = _LC143;
      if (cVar4 == '\0') {
        *(undefined4 *)param_6 = 2;
        *(undefined8 *)(param_6 + 4) = uVar3;
      }
      lVar7 = Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0010f76b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*param_2)((char)(param_1 + (long)param_3),(char)lVar7);
      return;
    }
  }
  uVar6 = 4;
LAB_0010f77d:
  *(undefined4 *)param_6 = uVar6;
  *(undefined4 *)(param_6 + 8) = 2;
  return;
}



/* MethodBindT<XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags> >::call(Object*, Variant
   const**, int, Callable::CallError&) const */

Object * MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>::call
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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x154,
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
      goto LAB_0010f866;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>
            (p_Var4,(_func_void_Joint_BitField *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,
             in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010f866:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, BitField<XRBodyTracker::BodyFlags>
   >(__UnexistingClass*, void (__UnexistingClass::*)(BitField<XRBodyTracker::BodyFlags>), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,BitField<XRBodyTracker::BodyFlags>>
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
    goto LAB_0010fb6d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010fbd0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010fbd0:
      uVar6 = 4;
LAB_0010fb6d:
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
      goto LAB_0010faeb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010faeb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_BitField **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC143;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0010fb47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<BitField<XRBodyTracker::BodyFlags> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<BitField<XRBodyTracker::BodyFlags>>::call
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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x154,
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
      goto LAB_0010fc36;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,BitField<XRBodyTracker::BodyFlags>>
            (p_Var4,(_func_void_BitField *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0010fc36:
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
    goto LAB_0010ff3d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0010ffa0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0010ffa0:
      uVar6 = 4;
LAB_0010ff3d:
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
      goto LAB_0010febb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0010febb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC148;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0010ff17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC142,"./core/object/method_bind.h",0x154,
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
      goto LAB_00110006;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var4,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00110006:
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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Transform3D, XRBodyTracker::Joint>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform3D,XRBodyTracker::Joint>::~MethodBindTRC
          (MethodBindTRC<Transform3D,XRBodyTracker::Joint> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<XRBodyTracker::Joint, Transform3D const&>::~MethodBindT() */

void __thiscall
MethodBindT<XRBodyTracker::Joint,Transform3D_const&>::~MethodBindT
          (MethodBindT<XRBodyTracker::Joint,Transform3D_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BitField<XRBodyTracker::JointFlags>, XRBodyTracker::Joint>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint>::~MethodBindTRC
          (MethodBindTRC<BitField<XRBodyTracker::JointFlags>,XRBodyTracker::Joint> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<XRBodyTracker::Joint, BitField<XRBodyTracker::JointFlags> >::~MethodBindT() */

void __thiscall
MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>>::~MethodBindT
          (MethodBindT<XRBodyTracker::Joint,BitField<XRBodyTracker::JointFlags>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<BitField<XRBodyTracker::BodyFlags>>::~MethodBindTRC
          (MethodBindTRC<BitField<XRBodyTracker::BodyFlags>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<BitField<XRBodyTracker::BodyFlags> >::~MethodBindT() */

void __thiscall
MethodBindT<BitField<XRBodyTracker::BodyFlags>>::~MethodBindT
          (MethodBindT<BitField<XRBodyTracker::BodyFlags>> *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* XRBodyTracker::~XRBodyTracker() */

void __thiscall XRBodyTracker::~XRBodyTracker(XRBodyTracker *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* XRPositionalTracker::~XRPositionalTracker() */

void __thiscall XRPositionalTracker::~XRPositionalTracker(XRPositionalTracker *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.