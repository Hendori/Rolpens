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



/* GroupSettingsEditor::remove_node_references(Node*, StringName const&) */

uint __thiscall
GroupSettingsEditor::remove_node_references
          (GroupSettingsEditor *this,Node *param_1,StringName *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  Node *pNVar4;
  int iVar5;
  
  uVar1 = Node::is_in_group((StringName *)param_1);
  if ((char)uVar1 != '\0') {
    Node::remove_from_group((StringName *)param_1);
  }
  iVar5 = 0;
  while( true ) {
    iVar2 = Node::get_child_count(SUB81(param_1,0));
    if (iVar2 <= iVar5) break;
    pNVar4 = (Node *)Node::get_child((int)param_1,SUB41(iVar5,0));
    uVar3 = remove_node_references(this,pNVar4,param_2);
    uVar1 = uVar1 | uVar3;
    iVar5 = iVar5 + 1;
  }
  return uVar1;
}



/* GroupSettingsEditor::rename_node_references(Node*, StringName const&, StringName const&) */

uint __thiscall
GroupSettingsEditor::rename_node_references
          (GroupSettingsEditor *this,Node *param_1,StringName *param_2,StringName *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  Node *pNVar4;
  int iVar5;
  
  uVar1 = Node::is_in_group((StringName *)param_1);
  if ((char)uVar1 != '\0') {
    Node::remove_from_group((StringName *)param_1);
    Node::add_to_group((StringName *)param_1,SUB81(param_3,0));
  }
  iVar5 = 0;
  while( true ) {
    iVar2 = Node::get_child_count(SUB81(param_1,0));
    if (iVar2 <= iVar5) break;
    pNVar4 = (Node *)Node::get_child((int)param_1,SUB41(iVar5,0));
    uVar3 = rename_node_references(this,pNVar4,param_2,param_3);
    uVar1 = uVar1 | uVar3;
    iVar5 = iVar5 + 1;
  }
  return uVar1;
}



/* GroupSettingsEditor::show_message(String const&) */

void __thiscall GroupSettingsEditor::show_message(GroupSettingsEditor *this,String *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long in_FS_OFFSET;
  long local_30 [3];
  
  uVar2 = *(undefined8 *)(this + 0xa58);
  local_30[2] = *(long *)(in_FS_OFFSET + 0x28);
  local_30[0] = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_30,(CowData *)param_1);
  }
  AcceptDialog::set_text(uVar2);
  lVar3 = local_30[0];
  if (local_30[0] != 0) {
    LOCK();
    plVar1 = (long *)(local_30[0] + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30[0] = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  local_30[1] = 0;
  Window::popup_centered(*(Vector2i **)(this + 0xa58));
  if (local_30[2] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::get_name_box() const */

undefined8 __thiscall GroupSettingsEditor::get_name_box(GroupSettingsEditor *this)

{
  return *(undefined8 *)(this + 0xa68);
}



/* GroupSettingsEditor::connect_filesystem_dock_signals(FileSystemDock*) */

void __thiscall
GroupSettingsEditor::connect_filesystem_dock_signals
          (GroupSettingsEditor *this,FileSystemDock *param_1)

{
  code *pcVar1;
  char *pcVar2;
  long in_FS_OFFSET;
  long local_70;
  long local_68 [2];
  Callable local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  pcVar2 = (char *)ProjectSettings::get_singleton();
  create_custom_callable_function_pointer<ProjectSettings,StringName_const&>
            ((ProjectSettings *)local_68,pcVar2,
             (_func_void_StringName_ptr *)"&ProjectSettings::remove_scene_groups_cache");
  Callable::unbind((int)local_58);
  StringName::StringName((StringName *)&local_70,"files_moved",false);
  (*pcVar1)(param_1,(StringName *)&local_70,local_58,0);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  Callable::~Callable((Callable *)local_68);
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  pcVar2 = (char *)ProjectSettings::get_singleton();
  create_custom_callable_function_pointer<ProjectSettings,StringName_const&>
            ((ProjectSettings *)local_58,pcVar2,
             (_func_void_StringName_ptr *)"&ProjectSettings::remove_scene_groups_cache");
  StringName::StringName((StringName *)local_68,"file_removed",false);
  (*pcVar1)(param_1,(ProjectSettings *)local_68,local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_confirm_rename() */

void __thiscall GroupSettingsEditor::_confirm_rename(GroupSettingsEditor *this)

{
  Variant *pVVar1;
  Variant **ppVVar2;
  code *pcVar3;
  char cVar4;
  long *plVar5;
  Object *pOVar6;
  StringName *pSVar7;
  Variant *pVVar8;
  int iVar9;
  Variant *pVVar10;
  long in_FS_OFFSET;
  Variant local_e8 [8];
  String local_e0 [8];
  String local_d8 [8];
  String local_d0 [8];
  Variant local_c8 [8];
  long local_c0;
  long local_b8;
  long local_b0;
  Variant *local_a8;
  undefined1 auStack_a0 [16];
  int local_88 [2];
  undefined1 local_80 [16];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = (long *)Tree::get_selected();
  if (plVar5 == (long *)0x0) goto LAB_00100c0f;
  pcVar3 = *(code **)(*plVar5 + 0xb8);
  auStack_a0 = (undefined1  [16])0x0;
  local_a8 = (Variant *)0x0;
  StringName::StringName((StringName *)&local_b0,"__name",false);
  (*pcVar3)((Variant *)local_88,plVar5,(StringName *)&local_b0,&local_a8);
  Variant::operator_cast_to_String(local_e8);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_a8] != '\0') {
    Variant::_clear_internal();
  }
  LineEdit::get_text();
  String::strip_edges(SUB81(local_e0,0),SUB81((StringName *)&local_b0,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  cVar4 = String::operator==((String *)local_e8,local_e0);
  if (cVar4 == '\0') {
    pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"Rename Group");
    TTR((String *)&local_b0,(String *)&local_c0);
    EditorUndoRedoManager::create_action(pOVar6,(StringName *)&local_b0,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    String::operator+(local_d8,(String *)(this + 0xa10));
    String::operator+(local_d0,(String *)(this + 0xa10));
    pcVar3 = *(code **)(*plVar5 + 0xb8);
    auStack_a0 = (undefined1  [16])0x0;
    local_a8 = (Variant *)0x0;
    StringName::StringName((StringName *)&local_b0,"__description",false);
    (*pcVar3)((Variant *)local_88,plVar5,(StringName *)&local_b0,&local_a8);
    Variant::operator_cast_to_String(local_c8);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_88,(String *)local_c8);
    StringName::StringName((StringName *)&local_b0,local_d8,false);
    pSVar7 = (StringName *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_do_property(pOVar6,pSVar7,(Variant *)&local_b0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    StringName::StringName((StringName *)&local_b0,local_d8,false);
    pSVar7 = (StringName *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_undo_property(pOVar6,pSVar7,(Variant *)&local_b0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    StringName::StringName((StringName *)&local_b0,local_d0,false);
    pSVar7 = (StringName *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_do_property(pOVar6,pSVar7,(Variant *)&local_b0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_88,(String *)local_c8);
    StringName::StringName((StringName *)&local_b0,local_d0,false);
    pSVar7 = (StringName *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_undo_property(pOVar6,pSVar7,(Variant *)&local_b0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar4 = BaseButton::is_pressed();
    iVar9 = (int)&local_a8;
    if (cVar4 != '\0') {
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_e0);
      local_b8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)local_e8);
      StringName::StringName((StringName *)&local_c0,"rename_references",false);
      pVVar10 = (Variant *)local_40;
      Variant::Variant((Variant *)local_88,(String *)&local_b8);
      Variant::Variant((Variant *)local_70,(String *)&local_b0);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      auStack_a0._0_8_ = (Variant *)local_70;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)this,(Variant **)&local_c0,iVar9);
      pVVar8 = pVVar10;
      do {
        pVVar1 = pVVar8 + -0x18;
        pVVar8 = pVVar8 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar8 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_c0 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_e8);
      local_b8 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)local_e0);
      StringName::StringName((StringName *)&local_c0,"rename_references",false);
      Variant::Variant((Variant *)local_88,(String *)&local_b8);
      Variant::Variant((Variant *)local_70,(String *)&local_b0);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)this,(Variant **)&local_c0,iVar9)
      ;
      do {
        pVVar8 = pVVar10 + -0x18;
        pVVar10 = pVVar10 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar8] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar10 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_c0 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    }
    ppVVar2 = (Variant **)(CoreStringNames::singleton + 0x108);
    Variant::Variant((Variant *)local_88,"update_groups");
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)this,ppVVar2,iVar9);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    ppVVar2 = (Variant **)(CoreStringNames::singleton + 0x108);
    Variant::Variant((Variant *)local_88,"update_groups");
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)this,ppVVar2,iVar9);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_b0,(StringName *)(this + 0xa18));
    StringName::StringName((StringName *)&local_b8,"emit_signal",false);
    Variant::Variant((Variant *)local_88,(StringName *)&local_b0);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)this,(Variant **)&local_b8,iVar9);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (StringName::configured != '\0') {
      if (local_b8 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00100b0d;
      }
      if (local_b0 != 0) {
        StringName::unref();
      }
    }
LAB_00100b0d:
    StringName::StringName((StringName *)&local_b0,(StringName *)(this + 0xa18));
    StringName::StringName((StringName *)&local_b8,"emit_signal",false);
    Variant::Variant((Variant *)local_88,(StringName *)&local_b0);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)this,(Variant **)&local_b8,iVar9);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (StringName::configured != '\0') {
      if (local_b8 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00100bcf;
      }
      if (local_b0 != 0) {
        StringName::unref();
      }
    }
LAB_00100bcf:
    EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
LAB_00100c0f:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_check_new_group_name(String const&) */

String * GroupSettingsEditor::_check_new_group_name(String *param_1)

{
  char cVar1;
  StringName *pSVar2;
  String *in_RDX;
  long in_FS_OFFSET;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)in_RDX == 0) || (*(uint *)(*(long *)in_RDX + -8) < 2)) {
    local_50 = 0;
    local_48 = "";
    local_40 = 0;
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Invalid group name. It cannot be empty.";
    local_58 = 0;
    local_40 = 0x27;
    String::parse_latin1((StrRange *)&local_58);
    TTR(param_1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else {
    pSVar2 = (StringName *)ProjectSettings::get_singleton();
    StringName::StringName((StringName *)&local_48,in_RDX,false);
    cVar1 = ProjectSettings::has_global_group(pSVar2);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
    if (cVar1 == '\0') {
      *(undefined8 *)param_1 = 0;
      String::parse_latin1(param_1,"");
    }
    else {
      local_48 = (char *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)in_RDX);
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"");
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"A group with the name \'%s\' already exists.");
      TTR((String *)&local_50,(String *)&local_60);
      vformat<String>(param_1,(String *)&local_50,(StringName *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_check_rename() */

void __thiscall GroupSettingsEditor::_check_rename(GroupSettingsEditor *this)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  StringName *pSVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  long local_a8;
  Variant local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  String::strip_edges(SUB81((String *)&local_a8,0),SUB81((CowData<char32_t> *)&local_88,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  plVar1 = *(long **)(this + 0xa98);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  pcVar2 = *(code **)(*plVar1 + 0xb8);
  StringName::StringName((StringName *)&local_88,"__name",false);
  (*pcVar2)(local_58,plVar1,(CowData<char32_t> *)&local_88,&local_78);
  Variant::operator_cast_to_String(local_a0);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  cVar3 = String::operator==((String *)&local_a8,(String *)local_a0);
  if (cVar3 == '\0') {
    if ((local_a8 == 0) || (*(uint *)(local_a8 + -8) < 2)) {
      uVar5 = *(undefined8 *)(this + 0xab0);
      local_88 = "";
      local_90 = 0;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_90);
      local_98 = 0;
      local_88 = "Group can\'t be empty.";
      local_80 = 0x15;
      String::parse_latin1((StrRange *)&local_98);
    }
    else {
      pSVar4 = (StringName *)ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_88,(String *)&local_a8,false);
      cVar3 = ProjectSettings::has_global_group(pSVar4);
      if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
        StringName::unref();
      }
      if (cVar3 == '\0') goto LAB_0010133e;
      uVar5 = *(undefined8 *)(this + 0xab0);
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"");
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"Group already exists.");
    }
    TTR((String *)&local_88,(String *)&local_98);
    EditorValidationPanel::set_message(uVar5,0,(CowData<char32_t> *)&local_88,2,1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
LAB_0010133e:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_group_name_text_changed(String const&) */

void __thiscall
GroupSettingsEditor::_group_name_text_changed(GroupSettingsEditor *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_30;
  CowData<char32_t> local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  String::strip_edges(SUB81(local_28,0),SUB81(param_1,0));
  _check_new_group_name((String *)&local_30);
  CowData<char32_t>::_unref(local_28);
  Control::set_tooltip_text(*(String **)(this + 0xa78));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa78),0));
  lVar2 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_show_remove_dialog() */

void __thiscall GroupSettingsEditor::_show_remove_dialog(GroupSettingsEditor *this)

{
  String *pSVar1;
  code *pcVar2;
  long lVar3;
  ConfirmationDialog *this_00;
  BoxContainer *this_01;
  Label *this_02;
  CheckBox *this_03;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa80) == 0) {
    this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
    ConfirmationDialog::ConfirmationDialog(this_00);
    postinitialize_handler((Object *)this_00);
    lVar3 = *(long *)this_00;
    *(ConfirmationDialog **)(this + 0xa80) = this_00;
    pcVar2 = *(code **)(lVar3 + 0x108);
    create_custom_callable_function_pointer<GroupSettingsEditor>
              ((GroupSettingsEditor *)&local_58,(char *)this,
               (_func_void *)"&GroupSettingsEditor::_confirm_delete");
    (*pcVar2)(this_00,SceneStringNames::singleton + 0x268,(GroupSettingsEditor *)&local_58,0);
    Callable::~Callable((Callable *)&local_58);
    this_01 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_01,true);
    this_01[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_01 = &PTR__initialize_classv_001141d8;
    postinitialize_handler((Object *)this_01);
    this_02 = (Label *)operator_new(0xad8,"");
    local_58 = (char *)0x0;
    Label::Label(this_02,(String *)&local_58);
    postinitialize_handler((Object *)this_02);
    *(Label **)(this + 0xa90) = this_02;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    Node::add_child(this_01,*(undefined8 *)(this + 0xa90),0,0);
    this_03 = (CheckBox *)operator_new(0xc60,"");
    local_58 = (char *)0x0;
    CheckBox::CheckBox(this_03,(String *)&local_58);
    postinitialize_handler((Object *)this_03);
    *(CheckBox **)(this + 0xa88) = this_03;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    local_58 = "";
    pSVar1 = *(String **)(this + 0xa88);
    local_60 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Delete references from all scenes";
    local_68 = 0;
    local_50 = 0x21;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_58,(String *)&local_68);
    Button::set_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    Node::add_child(this_01,*(undefined8 *)(this + 0xa88),0,0);
    Node::add_child(*(undefined8 *)(this + 0xa80),this_01,0,0);
    Node::add_child(this,*(undefined8 *)(this + 0xa80),0,0);
  }
  lVar3 = Tree::get_selected();
  if (lVar3 != 0) {
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa88),0));
    pSVar1 = *(String **)(this + 0xa90);
    TreeItem::get_text((int)(CowData<char32_t> *)&local_60);
    local_58 = "";
    local_70 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_58 = "Delete group \"%s\"?";
    local_78 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    vformat<String>((CowData<char32_t> *)&local_58,(String *)&local_68,
                    (CowData<char32_t> *)&local_60);
    Label::set_text(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    Window::reset_size();
    local_48 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xa80));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_item_button_pressed(Object*, int, int, MouseButton) */

void __thiscall
GroupSettingsEditor::_item_button_pressed
          (GroupSettingsEditor *this,long param_1,undefined8 param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  
  if (param_5 != 1) {
    return;
  }
  if (param_1 != 0) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
    if (lVar1 != 0) {
      TreeItem::select((int)lVar1);
      _show_remove_dialog(this);
      return;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GroupSettingsEditor::_show_rename_dialog() */

void __thiscall GroupSettingsEditor::_show_rename_dialog(GroupSettingsEditor *this)

{
  code *pcVar1;
  undefined8 uVar2;
  Vector2 *pVVar3;
  Callable *pCVar4;
  long lVar5;
  String *pSVar6;
  long *plVar7;
  ConfirmationDialog *this_00;
  BoxContainer *this_01;
  BoxContainer *this_02;
  Label *this_03;
  LineEdit *this_04;
  EditorValidationPanel *this_05;
  CallableCustom *this_06;
  CheckBox *this_07;
  long in_FS_OFFSET;
  float fVar8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  long local_88 [2];
  undefined8 local_78;
  undefined1 local_70 [16];
  float local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa98) == 0) {
    this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
    ConfirmationDialog::ConfirmationDialog(this_00);
    postinitialize_handler((Object *)this_00);
    *(ConfirmationDialog **)(this + 0xa98) = this_00;
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Rename Group");
    TTR((String *)local_88,(String *)&local_a0);
    Window::set_title((String *)this_00);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    plVar7 = *(long **)(this + 0xa98);
    pcVar1 = *(code **)(*plVar7 + 0x108);
    create_custom_callable_function_pointer<GroupSettingsEditor>
              ((GroupSettingsEditor *)local_88,(char *)this,
               (_func_void *)"&GroupSettingsEditor::_confirm_rename");
    (*pcVar1)(plVar7,SceneStringNames::singleton + 0x268,(String *)local_88,0);
    Callable::~Callable((Callable *)local_88);
    this_01 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_01,true);
    this_01[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_01 = &PTR__initialize_classv_001141d8;
    postinitialize_handler((Object *)this_01);
    Node::add_child(*(undefined8 *)(this + 0xa98),this_01,0,0);
    this_02 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_02,false);
    *(undefined ***)this_02 = &PTR__initialize_classv_00113e60;
    this_02[0xa0c] = (BoxContainer)0x1;
    postinitialize_handler((Object *)this_02);
    this_03 = (Label *)operator_new(0xad8,"");
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Name:");
    TTR((String *)local_88,(String *)&local_a0);
    Label::Label(this_03,(String *)local_88);
    postinitialize_handler((Object *)this_03);
    Node::add_child(this_02,this_03,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    this_04 = (LineEdit *)operator_new(0xbb0,"");
    local_88[0] = 0;
    LineEdit::LineEdit(this_04,(String *)local_88);
    postinitialize_handler((Object *)this_04);
    *(LineEdit **)(this + 0xaa0) = this_04;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    pVVar3 = *(Vector2 **)(this + 0xaa0);
    fVar8 = (float)EditorScale::get_scale();
    local_58[1] = 1.0;
    local_58[0] = fVar8 * __LC46;
    Control::set_custom_minimum_size(pVVar3);
    Node::add_child(this_02,*(undefined8 *)(this + 0xaa0),0,0);
    Node::add_child(this_01,this_02,0,0);
    AcceptDialog::register_text_enter(*(LineEdit **)(this + 0xa98));
    this_05 = (EditorValidationPanel *)operator_new(0xac0,"");
    EditorValidationPanel::EditorValidationPanel(this_05);
    postinitialize_handler((Object *)this_05);
    local_98[0] = 0;
    *(EditorValidationPanel **)(this + 0xab0) = this_05;
    String::parse_latin1((String *)local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Group name is valid.");
    TTR((String *)local_88,(String *)&local_a0);
    EditorValidationPanel::add_line((int)this_05,(String *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    pCVar4 = *(Callable **)(this + 0xab0);
    create_custom_callable_function_pointer<GroupSettingsEditor>
              ((GroupSettingsEditor *)local_88,(char *)this,
               (_func_void *)"&GroupSettingsEditor::_check_rename");
    EditorValidationPanel::set_update_callback(pCVar4);
    Callable::~Callable((Callable *)local_88);
    EditorValidationPanel::set_accept_button(*(Button **)(this + 0xab0));
    plVar7 = *(long **)(this + 0xaa0);
    lVar5 = *(long *)(this + 0xab0);
    pcVar1 = *(code **)(*plVar7 + 0x108);
    this_06 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_06);
    *(undefined1 (*) [16])(this_06 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(this_06 + 0x40) = 0;
    *(long *)(this_06 + 0x28) = lVar5;
    uVar2 = *(undefined8 *)(lVar5 + 0x60);
    *(undefined **)(this_06 + 0x20) = &_LC21;
    *(undefined8 *)(this_06 + 0x30) = uVar2;
    *(undefined ***)this_06 = &PTR_hash_001149e8;
    *(code **)(this_06 + 0x38) = EditorValidationPanel::update;
    *(undefined8 *)(this_06 + 0x10) = 0;
    CallableCustomMethodPointerBase::_setup((uint *)this_06,(int)this_06 + 0x28);
    *(char **)(this_06 + 0x20) = "EditorValidationPanel::update";
    Callable::Callable((Callable *)local_98,this_06);
    Callable::unbind((int)(String *)local_88);
    (*pcVar1)(plVar7,SceneStringNames::singleton + 0x270,(String *)local_88);
    Callable::~Callable((Callable *)local_88);
    Callable::~Callable((Callable *)local_98);
    Node::add_child(this_01,*(undefined8 *)(this + 0xab0),0,0);
    this_07 = (CheckBox *)operator_new(0xc60,"");
    local_88[0] = 0;
    CheckBox::CheckBox(this_07,(String *)local_88);
    postinitialize_handler((Object *)this_07);
    *(CheckBox **)(this + 0xaa8) = this_07;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    pSVar6 = *(String **)(this + 0xaa8);
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Rename references in all scenes");
    TTR((String *)local_88,(String *)&local_a0);
    Button::set_text(pSVar6);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    Node::add_child(this_01,*(undefined8 *)(this + 0xaa8),0,0);
    Node::add_child(this,*(undefined8 *)(this + 0xa98),0,0);
  }
  plVar7 = (long *)Tree::get_selected();
  if (plVar7 != (long *)0x0) {
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xaa8),0));
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    pcVar1 = *(code **)(*plVar7 + 0xb8);
    StringName::StringName((StringName *)local_88,"__name",false);
    (*pcVar1)((Variant *)local_58,plVar7,(StringName *)local_88,&local_78);
    Variant::operator_cast_to_String((Variant *)local_98);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    uVar2 = *(undefined8 *)(this + 0xaa0);
    local_88[0] = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)local_98);
    LineEdit::set_text(uVar2,(StringName *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    plVar7 = *(long **)(this + 0xa98);
    pcVar1 = *(code **)(*plVar7 + 0xa8);
    Variant::Variant((Variant *)local_58,(String *)local_98);
    StringName::StringName((StringName *)local_88,"__name",false);
    (*pcVar1)(plVar7,(StringName *)local_88,(Variant *)local_58);
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    EditorValidationPanel::update();
    Window::reset_size();
    local_58[0] = 0.0;
    local_58[1] = 0.0;
    Window::popup_centered(*(Vector2i **)(this + 0xa98));
    LineEdit::select_all();
    Control::grab_focus();
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::GroupSettingsEditor() */

void __thiscall GroupSettingsEditor::GroupSettingsEditor(GroupSettingsEditor *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  String *pSVar4;
  BoxContainer *this_00;
  Label *pLVar5;
  LineEdit *pLVar6;
  Button *this_01;
  Tree *this_02;
  CallableCustom *this_03;
  AcceptDialog *this_04;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  local_58 = "global_group/";
  *(undefined ***)this = &PTR__initialize_classv_00114550;
  this[0xa0c] = (GroupSettingsEditor)0x1;
  *(undefined8 *)(this + 0xa10) = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)(this + 0xa10));
  StringName::StringName((StringName *)(this + 0xa18),"group_changed",false);
  this[0xa50] = (GroupSettingsEditor)0x0;
  *(undefined8 *)(this + 0xa48) = 2;
  *(undefined1 (*) [16])(this + 0xa28) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa58) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa68) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaa8) = (undefined1  [16])0x0;
  pSVar4 = (String *)ProjectSettings::get_singleton();
  local_58 = "global_group/";
  local_60 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_60);
  ProjectSettings::add_hidden_prefix(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00113e60;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  pLVar5 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(pLVar5,(String *)&local_58);
  postinitialize_handler((Object *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Name:";
  local_68 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::set_text((String *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_00,pLVar5,0,0);
  pLVar6 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (char *)0x0;
  LineEdit::LineEdit(pLVar6,(String *)&local_58);
  postinitialize_handler((Object *)pLVar6);
  *(LineEdit **)(this + 0xa68) = pLVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa68),3);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xa68),0));
  plVar1 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<GroupSettingsEditor,String_const&>
            ((GroupSettingsEditor *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&GroupSettingsEditor::_group_name_text_changed");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x270,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  plVar1 = *(long **)(this + 0xa68);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<GroupSettingsEditor,String_const&>
            ((GroupSettingsEditor *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&GroupSettingsEditor::_text_submitted");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x278,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa68),0,0);
  pLVar5 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(pLVar5,(String *)&local_58);
  postinitialize_handler((Object *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Description:";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::set_text((String *)pLVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_00,pLVar5,0,0);
  pLVar6 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (char *)0x0;
  LineEdit::LineEdit(pLVar6,(String *)&local_58);
  postinitialize_handler((Object *)pLVar6);
  *(LineEdit **)(this + 0xa70) = pLVar6;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xa70),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa70),3);
  plVar1 = *(long **)(this + 0xa70);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<GroupSettingsEditor,String_const&>
            ((GroupSettingsEditor *)&local_58,(char *)this,
             (_func_void_String_ptr *)"&GroupSettingsEditor::_text_submitted");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x278,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa70),0,0);
  this_01 = (Button *)operator_new(0xc10,"");
  local_58 = (char *)0x0;
  Button::Button(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(Button **)(this + 0xa78) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  local_58 = "";
  local_60 = 0;
  pSVar4 = *(String **)(this + 0xa78);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Add";
  local_68 = 0;
  local_50 = 3;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::set_text(pSVar4);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa78),0));
  plVar1 = *(long **)(this + 0xa78);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<GroupSettingsEditor>
            ((GroupSettingsEditor *)&local_58,(char *)this,
             (_func_void *)"&GroupSettingsEditor::_add_group");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa78),0,0);
  this_02 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_02);
  postinitialize_handler((Object *)this_02);
  *(Tree **)(this + 0xa60) = this_02;
  Node::set_auto_translate_mode(this_02,2);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xa60),0));
  Tree::set_select_mode(*(undefined8 *)(this + 0xa60),0);
  Tree::set_allow_reselect(SUB81(*(undefined8 *)(this + 0xa60),0));
  Tree::set_columns((int)*(undefined8 *)(this + 0xa60));
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xa60),0));
  local_58 = "";
  local_60 = 0;
  uVar3 = *(undefined8 *)(this + 0xa60);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Name";
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Tree::set_column_title((int)uVar3,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  uVar3 = *(undefined8 *)(this + 0xa60);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Description";
  local_68 = 0;
  local_50 = 0xb;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Tree::set_column_title((int)uVar3,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xa60),true);
  plVar1 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<GroupSettingsEditor>
            ((GroupSettingsEditor *)&local_58,(char *)this,
             (_func_void *)"&GroupSettingsEditor::_item_edited");
  StringName::StringName((StringName *)&local_60,"item_edited",false);
  (*pcVar2)(plVar1,(StrRange *)&local_60,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar1 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<GroupSettingsEditor>
            ((GroupSettingsEditor *)&local_58,(char *)this,
             (_func_void *)"&GroupSettingsEditor::_show_rename_dialog");
  StringName::StringName((StringName *)&local_60,"item_activated",false);
  (*pcVar2)(plVar1,(StrRange *)&local_60,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar1 = *(long **)(this + 0xa60);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  this_03 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this_03);
  *(undefined **)(this_03 + 0x20) = &_LC21;
  *(GroupSettingsEditor **)(this_03 + 0x28) = this;
  *(undefined1 (*) [16])(this_03 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)this_03 = &PTR_hash_00114b08;
  *(undefined8 *)(this_03 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(this_03 + 0x10) = 0;
  *(undefined8 *)(this_03 + 0x30) = uVar3;
  *(code **)(this_03 + 0x38) = _item_button_pressed;
  CallableCustomMethodPointerBase::_setup((uint *)this_03,(int)this_03 + 0x28);
  *(char **)(this_03 + 0x20) = "GroupSettingsEditor::_item_button_pressed";
  Callable::Callable((Callable *)&local_58,this_03);
  StringName::StringName((StringName *)&local_60,"button_clicked",false);
  (*pcVar2)(plVar1,(StrRange *)&local_60,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa60),3);
  Node::add_child(this,*(undefined8 *)(this + 0xa60),1,0);
  this_04 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(this_04);
  postinitialize_handler((Object *)this_04);
  *(AcceptDialog **)(this + 0xa58) = this_04;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,this_04,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_item_edited() [clone .part.0] */

void __thiscall GroupSettingsEditor::_item_edited(GroupSettingsEditor *this)

{
  Variant **ppVVar1;
  code *pcVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  Object *pOVar6;
  StringName *pSVar7;
  long in_FS_OFFSET;
  long local_c8;
  String local_c0 [8];
  Variant local_b8 [8];
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  Variant *local_98;
  undefined1 local_90 [16];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar5 = (long *)Tree::get_edited();
  iVar4 = Tree::get_edited_column();
  if (plVar5 == (long *)0x0) goto LAB_00102b48;
  pOVar6 = (Object *)EditorUndoRedoManager::get_singleton();
  if (iVar4 != 1) goto LAB_00102b48;
  TreeItem::get_text((int)(CowData<char32_t> *)&local_c8);
  TreeItem::get_text((int)local_c0);
  pcVar2 = *(code **)(*plVar5 + 0xb8);
  local_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  StringName::StringName((StringName *)&local_a0,"__description",false);
  (*pcVar2)((Variant *)local_78,plVar5,(StringName *)&local_a0,&local_98);
  Variant::operator_cast_to_String(local_b8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  cVar3 = String::operator==(local_c0,(String *)local_b8);
  if (cVar3 == '\0') {
    String::operator+((String *)&local_a0,(String *)(this + 0xa10));
    if (local_c8 != local_a0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      local_c8 = local_a0;
      local_a0 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    local_a8 = 0;
    String::parse_latin1((String *)&local_a8,"");
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"Set Group Description");
    TTR((String *)&local_a0,(String *)&local_b0);
    EditorUndoRedoManager::create_action(pOVar6,(StringName *)&local_a0,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    Variant::Variant((Variant *)local_78,local_c0);
    StringName::StringName((StringName *)&local_a0,(String *)&local_c8,false);
    pSVar7 = (StringName *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_do_property(pOVar6,pSVar7,(Variant *)&local_a0);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_78,(String *)local_b8);
    StringName::StringName((StringName *)&local_a0,(String *)&local_c8,false);
    pSVar7 = (StringName *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_undo_property(pOVar6,pSVar7,(Variant *)&local_a0);
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    ppVVar1 = (Variant **)(CoreStringNames::singleton + 0x108);
    Variant::Variant((Variant *)local_78,"update_groups");
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    iVar4 = (int)&local_98;
    local_98 = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)this,ppVVar1,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    ppVVar1 = (Variant **)(CoreStringNames::singleton + 0x108);
    Variant::Variant((Variant *)local_78,"update_groups");
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_98 = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)this,ppVVar1,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_a0,(StringName *)(this + 0xa18));
    StringName::StringName((StringName *)&local_a8,"emit_signal",false);
    Variant::Variant((Variant *)local_78,(StringName *)&local_a0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_98 = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp(pOVar6,(StringName *)this,(Variant **)&local_a8,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (StringName::configured != '\0') {
      if (local_a8 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00102fa0;
      }
      if (local_a0 != 0) {
        StringName::unref();
      }
    }
LAB_00102fa0:
    StringName::StringName((StringName *)&local_a0,(StringName *)(this + 0xa18));
    StringName::StringName((StringName *)&local_a8,"emit_signal",false);
    Variant::Variant((Variant *)local_78,(StringName *)&local_a0);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_98 = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp(pOVar6,(StringName *)this,(Variant **)&local_a8,iVar4);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (StringName::configured != '\0') {
      if (local_a8 != 0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_0010305a;
      }
      if (local_a0 != 0) {
        StringName::unref();
      }
    }
LAB_0010305a:
    EditorUndoRedoManager::commit_action(SUB81(pOVar6,0));
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
LAB_00102b48:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_item_edited() */

void __thiscall GroupSettingsEditor::_item_edited(GroupSettingsEditor *this)

{
  if (this[0xa50] != (GroupSettingsEditor)0x0) {
    return;
  }
  _item_edited(this);
  return;
}



/* GroupSettingsEditor::_add_group(String const&, String const&) */

void __thiscall
GroupSettingsEditor::_add_group(GroupSettingsEditor *this,String *param_1,String *param_2)

{
  Variant **ppVVar1;
  undefined8 uVar2;
  Object *pOVar3;
  StringName *pSVar4;
  int iVar5;
  long in_FS_OFFSET;
  char *local_b8;
  long local_b0;
  undefined8 local_a8;
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
  String::strip_edges(SUB81((CowData<char32_t> *)&local_b8,0),SUB81(param_1,0));
  _check_new_group_name((String *)&local_b0);
  if ((local_b0 != 0) && (1 < *(uint *)(local_b0 + -8))) {
    uVar2 = *(undefined8 *)(this + 0xa58);
    local_98 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_b0);
    AcceptDialog::set_text(uVar2,(CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    local_78[0] = 0;
    local_78[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xa58));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    goto LAB_0010362a;
  }
  pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
  local_a0 = 0;
  local_90 = 0;
  local_98 = "";
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = "Add Group";
  local_a8 = 0;
  local_90 = 9;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((String *)&local_98,(String *)&local_a8);
  EditorUndoRedoManager::create_action(pOVar3,(String *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  String::operator+((String *)&local_98,(String *)(this + 0xa10));
  if (local_b8 != local_98) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_b8 = local_98;
    local_98 = (char *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Variant::Variant((Variant *)local_78,param_2);
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  pSVar4 = (StringName *)ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_do_property(pOVar3,pSVar4,(Variant *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  StringName::StringName((StringName *)&local_98,(String *)&local_b8,false);
  pSVar4 = (StringName *)ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_undo_property(pOVar3,pSVar4,(Variant *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  ppVVar1 = (Variant **)(CoreStringNames::singleton + 0x108);
  Variant::Variant((Variant *)local_78,"update_groups");
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  iVar5 = (int)local_88;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,ppVVar1,iVar5);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  ppVVar1 = (Variant **)(CoreStringNames::singleton + 0x108);
  Variant::Variant((Variant *)local_78,"update_groups");
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,ppVVar1,iVar5);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_98,(StringName *)(this + 0xa18));
  StringName::StringName((StringName *)&local_a0,"emit_signal",false);
  Variant::Variant((Variant *)local_78,(StringName *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_a0,iVar5);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (StringName::configured != '\0') {
    if (local_a0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00103541;
    }
    if (local_98 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_00103541:
  StringName::StringName((StringName *)&local_98,(StringName *)(this + 0xa18));
  StringName::StringName((StringName *)&local_a0,"emit_signal",false);
  Variant::Variant((Variant *)local_78,(StringName *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,(Variant **)&local_a0,iVar5);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (StringName::configured != '\0') {
    if (local_a0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001035f2;
    }
    if (local_98 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001035f2:
  EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
  LineEdit::clear();
  LineEdit::clear();
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
LAB_0010362a:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_add_group() */

void __thiscall GroupSettingsEditor::_add_group(GroupSettingsEditor *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  LineEdit::get_text();
  _add_group(this,(String *)&local_30,(String *)&local_28);
  lVar2 = local_30;
  if (local_30 != 0) {
    LOCK();
    plVar1 = (long *)(local_30 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_30 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  lVar2 = local_28;
  if (local_28 != 0) {
    LOCK();
    plVar1 = (long *)(local_28 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_28 = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_text_submitted(String const&) */

void GroupSettingsEditor::_text_submitted(String *param_1)

{
  char cVar1;
  long in_FS_OFFSET;
  CowData<char32_t> local_30 [8];
  CowData<char32_t> local_28 [8];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = BaseButton::is_disabled();
  if (cVar1 == '\0') {
    LineEdit::get_text();
    LineEdit::get_text();
    _add_group((GroupSettingsEditor *)param_1,(String *)local_28,(String *)local_30);
    CowData<char32_t>::_unref(local_28);
    CowData<char32_t>::_unref(local_30);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_bind_methods() */

void GroupSettingsEditor::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  MethodBind *pMVar3;
  long in_FS_OFFSET;
  undefined8 local_d8;
  long local_d0;
  char *local_c8;
  undefined8 local_c0;
  char *local_b8;
  undefined8 local_b0;
  CowData<StringName> local_a8 [8];
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_b8,(char ***)"remove_references",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar3 = create_method_bind<GroupSettingsEditor,StringName_const&>(remove_references);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"rename_references",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar3 = create_method_bind<GroupSettingsEditor,StringName_const&,StringName_const&>
                     (rename_references);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_b8,(char ***)"update_groups",0);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar3 = create_method_bind<GroupSettingsEditor>(update_groups);
  ClassDB::bind_methodfi(1,pMVar3,false,(MethodDefinition *)&local_b8,(Variant **)0x0,0);
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_a8);
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  local_d0 = 0;
  local_b8 = "group_changed";
  local_b0 = 0xd;
  String::parse_latin1((StrRange *)&local_d0);
  local_b8 = (char *)0x0;
  local_b0 = 0;
  local_98 = 0;
  local_90 = 0;
  local_88 = 6;
  local_80 = 1;
  local_78[0] = 0;
  local_68 = 0;
  local_60 = 0;
  local_50 = 0;
  _local_a8 = (undefined1  [16])0x0;
  if (local_d0 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_d0);
  }
  local_d8 = 0;
  local_c8 = "GroupSettingsEditor";
  local_c0 = 0x13;
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_68);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (lStack_a0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_confirm_delete() */

void __thiscall GroupSettingsEditor::_confirm_delete(GroupSettingsEditor *this)

{
  Variant **ppVVar1;
  char cVar2;
  long lVar3;
  CowData *pCVar4;
  Object *pOVar5;
  StringName *pSVar6;
  int iVar7;
  long in_FS_OFFSET;
  Variant **local_f0;
  long local_c0;
  undefined8 local_b8;
  String local_b0 [8];
  undefined8 local_a8;
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
  lVar3 = Tree::get_selected();
  if (lVar3 == 0) goto LAB_001041d1;
  TreeItem::get_text((int)(String *)&local_c0);
  StringName::StringName((StringName *)&local_98,(String *)&local_c0,false);
  pCVar4 = (CowData *)
           HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
           ::operator[]((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                         *)(this + 0xa20),(StringName *)&local_98);
  local_b8 = 0;
  if (*(long *)pCVar4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,pCVar4);
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  String::operator+(local_b0,(String *)(this + 0xa10));
  pOVar5 = (Object *)EditorUndoRedoManager::get_singleton();
  local_a0 = 0;
  local_90 = 0;
  local_98 = "";
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = "Remove Group";
  local_a8 = 0;
  local_90 = 0xc;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((String *)&local_98,(String *)&local_a8);
  EditorUndoRedoManager::create_action(pOVar5,(StringName *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  StringName::StringName((StringName *)&local_98,local_b0,false);
  pSVar6 = (StringName *)ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_do_property(pOVar5,pSVar6,(Variant *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  Variant::Variant((Variant *)local_78,(String *)&local_b8);
  StringName::StringName((StringName *)&local_98,local_b0,false);
  pSVar6 = (StringName *)ProjectSettings::get_singleton();
  EditorUndoRedoManager::add_undo_property(pOVar5,pSVar6,(Variant *)&local_98);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  cVar2 = BaseButton::is_pressed();
  if (cVar2 != '\0') {
    local_98 = (char *)0x0;
    if (local_c0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_c0);
    }
    StringName::StringName((StringName *)&local_a0,"remove_references",false);
    Variant::Variant((Variant *)local_78,(String *)&local_98);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_88[0] = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp
              (pOVar5,(StringName *)this,(Variant **)&local_a0,(int)local_88);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  }
  local_f0 = local_88;
  ppVVar1 = (Variant **)(CoreStringNames::singleton + 0x108);
  Variant::Variant((Variant *)local_78,"update_groups");
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  iVar7 = (int)local_f0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)this,ppVVar1,iVar7);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  ppVVar1 = (Variant **)(CoreStringNames::singleton + 0x108);
  Variant::Variant((Variant *)local_78,"update_groups");
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)this,ppVVar1,iVar7);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_98,(StringName *)(this + 0xa18));
  StringName::StringName((StringName *)&local_a0,"emit_signal",false);
  Variant::Variant((Variant *)local_78,(StringName *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar5,(StringName *)this,(Variant **)&local_a0,iVar7);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (StringName::configured != '\0') {
    if (local_a0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001040ed;
    }
    if (local_98 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001040ed:
  StringName::StringName((StringName *)&local_98,(StringName *)(this + 0xa18));
  StringName::StringName((StringName *)&local_a0,"emit_signal",false);
  Variant::Variant((Variant *)local_78,(StringName *)&local_98);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar5,(StringName *)this,(Variant **)&local_a0,iVar7);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (StringName::configured != '\0') {
    if (local_a0 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001041a6;
    }
    if (local_98 != (char *)0x0) {
      StringName::unref();
    }
  }
LAB_001041a6:
  EditorUndoRedoManager::commit_action(SUB81(pOVar5,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
LAB_001041d1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::update_groups() [clone .part.0] */

void __thiscall GroupSettingsEditor::update_groups(GroupSettingsEditor *this)

{
  long *plVar1;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  *this_00;
  code *pcVar2;
  Object *pOVar3;
  void *pvVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  *pHVar9;
  undefined1 (*pauVar11) [16];
  StringName *pSVar12;
  long *plVar13;
  String *pSVar14;
  CowData *pCVar15;
  uint uVar16;
  int iVar17;
  undefined8 *puVar18;
  long lVar19;
  long in_FS_OFFSET;
  List<StringName,DefaultAllocator> *local_80;
  undefined1 (*local_78) [16];
  long local_70;
  Object *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  ulong uVar10;
  
  this_00 = (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
             *)(this + 0xa20);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa50] = (GroupSettingsEditor)0x1;
  ProjectSettings::get_singleton();
  pHVar9 = (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
            *)ProjectSettings::get_global_groups_list();
  if (pHVar9 != this_00) {
    uVar16 = *(uint *)(this + 0xa48);
    uVar6 = *(uint *)(hash_table_size_primes + (ulong)uVar16 * 4);
    if ((*(int *)(this + 0xa4c) != 0) && (*(long *)(this + 0xa28) != 0)) {
      if (uVar6 != 0) {
        lVar19 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa30) + lVar19) != 0) {
            *(int *)(*(long *)(this + 0xa30) + lVar19) = 0;
            pvVar4 = *(void **)(*(long *)(this + 0xa28) + lVar19 * 2);
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar4 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar4,false);
            *(undefined8 *)(*(long *)(this + 0xa28) + lVar19 * 2) = 0;
          }
          lVar19 = lVar19 + 4;
        } while ((ulong)uVar6 * 4 - lVar19 != 0);
        uVar16 = *(uint *)(this + 0xa48);
        uVar6 = *(uint *)(hash_table_size_primes + (ulong)uVar16 * 4);
      }
      *(undefined4 *)(this + 0xa4c) = 0;
      *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
    }
    if (uVar6 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar9 + 0x28) * 4)) {
      if (uVar16 != 0x1c) {
        uVar10 = (ulong)uVar16;
        do {
          uVar6 = (int)uVar10 + 1;
          uVar10 = (ulong)uVar6;
          if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(pHVar9 + 0x28) * 4) <=
              *(uint *)(hash_table_size_primes + uVar10 * 4)) {
            if (uVar6 != uVar16) {
              if (*(long *)(this + 0xa28) == 0) {
                *(uint *)(this + 0xa48) = uVar6;
              }
              else {
                HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                ::_resize_and_rehash(this_00,uVar6);
              }
            }
            goto LAB_00104481;
          }
        } while (uVar6 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_00104481:
    if ((*(long *)(pHVar9 + 8) != 0) &&
       (plVar13 = *(long **)(pHVar9 + 0x18), plVar13 != (long *)0x0)) {
      do {
        HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
        ::insert((StringName *)&local_68,(String *)this_00,(bool)((char)plVar13 + '\x10'));
        plVar13 = (long *)*plVar13;
      } while (plVar13 != (long *)0x0);
    }
  }
  Tree::clear();
  iVar7 = Tree::create_item(*(TreeItem **)(this + 0xa60),0);
  puVar18 = *(undefined8 **)(this + 0xa38);
  local_78 = (undefined1 (*) [16])0x0;
  if (puVar18 == (undefined8 *)0x0) {
    List<StringName,DefaultAllocator>::sort_custom<NoCaseComparator>
              ((List<StringName,DefaultAllocator> *)&local_78);
  }
  else {
    pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar11[1] = 0;
    *pauVar11 = (undefined1  [16])0x0;
    local_78 = pauVar11;
    do {
      pSVar12 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pSVar12 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pSVar12 + 0x10) = (undefined1  [16])0x0;
      StringName::operator=(pSVar12,(StringName *)(puVar18 + 2));
      lVar19 = *(long *)(*pauVar11 + 8);
      *(undefined1 (**) [16])(pSVar12 + 0x18) = pauVar11;
      *(undefined8 *)(pSVar12 + 8) = 0;
      *(long *)(pSVar12 + 0x10) = lVar19;
      if (lVar19 != 0) {
        *(StringName **)(lVar19 + 8) = pSVar12;
      }
      lVar19 = *(long *)*pauVar11;
      *(StringName **)(*pauVar11 + 8) = pSVar12;
      if (lVar19 == 0) {
        puVar18 = (undefined8 *)*puVar18;
        *(int *)pauVar11[1] = *(int *)pauVar11[1] + 1;
        *(StringName **)*pauVar11 = pSVar12;
      }
      else {
        puVar18 = (undefined8 *)*puVar18;
        *(int *)pauVar11[1] = *(int *)pauVar11[1] + 1;
      }
    } while (puVar18 != (undefined8 *)0x0);
    List<StringName,DefaultAllocator>::sort_custom<NoCaseComparator>
              ((List<StringName,DefaultAllocator> *)&local_78);
    pSVar12 = *(StringName **)*pauVar11;
    if (pSVar12 != (StringName *)0x0) {
      do {
        plVar13 = (long *)Tree::create_item(*(TreeItem **)(this + 0xa60),iVar7);
        pcVar2 = *(code **)(*plVar13 + 0xa8);
        Variant::Variant((Variant *)local_58,pSVar12);
        StringName::StringName((StringName *)&local_68,"__name",false);
        (*pcVar2)(plVar13,(StringName *)&local_68,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        pcVar2 = *(code **)(*plVar13 + 0xa8);
        pSVar14 = (String *)
                  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                  ::operator[](this_00,pSVar12);
        Variant::Variant((Variant *)local_58,pSVar14);
        StringName::StringName((StringName *)&local_68,"__description",false);
        (*pcVar2)(plVar13,(StringName *)&local_68,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        lVar19 = *(long *)pSVar12;
        if (lVar19 == 0) {
          local_70 = 0;
        }
        else {
          pOVar3 = *(Object **)(lVar19 + 8);
          local_70 = 0;
          if (pOVar3 == (Object *)0x0) {
            if (*(long *)(lVar19 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)(lVar19 + 0x10));
            }
          }
          else {
            local_60 = strlen((char *)pOVar3);
            local_68 = pOVar3;
            String::parse_latin1((StrRange *)&local_70);
          }
        }
        TreeItem::set_text(plVar13,0,(StrRange *)&local_70);
        lVar19 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar19 + -0x10),false);
          }
        }
        iVar17 = (int)plVar13;
        TreeItem::set_editable(iVar17,false);
        pCVar15 = (CowData *)
                  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                  ::operator[](this_00,pSVar12);
        local_68 = (Object *)0x0;
        if (*(long *)pCVar15 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar15);
        }
        TreeItem::set_text(plVar13,1,(StringName *)&local_68);
        pOVar3 = local_68;
        if (local_68 != (Object *)0x0) {
          LOCK();
          plVar13 = (long *)((long)local_68 + -0x10);
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (*plVar13 == 0) {
            local_68 = (Object *)0x0;
            Memory::free_static((void *)((long)pOVar3 + -0x10),false);
          }
        }
        TreeItem::set_editable(iVar17,true);
        local_68 = (Object *)&_LC21;
        local_70 = 0;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_70);
        if ((update_groups()::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar8 = __cxa_guard_acquire(&update_groups()::{lambda()#1}::operator()()::sname),
           iVar8 != 0)) {
          _scs_create((char *)&update_groups()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&update_groups()::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&update_groups()::{lambda()#1}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_68);
        TreeItem::add_button(iVar17,(Ref *)0x2,(int)(StringName *)&local_68,true,(String *)0x0);
        if (((local_68 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar3 = local_68, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_68), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))();
          Memory::free_static(pOVar3,false);
        }
        lVar19 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar13 = (long *)(local_70 + -0x10);
          *plVar13 = *plVar13 + -1;
          UNLOCK();
          if (*plVar13 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar19 + -0x10),false);
          }
        }
        TreeItem::set_selectable(iVar17,true);
        pSVar12 = *(StringName **)(pSVar12 + 8);
      } while (pSVar12 != (StringName *)0x0);
    }
  }
  local_80 = (List<StringName,DefaultAllocator> *)&local_78;
  this[0xa50] = (GroupSettingsEditor)0x0;
  List<StringName,DefaultAllocator>::~List(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::update_groups() */

void __thiscall GroupSettingsEditor::update_groups(GroupSettingsEditor *this)

{
  if (this[0xa50] != (GroupSettingsEditor)0x0) {
    return;
  }
  update_groups(this);
  return;
}



/* GroupSettingsEditor::_notification(int) */

void __thiscall GroupSettingsEditor::_notification(GroupSettingsEditor *this,int param_1)

{
  Ref *pRVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 10) {
    if (this[0xa50] == (GroupSettingsEditor)0x0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        update_groups(this);
        return;
      }
      goto LAB_00104c55;
    }
  }
  else if (param_1 == 0x2d) {
    pRVar1 = *(Ref **)(this + 0xa78);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_38);
    Button::set_button_icon(pRVar1);
    if (local_38 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_38);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_38 + 0x140))(local_38);
          Memory::free_static(local_38,false);
        }
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104c55:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<EditorData::EditedScene>::_unref() [clone .part.0] */

void __thiscall CowData<EditorData::EditedScene>::_unref(CowData<EditorData::EditedScene> *this)

{
  long lVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  NodePath *this_00;
  long lVar7;
  long *plVar8;
  
  lVar1 = *(long *)this;
  if (lVar1 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar2 = *(long *)(lVar1 + -8);
  this_00 = (NodePath *)(lVar1 + 0x48);
  lVar7 = 0;
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    do {
      NodePath::~NodePath(this_00);
      Dictionary::~Dictionary((Dictionary *)(this_00 + -8));
      CowData<EditorSelectionHistory::HistoryElement>::_unref
                ((CowData<EditorSelectionHistory::HistoryElement> *)(this_00 + -0x18));
      plVar8 = *(long **)(this_00 + -0x28);
      if (plVar8 != (long *)0x0) {
        do {
          pvVar3 = (void *)*plVar8;
          if (pvVar3 == (void *)0x0) {
            if ((int)plVar8[2] == 0) {
              Memory::free_static(plVar8,false);
            }
            else {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
            }
            goto LAB_00104d2e;
          }
          if (plVar8 == *(long **)((long)pvVar3 + 0x18)) {
            lVar6 = *(long *)((long)pvVar3 + 8);
            lVar4 = *(long *)((long)pvVar3 + 0x10);
            *plVar8 = lVar6;
            if (pvVar3 == (void *)plVar8[1]) {
              plVar8[1] = lVar4;
            }
            if (lVar4 != 0) {
              *(long *)(lVar4 + 8) = lVar6;
              lVar6 = *(long *)((long)pvVar3 + 8);
            }
            if (lVar6 != 0) {
              *(long *)(lVar6 + 0x10) = lVar4;
            }
            Memory::free_static(pvVar3,false);
            *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          }
          plVar8 = *(long **)(this_00 + -0x28);
        } while ((int)plVar8[2] != 0);
        Memory::free_static(plVar8,false);
        *(undefined8 *)(this_00 + -0x28) = 0;
      }
LAB_00104d2e:
      Dictionary::~Dictionary((Dictionary *)(this_00 + -0x30));
      if (*(long *)(this_00 + -0x40) != 0) {
        LOCK();
        plVar8 = (long *)(*(long *)(this_00 + -0x40) + -0x10);
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          lVar6 = *(long *)(this_00 + -0x40);
          *(undefined8 *)(this_00 + -0x40) = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar7 = lVar7 + 1;
      this_00 = this_00 + 0x60;
    } while (lVar2 != lVar7);
  }
  Memory::free_static((void *)(lVar1 + -0x10),false);
  return;
}



/* CowData<EditorData::EditedScene>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<EditorData::EditedScene>::_copy_on_write(CowData<EditorData::EditedScene> *this)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined1 (*pauVar7) [16];
  undefined8 *puVar8;
  long lVar9;
  CowData<EditorSelectionHistory::HistoryElement> *this_00;
  CowData<EditorSelectionHistory::HistoryElement> *pCVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  bool bVar14;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  lVar1 = *(long *)(*(long *)this + -8);
  uVar11 = 0x10;
  if (lVar1 * 0x60 != 0) {
    uVar11 = lVar1 * 0x60 - 1;
    uVar11 = uVar11 | uVar11 >> 1;
    uVar11 = uVar11 | uVar11 >> 2;
    uVar11 = uVar11 | uVar11 >> 4;
    uVar11 = uVar11 | uVar11 >> 8;
    uVar11 = uVar11 | uVar11 >> 0x10;
    uVar11 = (uVar11 | uVar11 >> 0x20) + 0x11;
  }
  puVar6 = (undefined8 *)Memory::alloc_static(uVar11,false);
  if (puVar6 == (undefined8 *)0x0) {
    _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                     "Parameter \"mem_new\" is null.",0,0);
    return;
  }
  lVar12 = 0;
  *puVar6 = 1;
  puVar6[1] = lVar1;
  if (lVar1 != 0) {
    this_00 = (CowData<EditorSelectionHistory::HistoryElement> *)(puVar6 + 8);
    do {
      pCVar10 = this_00 + *(long *)this + (-0x40 - (long)puVar6);
      uVar2 = *(undefined8 *)pCVar10;
      *(undefined8 *)(this_00 + -0x28) = 0;
      lVar4 = *(long *)(pCVar10 + 8);
      *(undefined8 *)(this_00 + -0x30) = uVar2;
      if (lVar4 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(this_00 + -0x28),(CowData *)(pCVar10 + 8));
      }
      *(undefined8 *)(this_00 + -0x20) = *(undefined8 *)(pCVar10 + 0x10);
      Dictionary::Dictionary((Dictionary *)(this_00 + -0x18),(Dictionary *)(pCVar10 + 0x18));
      plVar3 = *(long **)(pCVar10 + 0x20);
      *(undefined8 *)(this_00 + -0x10) = 0;
      if ((plVar3 != (long *)0x0) && (puVar13 = (undefined8 *)*plVar3, puVar13 != (undefined8 *)0x0)
         ) {
        pauVar7 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this_00 + -0x10) = pauVar7;
        *(undefined4 *)pauVar7[1] = 0;
        *pauVar7 = (undefined1  [16])0x0;
        do {
          while( true ) {
            puVar8 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
            uVar2 = *puVar13;
            puVar8[1] = 0;
            *puVar8 = uVar2;
            plVar3 = *(long **)(this_00 + -0x10);
            lVar4 = plVar3[1];
            puVar8[3] = plVar3;
            puVar8[2] = lVar4;
            if (lVar4 != 0) {
              *(undefined8 **)(lVar4 + 8) = puVar8;
            }
            plVar3[1] = (long)puVar8;
            if (*plVar3 != 0) break;
            puVar13 = (undefined8 *)puVar13[1];
            *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
            *plVar3 = (long)puVar8;
            if (puVar13 == (undefined8 *)0x0) goto LAB_00104fdb;
          }
          puVar13 = (undefined8 *)puVar13[1];
          *(int *)(plVar3 + 2) = (int)plVar3[2] + 1;
        } while (puVar13 != (undefined8 *)0x0);
      }
LAB_00104fdb:
      *(undefined8 *)this_00 = 0;
      if (*(long *)(pCVar10 + 0x30) != 0) {
        CowData<EditorSelectionHistory::HistoryElement>::_unref(this_00);
        if (*(long *)(pCVar10 + 0x30) != 0) {
          plVar3 = (long *)(*(long *)(pCVar10 + 0x30) + -0x10);
          do {
            lVar4 = *plVar3;
            if (lVar4 == 0) goto LAB_0010501e;
            LOCK();
            lVar9 = *plVar3;
            bVar14 = lVar4 == lVar9;
            if (bVar14) {
              *plVar3 = lVar4 + 1;
              lVar9 = lVar4;
            }
            UNLOCK();
          } while (!bVar14);
          if (lVar9 != -1) {
            *(undefined8 *)this_00 = *(undefined8 *)(pCVar10 + 0x30);
          }
        }
      }
LAB_0010501e:
      lVar12 = lVar12 + 1;
      *(undefined4 *)(this_00 + 8) = *(undefined4 *)(pCVar10 + 0x38);
      Dictionary::Dictionary((Dictionary *)(this_00 + 0x10),(Dictionary *)(pCVar10 + 0x40));
      NodePath::NodePath((NodePath *)(this_00 + 0x18),(NodePath *)(pCVar10 + 0x48));
      *(undefined4 *)(this_00 + 0x20) = *(undefined4 *)(pCVar10 + 0x50);
      *(undefined8 *)(this_00 + 0x28) = *(undefined8 *)(pCVar10 + 0x58);
      this_00 = this_00 + 0x60;
    } while (lVar1 != lVar12);
  }
  if (*(long *)this != 0) {
    LOCK();
    plVar3 = (long *)(*(long *)this + -0x10);
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      _unref(this);
    }
  }
  *(undefined8 **)this = puVar6 + 2;
  return;
}



/* GroupSettingsEditor::_modify_references(StringName const&, StringName const&, bool) */

void __thiscall
GroupSettingsEditor::_modify_references
          (GroupSettingsEditor *this,StringName *param_1,StringName *param_2,bool param_3)

{
  uint *puVar1;
  String *pSVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
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
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  undefined1 auVar43 [16];
  undefined1 auVar44 [16];
  undefined1 auVar45 [16];
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  char cVar50;
  char cVar51;
  char cVar52;
  uint uVar53;
  uint uVar54;
  long lVar55;
  ulong uVar56;
  Object *pOVar57;
  Object *pOVar58;
  long *plVar59;
  uint *puVar60;
  bool bVar61;
  int iVar62;
  long lVar63;
  ulong uVar64;
  CowData<char32_t> *pCVar65;
  CowData<char32_t> *pCVar66;
  long *plVar67;
  void *pvVar68;
  int *piVar69;
  uint uVar70;
  char *pcVar71;
  ulong uVar72;
  uint *puVar73;
  uint *puVar74;
  ulong uVar75;
  undefined8 *puVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  void *pvVar80;
  long in_FS_OFFSET;
  long *local_1b0;
  String *local_1a8;
  String *local_198;
  undefined8 local_120;
  String local_118 [8];
  undefined8 local_110 [2];
  long *local_100;
  EditorProgress local_f8 [16];
  Object *local_e8;
  undefined8 local_e0;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined8 local_88;
  HashSet local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_d8 = (undefined1  [16])0x0;
  local_c8 = (undefined1  [16])0x0;
  local_b8 = _LC56;
  ProjectSettings::get_singleton();
  lVar55 = ProjectSettings::get_scene_groups_cache();
  local_50 = 0;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  uVar56 = 1;
  if (5 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar55 + 0x28) * 4)) {
    do {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar55 + 0x28) * 4) <=
          *(uint *)(hash_table_size_primes + uVar56 * 4)) {
        local_50 = uVar56 & 0xffffffff;
        goto LAB_001051c7;
      }
      uVar56 = uVar56 + 1;
    } while (uVar56 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
LAB_001051c7:
  if ((*(int *)(lVar55 + 0x2c) == 0) ||
     (plVar67 = *(long **)(lVar55 + 0x18), plVar67 == (long *)0x0)) {
LAB_0010627d:
    uVar77 = 0;
  }
  else {
    do {
      HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
      ::insert((StringName *)local_a8,local_78,(bool)((char)plVar67 + '\x10'));
      plVar67 = (long *)*plVar67;
    } while (plVar67 != (long *)0x0);
    if ((long *)local_60._0_8_ == (long *)0x0) goto LAB_0010627d;
    plVar67 = (long *)local_60._0_8_;
    do {
      if ((plVar67[3] != 0) && (*(int *)((long)plVar67 + 0x3c) != 0)) {
        uVar77 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar67 + 7) * 4);
        uVar56 = CONCAT44(0,uVar77);
        lVar55 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(plVar67 + 7) * 8);
        if (*(long *)param_1 == 0) {
          uVar78 = StringName::get_empty_hash();
        }
        else {
          uVar78 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar78 == 0) {
          uVar78 = 1;
        }
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar78 * lVar55;
        auVar26._8_8_ = 0;
        auVar26._0_8_ = uVar56;
        lVar63 = SUB168(auVar8 * auVar26,8);
        uVar70 = *(uint *)(plVar67[6] + lVar63 * 4);
        iVar62 = SUB164(auVar8 * auVar26,8);
        if (uVar70 != 0) {
          uVar54 = 0;
          while ((uVar78 != uVar70 ||
                 (*(long *)(plVar67[3] + (ulong)*(uint *)(plVar67[4] + lVar63 * 4) * 8) !=
                  *(long *)param_1))) {
            uVar54 = uVar54 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)(iVar62 + 1) * lVar55;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar56;
            lVar63 = SUB168(auVar9 * auVar27,8);
            uVar70 = *(uint *)(plVar67[6] + lVar63 * 4);
            iVar62 = SUB164(auVar9 * auVar27,8);
            if ((uVar70 == 0) ||
               (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar70 * lVar55, auVar28._8_8_ = 0,
               auVar28._0_8_ = uVar56, auVar11._8_8_ = 0,
               auVar11._0_8_ = (ulong)((uVar77 + iVar62) - SUB164(auVar10 * auVar28,8)) * lVar55,
               auVar29._8_8_ = 0, auVar29._0_8_ = uVar56, SUB164(auVar11 * auVar29,8) < uVar54))
            goto LAB_001053ab;
          }
          lVar55 = plVar67[2];
          if (lVar55 == 0) {
            local_e8 = (Object *)0x0;
          }
          else {
            pcVar71 = *(char **)(lVar55 + 8);
            local_e8 = (Object *)0x0;
            if (pcVar71 == (char *)0x0) {
              if (*(long *)(lVar55 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)(lVar55 + 0x10));
              }
            }
            else {
              local_a8._8_8_ = strlen(pcVar71);
              local_a8._0_8_ = pcVar71;
              String::parse_latin1((StrRange *)&local_e8);
            }
          }
          HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                    ((String *)local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        }
      }
LAB_001053ab:
      plVar67 = (long *)*plVar67;
    } while (plVar67 != (long *)0x0);
    uVar77 = local_b8._4_4_;
  }
  local_198 = (String *)local_a8;
  local_1a8 = (String *)&local_e8;
  EditorData::get_edited_scenes();
  CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene> *)&local_100);
  plVar67 = local_100;
  CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene> *)&local_100);
  uVar78 = uVar77;
  plVar59 = local_100;
  if (local_100 != (long *)0x0) {
    plVar59 = local_100 + local_100[-1] * 0xc;
  }
  for (; plVar67 != plVar59; plVar67 = plVar67 + 0xc) {
    if (*plVar67 != 0) {
      if ((((plVar67[1] != 0) && (1 < *(uint *)(plVar67[1] + -8))) &&
          (uVar46 = local_d8._0_8_, local_d8._0_8_ != 0)) && (uVar77 != 0)) {
        uVar70 = *(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4);
        lVar55 = *(long *)(hash_table_size_primes_inv + (local_b8 & 0xffffffff) * 8);
        uVar53 = String::hash();
        uVar56 = CONCAT44(0,uVar70);
        uVar49 = local_c8._8_8_;
        uVar54 = 1;
        if (uVar53 != 0) {
          uVar54 = uVar53;
        }
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)uVar54 * lVar55;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar56;
        lVar63 = SUB168(auVar12 * auVar30,8);
        uVar53 = *(uint *)(local_c8._8_8_ + lVar63 * 4);
        iVar62 = SUB164(auVar12 * auVar30,8);
        if (uVar53 != 0) {
          uVar79 = 0;
          do {
            if (uVar53 == uVar54) {
              cVar50 = String::operator==((String *)
                                          (uVar46 + (ulong)*(uint *)(local_d8._8_8_ + lVar63 * 4) *
                                                    8),(String *)(plVar67 + 1));
              if (cVar50 != '\0') goto LAB_00105444;
            }
            uVar79 = uVar79 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)(iVar62 + 1) * lVar55;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar56;
            lVar63 = SUB168(auVar13 * auVar31,8);
            uVar53 = *(uint *)(uVar49 + lVar63 * 4);
            iVar62 = SUB164(auVar13 * auVar31,8);
          } while ((uVar53 != 0) &&
                  (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar53 * lVar55, auVar32._8_8_ = 0,
                  auVar32._0_8_ = uVar56, auVar15._8_8_ = 0,
                  auVar15._0_8_ = (ulong)((uVar70 + iVar62) - SUB164(auVar14 * auVar32,8)) * lVar55,
                  auVar33._8_8_ = 0, auVar33._0_8_ = uVar56, uVar79 <= SUB164(auVar15 * auVar33,8)))
          ;
        }
      }
      uVar78 = uVar78 + 1;
    }
LAB_00105444:
  }
  local_120 = 0;
  if (param_3) {
    String::parse_latin1((String *)&local_120,"rename_reference");
    auVar44._8_8_ = 0;
    auVar44._0_8_ = local_a8._8_8_;
    local_a8 = auVar44 << 0x40;
    String::parse_latin1(local_198,"");
    pcVar71 = "Renaming Group References";
  }
  else {
    String::parse_latin1((String *)&local_120,"remove_references");
    auVar45._8_8_ = 0;
    auVar45._0_8_ = local_a8._8_8_;
    local_a8 = auVar45 << 0x40;
    String::parse_latin1(local_198,"");
    pcVar71 = "Removing Group References";
  }
  local_e8 = (Object *)0x0;
  String::parse_latin1(local_1a8,pcVar71);
  TTR(local_118,local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_198);
  EditorProgress::EditorProgress(local_f8,(String *)&local_120,local_118,uVar78,false,false);
  local_a8 = (undefined1  [16])0x0;
  local_88 = _LC56;
  local_98 = (undefined1  [16])0x0;
  CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene> *)&local_100);
  plVar67 = local_100;
  CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene> *)&local_100);
  local_1b0 = local_100;
  if (local_100 != (long *)0x0) {
    local_1b0 = local_100 + local_100[-1] * 0xc;
  }
  cVar50 = '\0';
  if (local_1b0 != plVar67) {
    cVar50 = false;
    do {
      if (*plVar67 != 0) {
        cVar52 = cVar50 + '\x01';
        EditorProgress::step((String *)local_f8,(int)(String *)(plVar67 + 1),(bool)cVar50);
        if (param_3) {
          cVar51 = rename_node_references(this,(Node *)*plVar67,param_1,param_2);
        }
        else {
          cVar51 = remove_node_references(this,(Node *)*plVar67,param_1);
        }
        cVar50 = cVar52;
        if ((plVar67[1] != 0) && (1 < *(uint *)(plVar67[1] + -8))) {
          uVar46 = local_d8._0_8_;
          if ((local_d8._0_8_ != 0) && (uVar77 != 0)) {
            uVar78 = *(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4);
            lVar55 = *(long *)(hash_table_size_primes_inv + (local_b8 & 0xffffffff) * 8);
            uVar56 = CONCAT44(0,uVar78);
            uVar54 = String::hash();
            uVar49 = local_c8._8_8_;
            uVar70 = 1;
            if (uVar54 != 0) {
              uVar70 = uVar54;
            }
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)uVar70 * lVar55;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar56;
            lVar63 = SUB168(auVar16 * auVar34,8);
            uVar54 = *(uint *)(local_c8._8_8_ + lVar63 * 4);
            if (uVar54 != 0) {
              iVar62 = SUB164(auVar16 * auVar34,8);
              uVar53 = 0;
LAB_001058b8:
              if (uVar54 != uVar70) goto LAB_00105868;
              uVar47 = local_d8._8_8_;
              puVar74 = (uint *)(local_d8._8_8_ + lVar63 * 4);
              cVar52 = String::operator==((String *)(uVar46 + (ulong)*puVar74 * 8),
                                          (String *)(plVar67 + 1));
              if (cVar52 == '\0') goto LAB_00105868;
              uVar48 = local_c8._0_8_;
              uVar70 = *puVar74;
              puVar4 = (uint *)(local_c8._0_8_ + (ulong)uVar70 * 4);
              uVar54 = *puVar4;
              uVar72 = (ulong)uVar54;
              auVar20._8_8_ = 0;
              auVar20._0_8_ = (ulong)(uVar54 + 1) * lVar55;
              auVar38._8_8_ = 0;
              auVar38._0_8_ = uVar56;
              lVar63 = SUB168(auVar20 * auVar38,8) * 4;
              uVar53 = SUB164(auVar20 * auVar38,8);
              uVar75 = (ulong)uVar53;
              puVar74 = (uint *)(uVar49 + lVar63);
              if ((*puVar74 == 0) ||
                 (auVar21._8_8_ = 0, auVar21._0_8_ = (ulong)*puVar74 * lVar55, auVar39._8_8_ = 0,
                 auVar39._0_8_ = uVar56, auVar22._8_8_ = 0,
                 auVar22._0_8_ = (ulong)((uVar78 + uVar53) - SUB164(auVar21 * auVar39,8)) * lVar55,
                 auVar40._8_8_ = 0, auVar40._0_8_ = uVar56, SUB164(auVar22 * auVar40,8) == 0)) {
                uVar75 = (ulong)uVar54;
              }
              else {
                while( true ) {
                  puVar60 = (uint *)(lVar63 + uVar47);
                  puVar1 = (uint *)(uVar47 + uVar72 * 4);
                  puVar73 = (uint *)(uVar72 * 4 + uVar49);
                  puVar5 = (undefined4 *)(local_c8._0_8_ + (ulong)*puVar60 * 4);
                  puVar6 = (undefined4 *)(local_c8._0_8_ + (ulong)*puVar1 * 4);
                  uVar7 = *puVar6;
                  *puVar6 = *puVar5;
                  *puVar5 = uVar7;
                  uVar54 = *puVar74;
                  *puVar74 = *puVar73;
                  *puVar73 = uVar54;
                  uVar54 = *puVar60;
                  *puVar60 = *puVar1;
                  *puVar1 = uVar54;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = (ulong)((int)uVar75 + 1) * lVar55;
                  auVar43._8_8_ = 0;
                  auVar43._0_8_ = uVar56;
                  uVar64 = SUB168(auVar25 * auVar43,8);
                  lVar63 = uVar64 * 4;
                  puVar74 = (uint *)(uVar49 + lVar63);
                  if ((*puVar74 == 0) ||
                     (auVar23._8_8_ = 0, auVar23._0_8_ = (ulong)*puVar74 * lVar55, auVar41._8_8_ = 0
                     , auVar41._0_8_ = uVar56, auVar24._8_8_ = 0,
                     auVar24._0_8_ =
                          (ulong)((SUB164(auVar25 * auVar43,8) + uVar78) -
                                 SUB164(auVar23 * auVar41,8)) * lVar55, auVar42._8_8_ = 0,
                     auVar42._0_8_ = uVar56, SUB164(auVar24 * auVar42,8) == 0)) break;
                  uVar72 = uVar75;
                  uVar75 = uVar64 & 0xffffffff;
                }
              }
              *(undefined4 *)(uVar49 + uVar75 * 4) = 0;
              pCVar65 = (CowData<char32_t> *)(uVar46 + (ulong)uVar70 * 8);
              CowData<char32_t>::_unref(pCVar65);
              uVar77 = uVar77 - 1;
              local_b8 = CONCAT44(uVar77,(undefined4)local_b8);
              if (uVar70 < uVar77) {
                *(undefined8 *)pCVar65 = 0;
                pCVar66 = (CowData<char32_t> *)(uVar46 + (ulong)uVar77 * 8);
                CowData<char32_t>::_ref(pCVar65,(CowData *)pCVar66);
                CowData<char32_t>::_unref(pCVar66);
                uVar78 = *(uint *)(uVar48 + (ulong)uVar77 * 4);
                *puVar4 = uVar78;
                *(uint *)(uVar47 + (ulong)uVar78 * 4) = uVar70;
              }
            }
          }
LAB_00105a6e:
          if (cVar51 != '\0') {
            HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(local_1a8)
            ;
          }
        }
      }
      plVar67 = plVar67 + 0xc;
    } while (local_1b0 != plVar67);
  }
  if (local_88._4_4_ != 0) {
    EditorNode::save_scene_list(EditorNode::singleton);
    SceneTreeEditor::_update_tree(SUB81(*(undefined8 *)(SceneTreeDock::singleton + 0xac0),0));
  }
  if (uVar77 != 0) {
    uVar46 = local_d8._0_8_;
    lVar55 = 0;
    do {
      local_110[0] = 0;
      local_e0 = 0;
      bVar61 = (bool)(cVar50 + (char)lVar55);
      pSVar2 = (String *)(uVar46 + lVar55 * 8);
      local_e8 = (Object *)&_LC21;
      String::parse_latin1((StrRange *)local_110);
      ResourceLoader::load(local_1a8,pSVar2,(StrRange *)local_110,1,0);
      iVar62 = (int)pSVar2;
      if (local_e8 == (Object *)0x0) {
LAB_00106138:
        CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
        EditorProgress::step((String *)local_f8,iVar62,bVar61);
LAB_00106155:
        _err_print_error("_modify_references","editor/group_settings_editor.cpp",0xef,
                         "Condition \"packed_scene.is_null()\" is true. Continuing.",0,0);
      }
      else {
        pOVar57 = (Object *)__dynamic_cast(local_e8,&Object::typeinfo,&PackedScene::typeinfo,0);
        if (pOVar57 == (Object *)0x0) {
LAB_00105bb6:
          cVar52 = RefCounted::unreference();
          pOVar58 = local_e8;
          if ((cVar52 != '\0') && (cVar52 = predelete_handler(local_e8), cVar52 != '\0')) {
            (**(code **)(*(long *)pOVar58 + 0x140))();
            Memory::free_static(pOVar58,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
          EditorProgress::step((String *)local_f8,iVar62,bVar61);
          if (pOVar57 == (Object *)0x0) goto LAB_00106155;
        }
        else {
          cVar52 = RefCounted::reference();
          if (cVar52 == '\0') {
            if (local_e8 == (Object *)0x0) goto LAB_00106138;
            pOVar57 = (Object *)0x0;
            goto LAB_00105bb6;
          }
          if (local_e8 != (Object *)0x0) goto LAB_00105bb6;
          CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
          EditorProgress::step((String *)local_f8,iVar62,bVar61);
        }
        if (param_3) {
          PackedScene::get_state();
          cVar52 = SceneState::rename_group_references((StringName *)local_e8,param_1);
          if ((local_e8 == (Object *)0x0) || (cVar51 = RefCounted::unreference(), cVar51 == '\0'))
          goto LAB_00105c36;
LAB_00105f98:
          pOVar58 = local_e8;
          cVar51 = predelete_handler(local_e8);
          if (cVar51 == '\0') goto LAB_00105c36;
          (**(code **)(*(long *)pOVar58 + 0x140))();
          Memory::free_static(pOVar58,false);
          if (cVar52 != '\0') goto LAB_00105fd8;
LAB_00105c3f:
          cVar52 = RefCounted::unreference();
        }
        else {
          PackedScene::get_state();
          cVar52 = SceneState::remove_group_references((StringName *)local_e8);
          if ((local_e8 != (Object *)0x0) && (cVar51 = RefCounted::unreference(), cVar51 != '\0'))
          goto LAB_00105f98;
LAB_00105c36:
          if (cVar52 == '\0') goto LAB_00105c3f;
LAB_00105fd8:
          local_e8 = (Object *)0x0;
          pOVar58 = (Object *)__dynamic_cast(pOVar57,&Object::typeinfo,&Resource::typeinfo,0);
          if ((pOVar58 != (Object *)0x0) &&
             (local_e8 = pOVar58, cVar52 = RefCounted::reference(), cVar52 == '\0')) {
            local_e8 = (Object *)0x0;
          }
          ResourceSaver::save((Ref *)local_1a8,pSVar2,0);
          if (((local_e8 == (Object *)0x0) ||
              (cVar52 = RefCounted::unreference(), pOVar58 = local_e8, cVar52 == '\0')) ||
             (cVar52 = predelete_handler(local_e8), cVar52 == '\0')) goto LAB_00105c3f;
          (**(code **)(*(long *)pOVar58 + 0x140))(pOVar58);
          Memory::free_static(pOVar58,false);
          cVar52 = RefCounted::unreference();
        }
        if ((cVar52 != '\0') && (cVar52 = predelete_handler(pOVar57), cVar52 != '\0')) {
          (**(code **)(*(long *)pOVar57 + 0x140))(pOVar57);
          Memory::free_static(pOVar57,false);
        }
      }
      if ((int)uVar77 <= (int)lVar55 + 1) break;
      lVar55 = lVar55 + 1;
    } while( true );
  }
  pvVar68 = (void *)local_a8._0_8_;
  if ((void *)local_a8._0_8_ == (void *)0x0) goto LAB_00105d10;
  if (local_88._4_4_ != 0) {
    if (*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) != 0) {
      memset((void *)local_98._8_8_,0,
             (ulong)*(uint *)(hash_table_size_primes + (local_88 & 0xffffffff) * 4) * 4);
      if (local_88._4_4_ == 0) goto LAB_00106200;
    }
    lVar55 = 0;
    do {
      lVar63 = lVar55 * 8;
      lVar55 = lVar55 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar68 + lVar63));
      pvVar68 = (void *)local_a8._0_8_;
    } while ((uint)lVar55 < local_88._4_4_);
    local_88 = local_88 & 0xffffffff;
    if ((void *)local_a8._0_8_ == (void *)0x0) goto LAB_00105d10;
  }
LAB_00106200:
  Memory::free_static(pvVar68,false);
  Memory::free_static((void *)local_98._0_8_,false);
  Memory::free_static((void *)local_a8._8_8_,false);
  Memory::free_static((void *)local_98._8_8_,false);
LAB_00105d10:
  EditorProgress::~EditorProgress(local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if (local_100 != (long *)0x0) {
    LOCK();
    local_100 = local_100 + -2;
    *local_100 = *local_100 + -1;
    UNLOCK();
    if (*local_100 == 0) {
      CowData<EditorData::EditedScene>::_unref((CowData<EditorData::EditedScene> *)&local_100);
    }
  }
  uVar46 = local_70._0_8_;
  if ((undefined8 *)local_70._0_8_ != (undefined8 *)0x0) {
    uVar49 = local_70._8_8_;
    if ((local_50._4_4_ != 0) &&
       (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0)) {
      piVar3 = (int *)(local_70._8_8_ +
                      (ulong)*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) * 4);
      piVar69 = (int *)local_70._8_8_;
      puVar76 = (undefined8 *)local_70._0_8_;
      do {
        if (*piVar69 != 0) {
          pvVar68 = (void *)*puVar76;
          *piVar69 = 0;
          pvVar80 = *(void **)((long)pvVar68 + 0x18);
          if (pvVar80 != (void *)0x0) {
            if ((*(int *)((long)pvVar68 + 0x3c) != 0) &&
               ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar68 + 0x38) * 4) == 0
                || (memset(*(void **)((long)pvVar68 + 0x30),0,
                           (ulong)*(uint *)(hash_table_size_primes +
                                           (ulong)*(uint *)((long)pvVar68 + 0x38) * 4) * 4),
                   *(int *)((long)pvVar68 + 0x3c) != 0)))) {
              lVar55 = 0;
              do {
                if ((StringName::configured != '\0') && (*(long *)((long)pvVar80 + lVar55 * 8) != 0)
                   ) {
                  StringName::unref();
                  pvVar80 = *(void **)((long)pvVar68 + 0x18);
                }
                lVar55 = lVar55 + 1;
              } while ((uint)lVar55 < *(uint *)((long)pvVar68 + 0x3c));
              *(undefined4 *)((long)pvVar68 + 0x3c) = 0;
              if (pvVar80 == (void *)0x0) goto LAB_00105e3e;
            }
            Memory::free_static(pvVar80,false);
            Memory::free_static(*(void **)((long)pvVar68 + 0x28),false);
            Memory::free_static(*(void **)((long)pvVar68 + 0x20),false);
            Memory::free_static(*(void **)((long)pvVar68 + 0x30),false);
          }
LAB_00105e3e:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar68 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar68,false);
          *puVar76 = 0;
        }
        piVar69 = piVar69 + 1;
        puVar76 = puVar76 + 1;
      } while (piVar3 != piVar69);
    }
    Memory::free_static((void *)uVar46,false);
    Memory::free_static((void *)uVar49,false);
  }
  uVar46 = local_d8._0_8_;
  if ((CowData<char32_t> *)local_d8._0_8_ != (CowData<char32_t> *)0x0) {
    uVar56 = (ulong)local_b8._4_4_;
    uVar49 = local_c8._8_8_;
    if (local_b8._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) != 0) {
        memset((void *)local_c8._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_b8 & 0xffffffff) * 4) * 4);
      }
      pCVar65 = (CowData<char32_t> *)uVar46;
      do {
        pCVar66 = pCVar65 + 8;
        CowData<char32_t>::_unref(pCVar65);
        pCVar65 = pCVar66;
      } while (pCVar66 != (CowData<char32_t> *)(uVar46 + uVar56 * 8));
    }
    Memory::free_static((void *)uVar46,false);
    Memory::free_static((void *)local_c8._0_8_,false);
    Memory::free_static((void *)local_d8._8_8_,false);
    Memory::free_static((void *)uVar49,false);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00105868:
  uVar53 = uVar53 + 1;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = (ulong)(iVar62 + 1) * lVar55;
  auVar35._8_8_ = 0;
  auVar35._0_8_ = uVar56;
  lVar63 = SUB168(auVar17 * auVar35,8);
  uVar54 = *(uint *)(uVar49 + lVar63 * 4);
  iVar62 = SUB164(auVar17 * auVar35,8);
  if ((uVar54 == 0) ||
     (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar54 * lVar55, auVar36._8_8_ = 0,
     auVar36._0_8_ = uVar56, auVar19._8_8_ = 0,
     auVar19._0_8_ = (ulong)((uVar78 + iVar62) - SUB164(auVar18 * auVar36,8)) * lVar55,
     auVar37._8_8_ = 0, auVar37._0_8_ = uVar56, SUB164(auVar19 * auVar37,8) < uVar53))
  goto LAB_00105a6e;
  goto LAB_001058b8;
}



/* GroupSettingsEditor::remove_references(StringName const&) */

void __thiscall
GroupSettingsEditor::remove_references(GroupSettingsEditor *this,StringName *param_1)

{
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = 0;
  _modify_references(this,param_1,(StringName *)&local_18,false);
  if ((StringName::configured != '\0') && (local_18 != 0)) {
    StringName::unref();
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::rename_references(StringName const&, StringName const&) */

void __thiscall
GroupSettingsEditor::rename_references
          (GroupSettingsEditor *this,StringName *param_1,StringName *param_2)

{
  _modify_references(this,param_1,param_2,true);
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



/* CallableCustomMethodPointer<GroupSettingsEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorValidationPanel, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorValidationPanel,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorValidationPanel,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupSettingsEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<ProjectSettings, void, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettings,void,StringName_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettings,void,StringName_const&> *this)

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



/* MethodBindT<StringName const&, StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<StringName_const&,StringName_const&>::_gen_argument_type
          (MethodBindT<StringName_const&,StringName_const&> *this,int param_1)

{
  return -((uint)param_1 < 2) & 0x15;
}



/* MethodBindT<StringName const&, StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindT<StringName_const&,StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<StringName const&>::_gen_argument_type(int) const */

byte __thiscall
MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this,int param_1)

{
  return -(param_1 == 0) & 0x15;
}



/* MethodBindT<StringName const&>::get_argument_meta(int) const */

undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton>::
get_argument_count(CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorValidationPanel, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorValidationPanel,void>::get_argument_count
          (CallableCustomMethodPointer<EditorValidationPanel,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void>::get_argument_count
          (CallableCustomMethodPointer<GroupSettingsEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<ProjectSettings, void, StringName const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettings,void,StringName_const&>::get_argument_count
          (CallableCustomMethodPointer<ProjectSettings,void,StringName_const&> *this,bool *param_1)

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



/* CallableCustomMethodPointer<ProjectSettings, void, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettings,void,StringName_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettings,void,StringName_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupSettingsEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorValidationPanel, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorValidationPanel,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorValidationPanel,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114b98;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114b98;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114bf8;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114bf8;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114c58;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_00114c58;
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



/* GroupSettingsEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GroupSettingsEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GroupSettingsEditor::_property_can_revertv(StringName const&) const */

undefined8 GroupSettingsEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00119008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void, Object*, int, int,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton> *this)

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
      goto LAB_001069ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001069ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001069ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&> *this)

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
      goto LAB_00106aad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106aad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106aad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorValidationPanel, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorValidationPanel,void>::get_object
          (CallableCustomMethodPointer<EditorValidationPanel,void> *this)

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
      goto LAB_00106bad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106bad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106bad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<ProjectSettings, void, StringName const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<ProjectSettings,void,StringName_const&>::get_object
          (CallableCustomMethodPointer<ProjectSettings,void,StringName_const&> *this)

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
      goto LAB_00106cad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106cad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106cad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void>::get_object
          (CallableCustomMethodPointer<GroupSettingsEditor,void> *this)

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
      goto LAB_00106dad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00106dad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00106dad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00119010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* GroupSettingsEditor::_validate_propertyv(PropertyInfo&) const */

void GroupSettingsEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00119010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* GroupSettingsEditor::_setv(StringName const&, Variant const&) */

undefined8 GroupSettingsEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00119018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107178) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001071e8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00107258) */
/* GroupSettingsEditor::_getv(StringName const&, Variant&) const */

undefined8 GroupSettingsEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00119020 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x114e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x114e,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x114e,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* GroupSettingsEditor::is_class_ptr(void*) const */

ulong GroupSettingsEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x114e,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x114e,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114e,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114e,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114e,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x114e,in_RSI == &Node::get_class_ptr_static()::ptr) |
                CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr));
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
      if (StringName::configured == '\0') goto LAB_00107430;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107430:
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
      if (StringName::configured == '\0') goto LAB_00107490;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107490:
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
      if (StringName::configured == '\0') goto LAB_001074f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001074f0:
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
      if (StringName::configured == '\0') goto LAB_00107560;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00107560:
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
LAB_00107633:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107633;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010769e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010769e:
  return &_get_class_namev()::_class_name_static;
}



/* GroupSettingsEditor::_get_class_namev() const */

undefined8 * GroupSettingsEditor::_get_class_namev(void)

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
LAB_00107723:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107723;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GroupSettingsEditor");
      goto LAB_0010778e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GroupSettingsEditor");
LAB_0010778e:
  return &_get_class_namev()::_class_name_static;
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
LAB_00107813:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00107813;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010787e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010787e:
  return &_get_class_namev()::_class_name_static;
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



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>, true>::adjust_heap(long, long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,Element *param_4,Element **param_5)

{
  long *plVar1;
  Element *pEVar2;
  char *pcVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  Element **ppEVar8;
  Element **ppEVar9;
  long in_FS_OFFSET;
  long local_a0;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar6 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar6 < param_3) {
    local_a0 = param_2;
    do {
      pEVar2 = param_5[param_1 + lVar6];
      lVar5 = *(long *)param_5[lVar6 + -1 + param_1];
      if (lVar5 == 0) {
        local_68 = 0;
        lVar5 = *(long *)pEVar2;
        if (lVar5 != 0) goto LAB_001079b7;
LAB_00107ae4:
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar5 + 8);
        if (pcVar3 == (char *)0x0) {
          local_68 = 0;
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_68 = 0;
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_68);
        }
        lVar5 = *(long *)pEVar2;
        if (lVar5 == 0) goto LAB_00107ae4;
LAB_001079b7:
        pcVar3 = *(char **)(lVar5 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar5 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::nocasecmp_to((String *)&local_60);
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
      lVar5 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar5 + -0x10),false);
        }
      }
      lVar5 = lVar6 + -1;
      lVar7 = lVar6;
      ppEVar9 = param_5 + lVar6 + -1 + param_1;
      if (-1 < cVar4) {
        lVar7 = lVar6 + 1;
        lVar5 = lVar6;
        ppEVar9 = param_5 + param_1 + lVar6;
      }
      lVar6 = lVar7 * 2;
      param_5[local_a0 + param_1] = *ppEVar9;
      local_a0 = lVar5;
    } while (lVar6 < param_3);
    ppEVar8 = ppEVar9;
    if (lVar6 == param_3) goto LAB_00107d98;
  }
  else {
    ppEVar9 = param_5 + param_2 + param_1;
    if (lVar6 != param_3) goto LAB_00107d53;
LAB_00107d98:
    lVar5 = lVar6 + -1;
    ppEVar8 = param_5 + param_1 + lVar5;
    *ppEVar9 = *ppEVar8;
  }
  lVar6 = (lVar5 + -1) - (lVar5 + -1 >> 0x3f);
  ppEVar9 = ppEVar8;
  if (param_2 < lVar5) {
    do {
      lVar7 = lVar6 >> 1;
      ppEVar8 = param_5 + param_1 + lVar7;
      pEVar2 = *ppEVar8;
      lVar6 = *(long *)param_4;
      if (lVar6 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar6 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar6 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar6 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      lVar6 = *(long *)pEVar2;
      if (lVar6 == 0) {
        local_68 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar6 + 8);
        local_68 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar6 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar6 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_68);
        }
      }
      cVar4 = String::nocasecmp_to((String *)&local_68);
      lVar6 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      lVar6 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar6 + -0x10),false);
        }
      }
      ppEVar9 = param_5 + lVar5 + param_1;
      if (-1 < cVar4) break;
      param_5[lVar5 + param_1] = *ppEVar8;
      lVar6 = (lVar7 + -1) - (lVar7 + -1 >> 0x3f);
      lVar5 = lVar7;
      ppEVar9 = ppEVar8;
    } while (param_2 < lVar7);
  }
LAB_00107d53:
  *ppEVar9 = param_4;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>, true>::unguarded_linear_insert(long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
     ::unguarded_linear_insert(long param_1,Element *param_2,Element **param_3)

{
  long *plVar1;
  char *pcVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  Element **ppEVar6;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar4 = param_1 + -1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ppEVar6 = param_3 + param_1;
  do {
    lVar5 = *(long *)ppEVar6[-1];
    if (lVar5 == 0) {
      local_68 = 0;
      lVar5 = *(long *)param_2;
      if (lVar5 == 0) goto LAB_00107f8e;
LAB_00107eaa:
      pcVar2 = *(char **)(lVar5 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    else {
      pcVar2 = *(char **)(lVar5 + 8);
      local_68 = 0;
      if (pcVar2 == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_68);
      }
      lVar5 = *(long *)param_2;
      if (lVar5 != 0) goto LAB_00107eaa;
LAB_00107f8e:
      local_60 = 0;
    }
    cVar3 = String::nocasecmp_to((String *)&local_60);
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
    lVar5 = local_68;
    if (local_68 != 0) {
      LOCK();
      plVar1 = (long *)(local_68 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_68 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (-1 < cVar3) goto LAB_00108005;
    if (lVar4 == 0) {
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_00108005:
      *ppEVar6 = param_2;
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar4 = lVar4 + -1;
    *ppEVar6 = ppEVar6[-1];
    ppEVar6 = ppEVar6 + -1;
  } while( true );
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>, true>::partial_sort(long, long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
     ::partial_sort(long param_1,long param_2,long param_3,Element **param_4)

{
  long *plVar1;
  Element **ppEVar2;
  char *pcVar3;
  Element *pEVar4;
  bool bVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar9 = param_3 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar9 < 2) {
    if (param_2 <= param_3) goto LAB_001082b1;
LAB_001080c7:
    lVar7 = param_3;
LAB_001081f7:
    do {
      pEVar4 = param_4[lVar7];
      lVar8 = *(long *)param_4[param_1];
      if (lVar8 == 0) {
        local_68 = 0;
        lVar8 = *(long *)pEVar4;
        if (lVar8 != 0) goto LAB_0010814b;
LAB_00108220:
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar8 + 8);
        local_68 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar8 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar8 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_68);
        }
        lVar8 = *(long *)pEVar4;
        if (lVar8 == 0) goto LAB_00108220;
LAB_0010814b:
        pcVar3 = *(char **)(lVar8 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar8 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar8 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar6 = String::nocasecmp_to((String *)&local_60);
      lVar8 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      lVar8 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar8 + -0x10),false);
        }
      }
      if (cVar6 < '\0') {
        pEVar4 = param_4[lVar7];
        param_4[lVar7] = param_4[param_1];
        lVar7 = lVar7 + 1;
        adjust_heap(param_1,0,lVar9,pEVar4,param_4);
        if (param_2 <= lVar7) break;
        goto LAB_001081f7;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_2);
    if (lVar9 < 2) goto LAB_001082b1;
  }
  else {
    for (lVar7 = lVar9 + -2 >> 1; adjust_heap(param_1,lVar7,lVar9,param_4[param_1 + lVar7],param_4),
        lVar7 != 0; lVar7 = lVar7 + -1) {
    }
    if (param_3 < param_2) goto LAB_001080c7;
  }
  ppEVar2 = param_4 + param_1;
  lVar9 = (param_3 + -1) - param_1;
  do {
    pEVar4 = ppEVar2[lVar9];
    ppEVar2[lVar9] = *ppEVar2;
    adjust_heap(param_1,0,lVar9,pEVar4,param_4);
    bVar5 = 1 < lVar9;
    lVar9 = lVar9 + -1;
  } while (bVar5);
LAB_001082b1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */

long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
     ::partitioner(long param_1,long param_2,Element *param_3,Element **param_4)

{
  long *plVar1;
  Element *pEVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  Element **ppEVar8;
  long lVar9;
  long in_FS_OFFSET;
  bool bVar10;
  long local_80;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar9 = param_2;
  local_80 = param_1;
LAB_00108390:
  pEVar2 = param_4[local_80];
  lVar7 = *(long *)param_3;
  if (lVar7 == 0) {
    local_68 = 0;
  }
  else {
    pcVar3 = *(char **)(lVar7 + 8);
    local_68 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar7 + 0x10));
      }
    }
    else {
      local_50 = strlen(pcVar3);
      local_58 = pcVar3;
      String::parse_latin1((StrRange *)&local_68);
    }
  }
  lVar7 = *(long *)pEVar2;
  if (lVar7 == 0) {
    local_60 = 0;
  }
  else {
    pcVar3 = *(char **)(lVar7 + 8);
    local_60 = 0;
    if (pcVar3 == (char *)0x0) {
      if (*(long *)(lVar7 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 0x10));
      }
    }
    else {
      local_50 = strlen(pcVar3);
      local_58 = pcVar3;
      String::parse_latin1((StrRange *)&local_60);
    }
  }
  cVar5 = String::nocasecmp_to((String *)&local_60);
  lVar7 = local_60;
  if (local_60 != 0) {
    LOCK();
    plVar1 = (long *)(local_60 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  lVar7 = local_68;
  if (local_68 != 0) {
    LOCK();
    plVar1 = (long *)(local_68 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void *)(lVar7 + -0x10),false);
    }
  }
  if (-1 < cVar5) {
LAB_0010848f:
    lVar9 = lVar9 + -1;
    ppEVar8 = param_4 + lVar9;
    do {
      lVar7 = *(long *)*ppEVar8;
      if (lVar7 == 0) {
        local_68 = 0;
        lVar7 = *(long *)param_3;
        if (lVar7 != 0) goto LAB_001084ed;
LAB_001085d0:
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar7 + 8);
        local_68 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
          if (*(long *)(lVar7 + 0x10) != 0) {
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_001084dd;
              LOCK();
              lVar6 = *plVar1;
              bVar10 = lVar4 == lVar6;
              if (bVar10) {
                *plVar1 = lVar4 + 1;
                lVar6 = lVar4;
              }
              UNLOCK();
            } while (!bVar10);
            if (lVar6 != -1) {
              local_68 = *(long *)(lVar7 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_68);
        }
LAB_001084dd:
        lVar7 = *(long *)param_3;
        if (lVar7 == 0) goto LAB_001085d0;
LAB_001084ed:
        pcVar3 = *(char **)(lVar7 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
          if (*(long *)(lVar7 + 0x10) != 0) {
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_00108522;
              LOCK();
              lVar6 = *plVar1;
              bVar10 = lVar4 == lVar6;
              if (bVar10) {
                *plVar1 = lVar4 + 1;
                lVar6 = lVar4;
              }
              UNLOCK();
            } while (!bVar10);
            if (lVar6 != -1) {
              local_60 = *(long *)(lVar7 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
LAB_00108522:
      cVar5 = String::nocasecmp_to((String *)&local_60);
      lVar7 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      lVar7 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
      if (-1 < cVar5) goto LAB_00108685;
      if (lVar9 == param_1) goto LAB_00108660;
      lVar9 = lVar9 + -1;
      ppEVar8 = ppEVar8 + -1;
    } while( true );
  }
  if (param_2 + -1 == local_80) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    goto LAB_0010848f;
  }
  goto LAB_001086a6;
LAB_00108660:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00108685:
  if (lVar9 <= local_80) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return local_80;
  }
  pEVar2 = param_4[local_80];
  param_4[local_80] = *ppEVar8;
  *ppEVar8 = pEVar2;
LAB_001086a6:
  local_80 = local_80 + 1;
  goto LAB_00108390;
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



/* Object::is_class(String const&) const */

ulong __thiscall Object::is_class(Object *this,String *param_1)

{
  long *plVar1;
  long lVar2;
  char *__s;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  long local_50;
  char *local_48;
  size_t local_40;
  long local_30;
  
  lVar2 = *(long *)(this + 8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    if (lVar2 == 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = String::operator==(param_1,"Object");
        return uVar5;
      }
LAB_00108937:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar3 = *(long *)(lVar2 + 0x20);
    if (lVar3 == 0) {
      local_50 = 0;
    }
    else {
      __s = *(char **)(lVar3 + 8);
      local_50 = 0;
      if (__s == (char *)0x0) {
        if (*(long *)(lVar3 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar3 + 0x10));
        }
      }
      else {
        local_40 = strlen(__s);
        local_48 = __s;
        String::parse_latin1((StrRange *)&local_50);
      }
    }
    uVar4 = String::operator==(param_1,(String *)&local_50);
    lVar3 = local_50;
    if (local_50 != 0) {
      LOCK();
      plVar1 = (long *)(local_50 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_50 = 0;
        Memory::free_static((void *)(lVar3 + -0x10),false);
      }
    }
    if ((char)uVar4 != '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        return (ulong)uVar4;
      }
      goto LAB_00108937;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00108a20) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00119028 != Container::_notification) {
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
  if ((code *)PTR__notification_00119028 == Container::_notification) {
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



/* GroupSettingsEditor::get_class() const */

void GroupSettingsEditor::get_class(void)

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



/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  plVar4 = *(long **)this;
  if (plVar4 == (long *)0x0) {
    return;
  }
  do {
    plVar1 = (long *)*plVar4;
    if (plVar1 == (long *)0x0) {
      if ((int)plVar4[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if ((long *)plVar1[3] == plVar4) {
      lVar3 = plVar1[1];
      lVar2 = plVar1[2];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = plVar1[1];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      if ((StringName::configured != '\0') && (*plVar1 != 0)) {
        StringName::unref();
      }
      Memory::free_static(plVar1,false);
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */

String * HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert
                   (String *param_1)

{
  CowData<char32_t> *this;
  void *pvVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
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
  char cVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  ulong uVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  uint uVar36;
  String *in_RDX;
  ulong uVar37;
  long lVar38;
  long *in_RSI;
  long lVar39;
  uint uVar40;
  ulong uVar41;
  undefined4 uVar42;
  ulong uVar43;
  uint uVar44;
  uint *puVar45;
  uint local_88;
  long local_68;
  
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar31 = (ulong)uVar28 * 4;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::alloc_static((ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    iVar35 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_00108fbc;
  }
  else {
    iVar35 = *(int *)((long)in_RSI + 0x24);
LAB_00108fbc:
    if (iVar35 != 0) {
      uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      lVar32 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      uVar44 = String::hash();
      uVar31 = CONCAT44(0,uVar29);
      lVar39 = in_RSI[3];
      uVar36 = 1;
      if (uVar44 != 0) {
        uVar36 = uVar44;
      }
      uVar40 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar38 = SUB168(auVar11 * auVar23,8);
      uVar44 = *(uint *)(lVar39 + lVar38 * 4);
      iVar35 = SUB164(auVar11 * auVar23,8);
      if (uVar44 == 0) {
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        do {
          if (uVar36 == uVar44) {
            cVar27 = String::operator==((String *)
                                        (*in_RSI + (ulong)*(uint *)(in_RSI[1] + lVar38 * 4) * 8),
                                        in_RDX);
            if (cVar27 != '\0') {
              iVar35 = *(int *)((long)in_RSI + 0x24);
              iVar30 = *(int *)(in_RSI[1] + lVar38 * 4);
              goto LAB_0010931b;
            }
            lVar39 = in_RSI[3];
          }
          uVar40 = uVar40 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar32;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar31;
          lVar38 = SUB168(auVar12 * auVar24,8);
          uVar44 = *(uint *)(lVar39 + lVar38 * 4);
          iVar35 = SUB164(auVar12 * auVar24,8);
        } while ((uVar44 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar32, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar31, auVar14._8_8_ = 0,
                auVar14._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar13 * auVar25,8)) * lVar32,
                auVar26._8_8_ = 0, auVar26._0_8_ = uVar31, uVar40 <= SUB164(auVar14 * auVar26,8)));
        iVar35 = *(int *)((long)in_RSI + 0x24);
      }
    }
  }
  if ((float)uVar28 * __LC16 < (float)(iVar35 + 1)) {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      iVar35 = *(int *)((long)in_RSI + 0x24);
      iVar30 = -1;
      goto LAB_0010931b;
    }
    uVar28 = (int)in_RSI[4] + 1;
    uVar31 = (ulong)uVar28;
    if (uVar28 < 2) {
      uVar31 = 2;
    }
    uVar28 = *(uint *)(hash_table_size_primes + uVar31 * 4);
    *(int *)(in_RSI + 4) = (int)uVar31;
    pvVar1 = (void *)in_RSI[3];
    uVar31 = (ulong)uVar28 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[3] = lVar32;
    lVar32 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar28 * 8,false);
    *in_RSI = lVar32;
    lVar32 = Memory::alloc_static(uVar31,false);
    in_RSI[2] = lVar32;
    lVar32 = Memory::realloc_static((void *)in_RSI[1],uVar31,false);
    in_RSI[1] = lVar32;
    if (uVar28 != 0) {
      memset((void *)in_RSI[3],0,uVar31);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar31 = 0;
      lVar39 = in_RSI[3];
      lVar38 = in_RSI[2];
      do {
        uVar43 = uVar31 & 0xffffffff;
        uVar42 = (undefined4)uVar31;
        uVar44 = 0;
        uVar28 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar31 * 4) * 4);
        uVar37 = (ulong)uVar28;
        uVar29 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar41 = CONCAT44(0,uVar29);
        lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar37 * lVar33;
        auVar15._8_8_ = 0;
        auVar15._0_8_ = uVar41;
        lVar34 = SUB168(auVar3 * auVar15,8) * 4;
        iVar35 = SUB164(auVar3 * auVar15,8);
        puVar45 = (uint *)(lVar39 + lVar34);
        uVar36 = *puVar45;
        if (uVar36 == 0) {
          lVar33 = uVar31 * 4;
        }
        else {
          do {
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar36 * lVar33;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar41;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)((uVar29 + iVar35) - SUB164(auVar4 * auVar16,8)) * lVar33;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar41;
            local_88 = SUB164(auVar5 * auVar17,8);
            if (local_88 < uVar44) {
              *(int *)(lVar38 + uVar43 * 4) = iVar35;
              uVar28 = *puVar45;
              *puVar45 = (uint)uVar37;
              uVar36 = *(uint *)(lVar34 + lVar32);
              uVar37 = (ulong)uVar28;
              *(uint *)(lVar34 + lVar32) = (uint)uVar43;
              uVar43 = (ulong)uVar36;
              uVar44 = local_88;
            }
            uVar42 = (undefined4)uVar43;
            uVar28 = (uint)uVar37;
            uVar44 = uVar44 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)(iVar35 + 1) * lVar33;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar41;
            lVar34 = SUB168(auVar6 * auVar18,8) * 4;
            iVar35 = SUB164(auVar6 * auVar18,8);
            puVar45 = (uint *)(lVar39 + lVar34);
            uVar36 = *puVar45;
          } while (uVar36 != 0);
          lVar33 = uVar43 << 2;
        }
        *puVar45 = uVar28;
        uVar31 = uVar31 + 1;
        *(int *)(lVar38 + lVar33) = iVar35;
        *(undefined4 *)(lVar32 + lVar34) = uVar42;
      } while ((uint)uVar31 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
  }
  uVar29 = String::hash();
  uVar28 = 1;
  if (uVar29 != 0) {
    uVar28 = uVar29;
  }
  uVar31 = (ulong)uVar28;
  this = (CowData<char32_t> *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8);
  *(undefined8 *)this = 0;
  CowData<char32_t>::_ref(this,(CowData *)in_RDX);
  uVar29 = *(uint *)((long)in_RSI + 0x24);
  lVar39 = in_RSI[3];
  uVar36 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar37 = CONCAT44(0,uVar36);
  lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar31 * lVar38;
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar37;
  lVar32 = SUB168(auVar7 * auVar19,8) * 4;
  iVar35 = SUB164(auVar7 * auVar19,8);
  puVar45 = (uint *)(lVar39 + lVar32);
  uVar44 = *puVar45;
  if (uVar44 == 0) {
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
  }
  else {
    uVar40 = 0;
    local_68 = in_RSI[2];
    lVar34 = in_RSI[1];
    do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar44 * lVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar37;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar36 + iVar35) - SUB164(auVar8 * auVar20,8)) * lVar38;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar37;
      local_88 = SUB164(auVar9 * auVar21,8);
      if (local_88 < uVar40) {
        *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
        uVar28 = *puVar45;
        *puVar45 = (uint)uVar31;
        uVar44 = *(uint *)(lVar32 + lVar34);
        uVar31 = (ulong)uVar28;
        *(uint *)(lVar32 + lVar34) = uVar29;
        uVar29 = uVar44;
        uVar40 = local_88;
      }
      uVar28 = (uint)uVar31;
      uVar40 = uVar40 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar35 + 1) * lVar38;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar37;
      lVar32 = SUB168(auVar10 * auVar22,8) * 4;
      iVar35 = SUB164(auVar10 * auVar22,8);
      puVar45 = (uint *)(lVar39 + lVar32);
      uVar44 = *puVar45;
    } while (uVar44 != 0);
  }
  *puVar45 = uVar28;
  *(int *)(local_68 + (ulong)uVar29 * 4) = iVar35;
  *(uint *)(lVar34 + lVar32) = uVar29;
  iVar30 = *(int *)((long)in_RSI + 0x24);
  iVar35 = iVar30 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar35;
LAB_0010931b:
  lVar32 = *in_RSI;
  *(int *)(param_1 + 0xc) = iVar30;
  *(long *)param_1 = lVar32;
  *(int *)(param_1 + 8) = iVar35;
  return param_1;
}



/* Callable create_custom_callable_function_pointer<ProjectSettings, StringName
   const&>(ProjectSettings*, char const*, void (ProjectSettings::*)(StringName const&)) */

ProjectSettings *
create_custom_callable_function_pointer<ProjectSettings,StringName_const&>
          (ProjectSettings *param_1,char *param_2,_func_void_StringName_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC21;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001148c8;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_StringName_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<GroupSettingsEditor>(GroupSettingsEditor*, char
   const*, void (GroupSettingsEditor::*)()) */

GroupSettingsEditor *
create_custom_callable_function_pointer<GroupSettingsEditor>
          (GroupSettingsEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC21;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00114958;
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



/* Callable create_custom_callable_function_pointer<GroupSettingsEditor, String
   const&>(GroupSettingsEditor*, char const*, void (GroupSettingsEditor::*)(String const&)) */

GroupSettingsEditor *
create_custom_callable_function_pointer<GroupSettingsEditor,String_const&>
          (GroupSettingsEditor *param_1,char *param_2,_func_void_String_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC21;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00114a78;
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



/* WARNING: Removing unreachable block (ram,0x00109f18) */
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



/* CallableCustomMethodPointer<EditorValidationPanel, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorValidationPanel,void>::call
          (CallableCustomMethodPointer<EditorValidationPanel,void> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_0010a2df;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010a2df;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a2b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010a3a1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010a2df:
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
LAB_0010a3a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void>::call
          (CallableCustomMethodPointer<GroupSettingsEditor,void> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
      goto LAB_0010a4ff;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010a4ff;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010a4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010a5c1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010a4ff:
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
LAB_0010a5c1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<ProjectSettings, void, StringName const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<ProjectSettings,void,StringName_const&>::call
          (CallableCustomMethodPointer<ProjectSettings,void,StringName_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  Variant local_38;
  undefined7 uStack_37;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38 = (Variant)0x0;
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar3 = _LC77;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_StringName(&local_38);
            (*pcVar7)((long *)(lVar1 + lVar2),&local_38);
            if ((StringName::configured != '\0') && (CONCAT71(uStack_37,local_38) != 0)) {
              StringName::unref();
            }
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010a69e;
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
  String::operator+((String *)&local_38,(String *)local_48);
  _err_print_error(&_LC76,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   &local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010a69e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void, Object*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton> *this,
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
      goto LAB_0010aab0;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_0010aab0;
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
LAB_0010aa38:
          uVar3 = _LC81;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0010aa38;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010aa89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0010abab;
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
LAB_0010aab0:
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
LAB_0010abab:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GroupSettingsEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&>::call
          (CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
            uVar3 = _LC82;
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
        goto LAB_0010ac7e;
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
  _err_print_error(&_LC76,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0010ac7e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>, true>::median_of_3(List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&,
   List<StringName, DefaultAllocator>::Element* const&) const [clone .isra.0] */

Element **
SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
::median_of_3(Element **param_1,Element **param_2,Element **param_3)

{
  Element *pEVar1;
  char *pcVar2;
  char cVar3;
  Element **ppEVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  pEVar1 = *param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar5 = *(long *)*param_2;
  if (lVar5 == 0) {
LAB_0010b0a1:
    local_68 = 0;
LAB_0010ae90:
    lVar5 = *(long *)pEVar1;
    if (lVar5 != 0) goto LAB_0010ae9c;
LAB_0010b080:
    local_60 = 0;
  }
  else {
    pcVar2 = *(char **)(lVar5 + 8);
    if (pcVar2 != (char *)0x0) {
      local_68 = 0;
      local_50 = strlen(pcVar2);
      local_58 = pcVar2;
      String::parse_latin1((StrRange *)&local_68);
      goto LAB_0010ae90;
    }
    local_68 = 0;
    if (*(long *)(lVar5 + 0x10) == 0) goto LAB_0010b0a1;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar5 + 0x10));
    lVar5 = *(long *)pEVar1;
    if (lVar5 == 0) goto LAB_0010b080;
LAB_0010ae9c:
    pcVar2 = *(char **)(lVar5 + 8);
    local_60 = 0;
    if (pcVar2 == (char *)0x0) {
      if (*(long *)(lVar5 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
      }
    }
    else {
      local_50 = strlen(pcVar2);
      local_58 = pcVar2;
      String::parse_latin1((StrRange *)&local_60);
    }
  }
  cVar3 = String::nocasecmp_to((String *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (cVar3 < '\0') {
    pEVar1 = *param_2;
    lVar5 = *(long *)*param_3;
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      local_60 = 0;
      if (*(char **)(lVar5 + 8) == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_60,*(char **)(lVar5 + 8));
      }
    }
    lVar5 = *(long *)pEVar1;
    if (lVar5 == 0) {
      local_58 = (char *)0x0;
    }
    else {
      local_58 = (char *)0x0;
      if (*(char **)(lVar5 + 8) == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
      }
    }
    cVar3 = String::nocasecmp_to((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    ppEVar4 = param_2;
    if (cVar3 < '\0') goto LAB_0010b014;
    pEVar1 = *param_1;
    lVar5 = *(long *)*param_3;
    if (lVar5 == 0) {
      local_60 = 0;
    }
    else {
      local_60 = 0;
      if (*(char **)(lVar5 + 8) == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_60,*(char **)(lVar5 + 8));
      }
    }
    lVar5 = *(long *)pEVar1;
    if (lVar5 == 0) {
      local_58 = (char *)0x0;
    }
    else {
      local_58 = (char *)0x0;
      if (*(char **)(lVar5 + 8) == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
      }
    }
    cVar3 = String::nocasecmp_to((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    ppEVar4 = param_1;
  }
  else {
    pEVar1 = *param_1;
    lVar5 = *(long *)*param_3;
    if (lVar5 == 0) {
      local_60 = 0;
      lVar5 = *(long *)pEVar1;
      if (lVar5 == 0) goto LAB_0010b22d;
LAB_0010af40:
      local_58 = (char *)0x0;
      if (*(char **)(lVar5 + 8) == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
      }
    }
    else {
      local_60 = 0;
      if (*(char **)(lVar5 + 8) == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_60,*(char **)(lVar5 + 8));
      }
      lVar5 = *(long *)pEVar1;
      if (lVar5 != 0) goto LAB_0010af40;
LAB_0010b22d:
      local_58 = (char *)0x0;
    }
    cVar3 = String::nocasecmp_to((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    ppEVar4 = param_1;
    if (cVar3 < '\0') goto LAB_0010b014;
    pEVar1 = *param_2;
    lVar5 = *(long *)*param_3;
    if (lVar5 == 0) {
      local_60 = 0;
      lVar5 = *(long *)pEVar1;
      if (lVar5 == 0) goto LAB_0010b256;
LAB_0010afc9:
      local_58 = (char *)0x0;
      if (*(char **)(lVar5 + 8) == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_58,*(char **)(lVar5 + 8));
      }
    }
    else {
      local_60 = 0;
      if (*(char **)(lVar5 + 8) == (char *)0x0) {
        if (*(long *)(lVar5 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar5 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_60,*(char **)(lVar5 + 8));
      }
      lVar5 = *(long *)pEVar1;
      if (lVar5 != 0) goto LAB_0010afc9;
LAB_0010b256:
      local_58 = (char *)0x0;
    }
    cVar3 = String::nocasecmp_to((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    ppEVar4 = param_2;
  }
  if (cVar3 < '\0') {
    ppEVar4 = param_3;
  }
LAB_0010b014:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return ppEVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long local_118;
  long local_110;
  long local_108;
  long local_f8;
  
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 == 0) {
LAB_0010bca3:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_0010b3f3:
  param_4 = param_4 + -1;
  puVar2 = (undefined8 *)
           median_of_3(param_3 + param_1,param_3 + (lVar1 >> 1) + param_1,
                       (Element **)((long)param_3 + lVar11 + -8));
  param_2 = partitioner(param_1,lVar3,(Element *)*puVar2,param_3);
  lVar1 = lVar3 - param_2;
  if (0x10 < lVar1) {
    if (param_4 != 0) {
      lVar11 = param_4;
      lVar4 = lVar3;
LAB_0010b47c:
      do {
        lVar11 = lVar11 + -1;
        puVar2 = (undefined8 *)
                 median_of_3(param_3 + param_2,param_3 + (lVar1 >> 1) + param_2,param_3 + lVar4 + -1
                            );
        lVar3 = partitioner(param_2,lVar4,(Element *)*puVar2,param_3);
        lVar1 = lVar4 - lVar3;
        if (0x10 < lVar1) {
          if (lVar11 != 0) {
            local_118 = lVar4;
            lVar15 = lVar11;
LAB_0010b514:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x0010b560;
LAB_0010b9f6:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_0010ba06;
            goto LAB_0010bba3;
          }
LAB_0010bc18:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_0010bb2f:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x0010bbe1;
        lVar4 = lVar3;
        if (lVar11 == 0) break;
      } while( true );
    }
    partial_sort(param_2,lVar3,lVar3,param_3);
  }
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
  if (param_4 != 0) goto LAB_0010bc7c;
  goto LAB_0010bca3;
code_r0x0010b560:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_0010b59c:
    do {
      lVar13 = lVar13 + -1;
      puVar2 = (undefined8 *)
               median_of_3(param_3 + lVar4,param_3 + (lVar1 >> 1) + lVar4,param_3 + lVar6 + -1);
      lVar5 = partitioner(lVar4,lVar6,(Element *)*puVar2,param_3);
      lVar1 = lVar6 - lVar5;
      if (0x10 < lVar1) {
        if (lVar13 != 0) {
          lVar7 = lVar6;
          local_f8 = lVar13;
LAB_0010b622:
          do {
            local_f8 = local_f8 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar5,param_3 + (lVar1 >> 1) + lVar5,param_3 + lVar7 + -1
                                );
            lVar6 = partitioner(lVar5,lVar7,(Element *)*puVar2,param_3);
            lVar1 = lVar7 - lVar6;
            if (0x10 < lVar1) {
              if (local_f8 != 0) {
                lVar8 = lVar7;
                local_110 = local_f8;
LAB_0010b6a3:
                do {
                  local_110 = local_110 + -1;
                  puVar2 = (undefined8 *)
                           median_of_3(param_3 + lVar6,param_3 + (lVar1 >> 1) + lVar6,
                                       param_3 + lVar8 + -1);
                  lVar7 = partitioner(lVar6,lVar8,(Element *)*puVar2,param_3);
                  lVar1 = lVar8 - lVar7;
                  if (0x10 < lVar1) {
                    if (local_110 != 0) {
                      lVar9 = lVar8;
                      local_118 = local_110;
LAB_0010b721:
                      do {
                        local_118 = local_118 + -1;
                        puVar2 = (undefined8 *)
                                 median_of_3(param_3 + lVar7,param_3 + (lVar1 >> 1) + lVar7,
                                             param_3 + lVar9 + -1);
                        lVar8 = partitioner(lVar7,lVar9,(Element *)*puVar2,param_3);
                        lVar1 = lVar9 - lVar8;
                        if (0x10 < lVar1) {
                          if (local_118 != 0) {
                            lVar10 = lVar9;
                            local_108 = local_118;
LAB_0010b797:
                            do {
                              local_108 = local_108 + -1;
                              puVar2 = (undefined8 *)
                                       median_of_3(param_3 + lVar8,param_3 + (lVar1 >> 1) + lVar8,
                                                   param_3 + lVar10 + -1);
                              lVar9 = partitioner(lVar8,lVar10,(Element *)*puVar2,param_3);
                              lVar1 = lVar10 - lVar9;
                              if (0x10 < lVar1) {
                                if (local_108 != 0) {
                                  lVar12 = local_108;
                                  lVar14 = lVar10;
                                  do {
                                    lVar12 = lVar12 + -1;
                                    puVar2 = (undefined8 *)
                                             median_of_3(param_3 + lVar9,
                                                         param_3 + (lVar1 >> 1) + lVar9,
                                                         param_3 + lVar14 + -1);
                                    lVar10 = partitioner(lVar9,lVar14,(Element *)*puVar2,param_3);
                                    introsort(lVar10,lVar14,param_3,lVar12);
                                    lVar1 = lVar10 - lVar9;
                                    if (lVar1 < 0x11) {
                                      lVar1 = lVar9 - lVar8;
                                      lVar10 = lVar9;
                                      if (lVar1 < 0x11) goto LAB_0010b92c;
                                      goto LAB_0010b797;
                                    }
                                    lVar14 = lVar10;
                                  } while (lVar12 != 0);
                                }
                                partial_sort(lVar9,lVar10,lVar10,param_3);
                              }
                              lVar1 = lVar9 - lVar8;
                              if (lVar1 < 0x11) {
                                lVar1 = lVar8 - lVar7;
                                lVar9 = lVar8;
                                if (lVar1 < 0x11) goto joined_r0x0010ba40;
                                goto LAB_0010b721;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_0010b92c:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x0010b9bb;
                          goto LAB_0010b6a3;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x0010ba40:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x0010ba80;
                    goto LAB_0010b622;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x0010b9bb:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_0010b9f6;
              goto LAB_0010b59c;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x0010ba80:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_0010bb2f;
        goto LAB_0010b514;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_0010bba3:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_0010b47c;
    goto joined_r0x0010bbe1;
  }
LAB_0010ba06:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_0010bc18;
  goto LAB_0010b514;
joined_r0x0010bbe1:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_0010bc7c:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_0010b3f3;
}



/* void List<StringName, DefaultAllocator>::sort_custom<NoCaseComparator>() */

void __thiscall
List<StringName,DefaultAllocator>::sort_custom<NoCaseComparator>
          (List<StringName,DefaultAllocator> *this)

{
  long *plVar1;
  size_t __n;
  int iVar2;
  char *pcVar3;
  char cVar4;
  Element *pEVar5;
  Element **__src;
  undefined8 *puVar6;
  Element *pEVar7;
  long lVar8;
  Element **ppEVar9;
  Element **ppEVar10;
  long lVar11;
  Element *pEVar12;
  long lVar13;
  Element *pEVar14;
  long in_FS_OFFSET;
  bool bVar15;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)this == 0) || (iVar2 = *(int *)(*(long *)this + 0x10), iVar2 < 2)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
    goto LAB_0010c54c;
  }
  pEVar5 = (Element *)(long)iVar2;
  __src = (Element **)Memory::alloc_static((long)pEVar5 * 8,true);
  if (__src == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    __src[-1] = pEVar5;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar9 = __src;
    for (pEVar14 = (Element *)**(long **)this; pEVar14 != (Element *)0x0;
        pEVar14 = *(Element **)(pEVar14 + 8)) {
      *ppEVar9 = pEVar14;
      ppEVar9 = ppEVar9 + 1;
    }
  }
  lVar13 = 0;
  pEVar14 = pEVar5;
  do {
    pEVar14 = (Element *)((long)pEVar14 >> 1);
    lVar13 = lVar13 + 1;
  } while (pEVar14 != (Element *)0x1);
  lVar13 = lVar13 * 2;
  pEVar14 = pEVar5;
  if (0x10 < (long)pEVar5) {
    do {
      lVar13 = lVar13 + -1;
      puVar6 = (undefined8 *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
               ::median_of_3(__src,__src + ((long)pEVar14 >> 1),__src + (long)(pEVar14 + -1));
      pEVar7 = (Element *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
               ::partitioner(0,(long)pEVar14,(Element *)*puVar6,__src);
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
      ::introsort((long)pEVar7,(long)pEVar14,__src,lVar13);
      if ((long)pEVar7 < 0x11) goto LAB_0010be5b;
      pEVar14 = pEVar7;
    } while (lVar13 != 0);
    SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
    ::partial_sort(0,(long)pEVar7,(long)pEVar7,__src);
LAB_0010be5b:
    lVar13 = 1;
    do {
      while( true ) {
        lVar11 = lVar13;
        pEVar14 = __src[lVar11];
        lVar13 = *(long *)*__src;
        if (lVar13 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar13 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(lVar13 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar13 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        lVar13 = *(long *)pEVar14;
        if (lVar13 == 0) {
          local_68 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar13 + 8);
          local_68 = 0;
          if (pcVar3 == (char *)0x0) {
            if (*(long *)(lVar13 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar13 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_68);
          }
        }
        cVar4 = String::nocasecmp_to((String *)&local_68);
        lVar13 = local_68;
        if (local_68 != 0) {
          LOCK();
          plVar1 = (long *)(local_68 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void *)(lVar13 + -0x10),false);
          }
        }
        lVar13 = local_60;
        if (local_60 != 0) {
          LOCK();
          plVar1 = (long *)(local_60 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void *)(lVar13 + -0x10),false);
          }
        }
        if (cVar4 < '\0') break;
        SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
        ::unguarded_linear_insert(lVar11,pEVar14,__src);
        lVar13 = lVar11 + 1;
        if (lVar11 + 1 == 0x10) goto LAB_0010bfbd;
      }
      memmove(__src + 1,__src,lVar11 * 8);
      *__src = pEVar14;
      lVar13 = lVar11 + 1;
    } while (lVar11 + 1 != 0x10);
LAB_0010bfbd:
    pEVar14 = (Element *)(lVar11 + 1);
LAB_0010bff0:
    pEVar7 = __src[(long)pEVar14];
    ppEVar9 = __src + (long)pEVar14;
    pEVar12 = pEVar14;
    do {
      pEVar12 = pEVar12 + -1;
      lVar13 = *(long *)ppEVar9[-1];
      if (lVar13 == 0) {
        local_68 = 0;
        lVar13 = *(long *)pEVar7;
        if (lVar13 == 0) goto LAB_0010c136;
LAB_0010c052:
        pcVar3 = *(char **)(lVar13 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar13 + 0x10) + -0x10);
          if (*(long *)(lVar13 + 0x10) != 0) {
            do {
              lVar11 = *plVar1;
              if (lVar11 == 0) goto LAB_0010c087;
              LOCK();
              lVar8 = *plVar1;
              bVar15 = lVar11 == lVar8;
              if (bVar15) {
                *plVar1 = lVar11 + 1;
                lVar8 = lVar11;
              }
              UNLOCK();
            } while (!bVar15);
            if (lVar8 != -1) {
              local_60 = *(long *)(lVar13 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      else {
        pcVar3 = *(char **)(lVar13 + 8);
        local_68 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar13 + 0x10) + -0x10);
          if (*(long *)(lVar13 + 0x10) != 0) {
            do {
              lVar11 = *plVar1;
              if (lVar11 == 0) goto LAB_0010c045;
              LOCK();
              lVar8 = *plVar1;
              bVar15 = lVar11 == lVar8;
              if (bVar15) {
                *plVar1 = lVar11 + 1;
                lVar8 = lVar11;
              }
              UNLOCK();
            } while (!bVar15);
            if (lVar8 != -1) {
              local_68 = *(long *)(lVar13 + 0x10);
            }
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_68);
        }
LAB_0010c045:
        lVar13 = *(long *)pEVar7;
        if (lVar13 != 0) goto LAB_0010c052;
LAB_0010c136:
        local_60 = 0;
      }
LAB_0010c087:
      cVar4 = String::nocasecmp_to((String *)&local_60);
      lVar13 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      lVar13 = local_68;
      if (local_68 != 0) {
        LOCK();
        plVar1 = (long *)(local_68 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_68 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      if (-1 < cVar4) goto LAB_0010c28a;
      if (pEVar12 == (Element *)0x0) goto LAB_0010c260;
      *ppEVar9 = ppEVar9[-1];
      ppEVar9 = ppEVar9 + -1;
    } while( true );
  }
  pEVar14 = *__src;
  pEVar7 = (Element *)0x1;
  do {
    while( true ) {
      lVar13 = *(long *)pEVar14;
      pEVar14 = __src[(long)pEVar7];
      if (lVar13 == 0) {
        local_60 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar13 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar13 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar13 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      lVar13 = *(long *)pEVar14;
      if (lVar13 == 0) {
        local_68 = 0;
      }
      else {
        pcVar3 = *(char **)(lVar13 + 8);
        local_68 = 0;
        if (pcVar3 == (char *)0x0) {
          if (*(long *)(lVar13 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar13 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar3);
          local_58 = pcVar3;
          String::parse_latin1((StrRange *)&local_68);
        }
      }
      cVar4 = String::nocasecmp_to((String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      lVar13 = local_60;
      if (local_60 != 0) {
        LOCK();
        plVar1 = (long *)(local_60 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_60 = 0;
          Memory::free_static((void *)(lVar13 + -0x10),false);
        }
      }
      if (cVar4 < '\0') break;
      pEVar12 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
      ::unguarded_linear_insert((long)pEVar7,pEVar14,__src);
      pEVar14 = *__src;
      pEVar7 = pEVar12;
      if (pEVar5 == pEVar12) goto LAB_0010c2b6;
    }
    __n = (long)pEVar7 * 8;
    pEVar7 = pEVar7 + 1;
    memmove(__src + 1,__src,__n);
    *__src = pEVar14;
  } while (pEVar5 != pEVar7);
LAB_0010c2b6:
  puVar6 = *(undefined8 **)this;
  *puVar6 = pEVar14;
  *(long *)(pEVar14 + 0x10) = 0;
  *(Element **)(*__src + 8) = __src[1];
  pEVar14 = __src[(long)(pEVar5 + -1)];
  puVar6[1] = pEVar14;
  *(Element **)(pEVar14 + 0x10) = __src[(long)(pEVar5 + -2)];
  *(undefined8 *)(__src[(long)(pEVar5 + -1)] + 8) = 0;
  if (iVar2 != 2) {
    ppEVar9 = __src;
    do {
      ppEVar10 = ppEVar9 + 1;
      *(Element **)(ppEVar9[1] + 0x10) = *ppEVar9;
      *(Element **)(*ppEVar10 + 8) = ppEVar9[2];
      ppEVar9 = ppEVar10;
    } while (__src + (iVar2 - 2) != ppEVar10);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Memory::free_static(__src,true);
    return;
  }
LAB_0010c54c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0010c260:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_0010c28a:
  pEVar14 = pEVar14 + 1;
  *ppEVar9 = pEVar7;
  if (pEVar5 == pEVar14) goto code_r0x0010c2a0;
  goto LAB_0010bff0;
code_r0x0010c2a0:
  pEVar14 = *__src;
  goto LAB_0010c2b6;
}



/* GroupSettingsEditor::~GroupSettingsEditor() */

void __thiscall GroupSettingsEditor::~GroupSettingsEditor(GroupSettingsEditor *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00114550;
  pvVar3 = *(void **)(this + 0xa28);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xa4c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa48) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa4c) = 0;
        *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa30) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0xa30) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0xa28);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa4c) = 0;
        *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010c643;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa30),false);
  }
LAB_0010c643:
  if ((StringName::configured != '\0') && (*(long *)(this + 0xa18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa10));
  bVar4 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c6b7;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c6b7:
  Control::~Control((Control *)this);
  return;
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010c81b;
  }
  cVar5 = String::operator==(param_1,"Control");
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
      if (cVar5 != '\0') goto LAB_0010c81b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      for (lVar2 = *(long *)(this + 8); lVar2 != 0; lVar2 = *(long *)(lVar2 + 8)) {
        lVar4 = *(long *)(lVar2 + 0x20);
        if (lVar4 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar4 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar4 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar4 + 8));
          }
        }
        cVar5 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar5 != '\0') goto LAB_0010c81b;
      }
      cVar5 = String::operator==(param_1,"Node");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Object::is_class((Object *)this,param_1);
          return uVar6;
        }
        goto LAB_0010c9be;
      }
    }
  }
LAB_0010c81b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010c9be:
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
    if (cVar5 != '\0') goto LAB_0010cadb;
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
      if (cVar5 != '\0') goto LAB_0010cadb;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_0010cbde;
    }
  }
LAB_0010cadb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010cbde:
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
    if (cVar4 != '\0') goto LAB_0010cceb;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010cceb:
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
    if (cVar4 != '\0') goto LAB_0010ce3b;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010ce3b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::~GroupSettingsEditor() */

void __thiscall GroupSettingsEditor::~GroupSettingsEditor(GroupSettingsEditor *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  bool bVar4;
  
  *(undefined ***)this = &PTR__initialize_classv_00114550;
  pvVar3 = *(void **)(this + 0xa28);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xa4c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa48) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa4c) = 0;
        *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xa30) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0xa30) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0xa28);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xa4c) = 0;
        *(undefined1 (*) [16])(this + 0xa38) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010cf74;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa30),false);
  }
LAB_0010cf74:
  if ((StringName::configured != '\0') && (*(long *)(this + 0xa18) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa10));
  bVar4 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar4) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cfe7;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cfe7:
  Control::~Control((Control *)this);
  operator_delete(this,0xab8);
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
              if ((code *)PTR__bind_methods_00119040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00119030 !=
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
      if ((code *)PTR__bind_methods_00119038 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00119040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00119030 !=
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
      if ((code *)PTR__bind_methods_00119038 != Container::_bind_methods) {
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
        if (pvVar5 == (void *)0x0) goto LAB_0010ddb5;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0010ddb5:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* GroupSettingsEditor::is_class(String const&) const */

undefined8 __thiscall GroupSettingsEditor::is_class(GroupSettingsEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0010df0b;
  }
  cVar5 = String::operator==(param_1,"GroupSettingsEditor");
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
      if (cVar5 != '\0') goto LAB_0010df0b;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = BoxContainer::is_class((BoxContainer *)this,param_1);
        return uVar6;
      }
      goto LAB_0010e00e;
    }
  }
LAB_0010df0b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010e00e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
  local_78 = &_LC88;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC88;
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
      goto LAB_0010e17c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e17c:
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
      goto LAB_0010e3e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e3e1:
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
  if ((code *)PTR__get_property_list_00119048 != Object::_get_property_list) {
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
      goto LAB_0010e6b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e6b1:
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
  if ((code *)PTR__get_property_list_00119050 != CanvasItem::_get_property_list) {
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
      goto LAB_0010e981;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010e981:
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
      goto LAB_0010ec31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010ec31:
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
      goto LAB_0010eee1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010eee1:
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



/* GroupSettingsEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
GroupSettingsEditor::_get_property_listv(GroupSettingsEditor *this,List *param_1,bool param_2)

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
    VBoxContainer::_get_property_listv((VBoxContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "GroupSettingsEditor";
  local_70 = 0x13;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GroupSettingsEditor";
  local_98 = 0;
  local_70 = 0x13;
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
      goto LAB_0010f191;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f191:
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
  StringName::StringName((StringName *)&local_78,"GroupSettingsEditor",false);
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
      goto LAB_0010f441;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0010f441:
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



/* MethodBind* create_method_bind<GroupSettingsEditor, StringName const&>(void
   (GroupSettingsEditor::*)(StringName const&)) */

MethodBind *
create_method_bind<GroupSettingsEditor,StringName_const&>(_func_void_StringName_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114b98;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GroupSettingsEditor";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GroupSettingsEditor, StringName const&, StringName const&>(void
   (GroupSettingsEditor::*)(StringName const&, StringName const&)) */

MethodBind *
create_method_bind<GroupSettingsEditor,StringName_const&,StringName_const&>
          (_func_void_StringName_ptr_StringName_ptr *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void_StringName_ptr_StringName_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_00114bf8;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GroupSettingsEditor";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBind* create_method_bind<GroupSettingsEditor>(void (GroupSettingsEditor::*)()) */

MethodBind * create_method_bind<GroupSettingsEditor>(_func_void *param_1)

{
  MethodBind *this;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  undefined8 local_40;
  char *local_38;
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  this = (MethodBind *)operator_new(0x68,"");
  MethodBind::MethodBind(this);
  *(_func_void **)(this + 0x58) = param_1;
  *(undefined8 *)(this + 0x60) = in_RSI;
  *(undefined ***)this = &PTR__gen_argument_type_00114c58;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GroupSettingsEditor";
  local_30 = 0x13;
  String::parse_latin1((StrRange *)&local_40);
  StringName::StringName((StringName *)&local_38,(String *)&local_40,false);
  StringName::operator=((StringName *)(this + 0x18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<Variant>::_unref() */

void __thiscall CowData<Variant>::_unref(CowData<Variant> *this)

{
  long *plVar1;
  int *piVar2;
  long lVar3;
  code *pcVar4;
  int *piVar5;
  long lVar6;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    piVar2 = *(int **)this;
    if (piVar2 != (int *)0x0) {
      lVar3 = *(long *)(piVar2 + -2);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar6 = 0;
        piVar5 = piVar2;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar3 != lVar6);
      }
      Memory::free_static(piVar2 + -4,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CowData<StringName>::_unref() */

void __thiscall CowData<StringName>::_unref(CowData<StringName> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  long *plVar4;
  long lVar5;
  
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
      lVar2 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar2 != 0) {
        lVar5 = 0;
        plVar4 = plVar1;
        do {
          if ((StringName::configured != '\0') && (*plVar4 != 0)) {
            StringName::unref();
          }
          lVar5 = lVar5 + 1;
          plVar4 = plVar4 + 1;
        } while (lVar2 != lVar5);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* GroupSettingsEditor::_initialize_classv() */

void GroupSettingsEditor::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_00119040 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00119030 !=
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
        if ((code *)PTR__bind_methods_00119038 != Container::_bind_methods) {
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
    local_58 = "GroupSettingsEditor";
    local_70 = 0;
    local_50 = 0x13;
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



/* HashMap<StringName, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > >
   >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
::_resize_and_rehash
          (HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
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
/* HashMap<StringName, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> >, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName> > > >
   >::insert(StringName const&, HashSet<StringName, HashMapHasherDefault,
   HashMapComparatorDefault<StringName> > const&, bool) */

StringName *
HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
::insert(StringName *param_1,HashSet *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  void *__s;
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
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  long *plVar25;
  ulong uVar26;
  undefined8 uVar27;
  void *pvVar28;
  long lVar29;
  long *in_RCX;
  uint uVar30;
  int iVar31;
  undefined7 in_register_00000011;
  StringName *pSVar32;
  long lVar33;
  long lVar34;
  char in_R8B;
  uint uVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  long *plVar39;
  long in_FS_OFFSET;
  long local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  pSVar32 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar22 = (ulong)uVar23;
    uVar38 = uVar22 * 4;
    uVar26 = uVar22 * 8;
    uVar27 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(param_2 + 0x10) = uVar27;
    pvVar28 = (void *)Memory::alloc_static(uVar26,false);
    *(void **)(param_2 + 8) = pvVar28;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)pvVar28 + uVar26)) && (pvVar28 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)pvVar28 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar22 != uVar38);
      }
      else {
        memset(__s,0,uVar38);
        memset(pvVar28,0,uVar26);
      }
      goto LAB_001104a3;
    }
    iVar31 = *(int *)(param_2 + 0x2c);
    if (pvVar28 == (void *)0x0) goto LAB_00110638;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_001104af;
LAB_0011065a:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      plVar25 = (long *)0x0;
      goto LAB_001108ce;
    }
    _resize_and_rehash((HashMap<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_001104a3:
    iVar31 = *(int *)(param_2 + 0x2c);
    if (iVar31 != 0) {
LAB_001104af:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar38 = CONCAT44(0,uVar2);
      lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar32 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar32 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar36 = 0;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar24 * lVar37;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar38;
      lVar33 = SUB168(auVar6 * auVar14,8);
      uVar35 = *(uint *)(*(long *)(param_2 + 0x10) + lVar33 * 4);
      uVar30 = SUB164(auVar6 * auVar14,8);
      if (uVar35 != 0) {
        do {
          uVar26 = (ulong)uVar30;
          if ((uVar24 == uVar35) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar33 * 8) + 0x10) == *(long *)pSVar32))
          {
            plVar3 = *(long **)(*(long *)(param_2 + 8) + uVar26 * 8);
            plVar25 = plVar3;
            if (in_RCX == plVar3 + 3) goto LAB_001108ce;
            pvVar28 = (void *)plVar3[3];
            if (pvVar28 == (void *)0x0) goto LAB_00110606;
            if ((*(int *)((long)plVar3 + 0x3c) == 0) ||
               ((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar3 + 7) * 4) != 0 &&
                (memset((void *)plVar3[6],0,
                        (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(plVar3 + 7) * 4)
                        * 4), *(int *)((long)plVar3 + 0x3c) == 0)))) goto LAB_00110b60;
            lVar37 = 0;
            do {
              if ((StringName::configured != '\0') && (*(long *)((long)pvVar28 + lVar37 * 8) != 0))
              {
                StringName::unref();
                pvVar28 = (void *)plVar3[3];
              }
              lVar37 = lVar37 + 1;
            } while ((uint)lVar37 < *(uint *)((long)plVar3 + 0x3c));
            *(undefined4 *)((long)plVar3 + 0x3c) = 0;
            if (pvVar28 != (void *)0x0) {
LAB_00110b60:
              Memory::free_static(pvVar28,false);
              Memory::free_static((void *)plVar3[5],false);
              Memory::free_static((void *)plVar3[4],false);
              Memory::free_static((void *)plVar3[6],false);
              *(undefined1 (*) [16])(plVar3 + 3) = (undefined1  [16])0x0;
              *(undefined1 (*) [16])(plVar3 + 5) = (undefined1  [16])0x0;
            }
LAB_00110606:
            uVar38 = in_RCX[4];
            plVar3[7] = uVar38;
            if ((int)(uVar38 >> 0x20) == 0) {
              plVar25 = *(long **)(*(long *)(param_2 + 8) + uVar26 * 8);
            }
            else {
              uVar23 = *(uint *)(hash_table_size_primes + (uVar38 & 0xffffffff) * 4);
              uVar38 = (ulong)uVar23 * 4;
              lVar37 = Memory::alloc_static(uVar38,false);
              lVar33 = 0;
              plVar3[6] = lVar37;
              lVar37 = Memory::alloc_static((ulong)uVar23 * 8,false);
              plVar3[3] = lVar37;
              lVar37 = Memory::alloc_static(uVar38,false);
              plVar3[5] = lVar37;
              lVar37 = Memory::alloc_static(uVar38,false);
              plVar3[4] = lVar37;
              if (*(int *)((long)plVar3 + 0x3c) != 0) {
                do {
                  StringName::StringName
                            ((StringName *)(lVar33 * 8 + plVar3[3]),
                             (StringName *)(*in_RCX + lVar33 * 8));
                  *(undefined4 *)(plVar3[5] + lVar33 * 4) = *(undefined4 *)(in_RCX[2] + lVar33 * 4);
                  lVar33 = lVar33 + 1;
                } while ((uint)lVar33 < *(uint *)((long)plVar3 + 0x3c));
              }
              plVar25 = *(long **)(*(long *)(param_2 + 8) + uVar26 * 8);
              if (uVar23 != 0) {
                lVar37 = in_RCX[3];
                lVar33 = plVar3[6];
                lVar29 = 0;
                lVar5 = in_RCX[1];
                lVar34 = plVar3[4];
                do {
                  *(undefined4 *)(lVar33 + lVar29) = *(undefined4 *)(lVar37 + lVar29);
                  *(undefined4 *)(lVar34 + lVar29) = *(undefined4 *)(lVar5 + lVar29);
                  lVar29 = lVar29 + 4;
                } while (uVar38 - lVar29 != 0);
              }
            }
            goto LAB_001108ce;
          }
          uVar36 = uVar36 + 1;
          auVar7._8_8_ = 0;
          auVar7._0_8_ = (ulong)(uVar30 + 1) * lVar37;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar38;
          lVar33 = SUB168(auVar7 * auVar15,8);
          uVar35 = *(uint *)(*(long *)(param_2 + 0x10) + lVar33 * 4);
          uVar30 = SUB164(auVar7 * auVar15,8);
        } while ((uVar35 != 0) &&
                (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar35 * lVar37, auVar16._8_8_ = 0,
                auVar16._0_8_ = uVar38, auVar9._8_8_ = 0,
                auVar9._0_8_ = (ulong)((uVar2 + uVar30) - SUB164(auVar8 * auVar16,8)) * lVar37,
                auVar17._8_8_ = 0, auVar17._0_8_ = uVar38, uVar36 <= SUB164(auVar9 * auVar17,8)));
      }
      iVar31 = *(int *)(param_2 + 0x2c);
    }
LAB_00110638:
    if ((float)uVar23 * __LC16 < (float)(iVar31 + 1)) goto LAB_0011065a;
  }
  StringName::StringName((StringName *)&local_78,pSVar32);
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  local_50 = in_RCX[4];
  if ((int)(local_50 >> 0x20) != 0) {
    uVar23 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
    uVar38 = (ulong)uVar23 * 4;
    uVar27 = Memory::alloc_static(uVar38,false);
    lVar37 = 0;
    local_60._8_8_ = uVar27;
    uVar27 = Memory::alloc_static((ulong)uVar23 * 8,false);
    local_70._0_8_ = uVar27;
    local_60._0_8_ = Memory::alloc_static(uVar38,false);
    uVar27 = Memory::alloc_static(uVar38,false);
    local_70._8_8_ = uVar27;
    if (local_50._4_4_ != 0) {
      do {
        StringName::StringName
                  ((StringName *)(lVar37 * 8 + local_70._0_8_),(StringName *)(*in_RCX + lVar37 * 8))
        ;
        *(undefined4 *)(local_60._0_8_ + lVar37 * 4) = *(undefined4 *)(in_RCX[2] + lVar37 * 4);
        lVar37 = lVar37 + 1;
      } while ((uint)lVar37 < local_50._4_4_);
    }
    if (uVar23 != 0) {
      lVar37 = in_RCX[3];
      uVar26 = 0;
      lVar33 = in_RCX[1];
      do {
        *(undefined4 *)(local_60._8_8_ + uVar26) = *(undefined4 *)(lVar37 + uVar26);
        *(undefined4 *)(local_70._8_8_ + uVar26) = *(undefined4 *)(lVar33 + uVar26);
        uVar26 = uVar26 + 4;
      } while (uVar26 != uVar38);
    }
  }
  plVar25 = (long *)operator_new(0x40,"");
  *plVar25 = 0;
  plVar25[1] = 0;
  StringName::StringName((StringName *)(plVar25 + 2),(StringName *)&local_78);
  plVar25[7] = 0;
  *(undefined1 (*) [16])(plVar25 + 3) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(plVar25 + 5) = (undefined1  [16])0x0;
  plVar25[7] = local_50;
  if ((int)(local_50 >> 0x20) != 0) {
    uVar23 = *(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4);
    uVar38 = (ulong)uVar23 * 4;
    lVar37 = Memory::alloc_static(uVar38,false);
    lVar33 = 0;
    plVar25[6] = lVar37;
    lVar37 = Memory::alloc_static((ulong)uVar23 * 8,false);
    plVar25[3] = lVar37;
    lVar37 = Memory::alloc_static(uVar38,false);
    plVar25[5] = lVar37;
    lVar37 = Memory::alloc_static(uVar38,false);
    plVar25[4] = lVar37;
    if (*(int *)((long)plVar25 + 0x3c) != 0) {
      do {
        StringName::StringName
                  ((StringName *)(lVar33 * 8 + plVar25[3]),
                   (StringName *)(local_70._0_8_ + lVar33 * 8));
        *(undefined4 *)(plVar25[5] + lVar33 * 4) = *(undefined4 *)(local_60._0_8_ + lVar33 * 4);
        lVar33 = lVar33 + 1;
      } while ((uint)lVar33 < *(uint *)((long)plVar25 + 0x3c));
    }
    if (uVar23 != 0) {
      lVar37 = plVar25[6];
      uVar26 = 0;
      lVar33 = plVar25[4];
      do {
        *(undefined4 *)(lVar37 + uVar26) = *(undefined4 *)(local_60._8_8_ + uVar26);
        *(undefined4 *)(lVar33 + uVar26) = *(undefined4 *)(local_70._8_8_ + uVar26);
        uVar26 = uVar26 + 4;
      } while (uVar26 != uVar38);
    }
  }
  pvVar28 = (void *)local_70._0_8_;
  if ((void *)local_70._0_8_ != (void *)0x0) {
    if (local_50._4_4_ != 0) {
      if (*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) != 0) {
        memset((void *)local_60._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_50 & 0xffffffff) * 4) * 4);
        if (local_50._4_4_ == 0) goto LAB_00110b00;
      }
      lVar37 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar28 + lVar37 * 8) != 0)) {
          StringName::unref();
          pvVar28 = (void *)local_70._0_8_;
        }
        lVar37 = lVar37 + 1;
      } while ((uint)lVar37 < local_50._4_4_);
      local_50 = local_50 & 0xffffffff;
      if (pvVar28 == (void *)0x0) goto LAB_00110799;
    }
LAB_00110b00:
    Memory::free_static(pvVar28,false);
    Memory::free_static((void *)local_60._0_8_,false);
    Memory::free_static((void *)local_70._8_8_,false);
    Memory::free_static((void *)local_60._8_8_,false);
  }
LAB_00110799:
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = plVar25;
    *(long **)(param_2 + 0x20) = plVar25;
LAB_001107d5:
    lVar37 = *(long *)pSVar32;
    if (lVar37 != 0) goto LAB_001107e2;
LAB_00110aec:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar4 = plVar25;
      plVar25[1] = (long)puVar4;
      *(long **)(param_2 + 0x20) = plVar25;
      goto LAB_001107d5;
    }
    lVar37 = *(long *)(param_2 + 0x18);
    *(long **)(lVar37 + 8) = plVar25;
    *plVar25 = lVar37;
    lVar37 = *(long *)pSVar32;
    *(long **)(param_2 + 0x18) = plVar25;
    if (lVar37 == 0) goto LAB_00110aec;
LAB_001107e2:
    uVar23 = *(uint *)(lVar37 + 0x20);
  }
  lVar37 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar38 = (ulong)uVar23;
  uVar35 = 0;
  lVar33 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar26 = CONCAT44(0,uVar2);
  auVar10._8_8_ = 0;
  auVar10._0_8_ = uVar38 * lVar33;
  auVar18._8_8_ = 0;
  auVar18._0_8_ = uVar26;
  lVar34 = SUB168(auVar10 * auVar18,8);
  lVar5 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar37 + lVar34 * 4);
  iVar31 = SUB164(auVar10 * auVar18,8);
  uVar24 = *puVar1;
  plVar3 = plVar25;
  while (uVar24 != 0) {
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)uVar24 * lVar33;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar26;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)((uVar2 + iVar31) - SUB164(auVar11 * auVar19,8)) * lVar33;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar26;
    uVar23 = SUB164(auVar12 * auVar20,8);
    plVar39 = plVar3;
    if (uVar23 < uVar35) {
      *puVar1 = (uint)uVar38;
      uVar38 = (ulong)uVar24;
      puVar4 = (undefined8 *)(lVar5 + lVar34 * 8);
      plVar39 = (long *)*puVar4;
      *puVar4 = plVar3;
      uVar35 = uVar23;
    }
    uVar23 = (uint)uVar38;
    uVar35 = uVar35 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar31 + 1) * lVar33;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar26;
    lVar34 = SUB168(auVar13 * auVar21,8);
    puVar1 = (uint *)(lVar37 + lVar34 * 4);
    iVar31 = SUB164(auVar13 * auVar21,8);
    plVar3 = plVar39;
    uVar24 = *puVar1;
  }
  *(long **)(lVar5 + lVar34 * 8) = plVar3;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_001108ce:
  *(long **)param_1 = plVar25;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::_resize_and_rehash
          (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
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
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::insert(StringName const&, String
   const&, bool) */

StringName *
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::insert(StringName *param_1,String *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
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
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  CowData *in_RCX;
  uint uVar27;
  int iVar28;
  undefined7 in_register_00000011;
  StringName *pSVar29;
  long lVar30;
  long lVar31;
  ulong uVar32;
  char in_R8B;
  uint uVar33;
  ulong uVar34;
  uint uVar35;
  long *plVar36;
  long in_FS_OFFSET;
  long *local_80;
  long local_58;
  long local_50 [2];
  long local_40;
  
  pSVar29 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar21 = (ulong)uVar23;
    uVar32 = uVar21 * 4;
    uVar34 = uVar21 * 8;
    uVar26 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(param_2 + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(uVar34,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar34)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar21 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,uVar34);
      }
      goto LAB_00111012;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_00111129;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_0011101e;
LAB_0011114b:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_00111313;
    }
    _resize_and_rehash((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_00111012:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_0011101e:
      uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
      uVar32 = CONCAT44(0,uVar2);
      lVar25 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      if (*(long *)pSVar29 == 0) {
        uVar24 = StringName::get_empty_hash();
      }
      else {
        uVar24 = *(uint *)(*(long *)pSVar29 + 0x20);
      }
      if (uVar24 == 0) {
        uVar24 = 1;
      }
      uVar35 = 0;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar24 * lVar25;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar32;
      lVar30 = SUB168(auVar5 * auVar13,8);
      uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
      uVar27 = SUB164(auVar5 * auVar13,8);
      if (uVar33 != 0) {
        do {
          if ((uVar33 == uVar24) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            if (local_80[3] != *(long *)in_RCX) {
              CowData<char32_t>::_ref((CowData<char32_t> *)(local_80 + 3),in_RCX);
              local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            }
            goto LAB_00111313;
          }
          uVar35 = uVar35 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar27 + 1) * lVar25;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar32;
          lVar30 = SUB168(auVar6 * auVar14,8);
          uVar33 = *(uint *)(*(long *)(param_2 + 0x10) + lVar30 * 4);
          uVar27 = SUB164(auVar6 * auVar14,8);
        } while ((uVar33 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar33 * lVar25, auVar15._8_8_ = 0,
                auVar15._0_8_ = uVar32, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar2 + uVar27) - SUB164(auVar7 * auVar15,8)) * lVar25,
                auVar16._8_8_ = 0, auVar16._0_8_ = uVar32, uVar35 <= SUB164(auVar8 * auVar16,8)));
      }
      iVar28 = *(int *)(param_2 + 0x2c);
    }
LAB_00111129:
    if ((float)uVar23 * __LC16 < (float)(iVar28 + 1)) goto LAB_0011114b;
  }
  StringName::StringName((StringName *)&local_58,pSVar29);
  local_50[0] = 0;
  if (*(long *)in_RCX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_50,in_RCX);
  }
  local_80 = (long *)operator_new(0x20,"");
  *local_80 = 0;
  local_80[1] = 0;
  StringName::StringName((StringName *)(local_80 + 2),(StringName *)&local_58);
  local_80[3] = 0;
  if (local_50[0] != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_80 + 3),(CowData *)local_50);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_80;
    *(long **)(param_2 + 0x20) = local_80;
LAB_00111232:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_0011123f;
LAB_00111371:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar3 = local_80;
      local_80[1] = (long)puVar3;
      *(long **)(param_2 + 0x20) = local_80;
      goto LAB_00111232;
    }
    lVar25 = *(long *)(param_2 + 0x18);
    *(long **)(lVar25 + 8) = local_80;
    *local_80 = lVar25;
    lVar25 = *(long *)pSVar29;
    *(long **)(param_2 + 0x18) = local_80;
    if (lVar25 == 0) goto LAB_00111371;
LAB_0011123f:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar32 = (ulong)uVar23;
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar34 = CONCAT44(0,uVar2);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar32 * lVar30;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar34;
  lVar31 = SUB168(auVar9 * auVar17,8);
  lVar4 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar25 + lVar31 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar24 = *puVar1;
  plVar22 = local_80;
  while (uVar24 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar24 * lVar30;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar34;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((iVar28 + uVar2) - SUB164(auVar10 * auVar18,8)) * lVar30;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar34;
    uVar23 = SUB164(auVar11 * auVar19,8);
    plVar36 = plVar22;
    if (uVar23 < uVar33) {
      *puVar1 = (uint)uVar32;
      uVar32 = (ulong)uVar24;
      puVar3 = (undefined8 *)(lVar4 + lVar31 * 8);
      plVar36 = (long *)*puVar3;
      *puVar3 = plVar22;
      uVar33 = uVar23;
    }
    uVar23 = (uint)uVar32;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar30;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar31 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar31 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    plVar22 = plVar36;
    uVar24 = *puVar1;
  }
  *(long **)(lVar4 + lVar31 * 8) = plVar22;
  *puVar1 = uVar23;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_00111313:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::operator[](HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong __n;
  void *__s;
  undefined1 auVar3 [16];
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
  uint uVar27;
  uint uVar28;
  undefined8 *puVar29;
  long lVar30;
  undefined8 uVar31;
  void *__s_00;
  ulong uVar32;
  int iVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  ulong uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  undefined8 *puVar41;
  long in_FS_OFFSET;
  uint local_98;
  undefined8 *local_80;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  long local_50 [2];
  long local_40;
  
  lVar30 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar37 = CONCAT44(0,uVar27);
  if (lVar30 == 0) {
LAB_001119a0:
    local_70 = 0;
    uVar32 = uVar37 * 4;
    __n = uVar37 * 8;
    uVar31 = Memory::alloc_static(uVar32,false);
    *(undefined8 *)(this + 0x10) = uVar31;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if ((int)uVar37 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar32))) {
        uVar32 = 0;
        do {
          *(undefined4 *)((long)__s + uVar32 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar32 * 8) = 0;
          uVar32 = uVar32 + 1;
        } while (uVar37 != uVar32);
      }
      else {
        memset(__s,0,uVar32);
        memset(__s_00,0,__n);
      }
LAB_00111609:
      iVar33 = *(int *)(this + 0x2c);
      if (iVar33 != 0) {
LAB_00111615:
        uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        uVar32 = CONCAT44(0,uVar27);
        lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        if (*(long *)param_1 == 0) {
          uVar28 = StringName::get_empty_hash();
        }
        else {
          uVar28 = *(uint *)(*(long *)param_1 + 0x20);
        }
        if (uVar28 == 0) {
          uVar28 = 1;
        }
        uVar40 = 0;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)uVar28 * lVar30;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar32;
        lVar35 = SUB168(auVar7 * auVar19,8);
        uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
        uVar39 = SUB164(auVar7 * auVar19,8);
        if (uVar38 != 0) {
          do {
            if ((uVar28 == uVar38) &&
               (*(long *)(*(long *)(*(long *)(this + 8) + lVar35 * 8) + 0x10) == *(long *)param_1))
            {
              lVar30 = *(long *)(*(long *)(this + 8) + (ulong)uVar39 * 8);
              if (*(long *)(lVar30 + 0x18) == 0) {
                local_80 = (undefined8 *)(lVar30 + 0x18);
              }
              else {
                CowData<char32_t>::_ref((CowData<char32_t> *)(lVar30 + 0x18),(CowData *)&local_70);
                local_80 = (undefined8 *)(*(long *)(*(long *)(this + 8) + (ulong)uVar39 * 8) + 0x18)
                ;
              }
              goto LAB_00111904;
            }
            uVar40 = uVar40 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(uVar39 + 1) * lVar30;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar32;
            lVar35 = SUB168(auVar8 * auVar20,8);
            uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar35 * 4);
            uVar39 = SUB164(auVar8 * auVar20,8);
          } while ((uVar38 != 0) &&
                  (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar38 * lVar30, auVar21._8_8_ = 0,
                  auVar21._0_8_ = uVar32, auVar10._8_8_ = 0,
                  auVar10._0_8_ = (ulong)((uVar27 + uVar39) - SUB164(auVar9 * auVar21,8)) * lVar30,
                  auVar22._8_8_ = 0, auVar22._0_8_ = uVar32, uVar40 <= SUB164(auVar10 * auVar22,8)))
          ;
        }
        iVar33 = *(int *)(this + 0x2c);
      }
      goto LAB_0011172c;
    }
    iVar33 = *(int *)(this + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_0011172c;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00111615;
LAB_0011174e:
    if (*(int *)(this + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (undefined8 *)0x18;
      goto LAB_00111904;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar28 = StringName::get_empty_hash();
        lVar30 = *(long *)(this + 8);
      }
      else {
        uVar28 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar35;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar37;
      lVar34 = SUB168(auVar3 * auVar15,8);
      uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar34 * 4);
      uVar39 = SUB164(auVar3 * auVar15,8);
      if (uVar38 != 0) {
        uVar40 = 0;
        do {
          if ((uVar38 == uVar28) &&
             (*(long *)(*(long *)(lVar30 + lVar34 * 8) + 0x10) == *(long *)param_1)) {
            local_80 = (undefined8 *)(*(long *)(lVar30 + (ulong)uVar39 * 8) + 0x18);
            goto LAB_001115bc;
          }
          uVar40 = uVar40 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(uVar39 + 1) * lVar35;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar37;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar38 = *(uint *)(*(long *)(this + 0x10) + lVar34 * 4);
          uVar39 = SUB164(auVar4 * auVar16,8);
        } while ((uVar38 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar38 * lVar35, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar37, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar39 + uVar27) - SUB164(auVar5 * auVar17,8)) * lVar35,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar37, uVar40 <= SUB164(auVar6 * auVar18,8)));
      }
      local_70 = 0;
      uVar37 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar30 == 0) goto LAB_001119a0;
      goto LAB_00111609;
    }
    local_70 = 0;
    iVar33 = 0;
LAB_0011172c:
    if ((float)uVar37 * __LC16 < (float)(iVar33 + 1)) goto LAB_0011174e;
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50[0] = 0;
  puVar29 = (undefined8 *)operator_new(0x20,"");
  *puVar29 = local_68._0_8_;
  puVar29[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar29 + 2),(StringName *)&local_58);
  puVar29[3] = 0;
  if (local_50[0] != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar29 + 3),(CowData *)local_50);
  }
  local_80 = puVar29 + 3;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar41 = *(undefined8 **)(this + 0x20);
  if (puVar41 == (undefined8 *)0x0) {
    lVar30 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar29;
    *(undefined8 **)(this + 0x20) = puVar29;
    if (lVar30 == 0) goto LAB_00111975;
LAB_00111827:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  else {
    *puVar41 = puVar29;
    puVar29[1] = puVar41;
    lVar30 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar29;
    if (lVar30 != 0) goto LAB_00111827;
LAB_00111975:
    uVar27 = StringName::get_empty_hash();
  }
  lVar30 = *(long *)(this + 0x10);
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar37 = (ulong)uVar27;
  uVar39 = 0;
  lVar35 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar32 = CONCAT44(0,uVar28);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar37 * lVar35;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar32;
  lVar36 = SUB168(auVar11 * auVar23,8);
  lVar34 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar30 + lVar36 * 4);
  iVar33 = SUB164(auVar11 * auVar23,8);
  uVar38 = *puVar1;
  while (uVar38 != 0) {
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)uVar38 * lVar35;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar32;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)((uVar28 + iVar33) - SUB164(auVar12 * auVar24,8)) * lVar35;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar32;
    local_98 = SUB164(auVar13 * auVar25,8);
    puVar41 = puVar29;
    if (local_98 < uVar39) {
      *puVar1 = (uint)uVar37;
      uVar37 = (ulong)uVar38;
      puVar2 = (undefined8 *)(lVar34 + lVar36 * 8);
      puVar41 = (undefined8 *)*puVar2;
      *puVar2 = puVar29;
      uVar39 = local_98;
    }
    uVar27 = (uint)uVar37;
    uVar39 = uVar39 + 1;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)(iVar33 + 1) * lVar35;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar32;
    lVar36 = SUB168(auVar14 * auVar26,8);
    puVar1 = (uint *)(lVar30 + lVar36 * 4);
    iVar33 = SUB164(auVar14 * auVar26,8);
    puVar29 = puVar41;
    uVar38 = *puVar1;
  }
  *(undefined8 **)(lVar34 + lVar36 * 8) = puVar29;
  *puVar1 = uVar27;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00111904:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001115bc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_notificationv(int, bool) */

void __thiscall
GroupSettingsEditor::_notificationv(GroupSettingsEditor *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    BoxContainer::_notificationv((BoxContainer *)this,param_1,true);
    return;
  }
  BoxContainer::_notificationv((BoxContainer *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* CowData<EditorSelectionHistory::HistoryElement>::_unref() */

void __thiscall
CowData<EditorSelectionHistory::HistoryElement>::_unref
          (CowData<EditorSelectionHistory::HistoryElement> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  Object *pOVar7;
  code *pcVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  
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
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)invalidInstructionException();
    (*pcVar8)();
  }
  lVar4 = *(long *)(lVar3 + -8);
  *(undefined8 *)this = 0;
  if (lVar4 != 0) {
    lVar11 = 0;
    lVar10 = lVar3;
    do {
      if (*(long *)(lVar10 + 8) != 0) {
        LOCK();
        plVar1 = (long *)(*(long *)(lVar10 + 8) + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          plVar1 = *(long **)(lVar10 + 8);
          if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)invalidInstructionException();
            (*pcVar8)();
          }
          lVar5 = plVar1[-1];
          *(undefined8 *)(lVar10 + 8) = 0;
          if (lVar5 != 0) {
            lVar13 = 0;
            plVar12 = plVar1;
            do {
              while( true ) {
                if (plVar12[2] != 0) {
                  LOCK();
                  plVar2 = (long *)(plVar12[2] + -0x10);
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                    lVar6 = plVar12[2];
                    plVar12[2] = 0;
                    Memory::free_static((void *)(lVar6 + -0x10),false);
                  }
                }
                if ((*plVar12 != 0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) break;
LAB_00111ba8:
                lVar13 = lVar13 + 1;
                plVar12 = plVar12 + 4;
                if (lVar5 == lVar13) goto LAB_00111c30;
              }
              pOVar7 = (Object *)*plVar12;
              cVar9 = predelete_handler(pOVar7);
              if (cVar9 == '\0') goto LAB_00111ba8;
              lVar13 = lVar13 + 1;
              plVar12 = plVar12 + 4;
              (**(code **)(*(long *)pOVar7 + 0x140))();
              Memory::free_static(pOVar7,false);
            } while (lVar5 != lVar13);
          }
LAB_00111c30:
          Memory::free_static(plVar1 + -2,false);
        }
      }
      lVar11 = lVar11 + 1;
      lVar10 = lVar10 + 0x18;
    } while (lVar4 != lVar11);
  }
  Memory::free_static((void *)(lVar3 + -0x10),false);
  return;
}



/* CowData<EditorData::EditedScene>::_unref() [clone .part.0] [clone .cold] */

void CowData<EditorData::EditedScene>::_unref(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<EditorData::EditedScene>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<EditorData::EditedScene>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Removing unreachable block (ram,0x00111dd8) */
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
      goto LAB_00112110;
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
LAB_00112110:
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
      goto LAB_0011251f;
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
                    /* WARNING: Could not recover jumptable at 0x001123c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011251f:
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
      goto LAB_001126df;
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
                    /* WARNING: Could not recover jumptable at 0x00112586. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001126df:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&>::validated_call(Object*, Variant const**,
   Variant*) const */

void MethodBindT<StringName_const&,StringName_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001128af;
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
                    /* WARNING: Could not recover jumptable at 0x0011275a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8);
    return;
  }
LAB_001128af:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&,StringName_const&>::ptrcall
               (Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00112a99;
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
                    /* WARNING: Load size is inaccurate */
                    /* WARNING: Could not recover jumptable at 0x00112920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_00112a99:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<StringName_const&>::validated_call
               (Object *param_1,Variant **param_2,Variant *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00112c71;
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
                    /* WARNING: Could not recover jumptable at 0x00112afd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00112c71:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<StringName_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      local_50 = 0;
      local_40 = 0x35;
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
      goto LAB_00112e51;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x58);
                    /* WARNING: Load size is inaccurate */
  if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE +
                   *(long *)((long)param_2 + *(long *)(param_1 + 0x60)) + -1);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00112cd9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00112e51:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  long *plVar7;
  long lVar8;
  undefined4 in_register_00000014;
  long *plVar9;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  plVar9 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar9 != (long *)0x0) && (plVar9[1] != 0)) && (*(char *)(plVar9[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (plVar9[1] == 0) {
      plVar7 = (long *)plVar9[0x23];
      if (plVar7 == (long *)0x0) {
        plVar7 = (long *)(**(code **)(*plVar9 + 0x40))(plVar9);
      }
    }
    else {
      plVar7 = (long *)(plVar9[1] + 0x20);
    }
    if (local_48 == (char *)*plVar7) {
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
      goto LAB_00112f80;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar11 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 2) {
    pVVar10 = param_2[5];
    if (pVVar10 == (Variant *)0x0) {
      if (in_R8D != 1) goto LAB_00112fd0;
LAB_00112fc0:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_00112fd0:
        uVar6 = 4;
        goto LAB_00112f75;
      }
      if (in_R8D == 1) goto LAB_00112fc0;
      lVar8 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar8) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar8 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar11 & 1) != 0) {
      pVVar11 = *(Variant **)(pVVar11 + *(long *)((long)plVar9 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x15);
    uVar4 = _LC77;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  else {
    uVar6 = 3;
LAB_00112f75:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_00112f80:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<StringName_const&,StringName_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  Variant *pVVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  long *plVar8;
  long lVar9;
  Variant *pVVar10;
  undefined4 in_register_00000014;
  long *plVar11;
  Variant *pVVar12;
  int iVar13;
  uint in_R8D;
  undefined4 *in_R9;
  Variant *pVVar14;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  plVar11 = (long *)CONCAT44(in_register_00000014,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((plVar11 != (long *)0x0) && (plVar11[1] != 0)) && (*(char *)(plVar11[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar11[1] == 0) {
      plVar8 = (long *)plVar11[0x23];
      if (plVar8 == (long *)0x0) {
        plVar8 = (long *)(**(code **)(*plVar11 + 0x40))(plVar11);
      }
    }
    else {
      plVar8 = (long *)(plVar11[1] + 0x20);
    }
    if (local_58 == (char *)*plVar8) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC76,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00113340;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar14 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D < 3) {
    pVVar10 = param_2[5];
    iVar6 = 2 - in_R8D;
    if (pVVar10 == (Variant *)0x0) {
      if (iVar6 != 0) goto LAB_00113390;
      pVVar12 = *(Variant **)param_4;
LAB_001133ad:
      pVVar10 = *(Variant **)(param_4 + 8);
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      iVar13 = (int)lVar2;
      if (iVar13 < iVar6) {
LAB_00113390:
        uVar7 = 4;
        goto LAB_0011337d;
      }
      if (in_R8D == 0) {
        lVar9 = (long)(iVar13 + -2);
        if (lVar2 <= lVar9) goto LAB_00113470;
        pVVar12 = pVVar10 + lVar9 * 0x18;
      }
      else {
        pVVar12 = *(Variant **)param_4;
        if (in_R8D == 2) goto LAB_001133ad;
      }
      lVar9 = (long)(int)((in_R8D ^ 1) + (iVar13 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00113470:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pVVar10 = pVVar10 + lVar9 * 0x18;
    }
    *in_R9 = 0;
    if (((ulong)pVVar14 & 1) != 0) {
      pVVar14 = *(Variant **)(pVVar14 + *(long *)((long)plVar11 + (long)pVVar1) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,0x15);
    uVar4 = _LC119;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_60);
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar12,0x15);
    uVar4 = _LC77;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_58);
    (*(code *)pVVar14)((Variant *)((long)plVar11 + (long)pVVar1),(Variant *)&local_58,
                       (Variant *)&local_60);
    if (StringName::configured != '\0') {
      if (local_58 != (char *)0x0) {
        StringName::unref();
        if (StringName::configured == '\0') goto LAB_00113340;
      }
      if (local_60 != 0) {
        StringName::unref();
      }
    }
  }
  else {
    uVar7 = 3;
LAB_0011337d:
    *in_R9 = uVar7;
    in_R9[2] = 2;
  }
LAB_00113340:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_001135d7;
  local_78 = 0;
  local_68 = &_LC21;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001136d5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001136d5;
    StringName::StringName((StringName *)&local_70,(String *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_001135d7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<StringName_const&,StringName_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupSettingsEditor::_notification(int) */

void GroupSettingsEditor::_GLOBAL__sub_I__notification(void)

{
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
  if (Animation::PARAMETERS_BASE_PATH != '\0') {
    return;
  }
  Animation::PARAMETERS_BASE_PATH = 1;
  Animation::PARAMETERS_BASE_PATH = 0;
  String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
  __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
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
/* GroupSettingsEditor::~GroupSettingsEditor() */

void __thiscall GroupSettingsEditor::~GroupSettingsEditor(GroupSettingsEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

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
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<ProjectSettings, void, StringName
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<ProjectSettings,void,StringName_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<ProjectSettings,void,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GroupSettingsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupSettingsEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorValidationPanel, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorValidationPanel,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorValidationPanel,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GroupSettingsEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupSettingsEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GroupSettingsEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupSettingsEditor,void,Object*,int,int,MouseButton> *this)

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



