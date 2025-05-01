
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* create_lightmapper_rd() */

LightmapperRD * create_lightmapper_rd(void)

{
  LightmapperRD *this;
  
  this = (LightmapperRD *)operator_new(0x1f0,"");
  LightmapperRD::LightmapperRD(this);
  postinitialize_handler((Object *)this);
  return this;
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



/* uninitialize_lightmapper_rd_module(ModuleInitializationLevel) */

void uninitialize_lightmapper_rd_module(void)

{
  return;
}



/* initialize_lightmapper_rd_module(ModuleInitializationLevel) */

void initialize_lightmapper_rd_module(int param_1)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  long in_FS_OFFSET;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  char *local_a8;
  long local_a0;
  long local_98;
  int local_90;
  long local_88;
  undefined4 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != 2) goto LAB_001000ed;
  Variant::Variant((Variant *)local_78,0x20);
  local_a8 = "1,4096,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_quality/low_quality_ray_count";
  local_a0 = 0x39;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00100248:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00100248;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  bVar3 = SUB81((Variant *)local_78,0);
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x80);
  local_a8 = "1,4096,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_quality/medium_quality_ray_count";
  local_a0 = 0x3c;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00100458:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00100458;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x200);
  local_a8 = "1,4096,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_quality/high_quality_ray_count";
  local_a0 = 0x3a;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00100658:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00100658;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x800);
  local_a8 = "1,4096,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_quality/ultra_quality_ray_count";
  local_a0 = 0x3b;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00100858:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00100858;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,4);
  local_a8 = "1,256,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_performance/max_rays_per_pass";
  local_a0 = 0x39;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00100a58:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00100a58;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x200);
  local_a8 = "1,4096,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_performance/region_size";
  local_a0 = 0x33;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00100c58:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00100c58;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,8);
  local_a8 = "1,256,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_performance/max_transparency_rays";
  local_a0 = 0x3d;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00100e58:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00100e58;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x40);
  local_a8 = "1,4096,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_quality/low_quality_probe_ray_count";
  local_a0 = 0x3f;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00101058:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00101058;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x100);
  local_a8 = "1,4096,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_quality/medium_quality_probe_ray_count";
  local_a0 = 0x42;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00101258:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00101258;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x200);
  local_a8 = "1,4096,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_quality/high_quality_probe_ray_count";
  local_a0 = 0x40;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00101458:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00101458;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x800);
  local_a8 = "1,4096,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x13;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_quality/ultra_quality_probe_ray_count";
  local_a0 = 0x41;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00101658:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00101658;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0x40);
  local_a8 = "1,256,1,or_greater";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 0x12;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/bake_performance/max_rays_per_probe_pass";
  local_a0 = 0x3f;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 1;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00101858:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00101858;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,0);
  local_a8 = "JNLM,OIDN";
  local_b8 = 0;
  local_c0 = 0;
  local_a0 = 9;
  String::parse_latin1((StrRange *)&local_c0);
  local_c8 = 0;
  local_a8 = "rendering/lightmapping/denoising/denoiser";
  local_a0 = 0x29;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (char *)CONCAT44(local_a8._4_4_,2);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 2;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00101a48:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00101a48;
    StringName::StringName((StringName *)&local_b0,(String *)&local_88,false);
    if (local_98 == local_b0) {
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_98 = local_b0;
    }
  }
  _GLOBAL_DEF((PropertyInfo *)local_58,(Variant *)&local_a8,bVar3,false,false,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar2 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar1 = (long *)(local_88 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar2 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar1 = (long *)(local_a0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar1 = (long *)(local_c8 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar1 = (long *)(local_c0 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  ClassDB::register_class<LightmapperRD>(false);
  Lightmapper::create_gpu = 0x100000;
LAB_001000ed:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Object* ClassDB::creator<LightmapperRD>(bool) */

Object * ClassDB::creator<LightmapperRD>(bool param_1)

{
  LightmapperRD *this;
  
  this = (LightmapperRD *)operator_new(0x1f0,"");
  LightmapperRD::LightmapperRD(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<LightmapperRD>(bool) */

void ClassDB::register_class<LightmapperRD>(bool param_1)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  ulong uVar19;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _global_lock();
  if (LightmapperRD::initialize_class()::initialized == '\0') {
    if (Lightmapper::initialize_class()::initialized == '\0') {
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
        lVar3 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        lVar3 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar3 + -0x10),false);
          }
        }
        if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Lightmapper";
      local_70 = 0;
      local_50 = 0xb;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      lVar3 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar3 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
          Lightmapper::initialize_class()::initialized = '\x01';
          goto LAB_00102783;
        }
      }
      Lightmapper::initialize_class()::initialized = '\x01';
    }
LAB_00102783:
    local_58 = "Lightmapper";
    local_68 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "LightmapperRD";
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    lVar3 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar1 = (long *)(local_70 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar3 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    LightmapperRD::initialize_class()::initialized = '\x01';
  }
  local_58 = "LightmapperRD";
  local_60 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_00104084 != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)__bind_methods * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)__bind_methods * 8);
    if (local_58 == (char *)0x0) {
      uVar13 = StringName::get_empty_hash();
    }
    else {
      uVar13 = *(uint *)(local_58 + 0x20);
    }
    lVar12 = local_60;
    if (uVar13 == 0) {
      uVar13 = 1;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar13 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar19;
    lVar15 = SUB168(auVar4 * auVar8,8);
    uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
    uVar14 = SUB164(auVar4 * auVar8,8);
    if (uVar17 != 0) {
      uVar18 = 0;
      do {
        if ((uVar17 == uVar13) &&
           (*(char **)(*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) + lVar15 * 8) +
                      0x10) == local_58)) {
          puVar16 = (undefined4 *)
                    (*(long *)(CONCAT44(current_api._4_4_,(undefined4)current_api) +
                              (ulong)uVar14 * 8) + 0x18);
          if (StringName::configured == '\0') {
            if (local_60 != 0) {
              LOCK();
              plVar1 = (long *)(local_60 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                local_60 = 0;
                Memory::free_static((void *)(lVar12 + -0x10),false);
              }
            }
            goto LAB_001029f7;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_001029f7;
          goto LAB_001029cd;
        }
        uVar18 = uVar18 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar14 + 1) * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar19;
        lVar15 = SUB168(auVar5 * auVar9,8);
        uVar17 = *(uint *)(__global_unlock + lVar15 * 4);
        uVar14 = SUB164(auVar5 * auVar9,8);
      } while ((uVar17 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar17 * lVar3, auVar10._8_8_ = 0,
              auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar2 + uVar14) - SUB164(auVar6 * auVar10,8)) * lVar3,
              auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, uVar18 <= SUB164(auVar7 * auVar11,8)));
    }
  }
  lVar3 = local_60;
  if (StringName::configured == '\0') {
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
  }
  else {
    if (local_58 != (char *)0x0) {
      StringName::unref();
    }
    puVar16 = (undefined4 *)0x0;
    if (local_60 != 0) {
LAB_001029cd:
      lVar3 = local_60;
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
      if (puVar16 != (undefined4 *)0x0) {
LAB_001029f7:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(code **)(puVar16 + 0xa4) = creator<LightmapperRD>;
        *(bool *)((long)puVar16 + 0x28b) = param_1;
        *(undefined4 **)(puVar16 + 4) = &LightmapperRD::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102c17;
        goto LAB_00102a3f;
      }
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102c17:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00102a3f:
  _global_unlock();
  return;
}


