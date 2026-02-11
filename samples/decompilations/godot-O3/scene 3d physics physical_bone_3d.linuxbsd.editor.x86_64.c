
/* PhysicalBone3D::JointData::_set(StringName const&, Variant const&, RID) */

undefined8 PhysicalBone3D::JointData::_set(void)

{
  return 0;
}



/* PhysicalBone3D::JointData::_get(StringName const&, Variant&) const */

undefined8 PhysicalBone3D::JointData::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* PhysicalBone3D::JointData::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void PhysicalBone3D::JointData::_get_property_list(List *param_1)

{
  return;
}



/* PhysicalBone3D::get_linear_velocity() const */

undefined1  [16] __thiscall PhysicalBone3D::get_linear_velocity(PhysicalBone3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x6ec);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::get_angular_velocity() const */

undefined1  [16] __thiscall PhysicalBone3D::get_angular_velocity(PhysicalBone3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x6f8);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::is_using_custom_integrator() */

PhysicalBone3D __thiscall PhysicalBone3D::is_using_custom_integrator(PhysicalBone3D *this)

{
  return this[0x709];
}



/* PhysicalBone3D::get_joint_type() const */

undefined8 __thiscall PhysicalBone3D::get_joint_type(PhysicalBone3D *this)

{
  undefined8 uVar1;
  
  if (*(undefined8 **)(this + 0x628) != (undefined8 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x001000f3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)**(undefined8 **)(this + 0x628))();
    return uVar1;
  }
  return 0;
}



/* PhysicalBone3D::get_joint_offset() const */

PhysicalBone3D * __thiscall PhysicalBone3D::get_joint_offset(PhysicalBone3D *this)

{
  return this + 0x630;
}



/* PhysicalBone3D::get_body_offset() const */

PhysicalBone3D * __thiscall PhysicalBone3D::get_body_offset(PhysicalBone3D *this)

{
  return this + 0x670;
}



/* PhysicalBone3D::get_simulate_physics() */

PhysicalBone3D __thiscall PhysicalBone3D::get_simulate_physics(PhysicalBone3D *this)

{
  return this[0x6d0];
}



/* PhysicalBone3D::is_simulating_physics() */

PhysicalBone3D __thiscall PhysicalBone3D::is_simulating_physics(PhysicalBone3D *this)

{
  return this[0x6d1];
}



/* PhysicalBone3D::get_mass() const */

undefined4 __thiscall PhysicalBone3D::get_mass(PhysicalBone3D *this)

{
  return *(undefined4 *)(this + 0x6e4);
}



/* PhysicalBone3D::get_friction() const */

undefined4 __thiscall PhysicalBone3D::get_friction(PhysicalBone3D *this)

{
  return *(undefined4 *)(this + 0x6e8);
}



/* PhysicalBone3D::get_bounce() const */

undefined4 __thiscall PhysicalBone3D::get_bounce(PhysicalBone3D *this)

{
  return *(undefined4 *)(this + 0x6e0);
}



/* PhysicalBone3D::get_gravity_scale() const */

undefined4 __thiscall PhysicalBone3D::get_gravity_scale(PhysicalBone3D *this)

{
  return *(undefined4 *)(this + 0x704);
}



/* PhysicalBone3D::get_linear_damp_mode() const */

undefined4 __thiscall PhysicalBone3D::get_linear_damp_mode(PhysicalBone3D *this)

{
  return *(undefined4 *)(this + 0x70c);
}



/* PhysicalBone3D::get_angular_damp_mode() const */

undefined4 __thiscall PhysicalBone3D::get_angular_damp_mode(PhysicalBone3D *this)

{
  return *(undefined4 *)(this + 0x710);
}



/* PhysicalBone3D::get_linear_damp() const */

undefined4 __thiscall PhysicalBone3D::get_linear_damp(PhysicalBone3D *this)

{
  return *(undefined4 *)(this + 0x714);
}



/* PhysicalBone3D::get_angular_damp() const */

undefined4 __thiscall PhysicalBone3D::get_angular_damp(PhysicalBone3D *this)

{
  return *(undefined4 *)(this + 0x718);
}



/* PhysicalBone3D::is_able_to_sleep() const */

PhysicalBone3D __thiscall PhysicalBone3D::is_able_to_sleep(PhysicalBone3D *this)

{
  return this[0x708];
}



/* PhysicalBone3D::apply_central_impulse(Vector3 const&) */

void __thiscall PhysicalBone3D::apply_central_impulse(PhysicalBone3D *this,Vector3 *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100202. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3f0))(plVar1,*(undefined8 *)(this + 0x538),param_1);
  return;
}



/* PhysicalBone3D::apply_impulse(Vector3 const&, Vector3 const&) */

void __thiscall
PhysicalBone3D::apply_impulse(PhysicalBone3D *this,Vector3 *param_1,Vector3 *param_2)

{
  long *plVar1;
  
  plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00100245. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x3f8))(plVar1,*(undefined8 *)(this + 0x538),param_1,param_2);
  return;
}



/* PhysicalBone3D::set_linear_velocity(Vector3 const&) */

void __thiscall PhysicalBone3D::set_linear_velocity(PhysicalBone3D *this,Vector3 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x6ec) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x6f4) = *(undefined4 *)(param_1 + 8);
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3e0);
  Variant::Variant((Variant *)local_48,(Vector3 *)(this + 0x6ec));
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),1,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_angular_velocity(Vector3 const&) */

void __thiscall PhysicalBone3D::set_angular_velocity(PhysicalBone3D *this,Vector3 *param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x6f8) = *(undefined8 *)param_1;
  *(undefined4 *)(this + 0x700) = *(undefined4 *)(param_1 + 8);
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3e0);
  Variant::Variant((Variant *)local_48,(Vector3 *)(this + 0x6f8));
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),2,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::PinJointData::_set(StringName const&, Variant const&, RID) */

undefined8 __thiscall
PhysicalBone3D::PinJointData::_set
          (PinJointData *this,StringName *param_1,Variant *param_2,long param_4)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long *plVar4;
  float fVar5;
  
  if (param_4 == 0) {
    cVar1 = operator==("joint_constraints/bias",param_1);
    if (cVar1 != '\0') {
      fVar5 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 8) = fVar5;
      return 1;
    }
    cVar1 = operator==("joint_constraints/damping",param_1);
    if (cVar1 != '\0') {
      fVar5 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0xc) = fVar5;
      return 1;
    }
  }
  else {
    plVar4 = (long *)PhysicsServer3D::get_singleton();
    iVar2 = (**(code **)(*plVar4 + 0x600))(plVar4,param_4);
    cVar1 = operator==("joint_constraints/bias",param_1);
    if (cVar1 != '\0') {
      fVar5 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 8) = fVar5;
      if (iVar2 != 0) {
        return 1;
      }
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar4 + 0x630))(*(undefined4 *)(this + 8),plVar4,param_4,0);
      return 1;
    }
    cVar1 = operator==("joint_constraints/damping",param_1);
    if (cVar1 != '\0') {
      fVar5 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0xc) = fVar5;
      if (iVar2 != 0) {
        return 1;
      }
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar4 + 0x630))(*(undefined4 *)(this + 0xc),plVar4,param_4,1);
      return 1;
    }
    cVar1 = iVar2 == 0;
  }
  uVar3 = operator==("joint_constraints/impulse_clamp",param_1);
  if ((char)uVar3 != '\0') {
    fVar5 = Variant::operator_cast_to_float(param_2);
    *(float *)(this + 0x10) = fVar5;
    if (cVar1 != '\0') {
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar4 + 0x630))(*(undefined4 *)(this + 0x10),plVar4,param_4,2);
    }
    return 1;
  }
  return uVar3;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhysicalBone3D::ConeJointData::_set(StringName const&, Variant const&, RID) */

undefined8 __thiscall
PhysicalBone3D::ConeJointData::_set
          (ConeJointData *this,StringName *param_1,Variant *param_2,long param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  
  if (param_4 == 0) {
    cVar1 = operator==("joint_constraints/swing_span",param_1);
    if (cVar1 != '\0') {
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 8) = fVar6 * __LC4;
      return 1;
    }
    cVar1 = operator==("joint_constraints/twist_span",param_1);
    if (cVar1 != '\0') {
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0xc) = fVar6 * __LC4;
      return 1;
    }
  }
  else {
    plVar4 = (long *)PhysicsServer3D::get_singleton();
    iVar3 = (**(code **)(*plVar4 + 0x600))(plVar4,param_4);
    cVar1 = operator==("joint_constraints/swing_span",param_1);
    if (cVar1 != '\0') {
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 8) = fVar6 * __LC4;
      if (iVar3 != 3) {
        return 1;
      }
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar4 + 0x6b0))(*(undefined4 *)(this + 8),plVar4,param_4,0);
      return 1;
    }
    cVar1 = operator==("joint_constraints/twist_span",param_1);
    if (cVar1 != '\0') {
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0xc) = fVar6 * __LC4;
      if (iVar3 != 3) {
        return 1;
      }
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar4 + 0x6b0))(*(undefined4 *)(this + 0xc),plVar4,param_4,1);
      return 1;
    }
    cVar1 = iVar3 == 3;
  }
  cVar2 = operator==("joint_constraints/bias",param_1);
  if (cVar2 == '\0') {
    cVar2 = operator==("joint_constraints/softness",param_1);
    if (cVar2 == '\0') {
      uVar5 = operator==("joint_constraints/relaxation",param_1);
      if ((char)uVar5 == '\0') {
        return uVar5;
      }
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0x18) = fVar6;
      if (cVar1 != '\0') {
        plVar4 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar4 + 0x6b0))(*(undefined4 *)(this + 0x18),plVar4,param_4,4);
      }
    }
    else {
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0x14) = fVar6;
      if (cVar1 != '\0') {
        plVar4 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar4 + 0x6b0))(*(undefined4 *)(this + 0x14),plVar4,param_4,3);
      }
    }
  }
  else {
    fVar6 = Variant::operator_cast_to_float(param_2);
    *(float *)(this + 0x10) = fVar6;
    if (cVar1 != '\0') {
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar4 + 0x6b0))(*(undefined4 *)(this + 0x10),plVar4,param_4,2);
    }
  }
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhysicalBone3D::SliderJointData::_set(StringName const&, Variant const&, RID) */

undefined8 __thiscall
PhysicalBone3D::SliderJointData::_set
          (SliderJointData *this,StringName *param_1,Variant *param_2,long param_4)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long *plVar4;
  undefined8 uVar5;
  float fVar6;
  
  if (param_4 == 0) {
    cVar1 = operator==("joint_constraints/linear_limit_upper",param_1);
    if (cVar1 != '\0') {
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 8) = fVar6;
      return 1;
    }
    cVar1 = operator==("joint_constraints/linear_limit_lower",param_1);
    if (cVar1 != '\0') {
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0xc) = fVar6;
      return 1;
    }
  }
  else {
    plVar4 = (long *)PhysicsServer3D::get_singleton();
    iVar3 = (**(code **)(*plVar4 + 0x600))(plVar4,param_4);
    cVar1 = operator==("joint_constraints/linear_limit_upper",param_1);
    if (cVar1 != '\0') {
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 8) = fVar6;
      if (iVar3 != 2) {
        return 1;
      }
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar4 + 0x698))(*(undefined4 *)(this + 8),plVar4,param_4,0);
      return 1;
    }
    cVar1 = operator==("joint_constraints/linear_limit_lower",param_1);
    if (cVar1 != '\0') {
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0xc) = fVar6;
      if (iVar3 != 2) {
        return 1;
      }
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar4 + 0x698))(*(undefined4 *)(this + 0xc),plVar4,param_4,1);
      return 1;
    }
    cVar1 = iVar3 == 2;
  }
  cVar2 = operator==("joint_constraints/linear_limit_softness",param_1);
  if (cVar2 == '\0') {
    cVar2 = operator==("joint_constraints/linear_limit_restitution",param_1);
    if (cVar2 == '\0') {
      cVar2 = operator==("joint_constraints/linear_limit_damping",param_1);
      if (cVar2 == '\0') {
        cVar2 = operator==("joint_constraints/angular_limit_upper",param_1);
        if (cVar2 == '\0') {
          cVar2 = operator==("joint_constraints/angular_limit_lower",param_1);
          if (cVar2 == '\0') {
            cVar2 = operator==("joint_constraints/angular_limit_softness",param_1);
            if (cVar2 == '\0') {
              cVar2 = operator==("joint_constraints/angular_limit_restitution",param_1);
              if (cVar2 == '\0') {
                uVar5 = operator==("joint_constraints/angular_limit_damping",param_1);
                if ((char)uVar5 == '\0') {
                  return uVar5;
                }
                fVar6 = Variant::operator_cast_to_float(param_2);
                *(float *)(this + 0x2c) = fVar6;
                if (cVar1 == '\0') {
                  return 1;
                }
                plVar4 = (long *)PhysicsServer3D::get_singleton();
                (**(code **)(*plVar4 + 0x698))(*(undefined4 *)(this + 0x2c),plVar4,param_4,0xf);
                return 1;
              }
              fVar6 = Variant::operator_cast_to_float(param_2);
              *(float *)(this + 0x28) = fVar6;
            }
            else {
              fVar6 = Variant::operator_cast_to_float(param_2);
              *(float *)(this + 0x24) = fVar6;
            }
            if (cVar1 != '\0') {
              plVar4 = (long *)PhysicsServer3D::get_singleton();
              (**(code **)(*plVar4 + 0x698))(*(undefined4 *)(this + 0x24),plVar4,param_4,0xd);
            }
          }
          else {
            fVar6 = Variant::operator_cast_to_float(param_2);
            *(float *)(this + 0x20) = fVar6 * __LC4;
            if (cVar1 != '\0') {
              plVar4 = (long *)PhysicsServer3D::get_singleton();
              (**(code **)(*plVar4 + 0x698))(*(undefined4 *)(this + 0x20),plVar4,param_4,0xc);
            }
          }
        }
        else {
          fVar6 = Variant::operator_cast_to_float(param_2);
          *(float *)(this + 0x1c) = fVar6 * __LC4;
          if (cVar1 != '\0') {
            plVar4 = (long *)PhysicsServer3D::get_singleton();
            (**(code **)(*plVar4 + 0x698))(*(undefined4 *)(this + 0x1c),plVar4,param_4,0xb);
          }
        }
      }
      else {
        fVar6 = Variant::operator_cast_to_float(param_2);
        *(float *)(this + 0x18) = fVar6;
        if (cVar1 != '\0') {
          plVar4 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar4 + 0x698))(*(undefined4 *)(this + 0x14),plVar4,param_4,4);
        }
      }
    }
    else {
      fVar6 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0x14) = fVar6;
      if (cVar1 != '\0') {
        plVar4 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar4 + 0x698))(*(undefined4 *)(this + 0x14),plVar4,param_4,3);
      }
    }
  }
  else {
    fVar6 = Variant::operator_cast_to_float(param_2);
    *(float *)(this + 0x10) = fVar6;
    if (cVar1 != '\0') {
      plVar4 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar4 + 0x698))(*(undefined4 *)(this + 0x10),plVar4,param_4,2);
    }
  }
  return 1;
}



/* PhysicalBone3D::set_gravity_scale(float) */

void __thiscall PhysicalBone3D::set_gravity_scale(PhysicalBone3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(float *)(this + 0x704) = param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3c8);
  Variant::Variant((Variant *)local_48,*(float *)(this + 0x704));
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),5,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhysicalBone3D::HingeJointData::_set(StringName const&, Variant const&, RID) */

undefined8 __thiscall
PhysicalBone3D::HingeJointData::_set
          (HingeJointData *this,StringName *param_1,Variant *param_2,long param_4)

{
  char cVar1;
  HingeJointData HVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  float fVar7;
  
  if (param_4 == 0) {
    cVar1 = operator==("joint_constraints/angular_limit_enabled",param_1);
    if (cVar1 != '\0') {
      HVar2 = (HingeJointData)Variant::operator_cast_to_bool(param_2);
      this[8] = HVar2;
      return 1;
    }
    cVar1 = operator==("joint_constraints/angular_limit_upper",param_1);
    if (cVar1 != '\0') {
      fVar7 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0xc) = fVar7 * __LC4;
      return 1;
    }
  }
  else {
    plVar5 = (long *)PhysicsServer3D::get_singleton();
    iVar4 = (**(code **)(*plVar5 + 0x600))(plVar5,param_4);
    cVar1 = operator==("joint_constraints/angular_limit_enabled",param_1);
    if (cVar1 != '\0') {
      HVar2 = (HingeJointData)Variant::operator_cast_to_bool(param_2);
      this[8] = HVar2;
      if (iVar4 != 1) {
        return 1;
      }
      plVar5 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar5 + 0x680))(plVar5,param_4,0,this[8]);
      return 1;
    }
    cVar1 = operator==("joint_constraints/angular_limit_upper",param_1);
    if (cVar1 != '\0') {
      fVar7 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0xc) = fVar7 * __LC4;
      if (iVar4 != 1) {
        return 1;
      }
      plVar5 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar5 + 0x670))(*(undefined4 *)(this + 0xc),plVar5,param_4,1);
      return 1;
    }
    cVar1 = iVar4 == 1;
  }
  cVar3 = operator==("joint_constraints/angular_limit_lower",param_1);
  if (cVar3 == '\0') {
    cVar3 = operator==("joint_constraints/angular_limit_bias",param_1);
    if (cVar3 == '\0') {
      cVar3 = operator==("joint_constraints/angular_limit_softness",param_1);
      if (cVar3 == '\0') {
        uVar6 = operator==("joint_constraints/angular_limit_relaxation",param_1);
        if ((char)uVar6 == '\0') {
          return uVar6;
        }
        fVar7 = Variant::operator_cast_to_float(param_2);
        *(float *)(this + 0x1c) = fVar7;
        if (cVar1 != '\0') {
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x670))(*(undefined4 *)(this + 0x1c),plVar5,param_4,5);
        }
      }
      else {
        fVar7 = Variant::operator_cast_to_float(param_2);
        *(float *)(this + 0x18) = fVar7;
        if (cVar1 != '\0') {
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x670))(*(undefined4 *)(this + 0x18),plVar5,param_4,4);
        }
      }
    }
    else {
      fVar7 = Variant::operator_cast_to_float(param_2);
      *(float *)(this + 0x14) = fVar7;
      if (cVar1 != '\0') {
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x670))(*(undefined4 *)(this + 0x14),plVar5,param_4,3);
      }
    }
  }
  else {
    fVar7 = Variant::operator_cast_to_float(param_2);
    *(float *)(this + 0x10) = fVar7 * __LC4;
    if (cVar1 != '\0') {
      plVar5 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar5 + 0x670))(*(undefined4 *)(this + 0x10),plVar5,param_4,2);
    }
  }
  return 1;
}



/* PhysicalBone3D::set_can_sleep(bool) */

void __thiscall PhysicalBone3D::set_can_sleep(PhysicalBone3D *this,bool param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  this[0x708] = (PhysicalBone3D)param_1;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3e0);
  Variant::Variant((Variant *)local_48,param_1);
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),4,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_mass(float) */

void __thiscall PhysicalBone3D::set_mass(PhysicalBone3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 <= 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_mass","scene/3d/physics/physical_bone_3d.cpp",0x4a6,
                       "Condition \"p_mass <= 0\" is true.",0,0);
      return;
    }
  }
  else {
    *(float *)(this + 0x6e4) = param_1;
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0x3c8);
    Variant::Variant((Variant *)local_48,*(float *)(this + 0x6e4));
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),2,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_friction(float) */

void __thiscall PhysicalBone3D::set_friction(PhysicalBone3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0.0) || (_LC25 < param_1)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_friction","scene/3d/physics/physical_bone_3d.cpp",0x4b0,
                       "Condition \"p_friction < 0 || p_friction > 1\" is true.",0,0);
      return;
    }
  }
  else {
    *(float *)(this + 0x6e8) = param_1;
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0x3c8);
    Variant::Variant((Variant *)local_48,*(float *)(this + 0x6e8));
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),1,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_bounce(float) */

void __thiscall PhysicalBone3D::set_bounce(PhysicalBone3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 < 0.0) || (_LC25 < param_1)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_bounce","scene/3d/physics/physical_bone_3d.cpp",0x4bb,
                       "Condition \"p_bounce < 0 || p_bounce > 1\" is true.",0,0);
      return;
    }
  }
  else {
    *(float *)(this + 0x6e0) = param_1;
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0x3c8);
    Variant::Variant((Variant *)local_48,*(float *)(this + 0x6e0));
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),0,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_linear_damp(float) */

void __thiscall PhysicalBone3D::set_linear_damp(PhysicalBone3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_linear_damp","scene/3d/physics/physical_bone_3d.cpp",0x4e1,
                       "Condition \"p_linear_damp < 0\" is true.",0,0);
      return;
    }
  }
  else {
    *(float *)(this + 0x714) = param_1;
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0x3c8);
    Variant::Variant((Variant *)local_48,*(float *)(this + 0x714));
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),8,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_angular_damp(float) */

void __thiscall PhysicalBone3D::set_angular_damp(PhysicalBone3D *this,float param_1)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 < 0.0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_angular_damp","scene/3d/physics/physical_bone_3d.cpp",0x4ec,
                       "Condition \"p_angular_damp < 0\" is true.",0,0);
      return;
    }
  }
  else {
    *(float *)(this + 0x718) = param_1;
    plVar2 = (long *)PhysicsServer3D::get_singleton();
    pcVar1 = *(code **)(*plVar2 + 0x3c8);
    Variant::Variant((Variant *)local_48,*(float *)(this + 0x718));
    (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),9,local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_linear_damp_mode(PhysicalBone3D::DampMode) */

void __thiscall PhysicalBone3D::set_linear_damp_mode(PhysicalBone3D *this,undefined4 param_2)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x70c) = param_2;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3c8);
  Variant::Variant((Variant *)local_48,*(int *)(this + 0x70c));
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),6,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_angular_damp_mode(PhysicalBone3D::DampMode) */

void __thiscall PhysicalBone3D::set_angular_damp_mode(PhysicalBone3D *this,undefined4 param_2)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0x710) = param_2;
  plVar2 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar2 + 0x3c8);
  Variant::Variant((Variant *)local_48,*(int *)(this + 0x710));
  (*pcVar1)(plVar2,*(undefined8 *)(this + 0x538),7,local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::get_joint_rotation() const */

void __thiscall PhysicalBone3D::get_joint_rotation(PhysicalBone3D *this)

{
  long in_FS_OFFSET;
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    Basis::get_euler_normalized(this + 0x630,2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::get_global_gizmo_transform() const */

void PhysicalBone3D::get_global_gizmo_transform(void)

{
  long in_RSI;
  Transform3D *in_RDI;
  long in_FS_OFFSET;
  Transform3D aTStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RSI + 0x622) == '\0') {
    Node3D::get_global_transform();
  }
  else {
    Node3D::get_global_transform();
    Transform3D::operator*(in_RDI,aTStack_58);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::get_local_gizmo_transform() const */

void PhysicalBone3D::get_local_gizmo_transform(void)

{
  long in_RSI;
  Transform3D *in_RDI;
  long in_FS_OFFSET;
  Transform3D aTStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(char *)(in_RSI + 0x622) == '\0') {
    Node3D::get_transform();
  }
  else {
    Node3D::get_transform();
    Transform3D::operator*(in_RDI,aTStack_58);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_use_custom_integrator(bool) */

void __thiscall PhysicalBone3D::set_use_custom_integrator(PhysicalBone3D *this,bool param_1)

{
  long *plVar1;
  
  if (this[0x709] != (PhysicalBone3D)param_1) {
    this[0x709] = (PhysicalBone3D)param_1;
    plVar1 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00101721. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x4a8))(plVar1,*(undefined8 *)(this + 0x538),param_1);
    return;
  }
  return;
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



/* PhysicalBone3D::PinJointData::_get(StringName const&, Variant&) const */

undefined8 __thiscall
PhysicalBone3D::PinJointData::_get(PinJointData *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = operator==("joint_constraints/bias",param_1);
  if (cVar1 == '\0') {
    cVar1 = operator==("joint_constraints/damping",param_1);
    if (cVar1 == '\0') {
      uVar2 = operator==("joint_constraints/impulse_clamp",param_1);
      if ((char)uVar2 == '\0') goto LAB_00101a4c;
      Variant::Variant((Variant *)local_38,*(float *)(this + 0x10));
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_2 = local_38[0];
      *(undefined8 *)(param_2 + 8) = local_30;
      *(undefined8 *)(param_2 + 0x10) = uStack_28;
    }
    else {
      Variant::Variant((Variant *)local_38,*(float *)(this + 0xc));
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_2 = local_38[0];
      *(undefined8 *)(param_2 + 8) = local_30;
      *(undefined8 *)(param_2 + 0x10) = uStack_28;
    }
  }
  else {
    Variant::Variant((Variant *)local_38,*(float *)(this + 8));
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  uVar2 = 1;
LAB_00101a4c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::ConeJointData::_get(StringName const&, Variant&) const */

undefined8 __thiscall
PhysicalBone3D::ConeJointData::_get(ConeJointData *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  int local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = operator==("joint_constraints/swing_span",param_1);
  if (cVar1 == '\0') {
    cVar1 = operator==("joint_constraints/twist_span",param_1);
    if (cVar1 == '\0') {
      cVar1 = operator==("joint_constraints/bias",param_1);
      if (cVar1 == '\0') {
        cVar1 = operator==("joint_constraints/softness",param_1);
        if (cVar1 == '\0') {
          uVar2 = operator==("joint_constraints/relaxation",param_1);
          if ((char)uVar2 == '\0') goto LAB_00101ba4;
          Variant::Variant((Variant *)local_38,*(float *)(this + 0x18));
          Variant::operator=(param_2,(Variant *)local_38);
          if (Variant::needs_deinit[local_38[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          Variant::Variant((Variant *)local_38,*(float *)(this + 0x14));
          if (Variant::needs_deinit[*(int *)param_2] != '\0') {
            Variant::_clear_internal();
          }
          *(int *)param_2 = local_38[0];
          *(undefined8 *)(param_2 + 8) = local_30;
          *(undefined8 *)(param_2 + 0x10) = uStack_28;
        }
      }
      else {
        Variant::Variant((Variant *)local_38,*(float *)(this + 0x10));
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
      }
    }
    else {
      Variant::Variant((Variant *)local_38,_LC44 * *(float *)(this + 0xc));
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = local_38[0];
      *(undefined8 *)(param_2 + 8) = local_30;
      *(undefined8 *)(param_2 + 0x10) = uStack_28;
    }
  }
  else {
    Variant::Variant((Variant *)local_38,_LC44 * *(float *)(this + 8));
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  uVar2 = 1;
LAB_00101ba4:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::HingeJointData::_get(StringName const&, Variant&) const */

undefined8 __thiscall
PhysicalBone3D::HingeJointData::_get(HingeJointData *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  float fVar3;
  int local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = operator==("joint_constraints/angular_limit_enabled",param_1);
  if (cVar1 == '\0') {
    cVar1 = operator==("joint_constraints/angular_limit_upper",param_1);
    if (cVar1 == '\0') {
      cVar1 = operator==("joint_constraints/angular_limit_lower",param_1);
      if (cVar1 == '\0') {
        cVar1 = operator==("joint_constraints/angular_limit_bias",param_1);
        if (cVar1 == '\0') {
          cVar1 = operator==("joint_constraints/angular_limit_softness",param_1);
          if (cVar1 == '\0') {
            uVar2 = operator==("joint_constraints/angular_limit_relaxation",param_1);
            if ((char)uVar2 == '\0') goto LAB_00101dcb;
            fVar3 = *(float *)(this + 0x1c);
          }
          else {
            fVar3 = *(float *)(this + 0x18);
          }
          Variant::Variant((Variant *)local_38,fVar3);
          Variant::operator=(param_2,(Variant *)local_38);
          if (Variant::needs_deinit[local_38[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          Variant::Variant((Variant *)local_38,*(float *)(this + 0x14));
          if (Variant::needs_deinit[*(int *)param_2] != '\0') {
            Variant::_clear_internal();
          }
          *(int *)param_2 = local_38[0];
          *(undefined8 *)(param_2 + 8) = local_30;
          *(undefined8 *)(param_2 + 0x10) = uStack_28;
        }
      }
      else {
        Variant::Variant((Variant *)local_38,_LC44 * *(float *)(this + 0x10));
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
      }
    }
    else {
      Variant::Variant((Variant *)local_38,_LC44 * *(float *)(this + 0xc));
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = local_38[0];
      *(undefined8 *)(param_2 + 8) = local_30;
      *(undefined8 *)(param_2 + 0x10) = uStack_28;
    }
  }
  else {
    Variant::Variant((Variant *)local_38,(bool)this[8]);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  uVar2 = 1;
LAB_00101dcb:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::SliderJointData::_get(StringName const&, Variant&) const */

undefined8 __thiscall
PhysicalBone3D::SliderJointData::_get(SliderJointData *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  float fVar3;
  int local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = operator==("joint_constraints/linear_limit_upper",param_1);
  if (cVar1 == '\0') {
    cVar1 = operator==("joint_constraints/linear_limit_lower",param_1);
    if (cVar1 == '\0') {
      cVar1 = operator==("joint_constraints/linear_limit_softness",param_1);
      if (cVar1 == '\0') {
        cVar1 = operator==("joint_constraints/linear_limit_restitution",param_1);
        if (cVar1 == '\0') {
          cVar1 = operator==("joint_constraints/linear_limit_damping",param_1);
          if (cVar1 == '\0') {
            cVar1 = operator==("joint_constraints/angular_limit_upper",param_1);
            if (cVar1 == '\0') {
              cVar1 = operator==("joint_constraints/angular_limit_lower",param_1);
              if (cVar1 == '\0') {
                cVar1 = operator==("joint_constraints/angular_limit_softness",param_1);
                if (cVar1 == '\0') {
                  cVar1 = operator==("joint_constraints/angular_limit_restitution",param_1);
                  if (cVar1 == '\0') {
                    uVar2 = operator==("joint_constraints/angular_limit_damping",param_1);
                    if ((char)uVar2 == '\0') goto LAB_0010200c;
                    fVar3 = *(float *)(this + 0x2c);
                  }
                  else {
                    fVar3 = *(float *)(this + 0x28);
                  }
                }
                else {
                  fVar3 = *(float *)(this + 0x24);
                }
              }
              else {
                fVar3 = _LC44 * *(float *)(this + 0x20);
              }
            }
            else {
              fVar3 = _LC44 * *(float *)(this + 0x1c);
            }
          }
          else {
            fVar3 = *(float *)(this + 0x18);
          }
        }
        else {
          fVar3 = *(float *)(this + 0x14);
        }
        Variant::Variant((Variant *)local_38,fVar3);
        Variant::operator=(param_2,(Variant *)local_38);
        if (Variant::needs_deinit[local_38[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        Variant::Variant((Variant *)local_38,*(float *)(this + 0x10));
        if (Variant::needs_deinit[*(int *)param_2] != '\0') {
          Variant::_clear_internal();
        }
        *(int *)param_2 = local_38[0];
        *(undefined8 *)(param_2 + 8) = local_30;
        *(undefined8 *)(param_2 + 0x10) = uStack_28;
      }
    }
    else {
      Variant::Variant((Variant *)local_38,*(float *)(this + 0xc));
      if (Variant::needs_deinit[*(int *)param_2] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)param_2 = local_38[0];
      *(undefined8 *)(param_2 + 8) = local_30;
      *(undefined8 *)(param_2 + 0x10) = uStack_28;
    }
  }
  else {
    Variant::Variant((Variant *)local_38,*(float *)(this + 8));
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  uVar2 = 1;
LAB_0010200c:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_get(StringName const&, Variant&) const */

ulong __thiscall PhysicalBone3D::_get(PhysicalBone3D *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = StringName::operator==(param_1,"bone_name");
  if ((char)uVar2 == '\0') {
    plVar1 = *(long **)(this + 0x628);
    if (plVar1 != (long *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001022b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
        return uVar3;
      }
      goto LAB_0010231a;
    }
  }
  else {
    Variant::Variant((Variant *)local_48,(String *)(this + 0x6d8));
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_48[0];
    *(undefined8 *)(param_2 + 8) = local_40;
    *(undefined8 *)(param_2 + 0x10) = uStack_38;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar2;
  }
LAB_0010231a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_sync_body_state(PhysicsDirectBodyState3D*) */

void __thiscall
PhysicalBone3D::_sync_body_state(PhysicalBone3D *this,PhysicsDirectBodyState3D *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [12];
  undefined1 auStack_58 [56];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)param_1;
  this[0x4d8] = (PhysicalBone3D)((byte)this[0x4d8] | 8);
  (**(code **)(lVar1 + 0x1c0))(auStack_58);
  Node3D::set_global_transform((Transform3D *)this);
  lVar1 = *(long *)param_1;
  this[0x4d8] = (PhysicalBone3D)((byte)this[0x4d8] & 0xf7);
  auVar2 = (**(code **)(lVar1 + 0x1a0))(param_1);
  lVar1 = *(long *)param_1;
  *(undefined1 (*) [12])(this + 0x6ec) = auVar2;
  auVar2 = (**(code **)(lVar1 + 0x1b0))(param_1);
  *(undefined1 (*) [12])(this + 0x6f8) = auVar2;
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_update_simulator_path() */

void __thiscall PhysicalBone3D::_update_simulator_path(PhysicalBone3D *this)

{
  long lVar1;
  
  *(undefined8 *)(this + 0x668) = 0;
  lVar1 = Node::get_parent();
  if (((lVar1 != 0) &&
      (lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&PhysicalBoneSimulator3D::typeinfo,0),
      lVar1 != 0)) ||
     ((lVar1 = Node::get_parent(), lVar1 != 0 &&
      (((lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&Skeleton3D::typeinfo,0), lVar1 != 0 &&
        (lVar1 = Skeleton3D::get_simulator(), lVar1 != 0)) &&
       (lVar1 = __dynamic_cast(lVar1,&Object::typeinfo,&PhysicalBoneSimulator3D::typeinfo,0),
       lVar1 != 0)))))) {
    *(undefined8 *)(this + 0x668) = *(undefined8 *)(lVar1 + 0x60);
  }
  return;
}



/* PhysicalBone3D::get_simulator() const */

undefined8 __thiscall PhysicalBone3D::get_simulator(PhysicalBone3D *this)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = (uint)*(ulong *)(this + 0x668) & 0xffffff;
  if (uVar4 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x668) >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
      uVar2 = puVar5[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (uVar2 != 0) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar3 = __dynamic_cast(uVar2,&Object::typeinfo,&PhysicalBoneSimulator3D::typeinfo,0);
          return uVar3;
        }
        goto LAB_00102597;
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
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 0;
  }
LAB_00102597:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_fix_joint_offset() */

void __thiscall PhysicalBone3D::_fix_joint_offset(PhysicalBone3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_24;
  undefined4 local_1c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = get_simulator(this);
  if (lVar2 != 0) {
    Transform3D::affine_inverse();
    *(undefined8 *)(this + 0x654) = local_24;
    *(undefined4 *)(this + 0x65c) = local_1c;
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_reload_joint() */

void __thiscall PhysicalBone3D::_reload_joint(PhysicalBone3D *this)

{
  PhysicalBone3D *pPVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  long in_FS_OFFSET;
  Transform3D aTStack_108 [48];
  Transform3D local_d8 [36];
  undefined1 local_b4 [60];
  Transform3D local_78 [56];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = get_simulator(this);
  if (((lVar3 == 0) || (lVar4 = SkeletonModifier3D::get_skeleton(), lVar4 == 0)) ||
     (lVar3 = PhysicalBoneSimulator3D::get_physical_bone_parent((int)lVar3), lVar3 == 0)) {
    plVar5 = (long *)PhysicsServer3D::get_singleton();
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00102751. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x5f8))(plVar5,*(undefined8 *)(this + 0x660));
      return;
    }
  }
  else {
    pPVar1 = this + 0x630;
    Node3D::get_global_transform();
    Transform3D::operator*(aTStack_108,local_78);
    Node3D::get_global_transform();
    Transform3D::affine_inverse();
    Transform3D::operator*(local_d8,local_78);
    Transform3D::orthonormalize();
    if (*(undefined8 **)(this + 0x628) != (undefined8 *)0x0) {
      uVar2 = (**(code **)**(undefined8 **)(this + 0x628))();
      switch(uVar2) {
      case 1:
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x628))
                  (plVar5,*(undefined8 *)(this + 0x660),*(undefined8 *)(lVar3 + 0x538),local_b4,
                   *(undefined8 *)(this + 0x538),this + 0x654);
        lVar3 = *(long *)(this + 0x628);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x630))
                  (*(undefined4 *)(lVar3 + 8),plVar5,*(undefined8 *)(this + 0x660),0);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x630))
                  (*(undefined4 *)(lVar3 + 0xc),plVar5,*(undefined8 *)(this + 0x660),1);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x630))
                  (*(undefined4 *)(lVar3 + 0x10),plVar5,*(undefined8 *)(this + 0x660),2);
        break;
      case 2:
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x6a8))
                  (plVar5,*(undefined8 *)(this + 0x660),*(undefined8 *)(lVar3 + 0x538),local_d8,
                   *(undefined8 *)(this + 0x538),pPVar1);
        lVar3 = *(long *)(this + 0x628);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x6b0))
                  (*(undefined4 *)(lVar3 + 8),plVar5,*(undefined8 *)(this + 0x660),0);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x6b0))
                  (*(undefined4 *)(lVar3 + 0xc),plVar5,*(undefined8 *)(this + 0x660),1);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x6b0))
                  (*(undefined4 *)(lVar3 + 0x10),plVar5,*(undefined8 *)(this + 0x660),2);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x6b0))
                  (*(undefined4 *)(lVar3 + 0x14),plVar5,*(undefined8 *)(this + 0x660),3);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x6b0))
                  (*(undefined4 *)(lVar3 + 0x18),plVar5,*(undefined8 *)(this + 0x660),4);
        break;
      case 3:
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x660))
                  (plVar5,*(undefined8 *)(this + 0x660),*(undefined8 *)(lVar3 + 0x538),local_d8,
                   *(undefined8 *)(this + 0x538),pPVar1);
        lVar3 = *(long *)(this + 0x628);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x680))
                  (plVar5,*(undefined8 *)(this + 0x660),0,*(undefined1 *)(lVar3 + 8));
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x670))
                  (*(undefined4 *)(lVar3 + 0xc),plVar5,*(undefined8 *)(this + 0x660),1);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x670))
                  (*(undefined4 *)(lVar3 + 0x10),plVar5,*(undefined8 *)(this + 0x660),2);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x670))
                  (*(undefined4 *)(lVar3 + 0x14),plVar5,*(undefined8 *)(this + 0x660),3);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x670))
                  (*(undefined4 *)(lVar3 + 0x18),plVar5,*(undefined8 *)(this + 0x660),4);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x670))
                  (*(undefined4 *)(lVar3 + 0x1c),plVar5,*(undefined8 *)(this + 0x660),5);
        break;
      case 4:
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x690))
                  (plVar5,*(undefined8 *)(this + 0x660),*(undefined8 *)(lVar3 + 0x538),local_d8,
                   *(undefined8 *)(this + 0x538),pPVar1);
        lVar3 = *(long *)(this + 0x628);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x698))
                  (*(undefined4 *)(lVar3 + 8),plVar5,*(undefined8 *)(this + 0x660),0);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x698))
                  (*(undefined4 *)(lVar3 + 0xc),plVar5,*(undefined8 *)(this + 0x660),1);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x698))
                  (*(undefined4 *)(lVar3 + 0x10),plVar5,*(undefined8 *)(this + 0x660),2);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x698))
                  (*(undefined4 *)(lVar3 + 0x14),plVar5,*(undefined8 *)(this + 0x660),3);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x698))
                  (*(undefined4 *)(lVar3 + 0x14),plVar5,*(undefined8 *)(this + 0x660),4);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x698))
                  (*(undefined4 *)(lVar3 + 0x1c),plVar5,*(undefined8 *)(this + 0x660),0xb);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x698))
                  (*(undefined4 *)(lVar3 + 0x20),plVar5,*(undefined8 *)(this + 0x660),0xc);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x698))
                  (*(undefined4 *)(lVar3 + 0x24),plVar5,*(undefined8 *)(this + 0x660),0xd);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x698))
                  (*(undefined4 *)(lVar3 + 0x24),plVar5,*(undefined8 *)(this + 0x660),0xd);
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x698))
                  (*(undefined4 *)(lVar3 + 0x2c),plVar5,*(undefined8 *)(this + 0x660),0xf);
        break;
      case 5:
        plVar5 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar5 + 0x6c0))
                  (plVar5,*(undefined8 *)(this + 0x660),*(undefined8 *)(lVar3 + 0x538),local_d8,
                   *(undefined8 *)(this + 0x538),pPVar1);
        puVar8 = (undefined1 *)(*(long *)(this + 0x628) + 8);
        iVar6 = 0;
        do {
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6d8))(plVar5,*(undefined8 *)(this + 0x660),iVar6,0,*puVar8);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 4),plVar5,*(undefined8 *)(this + 0x660),iVar6,1);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 8),plVar5,*(undefined8 *)(this + 0x660),iVar6,0);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0xc),plVar5,*(undefined8 *)(this + 0x660),iVar6,2);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6d8))(plVar5,*(undefined8 *)(this + 0x660),iVar6,3,puVar8[0x18]);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x1c),plVar5,*(undefined8 *)(this + 0x660),iVar6,7);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x20),plVar5,*(undefined8 *)(this + 0x660),iVar6,8);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x24),plVar5,*(undefined8 *)(this + 0x660),iVar6,9);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x10),plVar5,*(undefined8 *)(this + 0x660),iVar6,3);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x14),plVar5,*(undefined8 *)(this + 0x660),iVar6,4);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6d8))(plVar5,*(undefined8 *)(this + 0x660),iVar6,1,puVar8[0x28]);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x2c),plVar5,*(undefined8 *)(this + 0x660),iVar6,0xb);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x30),plVar5,*(undefined8 *)(this + 0x660),iVar6,10);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x34),plVar5,*(undefined8 *)(this + 0x660),iVar6,0xc);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x38),plVar5,*(undefined8 *)(this + 0x660),iVar6,0xe);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x3c),plVar5,*(undefined8 *)(this + 0x660),iVar6,0xd);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x40),plVar5,*(undefined8 *)(this + 0x660),iVar6,0x10)
          ;
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6d8))(plVar5,*(undefined8 *)(this + 0x660),iVar6,2,puVar8[0x44]);
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x48),plVar5,*(undefined8 *)(this + 0x660),iVar6,0x13)
          ;
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x4c),plVar5,*(undefined8 *)(this + 0x660),iVar6,0x14)
          ;
          plVar5 = (long *)PhysicsServer3D::get_singleton();
          iVar7 = iVar6 + 1;
          (**(code **)(*plVar5 + 0x6c8))
                    (*(undefined4 *)(puVar8 + 0x50),plVar5,*(undefined8 *)(this + 0x660),iVar6);
          puVar8 = puVar8 + 0x54;
          iVar6 = iVar7;
        } while (iVar7 != 3);
      }
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_on_bone_parent_changed() */

void __thiscall PhysicalBone3D::_on_bone_parent_changed(PhysicalBone3D *this)

{
  _reload_joint(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhysicalBone3D::set_joint_type(PhysicalBone3D::JointType) */

void __thiscall PhysicalBone3D::set_joint_type(PhysicalBone3D *this,int param_2)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  int iVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  
  if (*(undefined8 **)(this + 0x628) == (undefined8 *)0x0) {
    if (param_2 == 0) {
      return;
    }
  }
  else {
    iVar8 = (**(code **)**(undefined8 **)(this + 0x628))();
    if (param_2 == iVar8) {
      return;
    }
    plVar1 = *(long **)(this + 0x628);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x20))(plVar1);
      Memory::free_static(plVar1,false);
    }
  }
  *(undefined8 *)(this + 0x628) = 0;
  switch(param_2) {
  case 1:
    puVar10 = (undefined8 *)operator_new(0x18,"");
    uVar2 = _LC46;
    *puVar10 = &PTR_get_joint_type_0011e060;
    puVar10[1] = uVar2;
    *(undefined4 *)(puVar10 + 2) = 0;
    *(undefined8 **)(this + 0x628) = puVar10;
    break;
  case 2:
    puVar10 = (undefined8 *)operator_new(0x20,"");
    uVar3 = _UNK_0011e888;
    uVar2 = __LC47;
    *puVar10 = &PTR_get_joint_type_0011e0a0;
    *(undefined4 *)(puVar10 + 3) = 0x3f800000;
    puVar10[1] = uVar2;
    puVar10[2] = uVar3;
    *(undefined8 **)(this + 0x628) = puVar10;
    break;
  case 3:
    puVar10 = (undefined8 *)operator_new(0x20,"");
    uVar3 = _UNK_0011e898;
    uVar2 = __LC48;
    *puVar10 = &PTR_get_joint_type_0011e0e0;
    *(undefined1 *)(puVar10 + 1) = 0;
    *(undefined4 *)((long)puVar10 + 0x1c) = 0x3f800000;
    *(undefined8 *)((long)puVar10 + 0xc) = uVar2;
    *(undefined8 *)((long)puVar10 + 0x14) = uVar3;
    *(undefined8 **)(this + 0x628) = puVar10;
    break;
  case 4:
    puVar10 = (undefined8 *)operator_new(0x30,"");
    uVar5 = _UNK_0011e8a8;
    uVar3 = _LC51;
    uVar2 = CONCAT44(_UNK_0011e8a4,_LC25);
    *puVar10 = &PTR_get_joint_type_0011e120;
    puVar10[1] = uVar2;
    puVar10[2] = uVar5;
    uVar5 = _UNK_0011e8b8;
    uVar2 = __LC50;
    puVar10[5] = uVar3;
    puVar10[3] = uVar2;
    puVar10[4] = uVar5;
    *(undefined8 **)(this + 0x628) = puVar10;
    break;
  case 5:
    puVar9 = (undefined8 *)operator_new(0x108,"");
    uVar5 = _UNK_0011e8c8;
    uVar3 = __LC52;
    uVar4 = _LC25;
    *puVar9 = &PTR_get_joint_type_0011e160;
    uVar7 = _UNK_0011e8d8;
    uVar6 = __LC53;
    uVar2 = _LC54;
    puVar10 = puVar9 + 1;
    do {
      *(undefined1 *)puVar10 = 1;
      puVar11 = (undefined8 *)((long)puVar10 + 0x54);
      *(undefined8 *)((long)puVar10 + 4) = uVar3;
      *(undefined8 *)((long)puVar10 + 0xc) = uVar5;
      *(undefined4 *)((long)puVar10 + 0x14) = uVar4;
      *(undefined1 *)(puVar10 + 3) = 0;
      *(undefined8 *)((long)puVar10 + 0x1c) = 0;
      *(undefined4 *)((long)puVar10 + 0x24) = 0;
      *(undefined1 *)(puVar10 + 5) = 1;
      *(undefined8 *)((long)puVar10 + 0x2c) = uVar6;
      *(undefined8 *)((long)puVar10 + 0x34) = uVar7;
      *(undefined8 *)((long)puVar10 + 0x3c) = uVar2;
      *(undefined1 *)((long)puVar10 + 0x44) = 0;
      puVar10[9] = 0;
      *(undefined4 *)(puVar10 + 10) = 0;
      puVar10 = puVar11;
    } while ((undefined8 *)((long)puVar9 + 0x104) != puVar11);
    *(undefined8 **)(this + 0x628) = puVar9;
  }
  _reload_joint(this);
  Object::notify_property_list_changed();
  Node3D::update_gizmos();
  return;
}



/* PhysicalBone3D::reset_to_rest_position() */

void __thiscall PhysicalBone3D::reset_to_rest_position(PhysicalBone3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  Transform3D aTStack_128 [48];
  undefined1 local_f8 [48];
  Transform3D local_c8 [48];
  Transform3D local_98 [104];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = get_simulator(this);
  lVar2 = get_simulator(this);
  if (lVar2 != 0) {
    lVar2 = SkeletonModifier3D::get_skeleton();
    if ((lVar1 != 0) && (lVar2 != 0)) {
      if (*(int *)(this + 0x6d4) == -1) {
        Node3D::get_global_transform();
      }
      else {
        PhysicalBoneSimulator3D::get_bone_global_pose((int)local_f8);
        Node3D::get_global_transform();
        Transform3D::operator*(local_c8,aTStack_128);
      }
      Transform3D::operator*(local_98,local_c8);
      Transform3D::orthonormalized();
      Node3D::set_global_transform((Transform3D *)this);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_update_joint_offset() */

void __thiscall PhysicalBone3D::_update_joint_offset(PhysicalBone3D *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_24;
  undefined4 local_1c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = get_simulator(this);
  if (lVar2 != 0) {
    Transform3D::affine_inverse();
    *(undefined8 *)(this + 0x654) = local_24;
    *(undefined4 *)(this + 0x65c) = local_1c;
  }
  this[0x4d8] = (PhysicalBone3D)((byte)this[0x4d8] | 8);
  reset_to_rest_position(this);
  this[0x4d8] = (PhysicalBone3D)((byte)this[0x4d8] & 0xf7);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node3D::update_gizmos();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_joint_offset(Transform3D const&) */

void __thiscall PhysicalBone3D::set_joint_offset(PhysicalBone3D *this,Transform3D *param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(this + 0x630) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x638) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x640) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x648) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x650) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x658) = uVar1;
  _update_joint_offset(this);
  return;
}



/* PhysicalBone3D::set_joint_rotation(Vector3 const&) */

void __thiscall PhysicalBone3D::set_joint_rotation(PhysicalBone3D *this,Vector3 *param_1)

{
  long in_FS_OFFSET;
  undefined1 local_2c [12];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_2c = Basis::get_scale();
  Basis::set_euler_scale(this + 0x630,param_1,local_2c,2);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_joint_offset(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_body_offset(Transform3D const&) */

void __thiscall PhysicalBone3D::set_body_offset(PhysicalBone3D *this,Transform3D *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0x670) = *(undefined8 *)param_1;
  *(undefined8 *)(this + 0x678) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(this + 0x680) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(this + 0x688) = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(this + 0x690) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(this + 0x698) = uVar2;
  Transform3D::affine_inverse();
  *(undefined8 *)(this + 0x6a0) = local_48;
  *(undefined8 *)(this + 0x6a8) = uStack_40;
  *(undefined8 *)(this + 0x6b0) = local_38;
  *(undefined8 *)(this + 0x6b8) = uStack_30;
  *(undefined8 *)(this + 0x6c0) = local_28;
  *(undefined8 *)(this + 0x6c8) = uStack_20;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_joint_offset(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_start_physics_simulation() [clone .part.0] */

void __thiscall PhysicalBone3D::_start_physics_simulation(PhysicalBone3D *this)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  long *plVar4;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  Callable aCStack_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  reset_to_rest_position(this);
  CollisionObject3D::set_body_mode(this,2);
  plVar4 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar4 + 0x388);
  uVar3 = CollisionObject3D::get_collision_layer();
  (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),uVar3);
  plVar4 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar4 + 0x398);
  uVar3 = CollisionObject3D::get_collision_mask();
  (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),uVar3);
  plVar4 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar4 + 0x3a8);
  CollisionObject3D::get_collision_priority();
  (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538));
  plVar4 = (long *)PhysicsServer3D::get_singleton();
  pcVar1 = *(code **)(*plVar4 + 0x4b8);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC43;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this_00 + 0x40) = 0;
  *(undefined ***)this_00 = &PTR_hash_0011e1a0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar2;
  *(code **)(this_00 + 0x38) = _body_state_changed;
  *(PhysicalBone3D **)(this_00 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "PhysicalBone3D::_body_state_changed";
  Callable::Callable(aCStack_48,this_00);
  (*pcVar1)(plVar4,*(undefined8 *)(this + 0x538),aCStack_48);
  Callable::~Callable(aCStack_48);
  Node3D::set_as_top_level(SUB81(this,0));
  this[0x6d1] = (PhysicalBone3D)0x1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::get_skeleton() const */

undefined8 __thiscall PhysicalBone3D::get_skeleton(PhysicalBone3D *this)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = get_simulator(this);
  if (lVar1 != 0) {
    uVar2 = SkeletonModifier3D::get_skeleton();
    return uVar2;
  }
  return 0;
}



/* PhysicalBone3D::_set_gizmo_move_joint(bool) */

void __thiscall PhysicalBone3D::_set_gizmo_move_joint(PhysicalBone3D *this,bool param_1)

{
  this[0x622] = (PhysicalBone3D)param_1;
  return;
}



/* PhysicalBone3D::get_joint_data() const */

undefined8 __thiscall PhysicalBone3D::get_joint_data(PhysicalBone3D *this)

{
  return *(undefined8 *)(this + 0x628);
}



/* PhysicalBone3D::get_bone_name() const */

PhysicalBone3D * __thiscall PhysicalBone3D::get_bone_name(PhysicalBone3D *this)

{
  return this + 0x6d8;
}



/* PhysicalBone3D::update_offset() */

void __thiscall PhysicalBone3D::update_offset(PhysicalBone3D *this)

{
  PhysicalBone3D PVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  Transform3D local_f8 [48];
  Transform3D local_c8 [96];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = get_simulator(this);
  lVar3 = get_simulator(this);
  if (((lVar3 != 0) && (lVar3 = SkeletonModifier3D::get_skeleton(), lVar2 != 0)) && (lVar3 != 0)) {
    Node3D::get_global_transform();
    if (*(int *)(this + 0x6d4) == -1) {
      PVar1 = this[0x622];
    }
    else {
      PhysicalBoneSimulator3D::get_bone_global_pose((int)(Transform3D *)&local_68);
      Transform3D::operator*=(local_f8,(Transform3D *)&local_68);
      PVar1 = this[0x622];
    }
    if (PVar1 == (PhysicalBone3D)0x0) {
      Node3D::get_global_transform();
      Transform3D::affine_inverse();
      Transform3D::operator*((Transform3D *)&local_68,local_c8);
      *(undefined8 *)(this + 0x670) = local_68;
      *(undefined8 *)(this + 0x678) = uStack_60;
      *(undefined8 *)(this + 0x680) = local_58;
      *(undefined8 *)(this + 0x688) = uStack_50;
      *(undefined8 *)(this + 0x690) = local_48;
      *(undefined8 *)(this + 0x698) = uStack_40;
      Transform3D::affine_inverse();
      *(undefined8 *)(this + 0x6a0) = local_128;
      *(undefined8 *)(this + 0x6a8) = uStack_120;
      *(undefined8 *)(this + 0x6b0) = local_118;
      *(undefined8 *)(this + 0x6b8) = uStack_110;
      *(undefined8 *)(this + 0x6c0) = local_108;
      *(undefined8 *)(this + 0x6c8) = uStack_100;
      _update_joint_offset(this);
    }
    else {
      Transform3D::operator*=(local_f8,(Transform3D *)(this + 0x670));
      Node3D::get_global_transform();
      Transform3D::affine_inverse();
      Transform3D::operator*((Transform3D *)&local_68,local_c8);
      *(undefined8 *)(this + 0x630) = local_68;
      *(undefined8 *)(this + 0x638) = uStack_60;
      *(undefined8 *)(this + 0x640) = local_58;
      *(undefined8 *)(this + 0x648) = uStack_50;
      *(undefined8 *)(this + 0x650) = local_48;
      *(undefined8 *)(this + 0x658) = uStack_40;
      _update_joint_offset(this);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_start_physics_simulation() */

void __thiscall PhysicalBone3D::_start_physics_simulation(PhysicalBone3D *this)

{
  if (((this[0x6d1] == (PhysicalBone3D)0x0) && (*(long *)(this + 0x668) != 0)) &&
     (*(int *)(this + 0x6d4) != -1)) {
    _start_physics_simulation(this);
    return;
  }
  return;
}



/* PhysicalBone3D::_stop_physics_simulation() */

void __thiscall PhysicalBone3D::_stop_physics_simulation(PhysicalBone3D *this)

{
  code *pcVar1;
  char cVar2;
  undefined4 uVar3;
  long lVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = get_simulator(this);
  if (lVar4 != 0) {
    cVar2 = SkeletonModifier3D::is_active();
    if ((cVar2 == '\0') || (*(int *)(this + 0x6d4) == -1)) {
      CollisionObject3D::set_body_mode(this,0);
      plVar5 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar5 + 0x388))(plVar5,*(undefined8 *)(this + 0x538),0);
      plVar5 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar5 + 0x398))(plVar5,*(undefined8 *)(this + 0x538),0);
      plVar5 = (long *)PhysicsServer3D::get_singleton();
      (**(code **)(*plVar5 + 0x3a8))(_LC25,plVar5,*(undefined8 *)(this + 0x538));
    }
    else {
      CollisionObject3D::set_body_mode(this,1);
      plVar5 = (long *)PhysicsServer3D::get_singleton();
      pcVar1 = *(code **)(*plVar5 + 0x388);
      uVar3 = CollisionObject3D::get_collision_layer();
      (*pcVar1)(plVar5,*(undefined8 *)(this + 0x538),uVar3);
      plVar5 = (long *)PhysicsServer3D::get_singleton();
      pcVar1 = *(code **)(*plVar5 + 0x398);
      uVar3 = CollisionObject3D::get_collision_mask();
      (*pcVar1)(plVar5,*(undefined8 *)(this + 0x538),uVar3);
      plVar5 = (long *)PhysicsServer3D::get_singleton();
      pcVar1 = *(code **)(*plVar5 + 0x3a8);
      CollisionObject3D::get_collision_priority();
      (*pcVar1)(plVar5,*(undefined8 *)(this + 0x538));
    }
  }
  if (this[0x6d1] != (PhysicalBone3D)0x0) {
    plVar5 = (long *)PhysicsServer3D::get_singleton();
    local_38 = 0;
    local_30 = 0;
    (**(code **)(*plVar5 + 0x4b8))(plVar5,*(undefined8 *)(this + 0x538),&local_38);
    Callable::~Callable((Callable *)&local_38);
    Node3D::set_as_top_level(SUB81(this,0));
    this[0x6d1] = (PhysicalBone3D)0x0;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::reset_physics_simulation_state() */

void __thiscall PhysicalBone3D::reset_physics_simulation_state(PhysicalBone3D *this)

{
  if (this[0x6d0] == (PhysicalBone3D)0x0) {
    _stop_physics_simulation(this);
    return;
  }
  if (((this[0x6d1] == (PhysicalBone3D)0x0) && (*(long *)(this + 0x668) != 0)) &&
     (*(int *)(this + 0x6d4) != -1)) {
    _start_physics_simulation(this);
    return;
  }
  return;
}



/* PhysicalBone3D::set_simulate_physics(bool) */

void __thiscall PhysicalBone3D::set_simulate_physics(PhysicalBone3D *this,bool param_1)

{
  if (this[0x6d0] != (PhysicalBone3D)param_1) {
    this[0x6d0] = (PhysicalBone3D)param_1;
    if (!param_1) {
      _stop_physics_simulation(this);
      return;
    }
    if (((this[0x6d1] == (PhysicalBone3D)0x0) && (*(long *)(this + 0x668) != 0)) &&
       (*(int *)(this + 0x6d4) != -1)) {
      _start_physics_simulation(this);
      return;
    }
  }
  return;
}



/* PhysicalBone3D::PhysicalBone3D() */

void __thiscall PhysicalBone3D::PhysicalBone3D(PhysicalBone3D *this)

{
  undefined4 uVar1;
  uint uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  PhysicsBody3D::PhysicsBody3D((PhysicsBody3D *)this,0);
  uVar1 = _LC25;
  *(undefined ***)this = &PTR__initialize_classv_0011de40;
  uVar2 = _LC56;
  *(undefined2 *)(this + 0x6d0) = 0;
  *(undefined8 *)(this + 0x6d4) = 0xffffffff;
  *(undefined2 *)(this + 0x708) = 1;
  *(undefined1 (*) [16])(this + 0x630) = ZEXT416(uVar2);
  *(undefined1 (*) [16])(this + 0x640) = ZEXT416(uVar2);
  *(undefined4 *)(this + 0x650) = uVar1;
  *(undefined1 (*) [16])(this + 0x660) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x670) = ZEXT416(uVar2);
  *(undefined1 (*) [16])(this + 0x680) = ZEXT416(uVar2);
  *(undefined4 *)(this + 0x690) = uVar1;
  *(undefined1 (*) [16])(this + 0x6a0) = ZEXT416(uVar2);
  *(undefined1 (*) [16])(this + 0x6b0) = ZEXT416(uVar2);
  *(undefined4 *)(this + 0x6c0) = uVar1;
  *(undefined4 *)(this + 0x704) = uVar1;
  *(undefined8 *)(this + 0x6e4) = 0x3f8000003f800000;
  this[0x622] = (PhysicalBone3D)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  *(undefined8 *)(this + 0x654) = 0;
  *(undefined4 *)(this + 0x65c) = 0;
  *(undefined8 *)(this + 0x694) = 0;
  *(undefined4 *)(this + 0x69c) = 0;
  *(undefined8 *)(this + 0x6c4) = 0;
  *(undefined4 *)(this + 0x6cc) = 0;
  *(undefined8 *)(this + 0x6dc) = 0;
  *(undefined8 *)(this + 0x6ec) = 0;
  *(undefined4 *)(this + 0x6f4) = 0;
  *(undefined8 *)(this + 0x6f8) = 0;
  *(undefined4 *)(this + 0x700) = 0;
  *(undefined8 *)(this + 0x70c) = 0;
  *(undefined8 *)(this + 0x714) = 0;
  StringName::StringName((StringName *)(this + 0x720),"_integrate_forces",false);
  this[0x728] = (PhysicalBone3D)0x0;
  *(undefined8 *)(this + 0x730) = 0;
  plVar3 = (long *)PhysicsServer3D::get_singleton();
  uVar4 = (**(code **)(*plVar3 + 0x5f0))(plVar3);
  *(undefined8 *)(this + 0x660) = uVar4;
  if (this[0x6d0] == (PhysicalBone3D)0x0) {
    _stop_physics_simulation(this);
    return;
  }
  if (((this[0x6d1] == (PhysicalBone3D)0x0) && (*(long *)(this + 0x668) != 0)) &&
     (*(int *)(this + 0x6d4) != -1)) {
    _start_physics_simulation(this);
    return;
  }
  return;
}



/* PhysicalBone3D::update_bone_id() */

void __thiscall PhysicalBone3D::update_bone_id(PhysicalBone3D *this)

{
  long lVar1;
  uint uVar2;
  String *pSVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_34;
  undefined4 local_2c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar3 = (String *)get_simulator(this);
  if (pSVar3 != (String *)0x0) {
    uVar2 = PhysicalBoneSimulator3D::find_bone(pSVar3);
    if (*(uint *)(this + 0x6d4) != uVar2) {
      if (*(uint *)(this + 0x6d4) != 0xffffffff) {
        PhysicalBoneSimulator3D::unbind_physical_bone_from_bone((int)pSVar3);
      }
      *(uint *)(this + 0x6d4) = uVar2;
      PhysicalBoneSimulator3D::bind_physical_bone_to_bone
                ((int)pSVar3,(PhysicalBone3D *)(ulong)uVar2);
      lVar4 = get_simulator(this);
      if (lVar4 != 0) {
        Transform3D::affine_inverse();
        *(undefined8 *)(this + 0x654) = local_34;
        *(undefined4 *)(this + 0x65c) = local_2c;
      }
      if (this[0x6d0] == (PhysicalBone3D)0x0) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          _stop_physics_simulation(this);
          return;
        }
        goto LAB_00103df0;
      }
      if (((this[0x6d1] == (PhysicalBone3D)0x0) && (*(long *)(this + 0x668) != 0)) &&
         (*(int *)(this + 0x6d4) != -1)) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          _start_physics_simulation(this);
          return;
        }
        goto LAB_00103df0;
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103df0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::set_bone_name(String const&) */

void __thiscall PhysicalBone3D::set_bone_name(PhysicalBone3D *this,String *param_1)

{
  if (*(long *)(this + 0x6d8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x6d8),(CowData *)param_1);
  }
  *(undefined4 *)(this + 0x6d4) = 0xffffffff;
  update_bone_id(this);
  reset_to_rest_position(this);
  return;
}



/* PhysicalBone3D::_notification(int) */

void __thiscall PhysicalBone3D::_notification(PhysicalBone3D *this,int param_1)

{
  long lVar1;
  long *plVar2;
  
  if (param_1 == 0x1b) {
    _update_simulator_path(this);
    update_bone_id(this);
    reset_to_rest_position(this);
    if (this[0x6d0] == (PhysicalBone3D)0x0) {
      _stop_physics_simulation(this);
    }
    else if (((this[0x6d1] == (PhysicalBone3D)0x0) && (*(long *)(this + 0x668) != 0)) &&
            (*(int *)(this + 0x6d4) != -1)) {
      _start_physics_simulation(this);
    }
    if (*(long *)(this + 0x628) != 0) {
      _reload_joint(this);
      return;
    }
  }
  else if (param_1 < 0x1c) {
    if ((param_1 - 0xbU & 0xfffffff7) == 0) {
      lVar1 = get_simulator(this);
      if ((lVar1 != 0) && (*(int *)(this + 0x6d4) != -1)) {
        PhysicalBoneSimulator3D::unbind_physical_bone_from_bone((int)lVar1);
        *(undefined4 *)(this + 0x6d4) = 0xffffffff;
      }
      plVar2 = (long *)PhysicsServer3D::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x00103eb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar2 + 0x5f8))(plVar2,*(undefined8 *)(this + 0x660));
      return;
    }
  }
  else if (param_1 == 2000) {
    lVar1 = Engine::get_singleton();
    if (*(char *)(lVar1 + 0xc0) != '\0') {
      update_offset(this);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* PhysicalBone3D::SixDOFJointData::_set(StringName const&, Variant const&, RID) */

undefined4 __thiscall
PhysicalBone3D::SixDOFJointData::_set
          (SixDOFJointData *this,long *param_1,Variant *param_2,long param_4)

{
  long lVar1;
  char *__s;
  char cVar2;
  char cVar3;
  SixDOFJointData SVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  wchar32 wVar9;
  long in_FS_OFFSET;
  float fVar10;
  uint local_70;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_60 = 0;
  }
  else {
    __s = *(char **)(lVar1 + 8);
    local_60 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar1 + 0x10));
    }
    else {
      local_50 = strlen(__s);
      local_58 = __s;
      String::parse_latin1((StrRange *)&local_60);
    }
  }
  uVar5 = String::begins_with((char *)&local_60);
  if ((char)uVar5 == '\0') {
    uVar5 = 0;
    goto LAB_001040a0;
  }
  iVar6 = (int)(CowData<char32_t> *)&local_60;
  wVar9 = (wchar32)(CowData<char32_t> *)&local_58;
  String::get_slicec(wVar9,iVar6);
  cVar2 = operator==("x",(String *)&local_58);
  if (cVar2 == '\0') {
    cVar2 = operator==("y",(String *)&local_58);
    local_70 = 1;
    if (cVar2 == '\0') {
      cVar2 = operator==("z",(String *)&local_58);
      local_70 = 2;
      if (cVar2 == '\0') {
        uVar5 = 0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        goto LAB_001040a0;
      }
    }
  }
  else {
    local_70 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  String::get_slicec(wVar9,iVar6);
  if (param_4 == 0) {
    cVar2 = operator==("linear_limit_enabled",(String *)&local_58);
    if (cVar2 == '\0') {
      cVar2 = operator==("linear_limit_upper",(String *)&local_58);
      if (cVar2 == '\0') {
LAB_00104211:
        cVar3 = operator==("linear_limit_lower",(String *)&local_58);
        if (cVar3 == '\0') {
          cVar3 = operator==("linear_limit_softness",(String *)&local_58);
          if (cVar3 == '\0') {
            cVar3 = operator==("linear_spring_enabled",(String *)&local_58);
            if (cVar3 == '\0') {
              cVar3 = operator==("linear_spring_stiffness",(String *)&local_58);
              if (cVar3 == '\0') {
                cVar3 = operator==("linear_spring_damping",(String *)&local_58);
                if (cVar3 == '\0') {
                  cVar3 = operator==("linear_equilibrium_point",(String *)&local_58);
                  if (cVar3 == '\0') {
                    cVar3 = operator==("linear_restitution",(String *)&local_58);
                    if (cVar3 == '\0') {
                      cVar3 = operator==("linear_damping",(String *)&local_58);
                      if (cVar3 == '\0') {
                        cVar3 = operator==("angular_limit_enabled",(String *)&local_58);
                        if (cVar3 == '\0') {
                          cVar3 = operator==("angular_limit_upper",(String *)&local_58);
                          if (cVar3 == '\0') {
                            cVar3 = operator==("angular_limit_lower",(String *)&local_58);
                            if (cVar3 == '\0') {
                              cVar3 = operator==("angular_limit_softness",(String *)&local_58);
                              if (cVar3 == '\0') {
                                cVar3 = operator==("angular_restitution",(String *)&local_58);
                                if (cVar3 == '\0') {
                                  cVar3 = operator==("angular_damping",(String *)&local_58);
                                  if (cVar3 == '\0') {
                                    cVar3 = operator==("erp",(String *)&local_58);
                                    if (cVar3 == '\0') {
                                      cVar3 = operator==("angular_spring_enabled",
                                                         (String *)&local_58);
                                      if (cVar3 == '\0') {
                                        cVar3 = operator==("angular_spring_stiffness",
                                                           (String *)&local_58);
                                        if (cVar3 == '\0') {
                                          cVar3 = operator==("angular_spring_damping",
                                                             (String *)&local_58);
                                          if (cVar3 == '\0') {
                                            cVar3 = operator==("angular_equilibrium_point",
                                                               (String *)&local_58);
                                            if (cVar3 == '\0') {
                                              uVar5 = 0;
                                            }
                                            else {
                                              fVar10 = Variant::operator_cast_to_float(param_2);
                                              *(float *)(this + (long)(int)local_70 * 0x54 + 0x58) =
                                                   fVar10;
                                              if (cVar2 != '\0') {
                                                plVar8 = (long *)PhysicsServer3D::get_singleton();
                                                (**(code **)(*plVar8 + 0x6c8))
                                                          (*(undefined4 *)
                                                            (this + (long)(int)local_70 * 0x54 +
                                                                    0x58),plVar8,param_4,local_70,
                                                           0x15);
                                              }
                                            }
                                          }
                                          else {
                                            fVar10 = Variant::operator_cast_to_float(param_2);
                                            *(float *)(this + (long)(int)local_70 * 0x54 + 0x54) =
                                                 fVar10;
                                            if (cVar2 != '\0') {
                                              plVar8 = (long *)PhysicsServer3D::get_singleton();
                                              (**(code **)(*plVar8 + 0x6c8))
                                                        (*(undefined4 *)
                                                          (this + (long)(int)local_70 * 0x54 + 0x54)
                                                         ,plVar8,param_4,local_70,0x14);
                                            }
                                          }
                                        }
                                        else {
                                          fVar10 = Variant::operator_cast_to_float(param_2);
                                          *(float *)(this + (long)(int)local_70 * 0x54 + 0x50) =
                                               fVar10;
                                          if (cVar2 != '\0') {
                                            plVar8 = (long *)PhysicsServer3D::get_singleton();
                                            (**(code **)(*plVar8 + 0x6c8))
                                                      (*(undefined4 *)
                                                        (this + (long)(int)local_70 * 0x54 + 0x50),
                                                       plVar8,param_4,local_70,0x13);
                                          }
                                        }
                                      }
                                      else {
                                        SVar4 = (SixDOFJointData)
                                                Variant::operator_cast_to_bool(param_2);
                                        this[(long)(int)local_70 * 0x54 + 0x4c] = SVar4;
                                        if (cVar2 != '\0') {
                                          plVar8 = (long *)PhysicsServer3D::get_singleton();
                                          (**(code **)(*plVar8 + 0x6d8))
                                                    (plVar8,param_4,local_70,2,
                                                     this[(long)(int)local_70 * 0x54 + 0x4c]);
                                        }
                                      }
                                    }
                                    else {
                                      fVar10 = Variant::operator_cast_to_float(param_2);
                                      *(float *)(this + (long)(int)local_70 * 0x54 + 0x48) = fVar10;
                                      if (cVar2 != '\0') {
                                        plVar8 = (long *)PhysicsServer3D::get_singleton();
                                        (**(code **)(*plVar8 + 0x6c8))
                                                  (*(undefined4 *)
                                                    (this + (long)(int)local_70 * 0x54 + 0x48),
                                                   plVar8,param_4,local_70,0x10);
                                      }
                                    }
                                  }
                                  else {
                                    fVar10 = Variant::operator_cast_to_float(param_2);
                                    *(float *)(this + (long)(int)local_70 * 0x54 + 0x44) = fVar10;
                                    if (cVar2 != '\0') {
                                      plVar8 = (long *)PhysicsServer3D::get_singleton();
                                      (**(code **)(*plVar8 + 0x6c8))
                                                (*(undefined4 *)
                                                  (this + (long)(int)local_70 * 0x54 + 0x44),plVar8,
                                                 param_4,local_70,0xd);
                                    }
                                  }
                                }
                                else {
                                  fVar10 = Variant::operator_cast_to_float(param_2);
                                  *(float *)(this + (long)(int)local_70 * 0x54 + 0x40) = fVar10;
                                  if (cVar2 != '\0') {
                                    plVar8 = (long *)PhysicsServer3D::get_singleton();
                                    (**(code **)(*plVar8 + 0x6c8))
                                              (*(undefined4 *)
                                                (this + (long)(int)local_70 * 0x54 + 0x40),plVar8,
                                               param_4,local_70,0xe);
                                  }
                                }
                              }
                              else {
                                fVar10 = Variant::operator_cast_to_float(param_2);
                                *(float *)(this + (long)(int)local_70 * 0x54 + 0x3c) = fVar10;
                                if (cVar2 != '\0') {
                                  plVar8 = (long *)PhysicsServer3D::get_singleton();
                                  (**(code **)(*plVar8 + 0x6c8))
                                            (*(undefined4 *)
                                              (this + (long)(int)local_70 * 0x54 + 0x3c),plVar8,
                                             param_4,local_70,0xc);
                                }
                              }
                            }
                            else {
                              fVar10 = Variant::operator_cast_to_float(param_2);
                              *(float *)(this + (long)(int)local_70 * 0x54 + 0x38) = fVar10 * __LC4;
                              if (cVar2 != '\0') {
                                plVar8 = (long *)PhysicsServer3D::get_singleton();
                                (**(code **)(*plVar8 + 0x6c8))
                                          (*(undefined4 *)(this + (long)(int)local_70 * 0x54 + 0x38)
                                           ,plVar8,param_4,local_70,10);
                              }
                            }
                          }
                          else {
                            fVar10 = Variant::operator_cast_to_float(param_2);
                            *(float *)(this + (long)(int)local_70 * 0x54 + 0x34) = fVar10 * __LC4;
                            if (cVar2 != '\0') {
                              plVar8 = (long *)PhysicsServer3D::get_singleton();
                              (**(code **)(*plVar8 + 0x6c8))
                                        (*(undefined4 *)(this + (long)(int)local_70 * 0x54 + 0x34),
                                         plVar8,param_4,local_70,0xb);
                            }
                          }
                        }
                        else {
                          SVar4 = (SixDOFJointData)Variant::operator_cast_to_bool(param_2);
                          this[(long)(int)local_70 * 0x54 + 0x30] = SVar4;
                          if (cVar2 != '\0') {
                            plVar8 = (long *)PhysicsServer3D::get_singleton();
                            (**(code **)(*plVar8 + 0x6d8))
                                      (plVar8,param_4,local_70,1,
                                       this[(long)(int)local_70 * 0x54 + 0x30]);
                          }
                        }
                      }
                      else {
                        fVar10 = Variant::operator_cast_to_float(param_2);
                        *(float *)(this + (long)(int)local_70 * 0x54 + 0x1c) = fVar10;
                        if (cVar2 != '\0') {
                          plVar8 = (long *)PhysicsServer3D::get_singleton();
                          (**(code **)(*plVar8 + 0x6c8))
                                    (*(undefined4 *)(this + (long)(int)local_70 * 0x54 + 0x1c),
                                     plVar8,param_4,local_70,4);
                        }
                      }
                    }
                    else {
                      fVar10 = Variant::operator_cast_to_float(param_2);
                      *(float *)(this + (long)(int)local_70 * 0x54 + 0x18) = fVar10;
                      if (cVar2 != '\0') {
                        plVar8 = (long *)PhysicsServer3D::get_singleton();
                        (**(code **)(*plVar8 + 0x6c8))
                                  (*(undefined4 *)(this + (long)(int)local_70 * 0x54 + 0x18),plVar8,
                                   param_4,local_70,3);
                      }
                    }
                  }
                  else {
                    fVar10 = Variant::operator_cast_to_float(param_2);
                    *(float *)(this + (long)(int)local_70 * 0x54 + 0x2c) = fVar10;
                    if (cVar2 != '\0') {
                      plVar8 = (long *)PhysicsServer3D::get_singleton();
                      (**(code **)(*plVar8 + 0x6c8))
                                (*(undefined4 *)(this + (long)(int)local_70 * 0x54 + 0x2c),plVar8,
                                 param_4,local_70,9);
                    }
                  }
                }
                else {
                  fVar10 = Variant::operator_cast_to_float(param_2);
                  *(float *)(this + (long)(int)local_70 * 0x54 + 0x28) = fVar10;
                  if (cVar2 != '\0') {
                    plVar8 = (long *)PhysicsServer3D::get_singleton();
                    (**(code **)(*plVar8 + 0x6c8))
                              (*(undefined4 *)(this + (long)(int)local_70 * 0x54 + 0x28),plVar8,
                               param_4,local_70,8);
                  }
                }
              }
              else {
                fVar10 = Variant::operator_cast_to_float(param_2);
                *(float *)(this + (long)(int)local_70 * 0x54 + 0x24) = fVar10;
                if (cVar2 != '\0') {
                  plVar8 = (long *)PhysicsServer3D::get_singleton();
                  (**(code **)(*plVar8 + 0x6c8))
                            (*(undefined4 *)(this + (long)(int)local_70 * 0x54 + 0x24),plVar8,
                             param_4,local_70,7);
                }
              }
            }
            else {
              SVar4 = (SixDOFJointData)Variant::operator_cast_to_bool(param_2);
              this[(long)(int)local_70 * 0x54 + 0x20] = SVar4;
              if (cVar2 != '\0') {
                plVar8 = (long *)PhysicsServer3D::get_singleton();
                (**(code **)(*plVar8 + 0x6d8))
                          (plVar8,param_4,local_70,3,this[(long)(int)local_70 * 0x54 + 0x20]);
              }
            }
          }
          else {
            fVar10 = Variant::operator_cast_to_float(param_2);
            *(float *)(this + (ulong)local_70 * 0x54 + 0x14) = fVar10;
            if (cVar2 != '\0') {
              plVar8 = (long *)PhysicsServer3D::get_singleton();
              (**(code **)(*plVar8 + 0x6c8))
                        (*(undefined4 *)(this + (ulong)local_70 * 0x54 + 0x14),plVar8,param_4,
                         local_70,2);
            }
          }
        }
        else {
          fVar10 = Variant::operator_cast_to_float(param_2);
          *(float *)(this + (ulong)local_70 * 0x54 + 0x10) = fVar10;
          if (cVar2 != '\0') {
            plVar8 = (long *)PhysicsServer3D::get_singleton();
            (**(code **)(*plVar8 + 0x6c8))
                      (*(undefined4 *)(this + (ulong)local_70 * 0x54 + 0x10),plVar8,param_4,local_70
                       ,0);
          }
        }
      }
      else {
        fVar10 = Variant::operator_cast_to_float(param_2);
        *(float *)(this + (ulong)local_70 * 0x54 + 0xc) = fVar10;
      }
    }
    else {
      SVar4 = (SixDOFJointData)Variant::operator_cast_to_bool(param_2);
      this[(long)(int)local_70 * 0x54 + 8] = SVar4;
    }
  }
  else {
    plVar8 = (long *)PhysicsServer3D::get_singleton();
    iVar6 = (**(code **)(*plVar8 + 0x600))(plVar8,param_4);
    cVar2 = operator==("linear_limit_enabled",(String *)&local_58);
    if (cVar2 == '\0') {
      cVar2 = operator==("linear_limit_upper",(String *)&local_58);
      if (cVar2 == '\0') {
        cVar2 = iVar6 == 4;
        goto LAB_00104211;
      }
      fVar10 = Variant::operator_cast_to_float(param_2);
      uVar7 = (ulong)local_70;
      *(float *)(this + uVar7 * 0x54 + 0xc) = fVar10;
      if (iVar6 == 4) {
        plVar8 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar8 + 0x6c8))
                  (*(undefined4 *)(this + uVar7 * 0x54 + 0xc),plVar8,param_4,uVar7,1);
      }
    }
    else {
      SVar4 = (SixDOFJointData)Variant::operator_cast_to_bool(param_2);
      uVar7 = (ulong)local_70;
      this[uVar7 * 0x54 + 8] = SVar4;
      if (iVar6 == 4) {
        plVar8 = (long *)PhysicsServer3D::get_singleton();
        (**(code **)(*plVar8 + 0x6d8))(plVar8,param_4,uVar7,0,this[uVar7 * 0x54 + 8]);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
LAB_001040a0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::SixDOFJointData::_get(StringName const&, Variant&) const */

undefined4 __thiscall
PhysicalBone3D::SixDOFJointData::_get(SixDOFJointData *this,StringName *param_1,Variant *param_2)

{
  char *__s;
  char cVar1;
  undefined4 uVar2;
  SixDOFJointData SVar3;
  int iVar4;
  wchar32 wVar5;
  long lVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 local_70;
  char *local_68;
  size_t local_60;
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  lVar6 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 == 0) {
    local_70 = 0;
  }
  else {
    __s = *(char **)(lVar6 + 8);
    local_70 = 0;
    if (__s == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar6 + 0x10));
    }
    else {
      local_60 = strlen(__s);
      local_68 = __s;
      String::parse_latin1((StrRange *)&local_70);
    }
  }
  uVar2 = String::begins_with((char *)&local_70);
  if ((char)uVar2 == '\0') {
    uVar2 = 0;
    goto LAB_00104b4b;
  }
  iVar4 = (int)(CowData<char32_t> *)&local_70;
  wVar5 = (wchar32)(CowData<char32_t> *)&local_68;
  String::get_slicec(wVar5,iVar4);
  cVar1 = operator==("x",(String *)&local_68);
  if (cVar1 == '\0') {
    lVar6 = 1;
    cVar1 = operator==("y",(String *)&local_68);
    if (cVar1 == '\0') {
      lVar6 = 2;
      cVar1 = operator==("z",(String *)&local_68);
      if (cVar1 == '\0') {
        uVar2 = 0;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        goto LAB_00104b4b;
      }
    }
  }
  else {
    lVar6 = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  String::get_slicec(wVar5,iVar4);
  cVar1 = operator==("linear_limit_enabled",(String *)&local_68);
  if (cVar1 == '\0') {
    cVar1 = operator==("linear_limit_upper",(String *)&local_68);
    if (cVar1 == '\0') {
      cVar1 = operator==("linear_limit_lower",(String *)&local_68);
      if (cVar1 == '\0') {
        cVar1 = operator==("linear_limit_softness",(String *)&local_68);
        if (cVar1 == '\0') {
          cVar1 = operator==("linear_spring_enabled",(String *)&local_68);
          if (cVar1 == '\0') {
            cVar1 = operator==("linear_spring_stiffness",(String *)&local_68);
            if (cVar1 == '\0') {
              cVar1 = operator==("linear_spring_damping",(String *)&local_68);
              if (cVar1 == '\0') {
                cVar1 = operator==("linear_equilibrium_point",(String *)&local_68);
                if (cVar1 == '\0') {
                  cVar1 = operator==("linear_restitution",(String *)&local_68);
                  iVar4 = (int)lVar6;
                  if (cVar1 == '\0') {
                    cVar1 = operator==("linear_damping",(String *)&local_68);
                    if (cVar1 == '\0') {
                      cVar1 = operator==("angular_limit_enabled",(String *)&local_68);
                      if (cVar1 != '\0') {
                        SVar3 = this[(long)iVar4 * 0x54 + 0x30];
                        goto LAB_00104cc4;
                      }
                      cVar1 = operator==("angular_limit_upper",(String *)&local_68);
                      if (cVar1 == '\0') {
                        cVar1 = operator==("angular_limit_lower",(String *)&local_68);
                        if (cVar1 == '\0') {
                          cVar1 = operator==("angular_limit_softness",(String *)&local_68);
                          if (cVar1 == '\0') {
                            cVar1 = operator==("angular_restitution",(String *)&local_68);
                            if (cVar1 == '\0') {
                              cVar1 = operator==("angular_damping",(String *)&local_68);
                              if (cVar1 == '\0') {
                                cVar1 = operator==("erp",(String *)&local_68);
                                if (cVar1 == '\0') {
                                  cVar1 = operator==("angular_spring_enabled",(String *)&local_68);
                                  if (cVar1 != '\0') {
                                    SVar3 = this[(long)iVar4 * 0x54 + 0x4c];
                                    goto LAB_00104cc4;
                                  }
                                  cVar1 = operator==("angular_spring_stiffness",(String *)&local_68)
                                  ;
                                  if (cVar1 == '\0') {
                                    cVar1 = operator==("angular_spring_damping",(String *)&local_68)
                                    ;
                                    if (cVar1 == '\0') {
                                      cVar1 = operator==("angular_equilibrium_point",
                                                         (String *)&local_68);
                                      if (cVar1 == '\0') {
                                        uVar2 = 0;
                                        goto LAB_00104b43;
                                      }
                                      fVar7 = *(float *)(this + (long)iVar4 * 0x54 + 0x58);
                                    }
                                    else {
                                      fVar7 = *(float *)(this + (long)iVar4 * 0x54 + 0x54);
                                    }
                                  }
                                  else {
                                    fVar7 = *(float *)(this + (long)iVar4 * 0x54 + 0x50);
                                  }
                                }
                                else {
                                  fVar7 = *(float *)(this + (long)iVar4 * 0x54 + 0x48);
                                }
                              }
                              else {
                                fVar7 = *(float *)(this + (long)iVar4 * 0x54 + 0x44);
                              }
                            }
                            else {
                              fVar7 = *(float *)(this + (long)iVar4 * 0x54 + 0x40);
                            }
                          }
                          else {
                            fVar7 = *(float *)(this + (long)iVar4 * 0x54 + 0x3c);
                          }
                          goto LAB_00104dda;
                        }
                        Variant::Variant((Variant *)local_58,
                                         _LC44 * *(float *)(this + (long)iVar4 * 0x54 + 0x38));
                      }
                      else {
                        Variant::Variant((Variant *)local_58,
                                         _LC44 * *(float *)(this + (long)iVar4 * 0x54 + 0x34));
                      }
                      goto LAB_00104c06;
                    }
                    fVar7 = *(float *)(this + (long)iVar4 * 0x54 + 0x1c);
                  }
                  else {
                    fVar7 = *(float *)(this + (long)iVar4 * 0x54 + 0x18);
                  }
LAB_00104dda:
                  Variant::Variant((Variant *)local_58,fVar7);
                  Variant::operator=(param_2,(Variant *)local_58);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  goto LAB_00104b43;
                }
                Variant::Variant((Variant *)local_58,*(float *)(this + lVar6 * 0x54 + 0x2c));
              }
              else {
                Variant::Variant((Variant *)local_58,*(float *)(this + lVar6 * 0x54 + 0x28));
              }
            }
            else {
              Variant::Variant((Variant *)local_58,*(float *)(this + lVar6 * 0x54 + 0x24));
            }
          }
          else {
            SVar3 = this[lVar6 * 0x54 + 0x20];
LAB_00104cc4:
            Variant::Variant((Variant *)local_58,(bool)SVar3);
          }
        }
        else {
          Variant::Variant((Variant *)local_58,*(float *)(this + lVar6 * 0x54 + 0x14));
        }
      }
      else {
        Variant::Variant((Variant *)local_58,*(float *)(this + lVar6 * 0x54 + 0x10));
      }
    }
    else {
      Variant::Variant((Variant *)local_58,*(float *)(this + lVar6 * 0x54 + 0xc));
    }
LAB_00104c06:
    Variant::operator=(param_2,(Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    Variant::Variant((Variant *)local_58,(bool)this[lVar6 * 0x54 + 8]);
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(int *)param_2 = local_58[0];
    *(undefined8 *)(param_2 + 8) = local_50;
    *(undefined8 *)(param_2 + 0x10) = uStack_48;
  }
LAB_00104b43:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00104b4b:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::SliderJointData::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const
    */

void __thiscall
PhysicalBone3D::SliderJointData::_get_property_list(SliderJointData *this,List *param_1)

{
  long in_FS_OFFSET;
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
  local_88 = 0;
  local_78 = "";
  local_90 = 0;
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/linear_limit_upper";
  local_70 = 0x24;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105180:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00105180;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "";
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/linear_limit_lower";
  local_70 = 0x24;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001052c8:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_001052c8;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "0.01,16.0,0.01";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/linear_limit_softness";
  local_70 = 0x27;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105428:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00105428;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "0.01,16.0,0.01";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/linear_limit_restitution";
  local_70 = 0x2a;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105578:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00105578;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_78 = "0,16.0,0.01";
  local_90 = 0;
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/linear_limit_damping";
  local_70 = 0x26;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001056d8:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_001056d8;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "-180,180,0.01";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_upper";
  local_70 = 0x25;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105838:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00105838;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "-180,180,0.01";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_lower";
  local_70 = 0x25;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105988:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00105988;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "0.01,16.0,0.01";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_softness";
  local_70 = 0x28;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105ad8:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00105ad8;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "0.01,16.0,0.01";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_restitution";
  local_70 = 0x2b;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00105c28:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00105c28;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  local_88 = 0;
  local_78 = "0,16.0,0.01";
  local_90 = 0;
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_damping";
  local_70 = 0x27;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 != 0) {
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
      goto LAB_00105d87;
    }
  }
  local_50 = 6;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00105d87:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PhysicalBone3D::SixDOFJointData::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const
    */

void __thiscall
PhysicalBone3D::SixDOFJointData::_get_property_list(SixDOFJointData *this,List *param_1)

{
  StringName *pSVar1;
  long in_FS_OFFSET;
  StringName *local_d0;
  String local_b8 [8];
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  long local_78;
  int local_70;
  undefined8 local_68;
  undefined4 local_60;
  StringName local_58 [8];
  StringName local_50 [8];
  StringName local_48 [8];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName(local_58,"x",false);
  StringName::StringName(local_50,"y",false);
  StringName::StringName(local_48,"z",false);
  pSVar1 = (StringName *)local_40;
  local_d0 = local_58;
  do {
    StringName::StringName((StringName *)&local_90,local_d0);
    local_88 = "%s/%s/";
    local_98 = 0;
    local_80 = 6;
    String::parse_latin1((StrRange *)&local_98);
    vformat<char_const*,StringName>
              (local_b8,(StrRange *)&local_98,"joint_constraints",(StringName *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "linear_limit_enabled";
    local_b0 = 0;
    local_80 = 0x14;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,1);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_0010819b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_0010819b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "linear_limit_upper";
    local_b0 = 0;
    local_80 = 0x12;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_0010817b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_0010817b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "linear_limit_lower";
    local_b0 = 0;
    local_80 = 0x12;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_0010815b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_0010815b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "0.01,16,0.01";
    local_a0 = 0;
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "linear_limit_softness";
    local_b0 = 0;
    local_80 = 0x15;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 1;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_0010813b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_0010813b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "linear_spring_enabled";
    local_b0 = 0;
    local_80 = 0x15;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,1);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_0010811b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_0010811b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "linear_spring_stiffness";
    local_b0 = 0;
    local_80 = 0x17;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_001080fb:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_001080fb;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "linear_spring_damping";
    local_b0 = 0;
    local_80 = 0x15;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_001080db:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_001080db;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "linear_equilibrium_point";
    local_b0 = 0;
    local_80 = 0x18;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_001080bb:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_001080bb;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "0.01,16,0.01";
    local_a0 = 0;
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "linear_restitution";
    local_b0 = 0;
    local_80 = 0x12;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 1;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_0010809b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_0010809b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "0.01,16,0.01";
    local_a0 = 0;
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "linear_damping";
    local_b0 = 0;
    local_80 = 0xe;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 1;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_0010807b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_0010807b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "angular_limit_enabled";
    local_b0 = 0;
    local_80 = 0x15;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,1);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_0010805b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_0010805b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "-180,180,0.01";
    local_a0 = 0;
    local_80 = 0xd;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "angular_limit_upper";
    local_b0 = 0;
    local_80 = 0x13;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 1;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_0010803b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_0010803b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "-180,180,0.01";
    local_a0 = 0;
    local_80 = 0xd;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "angular_limit_lower";
    local_b0 = 0;
    local_80 = 0x13;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 1;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_0010801b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_0010801b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "0.01,16,0.01";
    local_a0 = 0;
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "angular_limit_softness";
    local_b0 = 0;
    local_80 = 0x16;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 1;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_00107ffb:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_00107ffb;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "0.01,16,0.01";
    local_a0 = 0;
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "angular_restitution";
    local_b0 = 0;
    local_80 = 0x13;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 1;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_00107fdb:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_00107fdb;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "0.01,16,0.01";
    local_a0 = 0;
    local_80 = 0xc;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "angular_damping";
    local_b0 = 0;
    local_80 = 0xf;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 1;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_00107fbb:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_00107fbb;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "erp";
    local_b0 = 0;
    local_80 = 3;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_00107f9b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_00107f9b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "angular_spring_enabled";
    local_b0 = 0;
    local_80 = 0x16;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,1);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_00107f7b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_00107f7b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "angular_spring_stiffness";
    local_b0 = 0;
    local_80 = 0x18;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_00107f5b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_00107f5b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "angular_spring_damping";
    local_b0 = 0;
    local_80 = 0x16;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_00107f3b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_00107f3b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    local_98 = 0;
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "angular_equilibrium_point";
    local_b0 = 0;
    local_80 = 0x19;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,local_b8);
    local_88 = (char *)CONCAT44(local_88._4_4_,3);
    local_80 = 0;
    if (local_a8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_a8);
    }
    local_78 = 0;
    local_70 = 0;
    local_68 = 0;
    if (local_a0 == 0) {
LAB_00107f1b:
      local_60 = 6;
      StringName::operator=((StringName *)&local_78,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_a0);
      local_60 = 6;
      if (local_70 != 0x11) goto LAB_00107f1b;
      StringName::StringName((StringName *)&local_90,(String *)&local_68,false);
      if (local_78 == local_90) {
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_78 = local_90;
      }
    }
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_88);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    local_d0 = local_d0 + 8;
    if (pSVar1 == local_d0) {
      do {
        pSVar1 = pSVar1 + -8;
        if ((StringName::configured != '\0') && (*(long *)pSVar1 != 0)) {
          StringName::unref();
        }
      } while (pSVar1 != local_58);
      if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
  } while( true );
}



/* PhysicalBone3D::_set(StringName const&, Variant const&) */

undefined4 __thiscall
PhysicalBone3D::_set(PhysicalBone3D *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = StringName::operator==(param_1,"bone_name");
  if ((char)uVar3 == '\0') {
    plVar1 = *(long **)(this + 0x628);
    if (plVar1 == (long *)0x0) goto LAB_0010855f;
    cVar2 = (**(code **)(*plVar1 + 8))(plVar1,param_1,param_2,*(undefined8 *)(this + 0x660));
    if (cVar2 == '\0') goto LAB_0010855f;
    Node3D::update_gizmos();
  }
  else {
    Variant::operator_cast_to_String((Variant *)&local_38);
    if (*(long *)(this + 0x6d8) != local_38) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x6d8),(CowData *)&local_38);
    }
    *(undefined4 *)(this + 0x6d4) = 0xffffffff;
    update_bone_id(this);
    reset_to_rest_position(this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  }
  uVar3 = 1;
LAB_0010855f:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::~PhysicalBone3D() */

void __thiscall PhysicalBone3D::~PhysicalBone3D(PhysicalBone3D *this)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 0x628);
  *(undefined ***)this = &PTR__initialize_classv_0011de40;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
    Memory::free_static(plVar4,false);
  }
  lVar3 = PhysicsServer3D::get_singleton();
  if (lVar3 == 0) {
    _err_print_error("~PhysicalBone3D","scene/3d/physics/physical_bone_3d.cpp",0x509,
                     "Parameter \"PhysicsServer3D::get_singleton()\" is null.",0,0);
    if ((StringName::configured != '\0') && (*(long *)(this + 0x720) != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x6d8));
  }
  else {
    plVar4 = (long *)PhysicsServer3D::get_singleton();
    (**(code **)(*plVar4 + 0x6e8))(plVar4);
    if ((StringName::configured != '\0') && (*(long *)(this + 0x720) != 0)) {
      StringName::unref();
    }
    if (*(long *)(this + 0x6d8) != 0) {
      LOCK();
      plVar4 = (long *)(*(long *)(this + 0x6d8) + -0x10);
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
        lVar3 = *(long *)(this + 0x6d8);
        *(undefined8 *)(this + 0x6d8) = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  *(code **)this = CollisionObject3D::~CollisionObject3D;
  if (*(long *)(this + 0x618) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x618);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        CollisionObject3D::~CollisionObject3D((CollisionObject3D *)this);
        return;
      }
    }
  }
  CollisionObject3D::~CollisionObject3D((CollisionObject3D *)this);
  return;
}



/* PhysicalBone3D::~PhysicalBone3D() */

void __thiscall PhysicalBone3D::~PhysicalBone3D(PhysicalBone3D *this)

{
  ~PhysicalBone3D(this);
  operator_delete(this,0x738);
  return;
}



/* PhysicalBone3D::PinJointData::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall PhysicalBone3D::PinJointData::_get_property_list(PinJointData *this,List *param_1)

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
  local_88 = 0;
  local_90 = 0;
  local_78 = "0.01,0.99,0.01";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/bias";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001088dd:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_001088dd;
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
  local_a8 = (StringName *)&local_68;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "0.01,8.0,0.01";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/damping";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00108a58:
    local_50 = 6;
    StringName::operator=(local_a8,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00108a58;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "0.0,64.0,0.01";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/impulse_clamp";
  local_70 = 0x1f;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00108bf8:
    local_50 = 6;
    StringName::operator=(local_a8,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00108bf8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00108c11;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00108c11:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
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
  *(long **)(puVar4 + 0x10) = plVar1;
  *(undefined8 *)(puVar4 + 0xc) = 0;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall PhysicalBone3D::_get_property_list(PhysicalBone3D *this,List *param_1)

{
  char *__s;
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  size_t local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = get_simulator(this);
  if ((lVar2 == 0) || (lVar2 = SkeletonModifier3D::get_skeleton(), lVar2 == 0)) {
    local_88 = 0;
    local_78 = "";
    local_90 = 0;
    local_70 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = "bone_name";
    local_70 = 9;
    String::parse_latin1((StrRange *)&local_98);
    local_78 = (char *)CONCAT44(local_78._4_4_,0x15);
    local_70 = 0;
    if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    }
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    if (local_90 == 0) {
LAB_001091f8:
      local_50 = 6;
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_001091f8;
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
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
joined_r0x001091b0:
    if (StringName::configured == '\0') goto LAB_0010902a;
  }
  else {
    local_88 = 0;
    Skeleton3D::get_concatenated_bone_names();
    if (local_a0 == 0) {
LAB_00108f81:
      local_90 = 0;
    }
    else {
      __s = *(char **)(local_a0 + 8);
      local_90 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(local_a0 + 0x10) == 0) goto LAB_00108f81;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(local_a0 + 0x10));
      }
      else {
        local_70 = strlen(__s);
        local_78 = __s;
        String::parse_latin1((StrRange *)&local_90);
      }
    }
    local_98 = 0;
    local_78 = "bone_name";
    local_70 = 9;
    String::parse_latin1((StrRange *)&local_98);
    local_78 = (char *)CONCAT44(local_78._4_4_,0x15);
    local_70 = 0;
    if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
    }
    local_68 = 0;
    local_60 = 2;
    local_58 = 0;
    if (local_90 == 0) {
LAB_00108f9d:
      local_50 = 6;
      StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00108f9d;
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
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if (StringName::configured == '\0') goto LAB_0010902a;
    if (local_a0 != 0) {
      StringName::unref();
      goto joined_r0x001091b0;
    }
  }
  if (local_88 != 0) {
    StringName::unref();
  }
LAB_0010902a:
  plVar1 = *(long **)(this + 0x628);
  if (plVar1 == (long *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010906c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x18))(plVar1,param_1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::ConeJointData::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void __thiscall PhysicalBone3D::ConeJointData::_get_property_list(ConeJointData *this,List *param_1)

{
  long in_FS_OFFSET;
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
  local_88 = 0;
  local_90 = 0;
  local_78 = "-180,180,0.01";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/swing_span";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001093dd:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_001093dd;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "-40000,40000,0.1,or_less,or_greater";
  local_90 = 0;
  local_70 = 0x23;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/twist_span";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00109558:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00109558;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "0.01,16.0,0.01";
  local_90 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/bias";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001096d0:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_001096d0;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "0.01,16.0,0.01";
  local_90 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/softness";
  local_70 = 0x1a;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00109848:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00109848;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "0.01,16.0,0.01";
  local_90 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/relaxation";
  local_70 = 0x1c;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 != 0) {
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
      goto LAB_001099cf;
    }
  }
  local_50 = 6;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001099cf:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PhysicalBone3D::HingeJointData::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const
    */

void __thiscall
PhysicalBone3D::HingeJointData::_get_property_list(HingeJointData *this,List *param_1)

{
  long in_FS_OFFSET;
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
  local_88 = 0;
  local_90 = 0;
  local_78 = "";
  local_70 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_enabled";
  local_70 = 0x27;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,1);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00109c5d:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00109c5d;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "-180,180,0.01";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_upper";
  local_70 = 0x25;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00109dd8:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00109dd8;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "-180,180,0.01";
  local_90 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_lower";
  local_70 = 0x25;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00109f50:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00109f50;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "0.01,0.99,0.01";
  local_90 = 0;
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_bias";
  local_70 = 0x24;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010a0c8:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0010a0c8;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "0.01,16,0.01";
  local_90 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_softness";
  local_70 = 0x28;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010a240:
    local_50 = 6;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0010a240;
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
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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
  local_88 = 0;
  local_78 = "0.01,16,0.01";
  local_90 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "joint_constraints/angular_limit_relaxation";
  local_70 = 0x2a;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)CONCAT44(local_78._4_4_,3);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 1;
  local_58 = 0;
  if (local_90 != 0) {
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
      goto LAB_0010a3c7;
    }
  }
  local_50 = 6;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a3c7:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
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



/* Vector<int>::push_back(int) [clone .isra.0] */

void __thiscall Vector<int>::push_back(Vector<int> *this,int param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<int>::resize<false>((CowData<int> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<int>::_copy_on_write((CowData<int> *)(this + 8));
        *(int *)(*(long *)(this + 8) + lVar3 * 4) = param_1;
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* PhysicalBone3D::_bind_methods() */

void PhysicalBone3D::_bind_methods(void)

{
  long *plVar1;
  CowData<char32_t> *this;
  char cVar2;
  code *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  int *piVar12;
  undefined *puVar13;
  int iVar14;
  MethodBind *pMVar15;
  undefined *puVar16;
  int *piVar17;
  long lVar18;
  long lVar19;
  long in_FS_OFFSET;
  bool bVar20;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  long local_170;
  long local_168;
  long local_160;
  char *local_158;
  undefined8 local_150;
  StringName local_148 [8];
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  char *local_128;
  long local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [2];
  int *local_d8;
  undefined8 local_d0;
  Vector<int> local_c8 [8];
  long local_c0;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  Variant *local_98;
  char *pcStack_90;
  undefined8 local_88;
  Variant **local_78;
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHOD<char_const*>((char *)&local_128,"apply_central_impulse");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Vector3_const&>(apply_central_impulse);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_b0 = 0;
  auStack_70._0_8_ = &pcStack_90;
  local_98 = (Variant *)0x10f384;
  pcStack_90 = "position";
  local_a8 = 0;
  local_88 = 0;
  local_78 = &local_98;
  D_METHODP((char *)&local_128,(char ***)"apply_impulse",(uint)(Variant *)&local_78);
  local_a4 = local_b0;
  local_9c = local_a8;
  Variant::Variant((Variant *)&local_78,(Vector3 *)&local_a4);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_98 = (Variant *)&local_78;
  pMVar15 = create_method_bind<PhysicalBone3D,Vector3_const&,Vector3_const&>(apply_impulse);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,&local_98,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[(int)local_78];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_joint_type");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,PhysicalBone3D::JointType>(set_joint_type);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_joint_type",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,PhysicalBone3D::JointType>(get_joint_type);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_joint_offset");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Transform3D_const&>(set_joint_offset);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_joint_offset",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Transform3D_const&>(get_joint_offset);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_joint_rotation");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Vector3_const&>(set_joint_rotation);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_joint_rotation",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Vector3>(get_joint_rotation);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_body_offset");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Transform3D_const&>(set_body_offset);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_body_offset",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Transform3D_const&>(get_body_offset);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_simulate_physics",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,bool>(get_simulate_physics);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"is_simulating_physics",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,bool>(is_simulating_physics);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_bone_id",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,int>(get_bone_id);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_mass");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(set_mass);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_mass",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(get_mass);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_friction");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(set_friction);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_friction",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(get_friction);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_bounce");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(set_bounce);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_bounce",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(get_bounce);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_gravity_scale");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(set_gravity_scale);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_gravity_scale",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(get_gravity_scale);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_linear_damp_mode");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,PhysicalBone3D::DampMode>(set_linear_damp_mode);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_linear_damp_mode",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,PhysicalBone3D::DampMode>(get_linear_damp_mode);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_angular_damp_mode");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,PhysicalBone3D::DampMode>(set_angular_damp_mode);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_angular_damp_mode",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,PhysicalBone3D::DampMode>(get_angular_damp_mode);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_linear_damp");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(set_linear_damp);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_linear_damp",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(get_linear_damp);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_angular_damp");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(set_angular_damp);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_angular_damp",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,float>(get_angular_damp);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_linear_velocity");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Vector3_const&>(set_linear_velocity);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_linear_velocity",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Vector3>((_func_Vector3 *)0x1f9);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_angular_velocity");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Vector3_const&>(set_angular_velocity);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"get_angular_velocity",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,Vector3>((_func_Vector3 *)0x201);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_use_custom_integrator");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,bool>(set_use_custom_integrator);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"is_using_custom_integrator",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,bool>(is_using_custom_integrator);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHOD<char_const*>((char *)&local_128,"set_can_sleep");
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,bool>(set_can_sleep);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  D_METHODP((char *)&local_128,(char ***)"is_able_to_sleep",0);
  auStack_70 = (undefined1  [16])0x0;
  local_78 = (Variant **)0x0;
  pMVar15 = create_method_bind<PhysicalBone3D,bool>(is_able_to_sleep);
  ClassDB::bind_methodfi(1,pMVar15,false,(MethodDefinition *)&local_128,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_128);
  local_128 = "state";
  local_160 = 0;
  local_158 = (char *)0x0;
  local_120 = 5;
  String::parse_latin1((StrRange *)&local_158);
  local_128 = (char *)0x0;
  plVar1 = (long *)((long)local_158 + -0x10);
  if (local_158 != (char *)0x0) {
    do {
      lVar18 = *plVar1;
      if (lVar18 == 0) goto LAB_0010b89c;
      LOCK();
      lVar19 = *plVar1;
      bVar20 = lVar18 == lVar19;
      if (bVar20) {
        *plVar1 = lVar18 + 1;
        lVar19 = lVar18;
      }
      UNLOCK();
    } while (!bVar20);
    if (lVar19 != -1) {
      local_128 = local_158;
    }
  }
LAB_0010b89c:
  if (local_160 == 0) {
    lVar18 = 1;
  }
  else {
    lVar18 = *(long *)(local_160 + -8) + 1;
  }
  iVar14 = CowData<String>::resize<false>((CowData<String> *)&local_160,lVar18);
  if (iVar14 == 0) {
    if (local_160 == 0) {
      lVar19 = -1;
      lVar18 = 0;
    }
    else {
      lVar18 = *(long *)(local_160 + -8);
      lVar19 = lVar18 + -1;
      if (-1 < lVar19) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_160);
        this = (CowData<char32_t> *)(local_160 + lVar19 * 8);
        if ((char *)*(long *)this != local_128) {
          CowData<char32_t>::_ref(this,(CowData *)&local_128);
        }
        goto LAB_0010b911;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar19,lVar18,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010b911:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_118 = (undefined1  [16])0x0;
  local_158 = "_integrate_forces";
  local_128 = (char *)0x0;
  local_120 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 6;
  local_f0 = 1;
  local_e8[0] = 0;
  local_d8 = (int *)0x0;
  local_d0 = 0;
  local_c0 = 0;
  local_150 = 0x11;
  String::parse_latin1((StrRange *)&local_128);
  local_158 = "PhysicsDirectBodyState3D";
  local_f0 = CONCAT44(local_f0._4_4_,8);
  local_170 = 0;
  local_150 = 0x18;
  String::parse_latin1((StrRange *)&local_170);
  StringName::StringName((StringName *)&local_178,(String *)&local_170,false);
  local_158 = (char *)CONCAT44(local_158._4_4_,0x18);
  local_150 = 0;
  StringName::StringName(local_148,(StringName *)&local_178);
  local_140 = 0;
  local_138 = 0;
  local_130 = 6;
  if ((StringName::configured != '\0') && (local_178 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_e8,(PropertyInfo *)&local_158);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  Vector<int>::push_back(local_c8,0);
  local_158 = "PhysicalBone3D";
  local_170 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_170);
  StringName::StringName((StringName *)&local_158,(String *)&local_170,false);
  ClassDB::add_virtual_method
            ((StringName *)&local_158,(MethodInfo *)&local_128,true,(Vector *)&local_168,false);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  lVar18 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar18 + -0x10),false);
    }
  }
  piVar12 = local_d8;
  if (local_d8 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_d8 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar18 = *(long *)(local_d8 + -2);
      lVar19 = 0;
      local_d8 = (int *)0x0;
      piVar17 = piVar12;
      if (lVar18 != 0) {
        do {
          if (Variant::needs_deinit[*piVar17] != '\0') {
            Variant::_clear_internal();
          }
          lVar19 = lVar19 + 1;
          piVar17 = piVar17 + 6;
        } while (lVar18 != lVar19);
      }
      Memory::free_static(piVar12 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<String>::_unref((CowData<String> *)&local_160);
  local_128 = "joint_";
  local_158 = (char *)0x0;
  local_120 = 6;
  String::parse_latin1((StrRange *)&local_158);
  local_128 = "Joint";
  local_168 = 0;
  local_120 = 5;
  String::parse_latin1((StrRange *)&local_168);
  local_128 = "PhysicalBone3D";
  local_170 = 0;
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_170);
  StringName::StringName((StringName *)&local_128,(String *)&local_170,false);
  ClassDB::add_property_group((StringName *)&local_128,(String *)&local_168,(String *)&local_158,0);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "None,PinJoint,ConeJoint,HingeJoint,SliderJoint,6DOFJoint";
  local_178 = 0;
  local_180 = 0;
  local_120 = 0x38;
  String::parse_latin1((StrRange *)&local_180);
  local_188 = 0;
  local_128 = "joint_type";
  local_120 = 10;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,2,(StrRange *)&local_188,2,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_190 = 0;
  local_158 = "PhysicalBone3D";
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "suffix:m";
  local_178 = 0;
  local_180 = 0;
  local_120 = 8;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "joint_offset";
  local_188 = 0;
  local_120 = 0xc;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,0x12,(StrRange *)&local_188,0,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if (((StringName::configured != '\0') &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_168 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "-360,360,0.01,or_less,or_greater,radians_as_degrees";
  local_178 = 0;
  local_180 = 0;
  local_120 = 0x33;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "joint_rotation";
  local_188 = 0;
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,9,(StrRange *)&local_188,1,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "suffix:m";
  local_178 = 0;
  local_180 = 0;
  local_120 = 8;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "body_offset";
  local_188 = 0;
  local_120 = 0xb;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,0x12,(StrRange *)&local_188,0,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if (((StringName::configured != '\0') &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_168 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "0.01,1000,0.01,or_greater,exp,suffix:kg";
  local_178 = 0;
  local_180 = 0;
  local_120 = 0x27;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "mass";
  local_188 = 0;
  local_120 = 4;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,3,(StrRange *)&local_188,1,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "0,1,0.01";
  local_178 = 0;
  local_180 = 0;
  local_120 = 8;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "friction";
  local_188 = 0;
  local_120 = 8;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,3,(StrRange *)&local_188,1,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "0,1,0.01";
  local_178 = 0;
  local_180 = 0;
  local_120 = 8;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "bounce";
  local_188 = 0;
  local_120 = 6;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,3,(StrRange *)&local_188,1,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "-8,8,0.001,or_less,or_greater";
  local_178 = 0;
  local_180 = 0;
  local_120 = 0x1d;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "gravity_scale";
  local_188 = 0;
  local_120 = 0xd;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,3,(StrRange *)&local_188,1,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if (((StringName::configured != '\0') &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_168 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "";
  local_178 = 0;
  local_180 = 0;
  local_120 = 0;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "custom_integrator";
  local_188 = 0;
  local_120 = 0x11;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,1,(StrRange *)&local_188,0,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "Combine,Replace";
  local_178 = 0;
  local_180 = 0;
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "linear_damp_mode";
  local_188 = 0;
  local_120 = 0x10;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,2,(StrRange *)&local_188,2,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "0,100,0.001,or_greater";
  local_178 = 0;
  local_180 = 0;
  local_120 = 0x16;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "linear_damp";
  local_188 = 0;
  local_120 = 0xb;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,3,(StrRange *)&local_188,1,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "Combine,Replace";
  local_178 = 0;
  local_180 = 0;
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "angular_damp_mode";
  local_188 = 0;
  local_120 = 0x11;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,2,(StrRange *)&local_188,2,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "0,100,0.001,or_greater";
  local_178 = 0;
  local_180 = 0;
  local_120 = 0x16;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "angular_damp";
  local_188 = 0;
  local_120 = 0xc;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,3,(StrRange *)&local_188,1,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "suffix:m/s";
  local_178 = 0;
  local_180 = 0;
  local_120 = 10;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "linear_velocity";
  local_188 = 0;
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,9,(StrRange *)&local_188,0,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if (((StringName::configured != '\0') &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_168 != 0)
      ))) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_178 = 0;
  local_180 = 0;
  puVar13 = &_LC134;
  do {
    puVar16 = puVar13;
    puVar13 = puVar16 + 4;
  } while (*(int *)(puVar16 + 4) != 0);
  local_128 = "r";
  local_120 = (long)(puVar16 + -0x116694) >> 2;
  String::parse_utf32((StrRange *)&local_180);
  local_128 = "angular_velocity";
  local_188 = 0;
  local_120 = 0x10;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,9,(StrRange *)&local_188,0,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if ((((StringName::configured != '\0') &&
       ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_168 != 0)) {
    StringName::unref();
  }
  _scs_create((char *)&local_168,true);
  _scs_create((char *)&local_170,true);
  local_128 = "";
  local_178 = 0;
  local_180 = 0;
  local_120 = 0;
  String::parse_latin1((StrRange *)&local_180);
  local_128 = "can_sleep";
  local_188 = 0;
  local_120 = 9;
  String::parse_latin1((StrRange *)&local_188);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,1,(StrRange *)&local_188,0,(StrRange *)&local_180,6,
             (StringName *)&local_178);
  local_158 = "PhysicalBone3D";
  local_190 = 0;
  local_150 = 0xe;
  String::parse_latin1((StrRange *)&local_190);
  StringName::StringName((StringName *)&local_158,(String *)&local_190,false);
  ClassDB::add_property
            ((StringName *)&local_158,(PropertyInfo *)&local_128,(StringName *)&local_170,
             (StringName *)&local_168,-1);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_190);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_180);
  if (((StringName::configured != '\0') &&
      ((local_178 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (((local_170 == 0 || (StringName::unref(), StringName::configured != '\0')) && (local_168 != 0)
      ))) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"DAMP_MODE_COMBINE",false);
  local_170 = 0;
  local_128 = "DAMP_MODE_COMBINE";
  local_120 = 0x11;
  String::parse_latin1((StrRange *)&local_170);
  GetTypeInfo<PhysicalBone3D::DampMode,void>::get_class_info
            ((GetTypeInfo<PhysicalBone3D::DampMode,void> *)&local_128);
  local_168 = local_118._0_8_;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = local_118._8_8_;
  local_118 = auVar4 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_128 = "PhysicalBone3D";
  local_178 = 0;
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_128,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_128,(StringName *)&local_168,(StringName *)&local_158,0,false);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"DAMP_MODE_REPLACE",false);
  local_170 = 0;
  local_128 = "DAMP_MODE_REPLACE";
  local_120 = 0x11;
  String::parse_latin1((StrRange *)&local_170);
  GetTypeInfo<PhysicalBone3D::DampMode,void>::get_class_info
            ((GetTypeInfo<PhysicalBone3D::DampMode,void> *)&local_128);
  local_168 = local_118._0_8_;
  auVar5._8_8_ = 0;
  auVar5._0_8_ = local_118._8_8_;
  local_118 = auVar5 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_128 = "PhysicalBone3D";
  local_178 = 0;
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_128,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_128,(StringName *)&local_168,(StringName *)&local_158,1,false);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"JOINT_TYPE_NONE",false);
  local_170 = 0;
  local_128 = "JOINT_TYPE_NONE";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_170);
  GetTypeInfo<PhysicalBone3D::JointType,void>::get_class_info
            ((GetTypeInfo<PhysicalBone3D::JointType,void> *)&local_128);
  local_168 = local_118._0_8_;
  auVar6._8_8_ = 0;
  auVar6._0_8_ = local_118._8_8_;
  local_118 = auVar6 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_128 = "PhysicalBone3D";
  local_178 = 0;
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_128,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_128,(StringName *)&local_168,(StringName *)&local_158,0,false);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"JOINT_TYPE_PIN",false);
  local_170 = 0;
  local_128 = "JOINT_TYPE_PIN";
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_170);
  GetTypeInfo<PhysicalBone3D::JointType,void>::get_class_info
            ((GetTypeInfo<PhysicalBone3D::JointType,void> *)&local_128);
  local_168 = local_118._0_8_;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = local_118._8_8_;
  local_118 = auVar7 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_128 = "PhysicalBone3D";
  local_178 = 0;
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_128,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_128,(StringName *)&local_168,(StringName *)&local_158,1,false);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"JOINT_TYPE_CONE",false);
  local_170 = 0;
  local_128 = "JOINT_TYPE_CONE";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_170);
  GetTypeInfo<PhysicalBone3D::JointType,void>::get_class_info
            ((GetTypeInfo<PhysicalBone3D::JointType,void> *)&local_128);
  local_168 = local_118._0_8_;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = local_118._8_8_;
  local_118 = auVar8 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_128 = "PhysicalBone3D";
  local_178 = 0;
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_128,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_128,(StringName *)&local_168,(StringName *)&local_158,2,false);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"JOINT_TYPE_HINGE",false);
  local_170 = 0;
  local_128 = "JOINT_TYPE_HINGE";
  local_120 = 0x10;
  String::parse_latin1((StrRange *)&local_170);
  GetTypeInfo<PhysicalBone3D::JointType,void>::get_class_info
            ((GetTypeInfo<PhysicalBone3D::JointType,void> *)&local_128);
  local_168 = local_118._0_8_;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = local_118._8_8_;
  local_118 = auVar9 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_128 = "PhysicalBone3D";
  local_178 = 0;
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_128,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_128,(StringName *)&local_168,(StringName *)&local_158,3,false);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"JOINT_TYPE_SLIDER",false);
  local_170 = 0;
  local_128 = "JOINT_TYPE_SLIDER";
  local_120 = 0x11;
  String::parse_latin1((StrRange *)&local_170);
  GetTypeInfo<PhysicalBone3D::JointType,void>::get_class_info
            ((GetTypeInfo<PhysicalBone3D::JointType,void> *)&local_128);
  local_168 = local_118._0_8_;
  auVar10._8_8_ = 0;
  auVar10._0_8_ = local_118._8_8_;
  local_118 = auVar10 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_128 = "PhysicalBone3D";
  local_178 = 0;
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_128,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_128,(StringName *)&local_168,(StringName *)&local_158,4,false);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_158,"JOINT_TYPE_6DOF",false);
  local_170 = 0;
  local_128 = "JOINT_TYPE_6DOF";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_170);
  GetTypeInfo<PhysicalBone3D::JointType,void>::get_class_info
            ((GetTypeInfo<PhysicalBone3D::JointType,void> *)&local_128);
  local_168 = local_118._0_8_;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = local_118._8_8_;
  local_118 = auVar11 << 0x40;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_128 = "PhysicalBone3D";
  local_178 = 0;
  local_120 = 0xe;
  String::parse_latin1((StrRange *)&local_178);
  StringName::StringName((StringName *)&local_128,(String *)&local_178,false);
  ClassDB::bind_integer_constant
            ((StringName *)&local_128,(StringName *)&local_168,(StringName *)&local_158,5,false);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  if ((StringName::configured != '\0') && (local_168 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_170);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_body_state_changed(PhysicsDirectBodyState3D*) [clone .part.0] */

void __thiscall
PhysicalBone3D::_body_state_changed(PhysicalBone3D *this,PhysicsDirectBodyState3D *param_1)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  long local_1e8;
  undefined8 local_1e0;
  GetTypeInfo<PhysicsDirectBodyState3D*,void> local_1d8 [8];
  long local_1d0 [5];
  undefined8 local_1a8;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined1 local_198 [16];
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168 [2];
  undefined8 local_158;
  undefined8 local_150;
  Vector<int> local_148 [8];
  undefined8 local_140;
  Transform3D local_138 [48];
  Variant *local_108 [6];
  int local_d8 [12];
  Transform3D local_a8 [48];
  undefined8 *local_78 [7];
  long local_40;
  
  plVar5 = *(long **)(this + 0x98);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((plVar5 == (long *)0x0) ||
     (cVar1 = (**(code **)(*plVar5 + 0x50))(plVar5,this + 0x720), cVar1 == '\0')) {
    if ((*(long *)(this + 8) != 0) && (this[0x728] == (PhysicalBone3D)0x0)) {
      local_1a8._0_4_ = 0;
      local_1a8._4_4_ = 0;
      local_198 = (undefined1  [16])0x0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 6;
      local_170 = 1;
      local_168[0] = 0;
      local_158 = 0;
      local_150 = 0;
      local_140 = 0;
      String::parse_latin1((String *)&local_1a8,"_integrate_forces");
      local_170 = CONCAT44(local_170._4_4_,8);
      GetTypeInfo<PhysicsDirectBodyState3D*,void>::get_class_info(local_1d8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_168,(PropertyInfo *)local_1d8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
      Vector<int>::push_back(local_148,0);
      uVar2 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long *)(this + 8);
      *(undefined8 *)(this + 0x730) = 0;
      pcVar7 = *(code **)(lVar3 + 0xd8);
      if (((pcVar7 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (pcVar7 = *(code **)(lVar3 + 0xd0), pcVar7 == (code *)0x0)) {
        local_1e0 = 0;
        String::parse_latin1((String *)&local_1e0,"PhysicalBone3D");
        StringName::StringName((StringName *)&local_1e8,(String *)&local_1e0,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_1d8,(StringName *)&local_1e8);
        if (local_1d0[0] == 0) {
          lVar3 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1d0);
          if (StringName::configured != '\0') goto LAB_0010e8f0;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
LAB_0010e911:
          lVar3 = *(long *)(this + 8);
          pcVar7 = *(code **)(lVar3 + 200);
          if (((pcVar7 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (pcVar7 = *(code **)(lVar3 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010e82d;
          uVar6 = (*pcVar7)(*(undefined8 *)(lVar3 + 0xa0),this + 0x720);
          *(undefined8 *)(this + 0x730) = uVar6;
        }
        else {
          lVar3 = *(long *)(local_1d0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1d0);
          if (StringName::configured != '\0') {
LAB_0010e8f0:
            if (local_1e8 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
          if (lVar3 == 0) goto LAB_0010e911;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar6 = (*pcVar7)(*(undefined8 *)(lVar3 + 0xa0),this + 0x720,uVar2);
        *(undefined8 *)(this + 0x730) = uVar6;
        lVar3 = *(long *)(this + 8);
      }
LAB_0010e82d:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = (long)(this + 0x730);
        plVar5[1] = (long)(this + 0x728);
        plVar5[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar5;
      }
      this[0x728] = (PhysicalBone3D)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_1a8);
    }
    if (*(long *)(this + 0x730) == 0) goto LAB_0010e42d;
  }
  _sync_body_state(this,param_1);
  Node3D::get_global_transform();
  plVar5 = *(long **)(this + 0x98);
  if (plVar5 == (long *)0x0) {
LAB_0010e3bb:
    if ((*(long *)(this + 8) != 0) && (this[0x728] == (PhysicalBone3D)0x0)) {
      local_1a8._0_4_ = 0;
      local_1a8._4_4_ = 0;
      local_198 = (undefined1  [16])0x0;
      uStack_1a0 = 0;
      uStack_19c = 0;
      local_188 = 0;
      local_180 = 0;
      local_178 = 6;
      local_170 = 1;
      local_168[0] = 0;
      local_158 = 0;
      local_150 = 0;
      local_140 = 0;
      String::parse_latin1((String *)&local_1a8,"_integrate_forces");
      local_170 = CONCAT44(local_170._4_4_,8);
      GetTypeInfo<PhysicsDirectBodyState3D*,void>::get_class_info(local_1d8);
      List<PropertyInfo,DefaultAllocator>::push_back
                ((List<PropertyInfo,DefaultAllocator> *)local_168,(PropertyInfo *)local_1d8);
      PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
      Vector<int>::push_back(local_148,0);
      uVar2 = MethodInfo::get_compatibility_hash();
      *(undefined8 *)(this + 0x730) = 0;
      lVar3 = *(long *)(this + 8);
      pcVar7 = *(code **)(lVar3 + 0xd8);
      if (((pcVar7 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
         (pcVar7 = *(code **)(lVar3 + 0xd0), pcVar7 == (code *)0x0)) {
        local_1e0 = 0;
        String::parse_latin1((String *)&local_1e0,"PhysicalBone3D");
        StringName::StringName((StringName *)&local_1e8,(String *)&local_1e0,false);
        ClassDB::get_virtual_method_compatibility_hashes
                  ((StringName *)local_1d8,(StringName *)&local_1e8);
        if (local_1d0[0] == 0) {
          lVar3 = 0;
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1d0);
          if (StringName::configured != '\0') goto LAB_0010e9db;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
LAB_0010e9fc:
          lVar3 = *(long *)(this + 8);
          pcVar7 = *(code **)(lVar3 + 200);
          if (((pcVar7 == (code *)0x0) || (*(long *)(lVar3 + 0xe0) == 0)) &&
             (pcVar7 = *(code **)(lVar3 + 0xc0), pcVar7 == (code *)0x0)) goto LAB_0010e6bd;
          uVar6 = (*pcVar7)(*(undefined8 *)(lVar3 + 0xa0),this + 0x720);
          *(undefined8 *)(this + 0x730) = uVar6;
        }
        else {
          lVar3 = *(long *)(local_1d0[0] + -8);
          CowData<unsigned_int>::_unref((CowData<unsigned_int> *)local_1d0);
          if (StringName::configured != '\0') {
LAB_0010e9db:
            if (local_1e8 != 0) {
              StringName::unref();
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
          if (lVar3 == 0) goto LAB_0010e9fc;
        }
        lVar3 = *(long *)(this + 8);
      }
      else {
        uVar6 = (*pcVar7)(*(undefined8 *)(lVar3 + 0xa0),this + 0x720,uVar2);
        *(undefined8 *)(this + 0x730) = uVar6;
        lVar3 = *(long *)(this + 8);
      }
LAB_0010e6bd:
      if (*(char *)(lVar3 + 0x29) != '\0') {
        plVar5 = (long *)operator_new(0x18,"");
        *plVar5 = (long)(this + 0x730);
        plVar5[1] = (long)(this + 0x728);
        plVar5[2] = *(long *)(this + 0x168);
        *(long **)(this + 0x168) = plVar5;
      }
      this[0x728] = (PhysicalBone3D)0x1;
      MethodInfo::~MethodInfo((MethodInfo *)&local_1a8);
    }
    pcVar7 = *(code **)(this + 0x730);
    if (pcVar7 != (code *)0x0) {
      local_78[0] = &local_1a8;
      local_1a8 = param_1;
      if (*(code **)(*(long *)(this + 8) + 0xe0) == (code *)0x0) {
        (*pcVar7)(*(undefined8 *)(this + 0x10),local_78,0);
      }
      else {
        (**(code **)(*(long *)(this + 8) + 0xe0))
                  (*(undefined8 *)(this + 0x10),this + 0x720,pcVar7,local_78,0);
      }
    }
  }
  else {
    local_1a8._0_4_ = 0;
    local_1a8._4_4_ = 0;
    uStack_1a0 = 0;
    Variant::Variant((Variant *)local_d8,(Object *)param_1);
    local_108[0] = (Variant *)local_d8;
    (**(code **)(*plVar5 + 0x60))(local_78,plVar5,this + 0x720,local_108,1,&local_1a8);
    if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((int)local_1a8 != 0) {
      if (Variant::needs_deinit[local_d8[0]] != '\0') {
        Variant::_clear_internal();
      }
      goto LAB_0010e3bb;
    }
    if (Variant::needs_deinit[local_d8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  Node3D::get_global_transform();
  cVar1 = Transform3D::operator!=((Transform3D *)local_78,local_a8);
  if (cVar1 != '\0') {
    plVar5 = (long *)PhysicsServer3D::get_singleton();
    pcVar7 = *(code **)(*plVar5 + 0x3e0);
    Variant::Variant((Variant *)local_d8,(Transform3D *)local_78);
    (*pcVar7)(plVar5,*(undefined8 *)(this + 0x538),0,(Variant *)local_d8);
    if (Variant::needs_deinit[local_d8[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
LAB_0010e42d:
  _sync_body_state(this,param_1);
  CollisionObject3D::_on_transform_changed();
  (**(code **)(*(long *)param_1 + 0x1c0))(local_138,param_1);
  lVar3 = get_simulator(this);
  lVar4 = get_simulator(this);
  if (lVar4 != 0) {
    lVar4 = SkeletonModifier3D::get_skeleton();
    if (((lVar3 != 0) && (lVar4 != 0)) && (*(int *)(this + 0x6d4) != -1)) {
      Transform3D::operator*(local_a8,local_138);
      Node3D::get_global_transform();
      Transform3D::affine_inverse();
      Transform3D::operator*((Transform3D *)local_78,(Transform3D *)local_d8);
      PhysicalBoneSimulator3D::set_bone_global_pose
                ((int)lVar3,(Transform3D *)(ulong)*(uint *)(this + 0x6d4));
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PhysicalBone3D::_body_state_changed(PhysicsDirectBodyState3D*) */

void __thiscall
PhysicalBone3D::_body_state_changed(PhysicalBone3D *this,PhysicsDirectBodyState3D *param_1)

{
  if ((this[0x6d0] != (PhysicalBone3D)0x0) && (this[0x6d1] != (PhysicalBone3D)0x0)) {
    _body_state_changed(this,param_1);
    return;
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



/* PhysicalBone3D::is_class_ptr(void*) const */

uint PhysicalBone3D::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11e7,in_RSI == &PhysicsBody3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e7,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e7,in_RSI == &CollisionObject3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e7,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11e7,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* PhysicalBone3D::JointData::get_joint_type() */

undefined8 PhysicalBone3D::JointData::get_joint_type(void)

{
  return 0;
}



/* PhysicalBone3D::JointData::~JointData() */

void __thiscall PhysicalBone3D::JointData::~JointData(JointData *this)

{
  return;
}



/* PhysicalBone3D::PinJointData::get_joint_type() */

undefined8 PhysicalBone3D::PinJointData::get_joint_type(void)

{
  return 1;
}



/* PhysicalBone3D::ConeJointData::get_joint_type() */

undefined8 PhysicalBone3D::ConeJointData::get_joint_type(void)

{
  return 2;
}



/* PhysicalBone3D::HingeJointData::get_joint_type() */

undefined8 PhysicalBone3D::HingeJointData::get_joint_type(void)

{
  return 3;
}



/* PhysicalBone3D::SliderJointData::get_joint_type() */

undefined8 PhysicalBone3D::SliderJointData::get_joint_type(void)

{
  return 4;
}



/* PhysicalBone3D::SixDOFJointData::get_joint_type() */

undefined8 PhysicalBone3D::SixDOFJointData::get_joint_type(void)

{
  return 5;
}



/* PhysicalBone3D::get_bone_id() const */

undefined4 __thiscall PhysicalBone3D::get_bone_id(PhysicalBone3D *this)

{
  return *(undefined4 *)(this + 0x6d4);
}



/* CallableCustomMethodPointer<PhysicalBone3D, void,
   PhysicsDirectBodyState3D*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*> *this)

{
  return;
}



/* PhysicalBone3D::SixDOFJointData::~SixDOFJointData() */

void __thiscall PhysicalBone3D::SixDOFJointData::~SixDOFJointData(SixDOFJointData *this)

{
  return;
}



/* PhysicalBone3D::SliderJointData::~SliderJointData() */

void __thiscall PhysicalBone3D::SliderJointData::~SliderJointData(SliderJointData *this)

{
  return;
}



/* PhysicalBone3D::HingeJointData::~HingeJointData() */

void __thiscall PhysicalBone3D::HingeJointData::~HingeJointData(HingeJointData *this)

{
  return;
}



/* PhysicalBone3D::ConeJointData::~ConeJointData() */

void __thiscall PhysicalBone3D::ConeJointData::~ConeJointData(ConeJointData *this)

{
  return;
}



/* PhysicalBone3D::PinJointData::~PinJointData() */

void __thiscall PhysicalBone3D::PinJointData::~PinJointData(PinJointData *this)

{
  return;
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



/* MethodBindTRC<PhysicalBone3D::DampMode>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<PhysicalBone3D::DampMode>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<PhysicalBone3D::DampMode>::get_argument_meta(int) const */

undefined8 MethodBindTRC<PhysicalBone3D::DampMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<PhysicalBone3D::DampMode>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<PhysicalBone3D::DampMode>::_gen_argument_type
          (MethodBindT<PhysicalBone3D::DampMode> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<PhysicalBone3D::DampMode>::get_argument_meta(int) const */

undefined8 MethodBindT<PhysicalBone3D::DampMode>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<float>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1)

{
  return 3;
}



/* MethodBindTRC<float>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this,int param_1)

{
  return param_1 >> 0x1f & 9;
}



/* MethodBindT<float>::_gen_argument_type(int) const */

byte __thiscall MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 3;
}



/* MethodBindT<float>::get_argument_meta(int) const */

byte __thiscall MethodBindT<float>::get_argument_meta(MethodBindT<float> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindTRC<int>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<int>::get_argument_meta(int) const */

uint __thiscall MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this,int param_1)

{
  return param_1 >> 0x1f & 3;
}



/* MethodBindTR<bool>::_gen_argument_type(int) const */

undefined8 MethodBindTR<bool>::_gen_argument_type(int param_1)

{
  return 1;
}



/* MethodBindTR<bool>::get_argument_meta(int) const */

undefined8 MethodBindTR<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Vector3>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Vector3>::_gen_argument_type(int param_1)

{
  return 9;
}



/* MethodBindTRC<Vector3>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Vector3>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<Transform3D const&>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Transform3D_const&>::_gen_argument_type(int param_1)

{
  return 0x12;
}



/* MethodBindTRC<Transform3D const&>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Transform3D_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Transform3D const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Transform3D_const&>::_gen_argument_type
          (MethodBindT<Transform3D_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x12;
}



/* MethodBindT<Transform3D const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Transform3D_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<PhysicalBone3D::JointType>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<PhysicalBone3D::JointType>::_gen_argument_type(int param_1)

{
  return 2;
}



/* MethodBindTRC<PhysicalBone3D::JointType>::get_argument_meta(int) const */

undefined8 MethodBindTRC<PhysicalBone3D::JointType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<PhysicalBone3D::JointType>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<PhysicalBone3D::JointType>::_gen_argument_type
          (MethodBindT<PhysicalBone3D::JointType> *this,int param_1)

{
  return (param_1 == 0) * '\x02';
}



/* MethodBindT<PhysicalBone3D::JointType>::get_argument_meta(int) const */

undefined8 MethodBindT<PhysicalBone3D::JointType>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector3 const&, Vector3 const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector3_const&,Vector3_const&>::_gen_argument_type
          (MethodBindT<Vector3_const&,Vector3_const&> *this,int param_1)

{
  return -((uint)param_1 < 2) & 9;
}



/* MethodBindT<Vector3 const&, Vector3 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector3_const&,Vector3_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<Vector3 const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<Vector3_const&>::_gen_argument_type(MethodBindT<Vector3_const&> *this,int param_1)

{
  return -(param_1 == 0) & 9;
}



/* MethodBindT<Vector3 const&>::get_argument_meta(int) const */

undefined8 MethodBindT<Vector3_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<PhysicalBone3D, void,
   PhysicsDirectBodyState3D*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*>::get_argument_count
          (CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* PhysicalBone3D::JointData::~JointData() */

void __thiscall PhysicalBone3D::JointData::~JointData(JointData *this)

{
  operator_delete(this,8);
  return;
}



/* PhysicalBone3D::SixDOFJointData::~SixDOFJointData() */

void __thiscall PhysicalBone3D::SixDOFJointData::~SixDOFJointData(SixDOFJointData *this)

{
  operator_delete(this,0x108);
  return;
}



/* PhysicalBone3D::SliderJointData::~SliderJointData() */

void __thiscall PhysicalBone3D::SliderJointData::~SliderJointData(SliderJointData *this)

{
  operator_delete(this,0x30);
  return;
}



/* PhysicalBone3D::HingeJointData::~HingeJointData() */

void __thiscall PhysicalBone3D::HingeJointData::~HingeJointData(HingeJointData *this)

{
  operator_delete(this,0x20);
  return;
}



/* PhysicalBone3D::ConeJointData::~ConeJointData() */

void __thiscall PhysicalBone3D::ConeJointData::~ConeJointData(ConeJointData *this)

{
  operator_delete(this,0x20);
  return;
}



/* PhysicalBone3D::PinJointData::~PinJointData() */

void __thiscall PhysicalBone3D::PinJointData::~PinJointData(PinJointData *this)

{
  operator_delete(this,0x18);
  return;
}



/* CallableCustomMethodPointer<PhysicalBone3D, void,
   PhysicsDirectBodyState3D*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<Vector3 const&, Vector3 const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e290;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&, Vector3 const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e290;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<PhysicalBone3D::JointType>::~MethodBindT() */

void __thiscall
MethodBindT<PhysicalBone3D::JointType>::~MethodBindT(MethodBindT<PhysicalBone3D::JointType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e2f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<PhysicalBone3D::JointType>::~MethodBindT() */

void __thiscall
MethodBindT<PhysicalBone3D::JointType>::~MethodBindT(MethodBindT<PhysicalBone3D::JointType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e2f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<PhysicalBone3D::JointType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PhysicalBone3D::JointType>::~MethodBindTRC
          (MethodBindTRC<PhysicalBone3D::JointType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e350;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<PhysicalBone3D::JointType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PhysicalBone3D::JointType>::~MethodBindTRC
          (MethodBindTRC<PhysicalBone3D::JointType> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e350;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Transform3D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform3D_const&>::~MethodBindT(MethodBindT<Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e3b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Transform3D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform3D_const&>::~MethodBindT(MethodBindT<Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e3b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Transform3D const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform3D_const&>::~MethodBindTRC(MethodBindTRC<Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e410;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Transform3D const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform3D_const&>::~MethodBindTRC(MethodBindTRC<Transform3D_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e410;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e530;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e530;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<PhysicalBone3D::DampMode>::~MethodBindT() */

void __thiscall
MethodBindT<PhysicalBone3D::DampMode>::~MethodBindT(MethodBindT<PhysicalBone3D::DampMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e650;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<PhysicalBone3D::DampMode>::~MethodBindT() */

void __thiscall
MethodBindT<PhysicalBone3D::DampMode>::~MethodBindT(MethodBindT<PhysicalBone3D::DampMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e650;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<PhysicalBone3D::DampMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PhysicalBone3D::DampMode>::~MethodBindTRC
          (MethodBindTRC<PhysicalBone3D::DampMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e6b0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<PhysicalBone3D::DampMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PhysicalBone3D::DampMode>::~MethodBindTRC
          (MethodBindTRC<PhysicalBone3D::DampMode> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e6b0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e590;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e590;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e5f0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e5f0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e230;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e230;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e470;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e470;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e4d0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e4d0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e710;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e710;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e770;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011e770;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* PhysicalBone3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 PhysicalBone3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* PhysicalBone3D::_property_can_revertv(StringName const&) const */

undefined8 PhysicalBone3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00124008 != Object::_property_can_revert) {
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



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* PhysicalBone3D::_bind_methods() [clone .cold] */

void PhysicalBone3D::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CallableCustomMethodPointer<PhysicalBone3D, void, PhysicsDirectBodyState3D*>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*>::get_object
          (CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*> *this)

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
      goto LAB_0011032d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011032d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011032d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* PhysicalBone3D::_validate_propertyv(PropertyInfo&) const */

void PhysicalBone3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_00124010 == Node::_validate_property) {
    return;
  }
  Node3D::_validate_property(param_1);
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



/* PhysicalBone3D::_get_class_namev() const */

undefined8 * PhysicalBone3D::_get_class_namev(void)

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
LAB_001104a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001104a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"PhysicalBone3D");
      goto LAB_0011050e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"PhysicalBone3D");
LAB_0011050e:
  return &_get_class_namev()::_class_name_static;
}



/* PhysicalBone3D::_getv(StringName const&, Variant&) const */

ulong __thiscall PhysicalBone3D::_getv(PhysicalBone3D *this,StringName *param_1,Variant *param_2)

{
  long *plVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = StringName::operator==(param_1,"bone_name");
  if ((char)uVar2 == '\0') {
    plVar1 = *(long **)(this + 0x628);
    if (plVar1 != (long *)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001105c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (**(code **)(*plVar1 + 0x10))(plVar1,param_1,param_2);
        return uVar3;
      }
      goto LAB_0011062a;
    }
  }
  else {
    Variant::Variant((Variant *)local_48,(String *)(this + 0x6d8));
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_48[0];
    *(undefined8 *)(param_2 + 8) = local_40;
    *(undefined8 *)(param_2 + 0x10) = uStack_38;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar2;
  }
LAB_0011062a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::get_class() const */

void PhysicalBone3D::get_class(void)

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



/* MethodBindTRC<Transform3D const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Transform3D_const&>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC43;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 0x12;
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
      goto joined_r0x0011083c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0011083c:
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



/* MethodBindTRC<Vector3>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Vector3>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC43;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 9;
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
      goto joined_r0x001109bc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001109bc:
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



/* MethodBindTR<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTR<bool>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC43;
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
      goto joined_r0x00110b3c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110b3c:
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
  local_48 = &_LC43;
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
      goto joined_r0x00110cbc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110cbc:
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



/* MethodBindTRC<int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC43;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 2;
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
      goto joined_r0x00110e3c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110e3c:
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



/* MethodBindTRC<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC43;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 3;
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
      goto joined_r0x00110fbc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x00110fbc:
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



/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */

void __thiscall Variant::operator=(Variant *this,Variant *param_1)

{
  undefined8 uVar1;
  
  if (this != param_1) {
    if (needs_deinit[*(int *)this] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)this = 0;
    *(undefined4 *)this = *(undefined4 *)param_1;
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(this + 0x10) = uVar1;
    *(undefined4 *)param_1 = 0;
    return;
  }
  return;
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



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_001113df:
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
            if (lVar4 == 0) goto LAB_001112f3;
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
LAB_001112f3:
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
      goto LAB_001113df;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      plVar1 = *(long **)(this + 0x10);
      if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = plVar1[-1];
      *(undefined8 *)(this + 0x10) = 0;
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
  if ((StringName::configured != '\0') && (*(long *)this != 0)) {
    StringName::unref();
    return;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00111540) */
/* PhysicalBone3D::_notificationv(int, bool) */

void __thiscall PhysicalBone3D::_notificationv(PhysicalBone3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00124018 != Node3D::_notification) {
      CollisionObject3D::_notification(iVar1);
    }
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  if ((code *)PTR__notification_00124018 != Node3D::_notification) {
    CollisionObject3D::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return;
  }
  do {
    pvVar2 = (void *)*plVar5;
    if (pvVar2 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar2 + 0x40) == plVar5) {
      lVar4 = *(long *)((long)pvVar2 + 0x30);
      lVar3 = *(long *)((long)pvVar2 + 0x38);
      *plVar5 = lVar4;
      if (pvVar2 == (void *)plVar5[1]) {
        plVar5[1] = lVar3;
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar4;
        lVar4 = *(long *)((long)pvVar2 + 0x30);
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x38) = lVar3;
      }
      if (*(long *)((long)pvVar2 + 0x20) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 0x20) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 0x20);
          *(undefined8 *)((long)pvVar2 + 0x20) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
        StringName::unref();
      }
      if (*(long *)((long)pvVar2 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)((long)pvVar2 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          lVar4 = *(long *)((long)pvVar2 + 8);
          *(undefined8 *)((long)pvVar2 + 8) = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      Memory::free_static(pvVar2,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  Memory::free_static(plVar5,false);
  return;
}



/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)(this + 0x68) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x68) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x68);
      *(undefined8 *)(this + 0x68) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x50) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x50) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      piVar2 = *(int **)(this + 0x50);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)(this + 0x50) = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)(this + 0x40));
  if (*(long *)(this + 0x28) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x28) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x28);
      *(undefined8 *)(this + 0x28) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x18) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 0x10) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x10) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x10);
      *(undefined8 *)(this + 0x10) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return;
    }
  }
  return;
}



/* GetTypeInfo<PhysicsDirectBodyState3D*, void>::get_class_info() */

GetTypeInfo<PhysicsDirectBodyState3D*,void> * __thiscall
GetTypeInfo<PhysicsDirectBodyState3D*,void>::get_class_info
          (GetTypeInfo<PhysicsDirectBodyState3D*,void> *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  bool bVar3;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 0x18;
  local_38 = "PhysicsDirectBodyState3D";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *(undefined4 *)this = 0x18;
  *(undefined8 *)(this + 8) = 0;
  StringName::StringName((StringName *)(this + 0x10),(StringName *)&local_38);
  bVar3 = StringName::configured != '\0';
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 6;
  if ((bVar3) && (local_38 != (char *)0x0)) {
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



/* MethodDefinition D_METHOD<char const*>(char const*, char const* const) */

char * D_METHOD<char_const*>(char *param_1,char *param_2)

{
  long in_FS_OFFSET;
  undefined1 local_38 [8];
  undefined8 local_30;
  undefined1 *local_28 [3];
  long local_10;
  
  local_28[0] = local_38;
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_30 = 0;
  D_METHODP(param_1,(char ***)param_2,(uint)local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* WARNING: Removing unreachable block (ram,0x00111d00) */
/* WARNING: Removing unreachable block (ram,0x00111e95) */
/* WARNING: Removing unreachable block (ram,0x00111ea1) */
/* String vformat<char const*, StringName>(String const&, char const* const, StringName const) */

undefined8 *
vformat<char_const*,StringName>(undefined8 *param_1,bool *param_2,char *param_3,StringName *param_4)

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



/* PhysicalBone3D::_setv(StringName const&, Variant const&) */

void __thiscall PhysicalBone3D::_setv(PhysicalBone3D *this,StringName *param_1,Variant *param_2)

{
  _set(this,param_1,param_2);
  return;
}



/* CallableCustomMethodPointer<PhysicalBone3D, void, PhysicsDirectBodyState3D*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*>::call
          (CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001121c5;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_001121c5;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_001120d0:
          uVar4 = _LC110;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&PhysicsDirectBodyState3D::typeinfo,0
                                     ), lVar8 == 0)) && (pOVar6 != (Object *)0x0))
          goto LAB_001120d0;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)
                   __dynamic_cast(pOVar6,&Object::typeinfo,&PhysicsDirectBodyState3D::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112137. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_00112287;
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
LAB_001121c5:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC109,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00112287:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform3D const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<Transform3D_const&>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_001122db;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC43;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x12);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001123d0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001123d0;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_001122db:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* CollisionObject3D::is_class(String const&) const */

undefined8 __thiscall CollisionObject3D::is_class(CollisionObject3D *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
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
            if (lVar3 == 0) goto LAB_0011255f;
            LOCK();
            lVar8 = *plVar1;
            bVar9 = lVar3 == lVar8;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar8 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar8 != -1) {
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
LAB_0011255f:
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
    if (cVar6 != '\0') goto LAB_00112613;
  }
  cVar6 = String::operator==(param_1,"CollisionObject3D");
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
          plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
          if (*(long *)(lVar5 + 0x10) != 0) {
            do {
              lVar3 = *plVar1;
              if (lVar3 == 0) goto LAB_001126fb;
              LOCK();
              lVar8 = *plVar1;
              bVar9 = lVar3 == lVar8;
              if (bVar9) {
                *plVar1 = lVar3 + 1;
                lVar8 = lVar3;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar8 != -1) {
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
LAB_001126fb:
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
      if (cVar6 != '\0') goto LAB_00112613;
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
        if (cVar6 != '\0') goto LAB_00112613;
      }
      cVar6 = String::operator==(param_1,"Node");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = Object::is_class((Object *)this,param_1);
          return uVar7;
        }
        goto LAB_0011282e;
      }
    }
  }
LAB_00112613:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011282e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::is_class(String const&) const */

undefined8 __thiscall PhysicalBone3D::is_class(PhysicalBone3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_001128bf;
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
LAB_001128bf:
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
    if (cVar6 != '\0') goto LAB_00112973;
  }
  cVar6 = String::operator==(param_1,"PhysicalBone3D");
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
              if (lVar5 == 0) goto LAB_00112a33;
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
LAB_00112a33:
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
      if (cVar6 != '\0') goto LAB_00112973;
    }
    cVar6 = String::operator==(param_1,"PhysicsBody3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = CollisionObject3D::is_class((CollisionObject3D *)this,param_1);
        return uVar7;
      }
      goto LAB_00112adc;
    }
  }
LAB_00112973:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112adc:
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
  if (in_EDX != 0) goto LAB_00112b3b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC43;
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
LAB_00112c30:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112c30;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00112b3b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

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
  if (in_EDX != 0) goto LAB_00112d7b;
  local_78 = 0;
  local_80 = 0;
  local_68 = &_LC43;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00112e70:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00112e70;
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
LAB_00112d7b:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar5;
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_c0;
  StringName *local_b8;
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
    local_80 = 0;
    local_88 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  local_b8 = (StringName *)&local_68;
  local_c0 = (CowData<char32_t> *)&local_70;
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
    CowData<char32_t>::_ref(local_c0,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00113108:
    local_50 = 0x80;
    StringName::operator=(local_b8,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00113108;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00113123;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00113123:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)local_c0);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_b8);
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
  CowData<char32_t>::_unref(local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    local_80 = 0;
    local_78 = "Node";
    local_88 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = "Node";
    local_90 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
               &local_80);
    List<PropertyInfo,DefaultAllocator>::push_back
              ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((StringName::configured != '\0') && (local_68 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref(local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
      StringName::unref();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CollisionObject3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CollisionObject3D::_get_property_listv(CollisionObject3D *this,List *param_1,bool param_2)

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
  local_78 = "CollisionObject3D";
  local_70 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CollisionObject3D";
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
LAB_0011370d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011370d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011372f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011372f:
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
  StringName::StringName((StringName *)&local_78,"CollisionObject3D",false);
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



/* PhysicsBody3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PhysicsBody3D::_get_property_listv(PhysicsBody3D *this,List *param_1,bool param_2)

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
    CollisionObject3D::_get_property_listv((CollisionObject3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PhysicsBody3D";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicsBody3D";
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
LAB_00113aed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00113aed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00113b0f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00113b0f:
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
  StringName::StringName((StringName *)&local_78,"PhysicsBody3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CollisionObject3D::_get_property_listv((CollisionObject3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicalBone3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall PhysicalBone3D::_get_property_listv(PhysicalBone3D *this,List *param_1,bool param_2)

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
    PhysicsBody3D::_get_property_listv((PhysicsBody3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "PhysicalBone3D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "PhysicalBone3D";
  local_98 = 0;
  local_70 = 0xe;
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
LAB_00113ecd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00113ecd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00113eef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00113eef:
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
  StringName::StringName((StringName *)&local_78,"PhysicalBone3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  _get_property_list(this,param_1);
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      PhysicsBody3D::_get_property_listv((PhysicsBody3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<PhysicalBone3D, Vector3 const&>(void (PhysicalBone3D::*)(Vector3
   const&)) */

MethodBind * create_method_bind<PhysicalBone3D,Vector3_const&>(_func_void_Vector3_ptr *param_1)

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
  *(_func_void_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e230;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, Vector3 const&, Vector3 const&>(void
   (PhysicalBone3D::*)(Vector3 const&, Vector3 const&)) */

MethodBind *
create_method_bind<PhysicalBone3D,Vector3_const&,Vector3_const&>
          (_func_void_Vector3_ptr_Vector3_ptr *param_1)

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
  *(_func_void_Vector3_ptr_Vector3_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e290;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, PhysicalBone3D::JointType>(void
   (PhysicalBone3D::*)(PhysicalBone3D::JointType)) */

MethodBind *
create_method_bind<PhysicalBone3D,PhysicalBone3D::JointType>(_func_void_JointType *param_1)

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
  *(_func_void_JointType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e2f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D,
   PhysicalBone3D::JointType>(PhysicalBone3D::JointType (PhysicalBone3D::*)() const) */

MethodBind * create_method_bind<PhysicalBone3D,PhysicalBone3D::JointType>(_func_JointType *param_1)

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
  *(_func_JointType **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e350;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, Transform3D const&>(void
   (PhysicalBone3D::*)(Transform3D const&)) */

MethodBind *
create_method_bind<PhysicalBone3D,Transform3D_const&>(_func_void_Transform3D_ptr *param_1)

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
  *(_func_void_Transform3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e3b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, Transform3D const&>(Transform3D const&
   (PhysicalBone3D::*)() const) */

MethodBind * create_method_bind<PhysicalBone3D,Transform3D_const&>(_func_Transform3D_ptr *param_1)

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
  *(_func_Transform3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e410;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, Vector3>(Vector3 (PhysicalBone3D::*)() const) */

MethodBind * create_method_bind<PhysicalBone3D,Vector3>(_func_Vector3 *param_1)

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
  *(_func_Vector3 **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e470;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, bool>(bool (PhysicalBone3D::*)()) */

MethodBind * create_method_bind<PhysicalBone3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011e4d0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, int>(int (PhysicalBone3D::*)() const) */

MethodBind * create_method_bind<PhysicalBone3D,int>(_func_int *param_1)

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
  *(_func_int **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e530;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, float>(void (PhysicalBone3D::*)(float)) */

MethodBind * create_method_bind<PhysicalBone3D,float>(_func_void_float *param_1)

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
  *(_func_void_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e590;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, float>(float (PhysicalBone3D::*)() const) */

MethodBind * create_method_bind<PhysicalBone3D,float>(_func_float *param_1)

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
  *(_func_float **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e5f0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, PhysicalBone3D::DampMode>(void
   (PhysicalBone3D::*)(PhysicalBone3D::DampMode)) */

MethodBind *
create_method_bind<PhysicalBone3D,PhysicalBone3D::DampMode>(_func_void_DampMode *param_1)

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
  *(_func_void_DampMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e650;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, PhysicalBone3D::DampMode>(PhysicalBone3D::DampMode
   (PhysicalBone3D::*)() const) */

MethodBind * create_method_bind<PhysicalBone3D,PhysicalBone3D::DampMode>(_func_DampMode *param_1)

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
  *(_func_DampMode **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011e6b0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, bool>(void (PhysicalBone3D::*)(bool)) */

MethodBind * create_method_bind<PhysicalBone3D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011e710;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* MethodBind* create_method_bind<PhysicalBone3D, bool>(bool (PhysicalBone3D::*)() const) */

MethodBind * create_method_bind<PhysicalBone3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011e770;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "PhysicalBone3D";
  local_30 = 0xe;
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



/* GetTypeInfo<PhysicalBone3D::JointType, void>::get_class_info() */

GetTypeInfo<PhysicalBone3D::JointType,void> * __thiscall
GetTypeInfo<PhysicalBone3D::JointType,void>::get_class_info
          (GetTypeInfo<PhysicalBone3D::JointType,void> *this)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "PhysicalBone3D::JointType";
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_80);
  String::split((char *)&local_68,SUB81((StrRange *)&local_80,0),0x115334);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_58 = ".";
    local_50 = 1;
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar3 = -2;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(local_60 + -8);
      lVar3 = lVar4 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar3 * 8));
        String::operator+((String *)&local_78,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_00115425;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar4,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join((Vector *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00115425:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  local_68 = 0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  lVar4 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<PhysicalBone3D::JointType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<PhysicalBone3D::JointType>::_gen_argument_type_info(int param_1)

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
    GetTypeInfo<PhysicalBone3D::JointType,void>::get_class_info
              ((GetTypeInfo<PhysicalBone3D::JointType,void> *)local_48);
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



/* GetTypeInfo<PhysicalBone3D::DampMode, void>::get_class_info() */

GetTypeInfo<PhysicalBone3D::DampMode,void> * __thiscall
GetTypeInfo<PhysicalBone3D::DampMode,void>::get_class_info
          (GetTypeInfo<PhysicalBone3D::DampMode,void> *this)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_80;
  Vector local_78 [8];
  undefined8 local_70;
  char local_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = 0;
  local_58 = "PhysicalBone3D::DampMode";
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_80);
  String::split(local_68,SUB81((StrRange *)&local_80,0),0x115334);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_50 = 1;
    local_58 = ".";
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
        goto LAB_00115805;
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
LAB_00115805:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_78,false);
  *(undefined4 *)this = 2;
  *(undefined4 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined4 *)(this + 0x28) = 0x10006;
  *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(this + 0x10),(StringName *)&local_58);
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



/* MethodBindT<PhysicalBone3D::DampMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<PhysicalBone3D::DampMode>::_gen_argument_type_info(int param_1)

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
    GetTypeInfo<PhysicalBone3D::DampMode,void>::get_class_info
              ((GetTypeInfo<PhysicalBone3D::DampMode,void> *)local_48);
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



/* MethodBindTRC<PhysicalBone3D::DampMode>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<PhysicalBone3D::DampMode>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long lVar5;
  long in_FS_OFFSET;
  Vector local_80 [8];
  long local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_58 = "PhysicalBone3D::DampMode";
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_78);
  String::split((char *)&local_68,SUB81((StrRange *)&local_78,0),0x115334);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_50 = 1;
    local_58 = ".";
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar3 = -2;
      lVar5 = 0;
    }
    else {
      lVar5 = *(long *)(local_60 + -8);
      lVar3 = lVar5 + -2;
      if (-1 < lVar3) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar3 * 8));
        String::operator+((String *)local_80,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_00115b85;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar3,lVar5,"p_index","size()","",false,true)
    ;
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  local_70 = 0;
  local_58 = ".";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  String::join(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00115b85:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_68,(String *)local_80,false);
  *puVar4 = 2;
  puVar4[6] = 0;
  *(undefined8 *)(puVar4 + 8) = 0;
  puVar4[10] = 0x10006;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  local_58 = (char *)0x0;
  StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  lVar5 = local_78;
  if (local_78 != 0) {
    LOCK();
    plVar1 = (long *)(local_78 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_78 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PhysicalBone3D::JointType>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<PhysicalBone3D::JointType>::_gen_argument_type_info(int param_1)

{
  code *pcVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long lVar4;
  long in_FS_OFFSET;
  Vector local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  char local_68 [8];
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  local_58 = "PhysicalBone3D::JointType";
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_78);
  String::split(local_68,SUB81((StrRange *)&local_78,0),0x115334);
  if ((local_60 != 0) && (2 < *(long *)(local_60 + -8))) {
    local_70 = 0;
    local_50 = 1;
    local_58 = ".";
    String::parse_latin1((StrRange *)&local_70);
    if (local_60 == 0) {
      lVar2 = -2;
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(local_60 + -8);
      lVar2 = lVar4 + -2;
      if (-1 < lVar2) {
        String::operator+((String *)&local_58,(String *)(local_60 + lVar2 * 8));
        String::operator+((String *)local_80,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        goto LAB_00115e15;
      }
    }
    _err_print_index_error
              ("get","./core/templates/cowdata.h",0xdb,lVar2,lVar4,"p_index","size()","",false,true)
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
  String::join(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00115e15:
  CowData<String>::_unref((CowData<String> *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)local_80,false);
  *puVar3 = 2;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 0x10006;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar3;
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
  long *plVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
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
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar6) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar6 * 8;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00116320:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 8 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_00116320;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_001161f9:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_001161f9;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00116376;
  }
  if (lVar10 == lVar7) {
LAB_0011629f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00116376:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0011628a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0011629f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_0011628a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<unsigned int>::_unref() */

void __thiscall CowData<unsigned_int>::_unref(CowData<unsigned_int> *this)

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
LAB_00116640:
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
  if (lVar8 == 0) goto LAB_00116640;
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
        goto LAB_00116551;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_00116551:
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



/* PhysicalBone3D::_initialize_classv() */

void PhysicalBone3D::_initialize_classv(void)

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
    if (PhysicsBody3D::initialize_class()::initialized == '\0') {
      if (CollisionObject3D::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00124028 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
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
        local_68 = 0;
        local_58 = "Node3D";
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "CollisionObject3D";
        local_70 = 0;
        local_50 = 0x11;
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
        CollisionObject3D::_bind_methods();
        CollisionObject3D::initialize_class()::initialized = '\x01';
      }
      local_58 = "CollisionObject3D";
      local_68 = 0;
      local_50 = 0x11;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "PhysicsBody3D";
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
      if ((code *)PTR__bind_methods_00124020 != CollisionObject3D::_bind_methods) {
        PhysicsBody3D::_bind_methods();
      }
      PhysicsBody3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "PhysicsBody3D";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "PhysicalBone3D";
    local_70 = 0;
    local_50 = 0xe;
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00116d78) */
/* WARNING: Removing unreachable block (ram,0x00116f0d) */
/* WARNING: Removing unreachable block (ram,0x00116f19) */
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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117110;
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
LAB_00117110:
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
      goto LAB_001173b2;
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
LAB_001173b2:
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
      goto LAB_00117571;
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
LAB_00117571:
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
      goto LAB_001178b1;
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
                    /* WARNING: Could not recover jumptable at 0x0011773d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001178b1:
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
      goto LAB_00117a99;
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
                    /* WARNING: Could not recover jumptable at 0x00117922. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00117a99:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PhysicalBone3D::DampMode>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<PhysicalBone3D::DampMode>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00117b60;
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
LAB_00117b60:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PhysicalBone3D::DampMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void __thiscall
MethodBindTRC<PhysicalBone3D::DampMode>::validated_call
          (MethodBindTRC<PhysicalBone3D::DampMode> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
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
      goto LAB_00117d74;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_00117d74:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PhysicalBone3D::DampMode>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<PhysicalBone3D::DampMode>::ptrcall
          (MethodBindTRC<PhysicalBone3D::DampMode> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
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
      goto LAB_00117f23;
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
  *(ulong *)param_3 = (ulong)uVar1;
LAB_00117f23:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<PhysicalBone3D::DampMode>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<PhysicalBone3D::DampMode>::validated_call
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
      goto LAB_00118261;
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
                    /* WARNING: Could not recover jumptable at 0x001180ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00118261:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<PhysicalBone3D::DampMode>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<PhysicalBone3D::DampMode>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00118441;
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
                    /* WARNING: Could not recover jumptable at 0x001182cb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_00118441:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar5;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118510;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      fVar5 = (float)(*(code *)pVVar2)();
      Variant::Variant((Variant *)local_48,fVar5);
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
LAB_00118510:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<float>::validated_call
          (MethodBindTRC<float> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
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
      goto LAB_00118728;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)(param_3 + 8) = (double)fVar3;
LAB_00118728:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<float>::ptrcall
          (MethodBindTRC<float> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  float fVar3;
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
      goto LAB_001188e7;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  fVar3 = (float)(*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(double *)param_3 = (double)fVar3;
LAB_001188e7:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<float>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
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
      goto LAB_00118c39;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)*(double *)(*(long *)param_3 + 8);
                    /* WARNING: Could not recover jumptable at 0x00118ac2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00118c39:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<float>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<float>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  undefined1 auVar2 [16];
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
      goto LAB_00118e19;
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
    auVar2._4_12_ = SUB1612((undefined1  [16])0x0,4);
    auVar2._0_4_ = (float)**param_3;
                    /* WARNING: Could not recover jumptable at 0x00118ca1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00118e19:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<int>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00118ee0;
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
LAB_00118ee0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<int>::validated_call
          (MethodBindTRC<int> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001190f4;
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
LAB_001190f4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001192a3;
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
LAB_001192a3:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTR<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x207,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_001194d0;
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
LAB_001194d0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTR<bool>::validated_call
          (MethodBindTR<bool> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      _err_print_error("validated_call","./core/object/method_bind.h",0x213,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_001196e2;
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
LAB_001196e2:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTR<bool>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTR<bool>::ptrcall(MethodBindTR<bool> *this,Object *param_1,void **param_2,void *param_3)

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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x21e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119891;
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
LAB_00119891:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  Variant *pVVar4;
  long *plVar5;
  undefined4 in_register_00000014;
  long *plVar6;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_54 [12];
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar6 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar6 != (long *)0x0) && (plVar6[1] != 0)) && (*(char *)(plVar6[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar6[1] == 0) {
      plVar5 = (long *)plVar6[0x23];
      if (plVar5 == (long *)0x0) {
        plVar5 = (long *)(**(code **)(*plVar6 + 0x40))(plVar6);
      }
    }
    else {
      plVar5 = (long *)(plVar6[1] + 0x20);
    }
    if (local_68 == (char *)*plVar5) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      auVar3._8_4_ = local_54._8_4_;
      auVar3._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar3, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_00119ad0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  auVar2._8_4_ = local_54._8_4_;
  auVar2._0_8_ = local_54._0_8_;
  pVVar4 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar4 & 1) != 0) {
        pVVar4 = *(Variant **)(pVVar4 + *(long *)((long)plVar6 + (long)pVVar1) + -1);
      }
      local_54 = (*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,(Vector3 *)local_54);
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
      local_54 = auVar2;
    }
  }
  else {
    *in_R9 = 3;
    in_R9[2] = 0;
  }
LAB_00119ad0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector3>::validated_call
          (MethodBindTRC<Vector3> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119ceb;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])(param_3 + 8) = auVar3;
LAB_00119ceb:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector3>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector3>::ptrcall
          (MethodBindTRC<Vector3> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  long in_FS_OFFSET;
  undefined1 auVar3 [12];
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_58 == (char *)*plVar2) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0x35;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00119eaa;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  auVar3 = (*pcVar1)(param_1 + *(long *)(this + 0x60));
  *(undefined1 (*) [12])param_3 = auVar3;
LAB_00119eaa:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindTRC<Transform3D_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Transform3D *pTVar2;
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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a0e0;
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
      pTVar2 = (Transform3D *)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,pTVar2);
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
LAB_0011a0e0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D const&>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Transform3D_const&>::validated_call
          (MethodBindTRC<Transform3D_const&> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar4;
  
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
    if (local_48 == (char *)*plVar5) {
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
      goto LAB_0011a30b;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  puVar3 = (undefined8 *)(*pcVar4)(param_1 + *(long *)(this + 0x60));
  puVar1 = *(undefined8 **)(param_3 + 8);
  uVar2 = puVar3[1];
  *puVar1 = *puVar3;
  puVar1[1] = uVar2;
  uVar2 = puVar3[3];
  puVar1[2] = puVar3[2];
  puVar1[3] = uVar2;
  uVar2 = puVar3[5];
  puVar1[4] = puVar3[4];
  puVar1[5] = uVar2;
LAB_0011a30b:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Transform3D const&>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Transform3D_const&>::ptrcall
          (MethodBindTRC<Transform3D_const&> *this,Object *param_1,void **param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar4;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  code *pcVar3;
  
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
      goto LAB_0011a4d9;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar3 = *(code **)(this + 0x58);
  if (((ulong)pcVar3 & 1) != 0) {
    pcVar3 = *(code **)(pcVar3 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  puVar2 = (undefined8 *)(*pcVar3)(param_1 + *(long *)(this + 0x60));
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((long)param_3 + 8) = uVar1;
  uVar1 = puVar2[3];
  *(undefined8 *)((long)param_3 + 0x10) = puVar2[2];
  *(undefined8 *)((long)param_3 + 0x18) = uVar1;
  uVar1 = puVar2[5];
  *(undefined8 *)((long)param_3 + 0x20) = puVar2[4];
  *(undefined8 *)((long)param_3 + 0x28) = uVar1;
LAB_0011a4d9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform3D const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Transform3D_const&>::validated_call
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
      goto LAB_0011a821;
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
                    /* WARNING: Could not recover jumptable at 0x0011a6ad. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined8 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011a821:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform3D const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Transform3D_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011aa01;
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
                    /* WARNING: Could not recover jumptable at 0x0011a889. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011aa01:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PhysicalBone3D::JointType>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindTRC<PhysicalBone3D::JointType>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_0011aad0;
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
LAB_0011aad0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PhysicalBone3D::JointType>::validated_call(Object*, Variant const**, Variant*)
   const */

void __thiscall
MethodBindTRC<PhysicalBone3D::JointType>::validated_call
          (MethodBindTRC<PhysicalBone3D::JointType> *this,Object *param_1,Variant **param_2,
          Variant *param_3)

{
  uint uVar1;
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
      goto LAB_0011ace4;
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
  *(ulong *)(param_3 + 8) = (ulong)uVar1;
LAB_0011ace4:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<PhysicalBone3D::JointType>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<PhysicalBone3D::JointType>::ptrcall
          (MethodBindTRC<PhysicalBone3D::JointType> *this,Object *param_1,void **param_2,
          void *param_3)

{
  uint uVar1;
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
      goto LAB_0011ae93;
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
  *(ulong *)param_3 = (ulong)uVar1;
LAB_0011ae93:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<PhysicalBone3D::JointType>::validated_call(Object*, Variant const**, Variant*) const
    */

void MethodBindT<PhysicalBone3D::JointType>::validated_call
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
      goto LAB_0011b1d1;
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
                    /* WARNING: Could not recover jumptable at 0x0011b05c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined4 *)(*(long *)param_3 + 8));
    return;
  }
LAB_0011b1d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<PhysicalBone3D::JointType>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<PhysicalBone3D::JointType>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011b3b1;
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
                    /* WARNING: Could not recover jumptable at 0x0011b23b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3);
    return;
  }
LAB_0011b3b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<Vector3_const&,Vector3_const&>::validated_call
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
      goto LAB_0011b57f;
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
                    /* WARNING: Could not recover jumptable at 0x0011b42a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8);
    return;
  }
LAB_0011b57f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3_const&,Vector3_const&>::ptrcall
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
      goto LAB_0011b769;
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
                    /* WARNING: Could not recover jumptable at 0x0011b5f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_0011b769:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<Vector3_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_0011b941;
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
                    /* WARNING: Could not recover jumptable at 0x0011b7cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_0011b941:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<Vector3_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_0011bb21;
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
                    /* WARNING: Could not recover jumptable at 0x0011b9a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_0011bb21:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Transform3D const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<Transform3D_const&>::call
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
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  Variant local_68 [56];
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_78 == (char *)*plVar7) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bcc0;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011bd10;
LAB_0011bd00:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011bd10:
        uVar6 = 4;
        goto LAB_0011bcb5;
      }
      if (in_R8D == 1) goto LAB_0011bd00;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x12);
    uVar4 = _LC217;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_Transform3D(local_68);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),local_68);
  }
  else {
    uVar6 = 3;
LAB_0011bcb5:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011bcc0:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<Vector3_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined1 auVar4 [12];
  undefined8 uVar5;
  char cVar6;
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
  long local_88;
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined1 local_60 [4] [12];
  long local_30;
  
  plVar10 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar10 != (long *)0x0) && (plVar10[1] != 0)) && (*(char *)(plVar10[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_78,(StringName *)(param_2 + 3));
    if (plVar10[1] == 0) {
      plVar8 = (long *)plVar10[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar10 + 0x40))(plVar10);
      }
    }
    else {
      plVar8 = (long *)(plVar10[1] + 0x20);
    }
    if (local_78 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_80 = 0;
      local_70 = 0x35;
      String::parse_latin1((StrRange *)&local_80);
      vformat<StringName>((StringName *)&local_78,(StrRange *)&local_80,&local_88);
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_78,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      auVar4._8_4_ = local_60[0]._8_4_;
      auVar4._0_8_ = local_60[0]._0_8_;
      if ((StringName::configured != '\0') && (local_60[0] = auVar4, local_88 != 0)) {
        StringName::unref();
      }
      goto LAB_0011bfe8;
    }
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar12 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar11 = param_2[5];
    if (pVVar11 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_0011c040;
LAB_0011c030:
      pVVar11 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar11 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011c040:
        uVar7 = 4;
        goto LAB_0011bfdd;
      }
      if (in_R8D == 1) goto LAB_0011c030;
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
    cVar6 = Variant::can_convert_strict(*(undefined4 *)pVVar11,9);
    uVar5 = _LC219;
    if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar5;
    }
    local_60[0] = Variant::operator_cast_to_Vector3(pVVar11);
    (*(code *)pVVar12)((Variant *)((long)plVar10 + (long)pVVar1),local_60);
  }
  else {
    uVar7 = 3;
LAB_0011bfdd:
    *in_R9 = uVar7;
    in_R9[2] = 1;
  }
LAB_0011bfe8:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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
    goto LAB_0011c2fd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011c360;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011c360:
      uVar6 = 4;
LAB_0011c2fd:
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
      goto LAB_0011c27b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011c27b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC220;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0011c2d7. Too many branches */
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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011c3c6;
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
LAB_0011c3c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, PhysicalBone3D::DampMode>(__UnexistingClass*,
   void (__UnexistingClass::*)(PhysicalBone3D::DampMode), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,PhysicalBone3D::DampMode>
               (__UnexistingClass *param_1,_func_void_DampMode *param_2,Variant **param_3,
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
    goto LAB_0011c68d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011c6f0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011c6f0:
      uVar6 = 4;
LAB_0011c68d:
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
      goto LAB_0011c60b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011c60b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_DampMode **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC221;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011c666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<PhysicalBone3D::DampMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<PhysicalBone3D::DampMode>::call
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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011c756;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,PhysicalBone3D::DampMode>
            (p_Var2,(_func_void_DampMode *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011c756:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */

void call_with_variant_args_dv<__UnexistingClass,float>
               (__UnexistingClass *param_1,_func_void_float *param_2,Variant **param_3,int param_4,
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
  float fVar9;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0011ca1d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011ca80;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011ca80:
      uVar6 = 4;
LAB_0011ca1d:
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
      goto LAB_0011c99b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011c99b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC222;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x0011c9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011cae6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var2,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011cae6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, PhysicalBone3D::JointType>(__UnexistingClass*,
   void (__UnexistingClass::*)(PhysicalBone3D::JointType), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,PhysicalBone3D::JointType>
               (__UnexistingClass *param_1,_func_void_JointType *param_2,Variant **param_3,
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
    goto LAB_0011cdad;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0011ce10;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0011ce10:
      uVar6 = 4;
LAB_0011cdad:
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
      goto LAB_0011cd2b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011cd2b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_JointType **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
  uVar4 = _LC221;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_long(this);
                    /* WARNING: Could not recover jumptable at 0x0011cd86. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)((char)(param_1 + (long)param_3));
  return;
}



/* MethodBindT<PhysicalBone3D::JointType>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<PhysicalBone3D::JointType>::call
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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011ce76;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,PhysicalBone3D::JointType>
            (p_Var2,(_func_void_JointType *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8
             ,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011ce76:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, Vector3 const&, Vector3
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(Vector3 const&, Vector3 const&), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,Vector3_const&,Vector3_const&>
               (__UnexistingClass *param_1,_func_void_Vector3_ptr_Vector3_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

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
  uint uVar10;
  int iVar11;
  Variant *this;
  Variant *this_00;
  long in_FS_OFFSET;
  long in_stack_00000008;
  undefined1 local_78 [3] [12];
  undefined1 local_54 [12];
  undefined1 local_48 [12];
  undefined1 local_3c [12];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)param_5;
  if (uVar10 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar10;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_0011d1c8;
      this = (Variant *)*plVar8;
LAB_0011d21d:
      this_00 = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar11 = (int)lVar2;
      if (iVar11 < iVar6) {
LAB_0011d1c8:
        uVar7 = 4;
        goto LAB_0011d1cd;
      }
      if (uVar10 == 0) {
        lVar9 = (long)(iVar11 + -2);
        if (lVar2 <= lVar9) goto LAB_0011d238;
        this = (Variant *)(lVar1 + lVar9 * 0x18);
      }
      else {
        this = (Variant *)*plVar8;
        if (uVar10 == 2) goto LAB_0011d21d;
      }
      lVar9 = (long)(int)((uVar10 ^ 1) + (iVar11 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011d238:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this_00 = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_Vector3_ptr_Vector3_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this_00,9);
    uVar4 = _LC223;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_54 = Variant::operator_cast_to_Vector3(this_00);
    local_48 = local_54;
    local_3c = local_54;
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,9);
    uVar4 = _LC219;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    local_78[0] = Variant::operator_cast_to_Vector3(this);
    local_54 = local_78[0];
    (*param_2)((Vector3 *)(param_1 + (long)param_3),(Vector3 *)local_78);
  }
  else {
    uVar7 = 3;
LAB_0011d1cd:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&, Vector3 const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<Vector3_const&,Vector3_const&>::call
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
      _err_print_error(&_LC109,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011d2d6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,Vector3_const&,Vector3_const&>
            (p_Var2,(_func_void_Vector3_ptr_Vector3_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011d2d6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<Vector3 const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Vector3_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_0011d4d9;
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC43;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_70._8_8_;
  local_70 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,9);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_0011d5d8:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_0011d5d8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_78._0_4_;
  if (*(long *)(param_3 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_70._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_70._8_8_;
    local_70 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar3 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_60;
  if (*(long *)(param_3 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_58;
    local_58 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_50;
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
  iVar5 = *param_2;
LAB_0011d4d9:
  *param_2 = iVar5 + 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<Vector3 const&, Vector3 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector3_const&,Vector3_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<Vector3 const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<Vector3_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<Vector3_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodInfo::~MethodInfo() */

void __thiscall MethodInfo::~MethodInfo(MethodInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* MethodBindTR<bool>::~MethodBindTR() */

void __thiscall MethodBindTR<bool>::~MethodBindTR(MethodBindTR<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3 const&>::~MethodBindT() */

void __thiscall MethodBindT<Vector3_const&>::~MethodBindT(MethodBindT<Vector3_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<PhysicalBone3D::DampMode>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PhysicalBone3D::DampMode>::~MethodBindTRC
          (MethodBindTRC<PhysicalBone3D::DampMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<PhysicalBone3D::DampMode>::~MethodBindT() */

void __thiscall
MethodBindT<PhysicalBone3D::DampMode>::~MethodBindT(MethodBindT<PhysicalBone3D::DampMode> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int>::~MethodBindTRC() */

void __thiscall MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Transform3D const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Transform3D_const&>::~MethodBindTRC(MethodBindTRC<Transform3D_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Transform3D const&>::~MethodBindT() */

void __thiscall MethodBindT<Transform3D_const&>::~MethodBindT(MethodBindT<Transform3D_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<PhysicalBone3D::JointType>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<PhysicalBone3D::JointType>::~MethodBindTRC
          (MethodBindTRC<PhysicalBone3D::JointType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<PhysicalBone3D::JointType>::~MethodBindT() */

void __thiscall
MethodBindT<PhysicalBone3D::JointType>::~MethodBindT(MethodBindT<PhysicalBone3D::JointType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Vector3 const&, Vector3 const&>::~MethodBindT() */

void __thiscall
MethodBindT<Vector3_const&,Vector3_const&>::~MethodBindT
          (MethodBindT<Vector3_const&,Vector3_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PhysicalBone3D::PinJointData::~PinJointData() */

void __thiscall PhysicalBone3D::PinJointData::~PinJointData(PinJointData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PhysicalBone3D::ConeJointData::~ConeJointData() */

void __thiscall PhysicalBone3D::ConeJointData::~ConeJointData(ConeJointData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PhysicalBone3D::HingeJointData::~HingeJointData() */

void __thiscall PhysicalBone3D::HingeJointData::~HingeJointData(HingeJointData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PhysicalBone3D::SliderJointData::~SliderJointData() */

void __thiscall PhysicalBone3D::SliderJointData::~SliderJointData(SliderJointData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PhysicalBone3D::SixDOFJointData::~SixDOFJointData() */

void __thiscall PhysicalBone3D::SixDOFJointData::~SixDOFJointData(SixDOFJointData *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<PhysicalBone3D, void,
   PhysicsDirectBodyState3D*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<PhysicalBone3D,void,PhysicsDirectBodyState3D*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PhysicalBone3D::JointData::~JointData() */

void __thiscall PhysicalBone3D::JointData::~JointData(JointData *this)

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


