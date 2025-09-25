/* EditorLog::_meta_clicked(String const&) */

void __thiscall EditorLog::_meta_clicked(EditorLog *this,String *param_1)

{
  long *plVar1;
  
  plVar1 = (long *)OS::get_singleton();
                    /* WARNING: Could not recover jumptable at 0x0010001e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x150))(plVar1,param_1);
  return;
}



/* EditorLog::_set_search_visible(bool) */

void __thiscall EditorLog::_set_search_visible(EditorLog *this,bool param_1)

{
  EditorLog EVar1;
  
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xac8),0));
  if (param_1) {
    Control::grab_focus();
    EVar1 = this[0xad8];
  }
  else {
    EVar1 = this[0xad8];
  }
  if (EVar1 != (EditorLog)0x0) {
    return;
  }
  Timer::start(_LC4);
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



/* EditorLog::_start_state_save_timer() */

void __thiscall EditorLog::_start_state_save_timer(EditorLog *this)

{
  if (this[0xad8] != (EditorLog)0x0) {
    return;
  }
  Timer::start(_LC4);
  return;
}



/* EditorLog::set_tool_button(Button*) */

void __thiscall EditorLog::set_tool_button(EditorLog *this,Button *param_1)

{
  *(Button **)(this + 0xad0) = param_1;
  return;
}



/* EditorLog::register_undo_redo(UndoRedo*) */

void __thiscall EditorLog::register_undo_redo(EditorLog *this,UndoRedo *param_1)

{
  UndoRedo::set_commit_notify_callback((_func_void_void_ptr_String_ptr *)param_1,_undo_redo_cbk);
  return;
}



/* EditorLog::_reset_message_counts() */

void __thiscall EditorLog::_reset_message_counts(EditorLog *this)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  String *pSVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  for (puVar2 = *(undefined8 **)(this + 0xa80); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    puVar3 = (undefined4 *)puVar2[3];
    *puVar3 = 0;
    pSVar4 = *(String **)(puVar3 + 4);
    itos((long)&local_28);
    Button::set_text(pSVar4);
    lVar5 = local_28;
    if (local_28 != 0) {
      LOCK();
      plVar1 = (long *)(local_28 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_28 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorLog::deinit() */

void __thiscall EditorLog::deinit(EditorLog *this)

{
  remove_error_handler((ErrorHandlerList *)(this + 0xae8));
  return;
}



/* EditorLog::_save_state() */

void __thiscall EditorLog::_save_state(EditorLog *this)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  char *pcVar4;
  bool bVar5;
  char cVar6;
  long *plVar7;
  long in_FS_OFFSET;
  Object *local_98;
  String *local_88;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = (String *)0x0;
  Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_88);
  pSVar2 = local_88;
  local_98 = (Object *)local_88;
  EditorPaths::get_project_settings_dir();
  local_68 = "editor_layout.cfg";
  local_70 = 0;
  local_60 = 0x11;
  String::parse_latin1((StrRange *)&local_70);
  String::path_join((String *)&local_68);
  ConfigFile::load(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref(local_78);
  local_80 = 0;
  local_68 = "editor_log";
  local_60 = 10;
  String::parse_latin1((StrRange *)&local_80);
  plVar7 = *(long **)(this + 0xa80);
  if (plVar7 != (long *)0x0) {
    do {
      Variant::Variant((Variant *)local_58,*(bool *)(plVar7[3] + 4));
      itos((long)&local_70);
      operator+((char *)&local_68,(String *)"log_filter_");
      ConfigFile::set_value(pSVar2,(String *)&local_80,(Variant *)&local_68);
      pcVar4 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
        }
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
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      plVar7 = (long *)*plVar7;
    } while (plVar7 != (long *)0x0);
    local_98 = (Object *)local_88;
  }
  Variant::Variant((Variant *)local_58,(bool)this[0xab8]);
  local_68 = "collapse";
  local_70 = 0;
  local_60 = 8;
  String::parse_latin1((StrRange *)&local_70);
  ConfigFile::set_value(pSVar2,(String *)&local_80,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  bVar5 = (bool)CanvasItem::is_visible();
  Variant::Variant((Variant *)local_58,bVar5);
  local_68 = "show_search";
  local_70 = 0;
  local_60 = 0xb;
  String::parse_latin1((StrRange *)&local_70);
  ConfigFile::set_value(pSVar2,(String *)&local_80,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  EditorPaths::get_project_settings_dir();
  local_68 = "editor_layout.cfg";
  local_70 = 0;
  local_60 = 0x11;
  String::parse_latin1((StrRange *)&local_70);
  String::path_join((String *)&local_68);
  ConfigFile::save(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (((local_98 == (Object *)0x0) || (cVar6 = RefCounted::unreference(), cVar6 == '\0')) ||
     (cVar6 = predelete_handler(local_98), cVar6 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)local_98 + 0x140))(local_98);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(local_98,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorLog::_load_state() */

void __thiscall EditorLog::_load_state(EditorLog *this)

{
  long *plVar1;
  long lVar2;
  String *pSVar3;
  char *pcVar4;
  bool bVar5;
  EditorLog EVar6;
  char cVar7;
  String *pSVar8;
  long *plVar9;
  long in_FS_OFFSET;
  Variant *local_d0;
  String *local_a0;
  undefined8 local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xad8] = (EditorLog)0x1;
  local_a0 = (String *)0x0;
  Ref<ConfigFile>::instantiate<>((Ref<ConfigFile> *)&local_a0);
  pSVar3 = local_a0;
  EditorPaths::get_project_settings_dir();
  local_88 = "editor_layout.cfg";
  local_90 = 0;
  local_80 = 0x11;
  String::parse_latin1((StrRange *)&local_90);
  String::path_join((String *)&local_88);
  ConfigFile::load(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  local_98 = 0;
  local_88 = "editor_log";
  local_80 = 10;
  String::parse_latin1((StrRange *)&local_98);
  plVar9 = *(long **)(this + 0xa80);
  pSVar8 = pSVar3;
  if (plVar9 != (long *)0x0) {
    do {
      lVar2 = plVar9[3];
      Variant::Variant((Variant *)local_78,true);
      itos((long)&local_90);
      operator+((char *)&local_88,(String *)"log_filter_");
      ConfigFile::get_value((String *)local_58,pSVar3,(Variant *)&local_98);
      bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
      BaseButton::set_pressed(SUB81(*(undefined8 *)(lVar2 + 0x10),0));
      *(bool *)(lVar2 + 4) = bVar5;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar4 = local_88;
      if (local_88 != (char *)0x0) {
        LOCK();
        plVar1 = (long *)(local_88 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_88 = (char *)0x0;
          Memory::free_static(pcVar4 + -0x10,false);
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
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      plVar9 = (long *)*plVar9;
      pSVar8 = local_a0;
    } while (plVar9 != (long *)0x0);
  }
  local_d0 = (Variant *)local_78;
  Variant::Variant(local_d0,false);
  local_88 = "collapse";
  local_90 = 0;
  local_80 = 8;
  String::parse_latin1((StrRange *)&local_90);
  ConfigFile::get_value((String *)local_58,pSVar3,(Variant *)&local_98);
  EVar6 = (EditorLog)Variant::operator_cast_to_bool((Variant *)local_58);
  this[0xab8] = EVar6;
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xab0),0));
  Variant::Variant(local_d0,true);
  local_88 = "show_search";
  local_90 = 0;
  local_80 = 0xb;
  String::parse_latin1((StrRange *)&local_90);
  ConfigFile::get_value((String *)local_58,pSVar3,(Variant *)&local_98);
  Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xac8),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xac0),0));
  this[0xad8] = (EditorLog)0x0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (((pSVar8 == (String *)0x0) || (cVar7 = RefCounted::unreference(), cVar7 == '\0')) ||
     (cVar7 = predelete_handler((Object *)pSVar8), cVar7 == '\0')) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    (**(code **)(*(long *)pSVar8 + 0x140))(pSVar8);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Memory::free_static(pSVar8,false);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorLog::_copy_request() */

void EditorLog::_copy_request(void)

{
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  RichTextLabel::get_selected_text();
  if ((local_30 == 0) || (*(uint *)(local_30 + -8) < 2)) {
    RichTextLabel::get_parsed_text();
    if (local_30 != local_28) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
      local_30 = local_28;
      local_28 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    if ((local_30 == 0) || (*(uint *)(local_30 + -8) < 2)) goto LAB_00100ca6;
  }
  (**(code **)(*DisplayServer::singleton + 0x3b0))
            (DisplayServer::singleton,(CowData<char32_t> *)&local_30);
LAB_00100ca6:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_30);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorLog::_add_log_line(EditorLog::LogMessage&, bool) [clone .part.0] */

void __thiscall EditorLog::_add_log_line(EditorLog *this,LogMessage *param_1,bool param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  String *pSVar5;
  long in_FS_OFFSET;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2) {
    uVar1 = *(undefined8 *)(this + 0xa98);
    cVar2 = RichTextLabel::get_paragraph_count();
    RichTextLabel::remove_paragraph((int)uVar1,(bool)(cVar2 + -2));
    iVar3 = *(int *)(param_1 + 8);
    pSVar5 = *(String **)(this + 0xa98);
    if (iVar3 != 3) goto LAB_00100d31;
LAB_00101017:
    RichTextLabel::push_color((Color *)pSVar5);
    local_88 = 0;
    if ((*(long *)(this + 0xa38) != 0) &&
       (local_88 = *(long *)(this + 0xa38), cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_88 = 0;
    }
    local_50 = (undefined1  [16])0x0;
    local_80 = 0;
    local_58 = 0;
    local_68 = 0;
    local_60 = 0;
    local_78 = _LC38;
    uStack_74 = _LC38;
    uStack_70 = _LC38;
    uStack_6c = _LC38;
    RichTextLabel::add_image
              (*(undefined8 *)(this + 0xa98),&local_88,0,0,&local_78,5,&local_68,&local_58,0,
               (CowData<char32_t> *)&local_80,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    RichTextLabel::push_bold();
    pSVar5 = *(String **)(this + 0xa98);
    pcVar4 = " WARNING: ";
  }
  else {
    iVar3 = *(int *)(param_1 + 8);
    pSVar5 = *(String **)(this + 0xa98);
    if (iVar3 == 3) goto LAB_00101017;
LAB_00100d31:
    if (iVar3 == 4) {
      RichTextLabel::push_color((Color *)pSVar5);
      pSVar5 = *(String **)(this + 0xa98);
      goto LAB_00100d43;
    }
    if (iVar3 != 1) goto LAB_00100d43;
    RichTextLabel::push_color((Color *)pSVar5);
    local_88 = 0;
    if ((*(long *)(this + 0xa20) != 0) &&
       (local_88 = *(long *)(this + 0xa20), cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_88 = 0;
    }
    local_50 = (undefined1  [16])0x0;
    local_80 = 0;
    local_58 = 0;
    local_68 = 0;
    local_60 = 0;
    local_78 = _LC38;
    uStack_74 = _LC38;
    uStack_70 = _LC38;
    uStack_6c = _LC38;
    RichTextLabel::add_image
              (*(undefined8 *)(this + 0xa98),&local_88,0,0,&local_78,5,&local_68,&local_58,0,
               (CowData<char32_t> *)&local_80,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    RichTextLabel::push_bold();
    pSVar5 = *(String **)(this + 0xa98);
    pcVar4 = " ERROR: ";
  }
  local_80 = 0;
  String::parse_latin1((String *)&local_80,pcVar4);
  RichTextLabel::add_text(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  RichTextLabel::pop();
  Button::set_button_icon(*(Ref **)(this + 0xad0));
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_88);
  pSVar5 = *(String **)(this + 0xa98);
LAB_00100d43:
  if ((this[0xab8] == (EditorLog)0x0) || (*(int *)(param_1 + 0xc) < 2)) {
    iVar3 = *(int *)(param_1 + 8);
  }
  else {
    RichTextLabel::push_bold();
    pSVar5 = *(String **)(this + 0xa98);
    itos((long)&local_88);
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"(%s) ");
    vformat<String>((CowData<char32_t> *)&local_80,(String *)&local_90,
                    (CowData<char32_t> *)&local_88);
    RichTextLabel::add_text(pSVar5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    RichTextLabel::pop();
    iVar3 = *(int *)(param_1 + 8);
    pSVar5 = *(String **)(this + 0xa98);
  }
  if (iVar3 == 2) {
    RichTextLabel::append_text(pSVar5);
  }
  else {
    RichTextLabel::add_text(pSVar5);
  }
  if ((param_1[0x10] != (LogMessage)0x0) || (*(int *)(param_1 + 8) != 2)) {
    RichTextLabel::pop_all();
  }
  RichTextLabel::add_newline();
  if ((param_2) && (iVar3 = RichTextLabel::get_pending_paragraphs(), iVar3 < 100)) {
    RichTextLabel::wait_until_finished();
  }
  while (iVar3 = RichTextLabel::get_paragraph_count(), *(int *)(this + 0xa50) + 1 < iVar3) {
    RichTextLabel::remove_paragraph((int)*(undefined8 *)(this + 0xa98),false);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorLog::_update_theme() */

void EditorLog::_update_theme(void)

{
  HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
  *this;
  StringName *pSVar1;
  Ref *pRVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  StringName *in_RDI;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  Object *local_a0;
  Object *local_98;
  Object *local_90;
  Object *local_88;
  Object *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  undefined8 local_68 [2];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (_update_theme()::{lambda()#1}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#1}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#1}::operator()()::sname);
    }
  }
  Control::get_theme_font((StringName *)&local_a0,in_RDI);
  if (local_a0 != (Object *)0x0) {
    pSVar1 = *(StringName **)(in_RDI + 0xa98);
    StringName::StringName((StringName *)&local_70,"normal_font",false);
    Control::add_theme_font_override(pSVar1,(Ref *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  if (_update_theme()::{lambda()#2}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#2}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#2}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#2}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#2}::operator()()::sname);
    }
  }
  Control::get_theme_font((StringName *)&local_98,in_RDI);
  if (local_98 != (Object *)0x0) {
    pSVar1 = *(StringName **)(in_RDI + 0xa98);
    StringName::StringName((StringName *)&local_70,"bold_font",false);
    Control::add_theme_font_override(pSVar1,(Ref *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  if (_update_theme()::{lambda()#3}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#3}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#3}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#3}::operator()()::sname);
    }
  }
  Control::get_theme_font((StringName *)&local_90,in_RDI);
  if (local_90 != (Object *)0x0) {
    pSVar1 = *(StringName **)(in_RDI + 0xa98);
    StringName::StringName((StringName *)&local_70,"italics_font",false);
    Control::add_theme_font_override(pSVar1,(Ref *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  if (_update_theme()::{lambda()#4}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#4}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#4}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#4}::operator()()::sname);
    }
  }
  Control::get_theme_font((StringName *)&local_88,in_RDI);
  if (local_88 != (Object *)0x0) {
    pSVar1 = *(StringName **)(in_RDI + 0xa98);
    StringName::StringName((StringName *)&local_70,"bold_italics_font",false);
    Control::add_theme_font_override(pSVar1,(Ref *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  if (_update_theme()::{lambda()#5}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#5}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#5}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#5}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#5}::operator()()::sname);
    }
  }
  Control::get_theme_font((StringName *)&local_80,in_RDI);
  if (local_80 != (Object *)0x0) {
    pSVar1 = *(StringName **)(in_RDI + 0xa98);
    StringName::StringName((StringName *)&local_70,"mono_font",false);
    Control::add_theme_font_override(pSVar1,(Ref *)&local_70);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
  }
  pSVar1 = *(StringName **)(in_RDI + 0xa98);
  StringName::StringName((StringName *)&local_70,"text_highlight_h_padding",false);
  iVar7 = (int)(StringName *)&local_70;
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(in_RDI + 0xa98);
  StringName::StringName((StringName *)&local_70,"text_highlight_v_padding",false);
  Control::add_theme_constant_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  if (_update_theme()::{lambda()#6}::operator()()::sname == '\0') {
    iVar8 = __cxa_guard_acquire(&_update_theme()::{lambda()#6}::operator()()::sname);
    if (iVar8 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#6}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#6}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#6}::operator()()::sname);
    }
  }
  Control::get_theme_font_size
            (in_RDI,(StringName *)&_update_theme()::{lambda()#6}::operator()()::sname);
  Control::begin_bulk_theme_override();
  pSVar1 = *(StringName **)(in_RDI + 0xa98);
  StringName::StringName((StringName *)&local_70,"normal_font_size",false);
  Control::add_theme_font_size_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(in_RDI + 0xa98);
  StringName::StringName((StringName *)&local_70,"bold_font_size",false);
  Control::add_theme_font_size_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(in_RDI + 0xa98);
  StringName::StringName((StringName *)&local_70,"italics_font_size",false);
  Control::add_theme_font_size_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  pSVar1 = *(StringName **)(in_RDI + 0xa98);
  StringName::StringName((StringName *)&local_70,"mono_font_size",false);
  Control::add_theme_font_size_override(pSVar1,iVar7);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  this = (HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
          *)(in_RDI + 0xa68);
  Control::end_bulk_theme_override();
  local_78 = 0;
  plVar9 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                   ::operator[](this,(StringName *)&local_78);
  pRVar2 = *(Ref **)(*plVar9 + 0x10);
  if (_update_theme()::{lambda()#7}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#7}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#7}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#7}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#7}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  local_78 = 1;
  plVar9 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                   ::operator[](this,(StringName *)&local_78);
  pRVar2 = *(Ref **)(*plVar9 + 0x10);
  if (_update_theme()::{lambda()#8}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#8}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#8}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#8}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#8}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  local_78 = 3;
  plVar9 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                   ::operator[](this,(StringName *)&local_78);
  pRVar2 = *(Ref **)(*plVar9 + 0x10);
  if (_update_theme()::{lambda()#9}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#9}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#9}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#9}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#9}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  local_78 = 4;
  plVar9 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                   ::operator[](this,(StringName *)&local_78);
  pRVar2 = *(Ref **)(*plVar9 + 0x10);
  if (_update_theme()::{lambda()#10}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#10}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#10}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#10}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#10}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  local_78 = 0;
  plVar9 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                   ::operator[](this,(StringName *)&local_78);
  pSVar1 = *(StringName **)(*plVar9 + 0x10);
  StringName::StringName((StringName *)&local_70,"EditorLogFilterButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  local_78 = 1;
  plVar9 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                   ::operator[](this,(StringName *)&local_78);
  pSVar1 = *(StringName **)(*plVar9 + 0x10);
  StringName::StringName((StringName *)&local_70,"EditorLogFilterButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  local_78 = 3;
  plVar9 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                   ::operator[](this,(StringName *)&local_78);
  pSVar1 = *(StringName **)(*plVar9 + 0x10);
  StringName::StringName((StringName *)&local_70,"EditorLogFilterButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  local_78 = 4;
  plVar9 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                   ::operator[](this,(StringName *)&local_78);
  pSVar1 = *(StringName **)(*plVar9 + 0x10);
  StringName::StringName((StringName *)&local_70,"EditorLogFilterButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  pRVar2 = *(Ref **)(in_RDI + 0xaa0);
  if (_update_theme()::{lambda()#11}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#11}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#11}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#11}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#11}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(in_RDI + 0xaa8);
  if (_update_theme()::{lambda()#12}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#12}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#12}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#12}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#12}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(in_RDI + 0xab0);
  if (_update_theme()::{lambda()#13}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#13}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#13}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#13}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#13}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(in_RDI + 0xac0);
  if (_update_theme()::{lambda()#14}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#14}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#14}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#14}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#14}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  Button::set_button_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  pRVar2 = *(Ref **)(in_RDI + 0xac8);
  if (_update_theme()::{lambda()#15}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#15}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#15}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#15}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#15}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_70);
  LineEdit::set_right_icon(pRVar2);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  if (_update_theme()::{lambda()#16}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#16}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#16}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#16}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#16}::operator()()::sname);
    }
  }
  uVar4 = Control::get_theme_color
                    (in_RDI,(StringName *)&_update_theme()::{lambda()#16}::operator()()::sname);
  *(undefined8 *)(in_RDI + 0xa10) = uVar4;
  *(undefined8 *)(in_RDI + 0xa18) = in_XMM1_Qa;
  if (_update_theme()::{lambda()#17}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#17}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#17}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#17}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#17}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_78);
  lVar5 = CONCAT44(uStack_74,local_78);
  lVar3 = *(long *)(in_RDI + 0xa20);
  if (lVar5 != lVar3) {
    *(long *)(in_RDI + 0xa20) = lVar5;
    local_70 = lVar3;
    if (lVar5 != 0) {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        *(undefined8 *)(in_RDI + 0xa20) = 0;
      }
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
  if (_update_theme()::{lambda()#18}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#18}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#18}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#18}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#18}::operator()()::sname);
    }
  }
  uVar4 = Control::get_theme_color
                    (in_RDI,(StringName *)&_update_theme()::{lambda()#18}::operator()()::sname);
  *(undefined8 *)(in_RDI + 0xa28) = uVar4;
  *(undefined8 *)(in_RDI + 0xa30) = in_XMM1_Qa;
  if (_update_theme()::{lambda()#19}::operator()()::sname == '\0') {
    iVar7 = __cxa_guard_acquire(&_update_theme()::{lambda()#19}::operator()()::sname);
    if (iVar7 != 0) {
      _scs_create((char *)&_update_theme()::{lambda()#19}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_update_theme()::{lambda()#19}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_theme()::{lambda()#19}::operator()()::sname);
    }
  }
  Control::get_editor_theme_icon((StringName *)&local_78);
  lVar5 = CONCAT44(uStack_74,local_78);
  lVar3 = *(long *)(in_RDI + 0xa38);
  if (lVar5 != lVar3) {
    *(long *)(in_RDI + 0xa38) = lVar5;
    local_70 = lVar3;
    if (lVar5 != 0) {
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        *(undefined8 *)(in_RDI + 0xa38) = 0;
      }
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_70);
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
  local_58 = __LC38;
  uStack_50 = _UNK_0010f478;
  local_68[0] = Control::get_theme_color(in_RDI,(StringName *)(SceneStringNames::singleton + 0xb0));
  uVar4 = Color::operator*((Color *)local_68,(Color *)&local_58);
  *(undefined8 *)(in_RDI + 0xa40) = uVar4;
  *(undefined8 *)(in_RDI + 0xa48) = in_XMM1_Qa;
  if (local_80 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_80);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)local_80 + 0x140))(local_80);
        Memory::free_static(local_80,false);
      }
    }
  }
  if (local_88 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_88);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)local_88 + 0x140))(local_88);
        Memory::free_static(local_88,false);
      }
    }
  }
  if (local_90 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_90);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)local_90 + 0x140))(local_90);
        Memory::free_static(local_90,false);
      }
    }
  }
  if (local_98 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_98);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)local_98 + 0x140))(local_98);
        Memory::free_static(local_98,false);
      }
    }
  }
  if (local_a0 != (Object *)0x0) {
    cVar6 = RefCounted::unreference();
    if (cVar6 != '\0') {
      cVar6 = predelete_handler(local_a0);
      if (cVar6 != '\0') {
        (**(code **)(*(long *)local_a0 + 0x140))(local_a0);
        Memory::free_static(local_a0,false);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorLog::_check_display_message(EditorLog::LogMessage&) */

byte __thiscall EditorLog::_check_display_message(EditorLog *this,LogMessage *param_1)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  byte bVar4;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  plVar3 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                   ::operator[]((HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                                 *)(this + 0xa68),param_1 + 8);
  bVar4 = *(byte *)(*plVar3 + 4);
  LineEdit::get_text();
  if (local_38 != 0) {
    if (1 < *(uint *)(local_38 + -8)) {
      iVar2 = String::findn((String *)param_1,(int)&local_38);
      bVar4 = bVar4 & iVar2 != -1;
      if (local_38 == 0) goto LAB_00102425;
    }
    lVar1 = local_38;
    LOCK();
    plVar3 = (long *)(local_38 + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_38 = 0;
      Memory::free_static((void *)(lVar1 + -0x10),false);
    }
  }
LAB_00102425:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return bVar4;
}



/* EditorLog::_add_log_line(EditorLog::LogMessage&, bool) */

void __thiscall EditorLog::_add_log_line(EditorLog *this,LogMessage *param_1,bool param_2)

{
  char cVar1;
  
  if (((byte)this[0x2fa] & 0x40) == 0) {
    return;
  }
  cVar1 = RichTextLabel::is_updating();
  if (cVar1 == '\0') {
    cVar1 = _check_display_message(this,param_1);
    if (cVar1 != '\0') {
      _add_log_line(this,param_1,param_2);
      return;
    }
  }
  return;
}



/* EditorLog::_rebuild_log() [clone .part.0] */

void __thiscall EditorLog::_rebuild_log(EditorLog *this)

{
  long *plVar1;
  CowData *pCVar2;
  code *pcVar3;
  char cVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  long in_FS_OFFSET;
  ulong local_60;
  long local_58;
  undefined8 local_50;
  CowData local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  RichTextLabel::clear();
  lVar5 = *(long *)(this + 0xa60);
  if (lVar5 == 0) {
    local_60 = 0xffffffffffffffff;
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar5 + -8);
    uVar8 = (int)lVar7 - 1;
    if ((int)uVar8 < 0) {
      local_60 = (ulong)(int)uVar8;
      iVar6 = 0;
LAB_0010266c:
      lVar9 = (long)(int)uVar8;
      if ((long)local_60 < lVar7) {
        if ((long)local_60 < 0) goto LAB_001027b1;
        do {
          lVar9 = lVar9 + 1;
          local_58 = 0;
          pCVar2 = (CowData *)(lVar5 + -0x18 + lVar9 * 0x18);
          if (*(long *)pCVar2 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar2);
          }
          local_48 = pCVar2[0x10];
          local_50 = *(undefined8 *)(pCVar2 + 8);
          if (this[0xab8] == (EditorLog)0x0) {
            if (iVar6 < *(int *)(pCVar2 + 0xc)) {
              do {
                if (((((byte)this[0x2fa] & 0x40) != 0) &&
                    (cVar4 = RichTextLabel::is_updating(), cVar4 == '\0')) &&
                   (cVar4 = _check_display_message(this,(LogMessage *)&local_58), cVar4 != '\0')) {
                  _add_log_line(this,(LogMessage *)&local_58,false);
                }
                iVar6 = iVar6 + 1;
              } while (iVar6 < local_50._4_4_);
              iVar6 = 0;
            }
          }
          else if (((((byte)this[0x2fa] & 0x40) != 0) &&
                   (cVar4 = RichTextLabel::is_updating(), cVar4 == '\0')) &&
                  (cVar4 = _check_display_message(this,(LogMessage *)&local_58), cVar4 != '\0')) {
            _add_log_line(this,(LogMessage *)&local_58,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          lVar5 = *(long *)(this + 0xa60);
        } while ((lVar5 != 0) && (lVar9 < *(long *)(lVar5 + -8)));
      }
LAB_00102808:
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      return;
    }
    local_60 = (ulong)uVar8;
    iVar6 = 0;
    while (lVar5 != 0) {
      lVar7 = *(long *)(lVar5 + -8);
      if (lVar7 <= (long)local_60) goto LAB_001027b1;
      local_58 = 0;
      pCVar2 = (CowData *)(lVar5 + local_60 * 0x18);
      if (*(long *)pCVar2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar2);
      }
      local_48 = pCVar2[0x10];
      local_50 = *(undefined8 *)(pCVar2 + 8);
      if (this[0xab8] != (EditorLog)0x0) {
        cVar4 = _check_display_message(this,(LogMessage *)&local_58);
        iVar6 = (iVar6 + 1) - (uint)(cVar4 == '\0');
LAB_00102560:
        iVar10 = *(int *)(this + 0xa50);
        if (iVar6 < iVar10) goto LAB_0010256e;
LAB_00102649:
        iVar6 = iVar6 - iVar10;
LAB_0010264b:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        lVar5 = *(long *)(this + 0xa60);
        if (lVar5 == 0) goto LAB_00102808;
        lVar7 = *(long *)(lVar5 + -8);
        goto LAB_0010266c;
      }
      iVar10 = 0;
      if (*(int *)(pCVar2 + 0xc) < 1) goto LAB_00102560;
      do {
        cVar4 = _check_display_message(this,(LogMessage *)&local_58);
        iVar6 = (iVar6 + 1) - (uint)(cVar4 == '\0');
        iVar10 = iVar10 + 1;
      } while (iVar10 < local_50._4_4_);
      iVar10 = *(int *)(this + 0xa50);
      if (iVar10 <= iVar6) goto LAB_00102649;
LAB_0010256e:
      lVar5 = local_58;
      if (uVar8 == 0) {
        iVar6 = 0;
        goto LAB_0010264b;
      }
      if (local_58 != 0) {
        LOCK();
        plVar1 = (long *)(local_58 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_58 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      uVar8 = uVar8 - 1;
      local_60 = local_60 - 1;
      lVar5 = *(long *)(this + 0xa60);
    }
    lVar7 = 0;
  }
LAB_001027b1:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,local_60,lVar7,"p_index","size()","",false,true
            );
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}



/* EditorLog::_rebuild_log() */

void __thiscall EditorLog::_rebuild_log(EditorLog *this)

{
  if (*(long *)(this + 0xa60) != 0) {
    _rebuild_log(this);
    return;
  }
  return;
}



/* EditorLog::_editor_settings_changed() */

void __thiscall EditorLog::_editor_settings_changed(EditorLog *this)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_60 = 0;
  local_58 = "run/output/max_lines";
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_60);
  _EDITOR_GET((String *)local_48);
  iVar1 = Variant::operator_cast_to_int((Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if ((*(int *)(this + 0xa50) == iVar1) ||
     (*(int *)(this + 0xa50) = iVar1, *(long *)(this + 0xa60) == 0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _rebuild_log(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorLog::_set_collapse(bool) */

void __thiscall EditorLog::_set_collapse(EditorLog *this,bool param_1)

{
  long lVar1;
  
  this[0xab8] = (EditorLog)param_1;
  if (this[0xad8] == (EditorLog)0x0) {
    Timer::start(_LC4);
    lVar1 = *(long *)(this + 0xa60);
  }
  else {
    lVar1 = *(long *)(this + 0xa60);
  }
  if (lVar1 != 0) {
    _rebuild_log(this);
    return;
  }
  return;
}



/* EditorLog::_search_changed(String const&) */

void EditorLog::_search_changed(String *param_1)

{
  if (*(long *)(param_1 + 0xa60) != 0) {
    _rebuild_log((EditorLog *)param_1);
    return;
  }
  return;
}



/* EditorLog::_notification(int) */

void __thiscall EditorLog::_notification(EditorLog *this,int param_1)

{
  if (param_1 == 10) {
    _update_theme();
    _load_state(this);
    return;
  }
  if (param_1 == 0x2d) {
    _update_theme();
    if (*(long *)(this + 0xa60) != 0) {
      _rebuild_log(this);
      return;
    }
  }
  return;
}



/* EditorLog::_set_filter_active(bool, EditorLog::MessageType) */

void __thiscall EditorLog::_set_filter_active(EditorLog *this,undefined1 param_1,undefined4 param_3)

{
  long lVar1;
  long *plVar2;
  undefined4 local_1c;
  
  local_1c = param_3;
  plVar2 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                   ::operator[]((HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                                 *)(this + 0xa68),(MessageType *)&local_1c);
  lVar1 = *plVar2;
  BaseButton::set_pressed(SUB81(*(undefined8 *)(lVar1 + 0x10),0));
  *(undefined1 *)(lVar1 + 4) = param_1;
  if (this[0xad8] == (EditorLog)0x0) {
    Timer::start(_LC4);
  }
  if (*(long *)(this + 0xa60) != 0) {
    _rebuild_log(this);
  }
  return;
}



/* EditorLog::~EditorLog() */

void __thiscall EditorLog::~EditorLog(EditorLog *this)

{
  uint uVar1;
  undefined8 *puVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  void *pvVar6;
  bool bVar7;
  
  puVar2 = *(undefined8 **)(this + 0xa80);
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  for (; puVar2 != (undefined8 *)0x0; puVar2 = (undefined8 *)*puVar2) {
    if (*(int *)(puVar2 + 2) != 2) {
      Memory::free_static((void *)puVar2[3],false);
    }
  }
  pvVar6 = *(void **)(this + 0xa70);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xa94) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa90) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa94) = 0;
        *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
      }
      else {
        lVar5 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa78) + lVar5) != 0) {
            *(int *)(*(long *)(this + 0xa78) + lVar5) = 0;
            Memory::free_static(*(void **)((long)pvVar6 + lVar5 * 2),false);
            pvVar6 = *(void **)(this + 0xa70);
            *(undefined8 *)((long)pvVar6 + lVar5 * 2) = 0;
          }
          lVar5 = lVar5 + 4;
        } while (lVar5 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa94) = 0;
        *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00102b77;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xa78),false);
  }
LAB_00102b77:
  CowData<EditorLog::LogMessage>::_unref((CowData<EditorLog::LogMessage> *)(this + 0xa60));
  if ((*(long *)(this + 0xa38) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    pOVar3 = *(Object **)(this + 0xa38);
    cVar4 = predelete_handler(pOVar3);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  if ((*(long *)(this + 0xa20) != 0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) {
    pOVar3 = *(Object **)(this + 0xa20);
    cVar4 = predelete_handler(pOVar3);
    if (cVar4 != '\0') {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
    }
  }
  bVar7 = StringName::configured != '\0';
  *(code **)this = strlen;
  if ((bVar7) &&
     (((*(long *)(this + 0x9e8) == 0 || (StringName::unref(), StringName::configured != '\0')) &&
      (*(long *)(this + 0x9d0) != 0)))) {
    StringName::unref();
  }
  Control::~Control((Control *)this);
  return;
}



/* EditorLog::~EditorLog() */

void __thiscall EditorLog::~EditorLog(EditorLog *this)

{
  ~EditorLog(this);
  operator_delete(this,0xb00);
  return;
}



/* CowData<EditorLog::LogMessage>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<EditorLog::LogMessage>::_copy_on_write(CowData<EditorLog::LogMessage> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData<char32_t> *this_00;
  ulong uVar4;
  CowData *pCVar5;
  long lVar6;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar4 = 0x10;
  if (lVar1 * 0x18 != 0) {
    uVar4 = lVar1 * 0x18 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    lVar6 = 0;
    *puVar3 = 1;
    puVar3[1] = lVar1;
    this_00 = (CowData<char32_t> *)(puVar3 + 2);
    if (lVar1 != 0) {
      do {
        pCVar5 = (CowData *)(this_00 + *(long *)this + (-0x10 - (long)puVar3));
        *(undefined8 *)this_00 = 0;
        if (*(long *)pCVar5 != 0) {
          CowData<char32_t>::_ref(this_00,pCVar5);
        }
        lVar6 = lVar6 + 1;
        *(undefined4 *)(this_00 + 8) = *(undefined4 *)(pCVar5 + 8);
        *(undefined4 *)(this_00 + 0xc) = *(undefined4 *)(pCVar5 + 0xc);
        this_00[0x10] = *(CowData<char32_t> *)(pCVar5 + 0x10);
        this_00 = this_00 + 0x18;
      } while (lVar1 != lVar6);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* EditorLog::_clear_request() */

void __thiscall EditorLog::_clear_request(EditorLog *this)

{
  Object *pOVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  String *pSVar4;
  Object *pOVar5;
  char cVar6;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  RichTextLabel::clear();
  if ((*(long *)(this + 0xa60) != 0) && (*(long *)(*(long *)(this + 0xa60) + -8) != 0)) {
    CowData<EditorLog::LogMessage>::_unref((CowData<EditorLog::LogMessage> *)(this + 0xa60));
  }
  for (puVar2 = *(undefined8 **)(this + 0xa80); puVar2 != (undefined8 *)0x0;
      puVar2 = (undefined8 *)*puVar2) {
    puVar3 = (undefined4 *)puVar2[3];
    *puVar3 = 0;
    pSVar4 = *(String **)(puVar3 + 4);
    itos((long)&local_38);
    Button::set_text(pSVar4);
    pOVar5 = local_38;
    if (local_38 != (Object *)0x0) {
      LOCK();
      pOVar1 = local_38 + -0x10;
      *(long *)pOVar1 = *(long *)pOVar1 + -1;
      UNLOCK();
      if (*(long *)pOVar1 == 0) {
        local_38 = (Object *)0x0;
        Memory::free_static(pOVar5 + -0x10,false);
      }
    }
  }
  local_38 = (Object *)0x0;
  Button::set_button_icon(*(Ref **)(this + 0xad0));
  if (((local_38 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar5 = local_38, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_38), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorLog::clear() */

void __thiscall EditorLog::clear(EditorLog *this)

{
  _clear_request(this);
  return;
}



/* EditorLog::_process_message(String const&, EditorLog::MessageType, bool) */

void __thiscall
EditorLog::_process_message(EditorLog *this,String *param_1,int param_3,CowData<char32_t> param_4)

{
  LogMessage *pLVar1;
  CowData<char32_t> *this_00;
  EditorLog EVar2;
  int *piVar3;
  String *pSVar4;
  code *pcVar5;
  int iVar6;
  undefined4 uVar7;
  CowData<char32_t> CVar8;
  char cVar9;
  int iVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  LogMessage *pLVar16;
  long in_FS_OFFSET;
  bool bVar17;
  int local_7c;
  long local_78;
  int local_70;
  undefined4 local_6c;
  CowData<char32_t> local_68;
  undefined8 local_58;
  int local_50;
  undefined4 local_4c;
  CowData<char32_t> local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar15 = *(long *)(this + 0xa60);
  local_7c = param_3;
  if (((lVar15 != 0) && (0 < *(long *)(lVar15 + -8))) &&
     (cVar9 = String::operator==((String *)(lVar15 + (*(long *)(lVar15 + -8) * 3 + -3) * 8),param_1)
     , cVar9 != '\0')) {
    lVar15 = *(long *)(this + 0xa60);
    if (lVar15 == 0) {
      lVar13 = 0;
      lVar14 = -1;
LAB_001032da:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar13,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar5 = (code *)invalidInstructionException();
      (*pcVar5)();
    }
    lVar13 = *(long *)(lVar15 + -8);
    lVar14 = lVar13 + -1;
    if (lVar14 < 0) goto LAB_001032da;
    if (*(int *)(lVar15 + 8 + lVar14 * 0x18) == local_7c) {
      CowData<EditorLog::LogMessage>::_copy_on_write
                ((CowData<EditorLog::LogMessage> *)(this + 0xa60));
      EVar2 = this[0xab8];
      pLVar16 = (LogMessage *)(*(long *)(this + 0xa60) + lVar14 * 0x18);
      pLVar1 = pLVar16 + 0xc;
      *(int *)pLVar1 = *(int *)pLVar1 + 1;
      _add_log_line(this,pLVar16,(bool)EVar2);
      goto LAB_00103105;
    }
  }
  local_78 = 0;
  plVar11 = (long *)(*(long *)param_1 + -0x10);
  if (*(long *)param_1 != 0) {
    do {
      lVar15 = *plVar11;
      if (lVar15 == 0) goto LAB_00103002;
      LOCK();
      lVar13 = *plVar11;
      bVar17 = lVar15 == lVar13;
      if (bVar17) {
        *plVar11 = lVar15 + 1;
        lVar13 = lVar15;
      }
      UNLOCK();
    } while (!bVar17);
    if (lVar13 != -1) {
      local_78 = *(long *)param_1;
    }
  }
LAB_00103002:
  local_70 = local_7c;
  local_6c = 1;
  local_68 = param_4;
  if (((byte)this[0x2fa] & 0x40) != 0) {
    cVar9 = RichTextLabel::is_updating();
    if ((cVar9 == '\0') &&
       (cVar9 = _check_display_message(this,(LogMessage *)&local_78), cVar9 != '\0')) {
      _add_log_line(this,(LogMessage *)&local_78,false);
    }
  }
  local_58 = 0;
  if (local_78 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_78);
  }
  CVar8 = local_68;
  uVar7 = local_6c;
  iVar6 = local_70;
  local_50 = local_70;
  local_4c = local_6c;
  local_48 = local_68;
  if (*(long *)(this + 0xa60) == 0) {
    lVar15 = 1;
  }
  else {
    lVar15 = *(long *)(*(long *)(this + 0xa60) + -8) + 1;
  }
  iVar10 = CowData<EditorLog::LogMessage>::resize<false>
                     ((CowData<EditorLog::LogMessage> *)(this + 0xa60),lVar15);
  if (iVar10 == 0) {
    if (*(long *)(this + 0xa60) == 0) {
      lVar13 = -1;
      lVar15 = 0;
    }
    else {
      lVar15 = *(long *)(*(long *)(this + 0xa60) + -8);
      lVar13 = lVar15 + -1;
      if (-1 < lVar13) {
        CowData<EditorLog::LogMessage>::_copy_on_write
                  ((CowData<EditorLog::LogMessage> *)(this + 0xa60));
        this_00 = (CowData<char32_t> *)(*(long *)(this + 0xa60) + lVar13 * 0x18);
        CowData<char32_t>::_ref(this_00,(CowData *)&local_58);
        *(int *)(this_00 + 8) = iVar6;
        *(undefined4 *)(this_00 + 0xc) = uVar7;
        this_00[0x10] = CVar8;
        goto LAB_001030f5;
      }
    }
    _err_print_index_error
              ("set","./core/templates/cowdata.h",0xcf,lVar13,lVar15,"p_index","size()","",false,
               false);
  }
  else {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
  }
LAB_001030f5:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_00103105:
  plVar11 = (long *)HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                    ::operator[]((HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                                  *)(this + 0xa68),(MessageType *)&local_7c);
  piVar3 = (int *)*plVar11;
  puVar12 = (undefined8 *)
            HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
            ::operator[]((HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                          *)(this + 0xa68),(MessageType *)&local_7c);
  pSVar4 = *(String **)(piVar3 + 4);
  *piVar3 = *(int *)*puVar12 + 1;
  itos((long)&local_58);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorLog::add_message(String const&, EditorLog::MessageType) */

void __thiscall EditorLog::add_message(EditorLog *this,bool param_2,undefined4 param_3)

{
  code *pcVar1;
  CowData<char32_t> *pCVar2;
  ulong uVar3;
  long lVar4;
  CowData<char32_t> *pCVar5;
  long lVar6;
  uint uVar7;
  long in_FS_OFFSET;
  bool bVar8;
  char acStack_48 [8];
  CowData<char32_t> *local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  String::split(acStack_48,param_2,0x107bc1);
  if (local_40 != (CowData<char32_t> *)0x0) {
    if (0 < (int)*(undefined8 *)(local_40 + -8)) {
      uVar7 = (int)*(undefined8 *)(local_40 + -8) - 1;
      uVar3 = 0;
      do {
        if (local_40 == (CowData<char32_t> *)0x0) {
          lVar6 = 0;
LAB_001033c0:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,uVar3,lVar6,"p_index","size()","",false
                     ,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        lVar6 = *(long *)(local_40 + -8);
        if (lVar6 <= (long)uVar3) goto LAB_001033c0;
        _process_message(this,local_40 + uVar3 * 8,param_3,uVar7 == (uint)uVar3);
        bVar8 = uVar3 != uVar7;
        uVar3 = uVar3 + 1;
      } while (bVar8);
      if (local_40 == (CowData<char32_t> *)0x0) goto LAB_00103460;
    }
    pCVar2 = local_40;
    LOCK();
    pCVar5 = local_40 + -0x10;
    *(long *)pCVar5 = *(long *)pCVar5 + -1;
    UNLOCK();
    if (*(long *)pCVar5 == 0) {
      if (local_40 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar6 = *(long *)(local_40 + -8);
      lVar4 = 0;
      local_40 = (CowData<char32_t> *)0x0;
      pCVar5 = pCVar2;
      if (lVar6 != 0) {
        do {
          lVar4 = lVar4 + 1;
          CowData<char32_t>::_unref(pCVar5);
          pCVar5 = pCVar5 + 8;
        } while (lVar6 != lVar4);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
LAB_00103460:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorLog::_error_handler(void*, char const*, char const*, int, char const*, char const*, bool,
   ErrorHandlerType) */

void EditorLog::_error_handler
               (EditorLog *param_1,undefined8 param_2,int param_3,undefined8 param_4,int param_5,
               char *param_6,undefined8 param_7,int param_8)

{
  long *plVar1;
  Variant *pVVar2;
  long lVar3;
  undefined8 uVar4;
  Callable *pCVar5;
  long lVar6;
  CallableCustom *this;
  Variant *pVVar7;
  int iVar8;
  long in_FS_OFFSET;
  bool bVar9;
  undefined *local_100;
  String local_f8 [8];
  undefined8 local_f0;
  String local_e8 [8];
  CowData<char32_t> local_e0 [8];
  String local_d8 [8];
  undefined8 local_d0;
  String local_c8 [8];
  undefined *local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_100 = (undefined *)0x0;
  if ((param_6 == (char *)0x0) || (*param_6 == '\0')) {
    String::utf8((char *)&local_c0,param_5);
    local_d0 = 0;
    local_b8 = &_LC97;
    local_b0 = 3;
    String::parse_latin1((StrRange *)&local_d0);
    itos((long)local_e0);
    local_f0 = 0;
    local_b8 = &_LC98;
    local_b0 = 1;
    String::parse_latin1((StrRange *)&local_f0);
    String::utf8((char *)local_f8,param_3);
    String::operator+(local_e8,local_f8);
    String::operator+(local_d8,local_e8);
    String::operator+(local_c8,local_d8);
    String::operator+((String *)&local_b8,local_c8);
    if (local_100 != local_b8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      local_100 = local_b8;
      local_b8 = (undefined *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    CowData<char32_t>::_unref(local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  }
  else {
    String::utf8((char *)&local_b8,(int)param_6);
    if (local_100 != local_b8) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      local_100 = local_b8;
      local_b8 = (undefined *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  }
  iVar8 = (param_8 == 1) + 1 + (uint)(param_8 == 1);
  if (_GLOBAL_OFFSET_TABLE_ != (undefined *)0x0) {
    Thread::caller_id();
  }
  pCVar5 = MessageQueue::main_singleton;
  if (*(long *)(in_FS_OFFSET + lRam00000000001036de) == 1) {
    add_message(param_1,(CowData<char32_t> *)&local_100,iVar8);
  }
  else {
    local_c0 = (undefined *)0x0;
    plVar1 = (long *)(local_100 + -0x10);
    if (local_100 != (undefined *)0x0) {
      do {
        lVar3 = *plVar1;
        if (lVar3 == 0) goto LAB_00103735;
        LOCK();
        lVar6 = *plVar1;
        bVar9 = lVar3 == lVar6;
        if (bVar9) {
          *plVar1 = lVar3 + 1;
          lVar6 = lVar3;
        }
        UNLOCK();
      } while (!bVar9);
      if (lVar6 != -1) {
        local_c0 = local_100;
      }
    }
LAB_00103735:
    this = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this);
    *(EditorLog **)(this + 0x28) = param_1;
    *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this = &PTR_hash_0010ee90;
    *(undefined8 *)(this + 0x40) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x60);
    pVVar7 = (Variant *)local_40;
    *(undefined **)(this + 0x20) = &_LC9;
    *(undefined8 *)(this + 0x30) = uVar4;
    *(code **)(this + 0x38) = add_message;
    *(undefined8 *)(this + 0x10) = 0;
    CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
    *(char **)(this + 0x20) = "EditorLog::add_message";
    Callable::Callable((Callable *)&local_b8,this);
    Variant::Variant(local_88,(String *)&local_c0);
    Variant::Variant(local_70,iVar8);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_a8 = local_88;
    pVStack_a0 = local_70;
    CallQueue::push_callablep(pCVar5,(Variant **)&local_b8,(int)&local_a8,true);
    do {
      pVVar2 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar7 != local_88);
    Callable::~Callable((Callable *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorLog::_undo_redo_cbk(void*, String const&) */

void EditorLog::_undo_redo_cbk(void *param_1,String *param_2)

{
  add_message((EditorLog *)param_1,param_2,4);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorLog::EditorLog() */

void __thiscall EditorLog::EditorLog(EditorLog *this)

{
  EditorLog *pEVar1;
  code *pcVar2;
  undefined8 uVar3;
  Ref *pRVar4;
  String *pSVar5;
  undefined8 uVar6;
  Object *pOVar7;
  char cVar8;
  int iVar9;
  Timer *this_00;
  long *plVar10;
  BoxContainer *pBVar11;
  RichTextLabel *this_01;
  LineEdit *this_02;
  BoxContainer *pBVar12;
  Button *pBVar13;
  HSeparator *pHVar14;
  LogFilter *pLVar15;
  bool bVar16;
  long in_FS_OFFSET;
  float fVar17;
  String local_80 [8];
  Object *local_78;
  ulong local_70;
  undefined8 local_68 [2];
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,false);
  uVar6 = _UNK_0010f488;
  uVar3 = __LC100;
  this[0xa0c] = (EditorLog)0x1;
  *(undefined ***)this = &PTR__initialize_classv_0010eb18;
  *(undefined8 *)(this + 0xa20) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined4 *)(this + 0xa50) = 10000;
  *(undefined8 *)(this + 0xa60) = 0;
  *(undefined8 *)(this + 0xa90) = 2;
  this[0xab8] = (EditorLog)0x0;
  *(undefined8 *)(this + 0xad0) = 0;
  this[0xad8] = (EditorLog)0x0;
  *(undefined8 *)(this + 0xae0) = 0;
  *(undefined8 *)(this + 0xae8) = 0;
  *(undefined8 *)(this + 0xa10) = uVar3;
  *(undefined8 *)(this + 0xa18) = uVar6;
  *(undefined8 *)(this + 0xa28) = uVar3;
  *(undefined8 *)(this + 0xa30) = uVar6;
  *(undefined8 *)(this + 0xa40) = uVar3;
  *(undefined8 *)(this + 0xa48) = uVar6;
  *(undefined1 (*) [16])(this + 0xa70) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
  this_00 = (Timer *)operator_new(0x428,"");
  Timer::Timer(this_00);
  postinitialize_handler((Object *)this_00);
  *(Timer **)(this + 0xae0) = this_00;
  Timer::set_wait_time(_LC101);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xae0),0));
  plVar10 = *(long **)(this + 0xae0);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<EditorLog>
            ((EditorLog *)local_68,(char *)this,(_func_void *)"&EditorLog::_save_state");
  StringName::StringName((StringName *)&local_70,"timeout",false);
  (*pcVar2)(plVar10,(StringName *)&local_70,(EditorLog *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Node::add_child(this,*(undefined8 *)(this + 0xae0),0,0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"run/output/max_lines");
  _EDITOR_GET((String *)local_58);
  iVar9 = Variant::operator_cast_to_int((Variant *)local_58);
  *(int *)(this + 0xa50) = iVar9;
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar10 = (long *)EditorSettings::get_singleton();
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<EditorLog>
            ((EditorLog *)local_68,(char *)this,(_func_void *)"&EditorLog::_editor_settings_changed"
            );
  StringName::StringName((StringName *)&local_70,"settings_changed",false);
  (*pcVar2)(plVar10,(StringName *)&local_70,(EditorLog *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  pBVar11 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar11,true);
  *(undefined ***)pBVar11 = &PTR__initialize_classv_0010e640;
  pBVar11[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar11);
  fVar17 = (float)EditorScale::get_scale();
  local_58[0] = CONCAT44(fVar17 * _LC106._4_4_,fVar17 * (float)_LC106);
  Control::set_custom_minimum_size((Vector2 *)pBVar11);
  Control::set_v_size_flags(pBVar11,3);
  Control::set_h_size_flags(pBVar11,3);
  Node::add_child(this,pBVar11,0,0);
  this_01 = (RichTextLabel *)operator_new(0xcf0,"");
  local_68[0] = 0;
  RichTextLabel::RichTextLabel(this_01,(String *)local_68);
  postinitialize_handler((Object *)this_01);
  *(RichTextLabel **)(this + 0xa98) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  RichTextLabel::set_threaded(SUB81(*(undefined8 *)(this + 0xa98),0));
  RichTextLabel::set_use_bbcode(SUB81(*(undefined8 *)(this + 0xa98),0));
  RichTextLabel::set_scroll_follow(SUB81(*(undefined8 *)(this + 0xa98),0));
  RichTextLabel::set_selection_enabled(SUB81(*(undefined8 *)(this + 0xa98),0));
  RichTextLabel::set_context_menu_enabled(SUB81(*(undefined8 *)(this + 0xa98),0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xa98),1);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa98),3);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa98),3);
  RichTextLabel::set_deselect_on_focus_loss_enabled(SUB81(*(undefined8 *)(this + 0xa98),0));
  plVar10 = *(long **)(this + 0xa98);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<EditorLog,String_const&>
            ((EditorLog *)local_68,(char *)this,(_func_void_String_ptr *)"&EditorLog::_meta_clicked"
            );
  StringName::StringName((StringName *)&local_70,"meta_clicked",false);
  (*pcVar2)(plVar10,(StringName *)&local_70,(EditorLog *)local_68,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar11,*(undefined8 *)(this + 0xa98),0,0);
  this_02 = (LineEdit *)operator_new(0xbb0,"");
  local_68[0] = 0;
  LineEdit::LineEdit(this_02,(String *)local_68);
  postinitialize_handler((Object *)this_02);
  *(LineEdit **)(this + 0xac8) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xac8),3);
  uVar3 = *(undefined8 *)(this + 0xac8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"Filter Messages");
  TTR((String *)&local_78,(String *)&local_70);
  LineEdit::set_placeholder(uVar3,(String *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xac8),0));
  CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xac8),0));
  plVar10 = *(long **)(this + 0xac8);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<EditorLog,String_const&>
            ((EditorLog *)local_68,(char *)this,
             (_func_void_String_ptr *)"&EditorLog::_search_changed");
  (*pcVar2)(plVar10,SceneStringNames::singleton + 0x270,(EditorLog *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar11,*(undefined8 *)(this + 0xac8),0,0);
  pBVar11 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar11,true);
  *(undefined ***)pBVar11 = &PTR__initialize_classv_0010e640;
  pBVar11[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)pBVar11);
  Node::add_child(this,pBVar11,0,0);
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,false);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_0010e2c8;
  postinitialize_handler((Object *)pBVar12);
  Control::set_h_size_flags(pBVar12,4);
  Node::add_child(pBVar11,pBVar12,0,0);
  pBVar13 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar13,(String *)local_68);
  postinitialize_handler((Object *)pBVar13);
  *(Button **)(this + 0xaa0) = pBVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0xaa0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xaa0),0);
  pRVar4 = *(Ref **)(this + 0xaa0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Clear Output");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"editor/clear_output");
  ED_SHORTCUT((String *)&local_78,(StringName *)&local_70,(EditorLog *)local_68,0x500004b,0);
  BaseButton::set_shortcut(pRVar4);
  if (local_78 != (Object *)0x0) {
    cVar8 = RefCounted::unreference();
    pOVar7 = local_78;
    if (cVar8 != '\0') {
      cVar8 = predelete_handler(local_78);
      if (cVar8 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar10 = *(long **)(this + 0xaa0);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<EditorLog>
            ((EditorLog *)local_68,(char *)this,(_func_void *)"&EditorLog::_clear_request");
  (*pcVar2)(plVar10,SceneStringNames::singleton + 0x238,(EditorLog *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xaa0),0,0);
  pBVar13 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar13,(String *)local_68);
  postinitialize_handler((Object *)pBVar13);
  *(Button **)(this + 0xaa8) = pBVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0xaa8));
  Control::set_focus_mode(*(undefined8 *)(this + 0xaa8),0);
  pRVar4 = *(Ref **)(this + 0xaa8);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Copy Selection");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"editor/copy_output");
  ED_SHORTCUT((String *)&local_78,(StringName *)&local_70,(EditorLog *)local_68,0x1000043,0);
  BaseButton::set_shortcut(pRVar4);
  if (local_78 != (Object *)0x0) {
    cVar8 = RefCounted::unreference();
    pOVar7 = local_78;
    if (cVar8 != '\0') {
      cVar8 = predelete_handler(local_78);
      if (cVar8 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_shortcut_context(*(Node **)(this + 0xaa8));
  plVar10 = *(long **)(this + 0xaa8);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<EditorLog>
            ((EditorLog *)local_68,(char *)this,(_func_void *)"&EditorLog::_copy_request");
  (*pcVar2)(plVar10,SceneStringNames::singleton + 0x238,(EditorLog *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xaa8),0,0);
  pHVar14 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(pHVar14);
  postinitialize_handler((Object *)pHVar14);
  Node::add_child(pBVar11,pHVar14,0,0);
  pBVar12 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar12,false);
  pBVar12[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar12 = &PTR__initialize_classv_0010e2c8;
  postinitialize_handler((Object *)pBVar12);
  Control::set_h_size_flags(pBVar12,4);
  Node::add_child(pBVar11,pBVar12,0,0);
  pBVar13 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar13,(String *)local_68);
  postinitialize_handler((Object *)pBVar13);
  *(Button **)(this + 0xab0) = pBVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0xab0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xab0),0);
  pSVar5 = *(String **)(this + 0xab0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_70 = 0;
  String::parse_latin1
            ((String *)&local_70,
             "Collapse duplicate messages into one log entry. Shows number of occurrences.");
  TTR((String *)&local_78,(String *)&local_70);
  Control::set_tooltip_text(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xab0),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xab0),0));
  plVar10 = *(long **)(this + 0xab0);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<EditorLog,bool>
            ((EditorLog *)local_68,(char *)this,(_func_void_bool *)"&EditorLog::_set_collapse");
  (*pcVar2)(plVar10,SceneStringNames::singleton + 0x248,(EditorLog *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xab0),0,0);
  pBVar13 = (Button *)operator_new(0xc10,"");
  local_68[0] = 0;
  Button::Button(pBVar13,(String *)local_68);
  postinitialize_handler((Object *)pBVar13);
  *(Button **)(this + 0xac0) = pBVar13;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_theme_type_variation(*(StringName **)(this + 0xac0));
  Control::set_focus_mode(*(undefined8 *)(this + 0xac0),0);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xac0),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xac0),0));
  pRVar4 = *(Ref **)(this + 0xac0);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Focus Search/Filter Bar");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"editor/open_search");
  ED_SHORTCUT((String *)&local_78,(StringName *)&local_70,(EditorLog *)local_68,0x1000046,0);
  BaseButton::set_shortcut(pRVar4);
  if (local_78 != (Object *)0x0) {
    cVar8 = RefCounted::unreference();
    if (cVar8 != '\0') {
      cVar8 = predelete_handler(local_78);
      if (cVar8 != '\0') {
        (**(code **)(*(long *)local_78 + 0x140))(local_78);
        Memory::free_static(local_78,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_shortcut_context(*(Node **)(this + 0xac0));
  plVar10 = *(long **)(this + 0xac0);
  pcVar2 = *(code **)(*plVar10 + 0x108);
  create_custom_callable_function_pointer<EditorLog,bool>
            ((EditorLog *)local_68,(char *)this,(_func_void_bool *)"&EditorLog::_set_search_visible"
            );
  (*pcVar2)(plVar10,SceneStringNames::singleton + 0x248,(EditorLog *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar12,*(undefined8 *)(this + 0xac0),0,0);
  pHVar14 = (HSeparator *)operator_new(0x9e0,"");
  HSeparator::HSeparator(pHVar14);
  postinitialize_handler((Object *)pHVar14);
  Node::add_child(pBVar11,pHVar14,0,0);
  pLVar15 = (LogFilter *)operator_new(0x18,"");
  *(undefined4 *)pLVar15 = 0;
  pLVar15[4] = (LogFilter)0x1;
  *(undefined4 *)(pLVar15 + 8) = 0;
  *(undefined8 *)(pLVar15 + 0x10) = 0;
  create_custom_callable_function_pointer<EditorLog,bool,EditorLog::MessageType>
            ((EditorLog *)local_68,(char *)this,
             (_func_void_bool_MessageType *)"&EditorLog::_set_filter_active");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"");
  local_78 = (Object *)0x0;
  String::parse_latin1((String *)&local_78,"Toggle visibility of standard output messages.");
  TTR(local_80,(String *)&local_78);
  LogFilter::initialize_button(pLVar15,local_80,(EditorLog *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Callable::~Callable((Callable *)local_68);
  pEVar1 = this + 0xa68;
  Node::add_child(pBVar11,*(undefined8 *)(pLVar15 + 0x10),0,0);
  local_70 = local_70 & 0xffffffff00000000;
  bVar16 = SUB81((StringName *)&local_70,0);
  HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
  ::insert((EditorLog *)local_68,(LogFilter **)pEVar1,bVar16);
  local_70 = CONCAT44(local_70._4_4_,2);
  HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
  ::insert((EditorLog *)local_68,(LogFilter **)pEVar1,bVar16);
  pLVar15 = (LogFilter *)operator_new(0x18,"");
  *(undefined4 *)pLVar15 = 0;
  pLVar15[4] = (LogFilter)0x1;
  *(undefined4 *)(pLVar15 + 8) = 1;
  *(undefined8 *)(pLVar15 + 0x10) = 0;
  create_custom_callable_function_pointer<EditorLog,bool,EditorLog::MessageType>
            ((EditorLog *)local_68,(char *)this,
             (_func_void_bool_MessageType *)"&EditorLog::_set_filter_active");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"");
  local_78 = (Object *)0x0;
  String::parse_latin1((String *)&local_78,"Toggle visibility of errors.");
  TTR(local_80,(String *)&local_78);
  LogFilter::initialize_button(pLVar15,local_80,(EditorLog *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar11,*(undefined8 *)(pLVar15 + 0x10),0,0);
  local_70 = CONCAT44(local_70._4_4_,1);
  HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
  ::insert((EditorLog *)local_68,(LogFilter **)pEVar1,bVar16);
  pLVar15 = (LogFilter *)operator_new(0x18,"");
  *(undefined4 *)pLVar15 = 0;
  pLVar15[4] = (LogFilter)0x1;
  *(undefined4 *)(pLVar15 + 8) = 3;
  *(undefined8 *)(pLVar15 + 0x10) = 0;
  create_custom_callable_function_pointer<EditorLog,bool,EditorLog::MessageType>
            ((EditorLog *)local_68,(char *)this,
             (_func_void_bool_MessageType *)"&EditorLog::_set_filter_active");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"");
  local_78 = (Object *)0x0;
  String::parse_latin1((String *)&local_78,"Toggle visibility of warnings.");
  TTR(local_80,(String *)&local_78);
  LogFilter::initialize_button(pLVar15,local_80,(EditorLog *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar11,*(undefined8 *)(pLVar15 + 0x10),0,0);
  local_70 = CONCAT44(local_70._4_4_,3);
  HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
  ::insert((EditorLog *)local_68,(LogFilter **)pEVar1,bVar16);
  pLVar15 = (LogFilter *)operator_new(0x18,"");
  *(undefined4 *)pLVar15 = 0;
  pLVar15[4] = (LogFilter)0x1;
  *(undefined4 *)(pLVar15 + 8) = 4;
  *(undefined8 *)(pLVar15 + 0x10) = 0;
  create_custom_callable_function_pointer<EditorLog,bool,EditorLog::MessageType>
            ((EditorLog *)local_68,(char *)this,
             (_func_void_bool_MessageType *)"&EditorLog::_set_filter_active");
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"");
  local_78 = (Object *)0x0;
  String::parse_latin1((String *)&local_78,"Toggle visibility of editor messages.");
  TTR(local_80,(String *)&local_78);
  LogFilter::initialize_button(pLVar15,local_80,(EditorLog *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(pBVar11,*(undefined8 *)(pLVar15 + 0x10),0,0);
  local_70 = CONCAT44(local_70._4_4_,4);
  HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
  ::insert((EditorLog *)local_68,(LogFilter **)pEVar1,bVar16);
  local_68[0] = 0;
  String::parse_latin1
            ((String *)local_68,
             "Godot Engine v4.4.1.stable.custom_build (c) 2007-present Juan Linietsky, Ariel Manzur & Godot Contributors."
            );
  add_message(this,(EditorLog *)local_68,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  *(EditorLog **)(this + 0xaf0) = this;
  *(code **)(this + 0xae8) = _error_handler;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    add_error_handler((ErrorHandlerList *)(this + 0xae8));
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



/* RefCounted::is_class_ptr(void*) const */

uint __thiscall RefCounted::is_class_ptr(RefCounted *this,void *param_1)

{
  return (uint)CONCAT71(0x10f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f2,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* ConfigFile::is_class_ptr(void*) const */

uint __thiscall ConfigFile::is_class_ptr(ConfigFile *this,void *param_1)

{
  return (uint)CONCAT71(0x10f2,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f1,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10f2,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
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



/* CallableCustomMethodPointer<EditorLog, void, bool,
   EditorLog::MessageType>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorLog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorLog, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorLog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorLog, void, String const&,
   EditorLog::MessageType>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorLog, void, bool,
   EditorLog::MessageType>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType>::get_argument_count
          (CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorLog, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorLog,void,bool>::get_argument_count
          (CallableCustomMethodPointer<EditorLog,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorLog, void, String const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorLog,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorLog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorLog,void>::get_argument_count
          (CallableCustomMethodPointer<EditorLog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorLog, void, String const&,
   EditorLog::MessageType>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType>::get_argument_count
          (CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorLog, void, String const&,
   EditorLog::MessageType>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorLog, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorLog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorLog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorLog, void, bool,
   EditorLog::MessageType>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType> *this)

{
  operator_delete(this,0x48);
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



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e168;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010e168;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
  return;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113008 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113008 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* EditorLog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorLog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00113008 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113010 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113010 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* EditorLog::_property_can_revertv(StringName const&) const */

undefined8 EditorLog::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00113010 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
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
LAB_00105113:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105113;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010517e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010517e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<EditorLog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorLog,void,String_const&> *this)

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
      goto LAB_001052ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001052ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001052ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorLog, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorLog,void,bool>::get_object
          (CallableCustomMethodPointer<EditorLog,void,bool> *this)

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
      goto LAB_001053ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001053ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001053ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorLog, void, bool, EditorLog::MessageType>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType>::get_object
          (CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType> *this)

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
      goto LAB_001054ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001054ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001054ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorLog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorLog,void>::get_object
          (CallableCustomMethodPointer<EditorLog,void> *this)

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
      goto LAB_001055ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001055ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001055ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorLog, void, String const&, EditorLog::MessageType>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType>::get_object
          (CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType> *this)

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
      goto LAB_001056ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001056ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001056ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorLog::_validate_propertyv(PropertyInfo&) const */

void EditorLog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113018 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00113018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00113018 == Control::_validate_property) {
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
    if ((code *)PTR__set_00113020 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00113020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorLog::_setv(StringName const&, Variant const&) */

undefined8 EditorLog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00113020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105a78) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105ae8) */
/* EditorLog::_getv(StringName const&, Variant&) const */

undefined8 EditorLog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105b58) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00113028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
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
    uVar1 = (uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
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
    uVar1 = (uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* EditorLog::is_class_ptr(void*) const */

ulong EditorLog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x10f2,in_RSI == &HBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x10f2,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x10f2,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
}



/* EditorLog::_get_class_namev() const */

undefined8 * EditorLog::_get_class_namev(void)

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
LAB_00105d13:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105d13;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorLog");
      goto LAB_00105d7e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorLog");
LAB_00105d7e:
  return &_get_class_namev()::_class_name_static;
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
LAB_00105df3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105df3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
      goto LAB_00105e5e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfigFile");
LAB_00105e5e:
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
LAB_00105ee3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105ee3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00105f4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00105f4e:
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
LAB_00105fc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105fc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010602e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010602e:
  return &_get_class_namev()::_class_name_static;
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
      if (StringName::configured == '\0') goto LAB_001060c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001060c0:
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
      if (StringName::configured == '\0') goto LAB_00106120;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00106120:
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
      if (StringName::configured == '\0') goto LAB_00106180;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00106180:
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
      if (StringName::configured == '\0') goto LAB_001061f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001061f0:
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



/* WARNING: Removing unreachable block (ram,0x001063c0) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00113030 != Container::_notification) {
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
  if ((code *)PTR__notification_00113030 == Container::_notification) {
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



/* EditorLog::get_class() const */

void EditorLog::get_class(void)

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
  *(undefined ***)this_00 = &PTR__initialize_classv_0010e9b8;
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
    if (this_00 == (RefCounted *)pOVar5) goto LAB_00106945;
    *(RefCounted **)this = this_00;
    cVar1 = RefCounted::reference();
    if (cVar1 == '\0') {
      *(undefined8 *)this = 0;
    }
    pOVar4 = (Object *)this_00;
    if (((pOVar5 == (Object *)0x0) || (cVar1 = RefCounted::unreference(), cVar1 == '\0')) ||
       (cVar1 = predelete_handler(pOVar5), cVar1 == '\0')) goto LAB_00106945;
  }
  (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
  Memory::free_static(pOVar5,false);
  pOVar4 = (Object *)this_00;
  if (this_00 == (RefCounted *)0x0) {
    return;
  }
LAB_00106945:
  cVar1 = RefCounted::unreference();
  if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar4), cVar1 != '\0')) {
    (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
    Memory::free_static(pOVar4,false);
    return;
  }
  return;
}



/* Callable create_custom_callable_function_pointer<EditorLog>(EditorLog*, char const*, void
   (EditorLog::*)()) */

EditorLog *
create_custom_callable_function_pointer<EditorLog>
          (EditorLog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC9;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010ef20;
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



/* Callable create_custom_callable_function_pointer<EditorLog, String const&>(EditorLog*, char
   const*, void (EditorLog::*)(String const&)) */

EditorLog *
create_custom_callable_function_pointer<EditorLog,String_const&>
          (EditorLog *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC9;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010efb0;
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



/* Callable create_custom_callable_function_pointer<EditorLog, bool>(EditorLog*, char const*, void
   (EditorLog::*)(bool)) */

EditorLog *
create_custom_callable_function_pointer<EditorLog,bool>
          (EditorLog *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC9;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010f040;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<EditorLog, bool,
   EditorLog::MessageType>(EditorLog*, char const*, void (EditorLog::*)(bool,
   EditorLog::MessageType)) */

EditorLog *
create_custom_callable_function_pointer<EditorLog,bool,EditorLog::MessageType>
          (EditorLog *param_1,char *param_2,_func_void_bool_MessageType *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC9;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0010f0d0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_bool_MessageType **)(this + 0x20) = param_3 + 1;
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



/* EditorLog::_initialize_classv() */

void EditorLog::_initialize_classv(void)

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
    if (HBoxContainer::initialize_class()::initialized == '\0') {
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
                if ((code *)PTR__bind_methods_00113048 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00113038 !=
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
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Container");
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
          Container::_bind_methods();
          Container::initialize_class()::initialized = '\x01';
        }
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"BoxContainer");
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
        if ((code *)PTR__bind_methods_00113040 != Container::_bind_methods) {
          BoxContainer::_bind_methods();
        }
        BoxContainer::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "BoxContainer";
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
      HBoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "HBoxContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorLog";
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorLog::LogFilter::initialize_button(String const&, Callable) */

void __thiscall EditorLog::LogFilter::initialize_button(LogFilter *this,String *param_1,int param_3)

{
  char cVar1;
  String *pSVar2;
  long *plVar3;
  code *pcVar4;
  Button *this_00;
  long in_FS_OFFSET;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  Variant *local_88;
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this_00 = (Button *)operator_new(0xc10,"");
  local_98 = (undefined *)0x0;
  Button::Button(this_00,(String *)&local_98);
  postinitialize_handler((Object *)this_00);
  *(Button **)(this + 0x10) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0x10),0));
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0x10),0));
  pSVar2 = *(String **)(this + 0x10);
  itos((long)&local_98);
  Button::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  pSVar2 = *(String **)(this + 0x10);
  local_98 = &_LC9;
  local_a0 = 0;
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  TTR((String *)&local_98,param_1);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  Control::set_focus_mode(*(undefined8 *)(this + 0x10),0);
  plVar3 = *(long **)(this + 0x10);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  Variant::Variant((Variant *)local_78,*(int *)(this + 8));
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)&local_98,param_3);
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
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x248,(CowData<char32_t> *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x001077a8) */
/* String vformat<String>(String const&, String const) */

undefined8 * vformat<String>(undefined8 *param_1,bool *param_2,String *param_3)

{
  char cVar1;
  Variant *this;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,param_3);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,param_2);
  *param_1 = local_b8[0];
  local_b8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  Array::~Array(local_c0);
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



/* CallableCustomMethodPointer<EditorLog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorLog,void>::call
          (CallableCustomMethodPointer<EditorLog,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00107f2f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00107f2f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00107fe0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00107f2f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC33,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107fe0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorLog, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,bool>::call
          (CallableCustomMethodPointer<EditorLog,void,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar7;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar7 = (char)ObjectDB::spin_lock == '\0';
      if (bVar7) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar7) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001081a9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar6[1] == 0) goto LAB_001081a9;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC34;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar7 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108158. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar7);
          return;
        }
        goto LAB_0010825a;
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
LAB_001081a9:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC33,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010825a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorLog, void, bool, EditorLog::MessageType>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType>::call
          (CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  String local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (String)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar7 = (ulong *)((ulong)uVar6 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010844e;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010844e;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC35;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar5 = Variant::operator_cast_to_long(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,1);
        uVar3 = _LC34;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00108427. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8,uVar5 & 0xffffffff);
          return;
        }
        goto LAB_001084ff;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 2;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 2;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010844e:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC33,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001084ff:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorLog, void, String const&, EditorLog::MessageType>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType>::call
          (CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  uint uVar6;
  ulong *puVar7;
  code *pcVar8;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (Variant)0x0;
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
            uVar3 = _LC35;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            uVar5 = Variant::operator_cast_to_long(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC36;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_48);
            (*pcVar8)((long *)(lVar1 + lVar2),local_48,uVar5 & 0xffffffff);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
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
        goto LAB_001085d5;
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
  String::parse_latin1((String *)&local_50,"\', can\'t call method.");
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)local_48,(String *)local_58);
  _err_print_error(&_LC33,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_001085d5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorLog, void, String const&>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&>::call
          (CallableCustomMethodPointer<EditorLog,void,String_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  uint uVar5;
  ulong *puVar6;
  code *pcVar7;
  long in_FS_OFFSET;
  bool bVar8;
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Variant local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38[0] = (Variant)0x0;
      LOCK();
      bVar8 = (char)ObjectDB::spin_lock == '\0';
      if (bVar8) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar8) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar6 = (ulong *)((ulong)uVar5 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar6 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar7 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 2) {
          if (param_2 == 0) {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 1;
          }
          else {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar3 = _LC36;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String(local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),local_38);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010887e;
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
  local_40 = 0;
  String::parse_latin1((String *)&local_40,"\', can\'t call method.");
  uitos((ulong)local_50);
  operator+((char *)local_48,(String *)"Invalid Object id \'");
  String::operator+((String *)local_38,(String *)local_48);
  _err_print_error(&_LC33,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010887e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CanvasItem::is_class(String const&) const */

undefined8 __thiscall CanvasItem::is_class(CanvasItem *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_00108a7f;
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
LAB_00108a7f:
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
    if (cVar6 != '\0') goto LAB_00108b33;
  }
  cVar6 = String::operator==(param_1,"CanvasItem");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00108b33;
    }
    cVar6 = String::operator==(param_1,"Node");
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
                if (lVar5 == 0) goto LAB_00108c93;
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
LAB_00108c93:
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
        if (cVar6 != '\0') goto LAB_00108b33;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar7 = String::operator==(param_1,"Object");
        return uVar7;
      }
      goto LAB_00108d3c;
    }
  }
LAB_00108b33:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108d3c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00108dbf;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_00108dbf:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_00108e73;
  }
  cVar6 = String::operator==(param_1,"Container");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_00108e73;
    }
    cVar6 = String::operator==(param_1,"Control");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar8;
      }
      goto LAB_00108f7e;
    }
  }
LAB_00108e73:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108f7e:
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
    if ((code *)PTR__bind_methods_00113050 != Object::_bind_methods) {
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
      if ((code *)PTR__bind_methods_00113048 != RefCounted::_bind_methods) {
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
    if ((code *)PTR__bind_methods_00113058 != RefCounted::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00113048 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00113038 !=
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
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
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
      if ((code *)PTR__bind_methods_00113040 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00113048 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00113038 !=
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
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Control");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"Container");
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
      if ((code *)PTR__bind_methods_00113040 != Container::_bind_methods) {
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
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x38));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar5 + 0x28) != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
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
        if (pvVar5 == (void *)0x0) goto LAB_0010a046;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010a046:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  int local_60;
  undefined8 local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC13;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC13;
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
      goto LAB_0010a1fc;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a1fc:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
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
      goto LAB_0010a44c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a44c:
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* ConfigFile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall ConfigFile::_get_property_listv(ConfigFile *this,List *param_1,bool param_2)

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
      goto LAB_0010a6b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010a6b1:
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



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010a85f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010a85f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010a913;
  }
  cVar6 = String::operator==(param_1,"RefCounted");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010a913;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar8 = String::operator==(param_1,"Object");
      return uVar8;
    }
  }
  else {
LAB_0010a913:
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
            if (lVar4 == 0) goto LAB_0010aa8f;
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
LAB_0010aa8f:
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
    if (cVar5 != '\0') goto LAB_0010ab43;
  }
  cVar5 = String::operator==(param_1,"ConfigFile");
  if (cVar5 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar7 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar7;
    }
  }
  else {
LAB_0010ab43:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      goto LAB_0010ad11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ad11:
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
  if ((code *)PTR__get_property_list_00113060 != Object::_get_property_list) {
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
      goto LAB_0010afe1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010afe1:
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
  if ((code *)PTR__get_property_list_00113068 != CanvasItem::_get_property_list) {
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
      goto LAB_0010b2b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b2b1:
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
      goto LAB_0010b561;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b561:
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
      goto LAB_0010b811;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010b811:
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



/* EditorLog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorLog::_get_property_listv(EditorLog *this,List *param_1,bool param_2)

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
    HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorLog";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorLog";
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
      goto LAB_0010bac1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010bac1:
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
  StringName::StringName((StringName *)&local_78,"EditorLog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      HBoxContainer::_get_property_listv((HBoxContainer *)this,param_1,true);
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
      goto LAB_0010bd71;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010bd71:
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



/* EditorLog::is_class(String const&) const */

undefined8 __thiscall EditorLog::is_class(EditorLog *this,String *param_1)

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
            if (lVar5 == 0) goto LAB_0010bf1f;
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
LAB_0010bf1f:
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
    if (cVar6 != '\0') goto LAB_0010bfd3;
  }
  cVar6 = String::operator==(param_1,"EditorLog");
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
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar4 + 0x10));
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010bfd3;
    }
    cVar6 = String::operator==(param_1,"HBoxContainer");
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
                if (lVar5 == 0) goto LAB_0010c143;
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
LAB_0010c143:
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
        if (cVar6 != '\0') goto LAB_0010bfd3;
      }
      cVar6 = String::operator==(param_1,"BoxContainer");
      if (cVar6 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar7 = Container::is_class((Container *)this,param_1);
          return uVar7;
        }
        goto LAB_0010c1ec;
      }
    }
  }
LAB_0010bfd3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c1ec:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c26f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010c26f:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010c323;
  }
  cVar6 = String::operator==(param_1,"HBoxContainer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010c323;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0010c42e;
    }
  }
LAB_0010c323:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c42e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  long lVar5;
  char cVar6;
  long lVar7;
  undefined8 uVar8;
  long in_FS_OFFSET;
  bool bVar9;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
    lVar5 = *(long *)(lVar2 + 0x20);
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      pcVar4 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar4 == (char *)0x0) {
        plVar1 = (long *)(*(long *)(lVar5 + 0x10) + -0x10);
        if (*(long *)(lVar5 + 0x10) != 0) {
          do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_0010c4af;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar3 == lVar7;
            if (bVar9) {
              *plVar1 = lVar3 + 1;
              lVar7 = lVar3;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
            local_60 = *(long *)(lVar5 + 0x10);
          }
        }
      }
      else {
        local_50 = strlen(pcVar4);
        local_58 = pcVar4;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
LAB_0010c4af:
    cVar6 = String::operator==(param_1,(String *)&local_60);
    lVar5 = local_60;
    if (local_60 != 0) {
      LOCK();
      plVar1 = (long *)(local_60 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_60 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar6 != '\0') goto LAB_0010c563;
  }
  cVar6 = String::operator==(param_1,"VBoxContainer");
  if (cVar6 == '\0') {
    for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
      lVar5 = *(long *)(lVar2 + 0x20);
      if (lVar5 == 0) {
        local_60 = 0;
      }
      else {
        pcVar4 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar4 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
        else {
          local_50 = strlen(pcVar4);
          local_58 = pcVar4;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 != '\0') goto LAB_0010c563;
    }
    cVar6 = String::operator==(param_1,"BoxContainer");
    if (cVar6 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar8 = Container::is_class((Container *)this,param_1);
        return uVar8;
      }
      goto LAB_0010c66e;
    }
  }
LAB_0010c563:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c66e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Texture2D>::unref() */

void __thiscall Ref<Texture2D>::unref(Ref<Texture2D> *this)

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



/* HashMap<EditorLog::MessageType, EditorLog::LogFilter*, HashMapHasherDefault,
   HashMapComparatorDefault<EditorLog::MessageType>,
   DefaultTypedAllocator<HashMapElement<EditorLog::MessageType, EditorLog::LogFilter*> >
   >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
::_resize_and_rehash
          (HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
           *this,uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  void *pvVar6;
  void *pvVar7;
  void *__s;
  long lVar8;
  long lVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined8 uVar18;
  void *__s_00;
  int iVar19;
  long lVar20;
  uint uVar21;
  ulong uVar22;
  undefined8 uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  uint local_78;
  
  *(undefined4 *)(this + 0x2c) = 0;
  uVar3 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = *(uint *)(hash_table_size_primes + (ulong)param_1 * 4);
  uVar22 = (ulong)uVar21;
  pvVar6 = *(void **)(this + 8);
  pvVar7 = *(void **)(this + 0x10);
  uVar26 = uVar22 * 4;
  uVar25 = uVar22 * 8;
  uVar18 = Memory::alloc_static(uVar26,false);
  *(undefined8 *)(this + 0x10) = uVar18;
  __s_00 = (void *)Memory::alloc_static(uVar25,false);
  *(void **)(this + 8) = __s_00;
  if (uVar21 != 0) {
    __s = *(void **)(this + 0x10);
    if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar26))) {
      uVar26 = 0;
      do {
        *(undefined4 *)((long)__s + uVar26 * 4) = 0;
        *(undefined8 *)((long)__s_00 + uVar26 * 8) = 0;
        uVar26 = uVar26 + 1;
      } while (uVar22 != uVar26);
    }
    else {
      memset(__s,0,uVar26);
      memset(__s_00,0,uVar25);
    }
  }
  if (uVar3 != 0) {
    uVar26 = 0;
    do {
      uVar21 = *(uint *)((long)pvVar7 + uVar26 * 4);
      if (uVar21 != 0) {
        uVar24 = 0;
        lVar8 = *(long *)(this + 0x10);
        uVar4 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar25 = CONCAT44(0,uVar4);
        lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)uVar21 * lVar9;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar20 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar8 + lVar20 * 4);
        iVar19 = SUB164(auVar10 * auVar14,8);
        uVar5 = *puVar1;
        uVar18 = *(undefined8 *)((long)pvVar6 + uVar26 * 8);
        while (uVar5 != 0) {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)uVar5 * lVar9;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar25;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)((uVar4 + iVar19) - SUB164(auVar11 * auVar15,8)) * lVar9;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar25;
          local_78 = SUB164(auVar12 * auVar16,8);
          uVar23 = uVar18;
          if (local_78 < uVar24) {
            *puVar1 = uVar21;
            puVar2 = (undefined8 *)((long)__s_00 + lVar20 * 8);
            uVar23 = *puVar2;
            *puVar2 = uVar18;
            uVar21 = uVar5;
            uVar24 = local_78;
          }
          uVar24 = uVar24 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(iVar19 + 1) * lVar9;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar25;
          lVar20 = SUB168(auVar13 * auVar17,8);
          puVar1 = (uint *)(lVar8 + lVar20 * 4);
          iVar19 = SUB164(auVar13 * auVar17,8);
          uVar18 = uVar23;
          uVar5 = *puVar1;
        }
        *(undefined8 *)((long)__s_00 + lVar20 * 8) = uVar18;
        *puVar1 = uVar21;
        *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
      }
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar3);
    Memory::free_static(pvVar6,false);
    Memory::free_static(pvVar7,false);
    return;
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<EditorLog::MessageType, EditorLog::LogFilter*, HashMapHasherDefault,
   HashMapComparatorDefault<EditorLog::MessageType>,
   DefaultTypedAllocator<HashMapElement<EditorLog::MessageType, EditorLog::LogFilter*> >
   >::operator[](EditorLog::MessageType const&) */

undefined1  [16] __thiscall
HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
::operator[](HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
             *this,MessageType *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *__s;
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
  undefined1 (*pauVar29) [16];
  uint uVar30;
  uint uVar31;
  uint uVar32;
  undefined1 (*pauVar33) [16];
  undefined8 uVar34;
  void *__s_00;
  ulong uVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  ulong uVar39;
  int iVar40;
  uint uVar41;
  ulong uVar42;
  long lVar43;
  uint uVar44;
  uint uVar45;
  undefined1 (*pauVar46) [16];
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  long lStack_70;
  uint local_68;
  
  uVar39 = (ulong)*(uint *)(this + 0x28);
  __s_00 = *(void **)(this + 8);
  uVar32 = *(uint *)param_1;
  uVar31 = *(uint *)(hash_table_size_primes + uVar39 * 4);
  uVar42 = CONCAT44(0,uVar31);
  if (__s_00 == (void *)0x0) {
    uVar39 = uVar42 * 4;
    uVar3 = uVar42 * 8;
    uVar34 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar34;
    lStack_70 = 0x10ce00;
    __s_00 = (void *)Memory::alloc_static(uVar3,false);
    *(void **)(this + 8) = __s_00;
    if (uVar31 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar3)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar42 != uVar39);
        uVar32 = *(uint *)param_1;
        iVar40 = *(int *)(this + 0x2c);
      }
      else {
        memset(__s,0,uVar39);
        lStack_70 = 0x10ce4a;
        memset(__s_00,0,uVar3);
        uVar32 = *(uint *)param_1;
        iVar40 = *(int *)(this + 0x2c);
      }
LAB_0010ce59:
      if (iVar40 == 0) goto LAB_0010cf10;
      uVar39 = (ulong)*(uint *)(this + 0x28);
      lVar43 = *(long *)(this + 0x10);
      goto LAB_0010cb24;
    }
    uVar32 = *(uint *)param_1;
    iVar40 = *(int *)(this + 0x2c);
    if (__s_00 != (void *)0x0) goto LAB_0010ce59;
  }
  else {
    iVar40 = *(int *)(this + 0x2c);
    if (iVar40 == 0) {
LAB_0010cf10:
      iVar40 = 0;
    }
    else {
      uVar3 = *(ulong *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar30 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar30 = (uVar30 ^ uVar30 >> 0xd) * -0x3d4d51cb;
      uVar44 = uVar30 ^ uVar30 >> 0x10;
      if (uVar30 == uVar30 >> 0x10) {
        uVar44 = 1;
        uVar36 = uVar3;
      }
      else {
        uVar36 = uVar44 * uVar3;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar42;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar36;
      lVar37 = SUB168(auVar5 * auVar17,8);
      lVar43 = *(long *)(this + 0x10);
      uVar45 = SUB164(auVar5 * auVar17,8);
      uVar30 = *(uint *)(lVar43 + lVar37 * 4);
      if (uVar30 != 0) {
        uVar41 = 0;
        lVar38 = lVar37;
        do {
          if ((uVar44 == uVar30) &&
             (uVar32 == *(uint *)(*(long *)((long)__s_00 + lVar37 * 8) + 0x10))) {
            auVar47._0_8_ = *(long *)((long)__s_00 + (ulong)uVar45 * 8) + 0x18;
            auVar47._8_8_ = lVar38;
            return auVar47;
          }
          uVar41 = uVar41 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar45 + 1) * uVar3;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar42;
          lVar37 = SUB168(auVar6 * auVar18,8);
          uVar30 = *(uint *)(lVar43 + lVar37 * 4);
          uVar45 = SUB164(auVar6 * auVar18,8);
        } while ((uVar30 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar30 * uVar3, auVar19._8_8_ = 0,
                auVar19._0_8_ = uVar42, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((uVar45 + uVar31) - SUB164(auVar7 * auVar19,8)) * uVar3,
                auVar20._8_8_ = 0, auVar20._0_8_ = uVar42, lVar38 = SUB168(auVar8 * auVar20,8),
                uVar41 <= SUB164(auVar8 * auVar20,8)));
      }
LAB_0010cb24:
      uVar36 = CONCAT44(0,*(uint *)(hash_table_size_primes + uVar39 * 4));
      uVar3 = *(ulong *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar31 = (uVar32 >> 0x10 ^ uVar32) * -0x7a143595;
      uVar31 = (uVar31 ^ uVar31 >> 0xd) * -0x3d4d51cb;
      uVar30 = uVar31 ^ uVar31 >> 0x10;
      if (uVar31 == uVar31 >> 0x10) {
        uVar30 = 1;
        uVar35 = uVar3;
      }
      else {
        uVar35 = uVar30 * uVar3;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar36;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar35;
      lVar37 = SUB168(auVar9 * auVar21,8);
      uVar31 = *(uint *)(lVar43 + lVar37 * 4);
      uVar44 = SUB164(auVar9 * auVar21,8);
      if (uVar31 != 0) {
        uVar45 = 0;
        lVar38 = lVar37;
        do {
          if ((uVar30 == uVar31) &&
             (uVar32 == *(uint *)(*(long *)((long)__s_00 + lVar37 * 8) + 0x10))) {
            pauVar33 = *(undefined1 (**) [16])((long)__s_00 + (ulong)uVar44 * 8);
            *(undefined8 *)(pauVar33[1] + 8) = 0;
            lStack_70 = lVar38;
            goto LAB_0010cbf7;
          }
          uVar45 = uVar45 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (uVar44 + 1) * uVar3;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar36;
          lVar37 = SUB168(auVar10 * auVar22,8);
          uVar31 = *(uint *)(lVar43 + lVar37 * 4);
          uVar44 = SUB164(auVar10 * auVar22,8);
        } while ((uVar31 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = uVar31 * uVar3, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar36, auVar12._8_8_ = 0,
                auVar12._0_8_ =
                     ((*(uint *)(hash_table_size_primes + uVar39 * 4) + uVar44) -
                     SUB164(auVar11 * auVar23,8)) * uVar3, auVar24._8_8_ = 0, auVar24._0_8_ = uVar36
                , lVar38 = SUB168(auVar12 * auVar24,8), uVar45 <= SUB164(auVar12 * auVar24,8)));
      }
    }
  }
  if ((float)uVar42 * __LC43 < (float)(iVar40 + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      pauVar33 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010cbf7;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  uVar2 = *(undefined4 *)param_1;
  pauVar33 = (undefined1 (*) [16])operator_new(0x20,"");
  *(undefined4 *)pauVar33[1] = uVar2;
  *(undefined8 *)(pauVar33[1] + 8) = 0;
  *pauVar33 = (undefined1  [16])0x0;
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar33;
  }
  else {
    *puVar4 = pauVar33;
    *(undefined8 **)(*pauVar33 + 8) = puVar4;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar33;
  uVar32 = (*(uint *)param_1 >> 0x10 ^ *(uint *)param_1) * -0x7a143595;
  uVar31 = (uVar32 ^ uVar32 >> 0xd) * -0x3d4d51cb;
  uVar32 = uVar31 ^ uVar31 >> 0x10;
  if (uVar31 == uVar31 >> 0x10) {
    uVar39 = 1;
    uVar32 = 1;
  }
  else {
    uVar39 = (ulong)uVar32;
  }
  uVar44 = 0;
  lVar43 = *(long *)(this + 0x10);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar42 = CONCAT44(0,uVar31);
  lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar13._8_8_ = 0;
  auVar13._0_8_ = uVar39 * lVar37;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar42;
  lStack_70 = SUB168(auVar13 * auVar25,8);
  lVar38 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lStack_70 * 4);
  iVar40 = SUB164(auVar13 * auVar25,8);
  uVar30 = *puVar1;
  pauVar29 = pauVar33;
  while (uVar30 != 0) {
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar30 * lVar37;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar42;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar31 + iVar40) - SUB164(auVar14 * auVar26,8)) * lVar37;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar42;
    local_68 = SUB164(auVar15 * auVar27,8);
    pauVar46 = pauVar29;
    if (local_68 < uVar44) {
      *puVar1 = uVar32;
      puVar4 = (undefined8 *)(lVar38 + lStack_70 * 8);
      pauVar46 = (undefined1 (*) [16])*puVar4;
      *puVar4 = pauVar29;
      uVar32 = uVar30;
      uVar44 = local_68;
    }
    uVar44 = uVar44 + 1;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)(iVar40 + 1) * lVar37;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar42;
    lStack_70 = SUB168(auVar16 * auVar28,8);
    puVar1 = (uint *)(lVar43 + lStack_70 * 4);
    iVar40 = SUB164(auVar16 * auVar28,8);
    pauVar29 = pauVar46;
    uVar30 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar38 + lStack_70 * 8) = pauVar29;
  *puVar1 = uVar32;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010cbf7:
  auVar48._8_8_ = lStack_70;
  auVar48._0_8_ = pauVar33[1] + 8;
  return auVar48;
}



/* EditorLog::_notificationv(int, bool) */

void __thiscall EditorLog::_notificationv(EditorLog *this,int param_1,bool param_2)

{
  if (param_2) {
    if (param_1 == 10) {
      _update_theme();
      _load_state(this);
    }
    else if (param_1 == 0x2d) {
      _update_theme();
      if (*(long *)(this + 0xa60) != 0) {
        _rebuild_log(this);
      }
    }
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  if (param_1 != 10) {
    if (param_1 == 0x2d) {
      _update_theme();
      if (*(long *)(this + 0xa60) != 0) {
        _rebuild_log(this);
        return;
      }
    }
    return;
  }
  _update_theme();
  _load_state(this);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<EditorLog::MessageType, EditorLog::LogFilter*, HashMapHasherDefault,
   HashMapComparatorDefault<EditorLog::MessageType>,
   DefaultTypedAllocator<HashMapElement<EditorLog::MessageType, EditorLog::LogFilter*> >
   >::insert(EditorLog::MessageType const&, EditorLog::LogFilter* const&, bool) */

void HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
     ::insert(MessageType *param_1,LogFilter **param_2,bool param_3)

{
  undefined8 uVar1;
  LogFilter *pLVar2;
  LogFilter *pLVar3;
  LogFilter *pLVar4;
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
  LogFilter *pLVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  LogFilter *pLVar26;
  undefined8 *in_RCX;
  int iVar27;
  undefined7 in_register_00000011;
  uint *puVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  uint uVar33;
  char in_R8B;
  ulong uVar34;
  uint uVar35;
  LogFilter *pLVar36;
  
  puVar28 = (uint *)CONCAT71(in_register_00000011,param_3);
  pLVar26 = param_2[1];
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  if (pLVar26 == (LogFilter *)0x0) {
    uVar29 = (ulong)uVar23;
    uVar32 = uVar29 * 4;
    uVar34 = uVar29 * 8;
    pLVar26 = (LogFilter *)Memory::alloc_static(uVar32,false);
    param_2[2] = pLVar26;
    pLVar26 = (LogFilter *)Memory::alloc_static(uVar34,false);
    param_2[1] = pLVar26;
    if (uVar23 != 0) {
      pLVar2 = param_2[2];
      if ((pLVar2 < pLVar26 + uVar34) && (pLVar26 < pLVar2 + uVar32)) {
        uVar32 = 0;
        do {
          *(undefined4 *)(pLVar2 + uVar32 * 4) = 0;
          *(undefined8 *)(pLVar26 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar29 != uVar32);
        goto LAB_0010d056;
      }
      memset(pLVar2,0,uVar32);
      memset(pLVar26,0,uVar34);
      iVar27 = *(int *)((long)param_2 + 0x2c);
      uVar24 = *puVar28;
      goto LAB_0010d061;
    }
    iVar27 = *(int *)((long)param_2 + 0x2c);
    uVar24 = *puVar28;
    if (pLVar26 != (LogFilter *)0x0) goto LAB_0010d061;
  }
  else {
LAB_0010d056:
    iVar27 = *(int *)((long)param_2 + 0x2c);
    uVar24 = *puVar28;
LAB_0010d061:
    if (iVar27 != 0) {
      uVar34 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4));
      uVar32 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
      uVar22 = (uVar24 >> 0x10 ^ uVar24) * -0x7a143595;
      uVar22 = (uVar22 ^ uVar22 >> 0xd) * -0x3d4d51cb;
      uVar33 = uVar22 ^ uVar22 >> 0x10;
      if (uVar22 == uVar22 >> 0x10) {
        uVar33 = 1;
        uVar29 = uVar32;
      }
      else {
        uVar29 = uVar33 * uVar32;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar34;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar29;
      lVar30 = SUB168(auVar5 * auVar13,8);
      uVar22 = *(uint *)(param_2[2] + lVar30 * 4);
      uVar25 = SUB164(auVar5 * auVar13,8);
      if (uVar22 != 0) {
        uVar35 = 0;
        do {
          if ((uVar33 == uVar22) && (*(uint *)(*(long *)(pLVar26 + lVar30 * 8) + 0x10) == uVar24)) {
            pLVar26 = *(LogFilter **)(pLVar26 + (ulong)uVar25 * 8);
            *(undefined8 *)(pLVar26 + 0x18) = *in_RCX;
            goto LAB_0010d2f0;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (uVar25 + 1) * uVar32;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar34;
          lVar30 = SUB168(auVar6 * auVar14,8);
          uVar22 = *(uint *)(param_2[2] + lVar30 * 4);
          uVar25 = SUB164(auVar6 * auVar14,8);
        } while ((uVar22 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = uVar22 * uVar32, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar34, auVar8._8_8_ = 0,
                auVar8._0_8_ = ((*(uint *)(hash_table_size_primes +
                                          (ulong)*(uint *)(param_2 + 5) * 4) + uVar25) -
                               SUB164(auVar7 * auVar15,8)) * uVar32, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar34, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
    }
  }
  if ((float)uVar23 * __LC43 < (float)(iVar27 + 1)) {
    if (*(int *)(param_2 + 5) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      pLVar26 = (LogFilter *)0x0;
      goto LAB_0010d2f0;
    }
    _resize_and_rehash((HashMap<EditorLog::MessageType,EditorLog::LogFilter*,HashMapHasherDefault,HashMapComparatorDefault<EditorLog::MessageType>,DefaultTypedAllocator<HashMapElement<EditorLog::MessageType,EditorLog::LogFilter*>>>
                        *)param_2,*(int *)(param_2 + 5) + 1);
  }
  uVar23 = *puVar28;
  uVar1 = *in_RCX;
  pLVar26 = (LogFilter *)operator_new(0x20,"");
  *(uint *)(pLVar26 + 0x10) = uVar23;
  *(undefined8 *)(pLVar26 + 0x18) = uVar1;
  *(undefined1 (*) [16])pLVar26 = (undefined1  [16])0x0;
  pLVar2 = param_2[4];
  if (pLVar2 == (LogFilter *)0x0) {
    param_2[3] = pLVar26;
    param_2[4] = pLVar26;
  }
  else if (in_R8B == '\0') {
    *(LogFilter **)pLVar2 = pLVar26;
    *(LogFilter **)(pLVar26 + 8) = pLVar2;
    param_2[4] = pLVar26;
  }
  else {
    pLVar2 = param_2[3];
    *(LogFilter **)(pLVar2 + 8) = pLVar26;
    *(LogFilter **)pLVar26 = pLVar2;
    param_2[3] = pLVar26;
  }
  uVar23 = (*puVar28 >> 0x10 ^ *puVar28) * -0x7a143595;
  uVar24 = (uVar23 ^ uVar23 >> 0xd) * -0x3d4d51cb;
  uVar23 = uVar24 ^ uVar24 >> 0x10;
  if (uVar24 == uVar24 >> 0x10) {
    uVar32 = 1;
    uVar23 = 1;
  }
  else {
    uVar32 = (ulong)uVar23;
  }
  pLVar3 = param_2[2];
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 5) * 8);
  uVar24 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 5) * 4);
  uVar34 = CONCAT44(0,uVar24);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar32 * lVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar31 = SUB168(auVar9 * auVar17,8);
  pLVar4 = param_2[1];
  pLVar2 = pLVar3 + lVar31 * 4;
  iVar27 = SUB164(auVar9 * auVar17,8);
  uVar22 = *(uint *)pLVar2;
  pLVar21 = pLVar26;
  while (uVar22 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar22 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar24 + iVar27) - SUB164(auVar10 * auVar18,8)) * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar25 = SUB164(auVar11 * auVar19,8);
    pLVar36 = pLVar21;
    if (uVar25 < uVar33) {
      *(uint *)pLVar2 = uVar23;
      pLVar2 = pLVar4 + lVar31 * 8;
      pLVar36 = *(LogFilter **)pLVar2;
      *(LogFilter **)pLVar2 = pLVar21;
      uVar23 = uVar22;
      uVar33 = uVar25;
    }
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar27 + 1) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar31 = SUB168(auVar12 * auVar20,8);
    pLVar2 = pLVar3 + lVar31 * 4;
    iVar27 = SUB164(auVar12 * auVar20,8);
    pLVar21 = pLVar36;
    uVar22 = *(uint *)pLVar2;
  }
  *(LogFilter **)(pLVar4 + lVar31 * 8) = pLVar21;
  *(uint *)pLVar2 = uVar23;
  *(int *)((long)param_2 + 0x2c) = *(int *)((long)param_2 + 0x2c) + 1;
LAB_0010d2f0:
  *(LogFilter **)param_1 = pLVar26;
  return;
}



/* CowData<EditorLog::LogMessage>::_unref() */

void __thiscall CowData<EditorLog::LogMessage>::_unref(CowData<EditorLog::LogMessage> *this)

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
          plVar6 = plVar6 + 3;
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



/* CowData<EditorLog::LogMessage>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorLog::LogMessage>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* EditorLog::add_message(String const&, EditorLog::MessageType) [clone .cold] */

void EditorLog::add_message(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorLog::LogMessage>::_realloc(long) */

undefined8 __thiscall
CowData<EditorLog::LogMessage>::_realloc(CowData<EditorLog::LogMessage> *this,long param_1)

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
/* Error CowData<EditorLog::LogMessage>::resize<false>(long) */

undefined8 __thiscall
CowData<EditorLog::LogMessage>::resize<false>(CowData<EditorLog::LogMessage> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
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
    lVar5 = 0;
    lVar7 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar5) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar7 = lVar5 * 0x18;
    if (lVar7 != 0) {
      uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x18 == 0) {
LAB_0010d8b0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar8 = param_1 * 0x18 - 1;
  uVar8 = uVar8 >> 1 | uVar8;
  uVar8 = uVar8 | uVar8 >> 2;
  uVar8 = uVar8 | uVar8 >> 4;
  uVar8 = uVar8 | uVar8 >> 8;
  uVar8 = uVar8 | uVar8 >> 0x10;
  uVar8 = uVar8 | uVar8 >> 0x20;
  lVar10 = uVar8 + 1;
  if (lVar10 == 0) goto LAB_0010d8b0;
  uVar9 = param_1;
  if (param_1 <= lVar5) {
    while (lVar5 = *(long *)this, lVar5 != 0) {
      if (*(ulong *)(lVar5 + -8) <= uVar9) {
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar5 = *(long *)this;
          if (lVar5 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar5 + -8) = param_1;
        return 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)(lVar5 + uVar9 * 0x18));
      uVar9 = uVar9 + 1;
    }
    goto LAB_0010d906;
  }
  if (lVar10 == lVar7) {
LAB_0010d823:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_0010d906:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar5 = puVar6[-1];
    if (param_1 <= lVar5) goto LAB_0010d78b;
  }
  else {
    if (lVar5 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_0010d823;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar5 = 0;
  }
  puVar2 = puVar6 + lVar5 * 3;
  do {
    *puVar2 = 0;
    puVar3 = puVar2 + 3;
    *(undefined4 *)((long)puVar2 + 0xc) = 1;
    *(undefined1 *)(puVar2 + 2) = 1;
    puVar2 = puVar3;
  } while (puVar3 != puVar6 + param_1 * 3);
LAB_0010d78b:
  puVar6[-1] = param_1;
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
  long *plVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = *(void **)(param_1 + 0x20);
  if (pvVar5 != (void *)0x0) {
    if (*(int *)(param_1 + 0x44) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0x40) * 4);
      if (uVar2 == 0) {
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(param_1 + 0x28) + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(*(long *)(param_1 + 0x28) + lVar4) = 0;
            if (Variant::needs_deinit[*(int *)((long)pvVar5 + 0x18)] != '\0') {
              Variant::_clear_internal();
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
            pvVar5 = *(void **)(param_1 + 0x20);
            *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar2 << 2);
        *(undefined4 *)(param_1 + 0x44) = 0;
        *(undefined1 (*) [16])(param_1 + 0x30) = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_0010dbc1;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(param_1 + 0x28),false);
  }
LAB_0010dbc1:
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
  
  *(undefined ***)this = &PTR__initialize_classv_0010e9b8;
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
        if (pvVar3 == (void *)0x0) goto LAB_0010dcd1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010dcd1:
  *(undefined ***)this = &PTR__initialize_classv_0010e168;
  Object::~Object((Object *)this);
  return;
}



/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0010e9b8;
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
        if (pvVar3 == (void *)0x0) goto LAB_0010ddc1;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 400),false);
  }
LAB_0010ddc1:
  *(undefined ***)this = &PTR__initialize_classv_0010e168;
  Object::~Object((Object *)this);
  operator_delete(this,0x1b0);
  return;
}



/* EditorLog::_error_handler(void*, char const*, char const*, int, char const*, char const*, bool,
   ErrorHandlerType) */

void EditorLog::_GLOBAL__sub_I__error_handler(void)

{
  if (PopupMenu::base_property_helper != '\0') {
    return;
  }
  PopupMenu::base_property_helper = 1;
  PopupMenu::base_property_helper._56_8_ = 2;
  PopupMenu::base_property_helper._64_8_ = 0;
  PopupMenu::base_property_helper._0_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._24_16_ = (undefined1  [16])0x0;
  PopupMenu::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,PopupMenu::base_property_helper,&__dso_handle
              );
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorLog, void, String const&,
   EditorLog::MessageType>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,String_const&,EditorLog::MessageType> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorLog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorLog, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorLog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorLog, void, bool,
   EditorLog::MessageType>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorLog,void,bool,EditorLog::MessageType> *this)

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
/* ConfigFile::~ConfigFile() */

void __thiscall ConfigFile::~ConfigFile(ConfigFile *this)

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



