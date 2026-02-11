
/* VehicleWheel3D::get_radius() const */

undefined4 __thiscall VehicleWheel3D::get_radius(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5b8);
}



/* VehicleWheel3D::get_suspension_rest_length() const */

undefined4 __thiscall VehicleWheel3D::get_suspension_rest_length(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5b0);
}



/* VehicleWheel3D::set_suspension_travel(float) */

void __thiscall VehicleWheel3D::set_suspension_travel(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5b4) = param_1;
  return;
}



/* VehicleWheel3D::get_suspension_travel() const */

undefined4 __thiscall VehicleWheel3D::get_suspension_travel(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5b4);
}



/* VehicleWheel3D::set_suspension_stiffness(float) */

void __thiscall VehicleWheel3D::set_suspension_stiffness(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5bc) = param_1;
  return;
}



/* VehicleWheel3D::get_suspension_stiffness() const */

undefined4 __thiscall VehicleWheel3D::get_suspension_stiffness(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5bc);
}



/* VehicleWheel3D::set_suspension_max_force(float) */

void __thiscall VehicleWheel3D::set_suspension_max_force(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5cc) = param_1;
  return;
}



/* VehicleWheel3D::get_suspension_max_force() const */

undefined4 __thiscall VehicleWheel3D::get_suspension_max_force(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5cc);
}



/* VehicleWheel3D::set_damping_compression(float) */

void __thiscall VehicleWheel3D::set_damping_compression(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5c0) = param_1;
  return;
}



/* VehicleWheel3D::get_damping_compression() const */

undefined4 __thiscall VehicleWheel3D::get_damping_compression(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5c0);
}



/* VehicleWheel3D::set_damping_relaxation(float) */

void __thiscall VehicleWheel3D::set_damping_relaxation(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5c4) = param_1;
  return;
}



/* VehicleWheel3D::get_damping_relaxation() const */

undefined4 __thiscall VehicleWheel3D::get_damping_relaxation(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5c4);
}



/* VehicleWheel3D::set_friction_slip(float) */

void __thiscall VehicleWheel3D::set_friction_slip(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5c8) = param_1;
  return;
}



/* VehicleWheel3D::get_friction_slip() const */

undefined4 __thiscall VehicleWheel3D::get_friction_slip(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5c8);
}



/* VehicleWheel3D::set_roll_influence(float) */

void __thiscall VehicleWheel3D::set_roll_influence(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5f0) = param_1;
  return;
}



/* VehicleWheel3D::get_roll_influence() const */

undefined4 __thiscall VehicleWheel3D::get_roll_influence(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5f0);
}



/* VehicleWheel3D::is_in_contact() const */

VehicleWheel3D __thiscall VehicleWheel3D::is_in_contact(VehicleWheel3D *this)

{
  return this[0x650];
}



/* VehicleWheel3D::get_contact_point() const */

undefined1  [16] __thiscall VehicleWheel3D::get_contact_point(VehicleWheel3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x61c);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VehicleWheel3D::get_contact_normal() const */

undefined1  [16] __thiscall VehicleWheel3D::get_contact_normal(VehicleWheel3D *this)

{
  long in_FS_OFFSET;
  undefined1 auVar1 [16];
  
  if (*(long *)(in_FS_OFFSET + 0x28) == *(long *)(in_FS_OFFSET + 0x28)) {
    auVar1._12_4_ = 0;
    auVar1._0_12_ = *(undefined1 (*) [12])(this + 0x610);
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VehicleWheel3D::get_contact_body() const */

undefined8 __thiscall VehicleWheel3D::get_contact_body(VehicleWheel3D *this)

{
  return *(undefined8 *)(this + 0x658);
}



/* VehicleWheel3D::set_engine_force(float) */

void __thiscall VehicleWheel3D::set_engine_force(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5f4) = param_1;
  return;
}



/* VehicleWheel3D::get_engine_force() const */

undefined4 __thiscall VehicleWheel3D::get_engine_force(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5f4);
}



/* VehicleWheel3D::set_brake(float) */

void __thiscall VehicleWheel3D::set_brake(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5f8) = param_1;
  return;
}



/* VehicleWheel3D::get_brake() const */

undefined4 __thiscall VehicleWheel3D::get_brake(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5f8);
}



/* VehicleWheel3D::set_steering(float) */

void __thiscall VehicleWheel3D::set_steering(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5e0) = param_1;
  return;
}



/* VehicleWheel3D::get_steering() const */

undefined4 __thiscall VehicleWheel3D::get_steering(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5e0);
}



/* VehicleWheel3D::set_use_as_traction(bool) */

void __thiscall VehicleWheel3D::set_use_as_traction(VehicleWheel3D *this,bool param_1)

{
  this[0x588] = (VehicleWheel3D)param_1;
  return;
}



/* VehicleWheel3D::is_used_as_traction() const */

VehicleWheel3D __thiscall VehicleWheel3D::is_used_as_traction(VehicleWheel3D *this)

{
  return this[0x588];
}



/* VehicleWheel3D::set_use_as_steering(bool) */

void __thiscall VehicleWheel3D::set_use_as_steering(VehicleWheel3D *this,bool param_1)

{
  this[0x589] = (VehicleWheel3D)param_1;
  return;
}



/* VehicleWheel3D::is_used_as_steering() const */

VehicleWheel3D __thiscall VehicleWheel3D::is_used_as_steering(VehicleWheel3D *this)

{
  return this[0x589];
}



/* VehicleWheel3D::get_skidinfo() const */

undefined4 __thiscall VehicleWheel3D::get_skidinfo(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x608);
}



/* VehicleWheel3D::get_rpm() const */

undefined4 __thiscall VehicleWheel3D::get_rpm(VehicleWheel3D *this)

{
  return *(undefined4 *)(this + 0x5ec);
}



/* VehicleBody3D::set_engine_force(float) */

void __thiscall VehicleBody3D::set_engine_force(VehicleBody3D *this,float param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x760);
  *(float *)(this + 0x6d8) = param_1;
  if ((plVar2 != (long *)0x0) && (0 < plVar2[-1])) {
    plVar1 = plVar2 + plVar2[-1];
    do {
      if (*(char *)(*plVar2 + 0x588) != '\0') {
        *(float *)(*plVar2 + 0x5f4) = param_1;
      }
      plVar2 = plVar2 + 1;
    } while (plVar1 != plVar2);
  }
  return;
}



/* VehicleBody3D::get_engine_force() const */

undefined4 __thiscall VehicleBody3D::get_engine_force(VehicleBody3D *this)

{
  return *(undefined4 *)(this + 0x6d8);
}



/* VehicleBody3D::set_brake(float) */

void __thiscall VehicleBody3D::set_brake(VehicleBody3D *this,float param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0x760);
  *(float *)(this + 0x6dc) = param_1;
  if ((plVar3 != (long *)0x0) && (0 < plVar3[-1])) {
    plVar1 = plVar3 + plVar3[-1];
    do {
      lVar2 = *plVar3;
      plVar3 = plVar3 + 1;
      *(float *)(lVar2 + 0x5f8) = param_1;
    } while (plVar1 != plVar3);
  }
  return;
}



/* VehicleBody3D::get_brake() const */

undefined4 __thiscall VehicleBody3D::get_brake(VehicleBody3D *this)

{
  return *(undefined4 *)(this + 0x6dc);
}



/* VehicleBody3D::set_steering(float) */

void __thiscall VehicleBody3D::set_steering(VehicleBody3D *this,float param_1)

{
  long *plVar1;
  long *plVar2;
  
  plVar2 = *(long **)(this + 0x760);
  *(float *)(this + 0x6e4) = param_1;
  if ((plVar2 != (long *)0x0) && (0 < plVar2[-1])) {
    plVar1 = plVar2 + plVar2[-1];
    do {
      if (*(char *)(*plVar2 + 0x589) != '\0') {
        *(float *)(*plVar2 + 0x5e0) = param_1;
      }
      plVar2 = plVar2 + 1;
    } while (plVar1 != plVar2);
  }
  return;
}



/* VehicleBody3D::get_steering() const */

undefined4 __thiscall VehicleBody3D::get_steering(VehicleBody3D *this)

{
  return *(undefined4 *)(this + 0x6e4);
}



/* VehicleWheel3D::set_radius(float) */

void __thiscall VehicleWheel3D::set_radius(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5b8) = param_1;
  Node3D::update_gizmos();
  return;
}



/* VehicleWheel3D::set_suspension_rest_length(float) */

void __thiscall VehicleWheel3D::set_suspension_rest_length(VehicleWheel3D *this,float param_1)

{
  *(float *)(this + 0x5b0) = param_1;
  Node3D::update_gizmos();
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VehicleBody3D::_resolve_single_bilateral(PhysicsDirectBodyState3D*, Vector3 const&,
   PhysicsBody3D*, Vector3 const&, Vector3 const&, float&, float) [clone .part.0] */

void __thiscall
VehicleBody3D::_resolve_single_bilateral
          (VehicleBody3D *this,PhysicsDirectBodyState3D *param_1,Vector3 *param_2,
          PhysicsBody3D *param_3,Vector3 *param_4,Vector3 *param_5,float *param_6,float param_7)

{
  long in_FS_OFFSET;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auVar8 [12];
  undefined1 auVar9 [12];
  float local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  undefined1 local_f8 [56];
  undefined1 local_c0 [12];
  undefined1 local_b4 [12];
  undefined1 local_a8 [48];
  undefined1 local_78 [36];
  float local_54;
  float local_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)param_1 + 0x1c0))(local_78);
  fVar1 = *(float *)(param_2 + 8) - local_4c;
  fVar2 = *(float *)(param_2 + 4) - local_50;
  fVar3 = *(float *)param_2 - local_54;
  if (param_3 == (PhysicsBody3D *)0x0) {
    local_104 = 0.0;
    local_100 = 0.0;
    local_fc = 0.0;
  }
  else {
    Node3D::get_global_transform();
    local_104 = *(float *)(param_4 + 8) - local_4c;
    local_100 = *(float *)(param_4 + 4) - local_50;
    local_fc = *(float *)param_4 - local_54;
  }
  local_78._0_12_ = (**(code **)(*(long *)param_1 + 0x1b0))(param_1);
  fVar5 = SUB124(local_78._0_12_,8);
  fVar4 = fVar3 * (float)local_78._4_4_;
  fVar7 = fVar2 * (float)local_78._0_4_;
  fVar6 = (float)local_78._4_4_ * fVar1;
  fVar1 = (float)local_78._0_4_ * fVar1;
  local_a8._0_12_ = (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
  fVar3 = (fVar3 * fVar5 - fVar1) + (float)local_a8._4_4_;
  local_118 = (fVar6 - fVar2 * fVar5) + (float)local_a8._0_4_;
  fVar2 = (fVar7 - fVar4) + SUB124(local_a8._0_12_,8);
  if (param_3 == (PhysicsBody3D *)0x0) {
    local_108 = 0.0;
  }
  else {
    auVar8 = (**(code **)(*(long *)param_3 + 0x200))(param_3);
    local_78._0_4_ = auVar8._0_4_;
    local_78._4_4_ = auVar8._4_4_;
    fVar4 = local_100 * (float)local_78._0_4_;
    fVar1 = local_fc * (float)local_78._4_4_;
    fVar5 = (float)local_78._4_4_ * local_104;
    local_104 = (float)local_78._0_4_ * local_104;
    local_78._0_12_ = auVar8;
    auVar9 = (**(code **)(*(long *)param_3 + 0x1f8))(param_3);
    local_a8._4_4_ = auVar9._4_4_;
    local_a8._0_4_ = auVar9._0_4_;
    fVar2 = fVar2 - ((fVar4 - fVar1) + auVar9._8_4_);
    fVar3 = fVar3 - ((local_fc * auVar8._8_4_ - local_104) + (float)local_a8._4_4_);
    local_118 = local_118 - ((fVar5 - local_100 * auVar8._8_4_) + (float)local_a8._0_4_);
    local_a8._0_12_ = auVar9;
    Node3D::get_global_transform();
    Basis::transposed();
    local_108 = (float)(**(code **)(*(long *)param_3 + 0x208))(param_3);
    local_c0 = (**(code **)(*(long *)param_3 + 0x1f8))(param_3);
    local_b4 = (**(code **)(*(long *)param_3 + 0x200))(param_3);
  }
  RigidBody3D::get_mass();
  (**(code **)(*(long *)param_1 + 400))(local_f8,param_1);
  (**(code **)(*(long *)param_1 + 0x1c0))(local_78,param_1);
  Basis::transposed();
  (**(code **)(*(long *)param_1 + 0x1c0))(local_78,param_1);
  Basis::transposed();
  (**(code **)(*(long *)param_1 + 0x1b0))(param_1);
  (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
  fVar1 = *(float *)(param_5 + 4);
  fVar4 = local_118 * *(float *)param_5;
  fVar5 = *(float *)(param_5 + 8);
  if (0.0 < param_7) {
    fVar6 = (float)(**(code **)(*(long *)param_1 + 0x2a8))(param_1);
    if (fVar6 / param_7 <= __LC3) {
      local_118 = (float)((uint)(fVar6 / param_7) ^ _LC122);
      goto LAB_001007f0;
    }
  }
  local_118 = _LC2;
LAB_001007f0:
  fVar6 = (float)RigidBody3D::get_mass();
  *param_6 = (float)(_LC5 / (_LC5 / (double)fVar6 + (double)local_108)) *
             (fVar4 + fVar3 * fVar1 + fVar2 * fVar5) * local_118;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<VehicleWheel3D*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<VehicleWheel3D*>::_copy_on_write(CowData<VehicleWheel3D*> *this)

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
  __n = lVar2 * 8;
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



/* CowData<float>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<float>::_copy_on_write(CowData<float> *this)

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



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Vector3>::_copy_on_write(CowData<Vector3> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  size_t __n;
  ulong uVar5;
  
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
  __n = lVar2 * 0xc;
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



/* MethodBind* ClassDB::bind_method<MethodDefinition, float (VehicleWheel3D::*)()
   const>(MethodDefinition, float (VehicleWheel3D::*)() const) [clone .isra.0] */

MethodBind * __thiscall
ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
          (ClassDB *this,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  MethodBind *this_00;
  long in_FS_OFFSET;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  this_00 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this_00);
  *(undefined8 *)(this_00 + 0x58) = param_2;
  *(undefined ***)this_00 = &PTR__gen_argument_type_00112048;
  *(undefined8 *)(this_00 + 0x60) = param_3;
  MethodBind::_set_returns(SUB81(this_00,0));
  MethodBind::_set_const(SUB81(this_00,0));
  MethodBind::_generate_argument_types((int)this_00);
  *(undefined4 *)(this_00 + 0x34) = 0;
  local_60 = 0;
  local_58 = "VehicleWheel3D";
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  StringName::operator=((StringName *)(this_00 + 0x18),(StringName *)&local_58);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
  ClassDB::bind_methodfi(1,this_00,false,(MethodDefinition *)this,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (MethodBind *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VehicleWheel3D::_update(PhysicsDirectBodyState3D*) */

void __thiscall VehicleWheel3D::_update(VehicleWheel3D *this,PhysicsDirectBodyState3D *param_1)

{
  float fVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 uVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float local_74;
  float fStack_70;
  undefined8 local_68;
  float local_60;
  float local_44;
  float local_40;
  float local_3c;
  long local_30;
  
  uVar4 = _LC20._4_4_;
  uVar3 = (uint)_LC20;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  fVar7 = (float)*(undefined8 *)(this + 0x638);
  fVar1 = (float)((ulong)*(undefined8 *)(this + 0x638) >> 0x20);
  if (this[0x650] == (VehicleWheel3D)0x0) {
    *(undefined4 *)(this + 0x600) = 0;
    fVar12 = _LC0;
    uVar11 = (uint)*(float *)(this + 0x640) ^ _LC122;
    *(undefined4 *)(this + 0x628) = *(undefined4 *)(this + 0x5b0);
    *(ulong *)(this + 0x610) = CONCAT44((uint)fVar1 ^ uVar4,(uint)fVar7 ^ uVar3);
    *(uint *)(this + 0x618) = uVar11;
  }
  else {
    fVar9 = *(float *)(this + 0x640) * *(float *)(this + 0x618);
    fVar12 = *(float *)(this + 0x610) * fVar7 + fVar1 * *(float *)(this + 0x614) + fVar9;
    (**(code **)(*(long *)param_1 + 0x1c0))(&local_68);
    fVar1 = *(float *)(this + 0x624);
    fVar7 = *(float *)(this + 0x620);
    fVar2 = *(float *)(this + 0x61c);
    uVar8 = (**(code **)(*(long *)param_1 + 0x1b0))(param_1);
    local_68._0_4_ = (float)uVar8;
    fVar5 = (float)local_68;
    local_68._4_4_ = (float)((ulong)uVar8 >> 0x20);
    fVar6 = local_68._4_4_;
    fVar10 = fVar9;
    local_68 = uVar8;
    local_60 = fVar9;
    uVar8 = (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
    fStack_70 = (float)((ulong)uVar8 >> 0x20);
    local_74 = (float)uVar8;
    if (fVar12 < __LC18) {
      fVar12 = _LC19 / fVar12;
      *(float *)(this + 0x600) =
           (((fVar6 * (fVar1 - local_3c) - fVar9 * (fVar7 - local_40)) + local_74) *
            *(float *)(this + 0x610) +
            ((fVar9 * (fVar2 - local_44) - (fVar1 - local_3c) * fVar5) + fStack_70) *
            *(float *)(this + 0x614) +
           ((fVar5 * (fVar7 - local_40) - fVar6 * (fVar2 - local_44)) + fVar10) *
           *(float *)(this + 0x618)) * fVar12;
    }
    else {
      *(undefined4 *)(this + 0x600) = 0;
      fVar12 = _LC17;
    }
  }
  *(float *)(this + 0x5fc) = fVar12;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VehicleWheel3D::VehicleWheel3D() */

void __thiscall VehicleWheel3D::VehicleWheel3D(VehicleWheel3D *this)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  Node3D::Node3D((Node3D *)this);
  uVar1 = _LC0;
  auVar4 = ZEXT416(_LC0);
  *(undefined1 (*) [16])(this + 0x528) = auVar4;
  *(undefined1 (*) [16])(this + 0x538) = auVar4;
  *(undefined1 (*) [16])(this + 0x558) = auVar4;
  *(undefined1 (*) [16])(this + 0x568) = auVar4;
  uVar3 = __LC121;
  uVar2 = __LC22;
  *(undefined ***)this = &PTR__initialize_classv_00111bd8;
  *(undefined8 *)(this + 0x5b0) = uVar2;
  *(undefined8 *)(this + 0x5b8) = uVar3;
  uVar3 = _UNK_00112498;
  uVar2 = __LC23;
  *(undefined8 *)(this + 0x54c) = 0;
  *(undefined8 *)(this + 0x5c0) = uVar2;
  *(undefined8 *)(this + 0x5c8) = uVar3;
  *(undefined1 (*) [16])(this + 0x5e0) = (undefined1  [16])0x0;
  uVar3 = _UNK_001124a8;
  uVar2 = __LC24;
  *(undefined4 *)(this + 0x554) = 0;
  *(undefined8 *)(this + 0x57c) = 0;
  *(undefined4 *)(this + 0x584) = 0;
  *(undefined2 *)(this + 0x588) = 0;
  *(undefined8 *)(this + 0x58c) = 0;
  *(undefined4 *)(this + 0x594) = 0;
  *(undefined8 *)(this + 0x598) = 0;
  *(undefined4 *)(this + 0x5a0) = 0;
  *(undefined8 *)(this + 0x5a4) = 0;
  *(undefined4 *)(this + 0x5ac) = 0;
  this[0x5d0] = (VehicleWheel3D)0x0;
  *(undefined8 *)(this + 0x5d8) = 0;
  *(undefined8 *)(this + 0x600) = 0;
  *(undefined4 *)(this + 0x608) = 0;
  *(undefined8 *)(this + 0x610) = 0;
  *(uint *)(this + 0x548) = uVar1;
  *(uint *)(this + 0x578) = uVar1;
  *(undefined8 *)(this + 0x5f0) = uVar2;
  *(undefined8 *)(this + 0x5f8) = uVar3;
  *(undefined4 *)(this + 0x618) = 0;
  *(undefined8 *)(this + 0x61c) = 0;
  *(undefined4 *)(this + 0x624) = 0;
  *(undefined4 *)(this + 0x628) = 0;
  *(undefined8 *)(this + 0x62c) = 0;
  *(undefined4 *)(this + 0x634) = 0;
  *(undefined8 *)(this + 0x638) = 0;
  *(undefined4 *)(this + 0x640) = 0;
  *(undefined8 *)(this + 0x644) = 0;
  *(undefined4 *)(this + 0x64c) = 0;
  this[0x650] = (VehicleWheel3D)0x0;
  *(undefined8 *)(this + 0x658) = 0;
  return;
}



/* VehicleBody3D::_update_wheel_transform(VehicleWheel3D&, PhysicsDirectBodyState3D*) */

void __thiscall
VehicleBody3D::_update_wheel_transform
          (VehicleBody3D *this,VehicleWheel3D *param_1,PhysicsDirectBodyState3D *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  float fVar9;
  undefined1 auVar10 [16];
  float fVar11;
  float fVar13;
  float fVar14;
  undefined1 auVar12 [16];
  float local_48;
  float fStack_44;
  undefined8 local_40;
  float local_38;
  float fStack_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined8 local_24;
  float local_1c;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)param_2;
  param_1[0x650] = (VehicleWheel3D)0x0;
  (**(code **)(lVar1 + 0x1c0))(&local_48,param_2);
  fVar5 = (float)((ulong)local_40 >> 0x20);
  fVar6 = (float)*(undefined8 *)(param_1 + 0x58c);
  fVar13 = (float)((ulong)*(undefined8 *)(param_1 + 0x58c) >> 0x20);
  fVar4 = (float)local_40;
  fVar3 = (float)*(undefined8 *)(param_1 + 0x594);
  fVar9 = (float)((ulong)*(undefined8 *)(param_1 + 0x594) >> 0x20);
  *(float *)(param_1 + 0x634) = fVar6 * local_30 + fVar13 * local_2c + fVar3 * local_28 + local_1c;
  fVar11 = (float)*(undefined8 *)(param_1 + 0x59c);
  fVar14 = (float)((ulong)*(undefined8 *)(param_1 + 0x59c) >> 0x20);
  *(ulong *)(param_1 + 0x62c) =
       CONCAT44(fVar6 * fVar5 + fVar13 * local_38 + fVar3 * fStack_34 +
                (float)((ulong)local_24 >> 0x20),
                fVar6 * local_48 + fVar13 * fStack_44 + fVar3 * fVar4 + (float)local_24);
  auVar8._0_4_ = fVar9 * local_48 + fVar11 * fStack_44 + fVar14 * fVar4;
  auVar8._4_4_ = fVar9 * fVar5 + fVar11 * local_38 + fVar14 * fStack_34;
  auVar8._8_8_ = 0;
  fVar3 = fVar9 * local_30 + fVar11 * local_2c + fVar14 * local_28;
  fVar6 = auVar8._0_4_ * auVar8._0_4_ + auVar8._4_4_ * auVar8._4_4_ + fVar3 * fVar3;
  fVar9 = 0.0;
  uVar2 = 0;
  if (fVar6 != 0.0) {
    fVar6 = SQRT(fVar6);
    fVar9 = fVar3 / fVar6;
    auVar12._4_4_ = fVar6;
    auVar12._0_4_ = fVar6;
    auVar12._8_8_ = _LC26;
    auVar8 = divps(auVar8,auVar12);
    uVar2 = auVar8._0_8_;
  }
  fVar3 = *(float *)(param_1 + 0x5ac);
  *(float *)(param_1 + 0x640) = fVar9;
  *(undefined8 *)(param_1 + 0x638) = uVar2;
  fVar9 = (float)*(undefined8 *)(param_1 + 0x5a4);
  fVar6 = (float)((ulong)*(undefined8 *)(param_1 + 0x5a4) >> 0x20);
  auVar7._0_4_ = fVar9 * local_48 + fVar6 * fStack_44 + fVar3 * fVar4;
  auVar7._4_4_ = fVar9 * fVar5 + fVar6 * local_38 + fVar3 * fStack_34;
  auVar7._8_8_ = 0;
  fVar3 = local_30 * fVar9 + fVar6 * local_2c + fVar3 * local_28;
  fVar4 = auVar7._0_4_ * auVar7._0_4_ + auVar7._4_4_ * auVar7._4_4_ + fVar3 * fVar3;
  fVar9 = 0.0;
  uVar2 = 0;
  if (fVar4 != 0.0) {
    fVar4 = SQRT(fVar4);
    fVar9 = fVar3 / fVar4;
    auVar10._4_4_ = fVar4;
    auVar10._0_4_ = fVar4;
    auVar10._8_8_ = _LC26;
    auVar8 = divps(auVar7,auVar10);
    uVar2 = auVar8._0_8_;
  }
  *(undefined8 *)(param_1 + 0x644) = uVar2;
  *(float *)(param_1 + 0x64c) = fVar9;
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VehicleBody3D::_update_wheel(int, PhysicsDirectBodyState3D*) */

void __thiscall
VehicleBody3D::_update_wheel(VehicleBody3D *this,int param_1,PhysicsDirectBodyState3D *param_2)

{
  long lVar1;
  VehicleWheel3D *pVVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
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
  float local_94;
  float local_90;
  float local_8c;
  undefined1 local_78 [8];
  float fStack_70;
  float fStack_6c;
  undefined1 local_68 [8];
  float fStack_60;
  float fStack_5c;
  float local_58;
  undefined1 local_48 [8];
  float fStack_40;
  float fStack_3c;
  undefined1 local_38 [8];
  float fStack_30;
  float fStack_2c;
  float local_28;
  long local_20;
  
  lVar4 = (long)param_1;
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = *(long *)(this + 0x760);
  if (lVar4 < 0) {
    if (lVar1 != 0) {
      lVar5 = *(long *)(lVar1 + -8);
      goto LAB_00101a29;
    }
  }
  else if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + -8);
    if (lVar4 < lVar5) {
      pVVar2 = *(VehicleWheel3D **)(lVar1 + lVar4 * 8);
      _update_wheel_transform(this,pVVar2,param_2);
      fVar9 = (float)(*(uint *)(pVVar2 + 0x640) ^ _LC122);
      fVar6 = (float)((uint)*(undefined8 *)(pVVar2 + 0x638) ^ (uint)_LC20);
      fVar7 = (float)((uint)((ulong)*(undefined8 *)(pVVar2 + 0x638) >> 0x20) ^ _LC20._4_4_);
      local_8c = *(float *)(pVVar2 + 0x648) * fVar6 - *(float *)(pVVar2 + 0x644) * fVar7;
      local_90 = *(float *)(pVVar2 + 0x644) * fVar9 - fVar6 * *(float *)(pVVar2 + 0x64c);
      local_94 = *(float *)(pVVar2 + 0x64c) * fVar7 - *(float *)(pVVar2 + 0x648) * fVar9;
      fVar10 = local_94 * local_94 + local_90 * local_90 + local_8c * local_8c;
      if (fVar10 == 0.0) {
        local_8c = 0.0;
        local_90 = 0.0;
        local_94 = 0.0;
      }
      else {
        fVar10 = SQRT(fVar10);
        local_94 = local_94 / fVar10;
        local_90 = local_90 / fVar10;
        local_8c = local_8c / fVar10;
      }
      _local_78 = ZEXT416(_LC0);
      _local_68 = ZEXT416(_LC0);
      local_58 = 1.0;
      Basis::set_axis_angle((Vector3 *)local_78,*(float *)(pVVar2 + 0x5e0));
      local_28 = 1.0;
      _local_48 = ZEXT416(_LC0);
      _local_38 = ZEXT416(_LC0);
      Basis::set_axis_angle((Vector3 *)local_48,*(float *)(pVVar2 + 0x5e4));
      fVar14 = (float)local_38._4_4_ * fStack_5c + fStack_40 * fStack_60 + local_28 * local_58;
      fVar15 = fStack_5c * (float)local_38._0_4_ + fStack_60 * (float)local_48._4_4_ +
               local_58 * fStack_2c;
      fVar8 = fStack_5c * fStack_3c + fStack_60 * (float)local_48._0_4_ + local_58 * fStack_30;
      fVar16 = (float)local_38._4_4_ * (float)local_68._0_4_ + fStack_40 * fStack_6c +
               local_28 * (float)local_68._4_4_;
      fVar17 = (float)local_38._0_4_ * (float)local_68._0_4_ + (float)local_48._4_4_ * fStack_6c +
               fStack_2c * (float)local_68._4_4_;
      fVar11 = (float)local_68._0_4_ * fStack_3c + fStack_6c * (float)local_48._0_4_ +
               (float)local_68._4_4_ * fStack_30;
      fVar10 = (float)local_38._0_4_ * (float)local_78._4_4_ +
               (float)local_48._4_4_ * (float)local_78._0_4_ + fStack_2c * fStack_70;
      fVar12 = (float)local_48._0_4_ * (float)local_78._0_4_ + (float)local_78._4_4_ * fStack_3c +
               fStack_70 * fStack_30;
      fVar13 = local_28 * fStack_70 +
               (float)local_38._4_4_ * (float)local_78._4_4_ + fStack_40 * (float)local_78._0_4_;
      *(float *)(pVVar2 + 0x528) =
           *(float *)(pVVar2 + 0x648) * fVar10 + *(float *)(pVVar2 + 0x644) * fVar12 +
           *(float *)(pVVar2 + 0x64c) * fVar13;
      *(float *)(pVVar2 + 0x52c) = fVar7 * fVar10 + fVar6 * fVar12 + fVar9 * fVar13;
      *(float *)(pVVar2 + 0x530) = fVar10 * local_90 + fVar12 * local_94 + fVar13 * local_8c;
      *(float *)(pVVar2 + 0x534) =
           *(float *)(pVVar2 + 0x648) * fVar17 + *(float *)(pVVar2 + 0x644) * fVar11 +
           *(float *)(pVVar2 + 0x64c) * fVar16;
      *(float *)(pVVar2 + 0x548) = fVar8 * local_94 + fVar15 * local_90 + fVar14 * local_8c;
      *(ulong *)(pVVar2 + 0x538) =
           CONCAT44(fVar11 * local_94 + fVar17 * local_90 + fVar16 * local_8c,
                    fVar7 * fVar17 + fVar6 * fVar11 + fVar9 * fVar16);
      *(ulong *)(pVVar2 + 0x540) =
           CONCAT44(fVar6 * fVar8 + fVar7 * fVar15 + fVar9 * fVar14,
                    *(float *)(pVVar2 + 0x644) * fVar8 + *(float *)(pVVar2 + 0x648) * fVar15 +
                    *(float *)(pVVar2 + 0x64c) * fVar14);
      fVar6 = (float)*(undefined8 *)(pVVar2 + 0x628);
      *(float *)(pVVar2 + 0x554) = *(float *)(pVVar2 + 0x640) * fVar6 + *(float *)(pVVar2 + 0x634);
      *(ulong *)(pVVar2 + 0x54c) =
           CONCAT44(fVar6 * (float)((ulong)*(undefined8 *)(pVVar2 + 0x638) >> 0x20) +
                    (float)((ulong)*(undefined8 *)(pVVar2 + 0x62c) >> 0x20),
                    fVar6 * (float)*(undefined8 *)(pVVar2 + 0x638) +
                    (float)*(undefined8 *)(pVVar2 + 0x62c));
      if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    goto LAB_00101a29;
  }
  lVar5 = 0;
LAB_00101a29:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar4,lVar5,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VehicleBody3D::_ray_cast(int, PhysicsDirectBodyState3D*) */

float __thiscall
VehicleBody3D::_ray_cast(VehicleBody3D *this,int param_1,PhysicsDirectBodyState3D *param_2)

{
  ulong uVar1;
  uint uVar2;
  VehicleWheel3D *pVVar3;
  code *pcVar4;
  uint uVar5;
  char cVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long in_FS_OFFSET;
  uint uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined1 auVar23 [12];
  undefined1 auVar24 [12];
  float local_120;
  float fStack_11c;
  float local_114;
  float fStack_110;
  undefined1 local_108 [36];
  float local_e4;
  float local_e0;
  float local_dc;
  undefined8 local_d8;
  float local_d0;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined1 local_c0 [16];
  long local_b0;
  undefined8 local_a8;
  float local_98;
  float fStack_94;
  float local_90;
  undefined8 local_8c;
  undefined4 local_84;
  undefined1 local_80 [16];
  void *local_70;
  void *pvStack_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50;
  long local_40;
  
  lVar12 = (long)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = *(long *)(this + 0x760);
  if (lVar12 < 0) {
    if (lVar9 != 0) {
      lVar13 = *(long *)(lVar9 + -8);
      goto LAB_001021e9;
    }
  }
  else if (lVar9 != 0) {
    lVar13 = *(long *)(lVar9 + -8);
    if (lVar12 < lVar13) {
      pVVar3 = *(VehicleWheel3D **)(lVar9 + lVar12 * 8);
      _update_wheel_transform(this,pVVar3,param_2);
      local_d8 = 0;
      fVar15 = (float)*(undefined8 *)(pVVar3 + 0x5b8);
      fVar20 = *(float *)(pVVar3 + 0x5b0) + fVar15;
      fVar16 = (float)*(undefined8 *)(pVVar3 + 0x638);
      fVar19 = (float)((ulong)*(undefined8 *)(pVVar3 + 0x638) >> 0x20);
      local_d0 = 0.0;
      local_cc = 0;
      fVar17 = (float)*(undefined8 *)(pVVar3 + 0x62c);
      fVar18 = (float)((ulong)*(undefined8 *)(pVVar3 + 0x62c) >> 0x20);
      local_a8 = _LC30;
      local_c4 = 0;
      local_b0 = 0;
      fVar21 = fVar17 - fVar15 * fVar16;
      fVar22 = fVar18 - fVar15 * fVar19;
      *(ulong *)(pVVar3 + 0x61c) = CONCAT44(fVar20 * fVar19 + fVar18,fVar20 * fVar16 + fVar17);
      fVar15 = *(float *)(pVVar3 + 0x634) - *(float *)(pVVar3 + 0x640) * fVar15;
      *(float *)(pVVar3 + 0x624) = fVar20 * *(float *)(pVVar3 + 0x640) + *(float *)(pVVar3 + 0x634);
      local_c0 = (undefined1  [16])0x0;
      plVar8 = (long *)(**(code **)(*(long *)param_2 + 0x2b8))(param_2);
      local_50 = 0;
      local_80 = (undefined1  [16])0x0;
      local_58 = 0x1000001ffffffff;
      local_70 = (void *)0x0;
      pvStack_68 = (void *)0x0;
      local_60 = *(ulong *)(this + 0x710);
      local_8c = *(undefined8 *)(pVVar3 + 0x61c);
      local_84 = *(undefined4 *)(pVVar3 + 0x624);
      local_90 = fVar15;
      local_98 = fVar21;
      fStack_94 = fVar22;
      if ((int)(local_60 >> 0x20) != 0) {
        uVar2 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
        uVar1 = (ulong)uVar2 * 4;
        pvStack_68 = (void *)Memory::alloc_static(uVar1,false);
        uVar11 = Memory::alloc_static((ulong)uVar2 * 8,false);
        local_80._0_8_ = uVar11;
        local_70 = (void *)Memory::alloc_static(uVar1,false);
        lVar9 = Memory::alloc_static(uVar1,false);
        local_80._8_8_ = lVar9;
        if (local_60._4_4_ != 0) {
          lVar12 = *(long *)(this + 0x6f0);
          lVar10 = 0;
          lVar13 = *(long *)(this + 0x700);
          do {
            *(undefined8 *)(local_80._0_8_ + lVar10 * 8) = *(undefined8 *)(lVar12 + lVar10 * 8);
            *(undefined4 *)((long)local_70 + lVar10 * 4) = *(undefined4 *)(lVar13 + lVar10 * 4);
            lVar10 = lVar10 + 1;
          } while ((uint)lVar10 < local_60._4_4_);
        }
        if (uVar2 != 0) {
          lVar12 = *(long *)(this + 0x708);
          lVar10 = 0;
          lVar13 = *(long *)(this + 0x6f8);
          do {
            *(undefined4 *)((long)pvStack_68 + lVar10) = *(undefined4 *)(lVar12 + lVar10);
            *(undefined4 *)(lVar9 + lVar10) = *(undefined4 *)(lVar13 + lVar10);
            lVar10 = lVar10 + 4;
          } while (uVar1 - lVar10 != 0);
        }
      }
      uVar7 = CollisionObject3D::get_collision_mask();
      local_58 = CONCAT44(local_58._4_4_,uVar7);
      lVar9 = *plVar8;
      *(undefined8 *)(pVVar3 + 0x658) = 0;
      cVar6 = (**(code **)(lVar9 + 0x150))(plVar8,&local_98,&local_d8);
      if (cVar6 == '\0') {
        pVVar3[0x650] = (VehicleWheel3D)0x0;
        fVar20 = _LC19;
        *(undefined4 *)(pVVar3 + 0x600) = 0;
        uVar5 = _LC20._4_4_;
        uVar2 = (uint)_LC20;
        *(undefined4 *)(pVVar3 + 0x628) = *(undefined4 *)(pVVar3 + 0x5b0);
        uVar14 = *(uint *)(pVVar3 + 0x640) ^ _LC122;
        *(ulong *)(pVVar3 + 0x610) =
             CONCAT44((uint)((ulong)*(undefined8 *)(pVVar3 + 0x638) >> 0x20) ^ uVar5,
                      (uint)*(undefined8 *)(pVVar3 + 0x638) ^ uVar2);
        fVar16 = _LC0;
        *(uint *)(pVVar3 + 0x618) = uVar14;
      }
      else {
        pVVar3[0x650] = (VehicleWheel3D)0x1;
        *(undefined8 *)(pVVar3 + 0x610) = local_cc;
        *(undefined4 *)(pVVar3 + 0x618) = local_c4;
        fVar20 = (SQRT(((float)local_d8 - fVar21) * ((float)local_d8 - fVar21) +
                       (local_d8._4_4_ - fVar22) * (local_d8._4_4_ - fVar22) +
                       (local_d0 - fVar15) * (local_d0 - fVar15)) /
                 SQRT((*(float *)(pVVar3 + 0x61c) - fVar21) * (*(float *)(pVVar3 + 0x61c) - fVar21)
                      + (*(float *)(pVVar3 + 0x620) - fVar22) *
                        (*(float *)(pVVar3 + 0x620) - fVar22) +
                      (*(float *)(pVVar3 + 0x624) - fVar15) * (*(float *)(pVVar3 + 0x624) - fVar15))
                 ) * fVar20;
        if (local_b0 != 0) {
          uVar11 = __dynamic_cast(local_b0,&Object::typeinfo,&PhysicsBody3D::typeinfo,0);
          *(undefined8 *)(pVVar3 + 0x658) = uVar11;
        }
        fVar15 = *(float *)(pVVar3 + 0x5b0) + *(float *)(pVVar3 + 0x5b4);
        fVar17 = *(float *)(pVVar3 + 0x5b0) - *(float *)(pVVar3 + 0x5b4);
        *(undefined8 *)(pVVar3 + 0x61c) = local_d8;
        if (fVar17 <= fVar20 - *(float *)(pVVar3 + 0x5b8)) {
          fVar17 = fVar20 - *(float *)(pVVar3 + 0x5b8);
        }
        *(float *)(pVVar3 + 0x624) = local_d0;
        if (fVar17 <= fVar15) {
          fVar15 = fVar17;
        }
        *(float *)(pVVar3 + 0x628) = fVar15;
        fVar16 = *(float *)(pVVar3 + 0x610) * *(float *)(pVVar3 + 0x638) +
                 *(float *)(pVVar3 + 0x614) * *(float *)(pVVar3 + 0x63c) +
                 *(float *)(pVVar3 + 0x618) * *(float *)(pVVar3 + 0x640);
        auVar23 = (**(code **)(*(long *)param_2 + 0x1b0))(param_2);
        (**(code **)(*(long *)param_2 + 0x1c0))(local_108);
        fStack_110 = auVar23._4_4_;
        fVar15 = *(float *)(pVVar3 + 0x624);
        local_114 = auVar23._0_4_;
        fVar17 = *(float *)(pVVar3 + 0x620);
        fVar18 = *(float *)(pVVar3 + 0x61c);
        auVar24 = (**(code **)(*(long *)param_2 + 0x1a0))(param_2);
        fStack_11c = auVar24._4_4_;
        local_120 = auVar24._0_4_;
        if (fVar16 < __LC18) {
          fVar16 = _LC19 / fVar16;
          *(float *)(pVVar3 + 0x600) =
               (((fStack_110 * (fVar15 - local_dc) - auVar23._8_4_ * (fVar17 - local_e0)) +
                local_120) * *(float *)(pVVar3 + 0x610) +
                ((auVar23._8_4_ * (fVar18 - local_e4) - (fVar15 - local_dc) * local_114) +
                fStack_11c) * *(float *)(pVVar3 + 0x614) +
               ((local_114 * (fVar17 - local_e0) - fStack_110 * (fVar18 - local_e4)) + auVar24._8_4_
               ) * *(float *)(pVVar3 + 0x618)) * fVar16;
        }
        else {
          *(undefined4 *)(pVVar3 + 0x600) = 0;
          fVar16 = _LC17;
        }
      }
      *(float *)(pVVar3 + 0x5fc) = fVar16;
      uVar11 = local_80._0_8_;
      if ((void *)local_80._0_8_ != (void *)0x0) {
        if (local_60._4_4_ != 0) {
          if (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0) {
            memset(pvStack_68,0,
                   (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) << 2);
          }
          local_60 = local_60 & 0xffffffff;
        }
        Memory::free_static((void *)uVar11,false);
        Memory::free_static(local_70,false);
        Memory::free_static((void *)local_80._8_8_,false);
        Memory::free_static(pvStack_68,false);
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return fVar20;
    }
    goto LAB_001021e9;
  }
  lVar13 = 0;
LAB_001021e9:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar13,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* VehicleBody3D::_update_suspension(PhysicsDirectBodyState3D*) */

void VehicleBody3D::_update_suspension(PhysicsDirectBodyState3D *param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  float fVar4;
  float fVar5;
  
  fVar4 = (float)RigidBody3D::get_mass();
  plVar3 = *(long **)(param_1 + 0x760);
  if ((plVar3 != (long *)0x0) && (0 < plVar3[-1])) {
    plVar1 = plVar3 + plVar3[-1];
    do {
      lVar2 = *plVar3;
      fVar5 = 0.0;
      if (*(char *)(lVar2 + 0x650) != '\0') {
        if (0.0 <= *(float *)(lVar2 + 0x600)) {
          fVar5 = *(float *)(lVar2 + 0x5c4);
        }
        else {
          fVar5 = *(float *)(lVar2 + 0x5c0);
        }
        fVar5 = ((*(float *)(lVar2 + 0x5b0) - *(float *)(lVar2 + 0x628)) * *(float *)(lVar2 + 0x5bc)
                 * *(float *)(lVar2 + 0x5fc) - fVar5 * *(float *)(lVar2 + 0x600)) * fVar4;
        if (fVar5 < 0.0) {
          fVar5 = 0.0;
        }
      }
      plVar3 = plVar3 + 1;
      *(float *)(lVar2 + 0x604) = fVar5;
    } while (plVar1 != plVar3);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VehicleBody3D::_resolve_single_bilateral(PhysicsDirectBodyState3D*, Vector3 const&,
   PhysicsBody3D*, Vector3 const&, Vector3 const&, float&, float) */

void __thiscall
VehicleBody3D::_resolve_single_bilateral
          (VehicleBody3D *this,PhysicsDirectBodyState3D *param_1,Vector3 *param_2,
          PhysicsBody3D *param_3,Vector3 *param_4,Vector3 *param_5,float *param_6,float param_7)

{
  if (*(float *)(param_5 + 4) * *(float *)(param_5 + 4) + *(float *)param_5 * *(float *)param_5 +
      *(float *)(param_5 + 8) * *(float *)(param_5 + 8) <= __LC32) {
    _resolve_single_bilateral(this,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
    return;
  }
  *param_6 = 0.0;
  return;
}



/* VehicleBody3D::btVehicleWheelContactPoint::btVehicleWheelContactPoint(PhysicsDirectBodyState3D*,
   PhysicsBody3D*, Vector3 const&, Vector3 const&, float) */

void __thiscall
VehicleBody3D::btVehicleWheelContactPoint::btVehicleWheelContactPoint
          (btVehicleWheelContactPoint *this,PhysicsDirectBodyState3D *param_1,PhysicsBody3D *param_2
          ,Vector3 *param_3,Vector3 *param_4,float param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar2 = *(undefined8 *)param_3;
  *(PhysicsBody3D **)(this + 8) = param_2;
  *(PhysicsDirectBodyState3D **)this = param_1;
  *(undefined8 *)(this + 0x10) = uVar2;
  uVar1 = *(undefined4 *)(param_3 + 8);
  *(float *)(this + 0x2c) = param_5;
  *(undefined4 *)(this + 0x18) = uVar1;
  uVar2 = *(undefined8 *)param_4;
  *(undefined4 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x1c) = uVar2;
  *(undefined4 *)(this + 0x24) = *(undefined4 *)(param_4 + 8);
  (**(code **)(*(long *)param_1 + 0x1c0))(&local_68);
  fVar7 = *(float *)(param_3 + 4) - local_40;
  fVar5 = *(float *)param_3 - local_44;
  fVar8 = *(float *)(param_3 + 8) - local_3c;
  fVar10 = *(float *)(param_4 + 4) * fVar5 - *(float *)param_4 * fVar7;
  fVar6 = *(float *)param_4 * fVar8 - *(float *)(param_4 + 8) * fVar5;
  fVar4 = *(float *)(param_4 + 8) * fVar7 - *(float *)(param_4 + 4) * fVar8;
  (**(code **)(*(long *)param_1 + 400))(&local_68,param_1);
  fVar9 = local_60 * fVar4 + local_54 * fVar6 + local_48 * fVar10;
  fVar3 = local_64 * fVar4 + local_58 * fVar6 + local_4c * fVar10;
  fVar6 = fVar4 * local_68 + fVar6 * local_5c + local_50 * fVar10;
  fVar4 = (float)(**(code **)(*(long *)param_1 + 0x180))(param_1);
  *(float *)(this + 0x28) =
       _LC0 / ((fVar3 * fVar8 - fVar9 * fVar7) * *(float *)param_4 +
               (fVar5 * fVar9 - fVar6 * fVar8) * *(float *)(param_4 + 4) +
               (fVar6 * fVar7 - fVar3 * fVar5) * *(float *)(param_4 + 8) + fVar4 + 0.0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VehicleBody3D::_calc_rolling_friction(VehicleBody3D::btVehicleWheelContactPoint&) */

void VehicleBody3D::_calc_rolling_friction(btVehicleWheelContactPoint *param_1)

{
  float fVar1;
  undefined8 *in_RSI;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  float in_XMM1_Da;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_80;
  float local_7c;
  float local_78;
  undefined8 local_58;
  float local_50;
  float local_34;
  float local_30;
  float local_2c;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)*in_RSI + 0x1c0))(&local_58);
  fVar2 = *(float *)(in_RSI + 3) - local_2c;
  fVar3 = *(float *)((long)in_RSI + 0x14) - local_30;
  fVar4 = *(float *)(in_RSI + 2) - local_34;
  if (in_RSI[1] == 0) {
    local_80 = 0.0;
    local_7c = 0.0;
    local_78 = 0.0;
  }
  else {
    Node3D::get_global_transform();
    local_80 = *(float *)(in_RSI + 3) - local_2c;
    local_7c = *(float *)((long)in_RSI + 0x14) - local_30;
    local_78 = *(float *)(in_RSI + 2) - local_34;
  }
  fVar1 = *(float *)((long)in_RSI + 0x2c);
  local_58 = (**(code **)(*(long *)*in_RSI + 0x1b0))();
  fVar8 = (float)((ulong)local_58 >> 0x20);
  fVar5 = (float)local_58;
  fVar7 = fVar5 * fVar2;
  fVar9 = fVar4 * in_XMM1_Da - fVar7;
  local_50 = in_XMM1_Da;
  uVar6 = (**(code **)(*(long *)*in_RSI + 0x1a0))();
  fVar9 = fVar9 + (float)((ulong)uVar6 >> 0x20);
  fVar4 = (fVar3 * fVar5 - fVar4 * fVar8) + fVar7;
  fVar2 = (fVar8 * fVar2 - fVar3 * in_XMM1_Da) + (float)uVar6;
  if ((long *)in_RSI[1] != (long *)0x0) {
    local_58 = (**(code **)(*(long *)in_RSI[1] + 0x200))();
    fVar5 = (float)((ulong)local_58 >> 0x20);
    fVar3 = (float)local_58;
    fVar8 = fVar3 * local_80;
    fVar10 = local_78 * fVar7 - fVar8;
    local_50 = fVar7;
    uVar6 = (**(code **)(*(long *)in_RSI[1] + 0x1f8))();
    fVar2 = fVar2 - ((fVar5 * local_80 - local_7c * fVar7) + (float)uVar6);
    fVar9 = fVar9 - (fVar10 + (float)((ulong)uVar6 >> 0x20));
    fVar4 = fVar4 - ((local_7c * fVar3 - local_78 * fVar5) + fVar8);
  }
  fVar3 = (float)((uint)(fVar2 * *(float *)((long)in_RSI + 0x1c) + fVar9 * *(float *)(in_RSI + 4) +
                        fVar4 * *(float *)((long)in_RSI + 0x24)) ^ _LC122) * *(float *)(in_RSI + 5);
  fVar2 = (float)(_LC122 ^ (uint)fVar1);
  if (((float)(_LC122 ^ (uint)fVar1) <= fVar3) && (fVar2 = fVar1, fVar3 <= fVar1)) {
    fVar2 = fVar3;
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(fVar2);
  }
  return;
}



/* VehicleBody3D::VehicleBody3D() */

void __thiscall VehicleBody3D::VehicleBody3D(VehicleBody3D *this)

{
  long in_FS_OFFSET;
  RID local_28 [24];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  RigidBody3D::RigidBody3D((RigidBody3D *)this);
  *(undefined4 *)(this + 0x6e8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_00111dc0;
  *(undefined8 *)(this + 0x710) = 2;
  *(undefined8 *)(this + 0x720) = 0;
  *(undefined8 *)(this + 0x730) = 0;
  *(undefined8 *)(this + 0x740) = 0;
  *(undefined8 *)(this + 0x750) = 0;
  *(undefined8 *)(this + 0x760) = 0;
  *(undefined1 (*) [16])(this + 0x6d8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x6f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x700) = (undefined1  [16])0x0;
  HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(local_28);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    RigidBody3D::set_mass(_LC39);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* ClassDB::bind_method<MethodDefinition, void
   (VehicleWheel3D::*)(float)>(MethodDefinition, void (VehicleWheel3D::*)(float)) [clone .isra.0] */

MethodBind *
ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
          (MethodDefinition *param_1,_func_void_float *param_2)

{
  long lVar1;
  MethodBind *pMVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  pMVar2 = create_method_bind<VehicleWheel3D,float>(param_2);
  ClassDB::bind_methodfi(1,pMVar2,false,param_1,(Variant **)0x0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (MethodBind *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VehicleWheel3D::_bind_methods() */

void VehicleWheel3D::_bind_methods(void)

{
  undefined *puVar1;
  wchar_t *pwVar2;
  MethodBind *pMVar3;
  wchar_t *pwVar4;
  undefined *puVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  wchar_t *local_98;
  long local_90;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "length";
  uVar6 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_radius",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_radius,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_radius",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,0x100000,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "length";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_suspension_rest_length",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_suspension_rest_length,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_suspension_rest_length",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_suspension_rest_length,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "length";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_suspension_travel",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_suspension_travel,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_suspension_travel",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_suspension_travel,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "length";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_suspension_stiffness",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_suspension_stiffness,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_suspension_stiffness",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_suspension_stiffness,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "length";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_suspension_max_force",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_suspension_max_force,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_suspension_max_force",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_suspension_max_force,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "length";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_damping_compression",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_damping_compression,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_damping_compression",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_damping_compression,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "length";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_damping_relaxation",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_damping_relaxation,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_damping_relaxation",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_damping_relaxation,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "enable";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_use_as_traction",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar3 = create_method_bind<VehicleWheel3D,bool>(set_use_as_traction);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"is_used_as_traction",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar3 = create_method_bind<VehicleWheel3D,bool>(is_used_as_traction);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "enable";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_use_as_steering",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar3 = create_method_bind<VehicleWheel3D,bool>(set_use_as_steering);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"is_used_as_steering",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar3 = create_method_bind<VehicleWheel3D,bool>(is_used_as_steering);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "length";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_friction_slip",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_friction_slip,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_friction_slip",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_friction_slip,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"is_in_contact",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar3 = create_method_bind<VehicleWheel3D,bool>(is_in_contact);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_contact_body",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar3 = create_method_bind<VehicleWheel3D,Node3D*>(get_contact_body);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_contact_point",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar3 = create_method_bind<VehicleWheel3D,Vector3>(get_contact_point);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_contact_normal",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar3 = create_method_bind<VehicleWheel3D,Vector3>(get_contact_normal);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "roll_influence";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_roll_influence",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_roll_influence,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_roll_influence",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_roll_influence,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_skidinfo",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_skidinfo,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_rpm",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_rpm,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_60 = 0;
  local_68 = "engine_force";
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_engine_force",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_engine_force,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_engine_force",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_engine_force,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "brake";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_brake",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_brake,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_brake",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_brake,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "steering";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_steering",uVar6);
  ClassDB::bind_method<MethodDefinition,void(VehicleWheel3D::*)(float)>
            ((MethodDefinition *)&local_98,set_steering,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_steering",0);
  ClassDB::bind_method<MethodDefinition,float(VehicleWheel3D::*)()const>
            ((ClassDB *)&local_98,get_steering,0);
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_98 = (wchar_t *)&_LC15;
  local_a8 = (char *)0x0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = L"Per-Wheel Motion";
  local_b0 = 0;
  local_90 = 0x10;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = L"VehicleWheel3D";
  local_b8 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (wchar_t *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  puVar1 = &_LC44;
  do {
    puVar5 = puVar1;
    puVar1 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_98 = L"-1024,1024,0.01,or_less,or_greater,suffix:kg⋅m/s² (N)";
  local_90 = (long)(puVar5 + -0x10d55c) >> 2;
  String::parse_utf32((StrRange *)&local_c8);
  local_98 = L"engine_force";
  local_d0 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103689;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103689;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103689:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  puVar1 = &_LC45;
  do {
    puVar5 = puVar1;
    puVar1 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_98 = L"-128,128,0.01,or_less,or_greater,suffix:kg⋅m/s² (N)";
  local_90 = (long)(puVar5 + -0x10d634) >> 2;
  String::parse_utf32((StrRange *)&local_c8);
  local_98 = L"brake";
  local_d0 = 0;
  local_90 = 5;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010381f;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010381f;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010381f:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = L"-180,180,0.01,radians_as_degrees";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x20;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = L"steering";
  local_d0 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,1,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010399c;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010399c;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010399c:
  local_a8 = (char *)0x0;
  local_98 = (wchar_t *)&_LC15;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = L"VehicleBody3D Motion";
  local_b0 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = L"VehicleWheel3D";
  local_b8 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (wchar_t *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = (wchar_t *)&_LC15;
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = L"use_as_traction";
  local_d0 = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,1,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103be0;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103be0;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103be0:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = (wchar_t *)&_LC15;
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = L"use_as_steering";
  local_d0 = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,1,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103d5a;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103d5a;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103d5a:
  local_a8 = (char *)0x0;
  local_98 = L"wheel_";
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = L"Wheel";
  local_b0 = 0;
  local_90 = 5;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = L"VehicleWheel3D";
  local_b8 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (wchar_t *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = (wchar_t *)&_LC15;
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = L"wheel_roll_influence";
  local_d0 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103f9c;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103f9c;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00103f9c:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = L"suffix:m";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = L"wheel_radius";
  local_d0 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104115;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104115;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00104115:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = L"suffix:m";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = L"wheel_rest_length";
  local_d0 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104290;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104290;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00104290:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = (wchar_t *)&_LC15;
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = L"wheel_friction_slip";
  local_d0 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010440b;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010440b;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010440b:
  local_a8 = (char *)0x0;
  local_98 = L"suspension_";
  local_90 = 0xb;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = L"Suspension";
  local_b0 = 0;
  local_90 = 10;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = L"VehicleWheel3D";
  local_b8 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (wchar_t *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = L"suffix:m";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_c8);
  local_98 = L"suspension_travel";
  local_d0 = 0;
  local_90 = 0x11;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010464d;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010464d;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_0010464d:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  pwVar2 = L"suffix:N/mm";
  do {
    pwVar4 = pwVar2;
    pwVar2 = pwVar4 + 1;
  } while (pwVar4[1] != L'\0');
  local_98 = L"suffix:N/mm";
  local_90 = (long)(pwVar4 + -0x435c1) >> 2;
  String::parse_utf32((StrRange *)&local_c8);
  local_98 = L"suspension_stiffness";
  local_d0 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047dc;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001047dc;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_001047dc:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  puVar1 = &_LC47;
  do {
    puVar5 = puVar1;
    puVar1 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_98 = L"suffix:kg⋅m/s² (N)";
  local_90 = (long)(puVar5 + -0x10d734) >> 2;
  String::parse_utf32((StrRange *)&local_c8);
  local_98 = L"suspension_max_force";
  local_d0 = 0;
  local_90 = 0x14;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104970;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104970;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00104970:
  local_a8 = (char *)0x0;
  local_98 = L"damping_";
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = L"Damping";
  local_b0 = 0;
  local_90 = 7;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = L"VehicleWheel3D";
  local_b8 = 0;
  local_90 = 0xe;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (wchar_t *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  puVar1 = &_LC48;
  do {
    puVar5 = puVar1;
    puVar1 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_98 = L"suffix:N⋅s/mm";
  local_90 = (long)(puVar5 + -0x10d784) >> 2;
  String::parse_utf32((StrRange *)&local_c8);
  local_98 = L"damping_compression";
  local_d0 = 0;
  local_90 = 0x13;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104bcd;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104bcd;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00104bcd:
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  puVar1 = &_LC48;
  do {
    puVar5 = puVar1;
    puVar1 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_98 = L"suffix:N⋅s/mm";
  local_90 = (long)(puVar5 + -0x10d784) >> 2;
  String::parse_utf32((StrRange *)&local_c8);
  local_98 = L"damping_relaxation";
  local_d0 = 0;
  local_90 = 0x12;
  String::parse_latin1((StrRange *)&local_d0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_98,3,(StrRange *)&local_d0,0,(StrRange *)&local_c8,6,&local_c0);
  local_a8 = "VehicleWheel3D";
  local_d8 = 0;
  local_a0 = 0xe;
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
  if (StringName::configured != '\0') {
    if (local_c0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d63;
    }
    if (local_b8 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d63;
    }
    if (local_b0 != 0) {
      StringName::unref();
    }
  }
LAB_00104d63:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VehicleBody3D::_bind_methods() */

void VehicleBody3D::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  MethodBind *pMVar4;
  undefined *puVar5;
  uint uVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  char *local_98;
  long local_90;
  char *local_88;
  int local_80;
  long local_78;
  undefined4 local_70;
  char *local_68;
  undefined8 local_60;
  char **local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_68 = "engine_force";
  uVar6 = (uint)&local_58;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_engine_force",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<VehicleBody3D,float>(set_engine_force);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_engine_force",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00112048;
  *(code **)(pMVar4 + 0x58) = get_engine_force;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "VehicleBody3D";
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "brake";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_brake",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<VehicleBody3D,float>(set_brake);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_brake",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00112048;
  *(code **)(pMVar4 + 0x58) = get_brake;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "VehicleBody3D";
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_68 = "steering";
  local_60 = 0;
  local_58 = &local_68;
  D_METHODP((char *)&local_98,(char ***)"set_steering",uVar6);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = create_method_bind<VehicleBody3D,float>(set_steering);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  D_METHODP((char *)&local_98,(char ***)"get_steering",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = (char **)0x0;
  pMVar4 = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(pMVar4);
  *(undefined ***)pMVar4 = &PTR__gen_argument_type_00112048;
  *(code **)(pMVar4 + 0x58) = get_steering;
  *(undefined8 *)(pMVar4 + 0x60) = 0;
  MethodBind::_set_returns(SUB81(pMVar4,0));
  MethodBind::_set_const(SUB81(pMVar4,0));
  MethodBind::_generate_argument_types((int)pMVar4);
  *(undefined4 *)(pMVar4 + 0x34) = 0;
  local_b0 = 0;
  local_a8 = "VehicleBody3D";
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_b0);
  StringName::StringName((StringName *)&local_a8,(String *)&local_b0,false);
  StringName::operator=((StringName *)(pMVar4 + 0x18),(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_98,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  MethodDefinition::~MethodDefinition((MethodDefinition *)&local_98);
  local_98 = "";
  local_a8 = (char *)0x0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_a8);
  local_98 = "Motion";
  local_b0 = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)&local_b0);
  local_98 = "VehicleBody3D";
  local_b8 = 0;
  local_90 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  ClassDB::add_property_group((StringName *)&local_98,(String *)&local_b0,(String *)&local_a8,0);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  puVar3 = &_LC44;
  do {
    puVar5 = puVar3;
    puVar3 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_98 = "-";
  local_90 = (long)(puVar5 + -0x10d55c) >> 2;
  String::parse_utf32((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "engine_force";
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,3);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c8 == 0) {
LAB_001055c0:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_001055c0;
    StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
    if (local_88 == local_a8) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = local_a8;
    }
  }
  local_d8 = 0;
  local_a8 = "VehicleBody3D";
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_c0 = 0;
  local_c8 = 0;
  puVar3 = &_LC45;
  do {
    puVar5 = puVar3;
    puVar3 = puVar5 + 4;
  } while (*(int *)(puVar5 + 4) != 0);
  local_98 = "-";
  local_90 = (long)(puVar5 + -0x10d634) >> 2;
  String::parse_utf32((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "brake";
  local_90 = 5;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,3);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c8 == 0) {
LAB_00105828:
    local_70 = 6;
    StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 != 0x11) goto LAB_00105828;
    StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
    if (local_88 == local_a8) {
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_88 = local_a8;
    }
  }
  local_d8 = 0;
  local_a8 = "VehicleBody3D";
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  _scs_create((char *)&local_b0,true);
  _scs_create((char *)&local_b8,true);
  local_98 = "-180,180,0.01,radians_as_degrees";
  local_c0 = 0;
  local_c8 = 0;
  local_90 = 0x20;
  String::parse_latin1((StrRange *)&local_c8);
  local_d0 = 0;
  local_98 = "steering";
  local_90 = 8;
  String::parse_latin1((StrRange *)&local_d0);
  local_98 = (char *)CONCAT44(local_98._4_4_,3);
  local_90 = 0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)&local_d0);
  }
  local_88 = (char *)0x0;
  local_80 = 1;
  local_78 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)&local_c8);
    local_70 = 6;
    if (local_80 == 0x11) {
      StringName::StringName((StringName *)&local_a8,(String *)&local_78,false);
      if (local_88 == local_a8) {
        if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_88 = local_a8;
      }
      goto LAB_00105a87;
    }
  }
  local_70 = 6;
  StringName::operator=((StringName *)&local_88,(StringName *)&local_c0);
LAB_00105a87:
  local_d8 = 0;
  local_a8 = "VehicleBody3D";
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_a8,(String *)&local_d8,false);
  ClassDB::add_property
            ((StringName *)&local_a8,(PropertyInfo *)&local_98,(StringName *)&local_b8,
             (StringName *)&local_b0,-1);
  if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  if ((((StringName::configured != '\0') &&
       ((local_c0 == 0 || (StringName::unref(), StringName::configured != '\0')))) &&
      ((local_b8 == 0 || (StringName::unref(), StringName::configured != '\0')))) && (local_b0 != 0)
     ) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<Vector3>::resize<false>(CowData<Vector3> *this,long param_1)

{
  long *plVar1;
  int iVar2;
  CowData<Vector3> *pCVar3;
  ulong uVar4;
  undefined8 *puVar5;
  char *pcVar6;
  undefined8 uVar7;
  CowData<Vector3> *pCVar8;
  CowData<Vector3> *pCVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return;
  }
  lVar10 = *(long *)this;
  if (lVar10 == 0) {
    if (param_1 == 0) {
      return;
    }
    _copy_on_write(this);
    lVar11 = 0;
    pCVar3 = (CowData<Vector3> *)0x0;
  }
  else {
    lVar11 = *(long *)(lVar10 + -8);
    if (param_1 == lVar11) {
      return;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar10 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return;
      }
      lVar10 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar10 + -0x10),false);
      return;
    }
    _copy_on_write(this);
    pCVar3 = (CowData<Vector3> *)(lVar11 * 0xc);
    if (pCVar3 != (CowData<Vector3> *)0x0) {
      uVar4 = (ulong)(pCVar3 + -1) | (ulong)(pCVar3 + -1) >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      pCVar3 = (CowData<Vector3> *)((uVar4 | uVar4 >> 0x20) + 1);
    }
  }
  if (param_1 * 0xc != 0) {
    uVar4 = param_1 * 0xc - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    pCVar9 = (CowData<Vector3> *)(uVar4 | uVar4 >> 0x20);
    pCVar8 = pCVar9 + 1;
    if (pCVar8 != (CowData<Vector3> *)0x0) {
      if (param_1 <= lVar11) {
        if ((pCVar8 != pCVar3) && (iVar2 = _realloc(this,(long)pCVar8), iVar2 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_001086a8();
        return;
      }
      if (pCVar8 == pCVar3) {
LAB_00105f3c:
        puVar12 = *(undefined8 **)this;
        if (puVar12 == (undefined8 *)0x0) {
          resize<false>((long)pCVar9);
          return;
        }
        lVar10 = puVar12[-1];
        if (param_1 <= lVar10) goto LAB_00105ec7;
      }
      else {
        if (lVar11 != 0) {
          pCVar9 = this;
          iVar2 = _realloc(this,(long)pCVar8);
          if (iVar2 != 0) {
            return;
          }
          goto LAB_00105f3c;
        }
        puVar5 = (undefined8 *)Memory::alloc_static((ulong)(pCVar9 + 0x11),false);
        if (puVar5 == (undefined8 *)0x0) {
          uVar7 = 0x171;
          pcVar6 = "Parameter \"mem_new\" is null.";
          goto LAB_00105fe2;
        }
        puVar12 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar12;
        lVar10 = 0;
      }
      memset((void *)((long)puVar12 + lVar10 * 0xc),0,(param_1 - lVar10) * 0xc);
LAB_00105ec7:
      puVar12[-1] = param_1;
      return;
    }
  }
  uVar7 = 0x16a;
  pcVar6 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00105fe2:
  _err_print_error("resize","./core/templates/cowdata.h",uVar7,pcVar6,0,0);
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



/* Error CowData<float>::resize<false>(long) [clone .isra.0] */

void __thiscall CowData<float>::resize<false>(CowData<float> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  CowData<float> *pCVar4;
  ulong uVar5;
  undefined8 *puVar6;
  char *pcVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  CowData<float> *pCVar10;
  CowData<float> *pCVar11;
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
    pCVar4 = (CowData<float> *)0x0;
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
    pCVar4 = (CowData<float> *)(lVar12 * 4);
    if (pCVar4 != (CowData<float> *)0x0) {
      uVar5 = (ulong)(pCVar4 + -1) | (ulong)(pCVar4 + -1) >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar4 = (CowData<float> *)((uVar5 | uVar5 >> 0x20) + 1);
    }
  }
  if (param_1 * 4 != 0) {
    uVar5 = param_1 * 4 - 1;
    uVar5 = uVar5 | uVar5 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    pCVar11 = (CowData<float> *)(uVar5 | uVar5 >> 0x20);
    pCVar10 = pCVar11 + 1;
    if (pCVar10 != (CowData<float> *)0x0) {
      if (param_1 <= lVar12) {
        if ((pCVar10 != pCVar4) && (iVar3 = _realloc(this,(long)pCVar10), iVar3 != 0)) {
          return;
        }
        if (*(long *)this != 0) {
          *(long *)(*(long *)this + -8) = param_1;
          return;
        }
        FUN_001086ca();
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
            goto LAB_00106261;
          }
          uVar9 = 0x171;
          pcVar7 = "Parameter \"mem_new\" is null.";
          goto LAB_00106352;
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
LAB_00106261:
      puVar8[-1] = param_1;
      return;
    }
  }
  uVar9 = 0x16a;
  pcVar7 = 
  "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
  ;
LAB_00106352:
  _err_print_error("resize","./core/templates/cowdata.h",uVar9,pcVar7,0,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VehicleBody3D::_update_friction(PhysicsDirectBodyState3D*) */

void __thiscall
VehicleBody3D::_update_friction(VehicleBody3D *this,PhysicsDirectBodyState3D *param_1)

{
  CowData<Vector3> *this_00;
  CowData<float> *this_01;
  CowData<Vector3> *this_02;
  CowData<float> *this_03;
  long lVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  char cVar5;
  code *pcVar6;
  char cVar7;
  undefined8 *puVar8;
  long lVar9;
  float *pfVar10;
  long lVar11;
  long lVar12;
  Vector3 *pVVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  long in_FS_OFFSET;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined1 auVar20 [16];
  float fVar21;
  undefined1 auVar22 [16];
  undefined8 local_c8;
  float local_c0;
  undefined8 local_b8;
  float local_b0;
  undefined8 local_9c;
  float local_94;
  undefined8 local_78;
  float local_70;
  undefined8 local_54;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0x760) == 0) ||
     (iVar14 = (int)*(undefined8 *)(*(long *)(this + 0x760) + -8), iVar14 == 0)) goto LAB_001063cb;
  lVar15 = (long)iVar14;
  this_00 = (CowData<Vector3> *)(this + 0x720);
  this_01 = (CowData<float> *)(this + 0x740);
  CowData<Vector3>::resize<false>(this_00,lVar15);
  this_02 = (CowData<Vector3> *)(this + 0x730);
  this_03 = (CowData<float> *)(this + 0x750);
  CowData<Vector3>::resize<false>(this_02,lVar15);
  CowData<float>::resize<false>(this_01,lVar15);
  CowData<float>::resize<false>(this_03,lVar15);
  lVar15 = *(long *)(this + 0x760);
  if (lVar15 != 0) {
    lVar16 = 0;
    do {
      if (*(long *)(lVar15 + -8) <= lVar16) {
        if (lVar15 != 0) {
          lVar16 = 0;
          goto LAB_001067b0;
        }
        break;
      }
      if (*(long *)(this + 0x750) == 0) goto LAB_00106760;
      lVar15 = *(long *)(*(long *)(this + 0x750) + -8);
      if (lVar15 <= lVar16) goto LAB_00106763;
      lVar9 = lVar16 * 4;
      CowData<float>::_copy_on_write(this_03);
      *(undefined4 *)(*(long *)(this + 0x750) + lVar16 * 4) = 0;
      if (*(long *)(this + 0x740) == 0) goto LAB_00106760;
      lVar15 = *(long *)(*(long *)(this + 0x740) + -8);
      if (lVar15 <= lVar16) goto LAB_00106763;
      lVar16 = lVar16 + 1;
      CowData<float>::_copy_on_write(this_01);
      *(undefined4 *)(*(long *)(this + 0x740) + lVar9) = 0;
      lVar15 = *(long *)(this + 0x760);
    } while (lVar15 != 0);
  }
  goto LAB_001064f3;
  while( true ) {
    lVar9 = *(long *)(lVar15 + lVar16 * 8);
    if (*(char *)(lVar9 + 0x650) != '\0') {
      fVar17 = *(float *)(lVar9 + 0x540);
      fVar18 = (float)((ulong)*(undefined8 *)(lVar9 + 0x530) >> 0x20);
      fVar19 = (float)*(undefined8 *)(lVar9 + 0x528);
      if (*(long *)(this + 0x730) == 0) goto LAB_00106760;
      lVar15 = *(long *)(*(long *)(this + 0x730) + -8);
      if (lVar15 <= lVar16) goto LAB_00106763;
      CowData<Vector3>::_copy_on_write(this_02);
      lVar15 = *(long *)(this + 0x730);
      lVar1 = lVar16 * 0xc;
      *(undefined8 *)(lVar15 + lVar1) = CONCAT44(fVar18,fVar19);
      *(float *)((undefined8 *)(lVar15 + lVar1) + 1) = fVar17;
      if (lVar15 == 0) goto LAB_00106c30;
      lVar12 = *(long *)(lVar15 + -8);
      if (lVar12 <= lVar16) goto LAB_00106c51;
      fVar21 = *(float *)(lVar9 + 0x610);
      fVar2 = *(float *)(lVar9 + 0x614);
      fVar3 = *(float *)(lVar9 + 0x618);
      fVar17 = fVar18 * fVar2 + fVar19 * fVar21 + fVar17 * fVar3;
      CowData<Vector3>::_copy_on_write(this_02);
      lVar15 = *(long *)(this + 0x730);
      pfVar10 = (float *)(lVar15 + lVar1);
      fVar18 = *pfVar10 - fVar21 * fVar17;
      fVar19 = pfVar10[1] - fVar2 * fVar17;
      fVar17 = pfVar10[2] - fVar3 * fVar17;
      *pfVar10 = fVar18;
      pfVar10[1] = fVar19;
      pfVar10[2] = fVar17;
      if (lVar15 == 0) goto LAB_00106c30;
      lVar12 = *(long *)(lVar15 + -8);
      if (lVar12 <= lVar16) goto LAB_00106c51;
      fVar21 = fVar18 * fVar18 + fVar19 * fVar19 + fVar17 * fVar17;
      if (fVar21 == 0.0) {
        fVar17 = 0.0;
        fVar19 = 0.0;
        fVar18 = 0.0;
      }
      else {
        fVar21 = SQRT(fVar21);
        fVar18 = fVar18 / fVar21;
        fVar19 = fVar19 / fVar21;
        fVar17 = fVar17 / fVar21;
      }
      CowData<Vector3>::_copy_on_write(this_02);
      lVar15 = *(long *)(this + 0x730);
      pfVar10 = (float *)(lVar15 + lVar1);
      *pfVar10 = fVar18;
      pfVar10[1] = fVar19;
      pfVar10[2] = fVar17;
      if (lVar15 == 0) goto LAB_00106c30;
      lVar12 = *(long *)(lVar15 + -8);
      if (lVar12 <= lVar16) goto LAB_00106c51;
      fVar21 = *(float *)(lVar9 + 0x610);
      fVar2 = *(float *)(lVar9 + 0x614);
      fVar3 = *(float *)(lVar9 + 0x618);
      if (*(long *)(this + 0x720) == 0) goto LAB_00106760;
      lVar15 = *(long *)(*(long *)(this + 0x720) + -8);
      if (lVar15 <= lVar16) goto LAB_00106763;
      CowData<Vector3>::_copy_on_write(this_00);
      lVar15 = *(long *)(this + 0x720);
      pfVar10 = (float *)(lVar15 + lVar1);
      *pfVar10 = fVar2 * fVar17 - fVar3 * fVar19;
      pfVar10[1] = fVar18 * fVar3 - fVar21 * fVar17;
      pfVar10[2] = fVar21 * fVar19 - fVar2 * fVar18;
      if (lVar15 == 0) goto LAB_00106760;
      lVar15 = *(long *)(lVar15 + -8);
      if (lVar15 <= lVar16) goto LAB_00106763;
      CowData<Vector3>::_copy_on_write(this_00);
      pfVar10 = (float *)(*(long *)(this + 0x720) + lVar1);
      auVar22._8_8_ = 0;
      auVar22._0_8_ = *(ulong *)pfVar10;
      fVar17 = pfVar10[2];
      fVar18 = (float)(*(ulong *)pfVar10 >> 0x20);
      fVar18 = *pfVar10 * *pfVar10 + fVar18 * fVar18 + fVar17 * fVar17;
      if (fVar18 == 0.0) {
        pfVar10[0] = 0.0;
        pfVar10[1] = 0.0;
        pfVar10[2] = 0.0;
      }
      else {
        fVar18 = SQRT(fVar18);
        auVar20._4_4_ = fVar18;
        auVar20._0_4_ = fVar18;
        auVar20._8_8_ = _LC26;
        auVar22 = divps(auVar22,auVar20);
        pfVar10[2] = fVar17 / fVar18;
        *(long *)pfVar10 = auVar22._0_8_;
      }
      fVar17 = *(float *)(lVar9 + 0x5f0);
      if (*(long *)(this + 0x750) == 0) goto LAB_00106760;
      lVar15 = *(long *)(*(long *)(this + 0x750) + -8);
      if (lVar15 <= lVar16) goto LAB_00106763;
      CowData<float>::_copy_on_write(this_03);
      lVar11 = *(long *)(this + 0x750);
      lVar15 = *(long *)(this + 0x730);
      pfVar10 = (float *)(lVar11 + lVar16 * 4);
      if (lVar15 == 0) goto LAB_00106c30;
      lVar12 = *(long *)(lVar15 + -8);
      if (lVar12 <= lVar16) goto LAB_00106c51;
      pVVar13 = (Vector3 *)(lVar15 + lVar1);
      if (__LC32 < *(float *)pVVar13 * *(float *)pVVar13 +
                   *(float *)(pVVar13 + 4) * *(float *)(pVVar13 + 4) +
                   *(float *)(pVVar13 + 8) * *(float *)(pVVar13 + 8)) {
        *pfVar10 = 0.0;
      }
      else {
        _resolve_single_bilateral
                  (this,param_1,(Vector3 *)(lVar9 + 0x61c),*(PhysicsBody3D **)(lVar9 + 0x658),
                   (Vector3 *)(lVar9 + 0x61c),pVVar13,pfVar10,fVar17);
        lVar11 = *(long *)(this + 0x750);
      }
      if (lVar11 == 0) goto LAB_00106760;
      lVar15 = *(long *)(lVar11 + -8);
      if (lVar15 <= lVar16) goto LAB_00106763;
      CowData<float>::_copy_on_write(this_03);
      lVar15 = *(long *)(this + 0x760);
    }
    lVar16 = lVar16 + 1;
    if (lVar15 == 0) break;
LAB_001067b0:
    if (*(long *)(lVar15 + -8) <= lVar16) {
      if (lVar15 != 0) {
        cVar7 = '\0';
        lVar16 = 0;
        goto LAB_00106c9e;
      }
      break;
    }
  }
  goto LAB_001064f3;
LAB_00106f7e:
  do {
    if (*(long *)(lVar15 + -8) <= lVar16) goto LAB_001064f3;
    lVar9 = *(long *)(this + 0x750);
    if (lVar9 == 0) goto LAB_00106c30;
    lVar12 = *(long *)(lVar9 + -8);
    if (lVar12 <= lVar16) goto LAB_00106c51;
    if (*(float *)(lVar9 + lVar16 * 4) != 0.0) {
      fVar17 = *(float *)(*(long *)(lVar15 + lVar16 * 8) + 0x608);
      if (fVar17 < _LC0) {
        if (*(long *)(this + 0x740) == 0) {
LAB_00106760:
          lVar15 = 0;
LAB_00106763:
          _err_print_index_error
                    ("operator[]","./core/templates/vector.h",0x38,lVar16,lVar15,"p_index",
                     "((Vector<T> *)(this))->_cowdata.size()","",false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar15 = *(long *)(*(long *)(this + 0x740) + -8);
        if (lVar15 <= lVar16) goto LAB_00106763;
        CowData<float>::_copy_on_write(this_01);
        pfVar10 = (float *)(*(long *)(this + 0x740) + lVar16 * 4);
        *pfVar10 = fVar17 * *pfVar10;
        lVar15 = *(long *)(this + 0x760);
        if (lVar15 == 0) goto LAB_00106c30;
        lVar12 = *(long *)(lVar15 + -8);
        if (lVar12 <= lVar16) goto LAB_00106c51;
        fVar17 = *(float *)(*(long *)(lVar15 + lVar16 * 8) + 0x608);
        if (*(long *)(this + 0x750) == 0) goto LAB_00106760;
        lVar15 = *(long *)(*(long *)(this + 0x750) + -8);
        if (lVar15 <= lVar16) goto LAB_00106763;
        CowData<float>::_copy_on_write(this_03);
        pfVar10 = (float *)(lVar16 * 4 + *(long *)(this + 0x750));
        lVar15 = *(long *)(this + 0x760);
        *pfVar10 = fVar17 * *pfVar10;
      }
    }
    lVar16 = lVar16 + 1;
  } while (lVar15 != 0);
  goto LAB_001063cb;
LAB_00106c30:
  lVar12 = 0;
LAB_00106c51:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar16,lVar12,"p_index","size()","",false,true)
  ;
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar6 = (code *)invalidInstructionException();
  (*pcVar6)();
  while( true ) {
    lVar9 = *(long *)(lVar15 + lVar16 * 8);
    if (*(char *)(lVar9 + 0x650) == '\0') {
      fVar17 = 0.0;
    }
    else {
      fVar18 = *(float *)(lVar9 + 0x5f4);
      if (fVar18 == 0.0) {
        fVar17 = *(float *)(lVar9 + 0x5f8);
        if (fVar17 == 0.0) {
          fVar17 = 0.0;
        }
        lVar15 = *(long *)(this + 0x720);
        if (lVar15 == 0) goto LAB_00106c30;
        lVar12 = *(long *)(lVar15 + -8);
        if (lVar12 <= lVar16) goto LAB_00106c51;
        btVehicleWheelContactPoint::btVehicleWheelContactPoint
                  ((btVehicleWheelContactPoint *)&local_78,param_1,
                   *(PhysicsBody3D **)(lVar9 + 0x658),(Vector3 *)(lVar9 + 0x61c),
                   (Vector3 *)(lVar15 + lVar16 * 0xc),fVar17);
        fVar17 = (float)_calc_rolling_friction((btVehicleWheelContactPoint *)this);
      }
      else {
        fVar17 = (float)(**(code **)(*(long *)param_1 + 0x2a8))(param_1);
        fVar17 = (float)((uint)fVar18 ^ _LC122) * fVar17;
      }
    }
    if (*(long *)(this + 0x740) == 0) goto LAB_00106760;
    lVar15 = *(long *)(*(long *)(this + 0x740) + -8);
    if (lVar15 <= lVar16) goto LAB_00106763;
    CowData<float>::_copy_on_write(this_01);
    cVar5 = *(char *)(lVar9 + 0x650);
    *(undefined4 *)(*(long *)(this + 0x740) + lVar16 * 4) = 0;
    *(undefined4 *)(lVar9 + 0x608) = 0x3f800000;
    if (cVar5 != '\0') {
      fVar18 = *(float *)(lVar9 + 0x604);
      fVar21 = (float)(**(code **)(*(long *)param_1 + 0x2a8))(param_1);
      fVar19 = *(float *)(lVar9 + 0x5c8);
      if (*(long *)(this + 0x740) == 0) goto LAB_00106760;
      lVar15 = *(long *)(*(long *)(this + 0x740) + -8);
      if (lVar15 <= lVar16) goto LAB_00106763;
      CowData<float>::_copy_on_write(this_01);
      lVar15 = *(long *)(this + 0x740);
      *(float *)(lVar15 + lVar16 * 4) = fVar17;
      if (lVar15 == 0) goto LAB_00106c30;
      lVar12 = *(long *)(lVar15 + -8);
      if (lVar12 <= lVar16) goto LAB_00106c51;
      lVar15 = *(long *)(this + 0x750);
      if (lVar15 == 0) goto LAB_00106c30;
      lVar12 = *(long *)(lVar15 + -8);
      if (lVar12 <= lVar16) goto LAB_00106c51;
      fVar2 = *(float *)(lVar15 + lVar16 * 4);
      fVar19 = fVar18 * fVar21 * fVar19;
      fVar17 = fVar17 * __LC121 * fVar17 * __LC121 + fVar2 * fVar2;
      if (fVar19 * fVar19 < fVar17) {
        *(float *)(lVar9 + 0x608) = (fVar19 / SQRT(fVar17)) * *(float *)(lVar9 + 0x608);
        cVar7 = cVar5;
      }
    }
    lVar15 = *(long *)(this + 0x760);
    lVar16 = lVar16 + 1;
    if (lVar15 == 0) break;
LAB_00106c9e:
    if (*(long *)(lVar15 + -8) <= lVar16) {
      if ((cVar7 != '\0') && (lVar15 != 0)) {
        lVar16 = 0;
        goto LAB_00106f7e;
      }
      break;
    }
  }
LAB_001064f3:
  for (lVar16 = 0; (lVar15 != 0 && (lVar16 < *(long *)(lVar15 + -8))); lVar16 = lVar16 + 1) {
    lVar15 = *(long *)(lVar15 + lVar16 * 8);
    (**(code **)(*(long *)param_1 + 0x1c0))(&local_78,param_1);
    lVar9 = *(long *)(this + 0x740);
    local_c0 = *(float *)(lVar15 + 0x624) - local_4c;
    local_c8 = CONCAT44((float)((ulong)*(undefined8 *)(lVar15 + 0x61c) >> 0x20) -
                        (float)((ulong)local_54 >> 0x20),
                        (float)*(undefined8 *)(lVar15 + 0x61c) - (float)local_54);
    if (lVar9 == 0) {
LAB_00106f32:
      lVar12 = 0;
      goto LAB_00106c51;
    }
    lVar12 = *(long *)(lVar9 + -8);
    if (lVar12 <= lVar16) goto LAB_00106c51;
    fVar17 = *(float *)(lVar9 + lVar16 * 4);
    if (fVar17 != 0.0) {
      lVar9 = *(long *)(this + 0x720);
      if (lVar9 == 0) goto LAB_00106f32;
      lVar12 = *(long *)(lVar9 + -8);
      if (lVar12 <= lVar16) goto LAB_00106c51;
      puVar8 = (undefined8 *)(lVar9 + lVar16 * 0xc);
      uVar4 = *puVar8;
      local_70 = *(float *)(puVar8 + 1) * fVar17;
      local_78 = CONCAT44(fVar17 * (float)((ulong)uVar4 >> 0x20),fVar17 * (float)uVar4);
      (**(code **)(*(long *)param_1 + 0x1d8))(param_1,&local_78,&local_c8);
    }
    lVar9 = *(long *)(this + 0x750);
    if (lVar9 == 0) goto LAB_00106f32;
    lVar12 = *(long *)(lVar9 + -8);
    if (lVar12 <= lVar16) goto LAB_00106c51;
    if (*(float *)(lVar9 + lVar16 * 4) != 0.0) {
      if (*(long *)(lVar15 + 0x658) != 0) {
        Node3D::get_global_transform();
        lVar9 = *(long *)(this + 0x750);
        if (lVar9 == 0) goto LAB_00106f32;
        lVar12 = *(long *)(lVar9 + -8);
        if (lVar12 <= lVar16) goto LAB_00106c51;
      }
      fVar17 = *(float *)(lVar9 + lVar16 * 4);
      lVar9 = *(long *)(this + 0x730);
      if (lVar9 == 0) goto LAB_00106f32;
      lVar12 = *(long *)(lVar9 + -8);
      if (lVar12 <= lVar16) goto LAB_00106c51;
      puVar8 = (undefined8 *)(lVar9 + lVar16 * 0xc);
      uVar4 = *puVar8;
      local_b0 = fVar17 * *(float *)(puVar8 + 1);
      local_b8 = CONCAT44((float)((ulong)uVar4 >> 0x20) * fVar17,(float)uVar4 * fVar17);
      (**(code **)(*(long *)param_1 + 0x1c0))(&local_78,param_1);
      Basis::transposed();
      fVar18 = (float)((ulong)local_9c >> 0x20);
      fVar17 = ((float)local_c8 * (float)local_9c + fVar18 * local_c8._4_4_ + local_94 * local_c0) *
               (_LC0 - *(float *)(lVar15 + 0x5f0));
      local_c0 = local_c0 - local_94 * fVar17;
      local_c8 = CONCAT44(local_c8._4_4_ - fVar17 * fVar18,
                          (float)local_c8 - fVar17 * (float)local_9c);
      (**(code **)(*(long *)param_1 + 0x1d8))(param_1,&local_b8,&local_c8);
    }
    lVar15 = *(long *)(this + 0x760);
  }
LAB_001063cb:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VehicleWheel3D::_notification(int) */

void __thiscall VehicleWheel3D::_notification(VehicleWheel3D *this,int param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  float fVar8;
  undefined1 auVar9 [16];
  uint uVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  float fVar13;
  undefined1 auVar14 [16];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  float local_68;
  float fStack_64;
  float local_5c;
  float fStack_58;
  float local_50;
  float local_4c;
  undefined8 local_44;
  undefined4 local_3c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 10) {
    if (((param_1 == 0xb) && (lVar3 = Node::get_parent(), lVar3 != 0)) &&
       (lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&VehicleBody3D::typeinfo,0), lVar3 != 0)) {
      lVar6 = *(long *)(lVar3 + 0x760);
      if ((lVar6 != 0) && (lVar7 = *(long *)(lVar6 + -8), 0 < lVar7)) {
        lVar5 = 0;
        do {
          if (this == *(VehicleWheel3D **)(lVar6 + lVar5 * 8)) {
            if (lVar5 < lVar7) {
              CowData<VehicleWheel3D*>::_copy_on_write((CowData<VehicleWheel3D*> *)(lVar3 + 0x760));
              lVar6 = *(long *)(lVar3 + 0x760);
              if (lVar6 == 0) {
                lVar7 = -1;
              }
              else {
                lVar7 = *(long *)(lVar6 + -8) + -1;
                if (lVar5 < lVar7) {
                  memmove((void *)(lVar6 + lVar5 * 8),(void *)(lVar6 + 8 + lVar5 * 8),
                          (lVar7 - lVar5) * 8);
                }
              }
              CowData<VehicleWheel3D*>::resize<false>
                        ((CowData<VehicleWheel3D*> *)(lVar3 + 0x760),lVar7);
            }
            else {
              _err_print_index_error
                        ("remove_at","./core/templates/cowdata.h",0xe4,lVar5,lVar7,"p_index",
                         "size()","",false,false);
            }
            break;
          }
          lVar5 = lVar5 + 1;
        } while (lVar7 != lVar5);
      }
      *(undefined8 *)(this + 0x5d8) = 0;
    }
    goto LAB_0010719b;
  }
  lVar3 = Node::get_parent();
  if ((lVar3 == 0) ||
     (lVar3 = __dynamic_cast(lVar3,&Object::typeinfo,&VehicleBody3D::typeinfo,0), lVar3 == 0))
  goto LAB_0010719b;
  *(long *)(this + 0x5d8) = lVar3;
  Node3D::get_transform();
  lVar6 = *(long *)(lVar3 + 0x760);
  *(undefined8 *)(this + 0x558) = local_98;
  *(undefined8 *)(this + 0x560) = uStack_90;
  *(undefined8 *)(this + 0x568) = local_88;
  *(undefined8 *)(this + 0x570) = uStack_80;
  *(undefined8 *)(this + 0x578) = local_78;
  *(undefined8 *)(this + 0x580) = uStack_70;
  if (lVar6 == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(lVar6 + -8) + 1;
  }
  iVar2 = CowData<VehicleWheel3D*>::resize<false>((CowData<VehicleWheel3D*> *)(lVar3 + 0x760),lVar6)
  ;
  if (iVar2 == 0) {
    if (*(long *)(lVar3 + 0x760) == 0) {
      lVar7 = -1;
      lVar6 = 0;
    }
    else {
      lVar6 = *(long *)(*(long *)(lVar3 + 0x760) + -8);
      lVar7 = lVar6 + -1;
      if (-1 < lVar7) {
        CowData<VehicleWheel3D*>::_copy_on_write((CowData<VehicleWheel3D*> *)(lVar3 + 0x760));
        *(VehicleWheel3D **)(*(long *)(lVar3 + 0x760) + lVar7 * 8) = this;
        goto LAB_00107285;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_00107285:
  Node3D::get_transform();
  *(undefined8 *)(this + 0x58c) = local_44;
  *(undefined4 *)(this + 0x594) = local_3c;
  Node3D::get_transform();
  fVar8 = fStack_64 * fStack_64 + fStack_58 * fStack_58 + local_4c * local_4c;
  if (fVar8 == 0.0) {
    uVar4 = CONCAT44(_LC20._4_4_,(uint)_LC20);
    uVar10 = _LC122;
  }
  else {
    fVar8 = SQRT(fVar8);
    auVar12._4_4_ = fStack_58;
    auVar12._0_4_ = fStack_64;
    auVar12._8_8_ = 0;
    auVar14._4_4_ = fVar8;
    auVar14._0_4_ = fVar8;
    auVar14._8_8_ = _LC26;
    auVar12 = divps(auVar12,auVar14);
    uVar10 = (uint)(local_4c / fVar8) ^ _LC122;
    uVar4 = CONCAT44(auVar12._4_4_ ^ _LC20._4_4_,auVar12._0_4_ ^ (uint)_LC20);
  }
  *(undefined8 *)(this + 0x598) = uVar4;
  *(uint *)(this + 0x5a0) = uVar10;
  Node3D::get_transform();
  fVar8 = local_68 * local_68 + local_5c * local_5c + local_50 * local_50;
  fVar13 = 0.0;
  uVar4 = 0;
  if (fVar8 != 0.0) {
    fVar8 = SQRT(fVar8);
    auVar11._4_4_ = local_5c;
    auVar11._0_4_ = local_68;
    auVar11._8_8_ = 0;
    fVar13 = local_50 / fVar8;
    auVar9._4_4_ = fVar8;
    auVar9._0_4_ = fVar8;
    auVar9._8_8_ = _LC26;
    auVar12 = divps(auVar11,auVar9);
    uVar4 = auVar12._0_8_;
  }
  *(undefined8 *)(this + 0x5a4) = uVar4;
  *(float *)(this + 0x5ac) = fVar13;
LAB_0010719b:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VehicleWheel3D::get_configuration_warnings() const */

VehicleWheel3D * __thiscall VehicleWheel3D::get_configuration_warnings(VehicleWheel3D *this)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::get_configuration_warnings();
  lVar2 = Node::get_parent();
  if (lVar2 != 0) {
    lVar2 = __dynamic_cast(lVar2,&Object::typeinfo,&VehicleBody3D::typeinfo,0);
    if (lVar2 != 0) goto LAB_00107517;
  }
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = 
  "VehicleWheel3D serves to provide a wheel system to a VehicleBody3D. Please use it as a child of a VehicleBody3D."
  ;
  local_68 = 0;
  local_50 = 0x70;
  String::parse_latin1((StrRange *)&local_68);
  RTR((String *)&local_58,(String *)&local_68);
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(char **)this_00 != local_58) {
          CowData<char32_t>::_ref(this_00,(CowData *)&local_58);
        }
        goto LAB_0010761e;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_0010761e:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_00107517:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* VehicleBody3D::_body_state_changed(PhysicsDirectBodyState3D*) */

void __thiscall
VehicleBody3D::_body_state_changed(VehicleBody3D *this,PhysicsDirectBodyState3D *param_1)

{
  Transform3D *pTVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  float fVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 auVar17 [12];
  undefined1 auVar18 [12];
  undefined8 local_d8;
  float local_d0;
  undefined1 local_a8 [8];
  float local_a0;
  undefined1 local_78 [8];
  float local_70;
  float local_64;
  float local_58;
  float local_54;
  float fStack_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RigidBody3D::_body_state_changed((PhysicsDirectBodyState3D *)this);
  fVar12 = (float)(**(code **)(*(long *)param_1 + 0x2a8))(param_1);
  lVar9 = *(long *)(this + 0x760);
  lVar11 = 0;
  while (lVar9 != 0) {
    if (*(long *)(lVar9 + -8) <= lVar11) {
      if (lVar9 != 0) {
        lVar11 = 0;
        goto LAB_00107bd8;
      }
      break;
    }
    _update_wheel(this,(int)lVar11,param_1);
    lVar11 = lVar11 + 1;
    lVar9 = *(long *)(this + 0x760);
  }
  goto LAB_00107740;
LAB_00107bd8:
  do {
    if (*(long *)(lVar9 + -8) <= lVar11) break;
    _ray_cast(this,(int)lVar11,param_1);
    lVar9 = *(long *)(this + 0x760);
    if (lVar9 == 0) {
      lVar10 = 0;
LAB_00107c03:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar10 = *(long *)(lVar9 + -8);
    if (lVar10 <= lVar11) goto LAB_00107c03;
    pTVar1 = *(Transform3D **)(lVar9 + lVar11 * 8);
    lVar11 = lVar11 + 1;
    (**(code **)(*(long *)param_1 + 0x1c0))(&local_d8,param_1);
    Transform3D::inverse();
    Transform3D::operator*((Transform3D *)local_78,(Transform3D *)local_a8);
    Node3D::set_transform(pTVar1);
    lVar9 = *(long *)(this + 0x760);
  } while (lVar9 != 0);
LAB_00107740:
  _update_suspension((PhysicsDirectBodyState3D *)this);
  lVar9 = *(long *)(this + 0x760);
  if (lVar9 != 0) {
    lVar11 = 0;
    do {
      if (*(long *)(lVar9 + -8) <= lVar11) break;
      lVar9 = *(long *)(lVar9 + lVar11 * 8);
      lVar11 = lVar11 + 1;
      fVar13 = *(float *)(lVar9 + 0x5cc);
      if (*(float *)(lVar9 + 0x604) <= *(float *)(lVar9 + 0x5cc)) {
        fVar13 = *(float *)(lVar9 + 0x604);
      }
      local_d0 = *(float *)(lVar9 + 0x618) * fVar13 * fVar12;
      local_d8 = CONCAT44(fVar13 * (float)((ulong)*(undefined8 *)(lVar9 + 0x610) >> 0x20) * fVar12,
                          fVar13 * (float)*(undefined8 *)(lVar9 + 0x610) * fVar12);
      (**(code **)(*(long *)param_1 + 0x1c0))(local_78,param_1);
      local_a0 = *(float *)(lVar9 + 0x624) - local_4c;
      local_a8 = (undefined1  [8])
                 CONCAT44((float)((ulong)*(undefined8 *)(lVar9 + 0x61c) >> 0x20) - fStack_50,
                          (float)*(undefined8 *)(lVar9 + 0x61c) - local_54);
      (**(code **)(*(long *)param_1 + 0x1d8))(param_1,&local_d8,local_a8);
      lVar9 = *(long *)(this + 0x760);
    } while (lVar9 != 0);
  }
  _update_friction(this,param_1);
  auVar18._8_4_ = local_a0;
  auVar18._0_8_ = local_a8;
  lVar9 = *(long *)(this + 0x760);
  if (lVar9 != 0) {
    lVar11 = 0;
    do {
      if (*(long *)(lVar9 + -8) <= lVar11) break;
      lVar10 = *(long *)(lVar9 + lVar11 * 8);
      _local_a8 = auVar18;
      (**(code **)(*(long *)param_1 + 0x1c0))(local_78,param_1);
      fVar8 = local_4c;
      fVar7 = fStack_50;
      fVar15 = local_54;
      fVar13 = *(float *)(lVar10 + 0x630);
      fVar14 = *(float *)(lVar10 + 0x634);
      fVar16 = *(float *)(lVar10 + 0x62c);
      auVar17 = (**(code **)(*(long *)param_1 + 0x1b0))(param_1);
      local_78._0_4_ = auVar17._0_4_;
      uVar5 = local_78._0_4_;
      local_78._4_4_ = auVar17._4_4_;
      uVar6 = local_78._4_4_;
      _local_78 = auVar17;
      auVar18 = (**(code **)(*(long *)param_1 + 0x1a0))(param_1);
      local_a8._4_4_ = auVar18._4_4_;
      uVar4 = local_a8._4_4_;
      local_a8._0_4_ = auVar18._0_4_;
      uVar3 = local_a8._0_4_;
      if (*(char *)(lVar10 + 0x650) == '\0') {
        fVar13 = *(float *)(lVar10 + 0x5e8);
      }
      else {
        fVar16 = fVar16 - fVar15;
        fVar14 = fVar14 - fVar8;
        fVar13 = fVar13 - fVar7;
        _local_a8 = auVar18;
        (**(code **)(*(long *)param_1 + 0x1c0))(local_78,param_1);
        fVar15 = local_70 * *(float *)(lVar10 + 0x610) + local_64 * *(float *)(lVar10 + 0x614) +
                 local_58 * *(float *)(lVar10 + 0x618);
        fVar13 = ((((auVar17._8_4_ * fVar16 - fVar14 * (float)uVar5) + (float)uVar4) *
                   (local_64 - *(float *)(lVar10 + 0x614) * fVar15) +
                   (((float)uVar6 * fVar14 - auVar17._8_4_ * fVar13) + (float)uVar3) *
                   (local_70 - *(float *)(lVar10 + 0x610) * fVar15) +
                  (((float)uVar5 * fVar13 - (float)uVar6 * fVar16) + auVar18._8_4_) *
                  (local_58 - *(float *)(lVar10 + 0x618) * fVar15)) * fVar12) /
                 *(float *)(lVar10 + 0x5b8);
        auVar18 = _local_a8;
      }
      lVar11 = lVar11 + 1;
      lVar9 = *(long *)(this + 0x760);
      fVar16 = fVar13 * __LC146;
      *(float *)(lVar10 + 0x5ec) = (float)((double)((fVar13 / fVar12) * __LC144) / __LC145);
      *(ulong *)(lVar10 + 0x5e4) = CONCAT44(fVar16,*(float *)(lVar10 + 0x5e4) + fVar13);
    } while (lVar9 != 0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
    _local_a8 = auVar18;
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



/* RigidBody3D::get_inverse_mass() const */

float __thiscall RigidBody3D::get_inverse_mass(RigidBody3D *this)

{
  return _LC0 / *(float *)(this + 0x62c);
}



/* VehicleWheel3D::is_class_ptr(void*) const */

uint __thiscall VehicleWheel3D::is_class_ptr(VehicleWheel3D *this,void *param_1)

{
  return (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &Node3D::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1122,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* VehicleWheel3D::_getv(StringName const&, Variant&) const */

undefined8 VehicleWheel3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VehicleWheel3D::_setv(StringName const&, Variant const&) */

undefined8 VehicleWheel3D::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VehicleBody3D::_getv(StringName const&, Variant&) const */

undefined8 VehicleBody3D::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* VehicleBody3D::_setv(StringName const&, Variant const&) */

undefined8 VehicleBody3D::_setv(StringName *param_1,Variant *param_2)

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



/* MethodBindTRC<Node3D*>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<Node3D*>::_gen_argument_type(int param_1)

{
  return 0x18;
}



/* MethodBindTRC<Node3D*>::get_argument_meta(int) const */

undefined8 MethodBindTRC<Node3D*>::get_argument_meta(int param_1)

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



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001120a8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001120a8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112108;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112108;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Node3D*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Node3D*>::~MethodBindTRC(MethodBindTRC<Node3D*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112168;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Node3D*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Node3D*>::~MethodBindTRC(MethodBindTRC<Node3D*> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112168;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001121c8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_001121c8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111fe8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<float>::~MethodBindT() */

void __thiscall MethodBindT<float>::~MethodBindT(MethodBindT<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00111fe8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112048;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<float>::~MethodBindTRC() */

void __thiscall MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00112048;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* VehicleWheel3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VehicleWheel3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VehicleBody3D::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VehicleBody3D::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Node3D::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VehicleWheel3D::_property_can_revertv(StringName const&) const */

undefined8 VehicleWheel3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116008 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VehicleBody3D::_property_can_revertv(StringName const&) const */

undefined8 VehicleBody3D::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00116008 != Object::_property_can_revert) {
    uVar1 = Node3D::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VehicleWheel3D::~VehicleWheel3D() */

void __thiscall VehicleWheel3D::~VehicleWheel3D(VehicleWheel3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111bd8;
  Node3D::~Node3D((Node3D *)this);
  return;
}



/* VehicleWheel3D::~VehicleWheel3D() */

void __thiscall VehicleWheel3D::~VehicleWheel3D(VehicleWheel3D *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00111bd8;
  Node3D::~Node3D((Node3D *)this);
  operator_delete(this,0x660);
  return;
}



/* CowData<VehicleWheel3D*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<VehicleWheel3D*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<float>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Vector3>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* Error CowData<Vector3>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<Vector3>::resize<false>(long param_1)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001086a8(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<float>::resize<false>(long) [clone .isra.0] [clone .cold] */

void CowData<float>::resize<false>(long param_1)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001086ca(void)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* VehicleWheel3D::_validate_propertyv(PropertyInfo&) const */

void VehicleWheel3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116010 == Node::_validate_property) {
    return;
  }
  Node3D::_validate_property(param_1);
  return;
}



/* VehicleBody3D::_validate_propertyv(PropertyInfo&) const */

void VehicleBody3D::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Node3D::_validate_property(param_1);
  if ((code *)PTR__validate_property_00116018 == Node3D::_validate_property) {
    return;
  }
  RigidBody3D::_validate_property(param_1);
  return;
}



/* VehicleBody3D::is_class_ptr(void*) const */

uint VehicleBody3D::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1122,in_RSI == &PhysicsBody3D::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &RigidBody3D::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &CollisionObject3D::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Node3D::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1122,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VehicleBody3D::_notificationv(int, bool) */

void __thiscall VehicleBody3D::_notificationv(VehicleBody3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00116020 != CollisionObject3D::_notification) {
      RigidBody3D::_notification(iVar1);
    }
    CollisionObject3D::_notification(iVar1);
    Node3D::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Node3D::_notification(iVar1);
  CollisionObject3D::_notification(iVar1);
  if ((code *)PTR__notification_00116020 == CollisionObject3D::_notification) {
    return;
  }
  RigidBody3D::_notification(iVar1);
  return;
}



/* VehicleBody3D::~VehicleBody3D() */

void __thiscall VehicleBody3D::~VehicleBody3D(VehicleBody3D *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00111dc0;
  if (*(long *)(this + 0x760) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x760) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x760);
      *(undefined8 *)(this + 0x760) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x750) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x750) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x750);
      *(undefined8 *)(this + 0x750) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x740) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x740) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x740);
      *(undefined8 *)(this + 0x740) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x730) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x730) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x730);
      *(undefined8 *)(this + 0x730) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x720) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x720) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x720);
      *(undefined8 *)(this + 0x720) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  pvVar2 = *(void **)(this + 0x6f0);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x714) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x710) * 4) != 0) {
        memset(*(void **)(this + 0x708),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x710) * 4) << 2);
      }
      *(undefined4 *)(this + 0x714) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x700),false);
    Memory::free_static(*(void **)(this + 0x6f8),false);
    Memory::free_static(*(void **)(this + 0x708),false);
  }
  RigidBody3D::~RigidBody3D((RigidBody3D *)this);
  return;
}



/* VehicleBody3D::~VehicleBody3D() */

void __thiscall VehicleBody3D::~VehicleBody3D(VehicleBody3D *this)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_00111dc0;
  if (*(long *)(this + 0x760) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x760) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x760);
      *(undefined8 *)(this + 0x760) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x750) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x750) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x750);
      *(undefined8 *)(this + 0x750) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x740) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x740) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x740);
      *(undefined8 *)(this + 0x740) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x730) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x730) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x730);
      *(undefined8 *)(this + 0x730) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x720) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x720) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar3 = *(long *)(this + 0x720);
      *(undefined8 *)(this + 0x720) = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  pvVar2 = *(void **)(this + 0x6f0);
  if (pvVar2 != (void *)0x0) {
    if (*(int *)(this + 0x714) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x710) * 4) != 0) {
        memset(*(void **)(this + 0x708),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x710) * 4) << 2);
      }
      *(undefined4 *)(this + 0x714) = 0;
    }
    Memory::free_static(pvVar2,false);
    Memory::free_static(*(void **)(this + 0x700),false);
    Memory::free_static(*(void **)(this + 0x6f8),false);
    Memory::free_static(*(void **)(this + 0x708),false);
  }
  RigidBody3D::~RigidBody3D((RigidBody3D *)this);
  operator_delete(this,0x768);
  return;
}



/* VehicleWheel3D::_get_class_namev() const */

undefined8 * VehicleWheel3D::_get_class_namev(void)

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
LAB_00108d43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108d43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VehicleWheel3D");
      goto LAB_00108dae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VehicleWheel3D");
LAB_00108dae:
  return &_get_class_namev()::_class_name_static;
}



/* VehicleBody3D::_get_class_namev() const */

undefined8 * VehicleBody3D::_get_class_namev(void)

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
LAB_00108e33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00108e33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VehicleBody3D");
      goto LAB_00108e9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VehicleBody3D");
LAB_00108e9e:
  return &_get_class_namev()::_class_name_static;
}



/* MethodBindTRC<Node3D*>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<Node3D*>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 in_register_0000003c;
  undefined4 *puVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  puVar3 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_30 = 6;
  local_38 = "Node3D";
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  *puVar3 = 0x18;
  *(undefined8 *)(puVar3 + 2) = 0;
  StringName::StringName((StringName *)(puVar3 + 4),(StringName *)&local_38);
  bVar4 = StringName::configured != '\0';
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  if ((bVar4) && (local_38 != (char *)0x0)) {
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
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VehicleWheel3D::get_class() const */

void VehicleWheel3D::get_class(void)

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



/* VehicleBody3D::get_class() const */

void VehicleBody3D::get_class(void)

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
  local_48 = &_LC15;
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
      goto joined_r0x001092bc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001092bc:
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
  local_48 = &_LC15;
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
      goto joined_r0x0010943c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010943c:
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
  local_48 = &_LC15;
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
      goto joined_r0x001095bc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001095bc:
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
  local_78 = &_LC16;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC16;
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
LAB_00109918:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00109918;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00109936;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00109936:
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<RID, HashMapHasherDefault, HashMapComparatorDefault<RID> >::insert(RID const&) */

undefined1  [16]
HashSet<RID,HashMapHasherDefault,HashMapComparatorDefault<RID>>::insert(RID *param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long lVar6;
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
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  lVar34 = *in_RSI;
  if (lVar34 == 0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
    local_70 = *in_RDX;
    uVar32 = *(uint *)(in_RSI + 4);
    if (lVar34 != 0) goto LAB_00109d4f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_70 = *in_RDX;
LAB_00109d4f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = local_70 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(lVar34 + uStack_98 * 8) == local_70) goto LAB_0010a201;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * __LC33 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      lVar34 = *in_RSI;
      goto LAB_0010a201;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RSI;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  lVar36 = *in_RDX;
  *(long *)(lVar34 + uVar42 * 8) = lVar36;
  uVar33 = lVar36 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar2;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar36 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar6 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar36);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar2;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar2;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar6 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar36 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar36 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar2;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar36 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar36);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar6 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar36) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_0010a201:
  *(uint *)(param_1 + 0xc) = uVar37;
  *(long *)param_1 = lVar34;
  *(uint *)(param_1 + 8) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
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



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010a3b9;
  local_78 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010a4b0:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010a4b0;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_0010a3b9:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* MethodBindT<float>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<float>::_gen_argument_type_info(int param_1)

{
  long *plVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long lVar6;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
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
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar7 = 0;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  puVar7[10] = 6;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (in_EDX != 0) goto LAB_0010a669;
  local_78 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._8_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0010a760:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0010a760;
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
  *puVar7 = local_68._0_4_;
  if (*(long *)(puVar7 + 2) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 2));
    uVar5 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(puVar7 + 2) = uVar5;
  }
  if (*(long *)(puVar7 + 4) != local_60._8_8_) {
    StringName::unref();
    uVar5 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(puVar7 + 4) = uVar5;
  }
  lVar6 = local_48;
  puVar7[6] = local_50;
  if (*(long *)(puVar7 + 8) == local_48) {
    puVar7[10] = local_40;
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
    CowData<char32_t>::_unref((CowData<char32_t> *)(puVar7 + 8));
    *(long *)(puVar7 + 8) = local_48;
    puVar7[10] = local_40;
  }
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  uVar5 = local_60._0_8_;
  if (local_60._0_8_ != 0) {
    LOCK();
    plVar1 = (long *)(local_60._0_8_ + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      auVar4._8_8_ = 0;
      auVar4._0_8_ = local_60._8_8_;
      local_60 = auVar4 << 0x40;
      Memory::free_static((void *)(uVar5 + -0x10),false);
    }
  }
LAB_0010a669:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
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
            if (lVar5 == 0) goto LAB_0010a94f;
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
LAB_0010a94f:
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
    if (cVar6 != '\0') goto LAB_0010aa03;
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
              if (lVar5 == 0) goto LAB_0010aadb;
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
LAB_0010aadb:
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
      if (cVar6 != '\0') goto LAB_0010aa03;
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
                if (lVar5 == 0) goto LAB_0010abb7;
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
LAB_0010abb7:
        cVar6 = String::operator==(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 != '\0') goto LAB_0010aa03;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_0010ac31;
    }
  }
LAB_0010aa03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010ac31:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VehicleWheel3D::is_class(String const&) const */

undefined8 __thiscall VehicleWheel3D::is_class(VehicleWheel3D *this,String *param_1)

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
            if (lVar4 == 0) goto LAB_0010acaf;
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
LAB_0010acaf:
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
    if (cVar5 != '\0') goto LAB_0010ad63;
  }
  cVar5 = String::operator==(param_1,"VehicleWheel3D");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = Node3D::is_class((Node3D *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ad63:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PhysicsBody3D::is_class(String const&) const */

undefined8 __thiscall PhysicsBody3D::is_class(PhysicsBody3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010ae4f;
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
LAB_0010ae4f:
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
    if (cVar6 != '\0') goto LAB_0010af03;
  }
  cVar6 = String::operator==(param_1,"PhysicsBody3D");
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
              if (lVar5 == 0) goto LAB_0010afc3;
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
LAB_0010afc3:
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
      if (cVar6 != '\0') goto LAB_0010af03;
    }
    cVar6 = String::operator==(param_1,"CollisionObject3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = Node3D::is_class((Node3D *)this,param_1);
        return uVar7;
      }
      goto LAB_0010b06c;
    }
  }
LAB_0010af03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b06c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VehicleBody3D::is_class(String const&) const */

undefined8 __thiscall VehicleBody3D::is_class(VehicleBody3D *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010b0ef;
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
LAB_0010b0ef:
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
    if (cVar6 != '\0') goto LAB_0010b1a3;
  }
  cVar6 = String::operator==(param_1,"VehicleBody3D");
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
              if (lVar5 == 0) goto LAB_0010b263;
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
LAB_0010b263:
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
      if (cVar6 != '\0') goto LAB_0010b1a3;
    }
    cVar6 = String::operator==(param_1,"RigidBody3D");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = PhysicsBody3D::is_class((PhysicsBody3D *)this,param_1);
        return uVar7;
      }
      goto LAB_0010b30c;
    }
  }
LAB_0010b1a3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010b30c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Node3D::_get_property_listv(Node3D *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_c8;
  StringName *local_c0;
  StrRange *local_b8;
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
    local_98 = 0;
    local_90 = 0;
    local_78 = "Node";
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_90);
    local_78 = "Node";
    local_88 = 0;
    local_70 = 4;
    String::parse_latin1((StrRange *)&local_88);
    local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
    local_70 = 0;
    if (local_88 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_88);
    }
    local_68 = 0;
    local_60 = 0;
    local_58 = 0;
    if (local_90 == 0) {
LAB_0010b78d:
      local_50 = 0x80;
      StringName::operator=((StringName *)&local_68,(StringName *)&local_98);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010b78d;
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
    local_c0 = (StringName *)&local_68;
    local_c8 = (CowData<char32_t> *)&local_70;
    if (*(long *)param_1 == 0) {
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
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)local_c8);
    }
    StringName::operator=((StringName *)(puVar4 + 4),local_c0);
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
    CowData<char32_t>::_unref(local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_78,"Node",false);
    ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
    if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
      StringName::unref();
    }
  }
  local_b8 = (StrRange *)&local_98;
  local_c0 = (StringName *)&local_68;
  local_c8 = (CowData<char32_t> *)&local_70;
  local_88 = 0;
  local_90 = 0;
  local_78 = "Node3D";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = "Node3D";
  local_70 = 6;
  String::parse_latin1(local_b8);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref(local_c8,(CowData *)local_b8);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_0010b4b8:
    local_50 = 0x80;
    StringName::operator=(local_c0,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010b4b8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010b4cb;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010b4cb:
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)local_c8);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_c0);
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
  CowData<char32_t>::_unref(local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
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



/* CollisionObject3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
CollisionObject3D::_get_property_listv(CollisionObject3D *this,List *param_1,bool param_2)

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
LAB_0010bb78:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010bb78;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010bb95;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010bb95:
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
LAB_0010bfc8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010bfc8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010bfe5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010bfe5:
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



/* RigidBody3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall RigidBody3D::_get_property_listv(RigidBody3D *this,List *param_1,bool param_2)

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
    PhysicsBody3D::_get_property_listv((PhysicsBody3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "RigidBody3D";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RigidBody3D";
  local_98 = 0;
  local_70 = 0xb;
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
LAB_0010c418:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c418;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c435;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c435:
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
  StringName::StringName((StringName *)&local_78,"RigidBody3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
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



/* VehicleBody3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VehicleBody3D::_get_property_listv(VehicleBody3D *this,List *param_1,bool param_2)

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
    RigidBody3D::_get_property_listv((RigidBody3D *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VehicleBody3D";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VehicleBody3D";
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
LAB_0010c868:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010c868;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010c885;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010c885:
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
  StringName::StringName((StringName *)&local_78,"VehicleBody3D",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RigidBody3D::_get_property_listv((RigidBody3D *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VehicleWheel3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VehicleWheel3D::_get_property_listv(VehicleWheel3D *this,List *param_1,bool param_2)

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
  local_78 = "VehicleWheel3D";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VehicleWheel3D";
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
LAB_0010ccb8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010ccb8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010ccd5;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010ccd5:
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
  StringName::StringName((StringName *)&local_78,"VehicleWheel3D",false);
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



/* MethodBind* create_method_bind<VehicleWheel3D, float>(void (VehicleWheel3D::*)(float)) */

MethodBind * create_method_bind<VehicleWheel3D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00111fe8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VehicleWheel3D";
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



/* MethodBind* create_method_bind<VehicleWheel3D, bool>(void (VehicleWheel3D::*)(bool)) */

MethodBind * create_method_bind<VehicleWheel3D,bool>(_func_void_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001120a8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VehicleWheel3D";
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



/* MethodBind* create_method_bind<VehicleWheel3D, bool>(bool (VehicleWheel3D::*)() const) */

MethodBind * create_method_bind<VehicleWheel3D,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00112108;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "VehicleWheel3D";
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



/* MethodBind* create_method_bind<VehicleWheel3D, Node3D*>(Node3D* (VehicleWheel3D::*)() const) */

MethodBind * create_method_bind<VehicleWheel3D,Node3D*>(_func_Node3D_ptr *param_1)

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
  *(_func_Node3D_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00112168;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "VehicleWheel3D";
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



/* MethodBind* create_method_bind<VehicleWheel3D, Vector3>(Vector3 (VehicleWheel3D::*)() const) */

MethodBind * create_method_bind<VehicleWheel3D,Vector3>(_func_Vector3 *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_001121c8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "VehicleWheel3D";
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



/* VehicleWheel3D::_initialize_classv() */

void VehicleWheel3D::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00116030 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00116028 != Node::_bind_methods) {
        Node3D::_bind_methods();
      }
      Node3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "Node3D";
    local_68 = 0;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VehicleWheel3D";
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBind* create_method_bind<VehicleBody3D, float>(void (VehicleBody3D::*)(float)) */

MethodBind * create_method_bind<VehicleBody3D,float>(_func_void_float *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00111fe8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "VehicleBody3D";
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



/* VehicleBody3D::_initialize_classv() */

void VehicleBody3D::_initialize_classv(void)

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
    if (RigidBody3D::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00116030 != Node::_bind_methods) {
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
          local_58 = "Node3D";
          local_68 = 0;
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
        local_68 = 0;
        local_58 = "CollisionObject3D";
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
        PhysicsBody3D::_bind_methods();
        PhysicsBody3D::initialize_class()::initialized = '\x01';
      }
      local_58 = "PhysicsBody3D";
      local_68 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "RigidBody3D";
      local_70 = 0;
      local_50 = 0xb;
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
      if ((code *)PTR__bind_methods_00116038 != PhysicsBody3D::_bind_methods) {
        RigidBody3D::_bind_methods();
      }
      RigidBody3D::initialize_class()::initialized = '\x01';
    }
    local_58 = "RigidBody3D";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VehicleBody3D";
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
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Vector3>::_realloc(long) */

undefined8 __thiscall CowData<Vector3>::_realloc(CowData<Vector3> *this,long param_1)

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
LAB_0010e850:
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
  if (lVar10 == 0) goto LAB_0010e850;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_0010e729:
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
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_0010e729;
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
    goto LAB_0010e8a6;
  }
  if (lVar10 == lVar7) {
LAB_0010e7cf:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_0010e8a6:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_0010e7ba;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010e7cf;
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
LAB_0010e7ba:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<float>::_realloc(long) */

undefined8 __thiscall CowData<float>::_realloc(CowData<float> *this,long param_1)

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



/* CowData<VehicleWheel3D*>::_realloc(long) */

undefined8 __thiscall
CowData<VehicleWheel3D*>::_realloc(CowData<VehicleWheel3D*> *this,long param_1)

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
/* Error CowData<VehicleWheel3D*>::resize<false>(long) */

undefined8 __thiscall
CowData<VehicleWheel3D*>::resize<false>(CowData<VehicleWheel3D*> *this,long param_1)

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
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010eba0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_0010eba0;
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
        goto LAB_0010eab1;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0010eab1:
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



/* WARNING: Removing unreachable block (ram,0x0010ec50) */
/* VehicleWheel3D::_notificationv(int, bool) */

void __thiscall VehicleWheel3D::_notificationv(VehicleWheel3D *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_00116040 != Node::_notification) {
      Node3D::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00116040 != Node::_notification) {
    Node3D::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010ee28) */
/* WARNING: Removing unreachable block (ram,0x0010efbd) */
/* WARNING: Removing unreachable block (ram,0x0010efc9) */
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



/* MethodBindTRC<Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector3>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  undefined1 auVar2 [12];
  undefined1 auVar3 [12];
  char *pcVar4;
  Variant *pVVar5;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
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
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_68,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_68 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_70 = 0;
      local_60 = 0x35;
      String::parse_latin1((StrRange *)&local_70);
      vformat<StringName>((StringName *)&local_68,(StrRange *)&local_70,&local_78);
      _err_print_error(&_LC136,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_68,0,0);
      pcVar4 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_68 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      auVar3._8_4_ = local_54._8_4_;
      auVar3._0_8_ = local_54._0_8_;
      if ((StringName::configured != '\0') && (local_54 = auVar3, local_78 != 0)) {
        StringName::unref();
      }
      goto LAB_0010f1d0;
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
  }
  auVar2._8_4_ = local_54._8_4_;
  auVar2._0_8_ = local_54._0_8_;
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      local_54 = (*(code *)pVVar5)();
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
LAB_0010f1d0:
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
      goto LAB_0010f4ab;
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
LAB_0010f4ab:
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
      goto LAB_0010f66a;
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
LAB_0010f66a:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node3D*>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Node3D*>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  Object *pOVar3;
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
      _err_print_error(&_LC136,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
      goto LAB_0010f8a0;
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
      pOVar3 = (Object *)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,pOVar3);
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
LAB_0010f8a0:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  char *pcVar2;
  bool bVar3;
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
      _err_print_error(&_LC136,"./core/object/method_bind.h",0x267,
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
      goto LAB_0010fb60;
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
      bVar3 = (bool)(*(code *)pVVar4)();
      Variant::Variant((Variant *)local_48,bVar3);
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
LAB_0010fb60:
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
      goto LAB_0010fda2;
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
LAB_0010fda2:
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
      goto LAB_0010ff51;
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
LAB_0010ff51:
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
      goto LAB_00110291;
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
                    /* WARNING: Could not recover jumptable at 0x0011011d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_00110291:
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
      goto LAB_00110479;
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
                    /* WARNING: Could not recover jumptable at 0x00110302. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_00110479:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<float>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  Variant *pVVar3;
  long *plVar4;
  undefined4 in_register_00000014;
  long *plVar5;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  float fVar6;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
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
      _err_print_error(&_LC136,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar5 = (long *)(local_60 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00110540;
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
      fVar6 = (float)(*(code *)pVVar3)();
      Variant::Variant((Variant *)local_48,fVar6);
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
LAB_00110540:
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
      goto LAB_00110788;
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
LAB_00110788:
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
      goto LAB_00110947;
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
LAB_00110947:
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
      goto LAB_00110c99;
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
                    /* WARNING: Could not recover jumptable at 0x00110b22. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00110c99:
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
      goto LAB_00110e79;
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
                    /* WARNING: Could not recover jumptable at 0x00110d01. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(auVar2._0_8_,(long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00110e79:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node3D*>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Node3D*>::validated_call
          (MethodBindTRC<Node3D*> *this,Object *param_1,Variant **param_2,Variant *param_3)

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
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_0011103f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    pcVar1 = *(code **)(pcVar1 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  (*pcVar1)(param_1 + *(long *)(this + 0x60));
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Variant::ObjData::ref_pointer((Object *)(param_3 + 8));
    return;
  }
LAB_0011103f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Node3D*>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Node3D*>::ptrcall
          (MethodBindTRC<Node3D*> *this,Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00111091;
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
LAB_00111091:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
    goto LAB_001112ed;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_00111350;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_00111350:
      uVar6 = 4;
LAB_001112ed:
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
      goto LAB_0011126b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0011126b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC140;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x001112c7. Too many branches */
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
      _err_print_error(&_LC136,"./core/object/method_bind.h",0x154,
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
      goto LAB_00111446;
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
LAB_00111446:
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
    goto LAB_0011174d;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_001117b0;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_001117b0:
      uVar6 = 4;
LAB_0011174d:
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
      goto LAB_001116cb;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_001116cb:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_float **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
  uVar4 = _LC142;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  fVar9 = Variant::operator_cast_to_float(this);
                    /* WARNING: Could not recover jumptable at 0x00111724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(fVar9);
  return;
}



/* MethodBindT<float>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<float>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC136,"./core/object/method_bind.h",0x154,
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
      goto LAB_00111816;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,float>
            (p_Var4,(_func_void_float *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00111816:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
/* VehicleBody3D::~VehicleBody3D() */

void __thiscall VehicleBody3D::~VehicleBody3D(VehicleBody3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VehicleWheel3D::~VehicleWheel3D() */

void __thiscall VehicleWheel3D::~VehicleWheel3D(VehicleWheel3D *this)

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
/* MethodBindTRC<Vector3>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Node3D*>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Node3D*>::~MethodBindTRC(MethodBindTRC<Node3D*> *this)

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
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


// This is taking way too long.