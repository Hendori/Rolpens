
/* JoltBoxShape3D::get_aabb() const */

void JoltBoxShape3D::get_aabb(void)

{
  float fVar1;
  long in_RSI;
  uint *in_RDI;
  float fVar2;
  float fVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  fVar1 = *(float *)(in_RSI + 0x70);
  fVar2 = (float)*(undefined8 *)(in_RSI + 0x74);
  fVar3 = (float)((ulong)*(undefined8 *)(in_RSI + 0x74) >> 0x20);
  uVar4 = (uint)fVar1 ^ _LC0;
  uVar6 = (uint)fVar2 ^ _LC0;
  uVar5 = (uint)fVar3 ^ _LC0;
  *(ulong *)(in_RDI + 4) = CONCAT44(fVar3 + fVar3,fVar2 + fVar2);
  *in_RDI = uVar4;
  in_RDI[1] = uVar6;
  in_RDI[2] = uVar5;
  in_RDI[3] = (uint)(fVar1 + fVar1);
  return;
}



/* JoltBoxShape3D::get_data() const */

void JoltBoxShape3D::get_data(void)

{
  long in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,(Vector3 *)(in_RSI + 0x70));
  return;
}



/* JoltBoxShape3D::set_margin(float) */

void __thiscall JoltBoxShape3D::set_margin(JoltBoxShape3D *this,float param_1)

{
  if (param_1 != *(float *)(this + 0x7c)) {
    *(float *)(this + 0x7c) = param_1;
    JoltShape3D::destroy();
    return;
  }
  return;
}



/* JoltBoxShape3D::set_data(Variant const&) */

void __thiscall JoltBoxShape3D::set_data(JoltBoxShape3D *this,Variant *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 uVar2;
  float extraout_XMM1_Da;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 == 9) {
    uVar2 = Variant::operator_cast_to_Vector3(param_1);
    if ((((float)uVar2 == *(float *)(this + 0x70)) &&
        ((float)((ulong)uVar2 >> 0x20) == *(float *)(this + 0x74))) &&
       (extraout_XMM1_Da == *(float *)(this + 0x78))) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      *(undefined8 *)(this + 0x70) = uVar2;
      *(float *)(this + 0x78) = extraout_XMM1_Da;
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        JoltShape3D::destroy();
        return;
      }
    }
  }
  else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("set_data","modules/jolt_physics/shapes/jolt_box_shape_3d.cpp",0x37,
                     "Condition \"p_data.get_type() != Variant::VECTOR3\" is true.",0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltBoxShape3D::to_string() const */

void JoltBoxShape3D::to_string(void)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  long in_RSI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  uVar2 = *(undefined4 *)(in_RSI + 0x7c);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "{half_extents=%v margin=%f}";
  local_30 = 0x1b;
  String::parse_latin1((StrRange *)&local_40);
  vformat<Vector3,float>(*(undefined8 *)(in_RSI + 0x70),*(undefined4 *)(in_RSI + 0x78),uVar2);
  lVar3 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltBoxShape3D::_build() const */

void JoltBoxShape3D::_build(void)

{
  long *plVar1;
  undefined4 uVar2;
  long lVar3;
  char *pcVar4;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  float fVar5;
  float fVar6;
  long local_118;
  long local_110;
  long local_108;
  long local_100;
  char *local_f8;
  undefined8 local_f0;
  long *local_e8;
  long local_d8 [2];
  char local_c8;
  code *local_b8;
  undefined4 local_b0;
  undefined8 local_a8;
  long *local_a0;
  long local_90 [2];
  char local_80;
  long *local_78;
  undefined4 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  float local_58;
  long local_40;
  
  fVar6 = *(float *)(in_RSI + 0x74);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar5 = *(float *)(in_RSI + 0x78);
  if (fVar6 <= *(float *)(in_RSI + 0x70)) {
    if (fVar5 <= fVar6) {
      fVar6 = fVar5;
    }
  }
  else {
    fVar6 = *(float *)(in_RSI + 0x70 + (ulong)(fVar5 <= *(float *)(in_RSI + 0x70)) * 8);
  }
  fVar5 = (float)JoltProjectSettings::get_collision_margin_fraction();
  local_68 = *(undefined4 *)(in_RSI + 0x70);
  uStack_64 = *(undefined4 *)(in_RSI + 0x74);
  local_b0 = 0;
  local_a8 = 0;
  local_b8 = (code *)&JPH::ConvexShapeSettings::vtable;
  local_80 = '\0';
  local_78 = (long *)0x0;
  local_70 = 0x447a0000;
  local_58 = *(float *)(in_RSI + 0x7c);
  if (fVar5 * fVar6 <= *(float *)(in_RSI + 0x7c)) {
    local_58 = fVar5 * fVar6;
  }
  uStack_60 = *(undefined4 *)(in_RSI + 0x78);
  uStack_5c = uStack_60;
  JPH::BoxShapeSettings::Create();
  if (local_c8 == '\x02') {
    JoltShape3D::_owners_to_string();
    String::utf8((char *)&local_110,(int)local_e8);
    uVar2 = *(undefined4 *)(in_RSI + 0x7c);
    local_100 = 0;
    local_f8 = "{half_extents=%v margin=%f}";
    local_f0 = 0x1b;
    String::parse_latin1((StrRange *)&local_100);
    vformat<Vector3,float>(*(undefined8 *)(in_RSI + 0x70),*(undefined4 *)(in_RSI + 0x78),uVar2);
    lVar3 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar1 = (long *)(local_100 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    local_100 = 0;
    local_f8 = 
    "Failed to build Jolt Physics box shape with %s. It returned the following error: \'%s\'. This shape belongs to %s."
    ;
    local_f0 = 0x70;
    String::parse_latin1((StrRange *)&local_100);
    vformat<String,String,String>(&local_f8,(StrRange *)&local_100,&local_118,&local_110,&local_108)
    ;
    _err_print_error("_build","modules/jolt_physics/shapes/jolt_box_shape_3d.cpp",0x2d,
                     "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_f8,0
                     ,0);
    pcVar4 = local_f8;
    if (local_f8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_100;
    if (local_100 != 0) {
      LOCK();
      plVar1 = (long *)(local_100 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_100 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_118;
    if (local_118 != 0) {
      LOCK();
      plVar1 = (long *)(local_118 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_118 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_110;
    if (local_110 != 0) {
      LOCK();
      plVar1 = (long *)(local_110 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_110 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_108;
    if (local_108 != 0) {
      LOCK();
      plVar1 = (long *)(local_108 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_108 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *in_RDI = 0;
  }
  else {
    *in_RDI = local_e8;
    if (local_e8 == (long *)0x0) goto LAB_00100380;
    LOCK();
    *(int *)(local_e8 + 1) = (int)local_e8[1] + 1;
    UNLOCK();
  }
  if (local_c8 == '\x01') {
    if (local_e8 != (long *)0x0) {
      LOCK();
      plVar1 = local_e8 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_e8 + 8))();
      }
    }
  }
  else if ((local_c8 == '\x02') && (local_e8 != local_d8)) {
    (*JPH::Free)();
  }
LAB_00100380:
  local_b8 = JoltShape3D::_owners_to_string;
  if (local_78 != (long *)0x0) {
    LOCK();
    plVar1 = local_78 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*local_78 + 0x18) == JPH::PhysicsMaterial::~PhysicsMaterial) {
        (*JPH::Free)();
      }
      else {
        (**(code **)(*local_78 + 0x18))();
      }
    }
  }
  local_b8 = String::utf8;
  if (local_80 == '\x01') {
    if (local_a0 != (long *)0x0) {
      LOCK();
      plVar1 = local_a0 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_a0 + 8))();
      }
    }
  }
  else if ((local_80 == '\x02') && (local_a0 != local_90)) {
    (*JPH::Free)();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* JoltBoxShape3D::get_type() const */

undefined8 JoltBoxShape3D::get_type(void)

{
  return 3;
}



/* JoltBoxShape3D::is_convex() const */

undefined8 JoltBoxShape3D::is_convex(void)

{
  return 1;
}



/* JoltBoxShape3D::get_margin() const */

undefined4 __thiscall JoltBoxShape3D::get_margin(JoltBoxShape3D *this)

{
  return *(undefined4 *)(this + 0x7c);
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JoltBoxShape3D::~JoltBoxShape3D() */

void __thiscall JoltBoxShape3D::~JoltBoxShape3D(JoltBoxShape3D *this)

{
  *(undefined ***)this = &PTR__build_00101290;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  return;
}



/* JoltBoxShape3D::~JoltBoxShape3D() */

void __thiscall JoltBoxShape3D::~JoltBoxShape3D(JoltBoxShape3D *this)

{
  *(undefined ***)this = &PTR__build_00101290;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  operator_delete(this,0x80);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100ab8) */
/* WARNING: Removing unreachable block (ram,0x00100be8) */
/* WARNING: Removing unreachable block (ram,0x00100d60) */
/* WARNING: Removing unreachable block (ram,0x00100bf4) */
/* WARNING: Removing unreachable block (ram,0x00100bfe) */
/* WARNING: Removing unreachable block (ram,0x00100d42) */
/* WARNING: Removing unreachable block (ram,0x00100c0a) */
/* WARNING: Removing unreachable block (ram,0x00100c14) */
/* WARNING: Removing unreachable block (ram,0x00100d24) */
/* WARNING: Removing unreachable block (ram,0x00100c20) */
/* WARNING: Removing unreachable block (ram,0x00100c2a) */
/* WARNING: Removing unreachable block (ram,0x00100d06) */
/* WARNING: Removing unreachable block (ram,0x00100c36) */
/* WARNING: Removing unreachable block (ram,0x00100c40) */
/* WARNING: Removing unreachable block (ram,0x00100ce8) */
/* WARNING: Removing unreachable block (ram,0x00100c4c) */
/* WARNING: Removing unreachable block (ram,0x00100c56) */
/* WARNING: Removing unreachable block (ram,0x00100cca) */
/* WARNING: Removing unreachable block (ram,0x00100c5e) */
/* WARNING: Removing unreachable block (ram,0x00100c68) */
/* WARNING: Removing unreachable block (ram,0x00100caf) */
/* WARNING: Removing unreachable block (ram,0x00100c70) */
/* WARNING: Removing unreachable block (ram,0x00100c85) */
/* WARNING: Removing unreachable block (ram,0x00100c91) */
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



/* String vformat<Vector3, float>(String const&, Vector3 const, float const) */

long * vformat<Vector3,float>
                 (undefined8 param_1_00,undefined4 param_2,float param_3,long *param_1,bool *param_5
                 )

{
  Variant *pVVar1;
  long *plVar2;
  long lVar3;
  char *pcVar4;
  Variant *pVVar5;
  int iVar6;
  long in_FS_OFFSET;
  undefined8 local_f8;
  undefined4 local_f0;
  char local_d9;
  Array local_d8 [8];
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  char *local_98;
  undefined8 local_90;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_f8 = param_1_00;
  local_f0 = param_2;
  Variant::Variant(local_88,(Vector3 *)&local_f8);
  Variant::Variant(local_70,param_3);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar6 = (int)local_d8;
  Array::resize(iVar6);
  pVVar5 = (Variant *)Array::operator[](iVar6);
  Variant::operator=(pVVar5,local_88);
  pVVar5 = (Variant *)Array::operator[](iVar6);
  Variant::operator=(pVVar5,local_70);
  local_d9 = '\0';
  String::sprintf((Array *)&local_d0,param_5);
  if (local_d9 == '\0') {
    *param_1 = local_d0;
  }
  else {
    local_a0 = 0;
    local_98 = ".";
    local_90 = 1;
    String::parse_latin1((StrRange *)&local_a0);
    local_98 = "\": ";
    local_b8 = 0;
    local_90 = 3;
    String::parse_latin1((StrRange *)&local_b8);
    local_98 = "Formatting error in string \"";
    local_c8 = 0;
    local_90 = 0x1c;
    String::parse_latin1((StrRange *)&local_c8);
    String::operator+((String_conflict *)&local_c0,(String_conflict *)&local_c8);
    String::operator+((String_conflict *)&local_b0,(String_conflict *)&local_c0);
    String::operator+((String_conflict *)&local_a8,(String_conflict *)&local_b0);
    String::operator+((String_conflict *)&local_98,(String_conflict *)&local_a8);
    _err_print_error("vformat","./core/variant/variant.h",0x3b1,
                     "Condition \"error\" is true. Returning: String()",(String_conflict *)&local_98
                     ,0,0);
    pcVar4 = local_98;
    if (local_98 != (char *)0x0) {
      LOCK();
      plVar2 = (long *)(local_98 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_98 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_a8;
    if (local_a8 != 0) {
      LOCK();
      plVar2 = (long *)(local_a8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_a8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_b0;
    if (local_b0 != 0) {
      LOCK();
      plVar2 = (long *)(local_b0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_c0;
    if (local_c0 != 0) {
      LOCK();
      plVar2 = (long *)(local_c0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_c8;
    if (local_c8 != 0) {
      LOCK();
      plVar2 = (long *)(local_c8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_c8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_b8;
    if (local_b8 != 0) {
      LOCK();
      plVar2 = (long *)(local_b8 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_a0;
    if (local_a0 != 0) {
      LOCK();
      plVar2 = (long *)(local_a0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_a0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_d0;
    *param_1 = 0;
    if (local_d0 != 0) {
      LOCK();
      plVar2 = (long *)(local_d0 + -0x10);
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        local_d0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
  }
  pVVar5 = (Variant *)local_40;
  Array::~Array(local_d8);
  do {
    pVVar1 = pVVar5 + -0x18;
    pVVar5 = pVVar5 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar5 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JoltBoxShape3D::_build() const */

void JoltBoxShape3D::_GLOBAL__sub_I__build(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC15;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltBoxShape3D::~JoltBoxShape3D() */

void __thiscall JoltBoxShape3D::~JoltBoxShape3D(JoltBoxShape3D *this)

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


