
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltSphereShape3D::get_aabb() const */

void JoltSphereShape3D::get_aabb(void)

{
  float fVar1;
  long in_RSI;
  uint *in_RDI;
  uint uVar2;
  float fVar3;
  
  fVar1 = *(float *)(in_RSI + 0x70);
  fVar3 = fVar1 + fVar1;
  uVar2 = (uint)fVar1 ^ __LC1;
  *(ulong *)(in_RDI + 4) = CONCAT44(fVar3,fVar3);
  *in_RDI = uVar2;
  in_RDI[1] = uVar2;
  in_RDI[2] = uVar2;
  in_RDI[3] = (uint)fVar3;
  return;
}



/* JoltSphereShape3D::get_data() const */

void JoltSphereShape3D::get_data(void)

{
  long in_RSI;
  Variant *in_RDI;
  
  Variant::Variant(in_RDI,*(float *)(in_RSI + 0x70));
  return;
}



/* JoltSphereShape3D::set_data(Variant const&) */

void __thiscall JoltSphereShape3D::set_data(JoltSphereShape3D *this,Variant *param_1)

{
  float fVar1;
  
  if (*(int *)param_1 != 3) {
    _err_print_error("set_data","modules/jolt_physics/shapes/jolt_sphere_shape_3d.cpp",0x34,
                     "Condition \"p_data.get_type() != Variant::FLOAT\" is true.",0,0);
    return;
  }
  fVar1 = Variant::operator_cast_to_float(param_1);
  if (fVar1 != *(float *)(this + 0x70)) {
    *(float *)(this + 0x70) = fVar1;
    JoltShape3D::destroy();
    return;
  }
  return;
}



/* JoltSphereShape3D::to_string() const */

void JoltSphereShape3D::to_string(void)

{
  long *plVar1;
  float fVar2;
  long lVar3;
  long in_RSI;
  String_conflict *in_RDI;
  long in_FS_OFFSET;
  long local_40;
  undefined *local_38;
  undefined8 local_30;
  long local_20;
  
  fVar2 = *(float *)(in_RSI + 0x70);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = &_LC11;
  local_30 = 0xb;
  String::parse_latin1((StrRange *)&local_40);
  vformat<float>(in_RDI,fVar2);
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



/* JoltSphereShape3D::_build() const */

void JoltSphereShape3D::_build(void)

{
  long *plVar1;
  float fVar2;
  long lVar3;
  char *pcVar4;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  long local_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  long *local_c8;
  long local_b8 [2];
  char local_a8;
  code *local_98;
  undefined4 local_90;
  undefined8 local_88;
  long *local_80;
  long local_70 [2];
  char local_60;
  long *local_58;
  undefined4 local_50;
  float local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(float *)(in_RSI + 0x70) <= 0.0) {
    JoltShape3D::_owners_to_string();
    fVar2 = *(float *)(in_RSI + 0x70);
    local_e0 = 0;
    local_d8 = "{radius=%f}";
    local_d0 = 0xb;
    String::parse_latin1((StrRange *)&local_e0);
    vformat<float>((String_conflict *)&local_f0,fVar2);
    lVar3 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    local_e0 = 0;
    local_d8 = 
    "Failed to build Jolt Physics sphere shape with %s. Its radius must be greater than 0. This shape belongs to %s."
    ;
    local_d0 = 0x6f;
    String::parse_latin1((StrRange *)&local_e0);
    vformat<String,String>(&local_d8,(StrRange *)&local_e0,(String_conflict *)&local_f0,&local_e8);
    _err_print_error("_build","modules/jolt_physics/shapes/jolt_sphere_shape_3d.cpp",0x26,
                     "Condition \"radius <= 0.0f\" is true. Returning: nullptr",&local_d8,0,0);
    pcVar4 = local_d8;
    if (local_d8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *in_RDI = 0;
    goto LAB_0010029a;
  }
  local_90 = 0;
  local_88 = 0;
  local_60 = '\0';
  local_58 = (long *)0x0;
  local_50 = 0x447a0000;
  local_98 = (code *)&JPH::ConvexShapeSettings::vtable;
  local_4c = *(float *)(in_RSI + 0x70);
  JPH::SphereShapeSettings::Create();
  if (local_a8 == '\x02') {
    JoltShape3D::_owners_to_string();
    String::utf8((char *)&local_f0,(int)local_c8);
    fVar2 = *(float *)(in_RSI + 0x70);
    local_e0 = 0;
    local_d8 = "{radius=%f}";
    local_d0 = 0xb;
    String::parse_latin1((StrRange *)&local_e0);
    vformat<float>((String_conflict *)&local_f8,fVar2);
    lVar3 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    local_e0 = 0;
    local_d8 = 
    "Failed to build Jolt Physics sphere shape with %s. It returned the following error: \'%s\'. This shape belongs to %s."
    ;
    local_d0 = 0x73;
    String::parse_latin1((StrRange *)&local_e0);
    vformat<String,String,String>
              (&local_d8,(StrRange *)&local_e0,(String_conflict *)&local_f8,&local_f0,&local_e8);
    _err_print_error("_build","modules/jolt_physics/shapes/jolt_sphere_shape_3d.cpp",0x2a,
                     "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_d8,0
                     ,0);
    pcVar4 = local_d8;
    if (local_d8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    lVar3 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    lVar3 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    *in_RDI = 0;
LAB_00100234:
    if (local_a8 == '\x01') {
      if (local_c8 != (long *)0x0) {
        LOCK();
        plVar1 = local_c8 + 1;
        *(int *)plVar1 = (int)*plVar1 + -1;
        UNLOCK();
        if ((int)*plVar1 == 0) {
          (**(code **)(*local_c8 + 8))();
        }
      }
    }
    else if ((local_a8 == '\x02') && (local_c8 != local_b8)) {
      (*JPH::Free)();
    }
  }
  else {
    *in_RDI = local_c8;
    if (local_c8 != (long *)0x0) {
      LOCK();
      *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
      UNLOCK();
      goto LAB_00100234;
    }
  }
  local_98 = JoltShape3D::_owners_to_string;
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
  local_98 = String::utf8;
  if (local_60 == '\x01') {
    if (local_80 != (long *)0x0) {
      LOCK();
      plVar1 = local_80 + 1;
      *(int *)plVar1 = (int)*plVar1 + -1;
      UNLOCK();
      if ((int)*plVar1 == 0) {
        (**(code **)(*local_80 + 8))();
      }
    }
  }
  else if ((local_60 == '\x02') && (local_80 != local_70)) {
    (*JPH::Free)();
  }
LAB_0010029a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSphereShape3D::get_type() const */

undefined8 JoltSphereShape3D::get_type(void)

{
  return 2;
}



/* JoltSphereShape3D::is_convex() const */

undefined8 JoltSphereShape3D::is_convex(void)

{
  return 1;
}



/* JoltSphereShape3D::get_margin() const */

undefined8 JoltSphereShape3D::get_margin(void)

{
  return 0;
}



/* JoltSphereShape3D::set_margin(float) */

void JoltSphereShape3D::set_margin(float param_1)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x001007d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JoltSphereShape3D::~JoltSphereShape3D() */

void __thiscall JoltSphereShape3D::~JoltSphereShape3D(JoltSphereShape3D *this)

{
  *(undefined ***)this = &PTR__build_001017d0;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  return;
}



/* JoltSphereShape3D::~JoltSphereShape3D() */

void __thiscall JoltSphereShape3D::~JoltSphereShape3D(JoltSphereShape3D *this)

{
  *(undefined ***)this = &PTR__build_001017d0;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  operator_delete(this,0x78);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100be0) */
/* WARNING: Removing unreachable block (ram,0x00100d10) */
/* WARNING: Removing unreachable block (ram,0x00100e89) */
/* WARNING: Removing unreachable block (ram,0x00100d1c) */
/* WARNING: Removing unreachable block (ram,0x00100d26) */
/* WARNING: Removing unreachable block (ram,0x00100e6b) */
/* WARNING: Removing unreachable block (ram,0x00100d32) */
/* WARNING: Removing unreachable block (ram,0x00100d3c) */
/* WARNING: Removing unreachable block (ram,0x00100e4d) */
/* WARNING: Removing unreachable block (ram,0x00100d48) */
/* WARNING: Removing unreachable block (ram,0x00100d52) */
/* WARNING: Removing unreachable block (ram,0x00100e2f) */
/* WARNING: Removing unreachable block (ram,0x00100d5e) */
/* WARNING: Removing unreachable block (ram,0x00100d68) */
/* WARNING: Removing unreachable block (ram,0x00100e11) */
/* WARNING: Removing unreachable block (ram,0x00100d74) */
/* WARNING: Removing unreachable block (ram,0x00100d7e) */
/* WARNING: Removing unreachable block (ram,0x00100df3) */
/* WARNING: Removing unreachable block (ram,0x00100d86) */
/* WARNING: Removing unreachable block (ram,0x00100d90) */
/* WARNING: Removing unreachable block (ram,0x00100dd8) */
/* WARNING: Removing unreachable block (ram,0x00100d98) */
/* WARNING: Removing unreachable block (ram,0x00100dae) */
/* WARNING: Removing unreachable block (ram,0x00100dba) */
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



/* WARNING: Removing unreachable block (ram,0x00101008) */
/* WARNING: Removing unreachable block (ram,0x00101138) */
/* WARNING: Removing unreachable block (ram,0x001012b0) */
/* WARNING: Removing unreachable block (ram,0x00101144) */
/* WARNING: Removing unreachable block (ram,0x0010114e) */
/* WARNING: Removing unreachable block (ram,0x00101292) */
/* WARNING: Removing unreachable block (ram,0x0010115a) */
/* WARNING: Removing unreachable block (ram,0x00101164) */
/* WARNING: Removing unreachable block (ram,0x00101274) */
/* WARNING: Removing unreachable block (ram,0x00101170) */
/* WARNING: Removing unreachable block (ram,0x0010117a) */
/* WARNING: Removing unreachable block (ram,0x00101256) */
/* WARNING: Removing unreachable block (ram,0x00101186) */
/* WARNING: Removing unreachable block (ram,0x00101190) */
/* WARNING: Removing unreachable block (ram,0x00101238) */
/* WARNING: Removing unreachable block (ram,0x0010119c) */
/* WARNING: Removing unreachable block (ram,0x001011a6) */
/* WARNING: Removing unreachable block (ram,0x0010121a) */
/* WARNING: Removing unreachable block (ram,0x001011ae) */
/* WARNING: Removing unreachable block (ram,0x001011b8) */
/* WARNING: Removing unreachable block (ram,0x001011ff) */
/* WARNING: Removing unreachable block (ram,0x001011c0) */
/* WARNING: Removing unreachable block (ram,0x001011d5) */
/* WARNING: Removing unreachable block (ram,0x001011e1) */
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



/* WARNING: Removing unreachable block (ram,0x001013f8) */
/* WARNING: Removing unreachable block (ram,0x00101528) */
/* WARNING: Removing unreachable block (ram,0x001016f0) */
/* WARNING: Removing unreachable block (ram,0x00101534) */
/* WARNING: Removing unreachable block (ram,0x0010153e) */
/* WARNING: Removing unreachable block (ram,0x001016d0) */
/* WARNING: Removing unreachable block (ram,0x0010154a) */
/* WARNING: Removing unreachable block (ram,0x00101554) */
/* WARNING: Removing unreachable block (ram,0x001016b0) */
/* WARNING: Removing unreachable block (ram,0x00101560) */
/* WARNING: Removing unreachable block (ram,0x0010156a) */
/* WARNING: Removing unreachable block (ram,0x00101690) */
/* WARNING: Removing unreachable block (ram,0x00101576) */
/* WARNING: Removing unreachable block (ram,0x00101580) */
/* WARNING: Removing unreachable block (ram,0x00101670) */
/* WARNING: Removing unreachable block (ram,0x0010158c) */
/* WARNING: Removing unreachable block (ram,0x00101596) */
/* WARNING: Removing unreachable block (ram,0x00101650) */
/* WARNING: Removing unreachable block (ram,0x001015a2) */
/* WARNING: Removing unreachable block (ram,0x001015ac) */
/* WARNING: Removing unreachable block (ram,0x00101630) */
/* WARNING: Removing unreachable block (ram,0x001015b4) */
/* WARNING: Removing unreachable block (ram,0x001015ca) */
/* WARNING: Removing unreachable block (ram,0x001015d6) */
/* String vformat<float>(String const&, float const) */

String_conflict * vformat<float>(String_conflict *param_1,float param_2)

{
  char cVar1;
  Variant *this;
  bool *in_RSI;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_2);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,in_RSI);
  *(undefined8 *)param_1 = local_c0[0];
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



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JoltSphereShape3D::_build() const */

void JoltSphereShape3D::_GLOBAL__sub_I__build(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC18;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltSphereShape3D::~JoltSphereShape3D() */

void __thiscall JoltSphereShape3D::~JoltSphereShape3D(JoltSphereShape3D *this)

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


