
/* CreateDialog::_hide_requested() */

void CreateDialog::_hide_requested(void)

{
  AcceptDialog::_cancel_pressed();
  return;
}



/* CreateDialog::_sbox_input(Ref<InputEvent> const&) */

void __thiscall CreateDialog::_sbox_input(CreateDialog *this,Ref *param_1)

{
  long *plVar1;
  code *pcVar2;
  char cVar3;
  StringName *pSVar4;
  Object *pOVar5;
  long lVar6;
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
          goto LAB_00100350;
        }
        else {
          cVar3 = StringName::configured;
          if (StringName::configured == '\0') goto LAB_001000dc;
LAB_00100350:
          if ((local_50 == 0) || (StringName::unref(), StringName::configured != '\0'))
          goto LAB_001001fb;
        }
      }
      else {
        cVar3 = StringName::configured;
        if (StringName::configured == '\0') goto LAB_001000dc;
LAB_001001fb:
        if (local_58 != 0) {
          StringName::unref();
        }
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
      }
      if (cVar3 != '\0') goto LAB_001000dc;
      StringName::StringName((StringName *)&local_48,"ui_select",false);
      cVar3 = InputEvent::is_action_pressed(pSVar4,SUB81((StringName *)&local_48,0),true);
      if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
        StringName::unref();
      }
      if (cVar3 != '\0') {
        lVar6 = Tree::get_selected();
        if (lVar6 != 0) {
          TreeItem::is_collapsed();
          TreeItem::set_collapsed(SUB81(lVar6,0));
        }
        goto LAB_00100149;
      }
    }
    else {
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
LAB_001000dc:
      plVar1 = *(long **)(this + 0xdc0);
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
LAB_00100149:
      Control::accept_event();
    }
    cVar3 = RefCounted::unreference();
    if ((cVar3 != '\0') && (cVar3 = predelete_handler((Object *)pSVar4), cVar3 != '\0')) {
      (**(code **)(*(long *)pSVar4 + 0x140))(pSVar4);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(pSVar4,false);
        return;
      }
      goto LAB_001003b1;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001003b1:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::_is_type_preferred(String const&) const */

ulong __thiscall CreateDialog::_is_type_preferred(CreateDialog *this,String *param_1)

{
  char cVar1;
  uint uVar2;
  ulong uVar3;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  StringName::StringName((StringName *)&local_38,param_1,false);
  cVar1 = ClassDB::class_exists((StringName *)&local_38);
  if ((StringName::configured != '\0') && (local_38 != 0)) {
    StringName::unref();
  }
  if (cVar1 == '\0') {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar3 = EditorData::script_class_is_parent((String *)(EditorNode::singleton + 0x430),param_1);
      return uVar3;
    }
    goto LAB_001004d7;
  }
  StringName::StringName((StringName *)&local_38,(String *)(this + 0xde0),false);
  StringName::StringName((StringName *)&local_40,param_1,false);
  uVar2 = ClassDB::is_parent_class((StringName *)&local_40,(StringName *)&local_38);
  if (StringName::configured != '\0') {
    if (local_40 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00100480;
    }
    if (local_38 != 0) {
      StringName::unref();
    }
  }
LAB_00100480:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar2;
  }
LAB_001004d7:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::_is_class_disabled_by_feature_profile(StringName const&) const */

undefined4 CreateDialog::_is_class_disabled_by_feature_profile(StringName *param_1)

{
  long lVar1;
  char cVar2;
  undefined4 uVar3;
  long in_FS_OFFSET;
  undefined8 local_28;
  
  uVar3 = 0;
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  EditorFeatureProfileManager::get_current_profile();
  if (local_28 != (StringName *)0x0) {
    uVar3 = EditorFeatureProfile::is_class_disabled(local_28);
    if (local_28 != (StringName *)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
        cVar2 = predelete_handler((Object *)local_28);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)local_28 + 0x140))(local_28);
          Memory::free_static(local_28,false);
        }
      }
    }
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::get_selected_type() */

CreateDialog * __thiscall CreateDialog::get_selected_type(CreateDialog *this)

{
  long lVar1;
  long lVar2;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Tree::get_selected();
  if (lVar2 == 0) {
    *(undefined8 *)this = 0;
  }
  else {
    TreeItem::get_text((int)this);
  }
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

undefined4 CreateDialog::can_drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  Variant aVStack_88 [8];
  Variant local_80 [8];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(aVStack_88);
  Variant::Variant((Variant *)local_78,"type");
  cVar1 = Dictionary::has(aVStack_88);
  if (cVar1 == '\0') {
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else {
    Variant::Variant((Variant *)local_58,"type");
    Dictionary::operator[](aVStack_88);
    Variant::operator_cast_to_String(local_80);
    uVar2 = String::operator==((String *)local_80,"create_favorite_drag");
    CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((char)uVar2 != '\0') {
      Tree::set_drop_mode_flags((int)*(undefined8 *)(param_1 + 0xe00));
      goto LAB_00100662;
    }
  }
  uVar2 = 0;
LAB_00100662:
  Dictionary::~Dictionary((Dictionary *)aVStack_88);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::instantiate_selected() */

CreateDialog * __thiscall CreateDialog::instantiate_selected(CreateDialog *this)

{
  char cVar1;
  long lVar2;
  Object *pOVar3;
  String *pSVar4;
  long in_FS_OFFSET;
  CowData<char32_t> local_a8 [8];
  long local_a0;
  int local_98 [8];
  int local_78 [2];
  undefined1 local_70 [16];
  undefined4 local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Tree::get_selected();
  if (lVar2 == 0) {
    *(undefined4 *)this = 0;
    *(undefined1 (*) [16])(this + 8) = (undefined1  [16])0x0;
  }
  else {
    TreeItem::get_metadata((int)local_98);
    local_78[0] = 0;
    local_78[1] = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_98[0] == 0) {
      TreeItem::get_text((int)local_a8);
      StringName::StringName((StringName *)&local_a0,(String *)local_a8,false);
      pOVar3 = (Object *)ClassDB::instantiate((StringName *)&local_a0);
      Variant::Variant((Variant *)local_58,pOVar3);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      local_78[0] = local_58[0];
      local_70._0_8_ = local_50;
      local_70._8_8_ = uStack_48;
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
    }
    else {
      Variant::operator_cast_to_String((Variant *)local_a8);
      StringName::StringName((StringName *)&local_a0,(String *)local_a8,false);
      cVar1 = ScriptServer::is_global_class((StringName *)&local_a0);
      if ((StringName::configured != '\0') && (local_a0 != 0)) {
        StringName::unref();
      }
      lVar2 = EditorNode::singleton;
      if (cVar1 == '\0') {
        TreeItem::get_text((int)(StringName *)&local_a0);
        EditorData::instantiate_custom_type((String *)local_58,(String *)(lVar2 + 0x430));
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70._0_8_ = local_50;
        local_70._8_8_ = uStack_48;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
      }
      else {
        EditorData::script_class_instance((String *)local_58);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        local_78[0] = local_58[0];
        local_70._0_8_ = local_50;
        local_70._8_8_ = uStack_48;
        pOVar3 = Variant::operator_cast_to_Object_((Variant *)local_78);
        if (pOVar3 != (Object *)0x0) {
          pSVar4 = (String *)__dynamic_cast(pOVar3,&Object::typeinfo,&Node::typeinfo,0);
          if (pSVar4 != (String *)0x0) {
            Node::set_name(pSVar4);
          }
        }
      }
    }
    CowData<char32_t>::_unref(local_a8);
    pOVar3 = (Object *)(EditorNode::singleton + 0x430);
    Variant::operator_cast_to_Object_((Variant *)local_78);
    EditorData::instantiate_object_properties(pOVar3);
    *(int *)this = local_78[0];
    *(undefined8 *)(this + 8) = local_70._0_8_;
    *(undefined8 *)(this + 0x10) = local_70._8_8_;
    if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::get_drag_data_fw(Vector2 const&, Control*) */

Vector2 * CreateDialog::get_drag_data_fw(Vector2 *param_1,Control *param_2)

{
  Object *pOVar1;
  char cVar2;
  long lVar3;
  Variant *pVVar4;
  Button *this;
  int iVar5;
  long in_FS_OFFSET;
  Dictionary local_88 [8];
  Object *local_80;
  int local_78 [8];
  int local_58 [2];
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = Tree::get_item_at_position(*(Vector2 **)(param_2 + 0xe00));
  if (lVar3 == 0) {
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  }
  else {
    Dictionary::Dictionary(local_88);
    Variant::Variant((Variant *)local_58,"create_favorite_drag");
    Variant::Variant((Variant *)local_78,"type");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_88);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar5 = (int)(CowData<char32_t> *)&local_80;
    TreeItem::get_text(iVar5);
    Variant::Variant((Variant *)local_58,(String *)&local_80);
    Variant::Variant((Variant *)local_78,"class");
    pVVar4 = (Variant *)Dictionary::operator[]((Variant *)local_88);
    if (pVVar4 != (Variant *)local_58) {
      if (Variant::needs_deinit[*(int *)pVVar4] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)pVVar4 = 0;
      *(int *)pVVar4 = local_58[0];
      *(undefined8 *)(pVVar4 + 8) = local_50;
      *(undefined8 *)(pVVar4 + 0x10) = uStack_48;
      local_58[0] = 0;
    }
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    this = (Button *)operator_new(0xc10,"");
    local_80 = (Object *)0x0;
    Button::Button(this,(String *)&local_80);
    postinitialize_handler((Object *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    Button::set_flat(SUB81(this,0));
    TreeItem::get_icon(iVar5);
    Button::set_button_icon((Ref *)this);
    if (local_80 != (Object *)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_80;
      if (cVar2 != '\0') {
        cVar2 = predelete_handler(local_80);
        if (cVar2 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))();
          Memory::free_static(pOVar1,false);
        }
      }
    }
    TreeItem::get_text(iVar5);
    Button::set_text((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    Node::set_auto_translate_mode(this,2);
    Control::set_drag_preview(*(Control **)(param_2 + 0xe00));
    Variant::Variant((Variant *)param_1,local_88);
    Dictionary::~Dictionary(local_88);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::CreateDialog() */

void __thiscall CreateDialog::CreateDialog(CreateDialog *this)

{
  long *plVar1;
  code *pcVar2;
  StringName *pSVar3;
  undefined8 uVar4;
  String *pSVar5;
  SplitContainer *this_00;
  SplitContainer *this_01;
  BoxContainer *pBVar6;
  Tree *pTVar7;
  CallableCustom *pCVar8;
  ItemList *this_02;
  LineEdit *this_03;
  BoxContainer *this_04;
  Button *this_05;
  EditorHelpBit *this_06;
  int iVar9;
  long in_FS_OFFSET;
  float fVar10;
  float fVar11;
  Tree local_a8 [16];
  Callable local_98 [16];
  Tree local_88 [16];
  Callable local_78 [16];
  long local_68 [2];
  long local_58 [2];
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined8 *)(this + 0xdc8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011b150;
  uVar4 = _LC41;
  this[0xdd0] = (CreateDialog)0x0;
  *(undefined8 *)(this + 0xe40) = uVar4;
  *(undefined8 *)(this + 0xe70) = uVar4;
  *(undefined8 *)(this + 0xea0) = uVar4;
  *(undefined8 *)(this + 0xed0) = uVar4;
  *(undefined8 *)(this + 0xef8) = uVar4;
  *(undefined8 *)(this + 0xde8) = 0;
  *(undefined8 *)(this + 0xec8) = 0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe08) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe50) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe80) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe90) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xea8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xeb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xed8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xee8) = (undefined1  [16])0x0;
  String::parse_latin1((String *)(this + 0xdc8),"Object");
  String::parse_latin1((String *)(this + 0xde0),"");
  StringName::StringName((StringName *)local_68,"PluginScript",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)local_68,"ScriptCreateDialog",false);
  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
            ((StringName *)local_58);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  this_00 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_00,false);
  this_00[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011aa60;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_01,true);
  this_01[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_01 = &PTR__initialize_classv_0011add8;
  postinitialize_handler((Object *)this_01);
  Node::add_child(this_00,this_01,0,0);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_0011a470;
  postinitialize_handler((Object *)pBVar6);
  fVar10 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar10 * _LC45._4_4_,fVar10 * (float)_LC45);
  Control::set_custom_minimum_size((Vector2 *)pBVar6);
  Control::set_v_size_flags(pBVar6,3);
  Node::add_child(this_01,pBVar6,0,0);
  pTVar7 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar7);
  postinitialize_handler((Object *)pTVar7);
  *(Tree **)(this + 0xe00) = pTVar7;
  Node::set_auto_translate_mode(pTVar7,2);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xe00),0));
  Tree::set_hide_folding(SUB81(*(undefined8 *)(this + 0xe00),0));
  Tree::set_allow_reselect(SUB81(*(undefined8 *)(this + 0xe00),0));
  plVar1 = *(long **)(this + 0xe00);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<CreateDialog>
            ((CreateDialog *)local_58,(char *)this,(_func_void *)"&CreateDialog::_favorite_selected"
            );
  StringName::StringName((StringName *)local_68,"cell_selected",false);
  (*pcVar2)(plVar1,(StringName *)local_68,(StringName *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xe00);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<CreateDialog>
            ((CreateDialog *)local_58,(char *)this,
             (_func_void *)"&CreateDialog::_favorite_activated");
  StringName::StringName((StringName *)local_68,"item_activated",false);
  (*pcVar2)(plVar1,(StringName *)local_68,(StringName *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  pSVar3 = *(StringName **)(this + 0xe00);
  StringName::StringName((StringName *)local_58,"draw_guides",false);
  iVar9 = (int)(StringName *)local_58;
  Control::add_theme_constant_override(pSVar3,iVar9);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  pSVar3 = *(StringName **)(this + 0xe00);
  StringName::StringName((StringName *)local_58,"TreeSecondary",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  plVar1 = *(long **)(this + 0xe00);
  pcVar2 = *(code **)(*plVar1 + 0x318);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC0;
  *(CreateDialog **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_0011b608;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar4;
  *(code **)(pCVar8 + 0x38) = drop_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "CreateDialog::drop_data_fw";
  Callable::Callable((Callable *)local_58,pCVar8);
  Callable::bind<Tree*>((Tree *)local_68);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC0;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar8 = &PTR_hash_0011b578;
  *(undefined8 *)(pCVar8 + 0x30) = uVar4;
  *(code **)(pCVar8 + 0x38) = can_drop_data_fw;
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(CreateDialog **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "CreateDialog::can_drop_data_fw";
  Callable::Callable(local_78,pCVar8);
  Callable::bind<Tree*>(local_88);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(CreateDialog **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar8 + 0x20) = &_LC0;
  *(undefined ***)pCVar8 = &PTR_hash_0011b4e8;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar4;
  *(code **)(pCVar8 + 0x38) = get_drag_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "CreateDialog::get_drag_data_fw";
  Callable::Callable(local_98,pCVar8);
  Callable::bind<Tree*>(local_a8);
  (*pcVar2)(plVar1,local_a8,local_88,(StringName *)local_68);
  Callable::~Callable((Callable *)local_a8);
  Callable::~Callable(local_98);
  Callable::~Callable((Callable *)local_88);
  Callable::~Callable(local_78);
  Callable::~Callable((Callable *)local_68);
  Callable::~Callable((Callable *)local_58);
  uVar4 = *(undefined8 *)(this + 0xe00);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Favorites:");
  TTR((String *)local_78,(String *)local_68);
  VBoxContainer::add_margin_child((String *)pBVar6,(Control *)local_78,SUB81(uVar4,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_0011a470;
  postinitialize_handler((Object *)pBVar6);
  Node::add_child(this_01,pBVar6,0,0);
  fVar10 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar10 * _LC45._4_4_,fVar10 * (float)_LC45);
  Control::set_custom_minimum_size((Vector2 *)pBVar6);
  Control::set_v_size_flags(pBVar6,3);
  this_02 = (ItemList *)operator_new(0xb80,"");
  ItemList::ItemList(this_02);
  postinitialize_handler((Object *)this_02);
  *(ItemList **)(this + 0xe08) = this_02;
  Node::set_auto_translate_mode(this_02,2);
  uVar4 = *(undefined8 *)(this + 0xe08);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Recent:");
  TTR((String *)local_78,(String *)local_68);
  VBoxContainer::add_margin_child((String *)pBVar6,(Control *)local_78,SUB81(uVar4,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  ItemList::set_allow_reselect(SUB81(*(undefined8 *)(this + 0xe08),0));
  plVar1 = *(long **)(this + 0xe08);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<CreateDialog,int>
            ((CreateDialog *)local_58,(char *)this,
             (_func_void_int *)"&CreateDialog::_history_selected");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x260,(StringName *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xe08);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<CreateDialog,int>
            ((CreateDialog *)local_58,(char *)this,
             (_func_void_int *)"&CreateDialog::_history_activated");
  StringName::StringName((StringName *)local_68,"item_activated",false);
  (*pcVar2)(plVar1,(StringName *)local_68,(StringName *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  pSVar3 = *(StringName **)(this + 0xe08);
  StringName::StringName((StringName *)local_58,"draw_guides",false);
  Control::add_theme_constant_override(pSVar3,iVar9);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  pSVar3 = *(StringName **)(this + 0xe08);
  StringName::StringName((StringName *)local_58,"ItemListSecondary",false);
  Control::set_theme_type_variation(pSVar3);
  if ((StringName::configured != '\0') && (local_58[0] != 0)) {
    StringName::unref();
  }
  pBVar6 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar6,true);
  pBVar6[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar6 = &PTR__initialize_classv_0011a470;
  postinitialize_handler((Object *)pBVar6);
  fVar10 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar10 * _LC60._4_4_,fVar10 * (float)_LC60);
  Control::set_custom_minimum_size((Vector2 *)pBVar6);
  Control::set_h_size_flags(pBVar6,3);
  Node::add_child(this_00,pBVar6,0,0);
  this_03 = (LineEdit *)operator_new(0xbb0,"");
  local_58[0] = 0;
  LineEdit::LineEdit(this_03,(String *)local_58);
  postinitialize_handler((Object *)this_03);
  *(LineEdit **)(this + 0xdb8) = this_03;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  LineEdit::set_clear_button_enabled(SUB81(*(undefined8 *)(this + 0xdb8),0));
  Control::set_h_size_flags(*(undefined8 *)(this + 0xdb8),3);
  plVar1 = *(long **)(this + 0xdb8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(CreateDialog **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar8 + 0x20) = &_LC0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar8 = &PTR_hash_0011b728;
  *(undefined8 *)(pCVar8 + 0x30) = uVar4;
  *(code **)(pCVar8 + 0x38) = _text_changed;
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "CreateDialog::_text_changed";
  Callable::Callable((Callable *)local_58,pCVar8);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x270,(StringName *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xdb8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(CreateDialog **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar8 + 0x20) = &_LC0;
  *(undefined ***)pCVar8 = &PTR_hash_0011b7b8;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar4;
  *(code **)(pCVar8 + 0x38) = _sbox_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "CreateDialog::_sbox_input";
  Callable::Callable((Callable *)local_58,pCVar8);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x28,(StringName *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  this_04 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_04,false);
  this_04[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_04 = &PTR__initialize_classv_0011a0f8;
  postinitialize_handler((Object *)this_04);
  Node::add_child(this_04,*(undefined8 *)(this + 0xdb8),0,0);
  this_05 = (Button *)operator_new(0xc10,"");
  local_58[0] = 0;
  Button::Button(this_05,(String *)local_58);
  postinitialize_handler((Object *)this_05);
  *(Button **)(this + 0xde8) = this_05;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  BaseButton::set_toggle_mode(SUB81(*(undefined8 *)(this + 0xde8),0));
  pSVar5 = *(String **)(this + 0xde8);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"(Un)favorite selected item.");
  TTR((String *)local_78,(String *)local_68);
  Control::set_tooltip_text(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  plVar1 = *(long **)(this + 0xde8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<CreateDialog>
            ((CreateDialog *)local_58,(char *)this,(_func_void *)"&CreateDialog::_favorite_toggled")
  ;
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x238,(StringName *)local_58,0);
  Callable::~Callable((Callable *)local_58);
  Node::add_child(this_04,*(undefined8 *)(this + 0xde8),0,0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Search:");
  TTR((String *)local_78,(String *)local_68);
  VBoxContainer::add_margin_child((String *)pBVar6,(Control *)local_78,SUB81(this_04,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  pTVar7 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(pTVar7);
  postinitialize_handler((Object *)pTVar7);
  *(Tree **)(this + 0xdc0) = pTVar7;
  Node::set_auto_translate_mode(pTVar7,2);
  plVar1 = *(long **)(this + 0xdc0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<CreateDialog>
            ((CreateDialog *)local_58,(char *)this,(_func_void *)"&CreateDialog::_confirmed");
  StringName::StringName((StringName *)local_68,"item_activated",false);
  (*pcVar2)(plVar1,(StringName *)local_68,(StringName *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xdc0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<CreateDialog>
            ((CreateDialog *)local_58,(char *)this,(_func_void *)"&CreateDialog::_item_selected");
  StringName::StringName((StringName *)local_68,"cell_selected",false);
  (*pcVar2)(plVar1,(StringName *)local_68,(StringName *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xdc0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(CreateDialog **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined **)(pCVar8 + 0x20) = &_LC0;
  *(undefined ***)pCVar8 = &PTR_hash_0011b848;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar4 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar4;
  *(code **)(pCVar8 + 0x38) = _script_button_clicked;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "CreateDialog::_script_button_clicked";
  Callable::Callable((Callable *)local_58,pCVar8);
  StringName::StringName((StringName *)local_68,"button_clicked",false);
  (*pcVar2)(plVar1,(StringName *)local_68,(StringName *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  uVar4 = *(undefined8 *)(this + 0xdc0);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Matches:");
  TTR((String *)local_78,(String *)local_68);
  VBoxContainer::add_margin_child((String *)pBVar6,(Control *)local_78,SUB81(uVar4,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  this_06 = (EditorHelpBit *)operator_new(0xab0,"");
  local_58[0] = 0;
  local_68[0] = 0;
  EditorHelpBit::EditorHelpBit(this_06,(String *)local_68,(String *)local_58,false,true);
  postinitialize_handler((Object *)this_06);
  *(EditorHelpBit **)(this + 0xe10) = this_06;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  fVar10 = (float)EditorScale::get_scale();
  fVar10 = _LC71 * fVar10;
  fVar11 = (float)EditorScale::get_scale();
  EditorHelpBit::set_content_height_limits(fVar11 * _LC71,fVar10);
  plVar1 = *(long **)(this + 0xe10);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<CreateDialog>
            ((CreateDialog *)local_58,(char *)this,(_func_void *)"&CreateDialog::_hide_requested");
  StringName::StringName((StringName *)local_68,"request_hide",false);
  (*pcVar2)(plVar1,(StringName *)local_68,(StringName *)local_58,0);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  uVar4 = *(undefined8 *)(this + 0xe10);
  local_58[0] = 0;
  String::parse_latin1((String *)local_58,"");
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"Description:");
  TTR((String *)local_78,(String *)local_68);
  VBoxContainer::add_margin_child((String *)pBVar6,(Control *)local_78,SUB81(uVar4,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
  AcceptDialog::register_text_enter((LineEdit *)this);
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Window::set_clamp_to_embedder(SUB81(this,0));
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



/* CreateDialog::set_base_type(String const&) */

void __thiscall CreateDialog::set_base_type(CreateDialog *this,String *param_1)

{
  CreateDialog CVar1;
  long in_FS_OFFSET;
  bool bVar2;
  long local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xdc8) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xdc8),(CowData *)param_1);
  }
  StringName::StringName((StringName *)&local_38,"Node",false);
  StringName::StringName((StringName *)&local_40,param_1,false);
  CVar1 = (CreateDialog)ClassDB::is_parent_class((StringName *)&local_40,(StringName *)&local_38);
  bVar2 = StringName::configured != '\0';
  this[0xdd0] = CVar1;
  if (bVar2) {
    if (local_40 != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_00102125;
    }
    if (local_38 != 0) {
      StringName::unref();
    }
  }
LAB_00102125:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::_save_and_update_favorite_list() */

void __thiscall CreateDialog::_save_and_update_favorite_list(CreateDialog *this)

{
  CowData *pCVar1;
  String *pSVar2;
  Object *pOVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long in_FS_OFFSET;
  Object *local_88;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  undefined8 local_70;
  Object *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::clear();
  iVar5 = Tree::create_item(*(TreeItem **)(this + 0xe00),0);
  EditorPaths::get_project_settings_dir();
  operator+((char *)&local_70,(String *)"favorites.");
  String::path_join((String *)&local_68);
  FileAccess::open((String *)&local_88,(int)(String *)&local_68,(Error *)0x2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref(local_78);
  if (local_88 != (Object *)0x0) {
    lVar7 = *(long *)(this + 0xdf8);
    if (lVar7 != 0) {
      lVar8 = 0;
      do {
        while( true ) {
          if (*(long *)(lVar7 + -8) <= lVar8) goto LAB_001023dd;
          pCVar1 = (CowData *)(lVar7 + lVar8 * 8);
          local_80 = 0;
          if (*(long *)pCVar1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,pCVar1);
          }
          String::get_slicec((wchar32)local_78,(int)(CowData<char32_t> *)&local_80);
          cVar4 = EditorData::is_type_recognized(EditorNode::singleton + 0x430);
          if (cVar4 != '\0') break;
LAB_001023b9:
          lVar8 = lVar8 + 1;
          CowData<char32_t>::_unref(local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          lVar7 = *(long *)(this + 0xdf8);
          if (lVar7 == 0) goto LAB_001023dd;
        }
        (**(code **)(*(long *)local_88 + 0x2b0))(local_88,(CowData<char32_t> *)&local_80);
        StringName::StringName((StringName *)&local_68,(String *)local_78,false);
        cVar4 = _is_class_disabled_by_feature_profile((StringName *)this);
        if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
          StringName::unref();
        }
        if (cVar4 != '\0') goto LAB_001023b9;
        uVar6 = Tree::create_item(*(TreeItem **)(this + 0xe00),iVar5);
        local_68 = (Object *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_80);
        TreeItem::set_text(uVar6,0,(String *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        pSVar2 = EditorNode::singleton;
        local_70 = 0;
        local_68 = (Object *)&_LC0;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_70);
        EditorNode::get_class_icon((String *)&local_68,pSVar2);
        TreeItem::set_icon((int)uVar6,(Ref *)0x0);
        if (local_68 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          pOVar3 = local_68;
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_68);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar3 + 0x140))();
              Memory::free_static(pOVar3,false);
            }
          }
        }
        lVar8 = lVar8 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref(local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        lVar7 = *(long *)(this + 0xdf8);
      } while (lVar7 != 0);
LAB_001023dd:
      if (local_88 == (Object *)0x0) goto LAB_001023f4;
    }
    cVar4 = RefCounted::unreference();
    if (cVar4 != '\0') {
      cVar4 = predelete_handler(local_88);
      if (cVar4 != '\0') {
        (**(code **)(*(long *)local_88 + 0x140))(local_88);
        Memory::free_static(local_88,false);
      }
    }
  }
LAB_001023f4:
  if (_save_and_update_favorite_list()::{lambda()#1}::operator()()::sname == '\0') {
    iVar5 = __cxa_guard_acquire(&_save_and_update_favorite_list()::{lambda()#1}::operator()()::sname
                               );
    if (iVar5 != 0) {
      _scs_create((char *)&_save_and_update_favorite_list()::{lambda()#1}::operator()()::sname,true)
      ;
      __cxa_atexit(StringName::~StringName,
                   &_save_and_update_favorite_list()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_save_and_update_favorite_list()::{lambda()#1}::operator()()::sname);
    }
  }
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  (**(code **)(*(long *)this + 0xd0))
            (this,&_save_and_update_favorite_list()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CreateDialog::_bind_methods() */

void CreateDialog::_bind_methods(void)

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
  char *local_b8;
  undefined8 local_b0;
  undefined1 local_a8 [16];
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
  local_d0 = 0;
  local_b0 = 6;
  local_b8 = "create";
  String::parse_latin1((StrRange *)&local_d0);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
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
  local_c8 = "CreateDialog";
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  local_b8 = "favorites_updated";
  local_d0 = 0;
  local_b0 = 0x11;
  String::parse_latin1((StrRange *)&local_d0);
  local_a8 = (undefined1  [16])0x0;
  local_b8 = (char *)0x0;
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
  local_c8 = "CreateDialog";
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
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::_notification(int) */

void __thiscall CreateDialog::_notification(CreateDialog *this,int param_1)

{
  code *pcVar1;
  StringName *pSVar2;
  Vector2i *pVVar3;
  Ref *pRVar4;
  long lVar5;
  char cVar6;
  int iVar7;
  CallableCustom *this_00;
  String *pSVar8;
  int iVar9;
  long in_FS_OFFSET;
  undefined8 uVar10;
  undefined8 local_80;
  long local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48 [3];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1e) {
    cVar6 = Window::is_visible();
    if (cVar6 != '\0') {
      lVar5 = *(long *)(this + 0xdb8);
      this_00 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this_00);
      *(long *)(this_00 + 0x28) = lVar5;
      *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)this_00 = &PTR_hash_0011b458;
      *(undefined8 *)(this_00 + 0x40) = 0;
      uVar10 = *(undefined8 *)(lVar5 + 0x60);
      *(undefined8 *)(this_00 + 0x10) = 0;
      *(undefined8 *)(this_00 + 0x30) = uVar10;
      *(undefined **)(this_00 + 0x20) = &_LC0;
      *(code **)(this_00 + 0x38) = Control::grab_focus;
      CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
      *(char **)(this_00 + 0x20) = "Control::grab_focus";
      Callable::Callable((Callable *)local_78,this_00);
      Variant::Variant((Variant *)local_48,0);
      Callable::call_deferredp((Variant **)local_78,0);
      if (Variant::needs_deinit[(int)local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      Callable::~Callable((Callable *)local_78);
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        LineEdit::select_all();
        return;
      }
      goto LAB_00103062;
    }
    pSVar8 = (String *)EditorSettings::get_singleton();
    local_60 = Window::get_size();
    uVar10 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_60);
    local_68 = Window::get_position();
    local_58 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_68);
    local_50 = uVar10;
    Variant::Variant((Variant *)local_48,(Rect2 *)&local_58);
    local_78[0] = 0;
    String::parse_latin1((String *)local_78,"create_new_node");
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"dialog_bounds");
    EditorSettings::set_project_metadata(pSVar8,(String *)&local_80,(Variant *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    if (Variant::needs_deinit[(int)local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  else if (param_1 < 0x1f) {
    if (param_1 == 10) {
      pcVar1 = *(code **)(*(long *)this + 0x108);
      create_custom_callable_function_pointer<CreateDialog>
                ((CreateDialog *)local_78,(char *)this,(_func_void *)"&CreateDialog::_confirmed");
      (*pcVar1)(this,SceneStringNames::singleton + 0x268,(CreateDialog *)local_78,0);
      Callable::~Callable((Callable *)local_78);
    }
    else if (param_1 == 0xb) {
      pcVar1 = *(code **)(*(long *)this + 0x110);
      create_custom_callable_function_pointer<CreateDialog>
                ((CreateDialog *)local_78,(char *)this,(_func_void *)"&CreateDialog::_confirmed");
      (*pcVar1)(this,SceneStringNames::singleton + 0x268,(CreateDialog *)local_78);
      Callable::~Callable((Callable *)local_78);
    }
  }
  else if (param_1 == 0x20) {
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    iVar7 = Window::get_theme_constant
                      ((StringName *)this,
                       (StringName *)&_notification(int)::{lambda()#1}::operator()()::sname);
    pSVar2 = *(StringName **)(this + 0xdc0);
    StringName::StringName((StringName *)local_78,"icon_max_width",false);
    iVar9 = (int)(StringName *)local_78;
    Control::add_theme_constant_override(pSVar2,iVar9);
    if ((StringName::configured != '\0') && (local_78[0] != 0)) {
      StringName::unref();
    }
    pSVar2 = *(StringName **)(this + 0xe00);
    StringName::StringName((StringName *)local_78,"icon_max_width",false);
    Control::add_theme_constant_override(pSVar2,iVar9);
    if ((StringName::configured != '\0') && (local_78[0] != 0)) {
      StringName::unref();
    }
    pVVar3 = *(Vector2i **)(this + 0xe08);
    local_58 = CONCAT44((float)iVar7,(float)iVar7);
    local_48[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_58);
    ItemList::set_fixed_icon_size(pVVar3);
    pRVar4 = *(Ref **)(this + 0xdb8);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)local_78);
    LineEdit::set_right_icon(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
    pRVar4 = *(Ref **)(this + 0xde8);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar7 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar7 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Window::get_editor_theme_icon((StringName *)local_78);
    Button::set_button_icon(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_78);
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103062:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::_configure_search_option_item(TreeItem*, StringName const&,
   CreateDialog::TypeCategory) */

void CreateDialog::_configure_search_option_item
               (undefined8 param_1_00,undefined8 param_2_00,StringName *param_1,long *param_2,
               StringName *param_5,int param_6)

{
  uint uVar1;
  code *pcVar2;
  StringName *pSVar3;
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
  ulong uVar20;
  bool bVar21;
  char cVar22;
  char cVar23;
  byte bVar24;
  uint uVar25;
  int iVar26;
  int iVar27;
  long lVar28;
  String *pSVar29;
  int *piVar30;
  String *pSVar31;
  uint uVar32;
  uint uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  char *pcVar37;
  int iVar38;
  uint uVar39;
  long in_FS_OFFSET;
  String *local_f0;
  String *local_e0;
  Variant *local_c8;
  StringName *local_c0;
  bool local_9a;
  char local_99;
  long local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  cVar22 = ScriptServer::is_global_class(param_5);
  iVar38 = (int)param_2;
  if (param_6 == 0) {
    lVar36 = *(long *)param_5;
    if (lVar36 == 0) {
      local_60 = 0;
    }
    else {
      local_60 = 0;
      if (*(char **)(lVar36 + 8) == (char *)0x0) {
        if (*(long *)(lVar36 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar36 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_60,*(char **)(lVar36 + 8));
      }
    }
    TreeItem::set_text(param_2,0,(CowData<char32_t> *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    cVar23 = ClassDB::can_instantiate(param_5);
    if (cVar23 == '\0') {
LAB_00103136:
      local_9a = false;
      bVar24 = false;
      local_99 = '\0';
    }
    else {
      local_9a = false;
      bVar21 = local_9a;
LAB_00103bc6:
      local_9a = bVar21;
      local_99 = ClassDB::class_exists(param_5);
      if (local_99 == '\0') {
        local_99 = '\x01';
        bVar24 = true;
      }
      else {
        bVar24 = ClassDB::is_virtual(param_5);
        bVar24 = bVar24 ^ 1;
      }
    }
  }
  else {
    if (param_6 == 1) {
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"\"");
      lVar36 = *(long *)param_5;
      if (lVar36 == 0) {
        local_78 = 0;
      }
      else {
        local_78 = 0;
        if (*(char **)(lVar36 + 8) == (char *)0x0) {
          if (*(long *)(lVar36 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar36 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_78,*(char **)(lVar36 + 8));
        }
      }
      local_f0 = (String *)&local_68;
      operator+((char *)&local_70,(String *)&_LC114);
      String::operator+((String *)&local_60,(String *)&local_70);
      TreeItem::set_text(param_2,0,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      goto LAB_00103136;
    }
    if (cVar22 == '\0') {
      lVar36 = *(long *)param_5;
      if (lVar36 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = 0;
        if (*(char **)(lVar36 + 8) == (char *)0x0) {
          if (*(long *)(lVar36 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar36 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_60,*(char **)(lVar36 + 8));
        }
      }
      pSVar31 = (String *)
                HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                              *)(param_1 + 0xe48),(String *)&local_60);
      Variant::Variant((Variant *)&local_58,pSVar31);
      TreeItem::set_metadata(iVar38,(Variant *)0x0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      lVar36 = *(long *)param_5;
      if (lVar36 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = 0;
        if (*(char **)(lVar36 + 8) == (char *)0x0) {
          if (*(long *)(lVar36 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar36 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_60,*(char **)(lVar36 + 8));
        }
      }
      TreeItem::set_text(param_2,0,(CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      bVar24 = 1;
    }
    else {
      Variant::Variant((Variant *)&local_58,param_5);
      TreeItem::set_metadata(iVar38,(Variant *)0x0);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
      lVar36 = *(long *)param_5;
      if (lVar36 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = 0;
        if (*(char **)(lVar36 + 8) == (char *)0x0) {
          if (*(long *)(lVar36 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar36 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_60,*(char **)(lVar36 + 8));
        }
      }
      TreeItem::set_text(param_2,0,(CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      lVar36 = *(long *)param_5;
      if (lVar36 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = 0;
        if (*(char **)(lVar36 + 8) == (char *)0x0) {
          if (*(long *)(lVar36 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar36 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_60,*(char **)(lVar36 + 8));
        }
      }
      bVar24 = ScriptServer::is_global_class_abstract((String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"");
      local_68 = 0;
      String::parse_latin1((String *)&local_68,"Script path: %s");
      TTR((String *)&local_90,(String *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      lVar36 = *(long *)param_5;
      if (lVar36 == 0) {
        local_60 = 0;
      }
      else {
        local_60 = 0;
        if (*(char **)(lVar36 + 8) == (char *)0x0) {
          if (*(long *)(lVar36 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar36 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_60,*(char **)(lVar36 + 8));
        }
      }
      local_f0 = (String *)&local_68;
      cVar23 = ScriptServer::is_global_class_tool((String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar23 != '\0') {
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"\n");
        local_80 = 0;
        String::parse_latin1((String *)&local_80,"");
        local_88 = 0;
        String::parse_latin1((String *)&local_88,"The script will run in the editor.");
        TTR((String *)&local_78,(String *)&local_88);
        String::operator+(local_f0,(String *)&local_78);
        String::operator+((String *)&local_60,local_f0);
        if (local_90 != local_60) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          local_90 = local_60;
          local_60 = 0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      }
      local_e0 = (String *)&local_70;
      lVar36 = *(long *)param_5;
      if (lVar36 == 0) {
        local_70 = 0;
      }
      else {
        local_70 = 0;
        if (*(char **)(lVar36 + 8) == (char *)0x0) {
          if (*(long *)(lVar36 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)(lVar36 + 0x10));
          }
        }
        else {
          String::parse_latin1(local_e0,*(char **)(lVar36 + 8));
        }
      }
      ScriptServer::get_global_class_path(local_f0);
      vformat<String>((CowData<char32_t> *)&local_60,(String *)&local_90,local_f0);
      if ((_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)::
           {lambda()#1}::operator()()::sname == '\0') &&
         (iVar26 = __cxa_guard_acquire(&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                                        ::{lambda()#1}::operator()()::sname), iVar26 != 0)) {
        _scs_create((char *)&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                             ::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                      ::{lambda()#1}::operator()()::sname,&__dso_handle);
        __cxa_guard_release(&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                             ::{lambda()#1}::operator()()::sname);
      }
      Window::get_editor_theme_icon((StringName *)&local_78);
      TreeItem::add_button(iVar38,(Ref *)0x0,(int)(StringName *)&local_78,true,(String *)0x0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      if (cVar23 != '\0') {
        iVar26 = TreeItem::get_button_count(iVar38);
        if ((_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)::
             {lambda()#2}::operator()()::sname == '\0') &&
           (iVar27 = __cxa_guard_acquire(&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                                          ::{lambda()#2}::operator()()::sname), iVar27 != 0)) {
          _scs_create((char *)&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                               ::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                        ::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                               ::{lambda()#2}::operator()()::sname);
        }
        local_58 = Window::get_theme_color
                             (param_1,(StringName *)
                                      &_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                                       ::{lambda()#2}::operator()()::sname);
        local_50 = param_2_00;
        TreeItem::set_button_color(iVar38,0,(Color *)(ulong)(iVar26 - 1));
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      bVar24 = bVar24 ^ 1;
    }
    local_9a = param_6 == 2;
    bVar21 = (bool)(bVar24 & local_9a);
    if ((bool)(bVar24 & local_9a) != false) goto LAB_00103bc6;
    local_99 = '\0';
    bVar24 = false;
  }
  local_f0 = (String *)&local_68;
  local_c0 = (StringName *)&local_80;
  local_c8 = (Variant *)&local_58;
  local_e0 = (String *)&local_70;
  pcVar2 = *(code **)(*param_2 + 0xa8);
  Variant::Variant(local_c8,(bool)bVar24);
  if ((_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)::
       {lambda()#3}::operator()()::sname == '\0') &&
     (iVar26 = __cxa_guard_acquire(&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                                    ::{lambda()#3}::operator()()::sname), iVar26 != 0)) {
    _scs_create((char *)&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                         ::{lambda()#3}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,
                 &_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                  ::{lambda()#3}::operator()()::sname,&__dso_handle);
    __cxa_guard_release(&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                         ::{lambda()#3}::operator()()::sname);
  }
  (*pcVar2)(param_2,&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                     ::{lambda()#3}::operator()()::sname,local_c8);
  if (Variant::needs_deinit[(int)local_58] != '\0') {
    Variant::_clear_internal();
  }
  pSVar31 = EditorNode::singleton;
  local_68 = 0;
  String::parse_latin1(local_f0,"");
  lVar36 = *(long *)param_5;
  if (lVar36 == 0) {
    local_70 = 0;
  }
  else {
    local_70 = 0;
    if (*(char **)(lVar36 + 8) == (char *)0x0) {
      if (*(long *)(lVar36 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)(lVar36 + 0x10));
      }
    }
    else {
      String::parse_latin1(local_e0,*(char **)(lVar36 + 8));
    }
  }
  EditorNode::get_class_icon((String *)&local_60,pSVar31);
  TreeItem::set_icon(iVar38,(Ref *)0x0);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  if ((bool)bVar24 == false) {
    pSVar3 = *(StringName **)(param_1 + 0xdc0);
    if ((_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)::
         {lambda()#4}::operator()()::sname == '\0') &&
       (iVar26 = __cxa_guard_acquire(&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                                      ::{lambda()#4}::operator()()::sname), iVar26 != 0)) {
      _scs_create((char *)&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                           ::{lambda()#4}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,
                   &_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                    ::{lambda()#4}::operator()()::sname,&__dso_handle);
      __cxa_guard_release(&_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                           ::{lambda()#4}::operator()()::sname);
    }
    local_58 = Control::get_theme_color
                         (pSVar3,(StringName *)
                                 &_configure_search_option_item(TreeItem*,StringName_const&,CreateDialog::TypeCategory)
                                  ::{lambda()#4}::operator()()::sname);
    local_50 = param_2_00;
    TreeItem::set_custom_color(iVar38,(Color *)0x0);
  }
  lVar28 = EditorHelp::get_doc_data();
  lVar36 = *(long *)param_5;
  if (lVar36 == 0) {
    local_60 = 0;
  }
  else {
    local_60 = 0;
    if (*(char **)(lVar36 + 8) == (char *)0x0) {
      if (*(long *)(lVar36 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar36 + 0x10));
      }
    }
    else {
      String::parse_latin1((String *)&local_60,*(char **)(lVar36 + 8));
    }
  }
  if ((*(long *)(lVar28 + 0x10) != 0) && (*(int *)(lVar28 + 0x34) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar28 + 0x30) * 4);
    lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar28 + 0x30) * 8);
    uVar25 = String::hash();
    uVar20 = CONCAT44(0,uVar1);
    lVar35 = *(long *)(lVar28 + 0x18);
    uVar32 = 1;
    if (uVar25 != 0) {
      uVar32 = uVar25;
    }
    auVar4._8_8_ = 0;
    auVar4._0_8_ = (ulong)uVar32 * lVar36;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar20;
    lVar34 = SUB168(auVar4 * auVar12,8);
    uVar25 = *(uint *)(lVar35 + lVar34 * 4);
    uVar33 = SUB164(auVar4 * auVar12,8);
    if (uVar25 != 0) {
      uVar39 = 0;
      do {
        if (uVar25 == uVar32) {
          cVar23 = String::operator==((String *)
                                      (*(long *)(*(long *)(lVar28 + 0x10) + lVar34 * 8) + 0x10),
                                      (String *)&local_60);
          if (cVar23 != '\0') {
            lVar36 = *(long *)(*(long *)(lVar28 + 0x10) + (ulong)uVar33 * 8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if (lVar36 == 0) goto LAB_001033b5;
            if (*(char *)(lVar36 + 0x100) == '\0') {
              if (*(char *)(lVar36 + 0x110) == '\0') goto LAB_001033b7;
              local_68 = 0;
              String::parse_latin1(local_f0,"");
              local_70 = 0;
              String::parse_latin1(local_e0,"This class is marked as experimental.");
              TTR((String *)&local_60,local_e0);
              pcVar37 = "NodeWarning";
            }
            else {
              local_68 = 0;
              String::parse_latin1(local_f0,"");
              local_70 = 0;
              String::parse_latin1(local_e0,"This class is marked as deprecated.");
              TTR((String *)&local_60,local_e0);
              pcVar37 = "StatusError";
            }
            StringName::StringName(local_c0,pcVar37,false);
            Window::get_editor_theme_icon((StringName *)&local_78);
            TreeItem::add_button(iVar38,(Ref *)0x0,(int)(StringName *)&local_78,false,(String *)0x0)
            ;
            Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
            goto LAB_001033b7;
          }
          lVar35 = *(long *)(lVar28 + 0x18);
        }
        uVar39 = uVar39 + 1;
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)(uVar33 + 1) * lVar36;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar20;
        lVar34 = SUB168(auVar5 * auVar13,8);
        uVar25 = *(uint *)(lVar35 + lVar34 * 4);
        uVar33 = SUB164(auVar5 * auVar13,8);
      } while ((uVar25 != 0) &&
              (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar25 * lVar36, auVar14._8_8_ = 0,
              auVar14._0_8_ = uVar20, auVar7._8_8_ = 0,
              auVar7._0_8_ = (ulong)((uVar1 + uVar33) - SUB164(auVar6 * auVar14,8)) * lVar36,
              auVar15._8_8_ = 0, auVar15._0_8_ = uVar20, uVar39 <= SUB164(auVar7 * auVar15,8)));
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
LAB_001033b5:
  lVar36 = 0;
LAB_001033b7:
  LineEdit::get_text();
  if ((local_60 == 0) || (iVar26 = (int)*(undefined8 *)(local_60 + -8), iVar26 == 0)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  else {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (iVar26 != 1) {
      TreeItem::set_collapsed(SUB81(param_2,0));
      goto LAB_00103406;
    }
  }
  cVar23 = StringName::operator!=(param_5,(String *)(param_1 + 0xdc8));
  if (cVar23 != '\0') {
    TreeItem::get_parent();
    TreeItem::get_text((int)(String *)&local_60);
    cVar23 = String::operator!=((String *)&local_60,(String *)(param_1 + 0xdc8));
    if (cVar23 == '\0') {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (local_99 == '\0') goto LAB_00103778;
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"docks/scene_tree/start_create_dialog_fully_expanded");
    _EDITOR_GET((String *)local_c8);
    Variant::operator_cast_to_bool(local_c8);
    if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
LAB_00103778:
  TreeItem::set_collapsed(SUB81(param_2,0));
LAB_00103406:
  local_60 = 0;
  String::parse_latin1((String *)&local_60,"");
  local_68 = 0;
  if (lVar36 == 0) {
    String::parse_latin1(local_f0,"");
  }
  else if (*(long *)(lVar36 + 0x28) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_f0,(CowData *)(lVar36 + 0x28));
  }
  DTR((String *)local_c0,local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  TreeItem::set_tooltip_text(iVar38,(String *)0x0);
  pSVar31 = EditorNode::singleton;
  if ((cVar22 != '\x01') && (local_9a != false)) {
    lVar36 = *(long *)param_5;
    if (lVar36 == 0) {
      local_70 = 0;
    }
    else {
      local_70 = 0;
      if (*(char **)(lVar36 + 8) == (char *)0x0) {
        if (*(long *)(lVar36 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_e0,(CowData *)(lVar36 + 0x10));
        }
      }
      else {
        String::parse_latin1(local_e0,*(char **)(lVar36 + 8));
      }
    }
    pSVar29 = (String *)
              HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
              ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                            *)(param_1 + 0xe48),local_e0);
    if ((*(long *)(pSVar31 + 0x478) != 0) && (*(int *)(pSVar31 + 0x49c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(pSVar31 + 0x498) * 4);
      lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(pSVar31 + 0x498) * 8);
      uVar25 = String::hash();
      uVar20 = CONCAT44(0,uVar1);
      lVar28 = *(long *)(pSVar31 + 0x480);
      uVar32 = 1;
      if (uVar25 != 0) {
        uVar32 = uVar25;
      }
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar32 * lVar36;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar20;
      lVar35 = SUB168(auVar8 * auVar16,8);
      uVar25 = *(uint *)(lVar28 + lVar35 * 4);
      uVar33 = SUB164(auVar8 * auVar16,8);
      if (uVar25 != 0) {
        uVar39 = 0;
        do {
          if (uVar25 == uVar32) {
            cVar22 = String::operator==((String *)
                                        (*(long *)(*(long *)(pSVar31 + 0x478) + lVar35 * 8) + 0x10),
                                        pSVar29);
            if (cVar22 != '\0') {
              lVar36 = *(long *)(*(long *)(pSVar31 + 0x478) + (ulong)uVar33 * 8);
              lVar28 = *(long *)param_5;
              if (lVar28 == 0) {
                local_68 = 0;
              }
              else {
                local_68 = 0;
                if (*(char **)(lVar28 + 8) == (char *)0x0) {
                  if (*(long *)(lVar28 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)local_f0,(CowData *)(lVar28 + 0x10));
                  }
                }
                else {
                  String::parse_latin1(local_f0,*(char **)(lVar28 + 8));
                }
              }
              piVar30 = (int *)HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
                               ::operator[]((HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
                                             *)(param_1 + 0xe78),local_f0);
              lVar28 = (long)*piVar30;
              lVar36 = *(long *)(lVar36 + 0x20);
              if (lVar28 < 0) {
                if (lVar36 != 0) {
                  lVar35 = *(long *)(lVar36 + -8);
                  goto LAB_0010405d;
                }
              }
              else if (lVar36 != 0) {
                lVar35 = *(long *)(lVar36 + -8);
                if (lVar35 <= lVar28) goto LAB_0010405d;
                local_78 = 0;
                lVar36 = *(long *)(lVar36 + 0x10 + lVar28 * 0x18);
                if (lVar36 != 0) {
                  local_60 = 0;
                  local_78 = lVar36;
                  cVar22 = RefCounted::reference();
                  if (cVar22 == '\0') {
                    local_78 = 0;
                  }
                  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_60);
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
                if (local_78 != 0) {
                  TreeItem::set_icon(iVar38,(Ref *)0x0);
                }
                Ref<Texture2D>::unref((Ref<Texture2D> *)&local_78);
                goto LAB_0010371d;
              }
              lVar35 = 0;
LAB_0010405d:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar28,lVar35,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar2 = (code *)invalidInstructionException();
              (*pcVar2)();
            }
            lVar28 = *(long *)(pSVar31 + 0x480);
          }
          uVar39 = uVar39 + 1;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)(uVar33 + 1) * lVar36;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar20;
          lVar35 = SUB168(auVar9 * auVar17,8);
          uVar25 = *(uint *)(lVar28 + lVar35 * 4);
          uVar33 = SUB164(auVar9 * auVar17,8);
        } while ((uVar25 != 0) &&
                (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar25 * lVar36, auVar18._8_8_ = 0,
                auVar18._0_8_ = uVar20, auVar11._8_8_ = 0,
                auVar11._0_8_ = (ulong)((uVar1 + uVar33) - SUB164(auVar10 * auVar18,8)) * lVar36,
                auVar19._8_8_ = 0, auVar19._0_8_ = uVar20, uVar39 <= SUB164(auVar11 * auVar19,8)));
      }
    }
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar2 = (code *)invalidInstructionException();
    (*pcVar2)();
  }
LAB_0010371d:
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CreateDialog::_should_hide_type(StringName const&) const */

uint __thiscall CreateDialog::_should_hide_type(CreateDialog *this,StringName *param_1)

{
  String *pSVar1;
  long lVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  StringName *pSVar7;
  wchar32 wVar8;
  int iVar9;
  long in_FS_OFFSET;
  long local_68;
  String local_60 [8];
  CowData<char32_t> local_58 [8];
  CowData<char32_t> local_50 [8];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar4 = _is_class_disabled_by_feature_profile((StringName *)this);
  if ((char)uVar4 == '\0') {
    if (this[0xdd0] != (CreateDialog)0x0) {
      lVar2 = *(long *)param_1;
      if (lVar2 == 0) {
        local_48 = 0;
      }
      else {
        local_48 = 0;
        if (*(char **)(lVar2 + 8) == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar2 + 0x10));
        }
        else {
          String::parse_latin1((String *)&local_48,*(char **)(lVar2 + 8));
        }
      }
      cVar3 = String::begins_with((char *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      if (cVar3 != '\0') goto LAB_00104673;
    }
    cVar3 = ClassDB::class_exists(param_1);
    if (cVar3 == '\0') {
      cVar3 = ScriptServer::is_global_class(param_1);
      if (cVar3 != '\0') {
        lVar2 = *(long *)param_1;
        pSVar1 = EditorNode::singleton + 0x430;
        if (lVar2 == 0) {
          local_48 = 0;
        }
        else {
          local_48 = 0;
          if (*(char **)(lVar2 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar2 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_48,*(char **)(lVar2 + 8));
          }
        }
        cVar3 = EditorData::script_class_is_parent(pSVar1,(String *)&local_48);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
        if (cVar3 != '\0') {
          lVar2 = *(long *)param_1;
          if (lVar2 == 0) {
            local_48 = 0;
          }
          else {
            local_48 = 0;
            if (*(char **)(lVar2 + 8) == (char *)0x0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar2 + 0x10));
            }
            else {
              String::parse_latin1((String *)&local_48,*(char **)(lVar2 + 8));
            }
          }
          ScriptServer::get_global_class_native_base((String *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
          uVar5 = ClassDB::class_exists((StringName *)&local_68);
          if ((char)uVar5 == '\0') {
LAB_00104781:
            lVar2 = *(long *)param_1;
            if (lVar2 == 0) {
              local_48 = 0;
            }
            else {
              local_48 = 0;
              if (*(char **)(lVar2 + 8) == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar2 + 0x10));
              }
              else {
                String::parse_latin1((String *)&local_48,*(char **)(lVar2 + 8));
              }
            }
            ScriptServer::get_global_class_path(local_60);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
            cVar3 = String::begins_with((char *)local_60);
            if (cVar3 != '\0') {
              wVar8 = (wchar32)local_60;
              iVar6 = String::find_char(wVar8,0x2f);
              if (-1 < iVar6) {
                do {
                  String::substr((int)local_50,wVar8);
                  local_48 = 0;
                  String::parse_latin1((String *)&local_48,"plugin.cfg");
                  String::path_join((String *)local_58);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
                  CowData<char32_t>::_unref(local_50);
                  cVar3 = FileAccess::exists((String *)local_58);
                  if (cVar3 != '\0') {
                    uVar4 = EditorNode::is_addon_plugin_enabled(EditorNode::singleton);
                    CowData<char32_t>::_unref(local_58);
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
                    uVar5 = uVar4 ^ 1;
                    goto joined_r0x001048ab;
                  }
                  iVar6 = String::find_char(wVar8,0x2f);
                  CowData<char32_t>::_unref(local_58);
                } while (-1 < iVar6);
              }
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
            uVar5 = uVar4;
          }
          else {
            cVar3 = ClassDB::can_instantiate((StringName *)&local_68);
            if (cVar3 != '\0') {
              local_48 = local_48 & 0xffffffff00000000;
              cVar3 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                      ::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                                     *)(this + 0xed8),param_1,(uint *)&local_48);
              if (cVar3 == '\0') {
                local_48 = local_48 & 0xffffffff00000000;
                cVar3 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                        ::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>
                                       *)(this + 0xed8),(StringName *)&local_68,(uint *)&local_48);
                if (cVar3 == '\0') goto LAB_00104781;
              }
            }
          }
joined_r0x001048ab:
          uVar4 = uVar5;
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          goto LAB_00104678;
        }
      }
    }
    else {
      cVar3 = ClassDB::can_instantiate(param_1);
      if ((cVar3 != '\0') && (cVar3 = ClassDB::is_virtual(param_1), cVar3 == '\0')) {
        StringName::StringName((StringName *)&local_48,(String *)(this + 0xdc8),false);
        cVar3 = ClassDB::is_parent_class(param_1,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        if ((cVar3 != '\0') && (cVar3 = ClassDB::is_class_exposed(param_1), cVar3 != '\0')) {
          iVar6 = *(int *)(this + 0xed4);
          if (iVar6 == 0) {
LAB_001049f0:
            iVar6 = *(int *)(this + 0xefc);
            if (iVar6 == 0) goto LAB_00104678;
            pSVar7 = *(StringName **)(this + 0xed8);
            iVar9 = 1;
            cVar3 = ClassDB::is_parent_class(param_1,pSVar7);
            while (cVar3 == '\0') {
              if (iVar6 <= iVar9) goto LAB_00104678;
              pSVar7 = pSVar7 + 8;
              iVar9 = iVar9 + 1;
              cVar3 = ClassDB::is_parent_class(param_1,pSVar7);
            }
          }
          else {
            pSVar7 = *(StringName **)(this + 0xeb0);
            iVar9 = 1;
            cVar3 = ClassDB::is_parent_class(param_1,pSVar7);
            while (cVar3 == '\0') {
              if (iVar6 <= iVar9) goto LAB_001049f0;
              pSVar7 = pSVar7 + 8;
              iVar9 = iVar9 + 1;
              cVar3 = ClassDB::is_parent_class(param_1,pSVar7);
            }
          }
        }
      }
    }
  }
LAB_00104673:
  uVar4 = 1;
LAB_00104678:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar4;
}



/* CreateDialog::_fill_type_list() */

void __thiscall CreateDialog::_fill_type_list(CreateDialog *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
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
  code *pcVar20;
  ulong uVar21;
  long lVar22;
  char cVar23;
  uint uVar24;
  StringName *pSVar25;
  long lVar26;
  CowData<char32_t> *this_00;
  undefined4 *puVar27;
  undefined1 (*pauVar28) [16];
  uint uVar29;
  int iVar30;
  long lVar31;
  StringName *pSVar32;
  long lVar33;
  long lVar34;
  uint uVar35;
  uint uVar36;
  long in_FS_OFFSET;
  long *local_58;
  long local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = (long *)0x0;
  ClassDB::get_class_list((List *)&local_58);
  ScriptServer::get_global_class_list((List *)&local_58);
  lVar22 = EditorNode::singleton;
  if ((local_58 == (long *)0x0) || (pSVar32 = (StringName *)*local_58, pSVar32 == (StringName *)0x0)
     ) {
LAB_001052bd:
    List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
              ((List<StringName,DefaultAllocator> *)(this + 0xea8));
    List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)&local_58);
    if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    return;
  }
LAB_00104be8:
  StringName::StringName((StringName *)&local_50,pSVar32);
  cVar23 = _should_hide_type(this,(StringName *)&local_50);
  if (cVar23 == '\0') {
    if (*(long *)(this + 0xea8) == 0) {
      pauVar28 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined1 (**) [16])(this + 0xea8) = pauVar28;
      *(undefined4 *)pauVar28[1] = 0;
      *pauVar28 = (undefined1  [16])0x0;
    }
    pSVar25 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
    *(undefined1 (*) [16])pSVar25 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pSVar25 + 0x10) = (undefined1  [16])0x0;
    StringName::operator=(pSVar25,(StringName *)&local_50);
    plVar2 = *(long **)(this + 0xea8);
    lVar3 = plVar2[1];
    *(undefined8 *)(pSVar25 + 8) = 0;
    *(long **)(pSVar25 + 0x18) = plVar2;
    *(long *)(pSVar25 + 0x10) = lVar3;
    if (lVar3 != 0) {
      *(StringName **)(lVar3 + 8) = pSVar25;
    }
    plVar2[1] = (long)pSVar25;
    if (*plVar2 == 0) {
      *plVar2 = (long)pSVar25;
    }
    *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
    if (local_50 == 0) {
      local_48 = 0;
    }
    else {
      local_48 = 0;
      if (*(char **)(local_50 + 8) == (char *)0x0) {
        if (*(long *)(local_50 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(local_50 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_48,*(char **)(local_50 + 8));
      }
    }
    if ((*(long *)(lVar22 + 0x478) != 0) && (*(int *)(lVar22 + 0x49c) != 0)) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar22 + 0x498) * 4);
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar22 + 0x498) * 8);
      uVar24 = String::hash();
      uVar21 = CONCAT44(0,uVar1);
      lVar26 = *(long *)(lVar22 + 0x480);
      uVar29 = 1;
      if (uVar24 != 0) {
        uVar29 = uVar24;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar29 * lVar3;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar21;
      lVar31 = SUB168(auVar4 * auVar12,8);
      uVar24 = *(uint *)(lVar26 + lVar31 * 4);
      iVar30 = SUB164(auVar4 * auVar12,8);
      if (uVar24 != 0) {
        uVar35 = 0;
        do {
          if (uVar24 == uVar29) {
            cVar23 = String::operator==((String *)
                                        (*(long *)(*(long *)(lVar22 + 0x478) + lVar31 * 8) + 0x10),
                                        (String *)&local_48);
            if (cVar23 != '\0') {
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
              if (local_50 == 0) {
                local_48 = 0;
              }
              else {
                local_48 = 0;
                if (*(char **)(local_50 + 8) == (char *)0x0) {
                  if (*(long *)(local_50 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_48,(CowData *)(local_50 + 0x10));
                  }
                }
                else {
                  String::parse_latin1((String *)&local_48,*(char **)(local_50 + 8));
                }
              }
              if ((*(long *)(lVar22 + 0x478) == 0) || (*(int *)(lVar22 + 0x49c) == 0))
              goto LAB_00104f80;
              uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar22 + 0x498) * 4);
              lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(lVar22 + 0x498) * 8);
              uVar24 = String::hash();
              uVar21 = CONCAT44(0,uVar1);
              lVar26 = *(long *)(lVar22 + 0x480);
              uVar29 = 1;
              if (uVar24 != 0) {
                uVar29 = uVar24;
              }
              auVar8._8_8_ = 0;
              auVar8._0_8_ = (ulong)uVar29 * lVar3;
              auVar16._8_8_ = 0;
              auVar16._0_8_ = uVar21;
              lVar31 = SUB168(auVar8 * auVar16,8);
              uVar24 = *(uint *)(lVar26 + lVar31 * 4);
              uVar35 = SUB164(auVar8 * auVar16,8);
              if (uVar24 == 0) goto LAB_00104f80;
              uVar36 = 0;
              goto LAB_00104f25;
            }
            lVar26 = *(long *)(lVar22 + 0x480);
          }
          uVar35 = uVar35 + 1;
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)(iVar30 + 1) * lVar3;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar21;
          lVar31 = SUB168(auVar5 * auVar13,8);
          uVar24 = *(uint *)(lVar26 + lVar31 * 4);
          iVar30 = SUB164(auVar5 * auVar13,8);
        } while ((uVar24 != 0) &&
                (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar24 * lVar3, auVar14._8_8_ = 0,
                auVar14._0_8_ = uVar21, auVar7._8_8_ = 0,
                auVar7._0_8_ = (ulong)((uVar1 + iVar30) - SUB164(auVar6 * auVar14,8)) * lVar3,
                auVar15._8_8_ = 0, auVar15._0_8_ = uVar21, uVar35 <= SUB164(auVar7 * auVar15,8)));
      }
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  }
  goto LAB_00104bc0;
LAB_00104f25:
  if (uVar29 == uVar24) {
    cVar23 = String::operator==((String *)(*(long *)(*(long *)(lVar22 + 0x478) + lVar31 * 8) + 0x10)
                                ,(String *)&local_48);
    if (cVar23 != '\0') goto LAB_00104fac;
    lVar26 = *(long *)(lVar22 + 0x480);
  }
  uVar36 = uVar36 + 1;
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)(uVar35 + 1) * lVar3;
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar21;
  lVar31 = SUB168(auVar9 * auVar17,8);
  uVar24 = *(uint *)(lVar26 + lVar31 * 4);
  uVar35 = SUB164(auVar9 * auVar17,8);
  if ((uVar24 == 0) ||
     (auVar10._8_8_ = 0, auVar10._0_8_ = (ulong)uVar24 * lVar3, auVar18._8_8_ = 0,
     auVar18._0_8_ = uVar21, auVar11._8_8_ = 0,
     auVar11._0_8_ = (ulong)((uVar1 + uVar35) - SUB164(auVar10 * auVar18,8)) * lVar3,
     auVar19._8_8_ = 0, auVar19._0_8_ = uVar21, SUB164(auVar11 * auVar19,8) < uVar36)) {
LAB_00104f80:
    _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                     "FATAL: Condition \"!exists\" is true.",0,0);
    _err_flush_stdout();
                    /* WARNING: Does not return */
    pcVar20 = (code *)invalidInstructionException();
    (*pcVar20)();
  }
  goto LAB_00104f25;
LAB_00104fac:
  lVar3 = *(long *)(*(long *)(lVar22 + 0x478) + (ulong)uVar35 * 8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  lVar26 = *(long *)(lVar3 + 0x20);
  if (lVar26 != 0) {
    lVar31 = 0;
    do {
      if (*(long *)(lVar26 + -8) <= lVar31) break;
      if (local_50 == 0) {
        local_48 = 0;
        if (lVar26 != 0) goto LAB_00105043;
LAB_001051b8:
        lVar34 = 0;
LAB_001051bb:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar31,lVar34,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar20 = (code *)invalidInstructionException();
        (*pcVar20)();
      }
      local_48 = 0;
      if (*(char **)(local_50 + 8) == (char *)0x0) {
        if (*(long *)(local_50 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(local_50 + 0x10));
          lVar26 = *(long *)(lVar3 + 0x20);
        }
      }
      else {
        String::parse_latin1((String *)&local_48,*(char **)(local_50 + 8));
        lVar26 = *(long *)(lVar3 + 0x20);
      }
      if (lVar26 == 0) goto LAB_001051b8;
LAB_00105043:
      lVar34 = *(long *)(lVar26 + -8);
      if (lVar34 <= lVar31) goto LAB_001051bb;
      lVar33 = lVar31 * 0x18;
      this_00 = (CowData<char32_t> *)
                HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                              *)(this + 0xe48),(String *)(lVar26 + lVar33));
      if (*(long *)this_00 != local_48) {
        CowData<char32_t>::_unref(this_00);
        *(long *)this_00 = local_48;
        local_48 = 0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar26 = *(long *)(lVar3 + 0x20);
      if (lVar26 == 0) goto LAB_001051b8;
      lVar34 = *(long *)(lVar26 + -8);
      if (lVar34 <= lVar31) goto LAB_001051bb;
      puVar27 = (undefined4 *)
                HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
                ::operator[]((HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
                              *)(this + 0xe78),(String *)(lVar26 + lVar33));
      lVar26 = *(long *)(lVar3 + 0x20);
      *puVar27 = (int)lVar31;
      if (lVar26 == 0) goto LAB_001051b8;
      lVar34 = *(long *)(lVar26 + -8);
      if (lVar34 <= lVar31) goto LAB_001051bb;
      StringName::StringName((StringName *)&local_48,(String *)(lVar26 + lVar33),false);
      if (*(long *)(this + 0xea8) == 0) {
        pauVar28 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
        *(undefined1 (**) [16])(this + 0xea8) = pauVar28;
        *(undefined4 *)pauVar28[1] = 0;
        *pauVar28 = (undefined1  [16])0x0;
      }
      pSVar25 = (StringName *)operator_new(0x20,DefaultAllocator::alloc);
      *(undefined1 (*) [16])pSVar25 = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(pSVar25 + 0x10) = (undefined1  [16])0x0;
      StringName::operator=(pSVar25,(StringName *)&local_48);
      plVar2 = *(long **)(this + 0xea8);
      lVar26 = plVar2[1];
      *(undefined8 *)(pSVar25 + 8) = 0;
      *(long **)(pSVar25 + 0x18) = plVar2;
      *(long *)(pSVar25 + 0x10) = lVar26;
      if (lVar26 != 0) {
        *(StringName **)(lVar26 + 8) = pSVar25;
      }
      plVar2[1] = (long)pSVar25;
      if (*plVar2 == 0) {
        *plVar2 = (long)pSVar25;
      }
      *(int *)(plVar2 + 2) = (int)plVar2[2] + 1;
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      lVar26 = *(long *)(lVar3 + 0x20);
      lVar31 = lVar31 + 1;
    } while (lVar26 != 0);
  }
LAB_00104bc0:
  if ((StringName::configured != '\0') && (local_50 != 0)) {
    StringName::unref();
  }
  pSVar32 = *(StringName **)(pSVar32 + 8);
  if (pSVar32 == (StringName *)0x0) goto LAB_001052bd;
  goto LAB_00104be8;
}



/* CreateDialog::_add_type(StringName const&, CreateDialog::TypeCategory) */

void __thiscall CreateDialog::_add_type(CreateDialog *this,StringName *param_1,int param_3)

{
  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
  *this_00;
  long lVar1;
  TreeItem *pTVar2;
  Object *pOVar3;
  char cVar4;
  uint uVar5;
  String *pSVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  int iVar10;
  long in_FS_OFFSET;
  StringName *local_80;
  Object *local_68;
  long *local_60;
  long *local_58;
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  this_00 = (HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
             *)(this + 0xe18);
  lVar1 = *(long *)param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (lVar1 == 0) {
    local_48 = (Object *)0x0;
  }
  else {
    local_48 = (Object *)0x0;
    if (*(char **)(lVar1 + 8) == (char *)0x0) {
      if (*(long *)(lVar1 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar1 + 0x10));
      }
    }
    else {
      String::parse_latin1((String *)&local_48,*(char **)(lVar1 + 8));
    }
  }
  local_50 = (ulong)local_50._4_4_ << 0x20;
  cVar4 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
          ::_lookup_pos(this_00,(String *)&local_48,(uint *)&local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if (cVar4 != '\0') goto LAB_001055e9;
  local_68 = (Object *)0x0;
  if (param_3 == 0) {
    ClassDB::get_parent_class((StringName *)&local_48);
    if (local_68 == local_48) {
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_68 = local_48;
    }
    iVar10 = 0;
LAB_00105501:
    if (local_68 != (Object *)0x0) {
      _add_type(this,&local_68,iVar10);
      pTVar2 = *(TreeItem **)(this + 0xdc0);
      if (local_68 == (Object *)0x0) {
        local_48 = (Object *)0x0;
      }
      else {
        local_48 = (Object *)0x0;
        if (*(char **)(local_68 + 8) == (char *)0x0) {
          if (*(long *)(local_68 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(local_68 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_48,*(char **)(local_68 + 8));
        }
      }
      puVar7 = (undefined8 *)
               HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
               ::operator[](this_00,(String *)&local_48);
      uVar8 = Tree::create_item(pTVar2,(int)*puVar7);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      lVar1 = *(long *)param_1;
      if (lVar1 == 0) {
        local_48 = (Object *)0x0;
      }
      else {
        local_48 = (Object *)0x0;
        if (*(char **)(lVar1 + 8) == (char *)0x0) {
          if (*(long *)(lVar1 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)(lVar1 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_48,*(char **)(lVar1 + 8));
        }
      }
      puVar7 = (undefined8 *)
               HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
               ::operator[](this_00,(String *)&local_48);
      *puVar7 = uVar8;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      _configure_search_option_item(this,uVar8,param_1,param_3);
      if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
        StringName::unref();
      }
      goto LAB_001055e9;
    }
    _err_print_error("_add_type","editor/create_dialog.cpp",0x129,
                     "Condition \"inherits == StringName()\" is true.",0,0);
  }
  else {
    if (param_3 != 1) {
      cVar4 = ScriptServer::is_global_class(param_1);
      if (cVar4 == '\0') {
        lVar1 = *(long *)param_1;
        if (lVar1 == 0) {
          local_50 = 0;
        }
        else if (*(char **)(lVar1 + 8) == (char *)0x0) {
          local_50 = 0;
          if (*(long *)(lVar1 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar1 + 0x10));
          }
        }
        else {
          local_50 = 0;
          String::parse_latin1((String *)&local_50,*(char **)(lVar1 + 8));
        }
        pSVar6 = (String *)
                 HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                 ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                               *)(this + 0xe48),(String *)&local_50);
        StringName::StringName((StringName *)&local_48,pSVar6,false);
        if (local_68 == local_48) goto LAB_00105671;
LAB_0010546c:
        StringName::unref();
        local_68 = local_48;
      }
      else {
        lVar1 = *(long *)param_1;
        if (lVar1 == 0) {
          local_50 = 0;
        }
        else {
          local_50 = 0;
          if (*(char **)(lVar1 + 8) == (char *)0x0) {
            if (*(long *)(lVar1 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar1 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_50,*(char **)(lVar1 + 8));
          }
        }
        ScriptServer::get_global_class_base((String *)&local_48);
        if (local_68 != local_48) goto LAB_0010546c;
LAB_00105671:
        if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
          StringName::unref();
        }
      }
      local_80 = (StringName *)&local_68;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      uVar5 = ClassDB::class_exists(local_80);
      iVar10 = ((uVar5 ^ 1) & 0xff) * 2;
      goto LAB_00105501;
    }
    local_48 = (Object *)0x0;
    String::parse_latin1((String *)&local_48,"Script");
    lVar1 = *(long *)param_1;
    if (lVar1 == 0) {
      local_50 = 0;
    }
    else {
      local_50 = 0;
      if (*(char **)(lVar1 + 8) == (char *)0x0) {
        if (*(long *)(lVar1 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)(lVar1 + 0x10));
        }
      }
      else {
        String::parse_latin1((String *)&local_50,*(char **)(lVar1 + 8));
      }
    }
    cVar4 = ResourceLoader::exists((String *)&local_50,(String *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    if (cVar4 == '\0') {
      _err_print_error("_add_type","editor/create_dialog.cpp",0x105,
                       "Condition \"!ResourceLoader::exists(p_type, \"Script\")\" is true.",0,0);
    }
    else {
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Script");
      lVar1 = *(long *)param_1;
      if (lVar1 == 0) {
        local_58 = (long *)0x0;
      }
      else {
        local_58 = (long *)0x0;
        if (*(char **)(lVar1 + 8) == (char *)0x0) {
          if (*(long *)(lVar1 + 0x10) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar1 + 0x10));
          }
        }
        else {
          String::parse_latin1((String *)&local_58,*(char **)(lVar1 + 8));
        }
      }
      local_80 = (StringName *)&local_58;
      ResourceLoader::load((CowData<char32_t> *)&local_48,local_80,(String *)&local_50,1,0);
      local_60 = (long *)0x0;
      if (local_48 == (Object *)0x0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00105b42:
        _err_print_error("_add_type","editor/create_dialog.cpp",0x107,
                         "Condition \"scr.is_null()\" is true.",0,0);
      }
      else {
        plVar9 = (long *)__dynamic_cast(local_48,&Object::typeinfo,&Script::typeinfo,0);
        if (plVar9 == (long *)0x0) {
LAB_00105829:
          cVar4 = RefCounted::unreference();
          pOVar3 = local_48;
          plVar9 = local_60;
          if ((cVar4 != '\0') &&
             (cVar4 = predelete_handler(local_48), plVar9 = local_60, cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))();
            Memory::free_static(pOVar3,false);
          }
        }
        else {
          local_60 = plVar9;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_60 = (long *)0x0;
          }
          plVar9 = local_60;
          if (local_48 != (Object *)0x0) goto LAB_00105829;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if (plVar9 == (long *)0x0) goto LAB_00105b42;
        (**(code **)(*plVar9 + 0x1d8))(local_80,plVar9);
        if (local_58 != (long *)0x0) {
          (**(code **)(*local_58 + 0x1e0))((CowData<char32_t> *)&local_48);
          if (local_68 == local_48) {
            if (StringName::configured == '\0') goto LAB_001058b9;
            if (local_68 != (Object *)0x0) {
              StringName::unref();
              goto LAB_001058b9;
            }
          }
          else {
            StringName::unref();
            local_68 = local_48;
LAB_001058b9:
            iVar10 = 2;
            if (local_68 != (Object *)0x0) goto LAB_001058c7;
          }
          Resource::get_path();
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          if (local_68 == local_48) {
            if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          else {
            StringName::unref();
            local_68 = local_48;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          iVar10 = 1;
LAB_001058c7:
          Ref<Script>::unref((Ref<Script> *)local_80);
          Ref<Script>::unref((Ref<Script> *)&local_60);
          goto LAB_00105501;
        }
        (**(code **)(*plVar9 + 0x1f0))((CowData<char32_t> *)&local_48,plVar9);
        if (local_48 != (Object *)0x0) {
          StringName::operator=((StringName *)&local_68,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_48 != (Object *)0x0)) {
            StringName::unref();
          }
          iVar10 = 0;
          goto LAB_001058c7;
        }
        Ref<Script>::unref((Ref<Script> *)local_80);
      }
      Ref<Script>::unref((Ref<Script> *)&local_60);
    }
  }
  if ((StringName::configured != '\0') && (local_68 != (Object *)0x0)) {
    StringName::unref();
  }
LAB_001055e9:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* CreateDialog::_score_type(String const&, String const&) const */

float __thiscall CreateDialog::_score_type(CreateDialog *this,String *param_1,String *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  float fVar6;
  float fVar7;
  float local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  cVar2 = String::operator==(param_1,param_2);
  if (cVar2 != '\0') {
    local_40 = _LC144;
    goto LAB_00105e00;
  }
  if (*(long *)param_1 == 0) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.0;
    iVar3 = (int)*(undefined8 *)(*(long *)param_1 + -8);
    if (iVar3 != 0) {
      fVar6 = (float)(iVar3 + -1);
    }
  }
  fVar6 = _LC144 / fVar6;
  iVar3 = String::findn(param_1,(int)param_2);
  local_40 = _LC143;
  if (-1 < iVar3) {
    local_40 = _LC142;
    fVar7 = (float)(iVar3 * 3) * fVar6;
    if (fVar7 <= _LC144) {
      local_40 = _LC144 - fVar7 * _LC142;
    }
  }
  if ((*(long *)param_2 == 0) || (iVar3 = (int)*(undefined8 *)(*(long *)param_2 + -8), iVar3 == 0))
  {
    fVar6 = fVar6 * 0.0;
LAB_00105d0d:
    local_40 = (fVar6 * __LC145 + __LC146) * local_40;
  }
  else {
    fVar6 = fVar6 * (float)(iVar3 + -1);
    if (fVar6 <= _LC144) goto LAB_00105d0d;
  }
  cVar2 = _is_type_preferred(this,param_1);
  if (cVar2 == '\0') {
    local_40 = local_40 * __LC145;
  }
  lVar5 = CowData<String>::find((CowData<String> *)(this + 0xdf8),param_1,0);
  if (lVar5 == -1) {
    local_40 = local_40 * _LC147;
  }
  iVar3 = 0;
  while( true ) {
    iVar4 = ItemList::get_item_count();
    if (4 < iVar4) {
      iVar4 = 4;
    }
    if (iVar4 <= iVar3) break;
    ItemList::get_item_text((int)(String *)&local_38);
    cVar2 = String::operator==((String *)&local_38,param_1);
    lVar5 = local_38;
    if (local_38 != 0) {
      LOCK();
      plVar1 = (long *)(local_38 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        local_38 = 0;
        Memory::free_static((void *)(lVar5 + -0x10),false);
      }
    }
    if (cVar2 != '\0') goto LAB_00105e00;
    iVar3 = iVar3 + 1;
  }
  local_40 = local_40 * __LC145;
LAB_00105e00:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_40;
}



/* CreateDialog::select_type(String const&, bool) */

void CreateDialog::select_type(String *param_1,bool param_2)

{
  uint uVar1;
  long lVar2;
  long *plVar3;
  String *pSVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  ulong uVar15;
  char cVar16;
  bool bVar17;
  uint uVar18;
  undefined8 *puVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  undefined7 in_register_00000031;
  String *pSVar23;
  long lVar24;
  uint uVar25;
  long in_FS_OFFSET;
  CowData<char32_t> local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 local_80;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  pSVar23 = (String *)CONCAT71(in_register_00000031,param_2);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(param_1 + 0xe20) != 0) && (*(int *)(param_1 + 0xe44) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_1 + 0xe40) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_1 + 0xe40) * 8);
    uVar18 = String::hash();
    uVar15 = CONCAT44(0,uVar1);
    lVar24 = *(long *)(param_1 + 0xe28);
    uVar20 = 1;
    if (uVar18 != 0) {
      uVar20 = uVar18;
    }
    auVar7._8_8_ = 0;
    auVar7._0_8_ = (ulong)uVar20 * lVar2;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar15;
    lVar22 = SUB168(auVar7 * auVar11,8);
    uVar18 = *(uint *)(lVar24 + lVar22 * 4);
    iVar21 = SUB164(auVar7 * auVar11,8);
    if (uVar18 != 0) {
      uVar25 = 0;
      do {
        if (uVar20 == uVar18) {
          cVar16 = String::operator==((String *)
                                      (*(long *)(*(long *)(param_1 + 0xe20) + lVar22 * 8) + 0x10),
                                      pSVar23);
          if (cVar16 != '\0') {
            puVar19 = (undefined8 *)
                      HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                      ::operator[]((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                                    *)(param_1 + 0xe18),pSVar23);
            plVar3 = (long *)*puVar19;
            TreeItem::select((int)plVar3);
            Tree::scroll_to_item(*(TreeItem **)(param_1 + 0xdc0),SUB81(plVar3,0));
            pSVar4 = *(String **)(param_1 + 0xe10);
            local_88 = &_LC148;
            local_90 = 0;
            local_98 = 0;
            local_80 = 1;
            String::parse_latin1((StrRange *)&local_98);
            operator+((char *)local_a0,(String *)"class|");
            String::operator+((String *)&local_88,(String *)local_a0);
            EditorHelpBit::parse_symbol(pSVar4,(String *)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            CowData<char32_t>::_unref(local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            BaseButton::set_disabled(SUB81(*(undefined8 *)(param_1 + 0xde8),0));
            uVar5 = *(undefined8 *)(param_1 + 0xde8);
            CowData<String>::find((CowData<String> *)(param_1 + 0xdf8),pSVar23,0);
            BaseButton::set_pressed(SUB81(uVar5,0));
            pcVar6 = *(code **)(*plVar3 + 0xb8);
            Variant::Variant((Variant *)local_78,true);
            StringName::StringName((StringName *)&local_88,"__instantiable",false);
            (*pcVar6)((Variant *)local_58,plVar3,(String *)&local_88,(Variant *)local_78);
            bVar17 = Variant::operator_cast_to_bool((Variant *)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            if ((StringName::configured != '\0') && (local_88 != (undefined *)0x0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            if (bVar17) {
              BaseButton::set_disabled(SUB81(*(undefined8 *)(param_1 + 0xd88),0));
              local_88 = (undefined *)0x0;
              Control::set_tooltip_text(*(String **)(param_1 + 0xd88));
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
            }
            else {
              BaseButton::set_disabled(SUB81(*(undefined8 *)(param_1 + 0xd88),0));
              pSVar23 = *(String **)(param_1 + 0xd88);
              local_90 = 0;
              String::parse_latin1((String *)&local_90,"");
              local_98 = 0;
              String::parse_latin1((String *)&local_98,"The selected class can\'t be instantiated.")
              ;
              TTR((String *)&local_88,(String *)&local_98);
              Control::set_tooltip_text(pSVar23);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            }
            break;
          }
          lVar24 = *(long *)(param_1 + 0xe28);
        }
        uVar25 = uVar25 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(iVar21 + 1) * lVar2;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar15;
        lVar22 = SUB168(auVar8 * auVar12,8);
        uVar18 = *(uint *)(lVar24 + lVar22 * 4);
        iVar21 = SUB164(auVar8 * auVar12,8);
        if ((uVar18 == 0) ||
           (auVar9._8_8_ = 0, auVar9._0_8_ = (ulong)uVar18 * lVar2, auVar13._8_8_ = 0,
           auVar13._0_8_ = uVar15, auVar10._8_8_ = 0,
           auVar10._0_8_ = (ulong)((uVar1 + iVar21) - SUB164(auVar9 * auVar13,8)) * lVar2,
           auVar14._8_8_ = 0, auVar14._0_8_ = uVar15, SUB164(auVar10 * auVar14,8) < uVar25)) break;
      } while( true );
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::_item_selected() */

void __thiscall CreateDialog::_item_selected(CreateDialog *this)

{
  long lVar1;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  lVar1 = Tree::get_selected();
  if (lVar1 == 0) {
    local_28 = 0;
  }
  else {
    TreeItem::get_text((int)&local_28);
  }
  select_type((String *)this,SUB81(&local_28,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::_update_search() */

void __thiscall CreateDialog::_update_search(CreateDialog *this)

{
  CowData *pCVar1;
  void *pvVar2;
  Object *pOVar3;
  String *pSVar4;
  float fVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  StringName *pSVar11;
  int iVar12;
  long in_FS_OFFSET;
  float fVar13;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  long local_60;
  Object *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::clear();
  if ((*(long *)(this + 0xe20) != 0) && (*(int *)(this + 0xe44) != 0)) {
    lVar10 = 0;
    uVar7 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe40) * 4);
    if (uVar7 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xe28) + lVar10) != 0) {
          *(int *)(*(long *)(this + 0xe28) + lVar10) = 0;
          pvVar2 = *(void **)(*(long *)(this + 0xe20) + lVar10 * 2);
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
          Memory::free_static(pvVar2,false);
          *(undefined8 *)(*(long *)(this + 0xe20) + lVar10 * 2) = 0;
        }
        lVar10 = lVar10 + 4;
      } while ((ulong)uVar7 << 2 != lVar10);
    }
    *(undefined4 *)(this + 0xe44) = 0;
    *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
  }
  uVar8 = Tree::create_item(*(TreeItem **)(this + 0xdc0),0);
  local_58 = (Object *)0x0;
  pCVar1 = (CowData *)(this + 0xdc8);
  if (*(long *)(this + 0xdc8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,pCVar1);
  }
  TreeItem::set_text(uVar8,0,(CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  StringName::StringName((StringName *)&local_60,(String *)(this + 0xdd8),false);
  Control::get_editor_theme_icon((StringName *)&local_58);
  TreeItem::set_icon((int)uVar8,(Ref *)0x0);
  if (((local_58 != (Object *)0x0) &&
      (cVar6 = RefCounted::unreference(), pOVar3 = local_58, cVar6 != '\0')) &&
     (cVar6 = predelete_handler(local_58), cVar6 != '\0')) {
    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
    Memory::free_static(pOVar3,false);
  }
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  puVar9 = (undefined8 *)
           HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
           ::operator[]((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                         *)(this + 0xe18),(String *)pCVar1);
  *puVar9 = uVar8;
  StringName::StringName((StringName *)&local_60,(String *)pCVar1,false);
  uVar7 = ClassDB::class_exists((StringName *)&local_60);
  StringName::StringName((StringName *)&local_58,(String *)pCVar1,false);
  _configure_search_option_item(this,uVar8,(CowData<char32_t> *)&local_58,((uVar7 ^ 1) & 0xff) * 2);
  if (((StringName::configured != '\0') &&
      ((local_58 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
     (local_60 != 0)) {
    StringName::unref();
  }
  LineEdit::get_text();
  if (local_98 == 0) {
    local_90 = 0;
    if (*(long **)(this + 0xea8) != (long *)0x0) {
      pSVar11 = (StringName *)**(long **)(this + 0xea8);
joined_r0x0010697c:
      local_90 = 0;
      iVar12 = 0;
      if (pSVar11 != (StringName *)0x0) {
LAB_001065a9:
        local_90 = 0;
        fVar5 = 0.0;
        do {
          StringName::StringName((StringName *)&local_68,pSVar11);
          if (iVar12 == 0) {
            uVar7 = ClassDB::class_exists((StringName *)&local_68);
            _add_type(this,(StringName *)&local_68,((uVar7 ^ 1) & 0xff) * 2);
          }
          else {
            if (local_68 == 0) {
              local_60 = 0;
            }
            else {
              pOVar3 = *(Object **)(local_68 + 8);
              local_60 = 0;
              if (pOVar3 == (Object *)0x0) {
                if (*(long *)(local_68 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_60,(CowData *)(local_68 + 0x10));
                }
              }
              else {
                local_50 = strlen((char *)pOVar3);
                local_58 = pOVar3;
                String::parse_latin1((StrRange *)&local_60);
              }
            }
            cVar6 = String::is_subsequence_ofn((String *)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if (cVar6 != '\0') {
              uVar7 = ClassDB::class_exists((StringName *)&local_68);
              _add_type(this,(StringName *)&local_68,((uVar7 ^ 1) & 0xff) * 2);
              if (local_68 == 0) {
                local_60 = 0;
              }
              else {
                local_60 = 0;
                if (*(char **)(local_68 + 8) == (char *)0x0) {
                  if (*(long *)(local_68 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_60,(CowData *)(local_68 + 0x10));
                  }
                }
                else {
                  String::parse_latin1((String *)&local_60,*(char **)(local_68 + 8));
                }
              }
              String::get_slicec((wchar32)(CowData<char32_t> *)&local_58,
                                 (int)(StringName *)&local_60);
              fVar13 = (float)_score_type(this,(String *)&local_58,(String *)&local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if (fVar5 < fVar13) {
                StringName::operator=((StringName *)&local_90,(StringName *)&local_68);
                fVar5 = fVar13;
              }
            }
          }
          if ((StringName::configured != '\0') && (local_68 != 0)) {
            StringName::unref();
          }
          pSVar11 = *(StringName **)(pSVar11 + 8);
        } while (pSVar11 != (StringName *)0x0);
        if (iVar12 != 0) {
          if (local_90 != 0) {
            local_58 = (Object *)0x0;
            if (*(char **)(local_90 + 8) == (char *)0x0) {
              if (*(long *)(local_90 + 0x10) != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(local_90 + 0x10))
                ;
              }
            }
            else {
              String::parse_latin1((String *)&local_58,*(char **)(local_90 + 8));
            }
            select_type((String *)this,SUB81((CowData<char32_t> *)&local_58,0));
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            goto LAB_001068fd;
          }
          goto LAB_00106763;
        }
      }
    }
  }
  else {
    iVar12 = (int)*(undefined8 *)(local_98 + -8);
    if (iVar12 != 0) {
      local_90 = 0;
      iVar12 = iVar12 + -1;
      if ((*(long **)(this + 0xea8) != (long *)0x0) &&
         (pSVar11 = (StringName *)**(long **)(this + 0xea8), pSVar11 != (StringName *)0x0))
      goto LAB_001065a9;
      if (iVar12 == 0) goto LAB_00106988;
LAB_00106763:
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xde8),0));
      pSVar4 = *(String **)(this + 0xe10);
      String::replace((char *)&local_60,(char *)&local_98);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"");
      local_78 = 0;
      String::parse_latin1((String *)&local_78,"No results for \"%s\".");
      TTR((String *)&local_68,(String *)&local_78);
      vformat<String>((CowData<char32_t> *)&local_58,(String *)&local_68,(StringName *)&local_60);
      local_80 = 0;
      local_88 = 0;
      EditorHelpBit::set_custom_text(pSVar4,(String *)&local_88,(String *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
      Tree::deselect_all();
      goto LAB_001068fd;
    }
    local_90 = 0;
    if (*(long **)(this + 0xea8) != (long *)0x0) {
      pSVar11 = (StringName *)**(long **)(this + 0xea8);
      goto joined_r0x0010697c;
    }
  }
LAB_00106988:
  select_type((String *)this,SUB81(pCVar1,0));
LAB_001068fd:
  if ((StringName::configured != '\0') && (local_90 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::_text_changed(String const&) */

void CreateDialog::_text_changed(String *param_1)

{
  _update_search((CreateDialog *)param_1);
  return;
}



/* CreateDialog::_history_selected(int) */

void CreateDialog::_history_selected(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  CowData<char32_t> local_40 [8];
  CowData<char32_t> local_38 [8];
  long local_30;
  
  uVar1 = *(undefined8 *)((CreateDialog *)CONCAT44(in_register_0000003c,param_1) + 0xdb8);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar2 = (int)local_40;
  ItemList::get_item_text(iVar2);
  String::get_slicec((wchar32)local_38,iVar2);
  LineEdit::set_text(uVar1,local_38);
  CowData<char32_t>::_unref(local_38);
  CowData<char32_t>::_unref(local_40);
  Tree::deselect_all();
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    _update_search((CreateDialog *)CONCAT44(in_register_0000003c,param_1));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::_favorite_selected() */

void __thiscall CreateDialog::_favorite_selected(CreateDialog *this)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long in_FS_OFFSET;
  CowData<char32_t> local_40 [8];
  CowData<char32_t> local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  lVar2 = Tree::get_selected();
  if (lVar2 == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else {
    uVar1 = *(undefined8 *)(this + 0xdb8);
    iVar3 = (int)local_40;
    TreeItem::get_text(iVar3);
    String::get_slicec((wchar32)local_38,iVar3);
    LineEdit::set_text(uVar1,local_38);
    CowData<char32_t>::_unref(local_38);
    CowData<char32_t>::_unref(local_40);
    ItemList::deselect_all();
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _update_search(this);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::select_base() */

void __thiscall CreateDialog::select_base(CreateDialog *this)

{
  if (*(int *)(this + 0xe44) == 0) {
    _update_search(this);
  }
  select_type((String *)this,(bool)((char)this + -0x38));
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



/* CreateDialog::_cleanup() */

void __thiscall CreateDialog::_cleanup(CreateDialog *this)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  
  plVar6 = *(long **)(this + 0xea8);
  if (plVar6 != (long *)0x0) {
    do {
      plVar2 = (long *)*plVar6;
      if (plVar2 == (long *)0x0) goto LAB_00106dc3;
      if ((long *)plVar2[3] == plVar6) {
        lVar5 = plVar2[1];
        lVar3 = plVar2[2];
        *plVar6 = lVar5;
        if (plVar2 == (long *)plVar6[1]) {
          plVar6[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar5;
          lVar5 = plVar2[1];
        }
        if (lVar5 != 0) {
          *(long *)(lVar5 + 0x10) = lVar3;
        }
        if ((StringName::configured != '\0') && (*plVar2 != 0)) {
          StringName::unref();
        }
        Memory::free_static(plVar2,false);
        *(int *)(plVar6 + 2) = (int)plVar6[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar6 = *(long **)(this + 0xea8);
    } while ((int)plVar6[2] != 0);
    Memory::free_static(plVar6,false);
    *(undefined8 *)(this + 0xea8) = 0;
  }
LAB_00106dc3:
  CowData<String>::resize<false>((CowData<String> *)(this + 0xdf8),0);
  Tree::clear();
  ItemList::clear();
  if ((*(long *)(this + 0xe50) != 0) && (*(int *)(this + 0xe74) != 0)) {
    lVar5 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe70) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xe58) + lVar5) != 0) {
          *(int *)(*(long *)(this + 0xe58) + lVar5) = 0;
          pvVar4 = *(void **)(*(long *)(this + 0xe50) + lVar5 * 2);
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x18));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x10));
          Memory::free_static(pvVar4,false);
          *(undefined8 *)(*(long *)(this + 0xe50) + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while ((ulong)uVar1 << 2 != lVar5);
    }
    *(undefined4 *)(this + 0xe74) = 0;
    *(undefined1 (*) [16])(this + 0xe60) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0xe80) != 0) && (*(int *)(this + 0xea4) != 0)) {
    lVar5 = 0;
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xea0) * 4);
    if (uVar1 != 0) {
      do {
        if (*(int *)(*(long *)(this + 0xe88) + lVar5) != 0) {
          *(int *)(*(long *)(this + 0xe88) + lVar5) = 0;
          pvVar4 = *(void **)(*(long *)(this + 0xe80) + lVar5 * 2);
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x10));
          Memory::free_static(pvVar4,false);
          *(undefined8 *)(*(long *)(this + 0xe80) + lVar5 * 2) = 0;
        }
        lVar5 = lVar5 + 4;
      } while (lVar5 != (ulong)uVar1 << 2);
    }
    *(undefined4 *)(this + 0xea4) = 0;
    *(undefined1 (*) [16])(this + 0xe90) = (undefined1  [16])0x0;
  }
  return;
}



/* CreateDialog::_script_button_clicked(TreeItem*, int, int, MouseButton) */

void __thiscall
CreateDialog::_script_button_clicked
          (CreateDialog *this,undefined8 param_2,undefined8 param_3_00,int param_3,int param_5)

{
  char cVar1;
  Object *pOVar2;
  long in_FS_OFFSET;
  long local_68;
  Object *local_60;
  undefined8 local_58;
  undefined8 local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_5 != 1) || (param_3 != 1)) goto LAB_00106fad;
  TreeItem::get_text((int)(CowData<char32_t> *)&local_48);
  ScriptServer::get_global_class_path((String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  local_50 = 0;
  String::parse_latin1((String *)&local_50,"Script");
  ResourceLoader::load((CowData<char32_t> *)&local_48,&local_68,(String *)&local_50,1,0);
  local_60 = (Object *)0x0;
  if (local_48 == (Object *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  else {
    pOVar2 = (Object *)__dynamic_cast(local_48,&Object::typeinfo,&Script::typeinfo,0);
    if (pOVar2 == (Object *)0x0) {
LAB_00107083:
      cVar1 = RefCounted::unreference();
      pOVar2 = local_60;
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(local_48), pOVar2 = local_60, cVar1 != '\0')
         ) {
        (**(code **)(*(long *)local_48 + 0x140))(local_48);
        Memory::free_static(local_48,false);
      }
    }
    else {
      local_60 = pOVar2;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
        local_60 = (Object *)0x0;
      }
      pOVar2 = local_60;
      if (local_48 != (Object *)0x0) goto LAB_00107083;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (pOVar2 != (Object *)0x0) {
      EditorNode::push_item_no_inspector(EditorNode::singleton);
      Window::hide();
      _cleanup(this);
      cVar1 = RefCounted::unreference();
      if ((cVar1 != '\0') && (cVar1 = predelete_handler(pOVar2), cVar1 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      goto LAB_00106fad;
    }
  }
  local_50 = 0;
  if (local_68 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_50,(CowData *)&local_68);
  }
  local_58 = 0;
  String::parse_latin1((String *)&local_58,"Could not load the script from resource path: %s");
  vformat<String>((CowData<char32_t> *)&local_48,(String *)&local_58,(String *)&local_50);
  _err_print_error("_script_button_clicked","editor/create_dialog.cpp",0x7d,
                   "Condition \"scr.is_null()\" is true.",(CowData<char32_t> *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  Ref<Script>::unref((Ref<Script> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00106fad:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CreateDialog::_confirmed() */

void __thiscall CreateDialog::_confirmed(CreateDialog *this)

{
  code *pcVar1;
  Object *pOVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  int iVar9;
  long in_FS_OFFSET;
  long local_a0;
  Object *local_98;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  long local_80;
  int local_78 [8];
  int local_58 [2];
  undefined1 local_50 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar7 = Tree::get_selected();
  if (lVar7 == 0) {
    local_a0 = 0;
  }
  else {
    TreeItem::get_text((int)(CowData<char32_t> *)&local_a0);
    if ((local_a0 != 0) && (1 < *(uint *)(local_a0 + -8))) {
      plVar8 = (long *)Tree::get_selected();
      pcVar1 = *(code **)(*plVar8 + 0xb8);
      Variant::Variant((Variant *)local_78,true);
      StringName::StringName((StringName *)&local_80,"__instantiable",false);
      (*pcVar1)((Variant *)local_58,plVar8,(StringName *)&local_80,(Variant *)local_78);
      bVar3 = Variant::operator_cast_to_bool((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (bVar3) {
        EditorPaths::get_project_settings_dir();
        operator+((char *)local_88,(String *)"create_recent.");
        String::path_join((String *)&local_80);
        iVar6 = (int)(StringName *)&local_80;
        FileAccess::open((String *)&local_98,iVar6,(Error *)0x2);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref(local_88);
        CowData<char32_t>::_unref(local_90);
        if (local_98 != (Object *)0x0) {
          iVar9 = 0;
          (**(code **)(*(long *)local_98 + 0x2b0))();
          while( true ) {
            iVar5 = ItemList::get_item_count();
            if (0xe < iVar5) {
              iVar5 = 0xe;
            }
            if (iVar5 <= iVar9) break;
            ItemList::get_item_text(iVar6);
            cVar4 = String::operator!=((String *)&local_80,(String *)&local_a0);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            pOVar2 = local_98;
            if (cVar4 != '\0') {
              pcVar1 = *(code **)(*(long *)local_98 + 0x2b0);
              ItemList::get_item_text(iVar6);
              (*pcVar1)(pOVar2);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
            }
            iVar9 = iVar9 + 1;
          }
          if (local_98 != (Object *)0x0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
              cVar4 = predelete_handler(local_98);
              if (cVar4 != '\0') {
                (**(code **)(*(long *)local_98 + 0x140))(local_98);
                Memory::free_static(local_98,false);
              }
            }
          }
        }
        Window::hide();
        if (_confirmed()::{lambda()#1}::operator()()::sname == '\0') {
          iVar6 = __cxa_guard_acquire(&_confirmed()::{lambda()#1}::operator()()::sname);
          if (iVar6 != 0) {
            _scs_create((char *)&_confirmed()::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,&_confirmed()::{lambda()#1}::operator()()::sname,
                         &__dso_handle);
            __cxa_guard_release(&_confirmed()::{lambda()#1}::operator()()::sname);
          }
        }
        local_58[0] = 0;
        local_58[1] = 0;
        local_50 = (undefined1  [16])0x0;
        (**(code **)(*(long *)this + 0xd0))
                  (this,&_confirmed()::{lambda()#1}::operator()()::sname,0,0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        _cleanup(this);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
        goto LAB_00107256;
      }
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
LAB_00107256:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::_history_activated(int) */

void CreateDialog::_history_activated(int param_1)

{
  undefined4 in_register_0000003c;
  
  _history_selected(param_1);
  _confirmed((CreateDialog *)CONCAT44(in_register_0000003c,param_1));
  return;
}



/* CreateDialog::_favorite_activated() */

void __thiscall CreateDialog::_favorite_activated(CreateDialog *this)

{
  _favorite_selected(this);
  _confirmed(this);
  return;
}



/* CreateDialog::cancel_pressed() */

void __thiscall CreateDialog::cancel_pressed(CreateDialog *this)

{
  _cleanup(this);
  return;
}



/* CowData<String>::insert(long, String const&) [clone .isra.0] */

void __thiscall CowData<String>::insert(CowData<String> *this,long param_1,String *param_2)

{
  undefined8 uVar1;
  int iVar2;
  CowData<char32_t> *pCVar3;
  long lVar4;
  long lVar5;
  
  if (*(long *)this == 0) {
    lVar5 = 1;
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(*(long *)this + -8);
    lVar5 = lVar4 + 1;
  }
  if ((param_1 < 0) || (lVar5 <= param_1)) {
    _err_print_index_error
              ("insert","./core/templates/cowdata.h",0xf0,param_1,lVar5,"p_pos","new_size","",false,
               false);
  }
  else {
    iVar2 = resize<false>(this,lVar5);
    if (iVar2 != 0) {
      _err_print_error("insert","./core/templates/cowdata.h",0xf2,
                       "Condition \"err\" is true. Returning: err",0,0);
      return;
    }
    _copy_on_write(this);
    lVar5 = *(long *)this;
    pCVar3 = (CowData<char32_t> *)(lVar5 + lVar4 * 8);
    if (param_1 < lVar4) {
      do {
        if (*(long *)pCVar3 != *(long *)(pCVar3 + -8)) {
          CowData<char32_t>::_unref(pCVar3);
          uVar1 = *(undefined8 *)(pCVar3 + -8);
          *(undefined8 *)(pCVar3 + -8) = 0;
          *(undefined8 *)pCVar3 = uVar1;
        }
        lVar4 = lVar4 + -1;
        pCVar3 = pCVar3 + -8;
      } while (param_1 != lVar4);
    }
    pCVar3 = (CowData<char32_t> *)(lVar5 + param_1 * 8);
    if (*(long *)pCVar3 != *(long *)param_2) {
      CowData<char32_t>::_ref(pCVar3,(CowData *)param_2);
      return;
    }
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



/* CreateDialog::_load_favorites_and_history() */

void __thiscall CreateDialog::_load_favorites_and_history(CreateDialog *this)

{
  String *pSVar1;
  String *pSVar2;
  Object *pOVar3;
  char cVar4;
  bool bVar5;
  Object *pOVar6;
  long in_FS_OFFSET;
  CowData<char32_t> local_80 [8];
  Object *local_78;
  CowData<char32_t> local_70 [8];
  CowData<char32_t> local_68 [8];
  long local_60;
  Object *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  EditorPaths::get_project_settings_dir();
  operator+((char *)&local_60,(String *)"create_recent.");
  String::path_join((String *)&local_58);
  FileAccess::open((String *)&local_78,(int)(String *)&local_58,(Error *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  bVar5 = SUB81((String *)&local_58,0);
  if (local_78 != (Object *)0x0) {
    while (cVar4 = (**(code **)(*(long *)local_78 + 0x1d8))(), cVar4 == '\0') {
      (**(code **)(*(long *)local_78 + 0x228))((String *)&local_58);
      String::strip_edges(SUB81(local_70,0),bVar5);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      String::get_slicec((wchar32)local_68,(int)local_70);
      cVar4 = EditorData::is_type_recognized(EditorNode::singleton + 0x430);
      if (cVar4 != '\0') {
        StringName::StringName((StringName *)&local_58,(String *)local_68,false);
        cVar4 = _is_class_disabled_by_feature_profile((StringName *)this);
        if (cVar4 == '\0') {
          if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
            StringName::unref();
          }
          pSVar2 = EditorNode::singleton;
          pSVar1 = *(String **)(this + 0xe08);
          local_60 = 0;
          local_58 = (Object *)&_LC0;
          local_50 = 0;
          String::parse_latin1((StrRange *)&local_60);
          EditorNode::get_class_icon((String *)&local_58,pSVar2);
          ItemList::add_item(pSVar1,(Ref *)local_70,bVar5);
          if (((local_58 != (Object *)0x0) &&
              (cVar4 = RefCounted::unreference(), pOVar6 = local_58, cVar4 != '\0')) &&
             (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))();
            Memory::free_static(pOVar6,false);
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        else if ((StringName::configured != '\0') && (local_58 != (Object *)0x0)) {
          StringName::unref();
        }
      }
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
    }
  }
  operator+((char *)local_68,(String *)"favorites.");
  String::path_join((String *)&local_60);
  FileAccess::open((String *)&local_58,(int)(CowData<char32_t> *)&local_60,(Error *)0x1);
  pOVar3 = local_78;
  pOVar6 = local_78;
  if (local_58 != local_78) {
    local_78 = local_58;
    if (local_58 == (Object *)0x0) {
      if (pOVar3 == (Object *)0x0) goto LAB_00107af2;
      cVar4 = RefCounted::unreference();
      pOVar6 = local_58;
    }
    else {
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_78 = (Object *)0x0;
      }
      pOVar6 = local_58;
      if (pOVar3 == (Object *)0x0) goto LAB_00107add;
      cVar4 = RefCounted::unreference();
      pOVar6 = local_58;
    }
    local_58 = pOVar6;
    if ((cVar4 != '\0') && (cVar4 = predelete_handler(pOVar3), pOVar6 = local_58, cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
      Memory::free_static(pOVar3,false);
      pOVar6 = local_58;
    }
  }
LAB_00107add:
  if (((pOVar6 != (Object *)0x0) &&
      (cVar4 = RefCounted::unreference(), pOVar6 = local_58, cVar4 != '\0')) &&
     (cVar4 = predelete_handler(local_58), cVar4 != '\0')) {
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
  }
LAB_00107af2:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref(local_68);
  if (local_78 != (Object *)0x0) {
    while (cVar4 = (**(code **)(*(long *)local_78 + 0x1d8))(), cVar4 == '\0') {
      (**(code **)(*(long *)local_78 + 0x228))((String *)&local_58);
      String::strip_edges(SUB81((CowData<char32_t> *)&local_60,0),bVar5);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((local_60 != 0) && (1 < *(uint *)(local_60 + -8))) {
        local_58 = (Object *)0x0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_60);
        Vector<String>::push_back((Vector<String> *)(this + 0xdf0));
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    }
    if (((local_78 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar6 = local_78, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_78), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
      Memory::free_static(pOVar6,false);
    }
  }
  CowData<char32_t>::_unref(local_80);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::popup_create(bool, bool, String const&, String const&) */

void __thiscall
CreateDialog::popup_create
          (CreateDialog *this,bool param_1,bool param_2,String *param_3,String *param_4)

{
  StringName *pSVar1;
  undefined8 uVar2;
  code *pcVar3;
  char cVar4;
  String *pSVar5;
  char *pcVar6;
  long in_FS_OFFSET;
  float fVar7;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined1 local_98 [8];
  float local_90;
  float fStack_8c;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [4];
  undefined1 local_58 [16];
  long local_40;
  
  pSVar5 = (String *)(this + 0xdc8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  _fill_type_list(this);
  pSVar1 = *(StringName **)(this + 0xdc0);
  StringName::StringName((StringName *)&local_b0,pSVar5,false);
  cVar4 = Control::has_theme_icon(pSVar1,(StringName *)&local_b0);
  local_a8 = (char *)0x0;
  if (cVar4 == '\0') {
    String::parse_latin1((String *)&local_a8,"Object");
    pcVar6 = local_a8;
  }
  else {
    pcVar6 = (char *)*(long *)(this + 0xdc8);
    if (*(long *)(this + 0xdc8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)pSVar5);
      pcVar6 = local_a8;
    }
  }
  if (pcVar6 != (char *)*(long *)(this + 0xdd8)) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdd8));
    pcVar6 = local_a8;
    local_a8 = (char *)0x0;
    *(char **)(this + 0xdd8) = pcVar6;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  if ((StringName::configured != '\0') && (local_b0 != 0)) {
    StringName::unref();
  }
  if (param_1) {
    LineEdit::select_all();
  }
  else {
    LineEdit::clear();
  }
  uVar2 = *(undefined8 *)(this + 0xdb8);
  if (param_2) {
    local_a8 = (char *)0x0;
    if (*(long *)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)param_3);
    }
    LineEdit::set_text(uVar2,(CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    Control::grab_focus();
    _update_search(this);
    local_b0 = 0;
    if (*(long *)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)param_4);
    }
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"Change Type of \"%s\"");
    TTR((String *)&local_b8,(String *)&local_c8);
    vformat<String>((CowData<char32_t> *)&local_a8,(String *)&local_b8,(StringName *)&local_b0);
    Window::set_title((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"");
    pcVar6 = "Change";
  }
  else {
    Control::grab_focus();
    _update_search(this);
    local_b0 = 0;
    if (*(long *)(this + 0xdc8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)pSVar5);
    }
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = 0;
    String::parse_latin1((String *)&local_c8,"Create New %s");
    TTR((String *)&local_b8,(String *)&local_c8);
    vformat<String>((CowData<char32_t> *)&local_a8,(String *)&local_b8,(StringName *)&local_b0);
    Window::set_title((String *)this);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    local_b0 = 0;
    String::parse_latin1((String *)&local_b0,"");
    pcVar6 = "Create";
  }
  local_b8 = 0;
  String::parse_latin1((String *)&local_b8,pcVar6);
  TTR((String *)&local_a8,(String *)&local_b8);
  AcceptDialog::set_ok_button_text(this,(CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  _load_favorites_and_history(this);
  _save_and_update_favorite_list(this);
  pSVar5 = (String *)EditorSettings::get_singleton();
  local_88 = 0;
  local_80 = 0;
  Variant::Variant((Variant *)local_78,(Rect2 *)&local_88);
  local_a8 = "create_new_node";
  local_b0 = 0;
  local_a0 = 0xf;
  String::parse_latin1((StrRange *)&local_b0);
  local_a8 = "dialog_bounds";
  local_b8 = 0;
  local_a0 = 0xd;
  String::parse_latin1((StrRange *)&local_b8);
  EditorSettings::get_project_metadata((String *)local_58,pSVar5,(Variant *)&local_b8);
  _local_98 = Variant::operator_cast_to_Rect2((Variant *)local_58);
  if (Variant::needs_deinit[(int)local_58._0_4_] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (((((float)local_98._0_4_ == 0.0) && ((float)local_98._4_4_ == 0.0)) && (local_90 == 0.0)) &&
     (fStack_8c == 0.0)) {
    fVar7 = (float)EditorScale::get_scale();
    local_78[0] = CONCAT44(fVar7 * _LC176._4_4_,fVar7 * (float)_LC176);
    local_58._0_8_ = Vector2::operator_cast_to_Vector2i((Vector2 *)local_78);
    Window::popup_centered_clamped(this,_LC147);
  }
  else {
    pcVar3 = *(code **)(*(long *)this + 0x240);
    local_58 = Rect2::operator_cast_to_Rect2i((Rect2 *)local_98);
    (*pcVar3)(this,(String *)local_58);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CreateDialog::_favorite_toggled() */

void __thiscall CreateDialog::_favorite_toggled(CreateDialog *this)

{
  long lVar1;
  CowData<String> *this_00;
  undefined8 uVar2;
  long lVar3;
  CowData<char32_t> *this_01;
  long lVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar3 = Tree::get_selected();
  if (lVar3 == 0) goto LAB_00108352;
  this_00 = (CowData<String> *)(this + 0xdf8);
  TreeItem::get_text((int)(CowData<char32_t> *)&local_50);
  lVar3 = CowData<String>::find(this_00,(String *)&local_50,0);
  if (lVar3 == -1) {
    local_48 = 0;
    if (local_50 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_50);
    }
    Vector<String>::push_back((Vector<String> *)(this + 0xdf0),(CowData<char32_t> *)&local_48);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xde8),0));
  }
  else {
    lVar3 = CowData<String>::find(this_00,(String *)&local_50,0);
    if (-1 < lVar3) {
      if (*(long *)(this + 0xdf8) == 0) {
        lVar4 = 0;
      }
      else {
        lVar4 = *(long *)(*(long *)(this + 0xdf8) + -8);
        if (lVar3 < lVar4) {
          CowData<String>::_copy_on_write(this_00);
          lVar4 = *(long *)(this + 0xdf8);
          if (lVar4 == 0) {
            lVar5 = -1;
          }
          else {
            lVar1 = *(long *)(lVar4 + -8) + -1;
            lVar5 = lVar1;
            if (lVar3 < lVar1) {
              this_01 = (CowData<char32_t> *)(lVar4 + lVar3 * 8);
              do {
                if (*(long *)this_01 != *(long *)(this_01 + 8)) {
                  CowData<char32_t>::_unref(this_01);
                  uVar2 = *(undefined8 *)(this_01 + 8);
                  *(undefined8 *)(this_01 + 8) = 0;
                  *(undefined8 *)this_01 = uVar2;
                }
                lVar3 = lVar3 + 1;
                this_01 = this_01 + 8;
                lVar5 = lVar3;
              } while (lVar1 != lVar3);
            }
          }
          CowData<String>::resize<false>(this_00,lVar5);
          goto LAB_0010838d;
        }
      }
      _err_print_index_error
                ("remove_at","./core/templates/cowdata.h",0xe4,lVar3,lVar4,"p_index","size()","",
                 false,false);
    }
LAB_0010838d:
    BaseButton::set_pressed(SUB81(*(undefined8 *)(this + 0xde8),0));
  }
  _save_and_update_favorite_list(this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00108352:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CreateDialog::drop_data_fw(Vector2 const&, Variant const&, Control*) */

void CreateDialog::drop_data_fw(Vector2 *param_1,Variant *param_2,Control *param_3)

{
  long lVar1;
  CowData<String> *this;
  undefined8 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  CowData<char32_t> *this_00;
  long lVar8;
  long in_FS_OFFSET;
  int local_7c;
  Variant local_78 [8];
  CowData<char32_t> local_70 [8];
  long local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::operator_cast_to_Dictionary(local_78);
  lVar6 = Tree::get_item_at_position(*(Vector2 **)(param_1 + 0xe00));
  if (lVar6 != 0) {
    TreeItem::get_text((int)local_70);
    local_7c = Tree::get_drop_section_at_position(*(Vector2 **)(param_1 + 0xe00));
    this = (CowData<String> *)(param_1 + 0xdf8);
    iVar4 = CowData<String>::find(this,(String *)local_70,0);
    if (-1 < iVar4) {
      Variant::Variant((Variant *)local_58,"class");
      Dictionary::operator[](local_78);
      Variant::operator_cast_to_String((Variant *)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      iVar5 = CowData<String>::find(this,(String *)&local_68,0);
      if (-1 < iVar5) {
        if (iVar4 == iVar5) {
          local_7c = -1;
          iVar3 = iVar4;
        }
        else {
          iVar3 = iVar4 + -1;
          if (iVar4 <= iVar5) {
            iVar3 = iVar4;
          }
        }
        lVar6 = (long)iVar5;
        if (*(long *)(param_1 + 0xdf8) == 0) {
          lVar7 = 0;
LAB_001087a3:
          _err_print_index_error
                    ("remove_at","./core/templates/cowdata.h",0xe4,lVar6,lVar7,"p_index","size()",""
                     ,false,false);
        }
        else {
          lVar7 = *(long *)(*(long *)(param_1 + 0xdf8) + -8);
          if (lVar7 <= lVar6) goto LAB_001087a3;
          CowData<String>::_copy_on_write(this);
          lVar7 = *(long *)(param_1 + 0xdf8);
          if (lVar7 == 0) {
            lVar8 = -1;
          }
          else {
            lVar1 = *(long *)(lVar7 + -8) + -1;
            lVar8 = lVar1;
            if (lVar6 < lVar1) {
              this_00 = (CowData<char32_t> *)(lVar7 + lVar6 * 8);
              do {
                if (*(long *)this_00 != *(long *)(this_00 + 8)) {
                  CowData<char32_t>::_unref(this_00);
                  uVar2 = *(undefined8 *)(this_00 + 8);
                  *(undefined8 *)(this_00 + 8) = 0;
                  *(undefined8 *)this_00 = uVar2;
                }
                lVar6 = lVar6 + 1;
                this_00 = this_00 + 8;
                lVar8 = lVar6;
              } while (lVar1 != lVar6);
            }
          }
          CowData<String>::resize<false>(this,lVar8);
        }
        if (local_7c < 0) {
          local_60 = 0;
          if (local_68 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_68);
          }
          CowData<String>::insert(this,(long)iVar3,(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        else if ((*(long *)(param_1 + 0xdf8) == 0) ||
                (*(long *)(*(long *)(param_1 + 0xdf8) + -8) + -1 <= (long)iVar3)) {
          local_60 = 0;
          if (local_68 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_68);
          }
          Vector<String>::push_back
                    ((Vector<String> *)(param_1 + 0xdf0),(CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        else {
          local_60 = 0;
          if (local_68 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)&local_68);
          }
          CowData<String>::insert(this,(long)(iVar3 + 1),(String *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        }
        _save_and_update_favorite_list((CreateDialog *)param_1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref(local_70);
        Dictionary::~Dictionary((Dictionary *)local_78);
        goto LAB_001086e0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    }
    CowData<char32_t>::_unref(local_70);
  }
  Dictionary::~Dictionary((Dictionary *)local_78);
LAB_001086e0:
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
  
  return (uint)CONCAT71(0x11bc,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11bc,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11bc,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11bc,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11bc,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* CreateDialog::_property_can_revertv(StringName const&) const */

undefined8 CreateDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* CreateDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 CreateDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<CreateDialog, void, TreeItem*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<CreateDialog, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<CreateDialog, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*> *this)

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



/* CallableCustomMethodPointer<CreateDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, TreeItem*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton> *this,
          bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<CreateDialog, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CreateDialog, void, String const&>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<CreateDialog,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CreateDialog, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void,int>::get_argument_count
          (CallableCustomMethodPointer<CreateDialog,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<CreateDialog, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<CreateDialog, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<CreateDialog, Variant, Vector2 const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*>::get_argument_count
          (CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*> *this,
          bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_argument_count
          (CallableCustomMethodPointer<Control,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<CreateDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void>::get_argument_count
          (CallableCustomMethodPointer<CreateDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<CreateDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void> *this)

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



/* CallableCustomMethodPointer<CreateDialog, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<CreateDialog, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CreateDialog, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, TreeItem*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton> *this)

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



/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VSplitContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VSplitContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_00121008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00121008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00121008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 VSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00121008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011a7e8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011a7e8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00121010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CreateDialog::_getv(StringName const&, Variant&) const */

undefined8 CreateDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00121010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00121018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* CreateDialog::_setv(StringName const&, Variant const&) */

undefined8 CreateDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00121018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::adjust_heap(long, long,
   long, List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,Element *param_4,Element **param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  uint uVar4;
  byte bVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  Element **ppEVar9;
  long lVar10;
  Element *pEVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar12 = param_2 * 2 + 2;
  lVar16 = param_2;
  if (lVar12 < param_3) {
    do {
      lVar10 = lVar12 + -1;
      ppEVar9 = param_5 + lVar10 + param_1;
      pEVar11 = *ppEVar9;
      pEVar3 = param_5[param_1 + lVar12];
      lVar13 = *(long *)pEVar11;
      lVar6 = *(long *)pEVar3;
      if (lVar6 == 0) {
        if (lVar13 != 0) {
          pbVar14 = *(byte **)(lVar13 + 8);
          uVar8 = 0;
          pbVar15 = &_LC0;
LAB_00109024:
          if (pbVar14 == (byte *)0x0) {
            lVar6 = 0;
            uVar4 = **(uint **)(lVar13 + 0x10);
            if (uVar4 != 0 || uVar8 != 0) {
              do {
                if (uVar8 == 0) goto LAB_00108fd0;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_00108fd0;
                if (uVar4 < uVar8) break;
                uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                uVar4 = (*(uint **)(lVar13 + 0x10))[lVar6 + 1];
                lVar6 = lVar6 + 1;
              } while (uVar8 != 0 || uVar4 != 0);
            }
          }
          else {
            uVar4 = (uint)(char)*pbVar14;
            bVar5 = (byte)uVar8 | *pbVar14;
LAB_00109076:
            if (bVar5 != 0) {
              lVar13 = 1;
              do {
                if (uVar8 == 0) goto LAB_00108fd0;
                if (uVar4 == 0) break;
                if (uVar8 < uVar4) goto LAB_00108fd0;
                if (uVar4 < uVar8) break;
                pbVar1 = pbVar14 + lVar13;
                uVar4 = (uint)(char)*pbVar1;
                pbVar2 = pbVar15 + lVar13;
                uVar8 = (uint)(char)*pbVar2;
                lVar13 = lVar13 + 1;
              } while (*pbVar1 != 0 || *pbVar2 != 0);
            }
          }
        }
      }
      else {
        pbVar15 = *(byte **)(lVar6 + 8);
        if (lVar13 == 0) {
          if (pbVar15 != (byte *)0x0) {
            bVar5 = *pbVar15;
            uVar8 = (uint)(char)bVar5;
            pbVar14 = &_LC0;
            uVar4 = 0;
            goto LAB_00109076;
          }
          uVar8 = 0;
          pbVar14 = &_LC0;
        }
        else {
          pbVar14 = *(byte **)(lVar13 + 8);
          if (pbVar15 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar15;
            goto LAB_00109024;
          }
          if (pbVar14 == (byte *)0x0) {
            lVar7 = 4;
            uVar8 = **(uint **)(lVar13 + 0x10);
            uVar4 = **(uint **)(lVar6 + 0x10);
            if (uVar8 != 0 || uVar4 != 0) {
              do {
                if (uVar4 == 0) goto LAB_00108fd0;
                if (uVar8 == 0) break;
                if (uVar4 < uVar8) goto LAB_00108fd0;
                if (uVar8 < uVar4) break;
                uVar4 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
                uVar8 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar7);
                lVar7 = lVar7 + 4;
              } while (uVar4 != 0 || uVar8 != 0);
            }
            goto LAB_00108ff8;
          }
          uVar8 = (uint)(char)*pbVar14;
        }
        lVar13 = 0;
        uVar4 = **(uint **)(lVar6 + 0x10);
        if (uVar4 != 0 || uVar8 != 0) {
          do {
            if (uVar4 == 0) goto LAB_00108fd0;
            if (uVar8 == 0) break;
            if (uVar4 < uVar8) goto LAB_00108fd0;
            if (uVar8 < uVar4) break;
            uVar4 = (*(uint **)(lVar6 + 0x10))[lVar13 + 1];
            uVar8 = (uint)(char)pbVar14[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar4 != 0 || uVar8 != 0);
        }
      }
LAB_00108ff8:
      ppEVar9 = param_5 + param_1 + lVar12;
      lVar10 = lVar12;
      pEVar11 = pEVar3;
      lVar12 = lVar12 + 1;
LAB_00108fd0:
      lVar12 = lVar12 * 2;
      param_5[param_1 + lVar16] = pEVar11;
      lVar16 = lVar10;
    } while (lVar12 < param_3);
    if (lVar12 == param_3) goto LAB_001093fd;
  }
  else {
    ppEVar9 = param_5 + param_2 + param_1;
    if (lVar12 != param_3) goto LAB_001091fa;
LAB_001093fd:
    lVar10 = lVar12 + -1;
    *ppEVar9 = param_5[param_1 + lVar10];
    ppEVar9 = param_5 + param_1 + lVar10;
  }
  lVar12 = (lVar10 + -1) - (lVar10 + -1 >> 0x3f);
  if (param_2 < lVar10) {
    lVar16 = *(long *)param_4;
    while( true ) {
      lVar13 = lVar12 >> 1;
      pEVar11 = param_5[param_1 + lVar13];
      lVar12 = *(long *)pEVar11;
      if (lVar12 == 0) break;
      pbVar15 = *(byte **)(lVar12 + 8);
      if (lVar16 == 0) {
        uVar8 = 0;
        pbVar14 = &_LC0;
        if (pbVar15 != (byte *)0x0) {
          bVar5 = *pbVar15;
          uVar8 = (uint)(char)bVar5;
          uVar4 = 0;
          pbVar14 = &_LC0;
          goto LAB_0010927a;
        }
LAB_001092da:
        uVar4 = **(uint **)(lVar12 + 0x10);
        if (uVar4 == 0 && uVar8 == 0) goto LAB_001091f0;
        lVar6 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_001091f0;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_001091f0;
          uVar4 = (*(uint **)(lVar12 + 0x10))[lVar6 + 1];
          uVar8 = (uint)(char)pbVar14[lVar6 + 1];
          lVar6 = lVar6 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_001091f0;
        }
      }
      else {
        pbVar14 = *(byte **)(lVar16 + 8);
        if (pbVar15 == (byte *)0x0) {
          if (pbVar14 != (byte *)0x0) {
            uVar8 = (uint)(char)*pbVar14;
            goto LAB_001092da;
          }
          uVar8 = **(uint **)(lVar16 + 0x10);
          uVar4 = **(uint **)(lVar12 + 0x10);
          if (uVar8 == 0 && uVar4 == 0) goto LAB_001091f0;
          lVar6 = 4;
          while (uVar4 != 0) {
            if (uVar8 == 0) goto LAB_001091f0;
            if (uVar4 < uVar8) break;
            if (uVar8 < uVar4) goto LAB_001091f0;
            uVar4 = *(uint *)((long)*(uint **)(lVar12 + 0x10) + lVar6);
            uVar8 = *(uint *)((long)*(uint **)(lVar16 + 0x10) + lVar6);
            lVar6 = lVar6 + 4;
            if (uVar4 == 0 && uVar8 == 0) {
              param_5[param_1 + lVar10] = param_4;
              return;
            }
          }
        }
        else {
          uVar4 = (uint)(char)*pbVar15;
          uVar8 = uVar4;
          if (pbVar14 == (byte *)0x0) goto LAB_00109225;
LAB_00109274:
          uVar4 = (uint)(char)*pbVar14;
          bVar5 = (byte)uVar8 | *pbVar14;
LAB_0010927a:
          if (bVar5 == 0) goto LAB_001091f0;
          lVar12 = 1;
          while (uVar8 != 0) {
            if (uVar4 == 0) goto LAB_001091f0;
            if (uVar8 < uVar4) break;
            if (uVar4 < uVar8) goto LAB_001091f0;
            pbVar1 = pbVar14 + lVar12;
            uVar4 = (uint)(char)*pbVar1;
            pbVar2 = pbVar15 + lVar12;
            uVar8 = (uint)(char)*pbVar2;
            lVar12 = lVar12 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_001091f0;
          }
        }
      }
LAB_001091c0:
      param_5[lVar10 + param_1] = pEVar11;
      lVar12 = (lVar13 + -1) - (lVar13 + -1 >> 0x3f);
      lVar10 = lVar13;
      if (lVar13 <= param_2) {
        param_5[param_1 + lVar13] = param_4;
        return;
      }
    }
    if (lVar16 != 0) {
      pbVar14 = *(byte **)(lVar16 + 8);
      uVar4 = 0;
      uVar8 = 0;
      pbVar15 = &_LC0;
      if (pbVar14 != (byte *)0x0) goto LAB_00109274;
LAB_00109225:
      uVar8 = **(uint **)(lVar16 + 0x10);
      if (uVar8 != 0 || uVar4 != 0) {
        lVar12 = 0;
        while (uVar4 != 0) {
          if (uVar8 == 0) goto LAB_001091f0;
          if (uVar4 < uVar8) break;
          if (uVar8 < uVar4) goto LAB_001091f0;
          uVar4 = (uint)(char)pbVar15[lVar12 + 1];
          uVar8 = (*(uint **)(lVar16 + 0x10))[lVar12 + 1];
          lVar12 = lVar12 + 1;
          if (uVar4 == 0 && uVar8 == 0) goto LAB_001091f0;
        }
        goto LAB_001091c0;
      }
    }
LAB_001091f0:
    ppEVar9 = param_5 + lVar10 + param_1;
  }
LAB_001091fa:
  *ppEVar9 = param_4;
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::unguarded_linear_insert(long, List<StringName, DefaultAllocator>::Element*,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::unguarded_linear_insert(long param_1,Element *param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  Element *pEVar10;
  byte *pbVar11;
  
  lVar3 = *(long *)param_2;
LAB_001094c0:
  pEVar10 = param_3[param_1 + -1];
  lVar5 = *(long *)pEVar10;
  if (lVar3 != 0) {
    pbVar9 = *(byte **)(lVar3 + 8);
    do {
      if (lVar5 == 0) {
        if (pbVar9 != (byte *)0x0) goto code_r0x00109571;
        uVar7 = 0;
        pbVar11 = &_LC0;
LAB_001094fc:
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar8 == 0 && uVar7 == 0) goto LAB_0010968b;
        lVar5 = 0;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_0010968b;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_0010968b;
          uVar8 = (*(uint **)(lVar3 + 0x10))[lVar5 + 1];
          uVar7 = (uint)(char)pbVar11[lVar5 + 1];
          lVar5 = lVar5 + 1;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_0010968b;
        }
      }
      else {
        pbVar11 = *(byte **)(lVar5 + 8);
        if (pbVar9 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar9;
          goto LAB_0010959c;
        }
        if (pbVar11 != (byte *)0x0) {
          uVar7 = (uint)(char)*pbVar11;
          goto LAB_001094fc;
        }
        uVar7 = **(uint **)(lVar5 + 0x10);
        uVar8 = **(uint **)(lVar3 + 0x10);
        if (uVar7 == 0 && uVar8 == 0) goto LAB_0010968b;
        lVar6 = 4;
        while (uVar8 != 0) {
          if (uVar7 == 0) goto LAB_0010968b;
          if (uVar8 < uVar7) break;
          if (uVar7 < uVar8) goto LAB_0010968b;
          uVar8 = *(uint *)((long)*(uint **)(lVar3 + 0x10) + lVar6);
          uVar7 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar6);
          lVar6 = lVar6 + 4;
          if (uVar8 == 0 && uVar7 == 0) goto LAB_0010968b;
        }
      }
      if (param_1 == 1) goto LAB_00109660;
      param_3[param_1] = pEVar10;
      pEVar10 = param_3[param_1 + -2];
      lVar5 = *(long *)pEVar10;
      param_1 = param_1 + -1;
    } while( true );
  }
  if (lVar5 != 0) {
    pbVar11 = *(byte **)(lVar5 + 8);
    uVar7 = 0;
    pbVar9 = &_LC0;
LAB_0010959c:
    if (pbVar11 != (byte *)0x0) {
      uVar8 = (uint)(char)*pbVar11;
      bVar4 = (byte)uVar7 | *pbVar11;
      goto LAB_0010960f;
    }
    uVar8 = **(uint **)(lVar5 + 0x10);
    if (uVar8 != 0 || uVar7 != 0) {
      lVar6 = 0;
      while (uVar7 != 0) {
        if (uVar8 == 0) goto LAB_0010968b;
        if (uVar7 < uVar8) break;
        if (uVar8 < uVar7) goto LAB_0010968b;
        uVar7 = (uint)(char)pbVar9[lVar6 + 1];
        uVar8 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
        lVar6 = lVar6 + 1;
        if (uVar7 == 0 && uVar8 == 0) goto LAB_0010968b;
      }
      goto LAB_001095f0;
    }
  }
  goto LAB_0010968b;
code_r0x00109571:
  bVar4 = *pbVar9;
  uVar7 = (uint)(char)bVar4;
  pbVar11 = &_LC0;
  uVar8 = 0;
LAB_0010960f:
  if (bVar4 == 0) goto LAB_0010968b;
  lVar5 = 1;
  while (uVar7 != 0) {
    if (uVar8 == 0) goto LAB_0010968b;
    if (uVar7 < uVar8) break;
    if (uVar8 < uVar7) goto LAB_0010968b;
    pbVar1 = pbVar9 + lVar5;
    uVar7 = (uint)(char)*pbVar1;
    pbVar2 = pbVar11 + lVar5;
    uVar8 = (uint)(char)*pbVar2;
    lVar5 = lVar5 + 1;
    if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010968b;
  }
LAB_001095f0:
  if (param_1 == 1) {
LAB_00109660:
    _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                     "bad comparison function; sorting will be broken",0,0);
    param_1 = 1;
LAB_0010968b:
    param_3[param_1] = param_2;
    return;
  }
  param_3[param_1] = pEVar10;
  param_1 = param_1 + -1;
  goto LAB_001094c0;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::linear_insert(long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::linear_insert(long param_1,long param_2,Element **param_3)

{
  Element **__src;
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  
  __src = param_3 + param_1;
  pEVar3 = param_3[param_2];
  lVar6 = *(long *)pEVar3;
  lVar5 = *(long *)*__src;
  if (lVar6 == 0) {
    if (lVar5 == 0) goto LAB_00109860;
    pbVar10 = *(byte **)(lVar5 + 8);
    uVar8 = 0;
    pbVar11 = &_LC0;
LAB_00109814:
    if (pbVar10 == (byte *)0x0) {
      uVar9 = **(uint **)(lVar5 + 0x10);
      if (uVar8 != 0 || uVar9 != 0) {
        lVar6 = 0;
        do {
          if (uVar8 == 0) goto LAB_001097b0;
          if (uVar9 == 0) break;
          if (uVar8 < uVar9) goto LAB_001097b0;
          if (uVar9 < uVar8) break;
          uVar8 = (uint)(char)pbVar11[lVar6 + 1];
          uVar9 = (*(uint **)(lVar5 + 0x10))[lVar6 + 1];
          lVar6 = lVar6 + 1;
        } while (uVar8 != 0 || uVar9 != 0);
      }
      goto LAB_00109860;
    }
    uVar9 = (uint)(char)*pbVar10;
    bVar4 = (byte)uVar8 | *pbVar10;
LAB_00109887:
    if (bVar4 != 0) {
      lVar6 = 1;
      do {
        if (uVar8 == 0) goto LAB_001097b0;
        if (uVar9 == 0) break;
        if (uVar8 < uVar9) goto LAB_001097b0;
        if (uVar9 < uVar8) break;
        pbVar2 = pbVar11 + lVar6;
        uVar8 = (uint)(char)*pbVar2;
        pbVar1 = pbVar10 + lVar6;
        uVar9 = (uint)(char)*pbVar1;
        lVar6 = lVar6 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
  }
  else {
    pbVar11 = *(byte **)(lVar6 + 8);
    if (lVar5 == 0) {
      if (pbVar11 != (byte *)0x0) {
        bVar4 = *pbVar11;
        uVar8 = (uint)(char)bVar4;
        pbVar10 = &_LC0;
        uVar9 = 0;
        goto LAB_00109887;
      }
      uVar8 = 0;
      pbVar10 = &_LC0;
    }
    else {
      pbVar10 = *(byte **)(lVar5 + 8);
      if (pbVar11 != (byte *)0x0) {
        uVar8 = (uint)(char)*pbVar11;
        goto LAB_00109814;
      }
      if (pbVar10 == (byte *)0x0) {
        uVar8 = **(uint **)(lVar5 + 0x10);
        uVar9 = **(uint **)(lVar6 + 0x10);
        if (uVar8 != 0 || uVar9 != 0) {
          lVar7 = 4;
          do {
            if (uVar9 == 0) goto LAB_001097b0;
            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_001097b0;
            if (uVar8 < uVar9) break;
            uVar9 = *(uint *)((long)*(uint **)(lVar6 + 0x10) + lVar7);
            uVar8 = *(uint *)((long)*(uint **)(lVar5 + 0x10) + lVar7);
            lVar7 = lVar7 + 4;
          } while (uVar9 != 0 || uVar8 != 0);
        }
        goto LAB_00109860;
      }
      uVar8 = (uint)(char)*pbVar10;
    }
    uVar9 = **(uint **)(lVar6 + 0x10);
    if (uVar8 != 0 || uVar9 != 0) {
      lVar5 = 0;
      do {
        if (uVar9 == 0) {
LAB_001097b0:
          if (param_1 < param_2) {
            memmove(param_3 + param_1 + 1,__src,(param_2 - param_1) * 8);
          }
          *__src = pEVar3;
          return;
        }
        if (uVar8 == 0) break;
        if (uVar9 < uVar8) goto LAB_001097b0;
        if (uVar8 < uVar9) break;
        uVar9 = (*(uint **)(lVar6 + 0x10))[lVar5 + 1];
        uVar8 = (uint)(char)pbVar10[lVar5 + 1];
        lVar5 = lVar5 + 1;
      } while (uVar9 != 0 || uVar8 != 0);
    }
  }
LAB_00109860:
  unguarded_linear_insert(param_2,pEVar3,param_3);
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */

Element **
SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
::median_of_3(Element **param_1,Element **param_2,Element **param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  byte bVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  
  lVar8 = *(long *)*param_1;
  lVar9 = *(long *)*param_3;
  lVar13 = *(long *)*param_2;
  if (lVar8 == 0) {
    pbVar15 = &_LC0;
    pbVar16 = &_LC0;
    if (lVar13 == 0) {
LAB_0010a270:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
LAB_00109b3e:
        uVar5 = (uint)(char)*pbVar16;
        uVar4 = uVar5;
        goto LAB_00109b44;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC0;
      if (*pbVar16 == 0) goto LAB_00109e39;
LAB_00109c92:
      lVar8 = 1;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar6 == 0) break;
        if (uVar5 < uVar6) {
          return param_1;
        }
        if (uVar6 < uVar5) break;
        pbVar2 = pbVar16 + lVar8;
        uVar5 = (uint)(char)*pbVar2;
        pbVar1 = pbVar17 + lVar8;
        uVar6 = (uint)(char)*pbVar1;
        lVar8 = lVar8 + 1;
      } while (*pbVar2 != 0 || *pbVar1 != 0);
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      uVar4 = 0;
      pbVar16 = &_LC0;
LAB_00109ac2:
      if (pbVar15 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar15;
        bVar11 = *pbVar15 | (byte)uVar4;
LAB_00109bb0:
        if (bVar11 != 0) {
          lVar14 = 1;
          do {
            if (uVar4 == 0) goto joined_r0x00109bf8;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00109bf8;
            if (uVar12 < uVar4) break;
            pbVar17 = pbVar16 + lVar14;
            uVar4 = (uint)(char)*pbVar17;
            pbVar2 = pbVar15 + lVar14;
            uVar12 = (uint)(char)*pbVar2;
            lVar14 = lVar14 + 1;
          } while (*pbVar17 != 0 || *pbVar2 != 0);
          goto LAB_00109b28;
        }
        goto LAB_0010a270;
      }
      uVar12 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar4 == 0) goto joined_r0x00109bf8;
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto joined_r0x00109bf8;
          if (uVar12 < uVar4) break;
          uVar4 = (uint)(char)pbVar16[lVar14 + 1];
          uVar12 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00109b28;
      }
      if (lVar9 == 0) goto LAB_00109e91;
      pbVar17 = *(byte **)(lVar9 + 8);
      uVar5 = 0;
LAB_00109b44:
      if (pbVar17 != (byte *)0x0) {
        uVar6 = (uint)(char)*pbVar17;
        bVar11 = (byte)uVar4 | *pbVar17;
        goto LAB_00109c89;
      }
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_0010a176;
      lVar8 = 0;
      do {
        if (uVar5 == 0) {
          return param_1;
        }
        if (uVar4 == 0) break;
        if (uVar5 < uVar4) {
          return param_1;
        }
        if (uVar4 < uVar5) break;
        uVar5 = (uint)(char)pbVar16[lVar8 + 1];
        uVar4 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar4 != 0);
    }
LAB_00109e20:
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar10 = *(uint **)(lVar9 + 0x10);
LAB_0010a17f:
        uVar4 = *puVar10;
        uVar12 = **(uint **)(lVar13 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_2;
        }
        lVar8 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_2;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar8);
          uVar4 = *(uint *)((long)puVar10 + lVar8);
          lVar8 = lVar8 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
          }
        }
        return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
LAB_0010a006:
      uVar4 = **(uint **)(lVar13 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_3;
          }
          if (uVar12 == 0) {
            return param_2;
          }
          if (uVar4 < uVar12) {
            return param_3;
          }
          if (uVar12 < uVar4) {
            return param_2;
          }
          uVar4 = (*(uint **)(lVar13 + 0x10))[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
      }
      return param_2;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar10 = *(uint **)(lVar9 + 0x10);
      uVar6 = *puVar10;
LAB_0010a068:
      uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
        return param_2;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 < uVar6) {
          return param_3;
        }
        if (uVar6 < uVar4) break;
        uVar4 = (uint)(char)pbVar15[lVar8 + 1];
        uVar6 = puVar10[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar6 == 0) {
          return param_2;
        }
      }
      return param_2;
    }
    uVar12 = (uint)(char)*pbVar17;
    uVar5 = uVar12;
  }
  else {
    pbVar16 = *(byte **)(lVar8 + 8);
    if (lVar13 == 0) {
      if (pbVar16 != (byte *)0x0) {
        bVar11 = *pbVar16;
        uVar4 = (uint)(char)bVar11;
        uVar12 = 0;
        pbVar15 = &_LC0;
        goto LAB_00109bb0;
      }
      uVar4 = 0;
      pbVar15 = &_LC0;
LAB_001099a2:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar4 != 0 || uVar12 != 0) {
        lVar14 = 0;
        do {
          if (uVar12 == 0) goto joined_r0x00109bf8;
          if (uVar4 == 0) break;
          if (uVar12 < uVar4) goto joined_r0x00109bf8;
          if (uVar4 < uVar12) break;
          uVar12 = (*(uint **)(lVar8 + 0x10))[lVar14 + 1];
          uVar4 = (uint)(char)pbVar15[lVar14 + 1];
          lVar14 = lVar14 + 1;
        } while (uVar12 != 0 || uVar4 != 0);
      }
LAB_00109b28:
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        if (pbVar16 != (byte *)0x0) goto LAB_00109b3e;
        puVar7 = *(uint **)(lVar8 + 0x10);
        uVar4 = *puVar7;
LAB_00109f28:
        if (pbVar17 != (byte *)0x0) {
          uVar12 = (uint)(char)*pbVar17;
          uVar6 = uVar4 | uVar12;
          goto LAB_0010a1e3;
        }
        puVar10 = *(uint **)(lVar9 + 0x10);
        uVar12 = *puVar10;
        uVar6 = uVar12 | uVar4;
        if (uVar6 != 0) {
          lVar8 = 4;
          do {
            if (uVar4 == 0) {
              return param_1;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
              return param_1;
            }
            if (uVar12 < uVar4) break;
            uVar4 = *(uint *)((long)puVar7 + lVar8);
            uVar12 = *(uint *)((long)puVar10 + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar4 != 0 || uVar12 != 0);
          goto LAB_00109e20;
        }
LAB_0010a176:
        if (pbVar15 != (byte *)0x0) goto LAB_0010a068;
        goto LAB_0010a17f;
      }
      if (pbVar16 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar8 + 0x10);
        goto LAB_0010a241;
      }
LAB_00109e91:
      bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC0;
LAB_00109c89:
      uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_00109c92;
    }
    else {
      pbVar15 = *(byte **)(lVar13 + 8);
      if (pbVar16 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar16;
        goto LAB_00109ac2;
      }
      if (pbVar15 != (byte *)0x0) {
        uVar4 = (uint)(char)*pbVar15;
        goto LAB_001099a2;
      }
      puVar7 = *(uint **)(lVar8 + 0x10);
      uVar12 = **(uint **)(lVar13 + 0x10);
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
        lVar14 = 4;
        do {
          if (uVar4 == 0) {
LAB_00109d98:
            pbVar16 = (byte *)0x0;
            goto joined_r0x00109bf8;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) goto LAB_00109d98;
          if (uVar12 < uVar4) break;
          uVar4 = *(uint *)((long)puVar7 + lVar14);
          uVar12 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
          lVar14 = lVar14 + 4;
        } while (uVar4 != 0 || uVar12 != 0);
        pbVar16 = (byte *)0x0;
        goto LAB_00109b28;
      }
      if (lVar9 != 0) {
        pbVar17 = *(byte **)(lVar9 + 8);
        uVar4 = 0;
        goto LAB_00109f28;
      }
LAB_0010a241:
      uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC0;
      uVar6 = uVar4;
LAB_0010a1e3:
      if (uVar6 != 0) {
        lVar8 = 0;
        do {
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 == 0) break;
          if (uVar4 < uVar12) {
            return param_1;
          }
          if (uVar12 < uVar4) break;
          uVar4 = puVar7[lVar8 + 1];
          uVar12 = (uint)(char)pbVar17[lVar8 + 1];
          lVar8 = lVar8 + 1;
        } while (uVar4 != 0 || uVar12 != 0);
        goto LAB_00109e20;
      }
    }
    uVar5 = uVar12;
    if (pbVar15 == (byte *)0x0) goto LAB_0010a006;
  }
LAB_00109e39:
  bVar11 = *pbVar15;
  if (bVar11 == 0 && (char)uVar5 == '\0') {
    return param_2;
  }
  lVar8 = 1;
  while( true ) {
    uVar4 = (uint)(char)bVar11;
    if (uVar4 == 0) {
      return param_3;
    }
    if (uVar12 == 0) {
      return param_2;
    }
    if (uVar4 < uVar12) {
      return param_3;
    }
    if (uVar12 < uVar4) break;
    bVar11 = pbVar15[lVar8];
    pbVar16 = pbVar17 + lVar8;
    uVar12 = (uint)(char)*pbVar16;
    lVar8 = lVar8 + 1;
    if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
    }
  }
  return param_2;
joined_r0x00109bf8:
  if (lVar9 == 0) {
    uVar4 = 0;
    uVar12 = 0;
    bVar11 = 0;
    pbVar17 = &_LC0;
    if (pbVar15 != (byte *)0x0) goto LAB_00109ce7;
LAB_00109c14:
    uVar6 = **(uint **)(lVar13 + 0x10);
    uVar4 = uVar6 | uVar12;
    if (uVar4 != 0) {
      lVar14 = 0;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar12 == 0) break;
        if (uVar6 < uVar12) {
          return param_2;
        }
        if (uVar12 < uVar6) break;
        uVar6 = (*(uint **)(lVar13 + 0x10))[lVar14 + 1];
        uVar12 = (uint)(char)pbVar17[lVar14 + 1];
        lVar14 = lVar14 + 1;
      } while (uVar6 != 0 || uVar12 != 0);
      goto LAB_00109db0;
    }
LAB_0010a27e:
    bVar11 = (byte)uVar12;
    if (pbVar16 == (byte *)0x0) goto LAB_00109f9e;
  }
  else {
    pbVar17 = *(byte **)(lVar9 + 8);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar17 != (byte *)0x0) {
        uVar12 = (uint)(char)*pbVar17;
        goto LAB_00109c14;
      }
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar4 = *puVar7;
      uVar6 = **(uint **)(lVar13 + 0x10);
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_0010a119;
      lVar14 = 4;
      do {
        if (uVar6 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar6 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar6) break;
        uVar6 = *(uint *)((long)*(uint **)(lVar13 + 0x10) + lVar14);
        uVar4 = *(uint *)((long)puVar7 + lVar14);
        lVar14 = lVar14 + 4;
      } while (uVar6 != 0 || uVar4 != 0);
    }
    else {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
        uVar6 = (uint)(char)*pbVar15;
        uVar4 = *puVar7;
        uVar12 = uVar4 | uVar6;
        if (uVar12 != 0) {
          lVar13 = 0;
          do {
            if (uVar6 == 0) {
              return param_2;
            }
            if (uVar4 == 0) break;
            if (uVar6 < uVar4) {
              return param_2;
            }
            if (uVar4 < uVar6) break;
            uVar6 = (uint)(char)pbVar15[lVar13 + 1];
            uVar4 = puVar7[lVar13 + 1];
            lVar13 = lVar13 + 1;
          } while (uVar6 != 0 || uVar4 != 0);
          goto LAB_00109db0;
        }
LAB_0010a119:
        if (pbVar16 == (byte *)0x0) goto LAB_0010a11e;
        goto LAB_0010a0c6;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
LAB_00109ce7:
      bVar3 = *pbVar15;
      uVar12 = (uint)(bVar11 | bVar3);
      if ((bVar11 | bVar3) == 0) goto LAB_0010a27e;
      lVar13 = 1;
      do {
        uVar12 = (uint)(char)bVar3;
        if (uVar12 == 0) {
          return param_2;
        }
        if (uVar4 == 0) break;
        if (uVar12 < uVar4) {
          return param_2;
        }
        if (uVar4 < uVar12) break;
        bVar3 = pbVar15[lVar13];
        pbVar2 = pbVar17 + lVar13;
        uVar4 = (uint)(char)*pbVar2;
        lVar13 = lVar13 + 1;
      } while (bVar3 != 0 || *pbVar2 != 0);
    }
LAB_00109db0:
    if (pbVar16 == (byte *)0x0) {
      if (pbVar17 == (byte *)0x0) {
        puVar7 = *(uint **)(lVar9 + 0x10);
LAB_0010a11e:
        uVar4 = *puVar7;
        uVar12 = **(uint **)(lVar8 + 0x10);
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
        lVar9 = 4;
        while( true ) {
          if (uVar12 == 0) {
            return param_3;
          }
          if (uVar4 == 0) {
            return param_1;
          }
          if (uVar12 < uVar4) {
            return param_3;
          }
          if (uVar4 < uVar12) break;
          uVar12 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
          uVar4 = *(uint *)((long)puVar7 + lVar9);
          lVar9 = lVar9 + 4;
          if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
          }
        }
        return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
LAB_00109f9e:
      uVar12 = **(uint **)(lVar8 + 0x10);
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar9 = 0;
      while( true ) {
        if (uVar12 == 0) {
          return param_3;
        }
        if (uVar4 == 0) {
          return param_1;
        }
        if (uVar12 < uVar4) {
          return param_3;
        }
        if (uVar4 < uVar12) break;
        uVar12 = (*(uint **)(lVar8 + 0x10))[lVar9 + 1];
        uVar4 = (uint)(char)pbVar17[lVar9 + 1];
        lVar9 = lVar9 + 1;
        if (uVar12 == 0 && uVar4 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    if (pbVar17 == (byte *)0x0) {
      puVar7 = *(uint **)(lVar9 + 0x10);
      uVar12 = *puVar7;
LAB_0010a0c6:
      uVar4 = (uint)(char)*pbVar16;
      if (uVar12 == 0 && uVar4 == 0) {
        return param_1;
      }
      lVar8 = 0;
      while( true ) {
        if (uVar4 == 0) {
          return param_3;
        }
        if (uVar12 == 0) {
          return param_1;
        }
        if (uVar4 < uVar12) {
          return param_3;
        }
        if (uVar12 < uVar4) break;
        uVar4 = (uint)(char)pbVar16[lVar8 + 1];
        uVar12 = puVar7[lVar8 + 1];
        lVar8 = lVar8 + 1;
        if (uVar4 == 0 && uVar12 == 0) {
          return param_1;
        }
      }
      return param_1;
    }
    bVar11 = *pbVar17;
    uVar4 = (uint)(char)bVar11;
  }
  bVar3 = *pbVar16;
  if (bVar3 == 0 && bVar11 == 0) {
    return param_1;
  }
  lVar8 = 1;
  while( true ) {
    uVar12 = (uint)(char)bVar3;
    if (uVar12 == 0) {
      return param_3;
    }
    if (uVar4 == 0) {
      return param_1;
    }
    if (uVar12 < uVar4) {
      return param_3;
    }
    if (uVar4 < uVar12) break;
    bVar3 = pbVar16[lVar8];
    pbVar15 = pbVar17 + lVar8;
    uVar4 = (uint)(char)*pbVar15;
    lVar8 = lVar8 + 1;
    if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
    }
  }
  return param_1;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */

long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partitioner(long param_1,long param_2,Element *param_3,Element **param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  Element *pEVar3;
  Element **ppEVar4;
  uint uVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  
  lVar14 = *(long *)param_3;
  lVar7 = *(long *)param_4[param_1];
  lVar11 = param_1;
  lVar10 = param_2;
joined_r0x0010a327:
  if (lVar7 == 0) {
    if (lVar14 == 0) goto LAB_0010a458;
    pbVar13 = *(byte **)(lVar14 + 8);
    uVar9 = 0;
    pbVar12 = &_LC0;
LAB_0010a3de:
    if (pbVar13 == (byte *)0x0) {
      uVar5 = **(uint **)(lVar14 + 0x10);
      if (uVar5 != 0 || uVar9 != 0) {
        lVar7 = 0;
        do {
          if (uVar9 == 0) goto LAB_0010a3a8;
          if (uVar5 == 0) break;
          if (uVar9 < uVar5) goto LAB_0010a3a8;
          if (uVar5 < uVar9) break;
          uVar9 = (uint)(char)pbVar12[lVar7 + 1];
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          lVar7 = lVar7 + 1;
        } while (uVar9 != 0 || uVar5 != 0);
      }
      goto LAB_0010a458;
    }
    uVar5 = (uint)(char)*pbVar13;
    bVar6 = (byte)uVar9 | *pbVar13;
LAB_0010a6a5:
    if (bVar6 != 0) {
      lVar7 = 1;
      do {
        if (uVar9 == 0) goto LAB_0010a3a8;
        if (uVar5 == 0) break;
        if (uVar9 < uVar5) goto LAB_0010a3a8;
        if (uVar5 < uVar9) break;
        pbVar1 = pbVar12 + lVar7;
        uVar9 = (uint)(char)*pbVar1;
        pbVar2 = pbVar13 + lVar7;
        uVar5 = (uint)(char)*pbVar2;
        lVar7 = lVar7 + 1;
      } while (*pbVar1 != 0 || *pbVar2 != 0);
    }
  }
  else {
    pbVar12 = *(byte **)(lVar7 + 8);
    if (lVar14 == 0) {
      if (pbVar12 != (byte *)0x0) {
        bVar6 = *pbVar12;
        uVar9 = (uint)(char)bVar6;
        uVar5 = 0;
        pbVar13 = &_LC0;
        goto LAB_0010a6a5;
      }
      uVar9 = 0;
      pbVar13 = &_LC0;
    }
    else {
      pbVar13 = *(byte **)(lVar14 + 8);
      if (pbVar12 != (byte *)0x0) {
        uVar9 = (uint)(char)*pbVar12;
        goto LAB_0010a3de;
      }
      if (pbVar13 == (byte *)0x0) {
        uVar9 = **(uint **)(lVar14 + 0x10);
        uVar5 = **(uint **)(lVar7 + 0x10);
        if (uVar9 != 0 || uVar5 != 0) {
          lVar8 = 4;
          do {
            if (uVar5 == 0) goto LAB_0010a3a8;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_0010a3a8;
            if (uVar9 < uVar5) break;
            uVar5 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
            uVar9 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
            lVar8 = lVar8 + 4;
          } while (uVar5 != 0 || uVar9 != 0);
        }
        goto LAB_0010a458;
      }
      uVar9 = (uint)(char)*pbVar13;
    }
    uVar5 = **(uint **)(lVar7 + 0x10);
    if (uVar5 != 0 || uVar9 != 0) {
      lVar8 = 0;
      do {
        if (uVar5 == 0) goto LAB_0010a3a8;
        if (uVar9 == 0) break;
        if (uVar5 < uVar9) goto LAB_0010a3a8;
        if (uVar9 < uVar5) break;
        uVar5 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
        uVar9 = (uint)(char)pbVar13[lVar8 + 1];
        lVar8 = lVar8 + 1;
      } while (uVar5 != 0 || uVar9 != 0);
    }
  }
  goto LAB_0010a458;
LAB_0010a3a8:
  if (param_2 + -1 == lVar11) {
    _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                     "bad comparison function; sorting will be broken",0,0);
    lVar14 = *(long *)param_3;
LAB_0010a458:
    lVar10 = lVar10 + -1;
    lVar7 = *(long *)param_4[lVar10];
    ppEVar4 = param_4 + lVar10;
    do {
      if (lVar14 == 0) {
        if (lVar7 == 0) goto LAB_0010a658;
        pbVar13 = *(byte **)(lVar7 + 8);
        uVar5 = 0;
        pbVar12 = &_LC0;
        uVar9 = 0;
        if (pbVar13 == (byte *)0x0) {
LAB_0010a52c:
          uVar9 = **(uint **)(lVar7 + 0x10);
          if (uVar9 == 0 && uVar5 == 0) goto LAB_0010a658;
          lVar8 = 0;
          while (uVar5 != 0) {
            if (uVar9 == 0) goto LAB_0010a658;
            if (uVar5 < uVar9) break;
            if (uVar9 < uVar5) goto LAB_0010a658;
            uVar5 = (uint)(char)pbVar12[lVar8 + 1];
            uVar9 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
            if (uVar5 == 0 && uVar9 == 0) goto LAB_0010a658;
          }
        }
        else {
LAB_0010a58b:
          uVar5 = (uint)(char)*pbVar13;
          bVar6 = (byte)uVar9 | *pbVar13;
LAB_0010a591:
          if (bVar6 == 0) goto LAB_0010a658;
          lVar7 = 1;
          while (uVar9 != 0) {
            if (uVar5 == 0) goto LAB_0010a658;
            if (uVar9 < uVar5) break;
            if (uVar5 < uVar9) goto LAB_0010a658;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
            if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010a658;
          }
        }
      }
      else {
        pbVar12 = *(byte **)(lVar14 + 8);
        if (lVar7 == 0) {
          uVar9 = 0;
          pbVar13 = &_LC0;
          if (pbVar12 != (byte *)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC0;
            goto LAB_0010a591;
          }
        }
        else {
          pbVar13 = *(byte **)(lVar7 + 8);
          if (pbVar12 != (byte *)0x0) {
            uVar5 = (uint)(char)*pbVar12;
            uVar9 = uVar5;
            if (pbVar13 == (byte *)0x0) goto LAB_0010a52c;
            goto LAB_0010a58b;
          }
          if (pbVar13 == (byte *)0x0) {
            uVar9 = **(uint **)(lVar7 + 0x10);
            uVar5 = **(uint **)(lVar14 + 0x10);
            if (uVar9 != 0 || uVar5 != 0) {
              lVar8 = 4;
              while (uVar5 != 0) {
                if (uVar9 == 0) goto LAB_0010a658;
                if (uVar5 < uVar9) break;
                if (uVar9 < uVar5) goto LAB_0010a658;
                uVar5 = *(uint *)((long)*(uint **)(lVar14 + 0x10) + lVar8);
                uVar9 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar8);
                lVar8 = lVar8 + 4;
                if (uVar5 == 0 && uVar9 == 0) goto LAB_0010a658;
              }
              goto LAB_0010a4f0;
            }
            goto LAB_0010a658;
          }
          uVar9 = (uint)(char)*pbVar13;
        }
        uVar5 = **(uint **)(lVar14 + 0x10);
        if (uVar5 == 0 && uVar9 == 0) goto LAB_0010a658;
        lVar7 = 0;
        while (uVar5 != 0) {
          if (uVar9 == 0) goto LAB_0010a658;
          if (uVar5 < uVar9) break;
          if (uVar9 < uVar5) goto LAB_0010a658;
          uVar5 = (*(uint **)(lVar14 + 0x10))[lVar7 + 1];
          uVar9 = (uint)(char)pbVar13[lVar7 + 1];
          lVar7 = lVar7 + 1;
          if (uVar5 == 0 && uVar9 == 0) goto LAB_0010a658;
        }
      }
LAB_0010a4f0:
      if (lVar10 == param_1) goto LAB_0010a630;
      lVar10 = lVar10 + -1;
      lVar7 = *(long *)ppEVar4[-1];
      ppEVar4 = ppEVar4 + -1;
    } while( true );
  }
LAB_0010a3b6:
  lVar11 = lVar11 + 1;
  lVar7 = *(long *)param_4[lVar11];
  goto joined_r0x0010a327;
LAB_0010a630:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
LAB_0010a658:
  if (lVar10 <= lVar11) {
    return lVar11;
  }
  pEVar3 = param_4[lVar11];
  param_4[lVar11] = *ppEVar4;
  *ppEVar4 = pEVar3;
  lVar14 = *(long *)param_3;
  goto LAB_0010a3b6;
}



/* CallableCustomMethodPointer<CreateDialog, Variant, Vector2 const&, Control*>::get_object() const
    */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*>::get_object
          (CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*> *this)

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
      goto LAB_0010a88d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a88d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a88d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partial_sort(long, long,
   long, List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
     ::partial_sort(long param_1,long param_2,long param_3,Element **param_4)

{
  Element **ppEVar1;
  byte *pbVar2;
  byte *pbVar3;
  Element *pEVar4;
  bool bVar5;
  byte bVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  Element **ppEVar13;
  byte *pbVar14;
  byte *pbVar15;
  long lVar16;
  
  lVar16 = param_3 - param_1;
  ppEVar13 = param_4;
  if (lVar16 < 2) {
    if (param_2 <= param_3) {
      return;
    }
  }
  else {
    for (lVar12 = lVar16 + -2 >> 1;
        adjust_heap(param_1,lVar12,lVar16,param_4[param_1 + lVar12],ppEVar13), lVar12 != 0;
        lVar12 = lVar12 + -1) {
    }
    if (param_2 <= param_3) goto LAB_0010aa3c;
  }
  ppEVar1 = ppEVar13 + param_1;
  lVar12 = param_3;
LAB_0010a990:
  pEVar4 = ppEVar13[lVar12];
  lVar8 = *(long *)pEVar4;
  lVar7 = *(long *)*ppEVar1;
  if (lVar8 == 0) {
    if (lVar7 != 0) {
      pbVar14 = *(byte **)(lVar7 + 8);
      uVar10 = 0;
      pbVar15 = &_LC0;
LAB_0010aaa4:
      if (pbVar14 == (byte *)0x0) {
        uVar11 = **(uint **)(lVar7 + 0x10);
        if (uVar11 != 0 || uVar10 != 0) {
          lVar8 = 0;
          do {
            if (uVar10 == 0) goto LAB_0010aa10;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_0010aa10;
            if (uVar11 < uVar10) break;
            uVar10 = (uint)(char)pbVar15[lVar8 + 1];
            uVar11 = (*(uint **)(lVar7 + 0x10))[lVar8 + 1];
            lVar8 = lVar8 + 1;
          } while (uVar10 != 0 || uVar11 != 0);
        }
      }
      else {
        uVar11 = (uint)(char)*pbVar14;
        bVar6 = (byte)uVar10 | *pbVar14;
LAB_0010ab06:
        if (bVar6 != 0) {
          lVar8 = 1;
          do {
            if (uVar10 == 0) goto LAB_0010aa10;
            if (uVar11 == 0) break;
            if (uVar10 < uVar11) goto LAB_0010aa10;
            if (uVar11 < uVar10) break;
            pbVar2 = pbVar14 + lVar8;
            uVar11 = (uint)(char)*pbVar2;
            pbVar3 = pbVar15 + lVar8;
            uVar10 = (uint)(char)*pbVar3;
            lVar8 = lVar8 + 1;
          } while (*pbVar2 != 0 || *pbVar3 != 0);
        }
      }
    }
  }
  else {
    pbVar15 = *(byte **)(lVar8 + 8);
    if (lVar7 == 0) {
      if (pbVar15 != (byte *)0x0) {
        bVar6 = *pbVar15;
        uVar10 = (uint)(char)bVar6;
        pbVar14 = &_LC0;
        uVar11 = 0;
        goto LAB_0010ab06;
      }
      uVar10 = 0;
      pbVar14 = &_LC0;
    }
    else {
      pbVar14 = *(byte **)(lVar7 + 8);
      if (pbVar15 != (byte *)0x0) {
        uVar10 = (uint)(char)*pbVar15;
        goto LAB_0010aaa4;
      }
      if (pbVar14 == (byte *)0x0) {
        uVar10 = **(uint **)(lVar7 + 0x10);
        uVar11 = **(uint **)(lVar8 + 0x10);
        if (uVar10 != 0 || uVar11 != 0) {
          lVar9 = 4;
          do {
            if (uVar11 == 0) goto LAB_0010aa10;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_0010aa10;
            if (uVar10 < uVar11) break;
            uVar11 = *(uint *)((long)*(uint **)(lVar8 + 0x10) + lVar9);
            uVar10 = *(uint *)((long)*(uint **)(lVar7 + 0x10) + lVar9);
            lVar9 = lVar9 + 4;
          } while (uVar11 != 0 || uVar10 != 0);
        }
        goto LAB_0010aa24;
      }
      uVar10 = (uint)(char)*pbVar14;
    }
    uVar11 = **(uint **)(lVar8 + 0x10);
    if (uVar11 != 0 || uVar10 != 0) {
      lVar7 = 0;
      do {
        if (uVar11 == 0) goto LAB_0010aa10;
        if (uVar10 == 0) break;
        if (uVar11 < uVar10) goto LAB_0010aa10;
        if (uVar10 < uVar11) break;
        uVar11 = (*(uint **)(lVar8 + 0x10))[lVar7 + 1];
        uVar10 = (uint)(char)pbVar14[lVar7 + 1];
        lVar7 = lVar7 + 1;
      } while (uVar11 != 0 || uVar10 != 0);
    }
  }
  goto LAB_0010aa24;
LAB_0010aa10:
  ppEVar13[lVar12] = *ppEVar1;
  adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
LAB_0010aa24:
  lVar12 = lVar12 + 1;
  if (param_2 <= lVar12) goto code_r0x0010aa31;
  goto LAB_0010a990;
code_r0x0010aa31:
  if (lVar16 < 2) {
    return;
  }
LAB_0010aa3c:
  ppEVar1 = ppEVar13 + param_1;
  lVar16 = (param_3 + -1) - param_1;
  do {
    pEVar4 = ppEVar1[lVar16];
    ppEVar1[lVar16] = *ppEVar1;
    adjust_heap(param_1,0,lVar16,pEVar4,ppEVar13);
    bVar5 = 1 < lVar16;
    lVar16 = lVar16 + -1;
  } while (bVar5);
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, TreeItem*, int, int, MouseButton>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton> *this)

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
      goto LAB_0010acad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010acad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010acad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CreateDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void>::get_object
          (CallableCustomMethodPointer<CreateDialog,void> *this)

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
      goto LAB_0010adad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010adad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010adad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CreateDialog, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>::get_object
          (CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0010aead;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aead;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aead:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CreateDialog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<CreateDialog,void,String_const&> *this)

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
      goto LAB_0010afad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010afad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010afad:
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
      goto LAB_0010b0ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b0ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b0ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CreateDialog, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0010b1ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b1ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b1ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<CreateDialog, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>::get_object
          (CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0010b2ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b2ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b2ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<CreateDialog, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<CreateDialog,void,int>::get_object
          (CallableCustomMethodPointer<CreateDialog,void,int> *this)

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
      goto LAB_0010b3ad;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b3ad;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b3ad:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */

void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00121020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* CreateDialog::_validate_propertyv(PropertyInfo&) const */

void CreateDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00121020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* VSplitContainer::_validate_propertyv(PropertyInfo&) const */

void VSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00121028 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00121028 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00121030 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00121030 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00121038 != Window::_notification) {
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
  if ((code *)PTR__notification_00121038 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* VSplitContainer::is_class_ptr(void*) const */

uint VSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11bc,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bb,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x11bc,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11bc,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bb,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x11bc,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* CreateDialog::is_class_ptr(void*) const */

uint CreateDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11bc,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11bc,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 VSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00121040 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00121040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* HSplitContainer::_setv(StringName const&, Variant const&) */

undefined8 HSplitContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00121040 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00121040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bca8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00121048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bd18) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00121048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bd88) */
/* VSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 VSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00121048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bdf8) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00121048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
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
      if (StringName::configured == '\0') goto LAB_0010be60;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010be60:
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
      if (StringName::configured == '\0') goto LAB_0010bec0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bec0:
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
      if (StringName::configured == '\0') goto LAB_0010bf20;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bf20:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
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
      if (StringName::configured == '\0') goto LAB_0010bf90;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bf90:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00121050 != Container::_notification) {
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
  if ((code *)PTR__notification_00121050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* HSplitContainer::_notificationv(int, bool) */

void __thiscall HSplitContainer::_notificationv(HSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00121058 != Container::_notification) {
      SplitContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00121058 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
  return;
}



/* HBoxContainer::_notificationv(int, bool) */

void __thiscall HBoxContainer::_notificationv(HBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00121050 != Container::_notification) {
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
  if ((code *)PTR__notification_00121050 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VSplitContainer::_notificationv(int, bool) */

void __thiscall VSplitContainer::_notificationv(VSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00121058 != Container::_notification) {
      SplitContainer::_notification(iVar1);
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
  if ((code *)PTR__notification_00121058 == Container::_notification) {
    return;
  }
  SplitContainer::_notification(iVar1);
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
LAB_0010c8f3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c8f3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010c95e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010c95e:
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
LAB_0010c9e3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c9e3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010ca4e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010ca4e:
  return &_get_class_namev()::_class_name_static;
}



/* CreateDialog::_get_class_namev() const */

undefined8 * CreateDialog::_get_class_namev(void)

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
LAB_0010cad3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cad3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"CreateDialog");
      goto LAB_0010cb3e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"CreateDialog");
LAB_0010cb3e:
  return &_get_class_namev()::_class_name_static;
}



/* HSplitContainer::_get_class_namev() const */

undefined8 * HSplitContainer::_get_class_namev(void)

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
LAB_0010cbc3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cbc3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_0010cc2e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_0010cc2e:
  return &_get_class_namev()::_class_name_static;
}



/* VSplitContainer::_get_class_namev() const */

undefined8 * VSplitContainer::_get_class_namev(void)

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
LAB_0010ccb3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ccb3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VSplitContainer");
      goto LAB_0010cd1e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VSplitContainer");
LAB_0010cd1e:
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
LAB_0010cda3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cda3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_0010ce0e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_0010ce0e:
  return &_get_class_namev()::_class_name_static;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = ClassDB::class_exists;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010cf0f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010cf0f:
  Control::~Control((Control *)this);
  return;
}



/* VSplitContainer::~VSplitContainer() */

void __thiscall VSplitContainer::~VSplitContainer(VSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = ClassDB::class_exists;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d0bf;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d0bf:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = ClassDB::class_exists;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d26f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d26f:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
  return;
}



/* VSplitContainer::~VSplitContainer() */

void __thiscall VSplitContainer::~VSplitContainer(VSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = ClassDB::class_exists;
  if (*(long *)(this + 0xa60) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa60);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa50) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa50);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa48) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa48);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xa40) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa40);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  bVar3 = StringName::configured != '\0';
  *(code **)this = Container::_notification;
  if (bVar3) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010d42f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d42f:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
  return;
}



/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */

void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
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
LAB_0010de33:
    partial_sort(param_1,param_2,param_2,param_3);
    return;
  }
  lVar11 = param_2 * 8;
  lVar3 = param_2;
LAB_0010d583:
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
LAB_0010d60c:
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
LAB_0010d6a4:
            lVar15 = lVar15 + -1;
            puVar2 = (undefined8 *)
                     median_of_3(param_3 + lVar3,param_3 + (lVar1 >> 1) + lVar3,
                                 param_3 + local_118 + -1);
            lVar4 = partitioner(lVar3,local_118,(Element *)*puVar2,param_3);
            lVar1 = local_118 - lVar4;
            if (0x10 < lVar1) goto code_r0x0010d6f0;
LAB_0010db86:
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) goto LAB_0010db96;
            goto LAB_0010dd33;
          }
LAB_0010dda8:
          partial_sort(lVar3,lVar4,lVar4,param_3);
        }
LAB_0010dcbf:
        lVar1 = lVar3 - param_2;
        if (lVar1 < 0x11) goto joined_r0x0010dd71;
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
  if (param_4 != 0) goto LAB_0010de0c;
  goto LAB_0010de33;
code_r0x0010d6f0:
  if (lVar15 != 0) {
    lVar13 = lVar15;
    lVar6 = local_118;
LAB_0010d72c:
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
LAB_0010d7b2:
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
LAB_0010d833:
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
LAB_0010d8b1:
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
LAB_0010d927:
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
                                      if (lVar1 < 0x11) goto LAB_0010dabc;
                                      goto LAB_0010d927;
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
                                if (lVar1 < 0x11) goto joined_r0x0010dbd0;
                                goto LAB_0010d8b1;
                              }
                              lVar10 = lVar9;
                            } while (local_108 != 0);
                          }
                          partial_sort(lVar8,lVar9,lVar9,param_3);
                        }
LAB_0010dabc:
                        lVar1 = lVar8 - lVar7;
                        if (lVar1 < 0x11) {
                          lVar1 = lVar7 - lVar6;
                          lVar8 = lVar7;
                          if (lVar1 < 0x11) goto joined_r0x0010db4b;
                          goto LAB_0010d833;
                        }
                        lVar9 = lVar8;
                      } while (local_118 != 0);
                    }
                    partial_sort(lVar7,lVar8,lVar8,param_3);
                  }
joined_r0x0010dbd0:
                  lVar1 = lVar7 - lVar6;
                  if (lVar1 < 0x11) {
                    lVar1 = lVar6 - lVar5;
                    lVar7 = lVar6;
                    if (lVar1 < 0x11) goto joined_r0x0010dc10;
                    goto LAB_0010d7b2;
                  }
                  lVar8 = lVar7;
                } while (local_110 != 0);
              }
              partial_sort(lVar6,lVar7,lVar7,param_3);
            }
joined_r0x0010db4b:
            lVar1 = lVar6 - lVar5;
            if (lVar1 < 0x11) {
              lVar1 = lVar5 - lVar4;
              lVar6 = lVar5;
              if (lVar1 < 0x11) goto LAB_0010db86;
              goto LAB_0010d72c;
            }
            lVar7 = lVar6;
          } while (local_f8 != 0);
        }
        partial_sort(lVar5,lVar6,lVar6,param_3);
      }
joined_r0x0010dc10:
      lVar1 = lVar5 - lVar4;
      if (lVar1 < 0x11) {
        lVar1 = lVar4 - lVar3;
        local_118 = lVar4;
        if (lVar1 < 0x11) goto LAB_0010dcbf;
        goto LAB_0010d6a4;
      }
      lVar6 = lVar5;
      local_118 = lVar5;
    } while (lVar13 != 0);
  }
  partial_sort(lVar4,local_118,local_118,param_3);
  lVar1 = lVar4 - lVar3;
  if (lVar1 < 0x11) {
LAB_0010dd33:
    lVar1 = lVar3 - param_2;
    lVar4 = lVar3;
    if (0x10 < lVar1) goto LAB_0010d60c;
    goto joined_r0x0010dd71;
  }
LAB_0010db96:
  local_118 = lVar4;
  if (lVar15 == 0) goto LAB_0010dda8;
  goto LAB_0010d6a4;
joined_r0x0010dd71:
  lVar1 = param_2 - param_1;
  if (lVar1 < 0x11) {
    return;
  }
LAB_0010de0c:
  lVar11 = param_2 * 8;
  lVar3 = param_2;
  goto LAB_0010d583;
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



/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */

void __thiscall
List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>
          (List<StringName,DefaultAllocator> *this)

{
  int iVar1;
  long *plVar2;
  Element **ppEVar3;
  undefined8 *puVar4;
  Element **ppEVar5;
  Element **ppEVar6;
  Element *pEVar7;
  long lVar8;
  Element *pEVar9;
  long lVar10;
  Element *pEVar11;
  
  if (*(long *)this == 0) {
    return;
  }
  iVar1 = *(int *)(*(long *)this + 0x10);
  if (iVar1 < 2) {
    return;
  }
  pEVar11 = (Element *)(long)iVar1;
  ppEVar3 = (Element **)Memory::alloc_static((long)pEVar11 * 8,true);
  if (ppEVar3 == (Element **)0x0) {
    _err_print_error("memnew_arr_template","./core/os/memory.h",0xb6,"Parameter \"mem\" is null.",0,
                     0);
  }
  else {
    ppEVar3[-1] = pEVar11;
  }
  if (*(long **)this != (long *)0x0) {
    ppEVar5 = ppEVar3;
    for (pEVar7 = (Element *)**(long **)this; pEVar7 != (Element *)0x0;
        pEVar7 = *(Element **)(pEVar7 + 8)) {
      *ppEVar5 = pEVar7;
      ppEVar5 = ppEVar5 + 1;
    }
  }
  lVar10 = 0;
  pEVar7 = pEVar11;
  do {
    pEVar7 = (Element *)((long)pEVar7 >> 1);
    lVar10 = lVar10 + 1;
  } while (pEVar7 != (Element *)0x1);
  lVar10 = lVar10 * 2;
  pEVar7 = (Element *)0x1;
  pEVar9 = pEVar11;
  if ((long)pEVar11 < 0x11) {
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,(long)pEVar7,ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  else {
    do {
      lVar10 = lVar10 + -1;
      puVar4 = (undefined8 *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::median_of_3(ppEVar3,ppEVar3 + ((long)pEVar9 >> 1),ppEVar3 + (long)(pEVar9 + -1));
      pEVar7 = (Element *)
               SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
               ::partitioner(0,(long)pEVar9,(Element *)*puVar4,ppEVar3);
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::introsort((long)pEVar7,(long)pEVar9,ppEVar3,lVar10);
      lVar8 = 1;
      if ((long)pEVar7 < 0x11) goto LAB_0010e1b0;
      pEVar9 = pEVar7;
    } while (lVar10 != 0);
    SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
    ::partial_sort(0,(long)pEVar7,(long)pEVar7,ppEVar3);
LAB_0010e1b0:
    do {
      lVar10 = lVar8 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::linear_insert(0,lVar8,ppEVar3);
      lVar8 = lVar10;
    } while (lVar10 != 0x10);
    pEVar7 = (Element *)0x10;
    do {
      pEVar9 = pEVar7 + 1;
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>
      ::unguarded_linear_insert((long)pEVar7,ppEVar3[(long)pEVar7],ppEVar3);
      pEVar7 = pEVar9;
    } while (pEVar11 != pEVar9);
  }
  plVar2 = *(long **)this;
  pEVar7 = *ppEVar3;
  *plVar2 = (long)pEVar7;
  *(undefined8 *)(pEVar7 + 0x10) = 0;
  *(Element **)(*ppEVar3 + 8) = ppEVar3[1];
  pEVar7 = ppEVar3[(long)(pEVar11 + -1)];
  plVar2[1] = (long)pEVar7;
  *(Element **)(pEVar7 + 0x10) = ppEVar3[(long)(pEVar11 + -2)];
  *(undefined8 *)(ppEVar3[(long)(pEVar11 + -1)] + 8) = 0;
  if (iVar1 != 2) {
    ppEVar5 = ppEVar3;
    do {
      ppEVar6 = ppEVar5 + 1;
      *(Element **)(ppEVar5[1] + 0x10) = *ppEVar5;
      *(Element **)(*ppEVar6 + 8) = ppEVar5[2];
      ppEVar5 = ppEVar6;
    } while (ppEVar3 + (iVar1 - 2) != ppEVar6);
  }
  Memory::free_static(ppEVar3,true);
  return;
}



/* Callable create_custom_callable_function_pointer<CreateDialog>(CreateDialog*, char const*, void
   (CreateDialog::*)()) */

CreateDialog *
create_custom_callable_function_pointer<CreateDialog>
          (CreateDialog *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011b3c8;
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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */

StringName *
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
          (StringName *param_1)

{
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
  uint uVar27;
  uint uVar28;
  ulong uVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  int iVar33;
  StringName *in_RDX;
  long lVar34;
  ulong uVar35;
  long lVar36;
  long *in_RSI;
  uint uVar37;
  ulong uVar38;
  undefined4 uVar39;
  uint uVar40;
  ulong uVar41;
  uint uVar42;
  uint *puVar43;
  int iVar44;
  uint local_88;
  long local_68;
  
  uVar27 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  if (*in_RSI == 0) {
    uVar29 = (ulong)uVar27 * 4;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::alloc_static((ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    iVar44 = *(int *)((long)in_RSI + 0x24);
    if (*in_RSI != 0) goto LAB_0010e49c;
  }
  else {
    iVar44 = *(int *)((long)in_RSI + 0x24);
LAB_0010e49c:
    if (iVar44 != 0) {
      uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
      uVar29 = CONCAT44(0,uVar40);
      lVar30 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
      if (*(long *)in_RDX == 0) {
        uVar28 = StringName::get_empty_hash();
        iVar44 = *(int *)((long)in_RSI + 0x24);
      }
      else {
        uVar28 = *(uint *)(*(long *)in_RDX + 0x20);
      }
      if (uVar28 == 0) {
        uVar28 = 1;
      }
      uVar37 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar30;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar29;
      lVar34 = SUB168(auVar3 * auVar15,8);
      iVar33 = SUB164(auVar3 * auVar15,8);
      uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
      if (uVar42 != 0) {
        do {
          if (uVar28 == uVar42) {
            lVar36 = *in_RSI;
            uVar42 = *(uint *)(in_RSI[1] + lVar34 * 4);
            if (*(long *)(lVar36 + (ulong)uVar42 * 8) == *(long *)in_RDX) goto LAB_0010e8e8;
          }
          uVar37 = uVar37 + 1;
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)(iVar33 + 1) * lVar30;
          auVar16._8_8_ = 0;
          auVar16._0_8_ = uVar29;
          lVar34 = SUB168(auVar4 * auVar16,8);
          uVar42 = *(uint *)(in_RSI[3] + lVar34 * 4);
          iVar33 = SUB164(auVar4 * auVar16,8);
        } while ((uVar42 != 0) &&
                (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar42 * lVar30, auVar17._8_8_ = 0,
                auVar17._0_8_ = uVar29, auVar6._8_8_ = 0,
                auVar6._0_8_ = (ulong)((uVar40 + iVar33) - SUB164(auVar5 * auVar17,8)) * lVar30,
                auVar18._8_8_ = 0, auVar18._0_8_ = uVar29, uVar37 <= SUB164(auVar6 * auVar18,8)));
      }
    }
  }
  if ((float)(iVar44 + 1) <= (float)uVar27 * __LC27) {
    lVar30 = *(long *)in_RDX;
    if (lVar30 != 0) goto LAB_0010e7c5;
LAB_0010e926:
    uVar27 = StringName::get_empty_hash();
  }
  else {
    if ((int)in_RSI[4] == 0x1c) {
      _err_print_error("_insert","./core/templates/hash_set.h",0xbf,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      uVar42 = 0xffffffff;
      iVar44 = *(int *)((long)in_RSI + 0x24);
      lVar36 = *in_RSI;
      goto LAB_0010e8e8;
    }
    uVar27 = (int)in_RSI[4] + 1;
    uVar29 = (ulong)uVar27;
    if (uVar27 < 2) {
      uVar29 = 2;
    }
    uVar27 = *(uint *)(hash_table_size_primes + uVar29 * 4);
    *(int *)(in_RSI + 4) = (int)uVar29;
    pvVar1 = (void *)in_RSI[3];
    uVar29 = (ulong)uVar27 * 4;
    pvVar2 = (void *)in_RSI[2];
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[3] = lVar30;
    lVar30 = Memory::realloc_static((void *)*in_RSI,(ulong)uVar27 * 8,false);
    *in_RSI = lVar30;
    lVar30 = Memory::alloc_static(uVar29,false);
    in_RSI[2] = lVar30;
    lVar30 = Memory::realloc_static((void *)in_RSI[1],uVar29,false);
    in_RSI[1] = lVar30;
    if (uVar27 != 0) {
      memset((void *)in_RSI[3],0,uVar29);
    }
    if (*(int *)((long)in_RSI + 0x24) != 0) {
      uVar29 = 0;
      lVar34 = in_RSI[3];
      lVar36 = in_RSI[2];
      do {
        uVar41 = uVar29 & 0xffffffff;
        uVar39 = (undefined4)uVar29;
        uVar42 = 0;
        uVar27 = *(uint *)((long)pvVar1 + (ulong)*(uint *)((long)pvVar2 + uVar29 * 4) * 4);
        uVar35 = (ulong)uVar27;
        uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
        uVar38 = CONCAT44(0,uVar40);
        lVar31 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar35 * lVar31;
        auVar19._8_8_ = 0;
        auVar19._0_8_ = uVar38;
        lVar32 = SUB168(auVar7 * auVar19,8) * 4;
        iVar44 = SUB164(auVar7 * auVar19,8);
        puVar43 = (uint *)(lVar34 + lVar32);
        uVar28 = *puVar43;
        if (uVar28 == 0) {
          lVar31 = uVar29 * 4;
        }
        else {
          do {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar28 * lVar31;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar38;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)((uVar40 + iVar44) - SUB164(auVar8 * auVar20,8)) * lVar31;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar38;
            local_88 = SUB164(auVar9 * auVar21,8);
            if (local_88 < uVar42) {
              *(int *)(lVar36 + uVar41 * 4) = iVar44;
              uVar27 = *puVar43;
              *puVar43 = (uint)uVar35;
              uVar28 = *(uint *)(lVar32 + lVar30);
              uVar35 = (ulong)uVar27;
              *(uint *)(lVar32 + lVar30) = (uint)uVar41;
              uVar41 = (ulong)uVar28;
              uVar42 = local_88;
            }
            uVar39 = (undefined4)uVar41;
            uVar27 = (uint)uVar35;
            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)(iVar44 + 1) * lVar31;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar38;
            lVar32 = SUB168(auVar10 * auVar22,8) * 4;
            iVar44 = SUB164(auVar10 * auVar22,8);
            puVar43 = (uint *)(lVar34 + lVar32);
            uVar28 = *puVar43;
          } while (uVar28 != 0);
          lVar31 = uVar41 << 2;
        }
        *puVar43 = uVar27;
        uVar29 = uVar29 + 1;
        *(int *)(lVar36 + lVar31) = iVar44;
        *(undefined4 *)(lVar30 + lVar32) = uVar39;
      } while ((uint)uVar29 < *(uint *)((long)in_RSI + 0x24));
    }
    Memory::free_static(pvVar1,false);
    Memory::free_static(pvVar2,false);
    lVar30 = *(long *)in_RDX;
    if (lVar30 == 0) goto LAB_0010e926;
LAB_0010e7c5:
    uVar27 = *(uint *)(lVar30 + 0x20);
  }
  if (uVar27 == 0) {
    uVar27 = 1;
  }
  uVar29 = (ulong)uVar27;
  StringName::StringName((StringName *)(*in_RSI + (ulong)*(uint *)((long)in_RSI + 0x24) * 8),in_RDX)
  ;
  uVar40 = *(uint *)((long)in_RSI + 0x24);
  lVar34 = in_RSI[3];
  uVar28 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(in_RSI + 4) * 4);
  uVar35 = CONCAT44(0,uVar28);
  lVar36 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(in_RSI + 4) * 8);
  auVar11._8_8_ = 0;
  auVar11._0_8_ = uVar29 * lVar36;
  auVar23._8_8_ = 0;
  auVar23._0_8_ = uVar35;
  lVar30 = SUB168(auVar11 * auVar23,8) * 4;
  iVar44 = SUB164(auVar11 * auVar23,8);
  puVar43 = (uint *)(lVar34 + lVar30);
  uVar42 = *puVar43;
  if (uVar42 == 0) {
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
  }
  else {
    uVar37 = 0;
    local_68 = in_RSI[2];
    lVar32 = in_RSI[1];
    do {
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar42 * lVar36;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)((uVar28 + iVar44) - SUB164(auVar12 * auVar24,8)) * lVar36;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar35;
      local_88 = SUB164(auVar13 * auVar25,8);
      if (local_88 < uVar37) {
        *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
        uVar27 = *puVar43;
        *puVar43 = (uint)uVar29;
        uVar42 = *(uint *)(lVar30 + lVar32);
        uVar29 = (ulong)uVar27;
        *(uint *)(lVar30 + lVar32) = uVar40;
        uVar40 = uVar42;
        uVar37 = local_88;
      }
      uVar27 = (uint)uVar29;
      uVar37 = uVar37 + 1;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)(iVar44 + 1) * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar35;
      lVar30 = SUB168(auVar14 * auVar26,8) * 4;
      iVar44 = SUB164(auVar14 * auVar26,8);
      puVar43 = (uint *)(lVar34 + lVar30);
      uVar42 = *puVar43;
    } while (uVar42 != 0);
  }
  *puVar43 = uVar27;
  *(int *)(local_68 + (ulong)uVar40 * 4) = iVar44;
  *(uint *)(lVar32 + lVar30) = uVar40;
  uVar42 = *(uint *)((long)in_RSI + 0x24);
  lVar36 = *in_RSI;
  iVar44 = uVar42 + 1;
  *(int *)((long)in_RSI + 0x24) = iVar44;
LAB_0010e8e8:
  *(uint *)(param_1 + 0xc) = uVar42;
  *(long *)param_1 = lVar36;
  *(int *)(param_1 + 8) = iVar44;
  return param_1;
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



/* Callable create_custom_callable_function_pointer<CreateDialog, int>(CreateDialog*, char const*,
   void (CreateDialog::*)(int)) */

CreateDialog *
create_custom_callable_function_pointer<CreateDialog,int>
          (CreateDialog *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC0;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011b698;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  *(char **)(this + 0x28) = param_2;
  *(undefined8 *)(this + 0x30) = uVar1;
  *(undefined8 *)(this + 0x38) = in_RCX;
  *(undefined8 *)(this + 0x40) = in_R8;
  *(undefined8 *)(this + 0x10) = 0;
  CallableCustomMethodPointerBase::_setup((uint *)this,(int)this + 0x28);
  *(_func_void_int **)(this + 0x20) = param_3 + 1;
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



/* WARNING: Removing unreachable block (ram,0x0010edf8) */
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* CreateDialog::get_class() const */

void CreateDialog::get_class(void)

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



/* VSplitContainer::get_class() const */

void VSplitContainer::get_class(void)

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



/* HSplitContainer::get_class() const */

void HSplitContainer::get_class(void)

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



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  long lVar4;
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
  undefined1 (*pauVar37) [16];
  char cVar38;
  uint uVar39;
  uint uVar40;
  ulong uVar41;
  undefined8 uVar42;
  void *__s_00;
  undefined1 (*pauVar43) [16];
  void *pvVar44;
  int iVar45;
  long lVar46;
  long lVar47;
  ulong uVar48;
  undefined8 uVar49;
  uint uVar50;
  uint uVar51;
  ulong uVar52;
  long lVar53;
  uint uVar54;
  uint uVar55;
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 8) == 0) {
LAB_0011004c:
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    pvVar44 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = pvVar44;
    if (uVar55 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar52)) && (pvVar44 < (void *)((long)pvVar3 + uVar41))
         ) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar41 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar48 != uVar41);
      }
      else {
        memset(pvVar3,0,uVar41);
        memset(pvVar44,0,uVar52);
      }
LAB_0010ff35:
      iVar45 = *(int *)(this + 0x2c);
      if (iVar45 != 0) {
LAB_0010ff45:
        uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar41 = CONCAT44(0,uVar39);
        lVar53 = *(long *)(this + 0x10);
        uVar40 = 1;
        if (uVar51 != 0) {
          uVar40 = uVar51;
        }
        uVar54 = 0;
        auVar17._8_8_ = 0;
        auVar17._0_8_ = (ulong)uVar40 * lVar4;
        auVar33._8_8_ = 0;
        auVar33._0_8_ = uVar41;
        lVar46 = SUB168(auVar17 * auVar33,8);
        uVar51 = *(uint *)(lVar53 + lVar46 * 4);
        uVar50 = SUB164(auVar17 * auVar33,8);
        if (uVar51 != 0) {
          do {
            if (uVar40 == uVar51) {
              cVar38 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar46 * 8) + 0x10),
                                          param_1);
              if (cVar38 != '\0') {
                pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                if (*(long *)(pauVar43[1] + 8) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)(pauVar43[1] + 8),(CowData *)&local_70);
                  pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                }
                goto LAB_0010fde3;
              }
              lVar53 = *(long *)(this + 0x10);
            }
            uVar54 = uVar54 + 1;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = (ulong)(uVar50 + 1) * lVar4;
            auVar34._8_8_ = 0;
            auVar34._0_8_ = uVar41;
            lVar46 = SUB168(auVar18 * auVar34,8);
            uVar51 = *(uint *)(lVar53 + lVar46 * 4);
            uVar50 = SUB164(auVar18 * auVar34,8);
          } while ((uVar51 != 0) &&
                  (auVar19._8_8_ = 0, auVar19._0_8_ = (ulong)uVar51 * lVar4, auVar35._8_8_ = 0,
                  auVar35._0_8_ = uVar41, auVar20._8_8_ = 0,
                  auVar20._0_8_ = (ulong)((uVar39 + uVar50) - SUB164(auVar19 * auVar35,8)) * lVar4,
                  auVar36._8_8_ = 0, auVar36._0_8_ = uVar41, uVar54 <= SUB164(auVar20 * auVar36,8)))
          ;
        }
        iVar45 = *(int *)(this + 0x2c);
      }
      uVar48 = (ulong)uVar55;
      goto LAB_0010fa07;
    }
    iVar45 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_0010fa07;
    if (*(int *)(this + 0x2c) != 0) goto LAB_0010ff45;
LAB_0010fa2d:
    uVar55 = *(uint *)(this + 0x28);
    if (uVar55 == 0x1c) {
      pauVar43 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0010fde3;
    }
    uVar41 = (ulong)(uVar55 + 1);
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar55 * 4);
    *(undefined4 *)(this + 0x2c) = 0;
    if (uVar55 + 1 < 2) {
      uVar41 = 2;
    }
    uVar55 = *(uint *)(hash_table_size_primes + uVar41 * 4);
    *(int *)(this + 0x28) = (int)uVar41;
    pvVar44 = *(void **)(this + 8);
    uVar48 = (ulong)uVar55;
    uVar41 = uVar48 * 4;
    pvVar3 = *(void **)(this + 0x10);
    uVar52 = uVar48 * 8;
    uVar42 = Memory::alloc_static(uVar41,false);
    *(undefined8 *)(this + 0x10) = uVar42;
    __s_00 = (void *)Memory::alloc_static(uVar52,false);
    *(void **)(this + 8) = __s_00;
    if (uVar55 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar52)) && (__s_00 < (void *)((long)__s + uVar41))) {
        uVar41 = 0;
        do {
          *(undefined4 *)((long)__s + uVar41 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar41 * 8) = 0;
          uVar41 = uVar41 + 1;
        } while (uVar41 != uVar48);
      }
      else {
        memset(__s,0,uVar41);
        memset(__s_00,0,uVar52);
      }
    }
    uVar41 = 0;
    if (uVar39 != 0) {
      do {
        uVar55 = *(uint *)((long)pvVar3 + uVar41 * 4);
        if (uVar55 != 0) {
          uVar50 = 0;
          lVar4 = *(long *)(this + 0x10);
          uVar40 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar52 = CONCAT44(0,uVar40);
          lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar55 * lVar53;
          auVar21._8_8_ = 0;
          auVar21._0_8_ = uVar52;
          lVar46 = SUB168(auVar5 * auVar21,8);
          puVar1 = (uint *)(lVar4 + lVar46 * 4);
          iVar45 = SUB164(auVar5 * auVar21,8);
          uVar51 = *puVar1;
          uVar42 = *(undefined8 *)((long)pvVar44 + uVar41 * 8);
          while (uVar51 != 0) {
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar51 * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar52;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)((uVar40 + iVar45) - SUB164(auVar6 * auVar22,8)) * lVar53;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar52;
            uVar54 = SUB164(auVar7 * auVar23,8);
            uVar49 = uVar42;
            if (uVar54 < uVar50) {
              *puVar1 = uVar55;
              puVar2 = (undefined8 *)((long)__s_00 + lVar46 * 8);
              uVar49 = *puVar2;
              *puVar2 = uVar42;
              uVar55 = uVar51;
              uVar50 = uVar54;
            }
            uVar50 = uVar50 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)(iVar45 + 1) * lVar53;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar52;
            lVar46 = SUB168(auVar8 * auVar24,8);
            puVar1 = (uint *)(lVar4 + lVar46 * 4);
            iVar45 = SUB164(auVar8 * auVar24,8);
            uVar42 = uVar49;
            uVar51 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar46 * 8) = uVar42;
          *puVar1 = uVar55;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar41 = uVar41 + 1;
      } while (uVar39 != uVar41);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) != 0) {
      uVar41 = CONCAT44(0,uVar55);
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar40 = String::hash();
      uVar39 = 1;
      if (uVar40 != 0) {
        uVar39 = uVar40;
      }
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar39 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      lVar46 = SUB168(auVar13 * auVar29,8);
      lVar53 = *(long *)(this + 0x10);
      uVar51 = SUB164(auVar13 * auVar29,8);
      uVar40 = *(uint *)(lVar53 + lVar46 * 4);
      if (uVar40 == 0) {
        lVar47 = *(long *)(this + 8);
      }
      else {
        uVar50 = 0;
        lVar47 = *(long *)(this + 8);
        do {
          if (uVar39 == uVar40) {
            cVar38 = String::operator==((String *)(*(long *)(lVar47 + lVar46 * 8) + 0x10),param_1);
            if (cVar38 != '\0') {
              pauVar43 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_0010fdef;
            }
            lVar53 = *(long *)(this + 0x10);
            lVar47 = *(long *)(this + 8);
          }
          uVar50 = uVar50 + 1;
          auVar14._8_8_ = 0;
          auVar14._0_8_ = (ulong)(uVar51 + 1) * lVar4;
          auVar30._8_8_ = 0;
          auVar30._0_8_ = uVar41;
          lVar46 = SUB168(auVar14 * auVar30,8);
          uVar40 = *(uint *)(lVar53 + lVar46 * 4);
          uVar51 = SUB164(auVar14 * auVar30,8);
        } while ((uVar40 != 0) &&
                (auVar15._8_8_ = 0, auVar15._0_8_ = (ulong)uVar40 * lVar4, auVar31._8_8_ = 0,
                auVar31._0_8_ = uVar41, auVar16._8_8_ = 0,
                auVar16._0_8_ = (ulong)((uVar51 + uVar55) - SUB164(auVar15 * auVar31,8)) * lVar4,
                auVar32._8_8_ = 0, auVar32._0_8_ = uVar41, uVar50 <= SUB164(auVar16 * auVar32,8)));
      }
      local_70 = 0;
      uVar55 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (lVar47 == 0) goto LAB_0011004c;
      goto LAB_0010ff35;
    }
    local_70 = 0;
    uVar48 = (ulong)uVar55;
    iVar45 = 0;
LAB_0010fa07:
    if ((float)uVar48 * __LC27 < (float)(iVar45 + 1)) goto LAB_0010fa2d;
  }
  local_58 = 0;
  local_68 = (undefined1  [16])0x0;
  if (*(long *)param_1 == 0) {
    local_50[0] = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar43[1] = 0;
    *pauVar43 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar4 = local_58;
    uVar42 = local_68._0_8_;
    uVar49 = local_68._8_8_;
    local_50[0] = 0;
    pauVar43 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar43[1] = 0;
    *(undefined8 *)*pauVar43 = uVar42;
    *(undefined8 *)(*pauVar43 + 8) = uVar49;
    if (lVar4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar43 + 1),(CowData *)&local_58);
    }
  }
  *(undefined8 *)(pauVar43[1] + 8) = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar2 = *(undefined8 **)(this + 0x20);
  if (puVar2 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar43;
  }
  else {
    *puVar2 = pauVar43;
    *(undefined8 **)(*pauVar43 + 8) = puVar2;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar43;
  uVar39 = String::hash();
  lVar4 = *(long *)(this + 0x10);
  uVar55 = 1;
  if (uVar39 != 0) {
    uVar55 = uVar39;
  }
  uVar51 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar41 = CONCAT44(0,uVar39);
  lVar53 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = (ulong)uVar55 * lVar53;
  auVar25._8_8_ = 0;
  auVar25._0_8_ = uVar41;
  lVar47 = SUB168(auVar9 * auVar25,8);
  lVar46 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar4 + lVar47 * 4);
  iVar45 = SUB164(auVar9 * auVar25,8);
  uVar40 = *puVar1;
  pauVar37 = pauVar43;
  while (uVar40 != 0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = (ulong)uVar40 * lVar53;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar41;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = (ulong)((uVar39 + iVar45) - SUB164(auVar10 * auVar26,8)) * lVar53;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar41;
    uVar50 = SUB164(auVar11 * auVar27,8);
    pauVar56 = pauVar37;
    if (uVar50 < uVar51) {
      *puVar1 = uVar55;
      puVar2 = (undefined8 *)(lVar46 + lVar47 * 8);
      pauVar56 = (undefined1 (*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar51 = uVar50;
      uVar55 = uVar40;
    }
    uVar51 = uVar51 + 1;
    auVar12._8_8_ = 0;
    auVar12._0_8_ = (ulong)(iVar45 + 1) * lVar53;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar41;
    lVar47 = SUB168(auVar12 * auVar28,8);
    puVar1 = (uint *)(lVar4 + lVar47 * 4);
    iVar45 = SUB164(auVar12 * auVar28,8);
    pauVar37 = pauVar56;
    uVar40 = *puVar1;
  }
  *(undefined1 (**) [16])(lVar46 + lVar47 * 8) = pauVar37;
  *puVar1 = uVar55;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0010fde3:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0010fdef:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar43[1] + 8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
::operator[](HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
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
  char cVar36;
  uint uVar37;
  uint uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16];
  void *pvVar42;
  ulong uVar43;
  int iVar44;
  long lVar45;
  long lVar46;
  ulong uVar47;
  undefined8 uVar48;
  uint *puVar49;
  uint uVar50;
  uint uVar51;
  long lVar52;
  uint uVar53;
  uint uVar54;
  undefined1 (*pauVar55) [16];
  undefined1 (*pauVar56) [16];
  long in_FS_OFFSET;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  if (*(long *)(this + 8) == 0) {
LAB_001108b8:
    uVar39 = (ulong)uVar54;
    uVar43 = uVar39 * 4;
    uVar47 = uVar39 * 8;
    uVar40 = Memory::alloc_static(uVar43,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    pvVar42 = (void *)Memory::alloc_static(uVar47,false);
    *(void **)(this + 8) = pvVar42;
    if (uVar54 != 0) {
      pvVar2 = *(void **)(this + 0x10);
      if ((pvVar2 < (void *)((long)pvVar42 + uVar47)) && (pvVar42 < (void *)((long)pvVar2 + uVar43))
         ) {
        uVar43 = 0;
        do {
          *(undefined4 *)((long)pvVar2 + uVar43 * 4) = 0;
          *(undefined8 *)((long)pvVar42 + uVar43 * 8) = 0;
          uVar43 = uVar43 + 1;
        } while (uVar39 != uVar43);
        goto LAB_0011073a;
      }
      memset(pvVar2,0,uVar43);
      memset(pvVar42,0,uVar47);
      iVar44 = *(int *)(this + 0x2c);
LAB_0011073e:
      if (iVar44 != 0) {
LAB_00110746:
        uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
        uVar51 = String::hash();
        uVar39 = CONCAT44(0,uVar37);
        lVar52 = *(long *)(this + 0x10);
        uVar38 = 1;
        if (uVar51 != 0) {
          uVar38 = uVar51;
        }
        uVar53 = 0;
        auVar16._8_8_ = 0;
        auVar16._0_8_ = (ulong)uVar38 * lVar3;
        auVar32._8_8_ = 0;
        auVar32._0_8_ = uVar39;
        lVar45 = SUB168(auVar16 * auVar32,8);
        uVar51 = *(uint *)(lVar52 + lVar45 * 4);
        uVar50 = SUB164(auVar16 * auVar32,8);
        if (uVar51 != 0) {
          do {
            if (uVar38 == uVar51) {
              cVar36 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),
                                          param_1);
              if (cVar36 != '\0') {
                pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar50 * 8);
                *(undefined4 *)(pauVar41[1] + 8) = 0;
                goto LAB_0011061b;
              }
              lVar52 = *(long *)(this + 0x10);
            }
            uVar53 = uVar53 + 1;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = (ulong)(uVar50 + 1) * lVar3;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar39;
            lVar45 = SUB168(auVar17 * auVar33,8);
            uVar51 = *(uint *)(lVar52 + lVar45 * 4);
            uVar50 = SUB164(auVar17 * auVar33,8);
          } while ((uVar51 != 0) &&
                  (auVar18._8_8_ = 0, auVar18._0_8_ = (ulong)uVar51 * lVar3, auVar34._8_8_ = 0,
                  auVar34._0_8_ = uVar39, auVar19._8_8_ = 0,
                  auVar19._0_8_ = (ulong)((uVar37 + uVar50) - SUB164(auVar18 * auVar34,8)) * lVar3,
                  auVar35._8_8_ = 0, auVar35._0_8_ = uVar39, uVar53 <= SUB164(auVar19 * auVar35,8)))
          ;
        }
        iVar44 = *(int *)(this + 0x2c);
      }
      uVar39 = (ulong)uVar54;
      goto LAB_00110264;
    }
    iVar44 = *(int *)(this + 0x2c);
    if (pvVar42 == (void *)0x0) goto LAB_00110264;
    if (iVar44 != 0) goto LAB_00110746;
LAB_0011028a:
    uVar54 = *(uint *)(this + 0x28);
    if (uVar54 == 0x1c) {
      pauVar41 = (undefined1 (*) [16])0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011061b;
    }
    uVar39 = (ulong)(uVar54 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar37 = *(uint *)(hash_table_size_primes + (ulong)uVar54 * 4);
    if (uVar54 + 1 < 2) {
      uVar39 = 2;
    }
    uVar54 = *(uint *)(hash_table_size_primes + uVar39 * 4);
    uVar47 = (ulong)uVar54;
    *(int *)(this + 0x28) = (int)uVar39;
    pvVar42 = *(void **)(this + 8);
    uVar39 = uVar47 * 4;
    uVar43 = uVar47 * 8;
    pvVar2 = *(void **)(this + 0x10);
    uVar40 = Memory::alloc_static(uVar39,false);
    *(undefined8 *)(this + 0x10) = uVar40;
    __s_00 = (void *)Memory::alloc_static(uVar43,false);
    *(void **)(this + 8) = __s_00;
    if (uVar54 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar43)) && (__s_00 < (void *)((long)__s + uVar39))) {
        uVar39 = 0;
        do {
          *(undefined4 *)((long)__s + uVar39 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar39 * 8) = 0;
          uVar39 = uVar39 + 1;
        } while (uVar39 != uVar47);
      }
      else {
        memset(__s,0,uVar39);
        memset(__s_00,0,uVar43);
      }
    }
    if (uVar37 != 0) {
      uVar39 = 0;
      do {
        uVar54 = *(uint *)((long)pvVar2 + uVar39 * 4);
        if (uVar54 != 0) {
          lVar3 = *(long *)(this + 0x10);
          uVar50 = 0;
          uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar43 = CONCAT44(0,uVar38);
          lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar4._8_8_ = 0;
          auVar4._0_8_ = (ulong)uVar54 * lVar52;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar43;
          lVar45 = SUB168(auVar4 * auVar20,8);
          puVar49 = (uint *)(lVar3 + lVar45 * 4);
          iVar44 = SUB164(auVar4 * auVar20,8);
          uVar51 = *puVar49;
          uVar40 = *(undefined8 *)((long)pvVar42 + uVar39 * 8);
          while (uVar51 != 0) {
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar51 * lVar52;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)((uVar38 + iVar44) - SUB164(auVar5 * auVar21,8)) * lVar52;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar43;
            uVar53 = SUB164(auVar6 * auVar22,8);
            uVar48 = uVar40;
            if (uVar53 < uVar50) {
              *puVar49 = uVar54;
              puVar1 = (undefined8 *)((long)__s_00 + lVar45 * 8);
              uVar48 = *puVar1;
              *puVar1 = uVar40;
              uVar54 = uVar51;
              uVar50 = uVar53;
            }
            uVar50 = uVar50 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)(iVar44 + 1) * lVar52;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar43;
            lVar45 = SUB168(auVar7 * auVar23,8);
            puVar49 = (uint *)(lVar3 + lVar45 * 4);
            iVar44 = SUB164(auVar7 * auVar23,8);
            uVar40 = uVar48;
            uVar51 = *puVar49;
          }
          *(undefined8 *)((long)__s_00 + lVar45 * 8) = uVar40;
          *puVar49 = uVar54;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar39 = uVar39 + 1;
      } while (uVar37 != uVar39);
      Memory::free_static(pvVar42,false);
      Memory::free_static(pvVar2,false);
    }
  }
  else {
    iVar44 = *(int *)(this + 0x2c);
    uVar39 = CONCAT44(0,uVar54);
    if (iVar44 != 0) {
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar38 = String::hash();
      lVar52 = *(long *)(this + 0x10);
      uVar37 = 1;
      if (uVar38 != 0) {
        uVar37 = uVar38;
      }
      uVar50 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar45 = SUB168(auVar12 * auVar28,8);
      uVar38 = *(uint *)(lVar52 + lVar45 * 4);
      uVar51 = SUB164(auVar12 * auVar28,8);
      if (uVar38 != 0) {
        do {
          if (uVar37 == uVar38) {
            cVar36 = String::operator==((String *)
                                        (*(long *)(*(long *)(this + 8) + lVar45 * 8) + 0x10),param_1
                                       );
            if (cVar36 != '\0') {
              pauVar41 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)uVar51 * 8);
              goto LAB_0011061b;
            }
            lVar52 = *(long *)(this + 0x10);
          }
          uVar50 = uVar50 + 1;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)(uVar51 + 1) * lVar3;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar39;
          lVar45 = SUB168(auVar13 * auVar29,8);
          uVar38 = *(uint *)(lVar52 + lVar45 * 4);
          uVar51 = SUB164(auVar13 * auVar29,8);
        } while ((uVar38 != 0) &&
                (auVar14._8_8_ = 0, auVar14._0_8_ = (ulong)uVar38 * lVar3, auVar30._8_8_ = 0,
                auVar30._0_8_ = uVar39, auVar15._8_8_ = 0,
                auVar15._0_8_ = (ulong)((uVar51 + uVar54) - SUB164(auVar14 * auVar30,8)) * lVar3,
                auVar31._8_8_ = 0, auVar31._0_8_ = uVar39, uVar50 <= SUB164(auVar15 * auVar31,8)));
      }
      uVar54 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      if (*(long *)(this + 8) == 0) goto LAB_001108b8;
LAB_0011073a:
      iVar44 = *(int *)(this + 0x2c);
      goto LAB_0011073e;
    }
LAB_00110264:
    if ((float)uVar39 * __LC27 < (float)(iVar44 + 1)) goto LAB_0011028a;
  }
  local_58 = 0;
  if (*(long *)param_1 == 0) {
    local_50 = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *pauVar41 = (undefined1  [16])0x0;
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
    lVar3 = local_58;
    local_50 = 0;
    pauVar41 = (undefined1 (*) [16])operator_new(0x20,"");
    *(undefined8 *)pauVar41[1] = 0;
    *(undefined8 *)*pauVar41 = 0;
    *(undefined8 *)(*pauVar41 + 8) = 0;
    if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar41 + 1),(CowData *)&local_58);
    }
  }
  *(undefined4 *)(pauVar41[1] + 8) = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  puVar1 = *(undefined8 **)(this + 0x20);
  if (puVar1 == (undefined8 *)0x0) {
    *(undefined1 (**) [16])(this + 0x18) = pauVar41;
  }
  else {
    *puVar1 = pauVar41;
    *(undefined8 **)(*pauVar41 + 8) = puVar1;
  }
  *(undefined1 (**) [16])(this + 0x20) = pauVar41;
  uVar37 = String::hash();
  lVar3 = *(long *)(this + 0x10);
  uVar54 = 1;
  if (uVar37 != 0) {
    uVar54 = uVar37;
  }
  uVar37 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar39 = CONCAT44(0,uVar37);
  lVar52 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = (ulong)uVar54 * lVar52;
  auVar24._8_8_ = 0;
  auVar24._0_8_ = uVar39;
  lVar46 = SUB168(auVar8 * auVar24,8);
  lVar45 = *(long *)(this + 8);
  puVar49 = (uint *)(lVar3 + lVar46 * 4);
  iVar44 = SUB164(auVar8 * auVar24,8);
  uVar38 = *puVar49;
  pauVar56 = pauVar41;
  if (uVar38 != 0) {
    uVar51 = 0;
    pauVar55 = pauVar41;
    do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar52;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)((uVar37 + iVar44) - SUB164(auVar9 * auVar25,8)) * lVar52;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar50 = SUB164(auVar10 * auVar26,8);
      pauVar56 = pauVar55;
      if (uVar50 < uVar51) {
        *puVar49 = uVar54;
        puVar1 = (undefined8 *)(lVar45 + lVar46 * 8);
        pauVar56 = (undefined1 (*) [16])*puVar1;
        *puVar1 = pauVar55;
        uVar51 = uVar50;
        uVar54 = uVar38;
      }
      uVar51 = uVar51 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)(iVar44 + 1) * lVar52;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar46 = SUB168(auVar11 * auVar27,8);
      puVar49 = (uint *)(lVar3 + lVar46 * 4);
      iVar44 = SUB164(auVar11 * auVar27,8);
      uVar38 = *puVar49;
      pauVar55 = pauVar56;
    } while (uVar38 != 0);
  }
  *(undefined1 (**) [16])(lVar45 + lVar46 * 8) = pauVar56;
  *puVar49 = uVar54;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011061b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar41[1] + 8;
  }
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
      goto LAB_00110bbf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00110bbf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110b98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00110c70;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00110bbf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC86,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110c70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CreateDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void>::call
          (CallableCustomMethodPointer<CreateDialog,void> *this,Variant **param_1,int param_2,
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
      goto LAB_00110dcf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_00110dcf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110da8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00110e80;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00110dcf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC86,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110e80:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CreateDialog, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,int>::call
          (CallableCustomMethodPointer<CreateDialog,void,int> *this,Variant **param_1,int param_2,
          Variant *param_3,CallError *param_4)

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
      goto LAB_00111048;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00111048;
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
        uVar3 = _LC87;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110ff7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_001110f9;
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
LAB_00111048:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC86,"./core/object/callable_method_pointer.h",0x67,
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
LAB_001110f9:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CreateDialog, void, TreeItem*, int, int, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton> *this,
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
  long lVar10;
  uint uVar11;
  ulong *puVar12;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar13;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar11 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
      LOCK();
      bVar13 = (char)ObjectDB::spin_lock == '\0';
      if (bVar13) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar13) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar12 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0011137d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar12[1] == 0) goto LAB_0011137d;
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
        uVar3 = _LC88;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC89;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC90;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_001112e6:
          uVar3 = _LC91;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar9 == (Object *)0x0) ||
              (lVar10 = __dynamic_cast(pOVar9,&Object::typeinfo,&TreeItem::typeinfo,0), lVar10 == 0)
              ) && (pOVar8 != (Object *)0x0)) goto LAB_001112e6;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (pOVar8 != (Object *)0x0) {
          pOVar8 = (Object *)__dynamic_cast(pOVar8,&Object::typeinfo,&TreeItem::typeinfo,0);
        }
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00111356. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_00111482;
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
LAB_0011137d:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC86,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00111482:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<CreateDialog, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&> *this,
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
          goto LAB_0011155e;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_0011155e;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC91;
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
LAB_0011162d:
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
              if (pOVar5 != (Object *)0x0) goto LAB_0011162d;
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
        goto LAB_0011155e;
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
  _err_print_error(&_LC86,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011155e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  int local_58 [6];
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
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_001118c5;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_001118c5;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar4 == '\0') {
LAB_0011194f:
          uVar3 = _LC92;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[2];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0011194f;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC94;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar5);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_001118c5;
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
  _err_print_error(&_LC86,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_001118c5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<CreateDialog, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  CowData<char32_t> local_a0 [8];
  CowData<char32_t> local_98 [8];
  undefined8 local_90;
  String local_88 [8];
  undefined8 local_80;
  undefined4 local_78 [2];
  undefined8 local_70;
  undefined8 uStack_68;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_88[0] = (String)0x0;
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
        if (3 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00111c34;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00111c34;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar4 == '\0') {
LAB_00111cbc:
          uVar3 = _LC92;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[2];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_00111cbc;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[2]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 1;
        }
        Variant::Variant((Variant *)local_58,param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC94;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_80 = Variant::operator_cast_to_Vector2(*param_1);
        bVar11 = (bool)(*pcVar10)((long *)(lVar1 + lVar2),&local_80,(Variant *)local_58,pOVar5);
        Variant::Variant((Variant *)local_78,bVar11);
        if (Variant::needs_deinit[*(int *)param_3] != '\0') {
          Variant::_clear_internal();
        }
        *(undefined4 *)param_3 = local_78[0];
        *(undefined8 *)(param_3 + 8) = local_70;
        *(undefined8 *)(param_3 + 0x10) = uStack_68;
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00111c34;
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
  local_90 = 0;
  String::parse_latin1((String *)&local_90,"\', can\'t call method.");
  uitos((ulong)local_a0);
  operator+((char *)local_98,(String *)"Invalid Object id \'");
  String::operator+(local_88,(String *)local_98);
  _err_print_error(&_LC86,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_88,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_00111c34:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<CreateDialog, Variant, Vector2 const&, Control*>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*>::call
          (CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*> *this,
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
          goto LAB_00111fcc;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00111fcc;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar4 == '\0') {
LAB_0011204c:
          uVar3 = _LC95;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[1];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0011204c;
        }
        pOVar5 = Variant::operator_cast_to_Object_(param_1[1]);
        if (pOVar5 != (Object *)0x0) {
          pOVar5 = (Object *)__dynamic_cast(pOVar5,&Object::typeinfo,&Control::typeinfo,0);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
        uVar3 = _LC94;
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
        goto LAB_00111fcc;
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
  _err_print_error(&_LC86,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00111fcc:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<CreateDialog, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,String_const&>::call
          (CallableCustomMethodPointer<CreateDialog,void,String_const&> *this,Variant **param_1,
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
            uVar3 = _LC96;
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
        goto LAB_0011230e;
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
  _err_print_error(&_LC86,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011230e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
            if ((code *)PTR__bind_methods_00121070 != Node::_bind_methods) {
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
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Window");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"AcceptDialog");
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
      AcceptDialog::_bind_methods();
      if ((code *)PTR__bind_compatibility_methods_00121060 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_00121068 != AcceptDialog::_bind_methods) {
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
  undefined8 local_60;
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
              if ((code *)PTR__bind_methods_00121070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00121078 !=
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
      if ((code *)PTR__bind_methods_00121080 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_60 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"VBoxContainer");
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* VSplitContainer::_initialize_classv() */

void VSplitContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (SplitContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00121070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00121078 !=
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
      String::parse_latin1((String *)&local_70,"SplitContainer");
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
      if ((code *)PTR__bind_methods_00121088 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "SplitContainer";
    local_60 = 0;
    local_50 = 0xe;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"VSplitContainer");
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
  undefined8 local_60;
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
              if ((code *)PTR__bind_methods_00121070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00121078 !=
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
      if ((code *)PTR__bind_methods_00121080 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_58 = "BoxContainer";
    local_60 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"HBoxContainer");
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
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* HSplitContainer::_initialize_classv() */

void HSplitContainer::_initialize_classv(void)

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
    if (SplitContainer::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00121070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00121078 !=
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
      String::parse_latin1((String *)&local_70,"SplitContainer");
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
      if ((code *)PTR__bind_methods_00121088 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"SplitContainer");
    StringName::StringName((StringName *)&local_60,(String *)&local_68,false);
    local_58 = "HSplitContainer";
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
    if (cVar5 != '\0') goto LAB_0011424b;
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
      if (cVar5 != '\0') goto LAB_0011424b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0011424b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar5 != '\0') goto LAB_0011444b;
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
      if (cVar5 != '\0') goto LAB_0011444b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011454e;
    }
  }
LAB_0011444b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011454e:
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
    if (cVar5 != '\0') goto LAB_0011465b;
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
      if (cVar5 != '\0') goto LAB_0011465b;
    }
    cVar5 = String::operator==(param_1,"AcceptDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Window::is_class((Window *)this,param_1);
        return uVar6;
      }
      goto LAB_0011475e;
    }
  }
LAB_0011465b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011475e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CreateDialog::is_class(String const&) const */

undefined8 __thiscall CreateDialog::is_class(CreateDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011486b;
  }
  cVar4 = String::operator==(param_1,"CreateDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011486b:
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
  long lVar1;
  char *pcVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
    lVar3 = *(long *)(lVar1 + 0x20);
    if (lVar3 == 0) {
      local_60 = 0;
    }
    else {
      pcVar2 = *(char **)(lVar3 + 8);
      local_60 = 0;
      if (pcVar2 == (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
      }
      else {
        local_50 = strlen(pcVar2);
        local_58 = pcVar2;
        String::parse_latin1((StrRange *)&local_60);
      }
    }
    cVar4 = String::operator==(param_1,(String *)&local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if (cVar4 != '\0') goto LAB_00114993;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
      lVar3 = *(long *)(lVar1 + 0x20);
      if (lVar3 == 0) {
        local_60 = 0;
      }
      else {
        pcVar2 = *(char **)(lVar3 + 8);
        local_60 = 0;
        if (pcVar2 == (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(lVar3 + 0x10));
        }
        else {
          local_50 = strlen(pcVar2);
          local_58 = pcVar2;
          String::parse_latin1((StrRange *)&local_60);
        }
      }
      cVar4 = String::operator==(param_1,(String *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if (cVar4 != '\0') goto LAB_00114993;
    }
    cVar4 = String::operator==(param_1,"Control");
    if (cVar4 == '\0') {
      for (lVar1 = *(long *)(this + 8); lVar1 != 0; lVar1 = *(long *)(lVar1 + 8)) {
        lVar3 = *(long *)(lVar1 + 0x20);
        if (lVar3 == 0) {
          local_58 = (char *)0x0;
        }
        else {
          local_58 = (char *)0x0;
          if (*(char **)(lVar3 + 8) == (char *)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(lVar3 + 0x10));
          }
          else {
            String::parse_latin1((String *)&local_58,*(char **)(lVar3 + 8));
          }
        }
        cVar4 = String::operator==(param_1,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        if (cVar4 != '\0') goto LAB_00114993;
      }
      cVar4 = String::operator==(param_1,"CanvasItem");
      if (cVar4 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = Node::is_class((Node *)this,param_1);
          return uVar5;
        }
        goto LAB_00114b2e;
      }
    }
  }
LAB_00114993:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00114b2e:
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
        if (pvVar3 == (void *)0x0) goto LAB_00114c2f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00114c2f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* HSplitContainer::is_class(String const&) const */

undefined8 __thiscall HSplitContainer::is_class(HSplitContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00114d8b;
  }
  cVar5 = String::operator==(param_1,"HSplitContainer");
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
      if (cVar5 != '\0') goto LAB_00114d8b;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00114e8e;
    }
  }
LAB_00114d8b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00114e8e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VSplitContainer::is_class(String const&) const */

undefined8 __thiscall VSplitContainer::is_class(VSplitContainer *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_00114f9b;
  }
  cVar5 = String::operator==(param_1,"VSplitContainer");
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
      if (cVar5 != '\0') goto LAB_00114f9b;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_0011509e;
    }
  }
LAB_00114f9b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011509e:
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
    if (cVar5 != '\0') goto LAB_001151ab;
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
      if (cVar5 != '\0') goto LAB_001151ab;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001152ae;
    }
  }
LAB_001151ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001152ae:
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
    if (cVar5 != '\0') goto LAB_001153bb;
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
      if (cVar5 != '\0') goto LAB_001153bb;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_001154be;
    }
  }
LAB_001153bb:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001154be:
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
  local_78 = &_LC77;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC77;
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
      goto LAB_0011562c;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_0011562c:
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
      goto LAB_00115891;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115891:
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Viewport::_get_property_listv((Viewport *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Window";
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Window";
  local_90 = 0;
  local_70 = 6;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Window",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00121090 != Object::_get_property_list) {
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
      goto LAB_00115d31;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115d31:
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
      goto LAB_00115fe1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115fe1:
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



/* CreateDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall CreateDialog::_get_property_listv(CreateDialog *this,List *param_1,bool param_2)

{
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    ConfirmationDialog::_get_property_listv((ConfirmationDialog *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CreateDialog";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CreateDialog";
  local_90 = 0;
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CreateDialog",false);
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    Node::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "CanvasItem";
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "CanvasItem";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"CanvasItem",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_00121098 != Object::_get_property_list) {
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
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  char *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (!param_2) {
    CanvasItem::_get_property_listv((CanvasItem *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Control";
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Control";
  local_90 = 0;
  local_70 = 7;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)param_1,(PropertyInfo *)&local_78);
  CowData<char32_t>::_unref(local_58);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  StringName::StringName((StringName *)&local_78,"Control",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if ((code *)PTR__get_property_list_001210a0 != CanvasItem::_get_property_list) {
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
      goto LAB_00116841;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116841:
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



/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall SplitContainer::_get_property_listv(SplitContainer *this,List *param_1,bool param_2)

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
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "SplitContainer";
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
      goto LAB_00116af1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116af1:
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
  StringName::StringName((StringName *)&local_78,"SplitContainer",false);
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



/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
HSplitContainer::_get_property_listv(HSplitContainer *this,List *param_1,bool param_2)

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
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "HSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "HSplitContainer";
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
      goto LAB_00116da1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116da1:
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
  StringName::StringName((StringName *)&local_78,"HSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
      return;
    }
  }
  else if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* VSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
VSplitContainer::_get_property_listv(VSplitContainer *this,List *param_1,bool param_2)

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
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_88 = 0;
  local_90 = 0;
  local_78 = "VSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "VSplitContainer";
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
      goto LAB_00117051;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00117051:
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
  StringName::StringName((StringName *)&local_78,"VSplitContainer",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      SplitContainer::_get_property_listv((SplitContainer *)this,param_1,true);
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
      goto LAB_00117301;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00117301:
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
      goto LAB_001175b1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001175b1:
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
      goto LAB_00117861;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00117861:
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



/* CreateDialog::_bind_methods() [clone .cold] */

void CreateDialog::_bind_methods(void)

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



/* CreateDialog::_initialize_classv() */

void CreateDialog::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
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
              if ((code *)PTR__bind_methods_00121070 != Node::_bind_methods) {
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
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Window");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        local_70 = 0;
        String::parse_latin1((String *)&local_70,"AcceptDialog");
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
        AcceptDialog::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00121060 != Object::_bind_compatibility_methods)
        {
          AcceptDialog::_bind_compatibility_methods();
        }
        AcceptDialog::initialize_class()::initialized = '\x01';
      }
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"AcceptDialog");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      local_70 = 0;
      String::parse_latin1((String *)&local_70,"ConfirmationDialog");
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
      if ((code *)PTR__bind_methods_00121068 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_58 = "ConfirmationDialog";
    local_60 = 0;
    local_50 = 0x12;
    String::parse_latin1((StrRange *)&local_60);
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    local_70 = 0;
    String::parse_latin1((String *)&local_70,"CreateDialog");
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* CreateDialog::_notificationv(int, bool) */

void __thiscall CreateDialog::_notificationv(CreateDialog *this,int param_1,bool param_2)

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



/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos(StringName const&, unsigned int&) const */

undefined8 __thiscall
HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos
          (HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this,
          StringName *param_1,uint *param_2)

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
  int iVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  uint uVar16;
  
  if (*(long *)this == 0) {
    return 0;
  }
  if (*(int *)(this + 0x24) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x20) * 4);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x20) * 8);
    if (*(long *)param_1 == 0) {
      uVar11 = StringName::get_empty_hash();
    }
    else {
      uVar11 = *(uint *)(*(long *)param_1 + 0x20);
    }
    uVar14 = CONCAT44(0,uVar1);
    if (uVar11 == 0) {
      uVar11 = 1;
    }
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar11 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar13 = SUB168(auVar3 * auVar7,8);
    uVar16 = *(uint *)(*(long *)(this + 0x18) + lVar13 * 4);
    iVar12 = SUB164(auVar3 * auVar7,8);
    if (uVar16 != 0) {
      uVar15 = 0;
      do {
        if ((uVar11 == uVar16) &&
           (uVar16 = *(uint *)(*(long *)(this + 8) + lVar13 * 4),
           *(long *)(*(long *)this + (ulong)uVar16 * 8) == *(long *)param_1)) {
          *param_2 = uVar16;
          return 1;
        }
        uVar15 = uVar15 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(iVar12 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar14;
        lVar13 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(*(long *)(this + 0x18) + lVar13 * 4);
        iVar12 = SUB164(auVar4 * auVar8,8);
      } while ((uVar16 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar16 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar14, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + iVar12) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar14, uVar15 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
::_lookup_pos(HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
              *this,String *param_1,uint *param_2)

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
  undefined8 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar16 = CONCAT44(0,uVar1);
    lVar2 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = String::hash();
    uVar13 = 1;
    if (uVar11 != 0) {
      uVar13 = uVar11;
    }
    lVar17 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (ulong)uVar13 * lVar2;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar16;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar17 + lVar15 * 4);
    uVar14 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar18 = 0;
      do {
        if (uVar13 == uVar11) {
          uVar12 = String::operator==((String *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10)
                                      ,param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar14;
            return uVar12;
          }
          lVar17 = *(long *)(this + 0x10);
        }
        uVar18 = uVar18 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)(uVar14 + 1) * lVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar17 + lVar15 * 4);
        uVar14 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar11 * lVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = (ulong)((uVar1 + uVar14) - SUB164(auVar5 * auVar9,8)) * lVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar18 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
::operator[](HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  void *__s;
  long lVar3;
  long lVar4;
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
  ulong uVar24;
  undefined8 uVar25;
  void *__s_00;
  undefined1 (*pauVar26) [16];
  void *pvVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  uint *puVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong uVar38;
  undefined1 (*pauVar39) [16];
  undefined1 (*pauVar40) [16];
  long in_FS_OFFSET;
  uint local_70;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar21 = _lookup_pos(this,param_1,&local_70);
  if (cVar21 == '\0') {
    uVar31 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar32 = (ulong)uVar31;
      uVar24 = uVar32 * 4;
      uVar38 = uVar32 * 8;
      uVar25 = Memory::alloc_static(uVar24,false);
      *(undefined8 *)(this + 0x10) = uVar25;
      pvVar27 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = pvVar27;
      if (uVar31 != 0) {
        pvVar2 = *(void **)(this + 0x10);
        if ((pvVar2 < (void *)((long)pvVar27 + uVar38)) &&
           (pvVar27 < (void *)((long)pvVar2 + uVar24))) {
          uVar24 = 0;
          do {
            *(undefined4 *)((long)pvVar2 + uVar24 * 4) = 0;
            *(undefined8 *)((long)pvVar27 + uVar24 * 8) = 0;
            uVar24 = uVar24 + 1;
          } while (uVar32 != uVar24);
        }
        else {
          memset(pvVar2,0,uVar24);
          memset(pvVar27,0,uVar38);
        }
      }
    }
    local_6c = 0;
    cVar21 = _lookup_pos(this,param_1,&local_6c);
    if (cVar21 == '\0') {
      if ((float)uVar31 * __LC27 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar31 = *(uint *)(this + 0x28);
        if (uVar31 == 0x1c) {
          pauVar26 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_001188c0;
        }
        uVar24 = (ulong)(uVar31 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar23 = *(uint *)(hash_table_size_primes + (ulong)uVar31 * 4);
        if (uVar31 + 1 < 2) {
          uVar24 = 2;
        }
        uVar31 = *(uint *)(hash_table_size_primes + uVar24 * 4);
        uVar32 = (ulong)uVar31;
        *(int *)(this + 0x28) = (int)uVar24;
        pvVar27 = *(void **)(this + 8);
        uVar24 = uVar32 * 4;
        uVar38 = uVar32 * 8;
        pvVar2 = *(void **)(this + 0x10);
        uVar25 = Memory::alloc_static(uVar24,false);
        *(undefined8 *)(this + 0x10) = uVar25;
        __s_00 = (void *)Memory::alloc_static(uVar38,false);
        *(void **)(this + 8) = __s_00;
        if (uVar31 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar24))) {
            uVar24 = 0;
            do {
              *(undefined4 *)((long)__s + uVar24 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
              uVar24 = uVar24 + 1;
            } while (uVar32 != uVar24);
          }
          else {
            memset(__s,0,uVar24);
            memset(__s_00,0,uVar38);
          }
        }
        if (uVar23 != 0) {
          uVar24 = 0;
          do {
            uVar31 = *(uint *)((long)pvVar2 + uVar24 * 4);
            if (uVar31 != 0) {
              lVar3 = *(long *)(this + 0x10);
              uVar36 = 0;
              uVar35 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
              uVar38 = CONCAT44(0,uVar35);
              lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar5._8_8_ = 0;
              auVar5._0_8_ = (ulong)uVar31 * lVar4;
              auVar13._8_8_ = 0;
              auVar13._0_8_ = uVar38;
              lVar29 = SUB168(auVar5 * auVar13,8);
              puVar34 = (uint *)(lVar3 + lVar29 * 4);
              iVar28 = SUB164(auVar5 * auVar13,8);
              uVar37 = *puVar34;
              uVar25 = *(undefined8 *)((long)pvVar27 + uVar24 * 8);
              while (uVar37 != 0) {
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)uVar37 * lVar4;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = uVar38;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (ulong)((iVar28 + uVar35) - SUB164(auVar6 * auVar14,8)) * lVar4;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = uVar38;
                uVar22 = SUB164(auVar7 * auVar15,8);
                uVar33 = uVar25;
                if (uVar22 < uVar36) {
                  *puVar34 = uVar31;
                  puVar1 = (undefined8 *)((long)__s_00 + lVar29 * 8);
                  uVar33 = *puVar1;
                  *puVar1 = uVar25;
                  uVar31 = uVar37;
                  uVar36 = uVar22;
                }
                uVar36 = uVar36 + 1;
                auVar8._8_8_ = 0;
                auVar8._0_8_ = (ulong)(iVar28 + 1) * lVar4;
                auVar16._8_8_ = 0;
                auVar16._0_8_ = uVar38;
                lVar29 = SUB168(auVar8 * auVar16,8);
                puVar34 = (uint *)(lVar3 + lVar29 * 4);
                iVar28 = SUB164(auVar8 * auVar16,8);
                uVar25 = uVar33;
                uVar37 = *puVar34;
              }
              *(undefined8 *)((long)__s_00 + lVar29 * 8) = uVar25;
              *puVar34 = uVar31;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar24 = uVar24 + 1;
          } while (uVar23 != uVar24);
          Memory::free_static(pvVar27,false);
          Memory::free_static(pvVar2,false);
        }
      }
      local_58[0] = 0;
      local_68 = (undefined1  [16])0x0;
      if (*(long *)param_1 == 0) {
        local_58[1] = 0;
        pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
        *(undefined8 *)pauVar26[1] = 0;
        *pauVar26 = (undefined1  [16])0x0;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_58,(CowData *)param_1);
        lVar3 = local_58[0];
        uVar25 = local_68._0_8_;
        uVar33 = local_68._8_8_;
        local_58[1] = 0;
        pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
        *(undefined8 *)pauVar26[1] = 0;
        *(undefined8 *)*pauVar26 = uVar25;
        *(undefined8 *)(*pauVar26 + 8) = uVar33;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar26 + 1),(CowData *)local_58);
        }
      }
      *(undefined8 *)(pauVar26[1] + 8) = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_58);
      puVar1 = *(undefined8 **)(this + 0x20);
      if (puVar1 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar26;
      }
      else {
        *puVar1 = pauVar26;
        *(undefined8 **)(*pauVar26 + 8) = puVar1;
      }
      *(undefined1 (**) [16])(this + 0x20) = pauVar26;
      uVar23 = String::hash();
      lVar3 = *(long *)(this + 0x10);
      uVar31 = 1;
      if (uVar23 != 0) {
        uVar31 = uVar23;
      }
      lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar23 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar24 = CONCAT44(0,uVar23);
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar31 * lVar4;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar24;
      lVar30 = SUB168(auVar9 * auVar17,8);
      lVar29 = *(long *)(this + 8);
      puVar34 = (uint *)(lVar3 + lVar30 * 4);
      iVar28 = SUB164(auVar9 * auVar17,8);
      uVar35 = *puVar34;
      pauVar40 = pauVar26;
      if (uVar35 != 0) {
        uVar37 = 0;
        pauVar39 = pauVar26;
        do {
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)uVar35 * lVar4;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar24;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)((uVar23 + iVar28) - SUB164(auVar10 * auVar18,8)) * lVar4;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar24;
          uVar36 = SUB164(auVar11 * auVar19,8);
          pauVar40 = pauVar39;
          if (uVar36 < uVar37) {
            *puVar34 = uVar31;
            puVar1 = (undefined8 *)(lVar29 + lVar30 * 8);
            pauVar40 = (undefined1 (*) [16])*puVar1;
            *puVar1 = pauVar39;
            uVar37 = uVar36;
            uVar31 = uVar35;
          }
          uVar37 = uVar37 + 1;
          auVar12._8_8_ = 0;
          auVar12._0_8_ = (ulong)(iVar28 + 1) * lVar4;
          auVar20._8_8_ = 0;
          auVar20._0_8_ = uVar24;
          lVar30 = SUB168(auVar12 * auVar20,8);
          puVar34 = (uint *)(lVar3 + lVar30 * 4);
          iVar28 = SUB164(auVar12 * auVar20,8);
          uVar35 = *puVar34;
          pauVar39 = pauVar40;
        } while (uVar35 != 0);
      }
      *(undefined1 (**) [16])(lVar29 + lVar30 * 8) = pauVar40;
      *puVar34 = uVar31;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c * 8);
      *(undefined8 *)(pauVar26[1] + 8) = 0;
    }
  }
  else {
    pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_001188c0:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar26[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* CreateDialog::~CreateDialog() */

void __thiscall CreateDialog::~CreateDialog(CreateDialog *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 0xed8);
  *(undefined ***)this = &PTR__initialize_classv_0011b150;
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xefc) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xef8) * 4) != 0) {
        memset(*(void **)(this + 0xef0),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xef8) * 4) << 2);
        if (*(int *)(this + 0xefc) == 0) goto LAB_00118f70;
      }
      lVar2 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + lVar2 * 8) != 0)) {
          StringName::unref();
          pvVar3 = *(void **)(this + 0xed8);
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0xefc));
      *(undefined4 *)(this + 0xefc) = 0;
      if (pvVar3 == (void *)0x0) goto LAB_00118c46;
    }
LAB_00118f70:
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xee8),false);
    Memory::free_static(*(void **)(this + 0xee0),false);
    Memory::free_static(*(void **)(this + 0xef0),false);
  }
LAB_00118c46:
  pvVar3 = *(void **)(this + 0xeb0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xed4) != 0) {
      if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xed0) * 4) != 0) {
        memset(*(void **)(this + 0xec8),0,
               (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xed0) * 4) << 2);
        if (*(int *)(this + 0xed4) == 0) goto LAB_00118fb0;
      }
      lVar2 = 0;
      do {
        if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + lVar2 * 8) != 0)) {
          StringName::unref();
          pvVar3 = *(void **)(this + 0xeb0);
        }
        lVar2 = lVar2 + 1;
      } while ((uint)lVar2 < *(uint *)(this + 0xed4));
      *(undefined4 *)(this + 0xed4) = 0;
      if (pvVar3 == (void *)0x0) goto LAB_00118cde;
    }
LAB_00118fb0:
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xec0),false);
    Memory::free_static(*(void **)(this + 0xeb8),false);
    Memory::free_static(*(void **)(this + 0xec8),false);
  }
LAB_00118cde:
  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator> *)(this + 0xea8));
  pvVar3 = *(void **)(this + 0xe80);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xea4) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xea0) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xea4) = 0;
        *(undefined1 (*) [16])(this + 0xe90) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe88) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0xe88) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0xe80);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0xea4) = 0;
        *(undefined1 (*) [16])(this + 0xe90) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00118d95;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xe88),false);
  }
LAB_00118d95:
  pvVar3 = *(void **)(this + 0xe50);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xe74) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe70) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xe74) = 0;
        *(undefined1 (*) [16])(this + 0xe60) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe58) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0xe58) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0xe50);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0xe74) = 0;
        *(undefined1 (*) [16])(this + 0xe60) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00118e46;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xe58),false);
  }
LAB_00118e46:
  pvVar3 = *(void **)(this + 0xe20);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xe44) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0xe40) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xe44) = 0;
        *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xe28) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0xe28) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0xe20);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while ((ulong)uVar1 << 2 != lVar2);
        *(undefined4 *)(this + 0xe44) = 0;
        *(undefined1 (*) [16])(this + 0xe30) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00118ee7;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xe28),false);
  }
LAB_00118ee7:
  CowData<String>::_unref((CowData<String> *)(this + 0xdf8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xde0));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdd8));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdc8));
  *(undefined ***)this = &PTR__initialize_classv_0011a7e8;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* CreateDialog::~CreateDialog() */

void __thiscall CreateDialog::~CreateDialog(CreateDialog *this)

{
  ~CreateDialog(this);
  operator_delete(this,0xf00);
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
LAB_00119400:
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
  if (lVar9 == 0) goto LAB_00119400;
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
    goto LAB_00119456;
  }
  if (lVar9 == lVar5) {
LAB_0011937b:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_00119456:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_001192ef;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_0011937b;
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
LAB_001192ef:
  puVar7[-1] = param_1;
  return 0;
}



/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */

void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1)

{
  long *plVar1;
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  CowData<char32_t> *this;
  long lVar5;
  
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x68));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x60));
  if (*(long *)(param_1 + 0x58) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(param_1 + 0x58) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      pCVar2 = *(CowData<char32_t> **)(param_1 + 0x58);
      if (pCVar2 == (CowData<char32_t> *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)(param_1 + 0x58) = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this + 0x20);
          CowData<char32_t>::_unref(this + 0x10);
          CowData<char32_t>::_unref(this + 8);
          CowData<char32_t>::_unref(this);
          this = this + 0x28;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x48));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x38));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x30));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x28));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x20));
  CowData<char32_t>::_unref((CowData<char32_t> *)(param_1 + 0x18));
  if ((StringName::configured != '\0') && (*(long *)(param_1 + 0x10) != 0)) {
    StringName::unref();
  }
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  pvVar3 = *(void **)(this + 8);
  if (pvVar3 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar2 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar2) != 0) {
          *(int *)(*(long *)(this + 0x10) + lVar2) = 0;
          memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                    (*(HashMapElement **)((long)pvVar3 + lVar2 * 2));
          pvVar3 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
        }
        lVar2 = lVar2 + 4;
      } while (lVar2 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar3 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar3,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long lVar7;
  
  pvVar6 = *(void **)(this + 8);
  if (pvVar6 == (void *)0x0) {
    return;
  }
  if (*(int *)(this + 0x2c) != 0) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (uVar1 == 0) {
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    else {
      lVar7 = 0;
      do {
        if (*(int *)(*(long *)(this + 0x10) + lVar7) != 0) {
          pvVar6 = *(void **)((long)pvVar6 + lVar7 * 2);
          *(int *)(*(long *)(this + 0x10) + lVar7) = 0;
          pvVar5 = *(void **)((long)pvVar6 + 0x20);
          if (pvVar5 != (void *)0x0) {
            if (*(int *)((long)pvVar6 + 0x44) != 0) {
              uVar2 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)((long)pvVar6 + 0x40) * 4);
              if (uVar2 == 0) {
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
              }
              else {
                lVar4 = 0;
                do {
                  piVar3 = (int *)(*(long *)((long)pvVar6 + 0x28) + lVar4);
                  if (*piVar3 != 0) {
                    *piVar3 = 0;
                    memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>
                              (*(HashMapElement **)((long)pvVar5 + lVar4 * 2));
                    pvVar5 = *(void **)((long)pvVar6 + 0x20);
                    *(undefined8 *)((long)pvVar5 + lVar4 * 2) = 0;
                  }
                  lVar4 = lVar4 + 4;
                } while (lVar4 != (ulong)uVar2 * 4);
                *(undefined4 *)((long)pvVar6 + 0x44) = 0;
                *(undefined1 (*) [16])((long)pvVar6 + 0x30) = (undefined1  [16])0x0;
                if (pvVar5 == (void *)0x0) goto LAB_00119719;
              }
            }
            Memory::free_static(pvVar5,false);
            Memory::free_static(*(void **)((long)pvVar6 + 0x28),false);
          }
LAB_00119719:
          if ((StringName::configured != '\0') && (*(long *)((long)pvVar6 + 0x10) != 0)) {
            StringName::unref();
          }
          Memory::free_static(pvVar6,false);
          pvVar6 = *(void **)(this + 8);
          *(undefined8 *)((long)pvVar6 + lVar7 * 2) = 0;
        }
        lVar7 = lVar7 + 4;
      } while (lVar7 != (ulong)uVar1 << 2);
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
      if (pvVar6 == (void *)0x0) {
        return;
      }
    }
  }
  Memory::free_static(pvVar6,false);
  Memory::free_static(*(void **)(this + 0x10),false);
  return;
}



/* CreateDialog::popup_create(bool, bool, String const&, String const&) */

void CreateDialog::_GLOBAL__sub_I_popup_create(void)

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
  if (EditorHelpBit::doc_class_cache == '\0') {
    EditorHelpBit::doc_class_cache = '\x01';
    EditorHelpBit::doc_class_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_class_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
                 ::~HashMap,EditorHelpBit::doc_class_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_enum_cache == '\0') {
    EditorHelpBit::doc_enum_cache = '\x01';
    EditorHelpBit::doc_enum_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_enum_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_enum_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_constant_cache == '\0') {
    EditorHelpBit::doc_constant_cache = '\x01';
    EditorHelpBit::doc_constant_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_constant_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_constant_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_property_cache == '\0') {
    EditorHelpBit::doc_property_cache = '\x01';
    EditorHelpBit::doc_property_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_property_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_property_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_theme_item_cache == '\0') {
    EditorHelpBit::doc_theme_item_cache = '\x01';
    EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_theme_item_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_method_cache == '\0') {
    EditorHelpBit::doc_method_cache = '\x01';
    EditorHelpBit::doc_method_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_method_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_method_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_signal_cache == '\0') {
    EditorHelpBit::doc_signal_cache = '\x01';
    EditorHelpBit::doc_signal_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_signal_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_signal_cache,&__dso_handle);
  }
  if (EditorHelpBit::doc_annotation_cache == '\0') {
    EditorHelpBit::doc_annotation_cache = '\x01';
    EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1  [16])0x0;
    EditorHelpBit::doc_annotation_cache._40_8_ = 2;
    __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
                 ::~HashMap,EditorHelpBit::doc_annotation_cache,&__dso_handle);
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
  if (OptionButton::base_property_helper != '\0') {
    return;
  }
  OptionButton::base_property_helper = 1;
  OptionButton::base_property_helper._64_8_ = 0;
  OptionButton::base_property_helper._56_8_ = 2;
  OptionButton::base_property_helper._0_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._24_16_ = (undefined1  [16])0x0;
  OptionButton::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,OptionButton::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */

void __thiscall
HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */

void __thiscall
HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CreateDialog::~CreateDialog() */

void __thiscall CreateDialog::~CreateDialog(CreateDialog *this)

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
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* VSplitContainer::~VSplitContainer() */

void __thiscall VSplitContainer::~VSplitContainer(VSplitContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

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
/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CreateDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void> *this)

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
/* CallableCustomMethodPointer<CreateDialog, Variant, Vector2 const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,Variant,Vector2_const&,Control*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<CreateDialog, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<CreateDialog,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CreateDialog, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CreateDialog, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CreateDialog, void, String const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CreateDialog, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<CreateDialog, void, TreeItem*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<CreateDialog,void,TreeItem*,int,int,MouseButton> *this)

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


