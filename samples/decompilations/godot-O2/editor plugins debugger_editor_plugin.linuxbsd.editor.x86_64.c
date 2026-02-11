
/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */

void CowData<char32_t>::_ref(CowData *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *in_RSI;
  bool bVar4;
  
  if (*(long *)param_1 != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)param_1 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)param_1;
      *(undefined8 *)param_1 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
    else {
      *(undefined8 *)param_1 = 0;
    }
  }
  plVar1 = (long *)(*in_RSI + -0x10);
  if (*in_RSI != 0) {
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
      *(long *)param_1 = *in_RSI;
    }
  }
  return;
}



/* DebuggerEditorPlugin::~DebuggerEditorPlugin() */

void __thiscall DebuggerEditorPlugin::~DebuggerEditorPlugin(DebuggerEditorPlugin *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_001064a8;
  EditorDebuggerServer::deinitialize();
  pOVar1 = *(Object **)(this + 0x668);
  cVar2 = predelete_handler(pOVar1);
  if (cVar2 != '\0') {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
  }
  EditorPlugin::~EditorPlugin((EditorPlugin *)this);
  return;
}



/* DebuggerEditorPlugin::~DebuggerEditorPlugin() */

void __thiscall DebuggerEditorPlugin::~DebuggerEditorPlugin(DebuggerEditorPlugin *this)

{
  ~DebuggerEditorPlugin(this);
  operator_delete(this,0x680);
  return;
}



/* DebuggerEditorPlugin::_menu_option(int) */

void __thiscall DebuggerEditorPlugin::_menu_option(DebuggerEditorPlugin *this,int param_1)

{
  undefined8 uVar1;
  byte bVar2;
  bool bVar3;
  String *pSVar4;
  CowData<char32_t> *this_00;
  String *this_01;
  char *pcVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  this_01 = (String *)&local_68;
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  switch(param_1) {
  case 0:
    uVar1 = *(undefined8 *)(this + 0x660);
    PopupMenu::get_item_index((int)uVar1);
    bVar2 = PopupMenu::is_item_checked((int)uVar1);
    if (bVar2 == 0) {
      EditorFileServer::start();
      Node::set_process(SUB81(this,0));
    }
    else {
      EditorFileServer::stop();
      Node::set_process(SUB81(this,0));
    }
    uVar1 = *(undefined8 *)(this + 0x660);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar1);
    PopupMenu::set_item_checked((int)uVar1,bVar3);
    if (this[0x678] == (DebuggerEditorPlugin)0x0) {
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(bool)(bVar2 ^ 1));
      pcVar5 = "run_file_server";
LAB_00100320:
      local_58 = (char *)0x0;
      this_00 = (CowData<char32_t> *)&local_58;
      this_01 = (String *)&local_60;
      String::parse_latin1((String *)this_00,pcVar5);
      local_60 = 0;
      String::parse_latin1(this_01,"debug_options");
LAB_00100345:
      EditorSettings::set_project_metadata(pSVar4,this_01,(Variant *)this_00);
      CowData<char32_t>::_unref((CowData<char32_t> *)this_01);
      CowData<char32_t>::_unref(this_00);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    break;
  case 1:
    uVar1 = *(undefined8 *)(this + 0x660);
    PopupMenu::get_item_index((int)uVar1);
    bVar2 = PopupMenu::is_item_checked((int)uVar1);
    uVar1 = *(undefined8 *)(this + 0x660);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar1);
    PopupMenu::set_item_checked((int)uVar1,bVar3);
    EditorDebuggerNode::set_live_debugging(SUB81(EditorDebuggerNode::singleton,0));
    if (this[0x678] == (DebuggerEditorPlugin)0x0) {
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(bool)(bVar2 ^ 1));
      pcVar5 = "run_live_debug";
      goto LAB_00100320;
    }
    break;
  case 2:
    uVar1 = *(undefined8 *)(this + 0x660);
    PopupMenu::get_item_index((int)uVar1);
    bVar2 = PopupMenu::is_item_checked((int)uVar1);
    uVar1 = *(undefined8 *)(this + 0x660);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar1);
    PopupMenu::set_item_checked((int)uVar1,bVar3);
    if (this[0x678] == (DebuggerEditorPlugin)0x0) {
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(bool)(bVar2 ^ 1));
      pcVar5 = "run_debug_collisions";
      goto LAB_00100320;
    }
    break;
  case 3:
    uVar1 = *(undefined8 *)(this + 0x660);
    PopupMenu::get_item_index((int)uVar1);
    bVar2 = PopupMenu::is_item_checked((int)uVar1);
    uVar1 = *(undefined8 *)(this + 0x660);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar1);
    PopupMenu::set_item_checked((int)uVar1,bVar3);
    if (this[0x678] == (DebuggerEditorPlugin)0x0) {
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(bool)(bVar2 ^ 1));
      pcVar5 = "run_debug_paths";
LAB_001007a4:
      local_60 = 0;
      this_00 = (CowData<char32_t> *)&local_60;
      String::parse_latin1((String *)this_00,pcVar5);
      local_68 = 0;
      local_58 = "debug_options";
      local_50 = 0xd;
      String::parse_latin1((StrRange *)&local_68);
      goto LAB_00100345;
    }
    break;
  case 4:
    uVar1 = *(undefined8 *)(this + 0x660);
    PopupMenu::get_item_index((int)uVar1);
    bVar2 = PopupMenu::is_item_checked((int)uVar1);
    uVar1 = *(undefined8 *)(this + 0x660);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar1);
    PopupMenu::set_item_checked((int)uVar1,bVar3);
    if (this[0x678] == (DebuggerEditorPlugin)0x0) {
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(bool)(bVar2 ^ 1));
      pcVar5 = "run_debug_navigation";
      goto LAB_00100320;
    }
    break;
  case 5:
    uVar1 = *(undefined8 *)(this + 0x660);
    PopupMenu::get_item_index((int)uVar1);
    bVar2 = PopupMenu::is_item_checked((int)uVar1);
    uVar1 = *(undefined8 *)(this + 0x660);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar1);
    PopupMenu::set_item_checked((int)uVar1,bVar3);
    if (this[0x678] == (DebuggerEditorPlugin)0x0) {
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(bool)(bVar2 ^ 1));
      pcVar5 = "run_debug_avoidance";
      goto LAB_001007a4;
    }
    break;
  case 6:
    uVar1 = *(undefined8 *)(this + 0x660);
    PopupMenu::get_item_index((int)uVar1);
    bVar2 = PopupMenu::is_item_checked((int)uVar1);
    uVar1 = *(undefined8 *)(this + 0x660);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar1);
    PopupMenu::set_item_checked((int)uVar1,bVar3);
    if (this[0x678] == (DebuggerEditorPlugin)0x0) {
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(bool)(bVar2 ^ 1));
      pcVar5 = "run_debug_canvas_redraw";
      goto LAB_00100320;
    }
    break;
  case 7:
    uVar1 = *(undefined8 *)(this + 0x660);
    PopupMenu::get_item_index((int)uVar1);
    bVar2 = PopupMenu::is_item_checked((int)uVar1);
    uVar1 = *(undefined8 *)(this + 0x660);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar1);
    PopupMenu::set_item_checked((int)uVar1,bVar3);
    if (this[0x678] == (DebuggerEditorPlugin)0x0) {
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(bool)(bVar2 ^ 1));
      pcVar5 = "run_deploy_remote_debug";
      goto LAB_00100320;
    }
    break;
  case 8:
    uVar1 = *(undefined8 *)(this + 0x660);
    PopupMenu::get_item_index((int)uVar1);
    bVar2 = PopupMenu::is_item_checked((int)uVar1);
    uVar1 = *(undefined8 *)(this + 0x660);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar1);
    PopupMenu::set_item_checked((int)uVar1,bVar3);
    ScriptEditor::set_live_auto_reload_running_scripts(SUB81(ScriptEditor::script_editor,0));
    if (this[0x678] == (DebuggerEditorPlugin)0x0) {
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(bool)(bVar2 ^ 1));
      pcVar5 = "run_reload_scripts";
      goto LAB_00100320;
    }
    break;
  case 9:
    uVar1 = *(undefined8 *)(this + 0x660);
    PopupMenu::get_item_index((int)uVar1);
    bVar2 = PopupMenu::is_item_checked((int)uVar1);
    uVar1 = *(undefined8 *)(this + 0x660);
    bVar3 = (bool)PopupMenu::get_item_index((int)uVar1);
    PopupMenu::set_item_checked((int)uVar1,bVar3);
    EditorDebuggerNode::set_keep_open(SUB81(EditorDebuggerNode::singleton,0));
    if (this[0x678] == (DebuggerEditorPlugin)0x0) {
      pSVar4 = (String *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,(bool)(bVar2 ^ 1));
      pcVar5 = "server_keep_open";
      goto LAB_00100320;
    }
    break;
  case 10:
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      RunInstancesDialog::popup_dialog();
      return;
    }
    goto LAB_001007de;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001007de:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebuggerEditorPlugin::_update_debug_options() */

void __thiscall DebuggerEditorPlugin::_update_debug_options(DebuggerEditorPlugin *this)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  String *pSVar14;
  long in_FS_OFFSET;
  long local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar14 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,true);
  local_88 = "run_deploy_remote_debug";
  local_90 = 0;
  local_80 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_88 = "debug_options";
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar14,(Variant *)&local_98);
  bVar4 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 == 0) {
LAB_00100902:
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100902;
    local_90 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  pSVar14 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "run_file_server";
  local_90 = 0;
  local_80 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar14,(Variant *)&local_98);
  bVar5 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 == 0) {
LAB_001009d6:
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_001009d6;
    local_90 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  pSVar14 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "run_debug_collisions";
  local_90 = 0;
  local_80 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar14,(Variant *)&local_98);
  bVar6 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 == 0) {
LAB_00100aaa:
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100aaa;
    local_90 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  pSVar14 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "run_debug_paths";
  local_90 = 0;
  local_80 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar14,(Variant *)&local_98);
  bVar7 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 == 0) {
LAB_00100b7e:
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100b7e;
    local_90 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  pSVar14 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "run_debug_navigation";
  local_90 = 0;
  local_80 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar14,(Variant *)&local_98);
  bVar8 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 == 0) {
LAB_00100c52:
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100c52;
    local_90 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  pSVar14 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "run_debug_avoidance";
  local_90 = 0;
  local_80 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar14,(Variant *)&local_98);
  bVar9 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 == 0) {
LAB_00100d26:
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100d26;
    local_90 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  pSVar14 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "run_debug_canvas_redraw";
  local_90 = 0;
  local_80 = 0x17;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar14,(Variant *)&local_98);
  bVar10 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 == 0) {
LAB_00100dfa:
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100dfa;
    local_90 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  pSVar14 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,true);
  local_88 = "run_live_debug";
  local_90 = 0;
  local_80 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar14,(Variant *)&local_98);
  bVar11 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 == 0) {
LAB_00100ed1:
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 != 0) goto LAB_00100ed1;
    local_90 = 0;
    Memory::free_static((void *)(lVar3 + -0x10),false);
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  pSVar14 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,true);
  local_88 = "run_reload_scripts";
  local_90 = 0;
  local_80 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar14,(Variant *)&local_98);
  bVar12 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar14 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_78,false);
  local_88 = "server_keep_open";
  local_90 = 0;
  local_80 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "debug_options";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_58,pSVar14,(Variant *)&local_98);
  bVar13 = Variant::operator_cast_to_bool((Variant *)local_58);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar3 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar1 = (long *)(local_98 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      cVar2 = Variant::needs_deinit[local_78[0]];
      goto joined_r0x0010107d;
    }
  }
  cVar2 = Variant::needs_deinit[local_78[0]];
joined_r0x0010107d:
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if (bVar4) {
    _menu_option(this,7);
  }
  if (bVar5) {
    _menu_option(this,0);
  }
  if (bVar6) {
    _menu_option(this,2);
  }
  if (bVar7) {
    _menu_option(this,3);
  }
  if (bVar8) {
    _menu_option(this,4);
  }
  if (bVar9) {
    _menu_option(this,5);
  }
  if (bVar10) {
    _menu_option(this,6);
  }
  if (bVar11) {
    _menu_option(this,1);
  }
  if (bVar12) {
    _menu_option(this,8);
  }
  if (bVar13) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _menu_option(this,9);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebuggerEditorPlugin::_notification(int) */

void __thiscall DebuggerEditorPlugin::_notification(DebuggerEditorPlugin *this,int param_1)

{
  if (param_1 == 0xd) {
    _update_debug_options(this);
    this[0x678] = (DebuggerEditorPlugin)0x0;
    return;
  }
  if (param_1 != 0x11) {
    return;
  }
  EditorFileServer::poll();
  return;
}



/* DebuggerEditorPlugin::DebuggerEditorPlugin(PopupMenu*) */

void __thiscall
DebuggerEditorPlugin::DebuggerEditorPlugin(DebuggerEditorPlugin *this,PopupMenu *param_1)

{
  Ref *pRVar1;
  long *plVar2;
  code *pcVar3;
  Object *pOVar4;
  char cVar5;
  EditorFileServer *this_00;
  EditorDebuggerNode *this_01;
  undefined8 uVar6;
  CallableCustom *this_02;
  RunInstancesDialog *this_03;
  int iVar7;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::Node((Node *)this);
  *(code **)this = EditorDebuggerServer::deinitialize;
  *(undefined2 *)(this + 0x408) = 0;
  *(undefined1 (*) [16])(this + 0x410) = (undefined1  [16])0x0;
  StringName::StringName((StringName *)(this + 0x420),"_forward_canvas_gui_input",false);
  this[0x428] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x430) = 0;
  StringName::StringName((StringName *)(this + 0x438),"_forward_canvas_draw_over_viewport",false);
  this[0x440] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x448) = 0;
  StringName::StringName
            ((StringName *)(this + 0x450),"_forward_canvas_force_draw_over_viewport",false);
  this[0x458] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x460) = 0;
  StringName::StringName((StringName *)(this + 0x468),"_forward_3d_gui_input",false);
  this[0x470] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x478) = 0;
  StringName::StringName((StringName *)(this + 0x480),"_forward_3d_draw_over_viewport",false);
  this[0x488] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x490) = 0;
  StringName::StringName((StringName *)(this + 0x498),"_forward_3d_force_draw_over_viewport",false);
  this[0x4a0] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4a8) = 0;
  StringName::StringName((StringName *)(this + 0x4b0),"_get_plugin_name",false);
  this[0x4b8] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4c0) = 0;
  StringName::StringName((StringName *)(this + 0x4c8),"_get_plugin_icon",false);
  this[0x4d0] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4d8) = 0;
  StringName::StringName((StringName *)(this + 0x4e0),"_has_main_screen",false);
  this[0x4e8] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x4f0) = 0;
  StringName::StringName((StringName *)(this + 0x4f8),"_make_visible",false);
  this[0x500] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x508) = 0;
  StringName::StringName((StringName *)(this + 0x510),"_edit",false);
  this[0x518] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x520) = 0;
  StringName::StringName((StringName *)(this + 0x528),"_handles",false);
  this[0x530] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  StringName::StringName((StringName *)(this + 0x540),"_get_state",false);
  this[0x548] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x550) = 0;
  StringName::StringName((StringName *)(this + 0x558),"_set_state",false);
  this[0x560] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x568) = 0;
  StringName::StringName((StringName *)(this + 0x570),"_clear",false);
  this[0x578] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x580) = 0;
  StringName::StringName((StringName *)(this + 0x588),"_get_unsaved_status",false);
  this[0x590] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x598) = 0;
  StringName::StringName((StringName *)(this + 0x5a0),"_save_external_data",false);
  this[0x5a8] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5b0) = 0;
  StringName::StringName((StringName *)(this + 0x5b8),"_apply_changes",false);
  this[0x5c0] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5c8) = 0;
  StringName::StringName((StringName *)(this + 0x5d0),"_get_breakpoints",false);
  this[0x5d8] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5e0) = 0;
  StringName::StringName((StringName *)(this + 0x5e8),"_set_window_layout",false);
  this[0x5f0] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x5f8) = 0;
  StringName::StringName((StringName *)(this + 0x600),"_get_window_layout",false);
  this[0x608] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x610) = 0;
  StringName::StringName((StringName *)(this + 0x618),"_build",false);
  this[0x620] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x628) = 0;
  StringName::StringName((StringName *)(this + 0x630),"_enable_plugin",false);
  this[0x638] = (DebuggerEditorPlugin)0x0;
  *(undefined8 *)(this + 0x640) = 0;
  StringName::StringName((StringName *)(this + 0x648),"_disable_plugin",false);
  this[0x650] = (DebuggerEditorPlugin)0x0;
  *(undefined ***)this = &PTR__initialize_classv_001064a8;
  this[0x678] = (DebuggerEditorPlugin)0x1;
  *(undefined1 (*) [16])(this + 0x658) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x668) = (undefined1  [16])0x0;
  EditorDebuggerServer::initialize();
  local_58 = (Object *)0x10504d;
  local_60 = 0;
  local_50 = 9;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105057;
  local_68 = 0;
  local_50 = 0x12;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0x400026,0);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x10506a;
  local_60 = 0;
  local_50 = 9;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105074;
  local_68 = 0;
  local_50 = 0x12;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0x400025,0);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x105087;
  local_60 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x10508d;
  local_68 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x10509c;
  local_60 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x1050a5;
  local_68 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0x400027,0);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x1050b7;
  local_60 = 0;
  local_50 = 0x1a;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105828;
  local_68 = 0;
  local_50 = 0x23;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_00 = (EditorFileServer *)operator_new(400,"");
  EditorFileServer::EditorFileServer(this_00);
  postinitialize_handler((Object *)this_00);
  *(EditorFileServer **)(this + 0x668) = this_00;
  this_01 = (EditorDebuggerNode *)operator_new(0xac0,"");
  EditorDebuggerNode::EditorDebuggerNode(this_01);
  postinitialize_handler((Object *)this_01);
  uVar6 = *(undefined8 *)(EditorNode::singleton + 0xa40);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x1050d3;
  local_68 = 0;
  local_50 = 0x1c;
  String::parse_latin1((StrRange *)&local_68);
  local_58 = (Object *)0x105850;
  local_70 = 0;
  local_50 = 0x2a;
  String::parse_latin1((StrRange *)&local_70);
  ED_SHORTCUT_AND_COMMAND
            (&local_78,(StrRange *)&local_70,(StrRange *)&local_68,0x4000044,(StrRange *)&local_60);
  local_80 = 0;
  local_58 = (Object *)&_LC53;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_58 = (Object *)0x1034f4;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_58,(String *)&local_88);
  uVar6 = EditorBottomPanel::add_item(uVar6,(String *)&local_58,this_01,&local_78,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if (local_78 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_78);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)local_78 + 0x140))();
        Memory::free_static(local_78,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  *(undefined8 *)(this_01 + 0xa20) = uVar6;
  *(PopupMenu **)(this + 0x660) = param_1;
  PopupMenu::set_hide_on_checkable_item_selection(SUB81(param_1,0));
  local_58 = (Object *)0x1050f0;
  pRVar1 = *(Ref **)(this + 0x660);
  local_60 = 0;
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105880;
  local_68 = 0;
  local_50 = 0x1f;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  iVar7 = (int)(String *)&local_58;
  PopupMenu::add_check_shortcut(pRVar1,iVar7,true);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x1058a0;
  local_68 = 0;
  local_50 = 0x139;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::set_item_tooltip((int)uVar6,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x1059e0;
  pRVar1 = *(Ref **)(this + 0x660);
  local_60 = 0;
  local_50 = 0x24;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105a08;
  local_68 = 0;
  local_50 = 0x23;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  PopupMenu::add_check_shortcut(pRVar1,iVar7,false);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105a30;
  local_68 = 0;
  local_50 = 0x14c;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::set_item_tooltip((int)uVar6,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x0;
  PopupMenu::add_separator(*(String **)(this + 0x660),iVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = (Object *)0x105109;
  pRVar1 = *(Ref **)(this + 0x660);
  local_60 = 0;
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105b80;
  local_68 = 0;
  local_50 = 0x1f;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  PopupMenu::add_check_shortcut(pRVar1,iVar7,true);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105ba0;
  local_68 = 0;
  local_50 = 0x77;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::set_item_tooltip((int)uVar6,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x105122;
  pRVar1 = *(Ref **)(this + 0x660);
  local_60 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105130;
  local_68 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  PopupMenu::add_check_shortcut(pRVar1,iVar7,true);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105c18;
  local_68 = 0;
  local_50 = 0x67;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::set_item_tooltip((int)uVar6,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x105145;
  pRVar1 = *(Ref **)(this + 0x660);
  local_60 = 0;
  local_50 = 0x12;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105158;
  local_68 = 0;
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  PopupMenu::add_check_shortcut(pRVar1,iVar7,true);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105c80;
  local_68 = 0;
  local_50 = 100;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::set_item_tooltip((int)uVar6,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x105172;
  pRVar1 = *(Ref **)(this + 0x660);
  local_60 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105184;
  local_68 = 0;
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  PopupMenu::add_check_shortcut(pRVar1,iVar7,true);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105ce8;
  local_68 = 0;
  local_50 = 0x76;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::set_item_tooltip((int)uVar6,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x0;
  PopupMenu::add_separator(*(String **)(this + 0x660),iVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = (Object *)0x10519d;
  pRVar1 = *(Ref **)(this + 0x660);
  local_60 = 0;
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x1051b6;
  local_68 = 0;
  local_50 = 0x1c;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  PopupMenu::add_check_shortcut(pRVar1,iVar7,true);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105d60;
  local_68 = 0;
  local_50 = 0xac;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::set_item_tooltip((int)uVar6,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x0;
  PopupMenu::add_separator(*(String **)(this + 0x660),iVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = (Object *)0x1051d3;
  pRVar1 = *(Ref **)(this + 0x660);
  local_60 = 0;
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x1051ed;
  local_68 = 0;
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  PopupMenu::add_check_shortcut(pRVar1,iVar7,true);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105e10;
  local_68 = 0;
  local_50 = 0xd9;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::set_item_tooltip((int)uVar6,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x105207;
  pRVar1 = *(Ref **)(this + 0x660);
  local_60 = 0;
  local_50 = 0x1a;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105222;
  local_68 = 0;
  local_50 = 0x1a;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  PopupMenu::add_check_shortcut(pRVar1,iVar7,true);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105ef0;
  local_68 = 0;
  local_50 = 0xc4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::set_item_tooltip((int)uVar6,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x10523d;
  pRVar1 = *(Ref **)(this + 0x660);
  local_60 = 0;
  local_50 = 0x16;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105254;
  local_68 = 0;
  local_50 = 0x17;
  String::parse_latin1((StrRange *)&local_68);
  ED_SHORTCUT((String *)&local_58,(StrRange *)&local_68,(StrRange *)&local_60,0,0);
  PopupMenu::add_check_shortcut(pRVar1,iVar7,true);
  if (local_58 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    pOVar4 = local_58;
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_58);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x105fb8;
  local_68 = 0;
  local_50 = 0x85;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::set_item_tooltip((int)uVar6,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = (Object *)0x0;
  PopupMenu::add_separator(*(String **)(this + 0x660),iVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = (Object *)&_LC53;
  local_60 = 0;
  uVar6 = *(undefined8 *)(this + 0x660);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = (Object *)0x10526c;
  local_68 = 0;
  local_50 = 0x1a;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  PopupMenu::add_item(uVar6,(String *)&local_58,10,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  plVar2 = *(long **)(this + 0x660);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  this_02 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_02);
  *(undefined **)(this_02 + 0x20) = &_LC53;
  *(undefined1 (*) [16])(this_02 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_02 = &PTR_hash_00106750;
  *(undefined8 *)(this_02 + 0x40) = 0;
  uVar6 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_02 + 0x10) = 0;
  *(undefined8 *)(this_02 + 0x30) = uVar6;
  *(code **)(this_02 + 0x38) = _menu_option;
  *(DebuggerEditorPlugin **)(this_02 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)this_02,(int)this_02 + 0x28);
  *(char **)(this_02 + 0x20) = "DebuggerEditorPlugin::_menu_option";
  Callable::Callable((Callable *)&local_58,this_02);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x240,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  this_03 = (RunInstancesDialog *)operator_new(0xe08,"");
  RunInstancesDialog::RunInstancesDialog(this_03);
  postinitialize_handler((Object *)this_03);
  *(RunInstancesDialog **)(this + 0x670) = this_03;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(*(undefined8 *)(EditorNode::singleton + 0x6c8),this_03,0,0);
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



/* EditorPlugin::selected_notify() */

void EditorPlugin::selected_notify(void)

{
  return;
}



/* EditorPlugin::edited_scene_changed() */

void EditorPlugin::edited_scene_changed(void)

{
  return;
}



/* DebuggerEditorPlugin::is_class_ptr(void*) const */

uint __thiscall DebuggerEditorPlugin::is_class_ptr(DebuggerEditorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x1068,(undefined4 *)param_1 == &EditorPlugin::get_class_ptr_static()::ptr)
         | (uint)CONCAT71(0x1068,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1068,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x1068,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* DebuggerEditorPlugin::_getv(StringName const&, Variant&) const */

undefined8 DebuggerEditorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DebuggerEditorPlugin::_setv(StringName const&, Variant const&) */

undefined8 DebuggerEditorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DebuggerEditorPlugin::_property_can_revertv(StringName const&) const */

undefined8 DebuggerEditorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* DebuggerEditorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 DebuggerEditorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DebuggerEditorPlugin::has_main_screen() const */

undefined8 DebuggerEditorPlugin::has_main_screen(void)

{
  return 0;
}



/* CallableCustomMethodPointer<DebuggerEditorPlugin, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DebuggerEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DebuggerEditorPlugin,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<DebuggerEditorPlugin, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DebuggerEditorPlugin,void,int>::get_argument_count
          (CallableCustomMethodPointer<DebuggerEditorPlugin,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<DebuggerEditorPlugin, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DebuggerEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DebuggerEditorPlugin,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* DebuggerEditorPlugin::_validate_propertyv(PropertyInfo&) const */

void DebuggerEditorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
    Node::_validate_property(param_1);
    return;
  }
  return;
}



/* CallableCustomMethodPointer<DebuggerEditorPlugin, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DebuggerEditorPlugin,void,int>::get_object
          (CallableCustomMethodPointer<DebuggerEditorPlugin,void,int> *this)

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
      goto LAB_0010338d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010338d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010338d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* DebuggerEditorPlugin::_get_class_namev() const */

undefined8 * DebuggerEditorPlugin::_get_class_namev(void)

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
LAB_00103453:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00103453;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"DebuggerEditorPlugin");
      goto LAB_001034be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DebuggerEditorPlugin");
LAB_001034be:
  return &_get_class_namev()::_class_name_static;
}



/* DebuggerEditorPlugin::get_plugin_name() const */

DebuggerEditorPlugin * __thiscall DebuggerEditorPlugin::get_plugin_name(DebuggerEditorPlugin *this)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)this = 0;
  String::parse_latin1((StrRange *)this);
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* DebuggerEditorPlugin::get_class() const */

void DebuggerEditorPlugin::get_class(void)

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
          CowData<char32_t>::_ref((CowData *)in_RDI);
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
        if (pvVar5 == (void *)0x0) goto LAB_001037f4;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001037f4:
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



/* DebuggerEditorPlugin::is_class(String const&) const */

undefined8 __thiscall DebuggerEditorPlugin::is_class(DebuggerEditorPlugin *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
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
            if (lVar5 == 0) goto LAB_0010390f;
            LOCK();
            lVar7 = *plVar1;
            bVar9 = lVar5 == lVar7;
            if (bVar9) {
              *plVar1 = lVar5 + 1;
              lVar7 = lVar5;
            }
            UNLOCK();
          } while (!bVar9);
          if (lVar7 != -1) {
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
LAB_0010390f:
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
    if (cVar6 != '\0') goto LAB_001039c3;
  }
  cVar6 = String::operator==(param_1,"DebuggerEditorPlugin");
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
              if (lVar5 == 0) goto LAB_00103b33;
              LOCK();
              lVar7 = *plVar1;
              bVar9 = lVar5 == lVar7;
              if (bVar9) {
                *plVar1 = lVar5 + 1;
                lVar7 = lVar5;
              }
              UNLOCK();
            } while (!bVar9);
            if (lVar7 != -1) {
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
LAB_00103b33:
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
      if (cVar6 != '\0') goto LAB_001039c3;
    }
    cVar6 = String::operator==(param_1,"EditorPlugin");
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
                if (lVar5 == 0) goto LAB_00103c13;
                LOCK();
                lVar7 = *plVar1;
                bVar9 = lVar5 == lVar7;
                if (bVar9) {
                  *plVar1 = lVar5 + 1;
                  lVar7 = lVar5;
                }
                UNLOCK();
              } while (!bVar9);
              if (lVar7 != -1) {
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
LAB_00103c13:
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
        if (cVar6 != '\0') goto LAB_001039c3;
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
                  if (lVar5 == 0) goto LAB_00103a9b;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar5 == lVar7;
                  if (bVar9) {
                    *plVar1 = lVar5 + 1;
                    lVar7 = lVar5;
                  }
                  UNLOCK();
                } while (!bVar9);
                if (lVar7 != -1) {
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
LAB_00103a9b:
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
          if (cVar6 != '\0') goto LAB_001039c3;
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar8 = String::operator==(param_1,"Object");
          return uVar8;
        }
        goto LAB_00103d29;
      }
    }
  }
LAB_001039c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00103d29:
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



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

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
  undefined *local_78;
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
  local_78 = &_LC6;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC6;
  local_98 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (undefined *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData *)&local_70);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00103ef8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData *)&local_58);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00103ef8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)pLVar6;
      local_68 = local_80;
      goto joined_r0x00103f16;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)pLVar6;
joined_r0x00103f16:
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
    CowData<char32_t>::_ref((CowData *)(puVar5 + 2));
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData *)(puVar5 + 8));
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list((StringName *)&local_78,pLVar6,true,(Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall EditorPlugin::_get_property_listv(EditorPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorPlugin";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorPlugin";
  local_98 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData *)&local_70);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_001042f8:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData *)&local_58);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_001042f8;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104315;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104315:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
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
    CowData<char32_t>::_ref((CowData *)(puVar5 + 2));
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData *)(puVar5 + 8));
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"EditorPlugin",false);
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



/* DebuggerEditorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
DebuggerEditorPlugin::_get_property_listv(DebuggerEditorPlugin *this,List *param_1,bool param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined1 (*pauVar4) [16];
  undefined4 *puVar5;
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
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "DebuggerEditorPlugin";
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DebuggerEditorPlugin";
  local_98 = 0;
  local_70 = 0x14;
  String::parse_latin1((StrRange *)&local_98);
  local_78 = (char *)((ulong)local_78 & 0xffffffff00000000);
  local_70 = 0;
  if (local_98 != 0) {
    CowData<char32_t>::_ref((CowData *)&local_70);
  }
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  if (local_90 == 0) {
LAB_00104748:
    local_50 = 0x80;
    StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData *)&local_58);
    local_50 = 0x80;
    if (local_60 != 0x11) goto LAB_00104748;
    StringName::StringName((StringName *)&local_80,(String *)&local_58,false);
    if (local_68 != local_80) {
      StringName::unref();
      lVar2 = *(long *)param_1;
      local_68 = local_80;
      goto joined_r0x00104765;
    }
    if ((StringName::configured != '\0') && (local_80 != 0)) {
      StringName::unref();
    }
  }
  lVar2 = *(long *)param_1;
joined_r0x00104765:
  if (lVar2 == 0) {
    pauVar4 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined1 (**) [16])param_1 = pauVar4;
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
    CowData<char32_t>::_ref((CowData *)(puVar5 + 2));
  }
  StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_68);
  puVar5[6] = local_60;
  if (*(long *)(puVar5 + 8) != local_58) {
    CowData<char32_t>::_ref((CowData *)(puVar5 + 8));
  }
  lVar3 = local_58;
  puVar5[10] = local_50;
  plVar1 = *(long **)param_1;
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
  StringName::StringName((StringName *)&local_78,"DebuggerEditorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorPlugin::_get_property_listv((EditorPlugin *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  long *plVar1;
  long lVar2;
  bool bVar3;
  
  bVar3 = StringName::configured != '\0';
  *(code **)this = EditorDebuggerServer::deinitialize;
  if (bVar3) {
    if (*(long *)(this + 0x648) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x630) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x618) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x600) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x5e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x5d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x5b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x5a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x588) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x570) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x558) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x540) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x528) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x510) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x4f8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x4e0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x4c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x4b0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x498) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x480) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x468) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x450) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x438) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00104d70;
    }
    if (*(long *)(this + 0x420) != 0) {
      StringName::unref();
    }
  }
LAB_00104d70:
  if (*(long *)(this + 0x418) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x418) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x418);
      *(undefined8 *)(this + 0x418) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (*(long *)(this + 0x410) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x410) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x410);
      *(undefined8 *)(this + 0x410) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Node::~Node((Node *)this);
      return;
    }
  }
  Node::~Node((Node *)this);
  return;
}



/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

{
  ~EditorPlugin(this);
  operator_delete(this,0x660);
  return;
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



/* DebuggerEditorPlugin::_notificationv(int, bool) */

void __thiscall
DebuggerEditorPlugin::_notificationv(DebuggerEditorPlugin *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0xd) {
      _update_debug_options(this);
      this[0x678] = (DebuggerEditorPlugin)0x0;
    }
    else if (param_1 == 0x11) {
      EditorFileServer::poll();
    }
    if ((code *)PTR__notification_00109008 != Node::_notification) {
      EditorPlugin::_notification(iVar1);
    }
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  if ((code *)PTR__notification_00109008 != Node::_notification) {
    EditorPlugin::_notification(iVar1);
  }
  if (param_1 == 0xd) {
    _update_debug_options(this);
    this[0x678] = (DebuggerEditorPlugin)0x0;
  }
  else if (param_1 == 0x11) {
    EditorFileServer::poll();
    return;
  }
  return;
}



/* DebuggerEditorPlugin::_initialize_classv() */

void DebuggerEditorPlugin::_initialize_classv(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorPlugin::initialize_class()::initialized == '\0') {
      if (Node::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Node";
        local_70 = 0;
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (undefined *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00109020 != Node::_bind_methods) {
          Node::_bind_methods();
        }
        Node::initialize_class()::initialized = '\x01';
      }
      local_58 = "Node";
      local_68 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "EditorPlugin";
      local_70 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      lVar2 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar2 + -0x10),false);
        }
      }
      if ((code *)PTR__bind_methods_00109010 != Node::_bind_methods) {
        EditorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_00109018 != Object::_bind_compatibility_methods) {
        EditorPlugin::_bind_compatibility_methods();
      }
      EditorPlugin::initialize_class()::initialized = '\x01';
    }
    local_58 = "EditorPlugin";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "DebuggerEditorPlugin";
    local_70 = 0;
    local_50 = 0x14;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
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
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    lVar2 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<DebuggerEditorPlugin, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DebuggerEditorPlugin,void,int>::call
          (CallableCustomMethodPointer<DebuggerEditorPlugin,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001062c8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_001062c8;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar4 = _LC93;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00106277. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0010638a;
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
LAB_001062c8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC92,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010638a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DebuggerEditorPlugin::DebuggerEditorPlugin(PopupMenu*) */

void DebuggerEditorPlugin::_GLOBAL__sub_I_DebuggerEditorPlugin(void)

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
/* EditorPlugin::~EditorPlugin() */

void __thiscall EditorPlugin::~EditorPlugin(EditorPlugin *this)

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
/* CallableCustomMethodPointer<DebuggerEditorPlugin, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DebuggerEditorPlugin,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DebuggerEditorPlugin,void,int> *this)

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


