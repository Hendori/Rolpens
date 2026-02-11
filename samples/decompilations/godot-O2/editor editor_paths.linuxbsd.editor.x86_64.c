
/* EditorPaths::is_self_contained() const */

EditorPaths __thiscall EditorPaths::is_self_contained(EditorPaths *this)

{
  return this[0x1a0];
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



/* EditorPaths::get_cache_dir() const */

void EditorPaths::get_cache_dir(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x188) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x188));
  }
  return;
}



/* EditorPaths::get_data_dir() const */

void EditorPaths::get_data_dir(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x178) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x178));
  }
  return;
}



/* EditorPaths::get_config_dir() const */

void EditorPaths::get_config_dir(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x180) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x180));
  }
  return;
}



/* EditorPaths::get_self_contained_file() const */

void EditorPaths::get_self_contained_file(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x1a8) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x1a8));
  }
  return;
}



/* EditorPaths::get_project_settings_dir() const */

void EditorPaths::get_project_settings_dir(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  bool bVar4;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (*(long *)(in_RSI + 0x198) != 0) {
    plVar1 = (long *)(*(long *)(in_RSI + 0x198) + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001001a9;
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
      local_48 = *(long *)(in_RSI + 0x198);
    }
  }
LAB_001001a9:
  local_40 = 0;
  local_38 = "editor";
  local_30 = 6;
  String::parse_latin1((StrRange *)&local_40);
  String::path_join(in_RDI);
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
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_48 + -0x10),false);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPaths::are_paths_valid() const */

EditorPaths __thiscall EditorPaths::are_paths_valid(EditorPaths *this)

{
  return this[0x171];
}



/* EditorPaths::get_temp_dir() const */

void EditorPaths::get_temp_dir(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 400) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 400));
  }
  return;
}



/* EditorPaths::get_project_data_dir() const */

void EditorPaths::get_project_data_dir(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0x198) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0x198));
  }
  return;
}



/* EditorPaths::get_export_templates_dir() const */

void EditorPaths::get_export_templates_dir(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  bool bVar5;
  long local_18;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)(in_RSI + 0x178) != 0) {
    plVar1 = (long *)(*(long *)(in_RSI + 0x178) + -0x10);
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_00100338;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        *plVar1 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_18 = *(long *)(in_RSI + 0x178);
    }
  }
LAB_00100338:
  String::path_join(in_RDI);
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPaths::get_debug_keystore_path() const */

void EditorPaths::get_debug_keystore_path(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  bool bVar4;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = 0;
  if (*(long *)(in_RSI + 0x178) != 0) {
    plVar1 = (long *)(*(long *)(in_RSI + 0x178) + -0x10);
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_001003f9;
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
      local_48 = *(long *)(in_RSI + 0x178);
    }
  }
LAB_001003f9:
  local_40 = 0;
  local_38 = "keystores/debug.keystore";
  local_30 = 0x18;
  String::parse_latin1((StrRange *)&local_40);
  String::path_join(in_RDI);
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
  if (local_48 != 0) {
    LOCK();
    plVar1 = (long *)(local_48 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_48 + -0x10),false);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPaths::get_text_editor_themes_dir() const */

void EditorPaths::get_text_editor_themes_dir(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  bool bVar5;
  long local_18;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)(in_RSI + 0x180) != 0) {
    plVar1 = (long *)(*(long *)(in_RSI + 0x180) + -0x10);
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_00100518;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        *plVar1 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_18 = *(long *)(in_RSI + 0x180);
    }
  }
LAB_00100518:
  String::path_join(in_RDI);
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPaths::get_script_templates_dir() const */

void EditorPaths::get_script_templates_dir(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  bool bVar5;
  long local_18;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)(in_RSI + 0x180) != 0) {
    plVar1 = (long *)(*(long *)(in_RSI + 0x180) + -0x10);
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_001005d8;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        *plVar1 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_18 = *(long *)(in_RSI + 0x180);
    }
  }
LAB_001005d8:
  String::path_join(in_RDI);
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPaths::get_project_script_templates_dir() const */

EditorPaths * __thiscall EditorPaths::get_project_script_templates_dir(EditorPaths *this)

{
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_50,"editor/script/templates_search_path",false);
  ProjectSettings::get_setting_with_override((StringName *)local_48);
  Variant::operator_cast_to_String((Variant *)this);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPaths::get_feature_profiles_dir() const */

void EditorPaths::get_feature_profiles_dir(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  bool bVar5;
  long local_18;
  
  lVar2 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  if (*(long *)(in_RSI + 0x180) != 0) {
    plVar1 = (long *)(*(long *)(in_RSI + 0x180) + -0x10);
    do {
      lVar3 = *plVar1;
      if (lVar3 == 0) goto LAB_00100758;
      LOCK();
      lVar4 = *plVar1;
      bVar5 = lVar3 == lVar4;
      if (bVar5) {
        *plVar1 = lVar3 + 1;
        lVar4 = lVar3;
      }
      UNLOCK();
    } while (!bVar5);
    if (lVar4 != -1) {
      local_18 = *(long *)(in_RSI + 0x180);
    }
  }
LAB_00100758:
  String::path_join(in_RDI);
  if (local_18 != 0) {
    LOCK();
    plVar1 = (long *)(local_18 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      Memory::free_static((void *)(local_18 + -0x10),false);
    }
  }
  if (lVar2 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorPaths::free() */

void EditorPaths::free(void)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = singleton;
  if (singleton != (Object *)0x0) {
    cVar2 = predelete_handler(singleton);
    if (cVar2 != '\0') {
      (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
      Memory::free_static(pOVar1,false);
    }
    singleton = (Object *)0x0;
    return;
  }
  _err_print_error(&_LC8,"editor/editor_paths.cpp",0x6e,"Parameter \"singleton\" is null.",0,0);
  return;
}



/* EditorPaths::EditorPaths() */

void __thiscall EditorPaths::EditorPaths(EditorPaths *this)

{
  CowData<char32_t> *this_00;
  StrRange *pSVar1;
  StrRange *pSVar2;
  CowData *pCVar3;
  char *pcVar4;
  code *pcVar5;
  char cVar6;
  int iVar7;
  long *plVar8;
  String *pSVar9;
  long lVar10;
  long lVar11;
  Object *pOVar12;
  Object *pOVar13;
  long in_FS_OFFSET;
  bool bVar14;
  char *local_c0;
  Object *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  Object *local_98;
  Object *local_90;
  long local_88;
  Object *local_80;
  String local_78 [8];
  long local_70;
  char *local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Object::Object((Object *)this);
  *(undefined ***)this = &PTR__initialize_classv_00106990;
  this_00 = (CowData<char32_t> *)(this + 0x188);
  this[0x171] = (EditorPaths)0x0;
  *(undefined8 *)(this + 0x198) = 0;
  this[0x1a0] = (EditorPaths)0x0;
  *(undefined1 (*) [16])(this + 0x178) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x1a8) = (undefined1  [16])0x0;
  local_58 = (Object *)0x103e57;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)(this + 0x1b0));
  *(undefined8 *)(this + 0x1b8) = 0;
  local_58 = (Object *)0x103e68;
  local_50 = 0x12;
  String::parse_latin1((StrRange *)(this + 0x1b8));
  pSVar1 = (StrRange *)(this + 0x1c0);
  *(undefined8 *)(this + 0x1c0) = 0;
  local_58 = (Object *)0x103e7b;
  local_50 = 0x10;
  String::parse_latin1(pSVar1);
  pSVar2 = (StrRange *)(this + 0x1c8);
  *(undefined8 *)(this + 0x1c8) = 0;
  local_58 = (Object *)0x103e8c;
  local_50 = 0x10;
  String::parse_latin1(pSVar2);
  if (singleton != (EditorPaths *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("EditorPaths","editor/editor_paths.cpp",0x7e,
                       "Condition \"singleton != nullptr\" is true.",0,0);
      return;
    }
    goto LAB_00103415;
  }
  singleton = this;
  ProjectSettings::get_singleton();
  ProjectSettings::get_project_data_path();
  pOVar13 = local_58;
  pcVar4 = *(char **)(this + 0x198);
  if ((Object *)pcVar4 == local_58) {
    if (pcVar4 != (char *)0x0) {
      LOCK();
      plVar8 = (long *)(pcVar4 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static(pOVar13 + -0x10,false);
      }
    }
  }
  else {
    if (pcVar4 != (char *)0x0) {
      LOCK();
      plVar8 = (long *)(pcVar4 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        lVar11 = *(long *)(this + 0x198);
        *(undefined8 *)(this + 0x198) = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    *(Object **)(this + 0x198) = local_58;
  }
  plVar8 = (long *)OS::get_singleton();
  (**(code **)(*plVar8 + 0x100))((String *)&local_58,plVar8);
  String::get_base_dir();
  pOVar13 = local_58;
  if (local_58 != (Object *)0x0) {
    LOCK();
    plVar8 = (long *)(local_58 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_58 = (Object *)0x0;
      Memory::free_static(pOVar13 + -0x10,false);
    }
  }
  DirAccess::create_for_path((String *)&local_b8);
  pOVar13 = local_b8;
  pcVar5 = *(code **)(*(long *)local_b8 + 0x1d0);
  local_58 = (Object *)0x103e9d;
  local_60 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_60);
  String::operator+((String *)&local_58,(String *)&local_c0);
  cVar6 = (*pcVar5)(pOVar13);
  pOVar13 = local_58;
  if (local_58 != (Object *)0x0) {
    LOCK();
    plVar8 = (long *)(local_58 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 == 0) {
      local_58 = (Object *)0x0;
      Memory::free_static(pOVar13 + -0x10,false);
    }
  }
  lVar11 = local_60;
  if (local_60 == 0) {
LAB_00100b06:
    if (cVar6 != '\0') goto LAB_00100b0f;
LAB_00100c10:
    pOVar13 = local_b8;
    pcVar5 = *(code **)(*(long *)local_b8 + 0x1d0);
    local_58 = (Object *)&_LC15;
    local_60 = 0;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)&local_c0);
    cVar6 = (*pcVar5)(pOVar13);
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)(local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static(pOVar13 + -0x10,false);
      }
    }
    lVar11 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar8 = (long *)(local_60 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    if (cVar6 != '\0') {
      this[0x1a0] = (EditorPaths)0x1;
      local_60 = 0;
      local_58 = (Object *)&_LC15;
      local_50 = 5;
      String::parse_latin1((StrRange *)&local_60);
      String::operator+((String *)&local_58,(String *)&local_c0);
      if ((Object *)*(char **)(this + 0x1a8) != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1a8));
        pOVar13 = local_58;
        local_58 = (Object *)0x0;
        *(Object **)(this + 0x1a8) = pOVar13;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
  }
  else {
    LOCK();
    plVar8 = (long *)(local_60 + -0x10);
    *plVar8 = *plVar8 + -1;
    UNLOCK();
    if (*plVar8 != 0) goto LAB_00100b06;
    local_60 = 0;
    Memory::free_static((void *)(lVar11 + -0x10),false);
    if (cVar6 == '\0') goto LAB_00100c10;
LAB_00100b0f:
    this[0x1a0] = (EditorPaths)0x1;
    local_60 = 0;
    local_58 = (Object *)0x103e9d;
    local_50 = 6;
    String::parse_latin1((StrRange *)&local_60);
    String::operator+((String *)&local_58,(String *)&local_c0);
    pOVar13 = local_58;
    pcVar4 = *(char **)(this + 0x1a8);
    if ((Object *)pcVar4 == local_58) {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(pcVar4 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
    }
    else {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(pcVar4 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          lVar11 = *(long *)(this + 0x1a8);
          *(undefined8 *)(this + 0x1a8) = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      *(Object **)(this + 0x1a8) = local_58;
    }
    lVar11 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar8 = (long *)(local_60 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
  }
  pSVar9 = (String *)OS::get_singleton();
  local_70 = 0;
  local_50 = 5;
  local_58 = (Object *)0x103eaa;
  String::parse_latin1((StrRange *)&local_70);
  cVar6 = OS::has_feature(pSVar9);
  if ((cVar6 == '\0') || (cVar6 = String::ends_with((char *)&local_c0), cVar6 == '\0')) {
    lVar11 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar8 = (long *)(local_70 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
  }
  else {
    local_60 = 0;
    local_58 = (Object *)&_LC18;
    local_50 = 2;
    String::parse_latin1((StrRange *)&local_60);
    String::path_join((String *)&local_58);
    String::simplify_path();
    cVar6 = String::ends_with((char *)&local_68);
    pcVar4 = local_68;
    if (local_68 != (char *)0x0) {
      LOCK();
      plVar8 = (long *)(local_68 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)(local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static(pOVar13 + -0x10,false);
      }
    }
    lVar11 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar8 = (long *)(local_60 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    lVar11 = local_70;
    if (local_70 != 0) {
      LOCK();
      plVar8 = (long *)(local_70 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_70 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    if (cVar6 != '\0') {
      local_60 = 0;
      local_58 = (Object *)&_LC20;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_60);
      String::path_join((String *)&local_58);
      String::simplify_path();
      pcVar4 = local_68;
      if (local_c0 == local_68) {
        if (local_68 != (char *)0x0) {
          LOCK();
          plVar8 = (long *)(local_68 + -0x10);
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            local_68 = (char *)0x0;
            Memory::free_static(pcVar4 + -0x10,false);
          }
        }
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        local_c0 = local_68;
      }
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        pOVar12 = local_58 + -0x10;
        *(long *)pOVar12 = *(long *)pOVar12 + -1;
        UNLOCK();
        if (*(long *)pOVar12 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
      lVar11 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      DirAccess::create_for_path((String *)&local_58);
      pOVar13 = local_b8;
      pOVar12 = local_b8;
      if (local_58 == local_b8) {
LAB_001022fb:
        pOVar13 = local_b8;
        if (((pOVar12 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar12 = local_58, pOVar13 = local_b8,
            cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_58), pOVar13 = local_b8, cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar12 + 0x140))(pOVar12);
          Memory::free_static(pOVar12,false);
          pOVar13 = local_b8;
        }
      }
      else {
        local_b8 = local_58;
        if (local_58 != (Object *)0x0) {
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_b8 = (Object *)0x0;
          }
          pOVar12 = local_58;
          if (pOVar13 != (Object *)0x0) goto LAB_001022e3;
          goto LAB_001022fb;
        }
        if (pOVar13 != (Object *)0x0) {
LAB_001022e3:
          cVar6 = RefCounted::unreference();
          pOVar12 = local_58;
          if ((cVar6 != '\0') &&
             (cVar6 = predelete_handler(pOVar13), pOVar12 = local_58, cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
            pOVar12 = local_58;
          }
          goto LAB_001022fb;
        }
      }
      pcVar5 = *(code **)(*(long *)pOVar13 + 0x1d0);
      local_58 = (Object *)0x103e9d;
      local_60 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_60);
      String::operator+((String *)&local_58,(String *)&local_c0);
      cVar6 = (*pcVar5)(pOVar13);
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)(local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
      lVar11 = local_60;
      if (local_60 == 0) {
LAB_001023cf:
        if (cVar6 != '\0') goto LAB_001023d8;
LAB_00102978:
        pOVar13 = local_b8;
        pcVar5 = *(code **)(*(long *)local_b8 + 0x1d0);
        local_58 = (Object *)&_LC15;
        local_60 = 0;
        local_50 = 5;
        String::parse_latin1((StrRange *)&local_60);
        String::operator+((String *)&local_58,(String *)&local_c0);
        cVar6 = (*pcVar5)(pOVar13,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar6 == '\0') goto LAB_00100d42;
        this[0x1a0] = (EditorPaths)0x1;
        local_58 = (Object *)&_LC15;
        local_50 = 5;
      }
      else {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 != 0) goto LAB_001023cf;
        local_60 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
        if (cVar6 == '\0') goto LAB_00102978;
LAB_001023d8:
        this[0x1a0] = (EditorPaths)0x1;
        local_58 = (Object *)0x103e9d;
        local_50 = 6;
      }
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_60);
      String::operator+((String *)&local_58,(String *)&local_c0);
      if ((Object *)*(char **)(this + 0x1a8) != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x1a8));
        pOVar13 = local_58;
        local_58 = (Object *)0x0;
        *(Object **)(this + 0x1a8) = pOVar13;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
  }
LAB_00100d42:
  local_b0 = (char *)0x0;
  local_a8 = (char *)0x0;
  local_a0 = (char *)0x0;
  if (this[0x1a0] == (EditorPaths)0x0) {
    plVar8 = (long *)OS::get_singleton();
    (**(code **)(*plVar8 + 0x270))((String *)&local_58);
    pOVar13 = local_58;
    pcVar4 = local_b0;
    if ((Object *)local_b0 == local_58) {
      if (local_b0 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_b0 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
    }
    else {
      if (local_b0 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_b0 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_b0 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      local_b0 = (char *)local_58;
    }
    plVar8 = (long *)OS::get_singleton();
    (**(code **)(*plVar8 + 0x268))((String *)&local_58,plVar8);
    String::path_join((String *)&local_60);
    lVar10 = local_60;
    lVar11 = *(long *)(this + 0x178);
    if (lVar11 == local_60) {
      if (lVar11 != 0) {
        LOCK();
        plVar8 = (long *)(lVar11 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    else {
      if (lVar11 != 0) {
        LOCK();
        plVar8 = (long *)(lVar11 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          lVar11 = *(long *)(this + 0x178);
          *(undefined8 *)(this + 0x178) = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      *(long *)(this + 0x178) = local_60;
    }
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)(local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static(pOVar13 + -0x10,false);
      }
    }
    plVar8 = (long *)OS::get_singleton();
    (**(code **)(*plVar8 + 0x278))((String *)&local_58);
    pOVar13 = local_58;
    pcVar4 = local_a8;
    if ((Object *)local_a8 == local_58) {
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_a8 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
    }
    else {
      if (local_a8 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_a8 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_a8 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      local_a8 = (char *)local_58;
    }
    plVar8 = (long *)OS::get_singleton();
    (**(code **)(*plVar8 + 0x268))((String *)&local_58,plVar8);
    String::path_join((String *)&local_60);
    lVar10 = local_60;
    lVar11 = *(long *)(this + 0x180);
    if (lVar11 == local_60) {
      if (lVar11 != 0) {
        LOCK();
        plVar8 = (long *)(lVar11 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
      }
    }
    else {
      if (lVar11 != 0) {
        LOCK();
        plVar8 = (long *)(lVar11 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          lVar11 = *(long *)(this + 0x180);
          *(undefined8 *)(this + 0x180) = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      *(long *)(this + 0x180) = local_60;
    }
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)(local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static(pOVar13 + -0x10,false);
      }
    }
    plVar8 = (long *)OS::get_singleton();
    (**(code **)(*plVar8 + 0x280))((String *)&local_58);
    pOVar13 = local_58;
    pcVar4 = local_a0;
    if ((Object *)local_a0 == local_58) {
      if (local_a0 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_a0 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
    }
    else {
      if (local_a0 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(local_a0 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_a0 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
      }
      local_a0 = (char *)local_58;
    }
    cVar6 = String::operator==((String *)&local_a0,(String *)&local_b0);
    if (cVar6 == '\0') {
      plVar8 = (long *)OS::get_singleton();
      (**(code **)(*plVar8 + 0x268))((String *)&local_58,plVar8);
      String::path_join((String *)&local_60);
      lVar11 = local_60;
      if (*(long *)(this + 0x188) == local_60) {
        if (local_60 != 0) {
          LOCK();
          plVar8 = (long *)(local_60 + -0x10);
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar11 + -0x10),false);
          }
        }
      }
      else {
        CowData<char32_t>::_unref(this_00);
        *(long *)(this + 0x188) = local_60;
      }
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)(local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
    }
    else {
      local_60 = 0;
      local_58 = (Object *)0x103ed7;
      local_50 = 5;
      String::parse_latin1((StrRange *)&local_60);
      String::path_join((String *)&local_58);
      pOVar13 = local_58;
      if ((Object *)*(char **)(this + 0x188) == local_58) {
        if (local_58 != (Object *)0x0) {
          LOCK();
          plVar8 = (long *)(local_58 + -0x10);
          *plVar8 = *plVar8 + -1;
          UNLOCK();
          if (*plVar8 == 0) {
            local_58 = (Object *)0x0;
            Memory::free_static(pOVar13 + -0x10,false);
          }
        }
      }
      else {
        CowData<char32_t>::_unref(this_00);
        *(Object **)(this + 0x188) = local_58;
      }
      lVar11 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
    }
    plVar8 = (long *)OS::get_singleton();
    (**(code **)(*plVar8 + 0x288))((String *)&local_58);
    pOVar13 = local_58;
    pcVar4 = *(char **)(this + 400);
    if ((Object *)pcVar4 == local_58) {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(pcVar4 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
    }
    else {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(pcVar4 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          lVar11 = *(long *)(this + 400);
          *(undefined8 *)(this + 400) = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      *(Object **)(this + 400) = local_58;
    }
  }
  else {
    plVar8 = (long *)(local_c0 + -0x10);
    if (local_c0 != (char *)0x0) {
      do {
        lVar11 = *plVar8;
        if (lVar11 == 0) goto LAB_00100d9b;
        LOCK();
        lVar10 = *plVar8;
        bVar14 = lVar11 == lVar10;
        if (bVar14) {
          *plVar8 = lVar11 + 1;
          lVar10 = lVar11;
        }
        UNLOCK();
      } while (!bVar14);
      if (lVar10 != -1) {
        local_b0 = local_c0;
      }
    }
LAB_00100d9b:
    local_58 = (Object *)0x103ecb;
    local_60 = 0;
    local_50 = 0xb;
    String::parse_latin1((StrRange *)&local_60);
    String::path_join((String *)&local_58);
    pOVar13 = local_58;
    pcVar4 = *(char **)(this + 0x178);
    if ((Object *)pcVar4 == local_58) {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(pcVar4 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
    }
    else {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(pcVar4 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          lVar11 = *(long *)(this + 0x178);
          *(undefined8 *)(this + 0x178) = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      *(Object **)(this + 0x178) = local_58;
    }
    lVar11 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar8 = (long *)(local_60 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    if (local_a8 != local_c0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_c0);
    }
    if (*(long *)(this + 0x180) != *(long *)(this + 0x178)) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x180),(CowData *)(this + 0x178));
    }
    if (local_a0 != local_c0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c0);
    }
    local_60 = 0;
    local_58 = (Object *)0x103ed7;
    local_50 = 5;
    String::parse_latin1((StrRange *)&local_60);
    String::path_join((String *)&local_58);
    pOVar13 = local_58;
    pcVar4 = *(char **)(this + 0x188);
    if ((Object *)pcVar4 == local_58) {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(pcVar4 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
    }
    else {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(pcVar4 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          lVar11 = *(long *)(this + 0x188);
          *(undefined8 *)(this + 0x188) = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      *(Object **)(this + 0x188) = local_58;
    }
    lVar11 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar8 = (long *)(local_60 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
    local_60 = 0;
    local_58 = (Object *)&_LC23;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_60);
    String::path_join((String *)&local_58);
    pOVar13 = local_58;
    pcVar4 = *(char **)(this + 400);
    if ((Object *)pcVar4 == local_58) {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(pcVar4 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
    }
    else {
      if (pcVar4 != (char *)0x0) {
        LOCK();
        plVar8 = (long *)(pcVar4 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          lVar11 = *(long *)(this + 400);
          *(undefined8 *)(this + 400) = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      *(Object **)(this + 400) = local_58;
    }
    lVar11 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar8 = (long *)(local_60 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
      }
    }
  }
  if ((((local_b0 == (char *)0x0) || (*(uint *)(local_b0 + -8) < 2)) ||
      ((local_a8 == (char *)0x0 || ((*(uint *)(local_a8 + -8) < 2 || (local_a0 == (char *)0x0))))))
     || (*(uint *)(local_a0 + -8) < 2)) {
    this[0x171] = (EditorPaths)0x0;
    _err_print_error("EditorPaths","editor/editor_paths.cpp",0xbb,
                     "Condition \"!paths_valid\" is true.",
                     "Editor data, config, or cache paths are invalid.",0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    if (((local_b8 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar13 = local_b8, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  }
  else {
    this[0x171] = (EditorPaths)0x1;
    DirAccess::create(&local_98,2);
    pcVar5 = *(code **)(*(long *)local_98 + 0x1a8);
    local_58 = (Object *)0x0;
    plVar8 = (long *)(*(long *)(this + 0x178) + -0x10);
    if (*(long *)(this + 0x178) != 0) {
      do {
        lVar11 = *plVar8;
        if (lVar11 == 0) goto LAB_001013e9;
        LOCK();
        lVar10 = *plVar8;
        bVar14 = lVar11 == lVar10;
        if (bVar14) {
          *plVar8 = lVar11 + 1;
          lVar10 = lVar11;
        }
        UNLOCK();
      } while (!bVar14);
      if (lVar10 != -1) {
        local_58 = *(Object **)(this + 0x178);
      }
    }
LAB_001013e9:
    iVar7 = (*pcVar5)();
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)((long)local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar13 + -0x10),false);
      }
    }
    if (iVar7 != 0) {
      (**(code **)(*(long *)local_98 + 0x1c0))(local_98,(CowData *)(this + 0x178));
      pcVar5 = *(code **)(*(long *)local_98 + 0x1a8);
      local_58 = (Object *)0x0;
      plVar8 = (long *)(*(long *)(this + 0x178) + -0x10);
      if (*(long *)(this + 0x178) != 0) {
        do {
          lVar11 = *plVar8;
          if (lVar11 == 0) goto LAB_00101496;
          LOCK();
          lVar10 = *plVar8;
          bVar14 = lVar11 == lVar10;
          if (bVar14) {
            *plVar8 = lVar11 + 1;
            lVar10 = lVar11;
          }
          UNLOCK();
        } while (!bVar14);
        if (lVar10 != -1) {
          local_58 = *(Object **)(this + 0x178);
        }
      }
LAB_00101496:
      iVar7 = (*pcVar5)();
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)((long)local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static((void *)((long)pOVar13 + -0x10),false);
        }
      }
      if (iVar7 != 0) {
        operator+((char *)&local_58,(String *)"Could not create editor data directory: ");
        _err_print_error("EditorPaths","editor/editor_paths.cpp",0xc6,(String *)&local_58,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        this[0x171] = (EditorPaths)0x0;
      }
    }
    pcVar5 = *(code **)(*(long *)local_98 + 0x1d8);
    local_58 = (Object *)0x0;
    plVar8 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    if (*(long *)(this + 0x1b0) != 0) {
      do {
        lVar11 = *plVar8;
        if (lVar11 == 0) goto LAB_00101513;
        LOCK();
        lVar10 = *plVar8;
        bVar14 = lVar11 == lVar10;
        if (bVar14) {
          *plVar8 = lVar11 + 1;
          lVar10 = lVar11;
        }
        UNLOCK();
      } while (!bVar14);
      if (lVar10 != -1) {
        local_58 = *(Object **)(this + 0x1b0);
      }
    }
LAB_00101513:
    cVar6 = (*pcVar5)(local_98);
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)((long)local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar13 + -0x10),false);
      }
    }
    if (cVar6 == '\0') {
      pcVar5 = *(code **)(*(long *)local_98 + 0x1b8);
      local_58 = (Object *)0x0;
      plVar8 = (long *)(*(long *)(this + 0x1b0) + -0x10);
      if (*(long *)(this + 0x1b0) != 0) {
        do {
          lVar11 = *plVar8;
          if (lVar11 == 0) goto LAB_001025bb;
          LOCK();
          lVar10 = *plVar8;
          bVar14 = lVar11 == lVar10;
          if (bVar14) {
            *plVar8 = lVar11 + 1;
            lVar10 = lVar11;
          }
          UNLOCK();
        } while (!bVar14);
        if (lVar10 != -1) {
          local_58 = *(Object **)(this + 0x1b0);
        }
      }
LAB_001025bb:
      (*pcVar5)();
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)((long)local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static((void *)((long)pOVar13 + -0x10),false);
        }
      }
    }
    pcVar5 = *(code **)(*(long *)local_98 + 0x1a8);
    local_58 = (Object *)0x0;
    plVar8 = (long *)(*(long *)(this + 0x180) + -0x10);
    if (*(long *)(this + 0x180) != 0) {
      do {
        lVar11 = *plVar8;
        if (lVar11 == 0) goto LAB_001015ae;
        LOCK();
        lVar10 = *plVar8;
        bVar14 = lVar11 == lVar10;
        if (bVar14) {
          *plVar8 = lVar11 + 1;
          lVar10 = lVar11;
        }
        UNLOCK();
      } while (!bVar14);
      if (lVar10 != -1) {
        local_58 = *(Object **)(this + 0x180);
      }
    }
LAB_001015ae:
    iVar7 = (*pcVar5)();
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)((long)local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar13 + -0x10),false);
      }
    }
    if (iVar7 != 0) {
      (**(code **)(*(long *)local_98 + 0x1c0))(local_98,this + 0x180);
      pcVar5 = *(code **)(*(long *)local_98 + 0x1a8);
      local_58 = (Object *)0x0;
      plVar8 = (long *)(*(long *)(this + 0x180) + -0x10);
      if (*(long *)(this + 0x180) != 0) {
        do {
          lVar11 = *plVar8;
          if (lVar11 == 0) goto LAB_00101661;
          LOCK();
          lVar10 = *plVar8;
          bVar14 = lVar11 == lVar10;
          if (bVar14) {
            *plVar8 = lVar11 + 1;
            lVar10 = lVar11;
          }
          UNLOCK();
        } while (!bVar14);
        if (lVar10 != -1) {
          local_58 = *(Object **)(this + 0x180);
        }
      }
LAB_00101661:
      iVar7 = (*pcVar5)();
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)((long)local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static((void *)((long)pOVar13 + -0x10),false);
        }
      }
      if (iVar7 != 0) {
        operator+((char *)&local_58,(String *)"Could not create editor config directory: ");
        _err_print_error("EditorPaths","editor/editor_paths.cpp",0xd5,(String *)&local_58,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        this[0x171] = (EditorPaths)0x0;
      }
    }
    pcVar5 = *(code **)(*(long *)local_98 + 0x1d8);
    local_58 = (Object *)0x0;
    plVar8 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    if (*(long *)(this + 0x1b8) != 0) {
      do {
        lVar11 = *plVar8;
        if (lVar11 == 0) goto LAB_001016de;
        LOCK();
        lVar10 = *plVar8;
        bVar14 = lVar11 == lVar10;
        if (bVar14) {
          *plVar8 = lVar11 + 1;
          lVar10 = lVar11;
        }
        UNLOCK();
      } while (!bVar14);
      if (lVar10 != -1) {
        local_58 = *(Object **)(this + 0x1b8);
      }
    }
LAB_001016de:
    cVar6 = (*pcVar5)(local_98);
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)((long)local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar13 + -0x10),false);
      }
    }
    pOVar13 = local_98;
    if (cVar6 == '\0') {
      pcVar5 = *(code **)(*(long *)local_98 + 0x1b8);
      local_58 = (Object *)0x0;
      if (*(long *)(this + 0x1b8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(this + 0x1b8));
      }
      (*pcVar5)(pOVar13);
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)((long)local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static((void *)((long)pOVar13 + -0x10),false);
        }
      }
    }
    pOVar13 = local_98;
    pcVar5 = *(code **)(*(long *)local_98 + 0x1d8);
    local_58 = (Object *)0x0;
    if (*(long *)(this + 0x1c0) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar1);
    }
    cVar6 = (*pcVar5)(pOVar13);
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)((long)local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar13 + -0x10),false);
      }
    }
    pOVar13 = local_98;
    if (cVar6 == '\0') {
      pcVar5 = *(code **)(*(long *)local_98 + 0x1b8);
      local_58 = (Object *)0x0;
      if (*(long *)(this + 0x1c0) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar1);
      }
      (*pcVar5)(pOVar13);
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)((long)local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static((void *)((long)pOVar13 + -0x10),false);
        }
      }
    }
    pOVar13 = local_98;
    pcVar5 = *(code **)(*(long *)local_98 + 0x1d8);
    local_58 = (Object *)0x0;
    if (*(long *)(this + 0x1c8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar2);
    }
    cVar6 = (*pcVar5)(pOVar13);
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)((long)local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar13 + -0x10),false);
      }
    }
    pOVar13 = local_98;
    if (cVar6 == '\0') {
      pcVar5 = *(code **)(*(long *)local_98 + 0x1b8);
      local_58 = (Object *)0x0;
      if (*(long *)(this + 0x1c8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar2);
      }
      (*pcVar5)(pOVar13);
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)((long)local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static((void *)((long)pOVar13 + -0x10),false);
        }
      }
    }
    pOVar13 = local_98;
    pcVar5 = *(code **)(*(long *)local_98 + 0x1a8);
    local_58 = (Object *)0x0;
    if (*(long *)(this + 0x188) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)this_00);
    }
    iVar7 = (*pcVar5)(pOVar13);
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)((long)local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static((void *)((long)pOVar13 + -0x10),false);
      }
    }
    if (iVar7 != 0) {
      (**(code **)(*(long *)local_98 + 0x1c0))(local_98,this_00);
      pOVar13 = local_98;
      pcVar5 = *(code **)(*(long *)local_98 + 0x1a8);
      local_58 = (Object *)0x0;
      if (*(long *)(this + 0x188) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)this_00);
      }
      iVar7 = (*pcVar5)(pOVar13);
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)((long)local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static((void *)((long)pOVar13 + -0x10),false);
        }
      }
      if (iVar7 != 0) {
        operator+((char *)&local_58,(String *)"Could not create editor cache directory: ");
        _err_print_error("EditorPaths","editor/editor_paths.cpp",0xea,(String *)&local_58,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        this[0x171] = (EditorPaths)0x0;
      }
    }
    pOVar13 = local_98;
    pCVar3 = (CowData *)(this + 400);
    pcVar5 = *(code **)(*(long *)local_98 + 0x1a8);
    local_58 = (Object *)0x0;
    if (*(long *)(this + 400) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar3);
    }
    iVar7 = (*pcVar5)(pOVar13);
    pOVar13 = local_58;
    if (local_58 != (Object *)0x0) {
      LOCK();
      plVar8 = (long *)(local_58 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_58 = (Object *)0x0;
        Memory::free_static(pOVar13 + -0x10,false);
      }
    }
    if (iVar7 != 0) {
      (**(code **)(*(long *)local_98 + 0x1c0))(local_98,pCVar3);
      pOVar13 = local_98;
      pcVar5 = *(code **)(*(long *)local_98 + 0x1a8);
      local_58 = (Object *)0x0;
      if (*(long *)(this + 400) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar3);
      }
      iVar7 = (*pcVar5)(pOVar13);
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)(local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar13 + -0x10,false);
        }
      }
      if (iVar7 != 0) {
        operator+((char *)&local_58,(String *)"Could not create editor temporary directory: ");
        _err_print_error("EditorPaths","editor/editor_paths.cpp",0xf5,(String *)&local_58,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        this[0x171] = (EditorPaths)0x0;
      }
    }
    lVar11 = Engine::get_singleton();
    if (*(char *)(lVar11 + 0xc1) == '\0') {
      cVar6 = Main::is_cmdline_tool();
      if (cVar6 != '\0') {
        ProjectSettings::get_singleton();
        cVar6 = ProjectSettings::is_project_loaded();
        if (cVar6 == '\0') goto LAB_00101a30;
      }
      pCVar3 = (CowData *)(this + 0x198);
      DirAccess::create(&local_90,0);
      pOVar13 = local_90;
      pcVar5 = *(code **)(*(long *)local_90 + 0x1a8);
      local_58 = (Object *)0x0;
      if (*(long *)(this + 0x198) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar3);
      }
      iVar7 = (*pcVar5)(pOVar13);
      pOVar13 = local_58;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)((long)local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static((void *)((long)pOVar13 + -0x10),false);
        }
      }
      if (iVar7 != 0) {
        (**(code **)(*(long *)local_90 + 0x1c0))(local_90,pCVar3);
        pOVar13 = local_90;
        pcVar5 = *(code **)(*(long *)local_90 + 0x1a8);
        local_58 = (Object *)0x0;
        if (*(long *)(this + 0x198) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar3);
        }
        iVar7 = (*pcVar5)(pOVar13,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (iVar7 != 0) {
          (**(code **)(*(long *)local_90 + 0x1b0))((StrRange *)&local_60,local_90,1);
          local_58 = (Object *)0x103ee2;
          local_68 = (char *)0x0;
          local_50 = 6;
          String::parse_latin1((StrRange *)&local_68);
          operator+((char *)&local_58,(String *)"Could not create project data directory (");
          String::operator+((String *)&local_70,(String *)&local_58);
          String::operator+(local_78,(String *)&local_70);
          _err_print_error("EditorPaths","editor/editor_paths.cpp",0x105,local_78,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          this[0x171] = (EditorPaths)0x0;
        }
      }
      local_60 = 0;
      local_58 = (Object *)0x103ee9;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_60);
      String::path_join((String *)&local_88);
      lVar11 = local_60;
      if (local_60 == 0) {
LAB_00101d54:
        cVar6 = FileAccess::exists((String *)&local_88);
      }
      else {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 != 0) goto LAB_00101d54;
        local_60 = 0;
        Memory::free_static((void *)(lVar11 + -0x10),false);
        cVar6 = FileAccess::exists((String *)&local_88);
      }
      if (cVar6 == '\0') {
        FileAccess::open((String *)&local_80,(int)(String *)&local_88,(Error *)0x2);
        pOVar13 = local_80;
        if (local_80 == (Object *)0x0) {
          local_58 = (Object *)&_LC33;
          local_60 = 0;
          local_50 = 1;
          String::parse_latin1((StrRange *)&local_60);
          local_58 = (Object *)&_LC34;
          local_68 = (char *)0x0;
          local_50 = 1;
          String::parse_latin1((StrRange *)&local_68);
          String::quote((String *)&local_58);
          operator+((char *)&local_70,(String *)"Failed to create file ");
          String::operator+(local_78,(String *)&local_70);
          _err_print_error("EditorPaths","editor/editor_paths.cpp",0x112,local_78,0,0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        else {
          pcVar5 = *(code **)(*(long *)local_80 + 0x2b0);
          local_60 = 0;
          local_58 = (Object *)&_LC3;
          local_50 = 0;
          String::parse_latin1((StrRange *)&local_60);
          (*pcVar5)(pOVar13);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        if (((local_80 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_80), cVar6 != '\0')) {
          (**(code **)(*(long *)local_80 + 0x140))(local_80);
          Memory::free_static(local_80,false);
        }
      }
      pSVar9 = (String *)Engine::get_singleton();
      Engine::set_shader_cache_path(pSVar9);
      pOVar13 = local_90;
      pcVar5 = *(code **)(*(long *)local_90 + 0x1d8);
      local_58 = (Object *)0x103e1a;
      local_60 = 0;
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_60);
      cVar6 = (*pcVar5)(pOVar13);
      lVar11 = local_60;
      pOVar13 = local_90;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
          pOVar13 = local_90;
        }
      }
      local_90 = pOVar13;
      if (cVar6 == '\0') {
        pcVar5 = *(code **)(*(long *)pOVar13 + 0x1b8);
        local_58 = (Object *)0x103e1a;
        local_60 = 0;
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_60);
        (*pcVar5)(pOVar13,(StrRange *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      }
      ProjectSettings::get_singleton();
      ProjectSettings::get_imported_files_path();
      pOVar13 = local_90;
      pcVar5 = *(code **)(*(long *)local_90 + 0x1d8);
      local_58 = (Object *)0x0;
      if (local_60 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_60);
      }
      cVar6 = (*pcVar5)(pOVar13);
      pOVar12 = local_58;
      pOVar13 = local_90;
      if (local_58 != (Object *)0x0) {
        LOCK();
        plVar8 = (long *)(local_58 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_58 = (Object *)0x0;
          Memory::free_static(pOVar12 + -0x10,false);
          pOVar13 = local_90;
        }
      }
      local_90 = pOVar13;
      if (cVar6 == '\0') {
        pcVar5 = *(code **)(*(long *)pOVar13 + 0x1b8);
        local_58 = (Object *)0x0;
        if (local_60 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_60);
        }
        (*pcVar5)(pOVar13);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      lVar11 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar8 = (long *)(local_60 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      lVar11 = local_88;
      if (local_88 != 0) {
        LOCK();
        plVar8 = (long *)(local_88 + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          local_88 = 0;
          Memory::free_static((void *)(lVar11 + -0x10),false);
        }
      }
      if (((local_90 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_90), cVar6 != '\0')) {
        (**(code **)(*(long *)local_90 + 0x140))(local_90);
        Memory::free_static(local_90,false);
      }
    }
    else {
LAB_00101a30:
      pSVar9 = (String *)Engine::get_singleton();
      Engine::set_shader_cache_path(pSVar9);
    }
    if (((local_98 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_98), cVar6 != '\0')) {
      (**(code **)(*(long *)local_98 + 0x140))(local_98);
      Memory::free_static(local_98,false);
    }
    pcVar4 = local_a0;
    if (local_a0 != (char *)0x0) {
      LOCK();
      plVar8 = (long *)(local_a0 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_a0 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    pcVar4 = local_a8;
    if (local_a8 != (char *)0x0) {
      LOCK();
      plVar8 = (long *)(local_a8 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_a8 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    pcVar4 = local_b0;
    if (local_b0 != (char *)0x0) {
      LOCK();
      plVar8 = (long *)(local_b0 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_b0 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
    if (((local_b8 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar13 = local_b8, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
    pcVar4 = local_c0;
    if (local_c0 != (char *)0x0) {
      LOCK();
      plVar8 = (long *)(local_c0 + -0x10);
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        local_c0 = (char *)0x0;
        Memory::free_static(pcVar4 + -0x10,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103415:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPaths::create() */

void EditorPaths::create(void)

{
  EditorPaths *this;
  
  this = (EditorPaths *)operator_new(0x1d0,"");
  EditorPaths(this);
  postinitialize_handler((Object *)this);
  return;
}



/* EditorPaths::_bind_methods() */

void EditorPaths::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  long *plVar3;
  MethodBind *pMVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_78 [2];
  long *local_68;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)local_78,(char ***)"get_data_dir",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<EditorPaths,String>(get_data_dir);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"get_config_dir",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<EditorPaths,String>(get_config_dir);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"get_cache_dir",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<EditorPaths,String>(get_cache_dir);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"is_self_contained",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<EditorPaths,bool>(is_self_contained);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"get_self_contained_file",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<EditorPaths,String>(get_self_contained_file);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  D_METHODP((char *)local_78,(char ***)"get_project_settings_dir",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<EditorPaths,String>(get_project_settings_dir);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)local_78,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  plVar3 = local_68;
  if (local_68 != (long *)0x0) {
    LOCK();
    plVar5 = local_68 + -2;
    *plVar5 = *plVar5 + -1;
    UNLOCK();
    if (*plVar5 == 0) {
      if (local_68 == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = local_68[-1];
      local_68 = (long *)0x0;
      if (lVar1 != 0) {
        lVar6 = 0;
        plVar5 = plVar3;
        do {
          if ((StringName::configured != '\0') && (*plVar5 != 0)) {
            StringName::unref();
          }
          lVar6 = lVar6 + 1;
          plVar5 = plVar5 + 1;
        } while (lVar1 != lVar6);
      }
      Memory::free_static(plVar3 + -2,false);
    }
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* EditorPaths::is_class_ptr(void*) const */

uint __thiscall EditorPaths::is_class_ptr(EditorPaths *this,void *param_1)

{
  return (uint)CONCAT71(0x106b,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x106b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* EditorPaths::_getv(StringName const&, Variant&) const */

undefined8 EditorPaths::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPaths::_setv(StringName const&, Variant const&) */

undefined8 EditorPaths::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPaths::_validate_propertyv(PropertyInfo&) const */

void EditorPaths::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* EditorPaths::_property_can_revertv(StringName const&) const */

undefined8 EditorPaths::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorPaths::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorPaths::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorPaths::_notificationv(int, bool) */

void EditorPaths::_notificationv(int param_1,bool param_2)

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



/* MethodBindTRC<String>::_gen_argument_type(int) const */

undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1)

{
  return 4;
}



/* MethodBindTRC<String>::get_argument_meta(int) const */

undefined8 MethodBindTRC<String>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106b50;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<bool>::~MethodBindTRC() */

void __thiscall MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106b50;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106af0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00106af0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* EditorPaths::_get_class_namev() const */

undefined8 * EditorPaths::_get_class_namev(void)

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
LAB_00103ca3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103ca3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorPaths");
      goto LAB_00103d0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorPaths");
LAB_00103d0e:
  return &_get_class_namev()::_class_name_static;
}



/* EditorPaths::get_class() const */

void EditorPaths::get_class(void)

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



/* EditorPaths::is_class(String const&) const */

undefined8 __thiscall EditorPaths::is_class(EditorPaths *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00103fff;
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
LAB_00103fff:
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
    if (cVar6 != '\0') goto LAB_001040b3;
  }
  cVar6 = String::operator==(param_1,"EditorPaths");
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
              if (lVar5 == 0) goto LAB_00104163;
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
LAB_00104163:
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
      if (cVar6 != '\0') goto LAB_001040b3;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = String::operator==(param_1,"Object");
      return uVar7;
    }
  }
  else {
LAB_001040b3:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<String>::_gen_argument_type_info(int param_1)

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
  local_48 = &_LC3;
  local_40 = 0;
  String::parse_latin1((StrRange *)&local_58);
  *puVar3 = 4;
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
      goto joined_r0x0010435c;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x0010435c:
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
  local_48 = &_LC3;
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
      goto joined_r0x001044dc;
    }
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)&local_50);
  lVar2 = local_58;
joined_r0x001044dc:
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



/* EditorPaths::~EditorPaths() */

void __thiscall EditorPaths::~EditorPaths(EditorPaths *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00106990;
  if (*(long *)(this + 0x1c8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1c8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1c8);
      *(undefined8 *)(this + 0x1c8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1c0);
      *(undefined8 *)(this + 0x1c0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b0);
      *(undefined8 *)(this + 0x1b0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1a8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a8);
      *(undefined8 *)(this + 0x1a8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x178) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x178) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x178);
      *(undefined8 *)(this + 0x178) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Object::~Object((Object *)this);
      return;
    }
  }
  Object::~Object((Object *)this);
  return;
}



/* EditorPaths::~EditorPaths() */

void __thiscall EditorPaths::~EditorPaths(EditorPaths *this)

{
  long *plVar1;
  long lVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00106990;
  if (*(long *)(this + 0x1c8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1c8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1c8);
      *(undefined8 *)(this + 0x1c8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1c0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1c0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1c0);
      *(undefined8 *)(this + 0x1c0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1b8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b8);
      *(undefined8 *)(this + 0x1b8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1b0) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1b0) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1b0);
      *(undefined8 *)(this + 0x1b0) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x1a8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x1a8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x1a8);
      *(undefined8 *)(this + 0x1a8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x198) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x198) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x198);
      *(undefined8 *)(this + 0x198) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 400) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 400) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 400);
      *(undefined8 *)(this + 400) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x188) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x188) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x188);
      *(undefined8 *)(this + 0x188) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x180) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x180) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x180);
      *(undefined8 *)(this + 0x180) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x178) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x178) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x178);
      *(undefined8 *)(this + 0x178) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Object::~Object((Object *)this);
  operator_delete(this,0x1d0);
  return;
}



/* EditorPaths::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void EditorPaths::_get_property_listv(List *param_1,bool param_2)

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
  char *local_78;
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
  local_78 = "EditorPaths";
  local_70 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPaths";
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
LAB_00104ba8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104ba8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00104bc6;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00104bc6:
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
  StringName::StringName((StringName *)&local_78,"EditorPaths",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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



/* MethodBind* create_method_bind<EditorPaths, String>(String (EditorPaths::*)() const) */

MethodBind * create_method_bind<EditorPaths,String>(_func_String *param_1)

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
  *(_func_String **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00106af0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorPaths";
  local_30 = 0xb;
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



/* MethodBind* create_method_bind<EditorPaths, bool>(bool (EditorPaths::*)() const) */

MethodBind * create_method_bind<EditorPaths,bool>(_func_bool *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_00106b50;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_set_returns(SUB81(this,0));
  MethodBind::_set_const(SUB81(this,0));
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "EditorPaths";
  local_30 = 0xb;
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



/* EditorPaths::_bind_methods() [clone .cold] */

void EditorPaths::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorPaths::_initialize_classv() */

void EditorPaths::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_48 = 0;
    local_38 = "Object";
    local_30 = 6;
    String::parse_latin1((StrRange *)&local_48);
    StringName::StringName((StringName *)&local_40,(String *)&local_48,false);
    local_38 = "EditorPaths";
    local_50 = 0;
    local_30 = 0xb;
    String::parse_latin1((StrRange *)&local_50);
    StringName::StringName((StringName *)&local_38,(String *)&local_50,false);
    ClassDB::_add_class2((StringName *)&local_38,(StringName *)&local_40);
    if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
      StringName::unref();
    }
    lVar2 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    lVar2 = local_48;
    if (local_48 != 0) {
      LOCK();
      plVar1 = (long *)(local_48 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_48 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
        _bind_methods();
        initialize_class()::initialized = '\x01';
        goto LAB_001052f5;
      }
    }
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
LAB_001052f5:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x001055f8) */
/* WARNING: Removing unreachable block (ram,0x00105728) */
/* WARNING: Removing unreachable block (ram,0x001058f0) */
/* WARNING: Removing unreachable block (ram,0x00105734) */
/* WARNING: Removing unreachable block (ram,0x0010573e) */
/* WARNING: Removing unreachable block (ram,0x001058d0) */
/* WARNING: Removing unreachable block (ram,0x0010574a) */
/* WARNING: Removing unreachable block (ram,0x00105754) */
/* WARNING: Removing unreachable block (ram,0x001058b0) */
/* WARNING: Removing unreachable block (ram,0x00105760) */
/* WARNING: Removing unreachable block (ram,0x0010576a) */
/* WARNING: Removing unreachable block (ram,0x00105890) */
/* WARNING: Removing unreachable block (ram,0x00105776) */
/* WARNING: Removing unreachable block (ram,0x00105780) */
/* WARNING: Removing unreachable block (ram,0x00105870) */
/* WARNING: Removing unreachable block (ram,0x0010578c) */
/* WARNING: Removing unreachable block (ram,0x00105796) */
/* WARNING: Removing unreachable block (ram,0x00105850) */
/* WARNING: Removing unreachable block (ram,0x001057a2) */
/* WARNING: Removing unreachable block (ram,0x001057ac) */
/* WARNING: Removing unreachable block (ram,0x00105830) */
/* WARNING: Removing unreachable block (ram,0x001057b4) */
/* WARNING: Removing unreachable block (ram,0x001057ca) */
/* WARNING: Removing unreachable block (ram,0x001057d6) */
/* String vformat<StringName>(String const&, StringName const) */

undefined8 * vformat<StringName>(undefined8 *param_1,bool *param_2,StringName *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
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
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,param_2);
  *param_1 = local_c0[0];
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



/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  bool bVar4;
  long *plVar6;
  undefined4 in_register_00000014;
  long *plVar7;
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
  Variant *pVVar5;
  
  plVar7 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar7 != (long *)0x0) && (plVar7[1] != 0)) && (*(char *)(plVar7[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar7[1] == 0) {
      plVar6 = (long *)plVar7[0x23];
      if (plVar6 == (long *)0x0) {
        plVar6 = (long *)(**(code **)(*plVar7 + 0x40))(plVar7);
      }
    }
    else {
      plVar6 = (long *)(plVar7[1] + 0x20);
    }
    if (local_58 == (char *)*plVar6) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC51,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar7 = (long *)(local_58 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
      lVar2 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar7 = (long *)(local_60 + -0x10);
        *plVar7 = *plVar7 + -1;
        UNLOCK();
        if (*plVar7 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00105ac0;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar5 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar5 & 1) != 0) {
        pVVar5 = *(Variant **)(pVVar5 + *(long *)((long)plVar7 + (long)pVVar1) + -1);
      }
      bVar4 = (bool)(*(code *)pVVar5)();
      Variant::Variant((Variant *)local_48,bVar4);
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
LAB_00105ac0:
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
  long lVar1;
  char *pcVar2;
  Variant VVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
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
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105db2;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  VVar3 = (Variant)(*pcVar4)(param_1 + *(long *)(this + 0x60));
  param_3[8] = VVar3;
LAB_00105db2:
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
  long lVar1;
  char *pcVar2;
  undefined1 uVar3;
  long *plVar5;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
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
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      pcVar2 = local_48;
      if (local_48 != (char *)0x0) {
        LOCK();
        plVar5 = (long *)(local_48 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_48 = (char *)0x0;
          Memory::free_static(pcVar2 + -0x10,false);
        }
      }
      lVar1 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar1 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00105fb1;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    pcVar4 = *(code **)(pcVar4 + *(long *)(param_1 + *(long *)(this + 0x60)) + -1);
  }
  uVar3 = (*pcVar4)(param_1 + *(long *)(this + 0x60));
  *(undefined1 *)param_3 = uVar3;
LAB_00105fb1:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<String>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  char *pcVar3;
  Variant *pVVar4;
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
      _err_print_error(&_LC51,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      pcVar3 = local_58;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
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
      goto LAB_00106260;
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
      (*(code *)pVVar4)((String *)&local_58);
      Variant::Variant((Variant *)local_48,(String *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      pcVar3 = local_58;
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      if (local_58 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_58 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_58 = (char *)0x0;
          Memory::free_static(pcVar3 + -0x10,false);
        }
      }
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
LAB_00106260:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<String>::validated_call
          (MethodBindTRC<String> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  Variant **ppVVar1;
  long lVar2;
  Variant **ppVVar3;
  code *pcVar4;
  long *plVar5;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  Variant **local_48;
  undefined8 local_40;
  long local_30;
  
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
    if (local_48 == (Variant **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x105918;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppVVar3 = local_48;
      if (local_48 != (Variant **)0x0) {
        LOCK();
        ppVVar1 = local_48 + -2;
        *ppVVar1 = *ppVVar1 + -1;
        UNLOCK();
        if (*ppVVar1 == (Variant *)0x0) {
          local_48 = (Variant **)0x0;
          Memory::free_static(ppVVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00106511;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(Variant ***)(param_3 + 8) != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(param_3 + 8),(CowData *)&local_48);
  }
  ppVVar3 = local_48;
  if (local_48 != (Variant **)0x0) {
    LOCK();
    ppVVar1 = local_48 + -2;
    *ppVVar1 = *ppVVar1 + -1;
    UNLOCK();
    if (*ppVVar1 == (Variant *)0x0) {
      local_48 = (Variant **)0x0;
      Memory::free_static(ppVVar3 + -2,false);
    }
  }
LAB_00106511:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<String>::ptrcall
          (MethodBindTRC<String> *this,Object *param_1,void **param_2,void *param_3)

{
  void **ppvVar1;
  long lVar2;
  void **ppvVar3;
  code *pcVar4;
  long *plVar5;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  long local_50;
  void **local_48;
  undefined8 local_40;
  long local_30;
  
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
    if (local_48 == (void **)*plVar5) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x105918;
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      ppvVar3 = local_48;
      if (local_48 != (void **)0x0) {
        LOCK();
        ppvVar1 = local_48 + -2;
        *ppvVar1 = (void *)((long)*ppvVar1 + -1);
        UNLOCK();
        if (*ppvVar1 == (void *)0x0) {
          local_48 = (void **)0x0;
          Memory::free_static(ppvVar3 + -2,false);
        }
      }
      lVar2 = local_50;
      if (local_50 != 0) {
        LOCK();
        plVar5 = (long *)(local_50 + -0x10);
        *plVar5 = *plVar5 + -1;
        UNLOCK();
        if (*plVar5 == 0) {
          local_50 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0010673e;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar4 = *(code **)(this + 0x58);
  if (((ulong)pcVar4 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar4 = *(code **)(pcVar4 + (long)param_2 + -1);
  }
  (*pcVar4)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
                    /* WARNING: Load size is inaccurate */
  if (*param_3 != local_48) {
    CowData<char32_t>::_ref((CowData<char32_t> *)param_3,(CowData *)&local_48);
  }
  ppvVar3 = local_48;
  if (local_48 != (void **)0x0) {
    LOCK();
    ppvVar1 = local_48 + -2;
    *ppvVar1 = (void *)((long)*ppvVar1 + -1);
    UNLOCK();
    if (*ppvVar1 == (void *)0x0) {
      local_48 = (void **)0x0;
      Memory::free_static(ppvVar3 + -2,false);
    }
  }
LAB_0010673e:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorPaths::~EditorPaths() */

void __thiscall EditorPaths::~EditorPaths(EditorPaths *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<String>::~MethodBindTRC() */

void __thiscall MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this)

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
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


