
/* SceneTreeDialog::_cancel() */

void SceneTreeDialog::_cancel(void)

{
  Window::hide();
  return;
}



/* SceneTreeDialog::_selected_changed() */

void __thiscall SceneTreeDialog::_selected_changed(SceneTreeDialog *this)

{
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
  return;
}



/* HashSet<Node*, HashMapHasherDefault, HashMapComparatorDefault<Node*> >::_lookup_pos(Node* const&,
   unsigned int&) const [clone .isra.0] */

undefined8 __thiscall
HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>::_lookup_pos
          (HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>> *this,Node **param_1,
          uint *param_2)

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
           *(Node ***)(*(long *)this + (ulong)uVar13 * 8) == param_1)) {
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



/* Error Object::emit_signal<>(StringName const&) [clone .isra.0] */

void __thiscall Object::emit_signal<>(Object *this,StringName *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*(long *)this + 0xd0))(this,param_1,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeDialog::_select() */

void __thiscall SceneTreeDialog::_select(SceneTreeDialog *this)

{
  int iVar1;
  long in_FS_OFFSET;
  NodePath local_80 [8];
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(*(long *)(this + 0xdc0) + 0xa50) != 0) {
    Window::hide();
    Node::get_path();
    if (_select()::{lambda()#1}::operator()()::sname == '\0') {
      iVar1 = __cxa_guard_acquire(&_select()::{lambda()#1}::operator()()::sname);
      if (iVar1 != 0) {
        _scs_create((char *)&_select()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_select()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_select()::{lambda()#1}::operator()()::sname);
      }
    }
    Variant::Variant((Variant *)local_68,local_80);
    local_50 = 0;
    local_48 = (undefined1  [16])0x0;
    local_78[0] = (Variant *)local_68;
    (**(code **)(*(long *)this + 0xd0))
              (this,&_select()::{lambda()#1}::operator()()::sname,local_78,1);
    if (Variant::needs_deinit[(int)local_50] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
    }
    NodePath::~NodePath(local_80);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_rmb_select(Vector2 const&, MouseButton) [clone .part.0] */

void SceneTreeEditor::_rmb_select(long *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  long in_FS_OFFSET;
  undefined8 uVar4;
  undefined8 local_70;
  Variant *local_68 [2];
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = Control::get_screen_position();
  uVar1 = *param_2;
  if ((_rmb_select(Vector2_const&,MouseButton)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar3 = __cxa_guard_acquire(&_rmb_select(Vector2_const&,MouseButton)::{lambda()#1}::
                                   operator()()::sname), iVar3 != 0)) {
    _scs_create((char *)&_rmb_select(Vector2_const&,MouseButton)::{lambda()#1}::operator()()::sname,
                true);
    __cxa_atexit(StringName::~StringName,
                 &_rmb_select(Vector2_const&,MouseButton)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_rmb_select(Vector2_const&,MouseButton)::{lambda()#1}::operator()()::sname)
    ;
  }
  local_70 = CONCAT44((float)((ulong)uVar1 >> 0x20) + (float)((ulong)uVar4 >> 0x20),
                      (float)uVar1 + (float)uVar4);
  Variant::Variant((Variant *)local_58,(Vector2 *)&local_70);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  local_68[0] = (Variant *)local_58;
  (**(code **)(*param_1 + 0xd0))
            (param_1,&_rmb_select(Vector2_const&,MouseButton)::{lambda()#1}::operator()()::sname,
             local_68,1);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneTreeEditor::_rmb_select(Vector2 const&, MouseButton) */

void __thiscall SceneTreeEditor::_rmb_select(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 2) {
    return;
  }
  _rmb_select();
  return;
}



/* SceneTreeEditor::_empty_clicked(Vector2 const&, MouseButton) */

void __thiscall SceneTreeEditor::_empty_clicked(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 2) {
    return;
  }
  _rmb_select();
  return;
}



/* SceneTreeEditor::_tree_scroll_to_item(ObjectID) */

void __thiscall SceneTreeEditor::_tree_scroll_to_item(SceneTreeEditor *this,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  ulong *puVar5;
  long in_FS_OFFSET;
  bool bVar6;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa48) == 0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_tree_scroll_to_item","editor/gui/scene_tree_editor.cpp",0x50d,
                       "Parameter \"tree\" is null.",0,0);
      return;
    }
  }
  else {
    uVar4 = (uint)param_2 & 0xffffff;
    if (uVar4 < (uint)ObjectDB::slot_max) {
      while( true ) {
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
      puVar5 = (ulong *)((ulong)uVar4 * 0x10 + ObjectDB::object_slots);
      if ((param_2 >> 0x18 & 0x7fffffffff) == (*puVar5 & 0x7fffffffff)) {
        uVar2 = puVar5[1];
        ObjectDB::spin_lock._0_1_ = '\0';
        if ((uVar2 != 0) &&
           (lVar3 = __dynamic_cast(uVar2,&Object::typeinfo,&TreeItem::typeinfo,0), lVar3 != 0)) {
          if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
            Tree::scroll_to_item(*(TreeItem **)(this + 0xa48),SUB81(lVar3,0));
            return;
          }
          goto LAB_001006db;
        }
      }
      else {
        ObjectDB::spin_lock._0_1_ = '\0';
      }
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("get_instance","./core/object/object.h",0x418,
                       "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
      return;
    }
  }
LAB_001006db:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_cell_collapsed(Object*) */

void __thiscall SceneTreeEditor::_cell_collapsed(SceneTreeEditor *this,Object *param_1)

{
  long lVar1;
  long in_FS_OFFSET;
  Variant local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((this[0xac2] == (SceneTreeEditor)0x0) && (this[0xac0] != (SceneTreeEditor)0x0)) &&
     (param_1 != (Object *)0x0)) {
    lVar1 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
    if (lVar1 != 0) {
      TreeItem::is_collapsed();
      TreeItem::get_metadata((int)local_48);
      Variant::operator_cast_to_NodePath(local_50);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      lVar1 = Node::get_node((NodePath *)this);
      if (lVar1 == 0) {
        _err_print_error("_cell_collapsed","editor/gui/scene_tree_editor.cpp",0x6ed,
                         "Parameter \"n\" is null.",0,0);
        NodePath::~NodePath((NodePath *)local_50);
      }
      else {
        Node::set_display_folded(SUB81(lVar1,0));
        NodePath::~NodePath((NodePath *)local_50);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashSet<SceneTreeEditor::CachedNode*, HashMapHasherDefault,
   HashMapComparatorDefault<SceneTreeEditor::CachedNode*> >::erase(SceneTreeEditor::CachedNode*
   const&) [clone .isra.0] */

void __thiscall
HashSet<SceneTreeEditor::CachedNode*,HashMapHasherDefault,HashMapComparatorDefault<SceneTreeEditor::CachedNode*>>
::erase(HashSet<SceneTreeEditor::CachedNode*,HashMapHasherDefault,HashMapComparatorDefault<SceneTreeEditor::CachedNode*>>
        *this,CachedNode **param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
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
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  uint *puVar34;
  int iVar35;
  uint uVar36;
  long lVar37;
  ulong uVar38;
  uint *puVar39;
  ulong uVar40;
  uint *puVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  
  lVar6 = *(long *)this;
  if ((lVar6 != 0) && (*(int *)(this + 0x24) != 0)) {
    lVar7 = *(long *)(this + 0x18);
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    uVar42 = CONCAT44(0,uVar31);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    uVar32 = (long)*param_1 * 0x3ffff - 1;
    uVar32 = (uVar32 ^ uVar32 >> 0x1f) * 0x15;
    uVar32 = (uVar32 ^ uVar32 >> 0xb) * 0x41;
    uVar32 = uVar32 >> 0x16 ^ uVar32;
    uVar40 = uVar32 & 0xffffffff;
    if ((int)uVar32 == 0) {
      uVar40 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar40 * lVar8;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar42;
    lVar37 = SUB168(auVar11 * auVar21,8);
    uVar44 = *(uint *)(lVar7 + lVar37 * 4);
    iVar35 = SUB164(auVar11 * auVar21,8);
    if (uVar44 != 0) {
      uVar33 = 0;
      do {
        if ((uint)uVar40 == uVar44) {
          lVar9 = *(long *)(this + 8);
          uVar44 = *(uint *)(lVar9 + lVar37 * 4);
          uVar32 = (ulong)uVar44;
          if (*param_1 == *(CachedNode **)(lVar6 + uVar32 * 8)) {
            lVar10 = *(long *)(this + 0x10);
            puVar1 = (uint *)(lVar10 + uVar32 * 4);
            uVar33 = *puVar1;
            uVar40 = (ulong)uVar33;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)(uVar33 + 1) * lVar8;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar42;
            lVar37 = SUB168(auVar15 * auVar25,8) * 4;
            uVar36 = SUB164(auVar15 * auVar25,8);
            uVar43 = (ulong)uVar36;
            puVar39 = (uint *)(lVar7 + lVar37);
            if ((*puVar39 == 0) ||
               (auVar16._8_8_ = 0, auVar16._0_8_ = (ulong)*puVar39 * lVar8, auVar26._8_8_ = 0,
               auVar26._0_8_ = uVar42, auVar17._8_8_ = 0,
               auVar17._0_8_ = (ulong)((uVar36 + uVar31) - SUB164(auVar16 * auVar26,8)) * lVar8,
               auVar27._8_8_ = 0, auVar27._0_8_ = uVar42, SUB164(auVar17 * auVar27,8) == 0)) {
              uVar43 = (ulong)uVar33;
            }
            else {
              while( true ) {
                puVar34 = (uint *)(lVar37 + lVar9);
                puVar4 = (uint *)(lVar9 + uVar40 * 4);
                puVar41 = (uint *)(uVar40 * 4 + lVar7);
                puVar2 = (undefined4 *)(lVar10 + (ulong)*puVar34 * 4);
                puVar3 = (undefined4 *)(lVar10 + (ulong)*puVar4 * 4);
                uVar5 = *puVar3;
                *puVar3 = *puVar2;
                *puVar2 = uVar5;
                uVar33 = *puVar39;
                *puVar39 = *puVar41;
                *puVar41 = uVar33;
                uVar33 = *puVar34;
                *puVar34 = *puVar4;
                *puVar4 = uVar33;
                auVar20._8_8_ = 0;
                auVar20._0_8_ = (ulong)((int)uVar43 + 1) * lVar8;
                auVar30._8_8_ = 0;
                auVar30._0_8_ = uVar42;
                uVar38 = SUB168(auVar20 * auVar30,8);
                lVar37 = uVar38 * 4;
                puVar39 = (uint *)(lVar7 + lVar37);
                if ((*puVar39 == 0) ||
                   (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)*puVar39 * lVar8, auVar28._8_8_ = 0,
                   auVar28._0_8_ = uVar42, auVar19._8_8_ = 0,
                   auVar19._0_8_ =
                        (ulong)((SUB164(auVar20 * auVar30,8) + uVar31) - SUB164(auVar18 * auVar28,8)
                               ) * lVar8, auVar29._8_8_ = 0, auVar29._0_8_ = uVar42,
                   SUB164(auVar19 * auVar29,8) == 0)) break;
                uVar40 = uVar43;
                uVar43 = uVar38 & 0xffffffff;
              }
            }
            *(undefined4 *)(lVar7 + uVar43 * 4) = 0;
            uVar31 = *(int *)(this + 0x24) - 1;
            *(uint *)(this + 0x24) = uVar31;
            if (uVar31 <= uVar44) {
              return;
            }
            uVar33 = *(uint *)(lVar10 + (ulong)uVar31 * 4);
            *(undefined8 *)(lVar6 + uVar32 * 8) = *(undefined8 *)(lVar6 + (ulong)uVar31 * 8);
            *puVar1 = uVar33;
            *(uint *)(lVar9 + (ulong)*(uint *)(lVar10 + (ulong)*(uint *)(this + 0x24) * 4) * 4) =
                 uVar44;
            return;
          }
        }
        uVar33 = uVar33 + 1;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = (ulong)(iVar35 + 1) * lVar8;
        auVar22._8_8_ = 0;
        auVar22._0_8_ = uVar42;
        lVar37 = SUB168(auVar12 * auVar22,8);
        uVar44 = *(uint *)(lVar7 + lVar37 * 4);
        iVar35 = SUB164(auVar12 * auVar22,8);
      } while ((uVar44 != 0) &&
              (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar44 * lVar8, auVar23._8_8_ = 0,
              auVar23._0_8_ = uVar42, auVar14._8_8_ = 0,
              auVar14._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar13 * auVar23,8)) * lVar8,
              auVar24._8_8_ = 0, auVar24._0_8_ = uVar42, uVar33 <= SUB164(auVar14 * auVar24,8)));
    }
  }
  return;
}



/* SceneTreeDialog::_on_filter_gui_input(Ref<InputEvent> const&) */

void __thiscall SceneTreeDialog::_on_filter_gui_input(SceneTreeDialog *this,Ref *param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  StringName *pSVar4;
  Object *pOVar5;
  long in_FS_OFFSET;
  long local_60;
  long local_58;
  long local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(long *)param_1 != 0) &&
      (pSVar4 = (StringName *)
                __dynamic_cast(*(long *)param_1,&Object::typeinfo,&InputEventKey::typeinfo,0),
      pSVar4 != (StringName *)0x0)) && (cVar3 = RefCounted::reference(), cVar3 != '\0')) {
    StringName::StringName((StringName *)&local_60,"ui_up",false);
    cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_60,0));
    if (cVar3 == '\0') {
      StringName::StringName((StringName *)&local_58,"ui_down",false);
      cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_58,0));
      if (cVar3 == '\0') {
        StringName::StringName((StringName *)&local_50,"ui_page_up",false);
        cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_50,0));
        if (cVar3 == '\0') {
          StringName::StringName((StringName *)&local_48,"ui_page_down",false);
          cVar3 = InputEvent::is_action(pSVar4,SUB81((StringName *)&local_48,0));
          if ((StringName::configured != '\0') &&
             ((local_48 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0'))))
          goto LAB_00100d50;
        }
        else {
          cVar3 = StringName::configured;
          if (StringName::configured == '\0') goto LAB_00100b57;
LAB_00100d50:
          if ((local_50 == 0) || (StringName::unref(), StringName::configured != '\0'))
          goto LAB_00100c26;
        }
      }
      else {
        cVar3 = StringName::configured;
        if (StringName::configured == '\0') goto LAB_00100b57;
LAB_00100c26:
        if (local_58 != 0) {
          StringName::unref();
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
      }
      if (cVar3 != '\0') goto LAB_00100b57;
    }
    else {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
LAB_00100b57:
      plVar1 = *(long **)(*(long *)(this + 0xdc0) + 0xa48);
      pcVar2 = *(code **)(*plVar1 + 0x308);
      local_48 = (Object *)0x0;
      pOVar5 = (Object *)__dynamic_cast(pSVar4,&Object::typeinfo,&InputEvent::typeinfo,0);
      if ((pOVar5 != (Object *)0x0) &&
         (local_48 = pOVar5, cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        local_48 = (Object *)0x0;
      }
      (*pcVar2)(plVar1);
      if (((local_48 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar5 = local_48, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_48), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
      Control::accept_event();
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)pSVar4), cVar3 != '\0')) {
      (**(code **)(*(long *)pSVar4 + 0x140))(pSVar4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pSVar4,false);
        return;
      }
      goto LAB_00100db1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00100db1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */

void __thiscall Ref<Texture2D>::operator=(Ref<Texture2D> *this,Ref *param_1)

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



/* SceneTreeDialog::~SceneTreeDialog() */

void __thiscall SceneTreeDialog::~SceneTreeDialog(SceneTreeDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012d008;
  if (*(void **)(this + 0xde0) != (void *)0x0) {
    if (*(int *)(this + 0xdd8) != 0) {
      *(undefined4 *)(this + 0xdd8) = 0;
    }
    Memory::free_static(*(void **)(this + 0xde0),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_0012c6b0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* SceneTreeDialog::~SceneTreeDialog() */

void __thiscall SceneTreeDialog::~SceneTreeDialog(SceneTreeDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012d008;
  if (*(void **)(this + 0xde0) != (void *)0x0) {
    if (*(int *)(this + 0xdd8) != 0) {
      *(undefined4 *)(this + 0xdd8) = 0;
    }
    Memory::free_static(*(void **)(this + 0xde0),false);
  }
  *(undefined ***)this = &PTR__initialize_classv_0012c6b0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdf0);
  return;
}



/* SceneTreeEditor::_deselect_items() */

void __thiscall SceneTreeEditor::_deselect_items(SceneTreeEditor *this)

{
  long lVar1;
  int iVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9c8) != 0) {
    EditorSelection::clear();
    if (_deselect_items()::{lambda()#1}::operator()()::sname == '\0') {
      iVar2 = __cxa_guard_acquire(&_deselect_items()::{lambda()#1}::operator()()::sname);
      if (iVar2 != 0) {
        _scs_create((char *)&_deselect_items()::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_deselect_items()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_deselect_items()::{lambda()#1}::operator()()::sname);
      }
    }
    (**(code **)(*(long *)this + 0xd0))
              (this,&_deselect_items()::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_selected_changed() */

void __thiscall SceneTreeEditor::_selected_changed(SceneTreeEditor *this)

{
  int iVar1;
  long lVar2;
  long in_FS_OFFSET;
  Variant local_60 [8];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Tree::get_selected();
  if (lVar2 == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_selected_changed","editor/gui/scene_tree_editor.cpp",0x4d3,
                       "Parameter \"s\" is null.",0,0);
      return;
    }
  }
  else {
    TreeItem::get_metadata((int)&local_58);
    Variant::operator_cast_to_NodePath(local_60);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    lVar2 = Node::get_node((NodePath *)this);
    if (*(long *)(this + 0xa50) != lVar2) {
      *(int *)(this + 0xab0) = *(int *)(this + 0xab0) + 1;
      *(long *)(this + 0xa50) = lVar2;
      if (_selected_changed()::{lambda()#1}::operator()()::sname == '\0') {
        iVar1 = __cxa_guard_acquire(&_selected_changed()::{lambda()#1}::operator()()::sname);
        if (iVar1 != 0) {
          _scs_create((char *)&_selected_changed()::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_selected_changed()::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_selected_changed()::{lambda()#1}::operator()()::sname);
        }
      }
      local_58 = 0;
      local_50 = (undefined1  [16])0x0;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_selected_changed()::{lambda()#1}::operator()()::sname,0,0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      *(int *)(this + 0xab0) = *(int *)(this + 0xab0) + -1;
    }
    NodePath::~NodePath((NodePath *)local_60);
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::NodeCache::mark_children_dirty(Node*, bool) [clone .part.0] */

Node * __thiscall
SceneTreeEditor::NodeCache::mark_children_dirty(NodeCache *this,Node *param_1,bool param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  int iVar11;
  Node *pNVar12;
  Node *pNVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  uint uVar20;
  int iVar21;
  
  pNVar12 = (Node *)Node::get_child_count(SUB81(param_1,0));
  iVar11 = (int)pNVar12;
  if (0 < iVar11) {
    iVar21 = 0;
    do {
      pNVar13 = (Node *)Node::get_child((int)param_1,SUB41(iVar21,0));
      lVar1 = *(long *)(this + 0x10);
      pNVar12 = pNVar13;
      if ((lVar1 != 0) &&
         (pNVar12 = (Node *)(ulong)*(uint *)(this + 0x34), *(uint *)(this + 0x34) != 0)) {
        uVar19 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4));
        lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
        uVar14 = (long)pNVar13 * 0x3ffff - 1;
        uVar14 = (uVar14 ^ uVar14 >> 0x1f) * 0x15;
        uVar14 = (uVar14 ^ uVar14 >> 0xb) * 0x41;
        uVar14 = uVar14 >> 0x16 ^ uVar14;
        uVar17 = uVar14 & 0xffffffff;
        if ((int)uVar14 == 0) {
          uVar17 = 1;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = uVar17 * lVar2;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar19;
        auVar3 = auVar3 * auVar7;
        lVar16 = auVar3._8_8_;
        pNVar12 = auVar3._0_8_;
        uVar18 = *(uint *)(*(long *)(this + 0x18) + lVar16 * 4);
        uVar15 = auVar3._8_4_;
        if (uVar18 != 0) {
          uVar20 = 0;
          while (((uint)uVar17 != uVar18 ||
                 (pNVar13 != *(Node **)(*(long *)(lVar1 + lVar16 * 8) + 0x10)))) {
            uVar20 = uVar20 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)(uVar15 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar19;
            auVar4 = auVar4 * auVar8;
            lVar16 = auVar4._8_8_;
            pNVar12 = auVar4._0_8_;
            uVar18 = *(uint *)(*(long *)(this + 0x18) + lVar16 * 4);
            uVar15 = auVar4._8_4_;
            if ((uVar18 == 0) ||
               (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar18 * lVar2, auVar9._8_8_ = 0,
               auVar9._0_8_ = uVar19, auVar6._8_8_ = 0,
               auVar6._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                (ulong)*(uint *)(this + 0x30) * 4) + uVar15) -
                                     SUB164(auVar5 * auVar9,8)) * lVar2, auVar10._8_8_ = 0,
               auVar10._0_8_ = uVar19, pNVar12 = SUB168(auVar6 * auVar10,0),
               SUB164(auVar6 * auVar10,8) < uVar20)) goto LAB_00101358;
          }
          pNVar12 = *(Node **)(lVar1 + (ulong)uVar15 * 8);
          if (((pNVar12 != (Node *)0x0) && (pNVar12[0x2c] = (Node)0x1, pNVar13 != (Node *)0x0)) &&
             (param_2)) {
            pNVar12 = (Node *)mark_children_dirty(this,pNVar13,true);
          }
        }
      }
LAB_00101358:
      iVar21 = iVar21 + 1;
    } while (iVar11 != iVar21);
  }
  return pNVar12;
}



/* CowData<Node*>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Node*>::_copy_on_write(CowData<Node*> *this)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  ulong uVar5;
  size_t __n;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar5 = 0x10;
  __n = lVar2 * 8;
  if (__n != 0) {
    uVar5 = __n - 1 | __n - 1 >> 1;
    uVar5 = uVar5 | uVar5 >> 2;
    uVar5 = uVar5 | uVar5 >> 4;
    uVar5 = uVar5 | uVar5 >> 8;
    uVar5 = uVar5 | uVar5 >> 0x10;
    uVar5 = (uVar5 | uVar5 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar5,false);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = 1;
    puVar4[1] = lVar2;
    memcpy(puVar4 + 2,*(void **)this,__n);
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
    }
    *(undefined8 **)this = puVar4 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* SceneTreeEditor::_cell_multi_selected(Object*, int, bool) */

void __thiscall
SceneTreeEditor::_cell_multi_selected
          (SceneTreeEditor *this,Object *param_1,int param_2,bool param_3)

{
  Node *pNVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  long in_FS_OFFSET;
  Variant aVStack_68 [8];
  Array local_60 [8];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Object *)0x0) {
    lVar4 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
    if (lVar4 != 0) {
      cVar2 = TreeItem::is_visible();
      if (cVar2 != '\0') {
        TreeItem::get_metadata((int)&local_58);
        Variant::operator_cast_to_NodePath(aVStack_68);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        lVar4 = Node::get_node((NodePath *)this);
        if ((lVar4 != 0) && (pNVar1 = *(Node **)(this + 0x9c8), pNVar1 != (Node *)0x0)) {
          if (param_3) {
            EditorSelection::add_node(pNVar1);
          }
          else {
            EditorSelection::remove_node(pNVar1);
          }
          EditorSelection::get_selected_nodes();
          iVar3 = Array::size();
          Array::~Array(local_60);
          if (1 < iVar3) {
            if (_cell_multi_selected(Object*,int,bool)::{lambda()#1}::operator()()::sname == '\0') {
              iVar3 = __cxa_guard_acquire(&_cell_multi_selected(Object*,int,bool)::{lambda()#1}::
                                           operator()()::sname);
              if (iVar3 != 0) {
                _scs_create((char *)&_cell_multi_selected(Object*,int,bool)::{lambda()#1}::
                                     operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &_cell_multi_selected(Object*,int,bool)::{lambda()#1}::operator()()::
                              sname,&__dso_handle);
                __cxa_guard_release(&_cell_multi_selected(Object*,int,bool)::{lambda()#1}::
                                     operator()()::sname);
              }
            }
            local_58 = 0;
            local_50 = (undefined1  [16])0x0;
            (**(code **)(*(long *)this + 0xd0))
                      (this,&_cell_multi_selected(Object*,int,bool)::{lambda()#1}::operator()()::
                             sname,0,0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
          }
        }
        NodePath::~NodePath((NodePath *)aVStack_68);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001016f5;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    _err_print_error("_cell_multi_selected","editor/gui/scene_tree_editor.cpp",0x4ed,
                     "Parameter \"item\" is null.",0,0);
    return;
  }
LAB_001016f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<Node*, SceneTreeEditor::CachedNode, HashMapHasherDefault,
   HashMapComparatorDefault<Node*>, DefaultTypedAllocator<HashMapElement<Node*,
   SceneTreeEditor::CachedNode> > >::erase(Node* const&) [clone .isra.0] */

void __thiscall
HashMap<Node*,SceneTreeEditor::CachedNode,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,SceneTreeEditor::CachedNode>>>
::erase(HashMap<Node*,SceneTreeEditor::CachedNode,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,SceneTreeEditor::CachedNode>>>
        *this,Node **param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
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
  ulong uVar29;
  uint uVar30;
  ulong uVar31;
  ulong uVar32;
  ulong uVar33;
  long *plVar34;
  ulong uVar35;
  uint uVar36;
  uint uVar37;
  uint *puVar38;
  
  lVar6 = *(long *)(this + 8);
  if ((lVar6 != 0) && (*(int *)(this + 0x2c) != 0)) {
    lVar7 = *(long *)(this + 0x10);
    uVar5 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar35 = CONCAT44(0,uVar5);
    lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar29 = (long)*param_1 * 0x3ffff - 1;
    uVar29 = (uVar29 ^ uVar29 >> 0x1f) * 0x15;
    uVar29 = (uVar29 ^ uVar29 >> 0xb) * 0x41;
    uVar29 = uVar29 >> 0x16 ^ uVar29;
    uVar32 = uVar29 & 0xffffffff;
    if ((int)uVar29 == 0) {
      uVar32 = 1;
    }
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar32 * lVar8;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar35;
    uVar29 = SUB168(auVar11 * auVar20,8);
    uVar37 = *(uint *)(lVar7 + uVar29 * 4);
    uVar33 = (ulong)SUB164(auVar11 * auVar20,8);
    if (uVar37 != 0) {
      uVar36 = 0;
      do {
        auVar14._8_8_ = 0;
        auVar14._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar35;
        uVar31 = SUB168(auVar14 * auVar23,8);
        uVar30 = SUB164(auVar14 * auVar23,8);
        if (((uint)uVar32 == uVar37) &&
           (*param_1 == *(Node **)(*(long *)(lVar6 + uVar29 * 8) + 0x10))) {
          puVar38 = (uint *)(lVar7 + uVar31 * 4);
          uVar37 = *puVar38;
          if ((uVar37 != 0) &&
             (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar37 * lVar8, auVar24._8_8_ = 0,
             auVar24._0_8_ = uVar35, auVar16._8_8_ = 0,
             auVar16._0_8_ = (ulong)((uVar30 + uVar5) - SUB164(auVar15 * auVar24,8)) * lVar8,
             auVar25._8_8_ = 0, auVar25._0_8_ = uVar35, uVar29 = (ulong)uVar30, uVar32 = uVar33,
             SUB164(auVar16 * auVar25,8) != 0)) {
            while( true ) {
              uVar33 = uVar29;
              puVar1 = (uint *)(lVar7 + uVar32 * 4);
              *puVar38 = *puVar1;
              puVar2 = (undefined8 *)(lVar6 + uVar31 * 8);
              *puVar1 = uVar37;
              puVar3 = (undefined8 *)(lVar6 + uVar32 * 8);
              uVar9 = *puVar2;
              *puVar2 = *puVar3;
              *puVar3 = uVar9;
              auVar19._8_8_ = 0;
              auVar19._0_8_ = (ulong)((int)uVar33 + 1) * lVar8;
              auVar28._8_8_ = 0;
              auVar28._0_8_ = uVar35;
              uVar31 = SUB168(auVar19 * auVar28,8);
              puVar38 = (uint *)(lVar7 + uVar31 * 4);
              uVar37 = *puVar38;
              if ((uVar37 == 0) ||
                 (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)uVar37 * lVar8, auVar26._8_8_ = 0,
                 auVar26._0_8_ = uVar35, auVar18._8_8_ = 0,
                 auVar18._0_8_ =
                      (ulong)((SUB164(auVar19 * auVar28,8) + uVar5) - SUB164(auVar17 * auVar26,8)) *
                      lVar8, auVar27._8_8_ = 0, auVar27._0_8_ = uVar35,
                 SUB164(auVar18 * auVar27,8) == 0)) break;
              uVar29 = uVar31 & 0xffffffff;
              uVar32 = uVar33;
            }
          }
          plVar4 = (long *)(lVar6 + uVar33 * 8);
          *(undefined4 *)(lVar7 + uVar33 * 4) = 0;
          plVar34 = (long *)*plVar4;
          if (*(long **)(this + 0x18) == plVar34) {
            *(long *)(this + 0x18) = *plVar34;
            plVar34 = (long *)*plVar4;
            if (*(long **)(this + 0x20) != plVar34) goto LAB_001018e9;
          }
          else if (*(long **)(this + 0x20) != plVar34) {
LAB_001018e9:
            plVar10 = (long *)plVar34[1];
            goto joined_r0x001018f0;
          }
          *(long *)(this + 0x20) = plVar34[1];
          plVar34 = (long *)*plVar4;
          plVar10 = (long *)plVar34[1];
joined_r0x001018f0:
          if (plVar10 != (long *)0x0) {
            *plVar10 = *plVar34;
            plVar34 = (long *)*plVar4;
          }
          if (*plVar34 != 0) {
            *(long *)(*plVar34 + 8) = plVar34[1];
            plVar34 = (long *)*plVar4;
          }
          Memory::free_static(plVar34,false);
          *(undefined8 *)(*(long *)(this + 8) + uVar33 * 8) = 0;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + -1;
          return;
        }
        uVar37 = *(uint *)(lVar7 + uVar31 * 4);
        uVar33 = uVar31 & 0xffffffff;
        uVar36 = uVar36 + 1;
      } while ((uVar37 != 0) &&
              (auVar12._8_8_ = 0, auVar12._0_8_ = (ulong)uVar37 * lVar8, auVar21._8_8_ = 0,
              auVar21._0_8_ = uVar35, auVar13._8_8_ = 0,
              auVar13._0_8_ = (ulong)((uVar5 + uVar30) - SUB164(auVar12 * auVar21,8)) * lVar8,
              auVar22._8_8_ = 0, auVar22._0_8_ = uVar35, uVar29 = uVar31,
              uVar36 <= SUB164(auVar13 * auVar22,8)));
    }
  }
  return;
}



/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] [clone .constprop.0] */

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



/* SceneTreeEditor::get_scene_node() const */

undefined8 __thiscall SceneTreeEditor::get_scene_node(SceneTreeEditor *this)

{
  undefined8 uVar1;
  
  if (((byte)this[0x2fa] & 0x40) != 0) {
    if (*(long *)(this + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    uVar1 = SceneTree::get_edited_scene_root();
    return uVar1;
  }
  _err_print_error("get_scene_node","editor/gui/scene_tree_editor.cpp",0x36,
                   "Condition \"!is_inside_tree()\" is true. Returning: nullptr",0,0);
  return 0;
}



/* SceneTreeEditor::_toggle_visible(Node*) */

void __thiscall SceneTreeEditor::_toggle_visible(SceneTreeEditor *this,Node *param_1)

{
  char cVar1;
  bool bVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  Variant *local_e0;
  long local_d0;
  int local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int local_b8 [2];
  undefined1 local_b0 [16];
  Variant *local_98;
  undefined1 local_90 [16];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_d0,"is_visible",false);
  cVar1 = Object::has_method((StringName *)param_1);
  if (cVar1 == '\0') {
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    goto LAB_00101c0c;
  }
  StringName::StringName((StringName *)&local_c8,"set_visible",false);
  cVar1 = Object::has_method((StringName *)param_1);
  if (StringName::configured != '\0') {
    if (CONCAT44(uStack_c4,local_c8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00101c91;
    }
    if (local_d0 != 0) {
      StringName::unref();
    }
  }
LAB_00101c91:
  if (cVar1 != '\0') {
    StringName::StringName((StringName *)&local_d0,"is_visible",false);
    local_90 = (undefined1  [16])0x0;
    local_98 = (Variant *)0x0;
    local_c8 = 0;
    uStack_c4 = 0;
    uStack_c0 = 0;
    (**(code **)(*(long *)param_1 + 0x68))
              ((Variant *)local_78,param_1,(StringName *)&local_d0,0,0,(StringName *)&local_c8);
    if (local_c8 == 0) {
      Variant::Variant((Variant *)local_b8,(Variant *)local_78);
    }
    else {
      local_b8[0] = 0;
      local_b0 = (undefined1  [16])0x0;
    }
    local_e0 = (Variant *)local_b8;
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
    }
    bVar2 = Variant::operator_cast_to_bool(local_e0);
    if (Variant::needs_deinit[local_b8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_d0 != 0)) {
      StringName::unref();
    }
    pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
    StringName::StringName((StringName *)&local_c8,"set_visible",false);
    Variant::Variant((Variant *)local_78,!bVar2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_98 = (Variant *)local_78;
    EditorUndoRedoManager::add_do_methodp
              (pOVar3,(StringName *)param_1,(Variant **)&local_c8,(int)&local_98);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_c8,"set_visible",false);
    Variant::Variant((Variant *)local_78,bVar2);
    local_60 = 0;
    local_58 = (undefined1  [16])0x0;
    local_98 = (Variant *)local_78;
    EditorUndoRedoManager::add_undo_methodp
              (pOVar3,(StringName *)param_1,(Variant **)&local_c8,(int)&local_98);
    if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (CONCAT44(uStack_c4,local_c8) != 0)) {
      StringName::unref();
    }
  }
LAB_00101c0c:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_update_visibility_color(Node*, TreeItem*) */

void __thiscall
SceneTreeEditor::_update_visibility_color(SceneTreeEditor *this,Node *param_1,TreeItem *param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  long in_FS_OFFSET;
  long local_c0;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_98 [2];
  undefined1 local_90 [16];
  undefined8 local_78;
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_b8,"is_visible_in_tree",false);
  cVar1 = Object::has_method((StringName *)param_1);
  if ((StringName::configured != '\0') && (CONCAT44(uStack_b4,local_b8) != 0)) {
    StringName::unref();
  }
  if (cVar1 != '\0') {
    local_a8 = _LC39;
    uStack_a4 = _LC39;
    uStack_a0 = _LC39;
    uStack_9c = _LC39;
    StringName::StringName((StringName *)&local_c0,"is_visible_in_tree",false);
    local_70 = (undefined1  [16])0x0;
    local_78 = 0;
    local_b8 = 0;
    uStack_b4 = 0;
    uStack_b0 = 0;
    (**(code **)(*(long *)param_1 + 0x68))
              ((Variant *)local_58,param_1,(StringName *)&local_c0,0,0,(StringName *)&local_b8);
    if (local_b8 == 0) {
      Variant::Variant((Variant *)local_98,(Variant *)local_58);
    }
    else {
      local_98[0] = 0;
      local_90 = (undefined1  [16])0x0;
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
    }
    bVar2 = Variant::operator_cast_to_bool((Variant *)local_98);
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_c0 != 0)) {
      StringName::unref();
    }
    if (!bVar2) {
      uStack_9c = 0x3f19999a;
    }
    uVar3 = TreeItem::get_button_by_id((int)param_2,0);
    TreeItem::set_button_color((int)param_2,0,(Color *)(ulong)uVar3);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_set_item_custom_color(TreeItem*, Color) */

void SceneTreeEditor::_set_item_custom_color
               (undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  code *pcVar1;
  int iVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = param_1;
  local_50 = param_2;
  TreeItem::set_custom_color((int)param_4,(Color *)0x0);
  pcVar1 = *(code **)(*param_4 + 0xa8);
  Variant::Variant((Variant *)local_48,(Color *)&local_58);
  if (_set_item_custom_color(TreeItem*,Color)::{lambda()#1}::operator()()::sname == '\0') {
    iVar2 = __cxa_guard_acquire(&_set_item_custom_color(TreeItem*,Color)::{lambda()#1}::operator()()
                                 ::sname);
    if (iVar2 != 0) {
      _scs_create((char *)&_set_item_custom_color(TreeItem*,Color)::{lambda()#1}::operator()()::
                           sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_set_item_custom_color(TreeItem*,Color)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_set_item_custom_color(TreeItem*,Color)::{lambda()#1}::operator()()::
                           sname);
    }
  }
  (*pcVar1)(param_4,&_set_item_custom_color(TreeItem*,Color)::{lambda()#1}::operator()()::sname,
            (Variant *)local_48);
  if (Variant::needs_deinit[local_48[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_move_node_item(TreeItem*, HashMap<Node*, SceneTreeEditor::CachedNode,
   HashMapHasherDefault, HashMapComparatorDefault<Node*>,
   DefaultTypedAllocator<HashMapElement<Node*, SceneTreeEditor::CachedNode> > >::Iterator&) */

void __thiscall
SceneTreeEditor::_move_node_item(SceneTreeEditor *this,TreeItem *param_1,Iterator *param_2)

{
  long lVar1;
  TreeItem *pTVar2;
  int iVar3;
  TreeItem *pTVar4;
  long lVar5;
  int iVar6;
  
  if (param_1 == (TreeItem *)0x0) {
    return;
  }
  lVar5 = *(long *)param_2;
  lVar1 = *(long *)(lVar5 + 0x10);
  if (*(int *)(lVar1 + 0x21c) == 0) {
    if ((*(long *)(lVar1 + 400) != 0) && (*(char *)(*(long *)(lVar1 + 400) + 0x1d0) != '\0')) {
      Node::_update_children_cache_impl();
      lVar5 = *(long *)param_2;
    }
    iVar6 = *(int *)(lVar1 + 0x22c);
  }
  else {
    iVar6 = -1;
    _err_print_error("get_index","./scene/main/node.h",0x20a,
                     "Condition \"!p_include_internal && data.internal_mode != INTERNAL_MODE_DISABLED\" is true. Returning: -1"
                     ,"Node is internal. Can\'t get index with \'include_internal\' being false.",0,
                     0);
    lVar5 = *(long *)param_2;
  }
  pTVar2 = *(TreeItem **)(lVar5 + 0x20);
  pTVar4 = (TreeItem *)TreeItem::get_parent();
  if (param_1 == pTVar4) {
    if (iVar6 == *(int *)(*(long *)param_2 + 0x28)) {
      return;
    }
LAB_0010238a:
    iVar3 = TreeItem::get_index();
    if (iVar3 == iVar6) goto LAB_00102364;
  }
  else {
    lVar5 = TreeItem::get_parent();
    if (lVar5 != 0) {
      pTVar4 = (TreeItem *)TreeItem::get_parent();
      TreeItem::remove_child(pTVar4);
    }
    TreeItem::add_child(param_1);
    *(undefined1 *)(*(long *)param_2 + 0x2e) = 0;
    iVar3 = TreeItem::get_child_count();
    iVar3 = iVar3 + -1;
    *(int *)(*(long *)param_2 + 0x28) = iVar3;
    if (iVar3 == iVar6) {
      return;
    }
    if (iVar3 == -1) goto LAB_0010238a;
  }
  if (iVar6 == 0) {
    TreeItem::get_child((int)param_1);
    TreeItem::move_before(pTVar2);
  }
  else {
    TreeItem::get_child_count();
    TreeItem::get_child((int)param_1);
    TreeItem::move_after(pTVar2);
  }
LAB_00102364:
  *(int *)(*(long *)param_2 + 0x28) = iVar6;
  return;
}



/* SceneTreeEditor::_compute_hash(Node*, unsigned long&) */

void __thiscall SceneTreeEditor::_compute_hash(SceneTreeEditor *this,Node *param_1,ulong *param_2)

{
  int iVar1;
  Node *pNVar2;
  int iVar3;
  
  *param_2 = *param_2 * 0x21 ^ (ulong)param_1;
  iVar3 = 0;
  while( true ) {
    iVar1 = Node::get_child_count(SUB81(param_1,0));
    if (iVar1 <= iVar3) break;
    pNVar2 = (Node *)Node::get_child((int)param_1,SUB41(iVar3,0));
    _compute_hash(this,pNVar2,param_2);
    iVar3 = iVar3 + 1;
  }
  return;
}



/* SceneTreeEditor::_find(TreeItem*, NodePath const&) */

TreeItem * __thiscall
SceneTreeEditor::_find(SceneTreeEditor *this,TreeItem *param_1,NodePath *param_2)

{
  char cVar1;
  TreeItem *pTVar2;
  long in_FS_OFFSET;
  Variant local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (TreeItem *)0x0) {
    param_1 = (TreeItem *)0x0;
  }
  else {
    TreeItem::get_metadata((int)local_48);
    Variant::operator_cast_to_NodePath(local_50);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar1 = NodePath::operator==((NodePath *)local_50,param_2);
    if (cVar1 == '\0') {
      pTVar2 = (TreeItem *)TreeItem::get_first_child();
      while (pTVar2 != (TreeItem *)0x0) {
        param_1 = (TreeItem *)_find(this,pTVar2,param_2);
        if (param_1 != (TreeItem *)0x0) goto LAB_00102516;
        pTVar2 = (TreeItem *)TreeItem::get_next();
      }
      param_1 = (TreeItem *)0x0;
    }
LAB_00102516:
    NodePath::~NodePath((NodePath *)local_50);
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* SceneTreeEditor::get_selected() */

undefined8 __thiscall SceneTreeEditor::get_selected(SceneTreeEditor *this)

{
  return *(undefined8 *)(this + 0xa50);
}



/* SceneTreeEditor::get_filter() const */

void SceneTreeEditor::get_filter(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xa60) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xa60));
  }
  return;
}



/* SceneTreeEditor::get_filter_term_warning() */

void SceneTreeEditor::get_filter_term_warning(void)

{
  long in_RSI;
  CowData<char32_t> *in_RDI;
  
  *(undefined8 *)in_RDI = 0;
  if (*(long *)(in_RSI + 0xa68) != 0) {
    CowData<char32_t>::_ref(in_RDI,(CowData *)(in_RSI + 0xa68));
  }
  return;
}



/* SceneTreeEditor::set_as_scene_tree_dock() */

void __thiscall SceneTreeEditor::set_as_scene_tree_dock(SceneTreeEditor *this)

{
  this[0xac4] = (SceneTreeEditor)0x1;
  return;
}



/* SceneTreeEditor::_update_selection(TreeItem*) */

void __thiscall SceneTreeEditor::_update_selection(SceneTreeEditor *this,TreeItem *param_1)

{
  char cVar1;
  long lVar2;
  TreeItem *pTVar3;
  int iVar4;
  long in_FS_OFFSET;
  Variant local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == (TreeItem *)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_update_selection","editor/gui/scene_tree_editor.cpp",0x6aa,
                       "Parameter \"item\" is null.",0,0);
      return;
    }
  }
  else {
    TreeItem::get_metadata((int)local_48);
    Variant::operator_cast_to_NodePath(local_50);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar1 = Node::has_node((NodePath *)this);
    if ((cVar1 != '\0') && (lVar2 = Node::get_node((NodePath *)this), lVar2 != 0)) {
      cVar1 = EditorSelection::is_selected(*(Node **)(this + 0x9c8));
      iVar4 = (int)param_1;
      if (cVar1 == '\0') {
        cVar1 = TreeItem::is_selected(iVar4);
        if (cVar1 != '\0') {
          lVar2 = Tree::get_selected();
          TreeItem::deselect(iVar4);
          if (lVar2 != 0) {
            TreeItem::set_as_cursor((int)lVar2);
          }
        }
      }
      else {
        cVar1 = TreeItem::is_selected(iVar4);
        if (cVar1 == '\0') {
          TreeItem::select(iVar4);
        }
      }
      pTVar3 = (TreeItem *)TreeItem::get_first_child();
      while (pTVar3 != (TreeItem *)0x0) {
        _update_selection(this,pTVar3);
        pTVar3 = (TreeItem *)TreeItem::get_next();
      }
    }
    NodePath::~NodePath((NodePath *)local_50);
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_selection_changed() */

void __thiscall SceneTreeEditor::_selection_changed(SceneTreeEditor *this)

{
  TreeItem *pTVar1;
  
  if (*(long *)(this + 0x9c8) == 0) {
    return;
  }
  pTVar1 = (TreeItem *)Tree::get_root();
  if (pTVar1 != (TreeItem *)0x0) {
    _update_selection(this,pTVar1);
    return;
  }
  return;
}



/* SceneTreeEditor::_is_script_type(StringName const&) const */

long * __thiscall SceneTreeEditor::_is_script_type(SceneTreeEditor *this,StringName *param_1)

{
  long *plVar1;
  
  if (((long *)**(long **)(this + 0xb08) != (long *)0x0) &&
     (plVar1 = *(long **)**(long **)(this + 0xb08), plVar1 != (long *)0x0)) {
    do {
      if (*plVar1 == *(long *)param_1) {
        return (long *)0x1;
      }
      plVar1 = (long *)plVar1[1];
    } while (plVar1 != (long *)0x0);
    return plVar1;
  }
  return (long *)0x0;
}



/* SceneTreeEditor::set_auto_expand_selected(bool, bool) */

void __thiscall
SceneTreeEditor::set_auto_expand_selected(SceneTreeEditor *this,bool param_1,bool param_2)

{
  StringName *pSVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2) {
    pSVar1 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_48,param_1);
    StringName::StringName((StringName *)&local_50,"docks/scene_tree/auto_expand_to_selected",false)
    ;
    Object::set(pSVar1,(Variant *)&local_50,(bool *)local_48);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  this[0xaa8] = (SceneTreeEditor)param_1;
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeDialog::_update_valid_type_icons() */

void __thiscall SceneTreeDialog::_update_valid_type_icons(SceneTreeDialog *this)

{
  undefined8 *puVar1;
  Ref *pRVar2;
  code *pcVar3;
  Vector2 *pVVar4;
  Object *pOVar5;
  char cVar6;
  int iVar7;
  Object *pOVar8;
  undefined8 *puVar9;
  long in_FS_OFFSET;
  long local_88;
  Object *local_80;
  undefined8 local_78;
  undefined1 local_70 [16];
  float local_58;
  undefined4 local_54;
  long local_40;
  
  pRVar2 = *(Ref **)(this + 0xdc8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((_update_valid_type_icons()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&_update_valid_type_icons()::{lambda()#1}::operator()()::sname),
     iVar7 != 0)) {
    _scs_create((char *)&_update_valid_type_icons()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_update_valid_type_icons()::{lambda()#1}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_update_valid_type_icons()::{lambda()#1}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_80);
  LineEdit::set_right_icon(pRVar2);
  if (((local_80 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar5 = local_80, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_80), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
  puVar9 = *(undefined8 **)(this + 0xde0);
  puVar1 = puVar9 + *(uint *)(this + 0xdd8);
  if (puVar1 != puVar9) {
    do {
      pVVar4 = (Vector2 *)*puVar9;
      if ((_update_valid_type_icons()::{lambda()#2}::operator()()::sname == '\0') &&
         (iVar7 = __cxa_guard_acquire(&_update_valid_type_icons()::{lambda()#2}::operator()()::sname
                                     ), iVar7 != 0)) {
        _scs_create((char *)&_update_valid_type_icons()::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_update_valid_type_icons()::{lambda()#2}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_update_valid_type_icons()::{lambda()#2}::operator()()::sname);
      }
      iVar7 = Window::get_theme_constant
                        ((StringName *)this,
                         (StringName *)
                         &_update_valid_type_icons()::{lambda()#2}::operator()()::sname);
      local_58 = (float)iVar7;
      local_54 = 0;
      Control::set_custom_minimum_size(pVVar4);
      local_70 = (undefined1  [16])0x0;
      local_78 = 0;
      pcVar3 = *(code **)(*(long *)pVVar4 + 0xb8);
      StringName::StringName((StringName *)&local_88,"icon",false);
      (*pcVar3)(&local_58,pVVar4,(StringName *)&local_88,&local_78);
      local_80 = (Object *)0x0;
      pOVar8 = (Object *)Variant::get_validated_object();
      pOVar5 = local_80;
      if (pOVar8 != local_80) {
        if (pOVar8 == (Object *)0x0) {
          if (local_80 != (Object *)0x0) {
            local_80 = (Object *)0x0;
LAB_00102bc2:
            cVar6 = RefCounted::unreference();
            if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar5), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
            }
          }
        }
        else {
          pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Texture2D::typeinfo,0);
          if (pOVar5 != pOVar8) {
            local_80 = pOVar8;
            if ((pOVar8 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
              local_80 = (Object *)0x0;
            }
            if (pOVar5 != (Object *)0x0) goto LAB_00102bc2;
          }
        }
      }
      TextureRect::set_texture((Ref *)pVVar4);
      if (((local_80 == (Object *)0x0) ||
          (cVar6 = RefCounted::unreference(), pOVar5 = local_80, cVar6 == '\0')) ||
         (cVar6 = predelete_handler(local_80), cVar6 == '\0')) {
        cVar6 = Variant::needs_deinit[(int)local_58];
      }
      else {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
        cVar6 = Variant::needs_deinit[(int)local_58];
      }
      if (cVar6 != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_88 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_78] != '\0') {
        Variant::_clear_internal();
      }
      puVar9 = puVar9 + 1;
    } while (puVar1 != puVar9);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::NodeCache::mark_dirty(Node*, bool) */

void __thiscall SceneTreeEditor::NodeCache::mark_dirty(NodeCache *this,Node *param_1,bool param_2)

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
  uint uVar11;
  long lVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  
  if (param_1 == (Node *)0x0) {
    return;
  }
  lVar17 = *(long *)(this + 0x10);
  if (lVar17 == 0) goto LAB_00102e4d;
  if (*(int *)(this + 0x34) == 0) goto LAB_00102e4d;
  do {
    uVar15 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4));
    lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
    uVar10 = (long)param_1 * 0x3ffff - 1;
    uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
    uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
    uVar10 = uVar10 >> 0x16 ^ uVar10;
    uVar13 = uVar10 & 0xffffffff;
    if ((int)uVar10 == 0) {
      uVar13 = 1;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar13 * lVar1;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar15;
    lVar12 = SUB168(auVar2 * auVar6,8);
    uVar14 = *(uint *)(*(long *)(this + 0x18) + lVar12 * 4);
    uVar11 = SUB164(auVar2 * auVar6,8);
    if (uVar14 != 0) {
      uVar16 = 0;
      while (((uint)uVar13 != uVar14 ||
             (param_1 != *(Node **)(*(long *)(lVar17 + lVar12 * 8) + 0x10)))) {
        uVar16 = uVar16 + 1;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar15;
        lVar12 = SUB168(auVar3 * auVar7,8);
        uVar14 = *(uint *)(*(long *)(this + 0x18) + lVar12 * 4);
        uVar11 = SUB164(auVar3 * auVar7,8);
        if ((uVar14 == 0) ||
           (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar14 * lVar1, auVar8._8_8_ = 0,
           auVar8._0_8_ = uVar15, auVar5._8_8_ = 0,
           auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                            (ulong)*(uint *)(this + 0x30) * 4) + uVar11) -
                                 SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
           auVar9._0_8_ = uVar15, SUB164(auVar5 * auVar9,8) < uVar16)) goto LAB_00102e4d;
      }
      lVar17 = *(long *)(lVar17 + (ulong)uVar11 * 8);
      if (lVar17 != 0) {
        *(undefined1 *)(lVar17 + 0x2c) = 1;
      }
    }
LAB_00102e4d:
    if (!param_2) {
      return;
    }
    do {
      param_1 = (Node *)Node::get_parent();
      if (param_1 == (Node *)0x0) {
        return;
      }
      lVar17 = *(long *)(this + 0x10);
    } while ((lVar17 == 0) || (*(int *)(this + 0x34) == 0));
  } while( true );
}



/* SceneTreeEditor::_warning_changed(Node*) */

void __thiscall SceneTreeEditor::_warning_changed(SceneTreeEditor *this,Node *param_1)

{
  NodeCache::mark_dirty((NodeCache *)(this + 0x9d0),param_1,true);
  Timer::start(_LC52);
  return;
}



/* SceneTreeEditor::NodeCache::get(Node*, bool) */

Node * SceneTreeEditor::NodeCache::get(Node *param_1,bool param_2)

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
  char in_CL;
  uint uVar11;
  Node *in_RDX;
  long lVar12;
  undefined7 in_register_00000031;
  NodeCache *this;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  long in_FS_OFFSET;
  CachedNode *local_48;
  long local_40;
  
  this = (NodeCache *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_RDX == (Node *)0x0) {
    *(undefined8 *)param_1 = 0;
  }
  else {
    lVar16 = *(long *)(this + 0x10);
    if (lVar16 != 0) {
      if (*(int *)(this + 0x34) != 0) {
        uVar14 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4));
        lVar1 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
        uVar10 = (long)in_RDX * 0x3ffff - 1;
        uVar10 = (uVar10 ^ uVar10 >> 0x1f) * 0x15;
        uVar10 = (uVar10 ^ uVar10 >> 0xb) * 0x41;
        uVar10 = uVar10 >> 0x16 ^ uVar10;
        uVar17 = uVar10 & 0xffffffff;
        if ((int)uVar10 == 0) {
          uVar17 = 1;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar17 * lVar1;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar14;
        lVar12 = SUB168(auVar2 * auVar6,8);
        uVar13 = *(uint *)(*(long *)(this + 0x18) + lVar12 * 4);
        uVar11 = SUB164(auVar2 * auVar6,8);
        if (uVar13 != 0) {
          uVar15 = 0;
          do {
            if (((uint)uVar17 == uVar13) &&
               (*(Node **)(*(long *)(lVar16 + lVar12 * 8) + 0x10) == in_RDX)) {
              lVar16 = *(long *)(lVar16 + (ulong)uVar11 * 8);
              if ((lVar16 == 0) || (*(short *)(lVar16 + 0x38) == -1)) goto LAB_0010302b;
              if (in_CL == '\0') {
                *(undefined8 *)param_1 = 0;
                goto LAB_00103032;
              }
              local_48 = (CachedNode *)(lVar16 + 0x18);
              HashSet<SceneTreeEditor::CachedNode*,HashMapHasherDefault,HashMapComparatorDefault<SceneTreeEditor::CachedNode*>>
              ::erase((HashSet<SceneTreeEditor::CachedNode*,HashMapHasherDefault,HashMapComparatorDefault<SceneTreeEditor::CachedNode*>>
                       *)(this + 0x38),&local_48);
              *(undefined2 *)(lVar16 + 0x38) = 0xffff;
              mark_dirty(this,in_RDX,true);
              mark_children_dirty(this,in_RDX,true);
              goto LAB_0010302b;
            }
            uVar15 = uVar15 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)(uVar11 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar14;
            lVar12 = SUB168(auVar3 * auVar7,8);
            uVar13 = *(uint *)(*(long *)(this + 0x18) + lVar12 * 4);
            uVar11 = SUB164(auVar3 * auVar7,8);
          } while ((uVar13 != 0) &&
                  (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar13 * lVar1, auVar8._8_8_ = 0,
                  auVar8._0_8_ = uVar14, auVar5._8_8_ = 0,
                  auVar5._0_8_ = (ulong)((*(uint *)(hash_table_size_primes +
                                                   (ulong)*(uint *)(this + 0x30) * 4) + uVar11) -
                                        SUB164(auVar4 * auVar8,8)) * lVar1, auVar9._8_8_ = 0,
                  auVar9._0_8_ = uVar14, uVar15 <= SUB164(auVar5 * auVar9,8)));
        }
      }
      lVar16 = 0;
    }
LAB_0010302b:
    *(long *)param_1 = lVar16;
  }
LAB_00103032:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_update_node_path(Node*, bool) */

void __thiscall SceneTreeEditor::_update_node_path(SceneTreeEditor *this,Node *param_1,bool param_2)

{
  undefined8 uVar1;
  int iVar2;
  Node *pNVar3;
  int iVar4;
  int iVar5;
  long in_FS_OFFSET;
  long local_68;
  NodePath local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_1 != (Node *)0x0) &&
     (NodeCache::get((Node *)&local_68,(bool)((char)this + -0x30)), local_68 != 0)) {
    uVar1 = *(undefined8 *)(local_68 + 0x20);
    Node::get_path();
    Variant::Variant((Variant *)local_58,local_60);
    TreeItem::set_metadata((int)uVar1,(Variant *)0x0);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    NodePath::~NodePath(local_60);
    if ((param_2) && (iVar2 = Node::get_child_count(SUB81(param_1,0)), 0 < iVar2)) {
      iVar4 = 0;
      do {
        iVar5 = iVar4 + 1;
        pNVar3 = (Node *)Node::get_child((int)param_1,SUB41(iVar4,0));
        _update_node_path(this,pNVar3,true);
        iVar4 = iVar5;
      } while (iVar2 != iVar5);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneTreeEditor::_move_node_children(HashMap<Node*, SceneTreeEditor::CachedNode,
   HashMapHasherDefault, HashMapComparatorDefault<Node*>,
   DefaultTypedAllocator<HashMapElement<Node*, SceneTreeEditor::CachedNode> > >::Iterator&) */

void __thiscall SceneTreeEditor::_move_node_children(SceneTreeEditor *this,Iterator *param_1)

{
  undefined8 uVar1;
  TreeItem *pTVar2;
  int iVar3;
  int iVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = *(undefined8 *)(*(long *)param_1 + 0x10);
  pTVar2 = *(TreeItem **)(*(long *)param_1 + 0x20);
  iVar3 = Node::get_child_count(SUB81(uVar1,0));
  if (0 < iVar3) {
    iVar4 = 0;
    do {
      Node::get_child((int)uVar1,SUB41(iVar4,0));
      NodeCache::get((Node *)&local_48,(bool)((char)this + -0x30));
      if (local_48 != 0) {
        _move_node_item(this,pTVar2,(Iterator *)&local_48);
      }
      iVar4 = iVar4 + 1;
    } while (iVar3 != iVar4);
  }
  *(undefined1 *)(*(long *)param_1 + 0x2d) = 0;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::NodeCache::has(Node*) */

bool SceneTreeEditor::NodeCache::has(Node *param_1)

{
  long in_FS_OFFSET;
  long local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  get((Node *)&local_18,SUB81(param_1,0));
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_18 != 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_update_marking_list(HashSet<Node*, HashMapHasherDefault,
   HashMapComparatorDefault<Node*> > const&) */

void __thiscall SceneTreeEditor::_update_marking_list(SceneTreeEditor *this,HashSet *param_1)

{
  NodeCache *this_00;
  int iVar1;
  long lVar2;
  Node *pNVar3;
  long lVar4;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  iVar1 = *(int *)(param_1 + 0x24);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (iVar1 != 0) {
    lVar2 = *(long *)param_1;
    lVar4 = 0;
    this_00 = (NodeCache *)(this + 0x9d0);
    while( true ) {
      pNVar3 = *(Node **)(lVar2 + lVar4 * 8);
      NodeCache::get((Node *)&local_48,SUB81(this_00,0));
      if (local_48 != 0) {
        NodeCache::mark_dirty(this_00,pNVar3,true);
        if (pNVar3 != (Node *)0x0) {
          NodeCache::mark_children_dirty(this_00,pNVar3,true);
        }
      }
      if (iVar1 <= (int)lVar4 + 1) break;
      lVar4 = lVar4 + 1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::update_warning() */

void __thiscall SceneTreeEditor::update_warning(SceneTreeEditor *this)

{
  NodeCache::mark_dirty((NodeCache *)(this + 0x9d0),(Node *)0x0,true);
  Timer::start(_LC52);
  return;
}



/* SceneTreeEditor::NodeCache::mark_children_dirty(Node*, bool) */

void __thiscall
SceneTreeEditor::NodeCache::mark_children_dirty(NodeCache *this,Node *param_1,bool param_2)

{
  if (param_1 != (Node *)0x0) {
    mark_children_dirty(this,param_1,param_2);
    return;
  }
  return;
}



/* SceneTreeEditor::NodeCache::delete_pending() */

void __thiscall SceneTreeEditor::NodeCache::delete_pending(NodeCache *this)

{
  int iVar1;
  CachedNode *pCVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  TreeItem *pTVar6;
  int iVar7;
  uint uVar8;
  CachedNode **ppCVar9;
  
  iVar1 = *(int *)(this + 0x5c);
  uVar8 = (uint)(byte)this[0x72];
  if ((iVar1 != 0) && (ppCVar9 = *(CachedNode ***)(this + 0x38), ppCVar9 != (CachedNode **)0x0)) {
    iVar7 = 0;
    uVar8 = (uint)(byte)this[0x72];
    do {
      pCVar2 = *ppCVar9;
      iVar5 = *(ushort *)(pCVar2 + 0x20) - uVar8;
      if (iVar5 < 1) {
        iVar5 = -iVar5;
      }
      if (iVar5 < 2) {
        if (pCVar2[0x16] == (CachedNode)0x0) {
          pTVar6 = (TreeItem *)TreeItem::get_parent();
          TreeItem::remove_child(pTVar6);
          (*ppCVar9)[0x16] = (CachedNode)0x1;
          uVar8 = (uint)(byte)this[0x72];
        }
      }
      else {
        pOVar3 = *(Object **)(pCVar2 + 8);
        cVar4 = predelete_handler(pOVar3);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        if (*(long *)(*ppCVar9 + 0x18) != 0) {
          HashMap<Node*,SceneTreeEditor::CachedNode,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,SceneTreeEditor::CachedNode>>>
          ::erase((HashMap<Node*,SceneTreeEditor::CachedNode,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,SceneTreeEditor::CachedNode>>>
                   *)(this + 8),(Node **)(*(long *)(*ppCVar9 + 0x18) + 0x10));
        }
        HashSet<SceneTreeEditor::CachedNode*,HashMapHasherDefault,HashMapComparatorDefault<SceneTreeEditor::CachedNode*>>
        ::erase((HashSet<SceneTreeEditor::CachedNode*,HashMapHasherDefault,HashMapComparatorDefault<SceneTreeEditor::CachedNode*>>
                 *)(this + 0x38),ppCVar9);
        uVar8 = (uint)(byte)this[0x72];
      }
      iVar7 = iVar7 + 1;
      ppCVar9 = ppCVar9 + 1;
    } while (iVar7 < iVar1);
  }
  this[0x72] = (NodeCache)((char)uVar8 + '\x01');
  return;
}



/* SceneTreeEditor::NodeCache::clear() */

void __thiscall SceneTreeEditor::NodeCache::clear(NodeCache *this)

{
  int iVar1;
  uint uVar2;
  long *plVar3;
  Object *pOVar4;
  char cVar5;
  long lVar6;
  long lVar7;
  
  iVar1 = *(int *)(this + 0x5c);
  if (iVar1 != 0) {
    plVar3 = *(long **)(this + 0x38);
    lVar6 = 0;
    lVar7 = *plVar3;
    if (*(char *)(lVar7 + 0x16) != '\0') goto LAB_00103557;
    while ((int)lVar6 + 1 < iVar1) {
      while( true ) {
        lVar6 = lVar6 + 1;
        lVar7 = plVar3[lVar6];
        if (*(char *)(lVar7 + 0x16) == '\0') break;
LAB_00103557:
        pOVar4 = *(Object **)(lVar7 + 8);
        cVar5 = predelete_handler(pOVar4);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
        if (iVar1 <= (int)lVar6 + 1) goto LAB_00103586;
      }
    }
  }
LAB_00103586:
  if ((*(long *)(this + 0x10) != 0) && (*(int *)(this + 0x34) != 0)) {
    lVar7 = 0;
    uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4);
    if (uVar2 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0x18) + lVar7) != 0) {
          *(int *)(*(long *)(this + 0x18) + lVar7) = 0;
          Memory::free_static(*(void **)(*(long *)(this + 0x10) + lVar7 * 2),false);
          *(undefined8 *)(*(long *)(this + 0x10) + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar2 << 2);
    }
    *(undefined4 *)(this + 0x34) = 0;
    *(undefined1 (*) [16])(this + 0x20) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0x38) != 0) && (*(int *)(this + 0x5c) != 0)) {
    if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4) != 0) {
      memset(*(void **)(this + 0x50),0,
             (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x58) * 4) * 4);
    }
    *(undefined4 *)(this + 0x5c) = 0;
  }
  *(undefined8 *)(this + 0x68) = 0;
  this[0x70] = (NodeCache)0x0;
  return;
}



/* SceneTreeEditor::_reset() */

void __thiscall SceneTreeEditor::_reset(SceneTreeEditor *this)

{
  Timer::stop();
  Tree::clear();
  NodeCache::clear((NodeCache *)(this + 0x9d0));
  return;
}



/* SceneTreeEditor::_queue_update_node_tooltip(Node*, TreeItem*) */

void __thiscall
SceneTreeEditor::_queue_update_node_tooltip(SceneTreeEditor *this,Node *param_1,TreeItem *param_2)

{
  Variant *pVVar1;
  long *plVar2;
  code *pcVar3;
  char cVar4;
  Variant *pVVar5;
  long in_FS_OFFSET;
  long local_d0;
  SceneTreeEditor local_c8 [16];
  long local_b8 [2];
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  create_custom_callable_function_pointer<SceneTreeEditor,Node*,TreeItem*>
            (local_c8,(char *)this,
             (_func_void_Node_ptr_TreeItem_ptr *)"&SceneTreeEditor::_update_node_tooltip");
  plVar2 = *(long **)(this + 0xaf8);
  pcVar3 = *(code **)(*plVar2 + 0x118);
  StringName::StringName((StringName *)local_b8,"timeout",false);
  cVar4 = (*pcVar3)(plVar2,(StringName *)local_b8,local_c8);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  if (cVar4 != '\0') {
    plVar2 = *(long **)(this + 0xaf8);
    pcVar3 = *(code **)(*plVar2 + 0x110);
    StringName::StringName((StringName *)local_b8,"timeout",false);
    (*pcVar3)(plVar2,(StringName *)local_b8,local_c8);
    if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
      StringName::unref();
    }
  }
  plVar2 = *(long **)(this + 0xaf8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  Variant::Variant(local_88,(Object *)param_1);
  Variant::Variant(local_70,(Object *)param_2);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  Callable::bindp((Variant **)local_b8,(int)local_c8);
  pVVar5 = (Variant *)local_40;
  do {
    pVVar1 = pVVar5 + -0x18;
    pVVar5 = pVVar5 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar5 != local_88);
  StringName::StringName((StringName *)&local_d0,"timeout",false);
  (*pcVar3)(plVar2,(StringName *)&local_d0,(StringName *)local_b8,0);
  if ((StringName::configured != '\0') && (local_d0 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_b8);
  Timer::start(_LC52);
  Callable::~Callable((Callable *)local_c8);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_update_if_clean() [clone .part.0] */

void __thiscall SceneTreeEditor::_update_if_clean(SceneTreeEditor *this)

{
  char cVar1;
  long in_FS_OFFSET;
  SceneTreeEditor aSStack_88 [16];
  Variant *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  create_custom_callable_function_pointer<SceneTreeEditor,bool>
            (aSStack_88,(char *)this,(_func_void_bool *)"&SceneTreeEditor::_update_tree");
  Variant::Variant((Variant *)local_68,false);
  Variant::Variant((Variant *)local_50,0);
  local_78[0] = (Variant *)local_68;
  Callable::call_deferredp((Variant **)aSStack_88,(int)local_78);
  if (Variant::needs_deinit[local_50[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)aSStack_88);
  this[0xaf3] = (SceneTreeEditor)0x1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneTreeEditor::_update_if_clean() */

void __thiscall SceneTreeEditor::_update_if_clean(SceneTreeEditor *this)

{
  if (this[0xaf3] != (SceneTreeEditor)0x0) {
    return;
  }
  _update_if_clean(this);
  return;
}



/* SceneTreeEditor::_test_update_tree() */

void __thiscall SceneTreeEditor::_test_update_tree(SceneTreeEditor *this)

{
  long lVar1;
  Node *pNVar2;
  long in_FS_OFFSET;
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  this[0xaf4] = (SceneTreeEditor)0x0;
  if ((((byte)this[0x2fa] & 0x40) != 0) && (this[0xaf3] == (SceneTreeEditor)0x0)) {
    local_18 = 0x2b5a5;
    lVar1 = get_scene_node(this);
    if (lVar1 != 0) {
      pNVar2 = (Node *)get_scene_node(this);
      _compute_hash(this,pNVar2,&local_18);
    }
    if ((*(ulong *)(this + 0xab8) != local_18) && (this[0xaf3] == (SceneTreeEditor)0x0)) {
      _update_if_clean(this);
    }
  }
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_node_added(Node*) */

void __thiscall SceneTreeEditor::_node_added(SceneTreeEditor *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  char cVar3;
  
  lVar1 = get_scene_node(this);
  if (lVar1 != 0) {
    pNVar2 = (Node *)get_scene_node(this);
    if (param_1 != pNVar2) {
      pNVar2 = (Node *)get_scene_node(this);
      cVar3 = Node::is_ancestor_of(pNVar2);
      if (cVar3 == '\0') {
        return;
      }
    }
    NodeCache::mark_dirty((NodeCache *)(this + 0x9d0),param_1,true);
    if (this[0xaf3] == (SceneTreeEditor)0x0) {
      _update_if_clean(this);
      return;
    }
  }
  return;
}



/* SceneTreeEditor::_node_renamed(Node*) */

void __thiscall SceneTreeEditor::_node_renamed(SceneTreeEditor *this,Node *param_1)

{
  long lVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  Node *pNVar5;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = get_scene_node(this);
  if (lVar4 != 0) {
    pNVar5 = (Node *)get_scene_node(this);
    if (param_1 != pNVar5) {
      pNVar5 = (Node *)get_scene_node(this);
      cVar2 = Node::is_ancestor_of(pNVar5);
      if (cVar2 == '\0') goto LAB_00103c00;
    }
    NodeCache::mark_dirty((NodeCache *)(this + 0x9d0),param_1,true);
    _update_node_path(this,param_1,true);
    if (_node_renamed(Node*)::{lambda()#1}::operator()()::sname == '\0') {
      iVar3 = __cxa_guard_acquire(&_node_renamed(Node*)::{lambda()#1}::operator()()::sname);
      if (iVar3 != 0) {
        _scs_create((char *)&_node_renamed(Node*)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_node_renamed(Node*)::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_node_renamed(Node*)::{lambda()#1}::operator()()::sname);
      }
    }
    (**(code **)(*(long *)this + 0xd0))
              (this,&_node_renamed(Node*)::{lambda()#1}::operator()()::sname,0,0);
    if (Variant::needs_deinit[0] != '\0') {
      Variant::_clear_internal();
    }
    if (this[0xaf3] == (SceneTreeEditor)0x0) {
      if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_if_clean(this);
        return;
      }
      goto LAB_00103ca5;
    }
  }
LAB_00103c00:
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103ca5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_node_script_changed(Node*) */

void __thiscall SceneTreeEditor::_node_script_changed(SceneTreeEditor *this,Node *param_1)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  NodeCache::get((Node *)&local_28,SUB81((NodeCache *)(this + 0x9d0),0));
  if (local_28 != 0) {
    NodeCache::mark_dirty((NodeCache *)(this + 0x9d0),param_1,true);
    if (this[0xaf3] == (SceneTreeEditor)0x0) {
      if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_if_clean(this);
        return;
      }
      goto LAB_00103d48;
    }
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103d48:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_node_child_order_changed(Node*) */

void SceneTreeEditor::_node_child_order_changed(Node *param_1)

{
  long in_FS_OFFSET;
  long local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  NodeCache::get((Node *)&local_28,SUB81((NodeCache *)(param_1 + 0x9d0),0));
  if (local_28 != 0) {
    NodeCache::mark_dirty((NodeCache *)(param_1 + 0x9d0),*(Node **)(local_28 + 0x10),true);
    *(undefined1 *)(local_28 + 0x2d) = 1;
  }
  if (param_1[0xaf3] == (Node)0x0) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_if_clean((SceneTreeEditor *)param_1);
      return;
    }
  }
  else if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_node_editor_state_changed(Node*) */

void __thiscall SceneTreeEditor::_node_editor_state_changed(SceneTreeEditor *this,Node *param_1)

{
  NodeCache *this_00;
  SceneTreeEditor SVar1;
  char cVar2;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  this_00 = (NodeCache *)(this + 0x9d0);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  NodeCache::mark_dirty(this_00,param_1,true);
  NodeCache::get((Node *)&local_38,SUB81(this_00,0));
  if (((local_38 == 0) || (((byte)param_1[0x2fa] & 0x40) == 0)) ||
     (cVar2 = Node::can_process(), cVar2 == *(char *)(local_38 + 0x3a))) {
    SVar1 = this[0xaf3];
  }
  else {
    NodeCache::mark_children_dirty(this_00,param_1,true);
    SVar1 = this[0xaf3];
  }
  if (SVar1 == (SceneTreeEditor)0x0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_if_clean(this);
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_tree_process_mode_changed() */

void __thiscall SceneTreeEditor::_tree_process_mode_changed(SceneTreeEditor *this)

{
  char cVar1;
  long in_FS_OFFSET;
  SceneTreeEditor aSStack_88 [16];
  Variant *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  create_custom_callable_function_pointer<SceneTreeEditor,bool>
            (aSStack_88,(char *)this,(_func_void_bool *)"&SceneTreeEditor::_update_tree");
  Variant::Variant((Variant *)local_68,false);
  Variant::Variant((Variant *)local_50,0);
  local_78[0] = (Variant *)local_68;
  Callable::call_deferredp((Variant **)aSStack_88,(int)local_78);
  if (Variant::needs_deinit[local_50[0]] == '\0') {
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_68[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)aSStack_88);
  this[0xaf3] = (SceneTreeEditor)0x1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneTreeEditor::_tree_changed() */

void __thiscall SceneTreeEditor::_tree_changed(SceneTreeEditor *this)

{
  long in_FS_OFFSET;
  SceneTreeEditor aSStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (((*(char *)(EditorNode::singleton + 0x75c) == '\0') && (this[0xaf4] == (SceneTreeEditor)0x0))
     && (this[0xaf3] == (SceneTreeEditor)0x0)) {
    create_custom_callable_function_pointer<SceneTreeEditor>
              (aSStack_48,(char *)this,(_func_void *)"&SceneTreeEditor::_test_update_tree");
    Variant::Variant((Variant *)local_38,0);
    Callable::call_deferredp((Variant **)aSStack_48,0);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    Callable::~Callable((Callable *)aSStack_48);
    this[0xaf4] = (SceneTreeEditor)0x1;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::set_editor_selection(EditorSelection*) */

void __thiscall
SceneTreeEditor::set_editor_selection(SceneTreeEditor *this,EditorSelection *param_1)

{
  long *plVar1;
  code *pcVar2;
  long in_FS_OFFSET;
  long local_50;
  SceneTreeEditor local_48 [24];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(EditorSelection **)(this + 0x9c8) = param_1;
  Tree::set_select_mode(*(undefined8 *)(this + 0xa48),2);
  Tree::set_cursor_can_exit_tree(SUB81(*(undefined8 *)(this + 0xa48),0));
  plVar1 = *(long **)(this + 0x9c8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<SceneTreeEditor>
            (local_48,(char *)this,(_func_void *)"&SceneTreeEditor::_selection_changed");
  StringName::StringName((StringName *)&local_50,"selection_changed",false);
  (*pcVar2)(plVar1,(StringName *)&local_50,local_48,0);
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_48);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::NodeCache::add(Node*, TreeItem*) */

NodeCache * __thiscall
SceneTreeEditor::NodeCache::add(NodeCache *this,Node *param_1,TreeItem *param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == (TreeItem *)0x0) {
    *(undefined8 *)this = 0;
  }
  else {
    HashMap<Node*,SceneTreeEditor::CachedNode,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,SceneTreeEditor::CachedNode>>>
    ::insert((Node **)this,(CachedNode *)(param_1 + 8),true);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::NodeCache::remove(Node*, bool) */

void __thiscall SceneTreeEditor::NodeCache::remove(NodeCache *this,Node *param_1,bool param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  NodeCache NVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
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
  uint uVar40;
  int iVar41;
  ulong uVar42;
  Node *pNVar43;
  uint *puVar44;
  uint uVar45;
  uint uVar46;
  long lVar47;
  ulong uVar48;
  long lVar49;
  uint uVar50;
  uint *puVar51;
  int iVar52;
  int iVar53;
  uint *puVar54;
  ulong uVar55;
  ulong uVar56;
  ulong uVar57;
  long in_FS_OFFSET;
  CachedNode *local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Node *)0x0) {
    lVar7 = *(long *)this;
    if (*(Node **)(lVar7 + 0xa50) == param_1) {
      *(undefined8 *)(lVar7 + 0xa50) = 0;
    }
    if (*(Node **)(this + 0x68) == param_1) {
      *(undefined8 *)(this + 0x68) = 0;
      this[0x70] = (NodeCache)0x0;
    }
    lVar8 = *(long *)(lVar7 + 0xac8);
    if ((lVar8 != 0) && (*(int *)(lVar7 + 0xaec) != 0)) {
      lVar49 = *(long *)(lVar7 + 0xae0);
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar7 + 0xae8) * 4);
      uVar56 = CONCAT44(0,uVar40);
      lVar9 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar7 + 0xae8) * 8);
      uVar42 = (long)param_1 * 0x3ffff - 1;
      uVar42 = (uVar42 ^ uVar42 >> 0x1f) * 0x15;
      uVar42 = (uVar42 ^ uVar42 >> 0xb) * 0x41;
      uVar42 = uVar42 >> 0x16 ^ uVar42;
      uVar55 = uVar42 & 0xffffffff;
      if ((int)uVar42 == 0) {
        uVar55 = 1;
      }
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar55 * lVar9;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar56;
      lVar47 = SUB168(auVar12 * auVar26,8);
      uVar46 = *(uint *)(lVar49 + lVar47 * 4);
      iVar41 = SUB164(auVar12 * auVar26,8);
      if (uVar46 != 0) {
        uVar50 = 0;
LAB_0010438d:
        if ((uint)uVar55 != uVar46) goto LAB_00104340;
        lVar10 = *(long *)(lVar7 + 0xad0);
        uVar46 = *(uint *)(lVar10 + lVar47 * 4);
        uVar42 = (ulong)uVar46;
        if (*(Node **)(lVar8 + uVar42 * 8) != param_1) goto LAB_00104340;
        lVar11 = *(long *)(lVar7 + 0xad8);
        puVar1 = (uint *)(lVar11 + uVar42 * 4);
        uVar50 = *puVar1;
        uVar55 = (ulong)uVar50;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)(uVar50 + 1) * lVar9;
        auVar30._8_8_ = 0;
        auVar30._0_8_ = uVar56;
        lVar47 = SUB168(auVar16 * auVar30,8) * 4;
        uVar45 = SUB164(auVar16 * auVar30,8);
        uVar57 = (ulong)uVar45;
        puVar51 = (uint *)(lVar49 + lVar47);
        if ((*puVar51 == 0) ||
           (auVar17._8_8_ = 0, auVar17._0_8_ = (ulong)*puVar51 * lVar9, auVar31._8_8_ = 0,
           auVar31._0_8_ = uVar56, auVar18._8_8_ = 0,
           auVar18._0_8_ = (ulong)((uVar45 + uVar40) - SUB164(auVar17 * auVar31,8)) * lVar9,
           auVar32._8_8_ = 0, auVar32._0_8_ = uVar56, SUB164(auVar18 * auVar32,8) == 0)) {
          uVar57 = (ulong)uVar50;
        }
        else {
          while( true ) {
            puVar44 = (uint *)(lVar47 + lVar10);
            puVar4 = (uint *)(lVar10 + uVar55 * 4);
            puVar54 = (uint *)(uVar55 * 4 + lVar49);
            puVar2 = (undefined4 *)(lVar11 + (ulong)*puVar44 * 4);
            puVar3 = (undefined4 *)(lVar11 + (ulong)*puVar4 * 4);
            uVar6 = *puVar3;
            *puVar3 = *puVar2;
            *puVar2 = uVar6;
            uVar50 = *puVar51;
            *puVar51 = *puVar54;
            *puVar54 = uVar50;
            uVar50 = *puVar44;
            *puVar44 = *puVar4;
            *puVar4 = uVar50;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = (ulong)((int)uVar57 + 1) * lVar9;
            auVar35._8_8_ = 0;
            auVar35._0_8_ = uVar56;
            uVar48 = SUB168(auVar21 * auVar35,8);
            lVar47 = uVar48 * 4;
            puVar51 = (uint *)(lVar49 + lVar47);
            if ((*puVar51 == 0) ||
               (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)*puVar51 * lVar9, auVar33._8_8_ = 0,
               auVar33._0_8_ = uVar56, auVar20._8_8_ = 0,
               auVar20._0_8_ =
                    (ulong)((SUB164(auVar21 * auVar35,8) + uVar40) - SUB164(auVar19 * auVar33,8)) *
                    lVar9, auVar34._8_8_ = 0, auVar34._0_8_ = uVar56,
               SUB164(auVar20 * auVar34,8) == 0)) break;
            uVar55 = uVar57;
            uVar57 = uVar48 & 0xffffffff;
          }
        }
        *(undefined4 *)(lVar49 + uVar57 * 4) = 0;
        uVar40 = *(int *)(lVar7 + 0xaec) - 1;
        *(uint *)(lVar7 + 0xaec) = uVar40;
        if (uVar46 < uVar40) {
          uVar50 = *(uint *)(lVar11 + (ulong)uVar40 * 4);
          *(undefined8 *)(lVar8 + uVar42 * 8) = *(undefined8 *)(lVar8 + (ulong)uVar40 * 8);
          *puVar1 = uVar50;
          *(uint *)(lVar10 + (ulong)*(uint *)(lVar11 + (ulong)*(uint *)(lVar7 + 0xaec) * 4) * 4) =
               uVar46;
        }
      }
    }
LAB_001044f2:
    lVar7 = *(long *)(this + 0x10);
    if ((lVar7 != 0) && (*(int *)(this + 0x34) != 0)) {
      uVar56 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4));
      lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x30) * 8);
      uVar42 = (long)param_1 * 0x3ffff - 1;
      uVar42 = (uVar42 ^ uVar42 >> 0x1f) * 0x15;
      uVar42 = (uVar42 ^ uVar42 >> 0xb) * 0x41;
      uVar42 = uVar42 >> 0x16 ^ uVar42;
      uVar55 = uVar42 & 0xffffffff;
      if ((int)uVar42 == 0) {
        uVar55 = 1;
      }
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar55 * lVar8;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar56;
      lVar49 = SUB168(auVar22 * auVar36,8);
      uVar40 = *(uint *)(*(long *)(this + 0x18) + lVar49 * 4);
      uVar46 = SUB164(auVar22 * auVar36,8);
      if (uVar40 != 0) {
        uVar50 = 0;
LAB_001045e3:
        if (((uint)uVar55 != uVar40) ||
           (*(Node **)(*(long *)(lVar7 + lVar49 * 8) + 0x10) != param_1)) goto LAB_001045a0;
        lVar7 = *(long *)(lVar7 + (ulong)uVar46 * 8);
        if (lVar7 != 0) {
          if ((param_2) && (iVar41 = Node::get_child_count(SUB81(param_1,0)), 0 < iVar41)) {
            iVar52 = 0;
            do {
              iVar53 = iVar52 + 1;
              pNVar43 = (Node *)Node::get_child((int)param_1,SUB41(iVar52,0));
              remove(this,pNVar43,true);
              iVar52 = iVar53;
            } while (iVar41 != iVar53);
            pNVar43 = *(Node **)(this + 0x60);
          }
          else {
            pNVar43 = *(Node **)(this + 0x60);
          }
          if (pNVar43 == param_1) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              HashMap<Node*,SceneTreeEditor::CachedNode,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,SceneTreeEditor::CachedNode>>>
              ::erase((HashMap<Node*,SceneTreeEditor::CachedNode,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,SceneTreeEditor::CachedNode>>>
                       *)(this + 8),(Node **)(lVar7 + 0x10));
              return;
            }
            goto LAB_00104738;
          }
          TreeItem::deselect((int)*(undefined8 *)(lVar7 + 0x20));
          NVar5 = this[0x72];
          *(undefined4 *)(lVar7 + 0x28) = 0xffffffff;
          *(long *)(lVar7 + 0x30) = lVar7;
          *(ushort *)(lVar7 + 0x38) = (ushort)(byte)NVar5;
          HashSet<SceneTreeEditor::CachedNode*,HashMapHasherDefault,HashMapComparatorDefault<SceneTreeEditor::CachedNode*>>
          ::insert(local_58);
        }
      }
    }
  }
LAB_00104650:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00104738:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00104340:
  uVar50 = uVar50 + 1;
  auVar13._8_8_ = 0;
  auVar13._0_8_ = (ulong)(iVar41 + 1) * lVar9;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar56;
  lVar47 = SUB168(auVar13 * auVar27,8);
  uVar46 = *(uint *)(lVar49 + lVar47 * 4);
  iVar41 = SUB164(auVar13 * auVar27,8);
  if ((uVar46 == 0) ||
     (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar46 * lVar9, auVar28._8_8_ = 0,
     auVar28._0_8_ = uVar56, auVar15._8_8_ = 0,
     auVar15._0_8_ = (ulong)((uVar40 + iVar41) - SUB164(auVar14 * auVar28,8)) * lVar9,
     auVar29._8_8_ = 0, auVar29._0_8_ = uVar56, SUB164(auVar15 * auVar29,8) < uVar50))
  goto LAB_001044f2;
  goto LAB_0010438d;
LAB_001045a0:
  uVar50 = uVar50 + 1;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = (ulong)(uVar46 + 1) * lVar8;
  auVar37._8_8_ = 0;
  auVar37._0_8_ = uVar56;
  lVar49 = SUB168(auVar23 * auVar37,8);
  uVar40 = *(uint *)(*(long *)(this + 0x18) + lVar49 * 4);
  uVar46 = SUB164(auVar23 * auVar37,8);
  if ((uVar40 == 0) ||
     (auVar24._8_8_ = 0, auVar24._0_8_ = (ulong)uVar40 * lVar8, auVar38._8_8_ = 0,
     auVar38._0_8_ = uVar56, auVar25._8_8_ = 0,
     auVar25._0_8_ =
          (ulong)((*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x30) * 4) + uVar46) -
                 SUB164(auVar24 * auVar38,8)) * lVar8, auVar39._8_8_ = 0, auVar39._0_8_ = uVar56,
     SUB164(auVar25 * auVar39,8) < uVar50)) goto LAB_00104650;
  goto LAB_001045e3;
}



/* SceneTreeEditor::_node_removed(Node*) */

void __thiscall SceneTreeEditor::_node_removed(SceneTreeEditor *this,Node *param_1)

{
  long lVar1;
  Node *pNVar2;
  char cVar3;
  
  if (((*(char *)(EditorNode::singleton + 0x75c) == '\0') &&
      (cVar3 = EditorNode::is_changing_scene(), cVar3 == '\0')) &&
     (lVar1 = get_scene_node(this), lVar1 != 0)) {
    pNVar2 = (Node *)get_scene_node(this);
    if (param_1 != pNVar2) {
      pNVar2 = (Node *)get_scene_node(this);
      cVar3 = Node::is_ancestor_of(pNVar2);
      if (cVar3 == '\0') {
        return;
      }
    }
    NodeCache::remove((NodeCache *)(this + 0x9d0),param_1,false);
    if (this[0xaf3] == (SceneTreeEditor)0x0) {
      _update_if_clean(this);
      return;
    }
  }
  return;
}



/* SceneTreeEditor::_revoke_unique_name() */

void __thiscall SceneTreeEditor::_revoke_unique_name(SceneTreeEditor *this)

{
  char cVar1;
  StringName *pSVar2;
  Object *pOVar3;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pOVar3 = (Object *)EditorUndoRedoManager::get_singleton();
  local_a0 = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)&local_a0);
  local_98 = "Disable Scene Unique Name";
  local_a8 = 0;
  local_90 = 0x19;
  String::parse_latin1((StrRange *)&local_a8);
  TTR((String *)&local_98,(String *)&local_a8);
  EditorUndoRedoManager::create_action(pOVar3,(String *)&local_98,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  StringName::StringName((StringName *)&local_98,"set_unique_name_in_owner",false);
  pSVar2 = *(StringName **)(this + 0xaa0);
  Variant::Variant((Variant *)local_78,false);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_do_methodp(pOVar3,pSVar2,(Variant **)&local_98,(int)local_88);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"set_unique_name_in_owner",false);
  pSVar2 = *(StringName **)(this + 0xaa0);
  Variant::Variant((Variant *)local_78,true);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88[0] = (Variant *)local_78;
  EditorUndoRedoManager::add_undo_methodp(pOVar3,pSVar2,(Variant **)&local_98,(int)local_88);
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
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"_update_tree",false);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  EditorUndoRedoManager::add_do_methodp(pOVar3,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_98,"_update_tree",false);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  EditorUndoRedoManager::add_undo_methodp(pOVar3,(StringName *)this,(Variant **)&local_98,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    EditorUndoRedoManager::commit_action(SUB81(pOVar3,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_update_ask_before_revoking_unique_name() */

void __thiscall SceneTreeEditor::_update_ask_before_revoking_unique_name(SceneTreeEditor *this)

{
  char cVar1;
  StringName *pSVar2;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar1 = BaseButton::is_pressed();
  if (cVar1 != '\0') {
    pSVar2 = (StringName *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_48,false);
    StringName::StringName
              ((StringName *)&local_50,"docks/scene_tree/ask_before_revoking_unique_name",false);
    Object::set(pSVar2,(Variant *)&local_50,(bool *)local_48);
    if ((StringName::configured != '\0') && (local_50 != 0)) {
      StringName::unref();
    }
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa98),0));
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _revoke_unique_name(this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::SceneTreeEditor(bool, bool, bool) */

void __thiscall
SceneTreeEditor::SceneTreeEditor(SceneTreeEditor *this,bool param_1,bool param_2,bool param_3)

{
  char cVar1;
  StringName *pSVar2;
  long *plVar3;
  code *pcVar4;
  undefined8 uVar5;
  String *pSVar6;
  long lVar7;
  Tree *pTVar8;
  CallableCustom *pCVar9;
  AcceptDialog *pAVar10;
  Timer *pTVar11;
  ConfirmationDialog *this_00;
  BoxContainer *this_01;
  Label *pLVar12;
  CheckBox *this_02;
  List *pLVar13;
  int iVar14;
  Vector2 *pVVar15;
  long in_FS_OFFSET;
  uint uVar16;
  Callable *local_118;
  Tree local_e8 [16];
  Callable local_d8 [16];
  Tree local_c8 [16];
  long local_b8 [2];
  long local_a8 [2];
  char *local_98;
  undefined8 local_90;
  Variant *local_88;
  long local_78 [3];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  *(undefined ***)this = &PTR__initialize_classv_0012cca0;
  uVar5 = _LC86;
  *(undefined8 *)(this + 0x9c8) = 0;
  *(SceneTreeEditor **)(this + 0x9d0) = this;
  *(undefined8 *)(this + 0xa00) = uVar5;
  *(undefined8 *)(this + 0xa28) = uVar5;
  *(undefined2 *)(this + 0xa40) = 0;
  this[0xa42] = (SceneTreeEditor)0x0;
  *(undefined8 *)(this + 0xa58) = 0;
  this[0xa70] = (SceneTreeEditor)0x0;
  *(undefined4 *)(this + 0xaa8) = 1;
  this[0xaac] = (SceneTreeEditor)0x1;
  *(undefined2 *)(this + 0xac2) = 0;
  this[0xac4] = (SceneTreeEditor)0x0;
  *(undefined8 *)(this + 0xae8) = uVar5;
  *(undefined4 *)(this + 0xaf0) = 0x1000000;
  this[0xaf4] = (SceneTreeEditor)0x0;
  *(undefined8 *)(this + 0xb18) = 0;
  this[0xac0] = (SceneTreeEditor)param_2;
  *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa48) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa88) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa98) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xac8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xaf8) = (undefined1  [16])0x0;
  this[0xac1] = (SceneTreeEditor)param_3;
  if (param_1) {
    pLVar12 = (Label *)operator_new(0xad8,"");
    local_98 = (char *)0x0;
    Label::Label(pLVar12,(String *)&local_98);
    postinitialize_handler((Object *)pLVar12);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    StringName::StringName((StringName *)&local_98,"HeaderSmall",false);
    Control::set_theme_type_variation((StringName *)pLVar12);
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    local_78[0] = 0x41200000;
    Control::set_position((Vector2 *)pLVar12,SUB81(local_78,0));
    local_98 = (char *)0x0;
    String::parse_latin1((String *)&local_98,"");
    local_a8[0] = 0;
    String::parse_latin1((String *)local_a8,"Scene Tree (Nodes):");
    TTR((String *)local_b8,(String *)local_a8);
    Label::set_text((String *)pLVar12);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    Node::add_child(this,pLVar12,0,0);
    pTVar8 = (Tree *)operator_new(0xdc8,"");
    Tree::Tree(pTVar8);
    postinitialize_handler((Object *)pTVar8);
    *(Tree **)(this + 0xa48) = pTVar8;
    Node::set_auto_translate_mode(pTVar8,2);
    Control::set_anchor(*(undefined8 *)(this + 0xa48),2,1,1);
    Control::set_anchor(*(undefined8 *)(this + 0xa48),3,1,1);
    pVVar15 = *(Vector2 **)(this + 0xa48);
    uVar16 = _LC85;
  }
  else {
    pTVar8 = (Tree *)operator_new(0xdc8,"");
    Tree::Tree(pTVar8);
    postinitialize_handler((Object *)pTVar8);
    *(Tree **)(this + 0xa48) = pTVar8;
    Node::set_auto_translate_mode(pTVar8,2);
    Control::set_anchor(*(undefined8 *)(this + 0xa48),2,1,1);
    Control::set_anchor(*(undefined8 *)(this + 0xa48),3,1,1);
    pVVar15 = *(Vector2 **)(this + 0xa48);
    uVar16 = 0;
  }
  local_118 = (Callable *)local_b8;
  local_78[0] = (ulong)uVar16 << 0x20;
  Control::set_begin(pVVar15);
  local_78[0] = 0;
  Control::set_end(*(Vector2 **)(this + 0xa48));
  Tree::set_allow_reselect(SUB81(*(undefined8 *)(this + 0xa48),0));
  pSVar2 = *(StringName **)(this + 0xa48);
  StringName::StringName((StringName *)&local_98,"button_margin",false);
  iVar14 = (int)(StringName *)&local_98;
  Control::add_theme_constant_override(pSVar2,iVar14);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(this,*(undefined8 *)(this + 0xa48),0,0);
  plVar3 = *(long **)(this + 0xa48);
  pcVar4 = *(code **)(*plVar3 + 0x318);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC58;
  *(SceneTreeEditor **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_0012d790;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar5;
  *(code **)(pCVar9 + 0x38) = drop_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "SceneTreeEditor::drop_data_fw";
  Callable::Callable((Callable *)&local_98,pCVar9);
  Callable::bind<Tree*>((Tree *)local_a8);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC58;
  *(SceneTreeEditor **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_0012d700;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar5;
  *(code **)(pCVar9 + 0x38) = can_drop_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "SceneTreeEditor::can_drop_data_fw";
  Callable::Callable(local_118,pCVar9);
  Callable::bind<Tree*>(local_c8);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC58;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar9 = &PTR_hash_0012d670;
  *(undefined8 *)(pCVar9 + 0x30) = uVar5;
  *(code **)(pCVar9 + 0x38) = get_drag_data_fw;
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(SceneTreeEditor **)(pCVar9 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "SceneTreeEditor::get_drag_data_fw";
  Callable::Callable(local_d8,pCVar9);
  Callable::bind<Tree*>(local_e8);
  (*pcVar4)(plVar3,local_e8,local_c8,(Tree *)local_a8);
  Callable::~Callable((Callable *)local_e8);
  Callable::~Callable(local_d8);
  Callable::~Callable((Callable *)local_c8);
  Callable::~Callable(local_118);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)&local_98);
  if (param_2) {
    Tree::set_allow_rmb_select(SUB81(*(undefined8 *)(this + 0xa48),0));
    plVar3 = *(long **)(this + 0xa48);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<SceneTreeEditor,Vector2_const&,MouseButton>
              ((SceneTreeEditor *)&local_98,(char *)this,
               (_func_void_Vector2_ptr_MouseButton *)"&SceneTreeEditor::_rmb_select");
    StringName::StringName((StringName *)local_a8,"item_mouse_selected",false);
    (*pcVar4)(plVar3,(Tree *)local_a8,(StringName *)&local_98,0);
    if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_98);
    plVar3 = *(long **)(this + 0xa48);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    create_custom_callable_function_pointer<SceneTreeEditor,Vector2_const&,MouseButton>
              ((SceneTreeEditor *)&local_98,(char *)this,
               (_func_void_Vector2_ptr_MouseButton *)"&SceneTreeEditor::_empty_clicked");
    StringName::StringName((StringName *)local_a8,"empty_clicked",false);
    (*pcVar4)(plVar3,(Tree *)local_a8,(StringName *)&local_98,0);
    if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_98);
  }
  plVar3 = *(long **)(this + 0xa48);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<SceneTreeEditor>
            ((SceneTreeEditor *)&local_98,(char *)this,
             (_func_void *)"&SceneTreeEditor::_selected_changed");
  StringName::StringName((StringName *)local_a8,"cell_selected",false);
  (*pcVar4)(plVar3,(Tree *)local_a8,(StringName *)&local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  plVar3 = *(long **)(this + 0xa48);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<SceneTreeEditor>
            ((SceneTreeEditor *)&local_98,(char *)this,(_func_void *)"&SceneTreeEditor::_edited");
  StringName::StringName((StringName *)local_a8,"item_edited",false);
  (*pcVar4)(plVar3,(Tree *)local_a8,(StringName *)&local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  plVar3 = *(long **)(this + 0xa48);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC58;
  *(SceneTreeEditor **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_0012d8b0;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar5;
  *(code **)(pCVar9 + 0x38) = _cell_multi_selected;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "SceneTreeEditor::_cell_multi_selected";
  Callable::Callable((Callable *)&local_98,pCVar9);
  StringName::StringName((StringName *)local_a8,"multi_selected",false);
  (*pcVar4)(plVar3,(Tree *)local_a8,(StringName *)&local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  plVar3 = *(long **)(this + 0xa48);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar9 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar9);
  *(undefined **)(pCVar9 + 0x20) = &_LC58;
  *(SceneTreeEditor **)(pCVar9 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar9 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar9 = &PTR_hash_0012d940;
  *(undefined8 *)(pCVar9 + 0x40) = 0;
  uVar5 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar9 + 0x10) = 0;
  *(undefined8 *)(pCVar9 + 0x30) = uVar5;
  *(code **)(pCVar9 + 0x38) = _cell_button_pressed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar9,(int)pCVar9 + 0x28);
  *(char **)(pCVar9 + 0x20) = "SceneTreeEditor::_cell_button_pressed";
  Callable::Callable((Callable *)&local_98,pCVar9);
  StringName::StringName((StringName *)local_a8,"button_clicked",false);
  (*pcVar4)(plVar3,(Tree *)local_a8,(StringName *)&local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  plVar3 = *(long **)(this + 0xa48);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<SceneTreeEditor>
            ((SceneTreeEditor *)&local_98,(char *)this,
             (_func_void *)"&SceneTreeEditor::_deselect_items");
  StringName::StringName((StringName *)local_a8,"nothing_selected",false);
  (*pcVar4)(plVar3,(Tree *)local_a8,(StringName *)&local_98,0);
  if ((StringName::configured != '\0') && (local_a8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  pAVar10 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar10);
  postinitialize_handler((Object *)pAVar10);
  *(AcceptDialog **)(this + 0xa78) = pAVar10;
  Node::add_child(this,pAVar10,0,0);
  pAVar10 = (AcceptDialog *)operator_new(0xdb0,"");
  AcceptDialog::AcceptDialog(pAVar10);
  postinitialize_handler((Object *)pAVar10);
  *(AcceptDialog **)(this + 0xa80) = pAVar10;
  Node::add_child(this,pAVar10,0,0);
  pSVar6 = *(String **)(this + 0xa80);
  local_a8[0] = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Node Configuration Warning!";
  local_b8[0] = 0;
  local_90 = 0x1b;
  String::parse_latin1((StrRange *)local_118);
  TTR((String *)&local_98,(String *)local_118);
  Window::set_title(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Window::set_flag(*(undefined8 *)(this + 0xa80),5,1);
  *(undefined8 *)(this + 0xab8) = 0;
  *(undefined4 *)(this + 0xab0) = 0;
  pTVar11 = (Timer *)operator_new(0x428,"");
  Timer::Timer(pTVar11);
  postinitialize_handler((Object *)pTVar11);
  lVar7 = *(long *)pTVar11;
  *(Timer **)(this + 0xb00) = pTVar11;
  pcVar4 = *(code **)(lVar7 + 0x108);
  create_custom_callable_function_pointer<SceneTreeEditor,bool>
            ((SceneTreeEditor *)&local_98,(char *)this,
             (_func_void_bool *)"&SceneTreeEditor::_update_tree");
  Variant::Variant((Variant *)local_78,false);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)local_a8,iVar14);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar1 = Variant::needs_deinit[(int)local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[(int)local_78[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)local_118,"timeout",false);
  (*pcVar4)(pTVar11,local_118,(Tree *)local_a8,0);
  if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable((Callable *)&local_98);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xb00),0));
  Timer::set_wait_time(_LC111);
  Node::add_child(this,*(undefined8 *)(this + 0xb00),0,0);
  pTVar11 = (Timer *)operator_new(0x428,"");
  Timer::Timer(pTVar11);
  postinitialize_handler((Object *)pTVar11);
  *(Timer **)(this + 0xaf8) = pTVar11;
  Timer::set_wait_time(_LC111);
  Timer::set_one_shot(SUB81(*(undefined8 *)(this + 0xaf8),0));
  Node::add_child(this,*(undefined8 *)(this + 0xaf8),0,0);
  this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_00);
  postinitialize_handler((Object *)this_00);
  *(ConfirmationDialog **)(this + 0xa88) = this_00;
  local_a8[0] = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Revoke";
  local_b8[0] = 0;
  local_90 = 6;
  String::parse_latin1((StrRange *)local_118);
  TTR((String *)&local_98,(String *)local_118);
  AcceptDialog::set_ok_button_text(this_00,(StringName *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(this,*(undefined8 *)(this + 0xa88),0,0);
  plVar3 = *(long **)(this + 0xa88);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<SceneTreeEditor>
            ((SceneTreeEditor *)&local_98,(char *)this,
             (_func_void *)"&SceneTreeEditor::_update_ask_before_revoking_unique_name");
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x268,(StringName *)&local_98,0);
  Callable::~Callable((Callable *)&local_98);
  this_01 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_01,true);
  this_01[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_0012c338;
  postinitialize_handler((Object *)this_01);
  Node::add_child(*(undefined8 *)(this + 0xa88),this_01,0,0);
  pLVar12 = (Label *)operator_new(0xad8,"");
  local_98 = (char *)0x0;
  Label::Label(pLVar12,(String *)&local_98);
  postinitialize_handler((Object *)pLVar12);
  *(Label **)(this + 0xa90) = pLVar12;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa90),0,0);
  this_02 = (CheckBox *)operator_new(0xc60,"");
  local_a8[0] = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = "Don\'t Ask Again";
  local_b8[0] = 0;
  local_90 = 0xf;
  String::parse_latin1((StrRange *)local_118);
  TTR((String *)&local_98,(String *)local_118);
  CheckBox::CheckBox(this_02,(String *)&local_98);
  postinitialize_handler((Object *)this_02);
  *(CheckBox **)(this + 0xa98) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  pSVar6 = *(String **)(this + 0xa98);
  local_a8[0] = 0;
  local_98 = "";
  local_90 = 0;
  String::parse_latin1((StrRange *)local_a8);
  local_98 = 
  "This dialog can also be enabled/disabled in the Editor Settings: Docks > Scene Tree > Ask Before Revoking Unique Name."
  ;
  local_b8[0] = 0;
  local_90 = 0x76;
  String::parse_latin1((StrRange *)local_118);
  TTR((String *)&local_98,(String *)local_118);
  Control::set_tooltip_text(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_a8);
  Node::add_child(this_01,*(undefined8 *)(this + 0xa98),0,0);
  pLVar13 = (List *)operator_new(8,"");
  *(undefined8 *)pLVar13 = 0;
  *(List **)(this + 0xb08) = pLVar13;
  StringName::StringName((StringName *)&local_98,"Script",false);
  ClassDB::get_inheriters_from_class((StringName *)&local_98,pLVar13);
  if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<char32_t>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<char32_t>::_copy_on_write(CowData<char32_t> *this)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  ulong uVar4;
  size_t __n;
  
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
  __n = lVar1 * 4;
  if (__n != 0) {
    uVar4 = __n - 1 | __n - 1 >> 1;
    uVar4 = uVar4 | uVar4 >> 2;
    uVar4 = uVar4 | uVar4 >> 4;
    uVar4 = uVar4 | uVar4 >> 8;
    uVar4 = uVar4 | uVar4 >> 0x10;
    uVar4 = (uVar4 | uVar4 >> 0x20) + 0x11;
  }
  puVar3 = (undefined8 *)Memory::alloc_static(uVar4,false);
  if (puVar3 != (undefined8 *)0x0) {
    *puVar3 = 1;
    puVar3[1] = lVar1;
    memcpy(puVar3 + 2,*(void **)this,__n);
    _unref(this);
    *(undefined8 **)this = puVar3 + 2;
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* SceneTreeEditor::_item_matches_all_terms(TreeItem*, Vector<String> const&) */

undefined8 __thiscall
SceneTreeEditor::_item_matches_all_terms(SceneTreeEditor *this,TreeItem *param_1,Vector *param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  List *pLVar8;
  wchar32 wVar9;
  wchar32 wVar10;
  long lVar11;
  long in_FS_OFFSET;
  bool bVar12;
  long local_98;
  long local_90;
  long local_88;
  long local_80;
  long *local_78;
  long local_70;
  char *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 == 0) {
LAB_00106136:
    uVar5 = 1;
LAB_0010613b:
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return uVar5;
  }
  lVar11 = 0;
LAB_00105ec0:
  if (lVar11 < *(long *)(lVar4 + -8)) {
    wVar9 = (int)lVar4 + (int)lVar11 * 8;
    iVar3 = String::find_char(wVar9,0x3a);
    if ((iVar3 == -1) ||
       (String::get_slicec((wchar32)(CowData<char32_t> *)&local_68,wVar9), pcVar1 = local_68,
       local_68 == (char *)0x0)) {
LAB_00106190:
      TreeItem::get_text((int)&local_70);
      String::to_lower();
      iVar3 = String::find((String *)&local_68,wVar9);
      pcVar1 = local_68;
      if (local_68 != (char *)0x0) {
        LOCK();
        plVar6 = (long *)(local_68 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
      }
      lVar4 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar6 = (long *)(local_70 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      if (iVar3 != -1) goto LAB_00106120;
      uVar5 = 0;
    }
    else {
      if (((int)*(undefined8 *)(local_68 + -8) == 0) || ((int)*(undefined8 *)(local_68 + -8) == 1))
      {
        LOCK();
        plVar6 = (long *)(local_68 + -0x10);
        *plVar6 = *plVar6 + -1;
        UNLOCK();
        if (*plVar6 == 0) {
          local_68 = (char *)0x0;
          Memory::free_static(pcVar1 + -0x10,false);
        }
        goto LAB_00106190;
      }
      LOCK();
      plVar6 = (long *)(local_68 + -0x10);
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        local_68 = (char *)0x0;
        Memory::free_static(pcVar1 + -0x10,false);
      }
      String::get_slicec((wchar32)(String *)&local_98,wVar9);
      wVar10 = (wchar32)(CowData<char32_t> *)&local_90;
      String::get_slicec(wVar10,wVar9);
      cVar2 = String::operator==((String *)&local_98,"type");
      if ((cVar2 != '\0') || (cVar2 = String::operator==((String *)&local_98,"t"), cVar2 != '\0')) {
        TreeItem::get_metadata((int)local_58);
        Variant::operator_cast_to_NodePath((Variant *)&local_68);
        plVar6 = (long *)Node::get_node((NodePath *)this);
        (**(code **)(*plVar6 + 0x48))((CowData<char32_t> *)&local_88,plVar6);
        NodePath::~NodePath((NodePath *)&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        while( true ) {
          cVar2 = String::operator!=((String *)&local_88,"Node");
          if (cVar2 == '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            goto LAB_00106567;
          }
          String::to_lower();
          iVar3 = String::find((String *)&local_68,wVar10);
          pcVar1 = local_68;
          if (local_68 != (char *)0x0) {
            LOCK();
            plVar6 = (long *)(local_68 + -0x10);
            *plVar6 = *plVar6 + -1;
            UNLOCK();
            if (*plVar6 == 0) {
              local_68 = (char *)0x0;
              Memory::free_static(pcVar1 + -0x10,false);
            }
          }
          if (iVar3 != -1) break;
          StringName::StringName((StringName *)&local_80,(String *)&local_88,false);
          ClassDB::get_parent_class((StringName *)&local_78);
          if (local_78 == (long *)0x0) {
LAB_00106479:
            local_70 = 0;
            if (local_88 != 0) {
LAB_00106487:
              lVar4 = local_88;
              LOCK();
              plVar6 = (long *)(local_88 + -0x10);
              *plVar6 = *plVar6 + -1;
              UNLOCK();
              if (*plVar6 == 0) {
                local_88 = 0;
                Memory::free_static((void *)(lVar4 + -0x10),false);
              }
              goto LAB_001063e9;
            }
          }
          else {
            pcVar1 = (char *)local_78[1];
            local_70 = 0;
            if (pcVar1 == (char *)0x0) {
              if (local_78[2] == 0) goto LAB_00106479;
              plVar6 = (long *)(local_78[2] + -0x10);
              do {
                lVar4 = *plVar6;
                if (lVar4 == 0) goto LAB_001063d6;
                LOCK();
                lVar7 = *plVar6;
                bVar12 = lVar4 == lVar7;
                if (bVar12) {
                  *plVar6 = lVar4 + 1;
                  lVar7 = lVar4;
                }
                UNLOCK();
              } while (!bVar12);
              if (lVar7 != -1) {
                local_70 = local_78[2];
              }
            }
            else {
              local_60 = strlen(pcVar1);
              local_68 = pcVar1;
              String::parse_latin1((StrRange *)&local_70);
            }
LAB_001063d6:
            lVar4 = local_70;
            if (local_88 == local_70) {
              if (local_70 != 0) {
                LOCK();
                plVar6 = (long *)(local_70 + -0x10);
                *plVar6 = *plVar6 + -1;
                UNLOCK();
                if (*plVar6 == 0) {
                  local_70 = 0;
                  Memory::free_static((void *)(lVar4 + -0x10),false);
                }
              }
            }
            else {
              if (local_88 != 0) goto LAB_00106487;
LAB_001063e9:
              local_88 = local_70;
            }
          }
          if ((StringName::configured != '\0') &&
             (((local_78 == (long *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_80 != 0)))) {
            StringName::unref();
          }
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        goto LAB_00106230;
      }
      cVar2 = String::operator==((String *)&local_98,"group");
      if ((cVar2 == '\0') && (cVar2 = String::operator==((String *)&local_98,"g"), cVar2 == '\0')) {
        if ((*(long *)(this + 0xa68) != 0) && (1 < *(uint *)(*(long *)(this + 0xa68) + -8)))
        goto LAB_00106230;
        local_70 = 0;
        if (local_98 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_98);
        }
        local_80 = 0;
        local_68 = "";
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_80);
        local_68 = "\"%s\" is not a known filter.";
        local_88 = 0;
        local_60 = 0x1b;
        String::parse_latin1((StrRange *)&local_88);
        TTR((String *)&local_78,(String *)&local_88);
        vformat<String>((CowData<char32_t> *)&local_68,(String *)&local_78,
                        (CowData<char32_t> *)&local_70);
        pcVar1 = local_68;
        if (*(char **)(this + 0xa68) != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa68));
          local_68 = (char *)0x0;
          *(char **)(this + 0xa68) = pcVar1;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        goto LAB_00106120;
      }
      TreeItem::get_metadata((int)local_58);
      Variant::operator_cast_to_NodePath((Variant *)&local_68);
      pLVar8 = (List *)Node::get_node((NodePath *)this);
      NodePath::~NodePath((NodePath *)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((local_90 == 0) || (*(uint *)(local_90 + -8) < 2)) {
        iVar3 = Node::get_persistent_group_count();
        if (iVar3 != 0) goto LAB_00106230;
      }
      else {
        local_78 = (long *)0x0;
        Node::get_groups(pLVar8);
        if ((local_78 != (long *)0x0) && (plVar6 = (long *)*local_78, plVar6 != (long *)0x0)) {
          do {
            if ((char)plVar6[1] != '\0') {
              lVar4 = *plVar6;
              if (lVar4 == 0) {
                local_70 = 0;
              }
              else {
                pcVar1 = *(char **)(lVar4 + 8);
                local_70 = 0;
                if (pcVar1 == (char *)0x0) {
                  if (*(long *)(lVar4 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_70,(CowData *)(lVar4 + 0x10));
                  }
                }
                else {
                  local_60 = strlen(pcVar1);
                  local_68 = pcVar1;
                  String::parse_latin1((StrRange *)&local_70);
                }
              }
              String::to_lower();
              iVar3 = String::find((String *)&local_68,wVar10);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if (iVar3 != -1) goto LAB_00106695;
            }
            plVar6 = (long *)plVar6[2];
            if (plVar6 == (long *)0x0) break;
          } while( true );
        }
        List<Node::GroupInfo,DefaultAllocator>::~List
                  ((List<Node::GroupInfo,DefaultAllocator> *)&local_78);
      }
LAB_00106567:
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      uVar5 = 0;
    }
    goto LAB_0010613b;
  }
  goto LAB_00106136;
LAB_00106695:
  List<Node::GroupInfo,DefaultAllocator>::~List((List<Node::GroupInfo,DefaultAllocator> *)&local_78)
  ;
LAB_00106230:
  lVar4 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar6 = (long *)(local_90 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
  lVar4 = local_98;
  if (local_98 != 0) {
    LOCK();
    plVar6 = (long *)(local_98 + -0x10);
    *plVar6 = *plVar6 + -1;
    UNLOCK();
    if (*plVar6 == 0) {
      local_98 = 0;
      Memory::free_static((void *)(lVar4 + -0x10),false);
    }
  }
LAB_00106120:
  lVar11 = lVar11 + 1;
  lVar4 = *(long *)(param_2 + 8);
  if (lVar4 == 0) goto LAB_00106136;
  goto LAB_00105ec0;
}



/* SceneTreeEditor::_node_visibility_changed(Node*) */

void __thiscall SceneTreeEditor::_node_visibility_changed(SceneTreeEditor *this,Node *param_1)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  Node *pNVar6;
  long lVar7;
  TreeItem *pTVar8;
  char *pcVar9;
  undefined1 uVar10;
  undefined1 *puVar11;
  long in_FS_OFFSET;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  NodeCache::get((Node *)&local_80,(bool)((char)this + -0x30));
  if (((local_80 != 0) && (param_1 != (Node *)0x0)) &&
     ((pNVar6 = (Node *)get_scene_node(this), param_1 == pNVar6 ||
      (lVar7 = Node::get_owner(), lVar7 != 0)))) {
    Node::get_path();
    pTVar8 = (TreeItem *)Tree::get_root();
    pTVar8 = (TreeItem *)_find(this,pTVar8,(NodePath *)&local_68);
    NodePath::~NodePath((NodePath *)&local_68);
    if (pTVar8 != (TreeItem *)0x0) {
      uVar4 = TreeItem::get_button_by_id((int)pTVar8,0);
      if (uVar4 == 0xffffffff) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          _err_print_error("_node_visibility_changed","editor/gui/scene_tree_editor.cpp",0x2c1,
                           "Condition \"idx == -1\" is true.",0,0);
          return;
        }
        goto LAB_00106b1d;
      }
      StringName::StringName((StringName *)&local_68,"is_visible",false);
      cVar2 = Object::has_method((StringName *)param_1);
      if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
        StringName::unref();
      }
      if (cVar2 == '\0') {
LAB_00106958:
        if (_node_visibility_changed(Node*)::{lambda()#2}::operator()()::sname == '\0') {
          puVar11 = &_node_visibility_changed(Node*)::{lambda()#2}::operator()()::sname;
          iVar5 = __cxa_guard_acquire(&_node_visibility_changed(Node*)::{lambda()#2}::operator()()::
                                       sname);
          pcVar9 = (char *)&_node_visibility_changed(Node*)::{lambda()#2}::operator()()::sname;
          if (iVar5 != 0) {
            uVar10 = 0x25;
            goto LAB_00106998;
          }
        }
      }
      else {
        StringName::StringName((StringName *)&local_68,"is_visible",false);
        Object::call<>((StringName *)local_58);
        bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_68 != (char *)0x0)) {
          StringName::unref();
        }
        local_78 = 0;
        pcVar1 = *(code **)(*(long *)param_1 + 0x58);
        local_60 = 10;
        local_68 = "CanvasItem";
        String::parse_latin1((StrRange *)&local_78);
        cVar2 = (*pcVar1)(param_1,(StrRange *)&local_78);
        if (cVar2 == '\0') {
          local_70 = 0;
          pcVar1 = *(code **)(*(long *)param_1 + 0x58);
          String::parse_latin1((String *)&local_70,"CanvasLayer");
          cVar2 = (*pcVar1)(param_1,(String *)&local_70);
          if (cVar2 != '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            goto LAB_00106895;
          }
          pcVar1 = *(code **)(*(long *)param_1 + 0x58);
          local_68 = (char *)0x0;
          String::parse_latin1((String *)&local_68,"Window");
          cVar2 = (*pcVar1)(param_1,(NodePath *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          if (cVar2 != '\0') goto LAB_00106895;
        }
        else {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_00106895:
          CanvasItem::queue_redraw();
        }
        if (!bVar3) goto LAB_00106958;
        if (_node_visibility_changed(Node*)::{lambda()#1}::operator()()::sname == '\0') {
          puVar11 = &_node_visibility_changed(Node*)::{lambda()#1}::operator()()::sname;
          iVar5 = __cxa_guard_acquire(&_node_visibility_changed(Node*)::{lambda()#1}::operator()()::
                                       sname);
          pcVar9 = (char *)&_node_visibility_changed(Node*)::{lambda()#1}::operator()()::sname;
          uVar10 = 0x10;
          if (iVar5 == 0) goto LAB_001068d0;
LAB_00106998:
          _scs_create(pcVar9,(bool)uVar10);
          __cxa_atexit(StringName::~StringName,pcVar9,&__dso_handle);
          __cxa_guard_release(puVar11);
        }
      }
LAB_001068d0:
      Control::get_editor_theme_icon((StringName *)&local_68);
      TreeItem::set_button((int)pTVar8,0,(Ref *)(ulong)uVar4);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_visibility_color(this,param_1,pTVar8);
        return;
      }
      goto LAB_00106b1d;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00106b1d:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::rename_node(Node*, String const&, TreeItem*) */

void __thiscall
SceneTreeEditor::rename_node(SceneTreeEditor *this,Node *param_1,String *param_2,TreeItem *param_3)

{
  Variant *pVVar1;
  int *piVar2;
  long *plVar3;
  code *pcVar4;
  Object *pOVar5;
  char cVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  NodePath *pNVar12;
  Object *pOVar13;
  Node *pNVar14;
  EditorUndoRedoManager *pEVar15;
  TreeItem *pTVar16;
  bool bVar17;
  CowData<char32_t> *this_00;
  Variant *pVVar18;
  Variant *pVVar19;
  long in_FS_OFFSET;
  StringName *local_138;
  String *local_130;
  Object *local_f0;
  Object *local_e8;
  String local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  Object *local_c8;
  undefined8 local_c0;
  long local_b8;
  Object *local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_138 = (StringName *)param_3;
  if (param_3 == (TreeItem *)0x0) {
    Node::get_path();
    pTVar16 = (TreeItem *)Tree::get_root();
    local_138 = (StringName *)_find(this,pTVar16,(NodePath *)&local_b0);
    NodePath::~NodePath((NodePath *)&local_b0);
    if (local_138 == (StringName *)0x0) {
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("rename_node","editor/gui/scene_tree_editor.cpp",0x5ab,
                         "Parameter \"item\" is null.",0,0);
        return;
      }
      goto LAB_00108b2a;
    }
  }
  piVar2 = *(int **)param_2;
  if ((piVar2 == (int *)0x0) || (lVar10 = *(long *)(piVar2 + -2), (uint)lVar10 < 2)) {
LAB_00106b86:
    local_f0 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)param_2);
LAB_00106bb4:
    bVar7 = false;
  }
  else {
    if (lVar10 < 1) {
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,0,lVar10,"p_index","size()","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    if (*piVar2 != 0x25) goto LAB_00106b86;
    local_f0 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)param_2);
    String::substr((int)(CowData<char32_t> *)&local_b0,(int)param_2);
    if (local_f0 != local_b0) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      local_f0 = local_b0;
      local_b0 = (Object *)0x0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    cVar6 = Node::is_unique_name_in_owner();
    if (cVar6 != '\0') goto LAB_00106bb4;
    if (*(long *)(this + 0x240) == 0) {
      _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0
                      );
    }
    pNVar14 = (Node *)SceneTree::get_edited_scene_root();
    bVar7 = true;
    if (param_1 == pNVar14) {
      local_b0 = (Object *)0x0;
      String::parse_latin1((String *)&local_b0,"");
      local_b8 = 0;
      String::parse_latin1
                ((String *)&local_b8,
                 "Root nodes cannot be accessed as unique names in their own scene. Instantiate in another scene and set as unique name there."
                );
      TTR((String *)&local_d0,(String *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      cVar6 = Window::is_visible();
      if (cVar6 == '\0') {
        uVar11 = *(undefined8 *)(this + 0xa78);
        local_b0 = (Object *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_d0);
        AcceptDialog::set_text(uVar11,(CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_88[0] = 0;
        local_88[1] = 0;
        Window::popup_centered(*(Vector2i **)(this + 0xa78));
      }
      else {
        uVar11 = *(undefined8 *)(this + 0xa78);
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"\n\n");
        AcceptDialog::get_text();
        String::operator+((String *)&local_b8,(String *)&local_c8);
        String::operator+((String *)&local_b0,(String *)&local_b8);
        AcceptDialog::set_text(uVar11,(CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      goto LAB_00106bb4;
    }
  }
  local_130 = (String *)&local_f0;
  String::validate_node_name();
  cVar6 = String::operator!=((String *)&local_e8,local_130);
  bVar17 = SUB81((CowData<char32_t> *)&local_b0,0);
  if (cVar6 != '\0') {
    String::get_invalid_node_name_characters(bVar17);
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"\n");
    local_d0 = 0;
    String::parse_latin1((String *)&local_d0,"");
    local_d8 = 0;
    String::parse_latin1
              ((String *)&local_d8,"Invalid node name, the following characters are not allowed:");
    TTR((String *)&local_c8,(String *)&local_d8);
    String::operator+((String *)&local_b8,(String *)&local_c8);
    String::operator+(local_e0,(String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    cVar6 = Window::is_visible();
    if (cVar6 == '\0') {
      uVar11 = *(undefined8 *)(this + 0xa78);
      local_b0 = (Object *)0x0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)local_e0);
      AcceptDialog::set_text(uVar11,(CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      plVar3 = *(long **)(this + 0xa78);
      pcVar4 = *(code **)(*plVar3 + 0xa8);
      Variant::Variant((Variant *)local_88,true);
      StringName::StringName((StringName *)&local_b0,"invalid_character",false);
      (*pcVar4)(plVar3,(CowData<char32_t> *)&local_b0,(Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      plVar3 = *(long **)(this + 0xa78);
      pcVar4 = *(code **)(*plVar3 + 0xa8);
      Variant::Variant((Variant *)local_88,false);
      StringName::StringName((StringName *)&local_b0,"same_unique_name",false);
      (*pcVar4)(plVar3,(CowData<char32_t> *)&local_b0,(Variant *)local_88);
      if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_88[0] = 0;
      local_88[1] = 0;
      Window::popup_centered(*(Vector2i **)(this + 0xa78));
    }
    else {
      plVar3 = *(long **)(this + 0xa78);
      pcVar4 = *(code **)(*plVar3 + 0xb8);
      Variant::Variant((Variant *)&local_a8,false);
      StringName::StringName((StringName *)&local_b0,"invalid_character",false);
      (*pcVar4)((Variant *)local_88,plVar3,(CowData<char32_t> *)&local_b0,(Variant *)&local_a8);
      bVar8 = Variant::operator_cast_to_bool((Variant *)local_88);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_a8] != '\0') {
        Variant::_clear_internal();
      }
      if (!bVar8) {
        uVar11 = *(undefined8 *)(this + 0xa78);
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"\n\n");
        AcceptDialog::get_text();
        String::operator+((String *)&local_b8,(String *)&local_c8);
        String::operator+((String *)&local_b0,(String *)&local_b8);
        AcceptDialog::set_text(uVar11,(CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        plVar3 = *(long **)(this + 0xa78);
        pcVar4 = *(code **)(*plVar3 + 0xa8);
        Variant::Variant((Variant *)local_88,true);
        StringName::StringName((StringName *)&local_b0,"invalid_character",false);
        (*pcVar4)(plVar3,(CowData<char32_t> *)&local_b0,(Variant *)local_88);
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
  }
  String::strip_edges(bVar17,SUB81((String *)&local_e8,0));
  if (local_e8 != local_b0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    local_e8 = local_b0;
    local_b0 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((local_e8 == (Object *)0x0) || (*(uint *)(local_e8 + -8) < 2)) {
    lVar10 = Node::get_owner();
    if (lVar10 != 0) {
      Node::get_scene_file_path();
      this_00 = (CowData<char32_t> *)&local_b0;
      if ((local_b0 != (Object *)0x0) && (1 < *(uint *)(local_b0 + -8))) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"");
        Node::get_scene_file_path();
        ResourceLoader::load
                  ((CowData<char32_t> *)&local_b0,(CowData<char32_t> *)&local_c0,
                   (CowData<char32_t> *)&local_b8,1,0);
        local_c8 = (Object *)0x0;
        if (local_b0 != (Object *)0x0) {
          pOVar13 = (Object *)__dynamic_cast(local_b0,&Object::typeinfo,&PackedScene::typeinfo,0);
          if (pOVar13 == (Object *)0x0) {
LAB_001072e5:
            cVar6 = RefCounted::unreference();
            pOVar5 = local_b0;
            pOVar13 = local_c8;
            if ((cVar6 != '\0') &&
               (cVar6 = predelete_handler(local_b0), pOVar13 = local_c8, cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar5 + 0x140))();
              Memory::free_static(pOVar5,false);
            }
          }
          else {
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
              pOVar13 = (Object *)0x0;
            }
            local_c8 = pOVar13;
            if (local_b0 != (Object *)0x0) goto LAB_001072e5;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          if (pOVar13 != (Object *)0x0) {
            PackedScene::get_state();
            iVar9 = SceneState::get_node_count();
            if (0 < iVar9) {
              SceneState::get_node_name((int)(CowData<char32_t> *)&local_b8);
              if (local_b8 == 0) {
                local_b0 = (Object *)0x0;
              }
              else {
                local_b0 = (Object *)0x0;
                if (*(char **)(local_b8 + 8) == (char *)0x0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
                }
                else {
                  String::parse_latin1((String *)&local_b0,*(char **)(local_b8 + 8));
                }
              }
              if (local_b0 != local_e8) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                local_e8 = local_b0;
                local_b0 = (Object *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              if ((StringName::configured != '\0') && (local_b8 != 0)) {
                StringName::unref();
              }
            }
            Ref<SceneState>::unref((Ref<SceneState> *)&local_c0);
            cVar6 = RefCounted::unreference();
            if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar13), cVar6 != '\0')) {
              (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
              Memory::free_static(pOVar13,false);
            }
          }
          goto LAB_00106c86;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        this_00 = (CowData<char32_t> *)&local_b8;
      }
      CowData<char32_t>::_unref(this_00);
    }
LAB_00106c86:
    if ((local_e8 == (Object *)0x0) || (*(uint *)(local_e8 + -8) < 2)) {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_b0,"editor/naming/node_name_casing",false);
      ProjectSettings::get_setting_with_override((StringName *)local_88);
      iVar9 = Variant::operator_cast_to_int((Variant *)local_88);
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
        StringName::unref();
      }
      if (iVar9 == 0) {
        (**(code **)(*(long *)param_1 + 0x48))((CowData<char32_t> *)&local_b0,param_1);
        if (local_e8 != local_b0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          local_e8 = local_b0;
          local_b0 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      }
      else {
        (**(code **)(*(long *)param_1 + 0x48))((CowData<char32_t> *)&local_b8);
        Node::adjust_name_casing((String *)&local_b0);
        if (local_e8 != local_b0) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          local_e8 = local_b0;
          local_b0 = (Object *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
    }
  }
  uVar11 = Node::get_parent();
  StringName::StringName((StringName *)&local_b8,(String *)&local_e8,false);
  Node::prevalidate_child_name((CowData<char32_t> *)&local_b0,uVar11,param_1);
  if (local_e8 != local_b0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    local_e8 = local_b0;
    local_b0 = (Object *)0x0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_b8 != 0)) {
    StringName::unref();
  }
  Node::get_name();
  cVar6 = operator==((String *)&local_e8,(StringName *)&local_b0);
  if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
    StringName::unref();
  }
  if (cVar6 == '\0') {
    if ((bVar7) || (cVar6 = Node::is_unique_name_in_owner(), cVar6 != '\0')) {
LAB_00106e3c:
      if (*(long *)(this + 0x240) == 0) {
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
      }
      pNVar12 = (NodePath *)SceneTree::get_edited_scene_root();
      operator+((char *)&local_b8,(String *)&_LC175);
      NodePath::NodePath((NodePath *)&local_b0,(String *)&local_b8);
      lVar10 = Node::get_node_or_null(pNVar12);
      if (lVar10 != 0) {
        NodePath::~NodePath((NodePath *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        local_b0 = (Object *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_e8);
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"");
        local_c8 = (Object *)0x0;
        String::parse_latin1
                  ((String *)&local_c8,
                   "A node with the unique name %s already exists in this scene.");
        TTR((String *)&local_b8,(String *)&local_c8);
        vformat<String>((CowData *)&local_d0,(CowData<char32_t> *)&local_b8,
                        (CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        cVar6 = Window::is_visible();
        if (cVar6 == '\0') {
          uVar11 = *(undefined8 *)(this + 0xa78);
          local_b0 = (Object *)0x0;
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_d0);
          AcceptDialog::set_text(uVar11,(CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          plVar3 = *(long **)(this + 0xa78);
          pcVar4 = *(code **)(*plVar3 + 0xa8);
          Variant::Variant((Variant *)local_88,true);
          StringName::StringName((StringName *)&local_b0,"same_unique_name",false);
          (*pcVar4)(plVar3,(CowData<char32_t> *)&local_b0,(Variant *)local_88);
          if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          plVar3 = *(long **)(this + 0xa78);
          pcVar4 = *(code **)(*plVar3 + 0xa8);
          Variant::Variant((Variant *)local_88,false);
          StringName::StringName((StringName *)&local_b0,"invalid_character",false);
          (*pcVar4)(plVar3,(CowData<char32_t> *)&local_b0,(Variant *)local_88);
          if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          local_88[0] = 0;
          local_88[1] = 0;
          Window::popup_centered(*(Vector2i **)(this + 0xa78));
        }
        else {
          plVar3 = *(long **)(this + 0xa78);
          pcVar4 = *(code **)(*plVar3 + 0xb8);
          Variant::Variant((Variant *)&local_a8,false);
          StringName::StringName((StringName *)&local_b0,"same_unique_name",false);
          (*pcVar4)((Variant *)local_88,plVar3,(CowData<char32_t> *)&local_b0);
          bVar7 = Variant::operator_cast_to_bool((Variant *)local_88);
          if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
            StringName::unref();
          }
          if (Variant::needs_deinit[(int)local_a8] != '\0') {
            Variant::_clear_internal();
          }
          if (!bVar7) {
            uVar11 = *(undefined8 *)(this + 0xa78);
            local_c0 = 0;
            String::parse_latin1((String *)&local_c0,"\n\n");
            AcceptDialog::get_text();
            String::operator+((String *)&local_b8,(String *)&local_c8);
            String::operator+((String *)&local_b0,(String *)&local_b8);
            AcceptDialog::set_text(uVar11,(CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            plVar3 = *(long **)(this + 0xa78);
            pcVar4 = *(code **)(*plVar3 + 0xa8);
            Variant::Variant((Variant *)local_88,true);
            StringName::StringName((StringName *)&local_b0,"same_unique_name",false);
            (*pcVar4)(plVar3,(CowData<char32_t> *)&local_b0,(Variant *)local_88);
            if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_88[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
        }
        Node::get_name();
        if (local_b8 == 0) {
          local_b0 = (Object *)0x0;
        }
        else {
          local_b0 = (Object *)0x0;
          if (*(char **)(local_b8 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_b8 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_b0,*(char **)(local_b8 + 8));
          }
        }
        TreeItem::set_text(local_138,0,(CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        cVar6 = Node::is_unique_name_in_owner();
        if (cVar6 != '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
          goto LAB_001071eb;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        goto LAB_00107ee0;
      }
      NodePath::~NodePath((NodePath *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    }
    else {
LAB_00107ee0:
      bVar7 = false;
    }
    Node::get_name();
    cVar6 = operator==((String *)&local_e8,(StringName *)&local_b0);
    if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
      StringName::unref();
    }
    if (cVar6 == '\0') {
      if (this[0xac4] == (SceneTreeEditor)0x0) {
        Node::set_name((String *)param_1);
        if (bVar7) {
          Node::set_unique_name_in_owner(SUB81(param_1,0));
        }
        Node::get_path();
        Variant::Variant((Variant *)local_88,(NodePath *)&local_b0);
        TreeItem::set_metadata((int)local_138,(Variant *)0x0);
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        NodePath::~NodePath((NodePath *)&local_b0);
        if ((rename_node(Node*,String_const&,TreeItem*)::{lambda()#1}::operator()()::sname == '\0')
           && (iVar9 = __cxa_guard_acquire(&rename_node(Node*,String_const&,TreeItem*)::{lambda()#1}
                                            ::operator()()::sname), iVar9 != 0)) {
          _scs_create((char *)&rename_node(Node*,String_const&,TreeItem*)::{lambda()#1}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &rename_node(Node*,String_const&,TreeItem*)::{lambda()#1}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&rename_node(Node*,String_const&,TreeItem*)::{lambda()#1}::
                               operator()()::sname);
        }
        Object::emit_signal<>
                  ((Object *)this,
                   (StringName *)
                   &rename_node(Node*,String_const&,TreeItem*)::{lambda()#1}::operator()()::sname);
      }
      else {
        pEVar15 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"Rename Node");
        TTR((String *)&local_b0,(String *)&local_c0);
        EditorUndoRedoManager::create_action(pEVar15,(CowData<char32_t> *)&local_b0,0,param_1,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        if (bVar7) {
          StringName::StringName((StringName *)&local_b0,"set_unique_name_in_owner",false);
          EditorUndoRedoManager::add_undo_method<bool>
                    (pEVar15,(Object *)param_1,(StringName *)&local_b0,false);
          if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        local_b0 = (Object *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_e8);
        if ((rename_node(Node*,String_const&,TreeItem*)::{lambda()#2}::operator()()::sname == '\0')
           && (iVar9 = __cxa_guard_acquire(&rename_node(Node*,String_const&,TreeItem*)::{lambda()#2}
                                            ::operator()()::sname), iVar9 != 0)) {
          _scs_create((char *)&rename_node(Node*,String_const&,TreeItem*)::{lambda()#2}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &rename_node(Node*,String_const&,TreeItem*)::{lambda()#2}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&rename_node(Node*,String_const&,TreeItem*)::{lambda()#2}::
                               operator()()::sname);
        }
        Variant::Variant((Variant *)local_88,(Object *)param_1);
        Variant::Variant((Variant *)local_70,(String *)&local_b0);
        local_50 = (undefined1  [16])0x0;
        pVVar18 = (Variant *)local_40;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        (**(code **)(*(long *)this + 0xd0))
                  (this,&rename_node(Node*,String_const&,TreeItem*)::{lambda()#2}::operator()()::
                         sname,&local_a8,2);
        pVVar19 = pVVar18;
        do {
          pVVar1 = pVVar19 + -0x18;
          pVVar19 = pVVar19 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar19 != (Variant *)local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        Node::get_name();
        StringName::StringName((StringName *)&local_b0,"set_name",false);
        Variant::Variant((Variant *)local_88,(StringName *)&local_b8);
        local_70[0] = 0;
        local_70[1] = 0;
        local_68 = (undefined1  [16])0x0;
        iVar9 = (int)&local_a8;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_undo_methodp
                  ((Object *)pEVar15,(StringName *)param_1,(Variant **)&local_b0,iVar9);
        if (Variant::needs_deinit[local_70[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') &&
           (((local_b0 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0')) &&
            (local_b8 != 0)))) {
          StringName::unref();
        }
        Node::get_path();
        StringName::StringName((StringName *)&local_b0,"set_metadata",false);
        Variant::Variant((Variant *)local_88,0);
        Variant::Variant((Variant *)local_70,(NodePath *)&local_b8);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_undo_methodp
                  ((Object *)pEVar15,local_138,(Variant **)&local_b0,iVar9);
        pVVar19 = pVVar18;
        do {
          pVVar1 = pVVar19 + -0x18;
          pVVar19 = pVVar19 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar19 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        NodePath::~NodePath((NodePath *)&local_b8);
        Node::get_name();
        StringName::StringName((StringName *)&local_b0,"set_text",false);
        Variant::Variant((Variant *)local_88,0);
        Variant::Variant((Variant *)local_70,(StringName *)&local_b8);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_undo_methodp
                  ((Object *)pEVar15,local_138,(Variant **)&local_b0,iVar9);
        pVVar19 = pVVar18;
        do {
          pVVar1 = pVVar19 + -0x18;
          pVVar19 = pVVar19 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar19 != (Variant *)local_88);
        if (((StringName::configured != '\0') &&
            ((local_b0 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0'))))
           && (local_b8 != 0)) {
          StringName::unref();
        }
        local_b0 = (Object *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_e8);
        StringName::StringName((StringName *)&local_b8,"set_name",false);
        Variant::Variant((Variant *)local_88,(String *)&local_b0);
        local_70[0] = 0;
        local_70[1] = 0;
        local_68 = (undefined1  [16])0x0;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_do_methodp
                  ((Object *)pEVar15,(StringName *)param_1,(Variant **)&local_b8,iVar9);
        if (Variant::needs_deinit[local_70[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        Node::get_path();
        StringName::StringName((StringName *)&local_b0,"set_metadata",false);
        Variant::Variant((Variant *)local_88,0);
        Variant::Variant((Variant *)local_70,(NodePath *)&local_b8);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_do_methodp
                  ((Object *)pEVar15,local_138,(Variant **)&local_b0,iVar9);
        pVVar19 = pVVar18;
        do {
          pVVar1 = pVVar19 + -0x18;
          pVVar19 = pVVar19 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar19 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        NodePath::~NodePath((NodePath *)&local_b8);
        local_b0 = (Object *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_e8);
        StringName::StringName((StringName *)&local_b8,"set_text",false);
        Variant::Variant((Variant *)local_88,0);
        Variant::Variant((Variant *)local_70,(String *)&local_b0);
        local_50 = (undefined1  [16])0x0;
        local_58 = 0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)local_70;
        EditorUndoRedoManager::add_do_methodp
                  ((Object *)pEVar15,local_138,(Variant **)&local_b8,iVar9);
        do {
          pVVar19 = pVVar18 + -0x18;
          pVVar18 = pVVar18 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar19] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar18 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_b8 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        if (bVar7) {
          StringName::StringName((StringName *)&local_b0,"set_unique_name_in_owner",false);
          EditorUndoRedoManager::add_do_method<bool>
                    (pEVar15,(Object *)param_1,(StringName *)&local_b0,true);
          if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        EditorUndoRedoManager::commit_action(SUB81(pEVar15,0));
      }
    }
    else if (bVar7) {
      if (this[0xac4] == (SceneTreeEditor)0x0) {
        Node::set_unique_name_in_owner(SUB81(param_1,0));
      }
      else {
        pEVar15 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"Enable Scene Unique Name(s)");
        TTR((String *)&local_b0,(String *)&local_c0);
        EditorUndoRedoManager::create_action(pEVar15,(CowData<char32_t> *)&local_b0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        StringName::StringName((StringName *)&local_b0,"set_unique_name_in_owner",false);
        EditorUndoRedoManager::add_undo_method<bool>
                  (pEVar15,(Object *)param_1,(StringName *)&local_b0,false);
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        StringName::StringName((StringName *)&local_b0,"set_unique_name_in_owner",false);
        EditorUndoRedoManager::add_do_method<bool>
                  (pEVar15,(Object *)param_1,(StringName *)&local_b0,true);
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        EditorUndoRedoManager::commit_action(SUB81(pEVar15,0));
      }
    }
  }
  else {
    local_b0 = (Object *)0x0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_e8);
    TreeItem::set_text(local_138,0,(CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    if (bVar7) goto LAB_00106e3c;
  }
LAB_001071eb:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_130);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108b2a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_edited() */

void __thiscall SceneTreeEditor::_edited(SceneTreeEditor *this)

{
  undefined1 (*pauVar1) [16];
  long lVar2;
  undefined8 *puVar3;
  void *pvVar4;
  TreeItem *pTVar5;
  long lVar6;
  long *plVar7;
  Node *pNVar8;
  undefined1 (*pauVar9) [16];
  undefined8 uVar10;
  char *pcVar11;
  undefined8 uVar12;
  char *pcVar13;
  char *pcVar14;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pTVar5 = (TreeItem *)Tree::get_next_selected(*(TreeItem **)(this + 0xa48));
  if (pTVar5 == (TreeItem *)0x0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010913f;
    uVar12 = 0x63e;
    pcVar11 = "Parameter \"which\" is null.";
  }
  else {
    lVar6 = Tree::get_edited();
    if (lVar6 == 0) {
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010913f;
      uVar12 = 0x640;
      pcVar11 = "Parameter \"edited\" is null.";
    }
    else {
      if ((this[0xac4] != (SceneTreeEditor)0x0) &&
         (lVar6 = Tree::get_next_selected(*(TreeItem **)(this + 0xa48)), lVar6 != 0)) {
        pauVar9 = (undefined1 (*) [16])0x0;
        do {
          TreeItem::get_metadata((int)local_58);
          Variant::operator_cast_to_NodePath(local_60);
          lVar6 = Node::get_node((NodePath *)this);
          NodePath::~NodePath((NodePath *)local_60);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (lVar6 == 0) {
            _err_print_error("_edited","editor/gui/scene_tree_editor.cpp",0x646,
                             "Parameter \"n\" is null.",0,0);
            goto LAB_00108de5;
          }
          if (pauVar9 == (undefined1 (*) [16])0x0) {
            pauVar9 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)pauVar9[1] = 0;
            *pauVar9 = (undefined1  [16])0x0;
          }
          plVar7 = (long *)operator_new(0x20,DefaultAllocator::alloc);
          lVar2 = *(long *)(*pauVar9 + 8);
          plVar7[1] = 0;
          *plVar7 = lVar6;
          plVar7[2] = lVar2;
          plVar7[3] = (long)pauVar9;
          if (lVar2 != 0) {
            *(long **)(lVar2 + 8) = plVar7;
          }
          lVar6 = *(long *)*pauVar9;
          *(long **)(*pauVar9 + 8) = plVar7;
          if (lVar6 == 0) {
            *(long **)*pauVar9 = plVar7;
          }
          *(int *)pauVar9[1] = *(int *)pauVar9[1] + 1;
          lVar6 = Tree::get_next_selected(*(TreeItem **)(this + 0xa48));
        } while (lVar6 != 0);
        if (*(int *)pauVar9[1] == 0) {
          _err_print_error("_edited","editor/gui/scene_tree_editor.cpp",0x649,
                           "Condition \"nodes_to_rename.is_empty()\" is true.",0,0);
LAB_00108de5:
          if (pauVar9 == (undefined1 (*) [16])0x0) goto LAB_00108d08;
          do {
            while( true ) {
              pvVar4 = *(void **)*pauVar9;
              if (pvVar4 == (void *)0x0) goto LAB_00108e70;
              if (pauVar9 != *(undefined1 (**) [16])((long)pvVar4 + 0x18)) break;
              lVar6 = *(long *)((long)pvVar4 + 8);
              lVar2 = *(long *)((long)pvVar4 + 0x10);
              *(long *)*pauVar9 = lVar6;
              if (pvVar4 == *(void **)(*pauVar9 + 8)) {
                *(long *)(*pauVar9 + 8) = lVar2;
              }
              if (lVar2 != 0) {
                *(long *)(lVar2 + 8) = lVar6;
                lVar6 = *(long *)((long)pvVar4 + 8);
              }
              if (lVar6 != 0) {
                *(long *)(lVar6 + 0x10) = lVar2;
              }
              Memory::free_static(pvVar4,false);
              pauVar1 = pauVar9 + 1;
              *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
              if (*(int *)*pauVar1 == 0) goto LAB_00108e40;
            }
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          } while (*(int *)pauVar9[1] != 0);
        }
        else {
          uVar10 = EditorUndoRedoManager::get_singleton();
          uVar12 = **(undefined8 **)*pauVar9;
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"");
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Rename Nodes");
          TTR((String *)local_60,(String *)&local_70);
          EditorUndoRedoManager::create_action(uVar10,local_60,0,uVar12,1);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          TreeItem::get_text((int)local_60);
          for (puVar3 = *(undefined8 **)*pauVar9; puVar3 != (undefined8 *)0x0;
              puVar3 = (undefined8 *)puVar3[1]) {
            rename_node(this,(Node *)*puVar3,(String *)local_60,pTVar5);
            pTVar5 = (TreeItem *)Tree::get_next_selected(*(TreeItem **)(this + 0xa48));
          }
          EditorUndoRedoManager::commit_action(SUB81(uVar10,0));
          CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
          do {
            while( true ) {
              pvVar4 = *(void **)*pauVar9;
              if (pvVar4 == (void *)0x0) goto LAB_00108e70;
              if (*(undefined1 (**) [16])((long)pvVar4 + 0x18) != pauVar9) break;
              lVar6 = *(long *)((long)pvVar4 + 8);
              lVar2 = *(long *)((long)pvVar4 + 0x10);
              *(long *)*pauVar9 = lVar6;
              if (pvVar4 == *(void **)(*pauVar9 + 8)) {
                *(long *)(*pauVar9 + 8) = lVar2;
              }
              if (lVar2 != 0) {
                *(long *)(lVar2 + 8) = lVar6;
                lVar6 = *(long *)((long)pvVar4 + 8);
              }
              if (lVar6 != 0) {
                *(long *)(lVar6 + 0x10) = lVar2;
              }
              Memory::free_static(pvVar4,false);
              pauVar1 = pauVar9 + 1;
              *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
              if (*(int *)*pauVar1 == 0) goto LAB_00108e40;
            }
            _err_print_error("erase","./core/templates/list.h",0xe7,
                             "Condition \"p_I->data != this\" is true. Returning: false",0,0);
          } while (*(int *)pauVar9[1] != 0);
        }
LAB_00108e40:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          Memory::free_static(pauVar9,false);
          return;
        }
LAB_0010913f:
                    /* WARNING: Subroutine does not return */
        __stack_chk_fail();
      }
      TreeItem::get_metadata((int)local_58);
      Variant::operator_cast_to_NodePath(local_60);
      pNVar8 = (Node *)Node::get_node((NodePath *)this);
      NodePath::~NodePath((NodePath *)local_60);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (pNVar8 != (Node *)0x0) {
        TreeItem::get_text((int)local_60);
        rename_node(this,pNVar8,(String *)local_60,(TreeItem *)0x0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00108d08:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010913f;
      }
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010913f;
      uVar12 = 0x658;
      pcVar11 = "Parameter \"n\" is null.";
    }
  }
  pcVar13 = "editor/gui/scene_tree_editor.cpp";
  pcVar14 = "_edited";
LAB_00108d94:
  _err_print_error(pcVar14,pcVar13,uVar12,pcVar11,0,0);
  return;
LAB_00108e70:
  if (*(int *)pauVar9[1] != 0) {
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_0010913f;
    pcVar11 = "Condition \"_data->size_cache\" is true.";
    uVar12 = 0x316;
    pcVar13 = "./core/templates/list.h";
    pcVar14 = "~List";
    goto LAB_00108d94;
  }
  goto LAB_00108e40;
}



/* SceneTreeEditor::_update_node_tooltip(Node*, TreeItem*) */

void __thiscall
SceneTreeEditor::_update_node_tooltip(SceneTreeEditor *this,Node *param_1,TreeItem *param_2)

{
  SceneTreeEditor SVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  char cVar5;
  int iVar6;
  Node *pNVar7;
  Object *pOVar8;
  int iVar9;
  long lVar10;
  long in_FS_OFFSET;
  String *local_f8;
  String *local_f0;
  String *local_e8;
  undefined8 local_b0;
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  undefined8 local_78;
  Object *local_70;
  undefined8 local_68;
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Node::get_name();
  iVar9 = (int)param_2;
  if (local_58 == (Object *)0x0) {
    local_b0 = 0;
    pNVar7 = (Node *)get_scene_node(this);
  }
  else {
    local_b0 = 0;
    if (*(char **)(local_58 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_58 + 0x10));
    }
    else {
      String::parse_latin1((String *)&local_b0,*(char **)(local_58 + 8));
    }
    if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
      StringName::unref();
    }
    pNVar7 = (Node *)get_scene_node(this);
  }
  if (param_1 == pNVar7) {
    local_f8 = (String *)&local_b0;
    Node::get_scene_inherited_state();
    if (local_58 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_58), cVar5 != '\0')) {
        (**(code **)(*(long *)local_58 + 0x140))(local_58);
        Memory::free_static(local_58,false);
      }
      iVar6 = TreeItem::get_button_by_id(iVar9,0);
      if (iVar6 == -1) {
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"");
        local_70 = (Object *)0x0;
        String::parse_latin1((String *)&local_70,"Open in Editor");
        TTR((String *)&local_58,(String *)&local_70);
        if ((_update_node_tooltip(Node*,TreeItem*)::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&_update_node_tooltip(Node*,TreeItem*)::{lambda()#1}::
                                         operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&_update_node_tooltip(Node*,TreeItem*)::{lambda()#1}::operator()()::
                               sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_node_tooltip(Node*,TreeItem*)::{lambda()#1}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_node_tooltip(Node*,TreeItem*)::{lambda()#1}::operator()()::
                               sname);
        }
        local_f0 = (String *)&local_68;
        Control::get_editor_theme_icon((StringName *)&local_78);
        TreeItem::add_button(iVar9,(Ref *)0x0,(int)(StringName *)&local_78,false,(String *)0x0);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      }
      local_f0 = (String *)&local_68;
      Node::get_scene_inherited_state();
      SceneState::get_path();
      local_58 = (Object *)&_LC190;
      local_80 = 0;
      local_50 = 1;
      String::parse_latin1((StrRange *)&local_80);
      local_98 = 0;
      local_58 = (Object *)&_LC58;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_98);
      local_58 = (Object *)0x118b45;
      local_a0 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange *)&local_a0);
      TTR((String *)&local_90,(String *)&local_a0);
      operator+((char *)local_88,(String *)&_LC170);
      String::operator+((String *)&local_78,(String *)local_88);
      String::operator+((String *)&local_58,(String *)&local_78);
      String::operator+=(local_f8,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref(local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      if (((local_70 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar8 = local_70, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_70), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))();
        Memory::free_static(pOVar8,false);
      }
      goto LAB_00109298;
    }
  }
  local_f8 = (String *)&local_b0;
  pNVar7 = (Node *)get_scene_node(this);
  if (param_1 != pNVar7) {
    Node::get_scene_file_path();
    if ((local_58 == (Object *)0x0) || (*(uint *)(local_58 + -8) < 2)) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    else {
      SVar1 = this[0xac1];
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if (SVar1 != (SceneTreeEditor)0x0) {
        iVar6 = TreeItem::get_button_by_id(iVar9,0);
        if (iVar6 == -1) {
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"");
          local_70 = (Object *)0x0;
          String::parse_latin1((String *)&local_70,"Open in Editor");
          TTR((String *)&local_58,(String *)&local_70);
          if ((_update_node_tooltip(Node*,TreeItem*)::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar6 = __cxa_guard_acquire(&_update_node_tooltip(Node*,TreeItem*)::{lambda()#2}::
                                           operator()()::sname), iVar6 != 0)) {
            _scs_create((char *)&_update_node_tooltip(Node*,TreeItem*)::{lambda()#2}::operator()()::
                                 sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_update_node_tooltip(Node*,TreeItem*)::{lambda()#2}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_update_node_tooltip(Node*,TreeItem*)::{lambda()#2}::operator()()::
                                 sname);
          }
          local_f0 = (String *)&local_68;
          Control::get_editor_theme_icon((StringName *)&local_78);
          TreeItem::add_button(iVar9,(Ref *)0x0,(int)(StringName *)&local_78,false,(String *)0x0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
        }
        local_f0 = (String *)&local_68;
        Node::get_scene_file_path();
        local_78 = 0;
        String::parse_latin1((String *)&local_78," ");
        local_90 = 0;
        String::parse_latin1((String *)&local_90,"");
        local_98 = 0;
        String::parse_latin1((String *)&local_98,"Instance:");
        TTR((String *)local_88,(String *)&local_98);
        operator+((char *)&local_80,(String *)&_LC170);
        String::operator+((String *)&local_70,(String *)&local_80);
        String::operator+((String *)&local_58,(String *)&local_70);
        String::operator+=(local_f8,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref(local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      }
    }
  }
LAB_00109298:
  local_e8 = (String *)&local_90;
  local_f0 = (String *)&local_68;
  local_f8 = (String *)&local_b0;
  EditorNode::get_object_custom_type_name((Object *)&local_a8);
  local_70 = (Object *)0x0;
  if (local_a8 == 0) {
    (**(code **)(*(long *)param_1 + 0x48))(local_f0);
  }
  else {
    local_68 = 0;
    if (*(char **)(local_a8 + 8) == (char *)0x0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_f0,(CowData *)(local_a8 + 0x10));
    }
    else {
      String::parse_latin1(local_f0,*(char **)(local_a8 + 8));
    }
  }
  local_80 = 0;
  local_50 = 1;
  local_58 = (Object *)&_LC190;
  String::parse_latin1((StrRange *)&local_80);
  local_98 = 0;
  local_58 = (Object *)&_LC58;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_98);
  local_58 = (Object *)0x118b59;
  local_a0 = 0;
  local_50 = 5;
  String::parse_latin1((StrRange *)&local_a0);
  TTR(local_e8,(String *)&local_a0);
  operator+((char *)local_88,(String *)&_LC170);
  String::operator+((String *)&local_78,(String *)local_88);
  String::operator+((String *)&local_58,(String *)&local_78);
  String::operator+=(local_f8,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  if ((StringName::configured != '\0') && (local_70 != (Object *)0x0)) {
    StringName::unref();
  }
  Node::get_editor_description();
  if ((local_58 == (Object *)0x0) || (uVar2 = *(undefined8 *)(local_58 + -8), (int)uVar2 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    if ((int)uVar2 != 1) {
      pOVar8 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar8 == (Object *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        pOVar8 = (Object *)0x0;
      }
      pcVar3 = *(code **)(*(long *)pOVar8 + 0x7d8);
      local_70 = (Object *)0x0;
      local_50 = 0;
      local_58 = (Object *)&_LC58;
      String::parse_latin1((StrRange *)&local_70);
      Node::get_editor_description();
      (*pcVar3)(local_f0,pOVar8,(CowData<char32_t> *)&local_58,(StrRange *)&local_70,0x50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar8), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
        Memory::free_static(pOVar8,false);
      }
      String::operator+=(local_f8,"\n");
      for (lVar10 = 1; (local_60 != 0 && (lVar4 = *(long *)(local_60 + -8), lVar10 + -1 < lVar4));
          lVar10 = lVar10 + 2) {
        if (lVar4 <= lVar10) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar10,lVar4,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        Node::get_editor_description();
        String::substr((int)(StrRange *)&local_80,(int)local_88);
        local_78 = 0;
        local_58 = (Object *)&_LC170;
        local_50 = 1;
        String::parse_latin1((StrRange *)&local_78);
        String::rstrip((String *)&local_70);
        operator+((char *)&local_58,(String *)&_LC170);
        String::operator+=(local_f8,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref(local_88);
      }
      CowData<int>::_unref((CowData<int> *)&local_60);
    }
  }
  TreeItem::set_tooltip_text(iVar9,(String *)0x0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneTreeEditor::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const [clone .part.0]
    */

char SceneTreeEditor::can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  code *pcVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  Variant *this;
  Object *pOVar8;
  long *plVar9;
  char cVar10;
  long in_FS_OFFSET;
  char local_91;
  Variant local_88 [8];
  CowData<char32_t> local_80 [8];
  long local_78;
  long local_70;
  Object *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(local_88);
  Variant::Variant((Variant *)local_58,"type");
  cVar2 = Dictionary::has(local_88);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((cVar2 != '\0') &&
     (lVar6 = Tree::get_item_at_position(*(Vector2 **)(param_1 + 0xa48)), lVar6 != 0)) {
    iVar4 = Tree::get_drop_section_at_position(*(Vector2 **)(param_1 + 0xa48));
    if ((-2 < iVar4) && ((iVar4 != -1 || (lVar6 = TreeItem::get_parent(), lVar6 != 0)))) {
      Variant::Variant((Variant *)local_58,"type");
      Dictionary::operator[](local_88);
      Variant::operator_cast_to_String((Variant *)&local_68);
      local_91 = String::operator==((String *)&local_68,"files");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_91 != '\0') {
        Variant::Variant((Variant *)local_58,"files");
        Dictionary::operator[](local_88);
        Variant::operator_cast_to_Vector((Variant *)&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((local_60 == 0) || (lVar6 = *(long *)(local_60 + -8), lVar6 == 0)) {
LAB_0010a320:
          local_91 = '\0';
        }
        else {
          if (lVar6 < 1) {
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,0,lVar6,"p_index","size()","",false,
                       true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
          EditorFileSystem::get_file_type((String *)&local_78);
          StringName::StringName((StringName *)&local_70,(String *)&local_78,false);
          if ((long *)**(long **)(param_1 + 0xb08) == (long *)0x0) {
            if (StringName::configured == '\0') goto LAB_0010a4ad;
LAB_0010a55a:
            if (local_70 == 0) goto LAB_0010a4ad;
            StringName::unref();
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
LAB_0010a022:
            lVar6 = 0;
            cVar2 = local_91;
            cVar10 = local_91;
            if (local_60 == 0) {
LAB_0010a4d8:
              iVar4 = (int)*(undefined8 *)(param_1 + 0xa48);
            }
            else {
              do {
                if (*(long *)(local_60 + -8) <= lVar6) break;
                EditorFileSystem::get_file_type((String *)local_80);
                cVar3 = String::operator!=((String *)local_80,"PackedScene");
                if (cVar3 != '\0') {
                  cVar10 = '\0';
                }
                if (cVar2 != '\0') {
                  StringName::StringName((StringName *)&local_70,"AudioStream",false);
                  StringName::StringName((StringName *)&local_78,(String *)local_80,false);
                  cVar2 = ClassDB::is_parent_class((StringName *)&local_78,(StringName *)&local_70);
                  if ((StringName::configured != '\0') &&
                     (((local_78 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
                      (local_70 != 0)))) {
                    StringName::unref();
                  }
                }
                lVar6 = lVar6 + 1;
                CowData<char32_t>::_unref(local_80);
              } while (local_60 != 0);
              if (cVar10 != '\0') goto LAB_0010a4d8;
              if (cVar2 == '\0') {
                if ((local_60 != 0) && (1 < *(long *)(local_60 + -8))) goto LAB_0010a320;
                goto LAB_0010a36e;
              }
              iVar4 = (int)*(undefined8 *)(param_1 + 0xa48);
              if ((local_60 != 0) && (1 < *(long *)(local_60 + -8))) {
                Tree::set_drop_mode_flags(iVar4);
                goto LAB_0010a325;
              }
            }
            Tree::set_drop_mode_flags(iVar4);
          }
          else {
            plVar9 = *(long **)**(long **)(param_1 + 0xb08);
            if (plVar9 == (long *)0x0) {
              if (StringName::configured != '\0') goto LAB_0010a55a;
LAB_0010a4ad:
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              goto LAB_0010a022;
            }
            do {
              if (*plVar9 == local_70) {
                if ((StringName::configured != '\0') && (local_70 != 0)) goto LAB_0010a005;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
                goto LAB_0010a36e;
              }
              plVar9 = (long *)plVar9[1];
            } while (plVar9 != (long *)0x0);
            if ((StringName::configured == '\0') || (local_70 == 0)) goto LAB_0010a4ad;
LAB_0010a005:
            StringName::unref();
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            if (plVar9 == (long *)0x0) goto LAB_0010a022;
LAB_0010a36e:
            Tree::set_drop_mode_flags((int)*(undefined8 *)(param_1 + 0xa48));
          }
        }
LAB_0010a325:
        CowData<String>::_unref((CowData<String> *)&local_60);
        goto LAB_00109e60;
      }
      Variant::Variant((Variant *)local_58,"type");
      Dictionary::operator[](local_88);
      Variant::operator_cast_to_String((Variant *)&local_68);
      cVar2 = String::operator==((String *)&local_68,"script_list_element");
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (cVar2 != '\0') {
        Variant::Variant((Variant *)local_58,"script_list_element");
        this = (Variant *)Dictionary::operator[](local_88);
        pOVar8 = Variant::operator_cast_to_Object_(this);
        if (pOVar8 == (Object *)0x0) {
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          plVar9 = (long *)__dynamic_cast(pOVar8,&Object::typeinfo,&ScriptEditorBase::typeinfo,0);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (plVar9 != (long *)0x0) {
            (**(code **)(*plVar9 + 0x380))((Variant *)&local_68);
            Resource::get_path();
            if (((local_68 != (Object *)0x0) &&
                (cVar2 = RefCounted::unreference(), pOVar8 = local_68, cVar2 != '\0')) &&
               (cVar2 = predelete_handler(local_68), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar8 + 0x140))();
              Memory::free_static(pOVar8,false);
            }
            EditorFileSystem::get_file_type((String *)&local_70);
            StringName::StringName((StringName *)&local_68,(String *)&local_70,false);
            local_91 = _is_script_type((SceneTreeEditor *)param_1,(StringName *)&local_68);
            if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            if (local_91 != '\0') {
              Tree::set_drop_mode_flags((int)*(undefined8 *)(param_1 + 0xa48));
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              goto LAB_00109e60;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          }
        }
      }
      if ((*(long *)(param_1 + 0xa60) == 0) || (*(uint *)(*(long *)(param_1 + 0xa60) + -8) < 2)) {
        Variant::Variant((Variant *)local_58,"type");
        Dictionary::operator[](local_88);
        Variant::operator_cast_to_String((Variant *)&local_68);
        local_91 = String::operator==((String *)&local_68,"nodes");
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (local_91 != '\0') {
          Variant::Variant((Variant *)local_58,"nodes");
          Dictionary::operator[](local_88);
          Variant::operator_cast_to_Array((Variant *)&local_70);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          for (iVar4 = 0; iVar5 = Array::size(), iVar4 < iVar5; iVar4 = iVar4 + 1) {
            Array::operator[]((int)(Variant *)&local_70);
            Variant::operator_cast_to_NodePath((Variant *)&local_68);
            lVar6 = Node::get_node((NodePath *)param_1);
            NodePath::~NodePath((NodePath *)&local_68);
            if ((lVar6 != 0) && (lVar6 = Node::get_owner(), lVar6 != 0)) {
              lVar6 = Node::get_owner();
              lVar7 = get_scene_node((SceneTreeEditor *)param_1);
              if (lVar6 != lVar7) {
                Node::get_owner();
                Node::get_scene_file_path();
                if ((local_68 != (Object *)0x0) && (1 < *(uint *)(local_68 + -8))) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                  local_91 = '\0';
                  break;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              }
            }
          }
          Array::~Array((Array *)&local_70);
          goto LAB_00109e60;
        }
      }
    }
  }
  local_91 = '\0';
LAB_00109e60:
  Dictionary::~Dictionary((Dictionary *)local_88);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_91;
}



/* SceneTreeEditor::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

undefined8 SceneTreeEditor::can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  undefined8 uVar1;
  
  if (param_1[0xac0] == (Vector2)0x0) {
    return 0;
  }
  uVar1 = can_drop_data_fw(param_1,param_2,param_3);
  return uVar1;
}



/* SceneTreeEditor::drop_data_fw(Vector2 const&, Variant const&, Control*) */

void SceneTreeEditor::drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  Variant *pVVar1;
  CowData *pCVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  Object *pOVar8;
  long *plVar9;
  long lVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  bool bVar12;
  NodePath *local_130;
  Variant local_108 [8];
  Variant local_100 [8];
  String local_f8 [8];
  undefined8 local_f0;
  undefined8 local_e8;
  CowData *local_e0;
  Object *local_d8;
  CowData *local_d0;
  Variant *local_c8;
  Variant *pVStack_c0;
  Variant *local_b8;
  int local_a8 [6];
  Variant local_90 [24];
  undefined8 local_78;
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((((param_1[0xac0] == (Vector2)0x0) ||
       (cVar4 = can_drop_data_fw(param_1,param_2,param_3), cVar4 == '\0')) ||
      (lVar7 = Tree::get_item_at_position(*(Vector2 **)(param_1 + 0xa48)), lVar7 == 0)) ||
     (iVar5 = Tree::get_drop_section_at_position(*(Vector2 **)(param_1 + 0xa48)), iVar5 < -1))
  goto LAB_0010a6d1;
  TreeItem::get_metadata((int)(Variant *)local_a8);
  Variant::operator_cast_to_NodePath(local_108);
  if (Variant::needs_deinit[local_a8[0]] != '\0') {
    Variant::_clear_internal();
  }
  lVar7 = Node::get_node((NodePath *)param_1);
  if (lVar7 != 0) {
    Variant::operator_cast_to_Dictionary(local_100);
    Variant::Variant((Variant *)local_a8,"type");
    Dictionary::operator[](local_100);
    Variant::operator_cast_to_String((Variant *)&local_d8);
    cVar4 = String::operator==((String *)&local_d8,"nodes");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar4 != '\0') {
      Variant::Variant((Variant *)local_a8,"nodes");
      Dictionary::operator[](local_100);
      Variant::operator_cast_to_Array((Variant *)&local_f0);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
      Array::Array((Array *)&local_e8,(Array *)&local_f0);
      if ((drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#1}::operator()()::sname
           == '\0') &&
         (iVar6 = __cxa_guard_acquire(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::
                                       {lambda()#1}::operator()()::sname), iVar6 != 0)) {
        _scs_create((char *)&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#1}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#1}::
                      operator()()::sname,&__dso_handle);
        __cxa_guard_release(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#1}::
                             operator()()::sname);
      }
      Variant::Variant((Variant *)local_a8,(Array *)&local_e8);
      Variant::Variant(local_90,(NodePath *)&local_d8);
      Variant::Variant((Variant *)&local_78,iVar5);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_c8 = (Variant *)local_a8;
      pVStack_c0 = local_90;
      local_b8 = (Variant *)&local_78;
      (**(code **)(*(long *)param_1 + 0xd0))
                (param_1,&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#1}::
                          operator()()::sname,&local_c8);
      pVVar11 = local_48;
      do {
        pVVar1 = pVVar11 + -0x18;
        pVVar11 = pVVar11 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar11 != (Variant *)local_a8);
      Array::~Array((Array *)&local_e8);
      NodePath::~NodePath((NodePath *)&local_d8);
      Array::~Array((Array *)&local_f0);
    }
    Variant::Variant((Variant *)local_a8,"type");
    Dictionary::operator[](local_100);
    Variant::operator_cast_to_String((Variant *)&local_d8);
    cVar4 = String::operator==((String *)&local_d8,"files");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar4 != '\0') {
      Variant::Variant((Variant *)local_a8,"files");
      Dictionary::operator[](local_100);
      Variant::operator_cast_to_Vector((Variant *)&local_e8);
      if (Variant::needs_deinit[local_a8[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_e0 == (CowData *)0x0) {
LAB_0010af41:
        lVar7 = 0;
LAB_0010af44:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,0,lVar7,"p_index","size()","",false,true)
        ;
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      lVar7 = *(long *)(local_e0 + -8);
      if (lVar7 < 1) goto LAB_0010af44;
      EditorFileSystem::get_file_type(local_f8);
      StringName::StringName((StringName *)&local_d8,local_f8,false);
      cVar4 = _is_script_type((SceneTreeEditor *)param_1,(StringName *)&local_d8);
      if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
        StringName::unref();
      }
      if (cVar4 == '\0') {
        NodePath::NodePath((NodePath *)&local_f0,(NodePath *)local_108);
        local_d0 = (CowData *)0x0;
        pCVar2 = local_e0 + -0x10;
        if (local_e0 != (CowData *)0x0) {
          do {
            lVar7 = *(long *)pCVar2;
            if (lVar7 == 0) goto LAB_0010ad40;
            LOCK();
            lVar10 = *(long *)pCVar2;
            bVar12 = lVar7 == lVar10;
            if (bVar12) {
              *(long *)pCVar2 = lVar7 + 1;
              lVar10 = lVar7;
            }
            UNLOCK();
          } while (!bVar12);
          if (lVar10 != -1) {
            local_d0 = local_e0;
          }
        }
LAB_0010ad40:
        if ((drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#3}::operator()()::sname
             == '\0') &&
           (iVar6 = __cxa_guard_acquire(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::
                                         {lambda()#3}::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#3}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#3}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#3}::
                               operator()()::sname);
        }
        local_130 = (NodePath *)&local_f0;
        Variant::Variant((Variant *)local_a8,(Vector *)&local_d8);
        Variant::Variant(local_90,local_130);
        pVVar11 = local_48;
        Variant::Variant((Variant *)&local_78,iVar5);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_c8 = (Variant *)local_a8;
        pVStack_c0 = local_90;
        local_b8 = (Variant *)&local_78;
        (**(code **)(*(long *)param_1 + 0xd0))
                  (param_1,&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#3}::
                            operator()()::sname,&local_c8,3);
        do {
          pVVar1 = pVVar11 + -0x18;
          pVVar11 = pVVar11 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar11 != (Variant *)local_a8);
        CowData<String>::_unref((CowData<String> *)&local_d0);
        NodePath::~NodePath(local_130);
      }
      else {
        NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
        if (local_e0 == (CowData *)0x0) goto LAB_0010af41;
        lVar7 = *(long *)(local_e0 + -8);
        if (lVar7 < 1) goto LAB_0010af44;
        local_f0 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,local_e0);
        if ((drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#2}::operator()()::sname
             == '\0') &&
           (iVar5 = __cxa_guard_acquire(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::
                                         {lambda()#2}::operator()()::sname), iVar5 != 0)) {
          _scs_create((char *)&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#2}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#2}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#2}::
                               operator()()::sname);
        }
        Variant::Variant((Variant *)local_a8,(String *)&local_f0);
        Variant::Variant(local_90,(NodePath *)&local_d8);
        local_70 = (undefined1  [16])0x0;
        local_78 = 0;
        pVVar11 = (Variant *)&local_60;
        local_c8 = (Variant *)local_a8;
        pVStack_c0 = local_90;
        (**(code **)(*(long *)param_1 + 0xd0))
                  (param_1,&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#2}::
                            operator()()::sname,&local_c8,2);
        do {
          pVVar1 = pVVar11 + -0x18;
          pVVar11 = pVVar11 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar11 != (Variant *)local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        NodePath::~NodePath((NodePath *)&local_d8);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f8);
      CowData<String>::_unref((CowData<String> *)&local_e0);
    }
    Variant::Variant((Variant *)local_a8,"type");
    Dictionary::operator[](local_100);
    Variant::operator_cast_to_String((Variant *)&local_d8);
    cVar4 = String::operator==((String *)&local_d8,"script_list_element");
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar4 != '\0') {
      Variant::Variant((Variant *)local_a8,"script_list_element");
      pVVar11 = (Variant *)Dictionary::operator[](local_100);
      pOVar8 = Variant::operator_cast_to_Object_(pVVar11);
      if (pOVar8 == (Object *)0x0) {
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      else {
        plVar9 = (long *)__dynamic_cast(pOVar8,&Object::typeinfo,&ScriptEditorBase::typeinfo,0);
        if (Variant::needs_deinit[local_a8[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (plVar9 != (long *)0x0) {
          (**(code **)(*plVar9 + 0x380))((Variant *)&local_d8);
          Resource::get_path();
          if (((local_d8 != (Object *)0x0) &&
              (cVar4 = RefCounted::unreference(), pOVar8 = local_d8, cVar4 != '\0')) &&
             (cVar4 = predelete_handler(local_d8), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
          EditorFileSystem::get_file_type((String *)&local_e8);
          StringName::StringName((StringName *)&local_d8,(String *)&local_e8,false);
          cVar4 = _is_script_type((SceneTreeEditor *)param_1,(StringName *)&local_d8);
          if ((StringName::configured != '\0') && (local_d8 != (Object *)0x0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
          if (cVar4 != '\0') {
            NodePath::NodePath((NodePath *)&local_d8,(NodePath *)local_108);
            local_e8 = 0;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)&local_f0);
            if ((drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#4}::operator()()::
                 sname == '\0') &&
               (iVar5 = __cxa_guard_acquire(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::
                                             {lambda()#4}::operator()()::sname), iVar5 != 0)) {
              _scs_create((char *)&drop_data_fw(Vector2_const&,Variant_const&,Control*)::
                                   {lambda()#4}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#4}::
                            operator()()::sname,&__dso_handle);
              __cxa_guard_release(&drop_data_fw(Vector2_const&,Variant_const&,Control*)::
                                   {lambda()#4}::operator()()::sname);
            }
            Variant::Variant((Variant *)local_a8,(String *)&local_e8);
            Variant::Variant(local_90,(NodePath *)&local_d8);
            local_70 = (undefined1  [16])0x0;
            local_78 = 0;
            pVVar11 = (Variant *)&local_60;
            local_c8 = (Variant *)local_a8;
            pVStack_c0 = local_90;
            (**(code **)(*(long *)param_1 + 0xd0))
                      (param_1,&drop_data_fw(Vector2_const&,Variant_const&,Control*)::{lambda()#4}::
                                operator()()::sname,&local_c8,2);
            do {
              pVVar1 = pVVar11 + -0x18;
              pVVar11 = pVVar11 + -0x18;
              if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                Variant::_clear_internal();
              }
            } while (pVVar11 != (Variant *)local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
            NodePath::~NodePath((NodePath *)&local_d8);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        }
      }
    }
    Dictionary::~Dictionary((Dictionary *)local_100);
  }
  NodePath::~NodePath((NodePath *)local_108);
LAB_0010a6d1:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* SceneTreeEditor::set_valid_types(Vector<StringName> const&) */

void __thiscall SceneTreeEditor::set_valid_types(SceneTreeEditor *this,Vector *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long in_FS_OFFSET;
  bool bVar4;
  SceneTreeEditor aSStack_88 [16];
  Variant *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xb18) != *(long *)(param_1 + 8)) {
    CowData<StringName>::_unref((CowData<StringName> *)(this + 0xb18));
    if (*(long *)(param_1 + 8) != 0) {
      plVar1 = (long *)(*(long *)(param_1 + 8) + -0x10);
      do {
        lVar2 = *plVar1;
        if (lVar2 == 0) goto LAB_0010b33e;
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
        *(undefined8 *)(this + 0xb18) = *(undefined8 *)(param_1 + 8);
      }
    }
  }
LAB_0010b33e:
  this[0xa41] = (SceneTreeEditor)0x1;
  create_custom_callable_function_pointer<SceneTreeEditor,bool>
            (aSStack_88,(char *)this,(_func_void_bool *)"&SceneTreeEditor::_update_tree");
  Variant::Variant((Variant *)local_68,false);
  Variant::Variant((Variant *)local_50,0);
  local_78[0] = (Variant *)local_68;
  Callable::call_deferredp((Variant **)aSStack_88,(int)local_78);
  if (Variant::needs_deinit[local_50[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[local_68[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)aSStack_88);
  this[0xaf3] = (SceneTreeEditor)0x1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneTreeDialog::set_valid_types(Vector<StringName> const&) */

void __thiscall SceneTreeDialog::set_valid_types(SceneTreeDialog *this,Vector *param_1)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char *__s;
  code *pcVar4;
  long lVar5;
  String *pSVar6;
  Object *pOVar7;
  char cVar8;
  BoxContainer *pBVar9;
  Label *pLVar10;
  FlowContainer *this_00;
  TextureRect *this_01;
  Object *pOVar11;
  ulong uVar12;
  void *pvVar13;
  long *plVar14;
  Object *pOVar15;
  long in_FS_OFFSET;
  Object *local_88;
  Object *local_80;
  long local_78;
  long local_70;
  Object *local_68;
  size_t local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xde8) != 0) {
    Node::queue_free();
    *(undefined8 *)(this + 0xde8) = 0;
    if (*(int *)(this + 0xdd8) != 0) {
      *(undefined4 *)(this + 0xdd8) = 0;
    }
  }
  SceneTreeEditor::set_valid_types(*(SceneTreeEditor **)(this + 0xdc0),param_1);
  if (*(long *)(param_1 + 8) != 0) {
    pBVar9 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(pBVar9,false);
    pBVar9[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)pBVar9 = &PTR__initialize_classv_0012bfc0;
    postinitialize_handler((Object *)pBVar9);
    *(BoxContainer **)(this + 0xde8) = pBVar9;
    Node::add_child(*(undefined8 *)(this + 0xdb8),pBVar9,0,0);
    Node::move_child(*(Node **)(this + 0xdb8),(int)*(undefined8 *)(this + 0xde8));
    pLVar10 = (Label *)operator_new(0xad8,"");
    local_68 = (Object *)0x0;
    Label::Label(pLVar10,(String *)&local_68);
    postinitialize_handler((Object *)pLVar10);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    Node::add_child(*(undefined8 *)(this + 0xde8),pLVar10,0,0);
    local_70 = 0;
    local_68 = (Object *)&_LC58;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_70);
    local_78 = 0;
    local_68 = (Object *)0x118bc5;
    local_60 = 8;
    String::parse_latin1((StrRange *)&local_78);
    TTR((String *)&local_68,(String *)&local_78);
    Label::set_text((String *)pLVar10);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    this_00 = (FlowContainer *)operator_new(0xa28,"");
    FlowContainer::FlowContainer(this_00,false);
    this_00[0xa24] = (FlowContainer)0x1;
    *(undefined ***)this_00 = &PTR__initialize_classv_0012c928;
    postinitialize_handler((Object *)this_00);
    Node::add_child(*(undefined8 *)(this + 0xde8),this_00,0,0);
    Control::set_h_size_flags(this_00,3);
    plVar14 = *(long **)(param_1 + 8);
    if ((plVar14 != (long *)0x0) && (plVar2 = plVar14 + plVar14[-1], plVar2 != plVar14)) {
      do {
        pBVar9 = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(pBVar9,false);
        pBVar9[0xa0c] = (BoxContainer)0x1;
        *(undefined ***)pBVar9 = &PTR__initialize_classv_0012bfc0;
        postinitialize_handler((Object *)pBVar9);
        Node::add_child(this_00,pBVar9,0,0);
        lVar5 = *plVar14;
        if (lVar5 == 0) {
          local_88 = (Object *)0x0;
        }
        else {
          __s = *(char **)(lVar5 + 8);
          local_88 = (Object *)0x0;
          if (__s == (char *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_60 = strlen(__s);
            local_68 = (Object *)__s;
            String::parse_latin1((StrRange *)&local_88);
          }
        }
        pSVar6 = EditorNode::singleton;
        local_70 = 0;
        local_68 = (Object *)&_LC58;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_70);
        lVar5 = *plVar14;
        if (lVar5 == 0) {
          local_78 = 0;
        }
        else {
          pOVar11 = *(Object **)(lVar5 + 8);
          local_78 = 0;
          if (pOVar11 == (Object *)0x0) {
            if (*(long *)(lVar5 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar5 + 0x10));
            }
          }
          else {
            local_60 = strlen((char *)pOVar11);
            local_68 = pOVar11;
            String::parse_latin1((StrRange *)&local_78);
          }
        }
        EditorNode::get_class_icon((String *)&local_80,pSVar6);
        lVar5 = local_78;
        if (local_78 != 0) {
          LOCK();
          plVar1 = (long *)(local_78 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void *)(lVar5 + -0x10),false);
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
        if (local_80 == (Object *)0x0) {
          local_70 = 0;
          local_68 = (Object *)0x1189b4;
          local_60 = 6;
          String::parse_latin1((StrRange *)&local_70);
          lVar5 = *plVar14;
          if (lVar5 == 0) {
            local_78 = 0;
          }
          else {
            pOVar11 = *(Object **)(lVar5 + 8);
            local_78 = 0;
            if (pOVar11 == (Object *)0x0) {
              if (*(long *)(lVar5 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar5 + 0x10));
              }
            }
            else {
              local_60 = strlen((char *)pOVar11);
              local_68 = pOVar11;
              String::parse_latin1((StrRange *)&local_78);
            }
          }
          cVar8 = ResourceLoader::exists((String *)&local_78,(String *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          if (cVar8 != '\0') {
            local_70 = 0;
            local_68 = (Object *)&_LC58;
            local_60 = 0;
            String::parse_latin1((StrRange *)&local_70);
            lVar5 = *plVar14;
            if (lVar5 == 0) {
              local_78 = 0;
            }
            else {
              pOVar11 = *(Object **)(lVar5 + 8);
              local_78 = 0;
              if (pOVar11 == (Object *)0x0) {
                if (*(long *)(lVar5 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar5 + 0x10));
                }
              }
              else {
                local_60 = strlen((char *)pOVar11);
                local_68 = pOVar11;
                String::parse_latin1((StrRange *)&local_78);
              }
            }
            ResourceLoader::load
                      ((CowData<char32_t> *)&local_68,(StrRange *)&local_78,(StrRange *)&local_70,1,
                       0);
            if (local_68 == (Object *)0x0) {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            }
            else {
              pOVar11 = (Object *)__dynamic_cast(local_68,&Object::typeinfo,&Script::typeinfo,0);
              if (pOVar11 == (Object *)0x0) {
LAB_0010bb5a:
                cVar8 = RefCounted::unreference();
                pOVar15 = local_68;
                if ((cVar8 != '\0') && (cVar8 = predelete_handler(local_68), cVar8 != '\0')) {
                  (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
                  Memory::free_static(pOVar15,false);
                }
              }
              else {
                cVar8 = RefCounted::reference();
                if (cVar8 == '\0') {
                  pOVar11 = (Object *)0x0;
                }
                if (local_68 != (Object *)0x0) goto LAB_0010bb5a;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              if (pOVar11 != (Object *)0x0) {
                String::get_file();
                if (local_88 != local_68) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                  local_88 = local_68;
                  local_68 = (Object *)0x0;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                pSVar6 = EditorNode::singleton;
                local_70 = 0;
                local_68 = (Object *)0x123dc3;
                local_60 = 6;
                String::parse_latin1((StrRange *)&local_70);
                EditorNode::get_object_icon((Object *)&local_68,pSVar6);
                pOVar7 = local_80;
                pOVar15 = local_80;
                if (local_68 == local_80) {
LAB_0010bc51:
                  if (((pOVar15 != (Object *)0x0) &&
                      (cVar8 = RefCounted::unreference(), pOVar15 = local_68, cVar8 != '\0')) &&
                     (cVar8 = predelete_handler(local_68), cVar8 != '\0')) {
                    (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
                    Memory::free_static(pOVar15,false);
                  }
                }
                else {
                  local_80 = local_68;
                  if (local_68 != (Object *)0x0) {
                    cVar8 = RefCounted::reference();
                    if (cVar8 == '\0') {
                      local_80 = (Object *)0x0;
                    }
                    pOVar15 = local_68;
                    if (pOVar7 != (Object *)0x0) {
                      cVar8 = RefCounted::unreference();
                      pOVar15 = local_68;
                      goto joined_r0x0010bd83;
                    }
                    goto LAB_0010bc51;
                  }
                  if (pOVar7 != (Object *)0x0) {
                    cVar8 = RefCounted::unreference();
                    pOVar15 = local_68;
joined_r0x0010bd83:
                    local_68 = pOVar15;
                    if ((cVar8 != '\0') &&
                       (cVar8 = predelete_handler(pOVar7), pOVar15 = local_68, cVar8 != '\0')) {
                      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
                      Memory::free_static(pOVar7,false);
                      pOVar15 = local_68;
                    }
                    goto LAB_0010bc51;
                  }
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                cVar8 = RefCounted::unreference();
                if ((cVar8 != '\0') && (cVar8 = predelete_handler(pOVar11), cVar8 != '\0')) {
                  (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
                  Memory::free_static(pOVar11,false);
                }
              }
            }
          }
        }
        this_01 = (TextureRect *)operator_new(0x9e0,"");
        TextureRect::TextureRect(this_01);
        postinitialize_handler((Object *)this_01);
        Node::add_child(pBVar9,this_01,0,0);
        TextureRect::set_expand_mode(this_01,1);
        TextureRect::set_stretch_mode(this_01,5);
        pcVar4 = *(code **)(*(long *)this_01 + 0xa8);
        Variant::Variant((Variant *)local_58,local_80);
        StringName::StringName((StringName *)&local_68,"icon",false);
        (*pcVar4)(this_01,(CowData<char32_t> *)&local_68,(Variant *)local_58);
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        uVar3 = *(uint *)(this + 0xdd8);
        pvVar13 = *(void **)(this + 0xde0);
        if (uVar3 == *(uint *)(this + 0xddc)) {
          uVar12 = (ulong)(uVar3 * 2);
          if (uVar3 * 2 == 0) {
            uVar12 = 1;
          }
          *(int *)(this + 0xddc) = (int)uVar12;
          pvVar13 = (void *)Memory::realloc_static(pvVar13,uVar12 * 8,false);
          *(void **)(this + 0xde0) = pvVar13;
          if (pvVar13 == (void *)0x0) {
            _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                             "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          uVar3 = *(uint *)(this + 0xdd8);
        }
        *(uint *)(this + 0xdd8) = uVar3 + 1;
        *(TextureRect **)((long)pvVar13 + (ulong)uVar3 * 8) = this_01;
        pLVar10 = (Label *)operator_new(0xad8,"");
        local_68 = (Object *)0x0;
        Label::Label(pLVar10,(String *)&local_68);
        postinitialize_handler((Object *)pLVar10);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        Node::add_child(pBVar9,pLVar10,0,0);
        Label::set_text((String *)pLVar10);
        Node::set_auto_translate_mode(pLVar10);
        if (((local_80 != (Object *)0x0) &&
            (cVar8 = RefCounted::unreference(), pOVar11 = local_80, cVar8 != '\0')) &&
           (cVar8 = predelete_handler(local_80), cVar8 != '\0')) {
          (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
          Memory::free_static(pOVar11,false);
        }
        plVar14 = plVar14 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      } while (plVar2 != plVar14);
    }
    CanvasItem::show();
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_valid_type_icons(this);
        return;
      }
      goto LAB_0010bedf;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0010bedf:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::~SceneTreeEditor() */

void __thiscall SceneTreeEditor::~SceneTreeEditor(SceneTreeEditor *this)

{
  uint uVar1;
  List<StringName,DefaultAllocator> *this_00;
  long lVar2;
  void *pvVar3;
  
  this_00 = *(List<StringName,DefaultAllocator> **)(this + 0xb08);
  *(undefined ***)this = &PTR__initialize_classv_0012cca0;
  List<StringName,DefaultAllocator>::~List(this_00);
  Memory::free_static(this_00,false);
  CowData<StringName>::_unref((CowData<StringName> *)(this + 0xb18));
  pvVar3 = *(void **)(this + 0xac8);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xaec) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xae8) * 4) != 0) {
        memset(*(void **)(this + 0xae0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xae8) * 4) << 2);
      }
      *(undefined4 *)(this + 0xaec) = 0;
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xad8),false);
    Memory::free_static(*(void **)(this + 0xad0),false);
    Memory::free_static(*(void **)(this + 0xae0),false);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xa60));
  NodeCache::clear((NodeCache *)(this + 0x9d0));
  pvVar3 = *(void **)(this + 0xa08);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xa2c) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa28) * 4) != 0) {
        memset(*(void **)(this + 0xa20),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa28) * 4) << 2);
      }
      *(undefined4 *)(this + 0xa2c) = 0;
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xa18),false);
    Memory::free_static(*(void **)(this + 0xa10),false);
    Memory::free_static(*(void **)(this + 0xa20),false);
  }
  pvVar3 = *(void **)(this + 0x9e0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xa04) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xa00) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xa04) = 0;
        *(undefined1 (*) [16])(this + 0x9f0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x9e8) + lVar2) != 0) {
            *(int *)(*(long *)(this + 0x9e8) + lVar2) = 0;
            Memory::free_static(*(void **)((long)pvVar3 + lVar2 * 2),false);
            pvVar3 = *(void **)(this + 0x9e0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0xa04) = 0;
        *(undefined1 (*) [16])(this + 0x9f0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0010c0d3;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x9e8),false);
    Control::~Control((Control *)this);
    return;
  }
LAB_0010c0d3:
  Control::~Control((Control *)this);
  return;
}



/* SceneTreeEditor::~SceneTreeEditor() */

void __thiscall SceneTreeEditor::~SceneTreeEditor(SceneTreeEditor *this)

{
  ~SceneTreeEditor(this);
  operator_delete(this,0xb20);
  return;
}



/* CowData<StringName>::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<StringName>::_copy_on_write(CowData<StringName> *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong uVar6;
  StringName *this_00;
  
  if ((*(long *)this == 0) || (*(ulong *)(*(long *)this + -0x10) < 2)) {
    return;
  }
  if (*(long *)this == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)invalidInstructionException();
    (*pcVar3)();
  }
  lVar2 = *(long *)(*(long *)this + -8);
  uVar6 = 0x10;
  if (lVar2 * 8 != 0) {
    uVar6 = lVar2 * 8 - 1;
    uVar6 = uVar6 | uVar6 >> 1;
    uVar6 = uVar6 | uVar6 >> 2;
    uVar6 = uVar6 | uVar6 >> 4;
    uVar6 = uVar6 | uVar6 >> 8;
    uVar6 = uVar6 | uVar6 >> 0x10;
    uVar6 = (uVar6 | uVar6 >> 0x20) + 0x11;
  }
  puVar4 = (undefined8 *)Memory::alloc_static(uVar6,false);
  if (puVar4 != (undefined8 *)0x0) {
    lVar5 = 0;
    *puVar4 = 1;
    puVar4[1] = lVar2;
    this_00 = (StringName *)(puVar4 + 2);
    if (lVar2 != 0) {
      do {
        lVar1 = lVar5 * 8;
        lVar5 = lVar5 + 1;
        StringName::StringName(this_00,(StringName *)(*(long *)this + lVar1));
        this_00 = this_00 + 8;
      } while (lVar2 != lVar5);
    }
    _unref(this);
    *(StringName **)this = (StringName *)(puVar4 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* SceneTreeDialog::_bind_methods() */

void SceneTreeDialog::_bind_methods(void)

{
  long *plVar1;
  undefined1 auVar2 [16];
  long lVar3;
  MethodBind *pMVar4;
  long in_FS_OFFSET;
  CowData<char32_t> *local_140;
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  char *local_108;
  undefined8 local_100;
  undefined4 local_f8 [2];
  undefined8 local_f0;
  undefined *local_e8;
  int local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
  char *local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88 [2];
  undefined8 local_78;
  undefined8 local_70;
  long local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_b8._8_8_ = local_b8._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  pMVar4 = create_method_bind<SceneTreeDialog>(_cancel);
  StringName::StringName((StringName *)&local_c8,"_cancel",false);
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_b8._8_8_;
  local_b8 = auVar2 << 0x40;
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_c8,(Variant **)0x0,0);
  CowData<StringName>::_unref((CowData<StringName> *)local_b8);
  if ((StringName::configured != '\0') && (local_c8 != (char *)0x0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  local_118 = 0;
  local_c8 = "";
  local_120 = 0;
  local_c0 = 0;
  String::parse_latin1((StrRange *)&local_120);
  local_c8 = "path";
  local_128 = 0;
  local_c0 = 4;
  String::parse_latin1((StrRange *)&local_128);
  local_f8[0] = 0x16;
  local_f0 = 0;
  if (local_128 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)&local_128);
  }
  local_e8 = (undefined *)0x0;
  local_e0 = 0;
  local_d8 = 0;
  if (local_120 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)&local_120);
    local_d0 = 6;
    if (local_e0 == 0x11) {
      StringName::StringName((StringName *)&local_c8,(String *)&local_d8,false);
      if (local_e8 == local_c8) {
        if ((StringName::configured != '\0') && (local_c8 != (undefined *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_e8 = local_c8;
      }
      goto LAB_0010c47f;
    }
  }
  local_d0 = 6;
  StringName::operator=((StringName *)&local_e8,(StringName *)&local_118);
LAB_0010c47f:
  local_140 = (CowData<char32_t> *)&local_d8;
  local_110 = 0;
  local_c8 = "selected";
  local_c0 = 8;
  String::parse_latin1((StrRange *)&local_110);
  local_c8 = (char *)0x0;
  local_c0 = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_98 = 6;
  local_90 = 1;
  local_88[0] = 0;
  local_78 = 0;
  local_70 = 0;
  local_60 = 0;
  local_b8 = (undefined1  [16])0x0;
  if (local_110 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_c8,(CowData *)&local_110);
  }
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_88,(PropertyInfo *)local_f8);
  local_108 = "SceneTreeDialog";
  local_130 = 0;
  local_100 = 0xf;
  String::parse_latin1((StrRange *)&local_130);
  StringName::StringName((StringName *)&local_108,(String *)&local_130,false);
  ClassDB::add_signal((StringName *)&local_108,(MethodInfo *)&local_c8);
  if ((StringName::configured != '\0') && (local_108 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
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
  CowData<Variant>::_unref((CowData<Variant> *)&local_78);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_b8._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  CowData<char32_t>::_unref(local_140);
  if ((StringName::configured != '\0') && (local_e8 != (undefined *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
  if ((StringName::configured != '\0') && (local_118 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneTreeEditor::_bind_methods() */

void SceneTreeEditor::_bind_methods(void)

{
  long *plVar1;
  char cVar2;
  long lVar3;
  MethodBind *pMVar4;
  long in_FS_OFFSET;
  undefined8 local_268;
  undefined8 local_260;
  long local_258;
  undefined8 local_250;
  undefined8 local_248;
  long local_240;
  undefined8 local_238;
  undefined8 local_230;
  long local_228;
  undefined8 local_220;
  undefined8 local_218 [6];
  long local_1e8;
  CowData local_1e0 [8];
  StringName local_1d8 [8];
  undefined4 local_1d0;
  CowData local_1c8 [8];
  undefined4 local_1c0;
  long local_1b8;
  CowData local_1b0 [8];
  StringName local_1a8 [8];
  undefined4 local_1a0;
  CowData local_198 [8];
  undefined4 local_190;
  undefined8 local_188;
  undefined8 local_180;
  StringName local_178 [8];
  undefined4 local_170;
  undefined8 local_168;
  undefined4 local_160;
  char *local_158;
  undefined8 local_150;
  StringName local_148 [8];
  undefined4 local_140;
  undefined8 local_138;
  undefined4 local_130;
  char *local_128;
  undefined8 local_120;
  StringName local_118 [8];
  undefined4 local_110;
  undefined8 local_108;
  undefined4 local_100;
  char *local_f8;
  undefined8 local_f0;
  CowData<StringName> local_e8 [8];
  long lStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  long local_90;
  Variant *local_88 [2];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  D_METHODP((char *)&local_f8,(char ***)"_update_tree",0);
  Variant::Variant((Variant *)local_78,false);
  local_58 = (undefined1  [16])0x0;
  local_60 = 0;
  local_88[0] = (Variant *)local_78;
  pMVar4 = create_method_bind<SceneTreeEditor,bool>(_update_tree);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_f8,local_88,1);
  if (Variant::needs_deinit[(int)local_60] == '\0') {
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  else {
    Variant::_clear_internal();
    cVar2 = Variant::needs_deinit[local_78[0]];
  }
  if (cVar2 != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  D_METHODP((char *)&local_f8,(char ***)"update_tree",0);
  local_70 = (undefined1  [16])0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  pMVar4 = create_method_bind<SceneTreeEditor>(update_tree);
  ClassDB::bind_methodfi(1,pMVar4,false,(MethodDefinition *)&local_f8,(Variant **)0x0,0);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<StringName>::_unref(local_e8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  local_158 = (char *)0x0;
  local_f8 = "node_selected";
  local_f0 = 0xd;
  String::parse_latin1((StrRange *)&local_158);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_158);
  local_188 = 0;
  local_128 = "SceneTreeEditor";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_128,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_f8 = "node_renamed";
  local_158 = (char *)0x0;
  local_f0 = 0xc;
  String::parse_latin1((StrRange *)&local_158);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_158);
  local_188 = 0;
  local_128 = "SceneTreeEditor";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_128,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_f8 = "node_prerename";
  local_158 = (char *)0x0;
  local_f0 = 0xe;
  String::parse_latin1((StrRange *)&local_158);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_158);
  local_188 = 0;
  local_128 = "SceneTreeEditor";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_128,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_f8 = "node_changed";
  local_158 = (char *)0x0;
  local_f0 = 0xc;
  String::parse_latin1((StrRange *)&local_158);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_158);
  local_188 = 0;
  local_128 = "SceneTreeEditor";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_128,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_f8 = "nodes_dragged";
  local_158 = (char *)0x0;
  local_f0 = 0xd;
  String::parse_latin1((StrRange *)&local_158);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_158);
  local_188 = 0;
  local_128 = "SceneTreeEditor";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_128,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_f8 = "";
  local_228 = 0;
  local_230 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_238 = 0;
  local_f8 = "type";
  local_f0 = 4;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1b8,2,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             &local_228);
  local_f8 = "";
  local_240 = 0;
  local_248 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_250 = 0;
  local_f8 = "to_path";
  local_f0 = 7;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1e8,0x16,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_258 = 0;
  local_f8 = "";
  local_260 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_260);
  local_268 = 0;
  local_f8 = "paths";
  local_f0 = 5;
  String::parse_latin1((StrRange *)&local_268);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_218,0x1c,(StrRange *)&local_268,0,(StrRange *)&local_260,6,
             &local_258);
  local_220 = 0;
  local_f8 = "nodes_rearranged";
  local_f0 = 0x10;
  String::parse_latin1((StrRange *)&local_220);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_220);
  local_150 = 0;
  local_158 = (char *)CONCAT44(local_158._4_4_,(undefined4)local_1b8);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,local_1b0);
  StringName::StringName(local_148,local_1a8);
  local_138 = 0;
  local_140 = local_1a0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,local_198);
  local_180 = 0;
  local_130 = local_190;
  local_188 = CONCAT44(local_188._4_4_,(undefined4)local_1e8);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_180,local_1e0);
  StringName::StringName(local_178,local_1d8);
  local_168 = 0;
  local_170 = local_1d0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,local_1c8);
  local_160 = local_1c0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_218);
  local_120 = 0;
  local_128 = (char *)CONCAT44(local_128._4_4_,local_158._0_4_);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_150);
  StringName::StringName(local_118,local_148);
  local_108 = 0;
  local_110 = local_140;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_138);
  local_100 = local_130;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_188);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  local_158 = (char *)0x0;
  local_128 = "SceneTreeEditor";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((StringName::configured != '\0') && (local_240 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((StringName::configured != '\0') && (local_228 != 0)) {
    StringName::unref();
  }
  local_228 = 0;
  local_f8 = "";
  local_230 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_238 = 0;
  local_f8 = "type";
  local_f0 = 4;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1b8,2,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             &local_228);
  local_f8 = "";
  local_240 = 0;
  local_248 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_248);
  local_f8 = "to_path";
  local_250 = 0;
  local_f0 = 7;
  String::parse_latin1((StrRange *)&local_250);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_1e8,0x16,(StrRange *)&local_250,0,(StrRange *)&local_248,6,
             (StrRange *)&local_240);
  local_f8 = "";
  local_258 = 0;
  local_260 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_260);
  local_f8 = "files";
  local_268 = 0;
  local_f0 = 5;
  String::parse_latin1((StrRange *)&local_268);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)local_218,0x22,(StrRange *)&local_268,0,(StrRange *)&local_260,6,
             &local_258);
  local_f8 = "files_dropped";
  local_220 = 0;
  local_f0 = 0xd;
  String::parse_latin1((StrRange *)&local_220);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_220);
  local_150 = 0;
  local_158 = (char *)CONCAT44(local_158._4_4_,(undefined4)local_1b8);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_150,local_1b0);
  StringName::StringName(local_148,local_1a8);
  local_138 = 0;
  local_140 = local_1a0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_138,local_198);
  local_180 = 0;
  local_130 = local_190;
  local_188 = CONCAT44(local_188._4_4_,(undefined4)local_1e8);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_180,local_1e0);
  StringName::StringName(local_178,local_1d8);
  local_168 = 0;
  local_170 = local_1d0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_168,local_1c8);
  local_160 = local_1c0;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)local_218);
  local_120 = 0;
  local_128 = (char *)CONCAT44(local_128._4_4_,local_158._0_4_);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_150);
  StringName::StringName(local_118,local_148);
  local_108 = 0;
  local_110 = local_140;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_138);
  local_100 = local_130;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_188);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  local_158 = (char *)0x0;
  local_128 = "SceneTreeEditor";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_158);
  StringName::StringName((StringName *)&local_128,(String *)&local_158,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  PropertyInfo::~PropertyInfo((PropertyInfo *)local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_260);
  if ((StringName::configured != '\0') && (local_258 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_248);
  if ((StringName::configured != '\0') && (local_240 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_1b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((StringName::configured != '\0') && (local_228 != 0)) {
    StringName::unref();
  }
  local_1e8 = 0;
  local_f8 = "";
  local_218[0] = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)local_218);
  local_220 = 0;
  local_f8 = "to_path";
  local_f0 = 7;
  String::parse_latin1((StrRange *)&local_220);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_158,0x16,(StrRange *)&local_220,0,(PropertyInfo *)local_218,6,
             (PropertyInfo *)&local_1e8);
  local_f8 = "";
  local_228 = 0;
  local_230 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_230);
  local_f8 = "file";
  local_238 = 0;
  local_f0 = 4;
  String::parse_latin1((StrRange *)&local_238);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_188,4,(StrRange *)&local_238,0,(StrRange *)&local_230,6,
             &local_228);
  local_f8 = "script_dropped";
  local_1b8 = 0;
  local_f0 = 0xe;
  String::parse_latin1((StrRange *)&local_1b8);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1b8);
  local_120 = 0;
  local_128 = (char *)CONCAT44(local_128._4_4_,local_158._0_4_);
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)&local_150);
  StringName::StringName(local_118,local_148);
  local_108 = 0;
  local_110 = local_140;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_108,(CowData *)&local_138);
  local_100 = local_130;
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_188);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  local_240 = 0;
  local_128 = "SceneTreeEditor";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_240);
  StringName::StringName((StringName *)&local_128,(String *)&local_240,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_240);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1b8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_188);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  if ((StringName::configured != '\0') && (local_228 != 0)) {
    StringName::unref();
  }
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
  if ((StringName::configured != '\0') && (local_1e8 != 0)) {
    StringName::unref();
  }
  local_1b8 = 0;
  local_f8 = "";
  local_1e8 = 0;
  local_f0 = 0;
  String::parse_latin1((StrRange *)&local_1e8);
  local_f8 = "position";
  local_218[0] = 0;
  local_f0 = 8;
  String::parse_latin1((StrRange *)local_218);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_128,5,(PropertyInfo *)local_218,0,(PropertyInfo *)&local_1e8,6,
             (PropertyInfo *)&local_1b8);
  local_f8 = "rmb_pressed";
  local_188 = 0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_188);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_188);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_b8,(PropertyInfo *)&local_128);
  local_220 = 0;
  local_158 = "SceneTreeEditor";
  local_150 = 0xf;
  String::parse_latin1((StrRange *)&local_220);
  StringName::StringName((StringName *)&local_158,(String *)&local_220,false);
  ClassDB::add_signal((StringName *)&local_158,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_158 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_220);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_218);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
  if ((StringName::configured != '\0') && (local_1b8 != 0)) {
    StringName::unref();
  }
  local_158 = (char *)0x0;
  local_f8 = "open";
  local_f0 = 4;
  String::parse_latin1((StrRange *)&local_158);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_158);
  local_188 = 0;
  local_128 = "SceneTreeEditor";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_128,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  local_f8 = "open_script";
  local_158 = (char *)0x0;
  local_f0 = 0xb;
  String::parse_latin1((StrRange *)&local_158);
  _local_e8 = (undefined1  [16])0x0;
  local_f8 = (char *)0x0;
  local_f0 = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c8 = 6;
  local_c0 = 1;
  local_b8[0] = 0;
  local_a8 = 0;
  local_a0 = 0;
  local_90 = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_158);
  local_188 = 0;
  local_128 = "SceneTreeEditor";
  local_120 = 0xf;
  String::parse_latin1((StrRange *)&local_188);
  StringName::StringName((StringName *)&local_128,(String *)&local_188,false);
  ClassDB::add_signal((StringName *)&local_128,(MethodInfo *)&local_f8);
  if ((StringName::configured != '\0') && (local_128 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_188);
  lVar3 = local_90;
  if (local_90 != 0) {
    LOCK();
    plVar1 = (long *)(local_90 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_90 = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
    }
  }
  CowData<Variant>::_unref((CowData<Variant> *)&local_a8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if ((StringName::configured != '\0') && (lStack_e0 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_158);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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



/* SceneTreeEditor::_get_node_configuration_warnings(Node*) */

Node * SceneTreeEditor::_get_node_configuration_warnings(Node *param_1)

{
  char cVar1;
  long *plVar2;
  long lVar3;
  long *in_RDX;
  SceneTreeEditor *in_RSI;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  String local_60 [8];
  undefined8 local_58;
  undefined1 local_4c [12];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  (**(code **)(*in_RDX + 0x1a8))();
  plVar2 = (long *)get_scene_node(in_RSI);
  if (in_RDX == plVar2) {
    lVar3 = __dynamic_cast();
    if (lVar3 != 0) {
      local_4c._0_8_ = Node2D::get_position();
      cVar1 = Vector2::is_zero_approx();
      if (cVar1 == '\0') {
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"");
        local_70 = 0;
        String::parse_latin1
                  ((String *)&local_70,
                   "The root node of a scene is recommended to not be transformed, since instances of the scene will usually override this. Reset the transform and reload the scene to remove this warning."
                  );
        TTR(local_60,(String *)&local_70);
        local_58 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_60);
        Vector<String>::push_back((Vector<String> *)param_1,(CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
    }
    lVar3 = __dynamic_cast();
    if (lVar3 != 0) {
      local_4c = Node3D::get_position();
      cVar1 = Vector3::is_zero_approx();
      if (cVar1 == '\0') {
        local_68 = 0;
        String::parse_latin1((String *)&local_68,"");
        local_70 = 0;
        String::parse_latin1
                  ((String *)&local_70,
                   "The root node of a scene is recommended to not be transformed, since instances of the scene will usually override this. Reset the transform and reload the scene to remove this warning."
                  );
        TTR(local_60,(String *)&local_70);
        local_58 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_60);
        Vector<String>::push_back((Vector<String> *)param_1,(CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SceneTreeEditor::_update_node(Node*, TreeItem*, bool) */

void __thiscall
SceneTreeEditor::_update_node(SceneTreeEditor *this,Node *param_1,TreeItem *param_2,bool param_3)

{
  code *pcVar1;
  Ref *pRVar2;
  Ref *pRVar3;
  undefined *puVar4;
  char cVar5;
  SceneTreeEditor SVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  Node *pNVar15;
  undefined *puVar16;
  long lVar17;
  TreeItem *pTVar18;
  ulong uVar19;
  ulong uVar20;
  ulong extraout_RDX;
  undefined8 uVar21;
  long *plVar22;
  undefined1 uVar23;
  TreeItem *pTVar24;
  String *pSVar25;
  String *pSVar26;
  StringName *pSVar27;
  undefined1 *puVar28;
  char *pcVar29;
  long in_FS_OFFSET;
  undefined1 auVar30 [16];
  String *local_140;
  String *local_120;
  Object local_f8 [8];
  Ref *local_f0;
  undefined8 local_e8;
  Ref *local_e0;
  undefined8 local_d8;
  undefined8 *local_d0;
  Ref *local_c8;
  Ref *local_c0;
  undefined8 local_b8;
  Ref *local_b0;
  long local_a8;
  char *local_a0;
  Ref *local_98;
  long local_90;
  Variant *local_88;
  undefined1 local_78 [16];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  TreeItem::clear_buttons();
  pcVar1 = *(code **)(*(long *)param_2 + 0xb0);
  if ((_update_node(Node*,TreeItem*,bool)::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar9 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#1}::operator()()::
                                   sname), iVar9 != 0)) {
    _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#1}::operator()()::sname,true)
    ;
    __cxa_atexit(StringName::~StringName,
                 &_update_node(Node*,TreeItem*,bool)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#1}::operator()()::sname);
  }
  (*pcVar1)(param_2);
  iVar9 = (int)param_2;
  TreeItem::clear_custom_color(iVar9);
  TreeItem::set_selectable(iVar9,false);
  Node::get_name();
  if (local_a8 == 0) {
    local_98 = (Ref *)0x0;
  }
  else {
    local_98 = (Ref *)0x0;
    if (*(char **)(local_a8 + 8) == (char *)0x0) {
      if (*(long *)(local_a8 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)(local_a8 + 0x10));
      }
    }
    else {
      String::parse_latin1((String *)&local_98,*(char **)(local_a8 + 8));
    }
  }
  TreeItem::set_text(param_2,0,(CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  TreeItem::set_text_overrun_behavior(param_2,0,0);
  SVar6 = this[0xac0];
  if (SVar6 == (SceneTreeEditor)0x1) {
    if (!param_3) {
      TreeItem::set_editable(iVar9,false);
      SVar6 = this[0xac0];
      goto LAB_0010f7b9;
    }
LAB_0010ee5a:
    cVar5 = Node::is_displayed_folded();
    if (cVar5 != '\0') {
      TreeItem::set_collapsed(SUB81(param_2,0));
    }
  }
  else {
LAB_0010f7b9:
    if (SVar6 != (SceneTreeEditor)0x0) goto LAB_0010ee5a;
  }
  pSVar26 = EditorNode::singleton;
  local_98 = (Ref *)0x0;
  String::parse_latin1((String *)&local_98,"Node");
  EditorNode::get_object_icon(local_f8,pSVar26);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  TreeItem::set_icon(iVar9,(Ref *)0x0);
  Node::get_path();
  Variant::Variant((Variant *)local_78,(NodePath *)&local_98);
  TreeItem::set_metadata(iVar9,(Variant *)0x0);
  if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  NodePath::~NodePath((NodePath *)&local_98);
  pcVar1 = *(code **)(*(long *)param_1 + 0x118);
  create_custom_callable_function_pointer<SceneTreeEditor,Node*>
            ((SceneTreeEditor *)&local_98,(char *)this,
             (_func_void_Node_ptr *)"&SceneTreeEditor::_node_child_order_changed");
  StringName::StringName((StringName *)&local_a8,"child_order_changed",false);
  cVar5 = (*pcVar1)(param_1,(StringName *)&local_a8,(CowData<char32_t> *)&local_98);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  if (cVar5 == '\0') {
    pcVar1 = *(code **)(*(long *)param_1 + 0x108);
    create_custom_callable_function_pointer<SceneTreeEditor,Node*>
              ((SceneTreeEditor *)&local_a8,(char *)this,
               (_func_void_Node_ptr *)"&SceneTreeEditor::_node_child_order_changed");
    Callable::bind<Node*>((Node *)&local_98);
    StringName::StringName((StringName *)&local_b0,"child_order_changed",false);
    (*pcVar1)(param_1,(StringName *)&local_b0,(CowData<char32_t> *)&local_98,0);
    if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_98);
    Callable::~Callable((Callable *)&local_a8);
  }
  pcVar1 = *(code **)(*(long *)param_1 + 0x118);
  create_custom_callable_function_pointer<SceneTreeEditor,Node*>
            ((SceneTreeEditor *)&local_98,(char *)this,
             (_func_void_Node_ptr *)"&SceneTreeEditor::_node_editor_state_changed");
  StringName::StringName((StringName *)&local_a8,"editor_state_changed",false);
  cVar5 = (*pcVar1)(param_1,(StringName *)&local_a8,(CowData<char32_t> *)&local_98);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  if (cVar5 == '\0') {
    pcVar1 = *(code **)(*(long *)param_1 + 0x108);
    create_custom_callable_function_pointer<SceneTreeEditor,Node*>
              ((SceneTreeEditor *)&local_a8,(char *)this,
               (_func_void_Node_ptr *)"&SceneTreeEditor::_node_editor_state_changed");
    Callable::bind<Node*>((Node *)&local_98);
    StringName::StringName((StringName *)&local_b0,"editor_state_changed",false);
    (*pcVar1)(param_1,(StringName *)&local_b0,(CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
      StringName::unref();
    }
    Callable::~Callable((Callable *)&local_98);
    Callable::~Callable((Callable *)&local_a8);
  }
  iVar8 = (int)(StringName *)&local_a8;
  if ((this[0xaab] != (SceneTreeEditor)0x0) ||
     ((this[0xac1] != (SceneTreeEditor)0x0 && (this[0xac4] != (SceneTreeEditor)0x0)))) {
    pcVar1 = *(code **)(*(long *)param_1 + 0x118);
    create_custom_callable_function_pointer<SceneTreeEditor,Node*>
              ((SceneTreeEditor *)&local_98,(char *)this,
               (_func_void_Node_ptr *)"&SceneTreeEditor::_node_script_changed");
    cVar5 = (*pcVar1)(param_1,CoreStringNames::singleton + 0x18,(CowData<char32_t> *)&local_98);
    Callable::~Callable((Callable *)&local_98);
    if (cVar5 == '\0') {
      pcVar1 = *(code **)(*(long *)param_1 + 0x108);
      create_custom_callable_function_pointer<SceneTreeEditor,Node*>
                ((SceneTreeEditor *)&local_a8,(char *)this,
                 (_func_void_Node_ptr *)"&SceneTreeEditor::_node_script_changed");
      Callable::bind<Node*>((Node *)&local_98);
      (*pcVar1)(param_1,CoreStringNames::singleton + 0x18,(CowData<char32_t> *)&local_98);
      Callable::~Callable((Callable *)&local_98);
      Callable::~Callable((Callable *)&local_a8);
    }
    if (this[0xaab] != (SceneTreeEditor)0x0) {
      (**(code **)(*(long *)param_1 + 0x98))((Variant *)local_78,param_1);
      local_b0 = (Ref *)0x0;
      Ref<Script>::operator=((Ref<Script> *)&local_b0,(Variant *)local_78);
      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      pRVar2 = local_b0;
      if (local_b0 != (Ref *)0x0) {
        local_98 = (Ref *)0x0;
        String::parse_latin1((String *)&local_98,"");
        if ((_update_node(Node*,TreeItem*,bool)::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar13 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#2}::
                                          operator()()::sname), iVar13 != 0)) {
          _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#2}::operator()()::sname
                      ,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_node(Node*,TreeItem*,bool)::{lambda()#2}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#2}::operator()()::sname
                             );
        }
        Control::get_editor_theme_icon((StringName *)&local_a8);
        TreeItem::add_button(iVar9,(Ref *)0x0,iVar8,true,(String *)0x0);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        EditorNode::get_object_custom_type_base((Object *)&local_98);
        pRVar3 = local_98;
        Ref<Script>::unref((Ref<Script> *)&local_98);
        if (pRVar3 == pRVar2) {
          cVar5 = TreeItem::get_button_count(iVar9);
          TreeItem::set_button_disabled(iVar9,0,(bool)(cVar5 + -1));
        }
      }
      Ref<Script>::unref((Ref<Script> *)&local_b0);
    }
  }
  if (this[0xaaa] == (SceneTreeEditor)0x0) {
    if (param_3) {
      if ((*(long *)(this + 0xb18) == 0) || (*(long *)(*(long *)(this + 0xb18) + -8) == 0)) {
        pSVar27 = (StringName *)
                  &_update_node(Node*,TreeItem*,bool)::{lambda()#5}::operator()()::sname;
        if (_update_node(Node*,TreeItem*,bool)::{lambda()#5}::operator()()::sname == '\0') {
          puVar28 = &_update_node(Node*,TreeItem*,bool)::{lambda()#5}::operator()()::sname;
          pSVar27 = (StringName *)
                    &_update_node(Node*,TreeItem*,bool)::{lambda()#5}::operator()()::sname;
          iVar13 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#5}::
                                        operator()()::sname);
          uVar23 = 0xb4;
joined_r0x00111521:
          if (iVar13 != 0) {
LAB_001101c8:
            _scs_create((char *)pSVar27,(bool)uVar23);
            __cxa_atexit(StringName::~StringName,pSVar27,&__dso_handle);
            __cxa_guard_release(puVar28);
          }
        }
LAB_0010f1eb:
        Control::get_theme_color((StringName *)this,pSVar27);
        _set_item_custom_color(this,param_2);
      }
    }
    else {
      cVar5 = HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>::_lookup_pos
                        ((HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>> *)
                         (this + 0xac8),(Node **)param_1,(uint *)&local_98);
      if (cVar5 == '\0') {
        cVar5 = Node::can_process();
        if (cVar5 == '\0') {
          pSVar27 = (StringName *)
                    &_update_node(Node*,TreeItem*,bool)::{lambda()#7}::operator()()::sname;
          if (_update_node(Node*,TreeItem*,bool)::{lambda()#7}::operator()()::sname == '\0') {
            puVar28 = &_update_node(Node*,TreeItem*,bool)::{lambda()#7}::operator()()::sname;
            pSVar27 = (StringName *)
                      &_update_node(Node*,TreeItem*,bool)::{lambda()#7}::operator()()::sname;
            iVar13 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#7}::
                                          operator()()::sname);
            uVar23 = 0x8e;
            goto joined_r0x00111521;
          }
          goto LAB_0010f1eb;
        }
        if ((this[0xaf0] == (SceneTreeEditor)0x0) &&
           (pNVar15 = param_1, this[0xaf1] == (SceneTreeEditor)0x0)) {
          do {
            cVar5 = HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>::_lookup_pos
                              ((HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>
                                *)(this + 0xac8),(Node **)pNVar15,(uint *)&local_98);
            if (cVar5 != '\0') {
              pSVar27 = (StringName *)
                        &_update_node(Node*,TreeItem*,bool)::{lambda()#8}::operator()()::sname;
              TreeItem::set_selectable(iVar9,false);
              if (_update_node(Node*,TreeItem*,bool)::{lambda()#8}::operator()()::sname != '\0')
              goto LAB_0010f1eb;
              puVar28 = &_update_node(Node*,TreeItem*,bool)::{lambda()#8}::operator()()::sname;
              pSVar27 = (StringName *)
                        &_update_node(Node*,TreeItem*,bool)::{lambda()#8}::operator()()::sname;
              iVar13 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#8}::
                                            operator()()::sname);
              if (iVar13 == 0) goto LAB_0010f1eb;
              uVar23 = 0xc2;
              goto LAB_001101c8;
            }
            pNVar15 = (Node *)Node::get_parent();
          } while (pNVar15 != (Node *)0x0);
        }
      }
      else {
        Node::get_name();
        if (local_98 == (Ref *)0x0) {
          local_c0 = (Ref *)0x0;
        }
        else {
          local_c0 = (Ref *)0x0;
          if (*(char **)(local_98 + 8) == (char *)0x0) {
            if (*(long *)(local_98 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(local_98 + 0x10));
              goto LAB_0010fc32;
            }
            if (StringName::configured == '\0') goto LAB_0010fc4e;
          }
          else {
            String::parse_latin1((String *)&local_c0,*(char **)(local_98 + 8));
LAB_0010fc32:
            if ((StringName::configured == '\0') || (local_98 == (Ref *)0x0)) goto LAB_0010fc4e;
          }
          StringName::unref();
        }
LAB_0010fc4e:
        if (this[0xaab] != (SceneTreeEditor)0x0) {
          local_b0 = (Ref *)0x0;
          String::parse_latin1((String *)&local_b0,"");
          local_b8 = 0;
          String::parse_latin1((String *)&local_b8,"(Connecting From)");
          TTR((String *)&local_a8,(String *)&local_b8);
          operator+((char *)&local_98,(String *)&_LC190);
          String::operator+=((String *)&local_c0,(String *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        }
        local_98 = (Ref *)0x0;
        if (local_c0 != (Ref *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_c0);
        }
        TreeItem::set_text(param_2,0,(CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        TreeItem::set_selectable(iVar9,false);
        if ((_update_node(Node*,TreeItem*,bool)::{lambda()#6}::operator()()::sname == '\0') &&
           (iVar13 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#6}::
                                          operator()()::sname), iVar13 != 0)) {
          _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#6}::operator()()::sname
                      ,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_node(Node*,TreeItem*,bool)::{lambda()#6}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#6}::operator()()::sname
                             );
        }
        Control::get_theme_color
                  ((StringName *)this,
                   (StringName *)
                   &_update_node(Node*,TreeItem*,bool)::{lambda()#6}::operator()()::sname);
        _set_item_custom_color(this,param_2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      }
    }
  }
  else {
    if ((_update_node(Node*,TreeItem*,bool)::{lambda()#3}::operator()()::sname == '\0') &&
       (iVar13 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#3}::operator()()
                                      ::sname), iVar13 != 0)) {
      _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#3}::operator()()::sname,
                  true);
      __cxa_atexit(StringName::~StringName,
                   &_update_node(Node*,TreeItem*,bool)::{lambda()#3}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#3}::operator()()::sname);
    }
    auVar30 = Control::get_theme_color
                        ((StringName *)this,
                         (StringName *)
                         &_update_node(Node*,TreeItem*,bool)::{lambda()#3}::operator()()::sname);
    local_140._0_4_ = auVar30._12_4_;
    (**(code **)(*(long *)param_1 + 0x98))((Variant *)local_78,param_1);
    local_c8 = (Ref *)0x0;
    Ref<Script>::operator=((Ref<Script> *)&local_c8,(Variant *)local_78);
    if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    pRVar2 = local_c8;
    if (local_c8 == (Ref *)0x0) {
LAB_0010fcf5:
      if ((_update_node(Node*,TreeItem*,bool)::{lambda()#4}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#4}::
                                        operator()()::sname), iVar13 != 0)) {
        _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#4}::operator()()::sname,
                    true);
        __cxa_atexit(StringName::~StringName,
                     &_update_node(Node*,TreeItem*,bool)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#4}::operator()()::sname);
      }
      Control::get_theme_color
                ((StringName *)this,
                 (StringName *)
                 &_update_node(Node*,TreeItem*,bool)::{lambda()#4}::operator()()::sname);
      _set_item_custom_color(this);
      TreeItem::set_selectable(iVar9,false);
      local_140._0_4_ = (float)((double)local_140._0_4_ * __LC235);
    }
    else {
      EditorNode::get_object_custom_type_base((Object *)&local_98);
      if (local_98 == pRVar2) {
        Ref<Script>::unref((Ref<Script> *)&local_98);
        goto LAB_0010fcf5;
      }
      Ref<Script>::unref((Ref<Script> *)&local_98);
    }
    cVar5 = HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>::_lookup_pos
                      ((HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>> *)
                       (this + 0xac8),(Node **)param_1,(uint *)&local_98);
    if (cVar5 != '\0') {
      Node::get_name();
      if (local_98 == (Ref *)0x0) {
        local_c0 = (Ref *)0x0;
      }
      else {
        local_c0 = (Ref *)0x0;
        if (*(char **)(local_98 + 8) == (char *)0x0) {
          if (*(long *)(local_98 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(local_98 + 0x10));
            goto LAB_00110b3d;
          }
          if (StringName::configured == '\0') goto LAB_00110b59;
        }
        else {
          String::parse_latin1((String *)&local_c0,*(char **)(local_98 + 8));
LAB_00110b3d:
          if ((StringName::configured == '\0') || (local_98 == (Ref *)0x0)) goto LAB_00110b59;
        }
        StringName::unref();
      }
LAB_00110b59:
      if (this[0xaab] != (SceneTreeEditor)0x0) {
        local_b0 = (Ref *)0x0;
        String::parse_latin1((String *)&local_b0,"");
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"(Connecting From)");
        TTR((String *)&local_a8,(String *)&local_b8);
        operator+((char *)&local_98,(String *)&_LC190);
        String::operator+=((String *)&local_c0,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      }
      local_98 = (Ref *)0x0;
      if (local_c0 != (Ref *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)&local_c0);
      }
      TreeItem::set_text(param_2,0,(CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      local_120._0_4_ = auVar30._8_4_;
      _set_item_custom_color(auVar30._0_8_,CONCAT44(local_140._0_4_,local_120._0_4_),this,param_2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    }
    Ref<Script>::unref((Ref<Script> *)&local_c8);
  }
  if (this[0xac0] != (SceneTreeEditor)0x0) {
    _get_node_configuration_warnings((Node *)&local_a8);
    if ((local_a0 != (char *)0x0) && (iVar13 = (int)*(undefined8 *)(local_a0 + -8), 0 < iVar13)) {
      local_e0 = (Ref *)0x0;
      if (iVar13 == 1) {
        pSVar27 = (StringName *)
                  &_update_node(Node*,TreeItem*,bool)::{lambda()#9}::operator()()::sname;
        if (_update_node(Node*,TreeItem*,bool)::{lambda()#9}::operator()()::sname == '\0') {
          puVar28 = &_update_node(Node*,TreeItem*,bool)::{lambda()#9}::operator()()::sname;
          pSVar27 = (StringName *)
                    &_update_node(Node*,TreeItem*,bool)::{lambda()#9}::operator()()::sname;
          iVar12 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#9}::
                                        operator()()::sname);
          uVar23 = 0xce;
          if (iVar12 != 0) {
LAB_00111363:
            _scs_create((char *)pSVar27,(bool)uVar23);
            __cxa_atexit(StringName::~StringName,pSVar27,&__dso_handle);
            __cxa_guard_release(puVar28);
          }
        }
LAB_00110d1e:
        StringName::operator=((StringName *)&local_e0,pSVar27);
      }
      else {
        if (3 < iVar13) {
          pSVar27 = (StringName *)
                    &_update_node(Node*,TreeItem*,bool)::{lambda()#10}::operator()()::sname;
          if (_update_node(Node*,TreeItem*,bool)::{lambda()#10}::operator()()::sname == '\0') {
            puVar28 = &_update_node(Node*,TreeItem*,bool)::{lambda()#10}::operator()()::sname;
            pSVar27 = (StringName *)
                      &_update_node(Node*,TreeItem*,bool)::{lambda()#10}::operator()()::sname;
            iVar12 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#10}::
                                          operator()()::sname);
            if (iVar12 != 0) {
              uVar23 = 0xe9;
              goto LAB_00111363;
            }
          }
          goto LAB_00110d1e;
        }
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"NodeWarnings%d");
        vformat<int>((String *)&local_b0,(int)(String *)&local_b8);
        StringName::StringName((StringName *)&local_98,(String *)&local_b0,false);
        if (local_e0 == local_98) {
          if ((StringName::configured != '\0') && (local_98 != (Ref *)0x0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_e0 = local_98;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      local_d8 = 0;
      puVar4 = &_LC227;
      do {
        puVar16 = puVar4;
        puVar4 = puVar16 + 4;
      } while (*(int *)(puVar16 + 4) != 0);
      local_98 = (Ref *)&_LC227;
      local_90 = (long)(puVar16 + -0x12a80c) >> 2;
      String::parse_utf32((StrRange *)&local_d8);
      local_d0 = (undefined8 *)0x0;
      if ((local_a0 == (char *)0x0) ||
         (lVar17 = *(long *)(local_a0 + -8), local_a0 + lVar17 * 8 == local_a0)) {
        if (iVar13 == 1) {
LAB_00111d19:
          lVar17 = 0;
LAB_00111d1c:
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,0,lVar17,"p_index","size()","",
                     false,false);
        }
      }
      else {
        pSVar26 = (String *)&local_d0;
        pcVar29 = local_a0;
        do {
          String::replace((char *)&local_b0,pcVar29);
          pcVar29 = pcVar29 + 8;
          operator+((char *)&local_b8,(String *)&_LC169);
          String::operator+((String *)&local_98,(String *)&local_b8);
          String::operator+=(pSVar26,(String *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        } while (local_a0 + lVar17 * 8 != pcVar29);
        if (iVar13 == 1) {
          if (local_d0 == (undefined8 *)0x0) goto LAB_00111d19;
          lVar17 = local_d0[-1];
          if (lVar17 < 1) goto LAB_00111d1c;
          CowData<char32_t>::_copy_on_write((CowData<char32_t> *)pSVar26);
          if (local_d0 == (undefined8 *)0x0) {
LAB_00111d5f:
            uVar21 = 0x157;
            pcVar29 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
LAB_00111d71:
            _err_print_error("resize","./core/templates/cowdata.h",uVar21,pcVar29,0,0);
          }
          else {
            lVar14 = local_d0[-1];
            lVar17 = lVar14 + -1;
            if (lVar17 < 1) {
              if (lVar17 != 0) goto LAB_00111d5f;
              CowData<char32_t>::_unref((CowData<char32_t> *)pSVar26);
            }
            else {
              memmove(local_d0,(void *)((long)local_d0 + 4),lVar17 * 4);
              pSVar25 = pSVar26;
              CowData<char32_t>::_copy_on_write((CowData<char32_t> *)pSVar26);
              pTVar18 = (TreeItem *)(lVar14 * 4);
              if (pTVar18 != (TreeItem *)0x0) {
                uVar19 = (ulong)(pTVar18 + -1) | (ulong)(pTVar18 + -1) >> 1;
                uVar19 = uVar19 | uVar19 >> 2;
                uVar19 = uVar19 | uVar19 >> 4;
                uVar19 = uVar19 | uVar19 >> 8;
                uVar19 = uVar19 | uVar19 >> 0x10;
                pTVar18 = (TreeItem *)((uVar19 | uVar19 >> 0x20) + 1);
              }
              uVar19 = lVar17 * 4 - 1;
              uVar19 = uVar19 | uVar19 >> 1;
              uVar19 = uVar19 | uVar19 >> 2;
              uVar19 = uVar19 | uVar19 >> 4;
              uVar19 = uVar19 | uVar19 >> 8;
              uVar19 = uVar19 | uVar19 >> 0x10;
              uVar20 = uVar19 >> 0x20;
              pTVar24 = (TreeItem *)((uVar19 | uVar20) + 1);
              if (pTVar24 == (TreeItem *)0x0) {
                uVar21 = 0x16a;
                pcVar29 = 
                "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                ;
                goto LAB_00111d71;
              }
              if ((pTVar24 == pTVar18) ||
                 (iVar13 = CowData<char32_t>::_realloc((CowData<char32_t> *)pSVar26,(long)pTVar24),
                 uVar20 = extraout_RDX, pSVar25 = pSVar26, iVar13 == 0)) {
                if (local_d0 == (undefined8 *)0x0) {
                  _update_node((Node *)pSVar25,pTVar24,SUB81(uVar20,0));
                  return;
                }
                local_d0[-1] = lVar17;
              }
            }
          }
        }
      }
      local_140 = (String *)&local_d0;
      local_b8 = 0;
      String::parse_latin1((String *)&local_b8,"");
      local_c0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_c0,"Node configuration warning:");
      TTR((String *)&local_b0,(String *)&local_c0);
      String::operator+((String *)&local_98,(String *)&local_b0);
      Control::get_editor_theme_icon((StringName *)&local_c8);
      TreeItem::add_button(iVar9,(Ref *)0x0,(int)(StringName *)&local_c8,true,(String *)0x0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      if ((StringName::configured != '\0') && (local_e0 != (Ref *)0x0)) {
        StringName::unref();
      }
    }
    local_120 = (String *)&local_e0;
    cVar5 = Node::is_unique_name_in_owner();
    if (cVar5 != '\0') {
      lVar17 = Node::get_owner();
      lVar14 = EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
      local_b0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_b0,"");
      local_b8 = 0;
      String::parse_latin1
                ((String *)&local_b8,
                 "This node can be accessed from anywhere within the scene it belongs to by using the \'%s\' prefix in the node path."
                );
      TTR((String *)&local_98,(String *)&local_b8);
      vformat<char_const*>((String *)&local_c8,(char *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if (lVar17 == lVar14) {
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"");
        local_c0 = (Ref *)0x0;
        String::parse_latin1((String *)&local_c0,"Click to disable this.");
        TTR((String *)&local_b0,(String *)&local_c0);
        operator+((char *)&local_98,(String *)&_LC170);
        String::operator+=((String *)&local_c8,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      if ((_update_node(Node*,TreeItem*,bool)::{lambda()#11}::operator()()::sname == '\0') &&
         (iVar13 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#11}::
                                        operator()()::sname), iVar13 != 0)) {
        _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#11}::operator()()::sname,
                    true);
        __cxa_atexit(StringName::~StringName,
                     &_update_node(Node*,TreeItem*,bool)::{lambda()#11}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#11}::operator()()::sname)
        ;
      }
      Control::get_editor_theme_icon((StringName *)&local_98);
      TreeItem::add_button
                (iVar9,(Ref *)0x0,(int)(CowData<char32_t> *)&local_98,true,
                 (String *)(ulong)(lVar17 != lVar14));
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    }
    uVar10 = (**(code **)(*(long *)param_1 + 0xf8))(param_1);
    uVar11 = Node::get_persistent_group_count();
    local_e0 = (Ref *)0x0;
    iVar13 = (int)(String *)&local_c8;
    if ((int)uVar10 < 1) {
      if ((int)uVar11 < 1) goto LAB_00110857;
LAB_0010fdfd:
      local_140 = (String *)&local_d0;
      local_b0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_b0,"\n");
      local_c0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_c0,"");
      local_c8 = (Ref *)0x0;
      String::parse_latin1((String *)&local_c8,"Node is in the following groups:");
      local_d0 = (undefined8 *)0x0;
      String::parse_latin1(local_140,"Node is in this group:");
      TTRN((String *)&local_b8,local_140,iVar13,(String *)(ulong)uVar11);
      String::operator+((String *)&local_98,(String *)&local_b8);
      String::operator+=(local_120,(String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      local_d0 = (undefined8 *)0x0;
      Node::get_groups((List *)param_1);
      if (local_d0 != (undefined8 *)0x0) {
        for (plVar22 = (long *)*local_d0; plVar22 != (long *)0x0; plVar22 = (long *)plVar22[2]) {
          while ((char)plVar22[1] != '\0') {
            local_b0 = (Ref *)0x0;
            String::parse_latin1((String *)&local_b0,"\n");
            lVar17 = *plVar22;
            if (lVar17 == 0) {
              local_c0 = (Ref *)0x0;
            }
            else {
              local_c0 = (Ref *)0x0;
              if (*(char **)(lVar17 + 8) == (char *)0x0) {
                if (*(long *)(lVar17 + 0x10) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_c0,(CowData *)(lVar17 + 0x10))
                  ;
                }
              }
              else {
                String::parse_latin1((String *)&local_c0,*(char **)(lVar17 + 8));
              }
            }
            String::utf8((char *)&local_c8,0x118dbc);
            String::operator+((String *)&local_b8,(String *)&local_c8);
            String::operator+((String *)&local_98,(String *)&local_b8);
            String::operator+=(local_120,(String *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
            plVar22 = (long *)plVar22[2];
            if (plVar22 == (long *)0x0) goto LAB_0010fff9;
          }
        }
      }
LAB_0010fff9:
      List<Node::GroupInfo,DefaultAllocator>::~List
                ((List<Node::GroupInfo,DefaultAllocator> *)local_140);
      local_c8 = (Ref *)0x0;
      local_98 = (Ref *)0x0;
      String::parse_latin1((String *)&local_98,"");
      local_b0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_b0,"Click to show signals dock.");
      TTR((String *)&local_c0,(String *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if (0 < (int)uVar10) {
        if ((_update_node(Node*,TreeItem*,bool)::{lambda()#12}::operator()()::sname == '\0') &&
           (iVar12 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#12}::
                                          operator()()::sname), iVar12 != 0)) {
          _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#12}::operator()()::
                               sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_node(Node*,TreeItem*,bool)::{lambda()#12}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#12}::operator()()::
                               sname);
        }
        goto LAB_00110089;
      }
      if ((_update_node(Node*,TreeItem*,bool)::{lambda()#14}::operator()()::sname == '\0') &&
         (iVar12 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#14}::
                                        operator()()::sname), iVar12 != 0)) {
        _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#14}::operator()()::sname,
                    true);
        __cxa_atexit(StringName::~StringName,
                     &_update_node(Node*,TreeItem*,bool)::{lambda()#14}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#14}::operator()()::sname)
        ;
      }
      Control::get_editor_theme_icon((StringName *)&local_98);
      Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_c8,local_98);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_98);
      local_b0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_b0,"");
      local_b8 = 0;
      String::parse_latin1((String *)&local_b8,"Click to show groups dock.");
      TTR((String *)&local_98,(String *)&local_b8);
      if (local_c0 != local_98) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        local_c0 = local_98;
        local_98 = (Ref *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      uVar23 = 7;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
LAB_001100b5:
      String::operator+=(local_120,(String *)&local_c0);
      TreeItem::add_button(iVar9,(Ref *)0x0,iVar13,(bool)uVar23,(String *)0x0);
    }
    else {
      Array::Array((Array *)&local_d8);
      Variant::Variant((Variant *)local_78,uVar10);
      Array::push_back((Variant *)&local_d8);
      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      local_c0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_c0,"");
      local_c8 = (Ref *)0x0;
      String::parse_latin1((String *)&local_c8,"Node has {num} connections.");
      local_d0 = (undefined8 *)0x0;
      String::parse_latin1((String *)&local_d0,"Node has one connection.");
      TTRN((String *)&local_b8,(String *)&local_d0,iVar13,(String *)(ulong)uVar10);
      local_b0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_b0,"{num}");
      Variant::Variant((Variant *)local_78,(Array *)&local_d8);
      String::format((Variant *)&local_98,(String *)&local_b8);
      String::operator+=(local_120,(String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
        Variant::_clear_internal();
      }
      local_140 = (String *)&local_d0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_140);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if (0 < (int)uVar11) {
        String::operator+=(local_120,"\n");
        Array::~Array((Array *)&local_d8);
        goto LAB_0010fdfd;
      }
      Array::~Array((Array *)&local_d8);
LAB_00110857:
      String::operator+=(local_120,"\n");
      local_c8 = (Ref *)0x0;
      local_98 = (Ref *)0x0;
      String::parse_latin1((String *)&local_98,"");
      local_b0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_b0,"Click to show signals dock.");
      TTR((String *)&local_c0,(String *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      if (0 < (int)uVar10) {
        if ((_update_node(Node*,TreeItem*,bool)::{lambda()#13}::operator()()::sname == '\0') &&
           (iVar12 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#13}::
                                          operator()()::sname), iVar12 != 0)) {
          _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#13}::operator()()::
                               sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_node(Node*,TreeItem*,bool)::{lambda()#13}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#13}::operator()()::
                               sname);
        }
LAB_00110089:
        uVar23 = 6;
        Control::get_editor_theme_icon((StringName *)&local_98);
        Ref<Texture2D>::operator=((Ref<Texture2D> *)&local_c8,local_98);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_98);
        goto LAB_001100b5;
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_120);
    CowData<String>::_unref((CowData<String> *)&local_a0);
  }
  _update_node_tooltip(this,param_1,param_2);
  create_custom_callable_function_pointer<SceneTreeEditor,Node*,TreeItem*>
            ((SceneTreeEditor *)&local_a8,(char *)this,
             (_func_void_Node_ptr_TreeItem_ptr *)"&SceneTreeEditor::_queue_update_node_tooltip");
  pcVar1 = *(code **)(*(long *)param_1 + 0x118);
  StringName::StringName((StringName *)&local_98,"editor_description_changed",false);
  cVar5 = (*pcVar1)(param_1,(CowData<char32_t> *)&local_98,(StringName *)&local_a8);
  if ((StringName::configured != '\0') && (local_98 != (Ref *)0x0)) {
    StringName::unref();
  }
  if (cVar5 != '\0') {
    pcVar1 = *(code **)(*(long *)param_1 + 0x110);
    StringName::StringName((StringName *)&local_98,"editor_description_changed",false);
    (*pcVar1)(param_1,(CowData<char32_t> *)&local_98,(StringName *)&local_a8);
    if ((StringName::configured != '\0') && (local_98 != (Ref *)0x0)) {
      StringName::unref();
    }
  }
  pcVar1 = *(code **)(*(long *)param_1 + 0x108);
  Variant::Variant((Variant *)local_78,(Object *)param_2);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  local_88 = (Variant *)local_78;
  Callable::bindp((Variant **)&local_98,iVar8);
  if (Variant::needs_deinit[(int)local_60] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)&local_b0,"editor_description_changed",false);
  (*pcVar1)(param_1,(StringName *)&local_b0,(CowData<char32_t> *)&local_98,0);
  if ((StringName::configured != '\0') && (local_b0 != (Ref *)0x0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_98);
  Callable::~Callable((Callable *)&local_a8);
  auVar30._8_8_ = local_78._8_8_;
  auVar30._0_8_ = local_78._0_8_;
  if ((this[0xac1] != (SceneTreeEditor)0x0) &&
     (local_78 = auVar30, this[0xac4] != (SceneTreeEditor)0x0)) {
    (**(code **)(*(long *)param_1 + 0x98))((Variant *)local_78,param_1);
    local_f0 = (Ref *)0x0;
    Ref<Script>::operator=((Ref<Script> *)&local_f0,(Variant *)local_78);
    if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
      Variant::_clear_internal();
    }
    pRVar2 = local_f0;
    if (local_f0 != (Ref *)0x0) {
      local_e8 = 0;
      local_78._4_4_ = _LC39;
      local_78._0_4_ = _LC39;
      local_78._12_4_ = _LC39;
      local_78._8_4_ = _LC39;
      cVar5 = (**(code **)(*(long *)local_f0 + 0x270))(local_f0);
      if (cVar5 != '\0') {
        lVar17 = Engine::get_singleton();
        local_b0 = (Ref *)0x0;
        if (*(char *)(lVar17 + 0xc4) == '\0') {
          String::parse_latin1((String *)&local_b0,"");
          local_b8 = 0;
          String::parse_latin1
                    ((String *)&local_b8,"This script is currently running in the editor.");
          TTR((String *)&local_a8,(String *)&local_b8);
          operator+((char *)&local_98,(String *)&_LC170);
          String::operator+=((String *)&local_e8,(String *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          pSVar27 = (StringName *)
                    &_update_node(Node*,TreeItem*,bool)::{lambda()#16}::operator()()::sname;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          if (_update_node(Node*,TreeItem*,bool)::{lambda()#16}::operator()()::sname == '\0') {
            pSVar27 = (StringName *)
                      &_update_node(Node*,TreeItem*,bool)::{lambda()#16}::operator()()::sname;
            iVar8 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#16}::
                                         operator()()::sname);
            if (iVar8 != 0) {
              _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#16}::operator()()::
                                   sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_update_node(Node*,TreeItem*,bool)::{lambda()#16}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#16}::operator()()::
                                   sname);
            }
          }
        }
        else {
          String::parse_latin1((String *)&local_b0,"");
          local_b8 = 0;
          String::parse_latin1
                    ((String *)&local_b8,
                     "This script can run in the editor.\nIt is currently disabled due to recovery mode."
                    );
          TTR((String *)&local_a8,(String *)&local_b8);
          operator+((char *)&local_98,(String *)&_LC170);
          String::operator+=((String *)&local_e8,(String *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          pSVar27 = (StringName *)
                    &_update_node(Node*,TreeItem*,bool)::{lambda()#15}::operator()()::sname;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          if (_update_node(Node*,TreeItem*,bool)::{lambda()#15}::operator()()::sname == '\0') {
            pSVar27 = (StringName *)
                      &_update_node(Node*,TreeItem*,bool)::{lambda()#15}::operator()()::sname;
            iVar8 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#15}::
                                         operator()()::sname);
            if (iVar8 != 0) {
              _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#15}::operator()()::
                                   sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_update_node(Node*,TreeItem*,bool)::{lambda()#15}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#15}::operator()()::
                                   sname);
            }
          }
        }
        local_78 = Control::get_theme_color((StringName *)this,pSVar27);
      }
      EditorNode::get_object_custom_type_base((Object *)&local_98);
      pRVar3 = local_98;
      Ref<Script>::unref((Ref<Script> *)&local_98);
      if (pRVar3 == pRVar2) {
        local_b0 = (Ref *)0x0;
        String::parse_latin1((String *)&local_b0,"");
        local_b8 = 0;
        String::parse_latin1((String *)&local_b8,"This script is a custom type.");
        TTR((String *)&local_a8,(String *)&local_b8);
        operator+((char *)&local_98,(String *)&_LC170);
        String::operator+=((String *)&local_e8,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        local_78._12_4_ = 0x3f000000;
      }
      Resource::get_path();
      local_c0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_c0," ");
      local_d0 = (undefined8 *)0x0;
      String::parse_latin1((String *)&local_d0,"");
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,"Open Script:");
      TTR((String *)&local_c8,(String *)&local_d8);
      String::operator+((String *)&local_b8,(String *)&local_c8);
      String::operator+((String *)&local_a8,(String *)&local_b8);
      String::operator+((String *)&local_98,(String *)&local_a8);
      if (_update_node(Node*,TreeItem*,bool)::{lambda()#17}::operator()()::sname == '\0') {
        iVar8 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#17}::operator()()
                                     ::sname);
        if (iVar8 != 0) {
          _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#17}::operator()()::
                               sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_node(Node*,TreeItem*,bool)::{lambda()#17}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#17}::operator()()::
                               sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_e0);
      TreeItem::add_button(iVar9,(Ref *)0x0,(int)(StringName *)&local_e0,true,(String *)0x0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      iVar8 = TreeItem::get_button_count(iVar9);
      TreeItem::set_button_color(iVar9,0,(Color *)(ulong)(iVar8 - 1));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
    }
    pcVar1 = *(code **)(*(long *)param_1 + 0xa0);
    StringName::StringName((StringName *)&local_98,"_edit_lock_",false);
    cVar5 = (*pcVar1)(param_1,(CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_98 != (Ref *)0x0)) {
      StringName::unref();
    }
    if (cVar5 != '\0') {
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"");
      local_b0 = (Ref *)0x0;
      String::parse_latin1((String *)&local_b0,"Node is locked.\nClick to unlock it.");
      TTR((String *)&local_98,(String *)&local_b0);
      if (_update_node(Node*,TreeItem*,bool)::{lambda()#18}::operator()()::sname == '\0') {
        iVar8 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#18}::operator()()
                                     ::sname);
        if (iVar8 != 0) {
          _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#18}::operator()()::
                               sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_node(Node*,TreeItem*,bool)::{lambda()#18}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#18}::operator()()::
                               sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_b8);
      TreeItem::add_button(iVar9,(Ref *)0x0,(int)(StringName *)&local_b8,true,(String *)0x0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    pcVar1 = *(code **)(*(long *)param_1 + 0xa0);
    StringName::StringName((StringName *)&local_98,"_edit_group_",false);
    cVar5 = (*pcVar1)(param_1,(CowData<char32_t> *)&local_98);
    if ((StringName::configured != '\0') && (local_98 != (Ref *)0x0)) {
      StringName::unref();
    }
    if (cVar5 != '\0') {
      local_a8 = 0;
      String::parse_latin1((String *)&local_a8,"");
      local_b0 = (Ref *)0x0;
      String::parse_latin1
                ((String *)&local_b0,"Children are not selectable.\nClick to make them selectable.")
      ;
      TTR((String *)&local_98,(String *)&local_b0);
      if (_update_node(Node*,TreeItem*,bool)::{lambda()#19}::operator()()::sname == '\0') {
        iVar8 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#19}::operator()()
                                     ::sname);
        if (iVar8 != 0) {
          _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#19}::operator()()::
                               sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_node(Node*,TreeItem*,bool)::{lambda()#19}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#19}::operator()()::
                               sname);
        }
      }
      Control::get_editor_theme_icon((StringName *)&local_b8);
      TreeItem::add_button(iVar9,(Ref *)0x0,(int)(StringName *)&local_b8,true,(String *)0x0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    }
    StringName::StringName((StringName *)&local_a8,"is_visible",false);
    cVar5 = Object::has_method((StringName *)param_1);
    if (cVar5 == '\0') {
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::StringName((StringName *)&local_98,"set_visible",false);
      cVar5 = Object::has_method((StringName *)param_1);
      if (cVar5 != '\0') {
        cVar5 = (**(code **)(*(long *)param_1 + 0xd8))(param_1,SceneStringNames::singleton + 0x18);
        if (cVar5 != '\0') {
          if (StringName::configured != '\0') {
            if (local_98 != (Ref *)0x0) {
              StringName::unref();
              if (StringName::configured == '\0') goto LAB_0011044d;
            }
            if (local_a8 != 0) {
              StringName::unref();
            }
          }
LAB_0011044d:
          StringName::StringName((StringName *)&local_98,"is_visible",false);
          Object::call<>((StringName *)local_78);
          bVar7 = Variant::operator_cast_to_bool((Variant *)local_78);
          if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
            Variant::_clear_internal();
          }
          if ((StringName::configured != '\0') && (local_98 != (Ref *)0x0)) {
            StringName::unref();
          }
          local_a8 = 0;
          if (bVar7) {
            String::parse_latin1((String *)&local_a8,"");
            local_b0 = (Ref *)0x0;
            String::parse_latin1((String *)&local_b0,"Toggle Visibility");
            TTR((String *)&local_98,(String *)&local_b0);
            if (_update_node(Node*,TreeItem*,bool)::{lambda()#20}::operator()()::sname == '\0') {
              puVar28 = &_update_node(Node*,TreeItem*,bool)::{lambda()#20}::operator()()::sname;
              pcVar29 = (char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#20}::operator()()::
                                 sname;
              iVar8 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#20}::
                                           operator()()::sname);
              uVar23 = 0x10;
              if (iVar8 != 0) {
LAB_001114b3:
                _scs_create(pcVar29,(bool)uVar23);
                __cxa_atexit(StringName::~StringName,pcVar29,&__dso_handle);
                __cxa_guard_release(puVar28);
              }
            }
          }
          else {
            String::parse_latin1((String *)&local_a8,"");
            local_b0 = (Ref *)0x0;
            String::parse_latin1((String *)&local_b0,"Toggle Visibility");
            TTR((String *)&local_98,(String *)&local_b0);
            if (_update_node(Node*,TreeItem*,bool)::{lambda()#21}::operator()()::sname == '\0') {
              puVar28 = &_update_node(Node*,TreeItem*,bool)::{lambda()#21}::operator()()::sname;
              pcVar29 = (char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#21}::operator()()::
                                 sname;
              iVar8 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#21}::
                                           operator()()::sname);
              if (iVar8 != 0) {
                uVar23 = 0x25;
                goto LAB_001114b3;
              }
            }
          }
          Control::get_editor_theme_icon((StringName *)&local_b8);
          TreeItem::add_button(iVar9,(Ref *)0x0,(int)(StringName *)&local_b8,true,(String *)0x0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          create_custom_callable_function_pointer<SceneTreeEditor,Node*>
                    ((SceneTreeEditor *)&local_a8,(char *)this,
                     (_func_void_Node_ptr *)"&SceneTreeEditor::_node_visibility_changed");
          cVar5 = (**(code **)(*(long *)param_1 + 0x118))
                            (param_1,SceneStringNames::singleton + 0x18,(StringName *)&local_a8);
          if (cVar5 == '\0') {
            pcVar1 = *(code **)(*(long *)param_1 + 0x108);
            Callable::bind<Node*>((Node *)&local_98);
            (*pcVar1)(param_1,SceneStringNames::singleton + 0x18,(CowData<char32_t> *)&local_98,0);
            Callable::~Callable((Callable *)&local_98);
          }
          _update_visibility_color(this,param_1,param_2);
          Callable::~Callable((Callable *)&local_a8);
          goto LAB_0010f6cc;
        }
      }
      if (StringName::configured != '\0') {
        if (local_98 != (Ref *)0x0) {
          StringName::unref();
          if (StringName::configured == '\0') goto LAB_0010f6cc;
        }
        if (local_a8 != 0) {
          StringName::unref();
        }
      }
    }
LAB_0010f6cc:
    pcVar1 = *(code **)(*(long *)param_1 + 0x58);
    local_98 = (Ref *)0x0;
    String::parse_latin1((String *)&local_98,"AnimationMixer");
    cVar5 = (*pcVar1)(param_1,(CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    if (cVar5 != '\0') {
      pNVar15 = (Node *)AnimationPlayerEditor::get_editing_node();
      if (param_1 == pNVar15) {
        cVar5 = BaseButton::is_pressed();
        if (cVar5 != '\0') {
          local_a8 = 0;
          String::parse_latin1((String *)&local_a8,"");
          local_b0 = (Ref *)0x0;
          String::parse_latin1((String *)&local_b0,"AnimationPlayer is pinned.\nClick to unpin.");
          TTR((String *)&local_98,(String *)&local_b0);
          if (_update_node(Node*,TreeItem*,bool)::{lambda()#22}::operator()()::sname == '\0') {
            iVar8 = __cxa_guard_acquire(&_update_node(Node*,TreeItem*,bool)::{lambda()#22}::
                                         operator()()::sname);
            if (iVar8 != 0) {
              _scs_create((char *)&_update_node(Node*,TreeItem*,bool)::{lambda()#22}::operator()()::
                                   sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_update_node(Node*,TreeItem*,bool)::{lambda()#22}::operator()()::sname,
                           &__dso_handle);
              __cxa_guard_release(&_update_node(Node*,TreeItem*,bool)::{lambda()#22}::operator()()::
                                   sname);
            }
          }
          Control::get_editor_theme_icon((StringName *)&local_b8);
          TreeItem::add_button(iVar9,(Ref *)0x0,(int)(StringName *)&local_b8,true,(String *)0x0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        }
      }
    }
    Ref<Script>::unref((Ref<Script> *)&local_f0);
  }
  if (*(Node **)(this + 0x9c8) == (Node *)0x0) {
    if (*(Node **)(this + 0xa50) != param_1) goto LAB_0010f743;
LAB_0010f7dd:
    TreeItem::select(iVar9);
  }
  else {
    cVar5 = EditorSelection::is_selected(*(Node **)(this + 0x9c8));
    if (cVar5 != '\0') {
      TreeItem::select(iVar9);
    }
    if (*(Node **)(this + 0xa50) != param_1) goto LAB_0010f743;
    if (*(long *)(this + 0x9c8) == 0) goto LAB_0010f7dd;
  }
  TreeItem::set_as_cursor(iVar9);
LAB_0010f743:
  Ref<Texture2D>::unref((Ref<Texture2D> *)local_f8);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* SceneTreeEditor::_update_node_subtree(Node*, TreeItem*, bool) */

void __thiscall
SceneTreeEditor::_update_node_subtree
          (SceneTreeEditor *this,Node *param_1,TreeItem *param_2,bool param_3)

{
  Node *pNVar1;
  undefined4 uVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  Object OVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  Node *pNVar12;
  byte extraout_var;
  TreeItem *pTVar13;
  byte bVar14;
  int iVar15;
  StringName *pSVar16;
  Object *pOVar17;
  Node *pNVar18;
  long in_FS_OFFSET;
  TreeItem *local_b8;
  StringName *local_b0;
  Object *local_a0;
  Object *local_98;
  Node *local_90;
  Node *local_88;
  TreeItem *local_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined8 local_70;
  undefined2 local_68;
  undefined1 local_66;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (Node *)0x0) {
    if (this[0xaf2] == (SceneTreeEditor)0x0) {
      lVar10 = Node::get_owner();
      lVar11 = get_scene_node(this);
      if ((lVar10 == lVar11) || (pNVar12 = (Node *)get_scene_node(this), param_1 == pNVar12))
      goto LAB_00111f30;
      if (((this[0xac3] == (SceneTreeEditor)0x0) && (this[0xac1] == (SceneTreeEditor)0x0)) ||
         (lVar10 = Node::get_owner(), lVar10 == 0)) {
LAB_00111ef0:
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          NodeCache::remove((NodeCache *)(this + 0x9d0),param_1,true);
          return;
        }
        goto LAB_00112711;
      }
      pNVar12 = (Node *)get_scene_node(this);
      Node::get_owner();
      cVar4 = Node::is_editable_instance(pNVar12);
      if (cVar4 == '\0') goto LAB_00111ef0;
    }
    else {
LAB_00111f30:
      pNVar12 = (Node *)get_scene_node(this);
      if (param_1 == pNVar12) {
        cVar4 = false;
      }
      else {
        cVar4 = false;
        get_scene_node(this);
        Node::get_scene_inherited_state();
        if (local_98 != (Object *)0x0) {
          get_scene_node(this);
          Node::get_scene_inherited_state();
          pNVar12 = local_90;
          bVar5 = (bool)get_scene_node(this);
          Node::get_path_to((Node *)&local_88,bVar5);
          SceneState::find_node_by_path((NodePath *)pNVar12);
          cVar4 = (byte)~extraout_var >> 7;
          NodePath::~NodePath((NodePath *)&local_88);
          if (((local_90 != (Node *)0x0) &&
              (cVar6 = RefCounted::unreference(), pNVar12 = local_90, cVar6 != '\0')) &&
             (cVar6 = predelete_handler((Object *)local_90), cVar6 != '\0')) {
            (**(code **)(*(long *)pNVar12 + 0x140))(pNVar12);
            Memory::free_static(pNVar12,false);
          }
          if (((local_98 != (Object *)0x0) &&
              (cVar6 = RefCounted::unreference(), pOVar17 = local_98, cVar6 != '\0')) &&
             (cVar6 = predelete_handler(local_98), cVar6 != '\0')) {
            (**(code **)(*(long *)pOVar17 + 0x140))(pOVar17);
            Memory::free_static(pOVar17,false);
          }
        }
      }
    }
    NodeCache::get((Node *)&local_a0,(bool)((char)this + -0x30));
    if (local_a0 == (Object *)0x0) {
      if (param_2 == (TreeItem *)0x0) {
        local_b8 = (TreeItem *)Tree::get_root();
        uVar2 = 0xffffffff;
        if (local_b8 == (TreeItem *)0x0) {
          local_b8 = (TreeItem *)Tree::create_item(*(TreeItem **)(this + 0xa48),0);
          uVar2 = 0;
        }
      }
      else {
        if (*(int *)(param_1 + 0x21c) == 0) {
          if ((*(long *)(param_1 + 400) != 0) &&
             (*(char *)(*(long *)(param_1 + 400) + 0x1d0) != '\0')) {
            Node::_update_children_cache_impl();
          }
          uVar2 = *(undefined4 *)(param_1 + 0x22c);
        }
        else {
          _err_print_error("get_index","./scene/main/node.h",0x20a,
                           "Condition \"!p_include_internal && data.internal_mode != INTERNAL_MODE_DISABLED\" is true. Returning: -1"
                           ,
                           "Node is internal. Can\'t get index with \'include_internal\' being false."
                           ,0,0);
          uVar2 = 0xffffffff;
        }
        local_b8 = (TreeItem *)Tree::create_item(*(TreeItem **)(this + 0xa48),(int)param_2);
      }
      local_68 = 0xffff;
      bVar14 = 1;
      local_80 = local_b8;
      local_74 = 1;
      local_78 = 0xffffffff;
      local_72 = 0;
      local_70 = 0;
      local_66 = 0;
      local_90 = param_1;
      local_88 = param_1;
      HashMap<Node*,SceneTreeEditor::CachedNode,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,SceneTreeEditor::CachedNode>>>
      ::insert((Node **)&local_98,(CachedNode *)(this + 0x9d8),SUB81(&local_90,0));
      *(undefined4 *)(local_98 + 0x28) = uVar2;
      pOVar17 = local_98;
    }
    else {
      local_b8 = *(TreeItem **)(local_a0 + 0x20);
      pTVar13 = (TreeItem *)TreeItem::get_parent();
      if ((param_2 != (TreeItem *)0x0) && (param_2 != pTVar13)) {
        if (pTVar13 != (TreeItem *)0x0) {
          TreeItem::remove_child(pTVar13);
        }
        TreeItem::add_child(param_2);
        local_a0[0x2e] = (Object)0x0;
        _move_node_item(this,param_2,(Iterator *)&local_a0);
      }
      if (local_a0[0x2d] != (Object)0x0) {
        _move_node_children(this,(Iterator *)&local_a0);
      }
      bVar14 = 0;
      pOVar17 = local_a0;
    }
    if ((param_3) || (pOVar17[0x2c] != (Object)0x0)) {
      _update_node(this,param_1,local_b8,(bool)cVar4);
      pOVar17[0x2c] = (Object)0x0;
      OVar7 = (Object)Node::can_process();
      pOVar17[0x3a] = OVar7;
      iVar8 = Node::get_child_count(SUB81(param_1,0));
      iVar9 = 0;
      if (0 < iVar8) {
        do {
          iVar15 = iVar9 + 1;
          pNVar12 = (Node *)Node::get_child((int)param_1,SUB41(iVar9,0));
          _update_node_subtree(this,pNVar12,local_b8,(bool)(param_3 | bVar14));
          iVar8 = Node::get_child_count(SUB81(param_1,0));
          iVar9 = iVar15;
        } while (iVar15 < iVar8);
      }
      if ((*(long *)(this + 0xb18) != 0) && (*(long *)(*(long *)(this + 0xb18) + -8) != 0)) {
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 0xb18));
        pSVar16 = *(StringName **)(this + 0xb18);
        CowData<StringName>::_copy_on_write((CowData<StringName> *)(this + 0xb18));
        local_b0 = *(StringName **)(this + 0xb18);
        if (local_b0 != (StringName *)0x0) {
          local_b0 = local_b0 + *(long *)(local_b0 + -8) * 8;
        }
        for (; local_b0 != pSVar16; pSVar16 = pSVar16 + 8) {
          lVar10 = *(long *)pSVar16;
          pcVar3 = *(code **)(*(long *)param_1 + 0x58);
          if (lVar10 == 0) {
            local_90 = (Node *)0x0;
          }
          else {
            pNVar12 = *(Node **)(lVar10 + 8);
            local_90 = (Node *)0x0;
            if (pNVar12 == (Node *)0x0) {
              if (*(long *)(lVar10 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(lVar10 + 0x10));
              }
            }
            else {
              local_80 = (TreeItem *)strlen((char *)pNVar12);
              local_88 = pNVar12;
              String::parse_latin1((StrRange *)&local_90);
            }
          }
          cVar4 = (*pcVar3)(param_1,(StrRange *)&local_90);
          if ((cVar4 != '\0') ||
             (cVar4 = EditorNode::is_object_of_custom_type
                                (EditorNode::singleton,(StringName *)param_1), cVar4 != '\0')) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            goto LAB_00112207;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          (**(code **)(*(long *)param_1 + 0x98))(local_58,param_1);
          local_90 = (Node *)0x0;
          lVar10 = Variant::get_validated_object();
          if ((lVar10 == 0) ||
             (pNVar12 = (Node *)__dynamic_cast(lVar10,&Object::typeinfo,&Script::typeinfo,0),
             pNVar12 == (Node *)0x0)) {
LAB_001123ad:
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            local_90 = pNVar12;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
              local_90 = (Node *)0x0;
              goto LAB_001123ad;
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            do {
              Resource::get_path();
              cVar4 = operator==((String *)&local_88,pSVar16);
              pNVar18 = local_88;
              if (local_88 != (Node *)0x0) {
                LOCK();
                pNVar1 = local_88 + -0x10;
                *(long *)pNVar1 = *(long *)pNVar1 + -1;
                UNLOCK();
                if (*(long *)pNVar1 == 0) {
                  local_88 = (Node *)0x0;
                  Memory::free_static(pNVar18 + -0x10,false);
                }
              }
              if (cVar4 != '\0') {
                Ref<Script>::unref((Ref<Script> *)&local_90);
                goto LAB_00112207;
              }
              (**(code **)(*(long *)pNVar12 + 0x1d8))((String *)&local_88);
              pNVar12 = local_90;
              pNVar18 = local_90;
              if (local_88 != local_90) {
                local_90 = local_88;
                if (local_88 == (Node *)0x0) {
                  if (pNVar12 == (Node *)0x0) break;
                  cVar4 = RefCounted::unreference();
                  pNVar18 = local_88;
                }
                else {
                  cVar4 = RefCounted::reference();
                  if (cVar4 == '\0') {
                    local_90 = (Node *)0x0;
                  }
                  pNVar18 = local_88;
                  if (pNVar12 == (Node *)0x0) goto LAB_001124fd;
                  cVar4 = RefCounted::unreference();
                  pNVar18 = local_88;
                }
                local_88 = pNVar18;
                if ((cVar4 != '\0') &&
                   (cVar4 = predelete_handler((Object *)pNVar12), pNVar18 = local_88, cVar4 != '\0')
                   ) {
                  (**(code **)(*(long *)pNVar12 + 0x140))(pNVar12);
                  Memory::free_static(pNVar12,false);
                  pNVar18 = local_88;
                }
              }
LAB_001124fd:
              pNVar12 = local_90;
              if (((pNVar18 != (Node *)0x0) &&
                  (cVar4 = RefCounted::unreference(), pNVar18 = local_88, pNVar12 = local_90,
                  cVar4 != '\0')) &&
                 (cVar4 = predelete_handler((Object *)local_88), pNVar12 = local_90, cVar4 != '\0'))
              {
                (**(code **)(*(long *)pNVar18 + 0x140))(pNVar18);
                Memory::free_static(pNVar18,false);
              }
            } while (pNVar12 != (Node *)0x0);
          }
        }
        if ((_update_node_subtree(Node*,TreeItem*,bool)::{lambda()#1}::operator()()::sname == '\0')
           && (iVar9 = __cxa_guard_acquire(&_update_node_subtree(Node*,TreeItem*,bool)::{lambda()#1}
                                            ::operator()()::sname), iVar9 != 0)) {
          _scs_create((char *)&_update_node_subtree(Node*,TreeItem*,bool)::{lambda()#1}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_node_subtree(Node*,TreeItem*,bool)::{lambda()#1}::operator()()::
                        sname,&__dso_handle);
          __cxa_guard_release(&_update_node_subtree(Node*,TreeItem*,bool)::{lambda()#1}::
                               operator()()::sname);
        }
        Control::get_theme_color
                  ((StringName *)this,
                   (StringName *)
                   &_update_node_subtree(Node*,TreeItem*,bool)::{lambda()#1}::operator()()::sname);
        _set_item_custom_color(this);
        TreeItem::set_selectable((int)local_b8,false);
        TreeItem::deselect((int)local_b8);
        if (*(Node **)(this + 0xa50) == param_1) {
          *(undefined8 *)(this + 0xa50) = 0;
        }
      }
    }
  }
LAB_00112207:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00112711:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_update_filter(TreeItem*, bool) */

uint SceneTreeEditor::_update_filter(TreeItem *param_1,bool param_2)

{
  Variant *pVVar1;
  code *pcVar2;
  undefined8 uVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  TreeItem *pTVar9;
  long lVar10;
  TreeItem *pTVar11;
  TreeItem *pTVar12;
  Object *pOVar13;
  StringName *pSVar14;
  StringName *pSVar15;
  TreeItem *pTVar16;
  CallableCustom *this;
  char in_DL;
  Variant *pVVar17;
  Variant *pVVar18;
  undefined7 in_register_00000031;
  bool bVar19;
  undefined1 uVar20;
  StringName *pSVar22;
  long in_FS_OFFSET;
  undefined8 in_XMM1_Qa;
  Array local_110 [8];
  long local_108;
  Variant local_100 [8];
  Vector local_f8 [8];
  CowData<String> local_f0 [8];
  Variant *local_e8;
  Variant *local_e0;
  Variant *local_d8 [2];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined1 local_b8 [16];
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 local_88 [3];
  Variant local_70 [24];
  Variant local_58 [24];
  long local_40 [2];
  int iVar21;
  
  pTVar16 = (TreeItem *)CONCAT71(in_register_00000031,param_2);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (pTVar16 == (TreeItem *)0x0) {
    pTVar16 = (TreeItem *)Tree::get_root();
    if ((*(long *)(param_1 + 0xa68) != 0) && (*(long *)(*(long *)(param_1 + 0xa68) + -8) != 0)) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0xa68));
    }
    if (pTVar16 == (TreeItem *)0x0) {
      uVar7 = 0;
      goto LAB_00112bf8;
    }
  }
  String::to_lower();
  String::split_spaces();
  CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
  cVar4 = _item_matches_all_terms((SceneTreeEditor *)param_1,pTVar16,local_f8);
  pTVar9 = (TreeItem *)Tree::get_root();
  bVar19 = SUB81(pTVar16,0);
  iVar21 = (int)pTVar16;
  if (cVar4 == '\0') {
LAB_001127b9:
    cVar4 = '\0';
    lVar10 = TreeItem::get_first_child();
    cVar6 = '\0';
    if (lVar10 == 0) {
      cVar6 = '\0';
      if (pTVar9 != pTVar16) goto LAB_00112815;
LAB_001130d6:
      uVar20 = (undefined1)*(undefined8 *)(param_1 + 0xa48);
      uVar7 = 0;
      goto LAB_001130e7;
    }
LAB_001127d0:
    cVar4 = cVar6;
    cVar6 = '\0';
    do {
      cVar5 = _update_filter(param_1,SUB81(lVar10,0));
      if (cVar5 != '\0') {
        cVar6 = cVar5;
      }
      lVar10 = TreeItem::get_next();
    } while (lVar10 != 0);
    if (pTVar9 == pTVar16) {
      if (cVar4 != '\0') goto LAB_00112e9f;
      if (cVar6 == '\0') goto LAB_001130d6;
LAB_00112856:
      TreeItem::set_visible(bVar19);
      uVar7 = TreeItem::is_visible();
      if ((char)uVar7 != '\0') {
        if ((_update_filter(TreeItem*,bool)::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar8 = __cxa_guard_acquire(&_update_filter(TreeItem*,bool)::{lambda()#2}::operator()()
                                         ::sname), iVar8 != 0)) {
          _scs_create((char *)&_update_filter(TreeItem*,bool)::{lambda()#2}::operator()()::sname,
                      true);
          __cxa_atexit(StringName::~StringName,
                       &_update_filter(TreeItem*,bool)::{lambda()#2}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&_update_filter(TreeItem*,bool)::{lambda()#2}::operator()()::sname);
        }
        local_88[0] = Control::get_theme_color
                                ((StringName *)param_1,
                                 (StringName *)
                                 &_update_filter(TreeItem*,bool)::{lambda()#2}::operator()()::sname)
        ;
        TreeItem::set_custom_color(iVar21,(Color *)0x0);
        TreeItem::set_selectable(iVar21,false);
        TreeItem::deselect(iVar21);
        goto joined_r0x0011317a;
      }
      pTVar11 = (TreeItem *)TreeItem::get_parent();
      if (pTVar11 != (TreeItem *)0x0) {
LAB_001128be:
        pTVar12 = (TreeItem *)Tree::get_root();
        if ((pTVar11 != pTVar12) &&
           ((cVar4 = TreeItem::is_selectable((int)pTVar11), cVar4 == '\0' ||
            (cVar4 = TreeItem::is_visible(), cVar4 == '\0')))) goto LAB_001128aa;
        TreeItem::get_children();
        Array::begin();
        Array::end();
        if (local_e8 != local_d8[0]) {
          do {
            pVVar18 = local_e8;
            if (local_e0 != (Variant *)0x0) {
              Variant::operator=(local_e0,local_e8);
              pVVar18 = local_e0;
            }
            pOVar13 = Variant::operator_cast_to_Object_(pVVar18);
            if (pOVar13 != (Object *)0x0) {
              pOVar13 = (Object *)__dynamic_cast(pOVar13,&Object::typeinfo,&TreeItem::typeinfo,0);
            }
            cVar4 = TreeItem::is_selected((int)pOVar13);
            TreeItem::remove_child(pTVar16);
            TreeItem::add_child(pTVar11);
            lVar10 = TreeItem::get_prev();
            if (lVar10 != 0) {
              TreeItem::move_after((TreeItem *)pOVar13);
            }
            if (cVar4 != '\0') {
              TreeItem::select((int)pOVar13);
            }
            TreeItem::get_metadata((int)local_88);
            Variant::operator_cast_to_NodePath(local_100);
            Node::get_node((NodePath *)param_1);
            NodeCache::get((Node *)&local_108,(bool)((char)param_1 + -0x30));
            NodePath::~NodePath((NodePath *)local_100);
            if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (local_108 != 0) {
              *(undefined1 *)(local_108 + 0x2d) = 1;
            }
            local_e8 = local_e8 + 0x18;
          } while (local_e8 != local_d8[0]);
          uVar7 = uVar7 & 0xff;
        }
        Array::~Array(local_110);
        goto LAB_0011306b;
      }
LAB_0011326d:
      if (pTVar9 == pTVar16) {
        uVar20 = (undefined1)*(undefined8 *)(param_1 + 0xa48);
        goto LAB_001130e7;
      }
    }
    else {
LAB_00112815:
      if (param_1[0xa70] == (TreeItem)0x0) {
        TreeItem::set_visible(bVar19);
      }
      else {
        TreeItem::set_visible(bVar19);
      }
      if (cVar4 != '\0') goto LAB_00112e9f;
      if (cVar6 != '\0') goto LAB_00112856;
joined_r0x0011317a:
      if (pTVar9 == pTVar16) goto LAB_001130d6;
    }
    cVar4 = '\0';
  }
  else {
    TreeItem::get_metadata((int)local_88);
    Variant::operator_cast_to_NodePath((Variant *)local_d8);
    pSVar14 = (StringName *)Node::get_node((NodePath *)param_1);
    NodePath::~NodePath((NodePath *)local_d8);
    if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar6 = TreeItem::is_visible();
    if ((((cVar6 == '\0') ||
         ((pTVar9 == pTVar16 && (cVar6 = Tree::is_root_hidden(), cVar6 != '\0')))) &&
        (NodeCache::get((Node *)local_d8,(bool)((char)param_1 + -0x30)),
        local_d8[0] != (Variant *)0x0)) && (local_d8[0][0x2d] != (Variant)0x0)) {
      _update_node_subtree
                ((SceneTreeEditor *)param_1,*(Node **)(local_d8[0] + 0x18),(TreeItem *)0x0,true);
    }
    if (*(long *)(param_1 + 0xb18) != 0) {
      CowData<StringName>::_copy_on_write((CowData<StringName> *)(param_1 + 0xb18));
      pSVar22 = *(StringName **)(param_1 + 0xb18);
      CowData<StringName>::_copy_on_write((CowData<StringName> *)(param_1 + 0xb18));
      pSVar15 = *(StringName **)(param_1 + 0xb18);
      if (pSVar15 != (StringName *)0x0) {
        pSVar15 = pSVar15 + *(long *)(pSVar15 + -8) * 8;
      }
      for (; pSVar22 != pSVar15; pSVar22 = pSVar22 + 8) {
        lVar10 = *(long *)pSVar22;
        pcVar2 = *(code **)(*(long *)pSVar14 + 0x58);
        if (lVar10 == 0) {
          local_d8[0] = (Variant *)0x0;
        }
        else {
          local_d8[0] = (Variant *)0x0;
          if (*(char **)(lVar10 + 8) == (char *)0x0) {
            if (*(long *)(lVar10 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_d8,(CowData *)(lVar10 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)local_d8,*(char **)(lVar10 + 8));
          }
        }
        cVar6 = (*pcVar2)(pSVar14,(CowData<char32_t> *)local_d8);
        if ((cVar6 != '\0') ||
           (cVar6 = EditorNode::is_object_of_custom_type(EditorNode::singleton,pSVar14),
           cVar6 != '\0')) {
          CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
          goto LAB_00112b86;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
        (**(code **)(*(long *)pSVar14 + 0x98))(local_88,pSVar14);
        local_e8 = (Variant *)0x0;
        lVar10 = Variant::get_validated_object();
        if ((lVar10 == 0) ||
           (pVVar18 = (Variant *)__dynamic_cast(lVar10,&Object::typeinfo,&Script::typeinfo,0),
           pVVar18 == (Variant *)0x0)) {
LAB_00112caa:
          if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        else {
          local_e8 = pVVar18;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_e8 = (Variant *)0x0;
            goto LAB_00112caa;
          }
          if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
            Variant::_clear_internal();
          }
          do {
            Resource::get_path();
            cVar6 = operator==((String *)local_d8,pSVar22);
            pVVar17 = local_d8[0];
            if (local_d8[0] != (Variant *)0x0) {
              LOCK();
              pVVar1 = local_d8[0] + -0x10;
              *(long *)pVVar1 = *(long *)pVVar1 + -1;
              UNLOCK();
              if (*(long *)pVVar1 == 0) {
                local_d8[0] = (Variant *)0x0;
                Memory::free_static(pVVar17 + -0x10,false);
              }
            }
            if (cVar6 != '\0') {
              Ref<Script>::unref((Ref<Script> *)&local_e8);
              goto LAB_00112b86;
            }
            (**(code **)(*(long *)pVVar18 + 0x1d8))((CowData<char32_t> *)local_d8);
            pVVar18 = local_e8;
            pVVar17 = local_e8;
            if (local_d8[0] != local_e8) {
              local_e8 = local_d8[0];
              if (local_d8[0] == (Variant *)0x0) {
                if (pVVar18 == (Variant *)0x0) break;
                cVar6 = RefCounted::unreference();
                pVVar17 = local_d8[0];
              }
              else {
                cVar6 = RefCounted::reference();
                if (cVar6 == '\0') {
                  local_e8 = (Variant *)0x0;
                }
                pVVar17 = local_d8[0];
                if (pVVar18 == (Variant *)0x0) goto LAB_00112db4;
                cVar6 = RefCounted::unreference();
                pVVar17 = local_d8[0];
              }
              local_d8[0] = pVVar17;
              if ((cVar6 != '\0') &&
                 (cVar6 = predelete_handler((Object *)pVVar18), pVVar17 = local_d8[0], cVar6 != '\0'
                 )) {
                (**(code **)(*(long *)pVVar18 + 0x140))(pVVar18);
                Memory::free_static(pVVar18,false);
                pVVar17 = local_d8[0];
              }
            }
LAB_00112db4:
            pVVar18 = local_e8;
            if (((pVVar17 != (Variant *)0x0) &&
                (cVar6 = RefCounted::unreference(), pVVar17 = local_d8[0], pVVar18 = local_e8,
                cVar6 != '\0')) &&
               (cVar6 = predelete_handler((Object *)local_d8[0]), pVVar18 = local_e8, cVar6 != '\0')
               ) {
              (**(code **)(*(long *)pVVar17 + 0x140))(pVVar17);
              Memory::free_static(pVVar17,false);
            }
          } while (pVVar18 != (Variant *)0x0);
        }
      }
      goto LAB_001127b9;
    }
LAB_00112b86:
    lVar10 = TreeItem::get_first_child();
    cVar6 = cVar4;
    if (lVar10 != 0) goto LAB_001127d0;
    cVar6 = '\0';
    if (pTVar9 != pTVar16) goto LAB_00112815;
LAB_00112e9f:
    local_b8 = (undefined1  [16])0x0;
    pcVar2 = *(code **)(*(long *)pTVar16 + 0xb8);
    Variant::Variant((Variant *)&local_a8,local_b8);
    if ((_update_filter(TreeItem*,bool)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar8 = __cxa_guard_acquire(&_update_filter(TreeItem*,bool)::{lambda()#1}::operator()()::
                                     sname), iVar8 != 0)) {
      _scs_create((char *)&_update_filter(TreeItem*,bool)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_update_filter(TreeItem*,bool)::{lambda()#1}::operator()()::sname,&__dso_handle)
      ;
      __cxa_guard_release(&_update_filter(TreeItem*,bool)::{lambda()#1}::operator()()::sname);
    }
    (*pcVar2)((Variant *)local_88,pTVar16,
              &_update_filter(TreeItem*,bool)::{lambda()#1}::operator()()::sname,
              (Variant *)&local_a8);
    local_c8 = Variant::operator_cast_to_Color((Variant *)local_88);
    local_c0 = in_XMM1_Qa;
    if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
    }
    if ((((float)local_c8 == 0.0) && (local_c8._4_4_ == 0.0)) &&
       (((float)local_c0 == 0.0 && (local_c0._4_4_ == 0.0)))) {
      TreeItem::clear_custom_color(iVar21);
    }
    else {
      TreeItem::set_custom_color(iVar21,(Color *)0x0);
    }
    cVar4 = '\x01';
    TreeItem::set_selectable(iVar21,false);
    if (pTVar9 == pTVar16) {
      uVar20 = (undefined1)*(undefined8 *)(param_1 + 0xa48);
      uVar7 = 1;
LAB_001130e7:
      cVar4 = (char)uVar7;
      Tree::set_hide_root((bool)uVar20);
      cVar6 = Tree::is_root_hidden();
      if (cVar6 != '\0') {
        TreeItem::set_collapsed(bVar19);
      }
    }
  }
  if (*(long *)(param_1 + 0x9c8) != 0) {
    TreeItem::get_metadata((int)(Variant *)local_88);
    Variant::operator_cast_to_NodePath((Variant *)local_d8);
    lVar10 = Node::get_node((NodePath *)param_1);
    NodePath::~NodePath((NodePath *)local_d8);
    if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (cVar4 == '\0') {
      if ((lVar10 != 0) && (cVar4 = TreeItem::is_selected(iVar21), cVar4 != '\0')) {
        EditorSelection::remove_node(*(Node **)(param_1 + 0x9c8));
        TreeItem::deselect(iVar21);
      }
    }
    else if (((lVar10 != 0) && (in_DL != '\0')) &&
            (cVar4 = EditorSelection::is_selected(*(Node **)(param_1 + 0x9c8)), cVar4 != '\0')) {
      lVar10 = *(long *)(param_1 + 0xa48);
      this = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this);
      *(long *)(this + 0x28) = lVar10;
      *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)this = &PTR_hash_0012d430;
      *(undefined8 *)(this + 0x40) = 0;
      uVar3 = *(undefined8 *)(lVar10 + 0x60);
      *(undefined8 *)(this + 0x10) = 0;
      *(undefined8 *)(this + 0x30) = uVar3;
      *(undefined **)(this + 0x20) = &_LC58;
      *(code **)(this + 0x38) = Tree::scroll_to_item;
      CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
      *(char **)(this + 0x20) = "Tree::scroll_to_item";
      Callable::Callable((Callable *)local_d8,this);
      Variant::Variant((Variant *)local_88,(Object *)pTVar16);
      Variant::Variant(local_70,false);
      Variant::Variant(local_58,0);
      pVVar18 = (Variant *)local_40;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = local_70;
      Callable::call_deferredp(local_d8,(int)&local_a8);
      do {
        pVVar17 = pVVar18 + -0x18;
        pVVar18 = pVVar18 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar17] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar18 != (Variant *)local_88);
      Callable::~Callable((Callable *)local_d8);
    }
  }
  uVar7 = TreeItem::is_visible();
LAB_0011306b:
  CowData<String>::_unref(local_f0);
LAB_00112bf8:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar7;
LAB_001128aa:
  pTVar11 = (TreeItem *)TreeItem::get_parent();
  if (pTVar11 == (TreeItem *)0x0) goto LAB_0011326d;
  goto LAB_001128be;
}



/* SceneTreeEditor::set_filter(String const&) */

void __thiscall SceneTreeEditor::set_filter(SceneTreeEditor *this,String *param_1)

{
  if (*(long *)(this + 0xa60) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xa60),(CowData *)param_1);
  }
  _update_filter((TreeItem *)this,false);
  return;
}



/* SceneTreeEditor::set_show_all_nodes(bool) */

void __thiscall SceneTreeEditor::set_show_all_nodes(SceneTreeEditor *this,bool param_1)

{
  this[0xa70] = (SceneTreeEditor)param_1;
  _update_filter((TreeItem *)this,false);
  return;
}



/* SceneTreeDialog::_show_all_nodes_changed(bool) */

void __thiscall SceneTreeDialog::_show_all_nodes_changed(SceneTreeDialog *this,bool param_1)

{
  long *plVar1;
  TreeItem *pTVar2;
  long lVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  undefined8 local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  pSVar4 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,param_1);
  local_68 = "show_all_nodes_for_node_selection";
  local_70 = 0;
  local_60 = 0x21;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "editor_metadata";
  local_78 = 0;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  EditorSettings::set_project_metadata(pSVar4,(String *)&local_78,(Variant *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
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
  pTVar2 = *(TreeItem **)(this + 0xdc0);
  pTVar2[0xa70] = (TreeItem)param_1;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    SceneTreeEditor::_update_filter(pTVar2,false);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeDialog::_filter_changed(String const&) */

void __thiscall SceneTreeDialog::_filter_changed(SceneTreeDialog *this,String *param_1)

{
  TreeItem *pTVar1;
  
  pTVar1 = *(TreeItem **)(this + 0xdc0);
  if (*(long *)(pTVar1 + 0xa60) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(pTVar1 + 0xa60),(CowData *)param_1);
  }
  SceneTreeEditor::_update_filter(pTVar1,false);
  return;
}



/* SceneTreeEditor::_update_tree(bool) [clone .part.0] */

void SceneTreeEditor::_update_tree(bool param_1)

{
  char cVar1;
  SceneTreeEditor SVar2;
  long lVar3;
  Node *pNVar4;
  undefined7 in_register_00000039;
  SceneTreeEditor *this;
  NodeCache *this_00;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  this = (SceneTreeEditor *)CONCAT71(in_register_00000039,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = get_scene_node(this);
  if (lVar3 != *(long *)(this + 0xa30)) {
    Timer::stop();
    Tree::clear();
    NodeCache::clear((NodeCache *)(this + 0x9d0));
    if ((*(long *)(this + 0xac8) != 0) && (*(int *)(this + 0xaec) != 0)) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xae8) * 4) != 0) {
        memset(*(void **)(this + 0xae0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xae8) * 4) << 2);
      }
      *(undefined4 *)(this + 0xaec) = 0;
    }
    *(long *)(this + 0xa30) = lVar3;
    this[0xa41] = (SceneTreeEditor)0x1;
  }
  if (this[0xaac] == (SceneTreeEditor)0x0) {
    cVar1 = CanvasItem::is_visible_in_tree();
    if (cVar1 != '\0') goto LAB_00113755;
  }
  else {
LAB_00113755:
    cVar1 = Tree::is_editing();
    if (cVar1 == '\0') {
      this[0xac2] = (SceneTreeEditor)0x1;
      *(undefined8 *)(this + 0xab8) = 0x2b5a5;
      if (*(long *)(this + 0xa30) != 0) {
        pNVar4 = (Node *)AnimationPlayerEditor::get_editing_node();
        SVar2 = (SceneTreeEditor)BaseButton::is_pressed();
        if (SVar2 != this[0xa40]) {
          SVar2 = (SceneTreeEditor)BaseButton::is_pressed();
          this[0xa40] = SVar2;
          NodeCache::get((Node *)&local_38,SUB81((NodeCache *)(this + 0x9d0),0));
          if (local_38 != 0) {
            NodeCache::mark_dirty((NodeCache *)(this + 0x9d0),pNVar4,true);
          }
        }
        this_00 = (NodeCache *)(this + 0x9d0);
        if (pNVar4 != *(Node **)(this + 0xa38)) {
          NodeCache::get((Node *)&local_38,SUB81(this_00,0));
          if (local_38 != 0) {
            NodeCache::mark_dirty(this_00,pNVar4,true);
          }
          NodeCache::get((Node *)&local_38,SUB81(this_00,0));
          if (local_38 != 0) {
            NodeCache::mark_dirty(this_00,*(Node **)(this + 0xa38),true);
          }
          *(Node **)(this + 0xa38) = pNVar4;
        }
        SVar2 = this[0xa41];
        pNVar4 = (Node *)get_scene_node(this);
        _update_node_subtree(this,pNVar4,(TreeItem *)0x0,(bool)SVar2);
        pNVar4 = (Node *)get_scene_node(this);
        _compute_hash(this,pNVar4,(ulong *)(this + 0xab8));
        NodeCache::delete_pending(this_00);
      }
      this[0xac2] = (SceneTreeEditor)0x0;
      this[0xaf3] = (SceneTreeEditor)0x0;
      this[0xa41] = (SceneTreeEditor)0x0;
      String::strip_edges(SUB81(&local_38,0),(bool)(param_1 + '`'));
      if (((local_38 != 0) && (1 < *(uint *)(local_38 + -8))) ||
         (this[0xa70] == (SceneTreeEditor)0x0)) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
          _update_filter((TreeItem *)this,false);
          return;
        }
        goto LAB_00113960;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00113960:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_update_tree(bool) */

void SceneTreeEditor::_update_tree(bool param_1)

{
  undefined7 in_register_00000039;
  
  if ((*(byte *)(CONCAT71(in_register_00000039,param_1) + 0x2fa) & 0x40) == 0) {
    *(undefined1 *)(CONCAT71(in_register_00000039,param_1) + 0xaf3) = 0;
    return;
  }
  _update_tree(param_1);
  return;
}



/* SceneTreeEditor::_notification(int) */

void __thiscall SceneTreeEditor::_notification(SceneTreeEditor *this,int param_1)

{
  long *plVar1;
  code *pcVar2;
  StringName *pSVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  TreeItem *pTVar7;
  long lVar8;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  bool bVar9;
  long local_90;
  long local_88 [2];
  int *local_78 [2];
  int local_68 [6];
  int local_50 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1f) {
    cVar5 = CanvasItem::is_visible();
    if (cVar5 != '\0') {
      if ((*(long *)(this + 0xa50) == 0) &&
         ((*(int *)(this + 0xaec) != 1 || (**(long **)(this + 0xac8) == 0)))) {
        bVar9 = false;
        if (this[0xaac] == (SceneTreeEditor)0x0) goto LAB_0011430b;
      }
      else {
        Node::get_path();
        pTVar7 = (TreeItem *)Tree::get_root();
        lVar8 = _find(this,pTVar7,(NodePath *)local_88);
        NodePath::~NodePath((NodePath *)local_88);
        if (this[0xaac] == (SceneTreeEditor)0x0) {
          bVar9 = lVar8 != 0;
LAB_0011430b:
          create_custom_callable_function_pointer<SceneTreeEditor,bool>
                    ((SceneTreeEditor *)local_88,(char *)this,
                     (_func_void_bool *)"&SceneTreeEditor::_update_tree");
          Variant::Variant((Variant *)local_68,bVar9);
        }
        else {
          if (lVar8 == 0) goto LAB_00113cf9;
          lVar8 = *(long *)(lVar8 + 0x60);
          this_00 = (CallableCustom *)operator_new(0x48,"");
          CallableCustom::CallableCustom(this_00);
          *(SceneTreeEditor **)(this_00 + 0x28) = this;
          *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
          *(undefined ***)this_00 = &PTR_hash_0012d5e0;
          *(undefined8 *)(this_00 + 0x40) = 0;
          uVar4 = *(undefined8 *)(this + 0x60);
          *(undefined8 *)(this_00 + 0x10) = 0;
          *(undefined8 *)(this_00 + 0x30) = uVar4;
          *(code **)(this_00 + 0x38) = _tree_scroll_to_item;
          *(undefined **)(this_00 + 0x20) = &_LC58;
          CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
          *(char **)(this_00 + 0x20) = "SceneTreeEditor::_tree_scroll_to_item";
          Callable::Callable((Callable *)local_88,this_00);
          local_90 = lVar8;
          Variant::Variant((Variant *)local_68,(ObjectID *)&local_90);
        }
        Variant::Variant((Variant *)local_50,0);
        local_78[0] = local_68;
        Callable::call_deferredp((Variant **)local_88,(int)local_78);
        if (Variant::needs_deinit[local_50[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_68[0]] != '\0') {
          Variant::_clear_internal();
        }
        Callable::~Callable((Callable *)local_88);
      }
    }
  }
  else if (param_1 < 0x20) {
    if (param_1 == 10) {
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) {
SceneTreeEditor__notification:
        _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0
                         ,0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<SceneTreeEditor>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void *)"&SceneTreeEditor::_tree_changed");
      StringName::StringName((StringName *)&local_90,"tree_changed",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88,0);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<SceneTreeEditor>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void *)"&SceneTreeEditor::_tree_process_mode_changed");
      StringName::StringName((StringName *)&local_90,"tree_process_mode_changed",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88,0);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<SceneTreeEditor,Node*>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void_Node_ptr *)"&SceneTreeEditor::_node_added");
      StringName::StringName((StringName *)&local_90,"node_added",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88,0);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<SceneTreeEditor,Node*>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void_Node_ptr *)"&SceneTreeEditor::_node_removed");
      StringName::StringName((StringName *)&local_90,"node_removed",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88,0);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<SceneTreeEditor,Node*>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void_Node_ptr *)"&SceneTreeEditor::_node_renamed");
      StringName::StringName((StringName *)&local_90,"node_renamed",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88,0);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<SceneTreeEditor,Node*>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void_Node_ptr *)"&SceneTreeEditor::_warning_changed");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x80,(SceneTreeEditor *)local_88,0);
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0xa48);
      pcVar2 = *(code **)(*plVar1 + 0x108);
      create_custom_callable_function_pointer<SceneTreeEditor,Object*>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void_Object_ptr *)"&SceneTreeEditor::_cell_collapsed");
      StringName::StringName((StringName *)&local_90,"item_collapsed",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88,0);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      if (((byte)this[0x2fa] & 0x40) == 0) goto LAB_00113dc6;
LAB_00114108:
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_tree(SUB81(this,0));
        return;
      }
      goto LAB_0011438f;
    }
    if (param_1 == 0xb) {
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<SceneTreeEditor>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void *)"&SceneTreeEditor::_tree_changed");
      StringName::StringName((StringName *)&local_90,"tree_changed",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<SceneTreeEditor>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void *)"&SceneTreeEditor::_tree_process_mode_changed");
      StringName::StringName((StringName *)&local_90,"tree_process_mode_changed",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<SceneTreeEditor,Node*>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void_Node_ptr *)"&SceneTreeEditor::_node_added");
      StringName::StringName((StringName *)&local_90,"node_added",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<SceneTreeEditor,Node*>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void_Node_ptr *)"&SceneTreeEditor::_node_removed");
      StringName::StringName((StringName *)&local_90,"node_removed",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<SceneTreeEditor,Node*>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void_Node_ptr *)"&SceneTreeEditor::_node_renamed");
      StringName::StringName((StringName *)&local_90,"node_renamed",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0xa48);
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<SceneTreeEditor,Object*>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void_Object_ptr *)"&SceneTreeEditor::_cell_collapsed");
      StringName::StringName((StringName *)&local_90,"item_collapsed",false);
      (*pcVar2)(plVar1,(StringName *)&local_90,(SceneTreeEditor *)local_88);
      if ((StringName::configured != '\0') && (local_90 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_88);
      plVar1 = *(long **)(this + 0x240);
      if (plVar1 == (long *)0x0) goto SceneTreeEditor__notification;
      pcVar2 = *(code **)(*plVar1 + 0x110);
      create_custom_callable_function_pointer<SceneTreeEditor,Node*>
                ((SceneTreeEditor *)local_88,(char *)this,
                 (_func_void_Node_ptr *)"&SceneTreeEditor::_warning_changed");
      (*pcVar2)(plVar1,SceneStringNames::singleton + 0x80,(SceneTreeEditor *)local_88);
      Callable::~Callable((Callable *)local_88);
    }
  }
  else if (param_1 == 0x2d) {
    pSVar3 = *(StringName **)(this + 0xa48);
    if ((_notification(int)::{lambda()#1}::operator()()::sname == '\0') &&
       (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname),
       iVar6 != 0)) {
      _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_theme_constant
              ((StringName *)this,
               (StringName *)&_notification(int)::{lambda()#1}::operator()()::sname);
    StringName::StringName((StringName *)local_88,"icon_max_width",false);
    Control::add_theme_constant_override(pSVar3,(int)(StringName *)local_88);
    if ((StringName::configured != '\0') && (local_88[0] != 0)) {
      StringName::unref();
    }
    Timer::stop();
    Tree::clear();
    NodeCache::clear((NodeCache *)(this + 0x9d0));
    if (((byte)this[0x2fa] & 0x40) != 0) goto LAB_00114108;
LAB_00113dc6:
    this[0xaf3] = (SceneTreeEditor)0x0;
  }
LAB_00113cf9:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011438f:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::set_selected(Node*, bool) */

void __thiscall SceneTreeEditor::set_selected(SceneTreeEditor *this,Node *param_1,bool param_2)

{
  char cVar1;
  int iVar2;
  TreeItem *pTVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  NodePath local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (0 < *(int *)(this + 0xab0)) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("set_selected","editor/gui/scene_tree_editor.cpp",0x56a,
                       "Condition \"blocked > 0\" is true.",0,0);
      return;
    }
    goto LAB_00114659;
  }
  if (this[0xaf4] != (SceneTreeEditor)0x0) {
    _test_update_tree(this);
  }
  if (this[0xaf3] != (SceneTreeEditor)0x0) {
    if (((byte)this[0x2fa] & 0x40) == 0) {
      this[0xaf3] = (SceneTreeEditor)0x0;
    }
    else {
      _update_tree(SUB81(this,0));
    }
  }
  if (*(Node **)(this + 0xa50) != param_1) {
    if (param_1 == (Node *)0x0) {
LAB_001144e8:
      *(Node **)(this + 0xa50) = param_1;
    }
    else {
      Node::get_path();
      pTVar3 = (TreeItem *)Tree::get_root();
      lVar4 = _find(this,pTVar3,local_50);
      NodePath::~NodePath(local_50);
      if (lVar4 == 0) goto LAB_001144e8;
      *(Node **)(this + 0xa50) = param_1;
      lVar5 = lVar4;
      if (this[0xaa8] == (SceneTreeEditor)0x0) {
        do {
          lVar6 = Tree::get_root();
          if (lVar5 == lVar6) break;
          cVar1 = TreeItem::is_collapsed();
          if (cVar1 != '\0') goto joined_r0x001144f2;
          lVar5 = TreeItem::get_parent();
        } while (lVar5 != 0);
      }
      else {
        lVar5 = TreeItem::get_parent();
        while ((lVar5 != 0 && (lVar6 = Tree::get_root(), lVar5 != lVar6))) {
          TreeItem::set_collapsed(SUB81(lVar5,0));
          lVar5 = TreeItem::get_parent();
        }
      }
      TreeItem::select((int)lVar4);
      TreeItem::set_as_cursor((int)lVar4);
      Tree::ensure_cursor_is_visible();
    }
joined_r0x001144f2:
    if (param_2) {
      if ((set_selected(Node*,bool)::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar2 = __cxa_guard_acquire(&set_selected(Node*,bool)::{lambda()#1}::operator()()::sname),
         iVar2 != 0)) {
        _scs_create((char *)&set_selected(Node*,bool)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &set_selected(Node*,bool)::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&set_selected(Node*,bool)::{lambda()#1}::operator()()::sname);
      }
      local_48 = 0;
      local_40 = (undefined1  [16])0x0;
      (**(code **)(*(long *)this + 0xd0))
                (this,&set_selected(Node*,bool)::{lambda()#1}::operator()()::sname,0,0);
      if (Variant::needs_deinit[(int)local_48] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00114659:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeDialog::SceneTreeDialog() */

void __thiscall SceneTreeDialog::SceneTreeDialog(SceneTreeDialog *this)

{
  undefined8 uVar1;
  StringName *pSVar2;
  long *plVar3;
  code *pcVar4;
  BoxContainer *pBVar5;
  LineEdit *this_00;
  CallableCustom *pCVar6;
  CheckButton *this_01;
  SceneTreeEditor *this_02;
  String *pSVar7;
  long in_FS_OFFSET;
  undefined8 local_98;
  long local_90;
  char *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined ***)this = &PTR__initialize_classv_0012d008;
  *(undefined8 *)(this + 0xdd8) = 0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde0) = (undefined1  [16])0x0;
  local_90 = 0;
  local_88 = "";
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "Select a Node";
  local_98 = 0;
  local_80 = 0xd;
  String::parse_latin1((StrRange *)&local_98);
  TTR((String *)&local_88,(String *)&local_98);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  pBVar5 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar5,true);
  pBVar5[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar5 = &PTR__initialize_classv_0012c338;
  postinitialize_handler((Object *)pBVar5);
  *(BoxContainer **)(this + 0xdb8) = pBVar5;
  Node::add_child(this,pBVar5,0,0);
  pBVar5 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar5,false);
  pBVar5[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar5 = &PTR__initialize_classv_0012bfc0;
  postinitialize_handler((Object *)pBVar5);
  Node::add_child(*(undefined8 *)(this + 0xdb8),pBVar5,0,0);
  this_00 = (LineEdit *)operator_new(0xbb0,"");
  local_88 = (char *)0x0;
  LineEdit::LineEdit(this_00,(String *)&local_88);
  postinitialize_handler((Object *)this_00);
  *(LineEdit **)(this + 0xdc8) = this_00;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdc8),3);
  local_88 = "";
  local_90 = 0;
  uVar1 = *(undefined8 *)(this + 0xdc8);
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "Filter Nodes";
  local_98 = 0;
  local_80 = 0xc;
  String::parse_latin1((StrRange *)&local_98);
  TTR((String *)&local_88,(String *)&local_98);
  LineEdit::set_placeholder(uVar1,(String *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xdc8),0));
  pSVar2 = *(StringName **)(this + 0xdc8);
  StringName::StringName((StringName *)&local_88,"minimum_character_width",false);
  Control::add_theme_constant_override(pSVar2,(int)(String *)&local_88);
  if ((StringName::configured != '\0') && (local_88 != (char *)0x0)) {
    StringName::unref();
  }
  plVar3 = *(long **)(this + 0xdc8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar6 = &PTR_hash_0012daf0;
  *(undefined **)(pCVar6 + 0x20) = &_LC58;
  *(undefined8 *)(pCVar6 + 0x30) = uVar1;
  *(code **)(pCVar6 + 0x38) = _filter_changed;
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(SceneTreeDialog **)(pCVar6 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "SceneTreeDialog::_filter_changed";
  Callable::Callable((Callable *)&local_88,pCVar6);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x270,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  plVar3 = *(long **)(this + 0xdc8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar6 = &PTR_hash_0012db80;
  *(undefined **)(pCVar6 + 0x20) = &_LC58;
  *(undefined8 *)(pCVar6 + 0x30) = uVar1;
  *(code **)(pCVar6 + 0x38) = _on_filter_gui_input;
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(SceneTreeDialog **)(pCVar6 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "SceneTreeDialog::_on_filter_gui_input";
  Callable::Callable((Callable *)&local_88,pCVar6);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x28,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  AcceptDialog::register_text_enter((LineEdit *)this);
  Node::add_child(pBVar5,*(undefined8 *)(this + 0xdc8),0,0);
  this_01 = (CheckButton *)operator_new(0xc60,"");
  local_88 = (char *)0x0;
  CheckButton::CheckButton(this_01,(String *)&local_88);
  postinitialize_handler((Object *)this_01);
  *(CheckButton **)(this + 0xdd0) = this_01;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  local_88 = "";
  local_90 = 0;
  pSVar7 = *(String **)(this + 0xdd0);
  local_80 = 0;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "Show All";
  local_98 = 0;
  local_80 = 8;
  String::parse_latin1((StrRange *)&local_98);
  TTR((String *)&local_88,(String *)&local_98);
  Button::set_text(pSVar7);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  plVar3 = *(long **)(this + 0xdd0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar6 = &PTR_hash_0012dc10;
  *(code **)(pCVar6 + 0x38) = _show_all_nodes_changed;
  *(undefined **)(pCVar6 + 0x20) = &_LC58;
  *(undefined8 *)(pCVar6 + 0x30) = uVar1;
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(SceneTreeDialog **)(pCVar6 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "SceneTreeDialog::_show_all_nodes_changed";
  Callable::Callable((Callable *)&local_88,pCVar6);
  (*pcVar4)(plVar3,SceneStringNames::singleton + 0x248,(String *)&local_88,0);
  Callable::~Callable((Callable *)&local_88);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdd0),0);
  CanvasItem::hide();
  Node::add_child(pBVar5,*(undefined8 *)(this + 0xdd0),0,0);
  this_02 = (SceneTreeEditor *)operator_new(0xb20,"");
  SceneTreeEditor::SceneTreeEditor(this_02,false,false,true);
  postinitialize_handler((Object *)this_02);
  *(SceneTreeEditor **)(this + 0xdc0) = this_02;
  this_02[0xaac] = (SceneTreeEditor)0x0;
  if (((byte)this_02[0x2fa] & 0x40) == 0) {
    this_02[0xaf3] = (SceneTreeEditor)0x0;
  }
  else {
    SceneTreeEditor::_update_tree(SUB81(this_02,0));
    this_02 = *(SceneTreeEditor **)(this + 0xdc0);
  }
  Control::set_v_size_flags(this_02,3);
  plVar3 = *(long **)(*(long *)(this + 0xdc0) + 0xa48);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<SceneTreeDialog>
            ((SceneTreeDialog *)&local_88,(char *)this,(_func_void *)"&SceneTreeDialog::_select");
  StringName::StringName((StringName *)&local_90,"item_activated",false);
  (*pcVar4)(plVar3,(StrRange *)&local_90,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  uVar1 = *(undefined8 *)(this + 0xdd0);
  pSVar7 = (String *)EditorSettings::get_singleton();
  Variant::Variant((Variant *)local_58,false);
  local_88 = "show_all_nodes_for_node_selection";
  local_90 = 0;
  local_80 = 0x21;
  String::parse_latin1((StrRange *)&local_90);
  local_88 = "editor_metadata";
  local_98 = 0;
  local_80 = 0xf;
  String::parse_latin1((StrRange *)&local_98);
  EditorSettings::get_project_metadata((String *)local_78,pSVar7,(Variant *)&local_98);
  Variant::operator_cast_to_bool((Variant *)local_78);
  BaseButton::set_pressed(SUB81(uVar1,0));
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Node::add_child(*(undefined8 *)(this + 0xdb8),*(undefined8 *)(this + 0xdc0),0,0);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
  plVar3 = *(long **)(this + 0xdc0);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  create_custom_callable_function_pointer<SceneTreeDialog>
            ((SceneTreeDialog *)&local_88,(char *)this,
             (_func_void *)"&SceneTreeDialog::_selected_changed");
  StringName::StringName((StringName *)&local_90,"node_selected",false);
  (*pcVar4)(plVar3,(StrRange *)&local_90,(String *)&local_88,0);
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::set_display_foreign_nodes(bool) */

void __thiscall SceneTreeEditor::set_display_foreign_nodes(SceneTreeEditor *this,bool param_1)

{
  this[0xaf2] = (SceneTreeEditor)param_1;
  if (((byte)this[0x2fa] & 0x40) == 0) {
    this[0xaf3] = (SceneTreeEditor)0x0;
    return;
  }
  _update_tree(SUB81(this,0));
  return;
}



/* SceneTreeEditor::set_connect_to_script_mode(bool) */

void __thiscall SceneTreeEditor::set_connect_to_script_mode(SceneTreeEditor *this,bool param_1)

{
  this[0xaaa] = (SceneTreeEditor)param_1;
  if (((byte)this[0x2fa] & 0x40) == 0) {
    this[0xaf3] = (SceneTreeEditor)0x0;
    return;
  }
  _update_tree(SUB81(this,0));
  return;
}



/* SceneTreeEditor::set_connecting_signal(bool) */

void __thiscall SceneTreeEditor::set_connecting_signal(SceneTreeEditor *this,bool param_1)

{
  this[0xaab] = (SceneTreeEditor)param_1;
  if (((byte)this[0x2fa] & 0x40) == 0) {
    this[0xaf3] = (SceneTreeEditor)0x0;
    return;
  }
  _update_tree(SUB81(this,0));
  return;
}



/* SceneTreeEditor::set_hide_filtered_out_parents(bool, bool) */

void __thiscall
SceneTreeEditor::set_hide_filtered_out_parents(SceneTreeEditor *this,bool param_1,bool param_2)

{
  StringName *pSVar1;
  long in_FS_OFFSET;
  long local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (this[0xaa9] != (SceneTreeEditor)param_1) {
    if (param_2) {
      pSVar1 = (StringName *)EditorSettings::get_singleton();
      Variant::Variant((Variant *)local_48,param_1);
      StringName::StringName
                ((StringName *)&local_50,"docks/scene_tree/hide_filtered_out_parents",false);
      Object::set(pSVar1,(Variant *)&local_50,(bool *)local_48);
      if ((StringName::configured != '\0') && (local_50 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
    this[0xaa9] = (SceneTreeEditor)param_1;
    if (param_1) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_filter((TreeItem *)this,false);
        return;
      }
      goto LAB_0011514b;
    }
    this[0xa41] = (SceneTreeEditor)0x1;
    if (((byte)this[0x2fa] & 0x40) != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_tree(SUB81(this,0));
        return;
      }
      goto LAB_0011514b;
    }
    this[0xaf3] = (SceneTreeEditor)0x0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011514b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::set_update_when_invisible(bool) */

void __thiscall SceneTreeEditor::set_update_when_invisible(SceneTreeEditor *this,bool param_1)

{
  this[0xaac] = (SceneTreeEditor)param_1;
  if (((byte)this[0x2fa] & 0x40) == 0) {
    this[0xaf3] = (SceneTreeEditor)0x0;
    return;
  }
  _update_tree(SUB81(this,0));
  return;
}



/* SceneTreeEditor::set_marked(HashSet<Node*, HashMapHasherDefault, HashMapComparatorDefault<Node*>
   > const&, bool, bool) */

void __thiscall
SceneTreeEditor::set_marked(SceneTreeEditor *this,HashSet *param_1,bool param_2,bool param_3)

{
  ulong uVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  if (this[0xaf3] == (SceneTreeEditor)0x0) {
    _update_if_clean(this);
  }
  _update_marking_list(this,(HashSet *)(this + 0xac8));
  _update_marking_list(this,param_1);
  if ((HashSet *)(this + 0xac8) != param_1) {
    pvVar3 = *(void **)(this + 0xac8);
    if (pvVar3 != (void *)0x0) {
      if (*(int *)(this + 0xaec) != 0) {
        if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xae8) * 4) != 0) {
          memset(*(void **)(this + 0xae0),0,
                 (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xae8) * 4) << 2)
          ;
        }
        *(undefined4 *)(this + 0xaec) = 0;
      }
      Memory::free_static(pvVar3,false);
      Memory::free_static(*(void **)(this + 0xad8),false);
      Memory::free_static(*(void **)(this + 0xad0),false);
      Memory::free_static(*(void **)(this + 0xae0),false);
      *(undefined1 (*) [16])(this + 0xac8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(this + 0xad8) = (undefined1  [16])0x0;
    }
    uVar1 = *(ulong *)(param_1 + 0x20);
    *(ulong *)(this + 0xae8) = uVar1;
    if ((int)(uVar1 >> 0x20) != 0) {
      uVar2 = *(uint *)(hash_table_size_primes + (uVar1 & 0xffffffff) * 4);
      uVar1 = (ulong)uVar2 * 4;
      uVar8 = Memory::alloc_static(uVar1,false);
      *(undefined8 *)(this + 0xae0) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar2 * 8,false);
      *(undefined8 *)(this + 0xac8) = uVar8;
      uVar8 = Memory::alloc_static(uVar1,false);
      *(undefined8 *)(this + 0xad8) = uVar8;
      lVar9 = Memory::alloc_static(uVar1,false);
      *(long *)(this + 0xad0) = lVar9;
      if (*(int *)(this + 0xaec) != 0) {
        lVar4 = *(long *)(this + 0xac8);
        lVar5 = *(long *)param_1;
        lVar10 = 0;
        lVar6 = *(long *)(param_1 + 0x10);
        lVar7 = *(long *)(this + 0xad8);
        do {
          *(undefined8 *)(lVar4 + lVar10 * 8) = *(undefined8 *)(lVar5 + lVar10 * 8);
          *(undefined4 *)(lVar7 + lVar10 * 4) = *(undefined4 *)(lVar6 + lVar10 * 4);
          lVar10 = lVar10 + 1;
        } while ((uint)lVar10 < *(uint *)(this + 0xaec));
      }
      if (uVar2 != 0) {
        lVar4 = *(long *)(param_1 + 0x18);
        lVar5 = *(long *)(this + 0xae0);
        uVar11 = 0;
        lVar6 = *(long *)(param_1 + 8);
        do {
          *(undefined4 *)(lVar5 + uVar11) = *(undefined4 *)(lVar4 + uVar11);
          *(undefined4 *)(lVar9 + uVar11) = *(undefined4 *)(lVar6 + uVar11);
          uVar11 = uVar11 + 4;
        } while (uVar11 != uVar1);
      }
    }
  }
  this[0xaf0] = (SceneTreeEditor)param_2;
  this[0xaf1] = (SceneTreeEditor)param_3;
  if (((byte)this[0x2fa] & 0x40) != 0) {
    _update_tree(SUB81(this,0));
    return;
  }
  this[0xaf3] = (SceneTreeEditor)0x0;
  return;
}



/* SceneTreeEditor::set_marked(Node*, bool, bool) */

void __thiscall
SceneTreeEditor::set_marked(SceneTreeEditor *this,Node *param_1,bool param_2,bool param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  Node *local_68 [2];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (undefined1  [16])0x0;
  local_38 = 2;
  local_48 = (undefined1  [16])0x0;
  if (param_1 == (Node *)0x0) {
    set_marked(this,(HashSet *)local_58,param_2,param_3);
  }
  else {
    HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>::insert(local_68);
    uVar1 = local_58._0_8_;
    set_marked(this,(HashSet *)local_58,param_2,param_3);
    if ((void *)uVar1 != (void *)0x0) {
      uVar2 = local_48._8_8_;
      if ((local_38._4_4_ != 0) &&
         (*(uint *)(hash_table_size_primes + (local_38 & 0xffffffff) * 4) != 0)) {
        memset((void *)local_48._8_8_,0,
               (ulong)*(uint *)(hash_table_size_primes + (local_38 & 0xffffffff) * 4) << 2);
      }
      Memory::free_static((void *)uVar1,false);
      Memory::free_static((void *)local_48._0_8_,false);
      Memory::free_static((void *)local_58._8_8_,false);
      Memory::free_static((void *)uVar2,false);
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeDialog::popup_scenetree_dialog(Node*, Node*, bool, bool) */

void __thiscall
SceneTreeDialog::popup_scenetree_dialog
          (SceneTreeDialog *this,Node *param_1,Node *param_2,bool param_3,bool param_4)

{
  long in_FS_OFFSET;
  float fVar1;
  undefined8 local_30;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  SceneTreeEditor::set_marked(*(SceneTreeEditor **)(this + 0xdc0),param_2,param_3,param_4);
  SceneTreeEditor::set_selected(*(SceneTreeEditor **)(this + 0xdc0),param_1,true);
  fVar1 = (float)EditorScale::get_scale();
  local_30 = CONCAT44(fVar1 * _LC310._4_4_,fVar1 * (float)_LC310);
  local_28 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_30);
  Window::popup_centered_clamped((Vector2i *)this,_LC66);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeDialog::_notification(int) */

void __thiscall SceneTreeDialog::_notification(SceneTreeDialog *this,int param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  CallableCustom *this_00;
  long in_FS_OFFSET;
  SceneTreeDialog aSStack_48 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1e) {
    cVar4 = Window::is_visible();
    if (cVar4 != '\0') {
      lVar2 = *(long *)(this + 0xdc0);
      if ((*(byte *)(lVar2 + 0x2fa) & 0x40) == 0) {
        *(undefined1 *)(lVar2 + 0xaf3) = 0;
      }
      else {
        SceneTreeEditor::_update_tree(SUB81(lVar2,0));
      }
      lVar2 = *(long *)(this + 0xdc8);
      this_00 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this_00);
      *(long *)(this_00 + 0x28) = lVar2;
      *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)this_00 = &PTR_hash_0012d9d0;
      *(undefined8 *)(this_00 + 0x40) = 0;
      uVar3 = *(undefined8 *)(lVar2 + 0x60);
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x30) = uVar3;
      *(undefined **)(this_00 + 0x20) = &_LC58;
      *(code **)(this_00 + 0x38) = Control::grab_focus;
      CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
      *(char **)(this_00 + 0x20) = "Control::grab_focus";
      Callable::Callable((Callable *)aSStack_48,this_00);
      Variant::Variant((Variant *)local_38,0);
      Callable::call_deferredp((Variant **)aSStack_48,0);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
        Variant::_clear_internal();
      }
LAB_00115608:
      Callable::~Callable((Callable *)aSStack_48);
    }
  }
  else if (param_1 < 0x1f) {
    if (param_1 == 10) {
      pcVar1 = *(code **)(*(long *)this + 0x108);
      create_custom_callable_function_pointer<SceneTreeDialog>
                (aSStack_48,(char *)this,(_func_void *)"&SceneTreeDialog::_select");
      (*pcVar1)(this,SceneStringNames::singleton + 0x268,aSStack_48,0);
      Callable::~Callable((Callable *)aSStack_48);
    }
    else if (param_1 == 0xb) {
      pcVar1 = *(code **)(*(long *)this + 0x110);
      create_custom_callable_function_pointer<SceneTreeDialog>
                (aSStack_48,(char *)this,(_func_void *)"&SceneTreeDialog::_select");
      (*pcVar1)(this,SceneStringNames::singleton + 0x268,aSStack_48);
      goto LAB_00115608;
    }
  }
  else if (param_1 == 0x20) {
    if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_valid_type_icons(this);
      return;
    }
    goto LAB_001157ac;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001157ac:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_cell_button_pressed(Object*, int, int, MouseButton) */

void __thiscall
SceneTreeEditor::_cell_button_pressed
          (SceneTreeEditor *this,long param_1,undefined8 param_3_00,undefined4 param_3,int param_5)

{
  Variant *pVVar1;
  code *pcVar2;
  Node *pNVar3;
  undefined8 uVar4;
  undefined *puVar5;
  char cVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  Object *pOVar10;
  EditorUndoRedoManager *this_00;
  long *plVar11;
  Object *pOVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  Ref<SceneState> *this_01;
  Variant *pVVar15;
  long lVar16;
  undefined8 *puVar17;
  long *plVar18;
  long in_FS_OFFSET;
  String *local_168;
  Variant **local_160;
  Variant local_138 [8];
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  Vector local_118 [8];
  undefined8 local_110;
  String local_108 [8];
  undefined8 local_100;
  undefined8 local_f8;
  long local_f0;
  undefined8 local_e8;
  long local_e0;
  undefined8 local_d8;
  long local_d0;
  Object *local_c8;
  undefined8 local_c0;
  Object *local_b8;
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [2];
  undefined1 local_80 [16];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 != 1) || (this[0xaaa] != (SceneTreeEditor)0x0)) goto LAB_00115c22;
  if ((param_1 == 0) ||
     (lVar9 = __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0), lVar9 == 0)) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_cell_button_pressed","editor/gui/scene_tree_editor.cpp",0x5a,
                       "Parameter \"item\" is null.",0,0);
      return;
    }
    goto LAB_00116d72;
  }
  TreeItem::get_metadata((int)(Variant *)local_88);
  Variant::operator_cast_to_NodePath(local_138);
  if (Variant::needs_deinit[local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  pOVar10 = (Object *)Node::get_node((NodePath *)this);
  if (pOVar10 == (Object *)0x0) {
    _err_print_error("_cell_button_pressed","editor/gui/scene_tree_editor.cpp",0x5f,
                     "Parameter \"n\" is null.",0,0);
    goto switchD_001158a7_default;
  }
  this_00 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
  switch(param_3) {
  case 0:
    pOVar12 = (Object *)get_scene_node(this);
    if (pOVar10 == pOVar12) {
      Node::get_scene_inherited_state();
      this_01 = (Ref<SceneState> *)&local_b8;
      if (local_b8 != (Object *)0x0) {
        Ref<SceneState>::unref((Ref<SceneState> *)&local_b8);
        this_01 = (Ref<SceneState> *)&local_c8;
        Node::get_scene_inherited_state();
        SceneState::get_path();
        if ((_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::operator()()::sname ==
             '\0') &&
           (iVar8 = __cxa_guard_acquire(&_cell_button_pressed(Object*,int,int,MouseButton)::
                                         {lambda()#1}::operator()()::sname), iVar8 != 0)) {
          _scs_create((char *)&_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::
                               operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::
                        operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::
                               operator()()::sname);
        }
        Variant::Variant((Variant *)local_88,(String *)&local_b8);
        local_70 = 0;
        local_68 = (undefined1  [16])0x0;
        local_a8 = (Variant *)local_88;
        (**(code **)(*(long *)this + 0xd0))
                  (this,&_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#1}::
                         operator()()::sname,&local_a8,1);
        if (Variant::needs_deinit[(int)local_70] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      Ref<SceneState>::unref(this_01);
    }
    else {
      Node::get_scene_file_path();
      if ((_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#2}::operator()()::sname ==
           '\0') &&
         (iVar8 = __cxa_guard_acquire(&_cell_button_pressed(Object*,int,int,MouseButton)::
                                       {lambda()#2}::operator()()::sname), iVar8 != 0)) {
        _scs_create((char *)&_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#2}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#2}::operator()()
                      ::sname,&__dso_handle);
        __cxa_guard_release(&_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#2}::
                             operator()()::sname);
      }
      Variant::Variant((Variant *)local_88,(String *)&local_b8);
      local_70 = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#2}::operator()()
                       ::sname,&local_a8,1);
      if (Variant::needs_deinit[(int)local_70] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    }
    break;
  case 1:
    local_c8 = (Object *)0x0;
    String::parse_latin1((String *)&local_c8,"");
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8,"Toggle Visible");
    TTR((String *)&local_b8,(String *)&local_d8);
    EditorUndoRedoManager::create_action(this_00,(String *)&local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    _toggle_visible(this,(Node *)pOVar10);
    plVar11 = (long *)EditorSelection::get_selected_node_list();
    local_b8 = (Object *)0x0;
    if (((long *)*plVar11 != (long *)0x0) &&
       (puVar17 = *(undefined8 **)*plVar11, puVar17 != (undefined8 *)0x0)) {
      pOVar12 = (Object *)operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)(pOVar12 + 0x10) = 0;
      *(undefined1 (*) [16])pOVar12 = (undefined1  [16])0x0;
      local_b8 = pOVar12;
      do {
        puVar13 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
        uVar4 = *puVar17;
        puVar13[1] = 0;
        *puVar13 = uVar4;
        lVar9 = *(long *)(pOVar12 + 8);
        puVar13[3] = pOVar12;
        puVar13[2] = lVar9;
        if (lVar9 != 0) {
          *(undefined8 **)(lVar9 + 8) = puVar13;
        }
        *(undefined8 **)(pOVar12 + 8) = puVar13;
        if (*(long *)pOVar12 == 0) {
          *(undefined8 **)pOVar12 = puVar13;
        }
        iVar8 = *(int *)(pOVar12 + 0x10);
        puVar17 = (undefined8 *)puVar17[1];
        *(int *)(pOVar12 + 0x10) = iVar8 + 1;
      } while (puVar17 != (undefined8 *)0x0);
      if (1 < iVar8 + 1) {
        plVar18 = *(long **)pOVar12;
        for (plVar11 = plVar18; plVar11 != (long *)0x0; plVar11 = (long *)plVar11[1]) {
          if (pOVar10 == (Object *)*plVar11) goto LAB_00116786;
        }
      }
    }
    goto LAB_00116720;
  case 2:
    (**(code **)(*(long *)pOVar10 + 0x98))((Variant *)local_88,pOVar10);
    local_c8 = (Object *)0x0;
    Ref<Script>::operator=((Ref<Script> *)&local_c8,(Variant *)local_88);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_c8 != (Object *)0x0) {
      local_b8 = local_c8;
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        local_b8 = (Object *)0x0;
      }
      if ((_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#3}::operator()()::sname ==
           '\0') &&
         (iVar8 = __cxa_guard_acquire(&_cell_button_pressed(Object*,int,int,MouseButton)::
                                       {lambda()#3}::operator()()::sname), iVar8 != 0)) {
        _scs_create((char *)&_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#3}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#3}::operator()()
                      ::sname,&__dso_handle);
        __cxa_guard_release(&_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#3}::
                             operator()()::sname);
      }
      Variant::Variant((Variant *)local_88,local_b8);
      local_70 = 0;
      local_68 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_88;
      (**(code **)(*(long *)this + 0xd0))
                (this,&_cell_button_pressed(Object*,int,int,MouseButton)::{lambda()#3}::operator()()
                       ::sname,&local_a8,1);
      if (Variant::needs_deinit[(int)local_70] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_88[0]] != '\0') {
        Variant::_clear_internal();
      }
      Ref<Script>::unref((Ref<Script> *)&local_b8);
    }
    Ref<Script>::unref((Ref<Script> *)&local_c8);
    break;
  case 3:
    local_c8 = (Object *)0x0;
    String::parse_latin1((String *)&local_c8,"");
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8,"Unlock Node");
    TTR((String *)&local_b8,(String *)&local_d8);
    EditorUndoRedoManager::create_action(this_00,(String *)&local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    StringName::StringName((StringName *)&local_b8,"remove_meta",false);
    EditorUndoRedoManager::add_do_method<char_const*>
              (this_00,pOVar10,(StringName *)&local_b8,"_edit_lock_");
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"set_meta",false);
    Variant::Variant((Variant *)local_88,"_edit_lock_");
    Variant::Variant((Variant *)&local_70,true);
    local_50 = (undefined1  [16])0x0;
    pVVar15 = (Variant *)local_40;
    local_58 = 0;
    local_a8 = (Variant *)local_88;
    pVStack_a0 = (Variant *)&local_70;
    EditorUndoRedoManager::add_undo_methodp
              ((Object *)this_00,(StringName *)pOVar10,(Variant **)&local_b8,(int)&local_a8);
    do {
      pVVar1 = pVVar15 + -0x18;
      pVVar15 = pVVar15 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar15 != (Variant *)local_88);
LAB_00115a33:
    local_160 = &local_a8;
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"_update_tree",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_do_methodp
              ((Object *)this_00,(StringName *)this,(Variant **)&local_b8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"_update_tree",false);
    local_88[0] = 0;
    local_88[1] = 0;
    local_80 = (undefined1  [16])0x0;
    EditorUndoRedoManager::add_undo_methodp
              ((Object *)this_00,(StringName *)this,(Variant **)&local_b8,0);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"emit_signal",false);
    EditorUndoRedoManager::add_do_method<char_const*>
              (this_00,(Object *)this,(StringName *)&local_b8,"node_changed");
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    StringName::StringName((StringName *)&local_b8,"emit_signal",false);
    Variant::Variant((Variant *)local_88,"node_changed");
    local_70 = 0;
    local_68 = (undefined1  [16])0x0;
    local_a8 = (Variant *)local_88;
    EditorUndoRedoManager::add_undo_methodp
              ((Object *)this_00,(StringName *)this,(Variant **)&local_b8,(int)local_160);
    if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
      StringName::unref();
    }
    goto LAB_00115c06;
  case 4:
    local_c8 = (Object *)0x0;
    String::parse_latin1((String *)&local_c8,"");
    local_d8 = 0;
    String::parse_latin1((String *)&local_d8,"Ungroup Children");
    TTR((String *)&local_b8,(String *)&local_d8);
    EditorUndoRedoManager::create_action(this_00,(String *)&local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    pcVar2 = *(code **)(*(long *)pOVar10 + 0x58);
    local_c8 = (Object *)0x0;
    String::parse_latin1((String *)&local_c8,"CanvasItem");
    cVar6 = (*pcVar2)(pOVar10,(String *)&local_c8);
    if (cVar6 != '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
LAB_00116243:
      StringName::StringName((StringName *)&local_b8,"remove_meta",false);
      EditorUndoRedoManager::add_do_method<char_const*>
                (this_00,pOVar10,(StringName *)&local_b8,"_edit_group_");
      if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
        StringName::unref();
      }
      StringName::StringName((StringName *)&local_b8,"set_meta",false);
      Variant::Variant((Variant *)local_88,"_edit_group_");
      Variant::Variant((Variant *)&local_70,true);
      local_50 = (undefined1  [16])0x0;
      pVVar15 = (Variant *)local_40;
      local_58 = 0;
      local_a8 = (Variant *)local_88;
      pVStack_a0 = (Variant *)&local_70;
      EditorUndoRedoManager::add_undo_methodp
                ((Object *)this_00,(StringName *)pOVar10,(Variant **)&local_b8,(int)&local_a8);
      do {
        pVVar1 = pVVar15 + -0x18;
        pVVar15 = pVVar15 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar15 != (Variant *)local_88);
      goto LAB_00115a33;
    }
    pcVar2 = *(code **)(*(long *)pOVar10 + 0x58);
    local_b8 = (Object *)0x0;
    String::parse_latin1((String *)&local_b8,"Node3D");
    cVar6 = (*pcVar2)(pOVar10,(String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    if (cVar6 != '\0') goto LAB_00116243;
LAB_00115c06:
    EditorUndoRedoManager::commit_action(SUB81(this_00,0));
    break;
  case 5:
    _get_node_configuration_warnings((Node *)&local_e8);
    if (local_e0 != 0) {
      local_130 = 0;
      puVar5 = &_LC227;
      do {
        puVar14 = puVar5;
        puVar5 = puVar14 + 4;
      } while (*(int *)(puVar14 + 4) != 0);
      local_b8 = (Object *)&_LC227;
      local_b0 = (long)(puVar14 + -0x12a80c) >> 2;
      String::parse_utf32((StrRange *)&local_130);
      local_128 = (undefined *)0x0;
      if ((local_e0 != 0) && (lVar9 = local_e0 + *(long *)(local_e0 + -8) * 8, lVar9 != local_e0)) {
        lVar16 = local_e0;
        do {
          operator+((char *)&local_c8,(String *)&_LC170);
          String::operator+((String *)&local_b8,(String *)&local_c8);
          lVar16 = lVar16 + 8;
          String::operator+=((String *)&local_128,(String *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        } while (lVar9 != lVar16);
      }
      pOVar10 = *(Object **)(TextServerManager::singleton + 0x178);
      if (pOVar10 == (Object *)0x0) {
        _cell_button_pressed();
        return;
      }
      cVar6 = RefCounted::reference();
      if (cVar6 == '\0') {
        pOVar10 = (Object *)0x0;
      }
      pcVar2 = *(code **)(*(long *)pOVar10 + 0x7d8);
      local_b8 = (Object *)0x0;
      String::parse_latin1((String *)&local_b8,"");
      (*pcVar2)(&local_d8,pOVar10,(CowData<char32_t> *)&local_128,(String *)&local_b8,0x50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      cVar6 = RefCounted::unreference();
      if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar10), cVar6 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      local_c0 = 0;
      for (lVar9 = 1; (local_d0 != 0 && (lVar16 = *(long *)(local_d0 + -8), lVar9 + -1 < lVar16));
          lVar9 = lVar9 + 2) {
        if (lVar16 <= lVar9) {
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar16,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        String::substr((int)(CowData<char32_t> *)&local_f0,(int)(CowData<char32_t> *)&local_128);
        local_b8 = (Object *)0x0;
        if (local_f0 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_f0);
        }
        Vector<String>::push_back((Vector<String> *)&local_c8,(String *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
      }
      local_168 = (String *)&local_f0;
      local_120 = 0;
      String::parse_latin1((String *)&local_120,"\n");
      String::join(local_118);
      local_110 = 0;
      String::parse_latin1((String *)&local_110,"    ");
      String::indent(local_108);
      local_f8 = 0;
      puVar5 = &_LC312;
      do {
        puVar14 = puVar5;
        puVar5 = puVar14 + 4;
      } while (*(int *)(puVar14 + 4) != 0);
      local_b8 = (Object *)&_LC312;
      local_b0 = (long)(puVar14 + -0x12a81c) >> 2;
      String::parse_utf32((StrRange *)&local_f8);
      local_100 = 0;
      puVar5 = &_LC313;
      do {
        puVar14 = puVar5;
        puVar5 = puVar14 + 4;
      } while (*(int *)(puVar14 + 4) != 0);
      local_b8 = (Object *)&_LC313;
      local_b0 = (long)(puVar14 + -0x12a828) >> 2;
      String::parse_utf32((StrRange *)&local_100);
      String::replace(local_168,local_108);
      String::substr((int)(String *)&local_b8,(int)local_168);
      if ((Object *)local_128 != local_b8) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
        local_128 = local_b8;
        local_b8 = (Object *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_168);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_108);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_118);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
      local_b8 = (Object *)0x0;
      uVar4 = *(undefined8 *)(this + 0xa80);
      if (local_128 != (undefined *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_128);
      }
      AcceptDialog::set_text(uVar4,(String *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      local_88[0] = 0;
      local_88[1] = 0;
      Window::popup_centered(*(Vector2i **)(this + 0xa80));
      CowData<String>::_unref((CowData<String> *)&local_c0);
      CowData<int>::_unref((CowData<int> *)&local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
    }
    CowData<String>::_unref((CowData<String> *)&local_e0);
    break;
  case 6:
    EditorSelection::clear();
    EditorSelection::add_node(*(Node **)(this + 0x9c8));
    set_selected(this,(Node *)pOVar10,true);
    EditorDockManager::focus_dock(EditorDockManager::singleton);
    NodeDock::show_connections();
    break;
  case 7:
    EditorSelection::clear();
    EditorSelection::add_node(*(Node **)(this + 0x9c8));
    set_selected(this,(Node *)pOVar10,true);
    EditorDockManager::focus_dock(EditorDockManager::singleton);
    NodeDock::show_groups();
    break;
  case 8:
    pcVar2 = *(code **)(*(long *)pOVar10 + 0x58);
    local_b8 = (Object *)0x0;
    String::parse_latin1((String *)&local_b8,"AnimationMixer");
    cVar6 = (*pcVar2)(pOVar10,(String *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    if (cVar6 != '\0') {
      BaseButton::set_pressed(SUB81(*(undefined8 *)(AnimationPlayerEditor::singleton + 0xa88),0));
      AnimationPlayerEditor::_pin_pressed();
      if (((byte)this[0x2fa] & 0x40) == 0) {
        this[0xaf3] = (SceneTreeEditor)0x0;
      }
      else {
        _update_tree(SUB81(this,0));
      }
    }
    break;
  case 9:
    local_b8 = (Object *)0x0;
    String::parse_latin1((String *)&local_b8,"docks/scene_tree/ask_before_revoking_unique_name");
    _EDITOR_GET((String *)local_88);
    bVar7 = Variant::operator_cast_to_bool((Variant *)local_88);
    if (Variant::needs_deinit[local_88[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    *(Object **)(this + 0xaa0) = pOVar10;
    if (bVar7) {
      Node::get_name();
      local_d8 = 0;
      String::parse_latin1((String *)&local_d8,"");
      local_e8 = 0;
      String::parse_latin1((String *)&local_e8,"Revoke unique name for node \"%s\"?");
      TTR((String *)&local_c8,(String *)&local_e8);
      vformat<StringName>((CowData<char32_t> *)&local_f0,(String *)&local_c8,(String *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
      if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
        StringName::unref();
      }
      BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xa98),0));
      Label::set_text(*(String **)(this + 0xa90));
      Window::reset_size();
      local_88[0] = 0;
      local_88[1] = 0;
      Window::popup_centered(*(Vector2i **)(this + 0xa88));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
    }
    else {
      _revoke_unique_name(this);
    }
  }
switchD_001158a7_default:
  NodePath::~NodePath((NodePath *)local_138);
LAB_00115c22:
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00116d72:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
  while( true ) {
    if (pOVar10 != (Object *)pNVar3) {
      _toggle_visible(this,pNVar3);
    }
    plVar18 = (long *)plVar18[1];
    if (plVar18 == (long *)0x0) break;
LAB_00116786:
    pNVar3 = (Node *)*plVar18;
    if (pNVar3 == (Node *)0x0) {
      _err_print_error("_cell_button_pressed","editor/gui/scene_tree_editor.cpp",0x76,
                       "Parameter \"nv\" is null.",0,0);
      List<Node*,DefaultAllocator>::~List((List<Node*,DefaultAllocator> *)&local_b8);
      goto switchD_001158a7_default;
    }
  }
LAB_00116720:
  EditorUndoRedoManager::commit_action(SUB81(this_00,0));
  List<Node*,DefaultAllocator>::~List((List<Node*,DefaultAllocator> *)&local_b8);
  goto switchD_001158a7_default;
}



/* CowData<Ref<Texture2D> >::_copy_on_write() [clone .isra.0] */

void __thiscall CowData<Ref<Texture2D>>::_copy_on_write(CowData<Ref<Texture2D>> *this)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SceneTreeEditor::get_drag_data_fw(Vector2 const&, Control*) */

Vector2 * SceneTreeEditor::get_drag_data_fw(Vector2 *param_1,Control *param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  BoxContainer *this;
  BoxContainer *this_00;
  TextureRect *this_01;
  Label *this_02;
  Variant *pVVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  Dictionary *local_f0;
  Array local_b0 [8];
  long local_a8;
  Object *local_a0 [2];
  long local_90 [2];
  long local_80;
  int local_78 [8];
  ulong local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2[0xac0] == (Control)0x0) ||
     (iVar6 = Tree::get_button_id_at_position(*(Vector2 **)(param_2 + 0xa48)), iVar6 != -1)) {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    local_90[0] = 0;
    local_80 = 0;
    lVar7 = Tree::get_next_selected(*(TreeItem **)(param_2 + 0xa48));
    if (lVar7 != 0) {
      lVar7 = 0;
      do {
        TreeItem::get_metadata((int)(Variant *)&local_58);
        Variant::operator_cast_to_NodePath((Variant *)&local_a8);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        lVar8 = Node::get_node((NodePath *)param_2);
        if (lVar8 != 0) {
          if (lVar7 == 0) {
            lVar7 = 1;
          }
          else {
            lVar7 = *(long *)(lVar7 + -8) + 1;
          }
          iVar6 = CowData<Node*>::resize<false>((CowData<Node*> *)local_90,lVar7);
          lVar7 = local_90[0];
          if (iVar6 == 0) {
            if (local_90[0] == 0) {
              lVar10 = -1;
              lVar11 = 0;
            }
            else {
              lVar11 = *(long *)(local_90[0] + -8);
              lVar10 = lVar11 + -1;
              if (-1 < lVar10) {
                CowData<Node*>::_copy_on_write((CowData<Node*> *)local_90);
                *(long *)(local_90[0] + lVar10 * 8) = lVar8;
                lVar7 = local_90[0];
                goto LAB_0011704d;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar11,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
            lVar7 = local_90[0];
          }
LAB_0011704d:
          TreeItem::get_icon((int)(Ref<Texture2D> *)local_a0);
          if (local_80 == 0) {
            lVar8 = 1;
          }
          else {
            lVar8 = *(long *)(local_80 + -8) + 1;
          }
          iVar6 = CowData<Ref<Texture2D>>::resize<false>((CowData<Ref<Texture2D>> *)&local_80,lVar8)
          ;
          if (iVar6 == 0) {
            if (local_80 == 0) {
              lVar11 = -1;
              lVar8 = 0;
            }
            else {
              lVar8 = *(long *)(local_80 + -8);
              lVar11 = lVar8 + -1;
              if (-1 < lVar11) {
                CowData<Ref<Texture2D>>::_copy_on_write((CowData<Ref<Texture2D>> *)&local_80);
                puVar2 = (undefined8 *)(local_80 + lVar11 * 8);
                pOVar3 = (Object *)*puVar2;
                if (local_a0[0] != pOVar3) {
                  *puVar2 = local_a0[0];
                  if ((local_a0[0] != (Object *)0x0) &&
                     (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                    *puVar2 = 0;
                  }
                  if (((pOVar3 != (Object *)0x0) &&
                      (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
                     (cVar5 = predelete_handler(pOVar3), cVar5 != '\0')) {
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                  }
                }
                goto LAB_00117120;
              }
            }
            _err_print_index_error
                      ("set","./core/templates/cowdata.h",0xcf,lVar11,lVar8,"p_index","size()","",
                       false,false);
          }
          else {
            _err_print_error("push_back","./core/templates/vector.h",0x142,
                             "Condition \"err\" is true. Returning: true",0,0);
          }
LAB_00117120:
          Ref<Texture2D>::unref((Ref<Texture2D> *)local_a0);
        }
        lVar8 = Tree::get_next_selected(*(TreeItem **)(param_2 + 0xa48));
        NodePath::~NodePath((NodePath *)&local_a8);
      } while (lVar8 != 0);
      if (lVar7 != 0) {
        this = (BoxContainer *)operator_new(0xa10,"");
        BoxContainer::BoxContainer(this,true);
        this[0xa0c] = (BoxContainer)0x1;
        *(undefined ***)this = &PTR__initialize_classv_0012c338;
        lVar8 = 0;
        postinitialize_handler((Object *)this);
        Array::Array(local_b0);
        if (0 < *(long *)(lVar7 + -8)) {
          local_f0._0_4_ = _LC39;
          do {
            if (lVar8 < 10) {
              this_00 = (BoxContainer *)operator_new(0xa10,"");
              BoxContainer::BoxContainer(this_00,false);
              this_00[0xa0c] = (BoxContainer)0x1;
              *(undefined ***)this_00 = &PTR__initialize_classv_0012bfc0;
              postinitialize_handler((Object *)this_00);
              this_01 = (TextureRect *)operator_new(0x9e0,"");
              TextureRect::TextureRect(this_01);
              postinitialize_handler((Object *)this_01);
              if ((get_drag_data_fw(Vector2_const&,Control*)::{lambda()#1}::operator()()::sname ==
                   '\0') &&
                 (iVar6 = __cxa_guard_acquire(&get_drag_data_fw(Vector2_const&,Control*)::
                                               {lambda()#1}::operator()()::sname), iVar6 != 0)) {
                _scs_create((char *)&get_drag_data_fw(Vector2_const&,Control*)::{lambda()#1}::
                                     operator()()::sname,true);
                __cxa_atexit(StringName::~StringName,
                             &get_drag_data_fw(Vector2_const&,Control*)::{lambda()#1}::operator()()
                              ::sname,&__dso_handle);
                __cxa_guard_release(&get_drag_data_fw(Vector2_const&,Control*)::{lambda()#1}::
                                     operator()()::sname);
              }
              iVar6 = Control::get_theme_constant
                                ((StringName *)param_2,
                                 (StringName *)
                                 &get_drag_data_fw(Vector2_const&,Control*)::{lambda()#1}::
                                  operator()()::sname);
              local_58 = CONCAT44((float)iVar6,(float)iVar6);
              Control::set_custom_minimum_size((Vector2 *)this_01);
              TextureRect::set_stretch_mode(this_01,5);
              TextureRect::set_expand_mode(this_01,1);
              if (local_80 == 0) {
                lVar11 = 0;
                goto LAB_001174c8;
              }
              lVar11 = *(long *)(local_80 + -8);
              if (lVar11 <= lVar8) goto LAB_001174c8;
              TextureRect::set_texture((Ref *)this_01);
              Node::add_child(this_00,this_01,0,0);
              this_02 = (Label *)operator_new(0xad8,"");
              lVar11 = *(long *)(lVar7 + -8);
              if (lVar11 <= lVar8) goto LAB_001174c8;
              Node::get_name();
              if (local_a8 == 0) {
                local_a0[0] = (Object *)0x0;
              }
              else {
                local_a0[0] = (Object *)0x0;
                if (*(char **)(local_a8 + 8) == (char *)0x0) {
                  if (*(long *)(local_a8 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)local_a0,(CowData *)(local_a8 + 0x10));
                  }
                }
                else {
                  String::parse_latin1((String *)local_a0,*(char **)(local_a8 + 8));
                }
              }
              Label::Label(this_02,(String *)local_a0);
              postinitialize_handler((Object *)this_02);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
              if ((StringName::configured != '\0') && (local_a8 != 0)) {
                StringName::unref();
              }
              Node::set_auto_translate_mode(this_02,2);
              Node::add_child(this_00,this_02,0,0);
              Node::add_child(this,this_00,0,0);
              local_58 = CONCAT44(_UNK_0012e214,_LC39);
              local_50 = CONCAT44(local_f0._0_4_,0x3f800000);
              CanvasItem::set_modulate(this_00);
              local_f0._0_4_ = local_f0._0_4_ - __LC328;
            }
            lVar11 = *(long *)(lVar7 + -8);
            if (lVar11 <= lVar8) {
LAB_001174c8:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar11,"p_index","size()","",
                         false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar4 = (code *)invalidInstructionException();
              (*pcVar4)();
            }
            Node::get_path();
            Variant::Variant((Variant *)&local_58,(NodePath *)local_a0);
            Array::push_back((Variant *)local_b0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
              Variant::_clear_internal();
            }
            lVar8 = lVar8 + 1;
            NodePath::~NodePath((NodePath *)local_a0);
          } while (lVar8 < *(long *)(lVar7 + -8));
        }
        local_f0 = (Dictionary *)local_a0;
        Control::set_drag_preview(param_2);
        Dictionary::Dictionary(local_f0);
        Variant::Variant((Variant *)&local_58,"nodes");
        Variant::Variant((Variant *)local_78,"type");
        pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_f0);
        if (pVVar9 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar9 = 0;
          *(int *)pVVar9 = (int)local_58;
          *(undefined8 *)(pVVar9 + 8) = local_50;
          *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Variant::Variant((Variant *)&local_58,local_b0);
        Variant::Variant((Variant *)local_78,"nodes");
        pVVar9 = (Variant *)Dictionary::operator[]((Variant *)local_f0);
        if (pVVar9 != (Variant *)&local_58) {
          if (Variant::needs_deinit[*(int *)pVVar9] != '\0') {
            Variant::_clear_internal();
          }
          *(undefined4 *)pVVar9 = 0;
          *(int *)pVVar9 = (int)local_58;
          *(undefined8 *)(pVVar9 + 8) = local_50;
          *(undefined8 *)(pVVar9 + 0x10) = uStack_48;
          local_58 = local_58 & 0xffffffff00000000;
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        Tree::set_drop_mode_flags((int)*(undefined8 *)(param_2 + 0xa48));
        if ((get_drag_data_fw(Vector2_const&,Control*)::{lambda()#2}::operator()()::sname == '\0')
           && (iVar6 = __cxa_guard_acquire(&get_drag_data_fw(Vector2_const&,Control*)::{lambda()#2}
                                            ::operator()()::sname), iVar6 != 0)) {
          _scs_create((char *)&get_drag_data_fw(Vector2_const&,Control*)::{lambda()#2}::operator()()
                               ::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &get_drag_data_fw(Vector2_const&,Control*)::{lambda()#2}::operator()()::sname
                       ,&__dso_handle);
          __cxa_guard_release(&get_drag_data_fw(Vector2_const&,Control*)::{lambda()#2}::operator()()
                               ::sname);
        }
        Object::emit_signal<>
                  ((Object *)param_2,
                   (StringName *)
                   &get_drag_data_fw(Vector2_const&,Control*)::{lambda()#2}::operator()()::sname);
        Variant::Variant((Variant *)param_1,local_f0);
        Dictionary::~Dictionary(local_f0);
        Array::~Array(local_b0);
        lVar7 = local_90[0];
        CowData<Ref<Texture2D>>::_unref((CowData<Ref<Texture2D>> *)&local_80);
        if (lVar7 != 0) {
          LOCK();
          plVar1 = (long *)(lVar7 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_90[0] + -0x10),false);
          }
        }
        goto LAB_00116f14;
      }
    }
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    CowData<Ref<Texture2D>>::_unref((CowData<Ref<Texture2D>> *)&local_80);
  }
LAB_00116f14:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
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



/* Viewport::is_size_2d_override_stretch_enabled() const */

undefined8 Viewport::is_size_2d_override_stretch_enabled(void)

{
  return 1;
}



/* Viewport::is_sub_viewport() const */

undefined8 Viewport::is_sub_viewport(void)

{
  return 0;
}



/* Window::_popup_adjust_rect() const */

undefined1  [16] Window::_popup_adjust_rect(void)

{
  return ZEXT816(0);
}



/* AcceptDialog::ok_pressed() */

void AcceptDialog::ok_pressed(void)

{
  return;
}



/* AcceptDialog::cancel_pressed() */

void AcceptDialog::cancel_pressed(void)

{
  return;
}



/* AcceptDialog::custom_action(String const&) */

void AcceptDialog::custom_action(String *param_1)

{
  return;
}



/* ConfirmationDialog::is_class_ptr(void*) const */

uint ConfirmationDialog::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x12df,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12df,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12df,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12df,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12df,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* ConfirmationDialog::_property_can_revertv(StringName const&) const */

undefined8 ConfirmationDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* ConfirmationDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* SceneTreeEditor::is_class_ptr(void*) const */

uint __thiscall SceneTreeEditor::is_class_ptr(SceneTreeEditor *this,void *param_1)

{
  return (uint)CONCAT71(0x12df,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12de,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12df,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12df,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x12df,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* SceneTreeDialog::_property_can_revertv(StringName const&) const */

undefined8 SceneTreeDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* SceneTreeDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SceneTreeDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<SceneTreeEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,bool> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*,
   TreeItem*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*> *this)

{
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*> *this)

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



/* MethodBindT<bool>::_gen_argument_type(int) const */

bool __thiscall MethodBindT<bool>::_gen_argument_type(MethodBindT<bool> *this,int param_1)

{
  return param_1 == 0;
}



/* MethodBindT<bool>::get_argument_meta(int) const */

undefined8 MethodBindT<bool>::get_argument_meta(int param_1)

{
  return 0;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,bool>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeDialog,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&> *this,
          bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeDialog,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_argument_count
          (CallableCustomMethodPointer<Control,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int, bool>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<SceneTreeEditor, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<SceneTreeEditor, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, ObjectID>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::get_argument_count
          (CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,bool>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,void,bool> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*, TreeItem*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*>::get_argument_count
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*> *this,bool *param_1)

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



/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*,
   TreeItem*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<SceneTreeEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void,bool> *this)

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



/* SceneTreeEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 SceneTreeEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HFlowContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00136008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00136008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* SceneTreeEditor::_property_can_revertv(StringName const&) const */

undefined8 SceneTreeEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00136008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HFlowContainer::_property_can_revertv(StringName const&) const */

undefined8 HFlowContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00136008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dca0;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dca0;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dd00;
  MethodBind::~MethodBind((MethodBind *)this);
  return;
}



/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
  *(undefined ***)this = &PTR__gen_argument_type_0012dd00;
  MethodBind::~MethodBind((MethodBind *)this);
  operator_delete(this,0x68);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012c6b0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0012c6b0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00136010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* SceneTreeDialog::_getv(StringName const&, Variant&) const */

undefined8 SceneTreeDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00136010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00136018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* SceneTreeDialog::_setv(StringName const&, Variant const&) */

undefined8 SceneTreeDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00136018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::get_object
          (CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this)

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
      goto LAB_0011913d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011913d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011913d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* SceneTreeDialog::_validate_propertyv(PropertyInfo&) const */

void SceneTreeDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00136020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */

void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00136020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* HFlowContainer::is_class_ptr(void*) const */

uint HFlowContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12df,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12dd,in_RSI == &FlowContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* SceneTreeEditor::_validate_propertyv(PropertyInfo&) const */

void SceneTreeEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_00136028 == CanvasItem::_validate_property) {
    return;
  }
  Control::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00136030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HFlowContainer::_validate_propertyv(PropertyInfo&) const */

void HFlowContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00136038 == Control::_validate_property) {
    return;
  }
  FlowContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00136030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool> *this)

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
      goto LAB_001195dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001195dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001195dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, Variant, Vector2 const&, Control*>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*> *this)

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
      goto LAB_001196dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001196dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001196dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,bool>::get_object
          (CallableCustomMethodPointer<SceneTreeDialog,void,bool> *this)

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
      goto LAB_001197dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001197dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001197dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<SceneTreeDialog,void,String_const&> *this)

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
      goto LAB_001198dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001198dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001198dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

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
      goto LAB_001199dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_001199dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_001199dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&> *this)

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
      goto LAB_00119add;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00119add;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00119add:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void>::get_object
          (CallableCustomMethodPointer<SceneTreeDialog,void> *this)

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
      goto LAB_00119bdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00119bdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00119bdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&, MouseButton>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton> *this)

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
      goto LAB_00119cdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00119cdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00119cdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, ObjectID>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID> *this)

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
      goto LAB_00119ddd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00119ddd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00119ddd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*> *this)

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
      goto LAB_00119edd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00119edd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00119edd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*, TreeItem*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*> *this)

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
      goto LAB_00119fdd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_00119fdd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_00119fdd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<SceneTreeEditor, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>::
get_object(CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

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
      goto LAB_0011a0dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011a0dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011a0dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,bool>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void,bool> *this)

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
      goto LAB_0011a1dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011a1dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011a1dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int, int, MouseButton>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton> *this)

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
      goto LAB_0011a2dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011a2dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011a2dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*> *this)

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
      goto LAB_0011a3dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011a3dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011a3dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void>::get_object
          (CallableCustomMethodPointer<SceneTreeEditor,void> *this)

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
      goto LAB_0011a4dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011a4dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011a4dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<Control, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_object
          (CallableCustomMethodPointer<Control,void> *this)

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
      goto LAB_0011a5dd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0011a5dd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0011a5dd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00136040 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
    }
    Window::_notification(iVar1);
    Viewport::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  Viewport::_notification(iVar1);
  Window::_notification(iVar1);
  if ((code *)PTR__notification_00136040 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* VBoxContainer::is_class_ptr(void*) const */

uint VBoxContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12df,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x12df,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* SceneTreeDialog::is_class_ptr(void*) const */

uint SceneTreeDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x12df,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x12df,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* SceneTreeEditor::_setv(StringName const&, Variant const&) */

undefined8 SceneTreeEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00136048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HFlowContainer::_setv(StringName const&, Variant const&) */

undefined8 HFlowContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00136048 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00136048 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00136048 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011aab8) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00136050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011ab28) */
/* HFlowContainer::_getv(StringName const&, Variant&) const */

undefined8 HFlowContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00136050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011ab98) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00136050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0011ac08) */
/* SceneTreeEditor::_getv(StringName const&, Variant&) const */

undefined8 SceneTreeEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00136050 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011b840;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011b840:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011b8a0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011b8a0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011b900;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011b900:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011b960;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011b960:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011b9d0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011b9d0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa28);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0011ba40;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0011ba40:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HFlowContainer::_notificationv(int, bool) */

void __thiscall HFlowContainer::_notificationv(HFlowContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00136058 != Container::_notification) {
      FlowContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00136058 == Container::_notification) {
    return;
  }
  FlowContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00136060 != Container::_notification) {
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
  if ((code *)PTR__notification_00136060 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00136060 != Container::_notification) {
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
  if ((code *)PTR__notification_00136060 == Container::_notification) {
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
LAB_0011be73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011be73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0011bede;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0011bede:
  return &_get_class_namev()::_class_name_static;
}



/* ConfirmationDialog::_get_class_namev() const */

undefined8 * ConfirmationDialog::_get_class_namev(void)

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
LAB_0011bf63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011bf63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_0011bfce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_0011bfce:
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
LAB_0011c053:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c053;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0011c0be;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0011c0be:
  return &_get_class_namev()::_class_name_static;
}



/* SceneTreeDialog::_get_class_namev() const */

undefined8 * SceneTreeDialog::_get_class_namev(void)

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
LAB_0011c143:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c143;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SceneTreeDialog");
      goto LAB_0011c1ae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SceneTreeDialog");
LAB_0011c1ae:
  return &_get_class_namev()::_class_name_static;
}



/* SceneTreeEditor::_get_class_namev() const */

undefined8 * SceneTreeEditor::_get_class_namev(void)

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
LAB_0011c233:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c233;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"SceneTreeEditor");
      goto LAB_0011c29e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"SceneTreeEditor");
LAB_0011c29e:
  return &_get_class_namev()::_class_name_static;
}



/* HFlowContainer::_get_class_namev() const */

undefined8 * HFlowContainer::_get_class_namev(void)

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
LAB_0011c323:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0011c323;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
      goto LAB_0011c38e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HFlowContainer");
LAB_0011c38e:
  return &_get_class_namev()::_class_name_static;
}



/* CowData<Node*>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Node*>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<char32_t>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<char32_t>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SceneTreeEditor::_update_node_tooltip(Node*, TreeItem*) [clone .cold] */

void SceneTreeEditor::_update_node_tooltip(Node *param_1,TreeItem *param_2)

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



/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<StringName>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* SceneTreeEditor::_update_node(Node*, TreeItem*, bool) [clone .cold] */

void SceneTreeEditor::_update_node(Node *param_1,TreeItem *param_2,bool param_3)

{
  code *pcVar1;
  
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SceneTreeEditor::_notification(int) [clone .cold] */

void SceneTreeEditor::_notification(int param_1)

{
  code *pcVar1;
  
  _err_print_error("get_tree","./scene/main/node.h",0x1e5,"Parameter \"data.tree\" is null.",0,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* SceneTreeEditor::_cell_button_pressed(Object*, int, int, MouseButton) [clone .cold] */

void SceneTreeEditor::_cell_button_pressed(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<Texture2D> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<Texture2D>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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



/* SceneTreeDialog::get_class() const */

void SceneTreeDialog::get_class(void)

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



/* SceneTreeEditor::get_class() const */

void SceneTreeEditor::get_class(void)

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



/* HFlowContainer::get_class() const */

void HFlowContainer::get_class(void)

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



/* ConfirmationDialog::get_class() const */

void ConfirmationDialog::get_class(void)

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



/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
  long *plVar1;
  long lVar2;
  
  if (*(long *)(this + 0x20) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x20) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x20);
      *(undefined8 *)(this + 0x20) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  if ((StringName::configured != '\0') && (*(long *)(this + 0x10) != 0)) {
    StringName::unref();
  }
  if (*(long *)(this + 8) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 8) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      *(undefined8 *)(this + 8) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      return;
    }
  }
  return;
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



/* List<Node*, DefaultAllocator>::~List() */

undefined8 __thiscall List<Node*,DefaultAllocator>::~List(List<Node*,DefaultAllocator> *this)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined8 uStack_18;
  
  plVar5 = *(long **)this;
  if (plVar5 == (long *)0x0) {
    return uStack_18;
  }
  do {
    pvVar1 = (void *)*plVar5;
    if (pvVar1 == (void *)0x0) {
      if ((int)plVar5[2] != 0) {
        uVar4 = _err_print_error("~List","./core/templates/list.h",0x316,
                                 "Condition \"_data->size_cache\" is true.",0,0);
        return uVar4;
      }
      break;
    }
    if (*(long **)((long)pvVar1 + 0x18) == plVar5) {
      lVar3 = *(long *)((long)pvVar1 + 8);
      lVar2 = *(long *)((long)pvVar1 + 0x10);
      *plVar5 = lVar3;
      if (pvVar1 == (void *)plVar5[1]) {
        plVar5[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 8);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x10) = lVar2;
      }
      Memory::free_static(pvVar1,false);
      *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
    }
    else {
      _err_print_error("erase","./core/templates/list.h",0xe7,
                       "Condition \"p_I->data != this\" is true. Returning: false",0,0);
    }
    plVar5 = *(long **)this;
  } while ((int)plVar5[2] != 0);
  uVar4 = Memory::free_static(plVar5,false);
  return uVar4;
}



/* void EditorUndoRedoManager::add_do_method<char const*>(Object*, StringName const&, char const*)
    */

void __thiscall
EditorUndoRedoManager::add_do_method<char_const*>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,char *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
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



/* void EditorUndoRedoManager::add_do_method<bool>(Object*, StringName const&, bool) */

void __thiscall
EditorUndoRedoManager::add_do_method<bool>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,bool param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_do_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
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



/* void EditorUndoRedoManager::add_undo_method<bool>(Object*, StringName const&, bool) */

void __thiscall
EditorUndoRedoManager::add_undo_method<bool>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,bool param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant *local_78 [2];
  int local_68 [6];
  undefined8 local_50;
  undefined1 local_48 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_68,param_3);
  local_50 = 0;
  local_48 = (undefined1  [16])0x0;
  local_78[0] = (Variant *)local_68;
  EditorUndoRedoManager::add_undo_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)local_78);
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



/* Variant Object::call<>(StringName const&) */

StringName * Object::call<>(StringName *param_1)

{
  undefined8 in_RDX;
  long *in_RSI;
  long in_FS_OFFSET;
  int local_68 [4];
  undefined8 local_58;
  undefined1 local_50 [16];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_68[0] = 0;
  local_68[1] = 0;
  local_68[2] = 0;
  (**(code **)(*in_RSI + 0x68))((Variant *)local_38,in_RSI,in_RDX,0,0,local_68);
  if (local_68[0] == 0) {
    Variant::Variant((Variant *)param_1,(Variant *)local_38);
  }
  else {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  if (Variant::needs_deinit[local_38[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<SceneTreeEditor, Node*>(SceneTreeEditor*, char
   const*, void (SceneTreeEditor::*)(Node*)) */

SceneTreeEditor *
create_custom_callable_function_pointer<SceneTreeEditor,Node*>
          (SceneTreeEditor *param_1,char *param_2,_func_void_Node_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC58;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012d280;
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



/* Callable Callable::bind<Node*>(Node*) const */

Node * Callable::bind<Node*>(Node *param_1)

{
  char cVar1;
  Object *in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)param_1,in_ESI);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* Callable create_custom_callable_function_pointer<SceneTreeEditor, Node*,
   TreeItem*>(SceneTreeEditor*, char const*, void (SceneTreeEditor::*)(Node*, TreeItem*)) */

SceneTreeEditor *
create_custom_callable_function_pointer<SceneTreeEditor,Node*,TreeItem*>
          (SceneTreeEditor *param_1,char *param_2,_func_void_Node_ptr_TreeItem_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC58;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012d310;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Node_ptr_TreeItem_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<SceneTreeEditor, bool>(SceneTreeEditor*, char
   const*, void (SceneTreeEditor::*)(bool)) */

SceneTreeEditor *
create_custom_callable_function_pointer<SceneTreeEditor,bool>
          (SceneTreeEditor *param_1,char *param_2,_func_void_bool *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC58;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012d3a0;
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



/* Callable create_custom_callable_function_pointer<SceneTreeEditor>(SceneTreeEditor*, char const*,
   void (SceneTreeEditor::*)()) */

SceneTreeEditor *
create_custom_callable_function_pointer<SceneTreeEditor>
          (SceneTreeEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC58;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012d4c0;
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



/* Callable create_custom_callable_function_pointer<SceneTreeEditor, Object*>(SceneTreeEditor*, char
   const*, void (SceneTreeEditor::*)(Object*)) */

SceneTreeEditor *
create_custom_callable_function_pointer<SceneTreeEditor,Object*>
          (SceneTreeEditor *param_1,char *param_2,_func_void_Object_ptr *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC58;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012d550;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Object_ptr **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* HashSet<Node*, HashMapHasherDefault, HashMapComparatorDefault<Node*> >::insert(Node* const&) */

undefined1  [16]
HashSet<Node*,HashMapHasherDefault,HashMapComparatorDefault<Node*>>::insert(Node **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  Node *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (Node *)*in_RSI;
  if (local_88 == (Node *)0x0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (Node *)*in_RSI;
    if (local_88 != (Node *)0x0) goto LAB_0011d81f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0011d81f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_0011dcc1;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * _LC66 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (Node *)*in_RSI;
      goto LAB_0011dcc1;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (Node *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_0011dcc1:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
}



/* Callable Callable::bind<Tree*>(Tree*) const */

Tree * Callable::bind<Tree*>(Tree *param_1)

{
  char cVar1;
  Object *in_RDX;
  int in_ESI;
  long in_FS_OFFSET;
  int local_58 [6];
  undefined8 local_40;
  undefined1 local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_58,in_RDX);
  local_40 = 0;
  local_38 = (undefined1  [16])0x0;
  Callable::bindp((Variant **)param_1,in_ESI);
  if (Variant::needs_deinit[(int)local_40] == '\0') {
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  else {
    Variant::_clear_internal();
    cVar1 = Variant::needs_deinit[local_58[0]];
  }
  if (cVar1 != '\0') {
    Variant::_clear_internal();
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<SceneTreeEditor, Vector2 const&,
   MouseButton>(SceneTreeEditor*, char const*, void (SceneTreeEditor::*)(Vector2 const&,
   MouseButton)) */

SceneTreeEditor *
create_custom_callable_function_pointer<SceneTreeEditor,Vector2_const&,MouseButton>
          (SceneTreeEditor *param_1,char *param_2,_func_void_Vector2_ptr_MouseButton *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC58;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012d820;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_Vector2_ptr_MouseButton **)(this + 0x20) = param_3 + 1;
  Callable::Callable((Callable *)param_1,this);
  return param_1;
}



/* Callable create_custom_callable_function_pointer<SceneTreeDialog>(SceneTreeDialog*, char const*,
   void (SceneTreeDialog::*)()) */

SceneTreeDialog *
create_custom_callable_function_pointer<SceneTreeDialog>
          (SceneTreeDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC58;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0012da60;
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



/* HashMap<Node*, SceneTreeEditor::CachedNode, HashMapHasherDefault,
   HashMapComparatorDefault<Node*>, DefaultTypedAllocator<HashMapElement<Node*,
   SceneTreeEditor::CachedNode> > >::insert(Node* const&, SceneTreeEditor::CachedNode const&, bool)
    */

void HashMap<Node*,SceneTreeEditor::CachedNode,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,SceneTreeEditor::CachedNode>>>
     ::insert(Node **param_1,CachedNode *param_2,bool param_3)

{
  uint *puVar1;
  undefined8 *puVar2;
  Node NVar3;
  Node NVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  long lVar8;
  void *pvVar9;
  void *__s;
  undefined8 uVar10;
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
  Node *pNVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined8 uVar39;
  void *__s_00;
  Node *pNVar40;
  undefined8 *in_RCX;
  int iVar41;
  undefined7 in_register_00000011;
  long *plVar42;
  long lVar43;
  long lVar44;
  uint uVar45;
  undefined8 uVar46;
  uint uVar47;
  char in_R8B;
  uint uVar48;
  uint uVar49;
  long lVar50;
  ulong uVar51;
  ulong uVar52;
  Node *pNVar53;
  void *local_88;
  
  plVar42 = (long *)CONCAT71(in_register_00000011,param_3);
  uVar45 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  local_88 = *(void **)(param_2 + 8);
  if (local_88 == (void *)0x0) {
    uVar52 = (ulong)uVar45;
    uVar38 = uVar52 * 4;
    uVar51 = uVar52 * 8;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(param_2 + 0x10) = uVar39;
    local_88 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(param_2 + 8) = local_88;
    if (uVar45 != 0) {
      pvVar9 = *(void **)(param_2 + 0x10);
      if ((pvVar9 < (void *)((long)local_88 + uVar51)) &&
         (local_88 < (void *)((long)pvVar9 + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)pvVar9 + uVar38 * 4) = 0;
          *(undefined8 *)((long)local_88 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar52 != uVar38);
        goto LAB_0011e0fe;
      }
      memset(pvVar9,0,uVar38);
      memset(local_88,0,uVar51);
      lVar50 = *plVar42;
      iVar41 = *(int *)(param_2 + 0x2c);
      goto LAB_0011e10f;
    }
    lVar50 = *plVar42;
    iVar41 = *(int *)(param_2 + 0x2c);
    if (local_88 != (void *)0x0) goto LAB_0011e10f;
  }
  else {
LAB_0011e0fe:
    lVar50 = *plVar42;
    iVar41 = *(int *)(param_2 + 0x2c);
LAB_0011e10f:
    if (iVar41 != 0) {
      uVar51 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4));
      lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
      uVar38 = lVar50 * 0x3ffff - 1;
      uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
      uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
      uVar38 = uVar38 >> 0x16 ^ uVar38;
      uVar52 = uVar38 & 0xffffffff;
      if ((int)uVar38 == 0) {
        uVar52 = 1;
      }
      uVar49 = 0;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar52 * lVar8;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar51;
      lVar43 = SUB168(auVar11 * auVar23,8);
      uVar47 = *(uint *)(*(long *)(param_2 + 0x10) + lVar43 * 4);
      uVar37 = SUB164(auVar11 * auVar23,8);
      if (uVar47 != 0) {
        do {
          if ((uVar47 == (uint)uVar52) &&
             (*(long *)(*(long *)((long)local_88 + lVar43 * 8) + 0x10) == lVar50)) {
            uVar39 = in_RCX[1];
            plVar42 = (long *)((long)local_88 + (ulong)uVar37 * 8);
            lVar50 = *plVar42;
            *(undefined8 *)(lVar50 + 0x18) = *in_RCX;
            *(undefined8 *)(lVar50 + 0x20) = uVar39;
            *(undefined4 *)(lVar50 + 0x28) = *(undefined4 *)(in_RCX + 2);
            *(undefined2 *)(lVar50 + 0x2c) = *(undefined2 *)((long)in_RCX + 0x14);
            *(undefined1 *)(lVar50 + 0x2e) = *(undefined1 *)((long)in_RCX + 0x16);
            *(undefined8 *)(lVar50 + 0x30) = in_RCX[3];
            *(undefined2 *)(lVar50 + 0x38) = *(undefined2 *)(in_RCX + 4);
            pNVar40 = (Node *)*plVar42;
            *(undefined1 *)(lVar50 + 0x3a) = *(undefined1 *)((long)in_RCX + 0x22);
            goto LAB_0011e673;
          }
          uVar49 = uVar49 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(uVar37 + 1) * lVar8;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar51;
          lVar43 = SUB168(auVar12 * auVar24,8);
          uVar47 = *(uint *)(*(long *)(param_2 + 0x10) + lVar43 * 4);
          uVar37 = SUB164(auVar12 * auVar24,8);
        } while ((uVar47 != 0) &&
                (auVar13._8_8_ = 0, auVar13._0_8_ = (ulong)uVar47 * lVar8, auVar25._8_8_ = 0,
                auVar25._0_8_ = uVar51, auVar14._8_8_ = 0,
                auVar14._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes +
                                       (ulong)*(uint *)(param_2 + 0x28) * 4) + uVar37) -
                            SUB164(auVar13 * auVar25,8)) * lVar8, auVar26._8_8_ = 0,
                auVar26._0_8_ = uVar51, uVar49 <= SUB164(auVar14 * auVar26,8)));
      }
    }
  }
  if ((float)uVar45 * _LC66 < (float)(iVar41 + 1)) {
    uVar45 = *(uint *)(param_2 + 0x28);
    if (uVar45 == 0x1c) {
      pNVar40 = (Node *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011e673;
    }
    uVar38 = (ulong)(uVar45 + 1);
    uVar47 = *(uint *)(hash_table_size_primes + (ulong)uVar45 * 4);
    *(undefined4 *)(param_2 + 0x2c) = 0;
    if (uVar45 + 1 < 2) {
      uVar38 = 2;
    }
    uVar45 = *(uint *)(hash_table_size_primes + uVar38 * 4);
    *(int *)(param_2 + 0x28) = (int)uVar38;
    pvVar9 = *(void **)(param_2 + 0x10);
    uVar52 = (ulong)uVar45;
    uVar38 = uVar52 * 4;
    uVar39 = Memory::alloc_static(uVar38,false);
    *(undefined8 *)(param_2 + 0x10) = uVar39;
    uVar51 = uVar52 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar51,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar45 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar51)) && (__s_00 < (void *)((long)__s + uVar38))) {
        uVar38 = 0;
        do {
          *(undefined4 *)((long)__s + uVar38 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar38 * 8) = 0;
          uVar38 = uVar38 + 1;
        } while (uVar52 != uVar38);
      }
      else {
        memset(__s,0,uVar38);
        memset(__s_00,0,uVar51);
      }
    }
    if (uVar47 != 0) {
      uVar38 = 0;
      do {
        uVar45 = *(uint *)((long)pvVar9 + uVar38 * 4);
        if (uVar45 != 0) {
          uVar48 = 0;
          lVar50 = *(long *)(param_2 + 0x10);
          uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
          uVar51 = CONCAT44(0,uVar37);
          lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          auVar15._8_8_ = 0;
          auVar15._0_8_ = (ulong)uVar45 * lVar8;
          auVar27._8_8_ = 0;
          auVar27._0_8_ = uVar51;
          lVar43 = SUB168(auVar15 * auVar27,8);
          puVar1 = (uint *)(lVar50 + lVar43 * 4);
          iVar41 = SUB164(auVar15 * auVar27,8);
          uVar49 = *puVar1;
          uVar39 = *(undefined8 *)((long)local_88 + uVar38 * 8);
          while (uVar49 != 0) {
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)uVar49 * lVar8;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar51;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)((iVar41 + uVar37) - SUB164(auVar16 * auVar28,8)) * lVar8;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar51;
            uVar36 = SUB164(auVar17 * auVar29,8);
            uVar46 = uVar39;
            if (uVar36 < uVar48) {
              *puVar1 = uVar45;
              puVar2 = (undefined8 *)((long)__s_00 + lVar43 * 8);
              uVar46 = *puVar2;
              *puVar2 = uVar39;
              uVar45 = uVar49;
              uVar48 = uVar36;
            }
            uVar48 = uVar48 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(iVar41 + 1) * lVar8;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar51;
            lVar43 = SUB168(auVar18 * auVar30,8);
            puVar1 = (uint *)(lVar50 + lVar43 * 4);
            iVar41 = SUB164(auVar18 * auVar30,8);
            uVar39 = uVar46;
            uVar49 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar43 * 8) = uVar39;
          *puVar1 = uVar45;
          *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
        }
        uVar38 = uVar38 + 1;
      } while (uVar38 != uVar47);
      Memory::free_static(local_88,false);
      Memory::free_static(pvVar9,false);
    }
  }
  uVar46 = in_RCX[1];
  NVar3 = *(Node *)((long)in_RCX + 0x22);
  uVar7 = *(undefined4 *)(in_RCX + 2);
  lVar50 = *plVar42;
  uVar5 = *(undefined2 *)((long)in_RCX + 0x14);
  NVar4 = *(Node *)((long)in_RCX + 0x16);
  uVar10 = in_RCX[3];
  uVar6 = *(undefined2 *)(in_RCX + 4);
  uVar39 = *in_RCX;
  pNVar40 = (Node *)operator_new(0x40,"");
  *(undefined4 *)(pNVar40 + 0x28) = uVar7;
  *(undefined8 *)(pNVar40 + 0x20) = uVar46;
  *(undefined2 *)(pNVar40 + 0x2c) = uVar5;
  pNVar40[0x2e] = NVar4;
  *(undefined8 *)(pNVar40 + 0x30) = uVar10;
  *(undefined2 *)(pNVar40 + 0x38) = uVar6;
  pNVar40[0x3a] = NVar3;
  *(undefined1 (*) [16])pNVar40 = (undefined1  [16])0x0;
  *(long *)(pNVar40 + 0x10) = lVar50;
  *(undefined8 *)(pNVar40 + 0x18) = uVar39;
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(Node **)(param_2 + 0x18) = pNVar40;
    *(Node **)(param_2 + 0x20) = pNVar40;
  }
  else if (in_R8B == '\0') {
    *puVar2 = pNVar40;
    *(undefined8 **)(pNVar40 + 8) = puVar2;
    *(Node **)(param_2 + 0x20) = pNVar40;
  }
  else {
    lVar50 = *(long *)(param_2 + 0x18);
    *(Node **)(lVar50 + 8) = pNVar40;
    *(long *)pNVar40 = lVar50;
    *(Node **)(param_2 + 0x18) = pNVar40;
  }
  lVar50 = *(long *)(param_2 + 0x10);
  uVar38 = *plVar42 * 0x3ffff - 1;
  uVar38 = (uVar38 ^ uVar38 >> 0x1f) * 0x15;
  uVar38 = (uVar38 ^ uVar38 >> 0xb) * 0x41;
  uVar38 = uVar38 >> 0x16 ^ uVar38;
  uVar51 = uVar38 & 0xffffffff;
  if ((int)uVar38 == 0) {
    uVar51 = 1;
  }
  uVar49 = 0;
  uVar45 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  uVar38 = CONCAT44(0,uVar45);
  uVar37 = (uint)uVar51;
  lVar8 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
  auVar19._8_8_ = 0;
  auVar19._0_8_ = uVar51 * lVar8;
  auVar31._8_8_ = 0;
  auVar31._0_8_ = uVar38;
  lVar44 = SUB168(auVar19 * auVar31,8);
  lVar43 = *(long *)(param_2 + 8);
  puVar1 = (uint *)(lVar50 + lVar44 * 4);
  iVar41 = SUB164(auVar19 * auVar31,8);
  uVar47 = *puVar1;
  pNVar35 = pNVar40;
  while (uVar47 != 0) {
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)uVar47 * lVar8;
    auVar32._8_8_ = 0;
    auVar32._0_8_ = uVar38;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = (ulong)((iVar41 + uVar45) - SUB164(auVar20 * auVar32,8)) * lVar8;
    auVar33._8_8_ = 0;
    auVar33._0_8_ = uVar38;
    uVar37 = SUB164(auVar21 * auVar33,8);
    pNVar53 = pNVar35;
    if (uVar37 < uVar49) {
      *puVar1 = (uint)uVar51;
      uVar51 = (ulong)uVar47;
      puVar2 = (undefined8 *)(lVar43 + lVar44 * 8);
      pNVar53 = (Node *)*puVar2;
      *puVar2 = pNVar35;
      uVar49 = uVar37;
    }
    uVar37 = (uint)uVar51;
    uVar49 = uVar49 + 1;
    auVar22._8_8_ = 0;
    auVar22._0_8_ = (ulong)(iVar41 + 1) * lVar8;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar38;
    lVar44 = SUB168(auVar22 * auVar34,8);
    puVar1 = (uint *)(lVar50 + lVar44 * 4);
    iVar41 = SUB164(auVar22 * auVar34,8);
    pNVar35 = pNVar53;
    uVar47 = *puVar1;
  }
  *(Node **)(lVar43 + lVar44 * 8) = pNVar35;
  *puVar1 = uVar37;
  *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
LAB_0011e673:
  *param_1 = pNVar40;
  return;
}



/* HashSet<SceneTreeEditor::CachedNode*, HashMapHasherDefault,
   HashMapComparatorDefault<SceneTreeEditor::CachedNode*> >::insert(SceneTreeEditor::CachedNode*
   const&) */

undefined1  [16]
HashSet<SceneTreeEditor::CachedNode*,HashMapHasherDefault,HashMapComparatorDefault<SceneTreeEditor::CachedNode*>>
::insert(CachedNode **param_1)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
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
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  long lVar34;
  int iVar35;
  long *in_RDX;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  uint uVar39;
  ulong uVar40;
  undefined4 uVar41;
  ulong uVar42;
  ulong uVar43;
  uint uVar44;
  undefined1 auVar45 [16];
  ulong uStack_98;
  CachedNode *local_88;
  ulong local_70;
  
  uVar32 = *(uint *)(in_RSI + 4);
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  local_88 = (CachedNode *)*in_RSI;
  if (local_88 == (CachedNode *)0x0) {
    uVar33 = (ulong)uVar31 * 4;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::alloc_static((ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    uVar32 = *(uint *)(in_RSI + 4);
    lVar34 = *in_RDX;
    local_88 = (CachedNode *)*in_RSI;
    if (local_88 != (CachedNode *)0x0) goto LAB_0011e86f;
  }
  else {
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    lVar34 = *in_RDX;
LAB_0011e86f:
    if (uVar44 != 0) {
      uVar43 = CONCAT44(0,*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4));
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
      uVar33 = lVar34 * 0x3ffff - 1;
      uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
      uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar42 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
        uVar42 = 1;
      }
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar42 * lVar3;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar43;
      lVar36 = SUB168(auVar7 * auVar19,8);
      uVar39 = *(uint *)(in_RSI[3] + lVar36 * 4);
      uVar33 = (ulong)uVar39;
      iVar35 = SUB164(auVar7 * auVar19,8);
      if (uVar39 != 0) {
        uVar39 = 0;
        do {
          if ((int)uVar42 == (int)uVar33) {
            uVar37 = *(uint *)(in_RSI[1] + lVar36 * 4);
            uStack_98 = (ulong)uVar37;
            if (*(long *)(local_88 + uStack_98 * 8) == lVar34) goto LAB_0011ed11;
          }
          uVar39 = uVar39 + 1;
          auVar8._8_8_ = 0;
          auVar8._0_8_ = (ulong)(iVar35 + 1) * lVar3;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar36 = SUB168(auVar8 * auVar20,8);
          uVar37 = *(uint *)(in_RSI[3] + lVar36 * 4);
          uVar33 = (ulong)uVar37;
          iVar35 = SUB164(auVar8 * auVar20,8);
        } while ((uVar37 != 0) &&
                (auVar9._8_8_ = 0, auVar9._0_8_ = uVar33 * lVar3, auVar21._8_8_ = 0,
                auVar21._0_8_ = uVar43, auVar10._8_8_ = 0,
                auVar10._0_8_ =
                     (ulong)((*(uint *)(hash_table_size_primes + (ulong)uVar32 * 4) + iVar35) -
                            SUB164(auVar9 * auVar21,8)) * lVar3, auVar22._8_8_ = 0,
                auVar22._0_8_ = uVar43, uVar39 <= SUB164(auVar10 * auVar22,8)));
      }
    }
  }
  if ((float)uVar31 * _LC66 < (float)(uVar44 + 1)) {
    if (uVar32 == 0x1c) {
      uStack_98 = 0;
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0);
      uVar44 = *(uint *)((long)in_RSI + 0x24);
      uVar37 = 0xffffffff;
      local_88 = (CachedNode *)*in_RSI;
      goto LAB_0011ed11;
    }
    uVar33 = (ulong)(uVar32 + 1);
    if (uVar32 + 1 < 2) {
      uVar33 = 2;
    }
    uVar31 = *(uint *)(hash_table_size_primes + uVar33 * 4);
    *(int *)(in_RSI + 4) = (int)uVar33;
    pvVar4 = (void *)in_RSI[3];
    uVar33 = (ulong)uVar31 * 4;
    pvVar5 = (void *)in_RSI[2];
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[3] = lVar34;
    lVar34 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar31 * 8,false);
    *in_RSI = lVar34;
    lVar34 = Memory::alloc_static(uVar33,false);
    in_RSI[2] = lVar34;
    lVar34 = Memory::realloc_static((void *)in_RSI[1],uVar33,false);
    in_RSI[1] = lVar34;
    if (uVar31 != 0) {
      memset((void *)in_RSI[3],0,uVar33);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      lVar3 = in_RSI[2];
      lVar36 = in_RSI[3];
      local_70 = 0;
      do {
        uVar39 = 0;
        uVar43 = local_70 & 0xffffffff;
        uVar41 = (undefined4)local_70;
        uVar31 = *(uint *)((long)pvVar4 + (ulong)*(uint *)((long)pvVar5 + local_70 * 4) * 4);
        uVar33 = (ulong)uVar31;
        uVar32 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar32);
        lVar6 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar33 * lVar6;
        auVar23._8_8_ = 0;
        auVar23._0_8_ = uVar38;
        lVar2 = SUB168(auVar11 * auVar23,8) * 4;
        iVar35 = SUB164(auVar11 * auVar23,8);
        puVar1 = (uint *)(lVar36 + lVar2);
        uVar44 = *puVar1;
        uVar42 = local_70;
        while (uVar44 != 0) {
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)uVar44 * lVar6;
          auVar24._8_8_ = 0;
          auVar24._0_8_ = uVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)((uVar32 + iVar35) - SUB164(auVar12 * auVar24,8)) * lVar6;
          auVar25._8_8_ = 0;
          auVar25._0_8_ = uVar38;
          uVar31 = SUB164(auVar13 * auVar25,8);
          if (uVar31 < uVar39) {
            *(int *)(lVar3 + uVar43 * 4) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar33;
            uVar39 = *(uint *)(lVar2 + lVar34);
            uVar33 = (ulong)uVar44;
            *(uint *)(lVar2 + lVar34) = (uint)uVar43;
            uVar43 = (ulong)uVar39;
            uVar39 = uVar31;
          }
          uVar41 = (undefined4)uVar43;
          uVar31 = (uint)uVar33;
          uVar39 = uVar39 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(iVar35 + 1) * lVar6;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar38;
          lVar2 = SUB168(auVar14 * auVar26,8) * 4;
          iVar35 = SUB164(auVar14 * auVar26,8);
          puVar1 = (uint *)(lVar36 + lVar2);
          uVar42 = uVar43;
          uVar44 = *puVar1;
        }
        *puVar1 = uVar31;
        *(int *)(lVar3 + uVar42 * 4) = iVar35;
        local_70 = local_70 + 1;
        *(undefined4 *)(lVar34 + lVar2) = uVar41;
      } while ((uint)local_70 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar4,false);
    Memory::free_static(pvVar5,false);
    uVar32 = *(uint *)(in_RSI + 4);
    uVar44 = *(uint *)((long)in_RSI + 0x24);
    local_88 = (CachedNode *)*in_RSI;
    lVar34 = *in_RDX;
  }
  uVar42 = (ulong)uVar44;
  lVar3 = in_RSI[3];
  *(long *)(local_88 + uVar42 * 8) = lVar34;
  uVar33 = lVar34 * 0x3ffff - 1;
  uVar33 = (uVar33 ^ uVar33 >> 0x1f) * 0x15;
  uVar33 = (uVar33 ^ uVar33 >> 0xb) * 0x41;
  uVar33 = uVar33 >> 0x16 ^ uVar33;
  uVar43 = uVar33 & 0xffffffff;
  if ((int)uVar33 == 0) {
    uVar43 = 1;
  }
  uVar37 = 0;
  uVar31 = *(uint *)(hash_table_size_primes + (ulong)uVar32 * 4);
  uVar40 = CONCAT44(0,uVar31);
  uVar39 = (uint)uVar43;
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)uVar32 * 8);
  auVar15._8_8_ = 0;
  auVar15._0_8_ = uVar43 * lVar36;
  auVar27._8_8_ = 0;
  auVar27._0_8_ = uVar40;
  lVar34 = SUB168(auVar15 * auVar27,8) * 4;
  iVar35 = SUB164(auVar15 * auVar27,8);
  lVar2 = in_RSI[2];
  puVar1 = (uint *)(lVar3 + lVar34);
  uVar33 = in_RSI[1];
  uVar32 = *puVar1;
  uStack_98 = uVar33;
  uVar38 = uVar42;
  while (uVar32 != 0) {
    auVar16._8_8_ = 0;
    auVar16._0_8_ = (ulong)uVar32 * lVar36;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar40;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = (ulong)((uVar31 + iVar35) - SUB164(auVar16 * auVar28,8)) * lVar36;
    auVar29._8_8_ = 0;
    auVar29._0_8_ = uVar40;
    uVar32 = SUB164(auVar17 * auVar29,8);
    if (uVar32 < uVar37) {
      *(int *)(lVar2 + uVar42 * 4) = iVar35;
      uVar44 = *puVar1;
      *puVar1 = (uint)uVar43;
      uVar39 = *(uint *)(lVar34 + uVar33);
      uVar43 = (ulong)uVar44;
      *(uint *)(lVar34 + uVar33) = (uint)uVar38;
      uVar42 = (ulong)uVar39;
      uVar38 = uVar42;
      uVar37 = uVar32;
    }
    uVar44 = (uint)uVar38;
    uVar39 = (uint)uVar43;
    uVar37 = uVar37 + 1;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)(iVar35 + 1) * lVar36;
    auVar30._8_8_ = 0;
    auVar30._0_8_ = uVar40;
    uStack_98 = SUB168(auVar18 * auVar30,8);
    lVar34 = uStack_98 * 4;
    iVar35 = SUB164(auVar18 * auVar30,8);
    puVar1 = (uint *)(lVar3 + lVar34);
    uVar32 = *puVar1;
  }
  *puVar1 = uVar39;
  *(int *)(lVar2 + uVar42 * 4) = iVar35;
  *(uint *)(uVar33 + lVar34) = uVar44;
  uVar37 = *(uint *)((long)in_RSI + 0x24);
  uVar44 = uVar37 + 1;
  *(uint *)((long)in_RSI + 0x24) = uVar44;
LAB_0011ed11:
  *(uint *)((long)param_1 + 0xc) = uVar37;
  *param_1 = local_88;
  *(uint *)(param_1 + 1) = uVar44;
  auVar45._8_8_ = uStack_98;
  auVar45._0_8_ = param_1;
  return auVar45;
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



/* WARNING: Removing unreachable block (ram,0x0011f028) */
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



/* WARNING: Removing unreachable block (ram,0x0011f328) */
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



/* WARNING: Removing unreachable block (ram,0x0011f628) */
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



/* WARNING: Removing unreachable block (ram,0x0011f928) */
/* String vformat<char const*>(String const&, char const* const) */

String * vformat<char_const*>(String *param_1,char *param_2)

{
  char cVar1;
  Variant *this;
  char *in_RDX;
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
        if (pvVar5 == (void *)0x0) goto LAB_0011fc54;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011fc54:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
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
      _err_print_error(&_LC121,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_0011fe20;
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
LAB_0011fe20:
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
      goto LAB_0012022f;
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
                    /* WARNING: Could not recover jumptable at 0x001200d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_0012022f:
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
      goto LAB_001203ef;
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
                    /* WARNING: Could not recover jumptable at 0x00120296. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)));
    return;
  }
LAB_001203ef:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::validated_call(Object*, Variant const**, Variant*) const */

void MethodBindT<bool>::validated_call(Object *param_1,Variant **param_2,Variant *param_3)

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
      goto LAB_001205d1;
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
                    /* WARNING: Could not recover jumptable at 0x0012045d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)
              ((long *)((long)param_2 + *(long *)(param_1 + 0x60)),
               *(undefined1 *)(*(long *)param_3 + 8));
    return;
  }
LAB_001205d1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<bool>::ptrcall(Object*, void const**, void*) const */

void MethodBindT<bool>::ptrcall(Object *param_1,void **param_2,void *param_3)

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
      goto LAB_001207b9;
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
                    /* WARNING: Could not recover jumptable at 0x00120642. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)((long *)((long)param_2 + *(long *)(param_1 + 0x60)),**param_3 != '\0');
    return;
  }
LAB_001207b9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void>::call
          (CallableCustomMethodPointer<SceneTreeDialog,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001209af;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001209af;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120988. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00120a71;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001209af:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00120a71:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Control, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Control,void>::call
          (CallableCustomMethodPointer<Control,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00120bcf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00120bcf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00120c91;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00120bcf:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00120c91:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00120def;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00120def;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00120dc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00120eb1;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00120def:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00120eb1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,bool>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void,bool> *this,Variant **param_1,
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
      goto LAB_00121079;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00121079;
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
        uVar4 = _LC129;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00121028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_0012113b;
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
LAB_00121079:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0012113b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,bool>::call
          (CallableCustomMethodPointer<SceneTreeDialog,void,bool> *this,Variant **param_1,
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
      goto LAB_001212f9;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_001212f9;
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
        uVar4 = _LC129;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        bVar8 = Variant::operator_cast_to_bool(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001212a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),bVar8);
          return;
        }
        goto LAB_001213bb;
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
LAB_001212f9:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001213bb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  CowData<char32_t> local_50 [8];
  CowData<char32_t> local_48 [8];
  undefined8 local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_38 >> 8;
      local_38 = (Object *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_38 = (Object *)(uVar3 << 8);
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
          goto LAB_0012148e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0012148e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC130;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_38 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar5 = local_38;
        if (pOVar7 != local_38) {
          if (pOVar7 == (Object *)0x0) {
            if (local_38 != (Object *)0x0) {
              local_38 = (Object *)0x0;
LAB_0012155d:
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
              local_38 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_38 = (Object *)0x0;
              }
              if (pOVar5 != (Object *)0x0) goto LAB_0012155d;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2));
        if (((local_38 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar5 = local_38, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_38), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
          Memory::free_static(pOVar5,false);
        }
        goto LAB_0012148e;
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
  _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0012148e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar10 = (char)ObjectDB::spin_lock == '\0';
      if (bVar10) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar10) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar9 = (ulong *)((ulong)uVar8 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar9 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00121919;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00121919;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00121870:
          uVar4 = _LC130;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_00121870;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001218b7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_001219db;
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
LAB_00121919:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001219db:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int, bool>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  Object *pOVar6;
  Object *pOVar7;
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
      goto LAB_00121c0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_00121c0d;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 4) {
      if (param_2 == 3) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],1);
        uVar3 = _LC131;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar10 = Variant::operator_cast_to_bool(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC132;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00121b99:
          uVar3 = _LC130;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_00121b99;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00121be6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6,iVar5,bVar10);
          return;
        }
        goto LAB_00121cf5;
      }
      *(undefined4 *)param_4 = 4;
      *(undefined4 *)(param_4 + 8) = 3;
    }
    else {
      *(undefined4 *)param_4 = 3;
      *(undefined4 *)(param_4 + 8) = 3;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00121c0d:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00121cf5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int, int, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton> *this,
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
      goto LAB_00121f60;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_00121f60;
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
        uVar3 = _LC133;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC134;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC132;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00121ee8:
          uVar3 = _LC130;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_00121ee8;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00121f39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0012205b;
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
LAB_00121f60:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0012205b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton> *this,
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
  char *local_48;
  undefined8 local_40;
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar6 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar5 = (ulong)local_48 >> 8;
      local_48 = (char *)(uVar5 << 8);
      LOCK();
      bVar9 = (char)ObjectDB::spin_lock == '\0';
      if (bVar9) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar9) break;
      local_48 = (char *)(uVar5 << 8);
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
            uVar3 = _LC132;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            uVar5 = Variant::operator_cast_to_long(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
            uVar3 = _LC135;
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
        goto LAB_00122125;
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
  _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00122125:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  undefined8 local_80;
  char *local_78;
  undefined8 local_70;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_78 >> 8;
      local_78 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_78 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_001223c5;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_001223c5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_0012244f:
          uVar4 = _LC136;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_0012244f;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC135;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar6);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_001223c5;
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
  local_80 = 0;
  local_78 = "\', can\'t call method.";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_80);
  uitos((ulong)local_90);
  operator+((char *)local_88,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_78,(String *)local_88);
  _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_78,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref(local_88);
  CowData<char32_t>::_unref(local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
LAB_001223c5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<SceneTreeEditor, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_b0 [8];
  CowData<char32_t> local_a8 [8];
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_98 >> 8;
      local_98 = (char *)(uVar3 << 8);
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
      local_98 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar11 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00122744;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00122744;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar5 == '\0') {
LAB_001227cc:
          uVar4 = _LC136;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = param_1[2];
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Control::typeinfo,0), lVar8 == 0))
             && (pOVar6 != (Object *)0x0)) goto LAB_001227cc;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar4 = _LC135;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        local_80 = Variant::operator_cast_to_Vector2(*param_1);
        bVar12 = (bool)(*pcVar11)((long *)(lVar1 + lVar2),&local_80,(Variant *)local_58,pOVar6);
        Variant::Variant((Variant *)local_78,bVar12);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_78[0];
        *(undefined8 *)(param_3 + 8) = local_70;
        *(undefined8 *)(param_3 + 0x10) = uStack_68;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00122744;
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
  local_a0 = 0;
  local_98 = "\', can\'t call method.";
  local_90 = 0x15;
  String::parse_latin1((StrRange *)&local_a0);
  uitos((ulong)local_b0);
  operator+((char *)local_a8,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_98,(String *)local_a8);
  _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_98,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref(local_a8);
  CowData<char32_t>::_unref(local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00122744:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, Variant, Vector2 const&, Control*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*>::call
          (CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_80 [8];
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  String local_68 [8];
  undefined8 local_60;
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_68[0] = (String)0x0;
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
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
        if (2 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00122aec;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00122aec;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar4 == '\0') {
LAB_00122b6c:
          uVar3 = _LC138;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[1];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_00122b6c;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC135;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)(local_58,(long *)(lVar1 + lVar2),&local_60,pOVar5);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_58[0];
        *(undefined8 *)(param_3 + 8) = local_50;
        *(undefined8 *)(param_3 + 0x10) = uStack_48;
        goto LAB_00122aec;
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
  local_70 = 0;
  String::parse_latin1((String *)&local_70,"\', can\'t call method.");
  uitos((ulong)local_80);
  operator+((char *)local_78,(String *)"Invalid Object id \'");
  String::operator+(local_68,(String *)local_78);
  _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00122aec:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, ObjectID>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  char cVar4;
  undefined8 uVar5;
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
      goto LAB_00122f19;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00122f19;
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
        uVar5 = _LC139;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        uVar5 = Variant::operator_cast_to_ObjectID(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00122ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5);
          return;
        }
        goto LAB_00122fdb;
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
LAB_00122f19:
    local_50 = 0;
    local_48 = "\', can\'t call method.";
    local_40 = 0x15;
    String::parse_latin1((StrRange *)&local_50);
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_48,(String *)local_58);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00122fdb:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::call
          (CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this,Variant **param_1,int param_2
          ,Variant *param_3,CallError *param_4)

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
      goto LAB_001231f5;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar9[1] == 0) goto LAB_001231f5;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],1);
        uVar3 = _LC140;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        bVar10 = Variant::operator_cast_to_bool(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_00123164:
          uVar3 = _LC130;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&TreeItem::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_00123164;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&TreeItem::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001231ce. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5,bVar10);
          return;
        }
        goto LAB_001232f5;
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
LAB_001231f5:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001232f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*, TreeItem*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*> *this,Variant **param_1
          ,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *pVVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  Object *pOVar7;
  Object *pOVar8;
  Object *pOVar9;
  long lVar10;
  uint uVar11;
  ulong *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar11 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar4 << 8);
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      local_58 = (char *)(uVar4 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar12 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00123538;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar12[1] == 0) goto LAB_00123538;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar6 == '\0') {
LAB_0012344f:
          uVar5 = _LC138;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        else {
          pVVar3 = param_1[1];
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar8 = Variant::operator_cast_to_Object_(pVVar3);
          if (((pOVar8 == (Object *)0x0) ||
              (lVar10 = __dynamic_cast(pOVar8,&Object::typeinfo,&TreeItem::typeinfo,0), lVar10 == 0)
              ) && (pOVar7 != (Object *)0x0)) goto LAB_0012344f;
        }
        pOVar7 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar7 != (Object *)0x0) {
          pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&TreeItem::typeinfo,0);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar6 == '\0') {
LAB_001234a7:
          uVar5 = _LC130;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        else {
          pVVar3 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar9 = Variant::operator_cast_to_Object_(pVVar3);
          if (((pOVar9 == (Object *)0x0) ||
              (lVar10 = __dynamic_cast(pOVar9,&Object::typeinfo,&Node::typeinfo,0), lVar10 == 0)) &&
             (pOVar8 != (Object *)0x0)) goto LAB_001234a7;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar8 != (Object *)0x0) {
          pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00123511. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,pOVar7);
          return;
        }
        goto LAB_0012369c;
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
LAB_00123538:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0012369c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*>::call
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*> *this,Variant **param_1,
          int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *this_00;
  ulong uVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  long lVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar3 = (ulong)local_58 >> 8;
      local_58 = (char *)(uVar3 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_58 = (char *)(uVar3 << 8);
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_001238e5;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_001238e5;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 2) {
      if (param_2 != 0) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_001237f0:
          uVar4 = _LC130;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          this_00 = *param_1;
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          pOVar7 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar7 == (Object *)0x0) ||
              (lVar8 = __dynamic_cast(pOVar7,&Object::typeinfo,&Node::typeinfo,0), lVar8 == 0)) &&
             (pOVar6 != (Object *)0x0)) goto LAB_001237f0;
        }
        pOVar6 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar6 != (Object *)0x0) {
          pOVar6 = (Object *)__dynamic_cast(pOVar6,&Object::typeinfo,&Node::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00123857. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar6);
          return;
        }
        goto LAB_001239a7;
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
LAB_001238e5:
    local_60 = 0;
    local_58 = "\', can\'t call method.";
    local_50 = 0x15;
    String::parse_latin1((StrRange *)&local_60);
    uitos((ulong)local_70);
    operator+((char *)local_68,(String *)"Invalid Object id \'");
    String::operator+((String *)&local_58,(String *)local_68);
    _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001239a7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<SceneTreeDialog, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,String_const&>::call
          (CallableCustomMethodPointer<SceneTreeDialog,void,String_const&> *this,Variant **param_1,
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
            cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,4);
            uVar4 = _LC141;
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
        goto LAB_00123a7e;
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
  _err_print_error(&_LC121,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Variant *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00123a7e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<bool>::_gen_argument_type_info(int) const */

undefined4 * MethodBindT<bool>::_gen_argument_type_info(int param_1)

{
  long lVar1;
  int in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar2;
  long in_FS_OFFSET;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined4 local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar2 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *puVar2 = 0;
  puVar2[6] = 0;
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[10] = 6;
  *(undefined1 (*) [16])(puVar2 + 2) = (undefined1  [16])0x0;
  if (in_EDX == 0) {
    local_70 = 0;
    local_78 = 0;
    local_68 = &_LC58;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_80 = 0;
    PropertyInfo::PropertyInfo
              ((PropertyInfo *)&local_68,1,(CowData<char32_t> *)&local_80,0,(StrRange *)&local_78,6,
               &local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if ((StringName::configured != '\0') && (local_70 != 0)) {
      StringName::unref();
    }
    *puVar2 = local_68._0_4_;
    if (*(long *)(puVar2 + 2) != local_60) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 2));
      lVar1 = local_60;
      local_60 = 0;
      *(long *)(puVar2 + 2) = lVar1;
    }
    if (*(long *)(puVar2 + 4) != local_58) {
      StringName::unref();
      lVar1 = local_58;
      local_58 = 0;
      *(long *)(puVar2 + 4) = lVar1;
    }
    puVar2[6] = local_50;
    if (*(long *)(puVar2 + 8) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(puVar2 + 8));
      lVar1 = local_48;
      local_48 = 0;
      *(long *)(puVar2 + 8) = lVar1;
    }
    puVar2[10] = local_40;
    PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::_initialize_classv() */

void ConfirmationDialog::_initialize_classv(void)

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
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      if (Window::initialize_class()::initialized == '\0') {
        if (Viewport::initialize_class()::initialized == '\0') {
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
            if ((code *)PTR__bind_methods_00136078 != Node::_bind_methods) {
              Node::_bind_methods();
            }
            Node::initialize_class()::initialized = '\x01';
          }
          local_58 = "Node";
          local_68 = 0;
          local_50 = 4;
          String::parse_latin1((StrRange *)&local_68);
          StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
          local_58 = "Viewport";
          local_70 = 0;
          local_50 = 8;
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
          Viewport::_bind_methods();
          Viewport::initialize_class()::initialized = '\x01';
        }
        local_58 = "Viewport";
        local_68 = 0;
        local_50 = 8;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "Window";
        local_70 = 0;
        local_50 = 6;
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
        Window::_bind_methods();
        Window::initialize_class()::initialized = '\x01';
      }
      local_68 = 0;
      local_58 = "Window";
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "AcceptDialog";
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
      AcceptDialog::_bind_methods();
      if ((code *)PTR__bind_compatibility_methods_00136068 != Object::_bind_compatibility_methods) {
        AcceptDialog::_bind_compatibility_methods();
      }
      AcceptDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "AcceptDialog";
    local_68 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "ConfirmationDialog";
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
    if ((code *)PTR__bind_methods_00136070 != AcceptDialog::_bind_methods) {
      ConfirmationDialog::_bind_methods();
    }
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
              if ((code *)PTR__bind_methods_00136078 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00136080 !=
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
      if ((code *)PTR__bind_methods_00136088 != Container::_bind_methods) {
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
              if ((code *)PTR__bind_methods_00136078 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00136080 !=
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
      if ((code *)PTR__bind_methods_00136088 != Container::_bind_methods) {
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



/* HFlowContainer::_initialize_classv() */

void HFlowContainer::_initialize_classv(void)

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
    if (FlowContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00136078 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00136080 !=
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
      local_58 = "FlowContainer";
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
      if ((code *)PTR__bind_methods_00136090 != Container::_bind_methods) {
        FlowContainer::_bind_methods();
      }
      FlowContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "FlowContainer";
    local_68 = 0;
    local_50 = 0xd;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HFlowContainer";
    local_70 = 0;
    local_50 = 0xe;
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



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001256eb;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_001256eb;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_001256eb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar5 != '\0') goto LAB_001258eb;
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
      if (cVar5 != '\0') goto LAB_001258eb;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_001259f5;
    }
  }
LAB_001258eb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001259f5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::is_class(String const&) const */

undefined8 __thiscall SceneTreeEditor::is_class(SceneTreeEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00125afb;
  }
  cVar4 = String::operator==(param_1,"SceneTreeEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00125afb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Container::is_class(String const&) const */

undefined8 __thiscall Container::is_class(Container *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00125c4b;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00125c4b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HFlowContainer::is_class(String const&) const */

undefined8 __thiscall HFlowContainer::is_class(HFlowContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00125d9b;
  }
  cVar5 = String::operator==(param_1,"HFlowContainer");
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
      if (cVar5 != '\0') goto LAB_00125d9b;
    }
    cVar5 = String::operator==(param_1,"FlowContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00125ea5;
    }
  }
LAB_00125d9b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00125ea5:
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
    if (cVar5 != '\0') goto LAB_00125fab;
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
      if (cVar5 != '\0') goto LAB_00125fab;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001260b5;
    }
  }
LAB_00125fab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001260b5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Window::is_class(String const&) const */

undefined8 __thiscall Window::is_class(Window *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001261bb;
  }
  cVar5 = String::operator==(param_1,"Window");
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
      if (cVar5 != '\0') goto LAB_001261bb;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_001262c5;
    }
  }
LAB_001261bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001262c5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::is_class(String const&) const */

undefined8 __thiscall ConfirmationDialog::is_class(ConfirmationDialog *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001263cb;
  }
  cVar5 = String::operator==(param_1,"ConfirmationDialog");
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
      if (cVar5 != '\0') goto LAB_001263cb;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_001264d5;
    }
  }
LAB_001263cb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001264d5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeDialog::is_class(String const&) const */

undefined8 __thiscall SceneTreeDialog::is_class(SceneTreeDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001265db;
  }
  cVar4 = String::operator==(param_1,"SceneTreeDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001265db:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar5 != '\0') goto LAB_0012672b;
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
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar5 != '\0') goto LAB_0012672b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00126835;
    }
  }
LAB_0012672b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00126835:
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
  local_78 = &_LC146;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC146;
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
      goto LAB_0012699c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0012699c:
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



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

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
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Viewport";
  local_98 = 0;
  local_70 = 8;
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
      goto LAB_00126c01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126c01:
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
  StringName::StringName((StringName *)&local_78,"Viewport",false);
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



/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Window::_get_property_listv(Window *this,List *param_1,bool param_2)

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
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "Window";
  local_98 = 0;
  local_70 = 6;
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
      goto LAB_00126eb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00126eb1:
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
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00136098 != Object::_get_property_list) {
    Window::_get_property_list((List *)this);
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Viewport::_get_property_listv((Viewport *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall AcceptDialog::_get_property_listv(AcceptDialog *this,List *param_1,bool param_2)

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
    Window::_get_property_listv((Window *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "AcceptDialog";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "AcceptDialog";
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
      goto LAB_00127181;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127181:
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
  StringName::StringName((StringName *)&local_78,"AcceptDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      Window::_get_property_listv((Window *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
ConfirmationDialog::_get_property_listv(ConfirmationDialog *this,List *param_1,bool param_2)

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
    AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "ConfirmationDialog";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "ConfirmationDialog";
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
      goto LAB_00127431;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127431:
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
  StringName::StringName((StringName *)&local_78,"ConfirmationDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SceneTreeDialog::_get_property_listv(SceneTreeDialog *this,List *param_1,bool param_2)

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
    ConfirmationDialog::_get_property_listv((ConfirmationDialog *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "SceneTreeDialog";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SceneTreeDialog";
  local_98 = 0;
  local_70 = 0xf;
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
      goto LAB_001276e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001276e1:
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
  StringName::StringName((StringName *)&local_78,"SceneTreeDialog",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      ConfirmationDialog::_get_property_listv((ConfirmationDialog *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
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
      goto LAB_00127991;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127991:
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
  if ((code *)PTR__get_property_list_001360a0 != Object::_get_property_list) {
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
      goto LAB_00127c61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127c61:
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
  if ((code *)PTR__get_property_list_001360a8 != CanvasItem::_get_property_list) {
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
      goto LAB_00127f31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00127f31:
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
      goto LAB_001281e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001281e1:
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
      goto LAB_00128491;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00128491:
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
      goto LAB_00128741;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00128741:
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



/* FlowContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall FlowContainer::_get_property_listv(FlowContainer *this,List *param_1,bool param_2)

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
  local_78 = "FlowContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "FlowContainer";
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
      goto LAB_001289f1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001289f1:
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
  StringName::StringName((StringName *)&local_78,"FlowContainer",false);
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



/* HFlowContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall HFlowContainer::_get_property_listv(HFlowContainer *this,List *param_1,bool param_2)

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
    FlowContainer::_get_property_listv((FlowContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HFlowContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HFlowContainer";
  local_98 = 0;
  local_70 = 0xe;
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
      goto LAB_00128ca1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00128ca1:
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
  StringName::StringName((StringName *)&local_78,"HFlowContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      FlowContainer::_get_property_listv((FlowContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
SceneTreeEditor::_get_property_listv(SceneTreeEditor *this,List *param_1,bool param_2)

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
  local_78 = "SceneTreeEditor";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SceneTreeEditor";
  local_98 = 0;
  local_70 = 0xf;
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
      goto LAB_00128f51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00128f51:
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
  StringName::StringName((StringName *)&local_78,"SceneTreeEditor",false);
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



/* CowData<char32_t>::_realloc(long) */

undefined8 __thiscall CowData<char32_t>::_realloc(CowData<char32_t> *this,long param_1)

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



/* Ref<Script>::unref() */

void __thiscall Ref<Script>::unref(Ref<Script> *this)

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



/* Ref<SceneState>::unref() */

void __thiscall Ref<SceneState>::unref(Ref<SceneState> *this)

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



/* Ref<Script>::TEMPNAMEPLACEHOLDERVALUE(Variant const&) */

void __thiscall Ref<Script>::operator=(Ref<Script> *this,Variant *param_1)

{
  Object *pOVar1;
  char cVar2;
  Object *pOVar3;
  
  pOVar3 = (Object *)Variant::get_validated_object();
  pOVar1 = *(Object **)this;
  if (pOVar1 == pOVar3) {
    return;
  }
  if (pOVar3 == (Object *)0x0) {
    if (pOVar1 == (Object *)0x0) {
      return;
    }
    *(undefined8 *)this = 0;
  }
  else {
    pOVar3 = (Object *)__dynamic_cast(pOVar3,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar1 == pOVar3) {
      return;
    }
    *(Object **)this = pOVar3;
    if ((pOVar3 != (Object *)0x0) && (cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      *(undefined8 *)this = 0;
    }
    if (pOVar1 == (Object *)0x0) {
      return;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar1), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
    Memory::free_static(pOVar1,false);
    return;
  }
  return;
}



/* MethodBind* create_method_bind<SceneTreeEditor, bool>(void (SceneTreeEditor::*)(bool)) */

MethodBind * create_method_bind<SceneTreeEditor,bool>(_func_void_bool *param_1)

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
  *(_func_void_bool **)(this + 0x58) = param_1;
  *(undefined ***)this = &PTR__gen_argument_type_0012dca0;
  *(undefined8 *)(this + 0x60) = in_RSI;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 1;
  local_40 = 0;
  local_38 = "SceneTreeEditor";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<SceneTreeEditor>(void (SceneTreeEditor::*)()) */

MethodBind * create_method_bind<SceneTreeEditor>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012dd00;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SceneTreeEditor";
  local_30 = 0xf;
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



/* MethodBind* create_method_bind<SceneTreeDialog>(void (SceneTreeDialog::*)()) */

MethodBind * create_method_bind<SceneTreeDialog>(_func_void *param_1)

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
  *(undefined ***)this = &PTR__gen_argument_type_0012dd00;
  MethodBind::_generate_argument_types((int)this);
  *(undefined4 *)(this + 0x34) = 0;
  local_40 = 0;
  local_38 = "SceneTreeDialog";
  local_30 = 0xf;
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



/* CowData<int>::_unref() */

void __thiscall CowData<int>::_unref(CowData<int> *this)

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



/* SceneTreeDialog::_initialize_classv() */

void SceneTreeDialog::_initialize_classv(void)

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
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      if (AcceptDialog::initialize_class()::initialized == '\0') {
        if (Window::initialize_class()::initialized == '\0') {
          if (Viewport::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00136078 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Node");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"Viewport");
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
            Viewport::_bind_methods();
            Viewport::initialize_class()::initialized = '\x01';
          }
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Viewport");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          local_70 = 0;
          String::parse_latin1((String *)&local_70,"Window");
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
          Window::_bind_methods();
          Window::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Window";
        local_50 = 6;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "AcceptDialog";
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
        AcceptDialog::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00136068 != Object::_bind_compatibility_methods)
        {
          AcceptDialog::_bind_compatibility_methods();
        }
        AcceptDialog::initialize_class()::initialized = '\x01';
      }
      local_58 = "AcceptDialog";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
      local_58 = "ConfirmationDialog";
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
      if ((code *)PTR__bind_methods_00136070 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_68 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "SceneTreeDialog";
    local_70 = 0;
    local_50 = 0xf;
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



/* SceneTreeEditor::_initialize_classv() */

void SceneTreeEditor::_initialize_classv(void)

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
    if (Control::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_68 = 0;
          String::parse_latin1((String *)&local_68,"Object");
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
          if ((code *)PTR__bind_methods_00136078 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_68 = 0;
        local_58 = "Node";
        local_50 = 4;
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
        local_58 = "CanvasItem";
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
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00136080 != Object::_bind_compatibility_methods)
        {
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
      if ((code *)PTR__bind_methods_001360b0 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_58 = "Control";
    local_68 = 0;
    local_50 = 7;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "SceneTreeEditor";
    local_70 = 0;
    local_50 = 0xf;
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
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
LAB_0012a7b0:
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
  if (lVar9 == 0) goto LAB_0012a7b0;
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
    goto LAB_0012a806;
  }
  if (lVar9 == lVar5) {
LAB_0012a72b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_0012a806:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_0012a69f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0012a72b;
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
LAB_0012a69f:
  puVar7[-1] = param_1;
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0012a8c0) */
/* SceneTreeEditor::_notificationv(int, bool) */

void __thiscall SceneTreeEditor::_notificationv(SceneTreeEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_001360b8 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_001360b8 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* SceneTreeEditor::update_tree() */

void __thiscall SceneTreeEditor::update_tree(SceneTreeEditor *this)

{
  if (((byte)this[0x2fa] & 0x40) == 0) {
    this[0xaf3] = (SceneTreeEditor)0x0;
    return;
  }
  _update_tree(SUB81(this,0));
  return;
}



/* SceneTreeDialog::_notificationv(int, bool) */

void __thiscall SceneTreeDialog::_notificationv(SceneTreeDialog *this,int param_1,bool param_2)

{
  if (param_2) {
    _notification(this,param_1);
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
    return;
  }
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
  _notification(this,param_1);
  return;
}



/* CowData<Ref<Texture2D> >::_unref() */

void __thiscall CowData<Ref<Texture2D>>::_unref(CowData<Ref<Texture2D>> *this)

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
LAB_0012aa1d:
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
            goto LAB_0012aa1d;
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



/* CowData<Node*>::_realloc(long) */

undefined8 __thiscall CowData<Node*>::_realloc(CowData<Node*> *this,long param_1)

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
/* Error CowData<Node*>::resize<false>(long) */

undefined8 __thiscall CowData<Node*>::resize<false>(CowData<Node*> *this,long param_1)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long lVar8;
  long lVar9;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  lVar3 = *(long *)this;
  if (lVar3 == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar9 = 0;
    lVar3 = 0;
  }
  else {
    lVar9 = *(long *)(lVar3 + -8);
    if (param_1 == lVar9) {
      return 0;
    }
    if (param_1 == 0) {
      LOCK();
      plVar1 = (long *)(lVar3 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) {
        *(undefined8 *)this = 0;
        return 0;
      }
      lVar3 = *(long *)this;
      *(undefined8 *)this = 0;
      Memory::free_static((void *)(lVar3 + -0x10),false);
      return 0;
    }
    _copy_on_write(this);
    lVar3 = lVar9 * 8;
    if (lVar3 != 0) {
      uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      lVar3 = (uVar4 | uVar4 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_0012ad20:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar4 = param_1 * 8 - 1;
  uVar4 = uVar4 | uVar4 >> 1;
  uVar4 = uVar4 | uVar4 >> 2;
  uVar4 = uVar4 | uVar4 >> 4;
  uVar4 = uVar4 | uVar4 >> 8;
  uVar4 = uVar4 | uVar4 >> 0x10;
  uVar4 = uVar4 | uVar4 >> 0x20;
  lVar8 = uVar4 + 1;
  if (lVar8 == 0) goto LAB_0012ad20;
  if (lVar9 < param_1) {
    if (lVar8 != lVar3) {
      if (lVar9 == 0) {
        puVar5 = (undefined8 *)Memory::alloc_static(uVar4 + 0x11,false);
        if (puVar5 == (undefined8 *)0x0) {
          _err_print_error("resize","./core/templates/cowdata.h",0x171,
                           "Parameter \"mem_new\" is null.",0,0);
          return 6;
        }
        puVar7 = puVar5 + 2;
        *puVar5 = 1;
        puVar5[1] = 0;
        *(undefined8 **)this = puVar7;
        goto LAB_0012ac31;
      }
      uVar6 = _realloc(this,lVar8);
      if ((int)uVar6 != 0) {
        return uVar6;
      }
    }
    puVar7 = *(undefined8 **)this;
    if (puVar7 != (undefined8 *)0x0) {
LAB_0012ac31:
      puVar7[-1] = param_1;
      return 0;
    }
  }
  else {
    if ((lVar8 != lVar3) && (uVar6 = _realloc(this,lVar8), (int)uVar6 != 0)) {
      return uVar6;
    }
    if (*(long *)this != 0) {
      *(long *)(*(long *)this + -8) = param_1;
      return 0;
    }
  }
  _DAT_00000000 = 0;
                    /* WARNING: Does not return */
  pcVar2 = (code *)invalidInstructionException();
  (*pcVar2)();
}



/* CowData<Ref<Texture2D> >::_realloc(long) */

undefined8 __thiscall CowData<Ref<Texture2D>>::_realloc(CowData<Ref<Texture2D>> *this,long param_1)

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
/* Error CowData<Ref<Texture2D> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<Texture2D>>::resize<false>(CowData<Ref<Texture2D>> *this,long param_1)

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
LAB_0012b0b0:
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
  if (lVar11 == 0) goto LAB_0012b0b0;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0012af5a:
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
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0012af5a;
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
    goto LAB_0012af20;
  }
  if (lVar11 == lVar8) {
LAB_0012b02b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0012af20:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0012b00b;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0012b02b;
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
LAB_0012b00b:
  puVar10[-1] = param_1;
  return 0;
}



/* void call_with_variant_args_dv<__UnexistingClass, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */

void call_with_variant_args_dv<__UnexistingClass,bool>
               (__UnexistingClass *param_1,_func_void_bool *param_2,Variant **param_3,int param_4,
               CallError *param_5,Vector *param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  char cVar5;
  undefined4 uVar6;
  undefined4 in_register_0000000c;
  long lVar7;
  uint uVar8;
  Variant *this;
  long in_stack_00000008;
  
  uVar8 = (uint)param_5;
  if (1 < uVar8) {
    uVar6 = 3;
    goto LAB_0012b1fd;
  }
  lVar1 = *(long *)(in_stack_00000008 + 8);
  if (lVar1 == 0) {
    if (uVar8 != 1) goto LAB_0012b260;
  }
  else {
    lVar2 = *(long *)(lVar1 + -8);
    if ((int)lVar2 < (int)(uVar8 ^ 1)) {
LAB_0012b260:
      uVar6 = 4;
LAB_0012b1fd:
      *(undefined4 *)param_6 = uVar6;
      *(undefined4 *)(param_6 + 8) = 1;
      return;
    }
    if (uVar8 != 1) {
      lVar7 = (long)((int)lVar2 + -1);
      if (lVar2 <= lVar7) {
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar7,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar7 * 0x18);
      goto LAB_0012b17b;
    }
  }
  this = *(Variant **)CONCAT44(in_register_0000000c,param_4);
LAB_0012b17b:
  *(undefined4 *)param_6 = 0;
  if (((ulong)param_2 & 1) != 0) {
    param_2 = *(_func_void_bool **)(param_2 + *(long *)(param_1 + (long)param_3) + -1);
  }
  cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
  uVar4 = _LC129;
  if (cVar5 == '\0') {
    *(undefined4 *)param_6 = 2;
    *(undefined8 *)(param_6 + 4) = uVar4;
  }
  Variant::operator_cast_to_bool(this);
                    /* WARNING: Could not recover jumptable at 0x0012b1d7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*param_2)(SUB81(param_1 + (long)param_3,0));
  return;
}



/* MethodBindT<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindT<bool>::call(Object *param_1,Variant **param_2,int param_3,CallError *param_4)

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
      _err_print_error(&_LC121,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_0012b2c6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,bool>
            (p_Var2,(_func_void_bool *)param_2[0xb],(Variant **)param_2[0xc],(int)param_4,in_R8,
             in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_0012b2c6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SceneTreeEditor::get_scene_node() const */

void SceneTreeEditor::_GLOBAL__sub_I_get_scene_node(void)

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
  if (Animation::PARAMETERS_BASE_PATH == '\0') {
    Animation::PARAMETERS_BASE_PATH = '\x01';
    Animation::PARAMETERS_BASE_PATH = 0;
    String::parse_latin1((String *)&Animation::PARAMETERS_BASE_PATH,"parameters/");
    __cxa_atexit(String::~String,&Animation::PARAMETERS_BASE_PATH,&__dso_handle);
  }
  if (AudioStreamRandomizer::base_property_helper != '\0') {
    return;
  }
  AudioStreamRandomizer::base_property_helper = 1;
  AudioStreamRandomizer::base_property_helper._56_8_ = 2;
  AudioStreamRandomizer::base_property_helper._64_8_ = 0;
  AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1  [16])0x0;
  AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,AudioStreamRandomizer::base_property_helper,
               &__dso_handle);
  return;
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
/* List<Node::GroupInfo, DefaultAllocator>::~List() */

void __thiscall
List<Node::GroupInfo,DefaultAllocator>::~List(List<Node::GroupInfo,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<Node*, DefaultAllocator>::~List() */

void __thiscall List<Node*,DefaultAllocator>::~List(List<Node*,DefaultAllocator> *this)

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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall PropertyInfo::PropertyInfo(void)

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
/* HFlowContainer::~HFlowContainer() */

void __thiscall HFlowContainer::~HFlowContainer(HFlowContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

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
/* MethodBindT<bool>::~MethodBindT() */

void __thiscall MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void, Node*,
   TreeItem*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Node*,TreeItem*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void, ObjectID>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,ObjectID> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,Variant,Vector2_const&,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<SceneTreeEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<SceneTreeEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Vector2_const&,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int,
   bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeEditor,void,Object*,int,int,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<Control, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<Control,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<Control,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeDialog, void, String const&>::~CallableCustomMethodPointer()
    */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<SceneTreeDialog, void, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<SceneTreeDialog,void,bool>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<SceneTreeDialog,void,bool> *this)

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


