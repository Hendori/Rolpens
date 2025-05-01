
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JoltSeparationRayShape3D::get_aabb() const */

void JoltSeparationRayShape3D::get_aabb(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_RSI;
  undefined8 *in_RDI;
  
  uVar3 = _UNK_00101e18;
  uVar2 = __LC1;
  uVar1 = *(undefined4 *)(in_RSI + 0x70);
  *(undefined4 *)(in_RDI + 2) = 0x3dcccccd;
  *in_RDI = uVar2;
  in_RDI[1] = uVar3;
  *(undefined4 *)((long)in_RDI + 0x14) = uVar1;
  return;
}



/* JoltSeparationRayShape3D::set_data(Variant const&) */

void __thiscall JoltSeparationRayShape3D::set_data(JoltSeparationRayShape3D *this,Variant *param_1)

{
  char cVar1;
  JoltSeparationRayShape3D JVar2;
  long in_FS_OFFSET;
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
      _err_print_error("set_data","modules/jolt_physics/shapes/jolt_separation_ray_shape_3d.cpp",
                       0x36,"Condition \"p_data.get_type() != Variant::DICTIONARY\" is true.",0,0);
      return;
    }
    goto LAB_0010030b;
  }
  Variant::operator_cast_to_Dictionary(local_c0);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  Variant::Variant((Variant *)local_58,"length");
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
    Variant::Variant((Variant *)local_58,"slide_on_slope");
    Dictionary::get((Variant *)local_98,local_c0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if (local_98[0] == 1) {
      fVar3 = Variant::operator_cast_to_float((Variant *)local_b8);
      JVar2 = (JoltSeparationRayShape3D)Variant::operator_cast_to_bool((Variant *)local_98);
      if ((fVar3 == *(float *)(this + 0x70)) && (this[0x74] == JVar2)) goto LAB_001002c5;
      this[0x74] = JVar2;
      *(float *)(this + 0x70) = fVar3;
      JoltShape3D::destroy();
      cVar1 = Variant::needs_deinit[local_98[0]];
    }
    else {
      _err_print_error("set_data","modules/jolt_physics/shapes/jolt_separation_ray_shape_3d.cpp",
                       0x3e,
                       "Condition \"maybe_slide_on_slope.get_type() != Variant::BOOL\" is true.",0,0
                      );
LAB_001002c5:
      cVar1 = Variant::needs_deinit[local_98[0]];
    }
    if (cVar1 != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    _err_print_error("set_data","modules/jolt_physics/shapes/jolt_separation_ray_shape_3d.cpp",0x3b,
                     "Condition \"maybe_length.get_type() != Variant::FLOAT\" is true.",0,0);
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010030b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSeparationRayShape3D::get_data() const */

Variant * JoltSeparationRayShape3D::get_data(void)

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
  Variant::Variant((Variant *)local_78,"length");
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
  Variant::Variant((Variant *)local_58,*(bool *)(in_RSI + 0x74));
  Variant::Variant((Variant *)local_78,"slide_on_slope");
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



/* JoltSeparationRayShape3D::to_string() const */

void JoltSeparationRayShape3D::to_string(void)

{
  long *plVar1;
  float fVar2;
  long lVar3;
  long in_RSI;
  String_conflict *in_RDI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  fVar2 = *(float *)(in_RSI + 0x70);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "{length=%f slide_on_slope=%s}";
  local_30 = 0x1d;
  String::parse_latin1((StrRange *)&local_40);
  vformat<float,bool>(in_RDI,fVar2,SUB81((StrRange *)&local_40,0));
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



/* JoltSeparationRayShape3D::_build() const */

void JoltSeparationRayShape3D::_build(void)

{
  long *plVar1;
  float fVar2;
  long lVar3;
  char *pcVar4;
  long in_RSI;
  undefined8 *in_RDI;
  long in_FS_OFFSET;
  long local_108;
  long local_100;
  long local_f8;
  long local_f0;
  char *local_e8;
  undefined8 local_e0;
  long *local_d8;
  long local_c8 [2];
  char local_b8;
  code *local_a8;
  undefined4 local_a0;
  undefined8 local_98;
  long *local_90;
  long local_80 [2];
  char local_70;
  long *local_68;
  undefined4 local_60;
  long *local_58;
  float local_50;
  undefined1 local_4c;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(float *)(in_RSI + 0x70) <= 0.0) {
    JoltShape3D::_owners_to_string();
    fVar2 = *(float *)(in_RSI + 0x70);
    local_f0 = 0;
    local_e8 = "{length=%f slide_on_slope=%s}";
    local_e0 = 0x1d;
    String::parse_latin1((StrRange *)&local_f0);
    vformat<float,bool>((String_conflict *)&local_100,fVar2,SUB81((StrRange *)&local_f0,0));
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
    local_f0 = 0;
    local_e8 = 
    "Failed to build Jolt Physics separation ray shape with %s. Its length must be greater than 0. This shape belongs to %s."
    ;
    local_e0 = 0x77;
    String::parse_latin1((StrRange *)&local_f0);
    vformat<String,String>(&local_e8,(StrRange *)&local_f0,(String_conflict *)&local_100,&local_f8);
    _err_print_error("_build","modules/jolt_physics/shapes/jolt_separation_ray_shape_3d.cpp",0x25,
                     "Condition \"length <= 0.0f\" is true. Returning: nullptr",&local_e8,0,0);
    pcVar4 = local_e8;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
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
    *in_RDI = 0;
    goto LAB_0010073e;
  }
  local_4c = *(undefined1 *)(in_RSI + 0x74);
  local_a0 = 0;
  local_98 = 0;
  local_70 = '\0';
  local_68 = (long *)0x0;
  local_60 = 0x447a0000;
  local_a8 = (code *)&JPH::ConvexShapeSettings::vtable;
  local_58 = (long *)0x0;
  local_50 = *(float *)(in_RSI + 0x70);
  JoltCustomRayShapeSettings::Create();
  if (local_b8 == '\x02') {
    JoltShape3D::_owners_to_string();
    String::utf8((char *)&local_100,(int)local_d8);
    fVar2 = *(float *)(in_RSI + 0x70);
    local_f0 = 0;
    local_e8 = "{length=%f slide_on_slope=%s}";
    local_e0 = 0x1d;
    String::parse_latin1((StrRange *)&local_f0);
    vformat<float,bool>((String_conflict *)&local_108,fVar2,SUB81((StrRange *)&local_f0,0));
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
    local_f0 = 0;
    local_e8 = 
    "Failed to build Jolt Physics separation ray shape with %s. It returned the following error: \'%s\'. This shape belongs to %s."
    ;
    local_e0 = 0x7b;
    String::parse_latin1((StrRange *)&local_f0);
    vformat<String,String,String>
              (&local_e8,(StrRange *)&local_f0,(String_conflict *)&local_108,&local_100,&local_f8);
    _err_print_error("_build","modules/jolt_physics/shapes/jolt_separation_ray_shape_3d.cpp",0x29,
                     "Condition \"shape_result.HasError()\" is true. Returning: nullptr",&local_e8,0
                     ,0);
    pcVar4 = local_e8;
    if (local_e8 != (char *)0x0) {
      LOCK();
      plVar1 = (long *)(local_e8 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_e8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
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
    *in_RDI = 0;
LAB_001006bb:
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
      goto LAB_001006bb;
    }
  }
  local_a8 = (code *)&JPH::ConvexShapeSettings::vtable;
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
  local_a8 = JoltShape3D::_owners_to_string;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar1 = local_68 + 1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)*plVar1 == 0) {
      if (*(code **)(*local_68 + 0x18) == JPH::PhysicsMaterial::~PhysicsMaterial) {
        (*JPH::Free)();
      }
      else {
        (**(code **)(*local_68 + 0x18))();
      }
    }
  }
  local_a8 = String::utf8;
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
LAB_0010073e:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltSeparationRayShape3D::get_type() const */

undefined8 JoltSeparationRayShape3D::get_type(void)

{
  return 1;
}



/* JoltSeparationRayShape3D::is_convex() const */

undefined8 JoltSeparationRayShape3D::is_convex(void)

{
  return 1;
}



/* JoltSeparationRayShape3D::get_margin() const */

undefined8 JoltSeparationRayShape3D::get_margin(void)

{
  return 0;
}



/* JoltSeparationRayShape3D::set_margin(float) */

void JoltSeparationRayShape3D::set_margin(float param_1)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JoltSeparationRayShape3D::~JoltSeparationRayShape3D() */

void __thiscall JoltSeparationRayShape3D::~JoltSeparationRayShape3D(JoltSeparationRayShape3D *this)

{
  *(undefined ***)this = &PTR__build_00101d78;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  return;
}



/* JoltSeparationRayShape3D::~JoltSeparationRayShape3D() */

void __thiscall JoltSeparationRayShape3D::~JoltSeparationRayShape3D(JoltSeparationRayShape3D *this)

{
  *(undefined ***)this = &PTR__build_00101d78;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  operator_delete(this,0x78);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001011a0) */
/* WARNING: Removing unreachable block (ram,0x001012d0) */
/* WARNING: Removing unreachable block (ram,0x00101449) */
/* WARNING: Removing unreachable block (ram,0x001012dc) */
/* WARNING: Removing unreachable block (ram,0x001012e6) */
/* WARNING: Removing unreachable block (ram,0x0010142b) */
/* WARNING: Removing unreachable block (ram,0x001012f2) */
/* WARNING: Removing unreachable block (ram,0x001012fc) */
/* WARNING: Removing unreachable block (ram,0x0010140d) */
/* WARNING: Removing unreachable block (ram,0x00101308) */
/* WARNING: Removing unreachable block (ram,0x00101312) */
/* WARNING: Removing unreachable block (ram,0x001013ef) */
/* WARNING: Removing unreachable block (ram,0x0010131e) */
/* WARNING: Removing unreachable block (ram,0x00101328) */
/* WARNING: Removing unreachable block (ram,0x001013d1) */
/* WARNING: Removing unreachable block (ram,0x00101334) */
/* WARNING: Removing unreachable block (ram,0x0010133e) */
/* WARNING: Removing unreachable block (ram,0x001013b3) */
/* WARNING: Removing unreachable block (ram,0x00101346) */
/* WARNING: Removing unreachable block (ram,0x00101350) */
/* WARNING: Removing unreachable block (ram,0x00101398) */
/* WARNING: Removing unreachable block (ram,0x00101358) */
/* WARNING: Removing unreachable block (ram,0x0010136e) */
/* WARNING: Removing unreachable block (ram,0x0010137a) */
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



/* WARNING: Removing unreachable block (ram,0x001015c8) */
/* WARNING: Removing unreachable block (ram,0x001016f8) */
/* WARNING: Removing unreachable block (ram,0x00101870) */
/* WARNING: Removing unreachable block (ram,0x00101704) */
/* WARNING: Removing unreachable block (ram,0x0010170e) */
/* WARNING: Removing unreachable block (ram,0x00101852) */
/* WARNING: Removing unreachable block (ram,0x0010171a) */
/* WARNING: Removing unreachable block (ram,0x00101724) */
/* WARNING: Removing unreachable block (ram,0x00101834) */
/* WARNING: Removing unreachable block (ram,0x00101730) */
/* WARNING: Removing unreachable block (ram,0x0010173a) */
/* WARNING: Removing unreachable block (ram,0x00101816) */
/* WARNING: Removing unreachable block (ram,0x00101746) */
/* WARNING: Removing unreachable block (ram,0x00101750) */
/* WARNING: Removing unreachable block (ram,0x001017f8) */
/* WARNING: Removing unreachable block (ram,0x0010175c) */
/* WARNING: Removing unreachable block (ram,0x00101766) */
/* WARNING: Removing unreachable block (ram,0x001017da) */
/* WARNING: Removing unreachable block (ram,0x0010176e) */
/* WARNING: Removing unreachable block (ram,0x00101778) */
/* WARNING: Removing unreachable block (ram,0x001017bf) */
/* WARNING: Removing unreachable block (ram,0x00101780) */
/* WARNING: Removing unreachable block (ram,0x00101795) */
/* WARNING: Removing unreachable block (ram,0x001017a1) */
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



/* WARNING: Removing unreachable block (ram,0x001019f0) */
/* WARNING: Removing unreachable block (ram,0x00101b20) */
/* WARNING: Removing unreachable block (ram,0x00101c99) */
/* WARNING: Removing unreachable block (ram,0x00101b2c) */
/* WARNING: Removing unreachable block (ram,0x00101b36) */
/* WARNING: Removing unreachable block (ram,0x00101c7b) */
/* WARNING: Removing unreachable block (ram,0x00101b42) */
/* WARNING: Removing unreachable block (ram,0x00101b4c) */
/* WARNING: Removing unreachable block (ram,0x00101c5d) */
/* WARNING: Removing unreachable block (ram,0x00101b58) */
/* WARNING: Removing unreachable block (ram,0x00101b62) */
/* WARNING: Removing unreachable block (ram,0x00101c3f) */
/* WARNING: Removing unreachable block (ram,0x00101b6e) */
/* WARNING: Removing unreachable block (ram,0x00101b78) */
/* WARNING: Removing unreachable block (ram,0x00101c21) */
/* WARNING: Removing unreachable block (ram,0x00101b84) */
/* WARNING: Removing unreachable block (ram,0x00101b8e) */
/* WARNING: Removing unreachable block (ram,0x00101c03) */
/* WARNING: Removing unreachable block (ram,0x00101b96) */
/* WARNING: Removing unreachable block (ram,0x00101ba0) */
/* WARNING: Removing unreachable block (ram,0x00101be8) */
/* WARNING: Removing unreachable block (ram,0x00101ba8) */
/* WARNING: Removing unreachable block (ram,0x00101bbe) */
/* WARNING: Removing unreachable block (ram,0x00101bca) */
/* String vformat<float, bool>(String const&, float const, bool const) */

String_conflict * vformat<float,bool>(String_conflict *param_1,float param_2,bool param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  bool in_DL;
  undefined7 in_register_00000031;
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
  Variant::Variant(local_88,param_2);
  Variant::Variant(local_70,in_DL);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,(bool *)CONCAT71(in_register_00000031,param_3));
  *(undefined8 *)param_1 = local_d0[0];
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



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
  return;
}



/* JoltSeparationRayShape3D::_build() const */

void JoltSeparationRayShape3D::_GLOBAL__sub_I__build(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC23;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltSeparationRayShape3D::~JoltSeparationRayShape3D() */

void __thiscall JoltSeparationRayShape3D::~JoltSeparationRayShape3D(JoltSeparationRayShape3D *this)

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


