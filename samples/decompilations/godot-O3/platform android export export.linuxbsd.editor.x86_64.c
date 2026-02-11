
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



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* register_android_exporter() */

void register_android_exporter(void)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  Ref *pRVar5;
  char cVar6;
  PropertyInfo *pPVar7;
  long *plVar8;
  EditorExportPlatformAndroid *this;
  Object *pOVar9;
  bool bVar10;
  long in_FS_OFFSET;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  Object *local_a8;
  long local_a0;
  long local_98;
  int local_90;
  long local_88;
  undefined4 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPaths::get_debug_keystore_path();
  Variant::Variant((Variant *)local_78,(String *)&local_b8);
  local_a8 = (Object *)0x101c4d;
  local_b0 = 0;
  local_a0 = 0x1d;
  String::parse_latin1((StrRange *)&local_b0);
  bVar10 = SUB81((Variant *)local_78,0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b0,bVar10,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 == 0) {
LAB_00100159:
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_00100159;
    local_b0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar6 != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar8 = (long *)(local_b8 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  pPVar7 = (PropertyInfo *)EditorSettings::get_singleton();
  local_b8 = 0;
  local_a8 = (Object *)0x101c6b;
  local_c0 = 0;
  local_a0 = 0x10;
  String::parse_latin1((StrRange *)&local_c0);
  local_a8 = (Object *)0x101c4d;
  local_c8 = 0;
  local_a0 = 0x1d;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (Object *)CONCAT44(local_a8._4_4_,4);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0xf;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_001002ab:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_001002ab;
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
  EditorSettings::add_property_hint(pPVar7);
  lVar3 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar8 = (long *)(local_88 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar8 = (long *)(local_a0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar8 = (long *)(local_c8 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar8 = (long *)(local_c0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  Variant::Variant((Variant *)local_78,(String *)&DEFAULT_ANDROID_KEYSTORE_DEBUG_USER);
  local_a8 = (Object *)0x101d00;
  local_b0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b0,bVar10,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 == 0) {
LAB_001003d0:
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_001003d0;
    local_b0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar6 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(String *)&DEFAULT_ANDROID_KEYSTORE_DEBUG_PASSWORD);
  local_a8 = (Object *)0x101d28;
  local_b0 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b0,bVar10,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 == 0) {
LAB_0010045c:
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_0010045c;
    local_b0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar6 != '\0') {
    Variant::_clear_internal();
  }
  pPVar7 = (PropertyInfo *)EditorSettings::get_singleton();
  local_b8 = 0;
  local_a8 = (Object *)&_LC0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_a8 = (Object *)0x101d28;
  local_c8 = 0;
  local_a0 = 0x22;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (Object *)CONCAT44(local_a8._4_4_,4);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0x24;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_0010058b:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_0010058b;
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
  EditorSettings::add_property_hint(pPVar7);
  lVar3 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar8 = (long *)(local_88 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar8 = (long *)(local_a0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar8 = (long *)(local_c8 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar8 = (long *)(local_c0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  plVar8 = (long *)OS::get_singleton();
  pcVar2 = *(code **)(*plVar8 + 0x170);
  local_c0 = 0;
  local_a0 = 9;
  local_a8 = (Object *)0x101c7c;
  String::parse_latin1((StrRange *)&local_c0);
  (*pcVar2)((String *)&local_b8,plVar8,(StrRange *)&local_c0);
  Variant::Variant((Variant *)local_78,(String *)&local_b8);
  local_a8 = (Object *)0x101c86;
  local_b0 = 0;
  local_a0 = 0x1c;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b0,bVar10,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 == 0) {
LAB_00100703:
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_00100703;
    local_b0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar6 != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b8;
  if (local_b8 != 0) {
    LOCK();
    plVar8 = (long *)(local_b8 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar8 = (long *)(local_c0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  pPVar7 = (PropertyInfo *)EditorSettings::get_singleton();
  local_b8 = 0;
  local_a8 = (Object *)&_LC0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_a8 = (Object *)0x101c86;
  local_c8 = 0;
  local_a0 = 0x1c;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (Object *)CONCAT44(local_a8._4_4_,4);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0x10;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_0010085b:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_0010085b;
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
  EditorSettings::add_property_hint(pPVar7);
  lVar3 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar8 = (long *)(local_88 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar8 = (long *)(local_a0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar8 = (long *)(local_c8 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar8 = (long *)(local_c0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  plVar8 = (long *)OS::get_singleton();
  local_d0 = 0;
  pcVar2 = *(code **)(*plVar8 + 0x168);
  local_a8 = (Object *)0x101ca3;
  local_a0 = 0xc;
  String::parse_latin1((StrRange *)&local_d0);
  cVar6 = (*pcVar2)(plVar8,(StrRange *)&local_d0);
  if (cVar6 == '\0') {
    plVar8 = (long *)OS::get_singleton();
    pcVar2 = *(code **)(*plVar8 + 0x170);
    local_b8 = 0;
    local_a0 = 4;
    local_a8 = (Object *)&_LC8;
    String::parse_latin1((StrRange *)&local_b8);
    (*pcVar2)((StrRange *)&local_b0,plVar8,(String *)&local_b8);
    local_a8 = (Object *)0x101cb5;
    local_c0 = 0;
    local_a0 = 0xb;
    String::parse_latin1((StrRange *)&local_c0);
    String::path_join((String *)&local_c8);
    lVar4 = local_c0;
    lVar3 = local_b0;
    if (local_c0 != 0) {
      LOCK();
      plVar8 = (long *)(local_c0 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_c0 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
        lVar3 = local_b0;
      }
    }
    lVar4 = local_b8;
    local_b0 = lVar3;
    if (lVar3 != 0) {
      LOCK();
      plVar8 = (long *)(lVar3 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_b0 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
        lVar4 = local_b8;
      }
    }
    local_b8 = lVar4;
    if (lVar4 != 0) {
      LOCK();
      plVar8 = (long *)(lVar4 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_b8 = 0;
        Memory::free_static((void *)(lVar4 + -0x10),false);
      }
    }
  }
  else {
    plVar8 = (long *)OS::get_singleton();
    pcVar2 = *(code **)(*plVar8 + 0x170);
    local_a8 = (Object *)0x101ca3;
    local_b8 = 0;
    local_a0 = 0xc;
    String::parse_latin1((StrRange *)&local_b8);
    (*pcVar2)((StrRange *)&local_c8,plVar8,(String *)&local_b8);
  }
  Variant::Variant((Variant *)local_78,(String *)&local_c8);
  local_a8 = (Object *)0x101d50;
  local_b0 = 0;
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b0,bVar10,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 == 0) {
LAB_00100a3b:
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_00100a3b;
    local_b0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar1 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  lVar4 = local_c8;
  lVar3 = local_b8;
  if (local_c8 != 0) {
    LOCK();
    plVar8 = (long *)(local_c8 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      lVar3 = local_b8;
    }
  }
  local_b8 = lVar3;
  if ((cVar6 != '\0') && (lVar3 != 0)) {
    LOCK();
    plVar8 = (long *)(lVar3 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_b8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_d0;
  if (local_d0 != 0) {
    LOCK();
    plVar8 = (long *)(local_d0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_d0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  pPVar7 = (PropertyInfo *)EditorSettings::get_singleton();
  local_b8 = 0;
  local_a8 = (Object *)&_LC0;
  local_c0 = 0;
  local_a0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_a8 = (Object *)0x101d50;
  local_c8 = 0;
  local_a0 = 0x1f;
  String::parse_latin1((StrRange *)&local_c8);
  local_a8 = (Object *)CONCAT44(local_a8._4_4_,4);
  local_a0 = 0;
  if (local_c8 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
  }
  local_98 = 0;
  local_90 = 0x10;
  local_88 = 0;
  if (local_c0 == 0) {
LAB_00100ba3:
    local_80 = 6;
    StringName::operator=((StringName *)&local_98,(StringName *)&local_b8);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)&local_c0);
    local_80 = 6;
    if (local_90 != 0x11) goto LAB_00100ba3;
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
  EditorSettings::add_property_hint(pPVar7);
  lVar3 = local_88;
  if (local_88 != 0) {
    LOCK();
    plVar8 = (long *)(local_88 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_88 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
  lVar3 = local_a0;
  if (local_a0 != 0) {
    LOCK();
    plVar8 = (long *)(local_a0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_a0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c8;
  if (local_c8 != 0) {
    LOCK();
    plVar8 = (long *)(local_c8 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_c8 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_c0;
  if (local_c0 != 0) {
    LOCK();
    plVar8 = (long *)(local_c0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_c0 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  Variant::Variant((Variant *)local_78,false);
  local_a8 = (Object *)0x101d70;
  local_b0 = 0;
  local_a0 = 0x20;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b0,bVar10,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 == 0) {
LAB_00100cc0:
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_00100cc0;
    local_b0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar6 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,true);
  local_a8 = (Object *)0x101d98;
  local_b0 = 0;
  local_a0 = 0x23;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b0,bVar10,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 == 0) {
LAB_00100d47:
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_00100d47;
    local_b0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar6 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  local_a8 = (Object *)0x101dc0;
  local_b0 = 0;
  local_a0 = 0x36;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b0,bVar10,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 == 0) {
LAB_00100dcb:
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_00100dcb;
    local_b0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar6 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,false);
  local_a8 = (Object *)0x101df8;
  local_b0 = 0;
  local_a0 = 0x28;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b0,bVar10,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 == 0) {
LAB_00100e4f:
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_00100e4f;
    local_b0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar6 != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,"localhost");
  local_a8 = (Object *)0x101e28;
  local_b0 = 0;
  local_a0 = 0x25;
  String::parse_latin1((StrRange *)&local_b0);
  _EDITOR_DEF((String *)local_58,(Variant *)&local_b0,bVar10,false);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_b0;
  if (local_b0 == 0) {
LAB_00100ed8:
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar8 = (long *)(local_b0 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_00100ed8;
    local_b0 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar6 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar6 != '\0') {
    Variant::_clear_internal();
  }
  this = (EditorExportPlatformAndroid *)operator_new(0x250,"");
  EditorExportPlatformAndroid::EditorExportPlatformAndroid(this);
  postinitialize_handler((Object *)this);
  cVar6 = RefCounted::init_ref();
  pRVar5 = EditorExport::singleton;
  if (cVar6 == '\0') {
    local_a8 = (Object *)0x0;
    EditorExport::add_export_platform(EditorExport::singleton);
    if ((local_a8 != (Object *)0x0) &&
       (cVar6 = RefCounted::unreference(), pOVar9 = local_a8, cVar6 != '\0')) {
      this = (EditorExportPlatformAndroid *)0x0;
      cVar6 = predelete_handler(local_a8);
      if (cVar6 != '\0') goto LAB_00101757;
    }
  }
  else {
    local_a8 = (Object *)0x0;
    pOVar9 = (Object *)__dynamic_cast(this,&Object::typeinfo,&EditorExportPlatform::typeinfo,0);
    if ((pOVar9 != (Object *)0x0) &&
       (local_a8 = pOVar9, cVar6 = RefCounted::reference(), cVar6 == '\0')) {
      local_a8 = (Object *)0x0;
    }
    EditorExport::add_export_platform(pRVar5);
    if (((local_a8 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar9 = local_a8, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_a8), cVar6 != '\0')) {
LAB_00101757:
      (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
      Memory::free_static(pOVar9,false);
      if (this == (EditorExportPlatformAndroid *)0x0) goto LAB_00100f4b;
    }
    cVar6 = RefCounted::unreference();
    if ((cVar6 != '\0') && (cVar6 = predelete_handler((Object *)this), cVar6 != '\0')) {
      (**(code **)(*(long *)this + 0x140))(this);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(this,false);
        return;
      }
      goto LAB_001018dd;
    }
  }
LAB_00100f4b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001018dd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* register_android_exporter_types() */

void register_android_exporter_types(void)

{
  ClassDB::register_class<EditorExportPlatformAndroid>(true);
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



/* Object* ClassDB::creator<EditorExportPlatformAndroid>(bool) */

Object * ClassDB::creator<EditorExportPlatformAndroid>(bool param_1)

{
  EditorExportPlatformAndroid *this;
  
  this = (EditorExportPlatformAndroid *)operator_new(0x250,"");
  EditorExportPlatformAndroid::EditorExportPlatformAndroid(this);
  Object::_initialize();
  if (!param_1) {
    return (Object *)this;
  }
  Object::_postinitialize();
  return (Object *)this;
}



/* String::~String() */

void __thiscall String::~String(String *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(this + 0x18);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            if (*(long *)((long)pvVar5 + 0x38) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x38) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x38);
                *(undefined8 *)((long)pvVar5 + 0x38) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            if (*(long *)((long)pvVar5 + 0x20) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x20) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x20);
                *(undefined8 *)((long)pvVar5 + 0x20) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            if (*(long *)((long)pvVar5 + 0x10) != 0) {
              LOCK();
              plVar1 = (long *)(*(long *)((long)pvVar5 + 0x10) + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 == 0) {
                lVar3 = *(long *)((long)pvVar5 + 0x10);
                *(undefined8 *)((long)pvVar5 + 0x10) = 0;
                Memory::free_static((void *)(lVar3 + -0x10),false);
              }
            }
            Memory::free_static(pvVar5,false);
            pvVar5 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_00101b64;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00101b64:
  if (*(long *)this != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)this + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar4 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
      return;
    }
  }
  return;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* void ClassDB::register_class<EditorExportPlatformAndroid>(bool) */

void ClassDB::register_class<EditorExportPlatformAndroid>(bool param_1)

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
  if (EditorExportPlatformAndroid::initialize_class()::initialized == '\0') {
    if (EditorExportPlatform::initialize_class()::initialized == '\0') {
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
        if ((code *)PTR__bind_methods_00104008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorExportPlatform";
      local_70 = 0;
      local_50 = 0x14;
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
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        EditorExportPlatform::_bind_methods();
      }
      EditorExportPlatform::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorExportPlatform";
    local_68 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_70 = 0;
    local_58 = "EditorExportPlatformAndroid";
    local_50 = 0x1b;
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
    EditorExportPlatformAndroid::initialize_class()::initialized = '\x01';
  }
  local_58 = "EditorExportPlatformAndroid";
  local_60 = 0;
  local_50 = 0x1b;
  String::parse_latin1((StrRange *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
  if ((CONCAT44(current_api._4_4_,(undefined4)current_api) != 0) && (_DAT_0010314c != 0)) {
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)__err_print_error * 4);
    uVar19 = CONCAT44(0,uVar2);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)__err_print_error * 8);
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
            goto LAB_001023cf;
          }
          if (local_58 != (char *)0x0) {
            StringName::unref();
          }
          if (local_60 == 0) goto LAB_001023cf;
          goto LAB_001023a5;
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
LAB_001023a5:
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
LAB_001023cf:
        *(undefined1 *)((long)puVar16 + 0x289) = 1;
        *(code **)(puVar16 + 0xa4) = creator<EditorExportPlatformAndroid>;
        *(bool *)((long)puVar16 + 0x28b) = param_1;
        *(undefined4 **)(puVar16 + 4) = &EditorExportPlatformAndroid::get_class_ptr_static()::ptr;
        *puVar16 = (undefined4)current_api;
        if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_001025f7;
        goto LAB_00102417;
      }
    }
  }
  _err_print_error("register_class","./core/object/class_db.h",0xd6,"Parameter \"t\" is null.",0,0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_001025f7:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00102417:
  _global_unlock();
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* String::~String() */

void __thiscall String::~String(String *this)

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


