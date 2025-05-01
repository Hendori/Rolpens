
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltWorldBoundaryShape3D::get_aabb() const */

JoltWorldBoundaryShape3D * __thiscall
JoltWorldBoundaryShape3D::get_aabb(JoltWorldBoundaryShape3D *this)

{
  float fVar1;
  uint uVar2;
  
  fVar1 = (float)JoltProjectSettings::get_world_boundary_shape_size();
  uVar2 = (uint)(_LC1 * fVar1) ^ __LC2;
  *(ulong *)(this + 0x10) = CONCAT44(fVar1,_LC1 * fVar1);
  *(uint *)this = uVar2;
  *(uint *)(this + 4) = uVar2;
  *(uint *)(this + 8) = uVar2;
  *(float *)(this + 0xc) = fVar1;
  return this;
}



/* JoltWorldBoundaryShape3D::get_data() const */

void JoltWorldBoundaryShape3D::get_data(void)

{
  long in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,(Plane *)(in_RSI + 0x70));
  return;
}



/* JoltWorldBoundaryShape3D::set_data(Variant const&) */

void JoltWorldBoundaryShape3D::set_data(Variant *param_1)

{
  long lVar1;
  Variant *in_RSI;
  long in_FS_OFFSET;
  undefined8 uVar2;
  undefined8 in_XMM1_Qa;
  float local_30;
  float fStack_2c;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)in_RSI == 0xe) {
    uVar2 = Variant::operator_cast_to_Plane(in_RSI);
    if (((((float)uVar2 == *(float *)(param_1 + 0x70)) &&
         ((float)((ulong)uVar2 >> 0x20) == *(float *)(param_1 + 0x74))) &&
        (local_30 = (float)in_XMM1_Qa, local_30 == *(float *)(param_1 + 0x78))) &&
       (fStack_2c = (float)((ulong)in_XMM1_Qa >> 0x20), fStack_2c == *(float *)(param_1 + 0x7c))) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      uVar2 = Variant::operator_cast_to_Plane(in_RSI);
      *(undefined8 *)(param_1 + 0x70) = uVar2;
      *(undefined8 *)(param_1 + 0x78) = in_XMM1_Qa;
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        JoltShape3D::destroy();
        return;
      }
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("set_data","modules/jolt_physics/shapes/jolt_world_boundary_shape_3d.cpp",0x37,
                     "Condition \"p_data.get_type() != Variant::PLANE\" is true.",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltWorldBoundaryShape3D::to_string() const */

void JoltWorldBoundaryShape3D::to_string(void)

{
  long *plVar1;
  long lVar2;
  long in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "{plane=%s}";
  local_30 = 10;
  String::parse_latin1((StrRange *)&local_40);
  vformat<Plane>(*(undefined8 *)(in_RSI + 0x70),*(undefined8 *)(in_RSI + 0x78));
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
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltWorldBoundaryShape3D::_build() const */

void JoltWorldBoundaryShape3D::_build(void)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  undefined1 auVar4 [16];
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  undefined8 local_f0;
  undefined1 local_e8 [8];
  float local_e0;
  float fStack_dc;
  long *local_d8;
  long local_c8 [2];
  char local_b8;
  undefined *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  long *local_90;
  long local_80 [2];
  char local_70;
  undefined1 local_68 [16];
  long *local_58;
  float local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  auVar4 = Plane::normalized();
  local_e8._0_4_ = auVar4._0_4_;
  local_e8._4_4_ = auVar4._4_4_;
  local_e0 = auVar4._8_4_;
  fStack_dc = auVar4._12_4_;
  _local_e8 = auVar4;
  if (((((float)local_e8._0_4_ == 0.0) && ((float)local_e8._4_4_ == 0.0)) && (local_e0 == 0.0)) &&
     (fStack_dc == 0.0)) {
    JoltShape3D::_owners_to_string();
    local_f8 = "{plane=%s}";
    local_100 = 0;
    local_f0 = 10;
    String::parse_latin1((StrRange *)&local_100);
    vformat<Plane>(*(undefined8 *)(in_RSI + 0x70),*(undefined8 *)(in_RSI + 0x78),&local_110);
    lVar2 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar1 = (long *)(local_100 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_100 = 0;
    local_f8 = 
    "Failed to build Jolt Physics world boundary shape with %s. The plane\'s normal must not be zero. This shape belongs to %s."
    ;
    local_f0 = 0x79;
    String::parse_latin1((StrRange *)&local_100);
    vformat<String,String>(&local_f8,(StrRange *)&local_100,&local_110,&local_108);
    _err_print_error("_build","modules/jolt_physics/shapes/jolt_world_boundary_shape_3d.cpp",0x28,
                     "Condition \"normalized_plane == Plane()\" is true. Returning: nullptr",
                     &local_f8,0,0);
    pcVar3 = local_f8;
    if (local_f8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar1 = (long *)(local_100 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar1 = (long *)(local_108 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *in_RDI = 0;
    goto LAB_00100400;
  }
  local_50 = (float)JoltProjectSettings::get_world_boundary_shape_size();
  local_50 = local_50 * _LC1;
  local_70 = '\0';
  local_a0 = 0;
  local_98 = 0;
  local_a8 = &JPH::ShapeSettings::vtable;
  local_58 = (long *)0x0;
  local_68 = auVar4;
  JPH::PlaneShapeSettings::Create();
  if (local_b8 == '\x02') {
    JoltShape3D::_owners_to_string();
    String::utf8((char *)&local_110,(int)local_d8);
    local_f8 = "{plane=%s}";
    local_100 = 0;
    local_f0 = 10;
    String::parse_latin1((StrRange *)&local_100);
    vformat<Plane>(*(undefined8 *)(in_RSI + 0x70),*(undefined8 *)(in_RSI + 0x78));
    lVar2 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar1 = (long *)(local_100 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    local_100 = 0;
    local_f8 = 
    "Failed to build Jolt Physics world boundary shape with %s. It returned the following error: \'%s\'. This shape belongs to %s."
    ;
    local_f0 = 0x7b;
    String::parse_latin1((StrRange *)&local_100);
    vformat<String,String,String>(&local_f8,(StrRange *)&local_100,&local_118,&local_110,&local_108)
    ;
    _err_print_error("_build","modules/jolt_physics/shapes/jolt_world_boundary_shape_3d.cpp",0x2d,
                     "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_f8,0
                     ,0);
    pcVar3 = local_f8;
    if (local_f8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar1 = (long *)(local_100 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_118;
    if (local_118 != 0) {
      LOCK();
      plVar1 = (long *)(local_118 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_118 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar1 = (long *)(local_108 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *in_RDI = 0;
LAB_001004ce:
    if (local_b8 == '\x01') {
      if (local_d8 != (long *)0x0) {
        LOCK();
        plVar1 = local_d8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*local_d8 + 8))();
        }
      }
    }
    else if ((local_b8 == '\x02') && (local_d8 != local_c8)) {
      (*JPH::Free)();
    }
  }
  else {
    *in_RDI = local_d8;
    if (local_d8 != (long *)0x0) {
      LOCK();
      *(int *)(local_d8 + 1) = (int)local_d8[1] + 1;
      UNLOCK();
      goto LAB_001004ce;
    }
  }
  local_a8 = &JPH::ShapeSettings::vtable;
  if (local_58 != (long *)0x0) {
    LOCK();
    plVar1 = local_58 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*local_58 + 0x18) == JPH::PhysicsMaterial::~PhysicsMaterial) {
        (*JPH::Free)();
      }
      else {
        (**(code **)(*local_58 + 0x18))();
      }
    }
  }
  local_a8 = &__cxxabiv1::__class_type_info::vtable;
  if (local_70 == '\x01') {
    if (local_90 != (long *)0x0) {
      LOCK();
      plVar1 = local_90 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_90 + 8))();
      }
    }
  }
  else if ((local_70 == '\x02') && (local_90 != local_80)) {
    (*JPH::Free)();
  }
LAB_00100400:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltWorldBoundaryShape3D::get_type() const */

undefined8 JoltWorldBoundaryShape3D::get_type(void)

{
  return 0;
}



/* JoltWorldBoundaryShape3D::is_convex() const */

undefined8 JoltWorldBoundaryShape3D::is_convex(void)

{
  return 0;
}



/* JoltWorldBoundaryShape3D::get_margin() const */

undefined8 JoltWorldBoundaryShape3D::get_margin(void)

{
  return 0;
}



/* JoltWorldBoundaryShape3D::set_margin(float) */

void JoltWorldBoundaryShape3D::set_margin(float param_1)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JoltWorldBoundaryShape3D::~JoltWorldBoundaryShape3D() */

void __thiscall JoltWorldBoundaryShape3D::~JoltWorldBoundaryShape3D(JoltWorldBoundaryShape3D *this)

{
  *(undefined ***)this = &PTR__build_00101978;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  return;
}



/* JoltWorldBoundaryShape3D::~JoltWorldBoundaryShape3D() */

void __thiscall JoltWorldBoundaryShape3D::~JoltWorldBoundaryShape3D(JoltWorldBoundaryShape3D *this)

{
  *(undefined ***)this = &PTR__build_00101978;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  operator_delete(this,0x80);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100d60) */
/* WARNING: Removing unreachable block (ram,0x00100e90) */
/* WARNING: Removing unreachable block (ram,0x00101009) */
/* WARNING: Removing unreachable block (ram,0x00100e9c) */
/* WARNING: Removing unreachable block (ram,0x00100ea6) */
/* WARNING: Removing unreachable block (ram,0x00100feb) */
/* WARNING: Removing unreachable block (ram,0x00100eb2) */
/* WARNING: Removing unreachable block (ram,0x00100ebc) */
/* WARNING: Removing unreachable block (ram,0x00100fcd) */
/* WARNING: Removing unreachable block (ram,0x00100ec8) */
/* WARNING: Removing unreachable block (ram,0x00100ed2) */
/* WARNING: Removing unreachable block (ram,0x00100faf) */
/* WARNING: Removing unreachable block (ram,0x00100ede) */
/* WARNING: Removing unreachable block (ram,0x00100ee8) */
/* WARNING: Removing unreachable block (ram,0x00100f91) */
/* WARNING: Removing unreachable block (ram,0x00100ef4) */
/* WARNING: Removing unreachable block (ram,0x00100efe) */
/* WARNING: Removing unreachable block (ram,0x00100f73) */
/* WARNING: Removing unreachable block (ram,0x00100f06) */
/* WARNING: Removing unreachable block (ram,0x00100f10) */
/* WARNING: Removing unreachable block (ram,0x00100f58) */
/* WARNING: Removing unreachable block (ram,0x00100f18) */
/* WARNING: Removing unreachable block (ram,0x00100f2e) */
/* WARNING: Removing unreachable block (ram,0x00100f3a) */
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



/* WARNING: Removing unreachable block (ram,0x00101188) */
/* WARNING: Removing unreachable block (ram,0x001012b8) */
/* WARNING: Removing unreachable block (ram,0x00101430) */
/* WARNING: Removing unreachable block (ram,0x001012c4) */
/* WARNING: Removing unreachable block (ram,0x001012ce) */
/* WARNING: Removing unreachable block (ram,0x00101412) */
/* WARNING: Removing unreachable block (ram,0x001012da) */
/* WARNING: Removing unreachable block (ram,0x001012e4) */
/* WARNING: Removing unreachable block (ram,0x001013f4) */
/* WARNING: Removing unreachable block (ram,0x001012f0) */
/* WARNING: Removing unreachable block (ram,0x001012fa) */
/* WARNING: Removing unreachable block (ram,0x001013d6) */
/* WARNING: Removing unreachable block (ram,0x00101306) */
/* WARNING: Removing unreachable block (ram,0x00101310) */
/* WARNING: Removing unreachable block (ram,0x001013b8) */
/* WARNING: Removing unreachable block (ram,0x0010131c) */
/* WARNING: Removing unreachable block (ram,0x00101326) */
/* WARNING: Removing unreachable block (ram,0x0010139a) */
/* WARNING: Removing unreachable block (ram,0x0010132e) */
/* WARNING: Removing unreachable block (ram,0x00101338) */
/* WARNING: Removing unreachable block (ram,0x0010137f) */
/* WARNING: Removing unreachable block (ram,0x00101340) */
/* WARNING: Removing unreachable block (ram,0x00101355) */
/* WARNING: Removing unreachable block (ram,0x00101361) */
/* String vformat<String, String, String>(String const&, String const, String const, String const)
    */

undefined8 *
vformat<String,String,String>
          (undefined8 *param_1,bool *param_2,String_conflict *param_3,String_conflict *param_4,
          String_conflict *param_5)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  int iVar4;
  long in_FS_OFFSET;
  Array local_f8 [8];
  undefined8 local_f0 [9];
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_a8,param_3);
  Variant::Variant(local_90,param_4);
  iVar2 = 0;
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar4 = (int)local_f8;
  Array::resize(iVar4);
  pVVar3 = local_a8;
  do {
    iVar2 = iVar2 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar4);
    Variant::operator=(pVVar1,pVVar3);
    pVVar3 = pVVar3 + 0x18;
  } while (iVar2 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  pVVar3 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* String vformat<Plane>(String const&, Plane const) */

long * vformat<Plane>(undefined8 param_1_00,undefined8 param_2,long *param_1,bool *param_4)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  char *pcVar4;
  Variant *this;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_e8;
  undefined8 local_e0;
  char local_c9;
  Array local_c8 [8];
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_e8 = param_1_00;
  local_e0 = param_2;
  Variant::Variant((Variant *)local_78,(Plane *)&local_e8);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar5 = (int)local_c8;
  Array::resize(iVar5);
  this = (Variant *)Array::operator[](iVar5);
  Variant::operator=(this,(Variant *)local_78);
  local_c9 = '\0';
  String::sprintf((Array *)&local_c0,param_4);
  if (local_c9 == '\0') {
    *param_1 = local_c0;
  }
  else {
    local_90 = 0;
    local_88 = ".";
    local_80 = 1;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = "\": ";
    local_a8 = 0;
    local_80 = 3;
    String::parse_latin1((StrRange *)&local_a8);
    local_88 = "Formatting error in string \"";
    local_b8 = 0;
    local_80 = 0x1c;
    String::parse_latin1((StrRange *)&local_b8);
    String::operator+((String_conflict *)&local_b0,(String_conflict *)&local_b8);
    String::operator+((String_conflict *)&local_a0,(String_conflict *)&local_b0);
    String::operator+((String_conflict *)&local_98,(String_conflict *)&local_a0);
    String::operator+((String_conflict *)&local_88,(String_conflict *)&local_98);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",(String_conflict *)&local_88
                     ,0,0);
    pcVar4 = local_88;
    if (local_88 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_88 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_88 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_98;
    if (local_98 != 0) {
      LOCK();
      plVar1 = (long *)(local_98 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_98 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar1 = (long *)(local_a0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar1 = (long *)(local_b0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar1 = (long *)(local_b8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar1 = (long *)(local_a8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_90;
    if (local_90 != 0) {
      LOCK();
      plVar1 = (long *)(local_90 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_90 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_c0;
    *param_1 = 0;
    if (local_c0 != 0) {
      LOCK();
      plVar1 = (long *)(local_c0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  Array::~Array(local_c8);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JoltWorldBoundaryShape3D::_build() const */

void JoltWorldBoundaryShape3D::_GLOBAL__sub_I__build(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC18;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltWorldBoundaryShape3D::~JoltWorldBoundaryShape3D() */

void __thiscall JoltWorldBoundaryShape3D::~JoltWorldBoundaryShape3D(JoltWorldBoundaryShape3D *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


