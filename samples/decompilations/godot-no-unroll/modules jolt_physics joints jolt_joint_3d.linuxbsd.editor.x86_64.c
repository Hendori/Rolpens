
/* JoltJoint3D::_shift_reference_frames(Vector3 const&, Vector3 const&, Transform3D&, Transform3D&)
    */

void __thiscall
JoltJoint3D::_shift_reference_frames
          (JoltJoint3D *this,Vector3 *param_1,Vector3 *param_2,Transform3D *param_3,
          Transform3D *param_4)

{
  float fVar1;
  long lVar2;
  code *pcVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  long in_FS_OFFSET;
  float fVar7;
  float fVar8;
  float fVar10;
  undefined1 auVar11 [12];
  float local_f4;
  undefined8 local_e8;
  float local_e0;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  float local_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float local_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float local_88;
  undefined1 local_78 [8];
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  undefined4 uStack_54;
  undefined8 uStack_50;
  long local_40;
  undefined8 uVar9;
  
  local_f4 = *(float *)(this + 100);
  uVar9 = *(undefined8 *)(this + 0x5c);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = *(undefined8 *)(this + 0x8c);
  local_e0 = *(float *)(this + 0x94);
  lVar2 = *(long *)(this + 0x20);
  if (lVar2 != 0) {
    local_c0 = *(float *)(lVar2 + 0x88);
    local_c8 = *(undefined8 *)(lVar2 + 0x80);
    local_f4 = local_f4 * local_c0;
    pcVar3 = *(code **)(**(long **)(lVar2 + 0x90) + 0x18);
    fVar8 = (float)uVar9 * (float)local_c8;
    fVar10 = (float)((ulong)uVar9 >> 0x20) * (float)((ulong)local_c8 >> 0x20);
    uVar9 = CONCAT44(fVar10,fVar8);
    if (pcVar3 != JPH::Shape::GetCenterOfMass) {
      auVar11 = (*pcVar3)();
      local_f4 = local_f4 - auVar11._8_4_;
      uVar9 = CONCAT44(fVar10 - auVar11._4_4_,fVar8 - auVar11._0_4_);
    }
  }
  lVar2 = *(long *)(this + 0x28);
  if (lVar2 != 0) {
    local_b8 = *(undefined8 *)(lVar2 + 0x80);
    local_b0 = *(float *)(lVar2 + 0x88);
    local_e8 = CONCAT44((float)((ulong)local_e8 >> 0x20) * (float)((ulong)local_b8 >> 0x20),
                        (float)local_e8 * (float)local_b8);
    local_e0 = local_b0 * local_e0;
    pcVar3 = *(code **)(**(long **)(lVar2 + 0x90) + 0x18);
    if (pcVar3 != JPH::Shape::GetCenterOfMass) {
      auVar11 = (*pcVar3)();
      local_e8 = CONCAT44((float)((ulong)local_e8 >> 0x20) - auVar11._4_4_,
                          (float)local_e8 - auVar11._0_4_);
      local_e0 = local_e0 - auVar11._8_4_;
    }
  }
  _local_78 = ZEXT416((uint)_LC0);
  local_58 = 1.0;
  local_68 = _LC0;
  fStack_64 = 0.0;
  fStack_60 = 0.0;
  fStack_5c = 0.0;
  Basis::set_euler((Transform3D *)local_78,param_2,5);
  fVar7 = *(float *)(this + 0x38);
  fVar4 = *(float *)(this + 0x3c);
  fVar5 = *(float *)(this + 0x44);
  fVar8 = *(float *)(this + 0x58);
  fVar6 = *(float *)(this + 0x48);
  local_88 = *(float *)(this + 0x50) * (float)uStack_70 + *(float *)(this + 0x54) * fStack_64 +
             local_58 * fVar8;
  fVar10 = *(float *)(this + 0x4c);
  fVar1 = *(float *)(this + 0x40);
  local_a8 = fVar1 * fStack_60 + fVar4 * uStack_70._4_4_ + fVar7 * (float)local_78._0_4_;
  fStack_a4 = fVar1 * fStack_5c + fVar4 * local_68 + fVar7 * (float)local_78._4_4_;
  fStack_a0 = fVar1 * local_58 + fVar4 * fStack_64 + fVar7 * (float)uStack_70;
  fStack_9c = fVar10 * fStack_60 + fVar6 * uStack_70._4_4_ + fVar5 * (float)local_78._0_4_;
  fVar1 = *(float *)(param_1 + 8);
  local_98 = local_68 * fVar6 + fVar5 * (float)local_78._4_4_ + fStack_5c * fVar10;
  fStack_94 = fStack_64 * fVar6 + fVar5 * (float)uStack_70 + local_58 * fVar10;
  fStack_90 = uStack_70._4_4_ * *(float *)(this + 0x54) +
              *(float *)(this + 0x50) * (float)local_78._0_4_ + fStack_60 * fVar8;
  fStack_8c = local_68 * *(float *)(this + 0x54) + *(float *)(this + 0x50) * (float)local_78._4_4_ +
              fStack_5c * fVar8;
  fVar10 = (float)*(undefined8 *)param_1;
  fVar7 = (float)((ulong)*(undefined8 *)param_1 >> 0x20);
  local_d8 = CONCAT44((float)((ulong)uVar9 >> 0x20) -
                      (fVar10 * (float)((ulong)*(undefined8 *)(this + 0x40) >> 0x20) +
                       fVar7 * *(float *)(this + 0x48) +
                      fVar1 * (float)((ulong)*(undefined8 *)(this + 0x48) >> 0x20)),
                      (float)uVar9 -
                      (fVar10 * (float)*(undefined8 *)(this + 0x38) +
                       fVar7 * *(float *)(this + 0x3c) + fVar1 * (float)*(undefined8 *)(this + 0x40)
                      ));
  local_d0 = local_f4 -
             (fVar7 * *(float *)(this + 0x54) + *(float *)(this + 0x50) * fVar10 + fVar1 * fVar8);
  Transform3D::Transform3D((Transform3D *)local_78,(Basis *)&local_a8,(Vector3 *)&local_d8);
  *(undefined1 (*) [8])param_3 = local_78;
  *(undefined8 *)(param_3 + 8) = uStack_70;
  *(ulong *)(param_3 + 0x10) = CONCAT44(fStack_64,local_68);
  *(ulong *)(param_3 + 0x18) = CONCAT44(fStack_5c,fStack_60);
  *(ulong *)(param_3 + 0x20) = CONCAT44(uStack_54,local_58);
  *(undefined8 *)(param_3 + 0x28) = uStack_50;
  Transform3D::Transform3D((Transform3D *)local_78,(Basis *)(this + 0x68),(Vector3 *)&local_e8);
  *(undefined1 (*) [8])param_4 = local_78;
  *(undefined8 *)(param_4 + 8) = uStack_70;
  *(ulong *)(param_4 + 0x10) = CONCAT44(fStack_64,local_68);
  *(ulong *)(param_4 + 0x18) = CONCAT44(fStack_5c,fStack_60);
  *(ulong *)(param_4 + 0x20) = CONCAT44(uStack_54,local_58);
  *(undefined8 *)(param_4 + 0x28) = uStack_50;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltJoint3D::_wake_up_bodies() */

void __thiscall JoltJoint3D::_wake_up_bodies(JoltJoint3D *this)

{
  if (*(long *)(this + 0x20) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x20),0));
  }
  if (*(long *)(this + 0x28) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x28),0));
    return;
  }
  return;
}



/* JoltJoint3D::_update_enabled() */

void __thiscall JoltJoint3D::_update_enabled(JoltJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    *(JoltJoint3D *)(*(long *)(this + 0x18) + 0x1a) = this[8];
  }
  return;
}



/* JoltJoint3D::_update_iterations() */

void __thiscall JoltJoint3D::_update_iterations(JoltJoint3D *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 != 0) {
    *(char *)(lVar1 + 0x18) = (char)*(undefined4 *)(this + 0xc);
    *(char *)(lVar1 + 0x19) = (char)*(undefined4 *)(this + 0x10);
  }
  return;
}



/* JoltJoint3D::_enabled_changed() */

void __thiscall JoltJoint3D::_enabled_changed(JoltJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    *(JoltJoint3D *)(*(long *)(this + 0x18) + 0x1a) = this[8];
  }
  if (*(long *)(this + 0x20) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x20),0));
  }
  if (*(long *)(this + 0x28) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x28),0));
    return;
  }
  return;
}



/* JoltJoint3D::_iterations_changed() */

void __thiscall JoltJoint3D::_iterations_changed(JoltJoint3D *this)

{
  long lVar1;
  
  lVar1 = *(long *)(this + 0x18);
  if (lVar1 != 0) {
    *(char *)(lVar1 + 0x18) = (char)*(undefined4 *)(this + 0xc);
    *(char *)(lVar1 + 0x19) = (char)*(undefined4 *)(this + 0x10);
  }
  if (*(long *)(this + 0x20) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x20),0));
  }
  if (*(long *)(this + 0x28) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x28),0));
    return;
  }
  return;
}



/* JoltJoint3D::JoltJoint3D(JoltJoint3D const&, JoltBody3D*, JoltBody3D*, Transform3D const&,
   Transform3D const&) */

void __thiscall
JoltJoint3D::JoltJoint3D
          (JoltJoint3D *this,JoltJoint3D *param_1,JoltBody3D *param_2,JoltBody3D *param_3,
          Transform3D *param_4,Transform3D *param_5)

{
  undefined2 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char cVar16;
  long in_FS_OFFSET;
  
  uVar4 = *(undefined8 *)param_4;
  uVar5 = *(undefined8 *)(param_4 + 8);
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  uVar7 = *(undefined8 *)(param_4 + 0x18);
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined2 *)(param_1 + 8);
  *(undefined ***)this = &PTR__JoltJoint3D_00101958;
  uVar8 = *(undefined8 *)(param_4 + 0x20);
  uVar9 = *(undefined8 *)(param_4 + 0x28);
  uVar10 = *(undefined8 *)param_5;
  uVar11 = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(this + 0xc) = 0;
  uVar12 = *(undefined8 *)(param_5 + 0x10);
  uVar13 = *(undefined8 *)(param_5 + 0x18);
  *(undefined2 *)(this + 8) = uVar1;
  uVar14 = *(undefined8 *)(param_5 + 0x20);
  uVar15 = *(undefined8 *)(param_5 + 0x28);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(this + 0x18) = 0;
  *(JoltBody3D **)(this + 0x20) = param_2;
  *(JoltBody3D **)(this + 0x28) = param_3;
  *(undefined8 *)(this + 0x30) = uVar3;
  *(undefined8 *)(this + 0x38) = uVar4;
  *(undefined8 *)(this + 0x40) = uVar5;
  *(undefined8 *)(this + 0x48) = uVar6;
  *(undefined8 *)(this + 0x50) = uVar7;
  *(undefined8 *)(this + 0x58) = uVar8;
  *(undefined8 *)(this + 0x60) = uVar9;
  *(undefined8 *)(this + 0x68) = uVar10;
  *(undefined8 *)(this + 0x70) = uVar11;
  *(undefined8 *)(this + 0x78) = uVar12;
  *(undefined8 *)(this + 0x80) = uVar13;
  *(undefined8 *)(this + 0x88) = uVar14;
  *(undefined8 *)(this + 0x90) = uVar15;
  if (param_2 != (JoltBody3D *)0x0) {
    JoltBody3D::add_joint((JoltJoint3D *)param_2);
    param_3 = *(JoltBody3D **)(this + 0x28);
  }
  if (param_3 != (JoltBody3D *)0x0) {
    JoltBody3D::add_joint((JoltJoint3D *)param_3);
    if (*(long *)(this + 0x28) != 0) goto LAB_00100629;
  }
  cVar16 = JoltProjectSettings::use_joint_world_node_a();
  if (cVar16 != '\0') {
    uVar3 = *(undefined8 *)(this + 0x20);
    uVar7 = *(undefined8 *)(this + 0x38);
    uVar8 = *(undefined8 *)(this + 0x40);
    uVar4 = *(undefined8 *)(this + 0x48);
    uVar5 = *(undefined8 *)(this + 0x50);
    *(undefined8 *)(this + 0x20) = *(undefined8 *)(this + 0x28);
    *(undefined8 *)(this + 0x28) = uVar3;
    uVar3 = *(undefined8 *)(this + 0x58);
    uVar6 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(this + 0x68);
    *(undefined8 *)(this + 0x40) = *(undefined8 *)(this + 0x70);
    *(undefined8 *)(this + 0x48) = *(undefined8 *)(this + 0x78);
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(this + 0x80);
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x88);
    *(undefined8 *)(this + 0x60) = *(undefined8 *)(this + 0x90);
    *(undefined8 *)(this + 0x68) = uVar7;
    *(undefined8 *)(this + 0x70) = uVar8;
    *(undefined8 *)(this + 0x78) = uVar4;
    *(undefined8 *)(this + 0x80) = uVar5;
    *(undefined8 *)(this + 0x88) = uVar3;
    *(undefined8 *)(this + 0x90) = uVar6;
  }
LAB_00100629:
  if (lVar2 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltJoint3D::set_enabled(bool) */

void __thiscall JoltJoint3D::set_enabled(JoltJoint3D *this,bool param_1)

{
  if (this[8] == (JoltJoint3D)param_1) {
    return;
  }
  this[8] = (JoltJoint3D)param_1;
  if (*(long *)(this + 0x18) != 0) {
    *(bool *)(*(long *)(this + 0x18) + 0x1a) = param_1;
  }
  if (*(long *)(this + 0x20) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x20),0));
  }
  if (*(long *)(this + 0x28) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x28),0));
    return;
  }
  return;
}



/* JoltJoint3D::get_solver_priority() const */

undefined8 JoltJoint3D::get_solver_priority(void)

{
  return 1;
}



/* JoltJoint3D::set_solver_velocity_iterations(int) */

void __thiscall JoltJoint3D::set_solver_velocity_iterations(JoltJoint3D *this,int param_1)

{
  long lVar1;
  
  if (*(int *)(this + 0xc) == param_1) {
    return;
  }
  lVar1 = *(long *)(this + 0x18);
  *(int *)(this + 0xc) = param_1;
  if (lVar1 != 0) {
    *(char *)(lVar1 + 0x18) = (char)param_1;
    *(char *)(lVar1 + 0x19) = (char)*(undefined4 *)(this + 0x10);
  }
  if (*(long *)(this + 0x20) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x20),0));
  }
  if (*(long *)(this + 0x28) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x28),0));
    return;
  }
  return;
}



/* JoltJoint3D::set_solver_position_iterations(int) */

void __thiscall JoltJoint3D::set_solver_position_iterations(JoltJoint3D *this,int param_1)

{
  undefined4 uVar1;
  long lVar2;
  
  if (*(int *)(this + 0x10) == param_1) {
    return;
  }
  lVar2 = *(long *)(this + 0x18);
  *(int *)(this + 0x10) = param_1;
  if (lVar2 != 0) {
    uVar1 = *(undefined4 *)(this + 0xc);
    *(char *)(lVar2 + 0x19) = (char)param_1;
    *(char *)(lVar2 + 0x18) = (char)uVar1;
  }
  if (*(long *)(this + 0x20) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x20),0));
  }
  if (*(long *)(this + 0x28) != 0) {
    JoltBody3D::set_is_sleeping(SUB81(*(long *)(this + 0x28),0));
    return;
  }
  return;
}



/* JoltJoint3D::set_collision_disabled(bool) */

void __thiscall JoltJoint3D::set_collision_disabled(JoltJoint3D *this,bool param_1)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
  this[9] = (JoltJoint3D)param_1;
  if (*(long *)(this + 0x20) == 0) {
    return;
  }
  if (*(long *)(this + 0x28) != 0) {
    plVar1 = (long *)PhysicsServer3D::get_singleton();
    if (this[9] == (JoltJoint3D)0x0) {
      (**(code **)(*plVar1 + 0x478))();
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x478);
    }
    else {
      (**(code **)(*plVar1 + 0x470))
                (plVar1,*(undefined8 *)(*(long *)(this + 0x20) + 0x18),
                 *(undefined8 *)(*(long *)(this + 0x28) + 0x18));
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x470);
    }
                    /* WARNING: Could not recover jumptable at 0x00100831. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              (plVar1,*(undefined8 *)(*(long *)(this + 0x28) + 0x18),
               *(undefined8 *)(*(long *)(this + 0x20) + 0x18));
    return;
  }
  return;
}



/* JoltJoint3D::_bodies_to_string() const */

void JoltJoint3D::_bodies_to_string(void)

{
  long *plVar1;
  long lVar2;
  long in_RSI;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 0x28) == 0) {
    local_58 = 0;
    local_40 = 7;
    local_48 = "<World>";
    String::parse_latin1((StrRange *)&local_58);
  }
  else {
    JoltObject3D::to_string();
  }
  if (*(long *)(in_RSI + 0x20) == 0) {
    local_60 = 0;
    local_48 = "<unknown>";
    local_40 = 9;
    String::parse_latin1((StrRange *)&local_60);
  }
  else {
    JoltObject3D::to_string();
  }
  local_50 = 0;
  local_48 = "\'%s\' and \'%s\'";
  local_40 = 0xd;
  String::parse_latin1((StrRange *)&local_50);
  vformat<String,String>();
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltJoint3D::get_space() const */

long __thiscall JoltJoint3D::get_space(JoltJoint3D *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  lVar2 = *(long *)(this + 0x28);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x20) == 0) {
    if (lVar2 != 0) {
      lVar5 = *(long *)(lVar2 + 0x28);
      goto LAB_00100a9e;
    }
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 0x20) + 0x28);
    lVar5 = lVar3;
    if (lVar2 == 0) goto LAB_00100a9e;
    lVar5 = *(long *)(lVar2 + 0x28);
    if ((lVar3 != 0) && (lVar5 != 0)) {
      if (lVar3 == lVar5) goto LAB_00100a9e;
      _bodies_to_string();
      local_38 = 
      "Joint was found to connect bodies in different physics spaces. This joint will effectively be disabled. This joint connects %s."
      ;
      local_30 = 0x7f;
      local_40 = 0;
      String::parse_latin1((StrRange *)&local_40);
      vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
      _err_print_error("get_space","modules/jolt_physics/joints/jolt_joint_3d.cpp",0x99,
                       "Condition \"space_a != space_b\" is true. Returning: nullptr",&local_38,0,0)
      ;
      pcVar4 = local_38;
      if (local_38 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
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
    }
  }
  lVar5 = 0;
LAB_00100a9e:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return lVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltJoint3D::destroy() [clone .part.0] */

void __thiscall JoltJoint3D::destroy(JoltJoint3D *this)

{
  long *plVar1;
  long *plVar2;
  JoltJoint3D *pJVar3;
  
  pJVar3 = (JoltJoint3D *)get_space(this);
  if (pJVar3 != (JoltJoint3D *)0x0) {
    JoltSpace3D::remove_joint(pJVar3);
  }
  plVar2 = *(long **)(this + 0x18);
  if (plVar2 != (long *)0x0) {
    LOCK();
    plVar1 = plVar2 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      (**(code **)(*plVar2 + 8))();
      *(undefined8 *)(this + 0x18) = 0;
    }
    else {
      *(undefined8 *)(this + 0x18) = 0;
    }
  }
  return;
}



/* JoltJoint3D::destroy() */

void __thiscall JoltJoint3D::destroy(JoltJoint3D *this)

{
  if (*(long *)(this + 0x18) != 0) {
    destroy(this);
    return;
  }
  return;
}



/* JoltJoint3D::~JoltJoint3D() */

void __thiscall JoltJoint3D::~JoltJoint3D(JoltJoint3D *this)

{
  long *plVar1;
  long *plVar2;
  
  *(undefined ***)this = &PTR__JoltJoint3D_00101958;
  if (*(JoltJoint3D **)(this + 0x20) != (JoltJoint3D *)0x0) {
    JoltBody3D::remove_joint(*(JoltJoint3D **)(this + 0x20));
  }
  if (*(JoltJoint3D **)(this + 0x28) != (JoltJoint3D *)0x0) {
    JoltBody3D::remove_joint(*(JoltJoint3D **)(this + 0x28));
  }
  if (*(long *)(this + 0x18) != 0) {
    destroy(this);
    plVar2 = *(long **)(this + 0x18);
    if (plVar2 != (long *)0x0) {
      LOCK();
      plVar1 = plVar2 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00100cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar2 + 8))();
        return;
      }
    }
  }
  return;
}



/* JoltJoint3D::~JoltJoint3D() */

void __thiscall JoltJoint3D::~JoltJoint3D(JoltJoint3D *this)

{
  ~JoltJoint3D(this);
  operator_delete(this,0x98);
  return;
}



/* JoltJoint3D::set_solver_priority(int) */

void __thiscall JoltJoint3D::set_solver_priority(JoltJoint3D *this,int param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 1) {
    _bodies_to_string();
    local_38 = 
    "Joint solver priority is not supported when using Jolt Physics. Any such value will be ignored. This joint connects %s."
    ;
    local_40 = 0;
    local_30 = 0x77;
    String::parse_latin1((StrRange *)&local_40);
    vformat<String>(&local_38,(StrRange *)&local_40,&local_48);
    _err_print_error("set_solver_priority","modules/jolt_physics/joints/jolt_joint_3d.cpp",0xb5,
                     &local_38,0,1);
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
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltJoint3D::get_type() const */

undefined8 JoltJoint3D::get_type(void)

{
  return 5;
}



/* JoltJoint3D::rebuild() */

void JoltJoint3D::rebuild(void)

{
  return;
}



/* JPH::Shape::GetCenterOfMass() const */

undefined1  [16] JPH::Shape::GetCenterOfMass(void)

{
  return ZEXT816(0);
}



/* WARNING: Removing unreachable block (ram,0x00101040) */
/* WARNING: Removing unreachable block (ram,0x00101170) */
/* WARNING: Removing unreachable block (ram,0x001012e9) */
/* WARNING: Removing unreachable block (ram,0x0010117c) */
/* WARNING: Removing unreachable block (ram,0x00101186) */
/* WARNING: Removing unreachable block (ram,0x001012cb) */
/* WARNING: Removing unreachable block (ram,0x00101192) */
/* WARNING: Removing unreachable block (ram,0x0010119c) */
/* WARNING: Removing unreachable block (ram,0x001012ad) */
/* WARNING: Removing unreachable block (ram,0x001011a8) */
/* WARNING: Removing unreachable block (ram,0x001011b2) */
/* WARNING: Removing unreachable block (ram,0x0010128f) */
/* WARNING: Removing unreachable block (ram,0x001011be) */
/* WARNING: Removing unreachable block (ram,0x001011c8) */
/* WARNING: Removing unreachable block (ram,0x00101271) */
/* WARNING: Removing unreachable block (ram,0x001011d4) */
/* WARNING: Removing unreachable block (ram,0x001011de) */
/* WARNING: Removing unreachable block (ram,0x00101253) */
/* WARNING: Removing unreachable block (ram,0x001011e6) */
/* WARNING: Removing unreachable block (ram,0x001011f0) */
/* WARNING: Removing unreachable block (ram,0x00101238) */
/* WARNING: Removing unreachable block (ram,0x001011f8) */
/* WARNING: Removing unreachable block (ram,0x0010120e) */
/* WARNING: Removing unreachable block (ram,0x0010121a) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d8 [8];
  undefined8 local_d0 [9];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,param_2);
  *param_1 = local_d0[0];
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00101468) */
/* WARNING: Removing unreachable block (ram,0x00101598) */
/* WARNING: Removing unreachable block (ram,0x00101760) */
/* WARNING: Removing unreachable block (ram,0x001015a4) */
/* WARNING: Removing unreachable block (ram,0x001015ae) */
/* WARNING: Removing unreachable block (ram,0x00101740) */
/* WARNING: Removing unreachable block (ram,0x001015ba) */
/* WARNING: Removing unreachable block (ram,0x001015c4) */
/* WARNING: Removing unreachable block (ram,0x00101720) */
/* WARNING: Removing unreachable block (ram,0x001015d0) */
/* WARNING: Removing unreachable block (ram,0x001015da) */
/* WARNING: Removing unreachable block (ram,0x00101700) */
/* WARNING: Removing unreachable block (ram,0x001015e6) */
/* WARNING: Removing unreachable block (ram,0x001015f0) */
/* WARNING: Removing unreachable block (ram,0x001016e0) */
/* WARNING: Removing unreachable block (ram,0x001015fc) */
/* WARNING: Removing unreachable block (ram,0x00101606) */
/* WARNING: Removing unreachable block (ram,0x001016c0) */
/* WARNING: Removing unreachable block (ram,0x00101612) */
/* WARNING: Removing unreachable block (ram,0x0010161c) */
/* WARNING: Removing unreachable block (ram,0x001016a0) */
/* WARNING: Removing unreachable block (ram,0x00101624) */
/* WARNING: Removing unreachable block (ram,0x0010163a) */
/* WARNING: Removing unreachable block (ram,0x00101646) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String_conflict *param_3)

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



/* JoltJoint3D::_shift_reference_frames(Vector3 const&, Vector3 const&, Transform3D&, Transform3D&)
    */

void JoltJoint3D::_GLOBAL__sub_I__shift_reference_frames(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC17;
  }
  return;
}


