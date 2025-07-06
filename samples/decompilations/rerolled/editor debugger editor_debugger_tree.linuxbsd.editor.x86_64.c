/* EditorDebuggerTree::_notification(int) [clone .part.0] */

void EditorDebuggerTree::_notification(int param_1)

{
  code *pcVar1;
  long lVar2;
  CallableCustom *pCVar3;
  undefined4 in_register_0000003c;
  long *plVar4;
  long in_FS_OFFSET;
  long local_60;
  Callable local_58 [24];
  long local_40;
  
  plVar4 = (long *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::set_auto_translate_mode(plVar4,2);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  pCVar3 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar3);
  *(undefined **)(pCVar3 + 0x20) = &_LC0;
  *(undefined1 (*) [16])(pCVar3 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar3 = &PTR_hash_0010b318;
  *(undefined8 *)(pCVar3 + 0x40) = 0;
  lVar2 = plVar4[0xc];
  *(undefined8 *)(pCVar3 + 0x10) = 0;
  *(long *)(pCVar3 + 0x30) = lVar2;
  *(code **)(pCVar3 + 0x38) = _scene_tree_selected;
  *(long **)(pCVar3 + 0x28) = plVar4;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar3,(int)pCVar3 + 0x28);
  *(char **)(pCVar3 + 0x20) = "EditorDebuggerTree::_scene_tree_selected";
  Callable::Callable(local_58,pCVar3);
  StringName::StringName((StringName *)&local_60,"cell_selected",false);
  (*pcVar1)(plVar4,(StringName *)&local_60,local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  pCVar3 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar3);
  *(undefined **)(pCVar3 + 0x20) = &_LC0;
  *(undefined1 (*) [16])(pCVar3 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar3 = &PTR_hash_0010b3a8;
  *(undefined8 *)(pCVar3 + 0x40) = 0;
  lVar2 = plVar4[0xc];
  *(undefined8 *)(pCVar3 + 0x10) = 0;
  *(long *)(pCVar3 + 0x30) = lVar2;
  *(code **)(pCVar3 + 0x38) = _scene_tree_folded;
  *(long **)(pCVar3 + 0x28) = plVar4;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar3,(int)pCVar3 + 0x28);
  *(char **)(pCVar3 + 0x20) = "EditorDebuggerTree::_scene_tree_folded";
  Callable::Callable(local_58,pCVar3);
  StringName::StringName((StringName *)&local_60,"item_collapsed",false);
  (*pcVar1)(plVar4,(StringName *)&local_60,local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  pcVar1 = *(code **)(*plVar4 + 0x108);
  pCVar3 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar3);
  *(undefined **)(pCVar3 + 0x20) = &_LC0;
  *(undefined1 (*) [16])(pCVar3 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar3 = &PTR_hash_0010b438;
  *(undefined8 *)(pCVar3 + 0x40) = 0;
  lVar2 = plVar4[0xc];
  *(undefined8 *)(pCVar3 + 0x10) = 0;
  *(long *)(pCVar3 + 0x30) = lVar2;
  *(code **)(pCVar3 + 0x38) = _scene_tree_rmb_selected;
  *(long **)(pCVar3 + 0x28) = plVar4;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar3,(int)pCVar3 + 0x28);
  *(char **)(pCVar3 + 0x20) = "EditorDebuggerTree::_scene_tree_rmb_selected";
  Callable::Callable(local_58,pCVar3);
  StringName::StringName((StringName *)&local_60,"item_mouse_selected",false);
  (*pcVar1)(plVar4,(StringName *)&local_60,local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>
   >::_lookup_pos(ObjectID const&, unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_lookup_pos
          (HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *this,
          ObjectID *param_1,uint *param_2)

{
  long lVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  int iVar11;
  long lVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  
  if (*(long *)this == 0) {
    return 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    uVar14 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar16 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar16 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar16 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar14;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar13 = *(uint *)(*(long *)(this + 0x18) + lVar12 * 4);
    iVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar13 != 0) {
      uVar15 = 0;
      do {
        if (((uint)uVar16 == uVar13) &&
           (uVar13 = *(uint *)(*(long *)(this + 8) + lVar12 * 4),
           *(ObjectID **)(*(long *)this + (ulong)uVar13 * 8) == param_1)) {
          *param_2 = uVar13;
          return 1;
        }
        uVar15 = uVar15 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(iVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar14;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar13 = *(uint *)(*(long *)(this + 0x18) + lVar12 * 4);
        iVar11 = SUB164(auVar3 * auVar7,8);
        if (uVar13 == 0) {
          return 0;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar13 * lVar1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4
                                         ) + iVar11) - SUB164(auVar4 * auVar8,8)) * lVar1;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar14;
      } while (uVar15 <= SUB164(auVar5 * auVar9,8));
      return 0;
    }
  }
  return 0;
}



/* EditorDebuggerTree::_scene_tree_selected() */

void __thiscall EditorDebuggerTree::_scene_tree_selected(EditorDebuggerTree *this)

{
  Variant *pVVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  Variant *pVVar7;
  long in_FS_OFFSET;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((this[0xdd4] == (EditorDebuggerTree)0x0) && (lVar5 = Tree::get_selected(), lVar5 != 0)) {
    TreeItem::get_metadata((int)(Variant *)local_88);
    uVar6 = Variant::operator_cast_to_unsigned_long((Variant *)local_88);
    *(ulong *)(this + 0xdc8) = uVar6;
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar3 = *(int *)(this + 0xdd0);
    if ((_scene_tree_selected()::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar4 = __cxa_guard_acquire(&_scene_tree_selected()::{lambda()#1}::operator()()::sname),
       iVar4 != 0)) {
      _scs_create((char *)&_scene_tree_selected()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_scene_tree_selected()::{lambda()#1}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_scene_tree_selected()::{lambda()#1}::operator()()::sname);
    }
    local_b0 = *(undefined8 *)(this + 0xdc8);
    Variant::Variant((Variant *)local_88,(ObjectID *)&local_b0);
    Variant::Variant(local_70,iVar3);
    local_50 = (undefined1  [16])0x0;
    pVVar7 = (Variant *)&local_58;
    local_58 = 0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = local_70;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_scene_tree_selected()::{lambda()#1}::operator()()::sname,&local_a8,2);
    cVar2 = Variant::needs_deinit[(int)local_58];
    while( true ) {
      if (cVar2 != '\0') {
        Variant::_clear_internal();
      }
      if (pVVar7 == (Variant *)local_88) break;
      pVVar1 = pVVar7 + -0x18;
      pVVar7 = pVVar7 + -0x18;
      cVar2 = Variant::needs_deinit[*(int *)pVVar1];
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorDebuggerTree::EditorDebuggerTree() */

void __thiscall EditorDebuggerTree::EditorDebuggerTree(EditorDebuggerTree *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  PopupMenu *this_00;
  CallableCustom *pCVar4;
  EditorFileDialog *this_01;
  long in_FS_OFFSET;
  long local_60;
  Callable local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::Tree((Tree *)this);
  *(undefined ***)this = &PTR__initialize_classv_0010ae90;
  *(undefined2 *)(this + 0xdd4) = 0;
  *(undefined8 *)(this + 0xdc8) = 0;
  *(undefined4 *)(this + 0xdd0) = 0;
  this[0xdd6] = (EditorDebuggerTree)0x0;
  *(undefined8 *)(this + 0xdf8) = 2;
  *(undefined8 *)(this + 0xe10) = 0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe00) = (undefined1  [16])0x0;
  Control::set_v_size_flags(this,3);
  Tree::set_allow_rmb_select(SUB81(this,0));
  this_00 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_00);
  postinitialize_handler((Object *)this_00);
  lVar1 = *(long *)this_00;
  *(PopupMenu **)(this + 0xe00) = this_00;
  pcVar2 = *(code **)(lVar1 + 0x108);
  pCVar4 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar4);
  *(undefined **)(pCVar4 + 0x20) = &_LC0;
  *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar4 = &PTR_hash_0010b1f8;
  *(undefined8 *)(pCVar4 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar4 + 0x10) = 0;
  *(undefined8 *)(pCVar4 + 0x30) = uVar3;
  *(code **)(pCVar4 + 0x38) = _item_menu_id_pressed;
  *(EditorDebuggerTree **)(pCVar4 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
  *(char **)(pCVar4 + 0x20) = "EditorDebuggerTree::_item_menu_id_pressed";
  Callable::Callable(local_58,pCVar4);
  (*pcVar2)(this_00,SceneStringNames::singleton + 0x240,local_58,0);
  Callable::~Callable(local_58);
  Node::add_child(this,*(undefined8 *)(this + 0xe00),0,0);
  this_01 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_01);
  postinitialize_handler((Object *)this_01);
  lVar1 = *(long *)this_01;
  *(EditorFileDialog **)(this + 0xe08) = this_01;
  pcVar2 = *(code **)(lVar1 + 0x108);
  pCVar4 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar4);
  *(undefined **)(pCVar4 + 0x20) = &_LC0;
  *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar4 = &PTR_hash_0010b288;
  *(undefined8 *)(pCVar4 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar4 + 0x10) = 0;
  *(undefined8 *)(pCVar4 + 0x30) = uVar3;
  *(code **)(pCVar4 + 0x38) = _file_selected;
  *(EditorDebuggerTree **)(pCVar4 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
  *(char **)(pCVar4 + 0x20) = "EditorDebuggerTree::_file_selected";
  Callable::Callable(local_58,pCVar4);
  StringName::StringName((StringName *)&local_60,"file_selected",false);
  (*pcVar2)(this_01,(StringName *)&local_60,local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable(local_58);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xe08),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerTree::select_node(ObjectID) */

void __thiscall EditorDebuggerTree::select_node(EditorDebuggerTree *this,undefined8 param_2)

{
  Variant *pVVar1;
  int iVar2;
  int iVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  iVar2 = *(int *)(this + 0xdd0);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 0xdc8) = param_2;
  *(undefined2 *)(this + 0xdd5) = 0x101;
  if (select_node(ObjectID)::{lambda()#1}::operator()()::sname == '\0') {
    iVar3 = __cxa_guard_acquire(&select_node(ObjectID)::{lambda()#1}::operator()()::sname);
    if (iVar3 != 0) {
      _scs_create((char *)&select_node(ObjectID)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&select_node(ObjectID)::{lambda()#1}::operator()()::sname
                   ,&__dso_handle);
      __cxa_guard_release(&select_node(ObjectID)::{lambda()#1}::operator()()::sname);
    }
  }
  local_b0 = *(undefined8 *)(this + 0xdc8);
  Variant::Variant(local_88,(ObjectID *)&local_b0);
  pVVar4 = (Variant *)local_40;
  Variant::Variant(local_70,iVar2);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  (**(code **)(*(long *)this + 0xd0))
            (this,&select_node(ObjectID)::{lambda()#1}::operator()()::sname,&local_a8,2);
  do {
    pVVar1 = pVVar4 + -0x18;
    pVVar4 = pVVar4 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar4 != local_88);
  if (this[0xdd4] == (EditorDebuggerTree)0x0) {
    EditorDebuggerNode::request_remote_tree();
  }
  this[0xdd4] = (EditorDebuggerTree)0x1;
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerTree::update_icon_max_width() */

void __thiscall EditorDebuggerTree::update_icon_max_width(EditorDebuggerTree *this)

{
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_40,"class_icon_size",false);
  Control::get_theme_constant((StringName *)this,(StringName *)&local_40);
  StringName::StringName((StringName *)&local_38,"icon_max_width",false);
  Control::add_theme_constant_override((StringName *)this,(int)(StringName *)&local_38);
  if (StringName::configured != '\0') {
    if (local_38 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100b13;
    }
    if (local_40 != 0) {
      StringName::unref();
    }
  }
LAB_00100b13:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerTree::_notification(int) */

void __thiscall EditorDebuggerTree::_notification(EditorDebuggerTree *this,int param_1)

{
  if (param_1 == 0) {
    _notification((int)this);
    return;
  }
  if (param_1 != 10) {
    return;
  }
  update_icon_max_width(this);
  return;
}



/* EditorDebuggerTree::get_selected_path() */

EditorDebuggerTree * __thiscall EditorDebuggerTree::get_selected_path(EditorDebuggerTree *this)

{
  code *pcVar1;
  long lVar2;
  long *plVar3;
  long in_FS_OFFSET;
  undefined *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Tree::get_selected();
  if (lVar2 == 0) {
    *(undefined8 *)this = 0;
    local_88 = &_LC0;
    local_80 = 0;
    String::parse_latin1((StrRange *)this);
  }
  else {
    plVar3 = (long *)Tree::get_selected();
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    pcVar1 = *(code **)(*plVar3 + 0xb8);
    StringName::StringName((StringName *)&local_88,"node_path",false);
    (*pcVar1)(local_58,plVar3,&local_88,&local_78);
    Variant::operator_cast_to_String((Variant *)this);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_88 != (undefined *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerTree::_scene_tree_folded(Object*) */

void __thiscall EditorDebuggerTree::_scene_tree_folded(EditorDebuggerTree *this,Object *param_1)

{
  uint *puVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  uint uVar35;
  long lVar36;
  ulong uVar37;
  ulong uVar38;
  int iVar39;
  int iVar40;
  long lVar41;
  long lVar42;
  ulong uVar43;
  uint uVar44;
  ulong uVar45;
  uint *puVar46;
  uint uVar47;
  uint uVar48;
  uint *puVar49;
  uint *puVar50;
  ulong uVar51;
  long in_FS_OFFSET;
  ObjectID local_68 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((this[0xdd4] != (EditorDebuggerTree)0x1) && (param_1 != (Object *)0x0)) &&
     (lVar36 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0), lVar36 != 0)) {
    TreeItem::get_metadata((int)(Variant *)local_58);
    uVar37 = Variant::operator_cast_to_unsigned_long((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    lVar36 = *(long *)(this + 0xdd8);
    if ((lVar36 != 0) && (*(int *)(this + 0xdfc) != 0)) {
      lVar6 = *(long *)(this + 0xdf0);
      uVar35 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xdf8) * 4);
      uVar51 = CONCAT44(0,uVar35);
      lVar7 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xdf8) * 8);
      uVar38 = uVar37 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar45 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar45 = 1;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar45 * lVar7;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar51;
      lVar41 = SUB168(auVar9 * auVar22,8);
      uVar44 = *(uint *)(lVar6 + lVar41 * 4);
      lVar41 = lVar41 * 4;
      if (uVar44 != 0) {
        iVar39 = SUB164(auVar9 * auVar22,8);
        uVar47 = 0;
        lVar42 = lVar41;
        uVar48 = uVar44;
        iVar40 = iVar39;
        do {
          if (((uint)uVar45 == uVar48) &&
             (lVar8 = *(long *)(this + 0xde0),
             uVar37 == *(ulong *)(lVar36 + (ulong)*(uint *)(lVar8 + lVar42) * 8))) {
            uVar48 = 0;
            goto LAB_00100edf;
          }
          uVar47 = uVar47 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(iVar40 + 1) * lVar7;
          auVar23._8_8_ = 0;
          auVar23._0_8_ = uVar51;
          lVar42 = SUB168(auVar10 * auVar23,8);
          uVar48 = *(uint *)(lVar6 + lVar42 * 4);
          iVar40 = SUB164(auVar10 * auVar23,8);
          lVar42 = lVar42 * 4;
        } while ((uVar48 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar48 * lVar7, auVar24._8_8_ = 0,
                auVar24._0_8_ = uVar51, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar35 + iVar40) - SUB164(auVar11 * auVar24,8)) * lVar7,
                auVar25._8_8_ = 0, auVar25._0_8_ = uVar51, uVar47 <= SUB164(auVar12 * auVar25,8)));
      }
    }
    HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(local_68);
  }
  goto LAB_00101050;
LAB_00100edf:
  do {
    if ((uint)uVar45 == uVar44) {
      uVar44 = *(uint *)(lVar8 + lVar41);
      uVar38 = (ulong)uVar44;
      if (uVar37 == *(ulong *)(lVar36 + uVar38 * 8)) {
        lVar42 = *(long *)(this + 0xde8);
        puVar2 = (uint *)(lVar42 + uVar38 * 4);
        uVar48 = *puVar2;
        uVar37 = (ulong)uVar48;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)(uVar48 + 1) * lVar7;
        auVar29._8_8_ = 0;
        auVar29._0_8_ = uVar51;
        lVar41 = SUB168(auVar16 * auVar29,8) * 4;
        uVar47 = SUB164(auVar16 * auVar29,8);
        uVar45 = (ulong)uVar47;
        puVar46 = (uint *)(lVar6 + lVar41);
        if ((*puVar46 == 0) ||
           (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)*puVar46 * lVar7, auVar30._8_8_ = 0,
           auVar30._0_8_ = uVar51, auVar18._8_8_ = 0,
           auVar18._0_8_ = (ulong)((uVar35 + uVar47) - SUB164(auVar17 * auVar30,8)) * lVar7,
           auVar31._8_8_ = 0, auVar31._0_8_ = uVar51, SUB164(auVar18 * auVar31,8) == 0)) {
          uVar45 = (ulong)uVar48;
        }
        else {
          while( true ) {
            puVar49 = (uint *)(lVar41 + lVar8);
            puVar1 = (uint *)(lVar8 + uVar37 * 4);
            puVar50 = (uint *)(uVar37 * 4 + lVar6);
            puVar3 = (undefined4 *)(lVar42 + (ulong)*puVar49 * 4);
            puVar4 = (undefined4 *)(lVar42 + (ulong)*puVar1 * 4);
            uVar5 = *puVar4;
            *puVar4 = *puVar3;
            *puVar3 = uVar5;
            uVar48 = *puVar46;
            *puVar46 = *puVar50;
            *puVar50 = uVar48;
            uVar48 = *puVar49;
            *puVar49 = *puVar1;
            *puVar1 = uVar48;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = (ulong)((int)uVar45 + 1) * lVar7;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar51;
            uVar43 = SUB168(auVar21 * auVar34,8);
            lVar41 = uVar43 * 4;
            puVar46 = (uint *)(lVar6 + lVar41);
            if ((*puVar46 == 0) ||
               (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)*puVar46 * lVar7, auVar32._8_8_ = 0,
               auVar32._0_8_ = uVar51, auVar20._8_8_ = 0,
               auVar20._0_8_ =
                    (ulong)((SUB164(auVar21 * auVar34,8) + uVar35) - SUB164(auVar19 * auVar32,8)) *
                    lVar7, auVar33._8_8_ = 0, auVar33._0_8_ = uVar51,
               SUB164(auVar20 * auVar33,8) == 0)) break;
            uVar37 = uVar45;
            uVar45 = uVar43 & 0xffffffff;
          }
        }
        *(undefined4 *)(lVar6 + uVar45 * 4) = 0;
        uVar35 = *(int *)(this + 0xdfc) - 1;
        *(uint *)(this + 0xdfc) = uVar35;
        if (uVar44 < uVar35) {
          uVar48 = *(uint *)(lVar42 + (ulong)uVar35 * 4);
          *(undefined8 *)(lVar36 + uVar38 * 8) = *(undefined8 *)(lVar36 + (ulong)uVar35 * 8);
          *puVar2 = uVar48;
          *(uint *)(lVar8 + (ulong)*(uint *)(lVar42 + (ulong)*(uint *)(this + 0xdfc) * 4) * 4) =
               uVar44;
        }
        break;
      }
    }
    uVar48 = uVar48 + 1;
    auVar13._8_8_ = 0;
    auVar13._0_8_ = (ulong)(iVar39 + 1) * lVar7;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar51;
    lVar41 = SUB168(auVar13 * auVar26,8);
    uVar44 = *(uint *)(lVar6 + lVar41 * 4);
    iVar39 = SUB164(auVar13 * auVar26,8);
    lVar41 = lVar41 * 4;
  } while ((uVar44 != 0) &&
          (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar44 * lVar7, auVar27._8_8_ = 0,
          auVar27._0_8_ = uVar51, auVar15._8_8_ = 0,
          auVar15._0_8_ = (ulong)((uVar35 + iVar39) - SUB164(auVar14 * auVar27,8)) * lVar7,
          auVar28._8_8_ = 0, auVar28._0_8_ = uVar51, uVar48 <= SUB164(auVar15 * auVar28,8)));
LAB_00101050:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorDebuggerTree::_scene_tree_rmb_selected(Vector2 const&, MouseButton) */

void __thiscall
EditorDebuggerTree::_scene_tree_rmb_selected
          (EditorDebuggerTree *this,undefined8 param_2,int param_3)

{
  Vector2i *pVVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  undefined8 uVar6;
  undefined8 uVar7;
  String local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  Object *local_78;
  undefined8 local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_3 == 2) {
    lVar5 = Tree::get_item_at_position((Vector2 *)this);
    if (lVar5 != 0) {
      TreeItem::select((int)lVar5);
      PopupMenu::clear(SUB81(*(undefined8 *)(this + 0xe00),0));
      local_78 = (Object *)&_LC0;
      local_88 = 0;
      uVar6 = *(undefined8 *)(this + 0xe00);
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_88);
      local_78 = (Object *)0x104cec;
      local_80 = 0;
      local_70 = 0x14;
      String::parse_latin1((StrRange *)&local_80);
      TTR(local_90,(String *)&local_80);
      if (_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#1}::operator()()::sname ==
          '\0') {
        iVar4 = __cxa_guard_acquire(&_scene_tree_rmb_selected(Vector2_const&,MouseButton)::
                                     {lambda()#1}::operator()()::sname);
        if (iVar4 != 0) {
          _scs_create((char *)&_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#1}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#1}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#1}::
                               operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_78);
      PopupMenu::add_icon_item(uVar6,(StringName *)&local_78,local_90,0,0);
      if (local_78 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_78;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_78);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))();
            Memory::free_static(pOVar2,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_78 = (Object *)&_LC0;
      local_88 = 0;
      uVar6 = *(undefined8 *)(this + 0xe00);
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_88);
      local_78 = (Object *)0x104d14;
      local_80 = 0;
      local_70 = 0xe;
      String::parse_latin1((StrRange *)&local_80);
      TTR(local_90,(String *)&local_80);
      if (_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#2}::operator()()::sname ==
          '\0') {
        iVar4 = __cxa_guard_acquire(&_scene_tree_rmb_selected(Vector2_const&,MouseButton)::
                                     {lambda()#2}::operator()()::sname);
        if (iVar4 != 0) {
          _scs_create((char *)&_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#2}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#2}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#2}::
                               operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_78);
      PopupMenu::add_icon_item(uVar6,(StringName *)&local_78,local_90,1,0);
      if (local_78 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_78;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_78);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))();
            Memory::free_static(pOVar2,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      local_78 = (Object *)&_LC0;
      local_88 = 0;
      uVar6 = *(undefined8 *)(this + 0xe00);
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_88);
      local_78 = (Object *)0x104d30;
      local_80 = 0;
      local_70 = 0x16;
      String::parse_latin1((StrRange *)&local_80);
      TTR(local_90,(String *)&local_80);
      if (_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#3}::operator()()::sname ==
          '\0') {
        iVar4 = __cxa_guard_acquire(&_scene_tree_rmb_selected(Vector2_const&,MouseButton)::
                                     {lambda()#3}::operator()()::sname);
        if (iVar4 != 0) {
          _scs_create((char *)&_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#3}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#3}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_scene_tree_rmb_selected(Vector2_const&,MouseButton)::{lambda()#3}::
                               operator()()::sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_78);
      PopupMenu::add_icon_item(uVar6,(StringName *)&local_78,local_90,2,0);
      if (local_78 != (Object *)0x0) {
        cVar3 = RefCounted::unreference();
        pOVar2 = local_78;
        if (cVar3 != '\0') {
          cVar3 = predelete_handler(local_78);
          if (cVar3 != '\0') {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      pVVar1 = *(Vector2i **)(this + 0xe00);
      uVar6 = CanvasItem::get_local_mouse_position();
      uVar7 = Control::get_screen_position();
      local_60 = CONCAT44((float)((ulong)uVar6 >> 0x20) + (float)((ulong)uVar7 >> 0x20),
                          (float)uVar6 + (float)uVar7);
      local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
      Window::set_position(pVVar1);
      Window::reset_size();
      local_58 = 0;
      local_50 = 0;
      (**(code **)(**(long **)(this + 0xe00) + 0x240))(*(long **)(this + 0xe00),&local_58);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* EditorDebuggerTree::_file_selected(String const&) */

void __thiscall EditorDebuggerTree::_file_selected(EditorDebuggerTree *this,String *param_1)

{
  Variant *pVVar1;
  int iVar2;
  int iVar3;
  Variant *pVVar4;
  long in_FS_OFFSET;
  undefined8 local_d8;
  undefined8 local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  Variant local_a8 [24];
  Variant local_90 [24];
  Variant local_78 [24];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xdc8) != 0) {
    iVar2 = *(int *)(this + 0xdd0);
    local_d8 = 0;
    if (*(long *)param_1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)param_1);
    }
    if (_file_selected(String_const&)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_file_selected(String_const&)::{lambda()#1}::operator()()::sname)
      ;
      if (iVar3 != 0) {
        _scs_create((char *)&_file_selected(String_const&)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_file_selected(String_const&)::{lambda()#1}::operator()()::sname,&__dso_handle
                    );
        __cxa_guard_release(&_file_selected(String_const&)::{lambda()#1}::operator()()::sname);
      }
    }
    local_d0 = *(undefined8 *)(this + 0xdc8);
    Variant::Variant(local_a8,(ObjectID *)&local_d0);
    Variant::Variant(local_90,(String *)&local_d8);
    Variant::Variant(local_78,iVar2);
    local_58 = (undefined1  [16])0x0;
    pVVar4 = local_48;
    local_60 = 0;
    local_c8 = local_a8;
    pVStack_c0 = local_90;
    local_b8 = local_78;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_file_selected(String_const&)::{lambda()#1}::operator()()::sname,&local_c8,3);
    do {
      pVVar1 = pVVar4 + -0x18;
      pVVar4 = pVVar4 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar4 != local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* EditorDebuggerTree::update_scene_tree(SceneDebuggerTree const*, int) */

void __thiscall
EditorDebuggerTree::update_scene_tree
          (EditorDebuggerTree *this,SceneDebuggerTree *param_1,int param_2)

{
  CowData *pCVar1;
  int *piVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  void *pvVar6;
  Object *pOVar7;
  bool bVar8;
  char cVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  Object *pOVar13;
  undefined8 *puVar14;
  long lVar15;
  undefined1 (*pauVar16) [16];
  TreeItem *pTVar17;
  long *plVar18;
  int iVar19;
  String *pSVar20;
  Variant *this_00;
  undefined1 (*pauVar21) [16];
  TreeItem *pTVar22;
  long in_FS_OFFSET;
  bool bVar23;
  int *local_1f8;
  Object *local_1d8;
  Object *local_1d0;
  String *local_188;
  TreeItem *local_180;
  TreeItem *local_178;
  EditorDebuggerTree local_12a;
  EditorDebuggerTree local_128 [8];
  long local_120;
  undefined8 local_118;
  String local_110 [8];
  undefined8 local_108;
  undefined8 local_100;
  String local_f8 [8];
  String local_f0 [8];
  undefined8 local_e8;
  String local_e0 [8];
  String local_d8 [8];
  Object *local_d0;
  undefined8 local_c8;
  long local_c0;
  Object *local_b8;
  undefined8 local_b0;
  long local_a8;
  long local_a0;
  Variant *local_98;
  Variant *local_90;
  Variant *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 auStack_70 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::set_hide_root(SUB81(this,0));
  this[0xdd4] = (EditorDebuggerTree)0x1;
  get_selected_path(local_128);
  SceneTreeDock::get_filter();
  local_88 = (Variant *)0x0;
  String::parse_latin1((String *)&local_88,"docks/scene_tree/hide_filtered_out_parents");
  _EDITOR_GET((String *)&local_58);
  bVar8 = Variant::operator_cast_to_bool((Variant *)&local_58);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_12a = this[0xdd5];
  if (local_12a == (EditorDebuggerTree)0x0) {
    local_12a = (EditorDebuggerTree)
                String::operator!=((String *)&local_120,(String *)(this + 0xe10));
  }
  this[0xdd5] = (EditorDebuggerTree)0x0;
  if ((*(undefined8 **)param_1 == (undefined8 *)0x0) ||
     (local_1f8 = (int *)**(undefined8 **)param_1, local_1f8 == (int *)0x0)) {
    pauVar16 = (undefined1 (*) [16])0x0;
    *(int *)(this + 0xdd0) = param_2;
  }
  else {
    local_1d0 = (Object *)0x0;
    pTVar22 = (TreeItem *)0x0;
    local_1d8 = (Object *)0x0;
    local_178 = (TreeItem *)0x0;
    local_180 = (TreeItem *)0x0;
    pauVar16 = (undefined1 (*) [16])0x0;
LAB_00101b08:
    pOVar13 = (Object *)Tree::create_item((TreeItem *)this,(int)pTVar22);
    local_88 = (Variant *)0x0;
    pCVar1 = (CowData *)(local_1f8 + 2);
    if (*(long *)(local_1f8 + 2) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,pCVar1);
    }
    TreeItem::set_text(pOVar13,0,(String *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    iVar19 = (int)pOVar13;
    if ((*(long *)(local_1f8 + 8) == 0) || (*(uint *)(*(long *)(local_1f8 + 8) + -8) < 2)) {
      local_a0 = 0;
      local_88 = (Variant *)&_LC52;
      local_80 = 1;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = (Variant *)&_LC0;
      local_b8 = (Object *)0x0;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_b8);
      local_88 = (Variant *)0x104d7a;
      local_c0 = 0;
      local_80 = 5;
      String::parse_latin1((StrRange *)&local_c0);
      TTR((String *)&local_b0,(String *)&local_c0);
      local_88 = (Variant *)&_LC54;
      local_d0 = (Object *)0x0;
      local_80 = 1;
      String::parse_latin1((StrRange *)&local_d0);
      String::operator+((String *)&local_c8,(String *)pCVar1);
      String::operator+((String *)&local_a8,(String *)&local_c8);
      String::operator+((String *)&local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,(String *)&local_98);
      TreeItem::set_tooltip_text(iVar19,(String *)0x0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      pSVar20 = (String *)&local_c8;
    }
    else {
      local_a0 = 0;
      String::parse_latin1((String *)&local_a0," ");
      local_b8 = (Object *)0x0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = 0;
      String::parse_latin1((String *)&local_c0,"Type:");
      TTR((String *)&local_b0,(String *)&local_c0);
      local_d0 = (Object *)0x0;
      String::parse_latin1((String *)&local_d0,"\n");
      pSVar20 = (String *)&local_e8;
      local_e8 = 0;
      String::parse_latin1(pSVar20," ");
      local_100 = 0;
      String::parse_latin1((String *)&local_100,"");
      local_108 = 0;
      String::parse_latin1((String *)&local_108,"Instance:");
      TTR(local_f8,(String *)&local_108);
      local_118 = 0;
      String::parse_latin1((String *)&local_118,"\n");
      String::operator+(local_110,(String *)pCVar1);
      String::operator+(local_f0,local_110);
      String::operator+(local_e0,local_f0);
      String::operator+(local_d8,local_e0);
      String::operator+((String *)&local_c8,local_d8);
      String::operator+((String *)&local_a8,(String *)&local_c8);
      String::operator+((String *)&local_98,(String *)&local_a8);
      String::operator+((String *)&local_88,(String *)&local_98);
      TreeItem::set_tooltip_text(iVar19,(String *)0x0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
    }
    local_188 = (String *)(local_1f8 + 4);
    CowData<char32_t>::_unref((CowData<char32_t> *)pSVar20);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    pSVar20 = EditorNode::singleton;
    local_98 = (Variant *)0x0;
    local_88 = (Variant *)&_LC0;
    local_80 = 0;
    String::parse_latin1((StrRange *)&local_98);
    EditorNode::get_class_icon((String *)&local_d0,pSVar20);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (local_d0 != (Object *)0x0) {
      TreeItem::set_icon(iVar19,(Ref *)0x0);
    }
    Variant::Variant((Variant *)&local_58,(ObjectID *)(local_1f8 + 6));
    TreeItem::set_metadata(iVar19,(Variant *)0x0);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    local_c8 = 0;
    if (pTVar22 != (TreeItem *)0x0) {
      pcVar4 = *(code **)(*(long *)pTVar22 + 0xb8);
      auStack_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_98,"node_path",false);
      (*pcVar4)((String *)&local_58,pTVar22,(String *)&local_98,&local_78);
      Variant::operator_cast_to_String((Variant *)&local_88);
      String::operator+=((String *)&local_c8,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != (Variant *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      cVar9 = HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_lookup_pos
                        ((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>
                          *)(this + 0xdd8),*(ObjectID **)(local_1f8 + 6),(uint *)&local_88);
      if (cVar9 == '\0') {
        TreeItem::set_collapsed(SUB81(pOVar13,0));
      }
    }
    pcVar4 = *(code **)(*(long *)pOVar13 + 0xa8);
    TreeItem::get_text((int)(StrRange *)&local_a0);
    local_88 = (Variant *)&_LC56;
    local_b0 = 0;
    local_80 = 1;
    String::parse_latin1((StrRange *)&local_b0);
    String::operator+((String *)&local_a8,(String *)&local_c8);
    String::operator+((String *)&local_98,(String *)&local_a8);
    Variant::Variant((Variant *)&local_58,(String *)&local_98);
    StringName::StringName((StringName *)&local_88,"node_path",false);
    (*pcVar4)(pOVar13,(String *)&local_88,(String *)&local_58);
    if ((StringName::configured != '\0') && (local_88 != (Variant *)0x0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
    if (*(int *)(this + 0xdd0) == param_2) {
      if (*(long *)(local_1f8 + 6) == *(long *)(this + 0xdc8)) {
        if (this[0xdd6] != (EditorDebuggerTree)0x0) {
          this[0xdd6] = (EditorDebuggerTree)0x0;
          this[0xdd4] = (EditorDebuggerTree)0x0;
          TreeItem::uncollapse_tree();
          this[0xdd4] = (EditorDebuggerTree)0x1;
        }
        local_1d8 = pOVar13;
        if (local_12a != (EditorDebuggerTree)0x0) {
          local_1d0 = pOVar13;
        }
      }
    }
    else {
      pcVar4 = *(code **)(*(long *)pOVar13 + 0xb8);
      auStack_70 = (undefined1  [16])0x0;
      local_78 = 0;
      StringName::StringName((StringName *)&local_98,"node_path",false);
      (*pcVar4)((String *)&local_58,pOVar13,(String *)&local_98,&local_78);
      Variant::operator_cast_to_String((Variant *)&local_88);
      cVar9 = String::operator==((String *)local_128,(String *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_98 != (Variant *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar9 != '\0') {
        if (local_12a != (EditorDebuggerTree)0x0) {
          local_1d0 = pOVar13;
        }
        this[0xdd4] = (EditorDebuggerTree)0x1;
        local_1d8 = pOVar13;
      }
    }
    local_78 = __LC57;
    auStack_70._0_8_ = _UNK_0010b808;
    iVar11 = (int)(StrRange *)&local_b8;
    if ((*(long *)(local_1f8 + 8) != 0) && (1 < *(uint *)(*(long *)(local_1f8 + 8) + -8))) {
      local_c0 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(local_1f8 + 8));
      if ((update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#1}::operator()()::sname ==
           '\0') &&
         (iVar12 = __cxa_guard_acquire(&update_scene_tree(SceneDebuggerTree_const*,int)::
                                        {lambda()#1}::operator()()::sname), iVar12 != 0)) {
        _scs_create((char *)&update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#1}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#1}::operator()()::
                      sname,&__dso_handle);
        __cxa_guard_release(&update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#1}::
                             operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_b8);
      local_98 = (Variant *)0x0;
      if (local_c0 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_c0);
      }
      local_a0 = 0;
      local_88 = (Variant *)&_LC0;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_a0);
      local_88 = (Variant *)0x104f88;
      local_a8 = 0;
      local_80 = 0x6a;
      String::parse_latin1((StrRange *)&local_a8);
      TTR((String *)&local_88,(String *)&local_a8);
      vformat<String>((String *)&local_b0,(String *)&local_88,(String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      pcVar4 = *(code **)(*(long *)pOVar13 + 0xa8);
      Variant::Variant((Variant *)&local_58,(String *)&local_c0);
      StringName::StringName((StringName *)&local_88,"scene_file_path",false);
      (*pcVar4)(pOVar13,(String *)&local_88,(String *)&local_58);
      if ((StringName::configured != '\0') && (local_88 != (Variant *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      TreeItem::add_button(iVar19,(Ref *)0x0,iVar11,false,(String *)0x0);
      iVar12 = TreeItem::get_button_count(iVar19);
      TreeItem::set_button_color(iVar19,0,(Color *)(ulong)(iVar12 - 1));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (((local_b8 != (Object *)0x0) &&
          (cVar9 = RefCounted::unreference(), pOVar7 = local_b8, cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_b8), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    }
    bVar3 = *(byte *)(local_1f8 + 10);
    if ((bVar3 & 2) != 0) {
      bVar23 = (bVar3 & 4) == 0;
      if (bVar23) {
        if ((update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#3}::operator()()::sname ==
             '\0') &&
           (iVar12 = __cxa_guard_acquire(&update_scene_tree(SceneDebuggerTree_const*,int)::
                                          {lambda()#3}::operator()()::sname), iVar12 != 0)) {
          _scs_create((char *)&update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#3}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#3}::operator()()
                        ::sname,&__dso_handle);
          __cxa_guard_release(&update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#3}::
                               operator()()::sname);
        }
      }
      else if ((update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#2}::operator()()::sname
                == '\0') &&
              (iVar12 = __cxa_guard_acquire(&update_scene_tree(SceneDebuggerTree_const*,int)::
                                             {lambda()#2}::operator()()::sname), iVar12 != 0)) {
        _scs_create((char *)&update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#2}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#2}::operator()()::
                      sname,&__dso_handle);
        __cxa_guard_release(&update_scene_tree(SceneDebuggerTree_const*,int)::{lambda()#2}::
                             operator()()::sname);
      }
      Control::get_editor_theme_icon((StringName *)&local_b8);
      local_88 = (Variant *)&_LC0;
      local_98 = (Variant *)0x0;
      local_80 = 0;
      String::parse_latin1((StrRange *)&local_98);
      local_88 = (Variant *)0x104dd7;
      local_a0 = 0;
      local_80 = 0x11;
      String::parse_latin1((StrRange *)&local_a0);
      TTR((String *)&local_b0,(String *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      pcVar4 = *(code **)(*(long *)pOVar13 + 0xa8);
      Variant::Variant((Variant *)&local_58,!bVar23);
      StringName::StringName((StringName *)&local_88,"visible",false);
      (*pcVar4)(pOVar13,(String *)&local_88,(String *)&local_58);
      if ((StringName::configured != '\0') && (local_88 != (Variant *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      TreeItem::add_button(iVar19,(Ref *)0x0,iVar11,true,(String *)0x0);
      StringName::StringName((StringName *)&local_a0,"CanvasItem",false);
      StringName::StringName((StringName *)&local_a8,local_188,false);
      cVar9 = ClassDB::is_parent_class((StringName *)&local_a8,(StringName *)&local_a0);
      if (cVar9 == '\0') {
        StringName::StringName((StringName *)&local_88,"Node3D",false);
        StringName::StringName((StringName *)&local_98,local_188,false);
        cVar9 = ClassDB::is_parent_class((StringName *)&local_98,(StringName *)&local_88);
        if (((StringName::configured != '\0') &&
            ((local_98 == (Variant *)0x0 || (StringName::unref(), StringName::configured != '\0'))))
           && ((local_88 == (Variant *)0x0 || (StringName::unref(), StringName::configured != '\0'))
              )) goto LAB_001021da;
LAB_0010220f:
        if (cVar9 != '\0') goto LAB_00102218;
        iVar11 = TreeItem::get_button_count(iVar19);
        TreeItem::set_button_color(iVar19,0,(Color *)(ulong)(iVar11 - 1));
      }
      else {
        cVar9 = StringName::configured;
        if (StringName::configured != '\0') {
LAB_001021da:
          if (local_a8 != 0) {
            StringName::unref();
          }
          if ((StringName::configured != '\0') && (local_a0 != 0)) {
            StringName::unref();
          }
          goto LAB_0010220f;
        }
LAB_00102218:
        if ((bVar3 & 8) == 0) {
          local_58 = __LC66;
          uStack_50 = _UNK_0010b818;
        }
        else {
          local_58 = local_78;
          uStack_50 = auStack_70._0_8_;
        }
        iVar11 = TreeItem::get_button_count(iVar19);
        TreeItem::set_button_color(iVar19,0,(Color *)(ulong)(iVar11 - 1));
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (((local_b8 != (Object *)0x0) &&
          (cVar9 = RefCounted::unreference(), pOVar7 = local_b8, cVar9 != '\0')) &&
         (cVar9 = predelete_handler(local_b8), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
    }
    iVar19 = (int)(String *)&local_88;
    if (*local_1f8 == 0) {
      if (pTVar22 != (TreeItem *)0x0) {
        while( true ) {
          bVar23 = true;
          lVar15 = TreeItem::get_prev();
          if (lVar15 == 0) {
            lVar15 = TreeItem::get_next();
            bVar23 = lVar15 != 0;
          }
          TreeItem::get_text(iVar19);
          cVar9 = String::is_subsequence_ofn((String *)&local_120);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          if (cVar9 != '\0') break;
          TreeItem::remove_child(pTVar22);
          cVar9 = predelete_handler(pOVar13);
          if (cVar9 != '\0') {
            (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
            Memory::free_static(pOVar13,false);
          }
          if ((local_1d8 == pOVar13) || (local_1d0 == pOVar13)) {
            local_1d0 = (Object *)0x0;
            local_1d8 = (Object *)0x0;
          }
          if (bVar23) break;
          pTVar17 = (TreeItem *)TreeItem::get_parent();
          if (pauVar16 != (undefined1 (*) [16])0x0) {
            for (plVar18 = *(long **)*pauVar16; plVar18 != (long *)0x0; plVar18 = (long *)plVar18[2]
                ) {
              if ((TreeItem *)*plVar18 == pTVar22) goto LAB_00102305;
            }
          }
          pOVar13 = (Object *)pTVar22;
          pTVar22 = pTVar17;
          if (pTVar17 == (TreeItem *)0x0) break;
        }
      }
    }
    else {
      TreeItem::get_text(iVar19);
      uVar10 = String::is_subsequence_ofn((String *)&local_120);
      iVar11 = *local_1f8;
      if (pauVar16 == (undefined1 (*) [16])0x0) {
        pauVar16 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined4 *)pauVar16[1] = 0;
        *pauVar16 = (undefined1  [16])0x0;
      }
      puVar14 = (undefined8 *)operator_new(0x28,DefaultAllocator::alloc);
      lVar15 = *(long *)*pauVar16;
      puVar14[3] = 0;
      *puVar14 = pOVar13;
      *(int *)(puVar14 + 1) = iVar11;
      *(undefined1 *)((long)puVar14 + 0xc) = uVar10;
      puVar14[2] = lVar15;
      puVar14[4] = pauVar16;
      if (lVar15 != 0) {
        *(undefined8 **)(lVar15 + 0x18) = puVar14;
      }
      lVar15 = *(long *)(*pauVar16 + 8);
      *(undefined8 **)*pauVar16 = puVar14;
      if (lVar15 == 0) {
        *(undefined8 **)(*pauVar16 + 8) = puVar14;
      }
      *(int *)pauVar16[1] = *(int *)pauVar16[1] + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    }
LAB_00102305:
    if (local_180 != (TreeItem *)0x0) {
      TreeItem::get_children();
      cVar9 = Array::is_empty();
      if (cVar9 == '\0') {
        Array::begin();
        Array::end();
        if (local_98 != local_88) {
          do {
            this_00 = local_98;
            if (local_90 != (Variant *)0x0) {
              Variant::operator=(local_90,local_98);
              this_00 = local_90;
            }
            pOVar13 = Variant::operator_cast_to_Object_(this_00);
            if (pOVar13 != (Object *)0x0) {
              __dynamic_cast(pOVar13,&Object::typeinfo,&TreeItem::typeinfo,0);
            }
            TreeItem::remove_child(local_180);
            TreeItem::add_child(local_178);
            local_98 = local_98 + 0x18;
          } while (local_98 != local_88);
        }
        pTVar22 = (TreeItem *)TreeItem::get_parent();
        TreeItem::remove_child(pTVar22);
        cVar9 = predelete_handler((Object *)local_180);
        if (cVar9 != '\0') {
          (**(code **)(*(long *)local_180 + 0x140))(local_180);
          Memory::free_static(local_180,false);
        }
        if ((local_1d8 == (Object *)local_180) || (local_1d0 == (Object *)local_180)) {
          local_1d0 = (Object *)0x0;
          local_1d8 = (Object *)0x0;
        }
      }
      Array::~Array((Array *)&local_a0);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if (((local_d0 != (Object *)0x0) &&
        (cVar9 = RefCounted::unreference(), pOVar13 = local_d0, cVar9 != '\0')) &&
       (cVar9 = predelete_handler(local_d0), cVar9 != '\0')) {
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
    }
    local_1f8 = *(int **)(local_1f8 + 0xc);
    if (local_1f8 != (int *)0x0) {
      if ((pauVar16 == (undefined1 (*) [16])0x0) || (*(int *)pauVar16[1] == 0)) {
        local_178 = (TreeItem *)0x0;
        pTVar22 = (TreeItem *)0x0;
        local_180 = (TreeItem *)0x0;
      }
      else {
        local_178 = (TreeItem *)0x0;
        puVar14 = *(undefined8 **)*pauVar16;
        local_180 = (TreeItem *)0x0;
        piVar2 = (int *)(puVar14 + 1);
        *piVar2 = *piVar2 + -1;
        pTVar22 = (TreeItem *)*puVar14;
        if (*piVar2 == 0) {
          if (pauVar16 == (undefined1 (*) [16])puVar14[4]) {
            lVar15 = puVar14[2];
            lVar5 = puVar14[3];
            *(long *)*pauVar16 = lVar15;
            if (puVar14 == *(undefined8 **)(*pauVar16 + 8)) {
              *(long *)(*pauVar16 + 8) = lVar5;
            }
            if (lVar5 != 0) {
              *(long *)(lVar5 + 0x10) = lVar15;
              lVar15 = puVar14[2];
            }
            if (lVar15 != 0) {
              *(long *)(lVar15 + 0x18) = lVar5;
            }
            Memory::free_static(puVar14,false);
            iVar11 = *(int *)pauVar16[1] + -1;
            *(int *)pauVar16[1] = iVar11;
          }
          else {
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
            iVar11 = *(int *)pauVar16[1];
          }
          pauVar21 = pauVar16;
          if (iVar11 == 0) {
            pauVar21 = (undefined1 (*) [16])0x0;
            Memory::free_static(pauVar16,false);
          }
          pauVar16 = pauVar21;
          if (bVar8) {
            TreeItem::get_text(iVar19);
            cVar9 = String::is_subsequence_ofn((String *)&local_120);
            if (cVar9 == '\0') {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              pTVar17 = (TreeItem *)Tree::get_root();
              if (pTVar22 != pTVar17) {
                local_180 = pTVar22;
                if ((pauVar21 != (undefined1 (*) [16])0x0) &&
                   (plVar18 = *(long **)*pauVar21, plVar18 != (long *)0x0)) {
                  while (local_178 = (TreeItem *)*plVar18, *(char *)((long)plVar18 + 0xc) == '\0') {
                    pTVar17 = (TreeItem *)Tree::get_root();
                    if ((local_178 == pTVar17) ||
                       (plVar18 = (long *)plVar18[2], plVar18 == (long *)0x0)) break;
                  }
                  if (local_178 != (TreeItem *)0x0) goto LAB_00101b08;
                }
                local_178 = (TreeItem *)Tree::get_root();
                goto LAB_00101b08;
              }
              Tree::set_hide_root(SUB81(this,0));
            }
            else {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            }
          }
          local_178 = (TreeItem *)0x0;
          local_180 = (TreeItem *)0x0;
        }
      }
      goto LAB_00101b08;
    }
    *(int *)(this + 0xdd0) = param_2;
    if (local_1d8 != (Object *)0x0) {
      TreeItem::select((int)local_1d8);
    }
    if (local_1d0 != (Object *)0x0) {
      Tree::scroll_to_item((TreeItem *)this,SUB81(local_1d0,0));
    }
  }
  if (*(long *)(this + 0xe10) != local_120) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xe10),(CowData *)&local_120);
  }
  this[0xdd4] = (EditorDebuggerTree)0x0;
  if (pauVar16 != (undefined1 (*) [16])0x0) {
    do {
      while( true ) {
        pvVar6 = *(void **)*pauVar16;
        if (pvVar6 == (void *)0x0) {
          if (*(int *)pauVar16[1] != 0) {
            _err_print_error("~List","./core/templates/list.h",0x316,
                             "Condition \"_data->size_cache\" is true.",0,0);
            goto LAB_00102da7;
          }
          goto LAB_00102d9d;
        }
        if (*(undefined1 (**) [16])((long)pvVar6 + 0x20) != pauVar16) break;
        lVar15 = *(long *)((long)pvVar6 + 0x10);
        lVar5 = *(long *)((long)pvVar6 + 0x18);
        *(long *)*pauVar16 = lVar15;
        if (pvVar6 == *(void **)(*pauVar16 + 8)) {
          *(long *)(*pauVar16 + 8) = lVar5;
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar15;
          lVar15 = *(long *)((long)pvVar6 + 0x10);
        }
        if (lVar15 != 0) {
          *(long *)(lVar15 + 0x18) = lVar5;
        }
        Memory::free_static(pvVar6,false);
        pauVar21 = pauVar16 + 1;
        *(int *)*pauVar21 = *(int *)*pauVar21 + -1;
        if (*(int *)*pauVar21 == 0) goto LAB_00102d9d;
      }
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    } while (*(int *)pauVar16[1] != 0);
LAB_00102d9d:
    Memory::free_static(pauVar16,false);
  }
LAB_00102da7:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerTree::get_drag_data(Vector2 const&) */

EditorDebuggerTree * __thiscall
EditorDebuggerTree::get_drag_data(EditorDebuggerTree *this,Vector2 *param_1)

{
  Object *pOVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  BoxContainer *this_00;
  TextureRect *this_01;
  Label *this_02;
  long lVar5;
  long in_FS_OFFSET;
  Object *local_78;
  String local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  Object *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar3 = Tree::get_button_id_at_position(param_1);
  if ((iVar3 != -1) || (lVar4 = Tree::get_selected(), lVar4 == 0)) {
    *(undefined4 *)this = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
    goto LAB_00103336;
  }
  TreeItem::get_text((int)(String *)&local_78);
  if ((get_drag_data(Vector2_const&)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&get_drag_data(Vector2_const&)::{lambda()#1}::operator()()::sname)
     , iVar3 != 0)) {
    _scs_create((char *)&get_drag_data(Vector2_const&)::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &get_drag_data(Vector2_const&)::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&get_drag_data(Vector2_const&)::{lambda()#1}::operator()()::sname);
  }
  iVar3 = Control::get_theme_constant
                    ((StringName *)param_1,
                     (StringName *)&get_drag_data(Vector2_const&)::{lambda()#1}::operator()()::sname
                    );
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,false);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010ab18;
  postinitialize_handler((Object *)this_00);
  this_01 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_01);
  postinitialize_handler((Object *)this_01);
  TreeItem::get_icon((int)(String *)&local_58);
  TextureRect::set_texture((Ref *)this_01);
  if (((local_58 != (Object *)0x0) &&
      (cVar2 = RefCounted::unreference(), pOVar1 = local_58, cVar2 != '\0')) &&
     (cVar2 = predelete_handler(local_58), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))();
    Memory::free_static(pOVar1,false);
  }
  local_48 = CONCAT44((float)iVar3,(float)iVar3);
  Control::set_custom_minimum_size((Vector2 *)this_01);
  TextureRect::set_stretch_mode(this_01,5);
  TextureRect::set_expand_mode(this_01,1);
  Node::add_child(this_00,this_01,0,0);
  this_02 = (Label *)operator_new(0xad8,"");
  Label::Label(this_02,(String *)&local_78);
  postinitialize_handler((Object *)this_02);
  Node::add_child(this_00,this_02,0,0);
  Control::set_drag_preview((Control *)param_1);
  lVar4 = TreeItem::get_parent();
  if (lVar4 == 0) {
LAB_00103660:
    String::parse_latin1((String *)&local_78,".");
  }
  else {
    TreeItem::get_parent();
    lVar4 = TreeItem::get_parent();
    if (lVar4 == 0) goto LAB_00103660;
    while( true ) {
      TreeItem::get_parent();
      lVar4 = TreeItem::get_parent();
      lVar5 = Tree::get_root();
      if (lVar4 == lVar5) break;
      TreeItem::get_parent();
      local_68 = 0;
      local_50 = 1;
      local_58 = (Object *)&_LC56;
      String::parse_latin1((StrRange *)&local_68);
      TreeItem::get_text((int)local_70);
      String::operator+((String *)&local_60,local_70);
      String::operator+((String *)&local_58,(String *)&local_60);
      if (local_78 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_58;
        local_58 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
  }
  local_60 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_78);
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"\"%s\"");
  vformat<String>((String *)&local_58,(String *)&local_68,(CowData<char32_t> *)&local_60);
  Variant::Variant((Variant *)this,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_00103336:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return this;
}



/* EditorDebuggerTree::_item_menu_id_pressed(int) */

void __thiscall EditorDebuggerTree::_item_menu_id_pressed(EditorDebuggerTree *this,int param_1)

{
  String *pSVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  long lVar5;
  wchar32 wVar6;
  long in_FS_OFFSET;
  Object *local_90;
  long *local_78;
  String local_70 [8];
  EditorDebuggerTree local_68 [8];
  CowData<char32_t> local_60 [8];
  undefined8 local_58;
  Object *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 1) {
    get_selected_path((EditorDebuggerTree *)&local_50);
    if ((local_50 != (Object *)0x0) && (1 < *(uint *)(local_50 + -8))) {
      cVar2 = String::operator==((String *)&local_50,"/root");
      if (cVar2 == '\0') {
        String::replace((char *)&local_48,(char *)&local_50);
        if (local_50 != local_48) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          local_50 = local_48;
          local_48 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        wVar6 = (wchar32)(EditorDebuggerTree *)&local_50;
        iVar3 = String::find_char(wVar6,0x2f);
        if (iVar3 < 0) goto LAB_00103bb0;
        String::substr((int)(CowData<char32_t> *)&local_48,wVar6);
        if (local_50 != local_48) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          local_50 = local_48;
          local_48 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
      else {
LAB_00103bb0:
        String::parse_latin1((String *)&local_50,".");
      }
      (**(code **)(*DisplayServer::singleton + 0x3b0))
                (DisplayServer::singleton,(EditorDebuggerTree *)&local_50);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else if (param_1 == 2) {
    lVar5 = Tree::get_selected();
    if ((lVar5 != 0) || (lVar5 = Tree::get_root(), lVar5 != 0)) {
      TreeItem::is_any_collapsed(SUB81(lVar5,0));
      TreeItem::set_collapsed_recursive(SUB81(lVar5,0));
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Tree::ensure_cursor_is_visible();
        return;
      }
      goto LAB_00103bed;
    }
  }
  else if (param_1 == 0) {
    EditorFileDialog::set_access(*(undefined8 *)(this + 0xe08));
    EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xe08),4);
    local_78 = (long *)0x0;
    local_90 = (Object *)operator_new(0x248,"");
    PackedScene::PackedScene((PackedScene *)local_90);
    postinitialize_handler(local_90);
    cVar2 = RefCounted::init_ref();
    local_48 = (Object *)0x0;
    if (cVar2 == '\0') {
      local_90 = (Object *)0x0;
    }
    else {
      pOVar4 = (Object *)__dynamic_cast(local_90,&Object::typeinfo,&Resource::typeinfo,0);
      if ((pOVar4 != (Object *)0x0) &&
         (local_48 = pOVar4, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
        local_48 = (Object *)0x0;
      }
    }
    ResourceSaver::get_recognized_extensions((Ref *)&local_48,(List *)&local_78);
    if (((local_48 != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar4 = local_48, cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_48), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
      Memory::free_static(pOVar4,false);
    }
    EditorFileDialog::clear_filters();
    if (local_78 != (long *)0x0) {
      for (lVar5 = *local_78; lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
        pSVar1 = *(String **)(this + 0xe08);
        String::to_upper();
        operator+((char *)&local_50,(String *)&_LC80);
        EditorFileDialog::add_filter(pSVar1,(String *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      }
    }
    String::to_lower();
    local_58 = 0;
    String::parse_latin1((String *)&local_58,".");
    get_selected_path(local_68);
    String::get_file();
    String::operator+((String *)&local_50,(String *)local_60);
    String::operator+(local_70,(String *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    CowData<char32_t>::_unref(local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    EditorFileDialog::set_current_path(*(String **)(this + 0xe08));
    EditorFileDialog::popup_file_dialog();
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
    if (((local_90 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_90), cVar2 != '\0')) {
      (**(code **)(*(long *)local_90 + 0x140))(local_90);
      Memory::free_static(local_90,false);
    }
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_78);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103bed:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerTree::_bind_methods() */

void EditorDebuggerTree::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  long in_FS_OFFSET;
  undefined8 local_228;
  undefined8 local_220;
  long local_218;
  undefined8 local_210;
  undefined8 local_208;
  long local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8 [6];
  long local_1a8;
  CowData local_1a0 [8];
  StringName local_198 [8];
  undefined4 local_190;
  CowData local_188 [8];
  undefined4 local_180;
  undefined8 local_178;
  CowData local_170 [8];
  StringName local_168 [8];
  undefined4 local_160;
  CowData local_158 [8];
  undefined4 local_150;
  undefined8 local_148;
  undefined8 local_140;
  StringName local_138 [8];
  undefined4 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  StringName local_108 [8];
  undefined4 local_100;
  undefined8 local_f8;
  undefined4 local_f0;
  char *local_e8;
  undefined8 local_e0;
  StringName local_d8 [8];
  undefined4 local_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_b8 = "";
  local_1a8 = 0;
  local_1d8[0] = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)local_1d8);
  local_1e0 = 0;
  local_b8 = "debugger";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_1e0);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_118,2,(StrRange *)&local_1e0,0,(StrRange *)local_1d8,6,
             (PropertyInfo *)&local_1a8);
  local_b8 = "";
  local_1e8 = 0;
  local_1f0 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1f8 = 0;
  local_b8 = "object_id";
  local_b0 = 9;
  String::parse_latin1((StrRange *)&local_1f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_148,2,(StrRange *)&local_1f8,0,(StrRange *)&local_1f0,6,
             &local_1e8);
  local_178 = 0;
  local_b8 = "object_selected";
  local_b0 = 0xf;
  String::parse_latin1((StrRange *)&local_178);
  local_a8 = (undefined1  [16])0x0;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_178);
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,(undefined4)local_118);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  StringName::StringName(local_d8,local_108);
  local_c8 = 0;
  local_d0 = local_100;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  local_200 = 0;
  local_e8 = "EditorDebuggerTree";
  local_e0 = 0x12;
  String::parse_latin1((StrRange *)&local_200);
  StringName::StringName((StringName *)&local_e8,(String *)&local_200,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_200);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_1d8);
  if ((StringName::configured != '\0') && (local_1a8 != 0)) {
    StringName::unref();
  }
  local_1e8 = 0;
  local_1f0 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_1f0);
  local_1f8 = 0;
  local_b8 = "debugger";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_1f8);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_178,2,(StrRange *)&local_1f8,0,(StrRange *)&local_1f0,6,
             &local_1e8);
  local_b8 = "";
  local_200 = 0;
  local_208 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_208);
  local_210 = 0;
  local_b8 = "filename";
  local_b0 = 8;
  String::parse_latin1((StrRange *)&local_210);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1a8,4,(StrRange *)&local_210,0,(StrRange *)&local_208,6,
             (StrRange *)&local_200);
  local_b8 = "";
  local_218 = 0;
  local_220 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_220);
  local_b8 = "object_id";
  local_228 = 0;
  local_b0 = 9;
  String::parse_latin1((StrRange *)&local_228);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_1d8,2,(StrRange *)&local_228,0,(StrRange *)&local_220,6,
             &local_218);
  local_b8 = "save_node";
  local_1e0 = 0;
  local_b0 = 9;
  String::parse_latin1((StrRange *)&local_1e0);
  local_a8 = (undefined1  [16])0x0;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_1e0);
  local_110 = 0;
  local_118 = CONCAT44(local_118._4_4_,(undefined4)local_178);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_110,local_170);
  StringName::StringName(local_108,local_168);
  local_f8 = 0;
  local_100 = local_160;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,local_158);
  local_140 = 0;
  local_f0 = local_150;
  local_148 = CONCAT44(local_148._4_4_,(undefined4)local_1a8);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_140,local_1a0);
  StringName::StringName(local_138,local_198);
  local_128 = 0;
  local_130 = local_190;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,local_188);
  local_120 = local_180;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)local_1d8);
  local_e0 = 0;
  local_e8 = (char *)CONCAT44(local_e8._4_4_,(undefined4)local_118);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e0,(CowData *)&local_110);
  StringName::StringName(local_d8,local_108);
  local_c8 = 0;
  local_d0 = local_100;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_f8);
  local_c0 = local_f0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_148);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,(PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_148);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_118);
  local_e8 = "EditorDebuggerTree";
  local_118 = 0;
  local_e0 = 0x12;
  String::parse_latin1((StrRange *)&local_118);
  StringName::StringName((StringName *)&local_e8,(String *)&local_118,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e0);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_1d8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  if ((StringName::configured != '\0') && (local_218 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_210);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_208);
  if ((StringName::configured != '\0') && (local_200 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_178);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1f0);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  local_118 = 0;
  local_b8 = "open";
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_118);
  local_a8 = (undefined1  [16])0x0;
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_118);
  local_e8 = "EditorDebuggerTree";
  local_148 = 0;
  local_e0 = 0x12;
  String::parse_latin1((StrRange *)&local_148);
  StringName::StringName((StringName *)&local_e8,(String *)&local_148,false);
  ClassDB::add_signal((StringName *)&local_e8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_e8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
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



/* Control::_top_level_changed() */

void Control::_top_level_changed(void)

{
  return;
}



/* EditorDebuggerTree::is_class_ptr(void*) const */

uint EditorDebuggerTree::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x10b5,in_RSI == &Tree::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b5,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b6,in_RSI == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10b6,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Object*> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, Vector2 const&,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, Object*>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Object*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerTree,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,int>::get_argument_count
          (CallableCustomMethodPointer<EditorDebuggerTree,void,int> *this,bool *param_1)

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



/* CallableCustomMethodPointer<EditorDebuggerTree, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* EditorDebuggerTree::_property_get_revertv(StringName const&, Variant&) const */

undefined8 EditorDebuggerTree::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
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



/* EditorDebuggerTree::_property_can_revertv(StringName const&) const */

undefined8 EditorDebuggerTree::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0010e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Object*>::get_object
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Object*> *this)

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
      goto LAB_0010510d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010510d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010510d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&>::get_object
          (CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&> *this)

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
      goto LAB_0010520d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010520d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010520d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,int>::get_object
          (CallableCustomMethodPointer<EditorDebuggerTree,void,int> *this)

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
      goto LAB_0010530d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010530d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010530d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void>::get_object
          (CallableCustomMethodPointer<EditorDebuggerTree,void> *this)

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
      goto LAB_0010540d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010540d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010540d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, Vector2 const&, MouseButton>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton>::get_object
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton> *this)

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
      goto LAB_0010550d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010550d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010550d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* EditorDebuggerTree::_validate_propertyv(PropertyInfo&) const */

void EditorDebuggerTree::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010e010 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0010e018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::is_class_ptr(void*) const */

uint HBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10b6,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10b5,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10b6,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10b6,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10b6,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 HBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010e020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* EditorDebuggerTree::_setv(StringName const&, Variant const&) */

undefined8 EditorDebuggerTree::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0010e020 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00105838) */
/* EditorDebuggerTree::_getv(StringName const&, Variant&) const */

undefined8 EditorDebuggerTree::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010e028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x001058a8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0010e028 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::assign_static_unique_class_name;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105910;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00105910:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = StringName::assign_static_unique_class_name;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00105970;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00105970:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* EditorDebuggerTree::_get_class_namev() const */

undefined8 * EditorDebuggerTree::_get_class_namev(void)

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
LAB_001059d3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001059d3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"EditorDebuggerTree");
      goto LAB_00105a3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"EditorDebuggerTree");
LAB_00105a3e:
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
LAB_00105ac3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_00105ac3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_00105b2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_00105b2e:
  return &_get_class_namev()::_class_name_static;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0010e030 != Container::_notification) {
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
  if ((code *)PTR__notification_0010e030 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
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



/* EditorDebuggerTree::_notificationv(int, bool) */

void __thiscall
EditorDebuggerTree::_notificationv(EditorDebuggerTree *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if (param_1 == 0) {
      _notification(iVar1);
    }
    else if (param_1 == 10) {
      update_icon_max_width(this);
    }
    if ((code *)PTR__notification_0010e038 != Control::_notification) {
      Tree::_notification(iVar1);
    }
    Control::_notification(iVar1);
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  Control::_notification(iVar1);
  if ((code *)PTR__notification_0010e038 != Control::_notification) {
    Tree::_notification(iVar1);
  }
  if (param_1 != 0) {
    if (param_1 != 10) {
      return;
    }
    update_icon_max_width(this);
    return;
  }
  _notification(iVar1);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >::insert(ObjectID
   const&) */

ObjectID *
HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(ObjectID *param_1)

{
  uint uVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  char cVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  uint *puVar29;
  int iVar30;
  undefined8 *in_RDX;
  uint uVar31;
  ulong uVar32;
  ObjectID *pOVar33;
  ulong uVar34;
  HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *in_RSI;
  uint uVar35;
  ulong uVar36;
  undefined4 uVar37;
  uint uVar38;
  uint uVar39;
  uint *puVar40;
  long in_FS_OFFSET;
  uint local_98;
  uint local_44;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
  if (*(long *)in_RSI == 0) {
    uVar24 = (ulong)uVar31 * 4;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 0x18) = uVar25;
    uVar25 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *(undefined8 *)in_RSI = uVar25;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 0x10) = uVar25;
    uVar25 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(in_RSI + 8) = uVar25;
    if (uVar31 != 0) {
      memset(*(void **)(in_RSI + 0x18),0,uVar24);
    }
  }
  pOVar33 = (ObjectID *)*in_RDX;
  local_44 = 0;
  cVar23 = _lookup_pos(in_RSI,pOVar33,&local_44);
  if (cVar23 == '\0') {
    uVar38 = *(uint *)(in_RSI + 0x24);
    uVar1 = *(uint *)(in_RSI + 0x20);
    if ((float)uVar31 * __LC24 < (float)(uVar38 + 1)) {
      if (uVar1 == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        iVar30 = *(int *)(in_RSI + 0x24);
        lVar26 = *(long *)in_RSI;
        uVar31 = 0xffffffff;
        goto LAB_0010639a;
      }
      uVar24 = (ulong)(uVar1 + 1);
      if (uVar1 + 1 < 2) {
        uVar24 = 2;
      }
      uVar31 = *(uint *)(hash_table_size_primes + uVar24 * 4);
      *(int *)(in_RSI + 0x20) = (int)uVar24;
      pvVar2 = *(void **)(in_RSI + 0x18);
      uVar24 = (ulong)uVar31 * 4;
      pvVar3 = *(void **)(in_RSI + 0x10);
      uVar25 = Memory::alloc_static(uVar24,false);
      *(undefined8 *)(in_RSI + 0x18) = uVar25;
      uVar25 = Memory::realloc_static(*(void **)in_RSI,(ulong)uVar31 * 8,false);
      *(undefined8 *)in_RSI = uVar25;
      uVar25 = Memory::alloc_static(uVar24,false);
      *(undefined8 *)(in_RSI + 0x10) = uVar25;
      lVar26 = Memory::realloc_static(*(void **)(in_RSI + 8),uVar24,false);
      *(long *)(in_RSI + 8) = lVar26;
      if (uVar31 != 0) {
        memset(*(void **)(in_RSI + 0x18),0,uVar24);
      }
      if (*(int *)(in_RSI + 0x24) != 0) {
        uVar24 = 0;
        lVar4 = *(long *)(in_RSI + 0x18);
        lVar5 = *(long *)(in_RSI + 0x10);
        do {
          uVar36 = uVar24 & 0xffffffff;
          uVar37 = (undefined4)uVar24;
          uVar39 = 0;
          uVar31 = *(uint *)((long)pvVar2 + (ulong)*(uint *)((long)pvVar3 + uVar24 * 4) * 4);
          uVar32 = (ulong)uVar31;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 0x20) * 4);
          uVar34 = CONCAT44(0,uVar38);
          lVar27 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 0x20) * 8);
          auVar7._8_8_ = 0;
          auVar7._0_8_ = uVar32 * lVar27;
          auVar15._8_8_ = 0;
          auVar15._0_8_ = uVar34;
          lVar28 = SUB168(auVar7 * auVar15,8) * 4;
          iVar30 = SUB164(auVar7 * auVar15,8);
          puVar40 = (uint *)(lVar4 + lVar28);
          uVar1 = *puVar40;
          if (uVar1 == 0) {
            lVar27 = uVar24 * 4;
          }
          else {
            do {
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar1 * lVar27;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar34;
              auVar9._8_8_ = 0;
              auVar9._0_8_ = (ulong)((uVar38 + iVar30) - SUB164(auVar8 * auVar16,8)) * lVar27;
              auVar17._8_8_ = 0;
              auVar17._0_8_ = uVar34;
              local_98 = SUB164(auVar9 * auVar17,8);
              if (local_98 < uVar39) {
                *(int *)(lVar5 + uVar36 * 4) = iVar30;
                uVar31 = *puVar40;
                *puVar40 = (uint)uVar32;
                uVar1 = *(uint *)(lVar28 + lVar26);
                uVar32 = (ulong)uVar31;
                *(uint *)(lVar28 + lVar26) = (uint)uVar36;
                uVar36 = (ulong)uVar1;
                uVar39 = local_98;
              }
              uVar37 = (undefined4)uVar36;
              uVar31 = (uint)uVar32;
              uVar39 = uVar39 + 1;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = (ulong)(iVar30 + 1) * lVar27;
              auVar18._8_8_ = 0;
              auVar18._0_8_ = uVar34;
              lVar28 = SUB168(auVar10 * auVar18,8) * 4;
              iVar30 = SUB164(auVar10 * auVar18,8);
              puVar40 = (uint *)(lVar4 + lVar28);
              uVar1 = *puVar40;
            } while (uVar1 != 0);
            lVar27 = uVar36 << 2;
          }
          *puVar40 = uVar31;
          uVar24 = uVar24 + 1;
          *(int *)(lVar5 + lVar27) = iVar30;
          *(undefined4 *)(lVar26 + lVar28) = uVar37;
        } while ((uint)uVar24 < *(uint *)(in_RSI + 0x24));
      }
      Memory::free_static(pvVar2,false);
      Memory::free_static(pvVar3,false);
      pOVar33 = (ObjectID *)*in_RDX;
      uVar38 = *(uint *)(in_RSI + 0x24);
      uVar1 = *(uint *)(in_RSI + 0x20);
    }
    uVar34 = (ulong)uVar38;
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar1 * 4);
    uVar36 = CONCAT44(0,uVar31);
    lVar26 = *(long *)in_RSI;
    uVar24 = (long)pOVar33 * 0x3ffff - 1;
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)uVar1 * 8);
    uVar24 = (uVar24 ^ uVar24 >> 0x1f) * 0x15;
    uVar24 = (uVar24 ^ uVar24 >> 0xb) * 0x41;
    uVar24 = uVar24 >> 0x16 ^ uVar24;
    uVar32 = uVar24 & 0xffffffff;
    if ((int)uVar24 == 0) {
      uVar32 = 1;
    }
    lVar28 = *(long *)(in_RSI + 0x18);
    uVar35 = 0;
    *(undefined8 *)(lVar26 + uVar34 * 8) = *in_RDX;
    uVar39 = (uint)uVar32;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar32 * lVar4;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar36;
    lVar5 = SUB168(auVar11 * auVar19,8) * 4;
    iVar30 = SUB164(auVar11 * auVar19,8);
    lVar27 = *(long *)(in_RSI + 0x10);
    puVar40 = (uint *)(lVar28 + lVar5);
    lVar6 = *(long *)(in_RSI + 8);
    uVar1 = *puVar40;
    uVar24 = uVar34;
    while (uVar1 != 0) {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar1 * lVar4;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar36;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar31 + iVar30) - SUB164(auVar12 * auVar20,8)) * lVar4;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar36;
      local_98 = SUB164(auVar13 * auVar21,8);
      if (local_98 < uVar35) {
        puVar29 = (uint *)(lVar5 + lVar6);
        *(int *)(lVar27 + uVar34 * 4) = iVar30;
        uVar38 = *puVar40;
        *puVar40 = (uint)uVar32;
        uVar1 = *puVar29;
        uVar32 = (ulong)uVar38;
        *puVar29 = (uint)uVar24;
        uVar34 = (ulong)uVar1;
        uVar24 = uVar34;
        uVar35 = local_98;
      }
      uVar38 = (uint)uVar24;
      uVar39 = (uint)uVar32;
      uVar35 = uVar35 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar30 + 1) * lVar4;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar36;
      lVar5 = SUB168(auVar14 * auVar22,8) * 4;
      iVar30 = SUB164(auVar14 * auVar22,8);
      puVar40 = (uint *)(lVar28 + lVar5);
      uVar1 = *puVar40;
    }
    *puVar40 = uVar39;
    *(int *)(lVar27 + uVar34 * 4) = iVar30;
    *(uint *)(lVar6 + lVar5) = uVar38;
    uVar31 = *(uint *)(in_RSI + 0x24);
    iVar30 = uVar31 + 1;
    *(int *)(in_RSI + 0x24) = iVar30;
  }
  else {
    iVar30 = *(int *)(in_RSI + 0x24);
    lVar26 = *(long *)in_RSI;
    uVar31 = local_44;
  }
LAB_0010639a:
  *(long *)param_1 = lVar26;
  *(int *)(param_1 + 8) = iVar30;
  *(uint *)(param_1 + 0xc) = uVar31;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0x20));
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 8));
  return;
}



/* WARNING: Removing unreachable block (ram,0x001066e8) */
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
              if ((code *)PTR__bind_methods_0010e050 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_0010e040 !=
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
      if ((code *)PTR__bind_methods_0010e048 != Container::_bind_methods) {
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



/* EditorDebuggerTree::~EditorDebuggerTree() */

void __thiscall EditorDebuggerTree::~EditorDebuggerTree(EditorDebuggerTree *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ae90;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe10));
  pvVar1 = *(void **)(this + 0xdd8);
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0xdfc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xdf8) * 4) != 0) {
        memset(*(void **)(this + 0xdf0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xdf8) * 4) << 2);
      }
      *(undefined4 *)(this + 0xdfc) = 0;
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 0xde8),false);
    Memory::free_static(*(void **)(this + 0xde0),false);
    Memory::free_static(*(void **)(this + 0xdf0),false);
  }
  Tree::~Tree((Tree *)this);
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



/* EditorDebuggerTree::get_class() const */

void EditorDebuggerTree::get_class(void)

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



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,int param_4,CowData *param_5,
          undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined8 *)(this + 0x20) = 0;
  lVar1 = *(long *)param_5;
  *(undefined8 *)(this + 0x10) = 0;
  *(int *)(this + 0x18) = param_4;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
    param_4 = *(int *)(this + 0x18);
  }
  *(undefined4 *)(this + 0x28) = param_6;
  if (param_4 == 0x11) {
    StringName::StringName((StringName *)&local_48,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_48) {
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_48;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    StringName::operator=((StringName *)(this + 0x10),param_7);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CallableCustomMethodPointer<EditorDebuggerTree, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void>::call
          (CallableCustomMethodPointer<EditorDebuggerTree,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010751f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010751f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001074f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_001075d0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010751f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC73,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001075d0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, Vector2 const&, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton>::call
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton> *this,
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
            uVar3 = _LC74;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            uVar5 = Variant::operator_cast_to_long(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
            uVar3 = _LC75;
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
        goto LAB_001076a5;
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
  _err_print_error(&_LC73,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_40,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref(aCStack_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_001076a5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, Object*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Object*>::call
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Object*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  Object *pOVar5;
  Object *pOVar6;
  uint uVar7;
  ulong *puVar8;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar9;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00107a59;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00107a59;
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
LAB_001079b0:
          uVar3 = _LC76;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar6 == (Object *)0x0) && (pOVar5 != (Object *)0x0)) goto LAB_001079b0;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001079f7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_00107b0a;
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
LAB_00107a59:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC73,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107b0a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,int>::call
          (CallableCustomMethodPointer<EditorDebuggerTree,void,int> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
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
      goto LAB_00107cc8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00107cc8;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
        uVar3 = _LC77;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00107c77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00107d79;
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
LAB_00107cc8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC73,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00107d79:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<EditorDebuggerTree, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&>::call
          (CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&> *this,
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
            uVar3 = _LC78;
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
        goto LAB_00107e4e;
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
  _err_print_error(&_LC73,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_00107e4e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* EditorDebuggerTree::~EditorDebuggerTree() */

void __thiscall EditorDebuggerTree::~EditorDebuggerTree(EditorDebuggerTree *this)

{
  void *pvVar1;
  
  *(undefined ***)this = &PTR__initialize_classv_0010ae90;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xe10));
  pvVar1 = *(void **)(this + 0xdd8);
  if (pvVar1 != (void *)0x0) {
    if (*(int *)(this + 0xdfc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xdf8) * 4) != 0) {
        memset(*(void **)(this + 0xdf0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xdf8) * 4) << 2);
      }
      *(undefined4 *)(this + 0xdfc) = 0;
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(*(void **)(this + 0xde8),false);
    Memory::free_static(*(void **)(this + 0xde0),false);
    Memory::free_static(*(void **)(this + 0xdf0),false);
  }
  Tree::~Tree((Tree *)this);
  operator_delete(this,0xe18);
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
    if (cVar5 != '\0') goto LAB_0010819b;
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
      if (cVar5 != '\0') goto LAB_0010819b;
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
        if (cVar5 != '\0') goto LAB_0010819b;
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = String::operator==(param_1,"Object");
        return uVar6;
      }
      goto LAB_00108378;
    }
  }
LAB_0010819b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108378:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010847b;
  }
  cVar4 = String::operator==(param_1,"Control");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = CanvasItem::is_class((CanvasItem *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010847b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorDebuggerTree::is_class(String const&) const */

undefined8 __thiscall EditorDebuggerTree::is_class(EditorDebuggerTree *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001085db;
  }
  cVar5 = String::operator==(param_1,"EditorDebuggerTree");
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
      if (cVar5 != '\0') goto LAB_001085db;
    }
    cVar5 = String::operator==(param_1,"Tree");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_001086de;
    }
  }
LAB_001085db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001086de:
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
    if (cVar5 != '\0') goto LAB_001087eb;
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
      if (cVar5 != '\0') goto LAB_001087eb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
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
        if (cVar5 != '\0') goto LAB_001087eb;
      }
      cVar5 = String::operator==(param_1,"Container");
      if (cVar5 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar6 = Control::is_class((Control *)this,param_1);
          return uVar6;
        }
        goto LAB_0010898e;
      }
    }
  }
LAB_001087eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010898e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
        if (pvVar3 == (void *)0x0) goto LAB_00108a8f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00108a8f:
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
  local_78 = &_LC36;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC36;
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
      goto LAB_00108c4c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108c4c:
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
      goto LAB_00108eb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00108eb1:
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
  if ((code *)PTR__get_property_list_0010e058 != Object::_get_property_list) {
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
      goto LAB_00109181;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109181:
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
  if ((code *)PTR__get_property_list_0010e060 != CanvasItem::_get_property_list) {
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
      goto LAB_00109451;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109451:
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
      goto LAB_00109701;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109701:
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
      goto LAB_001099b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001099b1:
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



/* Tree::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Tree::_get_property_listv(Tree *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  CowData<char32_t> *local_b0;
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
  if (!param_2) {
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = &_LC83;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC83;
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
      goto LAB_00109c61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109c61:
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
  StringName::StringName((StringName *)&local_78,"Tree",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
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



/* EditorDebuggerTree::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorDebuggerTree::_get_property_listv(EditorDebuggerTree *this,List *param_1,bool param_2)

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
    Tree::_get_property_listv((Tree *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "EditorDebuggerTree";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "EditorDebuggerTree";
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
      goto LAB_00109f11;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00109f11:
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
  StringName::StringName((StringName *)&local_78,"EditorDebuggerTree",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Tree::_get_property_listv((Tree *)this,param_1,true);
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



/* EditorDebuggerTree::_initialize_classv() */

void EditorDebuggerTree::_initialize_classv(void)

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
    if (Tree::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_0010e050 != Node::_bind_methods) {
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
          if ((code *)PTR__bind_compatibility_methods_0010e040 !=
              Object::_bind_compatibility_methods) {
            CanvasItem::_bind_compatibility_methods();
          }
          CanvasItem::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "CanvasItem";
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
      local_58 = "Control";
      local_68 = 0;
      local_50 = 7;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "Tree";
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
      if ((code *)PTR__bind_methods_0010e068 != Control::_bind_methods) {
        Tree::_bind_methods();
      }
      Tree::initialize_class()::initialized = '\x01';
    }
    local_58 = "Tree";
    local_68 = 0;
    local_50 = 4;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "EditorDebuggerTree";
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



/* EditorDebuggerTree::EditorDebuggerTree() */

void EditorDebuggerTree::_GLOBAL__sub_I_EditorDebuggerTree(void)

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
/* CallableCustomMethodPointer<EditorDebuggerTree, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerTree, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerTree, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerTree, void, Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<EditorDebuggerTree, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<EditorDebuggerTree,void,Vector2_const&,MouseButton> *this)

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



/* WARNING: Control flow encountered bad instruction data */
/* PropertyListHelper::~PropertyListHelper() */

void __thiscall PropertyListHelper::~PropertyListHelper(PropertyListHelper *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<String, DefaultAllocator>::~List() */

void __thiscall List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* EditorDebuggerTree::~EditorDebuggerTree() */

void __thiscall EditorDebuggerTree::~EditorDebuggerTree(EditorDebuggerTree *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

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
/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



