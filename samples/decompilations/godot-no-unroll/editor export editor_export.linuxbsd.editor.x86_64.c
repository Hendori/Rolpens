
/* Ref<EditorExportPreset>::TEMPNAMEPLACEHOLDERVALUE(Ref<EditorExportPreset> const&) [clone .isra.0]
    */

void __thiscall Ref<EditorExportPreset>::operator=(Ref<EditorExportPreset> *this,Ref *param_1)

{
  Object *pOVar1;
  char cVar2;
  
  pOVar1 = *(Object **)this;
  if (pOVar1 != (Object *)param_1) {
    *(Ref **)this = param_1;
    if (param_1 != (Ref *)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)this = 0;
      }
    }
    if (pOVar1 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(pOVar1);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
          return;
        }
      }
    }
  }
  return;
}



/* EditorExport::save_presets() */

void __thiscall EditorExport::save_presets(EditorExport *this)

{
  if (this[0x440] != (EditorExport)0x0) {
    return;
  }
  Timer::start(_LC6);
  return;
}



/* EditorExport::emit_presets_runnable_changed() */

void __thiscall EditorExport::emit_presets_runnable_changed(EditorExport *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0xd0))(this,&_export_presets_runnable_updated,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExport::get_export_platform_count() */

undefined4 __thiscall EditorExport::get_export_platform_count(EditorExport *this)

{
  if (*(long *)(this + 0x410) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x410) + -8);
  }
  return 0;
}



/* EditorExport::get_export_platform(int) */

long * EditorExport::get_export_platform(int param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)CONCAT44(in_register_0000003c,param_1);
  lVar3 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x410);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar5 = *(long *)(lVar1 + -8);
      goto LAB_001001a9;
    }
  }
  else if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + -8);
    if (lVar3 < lVar5) {
      *plVar4 = 0;
      lVar1 = *(long *)(lVar1 + lVar3 * 8);
      if (lVar1 != 0) {
        *plVar4 = lVar1;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *plVar4 = 0;
        }
      }
      return plVar4;
    }
    goto LAB_001001a9;
  }
  lVar5 = 0;
LAB_001001a9:
  _err_print_index_error
            ("get_export_platform","editor/export/editor_export.cpp",0x95,lVar3,lVar5,"p_idx",
             "export_platforms.size()","",false,false);
  *plVar4 = 0;
  return plVar4;
}



/* EditorExport::get_export_preset_count() const */

undefined4 __thiscall EditorExport::get_export_preset_count(EditorExport *this)

{
  if (*(long *)(this + 0x420) != 0) {
    return *(undefined4 *)(*(long *)(this + 0x420) + -8);
  }
  return 0;
}



/* EditorExport::get_export_preset(int) */

long * EditorExport::get_export_preset(int param_1)

{
  long lVar1;
  char cVar2;
  long lVar3;
  int in_EDX;
  long in_RSI;
  undefined4 in_register_0000003c;
  long *plVar4;
  long lVar5;
  
  plVar4 = (long *)CONCAT44(in_register_0000003c,param_1);
  lVar3 = (long)in_EDX;
  lVar1 = *(long *)(in_RSI + 0x420);
  if (in_EDX < 0) {
    if (lVar1 != 0) {
      lVar5 = *(long *)(lVar1 + -8);
      goto LAB_00100279;
    }
  }
  else if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + -8);
    if (lVar3 < lVar5) {
      *plVar4 = 0;
      lVar1 = *(long *)(lVar1 + lVar3 * 8);
      if (lVar1 != 0) {
        *plVar4 = lVar1;
        cVar2 = RefCounted::reference();
        if (cVar2 == '\0') {
          *plVar4 = 0;
        }
      }
      return plVar4;
    }
    goto LAB_00100279;
  }
  lVar5 = 0;
LAB_00100279:
  _err_print_index_error
            ("get_export_preset","editor/export/editor_export.cpp",0xa8,lVar3,lVar5,"p_idx",
             "export_presets.size()","",false,false);
  *plVar4 = 0;
  return plVar4;
}



/* EditorExport::connect_presets_runnable_updated(Callable const&) */

void __thiscall EditorExport::connect_presets_runnable_updated(EditorExport *this,Callable *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x001002ea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x108))(this,&_export_presets_runnable_updated,param_1,0);
  return;
}



/* EditorExport::EditorExport() */

void __thiscall EditorExport::EditorExport(EditorExport *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  Timer *this_00;
  CallableCustom *this_01;
  long in_FS_OFFSET;
  long local_50;
  long local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010cd80;
  *(undefined8 *)(this + 0x410) = 0;
  *(undefined8 *)(this + 0x420) = 0;
  *(undefined2 *)(this + 0x440) = 0;
  this[0x442] = (EditorExport)0x0;
  *(undefined1 (*) [16])(this + 0x430) = (undefined1  [16])0x0;
  this_00 = (Timer *)operator_new(0x428,"");
  Timer::Timer(this_00);
  postinitialize_handler((Object *)this_00);
  *(Timer **)(this + 0x438) = this_00;
  Node::add_child(this,this_00,0,0);
  Timer::set_wait_time(_LC14);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0x438),0));
  plVar1 = *(long **)(this + 0x438);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_01 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_01);
  *(undefined **)(this_01 + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this_01 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_01 = &PTR_hash_0010cf48;
  *(undefined8 *)(this_01 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_01 + 0x10) = 0;
  *(undefined8 *)(this_01 + 0x30) = uVar3;
  *(code **)(this_01 + 0x38) = _save;
  *(EditorExport **)(this_01 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_01,(int)this_01 + 0x28);
  *(char **)(this_01 + 0x20) = "EditorExport::_save";
  Callable::Callable((Callable *)local_48,this_01);
  StringName::StringName((StringName *)&local_50,"timeout",false);
  (*pcVar2)(plVar1,(StringName *)&local_50,(Callable *)local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_48);
  StringName::StringName((StringName *)local_48,"export_presets_updated",true);
  if (_export_presets_updated == local_48[0]) {
    if ((StringName::configured != '\0') && (local_48[0] != 0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    _export_presets_updated = local_48[0];
  }
  StringName::StringName((StringName *)local_48,"export_presets_runnable_updated",true);
  if (_export_presets_runnable_updated == local_48[0]) {
    if ((StringName::configured != '\0') && (local_48[0] != 0)) {
      StringName::unref();
    }
  }
  else {
    StringName::unref();
    _export_presets_runnable_updated = local_48[0];
  }
  singleton = this;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::set_process(SUB81(this,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _unref(this);
  if (*(long *)param_1 != 0) {
    plVar1 = (long *)(*(long *)param_1 + -0x10);
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



/* EditorExport::_bind_methods() */

void EditorExport::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  CowData<char32_t> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  int *local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_export_presets_updated == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = 0;
    if (*(char **)(_export_presets_updated + 8) == (char *)0x0) {
      if (*(long *)(_export_presets_updated + 0x10) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_d0,(CowData *)(_export_presets_updated + 0x10));
      }
    }
    else {
      String::parse_latin1((String *)&local_d0,*(char **)(_export_presets_updated + 8));
    }
  }
  _local_a8 = (undefined1  [16])0x0;
  local_b8 = 0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  local_c8 = "EditorExport";
  local_d8 = 0;
  local_c0 = 0xc;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar5 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (_export_presets_runnable_updated == 0) {
    local_d0 = 0;
  }
  else {
    local_d0 = 0;
    if (*(char **)(_export_presets_runnable_updated + 8) == (char *)0x0) {
      if (*(long *)(_export_presets_runnable_updated + 0x10) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_d0,
                   (CowData *)(_export_presets_runnable_updated + 0x10));
      }
    }
    else {
      String::parse_latin1((String *)&local_d0,*(char **)(_export_presets_runnable_updated + 8));
    }
  }
  local_b8 = 0;
  _local_a8 = (undefined1  [16])0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = (int *)0x0;
  local_60 = 0;
  local_50 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  local_c8 = "EditorExport";
  local_d8 = 0;
  local_c0 = 0xc;
  String::parse_latin1((StrRange *)&local_d8);
  StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
  ClassDB::add_signal((StringName *)&local_c8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
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
  piVar4 = local_68;
  if (local_68 != (int *)0x0) {
    LOCK();
    plVar1 = (long *)(local_68 + -4);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (local_68 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar2 = *(long *)(local_68 + -2);
      local_68 = (int *)0x0;
      if (lVar2 != 0) {
        lVar5 = 0;
        piVar6 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar6] != '\0') {
            Variant::_clear_internal();
          }
          lVar5 = lVar5 + 1;
          piVar6 = piVar6 + 6;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExport::_save() */

void __thiscall EditorExport::_save(EditorExport *this)

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
  Object *pOVar12;
  char cVar13;
  bool bVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  long lVar18;
  ulong uVar19;
  uint uVar20;
  long lVar21;
  Object *pOVar22;
  char *pcVar23;
  uint uVar24;
  uint uVar25;
  long *plVar26;
  long in_FS_OFFSET;
  String *local_e8;
  String *local_e0;
  CowData<String> *local_d8;
  long local_c8;
  String *local_c0;
  String *local_a0;
  String *local_98;
  String local_90 [8];
  Object *local_88;
  undefined8 local_80;
  long local_78;
  CowData<String> local_70 [8];
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (String *)0x0;
  local_98 = (String *)0x0;
  Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_a0);
  Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_98);
  lVar18 = *(long *)(this + 0x420);
  if (lVar18 == 0) {
    local_c0 = local_98;
    local_e8 = local_a0;
  }
  else {
    local_c8 = 0;
    local_e8 = local_a0;
    local_c0 = local_98;
    do {
      if (*(long *)(lVar18 + -8) <= local_c8) break;
      pOVar22 = *(Object **)(lVar18 + local_c8 * 8);
      if ((pOVar22 != (Object *)0x0) && (cVar13 = RefCounted::reference(), cVar13 == '\0')) {
        pOVar22 = (Object *)0x0;
      }
      itos((long)&local_68);
      operator+((char *)local_90,(String *)"preset.");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      EditorExportPreset::get_name();
      Variant::Variant((Variant *)local_58,(String *)&local_80);
      local_68 = "name";
      local_78 = 0;
      local_60 = 4;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      EditorExportPreset::get_platform();
      (**(code **)(*(long *)local_88 + 0x1e0))((CowData<char32_t> *)&local_80);
      Variant::Variant((Variant *)local_58,(String *)&local_80);
      local_68 = "platform";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if (((local_88 != (Object *)0x0) &&
          (cVar13 = RefCounted::unreference(), pOVar12 = local_88, cVar13 != '\0')) &&
         (cVar13 = predelete_handler(local_88), cVar13 != '\0')) {
        (**(code **)(*(long *)pOVar12 + 0x140))();
        Memory::free_static(pOVar12,false);
      }
      bVar14 = (bool)EditorExportPreset::is_runnable();
      Variant::Variant((Variant *)local_58,bVar14);
      local_68 = "runnable";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      bVar14 = (bool)EditorExportPreset::are_advanced_options_enabled();
      Variant::Variant((Variant *)local_58,bVar14);
      local_68 = "advanced_options";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      bVar14 = (bool)EditorExportPreset::is_dedicated_server();
      Variant::Variant((Variant *)local_58,bVar14);
      local_68 = "dedicated_server";
      local_78 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      EditorExportPreset::get_custom_features();
      Variant::Variant((Variant *)local_58,(String *)&local_80);
      local_68 = "custom_features";
      local_78 = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      uVar15 = EditorExportPreset::get_export_filter();
      switch(uVar15) {
      case 0:
        Variant::Variant((Variant *)local_58,"all_resources");
        local_68 = "export_filter";
        local_78 = 0;
        local_60 = 0xd;
        String::parse_latin1((StrRange *)&local_78);
        ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        break;
      case 1:
        pcVar23 = "scenes";
        goto LAB_00100f52;
      case 2:
        pcVar23 = "resources";
        goto LAB_00100f52;
      case 3:
        pcVar23 = "exclude";
LAB_00100f52:
        Variant::Variant((Variant *)local_58,pcVar23);
        local_68 = "export_filter";
        local_78 = 0;
        local_60 = 0xd;
        String::parse_latin1((StrRange *)&local_78);
        ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        EditorExportPreset::get_files_to_export();
        Variant::Variant((Variant *)local_58,(Vector *)&local_78);
        local_68 = "export_files";
        local_80 = 0;
        local_60 = 0xc;
        String::parse_latin1((StrRange *)&local_80);
        ConfigFile::set_value(local_e8,local_90,(Variant *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<String>::_unref(local_70);
        break;
      case 4:
        Variant::Variant((Variant *)local_58,"customized");
        local_68 = "export_filter";
        local_78 = 0;
        local_60 = 0xd;
        String::parse_latin1((StrRange *)&local_78);
        ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        EditorExportPreset::get_customized_files();
        Variant::Variant((Variant *)local_58,(Dictionary *)&local_80);
        local_68 = "customized_files";
        local_78 = 0;
        local_60 = 0x10;
        String::parse_latin1((StrRange *)&local_78);
        ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        Dictionary::~Dictionary((Dictionary *)&local_80);
      }
      local_d8 = local_70;
      EditorExportPreset::get_include_filter();
      Variant::Variant((Variant *)local_58,(String *)&local_80);
      local_68 = "include_filter";
      local_78 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      EditorExportPreset::get_exclude_filter();
      Variant::Variant((Variant *)local_58,(String *)&local_80);
      local_68 = "exclude_filter";
      local_78 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      EditorExportPreset::get_export_path();
      Variant::Variant((Variant *)local_58,(String *)&local_80);
      local_68 = "export_path";
      local_78 = 0;
      local_60 = 0xb;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      EditorExportPreset::get_patches();
      Variant::Variant((Variant *)local_58,(Vector *)&local_78);
      local_68 = "patches";
      local_80 = 0;
      local_60 = 7;
      String::parse_latin1((StrRange *)&local_80);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<String>::_unref(local_d8);
      EditorExportPreset::get_enc_in_filter();
      Variant::Variant((Variant *)local_58,(String *)&local_80);
      local_68 = "encryption_include_filters";
      local_78 = 0;
      local_60 = 0x1a;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      EditorExportPreset::get_enc_ex_filter();
      Variant::Variant((Variant *)local_58,(String *)&local_80);
      local_68 = "encryption_exclude_filters";
      local_78 = 0;
      local_60 = 0x1a;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      uVar19 = EditorExportPreset::get_seed();
      Variant::Variant((Variant *)local_58,uVar19);
      local_68 = "seed";
      local_78 = 0;
      local_60 = 4;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      bVar14 = (bool)EditorExportPreset::get_enc_pck();
      Variant::Variant((Variant *)local_58,bVar14);
      local_68 = "encrypt_pck";
      local_78 = 0;
      local_60 = 0xb;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      bVar14 = (bool)EditorExportPreset::get_enc_directory();
      Variant::Variant((Variant *)local_58,bVar14);
      local_68 = "encrypt_directory";
      local_78 = 0;
      local_60 = 0x11;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar16 = EditorExportPreset::get_script_export_mode();
      Variant::Variant((Variant *)local_58,iVar16);
      local_68 = "script_export_mode";
      local_78 = 0;
      local_60 = 0x12;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_e8,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      EditorExportPreset::get_script_encryption_key();
      Variant::Variant((Variant *)local_58,(String *)&local_80);
      local_68 = "script_encryption_key";
      local_78 = 0;
      local_60 = 0x15;
      String::parse_latin1((StrRange *)&local_78);
      ConfigFile::set_value(local_c0,local_90,(Variant *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      local_68 = ".options";
      local_78 = 0;
      local_60 = 8;
      String::parse_latin1((StrRange *)&local_78);
      itos((long)&local_80);
      operator+((char *)&local_68,(String *)"preset.");
      String::operator+((String *)&local_88,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      plVar26 = *(long **)(pOVar22 + 0x268);
      if (plVar26 != (long *)0x0) {
        do {
          lVar18 = plVar26[2];
          if ((*(long *)(pOVar22 + 0x228) != 0) && (*(int *)(pOVar22 + 0x24c) != 0)) {
            uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pOVar22 + 0x248) * 4);
            uVar19 = CONCAT44(0,uVar2);
            lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pOVar22 + 0x248) * 8);
            if (lVar18 == 0) {
              uVar17 = StringName::get_empty_hash();
              lVar18 = plVar26[2];
            }
            else {
              uVar17 = *(uint *)(lVar18 + 0x20);
            }
            if (uVar17 == 0) {
              uVar17 = 1;
            }
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar17 * lVar3;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar19;
            lVar21 = SUB168(auVar4 * auVar8,8);
            uVar24 = *(uint *)(*(long *)(pOVar22 + 0x230) + lVar21 * 4);
            uVar20 = SUB164(auVar4 * auVar8,8);
            if (uVar24 != 0) {
              uVar25 = 0;
              while ((uVar24 != uVar17 ||
                     (*(long *)(*(long *)(*(long *)(pOVar22 + 0x228) + lVar21 * 8) + 0x10) != lVar18
                     ))) {
                uVar25 = uVar25 + 1;
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (ulong)(uVar20 + 1) * lVar3;
                auVar9._8_8_ = 0;
                auVar9._0_8_ = uVar19;
                lVar21 = SUB168(auVar5 * auVar9,8);
                uVar24 = *(uint *)(*(long *)(pOVar22 + 0x230) + lVar21 * 4);
                uVar20 = SUB164(auVar5 * auVar9,8);
                if ((uVar24 == 0) ||
                   (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar24 * lVar3, auVar10._8_8_ = 0,
                   auVar10._0_8_ = uVar19, auVar7._8_8_ = 0,
                   auVar7._0_8_ = (ulong)((uVar2 + uVar20) - SUB164(auVar6 * auVar10,8)) * lVar3,
                   auVar11._8_8_ = 0, auVar11._0_8_ = uVar19, SUB164(auVar7 * auVar11,8) < uVar25))
                goto LAB_00101a28;
              }
              if ((*(byte *)(*(long *)(*(long *)(pOVar22 + 0x228) + (ulong)uVar20 * 8) + 0x43) &
                  0x20) != 0) {
                if (lVar18 == 0) {
                  local_78 = 0;
                }
                else {
                  pcVar23 = *(char **)(lVar18 + 8);
                  local_78 = 0;
                  if (pcVar23 == (char *)0x0) {
                    if (*(long *)(lVar18 + 0x10) != 0) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)&local_78,(CowData *)(lVar18 + 0x10));
                    }
                  }
                  else {
                    local_60 = strlen(pcVar23);
                    local_68 = pcVar23;
                    String::parse_latin1((StrRange *)&local_78);
                  }
                }
                ConfigFile::set_value(local_c0,(String *)&local_88,(Variant *)&local_78);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                goto LAB_00101773;
              }
            }
          }
LAB_00101a28:
          if (lVar18 == 0) {
            local_78 = 0;
          }
          else {
            pcVar23 = *(char **)(lVar18 + 8);
            local_78 = 0;
            if (pcVar23 == (char *)0x0) {
              if (*(long *)(lVar18 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar18 + 0x10));
              }
            }
            else {
              local_60 = strlen(pcVar23);
              local_68 = pcVar23;
              String::parse_latin1((StrRange *)&local_78);
            }
          }
          ConfigFile::set_value(local_e8,(String *)&local_88,(Variant *)&local_78);
          lVar18 = local_78;
          if (local_78 != 0) {
            LOCK();
            plVar1 = (long *)(local_78 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_78 = 0;
              Memory::free_static((void *)(lVar18 + -0x10),false);
            }
          }
LAB_00101773:
          plVar26 = (long *)*plVar26;
        } while (plVar26 != (long *)0x0);
        local_e8 = local_a0;
        local_c0 = local_98;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      cVar13 = RefCounted::unreference();
      if ((cVar13 != '\0') && (cVar13 = predelete_handler(pOVar22), cVar13 != '\0')) {
        (**(code **)(*(long *)pOVar22 + 0x140))(pOVar22);
        Memory::free_static(pOVar22,false);
      }
      local_c8 = local_c8 + 1;
      lVar18 = *(long *)(this + 0x420);
    } while (lVar18 != 0);
  }
  local_e0 = (String *)&local_68;
  local_68 = (char *)0x0;
  String::parse_latin1(local_e0,"res://export_presets.cfg");
  ConfigFile::save(local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
  local_68 = (char *)0x0;
  String::parse_latin1(local_e0,"res://.godot/export_credentials.cfg");
  ConfigFile::save(local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
  cVar13 = RefCounted::unreference();
  if ((cVar13 != '\0') && (cVar13 = predelete_handler((Object *)local_c0), cVar13 != '\0')) {
    (**(code **)(*(long *)local_c0 + 0x140))(local_c0);
    Memory::free_static(local_c0,false);
  }
  cVar13 = RefCounted::unreference();
  if ((cVar13 == '\0') || (cVar13 = predelete_handler((Object *)local_e8), cVar13 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)local_e8 + 0x140))(local_e8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(local_e8,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExport::get_export_plugins() */

void EditorExport::get_export_plugins(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_RSI;
  long in_RDI;
  bool bVar4;
  
  *(undefined8 *)(in_RDI + 8) = 0;
  if (*(long *)(in_RSI + 0x430) != 0) {
    CowData<Ref<EditorExportPlugin>>::_unref((CowData<Ref<EditorExportPlugin>> *)(in_RDI + 8));
    if (*(long *)(in_RSI + 0x430) != 0) {
      plVar1 = (long *)(*(long *)(in_RSI + 0x430) + -0x10);
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
        *(undefined8 *)(in_RDI + 8) = *(undefined8 *)(in_RSI + 0x430);
      }
    }
  }
  return;
}



/* CowData<Ref<EditorExportPlugin> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Ref<EditorExportPlugin>>::_copy_on_write(CowData<Ref<EditorExportPlugin>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* CowData<Ref<EditorExportPlatform> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Ref<EditorExportPlatform>>::_copy_on_write(CowData<Ref<EditorExportPlatform>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* EditorExport::poll_export_platforms() */

undefined4 __thiscall EditorExport::poll_export_platforms(EditorExport *this)

{
  code *pcVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  
  lVar3 = *(long *)(this + 0x410);
  if (lVar3 == 0) {
    uVar5 = 0;
  }
  else {
    lVar4 = 0;
    uVar5 = 0;
    do {
      while( true ) {
        if (*(long *)(lVar3 + -8) <= lVar4) {
          return uVar5;
        }
        CowData<Ref<EditorExportPlatform>>::_copy_on_write
                  ((CowData<Ref<EditorExportPlatform>> *)(this + 0x410));
        lVar3 = *(long *)(this + 0x410);
        pcVar1 = *(code **)(**(long **)(lVar3 + lVar4 * 8) + 0x1f0);
        if (pcVar1 == EditorExportPlatform::poll_export) break;
        uVar2 = (*pcVar1)();
        lVar3 = *(long *)(this + 0x410);
        if ((char)uVar2 == '\0') break;
        lVar4 = lVar4 + 1;
        uVar5 = uVar2;
        if (lVar3 == 0) {
          return uVar2;
        }
      }
      lVar4 = lVar4 + 1;
    } while (lVar3 != 0);
  }
  return uVar5;
}



/* EditorExport::~EditorExport() */

void __thiscall EditorExport::~EditorExport(EditorExport *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010cd80;
  CowData<Ref<EditorExportPlugin>>::_unref((CowData<Ref<EditorExportPlugin>> *)(this + 0x430));
  CowData<Ref<EditorExportPreset>>::_unref((CowData<Ref<EditorExportPreset>> *)(this + 0x420));
  CowData<Ref<EditorExportPlatform>>::_unref((CowData<Ref<EditorExportPlatform>> *)(this + 0x410));
  Node::~Node((Node *)this);
  return;
}



/* CowData<Ref<EditorExportPreset> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Ref<EditorExportPreset>>::_copy_on_write(CowData<Ref<EditorExportPreset>> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined8 *puVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar1 * 8 != 0) {
    uVar7 = lVar1 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar8 = 0;
  *puVar5 = 1;
  puVar5[1] = lVar1;
  plVar6 = puVar5 + 2;
  if (lVar1 != 0) {
    do {
      lVar2 = *(long *)this;
      *plVar6 = 0;
      lVar2 = *(long *)(lVar2 + lVar8 * 8);
      if (lVar2 != 0) {
        *plVar6 = lVar2;
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *plVar6 = 0;
        }
      }
      lVar8 = lVar8 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar1 != lVar8);
  }
  _unref(this);
  *(undefined8 **)this = puVar5 + 2;
  return;
}



/* EditorExport::~EditorExport() */

void __thiscall EditorExport::~EditorExport(EditorExport *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010cd80;
  CowData<Ref<EditorExportPlugin>>::_unref((CowData<Ref<EditorExportPlugin>> *)(this + 0x430));
  CowData<Ref<EditorExportPreset>>::_unref((CowData<Ref<EditorExportPreset>> *)(this + 0x420));
  CowData<Ref<EditorExportPlatform>>::_unref((CowData<Ref<EditorExportPlatform>> *)(this + 0x410));
  Node::~Node((Node *)this);
  operator_delete(this,0x448);
  return;
}



/* EditorExport::remove_export_platform(Ref<EditorExportPlatform> const&) */

void __thiscall EditorExport::remove_export_platform(EditorExport *this,Ref *param_1)

{
  long lVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar1 = *(long *)(this + 0x410);
  plVar6 = *(long **)param_1;
  if ((lVar1 != 0) && (lVar7 = *(long *)(lVar1 + -8), 0 < lVar7)) {
    lVar5 = 0;
    do {
      if (plVar6 == *(long **)(lVar1 + lVar5 * 8)) {
        if (lVar5 < lVar7) {
          CowData<Ref<EditorExportPlatform>>::_copy_on_write
                    ((CowData<Ref<EditorExportPlatform>> *)(this + 0x410));
          lVar1 = *(long *)(this + 0x410);
          if (lVar1 == 0) {
            lVar7 = -1;
          }
          else {
            lVar7 = *(long *)(lVar1 + -8) + -1;
            if (lVar5 < lVar7) {
              do {
                pOVar2 = *(Object **)(lVar1 + 8 + lVar5 * 8);
                pOVar3 = *(Object **)(lVar1 + lVar5 * 8);
                if (pOVar2 != pOVar3) {
                  *(Object **)(lVar1 + lVar5 * 8) = pOVar2;
                  if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0'))
                  {
                    *(undefined8 *)(lVar1 + lVar5 * 8) = 0;
                  }
                  if (((pOVar3 != (Object *)0x0) &&
                      (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
                     (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                  }
                }
                lVar5 = lVar5 + 1;
              } while (lVar7 != lVar5);
            }
          }
          CowData<Ref<EditorExportPlatform>>::resize<false>
                    ((CowData<Ref<EditorExportPlatform>> *)(this + 0x410),lVar7);
          plVar6 = *(long **)param_1;
        }
        else {
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,lVar5,lVar7,"p_index","size()",""
                     ,false,false);
          plVar6 = *(long **)param_1;
        }
        break;
      }
      lVar5 = lVar5 + 1;
    } while (lVar7 != lVar5);
  }
  if (*(code **)(*plVar6 + 0x228) != EditorExportPlatform::cleanup) {
    (**(code **)(*plVar6 + 0x228))();
  }
  *(undefined2 *)(this + 0x441) = 0x101;
  return;
}



/* EditorExport::add_export_platform(Ref<EditorExportPlatform> const&) */

void __thiscall EditorExport::add_export_platform(EditorExport *this,Ref *param_1)

{
  undefined8 *puVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  Object *pOVar5;
  long lVar6;
  long lVar7;
  
  pOVar5 = *(Object **)param_1;
  if ((pOVar5 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
    pOVar5 = (Object *)0x0;
  }
  if (*(long *)(this + 0x410) == 0) {
    lVar6 = 1;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 0x410) + -8) + 1;
  }
  iVar4 = CowData<Ref<EditorExportPlatform>>::resize<false>
                    ((CowData<Ref<EditorExportPlatform>> *)(this + 0x410),lVar6);
  if (iVar4 == 0) {
    if (*(long *)(this + 0x410) == 0) {
      lVar7 = -1;
      lVar6 = 0;
LAB_001025fa:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar6,"p_index","size()","",false,
                 false);
      goto LAB_00102538;
    }
    lVar6 = *(long *)(*(long *)(this + 0x410) + -8);
    lVar7 = lVar6 + -1;
    if (lVar7 < 0) goto LAB_001025fa;
    CowData<Ref<EditorExportPlatform>>::_copy_on_write
              ((CowData<Ref<EditorExportPlatform>> *)(this + 0x410));
    puVar1 = (undefined8 *)(*(long *)(this + 0x410) + lVar7 * 8);
    pOVar2 = (Object *)*puVar1;
    if (pOVar2 == pOVar5) goto LAB_00102538;
    *puVar1 = pOVar5;
    if (pOVar5 == (Object *)0x0) {
      if (((pOVar2 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
         (cVar3 = predelete_handler(pOVar2), cVar3 == '\0')) goto LAB_00102549;
LAB_0010251e:
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
      goto LAB_00102538;
    }
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *puVar1 = 0;
    }
    if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) goto LAB_0010251e;
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
LAB_00102538:
    if (pOVar5 == (Object *)0x0) goto LAB_00102549;
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar5), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_00102549:
  *(undefined2 *)(this + 0x441) = 0x101;
  return;
}



/* EditorExport::remove_export_preset(int) */

void __thiscall EditorExport::remove_export_preset(EditorExport *this,int param_1)

{
  long lVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long in_FS_OFFSET;
  
  lVar5 = (long)param_1;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar6 = *(long *)(this + 0x420);
  if (lVar5 < 0) {
    if (lVar6 == 0) goto LAB_00102820;
    lVar6 = *(long *)(lVar6 + -8);
  }
  else if (lVar6 == 0) {
LAB_00102820:
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + -8);
    if (lVar5 < lVar6) {
      CowData<Ref<EditorExportPreset>>::_copy_on_write
                ((CowData<Ref<EditorExportPreset>> *)(this + 0x420));
      lVar6 = *(long *)(this + 0x420);
      if (lVar6 == 0) {
        lVar7 = -1;
      }
      else {
        lVar7 = *(long *)(lVar6 + -8) + -1;
        if (lVar5 < lVar7) {
          do {
            while( true ) {
              pOVar2 = *(Object **)(lVar6 + 8 + lVar5 * 8);
              pOVar3 = *(Object **)(lVar6 + lVar5 * 8);
              if (pOVar2 != pOVar3) break;
LAB_001026d0:
              lVar5 = lVar5 + 1;
              if (lVar5 == lVar7) goto LAB_00102740;
            }
            *(Object **)(lVar6 + lVar5 * 8) = pOVar2;
            if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
              *(undefined8 *)(lVar6 + lVar5 * 8) = 0;
            }
            if (((pOVar3 == (Object *)0x0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0')) ||
               (cVar4 = predelete_handler(pOVar3), cVar4 == '\0')) goto LAB_001026d0;
            lVar5 = lVar5 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          } while (lVar5 != lVar7);
        }
      }
LAB_00102740:
      CowData<Ref<EditorExportPreset>>::resize<false>
                ((CowData<Ref<EditorExportPreset>> *)(this + 0x420),lVar7);
      goto LAB_0010274b;
    }
  }
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,lVar5,lVar6,"p_index","size()","",false,
             false);
LAB_0010274b:
  if (this[0x440] == (EditorExport)0x0) {
    Timer::start(_LC6);
  }
  (**(code **)(*(long *)this + 0xd0))(this,&_export_presets_runnable_updated,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorExport::add_export_preset(Ref<EditorExportPreset> const&, int) */

void __thiscall EditorExport::add_export_preset(EditorExport *this,Ref *param_1,int param_2)

{
  undefined8 *puVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  Ref *pRVar9;
  long in_FS_OFFSET;
  Ref *local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar8 = (long)param_2;
  pRVar9 = *(Ref **)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 < 0) {
    local_60 = (Ref *)0x0;
    Ref<EditorExportPreset>::operator=((Ref<EditorExportPreset> *)&local_60,pRVar9);
    if (*(long *)(this + 0x420) == 0) {
      lVar8 = 1;
    }
    else {
      lVar8 = *(long *)(*(long *)(this + 0x420) + -8) + 1;
    }
    iVar5 = CowData<Ref<EditorExportPreset>>::resize<false>
                      ((CowData<Ref<EditorExportPreset>> *)(this + 0x420),lVar8);
    pRVar9 = local_60;
    if (iVar5 == 0) {
      if (*(long *)(this + 0x420) == 0) {
        lVar7 = -1;
        lVar8 = 0;
      }
      else {
        lVar8 = *(long *)(*(long *)(this + 0x420) + -8);
        lVar7 = lVar8 + -1;
        if (-1 < lVar7) {
          CowData<Ref<EditorExportPreset>>::_copy_on_write
                    ((CowData<Ref<EditorExportPreset>> *)(this + 0x420));
          Ref<EditorExportPreset>::operator=
                    ((Ref<EditorExportPreset> *)(*(long *)(this + 0x420) + lVar7 * 8),pRVar9);
          goto LAB_00102a96;
        }
      }
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar8,"p_index","size()","",false,
                 false);
    }
    else {
      _err_print_error("push_back","./core/templates/vector.h",0x142,
                       "Condition \"err\" is true. Returning: true",0,0);
    }
LAB_00102a96:
    if (((pRVar9 != (Ref *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler((Object *)pRVar9), cVar4 != '\0')) {
      (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
      Memory::free_static(pRVar9,false);
    }
    goto LAB_001029a8;
  }
  if ((pRVar9 != (Ref *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
    pRVar9 = (Ref *)0x0;
  }
  if (*(long *)(this + 0x420) == 0) {
    lVar7 = 1;
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)(this + 0x420) + -8);
    lVar7 = lVar6 + 1;
  }
  if (lVar8 < lVar7) {
    iVar5 = CowData<Ref<EditorExportPreset>>::resize<false>
                      ((CowData<Ref<EditorExportPreset>> *)(this + 0x420),lVar7);
    if (iVar5 != 0) {
      _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                       "Condition \"err\" is true. Returning: err",0,0);
      goto LAB_00102b1d;
    }
    CowData<Ref<EditorExportPreset>>::_copy_on_write
              ((CowData<Ref<EditorExportPreset>> *)(this + 0x420));
    lVar7 = *(long *)(this + 0x420);
    if (lVar8 < lVar6) {
      do {
        while( true ) {
          pOVar3 = *(Object **)(lVar7 + -8 + lVar6 * 8);
          pOVar2 = *(Object **)(lVar7 + lVar6 * 8);
          if (pOVar3 != pOVar2) break;
LAB_001028e0:
          lVar6 = lVar6 + -1;
          if (lVar8 == lVar6) goto LAB_00102950;
        }
        *(Object **)(lVar7 + lVar6 * 8) = pOVar3;
        if ((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0')) {
          *(undefined8 *)(lVar7 + lVar6 * 8) = 0;
        }
        if (((pOVar2 == (Object *)0x0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0')) ||
           (cVar4 = predelete_handler(pOVar2), cVar4 == '\0')) goto LAB_001028e0;
        lVar6 = lVar6 + -1;
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      } while (lVar8 != lVar6);
    }
LAB_00102950:
    puVar1 = (undefined8 *)(lVar7 + lVar8 * 8);
    pOVar3 = (Object *)*puVar1;
    if (pOVar3 == (Object *)pRVar9) goto LAB_00102b1d;
    *puVar1 = pRVar9;
    if (pRVar9 == (Ref *)0x0) {
      if (((pOVar3 == (Object *)0x0) || (cVar4 = RefCounted::unreference(), cVar4 == '\0')) ||
         (cVar4 = predelete_handler(pOVar3), cVar4 == '\0')) goto LAB_001029a8;
LAB_00102bff:
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      goto LAB_00102b1d;
    }
    cVar4 = RefCounted::reference();
    if (cVar4 == '\0') {
      *puVar1 = 0;
    }
    if (((pOVar3 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
       (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) goto LAB_00102bff;
    cVar4 = RefCounted::unreference();
  }
  else {
    _err_print_index_error
              ("insert","./core/templates/cowdata.h",0xf0,lVar8,lVar7,"p_pos","new_size","",false,
               false);
LAB_00102b1d:
    if (pRVar9 == (Ref *)0x0) goto LAB_001029a8;
    cVar4 = RefCounted::unreference();
  }
  if ((cVar4 != '\0') && (cVar4 = predelete_handler((Object *)pRVar9), cVar4 != '\0')) {
    (**(code **)(*(long *)pRVar9 + 0x140))(pRVar9);
    Memory::free_static(pRVar9,false);
  }
LAB_001029a8:
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  (**(code **)(*(long *)this + 0xd0))(this,&_export_presets_runnable_updated,0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorExport::load_config() */

void __thiscall EditorExport::load_config(EditorExport *this)

{
  CowData<char32_t> *pCVar1;
  code *pcVar2;
  String *pSVar3;
  String *pSVar4;
  String *pSVar5;
  long *plVar6;
  char cVar7;
  int iVar8;
  bool bVar9;
  long lVar10;
  String *pSVar11;
  long lVar12;
  long in_FS_OFFSET;
  String *local_118;
  Ref<EditorExportPreset> *local_100;
  String *local_d8;
  String *local_d0;
  CowData<char32_t> local_c8 [8];
  Variant local_c0 [8];
  String *local_b8;
  Variant local_b0 [8];
  String local_a8 [8];
  ulong local_a0;
  long *local_98;
  undefined8 local_90;
  Ref *local_88;
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (String *)0x0;
  Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_d8);
  pSVar3 = local_d8;
  local_88 = (Ref *)0x0;
  String::parse_latin1((String *)&local_88,"res://export_presets.cfg");
  iVar8 = ConfigFile::load(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (iVar8 == 0) {
    local_d0 = (String *)0x0;
    Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_d0);
    pSVar4 = local_d0;
    local_88 = (Ref *)0x0;
    String::parse_latin1((String *)&local_88,"res://.godot/export_credentials.cfg");
    iVar8 = ConfigFile::load(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if ((iVar8 != 0) && (iVar8 != 7)) {
      Ref<ConfigFile>::unref((Ref<ConfigFile> *)&local_d0);
      goto LAB_00102d3d;
    }
    this[0x440] = (EditorExport)0x1;
LAB_00102e0e:
    itos((long)&local_88);
    operator+((char *)local_c8,(String *)"preset.");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    cVar7 = ConfigFile::has_section(pSVar3);
    if (cVar7 != '\0') {
      local_78 = 0;
      local_70 = (undefined1  [16])0x0;
      local_88 = (Ref *)0x0;
      String::parse_latin1((String *)&local_88,"platform");
      ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
      Variant::operator_cast_to_String(local_c0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      cVar7 = String::operator==((String *)local_c0,"Linux/X11");
      if (cVar7 != '\0') {
        String::parse_latin1((String *)local_c0,"Linux");
      }
      lVar10 = 0;
      local_b8 = (String *)0x0;
      lVar12 = *(long *)(this + 0x410);
      while( true ) {
        if ((lVar12 == 0) || (*(long *)(lVar12 + -8) <= lVar10)) goto LAB_00102f98;
        (**(code **)(**(long **)(lVar12 + lVar10 * 8) + 0x1e0))((String *)&local_88);
        cVar7 = String::operator==((String *)&local_88,(String *)local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (cVar7 != '\0') break;
        lVar12 = *(long *)(this + 0x410);
        lVar10 = lVar10 + 1;
      }
      if (*(long *)(this + 0x410) == 0) {
        lVar12 = 0;
LAB_001045b6:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar10,lVar12,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar12 = *(long *)(*(long *)(this + 0x410) + -8);
      if (lVar12 <= lVar10) goto LAB_001045b6;
      CowData<Ref<EditorExportPlatform>>::_copy_on_write
                ((CowData<Ref<EditorExportPlatform>> *)(this + 0x410));
      (**(code **)(**(long **)(*(long *)(this + 0x410) + lVar10 * 8) + 0x160))((String *)&local_88);
      Ref<EditorExportPreset>::operator=((Ref<EditorExportPreset> *)&local_b8,local_88);
      Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_88);
      pSVar5 = local_b8;
      if (local_b8 != (String *)0x0) {
        local_78 = 0;
        local_70 = (undefined1  [16])0x0;
        local_98 = (long *)0x0;
        String::parse_latin1((String *)&local_98,"name");
        ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
        Variant::operator_cast_to_String((Variant *)&local_88);
        EditorExportPreset::set_name(pSVar5);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        local_100 = (Ref<EditorExportPreset> *)&local_b8;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_78,false);
        local_88 = (Ref *)0x0;
        String::parse_latin1((String *)&local_88,"advanced_options");
        ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
        Variant::operator_cast_to_bool((Variant *)&local_58);
        bVar9 = SUB81(pSVar5,0);
        EditorExportPreset::set_advanced_options_enabled(bVar9);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        local_78 = 0;
        local_70 = (undefined1  [16])0x0;
        local_88 = (Ref *)0x0;
        String::parse_latin1((String *)&local_88,"runnable");
        ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
        Variant::operator_cast_to_bool((Variant *)&local_58);
        EditorExportPreset::set_runnable(bVar9);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_78,false);
        local_88 = (Ref *)0x0;
        String::parse_latin1((String *)&local_88,"dedicated_server");
        ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
        Variant::operator_cast_to_bool((Variant *)&local_58);
        EditorExportPreset::set_dedicated_server(bVar9);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        local_88 = (Ref *)0x0;
        String::parse_latin1((String *)&local_88,"custom_features");
        cVar7 = ConfigFile::has_section_key(pSVar3,(String *)local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (cVar7 != '\0') {
          local_78 = 0;
          local_70 = (undefined1  [16])0x0;
          local_98 = (long *)0x0;
          String::parse_latin1((String *)&local_98,"custom_features");
          ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
          Variant::operator_cast_to_String((Variant *)&local_88);
          EditorExportPreset::set_custom_features(pSVar5);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
        }
        local_78 = 0;
        local_70 = (undefined1  [16])0x0;
        local_88 = (Ref *)0x0;
        String::parse_latin1((String *)&local_88,"export_filter");
        ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
        Variant::operator_cast_to_String(local_b0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        cVar7 = String::operator==((String *)local_b0,"all_resources");
        if (cVar7 != '\0') {
          EditorExportPreset::set_export_filter(pSVar5,0);
          goto LAB_001035df;
        }
        cVar7 = String::operator==((String *)local_b0,"scenes");
        if (cVar7 == '\0') {
          cVar7 = String::operator==((String *)local_b0,"resources");
          if (cVar7 == '\0') {
            cVar7 = String::operator==((String *)local_b0,"exclude");
            if (cVar7 == '\0') {
              cVar7 = String::operator==((String *)local_b0,"customized");
              if (cVar7 != '\0') {
                EditorExportPreset::set_export_filter(pSVar5,4);
                Dictionary::Dictionary((Dictionary *)&local_a0);
                Variant::Variant((Variant *)&local_78,(Dictionary *)&local_a0);
                local_98 = (long *)0x0;
                String::parse_latin1((String *)&local_98,"customized_files");
                ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
                Variant::operator_cast_to_Dictionary((Variant *)&local_88);
                EditorExportPreset::set_customized_files((Dictionary *)pSVar5);
                Dictionary::~Dictionary((Dictionary *)&local_88);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                if (Variant::needs_deinit[(int)local_78] != '\0') {
                  Variant::_clear_internal();
                }
                Dictionary::~Dictionary((Dictionary *)&local_a0);
              }
              goto LAB_001035df;
            }
            EditorExportPreset::set_export_filter(pSVar5,3);
          }
          else {
            EditorExportPreset::set_export_filter(pSVar5,2);
          }
        }
        else {
          EditorExportPreset::set_export_filter(pSVar5,1);
        }
        local_78 = 0;
        local_70 = (undefined1  [16])0x0;
        local_98 = (long *)0x0;
        String::parse_latin1((String *)&local_98,"export_files");
        ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
        Variant::operator_cast_to_Vector((Variant *)&local_88);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        lVar12 = 0;
        if (local_80 == 0) goto LAB_00103ea5;
        goto LAB_001034a6;
      }
      goto LAB_00102f98;
    }
    CowData<char32_t>::_unref(local_c8);
    this[0x440] = (EditorExport)0x0;
    Ref<ConfigFile>::unref((Ref<ConfigFile> *)&local_d0);
    Ref<ConfigFile>::unref((Ref<ConfigFile> *)&local_d8);
  }
  else {
LAB_00102d3d:
    cVar7 = RefCounted::unreference();
    if ((cVar7 != '\0') && (cVar7 = predelete_handler((Object *)pSVar3), cVar7 != '\0')) {
      (**(code **)(*(long *)pSVar3 + 0x140))(pSVar3);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pSVar3,false);
        return;
      }
      goto LAB_00104763;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104763:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001034a6:
  do {
    if (*(long *)(local_80 + -8) <= lVar12) break;
    cVar7 = FileAccess::exists((String *)(local_80 + lVar12 * 8));
    if (cVar7 == '\0') {
      if (local_80 == 0) goto LAB_00103e58;
      lVar10 = *(long *)(local_80 + -8);
      if (lVar10 <= lVar12) goto LAB_00103e5b;
      EditorExportPreset::remove_export_file(pSVar5);
    }
    else {
      if (local_80 == 0) {
LAB_00103e58:
        lVar10 = 0;
LAB_00103e5b:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar12,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar10 = *(long *)(local_80 + -8);
      if (lVar10 <= lVar12) goto LAB_00103e5b;
      EditorExportPreset::add_export_file(pSVar5);
    }
    lVar12 = lVar12 + 1;
  } while (local_80 != 0);
LAB_00103ea5:
  CowData<String>::_unref((CowData<String> *)&local_80);
LAB_001035df:
  local_118 = (String *)&local_a0;
  local_78 = 0;
  local_70 = (undefined1  [16])0x0;
  local_98 = (long *)0x0;
  String::parse_latin1((String *)&local_98,"include_filter");
  ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
  Variant::operator_cast_to_String((Variant *)&local_88);
  EditorExportPreset::set_include_filter(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  local_78 = 0;
  local_70 = (undefined1  [16])0x0;
  local_98 = (long *)0x0;
  String::parse_latin1((String *)&local_98,"exclude_filter");
  ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
  Variant::operator_cast_to_String((Variant *)&local_88);
  EditorExportPreset::set_exclude_filter(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_78,"");
  local_98 = (long *)0x0;
  String::parse_latin1((String *)&local_98,"export_path");
  ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
  Variant::operator_cast_to_String((Variant *)&local_88);
  EditorExportPreset::set_export_path(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)&local_78,2);
  local_88 = (Ref *)0x0;
  String::parse_latin1((String *)&local_88,"script_export_mode");
  ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
  Variant::operator_cast_to_int((Variant *)&local_58);
  EditorExportPreset::set_script_export_mode((int)pSVar5);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  local_90 = 0;
  Variant::Variant((Variant *)&local_78,(Vector *)&local_98);
  local_a0 = 0;
  String::parse_latin1(local_118,"patches");
  ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
  Variant::operator_cast_to_Vector((Variant *)&local_88);
  EditorExportPreset::set_patches((Vector *)pSVar5);
  CowData<String>::_unref((CowData<String> *)&local_80);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  CowData<String>::_unref((CowData<String> *)&local_90);
  local_88 = (Ref *)0x0;
  String::parse_latin1((String *)&local_88,"seed");
  cVar7 = ConfigFile::has_section_key(pSVar3,(String *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (cVar7 != '\0') {
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    local_88 = (Ref *)0x0;
    String::parse_latin1((String *)&local_88,"seed");
    ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
    Variant::operator_cast_to_unsigned_long((Variant *)&local_58);
    EditorExportPreset::set_seed((ulong)pSVar5);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_88 = (Ref *)0x0;
  String::parse_latin1((String *)&local_88,"encrypt_pck");
  cVar7 = ConfigFile::has_section_key(pSVar3,(String *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (cVar7 != '\0') {
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    local_88 = (Ref *)0x0;
    String::parse_latin1((String *)&local_88,"encrypt_pck");
    ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
    Variant::operator_cast_to_bool((Variant *)&local_58);
    EditorExportPreset::set_enc_pck(bVar9);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_88 = (Ref *)0x0;
  String::parse_latin1((String *)&local_88,"encrypt_directory");
  cVar7 = ConfigFile::has_section_key(pSVar3,(String *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (cVar7 != '\0') {
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    local_88 = (Ref *)0x0;
    String::parse_latin1((String *)&local_88,"encrypt_directory");
    ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
    Variant::operator_cast_to_bool((Variant *)&local_58);
    EditorExportPreset::set_enc_directory(bVar9);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_88 = (Ref *)0x0;
  String::parse_latin1((String *)&local_88,"encryption_include_filters");
  cVar7 = ConfigFile::has_section_key(pSVar3,(String *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (cVar7 != '\0') {
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    local_98 = (long *)0x0;
    String::parse_latin1((String *)&local_98,"encryption_include_filters");
    ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
    Variant::operator_cast_to_String((Variant *)&local_88);
    EditorExportPreset::set_enc_in_filter(pSVar5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_88 = (Ref *)0x0;
  String::parse_latin1((String *)&local_88,"encryption_exclude_filters");
  cVar7 = ConfigFile::has_section_key(pSVar3,(String *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (cVar7 != '\0') {
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    local_98 = (long *)0x0;
    String::parse_latin1((String *)&local_98,"encryption_exclude_filters");
    ConfigFile::get_value((String *)&local_58,pSVar3,(Variant *)local_c8);
    Variant::operator_cast_to_String((Variant *)&local_88);
    EditorExportPreset::set_enc_ex_filter(pSVar5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_88 = (Ref *)0x0;
  String::parse_latin1((String *)&local_88,"script_encryption_key");
  cVar7 = ConfigFile::has_section_key(pSVar4,(String *)local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if (cVar7 != '\0') {
    local_78 = 0;
    local_70 = (undefined1  [16])0x0;
    local_98 = (long *)0x0;
    String::parse_latin1((String *)&local_98,"script_encryption_key");
    ConfigFile::get_value((String *)&local_58,pSVar4,(Variant *)local_c8);
    Variant::operator_cast_to_String((Variant *)&local_88);
    EditorExportPreset::set_script_encryption_key(pSVar5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  local_88 = (Ref *)0x0;
  String::parse_latin1((String *)&local_88,".options");
  itos((long)local_118);
  operator+((char *)&local_98,(String *)"preset.");
  String::operator+(local_a8,(String *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_98 = (long *)0x0;
  ConfigFile::get_section_keys(pSVar3,(List *)local_a8);
  if (local_98 != (long *)0x0) {
    for (pSVar11 = (String *)*local_98; pSVar11 != (String *)0x0;
        pSVar11 = *(String **)(pSVar11 + 8)) {
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      ConfigFile::get_value((String *)&local_78,pSVar3,(Variant *)local_a8);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      StringName::StringName((StringName *)&local_88,pSVar11,false);
      Object::set((StringName *)pSVar5,(Variant *)&local_88,(bool *)&local_78);
      if ((StringName::configured != '\0') && (local_88 != (Ref *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  cVar7 = ConfigFile::has_section(pSVar4);
  if (cVar7 != '\0') {
    if (local_98 != (long *)0x0) {
      do {
        plVar6 = local_98;
        pCVar1 = (CowData<char32_t> *)*local_98;
        if (pCVar1 == (CowData<char32_t> *)0x0) goto LAB_0010444e;
        if (local_98 == *(long **)(pCVar1 + 0x18)) {
          lVar12 = *(long *)(pCVar1 + 8);
          lVar10 = *(long *)(pCVar1 + 0x10);
          *local_98 = lVar12;
          if (pCVar1 == (CowData<char32_t> *)local_98[1]) {
            local_98[1] = lVar10;
          }
          if (lVar10 != 0) {
            *(long *)(lVar10 + 8) = lVar12;
            lVar12 = *(long *)(pCVar1 + 8);
          }
          if (lVar12 != 0) {
            *(long *)(lVar12 + 0x10) = lVar10;
          }
          CowData<char32_t>::_unref(pCVar1);
          Memory::free_static(pCVar1,false);
          *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
        }
        else {
          _err_print_error("erase","./core/templates/list.h",0xe7,
                           "Condition \"p_I->data != this\" is true. Returning: false",0,0);
        }
      } while ((int)local_98[2] != 0);
      Memory::free_static(local_98,false);
      local_98 = (long *)0x0;
    }
LAB_0010444e:
    ConfigFile::get_section_keys(pSVar4,(List *)local_a8);
    if ((local_98 != (long *)0x0) && (pSVar11 = (String *)*local_98, pSVar11 != (String *)0x0)) {
      do {
        StringName::StringName((StringName *)&local_88,pSVar11,false);
        local_a0 = local_a0 & 0xffffffff00000000;
        cVar7 = HashMap<StringName,PropertyInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,PropertyInfo>>>
                ::_lookup_pos((HashMap<StringName,PropertyInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,PropertyInfo>>>
                               *)(pSVar5 + 0x220),(StringName *)&local_88,(uint *)local_118);
        if ((StringName::configured != '\0') && (local_88 != (Ref *)0x0)) {
          StringName::unref();
        }
        if (cVar7 != '\0') {
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          ConfigFile::get_value((String *)&local_78,pSVar4,(Variant *)local_a8);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          StringName::StringName((StringName *)&local_88,pSVar11,false);
          Object::set((StringName *)pSVar5,(Variant *)&local_88,(bool *)&local_78);
          if ((StringName::configured != '\0') && (local_88 != (Ref *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_78] != '\0') {
            Variant::_clear_internal();
          }
        }
        pSVar11 = *(String **)(pSVar11 + 8);
      } while (pSVar11 != (String *)0x0);
    }
  }
  add_export_preset(this,(Ref *)local_100,-1);
  if (local_98 != (long *)0x0) {
    do {
      plVar6 = local_98;
      pCVar1 = (CowData<char32_t> *)*local_98;
      if (pCVar1 == (CowData<char32_t> *)0x0) {
        if ((int)local_98[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00103c89;
        }
        break;
      }
      if (local_98 == *(long **)(pCVar1 + 0x18)) {
        lVar12 = *(long *)(pCVar1 + 8);
        lVar10 = *(long *)(pCVar1 + 0x10);
        *local_98 = lVar12;
        if (pCVar1 == (CowData<char32_t> *)local_98[1]) {
          local_98[1] = lVar10;
        }
        if (lVar10 != 0) {
          *(long *)(lVar10 + 8) = lVar12;
          lVar12 = *(long *)(pCVar1 + 8);
        }
        if (lVar12 != 0) {
          *(long *)(lVar12 + 0x10) = lVar10;
        }
        CowData<char32_t>::_unref(pCVar1);
        Memory::free_static(pCVar1,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
    } while ((int)local_98[2] != 0);
    Memory::free_static(local_98,false);
  }
LAB_00103c89:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
LAB_00102f98:
  local_100 = (Ref<EditorExportPreset> *)&local_b8;
  Ref<EditorExportPreset>::unref(local_100);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  CowData<char32_t>::_unref(local_c8);
  goto LAB_00102e0e;
}



/* EditorExport::update_export_presets() */

void __thiscall EditorExport::update_export_presets(EditorExport *this)

{
  int *piVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined4 uVar4;
  void *pvVar5;
  long *plVar6;
  undefined8 uVar7;
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
  bool bVar24;
  bool bVar25;
  Object *pOVar26;
  undefined8 uVar27;
  char cVar28;
  byte bVar29;
  uint uVar30;
  long *plVar31;
  undefined1 (*pauVar32) [16];
  undefined8 *puVar33;
  Object *pOVar34;
  undefined4 *puVar35;
  undefined1 *puVar36;
  Variant *this_00;
  int iVar37;
  Object *pOVar38;
  int *piVar39;
  long lVar40;
  uint uVar41;
  ulong uVar42;
  uint uVar43;
  undefined4 *puVar44;
  long lVar45;
  EditorExport EVar46;
  long in_FS_OFFSET;
  long local_e8;
  long local_e0;
  Object *local_a8;
  Object *local_a0;
  CowData<char32_t> local_98 [8];
  long local_90;
  HashMap<StringName,List<EditorExportPlatform::ExportOption,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorExportPlatform::ExportOption,DefaultAllocator>>>>
  local_88 [8];
  undefined1 local_80 [16];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_80 = (undefined1  [16])0x0;
  local_60 = 2;
  local_70 = (undefined1  [16])0x0;
  if (this[0x442] != (EditorExport)0x0) {
    this[0x442] = (EditorExport)0x0;
    CowData<Ref<EditorExportPreset>>::resize<false>
              ((CowData<Ref<EditorExportPreset>> *)(this + 0x420),0);
    load_config(this);
  }
  lVar40 = *(long *)(this + 0x410);
  if (lVar40 != 0) {
    local_e8 = 0;
    do {
      if (*(long *)(lVar40 + -8) <= local_e8) break;
      local_a8 = *(Object **)(lVar40 + local_e8 * 8);
      if ((local_a8 == (Object *)0x0) || (cVar28 = RefCounted::reference(), cVar28 == '\0')) {
        local_a8 = (Object *)0x0;
      }
      EVar46 = this[0x441];
      if (*(code **)(*(long *)local_a8 + 0x1c0) !=
          EditorExportPlatform::should_update_export_options) {
        bVar29 = (**(code **)(*(long *)local_a8 + 0x1c0))();
        EVar46 = (EditorExport)((byte)EVar46 | bVar29);
      }
      lVar40 = *(long *)(this + 0x430);
      if (lVar40 != 0) {
        lVar45 = 0;
        do {
          if (*(long *)(lVar40 + -8) <= lVar45) break;
          CowData<Ref<EditorExportPlugin>>::_copy_on_write
                    ((CowData<Ref<EditorExportPlugin>> *)(this + 0x430));
          lVar40 = lVar45 * 8;
          lVar45 = lVar45 + 1;
          bVar29 = (**(code **)(**(long **)(*(long *)(this + 0x430) + lVar40) + 0x1b8))();
          EVar46 = (EditorExport)((byte)EVar46 | bVar29);
          lVar40 = *(long *)(this + 0x430);
        } while (lVar40 != 0);
      }
      if (EVar46 != (EditorExport)0x0) {
        local_a0 = (Object *)0x0;
        (**(code **)(*(long *)local_a8 + 0x1b8))
                  (local_a8,(List<EditorExportPlatform::ExportOption,DefaultAllocator> *)&local_a0);
        lVar40 = *(long *)(this + 0x430);
        for (lVar45 = 0; (lVar40 != 0 && (lVar45 < *(long *)(lVar40 + -8))); lVar45 = lVar45 + 1) {
          plVar31 = *(long **)(lVar40 + lVar45 * 8);
          (**(code **)(*plVar31 + 0x1a8))
                    (plVar31,&local_a8,
                     (List<EditorExportPlatform::ExportOption,DefaultAllocator> *)&local_a0);
          lVar40 = *(long *)(this + 0x430);
        }
        (**(code **)(*(long *)local_a8 + 0x1e0))((String *)local_98);
        StringName::StringName((StringName *)&local_90,(String *)local_98,false);
        plVar31 = (long *)HashMap<StringName,List<EditorExportPlatform::ExportOption,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorExportPlatform::ExportOption,DefaultAllocator>>>>
                          ::operator[](local_88,(StringName *)&local_90);
        puVar33 = (undefined8 *)*plVar31;
        if (puVar33 != (undefined8 *)0x0) {
          do {
            pvVar5 = (void *)*puVar33;
            if (pvVar5 == (void *)0x0) goto LAB_00104d7a;
            if (*(undefined8 **)((long)pvVar5 + 0x60) == puVar33) {
              *puVar33 = *(undefined8 *)((long)pvVar5 + 0x50);
              if (pvVar5 == (void *)puVar33[1]) {
                puVar33[1] = *(undefined8 *)((long)pvVar5 + 0x58);
              }
              if (*(long *)((long)pvVar5 + 0x58) != 0) {
                *(undefined8 *)(*(long *)((long)pvVar5 + 0x58) + 0x50) =
                     *(undefined8 *)((long)pvVar5 + 0x50);
              }
              if (*(long *)((long)pvVar5 + 0x50) != 0) {
                *(undefined8 *)(*(long *)((long)pvVar5 + 0x50) + 0x58) =
                     *(undefined8 *)((long)pvVar5 + 0x58);
              }
              if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x30)] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 8));
              Memory::free_static(pvVar5,false);
              *(int *)(puVar33 + 2) = *(int *)(puVar33 + 2) + -1;
            }
            else {
              _err_print_error("erase","./core/templates/list.h",0xe7,
                               "Condition \"p_I->data != this\" is true. Returning: false",0,0);
            }
            puVar33 = (undefined8 *)*plVar31;
          } while (*(int *)(puVar33 + 2) != 0);
          Memory::free_static(puVar33,false);
          *plVar31 = 0;
        }
        puVar33 = (undefined8 *)0x0;
LAB_00104d7a:
        if ((local_a0 != (Object *)0x0) &&
           (puVar44 = *(undefined4 **)local_a0, puVar44 != (undefined4 *)0x0)) {
          if (puVar33 == (undefined8 *)0x0) {
            pauVar32 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *plVar31 = (long)pauVar32;
            *(undefined4 *)pauVar32[1] = 0;
            *pauVar32 = (undefined1  [16])0x0;
          }
          do {
            while( true ) {
              puVar35 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
              *(undefined1 (*) [16])(puVar35 + 2) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(puVar35 + 0xe) = (undefined1  [16])0x0;
              *puVar35 = 0;
              *(undefined8 *)(puVar35 + 8) = 0;
              puVar35[0xc] = 0;
              puVar35[6] = 0;
              puVar35[10] = 6;
              lVar40 = *(long *)(puVar44 + 2);
              *(undefined2 *)(puVar35 + 0x12) = 0;
              uVar4 = *puVar44;
              *(undefined8 *)(puVar35 + 0x18) = 0;
              *puVar35 = uVar4;
              *(undefined1 (*) [16])(puVar35 + 0x14) = (undefined1  [16])0x0;
              if (lVar40 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(puVar35 + 2),(CowData *)(puVar44 + 2))
                ;
              }
              StringName::operator=((StringName *)(puVar35 + 4),(StringName *)(puVar44 + 4));
              puVar35[6] = puVar44[6];
              if (*(long *)(puVar35 + 8) != *(long *)(puVar44 + 8)) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(puVar35 + 8),(CowData *)(puVar44 + 8))
                ;
              }
              puVar35[10] = puVar44[10];
              Variant::operator=((Variant *)(puVar35 + 0xc),(Variant *)(puVar44 + 0xc));
              *(undefined1 *)(puVar35 + 0x12) = *(undefined1 *)(puVar44 + 0x12);
              *(undefined1 *)((long)puVar35 + 0x49) = *(undefined1 *)((long)puVar44 + 0x49);
              uVar7 = *(undefined8 *)(*plVar31 + 8);
              *(long *)(puVar35 + 0x18) = *plVar31;
              *(undefined8 *)(puVar35 + 0x14) = 0;
              plVar6 = (long *)*plVar31;
              *(undefined8 *)(puVar35 + 0x16) = uVar7;
              if (plVar6[1] != 0) {
                *(undefined4 **)(plVar6[1] + 0x50) = puVar35;
              }
              plVar6[1] = (long)puVar35;
              if (*plVar6 != 0) break;
              *plVar6 = (long)puVar35;
              puVar44 = *(undefined4 **)(puVar44 + 0x14);
              *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
              if (puVar44 == (undefined4 *)0x0) goto LAB_00104ef4;
            }
            puVar44 = *(undefined4 **)(puVar44 + 0x14);
            *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
          } while (puVar44 != (undefined4 *)0x0);
        }
LAB_00104ef4:
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref(local_98);
        List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
                  ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)&local_a0);
      }
      if (((local_a8 != (Object *)0x0) &&
          (cVar28 = RefCounted::unreference(), pOVar38 = local_a8, cVar28 != '\0')) &&
         (cVar28 = predelete_handler(local_a8), cVar28 != '\0')) {
        (**(code **)(*(long *)pOVar38 + 0x140))(pOVar38);
        Memory::free_static(pOVar38,false);
      }
      lVar40 = *(long *)(this + 0x410);
      local_e8 = local_e8 + 1;
    } while (lVar40 != 0);
  }
  this[0x441] = (EditorExport)0x0;
  lVar40 = *(long *)(this + 0x420);
  if (lVar40 != 0) {
    local_e0 = 0;
    bVar24 = false;
    do {
      if (*(long *)(lVar40 + -8) <= local_e0) break;
      pOVar38 = *(Object **)(lVar40 + local_e0 * 8);
      if ((pOVar38 != (Object *)0x0) && (cVar28 = RefCounted::reference(), cVar28 == '\0')) {
        pOVar38 = (Object *)0x0;
      }
      EditorExportPreset::get_platform();
      (**(code **)(*(long *)local_a0 + 0x1e0))(local_98);
      StringName::StringName((StringName *)&local_90,(String *)local_98,false);
      uVar7 = local_80._0_8_;
      if ((local_80._0_8_ != 0) && (local_60._4_4_ != 0)) {
        uVar3 = *(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4);
        uVar42 = CONCAT44(0,uVar3);
        lVar40 = *(long *)(hash_table_size_primes_inv + (local_60 & 0xffffffff) * 8);
        if (local_90 == 0) {
          uVar30 = StringName::get_empty_hash();
        }
        else {
          uVar30 = *(uint *)(local_90 + 0x20);
        }
        if (uVar30 == 0) {
          uVar30 = 1;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar30 * lVar40;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = uVar42;
        lVar45 = SUB168(auVar8 * auVar16,8);
        uVar41 = *(uint *)(local_80._8_8_ + lVar45 * 4);
        iVar37 = SUB164(auVar8 * auVar16,8);
        if (uVar41 != 0) {
          uVar43 = 0;
          do {
            if ((uVar41 == uVar30) && (*(long *)(*(long *)(uVar7 + lVar45 * 8) + 0x10) == local_90))
            {
              bVar25 = true;
              goto LAB_00104a70;
            }
            uVar43 = uVar43 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(iVar37 + 1) * lVar40;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar42;
            lVar45 = SUB168(auVar9 * auVar17,8);
            uVar41 = *(uint *)(local_80._8_8_ + lVar45 * 4);
            iVar37 = SUB164(auVar9 * auVar17,8);
          } while ((uVar41 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar41 * lVar40, auVar18._8_8_ = 0,
                  auVar18._0_8_ = uVar42, auVar11._8_8_ = 0,
                  auVar11._0_8_ = (ulong)((uVar3 + iVar37) - SUB164(auVar10 * auVar18,8)) * lVar40,
                  auVar19._8_8_ = 0, auVar19._0_8_ = uVar42, uVar43 <= SUB164(auVar11 * auVar19,8)))
          ;
        }
      }
      bVar25 = false;
LAB_00104a70:
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref(local_98);
      if (((local_a0 != (Object *)0x0) &&
          (cVar28 = RefCounted::unreference(), pOVar34 = local_a0, cVar28 != '\0')) &&
         (cVar28 = predelete_handler(local_a0), cVar28 != '\0')) {
        (**(code **)(*(long *)pOVar34 + 0x140))(pOVar34);
        Memory::free_static(pOVar34,false);
      }
      if (bVar25) {
        EditorExportPreset::get_platform();
        (**(code **)(*(long *)local_a0 + 0x1e0))(local_98);
        StringName::StringName((StringName *)&local_90,(String *)local_98,false);
        puVar33 = (undefined8 *)
                  HashMap<StringName,List<EditorExportPlatform::ExportOption,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorExportPlatform::ExportOption,DefaultAllocator>>>>
                  ::operator[](local_88,(StringName *)&local_90);
        local_a8 = (Object *)0x0;
        pOVar34 = (Object *)*puVar33;
        if (pOVar34 != (Object *)0x0) {
          puVar44 = *(undefined4 **)pOVar34;
          if (puVar44 == (undefined4 *)0x0) {
            pOVar34 = (Object *)0x0;
          }
          else {
            pOVar34 = (Object *)operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)(pOVar34 + 0x10) = 0;
            *(undefined1 (*) [16])pOVar34 = (undefined1  [16])0x0;
            local_a8 = pOVar34;
            do {
              while( true ) {
                puVar35 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
                *(undefined8 *)(puVar35 + 8) = 0;
                *(undefined1 (*) [16])(puVar35 + 2) = (undefined1  [16])0x0;
                *(undefined1 (*) [16])(puVar35 + 0xe) = (undefined1  [16])0x0;
                lVar40 = *(long *)(puVar44 + 2);
                *puVar35 = 0;
                puVar35[6] = 0;
                puVar35[10] = 6;
                puVar35[0xc] = 0;
                *(undefined2 *)(puVar35 + 0x12) = 0;
                *(undefined8 *)(puVar35 + 0x18) = 0;
                *(undefined1 (*) [16])(puVar35 + 0x14) = (undefined1  [16])0x0;
                *puVar35 = *puVar44;
                if (lVar40 != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(puVar35 + 2),(CowData *)(puVar44 + 2));
                }
                StringName::operator=((StringName *)(puVar35 + 4),(StringName *)(puVar44 + 4));
                puVar35[6] = puVar44[6];
                if (*(long *)(puVar35 + 8) != *(long *)(puVar44 + 8)) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(puVar35 + 8),(CowData *)(puVar44 + 8));
                }
                puVar35[10] = puVar44[10];
                Variant::operator=((Variant *)(puVar35 + 0xc),(Variant *)(puVar44 + 0xc));
                *(undefined1 *)(puVar35 + 0x12) = *(undefined1 *)(puVar44 + 0x12);
                *(undefined1 *)((long)puVar35 + 0x49) = *(undefined1 *)((long)puVar44 + 0x49);
                uVar7 = *(undefined8 *)(pOVar34 + 8);
                *(undefined8 *)(puVar35 + 0x14) = 0;
                *(undefined8 *)(puVar35 + 0x16) = uVar7;
                lVar40 = *(long *)(pOVar34 + 8);
                *(Object **)(puVar35 + 0x18) = pOVar34;
                if (lVar40 != 0) {
                  *(undefined4 **)(lVar40 + 0x50) = puVar35;
                }
                *(undefined4 **)(pOVar34 + 8) = puVar35;
                if (*(long *)pOVar34 != 0) break;
                *(undefined4 **)pOVar34 = puVar35;
                puVar44 = *(undefined4 **)(puVar44 + 0x14);
                *(int *)(pOVar34 + 0x10) = *(int *)(pOVar34 + 0x10) + 1;
                if (puVar44 == (undefined4 *)0x0) goto LAB_0010519b;
              }
              puVar44 = *(undefined4 **)(puVar44 + 0x14);
              *(int *)(pOVar34 + 0x10) = *(int *)(pOVar34 + 0x10) + 1;
            } while (puVar44 != (undefined4 *)0x0);
          }
        }
LAB_0010519b:
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref(local_98);
        if (((local_a0 != (Object *)0x0) &&
            (cVar28 = RefCounted::unreference(), pOVar26 = local_a0, cVar28 != '\0')) &&
           (cVar28 = predelete_handler(local_a0), cVar28 != '\0')) {
          (**(code **)(*(long *)pOVar26 + 0x140))(pOVar26);
          Memory::free_static(pOVar26,false);
        }
        if ((*(long *)(pOVar38 + 0x228) != 0) && (*(int *)(pOVar38 + 0x24c) != 0)) {
          uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pOVar38 + 0x248) * 4);
          lVar40 = 0;
          if (uVar3 != 0) {
            do {
              if (*(int *)(*(long *)(pOVar38 + 0x230) + lVar40) != 0) {
                *(int *)(*(long *)(pOVar38 + 0x230) + lVar40) = 0;
                pvVar5 = *(void **)(*(long *)(pOVar38 + 0x228) + lVar40 * 2);
                CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
                  StringName::unref();
                }
                Memory::free_static(pvVar5,false);
                *(undefined8 *)(*(long *)(pOVar38 + 0x228) + lVar40 * 2) = 0;
              }
              lVar40 = lVar40 + 4;
            } while ((ulong)uVar3 * 4 - lVar40 != 0);
          }
          *(undefined4 *)(pOVar38 + 0x24c) = 0;
          *(undefined1 (*) [16])(pOVar38 + 0x238) = (undefined1  [16])0x0;
        }
        if ((*(long *)(pOVar38 + 0x2b8) != 0) && (*(int *)(pOVar38 + 0x2dc) != 0)) {
          lVar40 = 0;
          uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pOVar38 + 0x2d8) * 4);
          if (uVar3 != 0) {
            do {
              if (*(int *)(*(long *)(pOVar38 + 0x2c0) + lVar40) != 0) {
                *(int *)(*(long *)(pOVar38 + 0x2c0) + lVar40) = 0;
                pvVar5 = *(void **)(*(long *)(pOVar38 + 0x2b8) + lVar40 * 2);
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
                  StringName::unref();
                }
                Memory::free_static(pvVar5,false);
                *(undefined8 *)(*(long *)(pOVar38 + 0x2b8) + lVar40 * 2) = 0;
              }
              lVar40 = lVar40 + 4;
            } while (lVar40 != (ulong)uVar3 << 2);
          }
          *(undefined4 *)(pOVar38 + 0x2dc) = 0;
          *(undefined1 (*) [16])(pOVar38 + 0x2c8) = (undefined1  [16])0x0;
        }
        if ((pOVar34 != (Object *)0x0) &&
           (puVar44 = *(undefined4 **)pOVar34, puVar44 != (undefined4 *)0x0)) {
          cVar28 = '\0';
          do {
            StringName::StringName((StringName *)&local_90,(String *)(puVar44 + 2),false);
            puVar35 = (undefined4 *)
                      HashMap<StringName,PropertyInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,PropertyInfo>>>
                      ::operator[]((HashMap<StringName,PropertyInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,PropertyInfo>>>
                                    *)(pOVar38 + 0x220),(StringName *)&local_90);
            *puVar35 = *puVar44;
            if (*(long *)(puVar35 + 2) != *(long *)(puVar44 + 2)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar35 + 2),(CowData *)(puVar44 + 2));
            }
            StringName::operator=((StringName *)(puVar35 + 4),(StringName *)(puVar44 + 4));
            puVar35[6] = puVar44[6];
            if (*(long *)(puVar35 + 8) != *(long *)(puVar44 + 8)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(puVar35 + 8),(CowData *)(puVar44 + 8));
            }
            lVar40 = *(long *)(pOVar38 + 600);
            puVar35[10] = puVar44[10];
            if ((lVar40 != 0) && (*(int *)(pOVar38 + 0x27c) != 0)) {
              uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pOVar38 + 0x278) * 4);
              lVar40 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pOVar38 + 0x278) * 8)
              ;
              if (local_90 == 0) {
                uVar30 = StringName::get_empty_hash();
              }
              else {
                uVar30 = *(uint *)(local_90 + 0x20);
              }
              uVar42 = CONCAT44(0,uVar3);
              if (uVar30 == 0) {
                uVar30 = 1;
              }
              auVar12._8_8_ = 0;
              auVar12._0_8_ = (ulong)uVar30 * lVar40;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = uVar42;
              lVar45 = SUB168(auVar12 * auVar20,8);
              uVar41 = *(uint *)(*(long *)(pOVar38 + 0x260) + lVar45 * 4);
              iVar37 = SUB164(auVar12 * auVar20,8);
              if (uVar41 != 0) {
                uVar43 = 0;
                do {
                  if ((uVar41 == uVar30) &&
                     (*(long *)(*(long *)(*(long *)(pOVar38 + 600) + lVar45 * 8) + 0x10) == local_90
                     )) goto LAB_00105550;
                  uVar43 = uVar43 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar40;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar42;
                  lVar45 = SUB168(auVar13 * auVar21,8);
                  uVar41 = *(uint *)(*(long *)(pOVar38 + 0x260) + lVar45 * 4);
                  iVar37 = SUB164(auVar13 * auVar21,8);
                } while ((uVar41 != 0) &&
                        (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar41 * lVar40,
                        auVar22._8_8_ = 0, auVar22._0_8_ = uVar42, auVar15._8_8_ = 0,
                        auVar15._0_8_ =
                             (ulong)((uVar3 + iVar37) - SUB164(auVar14 * auVar22,8)) * lVar40,
                        auVar23._8_8_ = 0, auVar23._0_8_ = uVar42,
                        uVar43 <= SUB164(auVar15 * auVar23,8)));
              }
            }
            this_00 = (Variant *)
                      HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                      ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                    *)(pOVar38 + 0x250),(StringName *)&local_90);
            Variant::operator=(this_00,(Variant *)(puVar44 + 0xc));
LAB_00105550:
            uVar2 = *(undefined1 *)(puVar44 + 0x12);
            puVar36 = (undefined1 *)
                      HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                      ::operator[]((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                                    *)(pOVar38 + 0x2b0),(StringName *)&local_90);
            *puVar36 = uVar2;
            if (*(char *)(puVar44 + 0x12) != '\0') {
              cVar28 = *(char *)(puVar44 + 0x12);
            }
            if ((StringName::configured != '\0') && (local_90 != 0)) {
              StringName::unref();
            }
            puVar44 = *(undefined4 **)(puVar44 + 0x14);
          } while (puVar44 != (undefined4 *)0x0);
          if (cVar28 != '\0') {
            EditorExportPreset::update_value_overrides();
          }
        }
        List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
                  ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)&local_a8);
        bVar24 = bVar25;
      }
      cVar28 = RefCounted::unreference();
      if ((cVar28 != '\0') && (cVar28 = predelete_handler(pOVar38), cVar28 != '\0')) {
        (**(code **)(*(long *)pOVar38 + 0x140))(pOVar38);
        Memory::free_static(pOVar38,false);
      }
      local_e0 = local_e0 + 1;
      lVar40 = *(long *)(this + 0x420);
    } while (lVar40 != 0);
    if (bVar24) {
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      (**(code **)(*(long *)this + 0xd0))(this,&_export_presets_updated,0,0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  uVar7 = local_80._0_8_;
  if ((undefined8 *)local_80._0_8_ == (undefined8 *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar27 = local_80._8_8_;
    if ((local_60._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) != 0)) {
      piVar1 = (int *)(local_80._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_60 & 0xffffffff) * 4) * 4);
      piVar39 = (int *)local_80._8_8_;
      puVar33 = (undefined8 *)local_80._0_8_;
      do {
        if (*piVar39 != 0) {
          pvVar5 = (void *)*puVar33;
          *piVar39 = 0;
          List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
                    ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)
                     ((long)pvVar5 + 0x18));
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar5,false);
          *puVar33 = 0;
        }
        piVar39 = piVar39 + 1;
        puVar33 = puVar33 + 1;
      } while (piVar39 != piVar1);
    }
    Memory::free_static((void *)uVar7,false);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static((void *)uVar27,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExport::_notification(int) */

void __thiscall EditorExport::_notification(EditorExport *this,int param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  if (param_1 == 0x11) {
    update_export_presets(this);
    return;
  }
  if (param_1 < 0x12) {
    if (param_1 == 10) {
      load_config(this);
      return;
    }
    if ((param_1 == 0xb) && (lVar2 = *(long *)(this + 0x410), lVar2 != 0)) {
      lVar3 = 0;
      do {
        while( true ) {
          if (*(long *)(lVar2 + -8) <= lVar3) {
            return;
          }
          CowData<Ref<EditorExportPlatform>>::_copy_on_write
                    ((CowData<Ref<EditorExportPlatform>> *)(this + 0x410));
          lVar2 = *(long *)(this + 0x410);
          pcVar1 = *(code **)(**(long **)(lVar2 + lVar3 * 8) + 0x228);
          if (pcVar1 == EditorExportPlatform::cleanup) break;
          (*pcVar1)();
          lVar2 = *(long *)(this + 0x410);
          lVar3 = lVar3 + 1;
          if (lVar2 == 0) {
            return;
          }
        }
        lVar3 = lVar3 + 1;
      } while (lVar2 != 0);
    }
  }
  else if (param_1 == 10000) {
    lVar2 = *(long *)(this + 0x410);
    lVar3 = 0;
    if (lVar2 != 0) {
      while (lVar3 < *(long *)(lVar2 + -8)) {
        CowData<Ref<EditorExportPlatform>>::_copy_on_write
                  ((CowData<Ref<EditorExportPlatform>> *)(this + 0x410));
        lVar2 = lVar3 * 8;
        lVar3 = lVar3 + 1;
        Object::notification((int)*(undefined8 *)(*(long *)(this + 0x410) + lVar2),true);
        lVar2 = *(long *)(this + 0x410);
        if (lVar2 == 0) {
          return;
        }
      }
    }
  }
  return;
}



/* EditorExport::remove_export_plugin(Ref<EditorExportPlugin> const&) */

void __thiscall EditorExport::remove_export_plugin(EditorExport *this,Ref *param_1)

{
  long lVar1;
  Object *pOVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  
  lVar1 = *(long *)(this + 0x430);
  if ((lVar1 != 0) && (lVar6 = *(long *)(lVar1 + -8), 0 < lVar6)) {
    lVar5 = 0;
    do {
      if (*(long *)param_1 == *(long *)(lVar1 + lVar5 * 8)) {
        if (lVar5 < lVar6) {
          CowData<Ref<EditorExportPlugin>>::_copy_on_write
                    ((CowData<Ref<EditorExportPlugin>> *)(this + 0x430));
          lVar1 = *(long *)(this + 0x430);
          if (lVar1 == 0) {
            lVar6 = -1;
          }
          else {
            lVar6 = *(long *)(lVar1 + -8) + -1;
            if (lVar5 < lVar6) {
              do {
                pOVar2 = *(Object **)(lVar1 + 8 + lVar5 * 8);
                pOVar3 = *(Object **)(lVar1 + lVar5 * 8);
                if (pOVar2 != pOVar3) {
                  *(Object **)(lVar1 + lVar5 * 8) = pOVar2;
                  if ((pOVar2 != (Object *)0x0) && (cVar4 = RefCounted::reference(), cVar4 == '\0'))
                  {
                    *(undefined8 *)(lVar1 + lVar5 * 8) = 0;
                  }
                  if (((pOVar3 != (Object *)0x0) &&
                      (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
                     (cVar4 = predelete_handler(pOVar3), cVar4 != '\0')) {
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                  }
                }
                lVar5 = lVar5 + 1;
              } while (lVar6 != lVar5);
            }
          }
          CowData<Ref<EditorExportPlugin>>::resize<false>
                    ((CowData<Ref<EditorExportPlugin>> *)(this + 0x430),lVar6);
        }
        else {
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,lVar5,lVar6,"p_index","size()",""
                     ,false,false);
        }
        break;
      }
      lVar5 = lVar5 + 1;
    } while (lVar6 != lVar5);
  }
  this[0x441] = (EditorExport)0x1;
  return;
}



/* EditorExport::add_export_plugin(Ref<EditorExportPlugin> const&) */

void __thiscall EditorExport::add_export_plugin(EditorExport *this,Ref *param_1)

{
  undefined8 *puVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  Object *pOVar6;
  long lVar7;
  long lVar8;
  
  lVar8 = *(long *)(this + 0x430);
  pOVar6 = *(Object **)param_1;
  if (lVar8 == 0) {
    if (pOVar6 != (Object *)0x0) goto LAB_00105a2d;
LAB_00105b25:
    lVar7 = 1;
  }
  else {
    lVar7 = *(long *)(lVar8 + -8);
    if (0 < lVar7) {
      lVar5 = 0;
      do {
        if (pOVar6 == *(Object **)(lVar8 + lVar5 * 8)) {
          return;
        }
        lVar5 = lVar5 + 1;
      } while (lVar7 != lVar5);
    }
    if (pOVar6 != (Object *)0x0) {
LAB_00105a2d:
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar6 = (Object *)0x0;
      }
      if (*(long *)(this + 0x430) == 0) goto LAB_00105b25;
      lVar7 = *(long *)(*(long *)(this + 0x430) + -8);
    }
    lVar7 = lVar7 + 1;
  }
  iVar4 = CowData<Ref<EditorExportPlugin>>::resize<false>
                    ((CowData<Ref<EditorExportPlugin>> *)(this + 0x430),lVar7);
  if (iVar4 == 0) {
    if (*(long *)(this + 0x430) == 0) {
      lVar7 = -1;
      lVar8 = 0;
LAB_00105bb9:
      _err_print_index_error
                ("set","./core/templates/cowdata.h",0xcf,lVar7,lVar8,"p_index","size()","",false,
                 false);
      goto LAB_00105af9;
    }
    lVar8 = *(long *)(*(long *)(this + 0x430) + -8);
    lVar7 = lVar8 + -1;
    if (lVar7 < 0) goto LAB_00105bb9;
    CowData<Ref<EditorExportPlugin>>::_copy_on_write
              ((CowData<Ref<EditorExportPlugin>> *)(this + 0x430));
    puVar1 = (undefined8 *)(*(long *)(this + 0x430) + lVar7 * 8);
    pOVar2 = (Object *)*puVar1;
    if (pOVar6 == pOVar2) goto LAB_00105af9;
    *puVar1 = pOVar6;
    if (pOVar6 == (Object *)0x0) {
      if (((pOVar2 == (Object *)0x0) || (cVar3 = RefCounted::unreference(), cVar3 == '\0')) ||
         (cVar3 = predelete_handler(pOVar2), cVar3 == '\0')) goto LAB_00105b0a;
LAB_00105ae2:
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      Memory::free_static(pOVar2,false);
      goto LAB_00105af9;
    }
    cVar3 = RefCounted::reference();
    if (cVar3 == '\0') {
      *puVar1 = 0;
    }
    if (((pOVar2 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
       (cVar3 = predelete_handler(pOVar2), cVar3 != '\0')) goto LAB_00105ae2;
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
LAB_00105af9:
    if (pOVar6 == (Object *)0x0) goto LAB_00105b0a;
  }
  cVar3 = RefCounted::unreference();
  if ((cVar3 != '\0') && (cVar3 = predelete_handler(pOVar6), cVar3 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
LAB_00105b0a:
  this[0x441] = (EditorExport)0x1;
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
}



/* RefCounted::_getv(StringName const&, Variant&) const */

undefined8 RefCounted::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_setv(StringName const&, Variant const&) */

undefined8 RefCounted::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_validate_propertyv(PropertyInfo&) const */

void RefCounted::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* RefCounted::_property_can_revertv(StringName const&) const */

undefined8 RefCounted::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* RefCounted::_property_get_revertv(StringName const&, Variant&) const */

undefined8 RefCounted::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* RefCounted::_notificationv(int, bool) */

void RefCounted::_notificationv(int param_1,bool param_2)

{
  return;
}



/* EditorExportPlatform::should_update_export_options() */

undefined8 EditorExportPlatform::should_update_export_options(void)

{
  return 0;
}



/* EditorExportPlatform::poll_export() */

undefined8 EditorExportPlatform::poll_export(void)

{
  return 0;
}



/* EditorExportPlatform::cleanup() */

void EditorExportPlatform::cleanup(void)

{
  return;
}



/* EditorExport::is_class_ptr(void*) const */

uint __thiscall EditorExport::is_class_ptr(EditorExport *this,void *param_1)

{
  return (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cf,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* EditorExport::_getv(StringName const&, Variant&) const */

undefined8 EditorExport::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExport::_setv(StringName const&, Variant const&) */

undefined8 EditorExport::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* EditorExport::_property_can_revertv(StringName const&) const */

undefined8 EditorExport::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* EditorExport::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorExport::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10cf,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d0,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* ConfigFile::_getv(StringName const&, Variant&) const */

undefined8 ConfigFile::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_setv(StringName const&, Variant const&) */

undefined8 ConfigFile::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_validate_propertyv(PropertyInfo&) const */

void ConfigFile::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* ConfigFile::_property_can_revertv(StringName const&) const */

undefined8 ConfigFile::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfigFile::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfigFile::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* ConfigFile::_notificationv(int, bool) */

void ConfigFile::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<EditorExport, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorExport,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorExport,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorExport, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorExport,void>::get_argument_count
          (CallableCustomMethodPointer<EditorExport,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorExport, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorExport,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorExport,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010cac0;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010cac0;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* EditorExport::_validate_propertyv(PropertyInfo&) const */

void EditorExport::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* EditorExport::_get_class_namev() const */

undefined8 * EditorExport::_get_class_namev(void)

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
LAB_00105f73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105f73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorExport");
      goto LAB_00105fde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorExport");
LAB_00105fde:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EditorExport, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorExport,void>::get_object
          (CallableCustomMethodPointer<EditorExport,void> *this)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ulong *puVar4;
  long in_FS_OFFSET;
  bool bVar5;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      LOCK();
      bVar5 = (char)ObjectDB::spin_lock == '\0';
      if (bVar5) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar5) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar4 & 0x7fffffffff)) {
      uVar2 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010610d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010610d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010610d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ConfigFile::_get_class_namev() const */

undefined8 * ConfigFile::_get_class_namev(void)

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
LAB_001061c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001061c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_0010622e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_0010622e:
  return &_get_class_namev()::_class_name_static;
}



/* RefCounted::_get_class_namev() const */

undefined8 * RefCounted::_get_class_namev(void)

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
LAB_001062a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001062a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010630e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010630e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointerBase::get_as_text() const */

void CallableCustomMethodPointerBase::get_as_text(void)

{
  char *__s;
  long lVar1;
  long in_RSI;
  StrRange *in_RDI;
  long in_FS_OFFSET;
  
  __s = *(char **)(in_RSI + 0x20);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)in_RDI = 0;
  if (__s != (char *)0x0) {
    strlen(__s);
  }
  String::parse_latin1(in_RDI);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* void Ref<ConfigFile>::instantiate<>() */

void __thiscall Ref<ConfigFile>::instantiate<>(Ref<ConfigFile> *this)

{
  char cVar1;
  RefCounted *this_00;
  long lVar2;
  RefCounted *pRVar3;
  Object *pOVar4;
  Object *pOVar5;
  byte bVar6;
  
  bVar6 = 0;
  this_00 = (RefCounted *)operator_new(0x1b0,"");
  pRVar3 = this_00;
  for (lVar2 = 0x36; lVar2 != 0; lVar2 = lVar2 + -1) {
    *(undefined8 *)pRVar3 = 0;
    pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
  }
  RefCounted::RefCounted(this_00);
  *(undefined ***)this_00 = &PTR__initialize_classv_0010cc20;
  *(undefined8 *)(this_00 + 0x1a8) = 2;
  *(undefined1 (*) [16])(this_00 + 0x188) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x198) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar1 = RefCounted::init_ref();
  if (cVar1 == '\0') {
    pOVar5 = *(Object **)this;
    if (pOVar5 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
    cVar1 = RefCounted::unreference();
    if (cVar1 == '\0') {
      return;
    }
    this_00 = (RefCounted *)0x0;
    cVar1 = predelete_handler(pOVar5);
    if (cVar1 == '\0') {
      return;
    }
  }
  else {
    pOVar5 = *(Object **)this;
    pOVar4 = pOVar5;
    if (this_00 == (RefCounted *)pOVar5) goto LAB_00106905;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_00106905;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_00106905:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */

Variant * __thiscall
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::operator[](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  uint uVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined8 *puVar41;
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  long lVar53;
  undefined8 *puVar54;
  long in_FS_OFFSET;
  Variant *local_c8;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined1 local_78 [16];
  long local_68;
  int local_60 [8];
  long local_40;
  
  lVar53 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  if (lVar53 == 0) {
LAB_001071a8:
    local_90 = (undefined1  [16])0x0;
    local_98[0] = 0;
    local_98[1] = 0;
    uVar43 = uVar39 * 4;
    uVar48 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar48,false);
    *(void **)(this + 8) = pvVar42;
    if ((int)uVar39 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar42 + uVar48)) && (pvVar42 < (void *)((long)pvVar3 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
      }
      else {
        memset(pvVar3,0,uVar43);
        memset(pvVar42,0,uVar48);
      }
LAB_00106bbe:
      iVar44 = *(int *)(this + 0x2c);
      if (iVar44 != 0) {
LAB_00106bce:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar43 = CONCAT44(0,uVar37);
        lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar38 = StringName::get_empty_hash();
        }
        else {
          uVar38 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar38 == 0) {
          uVar38 = 1;
        }
        uVar52 = 0;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar38 * lVar53;
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar43;
        lVar46 = SUB168(auVar8 * auVar24,8);
        uVar51 = SUB164(auVar8 * auVar24,8);
        uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
        if (uVar50 != 0) {
          do {
            if ((uVar38 == uVar50) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10) == *(long *)param_1))
            {
              Variant::operator=((Variant *)
                                 (*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18),
                                 (Variant *)local_98);
              local_c8 = (Variant *)(*(long *)(*(long *)(this + 8) + (ulong)uVar51 * 8) + 0x18);
              goto LAB_001070eb;
            }
            uVar52 = uVar52 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(uVar51 + 1) * lVar53;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar43;
            lVar46 = SUB168(auVar9 * auVar25,8);
            uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar46 * 4);
            uVar51 = SUB164(auVar9 * auVar25,8);
          } while ((uVar50 != 0) &&
                  (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar50 * lVar53, auVar26._8_8_ = 0,
                  auVar26._0_8_ = uVar43, auVar11._8_8_ = 0,
                  auVar11._0_8_ = (ulong)((uVar37 + uVar51) - SUB164(auVar10 * auVar26,8)) * lVar53,
                  auVar27._8_8_ = 0, auVar27._0_8_ = uVar43, uVar52 <= SUB164(auVar11 * auVar27,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      goto LAB_00106cf5;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_00106cf5;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00106bce;
LAB_00106d1b:
    uVar37 = *(uint *)(this + 0x28);
    if (uVar37 == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_c8 = (Variant *)0x18;
      goto LAB_001070eb;
    }
    uVar39 = (ulong)(uVar37 + 1);
    uVar38 = *(uint *)(hash_table_size_primes + (ulong)uVar37 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar37 + 1 < 2) {
      uVar39 = 2;
    }
    uVar37 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar48 = (ulong)uVar37;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar48 * 4;
    uVar43 = uVar48 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar48);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar38 != 0) {
      local_c8 = (Variant *)0x0;
      do {
        uVar37 = *(uint *)((long)pvVar3 + (long)local_c8 * 4);
        if (uVar37 != 0) {
          uVar52 = 0;
          lVar53 = *(long *)(this + 0x10);
          uVar50 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar39 = CONCAT44(0,uVar50);
          lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar37 * lVar46;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar39;
          lVar45 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar53 + lVar45 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar51 = *puVar1;
          uVar40 = *(undefined8 *)((long)pvVar42 + (long)local_c8 * 8);
          while (uVar51 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar51 * lVar46;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar50 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar46;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar39;
            uVar36 = SUB164(auVar14 * auVar30,8);
            uVar49 = uVar40;
            if (uVar36 < uVar52) {
              puVar41 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              *puVar1 = uVar37;
              uVar49 = *puVar41;
              *puVar41 = uVar40;
              uVar37 = uVar51;
              uVar52 = uVar36;
            }
            uVar52 = uVar52 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar46;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar39;
            lVar45 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar53 + lVar45 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar40 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar1 = uVar37;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        local_c8 = (Variant *)((long)local_c8 + 1);
      } while ((Variant *)(ulong)uVar38 != local_c8);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar38 = StringName::get_empty_hash();
        lVar53 = *(long *)(this + 8);
      }
      else {
        uVar38 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar38 == 0) {
        uVar38 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar45 = SUB168(auVar4 * auVar20,8);
      uVar51 = SUB164(auVar4 * auVar20,8);
      uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
      if (uVar50 != 0) {
        uVar52 = 0;
        do {
          if ((uVar38 == uVar50) &&
             (*(long *)(*(long *)(lVar53 + lVar45 * 8) + 0x10) == *(long *)param_1)) {
            local_c8 = (Variant *)(*(long *)(lVar53 + (ulong)uVar51 * 8) + 0x18);
            goto LAB_00106b64;
          }
          uVar52 = uVar52 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar51 + 1) * lVar46;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar39;
          lVar45 = SUB168(auVar5 * auVar21,8);
          uVar50 = *(uint *)(*(long *)(this + 0x10) + lVar45 * 4);
          uVar51 = SUB164(auVar5 * auVar21,8);
        } while ((uVar50 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar50 * lVar46, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar39, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar51 + uVar37) - SUB164(auVar6 * auVar22,8)) * lVar46,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar39, uVar52 <= SUB164(auVar7 * auVar23,8)));
      }
      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1  [16])0x0;
      uVar39 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar53 == 0) goto LAB_001071a8;
      goto LAB_00106bbe;
    }
    local_98[0] = 0;
    local_98[1] = 0;
    local_90 = (undefined1  [16])0x0;
    iVar44 = 0;
LAB_00106cf5:
    if ((float)uVar39 * __LC22 < (float)(iVar44 + 1)) goto LAB_00106d1b;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  Variant::Variant((Variant *)local_60,(Variant *)local_98);
  puVar41 = (undefined8 *)operator_new(0x30,"");
  *puVar41 = local_78._0_8_;
  puVar41[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar41 + 2),(StringName *)&local_68);
  local_c8 = (Variant *)(puVar41 + 3);
  Variant::Variant(local_c8,(Variant *)local_60);
  if (Variant::needs_deinit[local_60[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (*(undefined8 **)(this + 0x20) == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar41;
  }
  else {
    **(undefined8 **)(this + 0x20) = puVar41;
    puVar41[1] = *(undefined8 *)(this + 0x20);
  }
  *(undefined8 **)(this + 0x20) = puVar41;
  if (*(long *)param_1 == 0) {
    uVar37 = StringName::get_empty_hash();
  }
  else {
    uVar37 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar37 == 0) {
    uVar37 = 1;
  }
  uVar39 = (ulong)uVar37;
  uVar51 = 0;
  lVar53 = *(long *)(this + 0x10);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar43 = CONCAT44(0,uVar38);
  lVar46 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar39 * lVar46;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar43;
  lVar47 = SUB168(auVar16 * auVar32,8);
  lVar45 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar53 + lVar47 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar50 = *puVar1;
  while (uVar50 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar50 * lVar46;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar43;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar17 * auVar33,8)) * lVar46;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar43;
    uVar37 = SUB164(auVar18 * auVar34,8);
    puVar54 = puVar41;
    if (uVar37 < uVar51) {
      puVar2 = (undefined8 *)(lVar45 + lVar47 * 8);
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar50;
      puVar54 = (undefined8 *)*puVar2;
      *puVar2 = puVar41;
      uVar51 = uVar37;
    }
    uVar37 = (uint)uVar39;
    uVar51 = uVar51 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar46;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar43;
    lVar47 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar53 + lVar47 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    puVar41 = puVar54;
    uVar50 = *puVar1;
  }
  *(undefined8 **)(lVar45 + lVar47 * 8) = puVar41;
  *puVar1 = uVar37;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001070eb:
  if (Variant::needs_deinit[local_98[0]] != '\0') {
    Variant::_clear_internal();
  }
LAB_00106b64:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_c8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, bool, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
::operator[](HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  bool bVar56;
  long local_58;
  undefined1 local_50;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
LAB_00107940:
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
        goto LAB_001077f8;
      }
      memset(pvVar3,0,uVar45);
      memset(pvVar44,0,uVar50);
      iVar46 = *(int *)(this + 0x2c);
LAB_001077fc:
      if (iVar46 != 0) {
LAB_00107804:
        uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar45 = CONCAT44(0,uVar38);
        lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar39 = StringName::get_empty_hash();
        }
        else {
          uVar39 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar39 == 0) {
          uVar39 = 1;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar39 * lVar43;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar45;
        lVar49 = SUB168(auVar17 * auVar33,8);
        uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
        uVar53 = SUB164(auVar17 * auVar33,8);
        if (uVar52 != 0) {
          do {
            if ((uVar39 == uVar52) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar49 * 8) + 0x10) == *(long *)param_1))
            {
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
              *(undefined1 *)(puVar42 + 3) = 0;
              goto LAB_001073fc;
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar53 + 1) * lVar43;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar45;
            lVar49 = SUB168(auVar18 * auVar34,8);
            uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
            uVar53 = SUB164(auVar18 * auVar34,8);
          } while ((uVar52 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar52 * lVar43, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar45, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar19 * auVar35,8)) * lVar43,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar45, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar46 = *(int *)(this + 0x2c);
      }
      goto LAB_00107433;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00107433;
    if (iVar46 != 0) goto LAB_00107804;
LAB_00107459:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001073fc;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar38 * lVar49;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar45;
          lVar47 = SUB168(auVar9 * auVar25,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar9 * auVar25,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar53 * lVar49;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar45;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar10 * auVar26,8)) * lVar49;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar45;
            uVar37 = SUB164(auVar11 * auVar27,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(iVar46 + 1) * lVar49;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar45;
            lVar47 = SUB168(auVar12 * auVar28,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar12 * auVar28,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
      lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_001073fc;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar49;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar49, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar49,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar43 == 0) goto LAB_00107940;
LAB_001077f8:
      iVar46 = *(int *)(this + 0x2c);
      goto LAB_001077fc;
    }
LAB_00107433:
    if ((float)uVar40 * __LC22 < (float)(iVar46 + 1)) goto LAB_00107459;
  }
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar42 = (undefined8 *)operator_new(0x20,"");
  *puVar42 = 0;
  puVar42[1] = 0;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_58);
  bVar56 = StringName::configured != '\0';
  *(undefined1 *)(puVar42 + 3) = local_50;
  if ((bVar56) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_00107905;
LAB_001076e2:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_001076e2;
LAB_00107905:
    uVar38 = StringName::get_empty_hash();
  }
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  lVar43 = *(long *)(this + 0x10);
  uVar53 = 0;
  lVar49 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar40 * lVar49;
  auVar29._8_8_ = 0;
  auVar29._0_8_ = uVar45;
  lVar48 = SUB168(auVar13 * auVar29,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar48 * 4);
  iVar46 = SUB164(auVar13 * auVar29,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar52 * lVar49;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar45;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar49;
    auVar31._8_8_ = 0;
    auVar31._0_8_ = uVar45;
    uVar38 = SUB164(auVar15 * auVar31,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar48 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar49;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar45;
    lVar48 = SUB168(auVar16 * auVar32,8);
    puVar1 = (uint *)(lVar43 + lVar48 * 4);
    iVar46 = SUB164(auVar16 * auVar32,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar48 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001073fc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* RefCounted::get_class() const */

void RefCounted::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* EditorExport::get_class() const */

void EditorExport::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* ConfigFile::get_class() const */

void ConfigFile::get_class(void)

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
        CowData<char32_t>::_ref((CowData<char32_t> *)in_RDI,(CowData *)(lVar2 + 0x10));
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



/* CallableCustomMethodPointer<EditorExport, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorExport,void>::call
          (CallableCustomMethodPointer<EditorExport,void> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong *puVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  long in_FS_OFFSET;
  bool bVar6;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107f1f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00107f1f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00107fd0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00107f1f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC32,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_38,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
    CowData<char32_t>::_unref(local_48);
    CowData<char32_t>::_unref(local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00107fd0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExport::is_class(String const&) const */

undefined8 __thiscall EditorExport::is_class(EditorExport *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_001080eb;
  }
  cVar5 = String::operator==(param_1,"EditorExport");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001080eb;
    }
    cVar5 = String::operator==(param_1,"Node");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar4 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(lVar4 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_60);
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
        if (cVar5 != '\0') goto LAB_001080eb;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_001082c8;
    }
  }
LAB_001080eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001082c8:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_initialize_classv() */

void RefCounted::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    Object::initialize_class();
    local_58 = 0;
    local_40 = 6;
    local_48 = "Object";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "RefCounted";
    local_60 = 0;
    local_40 = 10;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((code *)PTR__bind_methods_00110008 != Object::_bind_methods) {
      RefCounted::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::_initialize_classv() */

void ConfigFile::_initialize_classv(void)

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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)PTR__bind_methods_00110018 != RefCounted::_bind_methods) {
        RefCounted::_bind_methods();
      }
      RefCounted::initialize_class()::initialized = '\x01';
    }
    local_58 = "RefCounted";
    local_68 = 0;
    local_50 = 10;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfigFile";
    local_70 = 0;
    local_50 = 10;
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
    if ((code *)PTR__bind_methods_00110010 != RefCounted::_bind_methods) {
      ConfigFile::_bind_methods();
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0x18);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x3c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x38) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x20) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x20) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x48)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x20));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x18);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x3c) = 0;
        *(undefined1 (*) [16])(this + 0x28) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010875f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010875f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = "RefCounted";
  local_88 = 0;
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "RefCounted";
  local_98 = 0;
  local_70 = 10;
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
LAB_0010894d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0010894d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0010896f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0010896f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  undefined7 in_register_00000031;
  List *pLVar5;
  long in_FS_OFFSET;
  StringName *local_a8;
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
  
  pLVar5 = (List *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC33;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC33;
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
LAB_00108cbd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00108cbd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x00108cdf;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x00108cdf:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])pLVar5 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
  puVar4[6] = local_60;
  if (*(long *)(puVar4 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_58);
  }
  puVar4[10] = local_50;
  plVar1 = *(long **)pLVar5;
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar5,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*plVar4;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x40) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x30);
      lVar2 = *(long *)((long)pvVar1 + 0x38);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x30) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x30);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x38) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar4 = *(long **)this;
  } while ((int)plVar4[2] != 0);
  Memory::free_static(plVar4,false);
  return;
}



/* EditorExport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorExport::_get_property_listv(EditorExport *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorExport";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorExport";
  local_98 = 0;
  local_70 = 0xc;
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
LAB_001091ed:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001091ed;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0010920f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0010920f:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"EditorExport",false);
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



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 (*pauVar3) [16];
  undefined4 *puVar4;
  long in_FS_OFFSET;
  StringName *local_a8;
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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConfigFile";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfigFile";
  local_98 = 0;
  local_70 = 10;
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
LAB_001095cd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001095cd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x001095ef;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x001095ef:
  if (lVar2 == 0) {
    pauVar3 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar3;
    *(undefined4 *)pauVar3[1] = 0;
    *pauVar3 = (undefined1  [16])0x0;
  }
  local_a8 = (StringName *)&local_68;
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
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 2),(CowData *)&local_70);
  }
  StringName::operator=((StringName *)(puVar4 + 4),local_a8);
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
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"ConfigFile",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<EditorExportPlatform::ExportOption, DefaultAllocator>::~List() */

void __thiscall
List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
          (List<EditorExportPlatform::ExportOption,DefaultAllocator> *this)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    pvVar1 = (void *)*puVar2;
    if (pvVar1 == (void *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)((long)pvVar1 + 0x60) == puVar2) {
      *puVar2 = *(undefined8 *)((long)pvVar1 + 0x50);
      if (pvVar1 == (void *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)((long)pvVar1 + 0x58);
      }
      if (*(long *)((long)pvVar1 + 0x58) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x58) + 0x50) =
             *(undefined8 *)((long)pvVar1 + 0x50);
      }
      if (*(long *)((long)pvVar1 + 0x50) != 0) {
        *(undefined8 *)(*(long *)((long)pvVar1 + 0x50) + 0x58) =
             *(undefined8 *)((long)pvVar1 + 0x58);
      }
      if (Variant::needs_deinit[*(int *)((long)pvVar1 + 0x30)] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x20));
      if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 8));
      Memory::free_static(pvVar1,false);
      *(int *)(puVar2 + 2) = *(int *)(puVar2 + 2) + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    puVar2 = *(undefined8 **)this;
  } while (*(int *)(puVar2 + 2) != 0);
  Memory::free_static(puVar2,false);
  return;
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  undefined8 uVar6;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar4 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar3);
        local_58 = pcVar3;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00109a6b;
  }
  cVar5 = String::operator==(param_1,"RefCounted");
  if (cVar5 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar4 = *(long *)(lVar2 + 0x20);
      if (lVar4 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar4 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar5 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_00109a6b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00109a6b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfigFile::is_class(String const&) const */

undefined8 __thiscall ConfigFile::is_class(ConfigFile *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
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
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar4 != '\0') goto LAB_00109c6b;
  }
  cVar4 = String::operator==(param_1,"ConfigFile");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00109c6b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* List<EditorExportPlatform::ExportOption,
   DefaultAllocator>::TEMPNAMEPLACEHOLDERVALUE(List<EditorExportPlatform::ExportOption,
   DefaultAllocator> const&) */

void __thiscall
List<EditorExportPlatform::ExportOption,DefaultAllocator>::operator=
          (List<EditorExportPlatform::ExportOption,DefaultAllocator> *this,List *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined1 (*pauVar6) [16];
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined8 *puVar9;
  
  puVar9 = *(undefined8 **)this;
  if (puVar9 != (undefined8 *)0x0) {
    do {
      pvVar2 = (void *)*puVar9;
      if (pvVar2 == (void *)0x0) goto LAB_00109da0;
      if (*(undefined8 **)((long)pvVar2 + 0x60) == puVar9) {
        *puVar9 = *(undefined8 *)((long)pvVar2 + 0x50);
        if (pvVar2 == (void *)puVar9[1]) {
          puVar9[1] = *(undefined8 *)((long)pvVar2 + 0x58);
        }
        if (*(long *)((long)pvVar2 + 0x58) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar2 + 0x58) + 0x50) =
               *(undefined8 *)((long)pvVar2 + 0x50);
        }
        if (*(long *)((long)pvVar2 + 0x50) != 0) {
          *(undefined8 *)(*(long *)((long)pvVar2 + 0x50) + 0x58) =
               *(undefined8 *)((long)pvVar2 + 0x58);
        }
        if (Variant::needs_deinit[*(int *)((long)pvVar2 + 0x30)] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x20));
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 8));
        Memory::free_static(pvVar2,false);
        *(int *)(puVar9 + 2) = *(int *)(puVar9 + 2) + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      puVar9 = *(undefined8 **)this;
    } while (*(int *)(puVar9 + 2) != 0);
    Memory::free_static(puVar9,false);
    *(undefined8 *)this = 0;
  }
  puVar9 = (undefined8 *)0x0;
LAB_00109da0:
  if ((*(undefined8 **)param_1 != (undefined8 *)0x0) &&
     (puVar8 = (undefined4 *)**(undefined8 **)param_1, puVar8 != (undefined4 *)0x0)) {
    if (puVar9 == (undefined8 *)0x0) {
      pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])this = pauVar6;
      *(undefined4 *)pauVar6[1] = 0;
      *pauVar6 = (undefined1  [16])0x0;
    }
    do {
      while( true ) {
        puVar7 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
        *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar7 + 0xe) = (undefined1  [16])0x0;
        *puVar7 = 0;
        *(undefined8 *)(puVar7 + 8) = 0;
        puVar7[0xc] = 0;
        puVar7[6] = 0;
        puVar7[10] = 6;
        lVar5 = *(long *)(puVar8 + 2);
        *(undefined2 *)(puVar7 + 0x12) = 0;
        uVar1 = *puVar8;
        *(undefined8 *)(puVar7 + 0x18) = 0;
        *puVar7 = uVar1;
        *(undefined1 (*) [16])(puVar7 + 0x14) = (undefined1  [16])0x0;
        if (lVar5 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 2),(CowData *)(puVar8 + 2));
        }
        StringName::operator=((StringName *)(puVar7 + 4),(StringName *)(puVar8 + 4));
        puVar7[6] = puVar8[6];
        if (*(long *)(puVar7 + 8) != *(long *)(puVar8 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)(puVar8 + 8));
        }
        puVar7[10] = puVar8[10];
        Variant::operator=((Variant *)(puVar7 + 0xc),(Variant *)(puVar8 + 0xc));
        *(undefined1 *)(puVar7 + 0x12) = *(undefined1 *)(puVar8 + 0x12);
        *(undefined1 *)((long)puVar7 + 0x49) = *(undefined1 *)((long)puVar8 + 0x49);
        uVar3 = *(undefined8 *)(*(long *)this + 8);
        *(long *)(puVar7 + 0x18) = *(long *)this;
        plVar4 = *(long **)this;
        *(undefined8 *)(puVar7 + 0x14) = 0;
        *(undefined8 *)(puVar7 + 0x16) = uVar3;
        if (plVar4[1] != 0) {
          *(undefined4 **)(plVar4[1] + 0x50) = puVar7;
        }
        plVar4[1] = (long)puVar7;
        if (*plVar4 == 0) break;
        puVar8 = *(undefined4 **)(puVar8 + 0x14);
        *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
        if (puVar8 == (undefined4 *)0x0) {
          return;
        }
      }
      *plVar4 = (long)puVar7;
      puVar8 = *(undefined4 **)(puVar8 + 0x14);
      *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    } while (puVar8 != (undefined4 *)0x0);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, List<EditorExportPlatform::ExportOption, DefaultAllocator>,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, List<EditorExportPlatform::ExportOption,
   DefaultAllocator> > > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,List<EditorExportPlatform::ExportOption,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorExportPlatform::ExportOption,DefaultAllocator>>>>
::operator[](HashMap<StringName,List<EditorExportPlatform::ExportOption,DefaultAllocator>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,List<EditorExportPlatform::ExportOption,DefaultAllocator>>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *__s;
  long *plVar5;
  undefined8 *puVar6;
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
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined8 *puVar43;
  undefined1 (*pauVar44) [16];
  undefined4 *puVar45;
  void *pvVar46;
  ulong uVar47;
  int iVar48;
  long lVar49;
  long lVar50;
  long lVar51;
  ulong uVar52;
  undefined8 uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  long lVar57;
  undefined8 *puVar58;
  undefined4 *puVar59;
  long in_FS_OFFSET;
  uint local_c8;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 *local_50 [2];
  long local_40;
  
  lVar57 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar39);
  if (lVar57 == 0) {
LAB_0010a7c0:
    local_70 = 0;
    uVar47 = uVar41 * 4;
    uVar52 = uVar41 * 8;
    uVar42 = Memory::alloc_static(uVar47,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar46 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar46;
    if ((int)uVar41 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar46 + uVar52)) && (pvVar46 < (void *)((long)pvVar4 + uVar47))
         ) {
        uVar47 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar47 * 4) = 0;
          *(undefined8 *)((long)pvVar46 + uVar47 * 8) = 0;
          uVar47 = uVar47 + 1;
        } while (uVar41 != uVar47);
      }
      else {
        memset(pvVar4,0,uVar47);
        memset(pvVar46,0,uVar52);
      }
LAB_0010a0c5:
      iVar48 = *(int *)(this + 0x2c);
      if (iVar48 != 0) {
LAB_0010a0d5:
        uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar47 = CONCAT44(0,uVar39);
        lVar57 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar40 = StringName::get_empty_hash();
        }
        else {
          uVar40 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar40 == 0) {
          uVar40 = 1;
        }
        uVar56 = 0;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = (ulong)uVar40 * lVar57;
        auVar27._8_8_ = 0;
        auVar27._0_8_ = uVar47;
        lVar50 = SUB168(auVar11 * auVar27,8);
        uVar55 = SUB164(auVar11 * auVar27,8);
        uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar50 * 4);
        if (uVar54 != 0) {
          do {
            if ((uVar40 == uVar54) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar50 * 8) + 0x10) == *(long *)param_1))
            {
              List<EditorExportPlatform::ExportOption,DefaultAllocator>::operator=
                        ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)
                         (*(long *)(*(long *)(this + 8) + (ulong)uVar55 * 8) + 0x18),
                         (List *)&local_70);
              puVar43 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar55 * 8);
              goto LAB_0010a72c;
            }
            uVar56 = uVar56 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)(uVar55 + 1) * lVar57;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar47;
            lVar50 = SUB168(auVar12 * auVar28,8);
            uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar50 * 4);
            uVar55 = SUB164(auVar12 * auVar28,8);
          } while ((uVar54 != 0) &&
                  (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar54 * lVar57, auVar29._8_8_ = 0,
                  auVar29._0_8_ = uVar47, auVar14._8_8_ = 0,
                  auVar14._0_8_ = (ulong)((uVar39 + uVar55) - SUB164(auVar13 * auVar29,8)) * lVar57,
                  auVar30._8_8_ = 0, auVar30._0_8_ = uVar47, uVar56 <= SUB164(auVar14 * auVar30,8)))
          ;
        }
        iVar48 = *(int *)(this + 0x2c);
      }
      goto LAB_0010a1e4;
    }
    iVar48 = *(int *)(this + 0x2c);
    if (pvVar46 == (void *)0x0) goto LAB_0010a1e4;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010a0d5;
LAB_0010a20a:
    uVar39 = *(uint *)(this + 0x28);
    if (uVar39 == 0x1c) {
      puVar43 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010a72c;
    }
    uVar41 = (ulong)(uVar39 + 1);
    uVar40 = *(uint *)(hash_table_size_primes + (ulong)uVar39 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar39 + 1 < 2) {
      uVar41 = 2;
    }
    uVar39 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar46 = *(void **)(this + 8);
    uVar52 = (ulong)uVar39;
    uVar41 = uVar52 * 4;
    pvVar4 = *(void **)(this + 0x10);
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    uVar47 = uVar52 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = __s_00;
    if (uVar39 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar47)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar52);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar47);
      }
    }
    if (uVar40 != 0) {
      uVar41 = 0;
      do {
        uVar39 = *(uint *)((long)pvVar4 + uVar41 * 4);
        if (uVar39 != 0) {
          uVar56 = 0;
          lVar57 = *(long *)(this + 0x10);
          uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar47 = CONCAT44(0,uVar54);
          lVar50 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)uVar39 * lVar50;
          auVar31._8_8_ = 0;
          auVar31._0_8_ = uVar47;
          lVar49 = SUB168(auVar15 * auVar31,8);
          puVar1 = (uint *)(lVar57 + lVar49 * 4);
          iVar48 = SUB164(auVar15 * auVar31,8);
          uVar55 = *puVar1;
          uVar42 = *(undefined8 *)((long)pvVar46 + uVar41 * 8);
          while (uVar55 != 0) {
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)uVar55 * lVar50;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar47;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)((uVar54 + iVar48) - SUB164(auVar16 * auVar32,8)) * lVar50;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar47;
            local_c8 = SUB164(auVar17 * auVar33,8);
            uVar53 = uVar42;
            if (local_c8 < uVar56) {
              *puVar1 = uVar39;
              puVar43 = (undefined8 *)((long)__s_00 + lVar49 * 8);
              uVar53 = *puVar43;
              *puVar43 = uVar42;
              uVar39 = uVar55;
              uVar56 = local_c8;
            }
            uVar56 = uVar56 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(iVar48 + 1) * lVar50;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar47;
            lVar49 = SUB168(auVar18 * auVar34,8);
            puVar1 = (uint *)(lVar57 + lVar49 * 4);
            iVar48 = SUB164(auVar18 * auVar34,8);
            uVar42 = uVar53;
            uVar55 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar49 * 8) = uVar42;
          *puVar1 = uVar39;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar40 != uVar41);
      Memory::free_static(pvVar46,false);
      Memory::free_static(pvVar4,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar50 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar40 = StringName::get_empty_hash();
        lVar57 = *(long *)(this + 8);
      }
      else {
        uVar40 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar40 == 0) {
        uVar40 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar40 * lVar50;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar41;
      lVar49 = SUB168(auVar7 * auVar23,8);
      uVar55 = SUB164(auVar7 * auVar23,8);
      uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
      if (uVar54 != 0) {
        uVar56 = 0;
        do {
          if ((uVar40 == uVar54) &&
             (*(long *)(*(long *)(lVar57 + lVar49 * 8) + 0x10) == *(long *)param_1)) {
            puVar43 = *(undefined8 **)(lVar57 + (ulong)uVar55 * 8);
            goto LAB_0010a074;
          }
          uVar56 = uVar56 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(uVar55 + 1) * lVar50;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar41;
          lVar49 = SUB168(auVar8 * auVar24,8);
          uVar54 = *(uint *)(*(long *)(this + 0x10) + lVar49 * 4);
          uVar55 = SUB164(auVar8 * auVar24,8);
        } while ((uVar54 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar54 * lVar50, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar41, auVar10._8_8_ = 0,
                auVar10._0_8_ = (ulong)((uVar55 + uVar39) - SUB164(auVar9 * auVar25,8)) * lVar50,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar41, uVar56 <= SUB164(auVar10 * auVar26,8)));
      }
      local_70 = 0;
      uVar41 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar57 == 0) goto LAB_0010a7c0;
      goto LAB_0010a0c5;
    }
    local_70 = 0;
    iVar48 = 0;
LAB_0010a1e4:
    if ((float)uVar41 * __LC22 < (float)(iVar48 + 1)) goto LAB_0010a20a;
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50[0] = (undefined8 *)0x0;
  puVar43 = (undefined8 *)operator_new(0x20,"");
  *puVar43 = local_68._0_8_;
  puVar43[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar43 + 2),(StringName *)&local_58);
  puVar43[3] = 0;
  if ((local_50[0] != (undefined8 *)0x0) &&
     (puVar59 = (undefined4 *)*local_50[0], puVar59 != (undefined4 *)0x0)) {
    pauVar44 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    puVar43[3] = pauVar44;
    *(undefined4 *)pauVar44[1] = 0;
    *pauVar44 = (undefined1  [16])0x0;
    do {
      while( true ) {
        puVar45 = (undefined4 *)operator_new(0x68,DefaultAllocator::alloc);
        *(undefined1 (*) [16])(puVar45 + 2) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(puVar45 + 0xe) = (undefined1  [16])0x0;
        *puVar45 = 0;
        *(undefined8 *)(puVar45 + 8) = 0;
        puVar45[0xc] = 0;
        puVar45[6] = 0;
        puVar45[10] = 6;
        lVar57 = *(long *)(puVar59 + 2);
        *(undefined2 *)(puVar45 + 0x12) = 0;
        uVar3 = *puVar59;
        *(undefined8 *)(puVar45 + 0x18) = 0;
        *puVar45 = uVar3;
        *(undefined1 (*) [16])(puVar45 + 0x14) = (undefined1  [16])0x0;
        if (lVar57 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar45 + 2),(CowData *)(puVar59 + 2));
        }
        StringName::operator=((StringName *)(puVar45 + 4),(StringName *)(puVar59 + 4));
        puVar45[6] = puVar59[6];
        if (*(long *)(puVar45 + 8) != *(long *)(puVar59 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar45 + 8),(CowData *)(puVar59 + 8));
        }
        puVar45[10] = puVar59[10];
        Variant::operator=((Variant *)(puVar45 + 0xc),(Variant *)(puVar59 + 0xc));
        *(undefined1 *)(puVar45 + 0x12) = *(undefined1 *)(puVar59 + 0x12);
        *(undefined1 *)((long)puVar45 + 0x49) = *(undefined1 *)((long)puVar59 + 0x49);
        uVar42 = *(undefined8 *)(puVar43[3] + 8);
        *(undefined8 *)(puVar45 + 0x18) = puVar43[3];
        plVar5 = (long *)puVar43[3];
        *(undefined8 *)(puVar45 + 0x14) = 0;
        *(undefined8 *)(puVar45 + 0x16) = uVar42;
        if (plVar5[1] != 0) {
          *(undefined4 **)(plVar5[1] + 0x50) = puVar45;
        }
        plVar5[1] = (long)puVar45;
        if (*plVar5 != 0) break;
        *plVar5 = (long)puVar45;
        puVar59 = *(undefined4 **)(puVar59 + 0x14);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
        if (puVar59 == (undefined4 *)0x0) goto LAB_0010a5e0;
      }
      puVar59 = *(undefined4 **)(puVar59 + 0x14);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + 1;
    } while (puVar59 != (undefined4 *)0x0);
  }
LAB_0010a5e0:
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar6 = *(undefined8 **)(this + 0x20);
  if (puVar6 == (undefined8 *)0x0) {
    *(undefined8 **)(this + 0x18) = puVar43;
  }
  else {
    *puVar6 = puVar43;
    puVar43[1] = puVar6;
  }
  *(undefined8 **)(this + 0x20) = puVar43;
  if (*(long *)param_1 == 0) {
    uVar39 = StringName::get_empty_hash();
  }
  else {
    uVar39 = *(uint *)(*(long *)param_1 + 0x20);
  }
  if (uVar39 == 0) {
    uVar39 = 1;
  }
  uVar41 = (ulong)uVar39;
  uVar55 = 0;
  lVar57 = *(long *)(this + 0x10);
  uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar47 = CONCAT44(0,uVar40);
  lVar50 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar41 * lVar50;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar47;
  lVar51 = SUB168(auVar19 * auVar35,8);
  lVar49 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar57 + lVar51 * 4);
  iVar48 = SUB164(auVar19 * auVar35,8);
  uVar54 = *puVar1;
  puVar6 = puVar43;
  while (uVar54 != 0) {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)uVar54 * lVar50;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar47;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)((uVar40 + iVar48) - SUB164(auVar20 * auVar36,8)) * lVar50;
    auVar37._8_8_ = 0;
    auVar37._0_8_ = uVar47;
    local_c8 = SUB164(auVar21 * auVar37,8);
    puVar58 = puVar6;
    if (local_c8 < uVar55) {
      *puVar1 = (uint)uVar41;
      uVar41 = (ulong)uVar54;
      puVar2 = (undefined8 *)(lVar49 + lVar51 * 8);
      puVar58 = (undefined8 *)*puVar2;
      *puVar2 = puVar6;
      uVar55 = local_c8;
    }
    uVar39 = (uint)uVar41;
    uVar55 = uVar55 + 1;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = (ulong)(iVar48 + 1) * lVar50;
    auVar38._8_8_ = 0;
    auVar38._0_8_ = uVar47;
    lVar51 = SUB168(auVar22 * auVar38,8);
    puVar1 = (uint *)(lVar57 + lVar51 * 4);
    iVar48 = SUB164(auVar22 * auVar38,8);
    puVar6 = puVar58;
    uVar54 = *puVar1;
  }
  *(undefined8 **)(lVar49 + lVar51 * 8) = puVar6;
  *puVar1 = uVar39;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010a72c:
  List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
            ((List<EditorExportPlatform::ExportOption,DefaultAllocator> *)&local_70);
LAB_0010a074:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar43 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorExport::_bind_methods() [clone .cold] */

void EditorExport::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<EditorExportPlugin> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<EditorExportPlugin>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<EditorExportPlatform> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<EditorExportPlatform>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<EditorExportPreset> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<EditorExportPreset>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorExport::_initialize_classv() */

void EditorExport::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  long local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Node::initialize_class()::initialized == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "Node";
      local_60 = 0;
      local_40 = 4;
      String::parse_latin1((StrRange *)&local_60);
      StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
      if ((StringName::configured != '\0') && (local_48 != (undefined *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((code *)PTR__bind_methods_00110020 != Object::_bind_methods) {
        Node::_bind_methods();
      }
      Node::initialize_class()::initialized = '\x01';
    }
    local_48 = "Node";
    local_58 = 0;
    local_40 = 4;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "EditorExport";
    local_60 = 0;
    local_40 = 0xc;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_48,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_48,(StringName *)&local_50);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Ref<ConfigFile>::unref() */

void __thiscall Ref<ConfigFile>::unref(Ref<ConfigFile> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* Ref<EditorExportPreset>::unref() */

void __thiscall Ref<EditorExportPreset>::unref(Ref<EditorExportPreset> *this)

{
  Object *pOVar1;
  char cVar2;
  
  if (*(long *)this != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)this;
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        *(undefined8 *)this = 0;
        return;
      }
    }
  }
  *(undefined8 *)this = 0;
  return;
}



/* HashMap<StringName, PropertyInfo, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, PropertyInfo> > >::_lookup_pos(StringName
   const&, unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,PropertyInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,PropertyInfo>>>
::_lookup_pos(HashMap<StringName,PropertyInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,PropertyInfo>>>
              *this,StringName *param_1,uint *param_2)

{
  uint uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  
  if (*(long *)(this + 8) == 0) {
    return 0;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar15 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar15;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
    uVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      do {
        if ((uVar11 == uVar14) &&
           (*(long *)(*(long *)(*(long *)(this + 8) + lVar13 * 8) + 0x10) == *(long *)param_1)) {
          *param_2 = uVar12;
          return 1;
        }
        uVar16 = uVar16 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar15;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(*(long *)(this + 0x10) + lVar13 * 4);
        uVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar14 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar14 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar15, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar15, uVar16 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, PropertyInfo, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, PropertyInfo> > >::operator[](StringName const&)
    */

undefined8 * __thiscall
HashMap<StringName,PropertyInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,PropertyInfo>>>
::operator[](HashMap<StringName,PropertyInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,PropertyInfo>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  long lVar3;
  void *pvVar4;
  void *__s;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
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
  char cVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  undefined8 uVar34;
  void *__s_00;
  undefined8 *puVar35;
  void *pvVar36;
  int iVar37;
  long lVar38;
  long lVar39;
  ulong uVar40;
  undefined8 uVar41;
  uint uVar42;
  uint uVar43;
  ulong uVar44;
  uint uVar45;
  long lVar46;
  undefined8 *puVar47;
  long in_FS_OFFSET;
  uint local_118;
  CowData<char32_t> *local_f0;
  CowData<char32_t> *local_e8;
  uint local_bc;
  undefined8 local_b8;
  CowData local_b0 [8];
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined1 local_88 [16];
  long local_78;
  undefined4 local_70;
  undefined8 local_68;
  long local_60;
  undefined4 local_58;
  undefined8 local_50;
  undefined4 local_48;
  long local_40;
  
  lVar46 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (lVar46 == 0) {
LAB_0010b45a:
    local_90 = 6;
    local_98 = 0;
    local_a0 = 0;
    _local_b0 = (undefined1  [16])0x0;
    local_b8 = 0;
    uVar40 = (ulong)uVar32;
    uVar33 = uVar40 * 4;
    uVar44 = uVar40 * 8;
    uVar34 = Memory::alloc_static(uVar33,false);
    *(undefined8 *)(this + 0x10) = uVar34;
    pvVar36 = (void *)Memory::alloc_static(uVar44,false);
    *(void **)(this + 8) = pvVar36;
    if (uVar32 != 0) {
      pvVar4 = *(void **)(this + 0x10);
      if ((pvVar4 < (void *)((long)pvVar36 + uVar44)) && (pvVar36 < (void *)((long)pvVar4 + uVar33))
         ) {
        uVar33 = 0;
        do {
          *(undefined4 *)((long)pvVar4 + uVar33 * 4) = 0;
          *(undefined8 *)((long)pvVar36 + uVar33 * 8) = 0;
          uVar33 = uVar33 + 1;
        } while (uVar40 != uVar33);
      }
      else {
        memset(pvVar4,0,uVar33);
        memset(pvVar36,0,uVar44);
      }
    }
  }
  else if (*(int *)(this + 0x2c) == 0) {
    local_b8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_90 = 6;
    _local_b0 = (undefined1  [16])0x0;
  }
  else {
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar31 = StringName::get_empty_hash();
      lVar46 = *(long *)(this + 8);
    }
    else {
      uVar31 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar33 = CONCAT44(0,uVar32);
    if (uVar31 == 0) {
      uVar31 = 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (ulong)uVar31 * lVar3;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar33;
    lVar38 = SUB168(auVar6 * auVar18,8);
    uVar42 = *(uint *)(*(long *)(this + 0x10) + lVar38 * 4);
    uVar43 = SUB164(auVar6 * auVar18,8);
    if (uVar42 != 0) {
      uVar45 = 0;
      do {
        if ((uVar31 == uVar42) &&
           (*(long *)(*(long *)(lVar46 + lVar38 * 8) + 0x10) == *(long *)param_1)) {
          puVar35 = *(undefined8 **)(lVar46 + (ulong)uVar43 * 8);
          goto LAB_0010ae84;
        }
        uVar45 = uVar45 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)(uVar43 + 1) * lVar3;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar33;
        lVar38 = SUB168(auVar7 * auVar19,8);
        uVar42 = *(uint *)(*(long *)(this + 0x10) + lVar38 * 4);
        uVar43 = SUB164(auVar7 * auVar19,8);
      } while ((uVar42 != 0) &&
              (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar42 * lVar3, auVar20._8_8_ = 0,
              auVar20._0_8_ = uVar33, auVar9._8_8_ = 0,
              auVar9._0_8_ = (ulong)((uVar43 + uVar32) - SUB164(auVar8 * auVar20,8)) * lVar3,
              auVar21._8_8_ = 0, auVar21._0_8_ = uVar33, uVar45 <= SUB164(auVar9 * auVar21,8)));
    }
    local_b8 = 0;
    local_a0 = 0;
    local_98 = 0;
    uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    local_90 = 6;
    _local_b0 = (undefined1  [16])0x0;
    if (lVar46 == 0) goto LAB_0010b45a;
  }
  local_bc = 0;
  cVar30 = _lookup_pos(this,param_1,&local_bc);
  if (cVar30 == '\0') {
    if ((float)uVar32 * __LC22 < (float)(*(int *)(this + 0x2c) + 1)) {
      uVar32 = *(uint *)(this + 0x28);
      if (uVar32 == 0x1c) {
        puVar35 = (undefined8 *)0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_0010b3d8;
      }
      uVar33 = (ulong)(uVar32 + 1);
      *(undefined4 *)(this + 0x2c) = 0;
      uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
      if (uVar32 + 1 < 2) {
        uVar33 = 2;
      }
      uVar32 = *(uint *)(hash_table_size_primes + uVar33 * 4);
      uVar40 = (ulong)uVar32;
      *(int *)(this + 0x28) = (int)uVar33;
      pvVar36 = *(void **)(this + 8);
      uVar33 = uVar40 * 4;
      uVar44 = uVar40 * 8;
      pvVar4 = *(void **)(this + 0x10);
      uVar34 = Memory::alloc_static(uVar33,false);
      *(undefined8 *)(this + 0x10) = uVar34;
      __s_00 = (void *)Memory::alloc_static(uVar44,false);
      *(void **)(this + 8) = __s_00;
      if (uVar32 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar44)) && (__s_00 < (void *)((long)__s + uVar33))) {
          uVar33 = 0;
          do {
            *(undefined4 *)((long)__s + uVar33 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar33 * 8) = 0;
            uVar33 = uVar33 + 1;
          } while (uVar33 != uVar40);
        }
        else {
          memset(__s,0,uVar33);
          memset(__s_00,0,uVar44);
        }
      }
      if (uVar31 != 0) {
        uVar33 = 0;
        do {
          uVar32 = *(uint *)((long)pvVar4 + uVar33 * 4);
          if (uVar32 != 0) {
            lVar46 = *(long *)(this + 0x10);
            uVar45 = 0;
            uVar42 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
            uVar44 = CONCAT44(0,uVar42);
            lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar32 * lVar3;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar44;
            lVar38 = SUB168(auVar10 * auVar22,8);
            puVar1 = (uint *)(lVar46 + lVar38 * 4);
            iVar37 = SUB164(auVar10 * auVar22,8);
            uVar43 = *puVar1;
            uVar34 = *(undefined8 *)((long)pvVar36 + uVar33 * 8);
            while (uVar43 != 0) {
              auVar11._8_8_ = 0;
              auVar11._0_8_ = (ulong)uVar43 * lVar3;
              auVar23._8_8_ = 0;
              auVar23._0_8_ = uVar44;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = (ulong)((uVar42 + iVar37) - SUB164(auVar11 * auVar23,8)) * lVar3;
              auVar24._8_8_ = 0;
              auVar24._0_8_ = uVar44;
              local_118 = SUB164(auVar12 * auVar24,8);
              uVar41 = uVar34;
              if (local_118 < uVar45) {
                *puVar1 = uVar32;
                puVar35 = (undefined8 *)((long)__s_00 + lVar38 * 8);
                uVar41 = *puVar35;
                *puVar35 = uVar34;
                uVar32 = uVar43;
                uVar45 = local_118;
              }
              uVar45 = uVar45 + 1;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = (ulong)(iVar37 + 1) * lVar3;
              auVar25._8_8_ = 0;
              auVar25._0_8_ = uVar44;
              lVar38 = SUB168(auVar13 * auVar25,8);
              puVar1 = (uint *)(lVar46 + lVar38 * 4);
              iVar37 = SUB164(auVar13 * auVar25,8);
              uVar34 = uVar41;
              uVar43 = *puVar1;
            }
            *(undefined8 *)((long)__s_00 + lVar38 * 8) = uVar34;
            *puVar1 = uVar32;
            *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
          }
          uVar33 = uVar33 + 1;
        } while (uVar33 != uVar31);
        Memory::free_static(pvVar36,false);
        Memory::free_static(pvVar4,false);
      }
    }
    local_88 = (undefined1  [16])0x0;
    StringName::StringName((StringName *)&local_78,param_1);
    local_68 = 0;
    local_70 = (undefined4)local_b8;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,local_b0);
    StringName::StringName((StringName *)&local_60,(StringName *)(local_b0 + 8));
    local_50 = 0;
    local_58 = (undefined4)local_a0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)&local_98);
    local_48 = local_90;
    puVar35 = (undefined8 *)operator_new(0x48,"");
    *puVar35 = local_88._0_8_;
    puVar35[1] = local_88._8_8_;
    StringName::StringName((StringName *)(puVar35 + 2),(StringName *)&local_78);
    puVar35[4] = 0;
    *(undefined4 *)(puVar35 + 3) = local_70;
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar35 + 4),(CowData *)&local_68);
    StringName::StringName((StringName *)(puVar35 + 5),(StringName *)&local_60);
    puVar35[7] = 0;
    *(undefined4 *)(puVar35 + 6) = local_58;
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar35 + 7),(CowData *)&local_50);
    *(undefined4 *)(puVar35 + 8) = local_48;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if ((StringName::configured != '\0') && (local_78 != 0)) {
      StringName::unref();
    }
    puVar5 = *(undefined8 **)(this + 0x20);
    if (puVar5 == (undefined8 *)0x0) {
      *(undefined8 **)(this + 0x18) = puVar35;
    }
    else {
      *puVar5 = puVar35;
      puVar35[1] = puVar5;
    }
    *(undefined8 **)(this + 0x20) = puVar35;
    if (*(long *)param_1 == 0) {
      uVar32 = StringName::get_empty_hash();
    }
    else {
      uVar32 = *(uint *)(*(long *)param_1 + 0x20);
    }
    lVar46 = *(long *)(this + 0x10);
    if (uVar32 == 0) {
      uVar32 = 1;
    }
    uVar33 = (ulong)uVar32;
    uVar43 = 0;
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar44 = CONCAT44(0,uVar31);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar33 * lVar3;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar44;
    lVar39 = SUB168(auVar14 * auVar26,8);
    lVar38 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar46 + lVar39 * 4);
    iVar37 = SUB164(auVar14 * auVar26,8);
    uVar42 = *puVar1;
    puVar5 = puVar35;
    while (uVar42 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar42 * lVar3;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar44;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)((iVar37 + uVar31) - SUB164(auVar15 * auVar27,8)) * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar44;
      local_118 = SUB164(auVar16 * auVar28,8);
      puVar47 = puVar5;
      if (local_118 < uVar43) {
        *puVar1 = (uint)uVar33;
        uVar33 = (ulong)uVar42;
        puVar2 = (undefined8 *)(lVar38 + lVar39 * 8);
        puVar47 = (undefined8 *)*puVar2;
        *puVar2 = puVar5;
        uVar43 = local_118;
      }
      uVar32 = (uint)uVar33;
      uVar43 = uVar43 + 1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)(iVar37 + 1) * lVar3;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar44;
      lVar39 = SUB168(auVar17 * auVar29,8);
      puVar1 = (uint *)(lVar46 + lVar39 * 4);
      iVar37 = SUB164(auVar17 * auVar29,8);
      puVar5 = puVar47;
      uVar42 = *puVar1;
    }
    *(undefined8 **)(lVar38 + lVar39 * 8) = puVar5;
    *puVar1 = uVar32;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar33 = (ulong)local_bc;
    lVar46 = *(long *)(*(long *)(this + 8) + uVar33 * 8);
    *(undefined4 *)(lVar46 + 0x18) = (undefined4)local_b8;
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar46 + 0x20),local_b0);
    StringName::operator=((StringName *)(lVar46 + 0x28),(StringName *)(local_b0 + 8));
    *(undefined4 *)(lVar46 + 0x30) = (undefined4)local_a0;
    CowData<char32_t>::_ref((CowData<char32_t> *)(lVar46 + 0x38),(CowData *)&local_98);
    *(undefined4 *)(lVar46 + 0x40) = local_90;
    puVar35 = *(undefined8 **)(*(long *)(this + 8) + uVar33 * 8);
  }
LAB_0010b3d8:
  local_e8 = (CowData<char32_t> *)&local_98;
  local_f0 = (CowData<char32_t> *)local_b0;
  CowData<char32_t>::_unref(local_e8);
  if ((StringName::configured != '\0') && (lStack_a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref(local_f0);
LAB_0010ae84:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar35 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CowData<Ref<EditorExportPlugin> >::_unref() */

void __thiscall CowData<Ref<EditorExportPlugin>>::_unref(CowData<Ref<EditorExportPlugin>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0010b77d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0010b77d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<EditorExportPlatform> >::_unref() */

void __thiscall CowData<Ref<EditorExportPlatform>>::_unref(CowData<Ref<EditorExportPlatform>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0010b85d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0010b85d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<EditorExportPreset> >::_unref() */

void __thiscall CowData<Ref<EditorExportPreset>>::_unref(CowData<Ref<EditorExportPreset>> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
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
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_0010b93d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 1;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_0010b93d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 1;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* CowData<Ref<EditorExportPlatform> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<EditorExportPlatform>>::_realloc(CowData<Ref<EditorExportPlatform>> *this,long param_1)

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
/* Error CowData<Ref<EditorExportPlatform> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<EditorExportPlatform>>::resize<false>
          (CowData<Ref<EditorExportPlatform>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010bda0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0010bda0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010bc4a:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010bc4a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0010bc10;
  }
  if (lVar11 == lVar8) {
LAB_0010bd1b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0010bc10:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010bcfb;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010bd1b;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010bcfb:
  puVar10[-1] = param_1;
  return 0;
}



/* CowData<Ref<EditorExportPreset> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<EditorExportPreset>>::_realloc(CowData<Ref<EditorExportPreset>> *this,long param_1)

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
/* Error CowData<Ref<EditorExportPreset> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<EditorExportPreset>>::resize<false>(CowData<Ref<EditorExportPreset>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010c130:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0010c130;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010bfda:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010bfda;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0010bfa0;
  }
  if (lVar11 == lVar8) {
LAB_0010c0ab:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0010bfa0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010c08b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010c0ab;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010c08b:
  puVar10[-1] = param_1;
  return 0;
}



/* EditorExport::_notificationv(int, bool) */

void __thiscall EditorExport::_notificationv(EditorExport *this,int param_1,bool param_2)

{
  if (!param_2) {
    if ((code *)PTR__notification_00110028 != Object::_notification) {
      Node::_notification((int)this);
    }
    _notification(this,param_1);
    return;
  }
  _notification(this,param_1);
  if ((code *)PTR__notification_00110028 != Object::_notification) {
    Node::_notification((int)this);
    return;
  }
  return;
}



/* CowData<Ref<EditorExportPlugin> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<EditorExportPlugin>>::_realloc(CowData<Ref<EditorExportPlugin>> *this,long param_1)

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
/* Error CowData<Ref<EditorExportPlugin> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<EditorExportPlugin>>::resize<false>(CowData<Ref<EditorExportPlugin>> *this,long param_1)

{
  long *plVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
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
    lVar7 = 0;
    lVar8 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar7) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar8 = lVar7 * 8;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0010c530:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 8 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar11 = uVar9 + 1;
  if (lVar11 == 0) goto LAB_0010c530;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010c3da:
        if (lVar11 != lVar8) {
          uVar5 = _realloc(this,lVar11);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      while (plVar1 = (long *)(lVar7 + uVar9 * 8), *plVar1 == 0) {
        uVar9 = uVar9 + 1;
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010c3da;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar2 = (Object *)*plVar1;
        cVar4 = predelete_handler(pOVar2);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
          Memory::free_static(pOVar2,false);
        }
      }
      uVar9 = uVar9 + 1;
      lVar7 = *(long *)this;
    }
    goto LAB_0010c3a0;
  }
  if (lVar11 == lVar8) {
LAB_0010c4ab:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0010c3a0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010c48b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010c4ab;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar10 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar10;
    lVar7 = 0;
  }
  memset(puVar10 + lVar7,0,(param_1 - lVar7) * 8);
LAB_0010c48b:
  puVar10[-1] = param_1;
  return 0;
}



/* void memdelete<HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >
   >(HashMapElement<String, HashMap<String, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, Variant> > > >*)
    */

void memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
               (HashMapElement *param_1)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(param_1 + 0x20);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar2) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar3 + 0x18)] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010c64f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_0010c64f:
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x10));
  Memory::free_static(param_1,false);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010cc20;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010c751;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010c751:
  *(undefined ***)this = &PTR__initialize_classv_0010cac0;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010cc20;
  pvVar3 = *(void **)(this + 0x188);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x1ac) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x1a8) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 400) + lVar2) != 0) {
            *(int *)(*(long *)(this + 400) + lVar2) = 0;
            memdelete<HashMapElement<String,HashMap<String,Variant,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Variant>>>>>
                      (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
            pvVar3 = *(void **)(this + 0x188);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x1ac) = 0;
        *(undefined1 (*) [16])(this + 0x198) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010c841;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010c841:
  *(undefined ***)this = &PTR__initialize_classv_0010cac0;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* EditorExport::singleton */

void EditorExport::_GLOBAL__sub_I_singleton(void)

{
  undefined8 uStack_18;
  
  if (PopupMenu::base_property_helper == '\0') {
    PopupMenu::base_property_helper = '\x01';
    PopupMenu::base_property_helper._64_8_ = 0;
    PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
    PopupMenu::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,
                 &__dso_handle);
  }
  ENV_SCRIPT_ENCRYPTION_KEY = 0;
  String::parse_latin1((String *)&ENV_SCRIPT_ENCRYPTION_KEY,"GODOT_SCRIPT_ENCRYPTION_KEY");
  __cxa_atexit(String::~String,&ENV_SCRIPT_ENCRYPTION_KEY,&__dso_handle);
  if (_export_presets_updated == '\0') {
    _export_presets_updated = '\x01';
    _export_presets_updated = 0;
    __cxa_atexit(StringName::~StringName,&_export_presets_updated,&__dso_handle);
  }
  if (_export_presets_runnable_updated != '\0') {
    return;
  }
  _export_presets_runnable_updated = 1;
  _export_presets_runnable_updated = 0;
  __cxa_atexit(StringName::~StringName,&_export_presets_runnable_updated,&__dso_handle,uStack_18);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorExportPlatform::ExportOption, DefaultAllocator>::~List() */

void __thiscall
List<EditorExportPlatform::ExportOption,DefaultAllocator>::~List
          (List<EditorExportPlatform::ExportOption,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorExport, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorExport,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorExport,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}


