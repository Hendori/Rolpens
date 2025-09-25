/* LocalizationEditor::_translation_file_open() */

void LocalizationEditor::_translation_file_open(void)

{
  EditorFileDialog::popup_file_dialog();
  return;
}



/* LocalizationEditor::_translation_res_file_open() */

void LocalizationEditor::_translation_res_file_open(void)

{
  EditorFileDialog::popup_file_dialog();
  return;
}



/* LocalizationEditor::_translation_res_option_file_open() */

void LocalizationEditor::_translation_res_option_file_open(void)

{
  EditorFileDialog::popup_file_dialog();
  return;
}



/* LocalizationEditor::_pot_file_open() */

void LocalizationEditor::_pot_file_open(void)

{
  EditorFileDialog::popup_file_dialog();
  return;
}



/* LocalizationEditor::_pot_generate_open() */

void LocalizationEditor::_pot_generate_open(void)

{
  EditorFileDialog::popup_file_dialog();
  return;
}



/* LocalizationEditor::_pot_generate(String const&) */

void LocalizationEditor::_pot_generate(String *param_1)

{
  String *pSVar1;
  
  pSVar1 = (String *)POTGenerator::get_singleton();
  POTGenerator::generate_pot(pSVar1);
  return;
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



/* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */

void __thiscall
List<PropertyInfo,DefaultAllocator>::push_back
          (List<PropertyInfo,DefaultAllocator> *this,PropertyInfo *param_1)

{
  long *plVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined1 (*pauVar4) [16];
  
  if (*(long *)this == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])this = pauVar4;
    *(undefined4 *)pauVar4[1] = 0;
    *pauVar4 = (undefined1  [16])0x0;
  }
  puVar3 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
  *(undefined8 *)(puVar3 + 8) = 0;
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  lVar2 = *(long *)(param_1 + 8);
  *puVar3 = 0;
  puVar3[6] = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = *(undefined4 *)param_1;
  if (lVar2 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  }
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  if (*(long *)(puVar3 + 8) != *(long *)(param_1 + 0x20)) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
  }
  puVar3[10] = *(undefined4 *)(param_1 + 0x28);
  plVar1 = *(long **)this;
  lVar2 = plVar1[1];
  *(undefined8 *)(puVar3 + 0xc) = 0;
  *(long **)(puVar3 + 0x10) = plVar1;
  *(long *)(puVar3 + 0xe) = lVar2;
  if (lVar2 != 0) {
    *(undefined4 **)(lVar2 + 0x30) = puVar3;
  }
  plVar1[1] = (long)puVar3;
  if (*plVar1 != 0) {
    *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
    return;
  }
  *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
  *plVar1 = (long)puVar3;
  return;
}



/* LocalizationEditor::_translation_res_option_popup(bool) */

void LocalizationEditor::_translation_res_option_popup(bool param_1)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  undefined7 in_register_00000039;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = Tree::get_edited();
  if (lVar3 == 0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_translation_res_option_popup","editor/localization_editor.cpp",0xd1,
                       "Parameter \"ed\" is null.",0,0);
      return;
    }
  }
  else {
    pSVar2 = *(String **)(CONCAT71(in_register_00000039,param_1) + 0xa18);
    TreeItem::get_tooltip_text((int)&local_28);
    EditorLocaleDialog::set_locale(pSVar2);
    lVar3 = local_28;
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_28 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorLocaleDialog::popup_locale_dialog();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_pot_add_builtin_toggled() */

void LocalizationEditor::_pot_add_builtin_toggled(void)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  String *pSVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  undefined8 local_40;
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar4 = (String *)ProjectSettings::get_singleton();
  bVar3 = (bool)BaseButton::is_pressed();
  Variant::Variant((Variant *)local_38,bVar3);
  local_48 = "internationalization/locale/translation_add_builtin_strings_to_pot";
  local_50 = 0;
  local_40 = 0x42;
  String::parse_latin1((StrRange *)&local_50);
  ProjectSettings::set_setting(pSVar4,(Variant *)&local_50);
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
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  uVar5 = ProjectSettings::get_singleton();
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    ProjectSettings::save();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar5);
}



/* LocalizationEditor::_translation_res_select() */

void __thiscall LocalizationEditor::_translation_res_select(LocalizationEditor *this)

{
  long in_FS_OFFSET;
  LocalizationEditor aLStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa78] == (LocalizationEditor)0x0) {
    create_custom_callable_function_pointer<LocalizationEditor>
              (aLStack_48,(char *)this,(_func_void *)"&LocalizationEditor::update_translations");
    Variant::Variant((Variant *)local_38,0);
    Callable::call_deferredp((Variant **)aLStack_48,0);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)aLStack_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::connect_filesystem_dock_signals(FileSystemDock*) */

void __thiscall
LocalizationEditor::connect_filesystem_dock_signals
          (LocalizationEditor *this,FileSystemDock *param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  long local_50;
  Callable local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  this_00 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_00);
  *(undefined **)(this_00 + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_00 = &PTR_hash_00115e58;
  *(undefined8 *)(this_00 + 0x40) = 0;
  uVar2 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_00 + 0x10) = 0;
  *(undefined8 *)(this_00 + 0x30) = uVar2;
  *(code **)(this_00 + 0x38) = _filesystem_files_moved;
  *(LocalizationEditor **)(this_00 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
  *(char **)(this_00 + 0x20) = "LocalizationEditor::_filesystem_files_moved";
  Callable::Callable(local_48,this_00);
  StringName::StringName((StringName *)&local_50,"files_moved",false);
  (*pcVar1)(param_1,(StringName *)&local_50,local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_48);
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,String_const&>
            ((LocalizationEditor *)local_48,(char *)this,
             (_func_void_String_ptr *)"&LocalizationEditor::_filesystem_file_removed");
  StringName::StringName((StringName *)&local_50,"file_removed",false);
  (*pcVar1)(param_1,(StringName *)&local_50,local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_translation_res_delete(Object*, int, int, MouseButton) */

void __thiscall
LocalizationEditor::_translation_res_delete
          (LocalizationEditor *this,long param_1,undefined8 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  String *pSVar2;
  Object *pOVar3;
  StringName *pSVar4;
  long in_FS_OFFSET;
  Variant local_88 [8];
  Variant local_80 [8];
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xa78] == (LocalizationEditor)0x0) && (param_5 == 1)) {
    pSVar2 = (String *)ProjectSettings::get_singleton();
    local_70 = 0;
    local_60 = 0x2e;
    local_68 = "internationalization/locale/translation_remaps";
    String::parse_latin1((StrRange *)&local_70);
    cVar1 = ProjectSettings::has_setting(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if (cVar1 != '\0') {
      ProjectSettings::get_singleton();
      StringName::StringName
                ((StringName *)&local_68,"internationalization/locale/translation_remaps",false);
      ProjectSettings::get_setting_with_override((StringName *)local_58);
      Variant::operator_cast_to_Dictionary(local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      if (param_1 != 0) {
        __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
      }
      TreeItem::get_metadata((int)(StringName *)local_58);
      Variant::operator_cast_to_String(local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_58,(String *)local_80);
      cVar1 = Dictionary::has(local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar1 == '\0') {
        _err_print_error("_translation_res_delete","editor/localization_editor.cpp",0x11b,
                         "Condition \"!remaps.has(key)\" is true.",0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        Dictionary::~Dictionary((Dictionary *)local_88);
      }
      else {
        Variant::Variant((Variant *)local_58,(String *)local_80);
        Dictionary::erase(local_88);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"");
        local_78 = 0;
        String::parse_latin1((String *)&local_78,"Remove Resource Remap");
        TTR((String *)&local_68,(String *)&local_78);
        EditorUndoRedoManager::create_action(pOVar3,(StringName *)&local_68,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        Variant::Variant((Variant *)local_58,local_88);
        StringName::StringName
                  ((StringName *)&local_68,"internationalization/locale/translation_remaps",false);
        pSVar4 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(pOVar3,pSVar4,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_70,"internationalization/locale/translation_remaps",false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        StringName::StringName
                  ((StringName *)&local_68,"internationalization/locale/translation_remaps",false);
        pSVar4 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_property(pOVar3,pSVar4,(Variant *)&local_68);
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_70 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_68,"update_translations",false);
        local_50 = (undefined1  [16])0x0;
        local_58[0] = 0;
        local_58[1] = 0;
        EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_68,0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_68,"update_translations",false);
        local_50 = (undefined1  [16])0x0;
        local_58[0] = 0;
        local_58[1] = 0;
        EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,(Variant **)&local_68,0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        local_68 = (char *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(this + 0xa80));
        StringName::StringName((StringName *)&local_70,"emit_signal",false);
        EditorUndoRedoManager::add_do_method<String>
                  ((EditorUndoRedoManager *)pOVar3,this,(StrRange *)&local_70,
                   (StringName *)&local_68);
        if ((StringName::configured != '\0') && (local_70 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        local_68 = (char *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(this + 0xa80));
        StringName::StringName((StringName *)&local_70,"emit_signal",false);
        EditorUndoRedoManager::add_undo_method<String>
                  ((EditorUndoRedoManager *)pOVar3,this,(StrRange *)&local_70,
                   (StringName *)&local_68);
        if ((StringName::configured != '\0') && (local_70 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        Dictionary::~Dictionary((Dictionary *)local_88);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::LocalizationEditor() */

void __thiscall LocalizationEditor::LocalizationEditor(LocalizationEditor *this)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  String *pSVar5;
  TabContainer *this_00;
  BoxContainer *pBVar6;
  BoxContainer *pBVar7;
  Label *pLVar8;
  Button *pBVar9;
  Tree *pTVar10;
  EditorLocaleDialog *this_01;
  EditorFileDialog *pEVar11;
  CallableCustom *this_02;
  CheckBox *this_03;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  *(undefined ***)this = &PTR__initialize_classv_001159c0;
  this[0xa0c] = (LocalizationEditor)0x1;
  *(undefined8 *)(this + 0xa70) = 0;
  this[0xa78] = (LocalizationEditor)0x0;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  local_58 = "localization_changed";
  local_50 = 0x14;
  String::parse_latin1((StrRange *)(this + 0xa80));
  this_00 = (TabContainer *)operator_new(0xb40,"");
  TabContainer::TabContainer(this_00);
  postinitialize_handler((Object *)this_00);
  Control::set_v_size_flags(this_00,3);
  Node::add_child(this,this_00,0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00115648;
  postinitialize_handler((Object *)pBVar6);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Translations";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Node::set_name((String *)pBVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_00,pBVar6,0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_001152d0;
  postinitialize_handler((Object *)pBVar7);
  pLVar8 = (Label *)operator_new(0xad8,"");
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Translations:";
  local_68 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::Label(pLVar8,(String *)&local_58);
  postinitialize_handler((Object *)pLVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  StringName::StringName((StringName *)&local_58,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar8);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(pBVar7,pLVar8,0,0);
  BoxContainer::add_spacer(SUB81(pBVar7,0));
  Node::add_child(pBVar6,pBVar7,0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Add...";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pcVar1 = *(code **)(*(long *)pBVar9 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void *)"&LocalizationEditor::_translation_file_open");
  (*pcVar1)(pBVar9,SceneStringNames::singleton + 0x238,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar7,pBVar9,0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00115648;
  postinitialize_handler((Object *)pBVar7);
  Control::set_v_size_flags(pBVar7,3);
  Node::add_child(pBVar6,pBVar7,0,0);
  pTVar10 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar10);
  postinitialize_handler((Object *)pTVar10);
  *(Tree **)(this + 0xa10) = pTVar10;
  Control::set_v_size_flags(pTVar10,3);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa10),0,0);
  this_01 = (EditorLocaleDialog *)operator_new(0xe20,"");
  EditorLocaleDialog::EditorLocaleDialog(this_01);
  postinitialize_handler((Object *)this_01);
  lVar2 = *(long *)this_01;
  *(EditorLocaleDialog **)(this + 0xa18) = this_01;
  pcVar1 = *(code **)(lVar2 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,String_const&>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&LocalizationEditor::_translation_res_option_selected");
  StringName::StringName((StringName *)&local_60,"locale_selected",false);
  (*pcVar1)(this_01,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa18),0,0);
  pEVar11 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(pEVar11);
  postinitialize_handler((Object *)pEVar11);
  *(EditorFileDialog **)(this + 0xa20) = pEVar11;
  EditorFileDialog::set_file_mode(pEVar11,1);
  plVar3 = *(long **)(this + 0xa20);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,Vector<String>const&>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void_Vector_ptr *)"&LocalizationEditor::_translation_add");
  StringName::StringName((StringName *)&local_60,"files_selected",false);
  (*pcVar1)(plVar3,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa20),0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00115648;
  postinitialize_handler((Object *)pBVar6);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Remaps";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Node::set_name((String *)pBVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_00,pBVar6,0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_001152d0;
  postinitialize_handler((Object *)pBVar7);
  pLVar8 = (Label *)operator_new(0xad8,"");
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Resources:";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::Label(pLVar8,(String *)&local_58);
  postinitialize_handler((Object *)pLVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  StringName::StringName((StringName *)&local_58,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar8);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(pBVar7,pLVar8,0,0);
  BoxContainer::add_spacer(SUB81(pBVar7,0));
  Node::add_child(pBVar6,pBVar7,0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Add...";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pcVar1 = *(code **)(*(long *)pBVar9 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void *)"&LocalizationEditor::_translation_res_file_open");
  (*pcVar1)(pBVar9,SceneStringNames::singleton + 0x238,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar7,pBVar9,0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00115648;
  postinitialize_handler((Object *)pBVar7);
  Control::set_v_size_flags(pBVar7,3);
  Node::add_child(pBVar6,pBVar7,0,0);
  pTVar10 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar10);
  postinitialize_handler((Object *)pTVar10);
  *(Tree **)(this + 0xa40) = pTVar10;
  Control::set_v_size_flags(pTVar10,3);
  plVar3 = *(long **)(this + 0xa40);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void *)"&LocalizationEditor::_translation_res_select");
  StringName::StringName((StringName *)&local_60,"cell_selected",false);
  (*pcVar1)(plVar3,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar3 = *(long **)(this + 0xa40);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,Object*,int,int,MouseButton>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void_Object_ptr_int_int_MouseButton *)
             "&LocalizationEditor::_translation_res_delete");
  StringName::StringName((StringName *)&local_60,"button_clicked",false);
  (*pcVar1)(plVar3,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa40),0,0);
  pEVar11 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(pEVar11);
  postinitialize_handler((Object *)pEVar11);
  *(EditorFileDialog **)(this + 0xa30) = pEVar11;
  EditorFileDialog::set_file_mode(pEVar11,1);
  plVar3 = *(long **)(this + 0xa30);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,Vector<String>const&>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void_Vector_ptr *)"&LocalizationEditor::_translation_res_add");
  StringName::StringName((StringName *)&local_60,"files_selected",false);
  (*pcVar1)(plVar3,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa30),0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_001152d0;
  postinitialize_handler((Object *)pBVar7);
  pLVar8 = (Label *)operator_new(0xad8,"");
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Remaps by Locale:";
  local_68 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::Label(pLVar8,(String *)&local_58);
  postinitialize_handler((Object *)pLVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  StringName::StringName((StringName *)&local_58,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar8);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(pBVar7,pLVar8,0,0);
  BoxContainer::add_spacer(SUB81(pBVar7,0));
  Node::add_child(pBVar6,pBVar7,0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Add...";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pcVar1 = *(code **)(*(long *)pBVar9 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void *)"&LocalizationEditor::_translation_res_option_file_open");
  (*pcVar1)(pBVar9,SceneStringNames::singleton + 0x238,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  *(Button **)(this + 0xa28) = pBVar9;
  Node::add_child(pBVar7,pBVar9,0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,true);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_00115648;
  postinitialize_handler((Object *)pBVar7);
  Control::set_v_size_flags(pBVar7,3);
  Node::add_child(pBVar6,pBVar7,0,0);
  pTVar10 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar10);
  postinitialize_handler((Object *)pTVar10);
  *(Tree **)(this + 0xa48) = pTVar10;
  Control::set_v_size_flags(pTVar10,3);
  Tree::set_columns((int)*(undefined8 *)(this + 0xa48));
  local_58 = "";
  uVar4 = *(undefined8 *)(this + 0xa48);
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Path";
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Tree::set_column_title((int)uVar4,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  uVar4 = *(undefined8 *)(this + 0xa48);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Locale";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Tree::set_column_title((int)uVar4,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xa48),0));
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa48),false);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa48),false);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa48),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xa48),true);
  Tree::set_column_custom_minimum_width((int)*(undefined8 *)(this + 0xa48),1);
  plVar3 = *(long **)(this + 0xa48);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void *)"&LocalizationEditor::_translation_res_option_changed");
  StringName::StringName((StringName *)&local_60,"item_edited",false);
  (*pcVar1)(plVar3,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar3 = *(long **)(this + 0xa48);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,Object*,int,int,MouseButton>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void_Object_ptr_int_int_MouseButton *)
             "&LocalizationEditor::_translation_res_option_delete");
  StringName::StringName((StringName *)&local_60,"button_clicked",false);
  (*pcVar1)(plVar3,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar3 = *(long **)(this + 0xa48);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(LocalizationEditor **)(this_02 + 0x28) = this;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(this_02 + 0x20) = &_LC10;
  *(undefined ***)this_02 = &PTR_hash_00116008;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar4;
  *(code **)(this_02 + 0x38) = _translation_res_option_popup;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "LocalizationEditor::_translation_res_option_popup";
  Callable::Callable((Callable *)&local_58,this_02);
  StringName::StringName((StringName *)&local_60,"custom_popup_edited",false);
  (*pcVar1)(plVar3,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa48),0,0);
  pEVar11 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(pEVar11);
  postinitialize_handler((Object *)pEVar11);
  *(EditorFileDialog **)(this + 0xa38) = pEVar11;
  EditorFileDialog::set_file_mode(pEVar11,1);
  plVar3 = *(long **)(this + 0xa38);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,Vector<String>const&>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void_Vector_ptr *)"&LocalizationEditor::_translation_res_option_add");
  StringName::StringName((StringName *)&local_60,"files_selected",false);
  (*pcVar1)(plVar3,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa38),0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_00115648;
  postinitialize_handler((Object *)pBVar6);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "POT Generation";
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Node::set_name((String *)pBVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_00,pBVar6,0,0);
  pBVar7 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar7,false);
  pBVar7[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar7 = &PTR__initialize_classv_001152d0;
  postinitialize_handler((Object *)pBVar7);
  pLVar8 = (Label *)operator_new(0xad8,"");
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Files with translation strings:";
  local_68 = 0;
  local_50 = 0x1f;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::Label(pLVar8,(String *)&local_58);
  postinitialize_handler((Object *)pLVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  StringName::StringName((StringName *)&local_58,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar8);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(pBVar7,pLVar8,0,0);
  BoxContainer::add_spacer(SUB81(pBVar7,0));
  Node::add_child(pBVar6,pBVar7,0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Add...";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pcVar1 = *(code **)(*(long *)pBVar9 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void *)"&LocalizationEditor::_pot_file_open");
  (*pcVar1)(pBVar9,SceneStringNames::singleton + 0x238,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar7,pBVar9,0,0);
  pBVar9 = (Button *)operator_new(0xc10,"");
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Generate POT";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::Button(pBVar9,(String *)&local_58);
  postinitialize_handler((Object *)pBVar9);
  *(Button **)(this + 0xa70) = pBVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  plVar3 = *(long **)(this + 0xa70);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void *)"&LocalizationEditor::_pot_generate_open");
  (*pcVar1)(plVar3,SceneStringNames::singleton + 0x238,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar7,*(undefined8 *)(this + 0xa70),0,0);
  pTVar10 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar10);
  postinitialize_handler((Object *)pTVar10);
  *(Tree **)(this + 0xa50) = pTVar10;
  Control::set_v_size_flags(pTVar10,3);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa50),0,0);
  this_03 = (CheckBox *)operator_new(0xc60,"");
  local_60 = 0;
  local_50 = 0;
  local_58 = "";
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Add Built-in Strings to POT";
  local_68 = 0;
  local_50 = 0x1b;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  CheckBox::CheckBox(this_03,(String *)&local_58);
  postinitialize_handler((Object *)this_03);
  *(CheckBox **)(this + 0xa58) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  pSVar5 = *(String **)(this + 0xa58);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Add strings from built-in components such as certain Control nodes.";
  local_68 = 0;
  local_50 = 0x43;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Control::set_tooltip_text(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  plVar3 = *(long **)(this + 0xa58);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void *)"&LocalizationEditor::_pot_add_builtin_toggled");
  (*pcVar1)(plVar3,SceneStringNames::singleton + 0x238,(String *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(pBVar6,*(undefined8 *)(this + 0xa58),0,0);
  pEVar11 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(pEVar11);
  postinitialize_handler((Object *)pEVar11);
  *(EditorFileDialog **)(this + 0xa68) = pEVar11;
  EditorFileDialog::set_file_mode(pEVar11,4);
  plVar3 = *(long **)(this + 0xa68);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,String_const&>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&LocalizationEditor::_pot_generate");
  StringName::StringName((StringName *)&local_60,"file_selected",false);
  (*pcVar1)(plVar3,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xa68),0,0);
  pEVar11 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(pEVar11);
  postinitialize_handler((Object *)pEVar11);
  *(EditorFileDialog **)(this + 0xa60) = pEVar11;
  EditorFileDialog::set_file_mode(pEVar11,1);
  plVar3 = *(long **)(this + 0xa60);
  pcVar1 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,Vector<String>const&>
            ((LocalizationEditor *)&local_58,(char *)this,
             (_func_void_Vector_ptr *)"&LocalizationEditor::_pot_add");
  StringName::StringName((StringName *)&local_60,"files_selected",false);
  (*pcVar1)(plVar3,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xa60),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<String, _DefaultComparator<String>, true>::adjust_heap(long, long, long, String,
   String*) const [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::adjust_heap
               (long param_1,long param_2,long param_3,CowData *param_4,long param_5)

{
  String *pSVar1;
  char cVar2;
  CowData<char32_t> *this;
  CowData<char32_t> *pCVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_48;
  long local_40;
  
  lVar6 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  if (lVar6 < param_3) {
    do {
      this = (CowData<char32_t> *)(param_5 + (lVar6 + -1 + param_1) * 8);
      pSVar1 = (String *)(param_5 + (param_1 + lVar6) * 8);
      cVar2 = String::operator<(pSVar1,(String *)this);
      lVar4 = lVar6 + -1;
      lVar5 = lVar6;
      if (cVar2 == '\0') {
        lVar5 = lVar6 + 1;
        this = (CowData<char32_t> *)pSVar1;
        lVar4 = lVar6;
      }
      pCVar3 = (CowData<char32_t> *)(param_5 + (local_68 + param_1) * 8);
      if (*(long *)pCVar3 != *(long *)this) {
        CowData<char32_t>::_ref(pCVar3,(CowData *)this);
      }
      lVar6 = lVar5 * 2;
      local_68 = lVar4;
    } while (lVar6 < param_3);
  }
  else {
    this = (CowData<char32_t> *)(param_5 + (param_2 + param_1) * 8);
    lVar4 = param_2;
  }
  pCVar3 = this;
  if (param_3 == lVar6) {
    lVar4 = param_3 + -1;
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (*(long *)this != *(long *)pCVar3) {
      CowData<char32_t>::_ref(this,(CowData *)pCVar3);
    }
  }
  local_48 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,param_4);
  }
  lVar6 = (lVar4 + -1) - (lVar4 + -1 >> 0x3f);
  while (param_2 < lVar4) {
    lVar5 = lVar6 >> 1;
    pSVar1 = (String *)(param_5 + (param_1 + lVar5) * 8);
    cVar2 = String::operator<(pSVar1,(String *)&local_48);
    pCVar3 = (CowData<char32_t> *)(param_5 + (param_1 + lVar4) * 8);
    if (cVar2 == '\0') break;
    if (*(long *)pCVar3 != *(long *)pSVar1) {
      CowData<char32_t>::_ref(pCVar3,(CowData *)pSVar1);
    }
    lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
    pCVar3 = (CowData<char32_t> *)pSVar1;
    lVar4 = lVar5;
  }
  if (*(long *)pCVar3 != local_48) {
    CowData<char32_t>::_ref(pCVar3,(CowData *)&local_48);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Removing unreachable block (ram,0x00102ce4) */
/* SortArray<String, _DefaultComparator<String>, true>::introsort(long, long, String*, long) const
   [clone .isra.0] */

void SortArray<String,_DefaultComparator<String>,true>::introsort
               (long param_1,long param_2,String *param_3,long param_4)

{
  long *plVar1;
  long *plVar2;
  char cVar3;
  String *pSVar4;
  String *pSVar5;
  long lVar6;
  long lVar7;
  String *pSVar8;
  CowData *pCVar9;
  String *pSVar10;
  long lVar11;
  long lVar12;
  long in_FS_OFFSET;
  bool bVar13;
  long local_80;
  long local_68;
  long local_60;
  long local_48;
  long local_40;
  
  lVar12 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar12) {
    local_80 = param_2;
    if (param_4 != 0) {
      pSVar4 = param_3 + param_1 * 8;
      local_68 = param_2;
      local_60 = param_4;
LAB_0010287e:
      local_60 = local_60 + -1;
      pSVar8 = param_3 + ((lVar12 >> 1) + param_1) * 8;
      pSVar5 = param_3 + local_68 * 8 + -8;
      cVar3 = String::operator<(pSVar4,pSVar8);
      if (cVar3 == '\0') {
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar10 = pSVar4;
        if (cVar3 != '\0') goto LAB_001028dc;
        cVar3 = String::operator<(pSVar8,pSVar5);
      }
      else {
        cVar3 = String::operator<(pSVar8,pSVar5);
        pSVar10 = pSVar8;
        if (cVar3 != '\0') goto LAB_001028dc;
        cVar3 = String::operator<(pSVar4,pSVar5);
        pSVar8 = pSVar4;
      }
      pSVar10 = pSVar8;
      if (cVar3 != '\0') {
        pSVar10 = pSVar5;
      }
LAB_001028dc:
      local_48 = 0;
      plVar1 = (long *)(*(long *)pSVar10 + -0x10);
      if (*(long *)pSVar10 != 0) {
        do {
          lVar12 = *plVar1;
          if (lVar12 == 0) goto LAB_00102914;
          LOCK();
          lVar11 = *plVar1;
          bVar13 = lVar12 == lVar11;
          if (bVar13) {
            *plVar1 = lVar12 + 1;
            lVar11 = lVar12;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar11 != -1) {
          local_48 = *(long *)pSVar10;
        }
      }
LAB_00102914:
      pSVar8 = pSVar4;
      local_80 = param_1;
      lVar12 = local_68;
      do {
        cVar3 = String::operator<(pSVar8,(String *)&local_48);
        if (cVar3 == '\0') {
LAB_00102957:
          lVar12 = lVar12 + -1;
          pSVar5 = param_3 + lVar12 * 8;
          while (cVar3 = String::operator<((String *)&local_48,pSVar5), cVar3 != '\0') {
            if (param_1 == lVar12) {
              _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            lVar12 = lVar12 + -1;
            pSVar5 = pSVar5 + -8;
          }
          if (lVar12 <= local_80) goto LAB_001029f0;
          lVar11 = *(long *)pSVar8;
          *(undefined8 *)pSVar8 = 0;
          if (*(long *)pSVar5 != 0) {
            *(long *)pSVar8 = *(long *)pSVar5;
            *(undefined8 *)pSVar5 = 0;
          }
          if (lVar11 != 0) {
            *(long *)pSVar5 = lVar11;
          }
        }
        else if (local_68 + -1 == local_80) {
          _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                           "bad comparison function; sorting will be broken",0,0);
          goto LAB_00102957;
        }
        pSVar8 = pSVar8 + 8;
        local_80 = local_80 + 1;
      } while( true );
    }
LAB_00102aba:
    lVar11 = lVar12 + -2 >> 1;
    pCVar9 = (CowData *)(param_3 + param_1 * 8);
    do {
      local_48 = 0;
      plVar1 = (long *)(*(long *)(pCVar9 + lVar11 * 8) + -0x10);
      if (*(long *)(pCVar9 + lVar11 * 8) == 0) {
        adjust_heap(param_1,lVar11,lVar12,&local_48,param_3);
      }
      else {
        do {
          lVar6 = *plVar1;
          if (lVar6 == 0) goto LAB_00102afe;
          LOCK();
          lVar7 = *plVar1;
          bVar13 = lVar6 == lVar7;
          if (bVar13) {
            *plVar1 = lVar6 + 1;
            lVar7 = lVar6;
          }
          UNLOCK();
        } while (!bVar13);
        if (lVar7 != -1) {
          local_48 = *(long *)(pCVar9 + lVar11 * 8);
        }
LAB_00102afe:
        lVar6 = local_48;
        adjust_heap(param_1,lVar11,lVar12,&local_48,param_3);
        if (lVar6 != 0) {
          LOCK();
          plVar1 = (long *)(lVar6 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_48 + -0x10),false);
          }
        }
      }
      if (lVar11 == 0) goto LAB_00102b6b;
      lVar11 = lVar11 + -1;
    } while( true );
  }
  goto LAB_00102a8f;
LAB_001029f0:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  introsort(local_80,local_68,param_3,local_60);
  lVar12 = local_80 - param_1;
  if (lVar12 < 0x11) goto LAB_00102a8f;
  local_68 = local_80;
  if (local_60 == 0) goto LAB_00102aba;
  goto LAB_0010287e;
LAB_00102b6b:
  pSVar4 = param_3 + local_80 * 8 + -8;
  lVar12 = (local_80 + -1) - param_1;
  do {
    plVar1 = (long *)(*(long *)pSVar4 + -0x10);
    if (*(long *)pSVar4 == 0) {
LAB_00102c78:
      if (*(long *)pCVar9 != *(long *)pSVar4) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar9);
      }
LAB_00102c98:
      local_48 = 0;
      adjust_heap(param_1,0,lVar12,&local_48,param_3);
    }
    else {
      do {
        lVar11 = *plVar1;
        if (lVar11 == 0) goto LAB_00102c78;
        LOCK();
        lVar6 = *plVar1;
        bVar13 = lVar11 == lVar6;
        if (bVar13) {
          *plVar1 = lVar11 + 1;
          lVar6 = lVar11;
        }
        UNLOCK();
      } while (!bVar13);
      if (lVar6 == -1) goto LAB_00102c78;
      lVar11 = *(long *)pSVar4;
      if (lVar11 != *(long *)pCVar9) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pSVar4,pCVar9);
      }
      local_48 = 0;
      if (lVar11 == 0) goto LAB_00102c98;
      plVar1 = (long *)(lVar11 + -0x10);
      do {
        lVar6 = *plVar1;
        if (lVar6 == 0) goto LAB_00102cbd;
        LOCK();
        lVar7 = *plVar1;
        bVar13 = lVar6 == lVar7;
        if (bVar13) {
          *plVar1 = lVar6 + 1;
          lVar7 = lVar6;
        }
        UNLOCK();
      } while (!bVar13);
      if (lVar7 == -1) {
LAB_00102cbd:
        adjust_heap(param_1,0,lVar12,&local_48,param_3);
      }
      else {
        local_48 = lVar11;
        adjust_heap(param_1,0,lVar12,&local_48,param_3);
        LOCK();
        plVar2 = (long *)(lVar11 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          Memory::free_static((void *)(local_48 + -0x10),false);
        }
      }
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static(plVar1,false);
      }
    }
    pSVar4 = (String *)((CowData<char32_t> *)pSVar4 + -8);
    bVar13 = 1 < lVar12;
    lVar12 = lVar12 + -1;
  } while (bVar13);
LAB_00102a8f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* LocalizationEditor::_update_pot_file_extensions() */

void __thiscall LocalizationEditor::_update_pot_file_extensions(LocalizationEditor *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  undefined *puVar4;
  List *pLVar5;
  long lVar6;
  long in_FS_OFFSET;
  long *local_68;
  long local_60;
  undefined *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorFileDialog::clear_filters();
  local_68 = (long *)0x0;
  pLVar5 = (List *)EditorTranslationParser::get_singleton();
  EditorTranslationParser::get_recognized_extensions(pLVar5);
  if ((local_68 != (long *)0x0) && (lVar6 = *local_68, lVar6 != 0)) {
    do {
      pSVar2 = *(String **)(this + 0xa60);
      local_60 = 0;
      local_58 = &_LC10;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_60);
      operator+((char *)&local_58,(String *)&_LC87);
      EditorFileDialog::add_filter(pSVar2,(String *)&local_58);
      puVar4 = local_58;
      if (local_58 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = (undefined *)0x0;
          Memory::free_static(puVar4 + -0x10,false);
        }
      }
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
      lVar6 = *(long *)(lVar6 + 8);
    } while (lVar6 != 0);
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_notification(int) [clone .part.0] */

void LocalizationEditor::_notification(int param_1)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  String *pSVar4;
  long lVar5;
  char *pcVar6;
  char cVar7;
  long lVar8;
  undefined4 in_register_0000003c;
  LocalizationEditor *this;
  long in_FS_OFFSET;
  long *local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  this = (LocalizationEditor *)CONCAT44(in_register_0000003c,param_1);
  plVar1 = *(long **)(this + 0xa10);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,Object*,int,int,MouseButton>
            ((LocalizationEditor *)&local_68,(char *)this,
             (_func_void_Object_ptr_int_int_MouseButton *)"&LocalizationEditor::_translation_delete"
            );
  StringName::StringName((StringName *)&local_70,"button_clicked",false);
  (*pcVar2)(plVar1,(StringName *)&local_70,(LocalizationEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  plVar1 = *(long **)(this + 0xa50);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<LocalizationEditor,Object*,int,int,MouseButton>
            ((LocalizationEditor *)&local_68,(char *)this,
             (_func_void_Object_ptr_int_int_MouseButton *)"&LocalizationEditor::_pot_delete");
  StringName::StringName((StringName *)&local_70,"button_clicked",false);
  (*pcVar2)(plVar1,(StringName *)&local_70,(LocalizationEditor *)&local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_68);
  uVar3 = *(undefined8 *)(this + 0xa58);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,
             "internationalization/locale/translation_add_builtin_strings_to_pot",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_bool((Variant *)local_58);
  BaseButton::set_pressed(SUB81(uVar3,0));
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_88 = (long *)0x0;
  local_68 = "Translation";
  local_70 = 0;
  local_60 = 0xb;
  String::parse_latin1((StrRange *)&local_70);
  ResourceLoader::get_recognized_extensions_for_type((String *)&local_70,(List *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "csv";
  local_70 = 0;
  local_60 = 3;
  String::parse_latin1((StrRange *)&local_70);
  if (local_88 != (long *)0x0) {
    for (pSVar4 = (String *)*local_88; pSVar4 != (String *)0x0; pSVar4 = *(String **)(pSVar4 + 8)) {
      cVar7 = String::operator==(pSVar4,(String *)&local_70);
      plVar1 = local_88;
      if (cVar7 != '\0') {
        if (local_88 != (long *)0x0) {
          if (local_88 == *(long **)(pSVar4 + 0x18)) {
            lVar8 = *(long *)(pSVar4 + 8);
            if (pSVar4 == (String *)*local_88) {
              *local_88 = lVar8;
            }
            lVar5 = *(long *)(pSVar4 + 0x10);
            if (pSVar4 == (String *)local_88[1]) {
              local_88[1] = lVar5;
            }
            if (lVar5 != 0) {
              *(long *)(lVar5 + 8) = lVar8;
              lVar8 = *(long *)(pSVar4 + 8);
            }
            if (lVar8 != 0) {
              *(long *)(lVar8 + 0x10) = lVar5;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)pSVar4);
            Memory::free_static(pSVar4,false);
            *(int *)(plVar1 + 2) = (int)plVar1[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          if ((int)local_88[2] == 0) {
            Memory::free_static(local_88,false);
            local_88 = (long *)0x0;
          }
        }
        break;
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_88 != (long *)0x0) {
    for (lVar8 = *local_88; lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
      pSVar4 = *(String **)(this + 0xa20);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      operator+((char *)&local_68,(String *)&_LC87);
      EditorFileDialog::add_filter(pSVar4,(String *)&local_68);
      pcVar6 = local_68;
      if (local_68 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (undefined *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar5 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
  }
  local_80 = (long *)0x0;
  local_68 = "Resource";
  local_70 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_70);
  ResourceLoader::get_recognized_extensions_for_type((String *)&local_70,(List *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_80 != (long *)0x0) {
    for (lVar8 = *local_80; lVar8 != 0; lVar8 = *(long *)(lVar8 + 8)) {
      pSVar4 = *(String **)(this + 0xa30);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      operator+((char *)&local_68,(String *)&_LC87);
      EditorFileDialog::add_filter(pSVar4,(String *)&local_68);
      pcVar6 = local_68;
      if (local_68 != (undefined *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (undefined *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar5 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      pSVar4 = *(String **)(this + 0xa38);
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      operator+((char *)&local_68,(String *)&_LC87);
      EditorFileDialog::add_filter(pSVar4,(String *)&local_68);
      pcVar6 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar6 + -0x10,false);
        }
      }
      lVar5 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
    }
  }
  _update_pot_file_extensions(this);
  local_68 = "";
  pSVar4 = *(String **)(this + 0xa68);
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "*.pot";
  local_78 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_78);
  EditorFileDialog::add_filter(pSVar4,(String *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_80);
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_notification(int) */

void __thiscall LocalizationEditor::_notification(LocalizationEditor *this,int param_1)

{
  if (param_1 != 10) {
    return;
  }
  _notification((int)this);
  return;
}



/* LocalizationEditor::_bind_methods() */

void LocalizationEditor::_bind_methods(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  undefined8 uVar4;
  int *piVar5;
  MethodBind *pMVar6;
  long *plVar7;
  int *piVar8;
  long lVar9;
  long in_FS_OFFSET;
  undefined8 local_e8;
  long local_e0;
  char *local_d8;
  undefined8 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  int *local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_c8,(char ***)"update_translations",0);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar6 = create_method_bind<LocalizationEditor>(update_translations);
  ClassDB::bind_methodfi(1,pMVar6,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  uVar4 = local_b8._0_8_;
  if ((long *)local_b8._0_8_ != (long *)0x0) {
    LOCK();
    plVar7 = (long *)(local_b8._0_8_ + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if ((long *)local_b8._0_8_ == (long *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_b8._0_8_ + -8);
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_b8._8_8_;
      local_b8 = auVar3 << 0x40;
      if (lVar1 != 0) {
        lVar9 = 0;
        plVar7 = (long *)uVar4;
        do {
          if ((StringName::configured != '\0') && (*plVar7 != 0)) {
            StringName::unref();
          }
          lVar9 = lVar9 + 1;
          plVar7 = plVar7 + 1;
        } while (lVar1 != lVar9);
      }
      Memory::free_static((long *)(uVar4 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  local_e0 = 0;
  local_c8 = "localization_changed";
  local_c0 = 0x14;
  String::parse_latin1((StrRange *)&local_e0);
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = (int *)0x0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  if (local_e0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_e0);
  }
  local_e8 = 0;
  local_d0 = 0x12;
  local_d8 = "LocalizationEditor";
  String::parse_latin1((StrRange *)&local_e8);
  StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
  ClassDB::add_signal((StringName *)&local_d8,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_d8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  lVar1 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar7 = (long *)(local_60 + -0x10);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
  piVar5 = local_78;
  if (local_78 != (int *)0x0) {
    LOCK();
    plVar7 = (long *)(local_78 + -4);
    *plVar7 = *plVar7 + -1;
    UNLOCK();
    if (*plVar7 == 0) {
      if (local_78 == (int *)0x0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar1 = *(long *)(local_78 + -2);
      local_78 = (int *)0x0;
      if (lVar1 != 0) {
        lVar9 = 0;
        piVar8 = piVar5;
        do {
          if (Variant::needs_deinit[*piVar8] != '\0') {
            Variant::_clear_internal();
          }
          lVar9 = lVar9 + 1;
          piVar8 = piVar8 + 6;
        } while (lVar1 != lVar9);
      }
      Memory::free_static(piVar5 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_translation_res_add(Vector<String> const&) */

void __thiscall LocalizationEditor::_translation_res_add(LocalizationEditor *this,Vector *param_1)

{
  String *pSVar1;
  uint uVar2;
  char cVar3;
  String *pSVar4;
  Variant *pVVar5;
  Object *pOVar6;
  StringName *pSVar7;
  long in_FS_OFFSET;
  Dictionary local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 local_b0 [16];
  Variant *local_98 [4];
  ulong local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b0 = (undefined1  [16])0x0;
  local_b8 = 0;
  Dictionary::Dictionary(local_f0);
  pSVar4 = (String *)ProjectSettings::get_singleton();
  local_d0 = 0;
  local_c8 = "internationalization/locale/translation_remaps";
  local_c0 = 0x2e;
  String::parse_latin1((StrRange *)&local_d0);
  cVar3 = ProjectSettings::has_setting(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (cVar3 != '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_d0,"internationalization/locale/translation_remaps",false);
    ProjectSettings::get_setting_with_override((StringName *)&local_78);
    Variant::operator_cast_to_Dictionary((Variant *)&local_c8);
    Dictionary::operator=(local_f0,(Dictionary *)&local_c8);
    Dictionary::~Dictionary((Dictionary *)&local_c8);
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    Variant::Variant((Variant *)&local_78,local_f0);
    if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
    }
    local_b0 = local_70;
    local_b8 = CONCAT44(local_b8._4_4_,(int)local_78);
  }
  pSVar4 = *(String **)(param_1 + 8);
  if ((pSVar4 != (String *)0x0) && (pSVar1 = pSVar4 + *(long *)(pSVar4 + -8) * 8, pSVar1 != pSVar4))
  {
    uVar2 = 0;
    do {
      while( true ) {
        Variant::Variant((Variant *)&local_78,pSVar4);
        cVar3 = Dictionary::has((Variant *)local_f0);
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar3 != '\0') break;
        local_c0 = 0;
        Variant::Variant((Variant *)&local_78,(Vector *)&local_c8);
        Variant::Variant((Variant *)local_98,pSVar4);
        pVVar5 = (Variant *)Dictionary::operator[]((Variant *)local_f0);
        if (pVVar5 != (Variant *)&local_78) {
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar5 = 0;
          *(int *)pVVar5 = (int)local_78;
          *(undefined8 *)(pVVar5 + 8) = local_70._0_8_;
          *(undefined8 *)(pVVar5 + 0x10) = local_70._8_8_;
          local_78 = local_78 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_78] != '\0') {
          Variant::_clear_internal();
        }
        pSVar4 = pSVar4 + 8;
        CowData<String>::_unref((CowData<String> *)&local_c0);
        uVar2 = uVar2 + 1;
        if (pSVar1 == pSVar4) goto LAB_00103a7c;
      }
      pSVar4 = pSVar4 + 8;
    } while (pSVar1 != pSVar4);
LAB_00103a7c:
    if (uVar2 != 0) {
      pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
      local_d8 = 0;
      local_c0 = 0;
      local_c8 = "";
      String::parse_latin1((StrRange *)&local_d8);
      local_e0 = 0;
      local_c8 = "Translation Resource Remap: Add %d Paths";
      local_c0 = 0x28;
      String::parse_latin1((StrRange *)&local_e0);
      local_c8 = "Translation Resource Remap: Add %d Path";
      local_e8 = 0;
      local_c0 = 0x27;
      String::parse_latin1((StrRange *)&local_e8);
      TTRN((String *)&local_d0,(String *)&local_e8,(int)(StrRange *)&local_e0,(String *)(ulong)uVar2
          );
      vformat<int>((String *)&local_c8,(int)(StrRange *)&local_d0);
      EditorUndoRedoManager::create_action(pOVar6,(String *)&local_c8,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      Variant::Variant((Variant *)&local_78,local_f0);
      StringName::StringName
                ((StringName *)&local_c8,"internationalization/locale/translation_remaps",false);
      pSVar7 = (StringName *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_do_property(pOVar6,pSVar7,(Variant *)&local_c8);
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      StringName::StringName
                ((StringName *)&local_c8,"internationalization/locale/translation_remaps",false);
      pSVar7 = (StringName *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_undo_property(pOVar6,pSVar7,(Variant *)&local_c8);
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_c8,"update_translations",false);
      local_78 = 0;
      local_70 = (undefined1  [16])0x0;
      EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)this,(Variant **)&local_c8,0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_c8,"update_translations",false);
      local_78 = 0;
      local_70 = (undefined1  [16])0x0;
      EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)this,(Variant **)&local_c8,0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
        StringName::unref();
      }
      local_c8 = (char *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(this + 0xa80));
      StringName::StringName((StringName *)&local_d0,"emit_signal",false);
      Variant::Variant((Variant *)&local_78,(String *)&local_c8);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_98[0] = (Variant *)&local_78;
      EditorUndoRedoManager::add_do_methodp
                (pOVar6,(StringName *)this,(Variant **)&local_d0,(int)local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      local_c8 = (char *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)(this + 0xa80));
      StringName::StringName((StringName *)&local_d0,"emit_signal",false);
      Variant::Variant((Variant *)&local_78,(String *)&local_c8);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_98[0] = (Variant *)&local_78;
      EditorUndoRedoManager::add_undo_methodp
                (pOVar6,(StringName *)this,(Variant **)&local_d0,(int)local_98);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_d0 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
      Dictionary::~Dictionary(local_f0);
      cVar3 = Variant::needs_deinit[(int)local_b8];
      goto joined_r0x00103f12;
    }
  }
  Dictionary::~Dictionary(local_f0);
  cVar3 = Variant::needs_deinit[(int)local_b8];
joined_r0x00103f12:
  if (cVar3 != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<String>::_copy_on_write(CowData<String> *this)

{
  CowData *pCVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  CowData<char32_t> *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar7 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar7 = lVar2 * 8 - 1;
    uVar7 = uVar7 | uVar7 >> 1;
    uVar7 = uVar7 | uVar7 >> 2;
    uVar7 = uVar7 | uVar7 >> 4;
    uVar7 = uVar7 | uVar7 >> 8;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar7 = (uVar7 | uVar7 >> 0x20) + 0x11;
  }
  puVar5 = (undefined8 *)Memory::alloc_static(uVar7,false);
  if (puVar5 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar5 = 1;
    puVar5[1] = lVar2;
    this_00 = (CowData<char32_t> *)(puVar5 + 2);
    if (lVar2 != 0) {
      do {
        lVar3 = *(long *)this;
        *(undefined8 *)this_00 = 0;
        pCVar1 = (CowData *)(lVar3 + lVar6 * 8);
        if (*(long *)pCVar1 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar1);
        }
        lVar6 = lVar6 + 1;
        this_00 = this_00 + 8;
      } while (lVar2 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar5 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* LocalizationEditor::_translation_res_option_changed() */

void __thiscall LocalizationEditor::_translation_res_option_changed(LocalizationEditor *this)

{
  char cVar1;
  int iVar2;
  String *pSVar3;
  long lVar4;
  long lVar5;
  StringName *pSVar6;
  Object *pOVar7;
  int iVar8;
  long in_FS_OFFSET;
  CowData<String> *local_e0;
  Variant local_c0 [8];
  Variant local_b8 [8];
  Variant local_b0 [8];
  CowData<char32_t> local_a8 [8];
  undefined8 local_a0;
  long local_98;
  long local_90;
  char *local_88;
  long local_80;
  int local_78 [8];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa78] != (LocalizationEditor)0x0) goto LAB_00104201;
  pSVar3 = (String *)ProjectSettings::get_singleton();
  local_90 = 0;
  local_80 = 0x2e;
  local_88 = "internationalization/locale/translation_remaps";
  String::parse_latin1((StrRange *)&local_90);
  cVar1 = ProjectSettings::has_setting(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (cVar1 == '\0') goto LAB_00104201;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"internationalization/locale/translation_remaps",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_58);
  Variant::operator_cast_to_Dictionary(local_c0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  lVar4 = Tree::get_selected();
  if (lVar4 == 0) {
    _err_print_error("_translation_res_option_changed","editor/localization_editor.cpp",0xed,
                     "Parameter \"k\" is null.",0,0);
  }
  else {
    lVar5 = Tree::get_edited();
    if (lVar5 == 0) {
      _err_print_error("_translation_res_option_changed","editor/localization_editor.cpp",0xef,
                       "Parameter \"ed\" is null.",0,0,lVar4);
    }
    else {
      iVar8 = (int)(StringName *)&local_58;
      TreeItem::get_metadata(iVar8);
      Variant::operator_cast_to_String(local_b8);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      TreeItem::get_metadata(iVar8);
      iVar2 = Variant::operator_cast_to_int((Variant *)&local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      TreeItem::get_metadata(iVar8);
      Variant::operator_cast_to_String(local_b0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      TreeItem::get_tooltip_text((int)local_a8);
      Variant::Variant((Variant *)&local_58,(String *)local_b8);
      cVar1 = Dictionary::has(local_c0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar1 != '\0') {
        Variant::Variant((Variant *)&local_58,(String *)local_b8);
        Dictionary::operator[](local_c0);
        Variant::operator_cast_to_Vector((Variant *)&local_88);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        local_a0 = 0;
        String::parse_latin1((String *)&local_a0,":");
        pSVar3 = (String *)&local_98;
        String::operator+(pSVar3,(String *)local_b0);
        String::operator+((String *)&local_90,pSVar3);
        lVar4 = (long)iVar2;
        if (lVar4 < 0) {
          if (local_80 == 0) goto LAB_00104b00;
          lVar5 = *(long *)(local_80 + -8);
LAB_0010494d:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar4,lVar5,"p_index","size()","",false
                     ,false);
        }
        else {
          if (local_80 == 0) {
LAB_00104b00:
            lVar5 = 0;
            goto LAB_0010494d;
          }
          lVar5 = *(long *)(local_80 + -8);
          if (lVar5 <= lVar4) goto LAB_0010494d;
          CowData<String>::_copy_on_write((CowData<String> *)&local_80);
          CowData<char32_t>::_ref((CowData<char32_t> *)(local_80 + lVar4 * 8),(CowData *)&local_90);
        }
        local_e0 = (CowData<String> *)&local_80;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        Variant::Variant((Variant *)&local_58,(Vector *)&local_88);
        Variant::Variant((Variant *)local_78,(String *)local_b8);
        pSVar6 = (StringName *)Dictionary::operator[](local_c0);
        if (pSVar6 != (StringName *)&local_58) {
          if (Variant::needs_deinit[*(int *)pSVar6] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pSVar6 = 0;
          *(int *)pSVar6 = (int)local_58;
          *(undefined8 *)(pSVar6 + 8) = local_50._0_8_;
          *(undefined8 *)(pSVar6 + 0x10) = local_50._8_8_;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        this[0xa78] = (LocalizationEditor)0x1;
        pOVar7 = (Object *)EditorUndoRedoManager::get_singleton();
        local_98 = 0;
        String::parse_latin1(pSVar3,"");
        local_a0 = 0;
        String::parse_latin1((String *)&local_a0,"Change Resource Remap Language");
        TTR((String *)&local_90,(String *)&local_a0);
        EditorUndoRedoManager::create_action(pOVar7,(StrRange *)&local_90,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)pSVar3);
        Variant::Variant((Variant *)&local_58,local_c0);
        StringName::StringName
                  ((StringName *)&local_90,"internationalization/locale/translation_remaps",false);
        pSVar6 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(pOVar7,pSVar6,(Variant *)&local_90);
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)pSVar3,"internationalization/locale/translation_remaps",false);
        ProjectSettings::get_setting_with_override((StringName *)&local_58);
        StringName::StringName
                  ((StringName *)&local_90,"internationalization/locale/translation_remaps",false);
        pSVar6 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_property(pOVar7,pSVar6,(Variant *)&local_90);
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_90,"update_translations",false);
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        EditorUndoRedoManager::add_do_methodp(pOVar7,(StringName *)this,(Variant **)&local_90,0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_90,"update_translations",false);
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        EditorUndoRedoManager::add_undo_methodp(pOVar7,(StringName *)this,(Variant **)&local_90,0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_90 != 0)) {
          StringName::unref();
        }
        local_90 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(this + 0xa80));
        pSVar6 = (StringName *)pSVar3;
        StringName::StringName((StringName *)pSVar3,"emit_signal",false);
        EditorUndoRedoManager::add_do_method<String>
                  ((EditorUndoRedoManager *)pOVar7,this,pSVar3,(StrRange *)&local_90);
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        local_90 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(this + 0xa80));
        StringName::StringName(pSVar6,"emit_signal",false);
        EditorUndoRedoManager::add_undo_method<String>
                  ((EditorUndoRedoManager *)pOVar7,this,pSVar6,(StrRange *)&local_90);
        if ((StringName::configured != '\0') && (local_98 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        EditorUndoRedoManager::commit_action(SUB81(pOVar7,0));
        this[0xa78] = (LocalizationEditor)0x0;
        CowData<String>::_unref(local_e0);
        CowData<char32_t>::_unref(local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
        Dictionary::~Dictionary((Dictionary *)local_c0);
        goto LAB_00104201;
      }
      _err_print_error("_translation_res_option_changed","editor/localization_editor.cpp",0xf6,
                       "Condition \"!remaps.has(key)\" is true.",0,0);
      CowData<char32_t>::_unref(local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    }
  }
  Dictionary::~Dictionary((Dictionary *)local_c0);
LAB_00104201:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_translation_res_option_selected(String const&) */

void LocalizationEditor::_translation_res_option_selected(String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = Tree::get_edited();
  if (lVar3 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_translation_res_option_selected","editor/localization_editor.cpp",0xd9,
                       "Parameter \"ed\" is null.",0,0);
      return;
    }
  }
  else {
    TranslationServer::get_locale_name((String *)&local_38);
    TreeItem::set_text(lVar3,1,&local_38);
    lVar2 = local_38;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    TreeItem::set_tooltip_text((int)lVar3,(String *)0x1);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _translation_res_option_changed((LocalizationEditor *)param_1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_translation_res_option_delete(Object*, int, int, MouseButton) */

void __thiscall
LocalizationEditor::_translation_res_option_delete
          (LocalizationEditor *this,long param_1,undefined8 param_3,undefined8 param_4,int param_5)

{
  char cVar1;
  int iVar2;
  String *pSVar3;
  long lVar4;
  StringName *pSVar5;
  Object *pOVar6;
  long lVar7;
  long in_FS_OFFSET;
  Variant local_b0 [8];
  Variant local_a8 [8];
  undefined8 local_a0;
  long local_98;
  long local_90;
  char *local_88;
  long local_80;
  int local_78 [8];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xa78] != (LocalizationEditor)0x0) || (param_5 != 1)) goto LAB_00104c57;
  pSVar3 = (String *)ProjectSettings::get_singleton();
  local_90 = 0;
  local_80 = 0x2e;
  local_88 = "internationalization/locale/translation_remaps";
  String::parse_latin1((StrRange *)&local_90);
  cVar1 = ProjectSettings::has_setting(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (cVar1 == '\0') goto LAB_00104c57;
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"internationalization/locale/translation_remaps",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_58);
  Variant::operator_cast_to_Dictionary(local_b0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  lVar4 = Tree::get_selected();
  if (lVar4 == 0) {
    _err_print_error("_translation_res_option_delete","editor/localization_editor.cpp",0x13a,
                     "Parameter \"k\" is null.",0,0);
  }
  else {
    if (param_1 != 0) {
      lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
      if (lVar4 != 0) {
        iVar2 = (int)(StringName *)&local_58;
        TreeItem::get_metadata(iVar2);
        Variant::operator_cast_to_String(local_a8);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        TreeItem::get_metadata(iVar2);
        iVar2 = Variant::operator_cast_to_int((Variant *)&local_58);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_58,(String *)local_a8);
        cVar1 = Dictionary::has(local_b0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar1 == '\0') {
          _err_print_error("_translation_res_option_delete","editor/localization_editor.cpp",0x141,
                           "Condition \"!remaps.has(key)\" is true.",0,0);
        }
        else {
          Variant::Variant((Variant *)&local_58,(String *)local_a8);
          Dictionary::operator[](local_b0);
          Variant::operator_cast_to_Vector((Variant *)&local_88);
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
          lVar4 = (long)iVar2;
          if (iVar2 < 0) {
            if (local_80 == 0) goto LAB_001052d6;
LAB_00105270:
            lVar7 = *(long *)(local_80 + -8);
          }
          else {
            if (local_80 != 0) {
              if (lVar4 < *(long *)(local_80 + -8)) {
                Vector<String>::remove_at((Vector<String> *)&local_88,lVar4);
                Variant::Variant((Variant *)&local_58,(Vector *)&local_88);
                Variant::Variant((Variant *)local_78,(String *)local_a8);
                pSVar5 = (StringName *)Dictionary::operator[](local_b0);
                if (pSVar5 != (StringName *)&local_58) {
                  if (Variant::needs_deinit[*(int *)pSVar5] != '\0') {
                    Variant::_clear_internal();
                  }
                  *(undefined4 *)pSVar5 = 0;
                  *(int *)pSVar5 = (int)local_58;
                  *(undefined8 *)(pSVar5 + 8) = local_50._0_8_;
                  *(undefined8 *)(pSVar5 + 0x10) = local_50._8_8_;
                  local_58 = local_58 & 0xffffffff00000000;
                }
                if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
                local_98 = 0;
                String::parse_latin1((String *)&local_98,"");
                local_a0 = 0;
                String::parse_latin1((String *)&local_a0,"Remove Resource Remap Option");
                TTR((String *)&local_90,(String *)&local_a0);
                EditorUndoRedoManager::create_action(pOVar6,(StrRange *)&local_90,0,0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                Variant::Variant((Variant *)&local_58,local_b0);
                StringName::StringName
                          ((StringName *)&local_90,"internationalization/locale/translation_remaps",
                           false);
                pSVar5 = (StringName *)ProjectSettings::get_singleton();
                EditorUndoRedoManager::add_do_property(pOVar6,pSVar5,(Variant *)&local_90);
                if ((StringName::configured != '\0') && (local_90 != 0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                ProjectSettings::get_singleton();
                StringName::StringName
                          ((StringName *)&local_98,"internationalization/locale/translation_remaps",
                           false);
                ProjectSettings::get_setting_with_override((StringName *)&local_58);
                StringName::StringName
                          ((StringName *)&local_90,"internationalization/locale/translation_remaps",
                           false);
                pSVar5 = (StringName *)ProjectSettings::get_singleton();
                EditorUndoRedoManager::add_undo_property(pOVar6,pSVar5,(Variant *)&local_90);
                if ((StringName::configured != '\0') && (local_90 != 0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_98 != 0)) {
                  StringName::unref();
                }
                StringName::StringName((StringName *)&local_90,"update_translations",false);
                local_58 = 0;
                local_50 = (undefined1  [16])0x0;
                EditorUndoRedoManager::add_do_methodp
                          (pOVar6,(StringName *)this,(Variant **)&local_90,0);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_90 != 0)) {
                  StringName::unref();
                }
                StringName::StringName((StringName *)&local_90,"update_translations",false);
                local_58 = 0;
                local_50 = (undefined1  [16])0x0;
                EditorUndoRedoManager::add_undo_methodp
                          (pOVar6,(StringName *)this,(Variant **)&local_90,0);
                if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_90 != 0)) {
                  StringName::unref();
                }
                local_90 = 0;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(this + 0xa80));
                StringName::StringName((StringName *)&local_98,"emit_signal",false);
                EditorUndoRedoManager::add_do_method<String>
                          ((EditorUndoRedoManager *)pOVar6,this,(String *)&local_98,
                           (StrRange *)&local_90);
                if ((StringName::configured != '\0') && (local_98 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                local_90 = 0;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(this + 0xa80));
                StringName::StringName((StringName *)&local_98,"emit_signal",false);
                EditorUndoRedoManager::add_undo_method<String>
                          ((EditorUndoRedoManager *)pOVar6,this,(String *)&local_98,
                           (StrRange *)&local_90);
                if ((StringName::configured != '\0') && (local_98 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
                CowData<String>::_unref((CowData<String> *)&local_80);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
                Dictionary::~Dictionary((Dictionary *)local_b0);
                goto LAB_00104c57;
              }
              goto LAB_00105270;
            }
LAB_001052d6:
            lVar7 = 0;
          }
          _err_print_index_error
                    ("_translation_res_option_delete","editor/localization_editor.cpp",0x143,lVar4,
                     lVar7,"idx","r.size()","",false,false);
          CowData<String>::_unref((CowData<String> *)&local_80);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
        goto LAB_001052c2;
      }
    }
    _err_print_error("_translation_res_option_delete","editor/localization_editor.cpp",0x13c,
                     "Parameter \"ed\" is null.",0,0);
  }
LAB_001052c2:
  Dictionary::~Dictionary((Dictionary *)local_b0);
LAB_00104c57:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Vector<String>::push_back(String) [clone .isra.0] */

void __thiscall Vector<String>::push_back(Vector<String> *this,CowData *param_2)

{
  CowData<char32_t> *this_00;
  int iVar1;
  long lVar2;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar2);
  if (iVar1 == 0) {
    if (*(long *)(this + 8) == 0) {
      lVar3 = -1;
      lVar2 = 0;
    }
    else {
      lVar2 = *(long *)(*(long *)(this + 8) + -8);
      lVar3 = lVar2 + -1;
      if (-1 < lVar3) {
        CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 8) + lVar3 * 8);
        if (*(long *)this_00 == *(long *)param_2) {
          return;
        }
        CowData<char32_t>::_ref(this_00,param_2);
        return;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar3,lVar2,"p_index","size()","",false,false
              );
    return;
  }
  _err_print_error("push_back","./core/templates/vector.h",0x142,
                   "Condition \"err\" is true. Returning: true",0,0);
  return;
}



/* LocalizationEditor::update_translations() [clone .part.0] */

void __thiscall LocalizationEditor::update_translations(LocalizationEditor *this)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  code *pcVar3;
  Object *pOVar4;
  char *pcVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  String *pSVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  CowData<char32_t> *pCVar17;
  CowData<char32_t> *pCVar18;
  wchar32 wVar19;
  CowData *pCVar20;
  long lVar21;
  CowData<char32_t> *pCVar22;
  long in_FS_OFFSET;
  bool bVar23;
  CowData<char32_t> *local_140;
  Variant *local_130;
  char *local_d8;
  Variant local_d0 [8];
  long *local_c8;
  String local_c0 [8];
  CowData<char32_t> local_b8 [8];
  String local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  Object *local_98;
  Object *local_90;
  undefined8 local_88;
  long local_80;
  undefined8 local_78;
  CowData<char32_t> *local_70;
  char *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa78] = (LocalizationEditor)0x1;
  Tree::clear();
  iVar7 = Tree::create_item(*(TreeItem **)(this + 0xa10),0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa10),0));
  pSVar11 = (String *)ProjectSettings::get_singleton();
  local_68 = "internationalization/locale/translations";
  local_78 = 0;
  local_60 = 0x28;
  String::parse_latin1((StrRange *)&local_78);
  cVar6 = ProjectSettings::has_setting(pSVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (cVar6 != '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_68,"internationalization/locale/translations",false)
    ;
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_Vector((Variant *)&local_78);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    for (local_140 = (CowData<char32_t> *)0x0;
        (local_70 != (CowData<char32_t> *)0x0 &&
        (local_130 = (Variant *)local_58, (long)local_140 < *(long *)(local_70 + -8)));
        local_140 = (CowData<char32_t> *)((long)local_140 + 1)) {
      uVar13 = Tree::create_item(*(TreeItem **)(this + 0xa10),iVar7);
      iVar8 = (int)uVar13;
      TreeItem::set_editable(iVar8,false);
      if (local_70 == (CowData<char32_t> *)0x0) goto LAB_00105ec0;
      lVar12 = *(long *)(local_70 + -8);
      if (lVar12 <= (long)local_140) goto LAB_00105ee1;
      String::replace_first((char *)&local_68,(char *)(local_70 + (long)local_140 * 8));
      TreeItem::set_text(uVar13,0,(StringName *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (local_70 == (CowData<char32_t> *)0x0) goto LAB_00105ec0;
      lVar12 = *(long *)(local_70 + -8);
      if (lVar12 <= (long)local_140) goto LAB_00105ee1;
      TreeItem::set_tooltip_text(iVar8,(String *)0x0);
      Variant::Variant(local_130,(int)local_140);
      TreeItem::set_metadata(iVar8,(Variant *)0x0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_80 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_80);
      local_88 = 0;
      local_68 = "Remove";
      local_60 = 6;
      String::parse_latin1((StrRange *)&local_88);
      TTR((String *)&local_68,(String *)&local_88);
      if ((update_translations()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&update_translations()::{lambda()#1}::operator()()::sname),
         iVar9 != 0)) {
        _scs_create((char *)&update_translations()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &update_translations()::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&update_translations()::{lambda()#1}::operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_90);
      TreeItem::add_button(iVar8,(Ref *)0x0,(int)(StringName *)&local_90,false,(String *)0x0);
      if (((local_90 != (Object *)0x0) &&
          (cVar6 = RefCounted::unreference(), pOVar4 = local_90, cVar6 != '\0')) &&
         (cVar6 = predelete_handler(local_90), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    }
    CowData<String>::_unref((CowData<String> *)&local_70);
  }
  local_d8 = (char *)0x0;
  lVar12 = Tree::get_selected();
  if (lVar12 != 0) {
    Tree::get_selected();
    TreeItem::get_metadata((int)(StringName *)local_58);
    Variant::operator_cast_to_String((Variant *)&local_68);
    if (local_d8 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      local_d8 = local_68;
      local_68 = (char *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  Tree::clear();
  Tree::clear();
  iVar7 = Tree::create_item(*(TreeItem **)(this + 0xa40),0);
  iVar8 = Tree::create_item(*(TreeItem **)(this + 0xa48),0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa40),0));
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa48),0));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa28),0));
  pSVar11 = (String *)ProjectSettings::get_singleton();
  local_78 = 0;
  local_68 = "internationalization/locale/translation_remaps";
  local_60 = 0x2e;
  String::parse_latin1((StrRange *)&local_78);
  cVar6 = ProjectSettings::has_setting(pSVar11);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if (cVar6 != '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_68,"internationalization/locale/translation_remaps",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_Dictionary(local_d0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
      StringName::unref();
    }
    local_c8 = (long *)0x0;
    Dictionary::get_key_list((List *)local_d0);
    local_70 = (CowData<char32_t> *)0x0;
    if ((local_c8 != (long *)0x0) && (lVar12 = *local_c8, lVar12 != 0)) {
      do {
        Variant::operator_cast_to_String((Variant *)&local_68);
        Vector<String>::push_back((Vector<String> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        lVar12 = *(long *)(lVar12 + 0x18);
      } while (lVar12 != 0);
      if (local_70 != (CowData<char32_t> *)0x0) {
        lVar12 = *(long *)(local_70 + -8);
        if (lVar12 != 0) {
          CowData<String>::_copy_on_write((CowData<String> *)&local_70);
          pCVar22 = local_70;
          if (lVar12 == 1) {
            SortArray<String,_DefaultComparator<String>,true>::introsort(0,1,(String *)local_70,0);
            pCVar17 = pCVar22;
          }
          else {
            lVar16 = 0;
            lVar21 = lVar12;
            do {
              lVar21 = lVar21 >> 1;
              lVar16 = lVar16 + 1;
            } while (lVar21 != 1);
            SortArray<String,_DefaultComparator<String>,true>::introsort
                      (0,lVar12,(String *)local_70,lVar16 * 2);
            pCVar2 = pCVar22 + 8;
            if (lVar12 < 0x11) {
              local_140 = (CowData<char32_t> *)0x1;
              pCVar18 = pCVar2;
              do {
                local_68 = (char *)0x0;
                plVar1 = (long *)(*(long *)pCVar18 + -0x10);
                if (*(long *)pCVar18 != 0) {
                  do {
                    lVar21 = *plVar1;
                    if (lVar21 == 0) goto LAB_00106f7e;
                    LOCK();
                    lVar16 = *plVar1;
                    bVar23 = lVar21 == lVar16;
                    if (bVar23) {
                      *plVar1 = lVar21 + 1;
                      lVar16 = lVar21;
                    }
                    UNLOCK();
                  } while (!bVar23);
                  if (lVar16 != -1) {
                    local_68 = *(char **)pCVar18;
                  }
                }
LAB_00106f7e:
                cVar6 = String::operator<((String *)&local_68,(String *)pCVar22);
                pCVar20 = (CowData *)pCVar18;
                pCVar17 = local_140;
                if (cVar6 == '\0') {
                  local_80 = 0;
                  if (local_68 != (char *)0x0) {
                    CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)&local_68);
                  }
                  while( true ) {
                    pCVar17 = (CowData<char32_t> *)pCVar20;
                    pCVar20 = (CowData *)(pCVar17 + -8);
                    cVar6 = String::operator<((String *)&local_80,(String *)pCVar20);
                    if (cVar6 == '\0') break;
                    if (pCVar17 == pCVar2) {
                      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",
                                       0xff,"bad comparison function; sorting will be broken",0,0);
                      break;
                    }
                    if (*(long *)pCVar17 != *(long *)(pCVar17 + -8)) {
                      CowData<char32_t>::_ref(pCVar17,pCVar20);
                    }
                  }
                  if (*(long *)pCVar17 != local_80) {
                    CowData<char32_t>::_ref(pCVar17,(CowData *)&local_80);
                  }
                  lVar21 = local_80;
                  if (local_80 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_80 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_80 = 0;
                      Memory::free_static((void *)(lVar21 + -0x10),false);
                    }
                  }
                }
                else {
                  do {
                    if (*(long *)pCVar20 != *(long *)((CowData<char32_t> *)pCVar20 + -8)) {
                      CowData<char32_t>::_ref
                                ((CowData<char32_t> *)pCVar20,
                                 (CowData *)((CowData<char32_t> *)pCVar20 + -8));
                    }
                    pCVar17 = (CowData<char32_t> *)((long)pCVar17 + -1);
                    pCVar20 = (CowData *)((CowData<char32_t> *)pCVar20 + -8);
                  } while (pCVar17 != (CowData<char32_t> *)0x0);
                  if (*(char **)pCVar22 != local_68) {
                    CowData<char32_t>::_ref(pCVar22,(CowData *)&local_68);
                  }
                }
                pcVar5 = local_68;
                if (local_68 != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_68 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_68 = (char *)0x0;
                    Memory::free_static(pcVar5 + -0x10,false);
                  }
                }
                local_140 = (CowData<char32_t> *)((long)local_140 + 1);
                pCVar18 = pCVar18 + 8;
                pCVar17 = local_70;
              } while ((CowData<char32_t> *)lVar12 != local_140);
            }
            else {
              lVar21 = 1;
              pCVar17 = pCVar2;
              do {
                local_68 = (char *)0x0;
                plVar1 = (long *)(*(long *)pCVar17 + -0x10);
                if (*(long *)pCVar17 != 0) {
                  do {
                    lVar16 = *plVar1;
                    if (lVar16 == 0) goto LAB_001060de;
                    LOCK();
                    lVar14 = *plVar1;
                    bVar23 = lVar16 == lVar14;
                    if (bVar23) {
                      *plVar1 = lVar16 + 1;
                      lVar14 = lVar16;
                    }
                    UNLOCK();
                  } while (!bVar23);
                  if (lVar14 != -1) {
                    local_68 = *(char **)pCVar17;
                  }
                }
LAB_001060de:
                cVar6 = String::operator<((String *)&local_68,(String *)pCVar22);
                pCVar18 = pCVar17;
                if (cVar6 == '\0') {
                  local_80 = 0;
                  plVar1 = (long *)((long)local_68 + -0x10);
                  pCVar20 = (CowData *)pCVar17;
                  if (local_68 != (char *)0x0) {
                    do {
                      lVar16 = *plVar1;
                      if (lVar16 == 0) goto LAB_00106168;
                      LOCK();
                      lVar14 = *plVar1;
                      bVar23 = lVar16 == lVar14;
                      if (bVar23) {
                        *plVar1 = lVar16 + 1;
                        lVar14 = lVar16;
                      }
                      UNLOCK();
                    } while (!bVar23);
                    if (lVar14 != -1) {
                      local_80 = (long)local_68;
                    }
                  }
LAB_00106168:
                  pCVar18 = (CowData<char32_t> *)pCVar20;
                  pCVar20 = (CowData *)(pCVar18 + -8);
                  cVar6 = String::operator<((String *)&local_80,(String *)pCVar20);
                  if (cVar6 != '\0') {
                    if (pCVar2 == pCVar18) {
                      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",
                                       0xff,"bad comparison function; sorting will be broken",0,0);
                      goto LAB_001061b5;
                    }
                    if (*(long *)pCVar18 != *(long *)(pCVar18 + -8)) {
                      CowData<char32_t>::_ref(pCVar18,pCVar20);
                    }
                    goto LAB_00106168;
                  }
LAB_001061b5:
                  if (*(long *)pCVar18 != local_80) {
                    CowData<char32_t>::_ref(pCVar18,(CowData *)&local_80);
                  }
                  lVar16 = local_80;
                  if (local_80 != 0) {
                    LOCK();
                    plVar1 = (long *)(local_80 + -0x10);
                    *plVar1 = *plVar1 + -1;
                    UNLOCK();
                    if (*plVar1 == 0) {
                      local_80 = 0;
                      Memory::free_static((void *)(lVar16 + -0x10),false);
                    }
                  }
                }
                else {
                  do {
                    pCVar20 = (CowData *)(pCVar18 + -8);
                    if (*(long *)pCVar18 != *(long *)(pCVar18 + -8)) {
                      CowData<char32_t>::_ref(pCVar18,pCVar20);
                    }
                    pCVar18 = (CowData<char32_t> *)pCVar20;
                  } while (pCVar22 != (CowData<char32_t> *)pCVar20);
                  if ((char *)*(long *)pCVar22 != local_68) {
                    CowData<char32_t>::_ref(pCVar22,(CowData *)&local_68);
                  }
                }
                pcVar5 = local_68;
                if (local_68 != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)((long)local_68 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_68 = (char *)0x0;
                    Memory::free_static((void *)((long)pcVar5 + -0x10),false);
                  }
                }
                lVar21 = lVar21 + 1;
                pCVar17 = pCVar17 + 8;
              } while (lVar21 != 0x10);
              local_140 = pCVar22 + 0x80;
              lVar21 = 0x10;
              do {
                local_68 = (char *)0x0;
                plVar1 = (long *)(*(long *)local_140 + -0x10);
                pCVar20 = (CowData *)local_140;
                lVar16 = lVar21;
                if (*(long *)local_140 != 0) {
                  do {
                    lVar14 = *plVar1;
                    if (lVar14 == 0) goto LAB_0010634d;
                    LOCK();
                    lVar15 = *plVar1;
                    bVar23 = lVar14 == lVar15;
                    if (bVar23) {
                      *plVar1 = lVar14 + 1;
                      lVar15 = lVar14;
                    }
                    UNLOCK();
                  } while (!bVar23);
                  if (lVar15 != -1) {
                    local_68 = *(char **)local_140;
                  }
                }
LAB_0010634d:
                pCVar22 = (CowData<char32_t> *)pCVar20;
                lVar16 = lVar16 + -1;
                pCVar20 = (CowData *)(pCVar22 + -8);
                cVar6 = String::operator<((String *)&local_68,(String *)pCVar20);
                if (cVar6 != '\0') {
                  if (lVar16 == 0) {
                    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                                     "bad comparison function; sorting will be broken",0,0);
                    goto LAB_00106393;
                  }
                  if (*(long *)pCVar22 != *(long *)(pCVar22 + -8)) {
                    CowData<char32_t>::_ref(pCVar22,pCVar20);
                  }
                  goto LAB_0010634d;
                }
LAB_00106393:
                if (*(char **)pCVar22 != local_68) {
                  CowData<char32_t>::_ref(pCVar22,(CowData *)&local_68);
                }
                pcVar5 = local_68;
                if (local_68 != (char *)0x0) {
                  LOCK();
                  plVar1 = (long *)(local_68 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    local_68 = (char *)0x0;
                    Memory::free_static(pcVar5 + -0x10,false);
                  }
                }
                lVar21 = lVar21 + 1;
                local_140 = local_140 + 8;
                pCVar17 = local_70;
              } while (lVar12 != lVar21);
            }
          }
          if (pCVar17 != (CowData<char32_t> *)0x0) {
            local_140 = (CowData<char32_t> *)0x0;
            do {
              if (*(long *)(pCVar17 + -8) <= (long)local_140) break;
              uVar13 = Tree::create_item(*(TreeItem **)(this + 0xa40),iVar7);
              iVar9 = (int)uVar13;
              TreeItem::set_editable(iVar9,false);
              lVar12 = *(long *)(pCVar17 + -8);
              if (lVar12 <= (long)local_140) goto LAB_00105ee1;
              pSVar11 = (String *)(pCVar17 + (long)local_140 * 8);
              String::replace_first((char *)&local_68,(char *)pSVar11);
              TreeItem::set_text(uVar13,0,(StringName *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              lVar12 = *(long *)(pCVar17 + -8);
              if (lVar12 <= (long)local_140) goto LAB_00105ee1;
              TreeItem::set_tooltip_text(iVar9,(String *)0x0);
              lVar12 = *(long *)(pCVar17 + -8);
              if (lVar12 <= (long)local_140) goto LAB_00105ee1;
              Variant::Variant((Variant *)local_58,pSVar11);
              TreeItem::set_metadata(iVar9,(Variant *)0x0);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              local_80 = 0;
              String::parse_latin1((String *)&local_80,"");
              local_88 = 0;
              String::parse_latin1((String *)&local_88,"Remove");
              TTR((String *)&local_68,(String *)&local_88);
              if ((update_translations()::{lambda()#2}::operator()()::sname == '\0') &&
                 (iVar10 = __cxa_guard_acquire(&update_translations()::{lambda()#2}::operator()()::
                                                sname), iVar10 != 0)) {
                _scs_create((char *)&update_translations()::{lambda()#2}::operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &update_translations()::{lambda()#2}::operator()()::sname,&__dso_handle
                            );
                __cxa_guard_release(&update_translations()::{lambda()#2}::operator()()::sname);
              }
              Control::get_editor_theme_icon((StringName *)&local_90);
              TreeItem::add_button
                        (iVar9,(Ref *)0x0,(int)(StringName *)&local_90,false,(String *)0x0);
              if (((local_90 != (Object *)0x0) &&
                  (cVar6 = RefCounted::unreference(), pOVar4 = local_90, cVar6 != '\0')) &&
                 (cVar6 = predelete_handler(local_90), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
              lVar12 = *(long *)(pCVar17 + -8);
              if (lVar12 <= (long)local_140) goto LAB_00105ee1;
              cVar6 = FileAccess::exists(pSVar11);
              if (cVar6 == '\0') {
                local_90 = (Object *)0x0;
                String::parse_latin1((String *)&local_90,"");
                local_98 = (Object *)0x0;
                String::parse_latin1((String *)&local_98,"Removed");
                TTR((String *)&local_88,(String *)&local_98);
                local_a0 = 0;
                String::parse_latin1((String *)&local_a0," (%s)");
                vformat<String>((String *)&local_80,(String *)&local_a0,(String *)&local_88);
                TreeItem::get_text((int)(CowData<char32_t> *)&local_a8);
                String::operator+((String *)&local_68,(String *)&local_a8);
                TreeItem::set_text(uVar13,0,(StringName *)&local_68);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                TreeItem::get_tooltip_text((int)(String *)&local_80);
                local_90 = (Object *)0x0;
                String::parse_latin1((String *)&local_90,"");
                local_98 = (Object *)0x0;
                String::parse_latin1((String *)&local_98,"%s cannot be found.");
                TTR((String *)&local_88,(String *)&local_98);
                vformat<String>((StringName *)&local_68,(String *)&local_88,(String *)&local_80);
                TreeItem::set_tooltip_text(iVar9,(String *)0x0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
              }
              lVar12 = *(long *)(pCVar17 + -8);
              if (lVar12 <= (long)local_140) goto LAB_00105ee1;
              cVar6 = String::operator==(pSVar11,(String *)&local_d8);
              if (cVar6 != '\0') {
                TreeItem::select(iVar9);
                BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa28),0));
                lVar12 = *(long *)(pCVar17 + -8);
                if (lVar12 <= (long)local_140) goto LAB_00105ee1;
                Variant::Variant((Variant *)local_58,pSVar11);
                Dictionary::operator[](local_d0);
                Variant::operator_cast_to_Vector((Variant *)&local_68);
                if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
                }
                for (lVar12 = 0; (local_60 != 0 && (lVar12 < *(long *)(local_60 + -8)));
                    lVar12 = lVar12 + 1) {
                  wVar19 = (int)local_60 + (int)lVar12 * 8;
                  String::rfind_char(wVar19,0x3a);
                  String::substr((int)local_c0,wVar19);
                  String::substr((int)local_b8,wVar19);
                  uVar13 = Tree::create_item(*(TreeItem **)(this + 0xa48),iVar8);
                  iVar9 = (int)uVar13;
                  TreeItem::set_editable(iVar9,false);
                  String::replace_first((char *)&local_80,(char *)local_c0);
                  TreeItem::set_text(uVar13,0,(String *)&local_80);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                  TreeItem::set_tooltip_text(iVar9,(String *)0x0);
                  Variant::Variant((Variant *)local_58,(int)lVar12);
                  TreeItem::set_metadata(iVar9,(Variant *)0x0);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  local_88 = 0;
                  String::parse_latin1((String *)&local_88,"");
                  local_90 = (Object *)0x0;
                  String::parse_latin1((String *)&local_90,"Remove");
                  TTR((String *)&local_80,(String *)&local_90);
                  if ((update_translations()::{lambda()#3}::operator()()::sname == '\0') &&
                     (iVar10 = __cxa_guard_acquire(&update_translations()::{lambda()#3}::
                                                    operator()()::sname), iVar10 != 0)) {
                    _scs_create((char *)&update_translations()::{lambda()#3}::operator()()::sname,
                                true);
                    __cxa_atexit(StringName::~StringName,
                                 &update_translations()::{lambda()#3}::operator()()::sname,
                                 &__dso_handle);
                    __cxa_guard_release(&update_translations()::{lambda()#3}::operator()()::sname);
                  }
                  Control::get_editor_theme_icon((StringName *)&local_98);
                  TreeItem::add_button
                            (iVar9,(Ref *)0x0,(int)(StringName *)&local_98,false,(String *)0x0);
                  if (((local_98 != (Object *)0x0) &&
                      (cVar6 = RefCounted::unreference(), pOVar4 = local_98, cVar6 != '\0')) &&
                     (cVar6 = predelete_handler(local_98), cVar6 != '\0')) {
                    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                    Memory::free_static(pOVar4,false);
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  TreeItem::set_cell_mode(uVar13,1,4);
                  TranslationServer::get_locale_name((String *)&local_80);
                  TreeItem::set_text(uVar13,1,(String *)&local_80);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                  TreeItem::set_editable(iVar9,true);
                  Variant::Variant((Variant *)local_58,local_c0);
                  TreeItem::set_metadata(iVar9,(Variant *)0x1);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  TreeItem::set_tooltip_text(iVar9,(String *)0x1);
                  cVar6 = FileAccess::exists(local_c0);
                  if (cVar6 == '\0') {
                    local_98 = (Object *)0x0;
                    String::parse_latin1((String *)&local_98,"");
                    local_a0 = 0;
                    String::parse_latin1((String *)&local_a0,"Removed");
                    TTR((String *)&local_90,(String *)&local_a0);
                    local_a8 = 0;
                    String::parse_latin1((String *)&local_a8," (%s)");
                    vformat<String>((String *)&local_88,(String *)&local_a8,(StringName *)&local_90)
                    ;
                    TreeItem::get_text((int)local_b0);
                    String::operator+((String *)&local_80,local_b0);
                    TreeItem::set_text(uVar13,0,(String *)&local_80);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                    TreeItem::get_tooltip_text((int)(String *)&local_88);
                    local_98 = (Object *)0x0;
                    String::parse_latin1((String *)&local_98,"");
                    local_a0 = 0;
                    String::parse_latin1((String *)&local_a0,"%s cannot be found.");
                    TTR((String *)&local_90,(String *)&local_a0);
                    vformat<String>((String *)&local_80,(StringName *)&local_90,(String *)&local_88)
                    ;
                    TreeItem::set_tooltip_text(iVar9,(String *)0x0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  }
                  CowData<char32_t>::_unref(local_b8);
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
                }
                CowData<String>::_unref((CowData<String> *)&local_60);
              }
              local_140 = (CowData<char32_t> *)((long)local_140 + 1);
              pCVar17 = local_70;
            } while (local_70 != (CowData<char32_t> *)0x0);
          }
        }
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_70);
    List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator> *)&local_c8);
    Dictionary::~Dictionary((Dictionary *)local_d0);
  }
  Tree::clear();
  iVar7 = Tree::create_item(*(TreeItem **)(this + 0xa50),0);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa50),0));
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_68,"internationalization/locale/translations_pot_files",false);
  ProjectSettings::get_setting_with_override((StringName *)local_58);
  Variant::operator_cast_to_Vector((Variant *)&local_78);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
    StringName::unref();
  }
  local_140 = (CowData<char32_t> *)0x0;
  while( true ) {
    if ((local_70 == (CowData<char32_t> *)0x0) || (*(long *)(local_70 + -8) <= (long)local_140)) {
      _update_pot_file_extensions(this);
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa70),0));
      this[0xa78] = (LocalizationEditor)0x0;
      CowData<String>::_unref((CowData<String> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    uVar13 = Tree::create_item(*(TreeItem **)(this + 0xa50),iVar7);
    iVar8 = (int)uVar13;
    TreeItem::set_editable(iVar8,false);
    if (local_70 == (CowData<char32_t> *)0x0) break;
    lVar12 = *(long *)(local_70 + -8);
    if (lVar12 <= (long)local_140) goto LAB_00105ee1;
    String::replace_first((char *)&local_68,(char *)(local_70 + (long)local_140 * 8));
    TreeItem::set_text(uVar13,0,(StringName *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (local_70 == (CowData<char32_t> *)0x0) break;
    lVar12 = *(long *)(local_70 + -8);
    if (lVar12 <= (long)local_140) goto LAB_00105ee1;
    TreeItem::set_tooltip_text(iVar8,(String *)0x0);
    Variant::Variant((Variant *)local_58,(int)local_140);
    TreeItem::set_metadata(iVar8,(Variant *)0x0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_80 = 0;
    local_68 = "";
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_80);
    local_88 = 0;
    local_68 = "Remove";
    local_60 = 6;
    String::parse_latin1((StrRange *)&local_88);
    TTR((String *)&local_68,(String *)&local_88);
    if ((update_translations()::{lambda()#4}::operator()()::sname == '\0') &&
       (iVar9 = __cxa_guard_acquire(&update_translations()::{lambda()#4}::operator()()::sname),
       iVar9 != 0)) {
      _scs_create((char *)&update_translations()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&update_translations()::{lambda()#4}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&update_translations()::{lambda()#4}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_90);
    TreeItem::add_button(iVar8,(Ref *)0x0,(int)(StringName *)&local_90,false,(String *)0x0);
    if (((local_90 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar4 = local_90, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_90), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    local_140 = (CowData<char32_t> *)((long)local_140 + 1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  }
LAB_00105ec0:
  lVar12 = 0;
LAB_00105ee1:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,(long)local_140,lVar12,"p_index","size()","",
             false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* LocalizationEditor::update_translations() */

void __thiscall LocalizationEditor::update_translations(LocalizationEditor *this)

{
  if (this[0xa78] != (LocalizationEditor)0x0) {
    return;
  }
  update_translations(this);
  return;
}



/* LocalizationEditor::_filesystem_file_removed(String const&) */

void __thiscall
LocalizationEditor::_filesystem_file_removed(LocalizationEditor *this,String *param_1)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  String *pSVar6;
  Variant *pVVar7;
  CowData *pCVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  int local_fc;
  Dictionary local_c8 [8];
  Array local_c0 [8];
  CowData<char32_t> local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_c8);
  pSVar6 = (String *)ProjectSettings::get_singleton();
  local_98 = 0;
  local_88 = "internationalization/locale/translation_remaps";
  local_80 = 0x2e;
  String::parse_latin1((StrRange *)&local_98);
  cVar3 = ProjectSettings::has_setting(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (cVar3 != '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_98,"internationalization/locale/translation_remaps",false);
    ProjectSettings::get_setting_with_override((StringName *)local_58);
    Variant::operator_cast_to_Dictionary((Variant *)&local_88);
    Dictionary::operator=(local_c8,(Dictionary *)&local_88);
    Dictionary::~Dictionary((Dictionary *)&local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
  }
  Variant::Variant((Variant *)local_58,param_1);
  cVar3 = Dictionary::has((Variant *)local_c8);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar3 == '\0') {
    Dictionary::keys();
    cVar3 = '\0';
    for (local_fc = 0; iVar5 = Array::size(), local_fc < iVar5; local_fc = local_fc + 1) {
      if (cVar3 != '\0') {
        Array::~Array(local_c0);
        goto LAB_0010762a;
      }
      iVar5 = (int)local_c0;
      Array::operator[](iVar5);
      Dictionary::operator[]((Variant *)local_c8);
      Variant::operator_cast_to_Vector((Variant *)&local_98);
      if (local_90 != 0) {
        lVar10 = 0;
        do {
          if ((*(long *)(local_90 + -8) <= lVar10) || (cVar3 != '\0')) break;
          iVar2 = (int)(lVar10 * 8);
          String::rfind_char((int)local_90 + iVar2,0x3a);
          if (local_90 == 0) {
LAB_001076e0:
            lVar9 = 0;
LAB_001076e6:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar9,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          lVar9 = *(long *)(local_90 + -8);
          if (lVar9 <= lVar10) goto LAB_001076e6;
          String::substr((int)local_b8,(int)local_90 + iVar2);
          cVar3 = String::operator==(param_1,(String *)local_b8);
          if ((cVar3 != '\0') && (cVar4 = is_print_verbose_enabled(), cVar4 != '\0')) {
            pVVar7 = (Variant *)Array::operator[](iVar5);
            Variant::Variant((Variant *)local_78,pVVar7);
            if (local_90 == 0) goto LAB_001076e0;
            lVar9 = *(long *)(local_90 + -8);
            if (lVar9 <= lVar10) goto LAB_001076e6;
            pCVar8 = (CowData *)(local_90 + lVar10 * 8);
            local_a8 = 0;
            if (*(long *)pCVar8 != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,pCVar8);
            }
            local_b0 = 0;
            local_88 = "Remap value \"%s\" of key \"%s\" has been removed from the file system.";
            local_80 = 0x43;
            String::parse_latin1((StrRange *)&local_b0);
            vformat<String,Variant>
                      ((String *)&local_a0,(StrRange *)&local_b0,(CowData<char32_t> *)&local_a8,
                       (Variant *)local_78);
            Variant::Variant((Variant *)local_58,(String *)&local_a0);
            stringify_variants((Variant *)&local_88);
            __print_line((String *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          lVar10 = lVar10 + 1;
          CowData<char32_t>::_unref(local_b8);
        } while (local_90 != 0);
      }
      CowData<String>::_unref((CowData<String> *)&local_90);
    }
    Array::~Array(local_c0);
    if (cVar3 == '\0') goto LAB_001076aa;
  }
  else {
    cVar3 = is_print_verbose_enabled();
    if (cVar3 != '\0') {
      local_a0 = 0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)param_1);
      }
      local_a8 = 0;
      local_88 = "Remap key \"%s\" has been removed from the file system.";
      local_80 = 0x35;
      String::parse_latin1((StrRange *)&local_a8);
      vformat<String>((StrRange *)&local_98,(StrRange *)&local_a8,(CowData<char32_t> *)&local_a0);
      Variant::Variant((Variant *)local_58,(String *)&local_98);
      stringify_variants((Variant *)&local_88);
      __print_line((String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    }
  }
LAB_0010762a:
  if (this[0xa78] == (LocalizationEditor)0x0) {
    update_translations(this);
  }
  StringName::StringName((StringName *)&local_88,"localization_changed",false);
  local_50 = (undefined1  [16])0x0;
  local_58[0] = 0;
  local_58[1] = 0;
  (**(code **)(*(long *)this + 0xd0))(this,(Variant *)&local_88,0,0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
LAB_001076aa:
  Dictionary::~Dictionary(local_c8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* LocalizationEditor::_translation_res_option_add(Vector<String> const&) */

void __thiscall
LocalizationEditor::_translation_res_option_add(LocalizationEditor *this,Vector *param_1)

{
  code *pcVar1;
  char cVar2;
  String *pSVar3;
  long lVar4;
  StringName *pSVar5;
  Object *pOVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  StrRange *local_f8;
  Variant local_c8 [8];
  Variant local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined8 local_98;
  CowData<String> local_90 [8];
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar3 = (String *)ProjectSettings::get_singleton();
  local_98 = 0;
  local_88 = "internationalization/locale/translation_remaps";
  local_80 = 0x2e;
  String::parse_latin1((StrRange *)&local_98);
  cVar2 = ProjectSettings::has_setting(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (cVar2 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_translation_res_option_add","editor/localization_editor.cpp",0xad,
                       "Condition \"!ProjectSettings::get_singleton()->has_setting(\"internationalization/locale/translation_remaps\")\" is true."
                       ,0,0);
      return;
    }
    goto LAB_0010828e;
  }
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_88,"internationalization/locale/translation_remaps",false);
  ProjectSettings::get_setting_with_override((StringName *)&local_58);
  Variant::operator_cast_to_Dictionary(local_c8);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  lVar4 = Tree::get_selected();
  if (lVar4 == 0) {
    _err_print_error("_translation_res_option_add","editor/localization_editor.cpp",0xb2,
                     "Parameter \"k\" is null.",0,0);
LAB_00108175:
    Dictionary::~Dictionary((Dictionary *)local_c8);
  }
  else {
    TreeItem::get_metadata((int)(StringName *)&local_58);
    Variant::operator_cast_to_String(local_c0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_58,(String *)local_c0);
    cVar2 = Dictionary::has(local_c8);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar2 == '\0') {
      _err_print_error("_translation_res_option_add","editor/localization_editor.cpp",0xb6,
                       "Condition \"!remaps.has(key)\" is true.",0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
      goto LAB_00108175;
    }
    Variant::Variant((Variant *)&local_58,(String *)local_c0);
    Dictionary::operator[](local_c8);
    Variant::operator_cast_to_Vector((Variant *)&local_98);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    lVar4 = *(long *)(param_1 + 8);
    for (lVar9 = 0; (lVar4 != 0 && (lVar9 < *(long *)(lVar4 + -8))); lVar9 = lVar9 + 1) {
      local_a0 = 0;
      local_88 = "en";
      local_80 = 2;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = ":";
      local_b0 = 0;
      local_80 = 1;
      String::parse_latin1((StrRange *)&local_b0);
      lVar4 = *(long *)(param_1 + 8);
      if (lVar4 == 0) {
        lVar8 = 0;
LAB_00107b95:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar8,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar8 = *(long *)(lVar4 + -8);
      if (lVar8 <= lVar9) goto LAB_00107b95;
      String::operator+((String *)&local_a8,(String *)(lVar4 + lVar9 * 8));
      String::operator+((String *)&local_88,(String *)&local_a8);
      Vector<String>::push_back((Vector<String> *)&local_98,(StringName *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      lVar4 = *(long *)(param_1 + 8);
    }
    local_f8 = (StrRange *)&local_a8;
    Variant::Variant((Variant *)&local_58,(Vector *)&local_98);
    Variant::Variant((Variant *)local_78,(String *)local_c0);
    pSVar5 = (StringName *)Dictionary::operator[](local_c8);
    if (pSVar5 != (StringName *)&local_58) {
      if (Variant::needs_deinit[*(int *)pSVar5] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pSVar5 = 0;
      *(int *)pSVar5 = (int)local_58;
      *(undefined8 *)(pSVar5 + 8) = local_50._0_8_;
      *(undefined8 *)(pSVar5 + 0x10) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
    local_a8 = 0;
    local_88 = "";
    local_80 = 0;
    String::parse_latin1(local_f8);
    if (*(long *)(param_1 + 8) == 0) {
      uVar7 = 0;
    }
    else {
      uVar7 = *(uint *)(*(long *)(param_1 + 8) + -8);
    }
    local_b0 = 0;
    local_88 = "Translation Resource Remap: Add %d Remaps";
    local_80 = 0x29;
    String::parse_latin1((StrRange *)&local_b0);
    local_88 = "Translation Resource Remap: Add %d Remap";
    local_b8 = 0;
    local_80 = 0x28;
    String::parse_latin1((StrRange *)&local_b8);
    TTRN((String *)&local_a0,(String *)&local_b8,(int)(CowData<char32_t> *)&local_b0,
         (String *)(ulong)uVar7);
    vformat<long>((String *)&local_88,(long)&local_a0);
    EditorUndoRedoManager::create_action(pOVar6,(StringName *)&local_88,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    Variant::Variant((Variant *)&local_58,local_c8);
    StringName::StringName
              ((StringName *)&local_88,"internationalization/locale/translation_remaps",false);
    pSVar5 = (StringName *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_do_property(pOVar6,pSVar5,(Variant *)&local_88);
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_a0,"internationalization/locale/translation_remaps",false);
    ProjectSettings::get_setting_with_override((StringName *)&local_58);
    StringName::StringName
              ((StringName *)&local_88,"internationalization/locale/translation_remaps",false);
    pSVar5 = (StringName *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_undo_property(pOVar6,pSVar5,(Variant *)&local_88);
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_88,"update_translations",false);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)this,(Variant **)&local_88,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_88,"update_translations",false);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)this,(Variant **)&local_88,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    local_88 = (char *)0x0;
    if (*(long *)(this + 0xa80) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(this + 0xa80));
    }
    StringName::StringName((StringName *)&local_a0,"emit_signal",false);
    EditorUndoRedoManager::add_do_method<String>
              ((EditorUndoRedoManager *)pOVar6,this,(CowData<char32_t> *)&local_a0,
               (StringName *)&local_88);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    local_88 = (char *)0x0;
    if (*(long *)(this + 0xa80) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(this + 0xa80));
    }
    StringName::StringName((StringName *)&local_a0,"emit_signal",false);
    EditorUndoRedoManager::add_undo_method<String>
              ((EditorUndoRedoManager *)pOVar6,this,(CowData<char32_t> *)&local_a0,
               (StringName *)&local_88);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
    CowData<String>::_unref(local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    Dictionary::~Dictionary((Dictionary *)local_c8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010828e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_filesystem_files_moved(String const&, String const&) */

void __thiscall
LocalizationEditor::_filesystem_files_moved
          (LocalizationEditor *this,String *param_1,String *param_2)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  String *pSVar8;
  Variant *pVVar9;
  StringName *pSVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long in_FS_OFFSET;
  int local_14c;
  int local_114;
  Dictionary local_e8 [8];
  Array local_e0 [8];
  String local_d8 [8];
  CowData<char32_t> local_d0 [8];
  undefined8 local_c8;
  String local_c0 [8];
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  String local_a0 [8];
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Dictionary::Dictionary(local_e8);
  pSVar8 = (String *)ProjectSettings::get_singleton();
  local_98 = 0;
  local_88 = "internationalization/locale/translation_remaps";
  local_80 = 0x2e;
  String::parse_latin1((StrRange *)&local_98);
  cVar3 = ProjectSettings::has_setting(pSVar8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (cVar3 != '\0') {
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_98,"internationalization/locale/translation_remaps",false);
    ProjectSettings::get_setting_with_override((StringName *)&local_58);
    Variant::operator_cast_to_Dictionary((Variant *)&local_88);
    Dictionary::operator=(local_e8,(Dictionary *)&local_88);
    Dictionary::~Dictionary((Dictionary *)&local_88);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != 0)) {
      StringName::unref();
    }
  }
  Variant::Variant((Variant *)&local_58,param_1);
  cVar3 = Dictionary::has((Variant *)local_e8);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (cVar3 != '\0') {
    Variant::Variant((Variant *)&local_58,param_1);
    Dictionary::operator[]((Variant *)local_e8);
    Variant::operator_cast_to_Vector((Variant *)&local_88);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_58,param_1);
    Dictionary::erase((Variant *)local_e8);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)&local_58,(Vector *)&local_88);
    Variant::Variant((Variant *)local_78,param_2);
    pSVar10 = (StringName *)Dictionary::operator[]((Variant *)local_e8);
    if (pSVar10 != (StringName *)&local_58) {
      if (Variant::needs_deinit[*(int *)pSVar10] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pSVar10 = 0;
      *(int *)pSVar10 = (int)local_58;
      *(undefined8 *)(pSVar10 + 8) = local_50._0_8_;
      *(undefined8 *)(pSVar10 + 0x10) = local_50._8_8_;
      local_58 = local_58 & 0xffffffff00000000;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    cVar5 = is_print_verbose_enabled();
    if (cVar5 != '\0') {
      local_a8 = 0;
      if (*(long *)param_2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)param_2);
      }
      local_b0 = 0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)param_1);
      }
      local_b8 = 0;
      String::parse_latin1
                ((String *)&local_b8,"Changed remap key \"%s\" to \"%s\" due to a moved file.");
      vformat<String,String>
                ((CowData<char32_t> *)local_a0,(String *)&local_b8,(CowData<char32_t> *)&local_b0,
                 (CowData<char32_t> *)&local_a8);
      Variant::Variant((Variant *)&local_58,local_a0);
      stringify_variants((Variant *)&local_98);
      __print_line((String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    CowData<String>::_unref((CowData<String> *)&local_80);
  }
  Dictionary::keys();
  local_114 = 0;
  do {
    iVar6 = Array::size();
    if (iVar6 <= local_114) {
      if (cVar3 != '\0') {
        pSVar8 = (String *)ProjectSettings::get_singleton();
        Variant::Variant((Variant *)&local_58,local_e8);
        local_88 = (char *)0x0;
        String::parse_latin1((String *)&local_88,"internationalization/locale/translation_remaps");
        ProjectSettings::set_setting(pSVar8,(Variant *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if (this[0xa78] == (LocalizationEditor)0x0) {
          update_translations(this);
        }
        StringName::StringName((StringName *)&local_88,"localization_changed",false);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        (**(code **)(*(long *)this + 0xd0))(this,(Variant *)&local_88,0,0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
          StringName::unref();
        }
      }
      Array::~Array(local_e0);
      Dictionary::~Dictionary(local_e8);
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    iVar6 = (int)local_e0;
    Array::operator[](iVar6);
    Dictionary::operator[]((Variant *)local_e8);
    Variant::operator_cast_to_Vector((Variant *)&local_98);
    if (local_90 != 0) {
      lVar17 = 0;
      cVar5 = '\0';
      lVar13 = 0;
      local_14c = 1;
      do {
        if (*(long *)(local_90 + -8) <= lVar13) break;
        iVar7 = (int)lVar17;
        String::rfind_char((int)local_90 + iVar7,0x3a);
        if (local_90 == 0) {
LAB_001089a0:
          lVar15 = 0;
LAB_001089a6:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar13,lVar15,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar15 = *(long *)(local_90 + -8);
        if (lVar15 <= lVar13) goto LAB_001089a6;
        String::substr((int)local_d8,(int)local_90 + iVar7);
        cVar4 = String::operator==(local_d8,param_1);
        if (cVar4 != '\0') {
          if (local_90 == 0) goto LAB_001089a0;
          lVar15 = *(long *)(local_90 + -8);
          if (lVar15 <= lVar13) goto LAB_001089a6;
          String::substr((int)local_d0,(int)local_90 + iVar7);
          local_88 = ":";
          local_a8 = 0;
          local_80 = 1;
          String::parse_latin1((StrRange *)&local_a8);
          String::operator+(local_a0,param_2);
          String::operator+((String *)&local_88,local_a0);
          if (local_90 == 0) {
            lVar15 = 1;
            lVar16 = 0;
          }
          else {
            lVar16 = *(long *)(local_90 + -8);
            lVar15 = lVar16 + 1;
          }
          if (lVar13 < lVar15) {
            iVar7 = CowData<String>::resize<false>((CowData<String> *)&local_90,lVar15);
            if (iVar7 == 0) {
              CowData<String>::_copy_on_write((CowData<String> *)&local_90);
              lVar15 = local_90;
              plVar14 = (long *)(local_90 + lVar16 * 8);
              if (lVar13 < lVar16) {
                do {
                  lVar18 = *plVar14;
                  lVar11 = plVar14[-1];
                  if (lVar18 != lVar11) {
                    if (lVar18 != 0) {
                      LOCK();
                      plVar1 = (long *)(lVar18 + -0x10);
                      *plVar1 = *plVar1 + -1;
                      UNLOCK();
                      if (*plVar1 == 0) {
                        lVar18 = *plVar14;
                        *plVar14 = 0;
                        Memory::free_static((void *)(lVar18 + -0x10),false);
                      }
                      lVar11 = plVar14[-1];
                    }
                    *plVar14 = lVar11;
                    plVar14[-1] = 0;
                  }
                  lVar16 = lVar16 + -1;
                  plVar14 = plVar14 + -1;
                } while (lVar13 != lVar16);
              }
              if (*(char **)(lVar15 + lVar17) != local_88) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar15 + lVar17),(CowData *)&local_88)
                ;
              }
            }
            else {
              _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                               "Condition \"err\" is true. Returning: err",0,0);
            }
          }
          else {
            _err_print_index_error
                      ("insert","./core/templates/cowdata.h",0xf0,lVar13,lVar15,"p_pos","new_size",
                       "",false,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          lVar15 = (long)local_14c;
          if (local_90 == 0) {
            lVar16 = 0;
LAB_001089f3:
            _err_print_index_error
                      ("remove_at","./core/templates/cowdata.h",0xe4,lVar15,lVar16,"p_index",
                       "size()","",false,false);
          }
          else {
            lVar16 = *(long *)(local_90 + -8);
            if (lVar16 <= lVar15) goto LAB_001089f3;
            CowData<String>::_copy_on_write((CowData<String> *)&local_90);
            if (local_90 == 0) {
              lVar16 = -1;
            }
            else {
              lVar16 = *(long *)(local_90 + -8) + -1;
              if (lVar15 < lVar16) {
                lVar18 = local_90 + lVar17;
                do {
                  lVar11 = *(long *)(lVar18 + 8);
                  lVar12 = *(long *)(lVar18 + 0x10);
                  if (lVar11 != lVar12) {
                    if (lVar11 != 0) {
                      LOCK();
                      plVar14 = (long *)(lVar11 + -0x10);
                      *plVar14 = *plVar14 + -1;
                      UNLOCK();
                      if (*plVar14 == 0) {
                        lVar11 = *(long *)(lVar18 + 8);
                        *(undefined8 *)(lVar18 + 8) = 0;
                        Memory::free_static((void *)(lVar11 + -0x10),false);
                      }
                      lVar12 = *(long *)(lVar18 + 0x10);
                    }
                    *(long *)(lVar18 + 8) = lVar12;
                    *(undefined8 *)(lVar18 + 0x10) = 0;
                  }
                  lVar15 = lVar15 + 1;
                  lVar18 = lVar18 + 8;
                } while (lVar16 != lVar15);
              }
            }
            CowData<String>::resize<false>((CowData<String> *)&local_90,lVar16);
          }
          cVar3 = is_print_verbose_enabled();
          if (cVar3 != '\0') {
            pVVar9 = (Variant *)Array::operator[](iVar6);
            Variant::Variant((Variant *)local_78,pVVar9);
            if (local_90 == 0) goto LAB_001089a0;
            lVar15 = *(long *)(local_90 + -8);
            if (lVar15 <= lVar13) goto LAB_001089a6;
            local_a8 = 0;
            if (*(long *)(local_90 + lVar17) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)(local_90 + lVar17))
              ;
            }
            local_c8 = 0;
            local_88 = ":";
            local_80 = 1;
            String::parse_latin1((StrRange *)&local_c8);
            String::operator+(local_c0,local_d8);
            String::operator+((String *)&local_b8,local_c0);
            local_88 = "Changed remap value \"%s\" to \"%s\" of key \"%s\" due to a moved file.";
            local_b0 = 0;
            local_80 = 0x41;
            String::parse_latin1((StrRange *)&local_b0);
            vformat<String,String,Variant>
                      (local_a0,(StrRange *)&local_b0,(String *)&local_b8,(StrRange *)&local_a8);
            Variant::Variant((Variant *)&local_58,local_a0);
            stringify_variants((Variant *)&local_88);
            __print_line((String *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          CowData<char32_t>::_unref(local_d0);
          cVar3 = cVar4;
          cVar5 = cVar4;
        }
        lVar13 = (long)local_14c;
        lVar17 = lVar17 + 8;
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        local_14c = local_14c + 1;
      } while (local_90 != 0);
      if (cVar5 != '\0') {
        Variant::Variant((Variant *)&local_58,(Vector *)&local_98);
        Array::operator[](iVar6);
        pSVar10 = (StringName *)Dictionary::operator[]((Variant *)local_e8);
        if (pSVar10 == (StringName *)&local_58) {
          if (Variant::needs_deinit[(int)local_58] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          if (Variant::needs_deinit[*(int *)pSVar10] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pSVar10 = 0;
          *(int *)pSVar10 = (int)local_58;
          *(undefined8 *)(pSVar10 + 8) = local_50._0_8_;
          *(undefined8 *)(pSVar10 + 0x10) = local_50._8_8_;
        }
      }
    }
    CowData<String>::_unref((CowData<String> *)&local_90);
    local_114 = local_114 + 1;
  } while( true );
}



/* LocalizationEditor::_translation_delete(Object*, int, int, MouseButton) */

void __thiscall
LocalizationEditor::_translation_delete
          (LocalizationEditor *this,long param_1,undefined8 param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  Object *pOVar4;
  StringName *pSVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  Variant local_a8 [8];
  long local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 1) {
    if ((param_1 == 0) ||
       (lVar3 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0), lVar3 == 0)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_translation_delete","editor/localization_editor.cpp",0x6f,
                         "Parameter \"ti\" is null.",0,0);
        return;
      }
      goto LAB_00109710;
    }
    TreeItem::get_metadata((int)(Variant *)local_78);
    iVar2 = Variant::operator_cast_to_int((Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_98,"internationalization/locale/translations",false)
    ;
    ProjectSettings::get_setting_with_override((StringName *)local_78);
    Variant::operator_cast_to_Vector(local_a8);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    lVar3 = (long)iVar2;
    if (iVar2 < 0) {
      if (local_a0 == 0) goto LAB_00109700;
      lVar8 = *(long *)(local_a0 + -8);
    }
    else if (local_a0 == 0) {
LAB_00109700:
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(local_a0 + -8);
      if (lVar3 < lVar8) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_a0);
        if (local_a0 == 0) {
          lVar8 = -1;
        }
        else {
          lVar6 = *(long *)(local_a0 + -8) + -1;
          lVar8 = lVar6;
          if (lVar3 < lVar6) {
            plVar9 = (long *)(local_a0 + lVar3 * 8);
            do {
              lVar8 = *plVar9;
              lVar7 = plVar9[1];
              if (lVar8 != lVar7) {
                if (lVar8 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar8 = *plVar9;
                    *plVar9 = 0;
                    Memory::free_static((void *)(lVar8 + -0x10),false);
                    lVar7 = plVar9[1];
                  }
                  else {
                    lVar7 = plVar9[1];
                  }
                }
                *plVar9 = lVar7;
                plVar9[1] = 0;
              }
              lVar3 = lVar3 + 1;
              plVar9 = plVar9 + 1;
              lVar8 = lVar3;
            } while (lVar6 != lVar3);
          }
        }
        CowData<String>::resize<false>((CowData<String> *)&local_a0,lVar8);
        pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
        local_b0 = 0;
        local_90 = 0;
        local_98 = "";
        String::parse_latin1((StrRange *)&local_b0);
        local_b8 = 0;
        local_98 = "Remove Translation";
        local_90 = 0x12;
        String::parse_latin1((StrRange *)&local_b8);
        TTR((String *)&local_98,(String *)&local_b8);
        EditorUndoRedoManager::create_action(pOVar4,(StringName *)&local_98,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        Variant::Variant((Variant *)local_78,(Vector *)local_a8);
        StringName::StringName
                  ((StringName *)&local_98,"internationalization/locale/translations",false);
        pSVar5 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(pOVar4,pSVar5,(Variant *)&local_98);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_b0,"internationalization/locale/translations",false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        StringName::StringName
                  ((StringName *)&local_98,"internationalization/locale/translations",false);
        pSVar5 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_property(pOVar4,pSVar5,(Variant *)&local_98);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_98,"update_translations",false);
        local_70 = (undefined1  [16])0x0;
        local_78[0] = 0;
        local_78[1] = 0;
        EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)this,(Variant **)&local_98,0);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_98,"update_translations",false);
        local_70 = (undefined1  [16])0x0;
        local_78[0] = 0;
        local_78[1] = 0;
        EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)this,(Variant **)&local_98,0);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        local_98 = (char *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(this + 0xa80));
        StringName::StringName((StringName *)&local_b0,"emit_signal",false);
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar4,(StringName *)this,(Variant **)&local_b0,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        local_98 = (char *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(this + 0xa80));
        StringName::StringName((StringName *)&local_b0,"emit_signal",false);
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar4,(StringName *)this,(Variant **)&local_b0,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
        CowData<String>::_unref((CowData<String> *)&local_a0);
        goto LAB_00109587;
      }
    }
    _err_print_index_error
              ("_translation_delete","editor/localization_editor.cpp",0x75,lVar3,lVar8,"idx",
               "translations.size()","",false,false);
    CowData<String>::_unref((CowData<String> *)&local_a0);
  }
LAB_00109587:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109710:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_pot_delete(Object*, int, int, MouseButton) */

void __thiscall
LocalizationEditor::_pot_delete
          (LocalizationEditor *this,long param_1,undefined8 param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  Object *pOVar4;
  StringName *pSVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long in_FS_OFFSET;
  undefined8 local_b8;
  long local_b0;
  Variant local_a8 [8];
  long local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 1) {
    if ((param_1 == 0) ||
       (lVar3 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0), lVar3 == 0)) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_pot_delete","editor/localization_editor.cpp",0x170,
                         "Parameter \"ti\" is null.",0,0);
        return;
      }
      goto LAB_00109e50;
    }
    TreeItem::get_metadata((int)(Variant *)local_78);
    iVar2 = Variant::operator_cast_to_int((Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    ProjectSettings::get_singleton();
    StringName::StringName
              ((StringName *)&local_98,"internationalization/locale/translations_pot_files",false);
    ProjectSettings::get_setting_with_override((StringName *)local_78);
    Variant::operator_cast_to_Vector(local_a8);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    lVar3 = (long)iVar2;
    if (iVar2 < 0) {
      if (local_a0 == 0) goto LAB_00109e40;
      lVar8 = *(long *)(local_a0 + -8);
    }
    else if (local_a0 == 0) {
LAB_00109e40:
      lVar8 = 0;
    }
    else {
      lVar8 = *(long *)(local_a0 + -8);
      if (lVar3 < lVar8) {
        CowData<String>::_copy_on_write((CowData<String> *)&local_a0);
        if (local_a0 == 0) {
          lVar8 = -1;
        }
        else {
          lVar6 = *(long *)(local_a0 + -8) + -1;
          lVar8 = lVar6;
          if (lVar3 < lVar6) {
            plVar9 = (long *)(local_a0 + lVar3 * 8);
            do {
              lVar8 = *plVar9;
              lVar7 = plVar9[1];
              if (lVar8 != lVar7) {
                if (lVar8 != 0) {
                  LOCK();
                  plVar1 = (long *)(lVar8 + -0x10);
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                    lVar8 = *plVar9;
                    *plVar9 = 0;
                    Memory::free_static((void *)(lVar8 + -0x10),false);
                    lVar7 = plVar9[1];
                  }
                  else {
                    lVar7 = plVar9[1];
                  }
                }
                *plVar9 = lVar7;
                plVar9[1] = 0;
              }
              lVar3 = lVar3 + 1;
              plVar9 = plVar9 + 1;
              lVar8 = lVar3;
            } while (lVar6 != lVar3);
          }
        }
        CowData<String>::resize<false>((CowData<String> *)&local_a0,lVar8);
        pOVar4 = (Object *)EditorUndoRedoManager::get_singleton();
        local_b0 = 0;
        local_90 = 0;
        local_98 = "";
        String::parse_latin1((StrRange *)&local_b0);
        local_b8 = 0;
        local_98 = "Remove file from POT generation";
        local_90 = 0x1f;
        String::parse_latin1((StrRange *)&local_b8);
        TTR((String *)&local_98,(String *)&local_b8);
        EditorUndoRedoManager::create_action(pOVar4,(StringName *)&local_98,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        Variant::Variant((Variant *)local_78,(Vector *)local_a8);
        StringName::StringName
                  ((StringName *)&local_98,"internationalization/locale/translations_pot_files",
                   false);
        pSVar5 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(pOVar4,pSVar5,(Variant *)&local_98);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_b0,"internationalization/locale/translations_pot_files",
                   false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        StringName::StringName
                  ((StringName *)&local_98,"internationalization/locale/translations_pot_files",
                   false);
        pSVar5 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_property(pOVar4,pSVar5,(Variant *)&local_98);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_98,"update_translations",false);
        local_70 = (undefined1  [16])0x0;
        local_78[0] = 0;
        local_78[1] = 0;
        EditorUndoRedoManager::add_do_methodp(pOVar4,(StringName *)this,(Variant **)&local_98,0);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_98,"update_translations",false);
        local_70 = (undefined1  [16])0x0;
        local_78[0] = 0;
        local_78[1] = 0;
        EditorUndoRedoManager::add_undo_methodp(pOVar4,(StringName *)this,(Variant **)&local_98,0);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        local_98 = (char *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(this + 0xa80));
        StringName::StringName((StringName *)&local_b0,"emit_signal",false);
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar4,(StringName *)this,(Variant **)&local_b0,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        local_98 = (char *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(this + 0xa80));
        StringName::StringName((StringName *)&local_b0,"emit_signal",false);
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar4,(StringName *)this,(Variant **)&local_b0,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        EditorUndoRedoManager::commit_action(SUB81(pOVar4,0));
        CowData<String>::_unref((CowData<String> *)&local_a0);
        goto LAB_00109cc7;
      }
    }
    _err_print_index_error
              ("_pot_delete","editor/localization_editor.cpp",0x176,lVar3,lVar8,"idx",
               "pot_translations.size()","",false,false);
    CowData<String>::_unref((CowData<String> *)&local_a0);
  }
LAB_00109cc7:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109e50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_translation_add(Vector<String> const&) */

void __thiscall LocalizationEditor::_translation_add(LocalizationEditor *this,Vector *param_1)

{
  String *pSVar1;
  long lVar2;
  Object *pOVar3;
  StringName *pSVar4;
  uint uVar5;
  String *pSVar6;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  Variant local_a8 [8];
  CowData<String> local_a0 [8];
  char *local_98;
  undefined8 local_90;
  StringName *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName((StringName *)&local_98,"internationalization/locale/translations",false);
  ProjectSettings::get_setting_with_override((StringName *)local_78);
  Variant::operator_cast_to_Vector(local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar6 = *(String **)(param_1 + 8);
  if (pSVar6 != (String *)0x0) {
    uVar5 = 0;
    pSVar1 = pSVar6 + *(long *)(pSVar6 + -8) * 8;
    if (pSVar1 != pSVar6) {
      do {
        while (lVar2 = CowData<String>::find(local_a0,pSVar6,0), lVar2 == -1) {
          local_98 = (char *)0x0;
          if (*(long *)pSVar6 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)pSVar6);
          }
          pSVar6 = pSVar6 + 8;
          uVar5 = uVar5 + 1;
          Vector<String>::push_back((Vector<String> *)local_a8,(StringName *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          if (pSVar1 == pSVar6) goto LAB_00109f98;
        }
        pSVar6 = pSVar6 + 8;
      } while (pSVar1 != pSVar6);
LAB_00109f98:
      if (uVar5 != 0) {
        pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
        local_98 = "";
        local_b8 = 0;
        local_90 = 0;
        String::parse_latin1((StrRange *)&local_b8);
        local_c0 = 0;
        local_98 = "Add %d Translations";
        local_90 = 0x13;
        String::parse_latin1((StrRange *)&local_c0);
        local_c8 = 0;
        local_98 = "Add %d Translation";
        local_90 = 0x12;
        String::parse_latin1((StrRange *)&local_c8);
        TTRN((String *)&local_b0,(String *)&local_c8,(int)(StrRange *)&local_c0,
             (String *)(ulong)uVar5);
        vformat<int>((String *)&local_98,(int)(String *)&local_b0);
        EditorUndoRedoManager::create_action(pOVar3,(StringName *)&local_98,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        Variant::Variant((Variant *)local_78,(Vector *)local_a8);
        StringName::StringName
                  ((StringName *)&local_98,"internationalization/locale/translations",false);
        pSVar4 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(pOVar3,pSVar4,(Variant *)&local_98);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_b0,"internationalization/locale/translations",false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        StringName::StringName
                  ((StringName *)&local_98,"internationalization/locale/translations",false);
        pSVar4 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_property(pOVar3,pSVar4,(Variant *)&local_98);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_98,"update_translations",false);
        local_78[0] = 0;
        local_78[1] = 0;
        local_70 = (undefined1  [16])0x0;
        EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_98,0);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_98,"update_translations",false);
        local_78[0] = 0;
        local_78[1] = 0;
        local_70 = (undefined1  [16])0x0;
        EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,(Variant **)&local_98,0);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        local_98 = (char *)0x0;
        if (*(long *)(this + 0xa80) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(this + 0xa80));
        }
        StringName::StringName((StringName *)&local_b0,"emit_signal",false);
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_58 = (undefined1  [16])0x0;
        local_60 = 0;
        local_88[0] = (StringName *)local_78;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar3,(StringName *)this,(Variant **)&local_b0,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        local_98 = (char *)0x0;
        if (*(long *)(this + 0xa80) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(this + 0xa80));
        }
        StringName::StringName((StringName *)&local_b0,"emit_signal",false);
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (StringName *)local_78;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar3,(StringName *)this,(Variant **)&local_b0,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
      }
    }
  }
  CowData<String>::_unref(local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* LocalizationEditor::add_translation(String const&) */

void __thiscall LocalizationEditor::add_translation(LocalizationEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  long local_40;
  Vector<String> local_38 [8];
  undefined8 local_30 [2];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  local_40 = 0;
  plVar1 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 == 0) {
    Vector<String>::push_back(local_38,&local_40);
  }
  else {
    do {
      lVar2 = *plVar1;
      if (lVar2 == 0) goto LAB_0010a592;
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
      local_40 = *(long *)param_1;
    }
LAB_0010a592:
    lVar2 = local_40;
    Vector<String>::push_back(local_38);
    if (lVar2 != 0) {
      LOCK();
      plVar1 = (long *)(lVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        Memory::free_static((void *)(local_40 + -0x10),false);
      }
    }
  }
  _translation_add(this,(Vector *)local_38);
  CowData<String>::_unref((CowData<String> *)local_30);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* LocalizationEditor::_pot_add(Vector<String> const&) */

void __thiscall LocalizationEditor::_pot_add(LocalizationEditor *this,Vector *param_1)

{
  String *pSVar1;
  long lVar2;
  Object *pOVar3;
  StringName *pSVar4;
  uint uVar5;
  String *pSVar6;
  long in_FS_OFFSET;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  Variant local_a8 [8];
  CowData<String> local_a0 [8];
  char *local_98;
  undefined8 local_90;
  StringName *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ProjectSettings::get_singleton();
  StringName::StringName
            ((StringName *)&local_98,"internationalization/locale/translations_pot_files",false);
  ProjectSettings::get_setting_with_override((StringName *)local_78);
  Variant::operator_cast_to_Vector(local_a8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  pSVar6 = *(String **)(param_1 + 8);
  if (pSVar6 != (String *)0x0) {
    uVar5 = 0;
    pSVar1 = pSVar6 + *(long *)(pSVar6 + -8) * 8;
    if (pSVar1 != pSVar6) {
      do {
        while (lVar2 = CowData<String>::find(local_a0,pSVar6,0), lVar2 == -1) {
          local_98 = (char *)0x0;
          if (*(long *)pSVar6 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)pSVar6);
          }
          pSVar6 = pSVar6 + 8;
          uVar5 = uVar5 + 1;
          Vector<String>::push_back((Vector<String> *)local_a8,(StringName *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          if (pSVar1 == pSVar6) goto LAB_0010a758;
        }
        pSVar6 = pSVar6 + 8;
      } while (pSVar1 != pSVar6);
LAB_0010a758:
      if (uVar5 != 0) {
        pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
        local_98 = "";
        local_b8 = 0;
        local_90 = 0;
        String::parse_latin1((StrRange *)&local_b8);
        local_c0 = 0;
        local_98 = "Add %d files for POT generation";
        local_90 = 0x1f;
        String::parse_latin1((StrRange *)&local_c0);
        local_c8 = 0;
        local_98 = "Add %d file for POT generation";
        local_90 = 0x1e;
        String::parse_latin1((StrRange *)&local_c8);
        TTRN((String *)&local_b0,(String *)&local_c8,(int)(StrRange *)&local_c0,
             (String *)(ulong)uVar5);
        vformat<int>((String *)&local_98,(int)(String *)&local_b0);
        EditorUndoRedoManager::create_action(pOVar3,(StringName *)&local_98,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        Variant::Variant((Variant *)local_78,(Vector *)local_a8);
        StringName::StringName
                  ((StringName *)&local_98,"internationalization/locale/translations_pot_files",
                   false);
        pSVar4 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(pOVar3,pSVar4,(Variant *)&local_98);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_b0,"internationalization/locale/translations_pot_files",
                   false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        StringName::StringName
                  ((StringName *)&local_98,"internationalization/locale/translations_pot_files",
                   false);
        pSVar4 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_property(pOVar3,pSVar4,(Variant *)&local_98);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_98,"update_translations",false);
        local_78[0] = 0;
        local_78[1] = 0;
        local_70 = (undefined1  [16])0x0;
        EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_98,0);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_98,"update_translations",false);
        local_78[0] = 0;
        local_78[1] = 0;
        local_70 = (undefined1  [16])0x0;
        EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,(Variant **)&local_98,0);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        local_98 = (char *)0x0;
        if (*(long *)(this + 0xa80) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(this + 0xa80));
        }
        StringName::StringName((StringName *)&local_b0,"emit_signal",false);
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_58 = (undefined1  [16])0x0;
        local_60 = 0;
        local_88[0] = (StringName *)local_78;
        EditorUndoRedoManager::add_do_methodp
                  (pOVar3,(StringName *)this,(Variant **)&local_b0,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        local_98 = (char *)0x0;
        if (*(long *)(this + 0xa80) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(this + 0xa80));
        }
        StringName::StringName((StringName *)&local_b0,"emit_signal",false);
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (StringName *)local_78;
        EditorUndoRedoManager::add_undo_methodp
                  (pOVar3,(StringName *)this,(Variant **)&local_b0,(int)local_88);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
      }
    }
  }
  CowData<String>::_unref(local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* Object::_bind_compatibility_methods() */

void Object::_bind_compatibility_methods(void)

{
  return;
}



/* Object::_set(StringName const&, Variant const&) */

undefined8 Object::_set(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get(StringName const&, Variant&) const */

undefined8 Object::_get(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */

void Object::_get_property_list(List *param_1)

{
  return;
}



/* Object::_validate_property(PropertyInfo&) const */

void Object::_validate_property(PropertyInfo *param_1)

{
  return;
}



/* Object::_property_can_revert(StringName const&) const */

undefined8 Object::_property_can_revert(StringName *param_1)

{
  return 0;
}



/* Object::_property_get_revert(StringName const&, Variant&) const */

undefined8 Object::_property_get_revert(StringName *param_1,Variant *param_2)

{
  return 0;
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, String const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton> *this)

{
  return;
}



/* MethodBindT<>::_gen_argument_type(int) const */

undefined8 MethodBindT<>::_gen_argument_type(int param_1)

{
  return 0;
}



/* MethodBindT<>::_gen_argument_type_info(int) const */

undefined8 MethodBindT<>::_gen_argument_type_info(int param_1)

{
  undefined4 in_register_0000003c;
  
  *(undefined4 *)CONCAT44(in_register_0000003c,param_1) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x18) = 0;
  *(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x20) = 0;
  *(undefined4 *)(CONCAT44(in_register_0000003c,param_1) + 0x28) = 6;
  *(undefined1 (*) [16])(CONCAT44(in_register_0000003c,param_1) + 8) = (undefined1  [16])0x0;
  return CONCAT44(in_register_0000003c,param_1);
}



/* MethodBindT<>::get_argument_meta(int) const */

undefined8 MethodBindT<>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<LocalizationEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, Vector<String>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&>::get_argument_count
          (CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, String const&, String
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&>::get_argument_count
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<LocalizationEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void>::get_argument_count
          (CallableCustomMethodPointer<LocalizationEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, String const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116098;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00116098;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* LocalizationEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 LocalizationEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* LocalizationEditor::_property_can_revertv(StringName const&) const */

undefined8 LocalizationEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011a008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, Vector<String> const&>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&>::get_object
          (CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&> *this)

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
      goto LAB_0010b24d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b24d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b24d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, Object*, int, int,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton> *this)

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
      goto LAB_0010b34d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b34d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b34d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, String const&, String const&>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&>::get_object
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&> *this)

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
      goto LAB_0010b44d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b44d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b44d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,bool>::get_object
          (CallableCustomMethodPointer<LocalizationEditor,void,bool> *this)

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
      goto LAB_0010b54d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b54d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b54d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&> *this)

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
      goto LAB_0010b64d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b64d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b64d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<LocalizationEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<LocalizationEditor,void>::get_object
          (CallableCustomMethodPointer<LocalizationEditor,void> *this)

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
      goto LAB_0010b74d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b74d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b74d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* LocalizationEditor::_validate_propertyv(PropertyInfo&) const */

void LocalizationEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011a010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011a018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* LocalizationEditor::_setv(StringName const&, Variant const&) */

undefined8 LocalizationEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011a018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011a018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bb18) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bb88) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bbf8) */
/* LocalizationEditor::_getv(StringName const&, Variant&) const */

undefined8 LocalizationEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011a020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1163,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1163,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1163,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1163,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1163,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x1163,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1163,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1163,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1163,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x1163,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* LocalizationEditor::is_class_ptr(void*) const */

ulong LocalizationEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x1163,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x1163,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1163,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1163,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1163,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x1163,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010bdd0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bdd0:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be30;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010be30:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010be90;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010be90:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010bf00;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bf00:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
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



/* VBoxContainer::_get_class_namev() const */

undefined8 * VBoxContainer::_get_class_namev(void)

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
LAB_0010bfd3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010bfd3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010c03e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010c03e:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::_get_class_namev() const */

undefined8 * HBoxContainer::_get_class_namev(void)

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
LAB_0010c0c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c0c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010c12e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010c12e:
  return &_get_class_namev()::_class_name_static;
}



/* LocalizationEditor::_get_class_namev() const */

undefined8 * LocalizationEditor::_get_class_namev(void)

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
LAB_0010c1b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c1b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"LocalizationEditor");
      goto LAB_0010c21e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"LocalizationEditor");
LAB_0010c21e:
  return &_get_class_namev()::_class_name_static;
}



/* LocalizationEditor::~LocalizationEditor() */

void __thiscall LocalizationEditor::~LocalizationEditor(LocalizationEditor *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001159c0;
  if (*(long *)(this + 0xa80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa80);
      *(undefined8 *)(this + 0xa80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cfee;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cfee:
  Control::~Control((Control *)this);
  return;
}



/* LocalizationEditor::~LocalizationEditor() */

void __thiscall LocalizationEditor::~LocalizationEditor(LocalizationEditor *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_001159c0;
  if (*(long *)(this + 0xa80) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0xa80) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0xa80);
      *(undefined8 *)(this + 0xa80) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d08e;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d08e:
  Control::~Control((Control *)this);
  operator_delete(this,0xa88);
  return;
}



/* HBoxContainer::get_class() const */

void HBoxContainer::get_class(void)

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



/* VBoxContainer::get_class() const */

void VBoxContainer::get_class(void)

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



/* LocalizationEditor::get_class() const */

void LocalizationEditor::get_class(void)

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



/* WARNING: Removing unreachable block (ram,0x0010d480) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011a028 != Container::_notification) {
      BoxContainer::_notification(iVar1);
    }
    Container::_notification(iVar1);
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  Container::_notification(iVar1);
  if ((code *)PTR__notification_0011a028 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  if (param_2) {
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
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



/* Callable create_custom_callable_function_pointer<LocalizationEditor, Object*, int, int,
   MouseButton>(LocalizationEditor*, char const*, void (LocalizationEditor::*)(Object*, int, int,
   MouseButton)) */

LocalizationEditor *
create_custom_callable_function_pointer<LocalizationEditor,Object*,int,int,MouseButton>
          (LocalizationEditor *param_1,char *param_2,
          _func_void_Object_ptr_int_int_MouseButton *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00115d38;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Object_ptr_int_int_MouseButton **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* void EditorUndoRedoManager::add_do_method<String>(Object*, StringName const&, String) */

void __thiscall
EditorUndoRedoManager::add_do_method<String>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,String *param_4)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_4);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp((Object *)this,param_1,param_2,(int)local_78);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* void EditorUndoRedoManager::add_undo_method<String>(Object*, StringName const&, String) */

void __thiscall
EditorUndoRedoManager::add_undo_method<String>
          (EditorUndoRedoManager *this,StringName *param_1,Variant **param_2,String *param_4)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_4);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp((Object *)this,param_1,param_2,(int)local_78);
  if (Variant::needs_deinit[(int)local_50] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Callable create_custom_callable_function_pointer<LocalizationEditor>(LocalizationEditor*, char
   const*, void (LocalizationEditor::*)()) */

LocalizationEditor *
create_custom_callable_function_pointer<LocalizationEditor>
          (LocalizationEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00115dc8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<LocalizationEditor, String
   const&>(LocalizationEditor*, char const*, void (LocalizationEditor::*)(String const&)) */

LocalizationEditor *
create_custom_callable_function_pointer<LocalizationEditor,String_const&>
          (LocalizationEditor *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00115ee8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_String_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
  int *piVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)this;
  if (puVar2 == (undefined8 *)0x0) {
    return;
  }
  do {
    piVar1 = (int *)*puVar2;
    if (piVar1 == (int *)0x0) {
      if (*(int *)(puVar2 + 2) != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(undefined8 **)(piVar1 + 10) == puVar2) {
      *puVar2 = *(undefined8 *)(piVar1 + 6);
      if (piVar1 == (int *)puVar2[1]) {
        puVar2[1] = *(undefined8 *)(piVar1 + 8);
      }
      if (*(long *)(piVar1 + 8) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 8) + 0x18) = *(undefined8 *)(piVar1 + 6);
      }
      if (*(long *)(piVar1 + 6) != 0) {
        *(undefined8 *)(*(long *)(piVar1 + 6) + 0x20) = *(undefined8 *)(piVar1 + 8);
      }
      if (Variant::needs_deinit[*piVar1] != '\0') {
        Variant::_clear_internal();
      }
      Memory::free_static(piVar1,false);
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



/* Callable create_custom_callable_function_pointer<LocalizationEditor, Vector<String>
   const&>(LocalizationEditor*, char const*, void (LocalizationEditor::*)(Vector<String> const&)) */

LocalizationEditor *
create_custom_callable_function_pointer<LocalizationEditor,Vector<String>const&>
          (LocalizationEditor *param_1,char *param_2,_func_void_Vector_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC10;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00115f78;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Vector_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
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



/* WARNING: Removing unreachable block (ram,0x0010dd68) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x0010e068) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x0010e368) */
/* String vformat<long>(String const&, long const) */

String * vformat<long>(String *param_1,long param_2)

{
  char cVar1;
  Variant *this;
  long in_RDX;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c8 [8];
  undefined8 local_c0 [9];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_RDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c8);
  iVar2 = (int)local_c8;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_c0,(bool *)param_2);
  *(undefined8 *)param_1 = local_c0[0];
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* WARNING: Removing unreachable block (ram,0x0010e6a0) */
/* String vformat<String, String>(String const&, String const, String const) */

undefined8 *
vformat<String,String>(undefined8 *param_1,bool *param_2,String *param_3,String *param_4)

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
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
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



/* WARNING: Removing unreachable block (ram,0x0010e9a0) */
/* String vformat<String, String, Variant>(String const&, String const, String const, Variant const)
    */

undefined8 *
vformat<String,String,Variant>
          (undefined8 *param_1,bool *param_2,String *param_3,String *param_4,Variant *param_5)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int iVar3;
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
  iVar4 = 0;
  Variant::Variant(local_90,param_4);
  Variant::Variant(local_78,param_5);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_f8);
  iVar3 = (int)local_f8;
  Array::resize(iVar3);
  pVVar2 = local_a8;
  do {
    iVar4 = iVar4 + 1;
    pVVar1 = (Variant *)Array::operator[](iVar3);
    Variant::operator=(pVVar1,pVVar2);
    pVVar2 = pVVar2 + 0x18;
  } while (iVar4 != 3);
  String::sprintf((Array *)local_f0,param_2);
  *param_1 = local_f0[0];
  local_f0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  pVVar2 = local_48;
  Array::~Array(local_f8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_a8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0010ec90) */
/* String vformat<String, Variant>(String const&, String const, Variant const) */

undefined8 *
vformat<String,Variant>(undefined8 *param_1,bool *param_2,String *param_3,Variant *param_4)

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
  local_d0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
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
        if (pvVar5 == (void *)0x0) goto LAB_0010ef74;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010ef74:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void>::call
          (CallableCustomMethodPointer<LocalizationEditor,void> *this,Variant **param_1,int param_2,
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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar3 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar6 = (char)ObjectDB::spin_lock == '\0';
      if (bVar6) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar6) break;
      local_48 = (char *)(uVar5 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar4 = (ulong *)((ulong)uVar3 * 0x10 + ObjectDB::object_slots);
    uVar5 = *(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff;
    if (uVar5 != (*puVar4 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010f1bf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f1bf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f198. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f281;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f1bf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC76,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f281:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<LocalizationEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,bool>::call
          (CallableCustomMethodPointer<LocalizationEditor,void,bool> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010f449;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010f449;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar4 = _LC77;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0010f50b;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 1;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 1;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f449:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC76,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f50b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<LocalizationEditor, void, Object*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  Object *pOVar8;
  Object *pOVar9;
  uint uVar10;
  ulong *puVar11;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar7 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar7 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_58 = (char *)(uVar7 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010f770;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_0010f770;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 5) {
      if (param_2 == 4) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar3 = _LC78;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC79;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC80;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010f6f8:
          uVar3 = _LC81;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0010f6f8;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f749. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0010f86b;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 4;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 4;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f770:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC76,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     (String *)&local_58,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref(local_68);
    CowData<char32_t>::_unref(local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f86b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<LocalizationEditor, void, String const&, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&>::call
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 3) {
          if (param_2 == 2) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],4);
            uVar4 = _LC82;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_60);
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC83;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_58);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_58,(Variant *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 2;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
        }
        goto LAB_0010f935;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_60 = 0;
  local_58 = "\', can\'t call method.";
  local_50 = 0x15;
  String::parse_latin1((StrRange *)&local_60);
  uitos((ulong)local_70);
  operator+((char *)local_68,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_58,(String *)local_68);
  _err_print_error(&_LC76,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_58,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref(local_68);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_0010f935:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<LocalizationEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&>::call
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC83;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_String((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010fbee;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC76,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010fbee:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (CowData<char32_t> *)*plVar3;
    if (this_00 == (CowData<char32_t> *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x18) == plVar3) {
      lVar2 = *(long *)(this_00 + 8);
      lVar1 = *(long *)(this_00 + 0x10);
      *plVar3 = lVar2;
      if (this_00 == (CowData<char32_t> *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 8) = lVar2;
        lVar2 = *(long *)(this_00 + 8);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
      CowData<char32_t>::_unref(this_00);
      Memory::free_static(this_00,false);
      *(int *)(plVar3 + 2) = (int)plVar3[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar3 = *(long **)this;
  } while ((int)plVar3[2] != 0);
  Memory::free_static(plVar3,false);
  return;
}



/* LocalizationEditor::_notificationv(int, bool) */

void __thiscall
LocalizationEditor::_notificationv(LocalizationEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 10) {
      _notification((int)this);
    }
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  if (param_1 != 10) {
    return;
  }
  _notification((int)this);
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010fffb;
  }
  cVar5 = String::operator==(param_1,"CanvasItem");
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0010fffb;
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
        if (cVar5 != '\0') goto LAB_0010fffb;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_001101e0;
    }
  }
LAB_0010fffb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001101e0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::is_class(String const&) const */

undefined8 __thiscall BoxContainer::is_class(BoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011030b;
  }
  cVar5 = String::operator==(param_1,"BoxContainer");
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0011030b;
    }
    cVar5 = String::operator==(param_1,"Container");
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
        if (cVar5 != '\0') goto LAB_0011030b;
      }
      cVar5 = String::operator==(param_1,"Control");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
          return uVar6;
        }
        goto LAB_001104ce;
      }
    }
  }
LAB_0011030b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001104ce:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
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
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_0011054f;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0011054f:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00110603;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00110603:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  undefined8 uVar7;
  long in_FS_OFFSET;
  bool bVar8;
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
        plVar1 = (long *)(*(long *)(lVar3 + 0x10) + -0x10);
        if (*(long *)(lVar3 + 0x10) != 0) {
          do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001106cf;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar4 == lVar6;
            if (bVar8) {
              *plVar1 = lVar4 + 1;
              lVar6 = lVar4;
            }
            UNLOCK();
          } while (!bVar8);
          if (lVar6 != -1) {
            local_60 = *(long *)(lVar3 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(__s);
        local_58 = __s;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_001106cf:
    cVar5 = String::operator==(param_1,(String *)&local_60);
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
    if (cVar5 != '\0') goto LAB_00110783;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_00110783:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::is_class(String const&) const */

undefined8 __thiscall LocalizationEditor::is_class(LocalizationEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001108db;
  }
  cVar5 = String::operator==(param_1,"LocalizationEditor");
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
      if (cVar5 != '\0') goto LAB_001108db;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_00110a18;
    }
  }
LAB_001108db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00110a18:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_0011a040 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011a030 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_0011a038 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VBoxContainer::_initialize_classv() */

void VBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Object");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"Node");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((code *)PTR__bind_methods_0011a040 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"CanvasItem");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011a030 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_58 = "CanvasItem";
          local_68 = 0;
          local_50 = 10;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Control";
          local_70 = 0;
          local_50 = 7;
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
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Control";
        local_50 = 7;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Container";
        local_70 = 0;
        local_50 = 9;
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
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_58 = "Container";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "BoxContainer";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code *)PTR__bind_methods_0011a038 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "VBoxContainer";
    local_70 = 0;
    local_50 = 0xd;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
  local_78 = &_LC95;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC95;
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
LAB_0011182d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011182d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar5;
      local_68 = local_80;
      goto joined_r0x0011184f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar5;
joined_r0x0011184f:
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



/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CanvasItem::_get_property_listv(CanvasItem *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "CanvasItem";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00111ca1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111ca1:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011a048 != Object::_get_property_list) {
    CanvasItem::_get_property_list((List *)this);
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



/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Control::_get_property_listv(Control *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Control";
  local_98 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00111f71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00111f71:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_0011a050 != CanvasItem::_get_property_list) {
    Control::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      CanvasItem::_get_property_listv((CanvasItem *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

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
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Container";
  local_98 = 0;
  local_70 = 9;
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
LAB_0011226d:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_0011226d;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011228f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011228f:
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
  StringName::StringName((StringName *)&local_78,"Container",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Control::_get_property_listv((Control *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "BoxContainer";
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
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00112621;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112621:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"BoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Container::_get_property_listv((Container *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
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
LAB_001128fd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001128fd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x0011291f;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x0011291f:
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
  StringName::StringName((StringName *)&local_78,"VBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
LocalizationEditor::_get_property_listv(LocalizationEditor *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "LocalizationEditor";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "LocalizationEditor";
  local_98 = 0;
  local_70 = 0x12;
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
LAB_00112cdd:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00112cdd;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00112cff;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00112cff:
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
  StringName::StringName((StringName *)&local_78,"LocalizationEditor",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HBoxContainer::_get_property_listv(HBoxContainer *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HBoxContainer";
  local_98 = 0;
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 0x80;
    if (local_60 == 0x11) {
      StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
      if (local_68 == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_68 = local_80;
      }
      goto LAB_00113091;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113091:
  local_b0 = (CowData<char32_t> *)&local_58;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_b0);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"HBoxContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      BoxContainer::_get_property_listv((BoxContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<LocalizationEditor>(void (LocalizationEditor::*)()) */

MethodBind * create_method_bind<LocalizationEditor>(_func_void *param_1)

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
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00116098;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "LocalizationEditor";
  local_30 = 0x12;
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



/* LocalizationEditor::_bind_methods() [clone .cold] */

void LocalizationEditor::_bind_methods(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<String>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* LocalizationEditor::_initialize_classv() */

void LocalizationEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (VBoxContainer::initialize_class()::initialized == '\0') {
      if (BoxContainer::initialize_class()::initialized == '\0') {
        if (Container::initialize_class()::initialized == '\0') {
          if (Control::initialize_class()::initialized == '\0') {
            if (CanvasItem::initialize_class()::initialized == '\0') {
              if (Node::initialize_class()::initialized == '\0') {
                Object::initialize_class();
                local_60 = 0;
                String::parse_latin1((String *)&local_60,"Object");
                StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
                local_70 = 0;
                String::parse_latin1((String *)&local_70,"Node");
                StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
                ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
                if ((StringName::configured != '\0') && (local_68 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                if ((code *)PTR__bind_methods_0011a040 != Node::_bind_methods) {
                  Node::_bind_methods();
                }
                Node::initialize_class()::initialized = '\x01';
              }
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              local_70 = 0;
              String::parse_latin1((String *)&local_70,"CanvasItem");
              StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
              ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
              if ((StringName::configured != '\0') && (local_68 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              CanvasItem::_bind_methods();
              if ((code *)PTR__bind_compatibility_methods_0011a030 !=
                  Object::_bind_compatibility_methods) {
                CanvasItem::_bind_compatibility_methods();
              }
              CanvasItem::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Control");
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            ClassDB::_add_class2((StringName *)&local_68,(StringName *)&local_58);
            if ((StringName::configured != '\0') && (local_68 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            Control::_bind_methods();
            Control::initialize_class()::initialized = '\x01';
          }
          local_68 = 0;
          local_58 = "Control";
          local_50 = 7;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Container";
          local_70 = 0;
          local_50 = 9;
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
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_58 = "Container";
        local_68 = 0;
        local_50 = 9;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "BoxContainer";
        local_70 = 0;
        local_50 = 0xc;
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
        if ((code *)PTR__bind_methods_0011a038 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "BoxContainer";
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "VBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
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
      VBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "VBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "LocalizationEditor";
    local_70 = 0;
    local_50 = 0x12;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* CallableCustomMethodPointer<LocalizationEditor, void, Vector<String> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&>::call
          (CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar3 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar8 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar8 & 1) != 0) {
              pcVar8 = *(code **)(pcVar8 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x22);
            uVar4 = _LC103;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            Variant::operator_cast_to_Vector((Variant *)&local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),(Variant *)&local_48);
            CowData<String>::_unref((CowData<String> *)local_40);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00113b8e;
      }
    }
    else {
      ObjectDB::spin_lock._0_1_ = '\0';
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  local_50 = 0;
  local_48 = "\', can\'t call method.";
  local_40[0] = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC76,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00113b8e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

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
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  
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
    lVar4 = 0;
    lVar5 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar4) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar5 = lVar4 * 8;
    if (lVar5 != 0) {
      uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      lVar5 = (uVar6 | uVar6 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_001140b0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar6 = param_1 * 8 - 1;
  uVar6 = uVar6 >> 1 | uVar6;
  uVar6 = uVar6 | uVar6 >> 2;
  uVar6 = uVar6 | uVar6 >> 4;
  uVar6 = uVar6 | uVar6 >> 8;
  uVar6 = uVar6 | uVar6 >> 0x10;
  uVar6 = uVar6 | uVar6 >> 0x20;
  lVar9 = uVar6 + 1;
  if (lVar9 == 0) goto LAB_001140b0;
  uVar8 = param_1;
  if (param_1 <= lVar4) {
    while (lVar4 = *(long *)this, lVar4 != 0) {
      if (*(ulong *)(lVar4 + -8) <= uVar8) {
        if (lVar9 != lVar5) {
          uVar3 = _realloc(this,lVar9);
          if ((int)uVar3 != 0) {
            return uVar3;
          }
          lVar4 = *(long *)this;
          if (lVar4 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar4 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar4 + uVar8 * 8));
      uVar8 = uVar8 + 1;
    }
    goto LAB_00114106;
  }
  if (lVar9 == lVar5) {
LAB_0011402b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00114106:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00113f9f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011402b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar6 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar7 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar7;
    lVar4 = 0;
  }
  memset(puVar7 + lVar4,0,(param_1 - lVar4) * 8);
LAB_00113f9f:
  puVar7[-1] = param_1;
  return 0;
}



/* Vector<String>::remove_at(long) */

void __thiscall Vector<String>::remove_at(Vector<String> *this,long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = *(long *)(this + 8);
  if (param_1 < 0) {
    if (lVar4 != 0) {
      lVar4 = *(long *)(lVar4 + -8);
      goto LAB_001141f9;
    }
  }
  else if (lVar4 != 0) {
    lVar4 = *(long *)(lVar4 + -8);
    if (param_1 < lVar4) {
      CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
      lVar4 = *(long *)(this + 8);
      if (lVar4 == 0) {
        lVar5 = -1;
      }
      else {
        lVar5 = *(long *)(lVar4 + -8) + -1;
        if (param_1 < lVar5) {
          plVar3 = (long *)(lVar4 + param_1 * 8);
          do {
            lVar4 = *plVar3;
            lVar2 = plVar3[1];
            if (lVar4 != lVar2) {
              if (lVar4 != 0) {
                LOCK();
                plVar1 = (long *)(lVar4 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  lVar4 = *plVar3;
                  *plVar3 = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
                lVar2 = plVar3[1];
              }
              *plVar3 = lVar2;
              plVar3[1] = 0;
            }
            param_1 = param_1 + 1;
            plVar3 = plVar3 + 1;
          } while (lVar5 != param_1);
        }
      }
      CowData<String>::resize<false>((CowData<String> *)(this + 8),lVar5);
      return;
    }
    goto LAB_001141f9;
  }
  lVar4 = 0;
LAB_001141f9:
  _err_print_index_error
            ("remove_at","./core/templates/cowdata.h",0xe4,param_1,lVar4,"p_index","size()","",false
             ,false);
  return;
}



/* CowData<String>::find(String const&, long) const */

long __thiscall CowData<String>::find(CowData<String> *this,String *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  
  if (param_2 < 0) {
    return -1;
  }
  lVar2 = *(long *)this;
  if ((lVar2 != 0) && (lVar3 = *(long *)(lVar2 + -8), lVar3 != 0)) {
    while (param_2 < lVar3) {
      cVar1 = String::operator==((String *)(lVar2 + param_2 * 8),param_1);
      if (cVar1 != '\0') {
        return param_2;
      }
      lVar2 = *(long *)this;
      param_2 = param_2 + 1;
      if (lVar2 == 0) {
        return -1;
      }
      lVar3 = *(long *)(lVar2 + -8);
    }
  }
  return -1;
}



/* WARNING: Removing unreachable block (ram,0x001143f8) */
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
  local_c0[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
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



/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long *plVar3;
  undefined4 in_register_00000014;
  long *plVar4;
  int in_R8D;
  undefined4 *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_48 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC76,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00114730;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)();
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
LAB_00114730:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  Variant *pVVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (Variant **)0x0) && (param_2[1] != (Variant *)0x0)) &&
     (param_2[1][0x2e] != (Variant)0x0)) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (Variant *)0x0) {
      pVVar1 = param_2[0x23];
      if (pVVar1 == (Variant *)0x0) {
        pVVar1 = (Variant *)(**(code **)(*param_2 + 0x40))(param_2);
      }
    }
    else {
      pVVar1 = param_2[1] + 0x20;
    }
    if (local_48 == *(char **)pVVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x160,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00114b3f;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001149e6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00114b3f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<>::ptrcall(Object *param_1,void **param_2,void *param_3)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_2 != (void **)0x0) && (param_2[1] != (void *)0x0)) &&
     (*(char *)((long)param_2[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_1 + 0x18));
    if (param_2[1] == (void *)0x0) {
      plVar1 = (long *)param_2[0x23];
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)((long)*param_2 + 0x40))(param_2);
      }
    }
    else {
      plVar1 = (long *)((long)param_2[1] + 0x20);
    }
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_40 = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x16b,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_00114cff;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00114ba6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_00114cff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* LocalizationEditor::_notification(int) */

void LocalizationEditor::_GLOBAL__sub_I__notification(void)

{
  undefined8 uStack_8;
  
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
  if (ItemList::base_property_helper == '\0') {
    ItemList::base_property_helper = '\x01';
    ItemList::base_property_helper._64_8_ = 0;
    ItemList::base_property_helper._0_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._24_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._40_16_ = (undefined1  [16])0x0;
    ItemList::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,ItemList::base_property_helper,
                 &__dso_handle);
  }
  if (OptionButton::base_property_helper == '\0') {
    OptionButton::base_property_helper = '\x01';
    OptionButton::base_property_helper._64_8_ = 0;
    OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    OptionButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
                 &__dso_handle);
  }
  if (MenuButton::base_property_helper == '\0') {
    MenuButton::base_property_helper = '\x01';
    MenuButton::base_property_helper._64_8_ = 0;
    MenuButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
    MenuButton::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,MenuButton::base_property_helper,
                 &__dso_handle);
  }
  if (EditorFileDialog::base_property_helper == '\0') {
    EditorFileDialog::base_property_helper = '\x01';
    EditorFileDialog::base_property_helper._64_8_ = 0;
    EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
    EditorFileDialog::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
                 &__dso_handle);
  }
  if (TabBar::base_property_helper != '\0') {
    return;
  }
  TabBar::base_property_helper = 1;
  TabBar::base_property_helper._64_8_ = 0;
  TabBar::base_property_helper._56_8_ = 2;
  TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
  TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle,
               uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

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
/* List<Variant, DefaultAllocator>::~List() */

void __thiscall List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* LocalizationEditor::~LocalizationEditor() */

void __thiscall LocalizationEditor::~LocalizationEditor(LocalizationEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<LocalizationEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,Object*,int,int,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<LocalizationEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<LocalizationEditor, void, String const&, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<LocalizationEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<LocalizationEditor, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,Vector<String>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<LocalizationEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LocalizationEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LocalizationEditor,void,bool> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}




