
/* JoltCylinderShape3D::get_aabb() const */

void JoltCylinderShape3D::get_aabb(void)

{
  float fVar1;
  long in_RSI;
  uint *in_RDI;
  uint uVar2;
  float fVar3;
  uint uVar4;
  
  fVar1 = *(float *)(in_RSI + 0x74);
  fVar3 = _LC0 * *(float *)(in_RSI + 0x70);
  uVar2 = (uint)fVar1 ^ _LC1;
  uVar4 = _LC1 ^ (uint)fVar3;
  in_RDI[5] = (uint)(fVar1 + fVar1);
  *in_RDI = uVar2;
  in_RDI[1] = uVar4;
  in_RDI[2] = uVar2;
  in_RDI[3] = (uint)(fVar1 + fVar1);
  in_RDI[4] = (uint)(fVar3 + fVar3);
  return;
}



/* JoltCylinderShape3D::set_margin(float) */

void __thiscall JoltCylinderShape3D::set_margin(JoltCylinderShape3D *this,float param_1)

{
  if (param_1 != *(float *)(this + 0x78)) {
    *(float *)(this + 0x78) = param_1;
    JoltShape3D::destroy();
    return;
  }
  return;
}



/* JoltCylinderShape3D::set_data(Variant const&) */

void __thiscall JoltCylinderShape3D::set_data(JoltCylinderShape3D *this,Variant *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  float fVar2;
  float fVar3;
  Variant local_c0 [8];
  int local_b8 [8];
  int local_98 [8];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(int *)param_1 != 0x1b) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_data","modules/jolt_physics/shapes/jolt_cylinder_shape_3d.cpp",0x3a,
                       "Condition \"p_data.get_type() != Variant::DICTIONARY\" is true.",0,0);
      return;
    }
    goto LAB_00100362;
  }
  Variant::operator_cast_to_Dictionary(local_c0);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  Variant::Variant((Variant *)local_58,"height");
  Dictionary::get((Variant *)local_b8,local_c0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  if (local_b8[0] == 3) {
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    Variant::Variant((Variant *)local_58,"radius");
    Dictionary::get((Variant *)local_98,local_c0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if (local_98[0] == 3) {
      fVar2 = Variant::operator_cast_to_float((Variant *)local_b8);
      fVar3 = Variant::operator_cast_to_float((Variant *)local_98);
      if ((fVar2 == *(float *)(this + 0x70)) && (fVar3 == *(float *)(this + 0x74)))
      goto LAB_00100315;
      *(ulong *)(this + 0x70) = CONCAT44(fVar3,fVar2);
      JoltShape3D::destroy();
      cVar1 = Variant::needs_deinit[local_98[0]];
    }
    else {
      _err_print_error("set_data","modules/jolt_physics/shapes/jolt_cylinder_shape_3d.cpp",0x42,
                       "Condition \"maybe_radius.get_type() != Variant::FLOAT\" is true.",0,0);
LAB_00100315:
      cVar1 = Variant::needs_deinit[local_98[0]];
    }
    if (cVar1 != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    _err_print_error("set_data","modules/jolt_physics/shapes/jolt_cylinder_shape_3d.cpp",0x3f,
                     "Condition \"maybe_height.get_type() != Variant::FLOAT\" is true.",0,0);
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100362:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCylinderShape3D::get_data() const */

Variant * JoltCylinderShape3D::get_data(void)

{
  char cVar1;
  Variant *pVVar2;
  long in_RSI;
  Variant *in_RDI;
  long in_FS_OFFSET;
  Dictionary local_80 [8];
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_80);
  Variant::Variant((Variant *)local_58,*(float *)(in_RSI + 0x70));
  Variant::Variant((Variant *)local_78,"height");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_58,*(float *)(in_RSI + 0x74));
  Variant::Variant((Variant *)local_78,"radius");
  pVVar2 = (Variant *)Dictionary::operator[]((Variant *)local_80);
  if (pVVar2 != (Variant *)local_58) {
    if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)pVVar2 = 0;
    *(int *)pVVar2 = local_58[0];
    *(undefined8 *)(pVVar2 + 8) = local_50;
    *(undefined8 *)(pVVar2 + 0x10) = uStack_48;
    local_58[0] = 0;
  }
  if (Variant::needs_deinit[local_78[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant(in_RDI,local_80);
  Dictionary::~Dictionary(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return in_RDI;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCylinderShape3D::to_string() const */

void JoltCylinderShape3D::to_string(void)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  long lVar5;
  long in_RSI;
  String_conflict *in_RDI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  fVar2 = *(float *)(in_RSI + 0x78);
  fVar3 = *(float *)(in_RSI + 0x74);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  fVar4 = *(float *)(in_RSI + 0x70);
  local_38 = "{height=%f radius=%f margin=%f}";
  local_40 = 0;
  local_30 = 0x1f;
  String::parse_latin1((StrRange *)&local_40);
  vformat<float,float,float>(in_RDI,fVar4,fVar3,fVar2);
  lVar5 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar5 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCylinderShape3D::_build() const */

void JoltCylinderShape3D::_build(void)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  float fVar4;
  float fVar5;
  float fVar6;
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
  undefined4 local_48;
  float local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  fVar5 = _LC0 * *(float *)(in_RSI + 0x70);
  fVar6 = fVar5;
  if (*(float *)(in_RSI + 0x74) <= fVar5) {
    fVar6 = *(float *)(in_RSI + 0x74);
  }
  fVar4 = (float)JoltProjectSettings::get_collision_margin_fraction();
  local_90 = 0;
  local_88 = 0;
  local_60 = '\0';
  local_58 = (long *)0x0;
  local_44 = *(float *)(in_RSI + 0x78);
  if (fVar4 * fVar6 <= *(float *)(in_RSI + 0x78)) {
    local_44 = fVar4 * fVar6;
  }
  local_98 = (code *)&JPH::ConvexShapeSettings::vtable;
  local_50 = 0x447a0000;
  local_48 = *(undefined4 *)(in_RSI + 0x74);
  local_4c = fVar5;
  JPH::CylinderShapeSettings::Create();
  if (local_a8 == '\x02') {
    JoltShape3D::_owners_to_string();
    String::utf8((char *)&local_f0,(int)local_c8);
    to_string();
    local_d8 = 
    "Failed to build Jolt Physics cylinder shape with %s. It returned the following error: \'%s\'. This shape belongs to %s."
    ;
    local_e0 = 0;
    local_d0 = 0x75;
    String::parse_latin1((StrRange *)&local_e0);
    vformat<String,String,String>(&local_d8,(StrRange *)&local_e0,&local_f8,&local_f0,&local_e8);
    _err_print_error("_build","modules/jolt_physics/shapes/jolt_cylinder_shape_3d.cpp",0x2d,
                     "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_d8,0
                     ,0);
    pcVar3 = local_d8;
    if (local_d8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_d8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_d8 = (char *)0x0;
        Memory::free_static(pcVar3 + -0x10,false);
      }
    }
    lVar2 = local_e0;
    if (local_e0 != 0) {
      LOCK();
      plVar1 = (long *)(local_e0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_f8;
    if (local_f8 != 0) {
      LOCK();
      plVar1 = (long *)(local_f8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_f0;
    if (local_f0 != 0) {
      LOCK();
      plVar1 = (long *)(local_f0 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_f0 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    lVar2 = local_e8;
    if (local_e8 != 0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    *in_RDI = 0;
  }
  else {
    *in_RDI = local_c8;
    if (local_c8 == (long *)0x0) goto LAB_00100770;
    LOCK();
    *(int *)(local_c8 + 1) = (int)local_c8[1] + 1;
    UNLOCK();
  }
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
LAB_00100770:
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCylinderShape3D::get_type() const */

undefined8 JoltCylinderShape3D::get_type(void)

{
  return 5;
}



/* JoltCylinderShape3D::is_convex() const */

undefined8 JoltCylinderShape3D::is_convex(void)

{
  return 1;
}



/* JoltCylinderShape3D::get_margin() const */

undefined4 __thiscall JoltCylinderShape3D::get_margin(JoltCylinderShape3D *this)

{
  return *(undefined4 *)(this + 0x78);
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100a94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JoltCylinderShape3D::~JoltCylinderShape3D() */

void __thiscall JoltCylinderShape3D::~JoltCylinderShape3D(JoltCylinderShape3D *this)

{
  *(undefined ***)this = &PTR__build_00101660;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  return;
}



/* JoltCylinderShape3D::~JoltCylinderShape3D() */

void __thiscall JoltCylinderShape3D::~JoltCylinderShape3D(JoltCylinderShape3D *this)

{
  *(undefined ***)this = &PTR__build_00101660;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  operator_delete(this,0x80);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00100ea8) */
/* WARNING: Removing unreachable block (ram,0x00100fd8) */
/* WARNING: Removing unreachable block (ram,0x00101150) */
/* WARNING: Removing unreachable block (ram,0x00100fe4) */
/* WARNING: Removing unreachable block (ram,0x00100fee) */
/* WARNING: Removing unreachable block (ram,0x00101132) */
/* WARNING: Removing unreachable block (ram,0x00100ffa) */
/* WARNING: Removing unreachable block (ram,0x00101004) */
/* WARNING: Removing unreachable block (ram,0x00101114) */
/* WARNING: Removing unreachable block (ram,0x00101010) */
/* WARNING: Removing unreachable block (ram,0x0010101a) */
/* WARNING: Removing unreachable block (ram,0x001010f6) */
/* WARNING: Removing unreachable block (ram,0x00101026) */
/* WARNING: Removing unreachable block (ram,0x00101030) */
/* WARNING: Removing unreachable block (ram,0x001010d8) */
/* WARNING: Removing unreachable block (ram,0x0010103c) */
/* WARNING: Removing unreachable block (ram,0x00101046) */
/* WARNING: Removing unreachable block (ram,0x001010ba) */
/* WARNING: Removing unreachable block (ram,0x0010104e) */
/* WARNING: Removing unreachable block (ram,0x00101058) */
/* WARNING: Removing unreachable block (ram,0x0010109f) */
/* WARNING: Removing unreachable block (ram,0x00101060) */
/* WARNING: Removing unreachable block (ram,0x00101075) */
/* WARNING: Removing unreachable block (ram,0x00101081) */
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



/* WARNING: Removing unreachable block (ram,0x001012d8) */
/* WARNING: Removing unreachable block (ram,0x00101408) */
/* WARNING: Removing unreachable block (ram,0x00101580) */
/* WARNING: Removing unreachable block (ram,0x00101414) */
/* WARNING: Removing unreachable block (ram,0x0010141e) */
/* WARNING: Removing unreachable block (ram,0x00101562) */
/* WARNING: Removing unreachable block (ram,0x0010142a) */
/* WARNING: Removing unreachable block (ram,0x00101434) */
/* WARNING: Removing unreachable block (ram,0x00101544) */
/* WARNING: Removing unreachable block (ram,0x00101440) */
/* WARNING: Removing unreachable block (ram,0x0010144a) */
/* WARNING: Removing unreachable block (ram,0x00101526) */
/* WARNING: Removing unreachable block (ram,0x00101456) */
/* WARNING: Removing unreachable block (ram,0x00101460) */
/* WARNING: Removing unreachable block (ram,0x00101508) */
/* WARNING: Removing unreachable block (ram,0x0010146c) */
/* WARNING: Removing unreachable block (ram,0x00101476) */
/* WARNING: Removing unreachable block (ram,0x001014ea) */
/* WARNING: Removing unreachable block (ram,0x0010147e) */
/* WARNING: Removing unreachable block (ram,0x00101488) */
/* WARNING: Removing unreachable block (ram,0x001014cf) */
/* WARNING: Removing unreachable block (ram,0x00101490) */
/* WARNING: Removing unreachable block (ram,0x001014a5) */
/* WARNING: Removing unreachable block (ram,0x001014b1) */
/* String vformat<float, float, float>(String const&, float const, float const, float const) */

String_conflict *
vformat<float,float,float>(String_conflict *param_1,float param_2,float param_3,float param_4)

{
  Variant *pVVar1;
  int iVar2;
  Variant *pVVar3;
  bool *in_RSI;
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
  Variant::Variant(local_a8,param_2);
  Variant::Variant(local_90,param_3);
  iVar2 = 0;
  Variant::Variant(local_78,param_4);
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
  String::sprintf((Array *)local_f0,in_RSI);
  *(undefined8 *)param_1 = local_f0[0];
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



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JoltCylinderShape3D::_build() const */

void JoltCylinderShape3D::_GLOBAL__sub_I__build(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC20;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltCylinderShape3D::~JoltCylinderShape3D() */

void __thiscall JoltCylinderShape3D::~JoltCylinderShape3D(JoltCylinderShape3D *this)

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


