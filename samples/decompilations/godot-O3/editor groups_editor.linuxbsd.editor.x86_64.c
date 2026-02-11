
/* GroupsEditor::_set_group_checked(String const&, bool) */

void GroupsEditor::_set_group_checked(String *param_1,bool param_2)

{
  long lVar1;
  
  lVar1 = Tree::get_item_with_text(*(String **)(param_1 + 0xab0));
  if (lVar1 != 0) {
    TreeItem::set_checked((int)lVar1,false);
    return;
  }
  return;
}



/* can_edit(Node*, String const&) */

undefined8 can_edit(Node *param_1,String *param_2)

{
  char cVar1;
  uint uVar2;
  Node *pNVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  NodePath *local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Node *)0x0) {
    do {
      while( true ) {
        pNVar3 = (Node *)EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
        if (param_1 == pNVar3) {
          Node::get_scene_inherited_state();
        }
        else {
          Node::get_scene_instance_state();
        }
        if (local_50 != (NodePath *)0x0) {
          Node::get_path_to((Node *)&local_48,SUB81(param_1,0));
          uVar2 = SceneState::find_node_by_path(local_50);
          NodePath::~NodePath((NodePath *)&local_48);
          if (uVar2 != 0xffffffff) {
            StringName::StringName((StringName *)&local_48,param_2,false);
            cVar1 = SceneState::is_node_in_group((int)local_50,(StringName *)(ulong)uVar2);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            if (cVar1 != '\0') {
              if (local_50 != (NodePath *)0x0) {
                cVar1 = RefCounted::unreference();
                if (cVar1 != '\0') {
                  cVar1 = predelete_handler((Object *)local_50);
                  if (cVar1 != '\0') {
                    (**(code **)(*(long *)local_50 + 0x140))(local_50);
                    Memory::free_static(local_50,false);
                    uVar4 = 0;
                    goto LAB_00100195;
                  }
                }
              }
              uVar4 = 0;
              goto LAB_00100195;
            }
          }
        }
        param_1 = (Node *)Node::get_owner();
        if (local_50 != (NodePath *)0x0) break;
LAB_00100124:
        if (param_1 == (Node *)0x0) goto LAB_00100190;
      }
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') goto LAB_00100124;
      cVar1 = predelete_handler((Object *)local_50);
      if (cVar1 == '\0') goto LAB_00100124;
      (**(code **)(*(long *)local_50 + 0x140))(local_50);
      Memory::free_static(local_50,false);
    } while (param_1 != (Node *)0x0);
  }
LAB_00100190:
  uVar4 = 1;
LAB_00100195:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, bool, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool> > >::erase(StringName const&) [clone
   .isra.0] */

ulong __thiscall
HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
::erase(HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
        *this,StringName *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  ulong uVar11;
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
  uint uVar32;
  ulong in_RAX;
  uint uVar33;
  uint uVar34;
  int iVar35;
  long lVar36;
  long *plVar37;
  ulong uVar38;
  uint uVar39;
  
  if (*(long *)(this + 8) == 0) {
    return in_RAX;
  }
  if (*(uint *)(this + 0x2c) == 0) {
    return (ulong)*(uint *)(this + 0x2c);
  }
  uVar6 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar38 = CONCAT44(0,uVar6);
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  if (*(long *)param_1 == 0) {
    uVar32 = StringName::get_empty_hash();
  }
  else {
    uVar32 = *(uint *)(*(long *)param_1 + 0x20);
  }
  lVar8 = *(long *)(this + 0x10);
  if (uVar32 == 0) {
    uVar32 = 1;
  }
  auVar12._8_8_ = 0;
  auVar12._0_8_ = (ulong)uVar32 * lVar7;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = uVar38;
  auVar12 = auVar12 * auVar22;
  lVar36 = auVar12._8_8_;
  uVar34 = *(uint *)(lVar8 + lVar36 * 4);
  uVar33 = auVar12._8_4_;
  if (uVar34 == 0) {
    return auVar12._0_8_;
  }
  uVar39 = 0;
  while ((uVar32 != uVar34 ||
         (lVar9 = *(long *)(this + 8),
         *(long *)(*(long *)(lVar9 + lVar36 * 8) + 0x10) != *(long *)param_1))) {
    uVar39 = uVar39 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(uVar33 + 1) * lVar7;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar38;
    auVar13 = auVar13 * auVar23;
    lVar36 = auVar13._8_8_;
    uVar34 = *(uint *)(lVar8 + lVar36 * 4);
    uVar33 = auVar13._8_4_;
    if (uVar34 == 0) {
      return auVar13._0_8_;
    }
    auVar14._8_8_ = 0;
    auVar14._0_8_ = (ulong)uVar34 * lVar7;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar38;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((uVar6 + uVar33) - SUB164(auVar14 * auVar24,8)) * lVar7;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar38;
    if (SUB164(auVar15 * auVar25,8) < uVar39) {
      return SUB168(auVar15 * auVar25,0);
    }
  }
  lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar6 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar38 = CONCAT44(0,uVar6);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = (ulong)(uVar33 + 1) * lVar7;
  auVar26._8_8_ = 0;
  auVar26._0_8_ = uVar38;
  lVar36 = SUB168(auVar16 * auVar26,8);
  puVar1 = (uint *)(lVar8 + lVar36 * 4);
  uVar34 = SUB164(auVar16 * auVar26,8);
  uVar32 = *puVar1;
  if (uVar32 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar32 * lVar7;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar38;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((uVar6 + uVar34) - SUB164(auVar17 * auVar27,8)) * lVar7;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar38;
    iVar35 = SUB164(auVar18 * auVar28,8);
    while (uVar39 = uVar34, iVar35 != 0) {
      puVar2 = (uint *)(lVar8 + (ulong)uVar33 * 4);
      *puVar1 = *puVar2;
      puVar3 = (undefined8 *)(lVar9 + lVar36 * 8);
      *puVar2 = uVar32;
      puVar4 = (undefined8 *)(lVar9 + (ulong)uVar33 * 8);
      uVar10 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar10;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = (ulong)(uVar39 + 1) * lVar7;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar38;
      lVar36 = SUB168(auVar21 * auVar31,8);
      puVar1 = (uint *)(lVar8 + lVar36 * 4);
      uVar34 = SUB164(auVar21 * auVar31,8);
      uVar32 = *puVar1;
      uVar33 = uVar39;
      if (uVar32 == 0) break;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = (ulong)uVar32 * lVar7;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar38;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = (ulong)((uVar34 + uVar6) - SUB164(auVar19 * auVar29,8)) * lVar7;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar38;
      iVar35 = SUB164(auVar20 * auVar30,8);
    }
  }
  uVar38 = (ulong)uVar33;
  plVar5 = (long *)(lVar9 + uVar38 * 8);
  *(undefined4 *)(lVar8 + uVar38 * 4) = 0;
  plVar37 = (long *)*plVar5;
  if (*(long **)(this + 0x18) == plVar37) {
    *(long *)(this + 0x18) = *plVar37;
    plVar37 = (long *)*plVar5;
  }
  if (*(long **)(this + 0x20) == plVar37) {
    *(long *)(this + 0x20) = plVar37[1];
    plVar37 = (long *)*plVar5;
  }
  if ((long *)plVar37[1] != (long *)0x0) {
    *(long *)plVar37[1] = *plVar37;
    plVar37 = (long *)*plVar5;
  }
  if (*plVar37 != 0) {
    *(long *)(*plVar37 + 8) = plVar37[1];
    plVar37 = (long *)*plVar5;
  }
  if ((StringName::configured != '\0') && (plVar37[2] != 0)) {
    StringName::unref();
  }
  Memory::free_static(plVar37,false);
  uVar11 = *(ulong *)(this + 8);
  *(undefined8 *)(uVar11 + uVar38 * 8) = 0;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
  return uVar11;
}



/* GroupsEditor::_remove_scene_group(String const&) */

void __thiscall GroupsEditor::_remove_scene_group(GroupsEditor *this,String *param_1)

{
  Node *pNVar1;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_38,param_1,false);
  HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
  ::erase((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
           *)(this + 0xb18),(StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
  pNVar1 = *(Node **)(ProjectSettingsEditor::singleton + 0xdf8);
  StringName::StringName((StringName *)&local_38,param_1,false);
  GroupSettingsEditor::remove_node_references(pNVar1,*(StringName **)(this + 0xa28));
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* GroupsEditor::_queue_update_groups_and_tree() */

void __thiscall GroupsEditor::_queue_update_groups_and_tree(GroupsEditor *this)

{
  long in_FS_OFFSET;
  GroupsEditor aGStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xa1b] == (GroupsEditor)0x0) {
    this[0xa1b] = (GroupsEditor)0x1;
    create_custom_callable_function_pointer<GroupsEditor>
              (aGStack_48,(char *)this,(_func_void *)"&GroupsEditor::_update_groups_and_tree");
    Variant::Variant((Variant *)local_38,0);
    Callable::call_deferredp((Variant **)aGStack_48,0);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)aGStack_48);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_modify_group(Object*, int, int, MouseButton) */

void __thiscall
GroupsEditor::_modify_group
          (GroupsEditor *this,long param_1,undefined8 param_3_00,int param_3,int param_5)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_5 == 1) && (*(long *)(this + 0xa20) != 0)) && (param_1 != 0)) {
    lVar3 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
    plVar2 = DisplayServer::singleton;
    if ((lVar3 != 0) && (param_3 == 1)) {
      pcVar1 = *(code **)(*DisplayServer::singleton + 0x3b0);
      TreeItem::get_text((int)aCStack_38);
      (*pcVar1)(plVar2,aCStack_38);
      CowData<char32_t>::_unref(aCStack_38);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* GroupsEditor::_item_edited() */

void __thiscall GroupsEditor::_item_edited(GroupsEditor *this)

{
  Variant *pVVar1;
  StringName *pSVar2;
  char cVar3;
  long lVar4;
  Object *this_00;
  int iVar5;
  Variant *pVVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  CowData local_c8 [8];
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = Tree::get_edited();
  if (lVar4 != 0) {
    TreeItem::get_text((int)local_c8);
    this_00 = (Object *)EditorUndoRedoManager::get_singleton();
    cVar3 = TreeItem::is_checked((int)lVar4);
    local_b8 = 0;
    if (cVar3 == '\0') {
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Remove from Group");
      TTR((String *)&local_b0,(String *)&local_c0);
      EditorUndoRedoManager::create_action(this_00,(String *)&local_b0,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"remove_from_group",false);
      pSVar2 = *(StringName **)(this + 0xa20);
      Variant::Variant((Variant *)local_88,(String *)&local_b0);
      local_70 = 0;
      local_68 = (undefined1  [16])0x0;
      iVar5 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_do_methodp(this_00,pSVar2,(Variant **)&local_b8,iVar5);
      if (Variant::needs_deinit[(int)local_70] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"add_to_group",false);
      pSVar2 = *(StringName **)(this + 0xa20);
      Variant::Variant((Variant *)local_88,(String *)&local_b0);
      Variant::Variant((Variant *)&local_70,true);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)&local_70;
      EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_b8,iVar5);
      pVVar7 = (Variant *)local_40;
      pVVar6 = pVVar7;
      do {
        pVVar1 = pVVar6 + -0x18;
        pVVar6 = pVVar6 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar6 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"_set_group_checked",false);
      Variant::Variant((Variant *)local_88,(String *)&local_b0);
      Variant::Variant((Variant *)&local_70,false);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)&local_70;
      EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_b8,iVar5);
      pVVar6 = pVVar7;
      do {
        pVVar1 = pVVar6 + -0x18;
        pVVar6 = pVVar6 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar6 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"_set_group_checked",false);
      Variant::Variant((Variant *)local_88,(String *)&local_b0);
      Variant::Variant((Variant *)&local_70,true);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)&local_70;
      EditorUndoRedoManager::add_undo_methodp
                (this_00,(StringName *)this,(Variant **)&local_b8,iVar5);
      do {
        pVVar6 = pVVar7 + -0x18;
        pVVar7 = pVVar7 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar7 != (Variant *)local_88);
    }
    else {
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Add to Group");
      TTR((String *)&local_b0,(String *)&local_c0);
      EditorUndoRedoManager::create_action(this_00,(String *)&local_b0,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"add_to_group",false);
      pSVar2 = *(StringName **)(this + 0xa20);
      Variant::Variant((Variant *)local_88,(String *)&local_b0);
      Variant::Variant((Variant *)&local_70,true);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      iVar5 = (int)&local_a8;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)&local_70;
      EditorUndoRedoManager::add_do_methodp(this_00,pSVar2,(Variant **)&local_b8,iVar5);
      pVVar7 = (Variant *)local_40;
      do {
        pVVar6 = pVVar7 + -0x18;
        pVVar7 = pVVar7 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar7 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"remove_from_group",false);
      pSVar2 = *(StringName **)(this + 0xa20);
      Variant::Variant((Variant *)local_88,(String *)&local_b0);
      local_70 = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      EditorUndoRedoManager::add_undo_methodp(this_00,pSVar2,(Variant **)&local_b8,iVar5);
      if (Variant::needs_deinit[(int)local_70] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      pVVar7 = (Variant *)local_40;
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"_set_group_checked",false);
      Variant::Variant((Variant *)local_88,(String *)&local_b0);
      Variant::Variant((Variant *)&local_70,true);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)&local_70;
      EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_b8,iVar5);
      do {
        pVVar6 = pVVar7 + -0x18;
        pVVar7 = pVVar7 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar6] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar7 != (Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_b0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,local_c8);
      StringName::StringName((StringName *)&local_b8,"_set_group_checked",false);
      Variant::Variant((Variant *)local_88,(String *)&local_b0);
      Variant::Variant((Variant *)&local_70,false);
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)&local_70;
      EditorUndoRedoManager::add_undo_methodp
                (this_00,(StringName *)this,(Variant **)&local_b8,iVar5);
      pVVar7 = (Variant *)&local_58;
      cVar3 = Variant::needs_deinit[(int)local_58];
      while( true ) {
        if (cVar3 != '\0') {
          Variant::_clear_internal();
        }
        if (pVVar7 == (Variant *)local_88) break;
        pVVar6 = pVVar7 + -0x18;
        pVVar7 = pVVar7 + -0x18;
        cVar3 = Variant::needs_deinit[*(int *)pVVar6];
      }
    }
    if ((StringName::configured != '\0') && (local_b8 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    StringName::StringName((StringName *)&local_b0,"update_tree",false);
    EditorUndoRedoManager::add_do_method<>
              ((EditorUndoRedoManager *)this_00,*(Object **)(SceneTreeDock::singleton + 0xac0),
               (StringName *)&local_b0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b0,"update_tree",false);
    EditorUndoRedoManager::add_undo_method<>
              ((EditorUndoRedoManager *)this_00,*(Object **)(SceneTreeDock::singleton + 0xac0),
               (StringName *)&local_b0);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(this_00,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  }
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GroupsEditor::_confirm_add() */

void __thiscall GroupsEditor::_confirm_add(GroupsEditor *this)

{
  Variant *pVVar1;
  char cVar2;
  Object *this_00;
  Variant *pVVar3;
  StringName *pSVar4;
  Object *pOVar5;
  int iVar6;
  long in_FS_OFFSET;
  CowData local_d8 [8];
  String local_d0 [8];
  undefined8 local_c8;
  long local_c0;
  char *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [2];
  undefined1 local_80 [16];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  String::strip_edges(SUB81(local_d8,0),SUB81((CowData<char32_t> *)&local_b8,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  LineEdit::get_text();
  this_00 = (Object *)EditorUndoRedoManager::get_singleton();
  local_b8 = "";
  local_c0 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_c0);
  local_b8 = "Add to Group";
  local_c8 = 0;
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_c8);
  TTR((String *)&local_b8,(String *)&local_c8);
  EditorUndoRedoManager::create_action(this_00,(CowData<char32_t> *)&local_b8,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  local_b8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,local_d8);
  StringName::StringName((StringName *)&local_c0,"add_to_group",false);
  pSVar4 = *(StringName **)(this + 0xa20);
  Variant::Variant((Variant *)local_88,(String *)&local_b8);
  Variant::Variant((Variant *)local_70,true);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  iVar6 = (int)&local_a8;
  local_a8 = (Variant *)local_88;
  pVStack_a0 = (Variant *)local_70;
  EditorUndoRedoManager::add_do_methodp(this_00,pSVar4,(Variant **)&local_c0,iVar6);
  pVVar3 = (Variant *)local_40;
  do {
    pVVar1 = pVVar3 + -0x18;
    pVVar3 = pVVar3 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar3 != (Variant *)local_88);
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  local_b8 = (char *)0x0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,local_d8);
  StringName::StringName((StringName *)&local_c0,"remove_from_group",false);
  pSVar4 = *(StringName **)(this + 0xa20);
  Variant::Variant((Variant *)local_88,(String *)&local_b8);
  local_70[0] = 0;
  local_70[1] = 0;
  local_68 = (undefined1  [16])0x0;
  local_a8 = (Variant *)local_88;
  EditorUndoRedoManager::add_undo_methodp(this_00,pSVar4,(Variant **)&local_c0,iVar6);
  if (Variant::needs_deinit[local_70[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_c0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  cVar2 = BaseButton::is_pressed();
  if (cVar2 == '\0') {
    local_b8 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,local_d8);
    StringName::StringName((StringName *)&local_c0,"_add_scene_group",false);
    Variant::Variant((Variant *)local_88,(String *)&local_b8);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_c0,iVar6);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    local_b8 = (char *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,local_d8);
    StringName::StringName((StringName *)&local_c0,"_remove_scene_group",false);
    Variant::Variant((Variant *)local_88,(String *)&local_b8);
    local_70[0] = 0;
    local_70[1] = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp(this_00,(StringName *)this,(Variant **)&local_c0,iVar6);
    if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  }
  else {
    String::operator+((String *)&local_c0,(String *)(this + 0xa10));
    Variant::Variant((Variant *)local_88,local_d0);
    StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
    pSVar4 = (StringName *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_do_property(this_00,pSVar4,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_80 = (undefined1  [16])0x0;
    local_88[0] = 0;
    local_88[1] = 0;
    StringName::StringName((StringName *)&local_b8,(String *)&local_c0,false);
    pSVar4 = (StringName *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_undo_property(this_00,pSVar4,(Variant *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    StringName::StringName((StringName *)&local_b8,"save",false);
    pOVar5 = (Object *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_do_method<>
              ((EditorUndoRedoManager *)this_00,pOVar5,(StringName *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"save",false);
    pOVar5 = (Object *)ProjectSettings::get_singleton();
    EditorUndoRedoManager::add_undo_method<>
              ((EditorUndoRedoManager *)this_00,pOVar5,(StringName *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"_update_groups",false);
    EditorUndoRedoManager::add_do_method<>
              ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"_update_groups",false);
    EditorUndoRedoManager::add_undo_method<>
              ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_b8);
    if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
  }
  StringName::StringName((StringName *)&local_b8,"_update_tree",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_b8,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"_update_tree",false);
  local_88[0] = 0;
  local_88[1] = 0;
  local_80 = (undefined1  [16])0x0;
  EditorUndoRedoManager::add_undo_methodp(this_00,(StringName *)this,(Variant **)&local_b8,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"update_tree",false);
  local_80 = (undefined1  [16])0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  EditorUndoRedoManager::add_do_methodp
            (this_00,*(StringName **)(SceneTreeDock::singleton + 0xac0),(Variant **)&local_b8,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_b8,"update_tree",false);
  local_80 = (undefined1  [16])0x0;
  local_88[0] = 0;
  local_88[1] = 0;
  EditorUndoRedoManager::add_undo_methodp
            (this_00,*(StringName **)(SceneTreeDock::singleton + 0xac0),(Variant **)&local_b8,0);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_b8 != (char *)0x0)) {
    StringName::unref();
  }
  EditorUndoRedoManager::commit_action(SUB81(this_00,0));
  Control::grab_focus();
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_confirm_delete() */

void __thiscall GroupsEditor::_confirm_delete(GroupsEditor *this)

{
  code *pcVar1;
  bool bVar2;
  char cVar3;
  long *plVar4;
  Object *this_00;
  StringName *pSVar5;
  Object *pOVar6;
  int iVar7;
  long in_FS_OFFSET;
  Variant local_c8 [8];
  String local_c0 [8];
  undefined8 local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  Variant *local_98;
  undefined1 local_90 [16];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)Tree::get_selected();
  if (plVar4 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar4 + 0xb8);
    local_90 = (undefined1  [16])0x0;
    local_98 = (Variant *)0x0;
    StringName::StringName((StringName *)&local_a8,"__name",false);
    (*pcVar1)((Variant *)local_78,plVar4,(StringName *)&local_a8,&local_98);
    Variant::operator_cast_to_String(local_c8);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    pcVar1 = *(code **)(*plVar4 + 0xb8);
    local_90 = (undefined1  [16])0x0;
    local_98 = (Variant *)0x0;
    StringName::StringName((StringName *)&local_a8,"__local",false);
    (*pcVar1)((Variant *)local_78,plVar4,(StringName *)&local_a8,&local_98);
    bVar2 = Variant::operator_cast_to_bool((Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    this_00 = (Object *)EditorUndoRedoManager::get_singleton();
    local_b0 = 0;
    local_a0 = 0;
    local_a8 = "";
    String::parse_latin1((StrRange *)&local_b0);
    local_b8 = 0;
    local_a8 = "Remove Group";
    local_a0 = 0xc;
    String::parse_latin1((StrRange *)&local_b8);
    TTR((String *)&local_a8,(String *)&local_b8);
    EditorUndoRedoManager::create_action(this_00,(StringName *)&local_a8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    if (bVar2) {
      local_a8 = (char *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_c8);
      StringName::StringName((StringName *)&local_b0,"_remove_scene_group",false);
      Variant::Variant((Variant *)local_78,(String *)&local_a8);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      iVar7 = (int)&local_98;
      local_98 = (Variant *)local_78;
      EditorUndoRedoManager::add_do_methodp(this_00,(StringName *)this,(Variant **)&local_b0,iVar7);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      local_a8 = (char *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_c8);
      StringName::StringName((StringName *)&local_b0,"_add_scene_group",false);
      Variant::Variant((Variant *)local_78,(String *)&local_a8);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_98 = (Variant *)local_78;
      EditorUndoRedoManager::add_undo_methodp
                (this_00,(StringName *)this,(Variant **)&local_b0,iVar7);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    else {
      String::operator+(local_c0,(String *)(this + 0xa10));
      pcVar1 = *(code **)(*plVar4 + 0xb8);
      local_90 = (undefined1  [16])0x0;
      local_98 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_a8,"__description",false);
      (*pcVar1)((Variant *)local_78,plVar4,(StringName *)&local_a8,&local_98);
      Variant::operator_cast_to_String((Variant *)&local_b8);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
      local_70 = (undefined1  [16])0x0;
      local_78[0] = 0;
      local_78[1] = 0;
      StringName::StringName((StringName *)&local_a8,local_c0,false);
      pSVar5 = (StringName *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_do_property(this_00,pSVar5,(Variant *)&local_a8);
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      Variant::Variant((Variant *)local_78,(String *)&local_b8);
      StringName::StringName((StringName *)&local_a8,local_c0,false);
      pSVar5 = (StringName *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_undo_property(this_00,pSVar5,(Variant *)&local_a8);
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      cVar3 = BaseButton::is_pressed();
      if (cVar3 != '\0') {
        local_a8 = (char *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_c8);
        StringName::StringName((StringName *)&local_b0,"remove_references",false);
        EditorUndoRedoManager::add_do_method<String>
                  ((EditorUndoRedoManager *)this_00,
                   *(undefined8 *)(ProjectSettingsEditor::singleton + 0xdf8),(StrRange *)&local_b0,
                   (StringName *)&local_a8);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      StringName::StringName((StringName *)&local_a8,"save",false);
      pOVar6 = (Object *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_do_method<>
                ((EditorUndoRedoManager *)this_00,pOVar6,(StringName *)&local_a8);
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_a8,"save",false);
      pOVar6 = (Object *)ProjectSettings::get_singleton();
      EditorUndoRedoManager::add_undo_method<>
                ((EditorUndoRedoManager *)this_00,pOVar6,(StringName *)&local_a8);
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_a8,"_update_groups",false);
      EditorUndoRedoManager::add_do_method<>
                ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_a8);
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_a8,"_update_groups",false);
      EditorUndoRedoManager::add_undo_method<>
                ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_a8);
      if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
    }
    StringName::StringName((StringName *)&local_a8,"_update_tree",false);
    EditorUndoRedoManager::add_do_method<>
              ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_a8);
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_a8,"_update_tree",false);
    EditorUndoRedoManager::add_undo_method<>
              ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_a8);
    if ((StringName::configured != '\0') && (local_a8 != (char *)0x0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(this_00,0));
    Control::grab_focus();
    CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_show_remove_group_dialog() */

void __thiscall GroupsEditor::_show_remove_group_dialog(GroupsEditor *this)

{
  code *pcVar1;
  String *pSVar2;
  long lVar3;
  long *plVar4;
  ConfirmationDialog *this_00;
  BoxContainer *this_01;
  Label *this_02;
  CheckBox *this_03;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  char *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa80) == 0) {
    this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
    ConfirmationDialog::ConfirmationDialog(this_00);
    postinitialize_handler((Object *)this_00);
    lVar3 = *(long *)this_00;
    *(ConfirmationDialog **)(this + 0xa80) = this_00;
    pcVar1 = *(code **)(lVar3 + 0x108);
    create_custom_callable_function_pointer<GroupsEditor>
              ((GroupsEditor *)&local_88,(char *)this,(_func_void *)"&GroupsEditor::_confirm_delete"
              );
    (*pcVar1)(this_00,SceneStringNames::singleton + 0x268,(GroupsEditor *)&local_88,0);
    Callable::~Callable((Callable *)&local_88);
    this_01 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_01,true);
    this_01[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_01 = &PTR__initialize_classv_0011bd60;
    postinitialize_handler((Object *)this_01);
    this_02 = (Label *)operator_new(0xad8,"");
    local_88 = (char *)0x0;
    Label::Label(this_02,(String *)&local_88);
    postinitialize_handler((Object *)this_02);
    *(Label **)(this + 0xa90) = this_02;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    Node::add_child(this_01,*(undefined8 *)(this + 0xa90),0,0);
    this_03 = (CheckBox *)operator_new(0xc60,"");
    local_88 = (char *)0x0;
    CheckBox::CheckBox(this_03,(String *)&local_88);
    postinitialize_handler((Object *)this_03);
    *(CheckBox **)(this + 0xa88) = this_03;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    local_88 = "";
    pSVar2 = *(String **)(this + 0xa88);
    local_90 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_90);
    local_88 = "Delete references from all scenes";
    local_98 = 0;
    local_80 = 0x21;
    String::parse_latin1((StrRange *)&local_98);
    TTR((String *)&local_88,(String *)&local_98);
    Button::set_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    Node::add_child(this_01,*(undefined8 *)(this + 0xa88),0,0);
    Node::add_child(*(undefined8 *)(this + 0xa80),this_01,0,0);
    Node::add_child(this,*(undefined8 *)(this + 0xa80),0,0);
  }
  plVar4 = (long *)Tree::get_selected();
  if (plVar4 != (long *)0x0) {
    local_70 = (undefined1  [16])0x0;
    pcVar1 = *(code **)(*plVar4 + 0xb8);
    local_78 = 0;
    StringName::StringName((StringName *)&local_88,"__local",false);
    (*pcVar1)((Variant *)local_58,plVar4,(StringName *)&local_88,&local_78);
    Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa88),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa88),0));
    pSVar2 = *(String **)(this + 0xa90);
    TreeItem::get_text((int)(CowData<char32_t> *)&local_90);
    local_88 = "";
    local_a0 = 0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_a0);
    local_88 = "Delete group \"%s\" and all its references?";
    local_a8 = 0;
    local_80 = 0x29;
    String::parse_latin1((StrRange *)&local_a8);
    TTR((String *)&local_98,(String *)&local_a8);
    vformat<String>((StringName *)&local_88,(String *)&local_98,(CowData<char32_t> *)&local_90);
    Label::set_text(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    Window::reset_size();
    local_58[0] = 0;
    local_58[1] = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xa80));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GroupsEditor::_show_add_group_dialog() */

void __thiscall GroupsEditor::_show_add_group_dialog(GroupsEditor *this)

{
  long *plVar1;
  code *pcVar2;
  Vector2 *pVVar3;
  String *pSVar4;
  long lVar5;
  undefined8 uVar6;
  Callable *pCVar7;
  ConfirmationDialog *this_00;
  BoxContainer *this_01;
  GridContainer *this_02;
  Label *this_03;
  BoxContainer *this_04;
  LineEdit *pLVar8;
  CheckButton *this_05;
  Label *this_06;
  CallableCustom *this_07;
  EditorValidationPanel *this_08;
  long in_FS_OFFSET;
  float fVar9;
  undefined8 local_70;
  undefined8 local_68 [2];
  undefined8 local_58 [2];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa38) == 0) {
    this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
    ConfirmationDialog::ConfirmationDialog(this_00);
    postinitialize_handler((Object *)this_00);
    *(ConfirmationDialog **)(this + 0xa38) = this_00;
    local_68[0] = 0;
    String::parse_latin1((String *)local_68,"");
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"Create New Group");
    TTR((String *)local_58,(String *)&local_70);
    Window::set_title((String *)this_00);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    plVar1 = *(long **)(this + 0xa38);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<GroupsEditor>
              ((GroupsEditor *)local_58,(char *)this,(_func_void *)"&GroupsEditor::_confirm_add");
    (*pcVar2)(plVar1,SceneStringNames::singleton + 0x268,(String *)local_58,0);
    Callable::~Callable((Callable *)local_58);
    this_01 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_01,true);
    this_01[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_01 = &PTR__initialize_classv_0011bd60;
    postinitialize_handler((Object *)this_01);
    Node::add_child(*(undefined8 *)(this + 0xa38),this_01,0,0);
    this_02 = (GridContainer *)operator_new(0xa10,"");
    GridContainer::GridContainer(this_02);
    postinitialize_handler((Object *)this_02);
    GridContainer::set_columns((int)this_02);
    Node::add_child(this_01,this_02,0,0);
    this_03 = (Label *)operator_new(0xad8,"");
    local_68[0] = 0;
    String::parse_latin1((String *)local_68,"");
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"Name:");
    TTR((String *)local_58,(String *)&local_70);
    Label::Label(this_03,(String *)local_58);
    postinitialize_handler((Object *)this_03);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    Control::set_h_size_flags(this_03,0);
    Node::add_child(this_02,this_03,0,0);
    this_04 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_04,false);
    this_04[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_04 = &PTR__initialize_classv_0011b9e8;
    postinitialize_handler((Object *)this_04);
    Control::set_h_size_flags(this_04,3);
    Node::add_child(this_02,this_04,0,0);
    pLVar8 = (LineEdit *)operator_new(0xbb0,"");
    local_58[0] = 0;
    LineEdit::LineEdit(pLVar8,(String *)local_58);
    postinitialize_handler((Object *)pLVar8);
    *(LineEdit **)(this + 0xa40) = pLVar8;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    pVVar3 = *(Vector2 **)(this + 0xa40);
    fVar9 = (float)EditorScale::get_scale();
    local_48 = (ulong)(uint)(fVar9 * __LC45);
    Control::set_custom_minimum_size(pVVar3);
    Control::set_h_size_flags(*(undefined8 *)(this + 0xa40),3);
    Node::add_child(this_04,*(undefined8 *)(this + 0xa40),0,0);
    this_05 = (CheckButton *)operator_new(0xc60,"");
    local_58[0] = 0;
    CheckButton::CheckButton(this_05,(String *)local_58);
    postinitialize_handler((Object *)this_05);
    *(CheckButton **)(this + 0xa50) = this_05;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    pSVar4 = *(String **)(this + 0xa50);
    local_68[0] = 0;
    String::parse_latin1((String *)local_68,"");
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"Global");
    TTR((String *)local_58,(String *)&local_70);
    Button::set_text(pSVar4);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    Node::add_child(this_04,*(undefined8 *)(this + 0xa50),0);
    this_06 = (Label *)operator_new(0xad8,"");
    local_68[0] = 0;
    String::parse_latin1((String *)local_68,"");
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"Description:");
    TTR((String *)local_58,(String *)&local_70);
    Label::Label(this_06,(String *)local_58);
    postinitialize_handler((Object *)this_06);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    Control::set_h_size_flags(this_03,0);
    Node::add_child(this_02,this_06,0);
    pLVar8 = (LineEdit *)operator_new(0xbb0,"");
    local_58[0] = 0;
    LineEdit::LineEdit(pLVar8,(String *)local_58);
    postinitialize_handler((Object *)pLVar8);
    *(LineEdit **)(this + 0xa48) = pLVar8;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    Control::set_h_size_flags(*(undefined8 *)(this + 0xa48),3);
    LineEdit::set_editable(SUB81(*(undefined8 *)(this + 0xa48),0));
    Node::add_child(this_02,*(undefined8 *)(this + 0xa48),0);
    plVar1 = *(long **)(this + 0xa50);
    lVar5 = *(long *)(this + 0xa48);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    this_07 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_07);
    *(undefined **)(this_07 + 0x20) = &_LC15;
    *(undefined1 (*) [16])(this_07 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_07 = &PTR_hash_0011c570;
    *(undefined8 *)(this_07 + 0x40) = 0;
    uVar6 = *(undefined8 *)(lVar5 + 0x60);
    *(long *)(this_07 + 0x28) = lVar5;
    *(undefined8 *)(this_07 + 0x30) = uVar6;
    *(undefined8 *)(this_07 + 0x10) = 0;
    *(code **)(this_07 + 0x38) = LineEdit::set_editable;
    CallableCustomMethodPointerBase::_setup((uint *)this_07,(int)this_07 + 0x28);
    *(char **)(this_07 + 0x20) = "LineEdit::set_editable";
    Callable::Callable((Callable *)local_58,this_07);
    (*pcVar2)(plVar1,SceneStringNames::singleton + 0x248,(String *)local_58,0);
    Callable::~Callable((Callable *)local_58);
    AcceptDialog::register_text_enter(*(LineEdit **)(this + 0xa38));
    AcceptDialog::register_text_enter(*(LineEdit **)(this + 0xa38));
    this_08 = (EditorValidationPanel *)operator_new(0xac0,"");
    EditorValidationPanel::EditorValidationPanel(this_08);
    postinitialize_handler((Object *)this_08);
    *(EditorValidationPanel **)(this + 0xa58) = this_08;
    local_68[0] = 0;
    String::parse_latin1((String *)local_68,"");
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"Group name is valid.");
    TTR((String *)local_58,(String *)&local_70);
    EditorValidationPanel::add_line((int)this_08,(String *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    pCVar7 = *(Callable **)(this + 0xa58);
    create_custom_callable_function_pointer<GroupsEditor>
              ((GroupsEditor *)local_58,(char *)this,(_func_void *)"&GroupsEditor::_check_add");
    EditorValidationPanel::set_update_callback(pCVar7);
    Callable::~Callable((Callable *)local_58);
    EditorValidationPanel::set_accept_button(*(Button **)(this + 0xa58));
    plVar1 = *(long **)(this + 0xa40);
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<EditorValidationPanel>
              ((EditorValidationPanel *)local_68,*(char **)(this + 0xa58),
               (_func_void *)"&EditorValidationPanel::update");
    Callable::unbind((int)(String *)local_58);
    (*pcVar2)(plVar1,SceneStringNames::singleton + 0x270,(String *)local_58);
    Callable::~Callable((Callable *)local_58);
    Callable::~Callable((Callable *)local_68);
    Node::add_child(this_01,*(undefined8 *)(this + 0xa58),0,0);
    Node::add_child(this,*(undefined8 *)(this + 0xa38),0,0);
  }
  LineEdit::clear();
  LineEdit::clear();
  BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa50),0));
  EditorValidationPanel::update();
  local_48 = 0;
  Window::popup_centered(*(Vector2i **)(this + 0xa38));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::grab_focus();
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* GroupsEditor::_show_rename_group_dialog() */

void __thiscall GroupsEditor::_show_rename_group_dialog(GroupsEditor *this)

{
  code *pcVar1;
  undefined8 uVar2;
  Vector2 *pVVar3;
  Callable *pCVar4;
  String *pSVar5;
  long *plVar6;
  ConfirmationDialog *this_00;
  BoxContainer *this_01;
  BoxContainer *this_02;
  Label *this_03;
  LineEdit *this_04;
  EditorValidationPanel *this_05;
  CheckBox *this_06;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 local_a0;
  undefined8 local_98 [2];
  long local_88 [2];
  undefined8 local_78;
  undefined1 local_70 [16];
  float local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa60) == 0) {
    this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
    ConfirmationDialog::ConfirmationDialog(this_00);
    postinitialize_handler((Object *)this_00);
    *(ConfirmationDialog **)(this + 0xa60) = this_00;
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Rename Group");
    TTR((String *)local_88,(String *)&local_a0);
    Window::set_title((String *)this_00);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    plVar6 = *(long **)(this + 0xa60);
    pcVar1 = *(code **)(*plVar6 + 0x108);
    create_custom_callable_function_pointer<GroupsEditor>
              ((GroupsEditor *)local_88,(char *)this,(_func_void *)"&GroupsEditor::_confirm_rename")
    ;
    (*pcVar1)(plVar6,SceneStringNames::singleton + 0x268,(String *)local_88,0);
    Callable::~Callable((Callable *)local_88);
    this_01 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_01,true);
    this_01[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_01 = &PTR__initialize_classv_0011bd60;
    postinitialize_handler((Object *)this_01);
    Node::add_child(*(undefined8 *)(this + 0xa60),this_01,0,0);
    this_02 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_02,false);
    *(undefined ***)this_02 = &PTR__initialize_classv_0011b9e8;
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
    *(LineEdit **)(this + 0xa68) = this_04;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    pVVar3 = *(Vector2 **)(this + 0xa68);
    fVar7 = (float)EditorScale::get_scale();
    local_58[1] = 1.0;
    local_58[0] = fVar7 * __LC56;
    Control::set_custom_minimum_size(pVVar3);
    Node::add_child(this_02,*(undefined8 *)(this + 0xa68),0,0);
    Node::add_child(this_01,this_02,0,0);
    AcceptDialog::register_text_enter(*(LineEdit **)(this + 0xa60));
    this_05 = (EditorValidationPanel *)operator_new(0xac0,"");
    EditorValidationPanel::EditorValidationPanel(this_05);
    postinitialize_handler((Object *)this_05);
    local_98[0] = 0;
    *(EditorValidationPanel **)(this + 0xa78) = this_05;
    String::parse_latin1((String *)local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Group name is valid.");
    TTR((String *)local_88,(String *)&local_a0);
    EditorValidationPanel::add_line((int)this_05,(String *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    pCVar4 = *(Callable **)(this + 0xa78);
    create_custom_callable_function_pointer<GroupsEditor>
              ((GroupsEditor *)local_88,(char *)this,(_func_void *)"&GroupsEditor::_check_rename");
    EditorValidationPanel::set_update_callback(pCVar4);
    Callable::~Callable((Callable *)local_88);
    EditorValidationPanel::set_accept_button(*(Button **)(this + 0xa78));
    plVar6 = *(long **)(this + 0xa68);
    pcVar1 = *(code **)(*plVar6 + 0x108);
    create_custom_callable_function_pointer<EditorValidationPanel>
              ((EditorValidationPanel *)local_98,*(char **)(this + 0xa78),
               (_func_void *)"&EditorValidationPanel::update");
    Callable::unbind((int)(String *)local_88);
    (*pcVar1)(plVar6,SceneStringNames::singleton + 0x270,(String *)local_88);
    Callable::~Callable((Callable *)local_88);
    Callable::~Callable((Callable *)local_98);
    Node::add_child(this_01,*(undefined8 *)(this + 0xa78),0,0);
    this_06 = (CheckBox *)operator_new(0xc60,"");
    local_88[0] = 0;
    CheckBox::CheckBox(this_06,(String *)local_88);
    postinitialize_handler((Object *)this_06);
    *(CheckBox **)(this + 0xa70) = this_06;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    pSVar5 = *(String **)(this + 0xa70);
    local_98[0] = 0;
    String::parse_latin1((String *)local_98,"");
    local_a0 = 0;
    String::parse_latin1((String *)&local_a0,"Rename references in all scenes");
    TTR((String *)local_88,(String *)&local_a0);
    Button::set_text(pSVar5);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    Node::add_child(this_01,*(undefined8 *)(this + 0xa70),0,0);
    Node::add_child(this,*(undefined8 *)(this + 0xa60),0,0);
  }
  plVar6 = (long *)Tree::get_selected();
  if (plVar6 != (long *)0x0) {
    pcVar1 = *(code **)(*plVar6 + 0xb8);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    StringName::StringName((StringName *)local_88,"__local",false);
    (*pcVar1)((Variant *)local_58,plVar6,(StringName *)local_88,&local_78);
    Variant::operator_cast_to_bool((Variant *)local_58);
    if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    CanvasItem::set_visible(SUB81(*(undefined8 *)(this + 0xa70),0));
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa70),0));
    pcVar1 = *(code **)(*plVar6 + 0xb8);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    StringName::StringName((StringName *)local_88,"__name",false);
    (*pcVar1)((Variant *)local_58,plVar6,(StringName *)local_88,&local_78);
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
    uVar2 = *(undefined8 *)(this + 0xa68);
    local_88[0] = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)local_98);
    LineEdit::set_text(uVar2,(StringName *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    plVar6 = *(long **)(this + 0xa60);
    pcVar1 = *(code **)(*plVar6 + 0xa8);
    Variant::Variant((Variant *)local_58,(String *)local_98);
    StringName::StringName((StringName *)local_88,"__name",false);
    (*pcVar1)(plVar6,(StringName *)local_88,(Variant *)local_58);
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
    Window::popup_centered(*(Vector2i **)(this + 0xa60));
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



/* GroupsEditor::GroupsEditor() */

void __thiscall GroupsEditor::GroupsEditor(GroupsEditor *this)

{
  StringName *pSVar1;
  String *pSVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  long lVar6;
  Object *pOVar7;
  char cVar8;
  BoxContainer *this_00;
  Button *this_01;
  LineEdit *this_02;
  Tree *this_03;
  CallableCustom *pCVar9;
  PopupMenu *this_04;
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68 [2];
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  BoxContainer::BoxContainer((BoxContainer *)this,true);
  *(undefined ***)this = &PTR__initialize_classv_0011c0d8;
  this[0xa0c] = (GroupsEditor)0x1;
  *(undefined8 *)(this + 0xa10) = 0;
  local_58 = (Object *)0x10db36;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)(this + 0xa10));
  uVar5 = _LC62;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac0) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0xae0) = uVar5;
  *(undefined8 *)(this + 0xb10) = uVar5;
  *(undefined8 *)(this + 0xb40) = uVar5;
  *(undefined8 *)(this + 0xb70) = uVar5;
  uVar5 = SceneTree::singleton;
  *(undefined1 (*) [16])(this + 0xad0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xb60) = (undefined1  [16])0x0;
  *(undefined4 *)(this + 0xa18) = 0;
  *(undefined8 *)(this + 0xa38) = 0;
  *(undefined8 *)(this + 0xa40) = 0;
  *(undefined8 *)(this + 0xa48) = 0;
  *(undefined8 *)(this + 0xa50) = 0;
  *(undefined8 *)(this + 0xa58) = 0;
  *(undefined8 *)(this + 0xa60) = 0;
  *(undefined8 *)(this + 0xa68) = 0;
  *(undefined8 *)(this + 0xa70) = 0;
  *(undefined8 *)(this + 0xa78) = 0;
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined8 *)(this + 0xa88) = 0;
  *(undefined8 *)(this + 0xa90) = 0;
  *(undefined8 *)(this + 0xa98) = 0;
  *(undefined8 *)(this + 0xaa0) = 0;
  *(undefined8 *)(this + 0xaa8) = 0;
  *(undefined8 *)(this + 0xab0) = 0;
  *(undefined8 *)(this + 0xa30) = uVar5;
  local_58 = (Object *)0x10db44;
  local_68[0] = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (Object *)0x10db4b;
  local_70 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  ED_SHORTCUT((CowData<char32_t> *)&local_58,(StrRange *)&local_70,(StrRange *)local_68,0x400008,0);
  if (local_58 != (Object *)0x0) {
    cVar8 = RefCounted::unreference();
    pOVar7 = local_58;
    if (cVar8 != '\0') {
      cVar8 = predelete_handler(local_58);
      if (cVar8 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_58 = (Object *)0x10db60;
  local_68[0] = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (Object *)0x10db67;
  local_70 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  ED_SHORTCUT((CowData<char32_t> *)&local_58,(StrRange *)&local_70,(StrRange *)local_68,0x40001d,0);
  if (local_58 != (Object *)0x0) {
    cVar8 = RefCounted::unreference();
    pOVar7 = local_58;
    if (cVar8 != '\0') {
      cVar8 = predelete_handler(local_58);
      if (cVar8 != '\0') {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_58 = (Object *)0x10db7c;
  local_68[0] = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (Object *)0x10db67;
  local_70 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_70);
  ED_SHORTCUT_OVERRIDE((StrRange *)&local_70,(StrRange *)local_68,0x400005,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011b9e8;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (Button *)operator_new(0xc10,"");
  local_58 = (Object *)0x0;
  Button::Button(this_01,(String *)&local_58);
  postinitialize_handler((Object *)this_01);
  *(Button **)(this + 0xaa8) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  pSVar1 = *(StringName **)(this + 0xaa8);
  StringName::StringName((StringName *)&local_58,"FlatMenuButton",false);
  Control::set_theme_type_variation(pSVar1);
  if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
    StringName::unref();
  }
  pSVar2 = *(String **)(this + 0xaa8);
  local_68[0] = 0;
  local_58 = (Object *)&_LC15;
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (Object *)0x10db91;
  local_70 = 0;
  local_50 = 0x10;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  Control::set_tooltip_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar3 = *(long **)(this + 0xaa8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<GroupsEditor>
            ((GroupsEditor *)&local_58,(char *)this,
             (_func_void *)"&GroupsEditor::_show_add_group_dialog");
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x238,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xaa8),0,0);
  this_02 = (LineEdit *)operator_new(0xbb0,"");
  local_58 = (Object *)0x0;
  LineEdit::LineEdit(this_02,(String *)&local_58);
  postinitialize_handler((Object *)this_02);
  *(LineEdit **)(this + 0xaa0) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xaa0),0));
  uVar5 = *(undefined8 *)(this + 0xaa0);
  local_68[0] = 0;
  local_58 = (Object *)&_LC15;
  local_50 = 0;
  String::parse_latin1((StrRange *)local_68);
  local_58 = (Object *)0x10dba2;
  local_70 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_70);
  TTR((String *)&local_58,(String *)&local_70);
  LineEdit::set_placeholder(uVar5,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xaa0),3);
  plVar3 = *(long **)(this + 0xaa0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<GroupsEditor>
            ((GroupsEditor *)&local_58,(char *)this,(_func_void *)"&GroupsEditor::_update_tree");
  Callable::unbind((int)(StrRange *)local_68);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x270,(StrRange *)local_68,0);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xaa0),0,0);
  this_03 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_03);
  postinitialize_handler((Object *)this_03);
  *(Tree **)(this + 0xab0) = this_03;
  Node::set_auto_translate_mode(this_03,2);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xab0),0));
  Control::set_v_size_flags(*(undefined8 *)(this + 0xab0),3);
  Tree::set_allow_rmb_select(SUB81(*(undefined8 *)(this + 0xab0),0));
  Tree::set_select_mode(*(undefined8 *)(this + 0xab0),0);
  plVar3 = *(long **)(this + 0xab0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC15;
  *(GroupsEditor **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_0011c720;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar5;
  *(code **)(pCVar9 + 0x38) = _modify_group;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "GroupsEditor::_modify_group";
  Callable::Callable((Callable *)&local_58,pCVar9);
  StringName::StringName((StringName *)local_68,"button_clicked",false);
  (*pcVar4)(plVar3,(StrRange *)local_68,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar3 = *(long **)(this + 0xab0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC15;
  *(GroupsEditor **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_0011c7b0;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar5;
  *(code **)(pCVar9 + 0x38) = _item_mouse_selected;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "GroupsEditor::_item_mouse_selected";
  Callable::Callable((Callable *)&local_58,pCVar9);
  StringName::StringName((StringName *)local_68,"item_mouse_selected",false);
  (*pcVar4)(plVar3,(StrRange *)local_68,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  plVar3 = *(long **)(this + 0xab0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC15;
  *(GroupsEditor **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_0011c840;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar5;
  *(code **)(pCVar9 + 0x38) = _groups_gui_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "GroupsEditor::_groups_gui_input";
  Callable::Callable((Callable *)&local_58,pCVar9);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x28,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xab0),0,0);
  this_04 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_04);
  postinitialize_handler((Object *)this_04);
  lVar6 = *(long *)this_04;
  *(PopupMenu **)(this + 0xa98) = this_04;
  pcVar4 = *(code **)(lVar6 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC15;
  *(GroupsEditor **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_0011c8d0;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar5;
  *(code **)(pCVar9 + 0x38) = _menu_id_pressed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "GroupsEditor::_menu_id_pressed";
  Callable::Callable((Callable *)&local_58,pCVar9);
  (*pcVar4)(this_04,SceneStringNames::singleton + 0x240,(CowData<char32_t> *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(*(undefined8 *)(this + 0xab0),*(undefined8 *)(this + 0xa98),0,0);
  plVar3 = *(long **)(ProjectSettingsEditor::singleton + 0xdf8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<GroupsEditor>
            ((GroupsEditor *)&local_58,(char *)this,
             (_func_void *)"&GroupsEditor::_update_groups_and_tree");
  StringName::StringName((StringName *)local_68,"group_changed",false);
  (*pcVar4)(plVar3,(StrRange *)local_68,(CowData<char32_t> *)&local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::~GroupsEditor() */

void __thiscall GroupsEditor::~GroupsEditor(GroupsEditor *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  bool bVar8;
  
  *(undefined ***)this = &PTR__initialize_classv_0011c0d8;
  pvVar6 = *(void **)(this + 0xb50);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xb74) != 0) {
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xb70)];
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xb74) = 0;
        *(undefined1 (*) [16])(this + 0xb60) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xb58) + lVar4) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xb58) + lVar4) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar6 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xb50);
            *(undefined8 *)((long)pvVar6 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xb74) = 0;
        *(undefined1 (*) [16])(this + 0xb60) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00104366;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xb58),false);
  }
LAB_00104366:
  pvVar6 = *(void **)(this + 0xb20);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xb44) != 0) {
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xb40)];
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xb44) = 0;
        *(undefined1 (*) [16])(this + 0xb30) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xb28) + lVar4) != 0) {
            bVar8 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xb28) + lVar4) = 0;
            pvVar6 = *(void **)((long)pvVar6 + lVar4 * 2);
            if ((bVar8) && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xb20);
            *(undefined8 *)((long)pvVar6 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0xb44) = 0;
        *(undefined1 (*) [16])(this + 0xb30) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_0010442c;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xb28),false);
  }
LAB_0010442c:
  pvVar6 = *(void **)(this + 0xaf0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xb14) != 0) {
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xb10)];
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xb14) = 0;
        *(undefined1 (*) [16])(this + 0xb00) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xaf8) + lVar4) != 0) {
            bVar8 = StringName::configured != '\0';
            *(int *)(*(long *)(this + 0xaf8) + lVar4) = 0;
            pvVar6 = *(void **)((long)pvVar6 + lVar4 * 2);
            if ((bVar8) && (*(long *)((long)pvVar6 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xaf0);
            *(undefined8 *)((long)pvVar6 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while ((ulong)uVar1 << 2 != lVar4);
        *(undefined4 *)(this + 0xb14) = 0;
        *(undefined1 (*) [16])(this + 0xb00) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_001044ec;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xaf8),false);
  }
LAB_001044ec:
  pvVar6 = *(void **)(this + 0xac0);
  if (pvVar6 != (void *)0x0) {
    if (*(int *)(this + 0xae4) != 0) {
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xae0)];
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xae4) = 0;
        *(undefined1 (*) [16])(this + 0xad0) = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xac8) + lVar4) != 0) {
            pvVar6 = *(void **)((long)pvVar6 + lVar4 * 2);
            *(int *)(*(long *)(this + 0xac8) + lVar4) = 0;
            pvVar5 = *(void **)((long)pvVar6 + 0x20);
            if (pvVar5 != (void *)0x0) {
              if (*(int *)((long)pvVar6 + 0x44) != 0) {
                uVar2 = (&hash_table_size_primes)[*(uint *)((long)pvVar6 + 0x40)];
                if (uVar2 == 0) {
                  *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar7 = 0;
                  do {
                    piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar7);
                    if (*piVar3 != 0) {
                      bVar8 = StringName::configured != '\0';
                      *piVar3 = 0;
                      pvVar5 = *(void **)((long)pvVar5 + lVar7 * 2);
                      if ((bVar8) && (*(long *)((long)pvVar5 + 0x10) != 0)) {
                        StringName::unref();
                      }
                      Memory::free_static(pvVar5,false);
                      pvVar5 = *(void **)((long)pvVar6 + 0x20);
                      *(undefined8 *)((long)pvVar5 + lVar7 * 2) = 0;
                    }
                    lVar7 = lVar7 + 4;
                  } while (lVar7 != (ulong)uVar2 << 2);
                  *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar5 == (void *)0x0) goto LAB_00104617;
                }
              }
              Memory::free_static(pvVar5,false);
              Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
            }
LAB_00104617:
            Memory::free_static(pvVar6,false);
            pvVar6 = *(void **)(this + 0xac0);
            *(undefined8 *)((long)pvVar6 + lVar4 * 2) = 0;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 * 4);
        *(undefined4 *)(this + 0xae4) = 0;
        *(undefined1 (*) [16])(this + 0xad0) = (undefined1  [16])0x0;
        if (pvVar6 == (void *)0x0) goto LAB_00104665;
      }
    }
    Memory::free_static(pvVar6,false);
    Memory::free_static(*(void **)(this + 0xac8),false);
  }
LAB_00104665:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa10));
  bVar8 = StringName::configured != '\0';
  *(code **)this = strlen;
  if (bVar8) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001046b9;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001046b9:
  Control::~Control((Control *)this);
  return;
}



/* GroupsEditor::~GroupsEditor() */

void __thiscall GroupsEditor::~GroupsEditor(GroupsEditor *this)

{
  ~GroupsEditor(this);
  operator_delete(this,0xb78);
  return;
}



/* GroupsEditor::_has_group(String const&) */

undefined4 __thiscall GroupsEditor::_has_group(GroupsEditor *this,String *param_1)

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
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  long in_FS_OFFSET;
  uint local_54;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_50,param_1,false);
  if ((*(long *)(this + 0xb50) != 0) && (*(int *)(this + 0xb74) != 0)) {
    uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xb70)];
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb70) * 8);
    if (local_50 == 0) {
      uVar12 = StringName::get_empty_hash();
    }
    else {
      uVar12 = *(uint *)(local_50 + 0x20);
    }
    uVar16 = CONCAT44(0,uVar1);
    if (uVar12 == 0) {
      uVar12 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar12 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar14 = SUB168(auVar3 * auVar7,8);
    uVar15 = *(uint *)(*(long *)(this + 0xb58) + lVar14 * 4);
    iVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar15 != 0) {
      uVar17 = 0;
      do {
        if ((uVar12 == uVar15) &&
           (*(long *)(*(long *)(*(long *)(this + 0xb50) + lVar14 * 8) + 0x10) == local_50)) {
          uVar11 = 1;
          goto LAB_00104929;
        }
        uVar17 = uVar17 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar13 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar14 = SUB168(auVar4 * auVar8,8);
        uVar15 = *(uint *)(*(long *)(this + 0xb58) + lVar14 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar15 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar13) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar17 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  StringName::StringName((StringName *)&local_48,param_1,false);
  local_54 = 0;
  uVar11 = HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
           ::_lookup_pos((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                          *)(this + 0xb18),(StringName *)&local_48,&local_54);
  if (StringName::configured != '\0') {
    if (local_48 != 0) {
      StringName::unref();
LAB_00104929:
      if (StringName::configured == '\0') goto LAB_0010493f;
    }
    if (local_50 != 0) {
      StringName::unref();
    }
  }
LAB_0010493f:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar11;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_validate_name(String const&, EditorValidationPanel*) */

void __thiscall
GroupsEditor::_validate_name(GroupsEditor *this,String *param_1,EditorValidationPanel *param_2)

{
  char cVar1;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)param_1 == 0) || (*(uint *)(*(long *)param_1 + -8) < 2)) {
    local_50 = 0;
    local_40 = 0;
    local_48 = "";
    String::parse_latin1((StrRange *)&local_50);
    local_48 = "Group can\'t be empty.";
    local_58 = 0;
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_58);
    TTR((String *)&local_48,(String *)&local_58);
    EditorValidationPanel::set_message(param_2,0,(String *)&local_48,2,1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else {
    cVar1 = _has_group(this,param_1);
    if (cVar1 != '\0') {
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"");
      local_58 = 0;
      String::parse_latin1((String *)&local_58,"Group already exists.");
      TTR((String *)&local_48,(String *)&local_58);
      EditorValidationPanel::set_message(param_2,0,(String *)&local_48,2,1);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_check_add() */

void __thiscall GroupsEditor::_check_add(GroupsEditor *this)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  long local_30;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  String::strip_edges(SUB81((String *)&local_30,0),SUB81(&local_28,0));
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
  _validate_name(this,(String *)&local_30,*(EditorValidationPanel **)(this + 0xa58));
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



/* GroupsEditor::_check_rename() */

void __thiscall GroupsEditor::_check_rename(GroupsEditor *this)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  long in_FS_OFFSET;
  String local_90 [8];
  Variant local_88 [8];
  long local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  LineEdit::get_text();
  String::strip_edges(SUB81(local_90,0),SUB81((CowData<char32_t> *)&local_80,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  plVar1 = *(long **)(this + 0xa60);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  pcVar2 = *(code **)(*plVar1 + 0xb8);
  StringName::StringName((StringName *)&local_80,"__name",false);
  (*pcVar2)(local_58,plVar1,(CowData<char32_t> *)&local_80,&local_78);
  Variant::operator_cast_to_String(local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  cVar3 = String::operator==(local_90,(String *)local_88);
  if (cVar3 == '\0') {
    _validate_name(this,local_90,*(EditorValidationPanel **)(this + 0xa78));
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_confirm_rename() */

void __thiscall GroupsEditor::_confirm_rename(GroupsEditor *this)

{
  Variant *pVVar1;
  code *pcVar2;
  char cVar3;
  long *plVar4;
  Object *this_00;
  Variant *pVVar5;
  StringName *pSVar6;
  Object *pOVar7;
  int iVar8;
  Variant *pVVar9;
  long in_FS_OFFSET;
  Variant local_e8 [8];
  String local_e0 [8];
  String local_d8 [8];
  String local_d0 [8];
  Variant local_c8 [8];
  long local_c0;
  ulong local_b8;
  long local_b0;
  Variant *local_a8;
  undefined1 auStack_a0 [16];
  int local_88 [2];
  undefined1 local_80 [16];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)Tree::get_selected();
  if (plVar4 != (long *)0x0) {
    pcVar2 = *(code **)(*plVar4 + 0xb8);
    auStack_a0 = (undefined1  [16])0x0;
    local_a8 = (Variant *)0x0;
    StringName::StringName((StringName *)&local_b0,"__name",false);
    (*pcVar2)((Variant *)local_88,plVar4,(StringName *)&local_b0,&local_a8);
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
    cVar3 = String::operator==((String *)local_e8,local_e0);
    if (cVar3 == '\0') {
      this_00 = (Object *)EditorUndoRedoManager::get_singleton();
      local_b8 = 0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Rename Group");
      TTR((String *)&local_b0,(String *)&local_c0);
      EditorUndoRedoManager::create_action(this_00,(StringName *)&local_b0,0,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      StringName::StringName((StringName *)&local_b0,(String *)local_e8,false);
      local_b8 = local_b8 & 0xffffffff00000000;
      cVar3 = HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
              ::_lookup_pos((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                             *)(this + 0xb48),(StringName *)&local_b0,(uint *)&local_b8);
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      iVar8 = (int)&local_a8;
      if (cVar3 == '\0') {
        local_b0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_e0);
        local_b8 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)local_e8);
        StringName::StringName((StringName *)&local_c0,"_rename_scene_group",false);
        Variant::Variant((Variant *)local_88,(String *)&local_b8);
        Variant::Variant(local_70,(String *)&local_b0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        auStack_a0._0_8_ = local_70;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_do_methodp
                  (this_00,(StringName *)this,(Variant **)&local_c0,iVar8);
        pVVar9 = (Variant *)local_40;
        pVVar5 = pVVar9;
        do {
          pVVar1 = pVVar5 + -0x18;
          pVVar5 = pVVar5 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar5 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_c0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_b0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_e8);
        local_b8 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)local_e0);
        StringName::StringName((StringName *)&local_c0,"_rename_scene_group",false);
        Variant::Variant((Variant *)local_88,(String *)&local_b8);
        Variant::Variant(local_70,(String *)&local_b0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_undo_methodp
                  (this_00,(StringName *)this,(Variant **)&local_c0,iVar8);
        do {
          pVVar5 = pVVar9 + -0x18;
          pVVar9 = pVVar9 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar9 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_c0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      }
      else {
        String::operator+(local_d8,(String *)(this + 0xa10));
        String::operator+(local_d0,(String *)(this + 0xa10));
        pcVar2 = *(code **)(*plVar4 + 0xb8);
        auStack_a0 = (undefined1  [16])0x0;
        local_a8 = (Variant *)0x0;
        StringName::StringName((StringName *)&local_b0,"__description",false);
        (*pcVar2)((Variant *)local_88,plVar4,(StringName *)&local_b0,&local_a8);
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
        pSVar6 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(this_00,pSVar6,(Variant *)&local_b0);
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
        pSVar6 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_property(this_00,pSVar6,(Variant *)&local_b0);
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
        pSVar6 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(this_00,pSVar6,(Variant *)&local_b0);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_88,(String *)local_c8);
        StringName::StringName((StringName *)&local_b0,local_d0,false);
        pSVar6 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_property(this_00,pSVar6,(Variant *)&local_b0);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        cVar3 = BaseButton::is_pressed();
        if (cVar3 != '\0') {
          local_b0 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_e0);
          local_b8 = 0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)local_e8);
          StringName::StringName((StringName *)&local_c0,"rename_references",false);
          pSVar6 = *(StringName **)(ProjectSettingsEditor::singleton + 0xdf8);
          Variant::Variant((Variant *)local_88,(String *)&local_b8);
          Variant::Variant(local_70,(String *)&local_b0);
          local_50 = (undefined1  [16])0x0;
          local_58 = 0;
          auStack_a0._0_8_ = local_70;
          local_a8 = (Variant *)local_88;
          EditorUndoRedoManager::add_do_methodp(this_00,pSVar6,(Variant **)&local_c0,iVar8);
          pVVar9 = (Variant *)local_40;
          pVVar5 = pVVar9;
          do {
            pVVar1 = pVVar5 + -0x18;
            pVVar5 = pVVar5 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar5 != (Variant *)local_88);
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
          pSVar6 = *(StringName **)(ProjectSettingsEditor::singleton + 0xdf8);
          Variant::Variant((Variant *)local_88,(String *)&local_b8);
          Variant::Variant(local_70,(String *)&local_b0);
          local_50 = (undefined1  [16])0x0;
          local_58 = 0;
          local_a8 = (Variant *)local_88;
          EditorUndoRedoManager::add_undo_methodp(this_00,pSVar6,(Variant **)&local_c0,iVar8);
          do {
            pVVar5 = pVVar9 + -0x18;
            pVVar9 = pVVar9 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar5] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar9 != (Variant *)local_88);
          if ((StringName::configured != '\0') && (local_c0 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        StringName::StringName((StringName *)&local_b0,"save",false);
        pOVar7 = (Object *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_method<>
                  ((EditorUndoRedoManager *)this_00,pOVar7,(StringName *)&local_b0);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_b0,"save",false);
        pOVar7 = (Object *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_method<>
                  ((EditorUndoRedoManager *)this_00,pOVar7,(StringName *)&local_b0);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_b0,"_update_groups",false);
        EditorUndoRedoManager::add_do_method<>
                  ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_b0);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_b0,"_update_groups",false);
        EditorUndoRedoManager::add_undo_method<>
                  ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_b0);
        if ((StringName::configured != '\0') && (local_b0 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      }
      StringName::StringName((StringName *)&local_b0,"_update_tree",false);
      EditorUndoRedoManager::add_do_method<>
                ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_b0);
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b0,"_update_tree",false);
      EditorUndoRedoManager::add_undo_method<>
                ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_b0);
      if ((StringName::configured != '\0') && (local_b0 != 0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(this_00,0));
      Control::grab_focus();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_bind_methods() */

void GroupsEditor::_bind_methods(void)

{
  MethodBind *pMVar1;
  long in_FS_OFFSET;
  long local_68 [2];
  undefined8 local_58 [2];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = (undefined1  [16])0x0;
  local_48 = 0;
  pMVar1 = create_method_bind<GroupsEditor>(_update_tree);
  StringName::StringName((StringName *)local_68,"_update_tree",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar1 = create_method_bind<GroupsEditor>(_update_groups);
  StringName::StringName((StringName *)local_68,"_update_groups",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar1 = create_method_bind<GroupsEditor>(_update_groups_and_tree);
  StringName::StringName((StringName *)local_68,"_update_groups_and_tree",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar1 = create_method_bind<GroupsEditor,String_const&>(_add_scene_group);
  StringName::StringName((StringName *)local_68,"_add_scene_group",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar1 = create_method_bind<GroupsEditor,String_const&,String_const&>(_rename_scene_group);
  StringName::StringName((StringName *)local_68,"_rename_scene_group",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar1 = create_method_bind<GroupsEditor,String_const&>(_remove_scene_group);
  StringName::StringName((StringName *)local_68,"_remove_scene_group",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  pMVar1 = create_method_bind<GroupsEditor,String_const&,bool>(_set_group_checked);
  StringName::StringName((StringName *)local_68,"_set_group_checked",false);
  local_58[0] = 0;
  ClassDB::bind_methodfi(1,pMVar1,false,(MethodDefinition *)local_68,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_add_scene_group(String const&) */

void __thiscall GroupsEditor::_add_scene_group(GroupsEditor *this,String *param_1)

{
  undefined1 *puVar1;
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_28,param_1,false);
  puVar1 = (undefined1 *)
           HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
           ::operator[]((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                         *)(this + 0xb18),(StringName *)&local_28);
  *puVar1 = 1;
  if ((StringName::configured != '\0') && (local_28 != 0)) {
    StringName::unref();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_rename_scene_group(String const&, String const&) */

void __thiscall
GroupsEditor::_rename_scene_group(GroupsEditor *this,String *param_1,String *param_2)

{
  HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
  *this_00;
  undefined1 uVar1;
  Node *pNVar2;
  undefined1 *puVar3;
  long in_FS_OFFSET;
  long local_50;
  long local_48;
  long local_40;
  
  this_00 = (HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
             *)(this + 0xb18);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_48,param_1,false);
  puVar3 = (undefined1 *)
           HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
           ::operator[](this_00,(StringName *)&local_48);
  uVar1 = *puVar3;
  StringName::StringName((StringName *)&local_50,param_2,false);
  puVar3 = (undefined1 *)
           HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
           ::operator[](this_00,(StringName *)&local_50);
  *puVar3 = uVar1;
  if (StringName::configured != '\0') {
    if (local_50 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105ee9;
    }
    if (local_48 != 0) {
      StringName::unref();
    }
  }
LAB_00105ee9:
  StringName::StringName((StringName *)&local_48,param_1,false);
  HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
  ::erase(this_00,(StringName *)&local_48);
  if ((StringName::configured != '\0') && (local_48 != 0)) {
    StringName::unref();
  }
  pNVar2 = *(Node **)(ProjectSettingsEditor::singleton + 0xdf8);
  StringName::StringName((StringName *)&local_48,param_2,false);
  StringName::StringName((StringName *)&local_50,param_1,false);
  GroupSettingsEditor::rename_node_references
            (pNVar2,*(StringName **)(this + 0xa28),(StringName *)&local_50);
  if (StringName::configured != '\0') {
    if (local_50 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105f89;
    }
    if (local_48 != 0) {
      StringName::unref();
    }
  }
LAB_00105f89:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_menu_id_pressed(int) */

void __thiscall GroupsEditor::_menu_id_pressed(GroupsEditor *this,int param_1)

{
  char cVar1;
  code *pcVar2;
  bool bVar3;
  long *plVar4;
  Object *this_00;
  StringName *pSVar5;
  Object *pOVar6;
  char *pcVar7;
  long in_FS_OFFSET;
  long local_c8;
  Variant local_c0 [8];
  String local_b8 [8];
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  Variant *local_98;
  undefined1 local_90 [16];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar4 = (long *)Tree::get_selected();
  if (plVar4 == (long *)0x0) goto LAB_0010616a;
  pcVar2 = *(code **)(*plVar4 + 0xb8);
  local_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  StringName::StringName((StringName *)&local_a0,"__local",false);
  (*pcVar2)((Variant *)local_78,plVar4,(StringName *)&local_a0,&local_98);
  bVar3 = Variant::operator_cast_to_bool((Variant *)local_78);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  pcVar2 = *(code **)(*plVar4 + 0xb8);
  local_90 = (undefined1  [16])0x0;
  local_98 = (Variant *)0x0;
  StringName::StringName((StringName *)&local_a0,"__name",false);
  (*pcVar2)((Variant *)local_78,plVar4,(StringName *)&local_a0,&local_98);
  Variant::operator_cast_to_String((Variant *)&local_c8);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_a0 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_98] != '\0') {
    Variant::_clear_internal();
  }
  if (param_1 == 2) {
    if (bVar3) {
      StringName::StringName((StringName *)&local_a0,(String *)&local_c8,false);
      pcVar7 = (char *)HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                       ::operator[]((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                                     *)(this + 0xb18),(StringName *)&local_a0);
      cVar1 = *pcVar7;
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      if (cVar1 == '\0') goto LAB_00106160;
    }
    _show_rename_group_dialog(this);
  }
  else {
    if (param_1 == 3) {
      pcVar2 = *(code **)(*plVar4 + 0xb8);
      local_90 = (undefined1  [16])0x0;
      local_98 = (Variant *)0x0;
      StringName::StringName((StringName *)&local_a0,"__description",false);
      (*pcVar2)((Variant *)local_78,plVar4,(StringName *)&local_a0,&local_98);
      Variant::operator_cast_to_String(local_c0);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_98] != '\0') {
        Variant::_clear_internal();
      }
      String::operator+(local_b8,(String *)(this + 0xa10));
      this_00 = (Object *)EditorUndoRedoManager::get_singleton();
      local_a8 = 0;
      if (bVar3) {
        String::parse_latin1((String *)&local_a8,"");
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,"Convert to Global Group");
        TTR((String *)&local_a0,(String *)&local_b0);
        EditorUndoRedoManager::create_action(this_00,(StringName *)&local_a0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        Variant::Variant((Variant *)local_78,"");
        StringName::StringName((StringName *)&local_a0,local_b8,false);
        pSVar5 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(this_00,pSVar5,(Variant *)&local_a0);
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_70 = (undefined1  [16])0x0;
        local_78[0] = 0;
        local_78[1] = 0;
        StringName::StringName((StringName *)&local_a0,local_b8,false);
        pSVar5 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_property(this_00,pSVar5,(Variant *)&local_a0);
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        StringName::StringName((StringName *)&local_a0,"save",false);
        pOVar6 = (Object *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_method<>
                  ((EditorUndoRedoManager *)this_00,pOVar6,(StringName *)&local_a0);
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_a0,"save",false);
        pOVar6 = (Object *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_method<>
                  ((EditorUndoRedoManager *)this_00,pOVar6,(StringName *)&local_a0);
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
        local_a0 = 0;
        if (local_c8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
        }
        StringName::StringName((StringName *)&local_a8,"_add_scene_group",false);
        Variant::Variant((Variant *)local_78,(String *)&local_a0);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_98 = (Variant *)local_78;
        EditorUndoRedoManager::add_undo_methodp
                  (this_00,(StringName *)this,(Variant **)&local_a8,(int)&local_98);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_a8 != 0)) {
          StringName::unref();
        }
      }
      else {
        String::parse_latin1((String *)&local_a8,"");
        local_b0 = 0;
        String::parse_latin1((String *)&local_b0,"Convert to Scene Group");
        TTR((String *)&local_a0,(String *)&local_b0);
        EditorUndoRedoManager::create_action(this_00,(StringName *)&local_a0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        local_70 = (undefined1  [16])0x0;
        local_78[0] = 0;
        local_78[1] = 0;
        StringName::StringName((StringName *)&local_a0,local_b8,false);
        pSVar5 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_property(this_00,pSVar5,(Variant *)&local_a0);
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)local_78,(String *)local_c0);
        StringName::StringName((StringName *)&local_a0,local_b8,false);
        pSVar5 = (StringName *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_property(this_00,pSVar5,(Variant *)&local_a0);
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        StringName::StringName((StringName *)&local_a0,"save",false);
        pOVar6 = (Object *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_do_method<>
                  ((EditorUndoRedoManager *)this_00,pOVar6,(StringName *)&local_a0);
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_a0,"save",false);
        pOVar6 = (Object *)ProjectSettings::get_singleton();
        EditorUndoRedoManager::add_undo_method<>
                  ((EditorUndoRedoManager *)this_00,pOVar6,(StringName *)&local_a0);
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
        local_a0 = 0;
        if (local_c8 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a0,(CowData *)&local_c8);
        }
        StringName::StringName((StringName *)&local_a8,"_add_scene_group",false);
        EditorUndoRedoManager::add_do_method<String>
                  ((EditorUndoRedoManager *)this_00,this,(String *)&local_a8,(StringName *)&local_a0
                  );
        if ((StringName::configured != '\0') && (local_a8 != 0)) {
          StringName::unref();
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      StringName::StringName((StringName *)&local_a0,"_update_groups_and_tree",false);
      EditorUndoRedoManager::add_do_method<>
                ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_a0);
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_a0,"_update_groups_and_tree",false);
      EditorUndoRedoManager::add_undo_method<>
                ((EditorUndoRedoManager *)this_00,(Object *)this,(StringName *)&local_a0);
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      EditorUndoRedoManager::commit_action(SUB81(this_00,0));
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      goto LAB_0010616a;
    }
    if (param_1 == 0) {
      if (bVar3) {
        StringName::StringName((StringName *)&local_a0,(String *)&local_c8,false);
        pcVar7 = (char *)HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                         ::operator[]((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                                       *)(this + 0xb18),(StringName *)&local_a0);
        cVar1 = *pcVar7;
        if ((StringName::configured != '\0') && (local_a0 != 0)) {
          StringName::unref();
        }
        if (cVar1 == '\0') goto LAB_00106160;
      }
      _show_remove_group_dialog(this);
    }
  }
LAB_00106160:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
LAB_0010616a:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GroupsEditor::_groups_gui_input(Ref<InputEvent>) */

void __thiscall GroupsEditor::_groups_gui_input(GroupsEditor *this,long *param_2)

{
  char cVar1;
  Object *pOVar2;
  String *pSVar3;
  long in_FS_OFFSET;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*param_2 != 0) &&
      (pOVar2 = (Object *)__dynamic_cast(*param_2,&Object::typeinfo,&InputEventKey::typeinfo,0),
      pOVar2 != (Object *)0x0)) && (cVar1 = RefCounted::reference(), cVar1 != '\0')) {
    cVar1 = InputEvent::is_pressed();
    if ((cVar1 == '\0') || (cVar1 = (**(code **)(*(long *)pOVar2 + 0x1c8))(pOVar2), cVar1 != '\0'))
    {
LAB_001069bc:
      cVar1 = RefCounted::unreference();
    }
    else {
      pSVar3 = (String *)EditorSettings::get_singleton();
      local_38 = 0;
      String::parse_latin1((String *)&local_38,"groups_editor/delete");
      cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
      if (cVar1 == '\0') {
        pSVar3 = (String *)EditorSettings::get_singleton();
        local_38 = 0;
        String::parse_latin1((String *)&local_38,"groups_editor/rename");
        cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_38);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
        if (cVar1 == '\0') {
          pSVar3 = (String *)EditorSettings::get_singleton();
          local_38 = 0;
          String::parse_latin1((String *)&local_38,"editor/open_search");
          cVar1 = EditorSettings::is_shortcut(pSVar3,(Ref *)&local_38);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
          if (cVar1 == '\0') goto LAB_001069bc;
          Control::grab_focus();
          LineEdit::select_all();
        }
        else {
          _menu_id_pressed(this,2);
        }
      }
      else {
        _menu_id_pressed(this,0);
      }
      Control::accept_event();
      cVar1 = RefCounted::unreference();
    }
    if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
      (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pOVar2,false);
        return;
      }
      goto LAB_00106b32;
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106b32:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_item_mouse_selected(Vector2 const&, MouseButton) */

void __thiscall
GroupsEditor::_item_mouse_selected(GroupsEditor *this,undefined8 *param_1,int param_3)

{
  code *pcVar1;
  Ref *pRVar2;
  Vector2i *pVVar3;
  Object *pOVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  char *pcVar10;
  undefined1 uVar11;
  undefined1 *puVar12;
  long in_FS_OFFSET;
  undefined8 uVar13;
  CowData<char32_t> *local_c0;
  StringName local_a0 [8];
  undefined8 local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  plVar9 = (long *)Tree::get_selected();
  if (plVar9 == (long *)0x0) goto LAB_00106b92;
  if (param_3 == 1) {
    create_custom_callable_function_pointer<GroupsEditor>
              ((GroupsEditor *)&local_88,(char *)this,(_func_void *)"&GroupsEditor::_item_edited");
    Variant::Variant((Variant *)&local_58,0);
    Callable::call_deferredp((Variant **)&local_88,0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)&local_88);
    goto LAB_00106b92;
  }
  if (param_3 != 2) goto LAB_00106b92;
  iVar7 = (int)plVar9;
  cVar5 = TreeItem::is_editable(iVar7);
  if (cVar5 != '\0') {
    TreeItem::is_checked(iVar7);
    TreeItem::set_checked(iVar7,false);
  }
  PopupMenu::clear(SUB81(*(undefined8 *)(this + 0xa98),0));
  pcVar1 = *(code **)(*plVar9 + 0xb8);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  StringName::StringName((StringName *)&local_88,"__local",false);
  (*pcVar1)((Variant *)&local_58,plVar9,(StringName *)&local_88);
  bVar6 = Variant::operator_cast_to_bool((Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  uVar13 = *(undefined8 *)(this + 0xa98);
  local_90 = 0;
  if (bVar6) {
    String::parse_latin1((String *)&local_90,"");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"Convert to Global Group");
    TTR((String *)&local_88,(String *)&local_98);
    if (_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#1}::operator()()::sname == '\0')
    {
      puVar12 = &_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#1}::operator()()::sname
      ;
      iVar7 = __cxa_guard_acquire(&_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#1}::
                                   operator()()::sname);
      pcVar10 = (char *)&_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#1}::
                         operator()()::sname;
      uVar11 = 0xe2;
      if (iVar7 != 0) {
LAB_0010713a:
        _scs_create(pcVar10,(bool)uVar11);
        __cxa_atexit(StringName::~StringName,pcVar10,&__dso_handle);
        __cxa_guard_release(puVar12);
      }
    }
  }
  else {
    String::parse_latin1((String *)&local_90,"");
    local_98 = 0;
    String::parse_latin1((String *)&local_98,"Convert to Scene Group");
    TTR((String *)&local_88,(String *)&local_98);
    if (_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#2}::operator()()::sname == '\0')
    {
      puVar12 = &_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#2}::operator()()::sname
      ;
      iVar7 = __cxa_guard_acquire(&_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#2}::
                                   operator()()::sname);
      pcVar10 = (char *)&_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#2}::
                         operator()()::sname;
      if (iVar7 != 0) {
        uVar11 = 0xee;
        goto LAB_0010713a;
      }
    }
  }
  local_c0 = (CowData<char32_t> *)&local_98;
  Control::get_editor_theme_icon(local_a0);
  PopupMenu::add_icon_item(uVar13,local_a0,(StringName *)&local_88,3);
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref(local_c0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  pcVar1 = *(code **)(*plVar9 + 0xb8);
  local_70 = (undefined1  [16])0x0;
  local_78 = 0;
  StringName::StringName((StringName *)&local_88,"__name",false);
  (*pcVar1)((Variant *)&local_58,plVar9,(StringName *)&local_88,(Vector2 *)&local_78);
  Variant::operator_cast_to_String((Variant *)local_a0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_88 != (Object *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_78] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_90,(String *)local_a0,false);
  local_88 = (Object *)((ulong)local_88._4_4_ << 0x20);
  cVar5 = HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
          ::_lookup_pos((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                         *)(this + 0xb48),(StringName *)&local_90,(uint *)&local_88);
  if (cVar5 == '\0') {
    StringName::StringName((StringName *)&local_88,(String *)local_a0,false);
    pcVar10 = (char *)HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                      ::operator[]((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                                    *)(this + 0xb18),(StringName *)&local_88);
    cVar5 = *pcVar10;
    if ((StringName::configured != '\0') &&
       (((local_88 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
        (local_90 != 0)))) {
      StringName::unref();
    }
    if (cVar5 != '\0') goto LAB_00106ea8;
  }
  else {
    if ((StringName::configured != '\0') && (local_90 != 0)) {
      StringName::unref();
    }
LAB_00106ea8:
    local_88 = (Object *)0x0;
    iVar7 = (int)(StringName *)&local_88;
    PopupMenu::add_separator(*(String **)(this + 0xa98),iVar7);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    pRVar2 = *(Ref **)(this + 0xa98);
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"groups_editor/rename");
    ED_GET_SHORTCUT((String *)&local_88);
    if ((_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#3}::operator()()::sname == '\0'
        ) && (iVar8 = __cxa_guard_acquire(&_item_mouse_selected(Vector2_const&,MouseButton)::
                                           {lambda()#3}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#3}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#3}::operator()()::
                    sname,&__dso_handle);
      __cxa_guard_release(&_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#3}::
                           operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_c0);
    PopupMenu::add_icon_shortcut(pRVar2,local_c0,iVar7,true,false);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_c0);
    if (((local_88 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar4 = local_88, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_88), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))();
      Memory::free_static(pOVar4,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    pRVar2 = *(Ref **)(this + 0xa98);
    local_90 = 0;
    String::parse_latin1((String *)&local_90,"groups_editor/delete");
    ED_GET_SHORTCUT((String *)&local_88);
    if ((_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#4}::operator()()::sname == '\0'
        ) && (iVar8 = __cxa_guard_acquire(&_item_mouse_selected(Vector2_const&,MouseButton)::
                                           {lambda()#4}::operator()()::sname), iVar8 != 0)) {
      _scs_create((char *)&_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#4}::
                           operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#4}::operator()()::
                    sname,&__dso_handle);
      __cxa_guard_release(&_item_mouse_selected(Vector2_const&,MouseButton)::{lambda()#4}::
                           operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)local_c0);
    PopupMenu::add_icon_shortcut(pRVar2,local_c0,iVar7,false,false);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_c0);
    if (((local_88 != (Object *)0x0) &&
        (cVar5 = RefCounted::unreference(), pOVar4 = local_88, cVar5 != '\0')) &&
       (cVar5 = predelete_handler(local_88), cVar5 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  }
  pVVar3 = *(Vector2i **)(this + 0xa98);
  uVar13 = Control::get_screen_position();
  local_78 = CONCAT44((float)((ulong)*param_1 >> 0x20) + (float)((ulong)uVar13 >> 0x20),
                      (float)*param_1 + (float)uVar13);
  local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_78);
  Window::set_position(pVVar3);
  Window::reset_size();
  local_58 = 0;
  local_50 = 0;
  (**(code **)(**(long **)(this + 0xa98) + 0x240))(*(long **)(this + 0xa98),(Variant *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
LAB_00106b92:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GroupsEditor::_load_scene_groups(Node*) */

void __thiscall GroupsEditor::_load_scene_groups(GroupsEditor *this,Node *param_1)

{
  HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
  *this_00;
  uint uVar1;
  undefined1 auVar2 [16];
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
  char cVar18;
  int iVar19;
  uint uVar20;
  Node *pNVar21;
  char *pcVar22;
  long lVar23;
  long lVar24;
  int iVar25;
  StringName *pSVar26;
  uint uVar27;
  ulong uVar28;
  uint uVar29;
  char cVar30;
  long in_FS_OFFSET;
  long *local_68;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = (long *)0x0;
  Node::get_groups((List *)param_1);
  if ((local_68 != (long *)0x0) && (pSVar26 = (StringName *)*local_68, pSVar26 != (StringName *)0x0)
     ) {
    this_00 = (HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
               *)(this + 0xb18);
    do {
      while (pSVar26[8] != (StringName)0x0) {
        lVar23 = *(long *)pSVar26;
        if ((*(long *)(this + 0xb50) != 0) && (*(int *)(this + 0xb74) != 0)) {
          uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xb70)];
          lVar24 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb70) * 8);
          if (lVar23 == 0) {
            uVar20 = StringName::get_empty_hash();
          }
          else {
            uVar20 = *(uint *)(lVar23 + 0x20);
          }
          uVar28 = CONCAT44(0,uVar1);
          if (uVar20 == 0) {
            uVar20 = 1;
          }
          uVar29 = 0;
          auVar2._8_8_ = 0;
          auVar2._0_8_ = (ulong)uVar20 * lVar24;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = uVar28;
          lVar23 = SUB168(auVar2 * auVar10,8);
          uVar27 = *(uint *)(*(long *)(this + 0xb58) + lVar23 * 4);
          iVar25 = SUB164(auVar2 * auVar10,8);
          if (uVar27 != 0) {
            do {
              if ((uVar20 == uVar27) &&
                 (*(long *)(*(long *)(*(long *)(this + 0xb50) + lVar23 * 8) + 0x10) ==
                  *(long *)pSVar26)) goto LAB_00107500;
              uVar29 = uVar29 + 1;
              auVar3._8_8_ = 0;
              auVar3._0_8_ = (ulong)(iVar25 + 1) * lVar24;
              auVar11._8_8_ = 0;
              auVar11._0_8_ = uVar28;
              lVar23 = SUB168(auVar3 * auVar11,8);
              uVar27 = *(uint *)(*(long *)(this + 0xb58) + lVar23 * 4);
              iVar25 = SUB164(auVar3 * auVar11,8);
            } while ((uVar27 != 0) &&
                    (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar27 * lVar24, auVar12._8_8_ = 0,
                    auVar12._0_8_ = uVar28, auVar5._8_8_ = 0,
                    auVar5._0_8_ = (ulong)((uVar1 + iVar25) - SUB164(auVar4 * auVar12,8)) * lVar24,
                    auVar13._8_8_ = 0, auVar13._0_8_ = uVar28, uVar29 <= SUB164(auVar5 * auVar13,8))
                    );
          }
          lVar23 = *(long *)pSVar26;
        }
        if (lVar23 == 0) {
          local_60 = 0;
        }
        else {
          pcVar22 = *(char **)(lVar23 + 8);
          local_60 = 0;
          if (pcVar22 == (char *)0x0) {
            if (*(long *)(lVar23 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar23 + 0x10));
            }
          }
          else {
            local_50 = strlen(pcVar22);
            local_58 = pcVar22;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        cVar18 = can_edit(param_1,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((*(long *)(this + 0xb20) != 0) && (*(int *)(this + 0xb44) != 0)) {
          uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xb40)];
          lVar23 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb40) * 8);
          if (*(long *)pSVar26 == 0) {
            uVar20 = StringName::get_empty_hash();
          }
          else {
            uVar20 = *(uint *)(*(long *)pSVar26 + 0x20);
          }
          uVar28 = CONCAT44(0,uVar1);
          if (uVar20 == 0) {
            uVar20 = 1;
          }
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)uVar20 * lVar23;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = uVar28;
          lVar24 = SUB168(auVar6 * auVar14,8);
          uVar27 = *(uint *)(*(long *)(this + 0xb28) + lVar24 * 4);
          iVar25 = SUB164(auVar6 * auVar14,8);
          if (uVar27 != 0) {
            uVar29 = 0;
            do {
              if ((uVar20 == uVar27) &&
                 (*(long *)(*(long *)(*(long *)(this + 0xb20) + lVar24 * 8) + 0x10) ==
                  *(long *)pSVar26)) {
                pcVar22 = (char *)HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                                  ::operator[](this_00,pSVar26);
                cVar30 = *pcVar22;
                if (*pcVar22 != '\0') {
                  cVar30 = cVar18;
                }
                pcVar22 = (char *)HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                                  ::operator[](this_00,pSVar26);
                pSVar26 = *(StringName **)(pSVar26 + 0x10);
                *pcVar22 = cVar30;
                goto joined_r0x001076ba;
              }
              uVar29 = uVar29 + 1;
              auVar7._8_8_ = 0;
              auVar7._0_8_ = (ulong)(iVar25 + 1) * lVar23;
              auVar15._8_8_ = 0;
              auVar15._0_8_ = uVar28;
              lVar24 = SUB168(auVar7 * auVar15,8);
              uVar27 = *(uint *)(*(long *)(this + 0xb28) + lVar24 * 4);
              iVar25 = SUB164(auVar7 * auVar15,8);
            } while ((uVar27 != 0) &&
                    (auVar8._8_8_ = 0, auVar8._0_8_ = (ulong)uVar27 * lVar23, auVar16._8_8_ = 0,
                    auVar16._0_8_ = uVar28, auVar9._8_8_ = 0,
                    auVar9._0_8_ = (ulong)((uVar1 + iVar25) - SUB164(auVar8 * auVar16,8)) * lVar23,
                    auVar17._8_8_ = 0, auVar17._0_8_ = uVar28, uVar29 <= SUB164(auVar9 * auVar17,8))
                    );
          }
        }
        pcVar22 = (char *)HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                          ::operator[](this_00,pSVar26);
        pSVar26 = *(StringName **)(pSVar26 + 0x10);
        *pcVar22 = cVar18;
joined_r0x001076ba:
        if (pSVar26 == (StringName *)0x0) goto LAB_00107512;
      }
LAB_00107500:
      pSVar26 = *(StringName **)(pSVar26 + 0x10);
    } while (pSVar26 != (StringName *)0x0);
  }
LAB_00107512:
  for (iVar25 = 0; iVar19 = Node::get_child_count(SUB81(param_1,0)), iVar25 < iVar19;
      iVar25 = iVar25 + 1) {
    pNVar21 = (Node *)Node::get_child((int)param_1,SUB41(iVar25,0));
    _load_scene_groups(this,pNVar21);
  }
  List<Node::GroupInfo,DefaultAllocator>::~List((List<Node::GroupInfo,DefaultAllocator> *)&local_68)
  ;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_update_scene_groups(ObjectID const&) */

void __thiscall GroupsEditor::_update_scene_groups(GroupsEditor *this,ObjectID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
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
  ulong uVar34;
  uint uVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  long lVar39;
  ulong uVar40;
  ulong uVar41;
  uint uVar42;
  void *pvVar43;
  ulong uVar44;
  uint uVar45;
  long *plVar46;
  uint *puVar47;
  long in_FS_OFFSET;
  bool bVar48;
  HashMap local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  lVar39 = *(long *)(this + 0xac0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((lVar39 != 0) && (*(int *)(this + 0xae4) != 0)) {
    uVar44 = CONCAT44(0,(&hash_table_size_primes)[*(uint *)(this + 0xae0)]);
    lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xae0) * 8);
    uVar34 = *(long *)param_1 * 0x3ffff - 1;
    uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
    uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
    uVar34 = uVar34 >> 0x16 ^ uVar34;
    uVar40 = uVar34 & 0xffffffff;
    if ((int)uVar34 == 0) {
      uVar40 = 1;
    }
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar40 * lVar5;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar44;
    lVar37 = SUB168(auVar8 * auVar21,8);
    uVar42 = *(uint *)(*(long *)(this + 0xac8) + lVar37 * 4);
    uVar35 = SUB164(auVar8 * auVar21,8);
    if (uVar42 != 0) {
      uVar45 = 0;
      while (((uint)uVar40 != uVar42 ||
             (*(long *)param_1 != *(long *)(*(long *)(lVar39 + lVar37 * 8) + 0x10)))) {
        uVar45 = uVar45 + 1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)(uVar35 + 1) * lVar5;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar44;
        lVar37 = SUB168(auVar9 * auVar22,8);
        uVar42 = *(uint *)(*(long *)(this + 0xac8) + lVar37 * 4);
        uVar35 = SUB164(auVar9 * auVar22,8);
        if ((uVar42 == 0) ||
           (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar42 * lVar5, auVar23._8_8_ = 0,
           auVar23._0_8_ = uVar44, auVar11._8_8_ = 0,
           auVar11._0_8_ =
                (ulong)(((&hash_table_size_primes)[*(uint *)(this + 0xae0)] + uVar35) -
                       SUB164(auVar10 * auVar23,8)) * lVar5, auVar24._8_8_ = 0,
           auVar24._0_8_ = uVar44, SUB164(auVar11 * auVar24,8) < uVar45)) goto LAB_00107c58;
      }
      lVar39 = *(long *)(lVar39 + (ulong)uVar35 * 8);
      if (lVar39 != 0) {
        HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
        ::operator=((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                     *)(this + 0xb18),(HashMap *)(lVar39 + 0x18));
        lVar5 = *(long *)(this + 0xac0);
        if ((lVar5 == 0) || (*(int *)(this + 0xae4) == 0)) goto LAB_00107bf1;
        lVar37 = *(long *)(this + 0xac8);
        uVar42 = (&hash_table_size_primes)[*(uint *)(this + 0xae0)];
        uVar44 = CONCAT44(0,uVar42);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xae0) * 8);
        uVar34 = *(long *)(lVar39 + 0x10) * 0x3ffff - 1;
        uVar34 = (uVar34 ^ uVar34 >> 0x1f) * 0x15;
        uVar34 = (uVar34 ^ uVar34 >> 0xb) * 0x41;
        uVar34 = uVar34 >> 0x16 ^ uVar34;
        uVar40 = uVar34 & 0xffffffff;
        if ((int)uVar34 == 0) {
          uVar40 = 1;
        }
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar40 * lVar6;
        auVar25._8_8_ = 0;
        auVar25._0_8_ = uVar44;
        uVar34 = SUB168(auVar12 * auVar25,8);
        uVar35 = *(uint *)(lVar37 + uVar34 * 4);
        uVar41 = (ulong)SUB164(auVar12 * auVar25,8);
        if (uVar35 == 0) goto LAB_00107bf1;
        uVar45 = 0;
        goto LAB_001079e4;
      }
    }
  }
LAB_00107c58:
  local_50 = 2;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
  ::operator=((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
               *)(this + 0xb18),local_78);
  goto LAB_00107bf1;
  while( true ) {
    uVar35 = *(uint *)(lVar37 + uVar38 * 4);
    uVar41 = uVar38 & 0xffffffff;
    uVar45 = uVar45 + 1;
    if ((uVar35 == 0) ||
       (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar35 * lVar6, auVar26._8_8_ = 0,
       auVar26._0_8_ = uVar44, auVar14._8_8_ = 0,
       auVar14._0_8_ = (ulong)((uVar42 + uVar36) - SUB164(auVar13 * auVar26,8)) * lVar6,
       auVar27._8_8_ = 0, auVar27._0_8_ = uVar44, uVar34 = uVar38,
       SUB164(auVar14 * auVar27,8) < uVar45)) break;
LAB_001079e4:
    auVar15._8_8_ = 0;
    auVar15._0_8_ = (ulong)((int)uVar41 + 1) * lVar6;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar44;
    uVar38 = SUB168(auVar15 * auVar28,8);
    uVar36 = SUB164(auVar15 * auVar28,8);
    if ((uVar35 == (uint)uVar40) &&
       (*(long *)(lVar39 + 0x10) == *(long *)(*(long *)(lVar5 + uVar34 * 8) + 0x10))) {
      puVar47 = (uint *)(lVar37 + uVar38 * 4);
      uVar35 = *puVar47;
      if ((uVar35 != 0) &&
         (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)uVar35 * lVar6, auVar29._8_8_ = 0,
         auVar29._0_8_ = uVar44, auVar17._8_8_ = 0,
         auVar17._0_8_ = (ulong)((uVar36 + uVar42) - SUB164(auVar16 * auVar29,8)) * lVar6,
         auVar30._8_8_ = 0, auVar30._0_8_ = uVar44, uVar34 = (ulong)uVar36, uVar40 = uVar41,
         SUB164(auVar17 * auVar30,8) != 0)) {
        while( true ) {
          uVar41 = uVar34;
          puVar1 = (uint *)(lVar37 + uVar40 * 4);
          *puVar47 = *puVar1;
          puVar2 = (undefined8 *)(lVar5 + uVar38 * 8);
          *puVar1 = uVar35;
          puVar3 = (undefined8 *)(lVar5 + uVar40 * 8);
          uVar7 = *puVar2;
          *puVar2 = *puVar3;
          *puVar3 = uVar7;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = (ulong)((int)uVar41 + 1) * lVar6;
          auVar33._8_8_ = 0;
          auVar33._0_8_ = uVar44;
          uVar38 = SUB168(auVar20 * auVar33,8);
          puVar47 = (uint *)(lVar37 + uVar38 * 4);
          uVar35 = *puVar47;
          if ((uVar35 == 0) ||
             (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar35 * lVar6, auVar31._8_8_ = 0,
             auVar31._0_8_ = uVar44, auVar19._8_8_ = 0,
             auVar19._0_8_ =
                  (ulong)((SUB164(auVar20 * auVar33,8) + uVar42) - SUB164(auVar18 * auVar31,8)) *
                  lVar6, auVar32._8_8_ = 0, auVar32._0_8_ = uVar44, SUB164(auVar19 * auVar32,8) == 0
             )) break;
          uVar34 = uVar38 & 0xffffffff;
          uVar40 = uVar41;
        }
      }
      plVar4 = (long *)(lVar5 + uVar41 * 8);
      *(undefined4 *)(lVar37 + uVar41 * 4) = 0;
      plVar46 = (long *)*plVar4;
      if (*(long **)(this + 0xad0) == plVar46) {
        *(long *)(this + 0xad0) = *plVar46;
        plVar46 = (long *)*plVar4;
        if (plVar46 == *(long **)(this + 0xad8)) goto LAB_00107ca3;
      }
      else if (plVar46 == *(long **)(this + 0xad8)) {
LAB_00107ca3:
        *(long *)(this + 0xad8) = plVar46[1];
        plVar46 = (long *)*plVar4;
      }
      if ((long *)plVar46[1] != (long *)0x0) {
        *(long *)plVar46[1] = *plVar46;
        plVar46 = (long *)*plVar4;
      }
      if (*plVar46 != 0) {
        *(long *)(*plVar46 + 8) = plVar46[1];
        plVar46 = (long *)*plVar4;
      }
      pvVar43 = (void *)plVar46[4];
      if (pvVar43 != (void *)0x0) {
        if (*(int *)((long)plVar46 + 0x44) != 0) {
          uVar42 = (&hash_table_size_primes)[*(uint *)(plVar46 + 8)];
          if (uVar42 == 0) {
            *(undefined4 *)((long)plVar46 + 0x44) = 0;
            *(undefined1 (*) [16])(plVar46 + 6) = (undefined1  [16])0x0;
          }
          else {
            lVar39 = 0;
            do {
              if (*(int *)(plVar46[5] + lVar39) != 0) {
                bVar48 = StringName::configured != '\0';
                *(int *)(plVar46[5] + lVar39) = 0;
                pvVar43 = *(void **)((long)pvVar43 + lVar39 * 2);
                if ((bVar48) && (*(long *)((long)pvVar43 + 0x10) != 0)) {
                  StringName::unref();
                }
                Memory::free_static(pvVar43,false);
                pvVar43 = (void *)plVar46[4];
                *(undefined8 *)((long)pvVar43 + lVar39 * 2) = 0;
              }
              lVar39 = lVar39 + 4;
            } while (lVar39 != (ulong)uVar42 << 2);
            *(undefined4 *)((long)plVar46 + 0x44) = 0;
            *(undefined1 (*) [16])(plVar46 + 6) = (undefined1  [16])0x0;
            if (pvVar43 == (void *)0x0) goto LAB_00107bc6;
          }
        }
        Memory::free_static(pvVar43,false);
        Memory::free_static((void *)plVar46[5],false);
      }
LAB_00107bc6:
      Memory::free_static(plVar46,false);
      *(undefined8 *)(*(long *)(this + 0xac0) + uVar41 * 8) = 0;
      *(int *)(this + 0xae4) = *(int *)(this + 0xae4) + -1;
      break;
    }
  }
LAB_00107bf1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GroupsEditor::_node_removed(Node*) */

void __thiscall GroupsEditor::_node_removed(GroupsEditor *this,Node *param_1)

{
  Node *pNVar1;
  undefined8 uVar2;
  Node *pNVar3;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  undefined8 local_90;
  GroupsEditor local_88 [16];
  Variant *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  pNVar1 = *(Node **)(this + 0xa28);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (pNVar1 == param_1) {
    HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
    ::operator=((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                 *)(this + 0xae8),(HashMap *)(this + 0xb18));
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined **)(this_00 + 0x20) = &_LC15;
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)this_00 = &PTR_hash_0011c690;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar2 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x30) = uVar2;
    *(code **)(this_00 + 0x38) = _cache_scene_groups;
    *(GroupsEditor **)(this_00 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "GroupsEditor::_cache_scene_groups";
    Callable::Callable((Callable *)local_88,this_00);
    local_90 = *(undefined8 *)(pNVar1 + 0x60);
    Variant::Variant((Variant *)local_68,(ObjectID *)&local_90);
    Variant::Variant((Variant *)local_50,0);
    local_78[0] = (Variant *)local_68;
    Callable::call_deferredp((Variant **)local_88,(int)local_78);
    if (Variant::needs_deinit[local_50[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)local_88);
    *(undefined8 *)(this + 0xa28) = 0;
  }
  else if (pNVar1 != (Node *)0x0) {
    pNVar3 = (Node *)Node::get_owner();
    if ((pNVar1 == pNVar3) && (this[0xa1b] == (GroupsEditor)0x0)) {
      this[0xa1b] = (GroupsEditor)0x1;
      create_custom_callable_function_pointer<GroupsEditor>
                (local_88,(char *)this,(_func_void *)"&GroupsEditor::_update_groups_and_tree");
      Variant::Variant((Variant *)local_68,0);
      Callable::call_deferredp((Variant **)local_88,0);
      if (Variant::needs_deinit[local_68[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)local_88);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_cache_scene_groups(ObjectID const&) */

void __thiscall GroupsEditor::_cache_scene_groups(GroupsEditor *this,ObjectID *param_1)

{
  int iVar1;
  long lVar2;
  HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
  *this_00;
  int iVar3;
  
  iVar1 = EditorData::get_edited_scene_count();
  if (0 < iVar1) {
    iVar3 = 0;
    do {
      lVar2 = EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
      if ((lVar2 != 0) && (*(long *)param_1 == *(long *)(lVar2 + 0x60))) {
        this_00 = (HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                   *)HashMap<ObjectID,HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>>>>
                     ::operator[]((HashMap<ObjectID,HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>>>>
                                   *)(this + 0xab8),param_1);
        HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
        ::operator=(this_00,(HashMap *)(this + 0xae8));
        return;
      }
      iVar3 = iVar3 + 1;
    } while (iVar1 != iVar3);
  }
  return;
}



/* GroupsEditor::_update_tree() [clone .part.0] */

void GroupsEditor::_update_tree(void)

{
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  *this;
  long lVar1;
  Object *pOVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 (*pauVar9) [16];
  StringName *this_00;
  undefined8 uVar10;
  StringName *pSVar11;
  char *pcVar12;
  long *plVar13;
  long *plVar14;
  String *pSVar15;
  CowData *pCVar16;
  bool bVar17;
  undefined8 *puVar18;
  StringName *in_RDI;
  long in_FS_OFFSET;
  StringName *local_e8;
  List<StringName,DefaultAllocator> *local_b0;
  long *local_a0;
  undefined1 (*local_98) [16];
  undefined1 (*local_90) [16];
  undefined1 (*local_88) [16];
  Object *local_80;
  long local_78;
  undefined8 local_70;
  Object *local_68;
  size_t local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  in_RDI[0xa18] = (StringName)0x1;
  Tree::clear();
  local_a0 = (long *)0x0;
  Node::get_groups(*(List **)(in_RDI + 0xa20));
  List<Node::GroupInfo,DefaultAllocator>::sort_custom<_GroupInfoComparator>
            ((List<Node::GroupInfo,DefaultAllocator> *)&local_a0);
  local_98 = (undefined1 (*) [16])0x0;
  if ((local_a0 != (long *)0x0) && (pSVar11 = (StringName *)*local_a0, pSVar11 != (StringName *)0x0)
     ) {
    pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar9[1] = 0;
    *pauVar9 = (undefined1  [16])0x0;
    local_98 = pauVar9;
    do {
      while( true ) {
        this_00 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
        StringName::operator=(this_00,pSVar11);
        lVar1 = *(long *)(*pauVar9 + 8);
        *(undefined1 (**) [16])(this_00 + 0x18) = pauVar9;
        *(undefined8 *)(this_00 + 8) = 0;
        *(long *)(this_00 + 0x10) = lVar1;
        if (lVar1 != 0) {
          *(StringName **)(lVar1 + 8) = this_00;
        }
        lVar1 = *(long *)*pauVar9;
        *(StringName **)(*pauVar9 + 8) = this_00;
        if (lVar1 != 0) break;
        pSVar11 = *(StringName **)(pSVar11 + 0x10);
        *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
        *(StringName **)*pauVar9 = this_00;
        if (pSVar11 == (StringName *)0x0) goto LAB_001080cc;
      }
      pSVar11 = *(StringName **)(pSVar11 + 0x10);
      *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
    } while (pSVar11 != (StringName *)0x0);
  }
LAB_001080cc:
  iVar5 = Tree::create_item(*(TreeItem **)(in_RDI + 0xab0),0);
  uVar10 = Tree::create_item(*(TreeItem **)(in_RDI + 0xab0),iVar5);
  local_70 = 0;
  local_68 = (Object *)&_LC15;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x10dd01;
  local_78 = 0;
  local_60 = 0xc;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  TreeItem::set_text(uVar10,0,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((_update_tree()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_tree()::{lambda()#1}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_tree()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_tree()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_tree()::{lambda()#1}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_68);
  iVar8 = (int)uVar10;
  TreeItem::set_icon(iVar8,(Ref *)0x0);
  if (((local_68 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar2 = local_68, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_68), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if ((_update_tree()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_update_tree()::{lambda()#2}::operator()()::sname), iVar6 != 0))
  {
    _scs_create((char *)&_update_tree()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_tree()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_tree()::{lambda()#2}::operator()()::sname);
  }
  local_58[0] = Control::get_theme_color
                          (in_RDI,(StringName *)&_update_tree()::{lambda()#2}::operator()()::sname);
  bVar17 = SUB81((Variant *)local_58,0);
  TreeItem::set_custom_bg_color(iVar8,(Color *)0x0,bVar17);
  TreeItem::set_selectable(iVar8,false);
  puVar18 = *(undefined8 **)(in_RDI + 0xb30);
  local_90 = (undefined1 (*) [16])0x0;
  if (puVar18 == (undefined8 *)0x0) {
    List<StringName,DefaultAllocator>::sort_custom<NoCaseComparator>
              ((List<StringName,DefaultAllocator> *)&local_90);
  }
  else {
    pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar9[1] = 0;
    *pauVar9 = (undefined1  [16])0x0;
    local_90 = pauVar9;
    do {
      pSVar11 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pSVar11 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pSVar11 + 0x10) = (undefined1  [16])0x0;
      StringName::operator=(pSVar11,(StringName *)(puVar18 + 2));
      lVar1 = *(long *)(*pauVar9 + 8);
      *(undefined1 (**) [16])(pSVar11 + 0x18) = pauVar9;
      *(undefined8 *)(pSVar11 + 8) = 0;
      *(long *)(pSVar11 + 0x10) = lVar1;
      if (lVar1 != 0) {
        *(StringName **)(lVar1 + 8) = pSVar11;
      }
      lVar1 = *(long *)*pauVar9;
      *(StringName **)(*pauVar9 + 8) = pSVar11;
      if (lVar1 == 0) {
        puVar18 = (undefined8 *)*puVar18;
        *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
        *(StringName **)*pauVar9 = pSVar11;
      }
      else {
        puVar18 = (undefined8 *)*puVar18;
        *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
      }
    } while (puVar18 != (undefined8 *)0x0);
    List<StringName,DefaultAllocator>::sort_custom<NoCaseComparator>
              ((List<StringName,DefaultAllocator> *)&local_90);
    for (pSVar11 = *(StringName **)*pauVar9; pSVar11 != (StringName *)0x0;
        pSVar11 = *(StringName **)(pSVar11 + 8)) {
      while( true ) {
        LineEdit::get_text();
        lVar1 = *(long *)pSVar11;
        if (lVar1 == 0) {
          local_78 = 0;
        }
        else {
          pOVar2 = *(Object **)(lVar1 + 8);
          local_78 = 0;
          if (pOVar2 == (Object *)0x0) {
            if (*(long *)(lVar1 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar1 + 0x10));
            }
          }
          else {
            local_60 = strlen((char *)pOVar2);
            local_68 = pOVar2;
            String::parse_latin1((StrRange *)&local_78);
          }
        }
        cVar4 = String::is_subsequence_ofn((String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if (cVar4 != '\0') break;
        pSVar11 = *(StringName **)(pSVar11 + 8);
        if (pSVar11 == (StringName *)0x0) goto LAB_001087a4;
      }
      plVar13 = (long *)Tree::create_item(*(TreeItem **)(in_RDI + 0xab0),iVar8);
      TreeItem::set_cell_mode(plVar13,0,1);
      lVar1 = *(long *)pSVar11;
      if (lVar1 == 0) {
        local_68 = (Object *)0x0;
      }
      else {
        local_68 = (Object *)0x0;
        if (*(char **)(lVar1 + 8) == (char *)0x0) {
          if (*(long *)(lVar1 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar1 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_68,*(char **)(lVar1 + 8));
        }
      }
      can_edit(*(Node **)(in_RDI + 0xa20),(String *)&local_68);
      iVar6 = (int)plVar13;
      TreeItem::set_editable(iVar6,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((local_98 != (undefined1 (*) [16])0x0) &&
         (plVar14 = *(long **)*local_98, plVar14 != (long *)0x0)) {
        do {
          if (*plVar14 == *(long *)pSVar11) break;
          plVar14 = (long *)plVar14[1];
        } while (plVar14 != (long *)0x0);
      }
      TreeItem::set_checked(iVar6,false);
      lVar1 = *(long *)pSVar11;
      if (lVar1 == 0) {
        local_68 = (Object *)0x0;
      }
      else {
        local_68 = (Object *)0x0;
        if (*(char **)(lVar1 + 8) == (char *)0x0) {
          if (*(long *)(lVar1 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar1 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_68,*(char **)(lVar1 + 8));
        }
      }
      TreeItem::set_text(plVar13,0,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      pcVar3 = *(code **)(*plVar13 + 0xa8);
      Variant::Variant((Variant *)local_58,true);
      StringName::StringName((StringName *)&local_68,"__local",false);
      (*pcVar3)(plVar13,(String *)&local_68,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar3 = *(code **)(*plVar13 + 0xa8);
      Variant::Variant((Variant *)local_58,pSVar11);
      StringName::StringName((StringName *)&local_68,"__name",false);
      (*pcVar3)(plVar13,(String *)&local_68,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar3 = *(code **)(*plVar13 + 0xa8);
      Variant::Variant((Variant *)local_58,"");
      StringName::StringName((StringName *)&local_68,"__description",false);
      (*pcVar3)(plVar13,(String *)&local_68,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar12 = (char *)HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                        ::operator[]((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                                      *)(in_RDI + 0xb18),pSVar11);
      if (*pcVar12 == '\0') {
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"");
        local_78 = 0;
        String::parse_latin1
                  ((String *)&local_78,"This group belongs to another scene and can\'t be edited.");
        TTR((String *)&local_68,(String *)&local_78);
        if ((_update_tree()::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar7 = __cxa_guard_acquire(&_update_tree()::{lambda()#3}::operator()()::sname),
           iVar7 != 0)) {
          _scs_create((char *)&_update_tree()::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&_update_tree()::{lambda()#3}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_tree()::{lambda()#3}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_80);
        TreeItem::add_button(iVar6,(Ref *)0x0,(int)(StringName *)&local_80,true,(String *)0x1);
        if (((local_80 != (Object *)0x0) &&
            (cVar4 = RefCounted::unreference(), pOVar2 = local_80, cVar4 != '\0')) &&
           (cVar4 = predelete_handler(local_80), cVar4 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))();
          Memory::free_static(pOVar2,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
      local_e8 = (StringName *)&local_80;
      local_70 = 0;
      local_68 = (Object *)&_LC15;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = (Object *)0x10dd23;
      local_78 = 0;
      local_60 = 0x1d;
      String::parse_latin1((StrRange *)&local_78);
      TTR((String *)&local_68,(String *)&local_78);
      if ((_update_tree()::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_update_tree()::{lambda()#4}::operator()()::sname),
         iVar7 != 0)) {
        _scs_create((char *)&_update_tree()::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_tree()::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_tree()::{lambda()#4}::operator()()::sname);
      }
      Control::get_editor_theme_icon(local_e8);
      TreeItem::add_button(iVar6,(Ref *)0x0,(int)local_e8,true,(String *)0x0);
      if (((local_80 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar2 = local_80, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_80), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
  }
LAB_001087a4:
  local_b0 = (List<StringName,DefaultAllocator> *)&local_90;
  puVar18 = *(undefined8 **)(in_RDI + 0xb60);
  local_88 = (undefined1 (*) [16])0x0;
  if (puVar18 != (undefined8 *)0x0) {
    pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
    *(undefined4 *)pauVar9[1] = 0;
    *pauVar9 = (undefined1  [16])0x0;
    local_88 = pauVar9;
    do {
      pSVar11 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pSVar11 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pSVar11 + 0x10) = (undefined1  [16])0x0;
      StringName::operator=(pSVar11,(StringName *)(puVar18 + 2));
      lVar1 = *(long *)(*pauVar9 + 8);
      *(undefined1 (**) [16])(pSVar11 + 0x18) = pauVar9;
      *(undefined8 *)(pSVar11 + 8) = 0;
      *(long *)(pSVar11 + 0x10) = lVar1;
      if (lVar1 != 0) {
        *(StringName **)(lVar1 + 8) = pSVar11;
      }
      lVar1 = *(long *)*pauVar9;
      *(StringName **)(*pauVar9 + 8) = pSVar11;
      if (lVar1 == 0) {
        puVar18 = (undefined8 *)*puVar18;
        *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
        *(StringName **)*pauVar9 = pSVar11;
      }
      else {
        puVar18 = (undefined8 *)*puVar18;
        *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
      }
    } while (puVar18 != (undefined8 *)0x0);
  }
  List<StringName,DefaultAllocator>::sort_custom<NoCaseComparator>
            ((List<StringName,DefaultAllocator> *)&local_88);
  uVar10 = Tree::create_item(*(TreeItem **)(in_RDI + 0xab0),iVar5);
  local_70 = 0;
  local_68 = (Object *)&_LC15;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = (Object *)0x10dd4c;
  local_78 = 0;
  local_60 = 0xd;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  TreeItem::set_text(uVar10,0,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if ((_update_tree()::{lambda()#5}::operator()()::sname == '\0') &&
     (iVar5 = __cxa_guard_acquire(&_update_tree()::{lambda()#5}::operator()()::sname), iVar5 != 0))
  {
    _scs_create((char *)&_update_tree()::{lambda()#5}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_tree()::{lambda()#5}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_tree()::{lambda()#5}::operator()()::sname);
  }
  Control::get_editor_theme_icon((StringName *)&local_68);
  iVar5 = (int)uVar10;
  TreeItem::set_icon(iVar5,(Ref *)0x0);
  if (((local_68 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar2 = local_68, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_68), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
    Memory::free_static(pOVar2,false);
  }
  if ((_update_tree()::{lambda()#6}::operator()()::sname == '\0') &&
     (iVar8 = __cxa_guard_acquire(&_update_tree()::{lambda()#6}::operator()()::sname), iVar8 != 0))
  {
    _scs_create((char *)&_update_tree()::{lambda()#6}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_tree()::{lambda()#6}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_tree()::{lambda()#6}::operator()()::sname);
  }
  local_58[0] = Control::get_theme_color
                          (in_RDI,(StringName *)&_update_tree()::{lambda()#6}::operator()()::sname);
  TreeItem::set_custom_bg_color(iVar5,(Color *)0x0,bVar17);
  TreeItem::set_selectable(iVar5,false);
  if (local_88 != (undefined1 (*) [16])0x0) {
    for (pSVar11 = *(StringName **)*local_88; pSVar11 != (StringName *)0x0;
        pSVar11 = *(StringName **)(pSVar11 + 8)) {
      while( true ) {
        LineEdit::get_text();
        lVar1 = *(long *)pSVar11;
        if (lVar1 == 0) {
          local_78 = 0;
        }
        else {
          pOVar2 = *(Object **)(lVar1 + 8);
          local_78 = 0;
          if (pOVar2 == (Object *)0x0) {
            if (*(long *)(lVar1 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar1 + 0x10));
            }
          }
          else {
            local_60 = strlen((char *)pOVar2);
            local_68 = pOVar2;
            String::parse_latin1((StrRange *)&local_78);
          }
        }
        cVar4 = String::is_subsequence_ofn((String *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if (cVar4 != '\0') break;
        pSVar11 = *(StringName **)(pSVar11 + 8);
        if (pSVar11 == (StringName *)0x0) goto LAB_00108e9a;
      }
      plVar13 = (long *)Tree::create_item(*(TreeItem **)(in_RDI + 0xab0),iVar5);
      TreeItem::set_cell_mode(plVar13,0,1);
      lVar1 = *(long *)pSVar11;
      if (lVar1 == 0) {
        local_68 = (Object *)0x0;
      }
      else {
        local_68 = (Object *)0x0;
        if (*(char **)(lVar1 + 8) == (char *)0x0) {
          if (*(long *)(lVar1 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar1 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_68,*(char **)(lVar1 + 8));
        }
      }
      can_edit(*(Node **)(in_RDI + 0xa20),(String *)&local_68);
      iVar8 = (int)plVar13;
      TreeItem::set_editable(iVar8,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((local_98 != (undefined1 (*) [16])0x0) &&
         (plVar14 = *(long **)*local_98, plVar14 != (long *)0x0)) {
        do {
          if (*plVar14 == *(long *)pSVar11) break;
          plVar14 = (long *)plVar14[1];
        } while (plVar14 != (long *)0x0);
      }
      TreeItem::set_checked(iVar8,false);
      lVar1 = *(long *)pSVar11;
      if (lVar1 == 0) {
        local_68 = (Object *)0x0;
      }
      else {
        local_68 = (Object *)0x0;
        if (*(char **)(lVar1 + 8) == (char *)0x0) {
          if (*(long *)(lVar1 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar1 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_68,*(char **)(lVar1 + 8));
        }
      }
      TreeItem::set_text(plVar13,0,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      pcVar3 = *(code **)(*plVar13 + 0xa8);
      Variant::Variant((Variant *)local_58,false);
      StringName::StringName((StringName *)&local_68,"__local",false);
      (*pcVar3)(plVar13,(String *)&local_68,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar3 = *(code **)(*plVar13 + 0xa8);
      Variant::Variant((Variant *)local_58,pSVar11);
      StringName::StringName((StringName *)&local_68,"__name",false);
      (*pcVar3)(plVar13,(String *)&local_68,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      pcVar3 = *(code **)(*plVar13 + 0xa8);
      this = (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
              *)(in_RDI + 0xb48);
      pSVar15 = (String *)
                HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                ::operator[](this,pSVar11);
      Variant::Variant((Variant *)local_58,pSVar15);
      StringName::StringName((StringName *)&local_68,"__description",false);
      (*pcVar3)(plVar13,(String *)&local_68,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      plVar13 = (long *)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                        ::operator[](this,pSVar11);
      if ((*plVar13 != 0) && (1 < *(uint *)(*plVar13 + -8))) {
        pCVar16 = (CowData *)
                  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                  ::operator[](this,pSVar11);
        local_70 = 0;
        if (*(long *)pCVar16 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,pCVar16);
        }
        StringName::StringName((StringName *)&local_78,pSVar11);
        local_80 = (Object *)0x0;
        String::parse_latin1((String *)&local_80,"%s\n\n%s");
        vformat<StringName,String>
                  ((String *)&local_68,(String *)&local_80,(StrRange *)&local_78,
                   (StrRange *)&local_70);
        TreeItem::set_tooltip_text(iVar8,(String *)0x0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        if ((StringName::configured != '\0') && (local_78 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
      local_e8 = (StringName *)&local_80;
      local_70 = 0;
      local_68 = (Object *)&_LC15;
      local_60 = 0;
      String::parse_latin1((StrRange *)&local_70);
      local_68 = (Object *)0x10dd23;
      local_78 = 0;
      local_60 = 0x1d;
      String::parse_latin1((StrRange *)&local_78);
      TTR((String *)&local_68,(String *)&local_78);
      if ((_update_tree()::{lambda()#7}::operator()()::sname == '\0') &&
         (iVar6 = __cxa_guard_acquire(&_update_tree()::{lambda()#7}::operator()()::sname),
         iVar6 != 0)) {
        _scs_create((char *)&_update_tree()::{lambda()#7}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_update_tree()::{lambda()#7}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_tree()::{lambda()#7}::operator()()::sname);
      }
      Control::get_editor_theme_icon(local_e8);
      TreeItem::add_button(iVar8,(Ref *)0x0,(int)local_e8,true,(String *)0x0);
      if (((local_80 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar2 = local_80, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_80), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
  }
LAB_00108e9a:
  in_RDI[0xa18] = (StringName)0x0;
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_88);
  List<StringName,DefaultAllocator>::~List(local_b0);
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_98);
  List<Node::GroupInfo,DefaultAllocator>::~List((List<Node::GroupInfo,DefaultAllocator> *)&local_a0)
  ;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* GroupsEditor::_update_tree() */

void __thiscall GroupsEditor::_update_tree(GroupsEditor *this)

{
  char cVar1;
  
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 == '\0') {
    this[0xa1a] = (GroupsEditor)0x1;
    return;
  }
  if ((*(long *)(this + 0xa20) != 0) && (this[0xa18] == (GroupsEditor)0x0)) {
    _update_tree();
    return;
  }
  return;
}



/* GroupsEditor::_update_groups() [clone .part.0] */

void __thiscall GroupsEditor::_update_groups(GroupsEditor *this)

{
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  *this_00;
  undefined8 *puVar1;
  void *pvVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined8 *puVar11;
  uint uVar12;
  HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
  *pHVar13;
  uint uVar15;
  int iVar16;
  long lVar17;
  long *plVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long in_FS_OFFSET;
  StringName local_48 [8];
  long local_40;
  ulong uVar14;
  
  this_00 = (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
             *)(this + 0xb48);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xa19] = (GroupsEditor)0x1;
  ProjectSettings::get_singleton();
  pHVar13 = (HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
             *)ProjectSettings::get_global_groups_list();
  if (pHVar13 != this_00) {
    uVar15 = *(uint *)(this + 0xb70);
    uVar12 = (&hash_table_size_primes)[uVar15];
    if ((*(int *)(this + 0xb74) != 0) && (*(long *)(this + 0xb50) != 0)) {
      if (uVar12 != 0) {
        lVar21 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xb58) + lVar21) != 0) {
            *(int *)(*(long *)(this + 0xb58) + lVar21) = 0;
            pvVar2 = *(void **)(*(long *)(this + 0xb50) + lVar21 * 2);
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x18));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar2 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar2,false);
            *(undefined8 *)(*(long *)(this + 0xb50) + lVar21 * 2) = 0;
          }
          lVar21 = lVar21 + 4;
        } while (lVar21 != (ulong)uVar12 * 4);
        uVar15 = *(uint *)(this + 0xb70);
        uVar12 = (&hash_table_size_primes)[uVar15];
      }
      *(undefined4 *)(this + 0xb74) = 0;
      *(undefined1 (*) [16])(this + 0xb60) = (undefined1  [16])0x0;
    }
    if (uVar12 < (uint)(&hash_table_size_primes)[*(uint *)(pHVar13 + 0x28)]) {
      if (uVar15 != 0x1c) {
        uVar14 = (ulong)uVar15;
        do {
          uVar12 = (int)uVar14 + 1;
          uVar14 = (ulong)uVar12;
          if ((uint)(&hash_table_size_primes)[*(uint *)(pHVar13 + 0x28)] <=
              (uint)(&hash_table_size_primes)[uVar14]) {
            if (uVar12 != uVar15) {
              if (*(long *)(this + 0xb50) == 0) {
                *(uint *)(this + 0xb70) = uVar12;
              }
              else {
                HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                ::_resize_and_rehash(this_00,uVar12);
              }
            }
            goto LAB_001096f1;
          }
        } while (uVar12 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_001096f1:
    if ((*(long *)(pHVar13 + 8) != 0) &&
       (plVar18 = *(long **)(pHVar13 + 0x18), plVar18 != (long *)0x0)) {
      do {
        HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
        ::insert(local_48,(String *)this_00,(bool)((char)plVar18 + '\x10'));
        plVar18 = (long *)*plVar18;
      } while (plVar18 != (long *)0x0);
    }
  }
  _load_scene_groups(this,*(Node **)(this + 0xa28));
  puVar1 = *(undefined8 **)(this + 0xb30);
joined_r0x00109752:
  do {
    do {
      do {
        puVar11 = puVar1;
        if (puVar11 == (undefined8 *)0x0) {
          this[0xa19] = (GroupsEditor)0x0;
          if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
            __stack_chk_fail();
          }
          return;
        }
        puVar1 = (undefined8 *)*puVar11;
      } while ((*(long *)(this + 0xb50) == 0) || (*(int *)(this + 0xb74) == 0));
      uVar15 = (&hash_table_size_primes)[*(uint *)(this + 0xb70)];
      lVar21 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xb70) * 8);
      if (puVar11[2] == 0) {
        uVar12 = StringName::get_empty_hash();
      }
      else {
        uVar12 = *(uint *)(puVar11[2] + 0x20);
      }
      uVar14 = CONCAT44(0,uVar15);
      if (uVar12 == 0) {
        uVar12 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar12 * lVar21;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar14;
      lVar17 = SUB168(auVar3 * auVar7,8);
      uVar19 = *(uint *)(*(long *)(this + 0xb58) + lVar17 * 4);
      iVar16 = SUB164(auVar3 * auVar7,8);
    } while (uVar19 == 0);
    uVar20 = 0;
    while ((uVar12 != uVar19 ||
           (*(long *)(*(long *)(*(long *)(this + 0xb50) + lVar17 * 8) + 0x10) != puVar11[2]))) {
      uVar20 = uVar20 + 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)(iVar16 + 1) * lVar21;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar14;
      lVar17 = SUB168(auVar4 * auVar8,8);
      uVar19 = *(uint *)(*(long *)(this + 0xb58) + lVar17 * 4);
      iVar16 = SUB164(auVar4 * auVar8,8);
      if ((uVar19 == 0) ||
         (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar19 * lVar21, auVar9._8_8_ = 0,
         auVar9._0_8_ = uVar14, auVar6._8_8_ = 0,
         auVar6._0_8_ = (ulong)((uVar15 + iVar16) - SUB164(auVar5 * auVar9,8)) * lVar21,
         auVar10._8_8_ = 0, auVar10._0_8_ = uVar14, SUB164(auVar6 * auVar10,8) < uVar20))
      goto joined_r0x00109752;
    }
    HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
    ::erase((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
             *)(this + 0xb18),(StringName *)(puVar11 + 2));
  } while( true );
}



/* GroupsEditor::_update_groups() */

void __thiscall GroupsEditor::_update_groups(GroupsEditor *this)

{
  char cVar1;
  
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 == '\0') {
    this[0xa1a] = (GroupsEditor)0x1;
    return;
  }
  if (this[0xa19] != (GroupsEditor)0x0) {
    return;
  }
  _update_groups(this);
  return;
}



/* GroupsEditor::_update_groups_and_tree() */

void __thiscall GroupsEditor::_update_groups_and_tree(GroupsEditor *this)

{
  char cVar1;
  
  this[0xa1b] = (GroupsEditor)0x0;
  if (*(long *)(this + 0xa28) == 0) {
    return;
  }
  cVar1 = CanvasItem::is_visible_in_tree();
  if (cVar1 == '\0') {
    this[0xa1a] = (GroupsEditor)0x1;
    cVar1 = CanvasItem::is_visible_in_tree();
  }
  else {
    if (this[0xa19] == (GroupsEditor)0x0) {
      _update_groups(this);
    }
    cVar1 = CanvasItem::is_visible_in_tree();
  }
  if (cVar1 != '\0') {
    if ((*(long *)(this + 0xa20) != 0) && (this[0xa18] == (GroupsEditor)0x0)) {
      _update_tree();
      return;
    }
    return;
  }
  this[0xa1a] = (GroupsEditor)0x1;
  return;
}



/* GroupsEditor::set_current(Node*) */

void __thiscall GroupsEditor::set_current(GroupsEditor *this,Node *param_1)

{
  char cVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(Node **)(this + 0xa20) != param_1) &&
     (*(Node **)(this + 0xa20) = param_1, param_1 != (Node *)0x0)) {
    lVar2 = SceneTree::get_edited_scene_root();
    if (*(long *)(this + 0xa28) == lVar2) {
LAB_00109b01:
      cVar1 = CanvasItem::is_visible_in_tree();
    }
    else {
      lVar2 = SceneTree::get_edited_scene_root();
      *(long *)(this + 0xa28) = lVar2;
      local_18 = *(undefined8 *)(lVar2 + 0x60);
      _update_scene_groups(this,(ObjectID *)&local_18);
      cVar1 = CanvasItem::is_visible_in_tree();
      if (cVar1 != '\0') {
        if (this[0xa19] == (GroupsEditor)0x0) {
          _update_groups(this);
        }
        goto LAB_00109b01;
      }
      this[0xa1a] = (GroupsEditor)0x1;
      cVar1 = CanvasItem::is_visible_in_tree();
    }
    if (cVar1 == '\0') {
      this[0xa1a] = (GroupsEditor)0x1;
    }
    else if ((*(long *)(this + 0xa20) != 0) && (this[0xa18] == (GroupsEditor)0x0)) {
      if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_tree();
        return;
      }
      goto LAB_00109b85;
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109b85:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_notification(int) */

void __thiscall GroupsEditor::_notification(GroupsEditor *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  Ref *pRVar3;
  Object *pOVar4;
  char cVar5;
  long in_FS_OFFSET;
  long local_50;
  Object *local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1f) {
    if (this[0xa1a] != (GroupsEditor)0x0) {
      cVar5 = CanvasItem::is_visible_in_tree();
      if ((cVar5 != '\0') && (*(undefined2 *)(this + 0xa1a) = 0, *(long *)(this + 0xa28) != 0)) {
        cVar5 = CanvasItem::is_visible_in_tree();
        if (cVar5 == '\0') {
          this[0xa1a] = (GroupsEditor)0x1;
        }
        else if (this[0xa19] == (GroupsEditor)0x0) {
          _update_groups(this);
        }
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _update_tree(this);
          return;
        }
        goto LAB_00109f15;
      }
    }
  }
  else if (param_1 == 0x2d) {
    pRVar3 = *(Ref **)(this + 0xaa0);
    StringName::StringName((StringName *)&local_50,"Search",false);
    Control::get_editor_theme_icon((StringName *)local_48);
    LineEdit::set_right_icon(pRVar3);
    if (local_48[0] != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_48[0];
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_48[0]);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    pRVar3 = *(Ref **)(this + 0xaa8);
    StringName::StringName((StringName *)&local_50,"Add",false);
    Control::get_editor_theme_icon((StringName *)local_48);
    Button::set_button_icon(pRVar3);
    if (local_48[0] != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_48[0]);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)local_48[0] + 0x140))(local_48[0]);
          Memory::free_static(local_48[0],false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    cVar5 = CanvasItem::is_visible_in_tree();
    if (cVar5 == '\0') {
      this[0xa1a] = (GroupsEditor)0x1;
    }
    else if ((*(long *)(this + 0xa20) != 0) && (this[0xa18] == (GroupsEditor)0x0)) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_tree();
        return;
      }
      goto LAB_00109f15;
    }
  }
  else if (param_1 == 0xd) {
    plVar1 = *(long **)(this + 0x240);
    if (plVar1 == (long *)0x0) {
GroupsEditor__notification:
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<GroupsEditor,Node*>
              ((GroupsEditor *)local_48,(char *)this,
               (_func_void_Node_ptr *)"&GroupsEditor::_load_scene_groups");
    StringName::StringName((StringName *)&local_50,"node_added",false);
    (*pcVar2)(plVar1,(StringName *)&local_50,(GroupsEditor *)local_48,0);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_48);
    plVar1 = *(long **)(this + 0x240);
    if (plVar1 == (long *)0x0) goto GroupsEditor__notification;
    pcVar2 = *(code **)(*plVar1 + 0x108);
    create_custom_callable_function_pointer<GroupsEditor,Node*>
              ((GroupsEditor *)local_48,(char *)this,
               (_func_void_Node_ptr *)"&GroupsEditor::_node_removed");
    StringName::StringName((StringName *)&local_50,"node_removed",false);
    (*pcVar2)(plVar1,(StringName *)&local_50,(GroupsEditor *)local_48,0);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)local_48);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00109f15:
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



/* CallableCustomMethodPointer<GroupsEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Ref<InputEvent> >::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>> *this)

{
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, ObjectID const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&> *this)

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



/* CallableCustomMethodPointer<LineEdit, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Node*> *this)

{
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void> *this)

{
  return;
}



/* MethodBindT<String const&, bool>::_gen_argument_type(int) const */

char __thiscall
MethodBindT<String_const&,bool>::_gen_argument_type
          (MethodBindT<String_const&,bool> *this,int param_1)

{
  char cVar1;
  
  cVar1 = '\0';
  if ((uint)param_1 < 2) {
    cVar1 = (-(param_1 == 0) & 3U) + 1;
  }
  return cVar1;
}



/* MethodBindT<String const&, bool>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&,bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&, String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&,String_const&>::_gen_argument_type
          (MethodBindT<String_const&,String_const&> *this,int param_1)

{
  return (ulong)((uint)param_1 < 2) << 2;
}



/* MethodBindT<String const&, String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&,String_const&>::get_argument_meta(int param_1)

{
  return 0;
}



/* MethodBindT<String const&>::_gen_argument_type(int) const */

long __thiscall
MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this,int param_1)

{
  return (ulong)(param_1 == 0) << 2;
}



/* MethodBindT<String const&>::get_argument_meta(int) const */

undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1)

{
  return 0;
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



/* CallableCustomMethodPointer<GroupsEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<GroupsEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Ref<InputEvent> >::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>>::get_argument_count
          (CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Vector2 const&,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<GroupsEditor, void, ObjectID const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&>::get_argument_count
          (CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&> *this,bool *param_1)

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



/* CallableCustomMethodPointer<LineEdit, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<LineEdit,void,bool>::get_argument_count
          (CallableCustomMethodPointer<LineEdit,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<GroupsEditor,void,Node*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<GroupsEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void>::get_argument_count
          (CallableCustomMethodPointer<GroupsEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointerBase::get_method() const */

void CallableCustomMethodPointerBase::get_method(void)

{
  long in_RSI;
  StringName *in_RDI;
  
  StringName::StringName(in_RDI,*(char **)(in_RSI + 0x20),false);
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<LineEdit, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void,bool> *this)

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



/* CallableCustomMethodPointer<GroupsEditor, void, ObjectID const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Ref<InputEvent> >::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,int> *this)

{
  operator_delete(this,0x48);
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



/* GroupsEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 GroupsEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00122008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00122008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* GroupsEditor::_property_can_revertv(StringName const&) const */

undefined8 GroupsEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00122008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c960;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c960;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&>::~MethodBindT
          (MethodBindT<String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ca20;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&>::~MethodBindT
          (MethodBindT<String_const&,String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ca20;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c9c0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011c9c0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<String const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<String_const&,bool>::~MethodBindT(MethodBindT<String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ca80;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<String const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<String_const&,bool>::~MethodBindT(MethodBindT<String_const&,bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0011ca80;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, ObjectID const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&>::get_object
          (CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&> *this)

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
      goto LAB_0010a6dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a6dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a6dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GroupsEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void>::get_object
          (CallableCustomMethodPointer<GroupsEditor,void> *this)

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
      goto LAB_0010a7dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a7dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a7dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Vector2 const&, MouseButton>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton>::get_object
          (CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton> *this)

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
      goto LAB_0010a8dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a8dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a8dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Object*, int, int, MouseButton>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton> *this)

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
      goto LAB_0010a9dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a9dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a9dd:
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
      goto LAB_0010aadd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aadd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aadd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<LineEdit, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<LineEdit,void,bool>::get_object
          (CallableCustomMethodPointer<LineEdit,void,bool> *this)

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
      goto LAB_0010abdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010abdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010abdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Ref<InputEvent> >::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>>::get_object
          (CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>> *this)

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
      goto LAB_0010acdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010acdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010acdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GroupsEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,int>::get_object
          (CallableCustomMethodPointer<GroupsEditor,void,int> *this)

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
      goto LAB_0010addd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010addd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010addd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Node*>::get_object
          (CallableCustomMethodPointer<GroupsEditor,void,Node*> *this)

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
      goto LAB_0010aedd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aedd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aedd:
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
  if ((code *)PTR__validate_property_00122010 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00122010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* GroupsEditor::_validate_propertyv(PropertyInfo&) const */

void GroupsEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00122010 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* GroupsEditor::_setv(StringName const&, Variant const&) */

undefined8 GroupsEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00122018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00122018 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00122018 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b2a8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00122020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b318) */
/* GroupsEditor::_getv(StringName const&, Variant&) const */

undefined8 GroupsEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00122020 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010b388) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00122020 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x11cc,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11cc,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11cc,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11cc,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11cc,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x11cc,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11cc,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11cc,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11cc,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11cc,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* GroupsEditor::is_class_ptr(void*) const */

ulong GroupsEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  if (in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
      in_RSI == &get_class_ptr_static()::ptr) {
    return CONCAT71(0x11cc,in_RSI == &VBoxContainer::get_class_ptr_static()::ptr ||
                           in_RSI == &get_class_ptr_static()::ptr);
  }
  return (ulong)((uint)CONCAT71(0x11cc,in_RSI == &Container::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11cc,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11cc,in_RSI == &Control::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11cc,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
                 (uint)CONCAT71(0x11cc,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
      if (StringName::configured == '\0') goto LAB_0010b560;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b560:
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
      if (StringName::configured == '\0') goto LAB_0010b5c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b5c0:
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
      if (StringName::configured == '\0') goto LAB_0010b620;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b620:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
      if (StringName::configured == '\0') goto LAB_0010b690;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010b690:
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
LAB_0010b763:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b763;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010b7ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010b7ce:
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
LAB_0010b853:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b853;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010b8be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010b8be:
  return &_get_class_namev()::_class_name_static;
}



/* GroupsEditor::_get_class_namev() const */

undefined8 * GroupsEditor::_get_class_namev(void)

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
LAB_0010b943:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b943;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"GroupsEditor");
      goto LAB_0010b9ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"GroupsEditor");
LAB_0010b9ae:
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
        if (lVar5 != 0) goto LAB_0010bae7;
LAB_0010bc14:
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
        if (lVar5 == 0) goto LAB_0010bc14;
LAB_0010bae7:
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
    if (lVar6 == param_3) goto LAB_0010bec8;
  }
  else {
    ppEVar9 = param_5 + param_2 + param_1;
    if (lVar6 != param_3) goto LAB_0010be83;
LAB_0010bec8:
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
LAB_0010be83:
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
      if (lVar5 == 0) goto LAB_0010c0be;
LAB_0010bfda:
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
      if (lVar5 != 0) goto LAB_0010bfda;
LAB_0010c0be:
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
    if (-1 < cVar3) goto LAB_0010c135;
    if (lVar4 == 0) {
      _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                       "bad comparison function; sorting will be broken",0,0);
LAB_0010c135:
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
    if (param_2 <= param_3) goto LAB_0010c3e1;
LAB_0010c1f7:
    lVar7 = param_3;
LAB_0010c327:
    do {
      pEVar4 = param_4[lVar7];
      lVar8 = *(long *)param_4[param_1];
      if (lVar8 == 0) {
        local_68 = 0;
        lVar8 = *(long *)pEVar4;
        if (lVar8 != 0) goto LAB_0010c27b;
LAB_0010c350:
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
        if (lVar8 == 0) goto LAB_0010c350;
LAB_0010c27b:
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
        goto LAB_0010c327;
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < param_2);
    if (lVar9 < 2) goto LAB_0010c3e1;
  }
  else {
    for (lVar7 = lVar9 + -2 >> 1; adjust_heap(param_1,lVar7,lVar9,param_4[param_1 + lVar7],param_4),
        lVar7 != 0; lVar7 = lVar7 + -1) {
    }
    if (param_3 < param_2) goto LAB_0010c1f7;
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
LAB_0010c3e1:
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
LAB_0010c4c0:
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
LAB_0010c5bf:
    lVar9 = lVar9 + -1;
    ppEVar8 = param_4 + lVar9;
    do {
      lVar7 = *(long *)*ppEVar8;
      if (lVar7 == 0) {
        local_68 = 0;
        lVar7 = *(long *)param_3;
        if (lVar7 != 0) goto LAB_0010c61d;
LAB_0010c700:
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
              if (lVar4 == 0) goto LAB_0010c60d;
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
LAB_0010c60d:
        lVar7 = *(long *)param_3;
        if (lVar7 == 0) goto LAB_0010c700;
LAB_0010c61d:
        pcVar3 = *(char **)(lVar7 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar7 + 0x10) + -0x10);
          if (*(long *)(lVar7 + 0x10) != 0) {
            do {
              lVar4 = *plVar1;
              if (lVar4 == 0) goto LAB_0010c652;
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
LAB_0010c652:
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
      if (-1 < cVar5) goto LAB_0010c7b5;
      if (lVar9 == param_1) goto LAB_0010c790;
      lVar9 = lVar9 + -1;
      ppEVar8 = ppEVar8 + -1;
    } while( true );
  }
  if (param_2 + -1 == local_80) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    goto LAB_0010c5bf;
  }
  goto LAB_0010c7d6;
LAB_0010c790:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_0010c7b5:
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
LAB_0010c7d6:
  local_80 = local_80 + 1;
  goto LAB_0010c4c0;
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



/* GroupsEditor::get_class() const */

void GroupsEditor::get_class(void)

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



/* WARNING: Removing unreachable block (ram,0x0010cc70) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00122028 != Container::_notification) {
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
  if ((code *)PTR__notification_00122028 == Container::_notification) {
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



/* List<Node::GroupInfo, DefaultAllocator>::~List() */

void __thiscall
List<Node::GroupInfo,DefaultAllocator>::~List(List<Node::GroupInfo,DefaultAllocator> *this)

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
    if ((long *)plVar1[4] == plVar4) {
      lVar3 = plVar1[2];
      lVar2 = plVar1[3];
      *plVar4 = lVar3;
      if (plVar1 == (long *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar3;
        lVar3 = plVar1[2];
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x18) = lVar2;
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



/* Callable create_custom_callable_function_pointer<GroupsEditor>(GroupsEditor*, char const*, void
   (GroupsEditor::*)()) */

GroupsEditor *
create_custom_callable_function_pointer<GroupsEditor>
          (GroupsEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011c450;
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



/* void EditorUndoRedoManager::add_do_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_do_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_do_methodp((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void EditorUndoRedoManager::add_undo_method<>(Object*, StringName const&) */

void __thiscall
EditorUndoRedoManager::add_undo_method<>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Callable create_custom_callable_function_pointer<GroupsEditor, Node*>(GroupsEditor*, char const*,
   void (GroupsEditor::*)(Node*)) */

GroupsEditor *
create_custom_callable_function_pointer<GroupsEditor,Node*>
          (GroupsEditor *param_1,char *param_2,_func_void_Node_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011c4e0;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Node_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<EditorValidationPanel>(EditorValidationPanel*,
   char const*, void (EditorValidationPanel::*)()) */

EditorValidationPanel *
create_custom_callable_function_pointer<EditorValidationPanel>
          (EditorValidationPanel *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC15;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011c600;
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



/* WARNING: Removing unreachable block (ram,0x0010d810) */
/* String vformat<StringName, String>(String const&, StringName const, String const) */

undefined8 *
vformat<StringName,String>(undefined8 *param_1,bool *param_2,StringName *param_3,String *param_4)

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



/* WARNING: Removing unreachable block (ram,0x0010def8) */
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
      goto LAB_0010e2bf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010e2bf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010e381;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010e2bf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC85,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e381:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GroupsEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void>::call
          (CallableCustomMethodPointer<GroupsEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010e4df;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010e4df;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e4b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010e5a1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010e4df:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC85,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e5a1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<LineEdit, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<LineEdit,void,bool>::call
          (CallableCustomMethodPointer<LineEdit,void,bool> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_0010e769;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010e769;
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
        uVar4 = _LC86;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0010e82b;
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
LAB_0010e769:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC85,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010e82b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GroupsEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,int>::call
          (CallableCustomMethodPointer<GroupsEditor,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_0010e9e8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_0010e9e8;
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
        uVar4 = _LC87;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010e997. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar6);
          return;
        }
        goto LAB_0010eaaa;
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
LAB_0010e9e8:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC85,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010eaaa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GroupsEditor, void, Ref<InputEvent> >::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>>::call
          (CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  char cVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Object *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_48 = (Object *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar10 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (1 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010eb7e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0010eb7e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC88;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_48 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_48;
        if (pOVar7 != local_48) {
          if (pOVar7 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_0010ec4d:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&InputEvent::typeinfo,0);
            if (pOVar5 != pOVar7) {
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0010ec4d;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0010eb7e;
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
  local_48 = (Object *)0x10e0c2;
  local_40 = 0x15;
  String::parse_latin1((StrRange *)&local_50);
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC85,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010eb7e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Vector2 const&, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton>::call
          (CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton> *this,
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
  CowData<char32_t> aCStack_58 [8];
  CowData<char32_t> local_50 [8];
  undefined8 local_48;
  String local_40 [8];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_40[0] = (String)0x0;
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
            uVar3 = _LC89;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            uVar5 = Variant::operator_cast_to_long(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
            uVar3 = _LC90;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            local_38 = Variant::operator_cast_to_Vector2(*param_1);
            (*pcVar8)((long *)(lVar1 + lVar2),&local_38,uVar5 & 0xffffffff);
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
        goto LAB_0010eef5;
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
  local_48 = 0;
  String::parse_latin1((String *)&local_48,"\', can\'t call method.");
  uitos((ulong)aCStack_58);
  operator+((char *)local_50,(String *)"Invalid Object id \'");
  String::operator+(local_40,(String *)local_50);
  _err_print_error(&_LC85,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_40,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref(aCStack_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_0010eef5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Object*, int, int, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton> *this,
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
      goto LAB_0010f320;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_0010f320;
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
        uVar3 = _LC91;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC92;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC89;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010f2a8:
          uVar3 = _LC88;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0010f2a8;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f2f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0010f41b;
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
LAB_0010f320:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC85,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f41b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<GroupsEditor, void, ObjectID const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&>::call
          (CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

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
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar4 = _LC87;
            if (cVar5 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar4;
            }
            local_48 = (char *)Variant::operator_cast_to_ObjectID(*param_1);
            (*pcVar8)((long *)(lVar1 + lVar2),(String *)&local_48);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_0010f4ee;
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
  _err_print_error(&_LC85,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0010f4ee:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<GroupsEditor, void, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Node*>::call
          (CallableCustomMethodPointer<GroupsEditor,void,Node*> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  long lVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010f8c5;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_0010f8c5;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010f7d0:
          uVar3 = _LC88;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0), lVar7 == 0)) &&
             (pOVar5 != (Object *)0x0)) goto LAB_0010f7d0;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_0010f976;
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
LAB_0010f8c5:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC85,"./core/object/callable_method_pointer.h",0x67,
                     "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                     local_48,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref(local_58);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010f976:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0010fc11:
    local_68 = 0;
LAB_0010fa00:
    lVar5 = *(long *)pEVar1;
    if (lVar5 != 0) goto LAB_0010fa0c;
LAB_0010fbf0:
    local_60 = 0;
  }
  else {
    pcVar2 = *(char **)(lVar5 + 8);
    if (pcVar2 != (char *)0x0) {
      local_68 = 0;
      local_50 = strlen(pcVar2);
      local_58 = pcVar2;
      String::parse_latin1((StrRange *)&local_68);
      goto LAB_0010fa00;
    }
    local_68 = 0;
    if (*(long *)(lVar5 + 0x10) == 0) goto LAB_0010fc11;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar5 + 0x10));
    lVar5 = *(long *)pEVar1;
    if (lVar5 == 0) goto LAB_0010fbf0;
LAB_0010fa0c:
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
    if (cVar3 < '\0') goto LAB_0010fb84;
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
      if (lVar5 == 0) goto LAB_0010fd9d;
LAB_0010fab0:
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
      if (lVar5 != 0) goto LAB_0010fab0;
LAB_0010fd9d:
      local_58 = (char *)0x0;
    }
    cVar3 = String::nocasecmp_to((String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    ppEVar4 = param_1;
    if (cVar3 < '\0') goto LAB_0010fb84;
    pEVar1 = *param_2;
    lVar5 = *(long *)*param_3;
    if (lVar5 == 0) {
      local_60 = 0;
      lVar5 = *(long *)pEVar1;
      if (lVar5 == 0) goto LAB_0010fdc6;
LAB_0010fb39:
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
      if (lVar5 != 0) goto LAB_0010fb39;
LAB_0010fdc6:
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
LAB_0010fb84:
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
LAB_00110813:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_0010ff63:
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
LAB_0010ffec:
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
LAB_00110084:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x001100d0;
LAB_00110566:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_00110576;
            goto LAB_00110713;
          }
LAB_00110788:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_0011069f:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x00110751;
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
  if (param_4 != 0) goto LAB_001107ec;
  goto LAB_00110813;
code_r0x001100d0:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_0011010c:
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
LAB_00110192:
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
LAB_00110213:
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
LAB_00110291:
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
LAB_00110307:
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
                                      if (lVar1 < 0x11) goto LAB_0011049c;
                                      goto LAB_00110307;
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
                                if (lVar1 < 0x11) goto joined_r0x001105b0;
                                goto LAB_00110291;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_0011049c:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x0011052b;
                          goto LAB_00110213;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x001105b0:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x001105f0;
                    goto LAB_00110192;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x0011052b:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_00110566;
              goto LAB_0011010c;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x001105f0:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_0011069f;
        goto LAB_00110084;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_00110713:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_0010ffec;
    goto joined_r0x00110751;
  }
LAB_00110576:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_00110788;
  goto LAB_00110084;
joined_r0x00110751:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_001107ec:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_0010ff63;
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
    goto LAB_001110dc;
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
      if ((long)pEVar7 < 0x11) goto LAB_001109cb;
      pEVar14 = pEVar7;
    } while (lVar13 != 0);
    SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
    ::partial_sort(0,(long)pEVar7,(long)pEVar7,__src);
LAB_001109cb:
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
        if (lVar11 + 1 == 0x10) goto LAB_00110b2d;
      }
      memmove(__src + 1,__src,lVar11 * 8);
      *__src = pEVar14;
      lVar13 = lVar11 + 1;
    } while (lVar11 + 1 != 0x10);
LAB_00110b2d:
    pEVar14 = (Element *)(lVar11 + 1);
LAB_00110b60:
    pEVar7 = __src[(long)pEVar14];
    ppEVar9 = __src + (long)pEVar14;
    pEVar12 = pEVar14;
    do {
      pEVar12 = pEVar12 + -1;
      lVar13 = *(long *)ppEVar9[-1];
      if (lVar13 == 0) {
        local_68 = 0;
        lVar13 = *(long *)pEVar7;
        if (lVar13 == 0) goto LAB_00110ca6;
LAB_00110bc2:
        pcVar3 = *(char **)(lVar13 + 8);
        local_60 = 0;
        if (pcVar3 == (char *)0x0) {
          plVar1 = (long *)(*(long *)(lVar13 + 0x10) + -0x10);
          if (*(long *)(lVar13 + 0x10) != 0) {
            do {
              lVar11 = *plVar1;
              if (lVar11 == 0) goto LAB_00110bf7;
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
              if (lVar11 == 0) goto LAB_00110bb5;
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
LAB_00110bb5:
        lVar13 = *(long *)pEVar7;
        if (lVar13 != 0) goto LAB_00110bc2;
LAB_00110ca6:
        local_60 = 0;
      }
LAB_00110bf7:
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
      if (-1 < cVar4) goto LAB_00110dfa;
      if (pEVar12 == (Element *)0x0) goto LAB_00110dd0;
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
      pEVar12 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<NoCaseComparator>,true>
      ::unguarded_linear_insert((long)pEVar7,pEVar14,__src);
      pEVar14 = *__src;
      pEVar7 = pEVar12;
      if (pEVar5 == pEVar12) goto LAB_00110e26;
    }
    __n = (long)pEVar7 * 8;
    pEVar7 = pEVar7 + 1;
    memmove(__src + 1,__src,__n);
    *__src = pEVar14;
  } while (pEVar5 != pEVar7);
LAB_00110e26:
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
LAB_001110dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00110dd0:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00110dfa:
  pEVar14 = pEVar14 + 1;
  *ppEVar9 = pEVar7;
  if (pEVar5 == pEVar14) goto code_r0x00110e10;
  goto LAB_00110b60;
code_r0x00110e10:
  pEVar14 = *__src;
  goto LAB_00110e26;
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
    if (cVar5 != '\0') goto LAB_0011135b;
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
      if (cVar5 != '\0') goto LAB_0011135b;
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
        if (cVar5 != '\0') goto LAB_0011135b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_00111538;
    }
  }
LAB_0011135b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00111538:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011164b;
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
      if (cVar5 != '\0') goto LAB_0011164b;
    }
    cVar5 = String::operator==(param_1,"Control");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = CanvasItem::is_class((CanvasItem *)this,param_1);
        return uVar6;
      }
      goto LAB_0011174e;
    }
  }
LAB_0011164b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011174e:
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
              if ((code *)PTR__bind_methods_00122040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00122030 !=
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
      if ((code *)PTR__bind_methods_00122038 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00122040 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00122030 !=
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
      if ((code *)PTR__bind_methods_00122038 != Container::_bind_methods) {
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
      uVar2 = (&hash_table_size_primes)[*(uint *)(this + 0x38)];
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
        if (pvVar5 == (void *)0x0) goto LAB_001124d5;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_001124d5:
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
  local_78 = &_LC97;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC97;
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
      goto LAB_0011268c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011268c:
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
      goto LAB_001128f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001128f1:
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
  if ((code *)PTR__get_property_list_00122048 != Object::_get_property_list) {
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
      goto LAB_00112bc1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112bc1:
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
  if ((code *)PTR__get_property_list_00122050 != CanvasItem::_get_property_list) {
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
      goto LAB_00112e91;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00112e91:
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
      goto LAB_00113141;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113141:
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
      goto LAB_001133f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001133f1:
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



/* GroupsEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall GroupsEditor::_get_property_listv(GroupsEditor *this,List *param_1,bool param_2)

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
  local_78 = "GroupsEditor";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "GroupsEditor";
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
      goto LAB_001136a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001136a1:
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
  StringName::StringName((StringName *)&local_78,"GroupsEditor",false);
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
      goto LAB_00113951;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00113951:
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



/* GroupsEditor::is_class(String const&) const */

undefined8 __thiscall GroupsEditor::is_class(GroupsEditor *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00113b8b;
  }
  cVar5 = String::operator==(param_1,"GroupsEditor");
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
      if (cVar5 != '\0') goto LAB_00113b8b;
    }
    cVar5 = String::operator==(param_1,"VBoxContainer");
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
        if (cVar5 != '\0') goto LAB_00113b8b;
      }
      cVar5 = String::operator==(param_1,"BoxContainer");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Container::is_class((Container *)this,param_1);
          return uVar6;
        }
        goto LAB_00113d78;
      }
    }
  }
LAB_00113b8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113d78:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00113e7b;
  }
  cVar5 = String::operator==(param_1,"HBoxContainer");
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
      if (cVar5 != '\0') goto LAB_00113e7b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00113f7e;
    }
  }
LAB_00113e7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113f7e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VBoxContainer::is_class(String const&) const */

undefined8 __thiscall VBoxContainer::is_class(VBoxContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_0011408b;
  }
  cVar5 = String::operator==(param_1,"VBoxContainer");
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
      if (cVar5 != '\0') goto LAB_0011408b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011418e;
    }
  }
LAB_0011408b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011418e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<List<Node::GroupInfo, DefaultAllocator>::Element*, List<Node::GroupInfo,
   DefaultAllocator>::AuxiliaryComparator<_GroupInfoComparator>, true>::introsort(long, long,
   List<Node::GroupInfo, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<Node::GroupInfo,DefaultAllocator>::Element*,List<Node::GroupInfo,DefaultAllocator>::AuxiliaryComparator<_GroupInfoComparator>,true>
     ::introsort(long param_1,long param_2,Element **param_3,long param_4)

{
  long *plVar1;
  Element **ppEVar2;
  Element *pEVar3;
  Element *pEVar4;
  char *pcVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  Element **ppEVar10;
  Element **ppEVar11;
  long lVar12;
  long lVar13;
  Element **ppEVar14;
  long in_FS_OFFSET;
  long local_d0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_88;
  Element **local_80;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  lVar9 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar9) {
    local_b8 = param_2;
    if (param_4 != 0) {
      ppEVar14 = param_3 + param_1;
      local_b0 = param_2;
      local_a8 = param_4;
LAB_00114230:
      local_a8 = local_a8 + -1;
      ppEVar10 = param_3 + (lVar9 >> 1) + param_1;
      ppEVar2 = param_3 + local_b0 + -1;
      cVar6 = _GroupInfoComparator::operator()((GroupInfo *)*ppEVar14,(GroupInfo *)*ppEVar10);
      if (cVar6 == '\0') {
        cVar6 = _GroupInfoComparator::operator()((GroupInfo *)*ppEVar14,(GroupInfo *)*ppEVar2);
        ppEVar11 = ppEVar14;
        if (cVar6 != '\0') goto LAB_00114295;
        cVar6 = _GroupInfoComparator::operator()((GroupInfo *)*ppEVar10,(GroupInfo *)*ppEVar2);
      }
      else {
        cVar6 = _GroupInfoComparator::operator()((GroupInfo *)*ppEVar10,(GroupInfo *)*ppEVar2);
        ppEVar11 = ppEVar10;
        if (cVar6 != '\0') goto LAB_00114295;
        cVar6 = _GroupInfoComparator::operator()((GroupInfo *)*ppEVar14,(GroupInfo *)*ppEVar2);
        ppEVar10 = ppEVar14;
      }
      ppEVar11 = ppEVar10;
      if (cVar6 != '\0') {
        ppEVar11 = ppEVar2;
      }
LAB_00114295:
      pEVar3 = *ppEVar11;
      lVar9 = local_b0;
      local_b8 = param_1;
LAB_001142c6:
      pEVar4 = param_3[local_b8];
      lVar12 = *(long *)pEVar3;
      if (lVar12 == 0) {
        local_60 = 0;
      }
      else {
        pcVar5 = *(char **)(lVar12 + 8);
        local_60 = 0;
        if (pcVar5 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar12 + 0x10));
        }
        else {
          local_50 = strlen(pcVar5);
          local_58 = pcVar5;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      lVar12 = *(long *)pEVar4;
      if (lVar12 == 0) {
        local_68 = 0;
      }
      else {
        pcVar5 = *(char **)(lVar12 + 8);
        local_68 = 0;
        if (pcVar5 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar12 + 0x10));
        }
        else {
          local_50 = strlen(pcVar5);
          local_58 = pcVar5;
          String::parse_latin1((StrRange *)&local_68);
        }
      }
      cVar6 = String::operator<((String *)&local_68,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar6 == '\0') {
LAB_00114392:
        lVar9 = lVar9 + -1;
        ppEVar10 = param_3 + lVar9;
        do {
          lVar12 = *(long *)*ppEVar10;
          if (lVar12 == 0) {
            local_60 = 0;
            lVar12 = *(long *)pEVar3;
            if (lVar12 == 0) goto LAB_001144fe;
LAB_001143ff:
            pcVar5 = *(char **)(lVar12 + 8);
            local_68 = 0;
            if (pcVar5 == (char *)0x0) {
              if (*(long *)(lVar12 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar12 + 0x10));
              }
            }
            else {
              local_50 = strlen(pcVar5);
              local_58 = pcVar5;
              String::parse_latin1((StrRange *)&local_68);
            }
          }
          else {
            pcVar5 = *(char **)(lVar12 + 8);
            local_60 = 0;
            if (pcVar5 == (char *)0x0) {
              if (*(long *)(lVar12 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar12 + 0x10));
              }
            }
            else {
              local_50 = strlen(pcVar5);
              local_58 = pcVar5;
              String::parse_latin1((StrRange *)&local_60);
            }
            lVar12 = *(long *)pEVar3;
            if (lVar12 != 0) goto LAB_001143ff;
LAB_001144fe:
            local_68 = 0;
          }
          cVar6 = String::operator<((String *)&local_68,(String *)&local_60);
          lVar12 = local_68;
          if (local_68 != 0) {
            LOCK();
            plVar1 = (long *)(local_68 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_68 = 0;
              Memory::free_static((void *)(lVar12 + -0x10),false);
            }
          }
          lVar12 = local_60;
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
          if (cVar6 == '\0') goto joined_r0x00114608;
          if (param_1 == lVar9) goto LAB_00114550;
          lVar9 = lVar9 + -1;
          ppEVar10 = ppEVar10 + -1;
        } while( true );
      }
      if (local_b0 + -1 == local_b8) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        goto LAB_00114392;
      }
      goto LAB_001142c2;
    }
LAB_001146e7:
    lVar12 = lVar9 + -2 >> 1;
    local_80 = param_3 + param_1 + lVar12;
    local_88 = lVar12 * 2 + 2;
    do {
      pEVar3 = *local_80;
      lVar8 = local_88;
      local_b0 = lVar12;
      if (local_88 < lVar9) {
        do {
          pEVar4 = param_3[param_1 + lVar8];
          lVar7 = *(long *)param_3[param_1 + lVar8 + -1];
          if (lVar7 == 0) {
            local_60 = 0;
            lVar7 = *(long *)pEVar4;
            if (lVar7 == 0) goto LAB_00114923;
LAB_001147d8:
            pcVar5 = *(char **)(lVar7 + 8);
            local_68 = 0;
            if (pcVar5 == (char *)0x0) {
              if (*(long *)(lVar7 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar7 + 0x10));
              }
            }
            else {
              local_50 = strlen(pcVar5);
              local_58 = pcVar5;
              String::parse_latin1((StrRange *)&local_68);
            }
          }
          else {
            pcVar5 = *(char **)(lVar7 + 8);
            if (pcVar5 == (char *)0x0) {
              local_60 = 0;
              if (*(long *)(lVar7 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 0x10));
              }
            }
            else {
              local_60 = 0;
              local_50 = strlen(pcVar5);
              local_58 = pcVar5;
              String::parse_latin1((StrRange *)&local_60);
            }
            lVar7 = *(long *)pEVar4;
            if (lVar7 != 0) goto LAB_001147d8;
LAB_00114923:
            local_68 = 0;
          }
          cVar6 = String::operator<((String *)&local_68,(String *)&local_60);
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
          lVar13 = lVar8;
          lVar7 = lVar8 + -1;
          ppEVar14 = param_3 + param_1 + lVar8 + -1;
          if (cVar6 == '\0') {
            lVar13 = lVar8 + 1;
            lVar7 = lVar8;
            ppEVar14 = param_3 + param_1 + lVar8;
          }
          lVar8 = lVar13 * 2;
          param_3[local_b0 + param_1] = *ppEVar14;
          local_b0 = lVar7;
        } while (lVar8 < lVar9);
        ppEVar10 = ppEVar14;
        if (lVar8 == lVar9) goto LAB_00114e22;
LAB_0011499f:
        lVar8 = lVar7 + -1;
        if (lVar7 <= lVar12) goto LAB_0011512e;
        do {
          lVar13 = lVar8 >> 1;
          ppEVar14 = param_3 + param_1 + lVar13;
          pEVar4 = *ppEVar14;
          lVar8 = *(long *)pEVar3;
          if (lVar8 == 0) {
            local_60 = 0;
            lVar8 = *(long *)pEVar4;
            if (lVar8 == 0) goto LAB_00114b40;
LAB_00114a17:
            pcVar5 = *(char **)(lVar8 + 8);
            local_68 = 0;
            if (pcVar5 == (char *)0x0) {
              if (*(long *)(lVar8 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar8 + 0x10));
              }
            }
            else {
              local_50 = strlen(pcVar5);
              local_58 = pcVar5;
              String::parse_latin1((StrRange *)&local_68);
            }
          }
          else {
            pcVar5 = *(char **)(lVar8 + 8);
            local_60 = 0;
            if (pcVar5 == (char *)0x0) {
              if (*(long *)(lVar8 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar8 + 0x10));
              }
            }
            else {
              local_50 = strlen(pcVar5);
              local_58 = pcVar5;
              String::parse_latin1((StrRange *)&local_60);
            }
            lVar8 = *(long *)pEVar4;
            if (lVar8 != 0) goto LAB_00114a17;
LAB_00114b40:
            local_68 = 0;
          }
          cVar6 = String::operator<((String *)&local_68,(String *)&local_60);
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
          if (cVar6 == '\0') {
            param_3[lVar7 + param_1] = pEVar3;
            goto joined_r0x00114bae;
          }
          param_3[lVar7 + param_1] = *ppEVar14;
          lVar8 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
          lVar7 = lVar13;
        } while (lVar12 < lVar13);
        *ppEVar14 = pEVar3;
joined_r0x00114bae:
        if (lVar12 == 0) goto LAB_00114bda;
      }
      else {
        ppEVar10 = local_80;
        ppEVar14 = local_80;
        if (local_88 == lVar9) {
LAB_00114e22:
          lVar7 = lVar8 + -1;
          ppEVar14 = param_3 + param_1 + lVar7;
          *ppEVar10 = *ppEVar14;
          goto LAB_0011499f;
        }
LAB_0011512e:
        *ppEVar14 = pEVar3;
      }
      local_80 = local_80 + -1;
      lVar12 = lVar12 + -1;
      local_88 = local_88 + -2;
    } while( true );
  }
LAB_001146b9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00114550:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
joined_r0x00114608:
  if (lVar9 <= local_b8) goto LAB_0011460e;
  pEVar4 = param_3[local_b8];
  param_3[local_b8] = *ppEVar10;
  *ppEVar10 = pEVar4;
LAB_001142c2:
  local_b8 = local_b8 + 1;
  goto LAB_001142c6;
LAB_0011460e:
  introsort(local_b8,local_b0,param_3,local_a8);
  lVar9 = local_b8 - param_1;
  if (lVar9 < 0x11) goto LAB_001146b9;
  local_b0 = local_b8;
  if (local_a8 == 0) goto LAB_001146e7;
  goto LAB_00114230;
LAB_00114bda:
  ppEVar14 = param_3 + param_1;
  lVar9 = (local_b8 + -1) - param_1;
LAB_00114c20:
  pEVar3 = ppEVar14[lVar9];
  ppEVar14[lVar9] = *ppEVar14;
  if (lVar9 < 3) {
    if (lVar9 != 2) goto code_r0x001146b1;
    lVar12 = param_1 + 1;
    lVar8 = 0;
    *ppEVar14 = param_3[lVar12];
  }
  else {
    local_d0 = 0;
    lVar12 = 2;
    do {
      pEVar4 = param_3[param_1 + lVar12];
      lVar8 = *(long *)param_3[param_1 + lVar12 + -1];
      if (lVar8 == 0) {
        local_60 = 0;
        lVar8 = *(long *)pEVar4;
        if (lVar8 == 0) goto LAB_00114e0b;
LAB_00114cc0:
        pcVar5 = *(char **)(lVar8 + 8);
        local_68 = 0;
        if (pcVar5 == (char *)0x0) {
          if (*(long *)(lVar8 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar8 + 0x10));
          }
        }
        else {
          local_50 = strlen(pcVar5);
          local_58 = pcVar5;
          String::parse_latin1((StrRange *)&local_68);
        }
      }
      else {
        pcVar5 = *(char **)(lVar8 + 8);
        if (pcVar5 == (char *)0x0) {
          local_60 = 0;
          if (*(long *)(lVar8 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar8 + 0x10));
          }
        }
        else {
          local_60 = 0;
          local_50 = strlen(pcVar5);
          local_58 = pcVar5;
          String::parse_latin1((StrRange *)&local_60);
        }
        lVar8 = *(long *)pEVar4;
        if (lVar8 != 0) goto LAB_00114cc0;
LAB_00114e0b:
        local_68 = 0;
      }
      cVar6 = String::operator<((String *)&local_68,(String *)&local_60);
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
      ppEVar10 = param_3 + param_1 + lVar12 + -1;
      lVar8 = lVar12;
      lVar7 = lVar12 + -1;
      if (cVar6 == '\0') {
        lVar8 = lVar12 + 1;
        ppEVar10 = param_3 + param_1 + lVar12;
        lVar7 = lVar12;
      }
      lVar12 = lVar8 * 2;
      param_3[local_d0 + param_1] = *ppEVar10;
      local_d0 = lVar7;
    } while (lVar12 < lVar9);
    if (lVar12 == lVar9) {
      lVar12 = lVar9 + -1 + param_1;
      lVar8 = lVar9 + -2 >> 1;
      *ppEVar10 = param_3[lVar12];
    }
    else {
      lVar12 = param_1 + lVar7;
      lVar8 = (lVar7 + -1) / 2;
      if (lVar7 < 1) {
LAB_001150cd:
        lVar9 = lVar9 + -1;
        *ppEVar10 = pEVar3;
        goto LAB_00114c20;
      }
    }
  }
  do {
    ppEVar2 = param_3 + param_1 + lVar8;
    pEVar4 = *ppEVar2;
    lVar7 = *(long *)pEVar3;
    if (lVar7 == 0) {
      local_60 = 0;
      lVar7 = *(long *)pEVar4;
      if (lVar7 == 0) goto LAB_00115066;
LAB_00114f3e:
      pcVar5 = *(char **)(lVar7 + 8);
      local_68 = 0;
      if (pcVar5 == (char *)0x0) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar7 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar5);
        local_58 = pcVar5;
        String::parse_latin1((StrRange *)&local_68);
      }
    }
    else {
      pcVar5 = *(char **)(lVar7 + 8);
      local_60 = 0;
      if (pcVar5 == (char *)0x0) {
        if (*(long *)(lVar7 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar7 + 0x10));
        }
      }
      else {
        local_50 = strlen(pcVar5);
        local_58 = pcVar5;
        String::parse_latin1((StrRange *)&local_60);
      }
      lVar7 = *(long *)pEVar4;
      if (lVar7 != 0) goto LAB_00114f3e;
LAB_00115066:
      local_68 = 0;
    }
    cVar6 = String::operator<((String *)&local_68,(String *)&local_60);
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
    ppEVar10 = param_3 + lVar12;
    if (cVar6 == '\0') goto LAB_001150cd;
    *ppEVar10 = *ppEVar2;
    if (lVar8 == 0) goto LAB_001150df;
    lVar12 = param_1 + lVar8;
    lVar8 = (lVar8 + -1) / 2;
  } while( true );
code_r0x001146b1:
  *ppEVar14 = pEVar3;
  goto LAB_001146b9;
LAB_001150df:
  *ppEVar2 = pEVar3;
  lVar9 = lVar9 + -1;
  goto LAB_00114c20;
}



/* void List<Node::GroupInfo, DefaultAllocator>::sort_custom<_GroupInfoComparator>() */

void __thiscall
List<Node::GroupInfo,DefaultAllocator>::sort_custom<_GroupInfoComparator>
          (List<Node::GroupInfo,DefaultAllocator> *this)

{
  long *plVar1;
  size_t __n;
  int iVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char cVar5;
  Element *pEVar6;
  Element **__src;
  Element **ppEVar7;
  long lVar8;
  Element *pEVar9;
  Element *pEVar10;
  Element *pEVar11;
  long lVar12;
  Element **ppEVar13;
  long in_FS_OFFSET;
  long local_68;
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)this != 0) {
    iVar2 = *(int *)(*(long *)this + 0x10);
    pEVar6 = (Element *)(long)iVar2;
    if (1 < iVar2) {
      __src = (Element **)Memory::alloc_static((long)pEVar6 * 8,true);
      if (__src == (Element **)0x0) {
        _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,
                         "Parameter \"mem\" is null.",0,0);
      }
      else {
        __src[-1] = pEVar6;
      }
      if (*(long **)this != (long *)0x0) {
        ppEVar7 = __src;
        for (pEVar9 = (Element *)**(long **)this; pEVar9 != (Element *)0x0;
            pEVar9 = *(Element **)(pEVar9 + 0x10)) {
          *ppEVar7 = pEVar9;
          ppEVar7 = ppEVar7 + 1;
        }
      }
      lVar8 = 0;
      pEVar9 = pEVar6;
      do {
        pEVar9 = (Element *)((long)pEVar9 >> 1);
        lVar8 = lVar8 + 1;
      } while (pEVar9 != (Element *)0x1);
      SortArray<List<Node::GroupInfo,DefaultAllocator>::Element*,List<Node::GroupInfo,DefaultAllocator>::AuxiliaryComparator<_GroupInfoComparator>,true>
      ::introsort(0,(long)pEVar6,__src,lVar8 * 2);
      if (0x10 < (long)pEVar6) {
        lVar8 = 1;
LAB_001152c7:
        do {
          lVar12 = lVar8;
          pEVar9 = __src[lVar12];
          lVar8 = *(long *)*__src;
          if (lVar8 == 0) {
            local_60 = 0;
          }
          else {
            pcVar3 = *(char **)(lVar8 + 8);
            local_60 = 0;
            if (pcVar3 == (char *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar8 + 0x10));
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_60);
            }
          }
          lVar8 = *(long *)pEVar9;
          if (lVar8 == 0) {
            local_68 = 0;
          }
          else {
            pcVar3 = *(char **)(lVar8 + 8);
            local_68 = 0;
            if (pcVar3 == (char *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar8 + 0x10));
            }
            else {
              local_50 = strlen(pcVar3);
              local_58 = pcVar3;
              String::parse_latin1((StrRange *)&local_68);
            }
          }
          cVar5 = String::operator<((String *)&local_68,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if (cVar5 == '\0') {
            ppEVar7 = __src + lVar12;
            do {
              lVar8 = *(long *)ppEVar7[-1];
              if (lVar8 == 0) {
                local_60 = 0;
                lVar8 = *(long *)pEVar9;
                if (lVar8 == 0) goto LAB_00115469;
LAB_001153d0:
                pcVar3 = *(char **)(lVar8 + 8);
                local_68 = 0;
                if (pcVar3 == (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar8 + 0x10));
                }
                else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange *)&local_68);
                }
              }
              else {
                pcVar3 = *(char **)(lVar8 + 8);
                local_60 = 0;
                if (pcVar3 == (char *)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar8 + 0x10));
                }
                else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange *)&local_60);
                }
                lVar8 = *(long *)pEVar9;
                if (lVar8 != 0) goto LAB_001153d0;
LAB_00115469:
                local_68 = 0;
              }
              cVar5 = String::operator<((String *)&local_68,(String *)&local_60);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if (cVar5 == '\0') goto LAB_0011554a;
              ppEVar13 = ppEVar7 + -1;
              if (__src == ppEVar13) goto LAB_00115520;
              *ppEVar7 = *ppEVar13;
              ppEVar7 = ppEVar13;
            } while( true );
          }
          memmove(__src + 1,__src,lVar12 * 8);
          *__src = pEVar9;
          lVar8 = lVar12 + 1;
        } while (lVar12 + 1 != 0x10);
        goto LAB_00115560;
      }
      pEVar9 = *__src;
      pEVar11 = (Element *)0x1;
LAB_00115742:
      do {
        lVar8 = *(long *)pEVar9;
        pEVar9 = __src[(long)pEVar11];
        if (lVar8 == 0) {
          local_60 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar8 + 8);
          local_60 = 0;
          if (pcVar3 == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar8 + 0x10));
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_60);
          }
        }
        lVar8 = *(long *)pEVar9;
        if (lVar8 == 0) {
          local_68 = 0;
        }
        else {
          pcVar3 = *(char **)(lVar8 + 8);
          local_68 = 0;
          if (pcVar3 == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar8 + 0x10));
          }
          else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange *)&local_68);
          }
        }
        cVar5 = String::operator<((String *)&local_68,(String *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if (cVar5 == '\0') {
          ppEVar7 = __src + (long)pEVar11;
          do {
            lVar8 = *(long *)ppEVar7[-1];
            if (lVar8 == 0) {
              local_60 = 0;
              lVar8 = *(long *)pEVar9;
              if (lVar8 == 0) goto LAB_001158e7;
LAB_00115851:
              pcVar3 = *(char **)(lVar8 + 8);
              local_68 = 0;
              if (pcVar3 == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)(lVar8 + 0x10));
              }
              else {
                local_50 = strlen(pcVar3);
                local_58 = pcVar3;
                String::parse_latin1((StrRange *)&local_68);
              }
            }
            else {
              pcVar3 = *(char **)(lVar8 + 8);
              local_60 = 0;
              if (pcVar3 == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar8 + 0x10));
              }
              else {
                local_50 = strlen(pcVar3);
                local_58 = pcVar3;
                String::parse_latin1((StrRange *)&local_60);
              }
              lVar8 = *(long *)pEVar9;
              if (lVar8 != 0) goto LAB_00115851;
LAB_001158e7:
              local_68 = 0;
            }
            cVar5 = String::operator<((String *)&local_68,(String *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if (cVar5 == '\0') goto LAB_001159b2;
            if (__src + 1 == ppEVar7) goto LAB_00115980;
            *ppEVar7 = ppEVar7[-1];
            ppEVar7 = ppEVar7 + -1;
          } while( true );
        }
        __n = (long)pEVar11 * 8;
        pEVar11 = pEVar11 + 1;
        memmove(__src + 1,__src,__n);
        *__src = pEVar9;
      } while (pEVar6 != pEVar11);
      goto LAB_00115a7d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00115b64:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00115520:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_0011554a:
  *ppEVar7 = pEVar9;
  lVar8 = lVar12 + 1;
  if (lVar12 + 1 == 0x10) goto LAB_00115560;
  goto LAB_001152c7;
LAB_00115560:
  pEVar9 = (Element *)(lVar12 + 1);
LAB_00115580:
  pEVar11 = __src[(long)pEVar9];
  ppEVar7 = __src + (long)pEVar9;
  pEVar10 = pEVar9;
  do {
    pEVar10 = pEVar10 + -1;
    lVar8 = *(long *)ppEVar7[-1];
    if (lVar8 == 0) {
      local_60 = 0;
      lVar8 = *(long *)pEVar11;
      if (lVar8 == 0) goto LAB_001156c6;
LAB_001155e2:
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
    }
    else {
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
      lVar8 = *(long *)pEVar11;
      if (lVar8 != 0) goto LAB_001155e2;
LAB_001156c6:
      local_68 = 0;
    }
    cVar5 = String::operator<((String *)&local_68,(String *)&local_60);
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
    if (cVar5 == '\0') goto LAB_00115a5a;
    if (pEVar10 == (Element *)0x0) break;
    *ppEVar7 = ppEVar7[-1];
    ppEVar7 = ppEVar7 + -1;
  } while( true );
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_00115a5a:
  pEVar9 = pEVar9 + 1;
  *ppEVar7 = pEVar11;
  if (pEVar6 == pEVar9) goto code_r0x00115a70;
  goto LAB_00115580;
code_r0x00115a70:
  pEVar9 = *__src;
LAB_00115a7d:
  puVar4 = *(undefined8 **)this;
  *puVar4 = pEVar9;
  *(long *)(pEVar9 + 0x18) = 0;
  *(Element **)(*__src + 0x10) = __src[1];
  pEVar9 = __src[(long)(pEVar6 + -1)];
  puVar4[1] = pEVar9;
  *(Element **)(pEVar9 + 0x18) = __src[(long)(pEVar6 + -2)];
  *(undefined8 *)(__src[(long)(pEVar6 + -1)] + 0x10) = 0;
  if (iVar2 != 2) {
    ppEVar7 = __src;
    do {
      ppEVar13 = ppEVar7 + 1;
      *(Element **)(ppEVar7[1] + 0x18) = *ppEVar7;
      *(Element **)(*ppEVar13 + 0x10) = ppEVar7[2];
      ppEVar7 = ppEVar13;
    } while (__src + (iVar2 - 2) != ppEVar13);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Memory::free_static(__src,true);
    return;
  }
  goto LAB_00115b64;
LAB_00115980:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_001159b2:
  *ppEVar7 = pEVar9;
  pEVar11 = pEVar11 + 1;
  pEVar9 = *__src;
  if (pEVar6 == pEVar11) goto LAB_00115a7d;
  goto LAB_00115742;
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



/* HashMap<StringName, bool, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
::_lookup_pos(HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
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
    uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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



/* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::_lookup_pos(StringName const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
::_lookup_pos(HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
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
    uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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



/* MethodBind* create_method_bind<GroupsEditor>(void (GroupsEditor::*)()) */

MethodBind * create_method_bind<GroupsEditor>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0011c960;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "GroupsEditor";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<GroupsEditor, String const&>(void (GroupsEditor::*)(String
   const&)) */

MethodBind * create_method_bind<GroupsEditor,String_const&>(_func_void_String_ptr *param_1)

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
  *(_func_void_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011c9c0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "GroupsEditor";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<GroupsEditor, String const&, String const&>(void
   (GroupsEditor::*)(String const&, String const&)) */

MethodBind *
create_method_bind<GroupsEditor,String_const&,String_const&>
          (_func_void_String_ptr_String_ptr *param_1)

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
  *(_func_void_String_ptr_String_ptr **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ca20;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GroupsEditor";
  local_30 = 0xc;
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



/* MethodBind* create_method_bind<GroupsEditor, String const&, bool>(void (GroupsEditor::*)(String
   const&, bool)) */

MethodBind *
create_method_bind<GroupsEditor,String_const&,bool>(_func_void_String_ptr_bool *param_1)

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
  *(_func_void_String_ptr_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0011ca80;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 2;
  local_40 = 0;
  local_38 = "GroupsEditor";
  local_30 = 0xc;
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



/* GroupsEditor::_initialize_classv() */

void GroupsEditor::_initialize_classv(void)

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
                if ((code *)PTR__bind_methods_00122040 != Node::_bind_methods) {
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
              if ((code *)PTR__bind_compatibility_methods_00122030 !=
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
        if ((code *)PTR__bind_methods_00122038 != Container::_bind_methods) {
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
    local_58 = "GroupsEditor";
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HashMap<StringName, bool, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
::_resize_and_rehash
          (HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
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
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
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
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
/* HashMap<StringName, bool, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
::operator[](HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  ulong __n;
  long lVar3;
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
  char cVar21;
  uint uVar22;
  uint uVar23;
  undefined8 *puVar24;
  long lVar25;
  undefined8 uVar26;
  void *__s_00;
  ulong uVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  ulong uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  undefined8 *puVar35;
  long in_FS_OFFSET;
  bool bVar36;
  uint local_98;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  undefined1 local_50;
  long local_40;
  
  lVar25 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar31 = CONCAT44(0,uVar23);
  if (lVar25 == 0) {
LAB_001170b0:
    uVar23 = (uint)uVar31;
    uVar27 = uVar31 * 4;
    __n = uVar31 * 8;
    uVar26 = Memory::alloc_static(uVar27,false);
    *(undefined8 *)(this + 0x10) = uVar26;
    __s_00 = (void *)Memory::alloc_static(__n,false);
    *(void **)(this + 8) = __s_00;
    if (uVar23 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + __n)) && (__s_00 < (void *)((long)__s + uVar27))) {
        uVar27 = 0;
        do {
          *(undefined4 *)((long)__s + uVar27 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar27 * 8) = 0;
          uVar27 = uVar27 + 1;
        } while (uVar31 != uVar27);
      }
      else {
        memset(__s,0,uVar27);
        memset(__s_00,0,__n);
      }
    }
  }
  else if (*(int *)(this + 0x2c) != 0) {
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    if (*(long *)param_1 == 0) {
      uVar22 = StringName::get_empty_hash();
      lVar25 = *(long *)(this + 8);
    }
    else {
      uVar22 = *(uint *)(*(long *)param_1 + 0x20);
    }
    if (uVar22 == 0) {
      uVar22 = 1;
    }
    auVar5._8_8_ = 0;
    auVar5._0_8_ = (ulong)uVar22 * lVar3;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar31;
    lVar29 = SUB168(auVar5 * auVar13,8);
    uVar32 = *(uint *)(*(long *)(this + 0x10) + lVar29 * 4);
    uVar33 = SUB164(auVar5 * auVar13,8);
    if (uVar32 != 0) {
      uVar34 = 0;
      do {
        if ((uVar22 == uVar32) &&
           (*(long *)(*(long *)(lVar25 + lVar29 * 8) + 0x10) == *(long *)param_1)) {
          puVar24 = *(undefined8 **)(lVar25 + (ulong)uVar33 * 8);
          goto LAB_00117045;
        }
        uVar34 = uVar34 + 1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)(uVar33 + 1) * lVar3;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar31;
        lVar29 = SUB168(auVar6 * auVar14,8);
        uVar32 = *(uint *)(*(long *)(this + 0x10) + lVar29 * 4);
        uVar33 = SUB164(auVar6 * auVar14,8);
      } while ((uVar32 != 0) &&
              (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar32 * lVar3, auVar15._8_8_ = 0,
              auVar15._0_8_ = uVar31, auVar8._8_8_ = 0,
              auVar8._0_8_ = (ulong)((uVar33 + uVar23) - SUB164(auVar7 * auVar15,8)) * lVar3,
              auVar16._8_8_ = 0, auVar16._0_8_ = uVar31, uVar34 <= SUB164(auVar8 * auVar16,8)));
    }
    uVar23 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    uVar31 = (ulong)uVar23;
    if (lVar25 == 0) goto LAB_001170b0;
  }
  local_6c = 0;
  cVar21 = _lookup_pos(this,param_1,&local_6c);
  if (cVar21 != '\0') {
    puVar24 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_6c * 8);
    *(undefined1 *)(puVar24 + 3) = 0;
    goto LAB_00117045;
  }
  if ((float)uVar23 * __LC107 < (float)(*(int *)(this + 0x2c) + 1)) {
    if (*(int *)(this + 0x28) == 0x1c) {
      puVar24 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_00117045;
    }
    _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,param_1);
  local_50 = 0;
  puVar24 = (undefined8 *)operator_new(0x20,"");
  *puVar24 = local_68._0_8_;
  puVar24[1] = local_68._8_8_;
  StringName::StringName((StringName *)(puVar24 + 2),(StringName *)&local_58);
  bVar36 = StringName::configured != '\0';
  *(undefined1 *)(puVar24 + 3) = local_50;
  if ((bVar36) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar25 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar24;
    *(undefined8 **)(this + 0x20) = puVar24;
    if (lVar25 == 0) goto LAB_0011709c;
LAB_00116f46:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  else {
    *puVar4 = puVar24;
    puVar24[1] = puVar4;
    lVar25 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar24;
    if (lVar25 != 0) goto LAB_00116f46;
LAB_0011709c:
    uVar23 = StringName::get_empty_hash();
  }
  lVar25 = *(long *)(this + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar31 = (ulong)uVar23;
  uVar33 = 0;
  lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  uVar22 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar27 = CONCAT44(0,uVar22);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar31 * lVar3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar27;
  lVar30 = SUB168(auVar9 * auVar17,8);
  lVar29 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar25 + lVar30 * 4);
  iVar28 = SUB164(auVar9 * auVar17,8);
  uVar32 = *puVar1;
  puVar4 = puVar24;
  while (uVar32 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar32 * lVar3;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar27;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar22 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar3;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar27;
    local_98 = SUB164(auVar11 * auVar19,8);
    puVar35 = puVar4;
    if (local_98 < uVar33) {
      *puVar1 = (uint)uVar31;
      uVar31 = (ulong)uVar32;
      puVar2 = (undefined8 *)(lVar29 + lVar30 * 8);
      puVar35 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar33 = local_98;
    }
    uVar23 = (uint)uVar31;
    uVar33 = uVar33 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar3;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar27;
    lVar30 = SUB168(auVar12 * auVar20,8);
    puVar1 = (uint *)(lVar25 + lVar30 * 4);
    iVar28 = SUB164(auVar12 * auVar20,8);
    puVar4 = puVar35;
    uVar32 = *puVar1;
  }
  *(undefined8 **)(lVar29 + lVar30 * 8) = puVar4;
  *puVar1 = uVar23;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_00117045:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar24 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, bool, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool> > >::insert(StringName const&, bool
   const&, bool) */

StringName *
HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
::insert(StringName *param_1,bool *param_2,bool param_3)

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
  undefined1 *in_RCX;
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
  bool bVar37;
  long *local_80;
  long local_58;
  undefined1 local_50;
  long local_40;
  
  pSVar29 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar23 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
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
      goto LAB_001171d2;
    }
    iVar28 = *(int *)(param_2 + 0x2c);
    if (__s_00 == (void *)0x0) goto LAB_001172f1;
    if (*(int *)(param_2 + 0x2c) != 0) goto LAB_001171de;
LAB_00117313:
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_80 = (long *)0x0;
      goto LAB_001172b0;
    }
    _resize_and_rehash((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  else {
LAB_001171d2:
    iVar28 = *(int *)(param_2 + 0x2c);
    if (iVar28 != 0) {
LAB_001171de:
      uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
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
          if ((uVar24 == uVar33) &&
             (*(long *)(*(long *)(*(long *)(param_2 + 8) + lVar30 * 8) + 0x10) == *(long *)pSVar29))
          {
            local_80 = *(long **)(*(long *)(param_2 + 8) + (ulong)uVar27 * 8);
            *(undefined1 *)(local_80 + 3) = *in_RCX;
            goto LAB_001172b0;
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
LAB_001172f1:
    if ((float)uVar23 * __LC107 < (float)(iVar28 + 1)) goto LAB_00117313;
  }
  StringName::StringName((StringName *)&local_58,pSVar29);
  local_50 = *in_RCX;
  local_80 = (long *)operator_new(0x20,"");
  *local_80 = 0;
  local_80[1] = 0;
  StringName::StringName((StringName *)(local_80 + 2),(StringName *)&local_58);
  bVar37 = StringName::configured != '\0';
  *(undefined1 *)(local_80 + 3) = local_50;
  if ((bVar37) && (local_58 != 0)) {
    StringName::unref();
  }
  puVar3 = *(undefined8 **)(param_2 + 0x20);
  if (puVar3 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_80;
    *(long **)(param_2 + 0x20) = local_80;
LAB_001173cb:
    lVar25 = *(long *)pSVar29;
    if (lVar25 != 0) goto LAB_001173d8;
LAB_001174cd:
    uVar23 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B != '\0') {
      lVar25 = *(long *)(param_2 + 0x18);
      *(long **)(lVar25 + 8) = local_80;
      *local_80 = lVar25;
      *(long **)(param_2 + 0x18) = local_80;
      goto LAB_001173cb;
    }
    *puVar3 = local_80;
    local_80[1] = (long)puVar3;
    lVar25 = *(long *)pSVar29;
    *(long **)(param_2 + 0x20) = local_80;
    if (lVar25 == 0) goto LAB_001174cd;
LAB_001173d8:
    uVar23 = *(uint *)(lVar25 + 0x20);
  }
  lVar25 = *(long *)(param_2 + 0x10);
  if (uVar23 == 0) {
    uVar23 = 1;
  }
  uVar32 = (ulong)uVar23;
  uVar33 = 0;
  lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
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
    auVar11._0_8_ = (ulong)((uVar2 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar30;
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
LAB_001172b0:
  *(long **)param_1 = local_80;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<StringName, bool, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<StringName, bool, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, bool> > >
   const&) */

void __thiscall
HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
::operator=(HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
            *this,HashMap *param_1)

{
  void *pvVar1;
  uint uVar2;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long in_FS_OFFSET;
  StringName local_48 [8];
  long local_40;
  ulong uVar3;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
               *)param_1) {
    uVar4 = *(uint *)(this + 0x28);
    uVar2 = (&hash_table_size_primes)[uVar4];
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar2 != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar6) = 0;
            pvVar1 = *(void **)(*(long *)(this + 8) + lVar6 * 2);
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar1 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar1,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar2 * 4 - lVar6 != 0);
        uVar4 = *(uint *)(this + 0x28);
        uVar2 = (&hash_table_size_primes)[uVar4];
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar2 < (uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x28)]) {
      if (uVar4 != 0x1c) {
        uVar3 = (ulong)uVar4;
        do {
          uVar2 = (int)uVar3 + 1;
          uVar3 = (ulong)uVar2;
          if ((uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x28)] <=
              (uint)(&hash_table_size_primes)[uVar3]) {
            if (uVar2 != uVar4) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar2;
              }
              else {
                _resize_and_rehash(this,uVar2);
              }
            }
            goto LAB_00117711;
          }
        } while (uVar2 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_00117711:
    if ((*(long *)(param_1 + 8) != 0) &&
       (plVar5 = *(long **)(param_1 + 0x18), plVar5 != (long *)0x0)) {
      do {
        insert(local_48,(bool *)this,(bool)((char)plVar5 + '\x10'));
        plVar5 = (long *)*plVar5;
      } while (plVar5 != (long *)0x0);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<ObjectID, HashMap<StringName, bool, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, bool> > >,
   HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, HashMap<StringName, bool, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, bool> > >
   > > >::operator[](ObjectID const&) */

undefined1 * __thiscall
HashMap<ObjectID,HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>>>>
::operator[](HashMap<ObjectID,HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>>>>
             *this,ObjectID *param_1)

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
  undefined1 (*pauVar36) [16];
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  long lVar42;
  uint uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  undefined8 uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  ulong uVar51;
  uint uVar52;
  ulong uVar53;
  long lVar54;
  ulong uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  void *local_f0;
  HashMap local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined8 local_78;
  long local_40;
  
  local_f0 = *(void **)(this + 8);
  lVar42 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar39 = (ulong)*(uint *)(this + 0x28);
  uVar48 = (&hash_table_size_primes)[uVar39];
  uVar55 = CONCAT44(0,uVar48);
  if (local_f0 == (void *)0x0) {
    local_90 = 2;
    uVar39 = uVar55 * 4;
    local_b0 = (undefined1  [16])0x0;
    uVar38 = uVar55 * 8;
    local_a0 = (undefined1  [16])0x0;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    local_f0 = (void *)Memory::alloc_static(uVar38,false);
    *(void **)(this + 8) = local_f0;
    if (uVar48 == 0) {
      iVar44 = *(int *)(this + 0x2c);
      lVar42 = *(long *)param_1;
      if (local_f0 == (void *)0x0) goto LAB_00117afb;
    }
    else {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)local_f0 + uVar38)) &&
         (local_f0 < (void *)((long)pvVar3 + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar39 * 4) = 0;
          *(undefined8 *)((long)local_f0 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar55 != uVar39);
        iVar44 = *(int *)(this + 0x2c);
        lVar42 = *(long *)param_1;
      }
      else {
        memset(pvVar3,0,uVar39);
        memset(local_f0,0,uVar38);
        iVar44 = *(int *)(this + 0x2c);
        lVar42 = *(long *)param_1;
      }
    }
    if (iVar44 != 0) {
      uVar39 = (ulong)*(uint *)(this + 0x28);
      lVar54 = *(long *)(this + 0x10);
      goto LAB_001179ea;
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    if (iVar44 == 0) {
      local_90 = 2;
      local_b0 = (undefined1  [16])0x0;
      local_a0 = (undefined1  [16])0x0;
    }
    else {
      lVar54 = *(long *)(this + 0x10);
      lVar46 = *(long *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar38 = lVar42 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar53 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar53 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar53 * lVar46;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar55;
      lVar45 = SUB168(auVar4 * auVar20,8);
      uVar43 = *(uint *)(lVar54 + lVar45 * 4);
      uVar52 = SUB164(auVar4 * auVar20,8);
      if (uVar43 != 0) {
        uVar50 = 0;
        do {
          if ((uVar43 == (uint)uVar53) &&
             (lVar42 == *(long *)(*(long *)((long)local_f0 + lVar45 * 8) + 0x10))) {
            pauVar41 = *(undefined1 (**) [16])((long)local_f0 + (ulong)uVar52 * 8);
            goto LAB_001179a3;
          }
          uVar50 = uVar50 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(uVar52 + 1) * lVar46;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar55;
          lVar45 = SUB168(auVar5 * auVar21,8);
          uVar43 = *(uint *)(lVar54 + lVar45 * 4);
          uVar52 = SUB164(auVar5 * auVar21,8);
        } while ((uVar43 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar43 * lVar46, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar55, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar52 + uVar48) - SUB164(auVar6 * auVar22,8)) * lVar46,
                auVar23._8_8_ = 0, auVar23._0_8_ = uVar55, uVar50 <= SUB164(auVar7 * auVar23,8)));
      }
      local_90 = 2;
      local_b0 = (undefined1  [16])0x0;
      local_a0 = (undefined1  [16])0x0;
LAB_001179ea:
      uVar51 = CONCAT44(0,(&hash_table_size_primes)[uVar39]);
      lVar46 = *(long *)(hash_table_size_primes_inv + uVar39 * 8);
      uVar38 = lVar42 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar53 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar53 = 1;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar53 * lVar46;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar51;
      lVar45 = SUB168(auVar8 * auVar24,8);
      uVar48 = *(uint *)(lVar54 + lVar45 * 4);
      uVar43 = SUB164(auVar8 * auVar24,8);
      if (uVar48 != 0) {
        uVar52 = 0;
        do {
          if ((uVar48 == (uint)uVar53) &&
             (*(long *)(*(long *)((long)local_f0 + lVar45 * 8) + 0x10) == lVar42)) {
            HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
            ::operator=((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>
                         *)(*(long *)((long)local_f0 + (ulong)uVar43 * 8) + 0x18),local_b8);
            pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar43 * 8);
            goto LAB_001179a3;
          }
          uVar52 = uVar52 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar43 + 1) * lVar46;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar51;
          lVar45 = SUB168(auVar9 * auVar25,8);
          uVar48 = *(uint *)(lVar54 + lVar45 * 4);
          uVar43 = SUB164(auVar9 * auVar25,8);
        } while ((uVar48 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar48 * lVar46, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar51, auVar11._8_8_ = 0,
                auVar11._0_8_ =
                     (ulong)(((&hash_table_size_primes)[uVar39] + uVar43) -
                            SUB164(auVar10 * auVar26,8)) * lVar46, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar51, uVar52 <= SUB164(auVar11 * auVar27,8)));
      }
    }
  }
LAB_00117afb:
  if ((float)uVar55 * __LC107 < (float)(iVar44 + 1)) {
    uVar48 = *(uint *)(this + 0x28);
    if (uVar48 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_001179a3;
    }
    uVar39 = (ulong)(uVar48 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar43 = (&hash_table_size_primes)[uVar48];
    if (uVar48 + 1 < 2) {
      uVar39 = 2;
    }
    uVar48 = (&hash_table_size_primes)[uVar39];
    uVar38 = (ulong)uVar48;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar3 = *(void **)(this + 0x10);
    uVar39 = uVar38 * 4;
    uVar55 = uVar38 * 8;
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar55,false);
    *(void **)(this + 8) = __s_00;
    if (uVar48 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar55)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar38 != uVar39);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar55);
      }
    }
    if (uVar43 != 0) {
      uVar39 = 0;
      do {
        uVar48 = *(uint *)((long)pvVar3 + uVar39 * 4);
        if (uVar48 != 0) {
          lVar42 = *(long *)(this + 0x10);
          uVar49 = 0;
          uVar52 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
          uVar55 = CONCAT44(0,uVar52);
          lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar48 * lVar54;
          auVar28._8_8_ = 0;
          auVar28._0_8_ = uVar55;
          lVar46 = SUB168(auVar12 * auVar28,8);
          puVar1 = (uint *)(lVar42 + lVar46 * 4);
          iVar44 = SUB164(auVar12 * auVar28,8);
          uVar50 = *puVar1;
          uVar40 = *(undefined8 *)((long)local_f0 + uVar39 * 8);
          while (uVar50 != 0) {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar50 * lVar54;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar55;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)((uVar52 + iVar44) - SUB164(auVar13 * auVar29,8)) * lVar54;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar55;
            uVar37 = SUB164(auVar14 * auVar30,8);
            uVar47 = uVar40;
            if (uVar37 < uVar49) {
              *puVar1 = uVar48;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar47 = *puVar2;
              *puVar2 = uVar40;
              uVar48 = uVar50;
              uVar49 = uVar37;
            }
            uVar49 = uVar49 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(iVar44 + 1) * lVar54;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar55;
            lVar46 = SUB168(auVar15 * auVar31,8);
            puVar1 = (uint *)(lVar42 + lVar46 * 4);
            iVar44 = SUB164(auVar15 * auVar31,8);
            uVar40 = uVar47;
            uVar50 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar40;
          *puVar1 = uVar48;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar39 != uVar43);
      Memory::free_static(local_f0,false);
      Memory::free_static(pvVar3,false);
    }
  }
  local_78 = *(undefined8 *)param_1;
  uVar39 = 1;
  do {
    if (0x16 < (uint)(&hash_table_size_primes)[uVar39]) {
      uVar39 = uVar39 & 0xffffffff;
      goto LAB_00117d7a;
    }
    uVar39 = uVar39 + 1;
  } while (uVar39 != 0x1d);
  uVar39 = 0;
  _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                   "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_00117d7a:
  pauVar41 = (undefined1 (*) [16])operator_new(0x48,"");
  *pauVar41 = (undefined1  [16])0x0;
  *(undefined8 *)pauVar41[4] = 0;
  *(undefined8 *)pauVar41[1] = local_78;
  uVar48 = (&hash_table_size_primes)[uVar39];
  pauVar41[2] = (undefined1  [16])0x0;
  lVar42 = 1;
  pauVar41[3] = (undefined1  [16])0x0;
  if (5 < uVar48) {
    do {
      if (uVar48 <= (uint)(&hash_table_size_primes)[lVar42]) {
        *(int *)pauVar41[4] = (int)lVar42;
        puVar2 = *(undefined8 **)(this + 0x20);
        goto joined_r0x00117f9a;
      }
      lVar42 = lVar42 + 1;
    } while (lVar42 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
  }
  puVar2 = *(undefined8 **)(this + 0x20);
joined_r0x00117f9a:
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar2 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar2;
  }
  lVar42 = *(long *)(this + 0x10);
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar39 = *(long *)param_1 * 0x3ffff - 1;
  uVar39 = (uVar39 ^ uVar39 >> 0x1f) * 0x15;
  uVar39 = (uVar39 ^ uVar39 >> 0xb) * 0x41;
  uVar39 = uVar39 >> 0x16 ^ uVar39;
  uVar55 = uVar39 & 0xffffffff;
  if ((int)uVar39 == 0) {
    uVar55 = 1;
  }
  uVar50 = 0;
  uVar48 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  uVar39 = CONCAT44(0,uVar48);
  uVar52 = (uint)uVar55;
  lVar54 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar16._8_8_ = 0;
  auVar16._0_8_ = uVar55 * lVar54;
  auVar32._8_8_ = 0;
  auVar32._0_8_ = uVar39;
  lVar45 = SUB168(auVar16 * auVar32,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar42 + lVar45 * 4);
  iVar44 = SUB164(auVar16 * auVar32,8);
  uVar43 = *puVar1;
  pauVar36 = pauVar41;
  while (uVar43 != 0) {
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)uVar43 * lVar54;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar39;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)((iVar44 + uVar48) - SUB164(auVar17 * auVar33,8)) * lVar54;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar39;
    uVar52 = SUB164(auVar18 * auVar34,8);
    pauVar56 = pauVar36;
    if (uVar52 < uVar50) {
      *puVar1 = (uint)uVar55;
      uVar55 = (ulong)uVar43;
      puVar2 = (undefined8 *)(lVar46 + lVar45 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar50 = uVar52;
    }
    uVar52 = (uint)uVar55;
    uVar50 = uVar50 + 1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)(iVar44 + 1) * lVar54;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar39;
    lVar45 = SUB168(auVar19 * auVar35,8);
    puVar1 = (uint *)(lVar42 + lVar45 * 4);
    iVar44 = SUB164(auVar19 * auVar35,8);
    pauVar36 = pauVar56;
    uVar43 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar45 * 8) = pauVar36;
  *puVar1 = uVar52;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_001179a3:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar41[1] + 8;
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
  uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (param_1 < 2) {
    param_1 = 2;
  }
  *(uint *)(this + 0x28) = param_1;
  uVar21 = (&hash_table_size_primes)[param_1];
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
        uVar4 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
  uint uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  void *__s;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  long *plVar15;
  char cVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  void *__s_00;
  CowData *in_RCX;
  int iVar20;
  undefined7 in_register_00000011;
  StringName *pSVar21;
  long lVar22;
  ulong uVar23;
  long *plVar24;
  char in_R8B;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  uint local_a8;
  long *local_90;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  long local_50 [2];
  long local_40;
  
  pSVar21 = (StringName *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (*(long *)(param_2 + 8) == 0) {
    uVar27 = (ulong)uVar17;
    uVar23 = uVar27 * 4;
    uVar19 = Memory::alloc_static(uVar23,false);
    *(undefined8 *)(param_2 + 0x10) = uVar19;
    uVar26 = uVar27 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar26,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar17 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)(uVar26 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar23))) {
        uVar23 = 0;
        do {
          *(undefined4 *)((long)__s + uVar23 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar23 * 8) = 0;
          uVar23 = uVar23 + 1;
        } while (uVar27 != uVar23);
      }
      else {
        memset(__s,0,uVar23);
        memset(__s_00,0,uVar26);
      }
    }
  }
  local_6c = 0;
  cVar16 = _lookup_pos((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                        *)param_2,pSVar21,&local_6c);
  if (cVar16 != '\0') {
    uVar23 = (ulong)local_6c;
    local_90 = *(long **)(*(long *)(param_2 + 8) + uVar23 * 8);
    if (local_90[3] != *(long *)in_RCX) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_90 + 3),in_RCX);
      local_90 = *(long **)(*(long *)(param_2 + 8) + uVar23 * 8);
    }
    goto LAB_001185f0;
  }
  if ((float)uVar17 * __LC107 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
    if (*(int *)(param_2 + 0x28) == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      local_90 = (long *)0x0;
      goto LAB_001185f0;
    }
    _resize_and_rehash((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>
                        *)param_2,*(int *)(param_2 + 0x28) + 1);
  }
  local_68 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_58,pSVar21);
  local_50[0] = 0;
  if (*(long *)in_RCX != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_50,in_RCX);
  }
  local_90 = (long *)operator_new(0x20,"");
  *local_90 = local_68._0_8_;
  local_90[1] = local_68._8_8_;
  StringName::StringName((StringName *)(local_90 + 2),(StringName *)&local_58);
  local_90[3] = 0;
  if (local_50[0] != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(local_90 + 3),(CowData *)local_50);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if ((StringName::configured != '\0') && (local_58 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(param_2 + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    *(long **)(param_2 + 0x18) = local_90;
    *(long **)(param_2 + 0x20) = local_90;
LAB_00118509:
    lVar18 = *(long *)pSVar21;
    if (lVar18 != 0) goto LAB_00118515;
LAB_00118648:
    uVar17 = StringName::get_empty_hash();
  }
  else {
    if (in_R8B == '\0') {
      *puVar4 = local_90;
      local_90[1] = (long)puVar4;
      *(long **)(param_2 + 0x20) = local_90;
      goto LAB_00118509;
    }
    lVar18 = *(long *)(param_2 + 0x18);
    *(long **)(lVar18 + 8) = local_90;
    *local_90 = lVar18;
    lVar18 = *(long *)pSVar21;
    *(long **)(param_2 + 0x18) = local_90;
    if (lVar18 == 0) goto LAB_00118648;
LAB_00118515:
    uVar17 = *(uint *)(lVar18 + 0x20);
  }
  lVar18 = *(long *)(param_2 + 8);
  if (uVar17 == 0) {
    uVar17 = 1;
  }
  uVar23 = (ulong)uVar17;
  uVar25 = 0;
  lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  uVar26 = CONCAT44(0,uVar2);
  lVar6 = *(long *)(param_2 + 0x10);
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar23 * lVar5;
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar26;
  lVar22 = SUB168(auVar7 * auVar11,8);
  puVar1 = (uint *)(lVar6 + lVar22 * 4);
  iVar20 = SUB164(auVar7 * auVar11,8);
  uVar3 = *puVar1;
  plVar15 = local_90;
  while (uVar3 != 0) {
    auVar8._8_8_ = 0;
    auVar8._0_8_ = (ulong)uVar3 * lVar5;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar26;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = (ulong)((iVar20 + uVar2) - SUB164(auVar8 * auVar12,8)) * lVar5;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar26;
    local_a8 = SUB164(auVar9 * auVar13,8);
    plVar24 = plVar15;
    if (local_a8 < uVar25) {
      puVar4 = (undefined8 *)(lVar18 + lVar22 * 8);
      *puVar1 = (uint)uVar23;
      uVar23 = (ulong)uVar3;
      plVar24 = (long *)*puVar4;
      *puVar4 = plVar15;
      uVar25 = local_a8;
    }
    uVar17 = (uint)uVar23;
    uVar25 = uVar25 + 1;
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)(iVar20 + 1) * lVar5;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar26;
    lVar22 = SUB168(auVar10 * auVar14,8);
    puVar1 = (uint *)(lVar6 + lVar22 * 4);
    iVar20 = SUB164(auVar10 * auVar14,8);
    plVar15 = plVar24;
    uVar3 = *puVar1;
  }
  *(long **)(lVar18 + lVar22 * 8) = plVar15;
  *puVar1 = uVar17;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_001185f0:
  *(long **)param_1 = local_90;
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
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  void *__s;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  char cVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  undefined8 uVar19;
  void *__s_00;
  int iVar20;
  long lVar21;
  uint uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 *puVar25;
  ulong uVar26;
  long in_FS_OFFSET;
  uint local_98;
  undefined8 *local_80;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  cVar15 = _lookup_pos(this,param_1,&local_78);
  if (cVar15 != '\0') {
    local_80 = (undefined8 *)(*(long *)(*(long *)(this + 8) + (ulong)local_78 * 8) + 0x18);
    goto LAB_00118a1b;
  }
  local_70 = 0;
  uVar16 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (*(long *)(this + 8) == 0) {
    uVar26 = (ulong)uVar16;
    uVar24 = uVar26 * 4;
    uVar23 = uVar26 * 8;
    uVar19 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(this + 0x10) = uVar19;
    __s_00 = (void *)Memory::alloc_static(uVar23,false);
    *(void **)(this + 8) = __s_00;
    if (uVar16 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar23)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar26 != uVar24);
      }
      else {
        memset(__s,0,uVar24);
        memset(__s_00,0,uVar23);
      }
    }
  }
  local_74 = 0;
  cVar15 = _lookup_pos(this,param_1,&local_74);
  if (cVar15 == '\0') {
    if ((float)uVar16 * __LC107 < (float)(*(int *)(this + 0x2c) + 1)) {
      if (*(int *)(this + 0x28) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_80 = (undefined8 *)0x18;
        goto LAB_00118a0e;
      }
      _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
    }
    local_68 = (undefined1  [16])0x0;
    StringName::StringName((StringName *)&local_58,param_1);
    local_50[0] = 0;
    puVar17 = (undefined8 *)operator_new(0x20,"");
    *puVar17 = local_68._0_8_;
    puVar17[1] = local_68._8_8_;
    StringName::StringName((StringName *)(puVar17 + 2),(StringName *)&local_58);
    puVar17[3] = 0;
    if (local_50[0] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(puVar17 + 3),(CowData *)local_50);
    }
    local_80 = puVar17 + 3;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    puVar25 = *(undefined8 **)(this + 0x20);
    if (puVar25 == (undefined8 *)0x0) {
      lVar18 = *(long *)param_1;
      *(undefined8 **)(this + 0x18) = puVar17;
      *(undefined8 **)(this + 0x20) = puVar17;
      if (lVar18 == 0) goto LAB_00118a8d;
LAB_00118931:
      uVar16 = *(uint *)(lVar18 + 0x20);
    }
    else {
      *puVar25 = puVar17;
      puVar17[1] = puVar25;
      lVar18 = *(long *)param_1;
      *(undefined8 **)(this + 0x20) = puVar17;
      if (lVar18 != 0) goto LAB_00118931;
LAB_00118a8d:
      uVar16 = StringName::get_empty_hash();
    }
    if (uVar16 == 0) {
      uVar16 = 1;
    }
    uVar24 = (ulong)uVar16;
    uVar22 = 0;
    lVar18 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar3 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    uVar23 = CONCAT44(0,uVar3);
    lVar5 = *(long *)(this + 0x10);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar24 * lVar18;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar23;
    lVar21 = SUB168(auVar7 * auVar11,8);
    lVar6 = *(long *)(this + 8);
    puVar1 = (uint *)(lVar5 + lVar21 * 4);
    iVar20 = SUB164(auVar7 * auVar11,8);
    uVar4 = *puVar1;
    while (uVar4 != 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar4 * lVar18;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar23;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((iVar20 + uVar3) - SUB164(auVar8 * auVar12,8)) * lVar18;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar23;
      local_98 = SUB164(auVar9 * auVar13,8);
      puVar25 = puVar17;
      if (local_98 < uVar22) {
        *puVar1 = (uint)uVar24;
        uVar24 = (ulong)uVar4;
        puVar2 = (undefined8 *)(lVar6 + lVar21 * 8);
        puVar25 = (undefined8 *)*puVar2;
        *puVar2 = puVar17;
        uVar22 = local_98;
      }
      uVar16 = (uint)uVar24;
      uVar22 = uVar22 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar20 + 1) * lVar18;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar23;
      lVar21 = SUB168(auVar10 * auVar14,8);
      puVar1 = (uint *)(lVar5 + lVar21 * 4);
      iVar20 = SUB164(auVar10 * auVar14,8);
      puVar17 = puVar25;
      uVar4 = *puVar1;
    }
    *(undefined8 **)(lVar6 + lVar21 * 8) = puVar17;
    *puVar1 = uVar16;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar24 = (ulong)local_74;
    lVar18 = *(long *)(*(long *)(this + 8) + uVar24 * 8);
    if (*(long *)(lVar18 + 0x18) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(lVar18 + 0x18),(CowData *)&local_70);
      lVar18 = *(long *)(*(long *)(this + 8) + uVar24 * 8);
    }
    local_80 = (undefined8 *)(lVar18 + 0x18);
  }
LAB_00118a0e:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00118a1b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_80;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GroupsEditor::_notification(int) [clone .cold] */

void GroupsEditor::_notification(int param_1)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* GroupsEditor::_notificationv(int, bool) */

void __thiscall GroupsEditor::_notificationv(GroupsEditor *this,int param_1,bool param_2)

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



/* WARNING: Removing unreachable block (ram,0x00118d78) */
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



/* MethodBindT<String const&, bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&,bool>::validated_call
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
      goto LAB_00119211;
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
                    /* WARNING: Could not recover jumptable at 0x00119097. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(undefined1 *)(*(long *)(param_3 + 8) + 8));
    return;
  }
LAB_00119211:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00119401;
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
                    /* WARNING: Could not recover jumptable at 0x00119288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               **(char **)((long)param_3 + 8) != '\0');
    return;
  }
LAB_00119401:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&>::validated_call(Object*, Variant const**, Variant*)
   const */

void MethodBindT<String_const&,String_const&>::validated_call
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
      goto LAB_001195cf;
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
                    /* WARNING: Could not recover jumptable at 0x0011947a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8,
               *(long *)(param_3 + 8) + 8);
    return;
  }
LAB_001195cf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&,String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001197b9;
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
                    /* WARNING: Could not recover jumptable at 0x00119640. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3,
               *(undefined8 *)((long)param_3 + 8));
    return;
  }
LAB_001197b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<String_const&>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_00119991;
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
                    /* WARNING: Could not recover jumptable at 0x0011981d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*(long *)param_3 + 8);
    return;
  }
LAB_00119991:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<String_const&>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_00119b71;
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
                    /* WARNING: Could not recover jumptable at 0x001199f9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),*param_3);
    return;
  }
LAB_00119b71:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00119c90;
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
LAB_00119c90:
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
      goto LAB_0011a00f;
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
                    /* WARNING: Could not recover jumptable at 0x00119eb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011a00f:
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
      goto LAB_0011a1cf;
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
                    /* WARNING: Could not recover jumptable at 0x0011a076. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0011a1cf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<String_const&>::call
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
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011a320;
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
      if (in_R8D != 1) goto LAB_0011a370;
LAB_0011a360:
      pVVar10 = *(Variant **)param_4;
    }
    else {
      lVar2 = *(long *)(pVVar10 + -8);
      if ((int)lVar2 < (int)(in_R8D ^ 1)) {
LAB_0011a370:
        uVar6 = 4;
        goto LAB_0011a315;
      }
      if (in_R8D == 1) goto LAB_0011a360;
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
    cVar5 = Variant::can_convert_strict(*(undefined4 *)pVVar10,4);
    uVar4 = _LC150;
    if (cVar5 == '\0') {
      *in_R9 = 2;
      *(undefined8 *)(in_R9 + 1) = uVar4;
    }
    Variant::operator_cast_to_String((Variant *)&local_48);
    (*(code *)pVVar11)((Variant *)((long)plVar9 + (long)pVVar1),(Variant *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  else {
    uVar6 = 3;
LAB_0011a315:
    *in_R9 = uVar6;
    in_R9[2] = 1;
  }
LAB_0011a320:
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, String const&, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(String const&, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,String_const&,bool>
               (__UnexistingClass *param_1,_func_void_String_ptr_bool *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  Variant *this;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant aVStack_38 [8];
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_0011a678;
      puVar10 = (undefined4 *)*plVar8;
LAB_0011a6cd:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0011a678:
        uVar7 = 4;
        goto LAB_0011a67d;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_0011a6e8;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_0011a6cd;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011a6e8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_String_ptr_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
    uVar4 = _LC151;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_bool(this);
    cVar5 = Variant::can_convert_strict(*puVar10,4);
    uVar4 = _LC150;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(aVStack_38);
    (*param_2)((String *)(param_1 + (long)param_3),SUB81(aVStack_38,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)aVStack_38);
  }
  else {
    uVar7 = 3;
LAB_0011a67d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, bool>::call(Object*, Variant const**, int, Callable::CallError&) const
    */

Object * MethodBindT<String_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011a786;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,String_const&,bool>
            (p_Var2,(_func_void_String_ptr_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4
             ,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011a786:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, String const&, String
   const&>(__UnexistingClass*, void (__UnexistingClass::*)(String const&, String const&), Variant
   const**, int, Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,String_const&,String_const&>
               (__UnexistingClass *param_1,_func_void_String_ptr_String_ptr *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 in_register_0000000c;
  long *plVar8;
  long lVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  long in_FS_OFFSET;
  long in_stack_00000008;
  Variant local_50 [8];
  Variant local_48 [8];
  long local_40;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_0011aaa8;
      puVar10 = (undefined4 *)*plVar8;
LAB_0011aafd:
      puVar13 = (undefined4 *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_0011aaa8:
        uVar7 = 4;
        goto LAB_0011aaad;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_0011ab18;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_0011aafd;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_0011ab18:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      puVar13 = (undefined4 *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_String_ptr_String_ptr **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*puVar13,4);
    uVar4 = _LC152;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(local_50);
    cVar5 = Variant::can_convert_strict(*puVar10,4);
    uVar4 = _LC150;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_String(local_48);
    (*param_2)((String *)(param_1 + (long)param_3),(String *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  }
  else {
    uVar7 = 3;
LAB_0011aaad:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */

Object * MethodBindT<String_const&,String_const&>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
  long *plVar1;
  undefined4 in_register_00000014;
  __UnexistingClass *p_Var2;
  CallError *in_R8;
  Vector *in_R9;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
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
      _err_print_error(&_LC85,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0011abb6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,String_const&,String_const&>
            (p_Var2,(_func_void_String_ptr_String_ptr *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0011abb6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<String_const&>
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
  if (iVar5 != param_1) goto LAB_0011adb7;
  local_78 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,4);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011aeb5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011aeb5;
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
LAB_0011adb7:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<String const&, String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&,String_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&>::_gen_argument_type_info(int param_1)

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
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<String const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<String_const&,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar5;
  long in_FS_OFFSET;
  int local_8c;
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
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<String_const&>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_0011b154;
  local_78 = 0;
  local_68 = &_LC15;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011b255:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011b255;
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
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_0011b154:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* GroupsEditor::_add_scene_group(String const&) */

void GroupsEditor::_GLOBAL__sub_I__add_scene_group(void)

{
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
  if (TabBar::base_property_helper == '\0') {
    TabBar::base_property_helper = '\x01';
    TabBar::base_property_helper._64_8_ = 0;
    TabBar::base_property_helper._0_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._24_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._40_16_ = (undefined1  [16])0x0;
    TabBar::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,TabBar::base_property_helper,&__dso_handle)
    ;
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
/* List<Node::GroupInfo, DefaultAllocator>::~List() */

void __thiscall
List<Node::GroupInfo,DefaultAllocator>::~List(List<Node::GroupInfo,DefaultAllocator> *this)

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
/* MethodBindT<String const&, bool>::~MethodBindT() */

void __thiscall MethodBindT<String_const&,bool>::~MethodBindT(MethodBindT<String_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&>::~MethodBindT() */

void __thiscall MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<String const&, String const&>::~MethodBindT() */

void __thiscall
MethodBindT<String_const&,String_const&>::~MethodBindT
          (MethodBindT<String_const&,String_const&> *this)

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
/* CallableCustomMethodPointer<GroupsEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GroupsEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<LineEdit, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<LineEdit,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<LineEdit,void,bool> *this)

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
/* CallableCustomMethodPointer<GroupsEditor, void, ObjectID const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,ObjectID_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GroupsEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Object*,int,int,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GroupsEditor, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Vector2_const&,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GroupsEditor, void, Ref<InputEvent> >::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,Ref<InputEvent>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<GroupsEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<GroupsEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<GroupsEditor,void,int> *this)

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


// This is taking way too long.