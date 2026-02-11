
/* JoltCapsuleShape3D::get_aabb() const */

void JoltCapsuleShape3D::get_aabb(void)

{
  float fVar1;
  long in_RSI;
  uint *in_RDI;
  uint uVar2;
  float fVar3;
  uint uVar4;
  
  fVar1 = *(float *)(in_RSI + 0x74);
  fVar3 = _LC1 * *(float *)(in_RSI + 0x70);
  uVar2 = (uint)fVar1 ^ _LC2;
  uVar4 = _LC2 ^ (uint)fVar3;
  in_RDI[5] = (uint)(fVar1 + fVar1);
  *in_RDI = uVar2;
  in_RDI[1] = uVar4;
  in_RDI[2] = uVar2;
  in_RDI[3] = (uint)(fVar1 + fVar1);
  in_RDI[4] = (uint)(fVar3 + fVar3);
  return;
}



/* JoltCapsuleShape3D::set_data(Variant const&) */

void __thiscall JoltCapsuleShape3D::set_data(JoltCapsuleShape3D *this,Variant *param_1)

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
      _err_print_error("set_data","modules/jolt_physics/shapes/jolt_capsule_shape_3d.cpp",0x3c,
                       "Condition \"p_data.get_type() != Variant::DICTIONARY\" is true.",0,0);
      return;
    }
    goto LAB_00100332;
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
      goto LAB_001002e5;
      *(ulong *)(this + 0x70) = CONCAT44(fVar3,fVar2);
      JoltShape3D::destroy();
      cVar1 = Variant::needs_deinit[local_98[0]];
    }
    else {
      _err_print_error("set_data","modules/jolt_physics/shapes/jolt_capsule_shape_3d.cpp",0x44,
                       "Condition \"maybe_radius.get_type() != Variant::FLOAT\" is true.",0,0);
LAB_001002e5:
      cVar1 = Variant::needs_deinit[local_98[0]];
    }
    if (cVar1 != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    _err_print_error("set_data","modules/jolt_physics/shapes/jolt_capsule_shape_3d.cpp",0x41,
                     "Condition \"maybe_height.get_type() != Variant::FLOAT\" is true.",0,0);
  }
  if (Variant::needs_deinit[local_b8[0]] != '\0') {
    Variant::_clear_internal();
  }
  Dictionary::~Dictionary((Dictionary *)local_c0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100332:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCapsuleShape3D::get_data() const */

Variant * JoltCapsuleShape3D::get_data(void)

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



/* JoltCapsuleShape3D::to_string() const */

void JoltCapsuleShape3D::to_string(void)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  long in_RSI;
  String_conflict *in_RDI;
  long in_FS_OFFSET;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  fVar2 = *(float *)(in_RSI + 0x74);
  fVar3 = *(float *)(in_RSI + 0x70);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = 0;
  local_38 = "{height=%f radius=%f}";
  local_30 = 0x15;
  String::parse_latin1((StrRange *)&local_40);
  vformat<float,float>(in_RDI,fVar3,fVar2);
  lVar4 = local_40;
  if (local_40 != 0) {
    LOCK();
    plVar1 = (long *)(local_40 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_40 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCapsuleShape3D::_build() const */

void JoltCapsuleShape3D::_build(void)

{
  long *plVar1;
  float fVar2;
  float fVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
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
  float local_48;
  long local_40;
  
  fVar2 = *(float *)(in_RSI + 0x74);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (fVar2 <= 0.0) {
    JoltShape3D::_owners_to_string();
    to_string();
    local_d8 = 
    "Failed to build Jolt Physics capsule shape with %s. Its radius must be greater than 0. This shape belongs to %s."
    ;
    local_e0 = 0;
    local_d0 = 0x70;
    String::parse_latin1((StrRange *)&local_e0);
    vformat<String,String>(&local_d8,(StrRange *)&local_e0,&local_f0,&local_e8);
    pcVar5 = "Condition \"radius <= 0.0f\" is true. Returning: nullptr";
    uVar6 = 0x26;
  }
  else {
    fVar3 = *(float *)(in_RSI + 0x70);
    if (fVar3 <= 0.0) {
      JoltShape3D::_owners_to_string();
      to_string();
      local_d8 = 
      "Failed to build Jolt Physics capsule shape with %s. Its height must be greater than 0. This shape belongs to %s."
      ;
      local_e0 = 0;
      local_d0 = 0x70;
      String::parse_latin1((StrRange *)&local_e0);
      vformat<String,String>(&local_d8,(StrRange *)&local_e0,&local_f0,&local_e8);
      pcVar5 = "Condition \"height <= 0.0f\" is true. Returning: nullptr";
      uVar6 = 0x27;
    }
    else {
      if (fVar2 + fVar2 <= fVar3) {
        local_90 = 0;
        local_88 = 0;
        local_60 = '\0';
        local_58 = (long *)0x0;
        local_50 = 0x447a0000;
        local_48 = fVar3 * _LC1 - fVar2;
        local_98 = (code *)&JPH::ConvexShapeSettings::vtable;
        local_4c = fVar2;
        JPH::CapsuleShapeSettings::Create();
        if (local_a8 == '\x02') {
          JoltShape3D::_owners_to_string();
          String::utf8((char *)&local_f0,(int)local_c8);
          to_string();
          local_d8 = 
          "Failed to build Jolt Physics capsule shape with %s. It returned the following error: \'%s\'. This shape belongs to %s."
          ;
          local_e0 = 0;
          local_d0 = 0x74;
          String::parse_latin1((StrRange *)&local_e0);
          vformat<String,String,String>
                    (&local_d8,(StrRange *)&local_e0,&local_f8,&local_f0,&local_e8);
          _err_print_error("_build","modules/jolt_physics/shapes/jolt_capsule_shape_3d.cpp",0x2f,
                           "Condition \"shape_result.HasError()\" is true. Returning: nullptr",
                           &local_d8,0,0);
          pcVar5 = local_d8;
          if (local_d8 != (char *)0x0) {
            LOCK();
            plVar1 = (long *)(local_d8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_d8 = (char *)0x0;
              Memory::free_static(pcVar5 + -0x10,false);
            }
          }
          lVar4 = local_e0;
          if (local_e0 != 0) {
            LOCK();
            plVar1 = (long *)(local_e0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e0 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar4 = local_f8;
          if (local_f8 != 0) {
            LOCK();
            plVar1 = (long *)(local_f8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_f8 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar4 = local_f0;
          if (local_f0 != 0) {
            LOCK();
            plVar1 = (long *)(local_f0 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_f0 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar4 = local_e8;
          if (local_e8 != 0) {
            LOCK();
            plVar1 = (long *)(local_e8 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_e8 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          *in_RDI = 0;
LAB_00100705:
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
            goto LAB_00100705;
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
        goto LAB_00100788;
      }
      JoltShape3D::_owners_to_string();
      to_string();
      local_d8 = 
      "Failed to build Jolt Physics capsule shape with %s. Its height must be at least double that of its radius. This shape belongs to %s."
      ;
      local_e0 = 0;
      local_d0 = 0x84;
      String::parse_latin1((StrRange *)&local_e0);
      vformat<String,String>(&local_d8,(StrRange *)&local_e0,&local_f0,&local_e8);
      pcVar5 = "Condition \"height < radius * 2.0f\" is true. Returning: nullptr";
      uVar6 = 0x28;
    }
  }
  _err_print_error("_build","modules/jolt_physics/shapes/jolt_capsule_shape_3d.cpp",uVar6,pcVar5,
                   &local_d8,0,0);
  pcVar5 = local_d8;
  if (local_d8 != (char *)0x0) {
    LOCK();
    plVar1 = (long *)(local_d8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_d8 = (char *)0x0;
      Memory::free_static(pcVar5 + -0x10,false);
    }
  }
  lVar4 = local_e0;
  if (local_e0 != 0) {
    LOCK();
    plVar1 = (long *)(local_e0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_f0;
  if (local_f0 != 0) {
    LOCK();
    plVar1 = (long *)(local_f0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_f0 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_e8;
  if (local_e8 != 0) {
    LOCK();
    plVar1 = (long *)(local_e8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  *in_RDI = 0;
LAB_00100788:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* JoltCapsuleShape3D::get_type() const */

undefined8 JoltCapsuleShape3D::get_type(void)

{
  return 4;
}



/* JoltCapsuleShape3D::is_convex() const */

undefined8 JoltCapsuleShape3D::is_convex(void)

{
  return 1;
}



/* JoltCapsuleShape3D::get_margin() const */

undefined8 JoltCapsuleShape3D::get_margin(void)

{
  return 0;
}



/* JoltCapsuleShape3D::set_margin(float) */

void JoltCapsuleShape3D::set_margin(float param_1)

{
  return;
}



/* JPH::PhysicsMaterial::~PhysicsMaterial() */

void __thiscall JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this)

{
                    /* WARNING: Could not recover jumptable at 0x00100c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*Free)();
  return;
}



/* JoltCapsuleShape3D::~JoltCapsuleShape3D() */

void __thiscall JoltCapsuleShape3D::~JoltCapsuleShape3D(JoltCapsuleShape3D *this)

{
  *(undefined ***)this = &PTR__build_00101e80;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  return;
}



/* JoltCapsuleShape3D::~JoltCapsuleShape3D() */

void __thiscall JoltCapsuleShape3D::~JoltCapsuleShape3D(JoltCapsuleShape3D *this)

{
  *(undefined ***)this = &PTR__build_00101e80;
  JoltShape3D::~JoltShape3D((JoltShape3D *)this);
  operator_delete(this,0x78);
  return;
}



/* WARNING: Removing unreachable block (ram,0x001012b0) */
/* WARNING: Removing unreachable block (ram,0x001013e0) */
/* WARNING: Removing unreachable block (ram,0x00101559) */
/* WARNING: Removing unreachable block (ram,0x001013ec) */
/* WARNING: Removing unreachable block (ram,0x001013f6) */
/* WARNING: Removing unreachable block (ram,0x0010153b) */
/* WARNING: Removing unreachable block (ram,0x00101402) */
/* WARNING: Removing unreachable block (ram,0x0010140c) */
/* WARNING: Removing unreachable block (ram,0x0010151d) */
/* WARNING: Removing unreachable block (ram,0x00101418) */
/* WARNING: Removing unreachable block (ram,0x00101422) */
/* WARNING: Removing unreachable block (ram,0x001014ff) */
/* WARNING: Removing unreachable block (ram,0x0010142e) */
/* WARNING: Removing unreachable block (ram,0x00101438) */
/* WARNING: Removing unreachable block (ram,0x001014e1) */
/* WARNING: Removing unreachable block (ram,0x00101444) */
/* WARNING: Removing unreachable block (ram,0x0010144e) */
/* WARNING: Removing unreachable block (ram,0x001014c3) */
/* WARNING: Removing unreachable block (ram,0x00101456) */
/* WARNING: Removing unreachable block (ram,0x00101460) */
/* WARNING: Removing unreachable block (ram,0x001014a8) */
/* WARNING: Removing unreachable block (ram,0x00101468) */
/* WARNING: Removing unreachable block (ram,0x0010147e) */
/* WARNING: Removing unreachable block (ram,0x0010148a) */
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



/* WARNING: Removing unreachable block (ram,0x001016d8) */
/* WARNING: Removing unreachable block (ram,0x00101808) */
/* WARNING: Removing unreachable block (ram,0x00101980) */
/* WARNING: Removing unreachable block (ram,0x00101814) */
/* WARNING: Removing unreachable block (ram,0x0010181e) */
/* WARNING: Removing unreachable block (ram,0x00101962) */
/* WARNING: Removing unreachable block (ram,0x0010182a) */
/* WARNING: Removing unreachable block (ram,0x00101834) */
/* WARNING: Removing unreachable block (ram,0x00101944) */
/* WARNING: Removing unreachable block (ram,0x00101840) */
/* WARNING: Removing unreachable block (ram,0x0010184a) */
/* WARNING: Removing unreachable block (ram,0x00101926) */
/* WARNING: Removing unreachable block (ram,0x00101856) */
/* WARNING: Removing unreachable block (ram,0x00101860) */
/* WARNING: Removing unreachable block (ram,0x00101908) */
/* WARNING: Removing unreachable block (ram,0x0010186c) */
/* WARNING: Removing unreachable block (ram,0x00101876) */
/* WARNING: Removing unreachable block (ram,0x001018ea) */
/* WARNING: Removing unreachable block (ram,0x0010187e) */
/* WARNING: Removing unreachable block (ram,0x00101888) */
/* WARNING: Removing unreachable block (ram,0x001018cf) */
/* WARNING: Removing unreachable block (ram,0x00101890) */
/* WARNING: Removing unreachable block (ram,0x001018a5) */
/* WARNING: Removing unreachable block (ram,0x001018b1) */
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



/* WARNING: Removing unreachable block (ram,0x00101b00) */
/* WARNING: Removing unreachable block (ram,0x00101c30) */
/* WARNING: Removing unreachable block (ram,0x00101da9) */
/* WARNING: Removing unreachable block (ram,0x00101c3c) */
/* WARNING: Removing unreachable block (ram,0x00101c46) */
/* WARNING: Removing unreachable block (ram,0x00101d8b) */
/* WARNING: Removing unreachable block (ram,0x00101c52) */
/* WARNING: Removing unreachable block (ram,0x00101c5c) */
/* WARNING: Removing unreachable block (ram,0x00101d6d) */
/* WARNING: Removing unreachable block (ram,0x00101c68) */
/* WARNING: Removing unreachable block (ram,0x00101c72) */
/* WARNING: Removing unreachable block (ram,0x00101d4f) */
/* WARNING: Removing unreachable block (ram,0x00101c7e) */
/* WARNING: Removing unreachable block (ram,0x00101c88) */
/* WARNING: Removing unreachable block (ram,0x00101d31) */
/* WARNING: Removing unreachable block (ram,0x00101c94) */
/* WARNING: Removing unreachable block (ram,0x00101c9e) */
/* WARNING: Removing unreachable block (ram,0x00101d13) */
/* WARNING: Removing unreachable block (ram,0x00101ca6) */
/* WARNING: Removing unreachable block (ram,0x00101cb0) */
/* WARNING: Removing unreachable block (ram,0x00101cf8) */
/* WARNING: Removing unreachable block (ram,0x00101cb8) */
/* WARNING: Removing unreachable block (ram,0x00101cce) */
/* WARNING: Removing unreachable block (ram,0x00101cda) */
/* String vformat<float, float>(String const&, float const, float const) */

String_conflict * vformat<float,float>(String_conflict *param_1,float param_2,float param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  bool *in_RSI;
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
  Variant::Variant(local_70,param_3);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d8);
  iVar3 = (int)local_d8;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_d0,in_RSI);
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



/* JoltCapsuleShape3D::_build() const */

void JoltCapsuleShape3D::_GLOBAL__sub_I__build(void)

{
  if (JPH::DVec3::cTrue == '\0') {
    JPH::DVec3::cTrue = '\x01';
    JPH::DVec3::cTrue = _LC27;
  }
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* JoltCapsuleShape3D::~JoltCapsuleShape3D() */

void __thiscall JoltCapsuleShape3D::~JoltCapsuleShape3D(JoltCapsuleShape3D *this)

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


