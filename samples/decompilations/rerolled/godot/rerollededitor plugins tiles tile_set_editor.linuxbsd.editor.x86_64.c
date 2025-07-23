/* TileSetEditor::_tile_set_changed() */

void __thiscall TileSetEditor::_tile_set_changed(TileSetEditor *this)

{
  this[0x9d8] = (TileSetEditor)0x1;
  return;
}



/* TileSetEditor::_pattern_preview_done(Ref<TileMapPattern>, Ref<Texture2D>) */

void TileSetEditor::_pattern_preview_done(long param_1,undefined8 *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  long in_FS_OFFSET;
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  uVar3 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  do {
    iVar2 = ItemList::get_item_count();
    if (iVar2 <= (int)uVar3) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
LAB_0010014f:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    Variant::Variant((Variant *)local_58,(Object *)*param_2);
    ItemList::get_item_metadata((int)(Variant *)local_78);
    cVar1 = Variant::operator==((Variant *)local_78,(Variant *)local_58);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
      if (Variant::needs_deinit[local_58[0]] != '\0') goto LAB_001000d8;
LAB_0010005c:
      if (cVar1 == '\0') goto LAB_00100064;
LAB_001000f8:
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        ItemList::set_item_icon((int)*(undefined8 *)(param_1 + 0xa60),(Ref *)(ulong)uVar3);
        return;
      }
      goto LAB_0010014f;
    }
    if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_0010005c;
LAB_001000d8:
    Variant::_clear_internal();
    if (cVar1 != '\0') goto LAB_001000f8;
LAB_00100064:
    uVar3 = uVar3 + 1;
  } while( true );
}



/* TileSetEditor::_tab_changed(int) */

void TileSetEditor::_tab_changed(int param_1)

{
  undefined4 in_register_0000003c;
  
  CanvasItem::set_visible(SUB81(*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0x9e0),0));
  CanvasItem::set_visible(SUB81(*(undefined8 *)(CONCAT44(in_register_0000003c,param_1) + 0xa60),0));
  return;
}



/* TileSetEditor::_sources_advanced_menu_id_pressed(int) */

void __thiscall TileSetEditor::_sources_advanced_menu_id_pressed(TileSetEditor *this,int param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  char cVar4;
  long in_FS_OFFSET;
  Object *local_28;
  
  local_28 = *(Object **)(this + 0x9d0);
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (local_28 == (Object *)0x0) {
    if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_sources_advanced_menu_id_pressed",
                       "editor/plugins/tiles/tile_set_editor.cpp",0x14b,
                       "Condition \"tile_set.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    if (param_1 == 0) {
      uVar2 = *(undefined8 *)(this + 0xa48);
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_28 = (Object *)0x0;
      }
      AtlasMergingDialog::update_tile_set(uVar2);
      if (((local_28 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_28), cVar4 != '\0')) {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        Memory::free_static(local_28,false);
      }
      lVar3 = *(long *)(in_FS_OFFSET + 0x28);
    }
    else {
      if (param_1 != 1) {
        if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
          return;
        }
        goto LAB_0010034b;
      }
      uVar2 = *(undefined8 *)(this + 0xa50);
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
        local_28 = (Object *)0x0;
      }
      TileProxiesManagerDialog::update_tile_set(uVar2);
      if (((local_28 != (Object *)0x0) && (cVar4 = RefCounted::unreference(), cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_28), cVar4 != '\0')) {
        (**(code **)(*(long *)local_28 + 0x140))(local_28);
        Memory::free_static(local_28,false);
      }
      lVar3 = *(long *)(in_FS_OFFSET + 0x28);
    }
    if (lVar1 == lVar3) {
      Window::popup_centered_ratio(_LC12);
      return;
    }
  }
LAB_0010034b:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::add_expanded_editor(Control*) */

void TileSetEditor::add_expanded_editor(Control *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  code *pcVar3;
  Vector2 *pVVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 in_RSI;
  long in_FS_OFFSET;
  float fVar8;
  float fVar9;
  undefined4 extraout_XMM0_Db;
  float in_XMM1_Da;
  long local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(param_1 + 0xa80) = in_RSI;
  lVar5 = Node::get_parent();
  *(undefined8 *)(param_1 + 0xa88) = *(undefined8 *)(lVar5 + 0x60);
  lVar5 = Node::get_parent();
  do {
    if (lVar5 == 0) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("add_expanded_editor","editor/plugins/tiles/tile_set_editor.cpp",0x302,
                         "Parameter \"parent_container\" is null.",0,0);
        return;
      }
LAB_001005a8:
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar6 = __dynamic_cast(lVar5,&Object::typeinfo,&EditorInspector::typeinfo,0);
    if ((lVar6 != 0) ||
       (lVar5 = __dynamic_cast(lVar5,&Object::typeinfo,&ScrollContainer::typeinfo,0), lVar5 != 0)) {
      plVar2 = *(long **)(param_1 + 0xa80);
      pcVar3 = *(code **)(*plVar2 + 0xa8);
      Variant::Variant((Variant *)local_58,true);
      StringName::StringName((StringName *)&local_60,"reparented",false);
      (*pcVar3)(plVar2,(StringName *)&local_60,(Variant *)local_58);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      (**(code **)(**(long **)(param_1 + 0xa80) + 0x198))
                (*(long **)(param_1 + 0xa80),*(undefined8 *)(param_1 + 0xa78),1);
      CanvasItem::show();
      pVVar4 = *(Vector2 **)(param_1 + 0xa78);
      Control::get_size();
      fVar8 = (float)Control::get_global_rect();
      fVar9 = (float)Control::get_global_position();
      local_58[0] = CONCAT44(extraout_XMM0_Db,(in_XMM1_Da + fVar8) - fVar9);
      Control::set_size(pVVar4,SUB81((Variant *)local_58,0));
      puVar7 = *(undefined8 **)(param_1 + 0xa98);
      puVar1 = puVar7 + *(uint *)(param_1 + 0xa90);
      for (; puVar1 != puVar7; puVar7 = puVar7 + 1) {
        SplitContainer::set_dragger_visibility(*puVar7,1);
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
      goto LAB_001005a8;
    }
    lVar5 = Node::get_parent();
  } while( true );
}



/* TileSetEditor::remove_expanded_editor() */

void __thiscall TileSetEditor::remove_expanded_editor(TileSetEditor *this)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  ulong *puVar7;
  undefined8 *puVar8;
  long in_FS_OFFSET;
  bool bVar9;
  StringName local_38;
  undefined7 uStack_37;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xa80) == 0) goto LAB_00100723;
  uVar6 = (uint)*(ulong *)(this + 0xa88) & 0xffffff;
  if (uVar6 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_38 = (StringName)0x0;
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
    if ((*(ulong *)(this + 0xa88) >> 0x18 & 0x7fffffffff) != (*puVar7 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00100786;
    }
    uVar2 = puVar7[1];
    ObjectDB::spin_lock._0_1_ = '\0';
    if (uVar2 == 0) goto LAB_00100786;
    lVar5 = __dynamic_cast(uVar2,&Object::typeinfo,&Node::typeinfo,0);
    plVar3 = *(long **)(this + 0xa80);
    if (lVar5 == 0) goto LAB_00100786;
    pcVar4 = *(code **)(*plVar3 + 0xb0);
    StringName::StringName(&local_38,"reparented",false);
    (*pcVar4)(plVar3,&local_38);
    if ((StringName::configured != '\0') && (CONCAT71(uStack_37,local_38) != 0)) {
      StringName::unref();
    }
    (**(code **)(**(long **)(this + 0xa80) + 0x198))(*(long **)(this + 0xa80),lVar5,1);
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_00100786:
    Node::queue_free();
  }
  *(undefined8 *)(this + 0xa80) = 0;
  *(undefined8 *)(this + 0xa88) = 0;
  CanvasItem::hide();
  puVar8 = *(undefined8 **)(this + 0xa98);
  puVar1 = puVar8 + *(uint *)(this + 0xa90);
  for (; puVar1 != puVar8; puVar8 = puVar8 + 1) {
    SplitContainer::set_dragger_visibility(*puVar8,0);
  }
LAB_00100723:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::register_split(SplitContainer*) */

void __thiscall TileSetEditor::register_split(TileSetEditor *this,SplitContainer *param_1)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(this + 0xa90);
  pvVar3 = *(void **)(this + 0xa98);
  if (uVar1 == *(uint *)(this + 0xa94)) {
    uVar4 = (ulong)(uVar1 * 2);
    if (uVar1 * 2 == 0) {
      uVar4 = 1;
    }
    *(int *)(this + 0xa94) = (int)uVar4;
    pvVar3 = (void *)Memory::realloc_static(pvVar3,uVar4 * 8,false);
    *(void **)(this + 0xa98) = pvVar3;
    if (pvVar3 == (void *)0x0) {
      _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                       "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    uVar1 = *(uint *)(this + 0xa90);
  }
  *(uint *)(this + 0xa90) = uVar1 + 1;
  *(SplitContainer **)((long)pvVar3 + (ulong)uVar1 * 8) = param_1;
  return;
}



/* TileSourceInspectorPlugin::_confirm_change_id() */

void __thiscall TileSourceInspectorPlugin::_confirm_change_id(TileSourceInspectorPlugin *this)

{
  StringName *pSVar1;
  String *pSVar2;
  bool *pbVar3;
  long in_FS_OFFSET;
  double dVar4;
  long local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  pSVar1 = *(StringName **)(this + 0x230);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  dVar4 = (double)Range::get_value();
  Variant::Variant((Variant *)local_58,dVar4);
  StringName::StringName((StringName *)&local_60,"id",false);
  Object::set(pSVar1,(Variant *)&local_60,(bool *)local_58);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  pSVar2 = *(String **)(this + 0x220);
  pbVar3 = *(bool **)(this + 0x230);
  StringName::StringName((StringName *)&local_68,"id",false);
  Object::get((StringName *)local_58,pbVar3);
  Variant::operator_cast_to_long((Variant *)local_58);
  itos((long)&local_60);
  Label::set_text(pSVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSourceInspectorPlugin::can_handle(Object*) */

undefined4 __thiscall
TileSourceInspectorPlugin::can_handle(TileSourceInspectorPlugin *this,Object *param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  char *local_48;
  undefined8 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = 0;
  pcVar1 = *(code **)(*(long *)param_1 + 0x58);
  local_40 = 0x1d;
  local_48 = "TileSetAtlasSourceProxyObject";
  String::parse_latin1((StrRange *)&local_58);
  uVar2 = (*pcVar1)(param_1,&local_58);
  if ((char)uVar2 == '\0') {
    local_50 = 0;
    pcVar1 = *(code **)(*(long *)param_1 + 0x58);
    local_40 = 0x22;
    local_48 = "TileSetScenesCollectionProxyObject";
    String::parse_latin1((StrRange *)&local_50);
    uVar2 = (*pcVar1)(param_1,(StrRange *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSourceInspectorPlugin::_show_id_edit_dialog(Object*) */

void __thiscall
TileSourceInspectorPlugin::_show_id_edit_dialog(TileSourceInspectorPlugin *this,Object *param_1)

{
  Vector2i *pVVar1;
  undefined8 uVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  CallableCustom *pCVar6;
  ConfirmationDialog *this_00;
  BoxContainer *this_01;
  Label *this_02;
  SpinBox *this_03;
  long in_FS_OFFSET;
  float fVar7;
  double dVar8;
  undefined8 local_88;
  undefined8 local_80;
  long local_78 [3];
  undefined8 local_60;
  undefined8 local_58 [3];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x218) == 0) {
    this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
    ConfirmationDialog::ConfirmationDialog(this_00);
    postinitialize_handler((Object *)this_00);
    *(ConfirmationDialog **)(this + 0x218) = this_00;
    Node::add_child(TileSetEditor::singleton,this_00,0,0);
    this_01 = (BoxContainer *)operator_new(0xa10,"");
    BoxContainer::BoxContainer(this_01,true);
    this_01[0xa0c] = (BoxContainer)0x1;
    *(undefined ***)this_01 = &PTR__initialize_classv_00117708;
    postinitialize_handler((Object *)this_01);
    Node::add_child(*(undefined8 *)(this + 0x218),this_01,0,0);
    this_02 = (Label *)operator_new(0xad8,"");
    local_80 = 0;
    String::parse_latin1((String *)&local_80,"");
    local_88 = 0;
    String::parse_latin1
              ((String *)&local_88,
               "Warning: Modifying a source ID will result in all TileMaps using that source to reference an invalid source instead. This may result in unexpected data loss. Change this ID carefully."
              );
    TTR((String *)local_78,(String *)&local_88);
    Label::Label(this_02,(String *)local_78);
    postinitialize_handler((Object *)this_02);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    Label::set_autowrap_mode(this_02,2);
    Node::add_child(this_01,this_02,0,0);
    this_03 = (SpinBox *)operator_new(0xba8,"");
    SpinBox::SpinBox(this_03);
    postinitialize_handler((Object *)this_03);
    *(SpinBox **)(this + 0x228) = this_03;
    Node::add_child(this_01,this_03,0,0);
    Range::set_max(_LC38);
    plVar3 = *(long **)(this + 0x218);
    pcVar4 = *(code **)(*plVar3 + 0x108);
    pCVar6 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(pCVar6);
    *(undefined **)(pCVar6 + 0x20) = &_LC20;
    *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
    *(undefined ***)pCVar6 = &PTR_hash_00118920;
    *(undefined8 *)(pCVar6 + 0x40) = 0;
    uVar2 = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(pCVar6 + 0x10) = 0;
    *(undefined8 *)(pCVar6 + 0x30) = uVar2;
    *(code **)(pCVar6 + 0x38) = _confirm_change_id;
    *(TileSourceInspectorPlugin **)(pCVar6 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
    *(char **)(pCVar6 + 0x20) = "TileSourceInspectorPlugin::_confirm_change_id";
    Callable::Callable((Callable *)local_78,pCVar6);
    (*pcVar4)(plVar3,SceneStringNames::singleton + 0x268,(StringName *)local_78,0);
    Callable::~Callable((Callable *)local_78);
  }
  *(Object **)(this + 0x230) = param_1;
  StringName::StringName((StringName *)local_78,"id",false);
  Object::get((StringName *)local_58,(bool *)param_1);
  dVar8 = Variant::operator_cast_to_double((Variant *)local_58);
  Range::set_value(dVar8);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  pVVar1 = *(Vector2i **)(this + 0x218);
  fVar7 = (float)EditorScale::get_scale();
  local_60 = 400;
  local_58[0] = Vector2i::operator*((Vector2i *)&local_60,(int)fVar7);
  Window::popup_centered(pVVar1);
  lVar5 = SpinBox::get_line_edit();
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC20;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_001189b0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar2 = *(undefined8 *)(lVar5 + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar2;
  *(long *)(pCVar6 + 0x28) = lVar5;
  *(code **)(pCVar6 + 0x38) = Control::grab_focus;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "Control::grab_focus";
  Callable::Callable((Callable *)local_78,pCVar6);
  Variant::Variant((Variant *)local_58,0);
  Callable::call_deferredp((Variant **)local_78,0);
  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  Callable::~Callable((Callable *)local_78);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSourceInspectorPlugin::parse_property(Object*, Variant::Type, String const&, PropertyHint,
   String const&, BitField<PropertyUsageFlags>, bool) */

undefined4
TileSourceInspectorPlugin::parse_property
          (String *param_1,Object *param_2,undefined8 param_3,String *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  EditorProperty *this;
  BoxContainer *this_00;
  Label *this_01;
  Button *this_02;
  CallableCustom *this_03;
  long in_FS_OFFSET;
  String local_d0 [8];
  undefined8 local_c8 [2];
  long local_b8 [2];
  Variant *local_a8;
  int local_98 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar3 = String::operator==(param_4,"id");
  if ((char)uVar3 != '\0') {
    StringName::StringName((StringName *)local_b8,"id",false);
    Object::get((StringName *)local_98,(bool *)param_2);
    if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
      StringName::unref();
    }
    if (local_98[0] != 0) {
      this = (EditorProperty *)operator_new(0xb58,"");
      EditorProperty::EditorProperty(this);
      postinitialize_handler((Object *)this);
      this_00 = (BoxContainer *)operator_new(0xa10,"");
      BoxContainer::BoxContainer(this_00,false);
      this_00[0xa0c] = (BoxContainer)0x1;
      *(undefined ***)this_00 = &PTR__initialize_classv_00117390;
      postinitialize_handler((Object *)this_00);
      BoxContainer::set_alignment(this_00,1);
      this_01 = (Label *)operator_new(0xad8,"");
      Variant::operator_cast_to_long((Variant *)local_98);
      itos((long)local_b8);
      Label::Label(this_01,(String *)local_b8);
      postinitialize_handler((Object *)this_01);
      *(Label **)(param_1 + 0x220) = this_01;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      Control::set_h_size_flags(*(undefined8 *)(param_1 + 0x220),3);
      Node::add_child(this_00,*(undefined8 *)(param_1 + 0x220),0,0);
      this_02 = (Button *)operator_new(0xc10,"");
      local_c8[0] = 0;
      String::parse_latin1((String *)local_c8,"");
      local_b8[0] = 0;
      String::parse_latin1((String *)local_b8,"Edit");
      TTR(local_d0,(String *)local_b8);
      Button::Button(this_02,local_d0);
      postinitialize_handler((Object *)this_02);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
      Control::set_h_size_flags(this_02,3);
      Node::add_child(this_00,this_02,0,0);
      pcVar1 = *(code **)(*(long *)this_02 + 0x108);
      this_03 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this_03);
      *(undefined1 (*) [16])(this_03 + 0x30) = (undefined1  [16])0x0;
      *(undefined **)(this_03 + 0x20) = &_LC20;
      *(undefined8 *)(this_03 + 0x40) = 0;
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      *(undefined ***)this_03 = &PTR_hash_00118a40;
      *(undefined8 *)(this_03 + 0x30) = uVar2;
      *(code **)(this_03 + 0x38) = _show_id_edit_dialog;
      *(undefined8 *)(this_03 + 0x10) = 0;
      *(String **)(this_03 + 0x28) = param_1;
      CallableCustomMethodPointerBase::_setup((uint *)this_03,(int)this_03 + 0x28);
      *(char **)(this_03 + 0x20) = "TileSourceInspectorPlugin::_show_id_edit_dialog";
      Callable::Callable((Callable *)local_b8,this_03);
      Variant::Variant((Variant *)local_78,param_2);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_a8 = (Variant *)local_78;
      Callable::bindp((Variant **)local_c8,(int)(StringName *)local_b8);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      (*pcVar1)(this_02,SceneStringNames::singleton + 0x238,(String *)local_c8);
      Callable::~Callable((Callable *)local_c8);
      Callable::~Callable((Callable *)local_b8);
      Node::add_child(this,this_00,0);
      local_b8[0] = 0;
      EditorInspectorPlugin::add_property_editor
                (param_1,(Control *)param_4,SUB81(this,0),(String *)0x0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      if (Variant::needs_deinit[local_98[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::_update_patterns_list() [clone .part.0] */

void __thiscall TileSetEditor::_update_patterns_list(TileSetEditor *this)

{
  undefined8 uVar1;
  String *pSVar2;
  undefined8 uVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  CallableCustom *this_00;
  int iVar8;
  long in_FS_OFFSET;
  undefined8 local_80;
  Object *local_78;
  Object *local_70;
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  iVar8 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  while( true ) {
    iVar6 = TileSet::get_patterns_count();
    if (iVar6 <= iVar8) break;
    pSVar2 = *(String **)(this + 0xa60);
    local_70 = (Object *)0x0;
    local_68 = (Object *)&_LC20;
    local_78 = (Object *)0x0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    uVar7 = ItemList::add_item(pSVar2,(StrRange *)&local_78,SUB81((String *)&local_70,0));
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    if (local_70 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_70;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_70);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))();
          Memory::free_static(pOVar4,false);
        }
      }
    }
    uVar1 = *(undefined8 *)(this + 0xa60);
    TileSet::get_pattern((int)(String *)&local_68);
    Variant::Variant((Variant *)local_58,local_68);
    ItemList::set_item_metadata((int)uVar1,(Variant *)(ulong)uVar7);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_68 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_68;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_68);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))();
          Memory::free_static(pOVar4,false);
        }
      }
    }
    uVar1 = *(undefined8 *)(this + 0xa60);
    local_78 = (Object *)0x0;
    local_68 = (Object *)&_LC20;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = (Object *)0x10d55f;
    local_80 = 0;
    local_60 = 9;
    String::parse_latin1((StrRange *)&local_80);
    TTR((String *)&local_70,(String *)&local_80);
    iVar6 = (int)(String *)&local_70;
    vformat<int>((String *)&local_68,iVar6);
    ItemList::set_item_tooltip((int)uVar1,(String *)(ulong)uVar7);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    uVar3 = TilesEditorUtils::singleton;
    this_00 = (CallableCustom *)operator_new(0x48,"");
    CallableCustom::CallableCustom(this_00);
    *(undefined1 (*) [16])(this_00 + 0x30) = (undefined1  [16])0x0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    uVar1 = *(undefined8 *)(this + 0x60);
    *(undefined ***)this_00 = &PTR_hash_00118380;
    *(undefined8 *)(this_00 + 0x30) = uVar1;
    *(code **)(this_00 + 0x38) = _pattern_preview_done;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined **)(this_00 + 0x20) = &_LC20;
    *(TileSetEditor **)(this_00 + 0x28) = this;
    CallableCustomMethodPointerBase::_setup((uint *)this_00,(int)this_00 + 0x28);
    *(char **)(this_00 + 0x20) = "TileSetEditor::_pattern_preview_done";
    Callable::Callable((Callable *)&local_68,this_00);
    TileSet::get_pattern(iVar6);
    local_78 = (Object *)0x0;
    if (*(Object **)(this + 0x9d0) != (Object *)0x0) {
      local_78 = *(Object **)(this + 0x9d0);
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_78 = (Object *)0x0;
      }
    }
    TilesEditorUtils::queue_pattern_preview
              (uVar3,(StrRange *)&local_78,(String *)&local_70,(String *)&local_68);
    if (local_78 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_78;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_78);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    if (local_70 != (Object *)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_70;
      if (cVar5 != '\0') {
        cVar5 = predelete_handler(local_70);
        if (cVar5 != '\0') {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
    }
    iVar8 = iVar8 + 1;
    Callable::~Callable((Callable *)&local_68);
  }
  uVar1 = *(undefined8 *)(this + 0xa68);
  ItemList::get_item_count();
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    CanvasItem::set_visible(SUB81(uVar1,0));
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::_update_patterns_list() */

void __thiscall TileSetEditor::_update_patterns_list(TileSetEditor *this)

{
  if (*(long *)(this + 0x9d0) != 0) {
    ItemList::clear();
    _update_patterns_list(this);
    return;
  }
  _err_print_error("_update_patterns_list","editor/plugins/tiles/tile_set_editor.cpp",0x1b7,
                   "Condition \"tile_set.is_null()\" is true.",0,0);
  return;
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
  *(undefined1 (*) [16])(puVar3 + 2) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(puVar3 + 0xc) = (undefined1  [16])0x0;
  *puVar3 = 0;
  puVar3[6] = 0;
  *(undefined8 *)(puVar3 + 8) = 0;
  puVar3[10] = 6;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *puVar3 = *(undefined4 *)param_1;
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 2),(CowData *)(param_1 + 8));
  StringName::operator=((StringName *)(puVar3 + 4),(StringName *)(param_1 + 0x10));
  puVar3[6] = *(undefined4 *)(param_1 + 0x18);
  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar3 + 8),(CowData *)(param_1 + 0x20));
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



/* TileSetEditor::_source_selected(int) */

void __thiscall TileSetEditor::_source_selected(TileSetEditor *this,int param_1)

{
  undefined8 uVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  long in_FS_OFFSET;
  Object *local_68;
  Object *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) == 0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_source_selected","editor/plugins/tiles/tile_set_editor.cpp",0xf3,
                       "Condition \"tile_set.is_null()\" is true.",0,0);
      return;
    }
    goto LAB_00101b82;
  }
  if (param_1 < 0) {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa10),0));
  }
  else {
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa10),0));
    ItemList::get_item_metadata((int)(Variant *)local_58);
    iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    iVar7 = (int)(Ref<TileSet> *)&local_60;
    TileSet::get_source(iVar7);
    if (local_60 != (Object *)0x0) {
      lVar5 = __dynamic_cast(local_60,&Object::typeinfo,&TileSetAtlasSource::typeinfo,0);
      cVar3 = RefCounted::unreference();
      pOVar2 = local_60;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_60), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      TileSet::get_source(iVar7);
      if (local_60 != (Object *)0x0) goto LAB_00101a47;
      if (lVar5 == 0) goto LAB_00101b61;
LAB_00101a7e:
      CanvasItem::hide();
      local_68 = (Object *)0x0;
      uVar1 = *(undefined8 *)(this + 0xa00);
      if (*(Object **)(this + 0x9d0) != (Object *)0x0) {
        local_60 = (Object *)0x0;
        local_68 = *(Object **)(this + 0x9d0);
        cVar3 = RefCounted::init_ref();
        if (cVar3 == '\0') {
          local_68 = (Object *)0x0;
        }
        Ref<TileSet>::unref((Ref<TileSet> *)&local_60);
      }
      TileSetAtlasSourceEditor::edit(uVar1,&local_68,lVar5,iVar4);
      if (((local_68 != (Object *)0x0) &&
          (cVar3 = RefCounted::unreference(), pOVar2 = local_68, cVar3 != '\0')) &&
         (cVar3 = predelete_handler(local_68), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      CanvasItem::show();
      if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00101b82;
      goto LAB_00101b2c;
    }
    lVar5 = 0;
    TileSet::get_source(iVar7);
    if (local_60 != (Object *)0x0) {
LAB_00101a47:
      lVar6 = __dynamic_cast(local_60,&Object::typeinfo,&TileSetScenesCollectionSource::typeinfo,0);
      cVar3 = RefCounted::unreference();
      pOVar2 = local_60;
      if ((cVar3 != '\0') && (cVar3 = predelete_handler(local_60), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
        Memory::free_static(pOVar2,false);
      }
      if (lVar5 != 0) goto LAB_00101a7e;
      if (lVar6 != 0) {
        CanvasItem::hide();
        CanvasItem::hide();
        local_68 = (Object *)0x0;
        uVar1 = *(undefined8 *)(this + 0xa08);
        if (*(Object **)(this + 0x9d0) != (Object *)0x0) {
          local_60 = (Object *)0x0;
          local_68 = *(Object **)(this + 0x9d0);
          cVar3 = RefCounted::init_ref();
          if (cVar3 == '\0') {
            local_68 = (Object *)0x0;
          }
          Ref<TileSet>::unref((Ref<TileSet> *)&local_60);
        }
        TileSetScenesCollectionSourceEditor::edit(uVar1,&local_68,lVar6,iVar4);
        Ref<TileSet>::unref((Ref<TileSet> *)&local_68);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          CanvasItem::show();
          return;
        }
        goto LAB_00101b82;
      }
    }
  }
LAB_00101b61:
  CanvasItem::show();
  CanvasItem::hide();
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00101b82:
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00101b2c:
  CanvasItem::hide();
  return;
}



/* TileSetEditor::_update_sources_list(int) [clone .part.0] */

void __thiscall TileSetEditor::_update_sources_list(TileSetEditor *this,int param_1)

{
  undefined8 uVar1;
  void *pvVar2;
  long lVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  long lVar9;
  Object *pOVar10;
  Object *pOVar11;
  char *pcVar12;
  int *piVar13;
  long in_FS_OFFSET;
  int local_d0;
  long *local_c8;
  Object *local_c0;
  Object *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  CowData<char32_t> local_a0 [8];
  Object *local_98;
  undefined8 local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar6 = ItemList::get_current();
  if (-1 < iVar6) {
    ItemList::get_current();
    ItemList::get_item_metadata((int)(Variant *)local_78);
    local_d0 = Variant::operator_cast_to_int((Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar5 = TileSet::has_source((int)*(undefined8 *)(this + 0x9d0));
    if (cVar5 != '\0') goto LAB_00101d98;
  }
  local_d0 = (int)TileSet::INVALID_SOURCE;
LAB_00101d98:
  if ((param_1 < 0) && (param_1 = local_d0, local_d0 < 0)) {
    param_1 = (int)TileSet::INVALID_SOURCE;
  }
  ItemList::clear();
  uVar1 = TilesEditorUtils::singleton;
  local_98 = (Object *)0x0;
  if ((*(Object **)(this + 0x9d0) != (Object *)0x0) &&
     (local_98 = *(Object **)(this + 0x9d0), cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    local_98 = (Object *)0x0;
  }
  TilesEditorUtils::get_sorted_sources(&local_c8,uVar1,(Ref<TileSet> *)&local_98);
  Ref<TileSet>::unref((Ref<TileSet> *)&local_98);
  if ((local_c8 != (long *)0x0) && (piVar13 = (int *)*local_c8, piVar13 != (int *)0x0)) {
LAB_00102200:
    do {
      TileSet::get_source((int)(Ref<TileSet> *)&local_98);
      pOVar11 = local_98;
      if (((local_98 != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar10 = local_98, cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_98), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
        Memory::free_static(pOVar10,false);
      }
      local_c0 = (Object *)0x0;
      local_b8 = (Object *)0x0;
      Resource::get_name();
      if ((local_98 == (Object *)0x0) || (uVar1 = *(undefined8 *)(local_98 + -8), (int)uVar1 == 0))
      {
LAB_001022a0:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if ((int)uVar1 != 1) {
          Resource::get_name();
          if (local_b8 != local_98) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            local_b8 = local_98;
            local_98 = (Object *)0x0;
          }
          goto LAB_001022a0;
        }
      }
      if (pOVar11 == (Object *)0x0) {
LAB_0010208b:
        if ((local_b8 == (Object *)0x0) || (*(uint *)(local_b8 + -8) < 2)) {
          local_a8 = 0;
          local_98 = (Object *)&_LC20;
          local_90 = 0;
          String::parse_latin1((StrRange *)&local_a8);
          local_b0 = 0;
          local_98 = (Object *)0x10d59c;
          local_90 = 0x1c;
          String::parse_latin1((StrRange *)&local_b0);
          TTR((String *)local_a0,(String *)&local_b0);
          vformat<int>((String *)&local_98,(int)(String *)local_a0);
          pOVar11 = local_98;
          if (local_b8 != local_98) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            local_b8 = pOVar11;
            local_98 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref(local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        }
      }
      else {
        lVar9 = __dynamic_cast(pOVar11,&Object::typeinfo,&TileSetAtlasSource::typeinfo,0);
        if (lVar9 != 0) {
          TileSetAtlasSource::get_texture();
          pOVar4 = local_c0;
          pOVar10 = local_c0;
          if (local_98 == local_c0) {
LAB_00101e8c:
            if (((pOVar10 != (Object *)0x0) &&
                (cVar5 = RefCounted::unreference(), pOVar10 = local_98, cVar5 != '\0')) &&
               (cVar5 = predelete_handler(local_98), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
            }
          }
          else {
            local_c0 = local_98;
            if (local_98 != (Object *)0x0) {
              cVar5 = RefCounted::reference();
              if (cVar5 == '\0') {
                local_c0 = (Object *)0x0;
              }
              pOVar10 = local_98;
              if (pOVar4 != (Object *)0x0) {
                cVar5 = RefCounted::unreference();
                pOVar10 = local_98;
                goto joined_r0x00101e81;
              }
              goto LAB_00101e8c;
            }
            if (pOVar4 != (Object *)0x0) {
              cVar5 = RefCounted::unreference();
              pOVar10 = local_98;
joined_r0x00101e81:
              local_98 = pOVar10;
              if ((cVar5 != '\0') &&
                 (cVar5 = predelete_handler(pOVar4), pOVar10 = local_98, cVar5 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
                pOVar10 = local_98;
              }
              goto LAB_00101e8c;
            }
          }
          if ((local_b8 == (Object *)0x0) || (*(uint *)(local_b8 + -8) < 2)) {
            if (local_c0 == (Object *)0x0) {
              local_a8 = 0;
              String::parse_latin1((String *)&local_a8,"");
              local_b0 = 0;
              String::parse_latin1((String *)&local_b0,"No Texture Atlas Source (ID: %d)");
              TTR((String *)local_a0,(String *)&local_b0);
              vformat<int>((String *)&local_98,(int)(String *)local_a0);
              pOVar10 = local_98;
              if (local_b8 != local_98) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                local_98 = (Object *)0x0;
                local_b8 = pOVar10;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref(local_a0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            }
            else {
              Resource::get_path();
              String::get_file();
              if (local_b8 != local_98) {
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
                local_b8 = local_98;
                local_98 = (Object *)0x0;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
              CowData<char32_t>::_unref(local_a0);
            }
          }
        }
        plVar8 = (long *)__dynamic_cast(pOVar11,&Object::typeinfo,
                                        &TileSetScenesCollectionSource::typeinfo,0);
        if (plVar8 == (long *)0x0) goto LAB_0010208b;
        if ((_update_sources_list(int)::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar6 = __cxa_guard_acquire(&_update_sources_list(int)::{lambda()#1}::operator()()::
                                         sname), iVar6 != 0)) {
          _scs_create((char *)&_update_sources_list(int)::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_update_sources_list(int)::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_update_sources_list(int)::{lambda()#1}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_98);
        pOVar10 = local_c0;
        pOVar11 = local_c0;
        if (local_98 == local_c0) {
LAB_00101fa1:
          if (((pOVar11 != (Object *)0x0) &&
              (cVar5 = RefCounted::unreference(), pOVar11 = local_98, cVar5 != '\0')) &&
             (cVar5 = predelete_handler(local_98), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
            Memory::free_static(pOVar11,false);
          }
        }
        else {
          local_c0 = local_98;
          if (local_98 != (Object *)0x0) {
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
              local_c0 = (Object *)0x0;
            }
            pOVar11 = local_98;
            if (pOVar10 != (Object *)0x0) {
              cVar5 = RefCounted::unreference();
              pOVar11 = local_98;
              goto joined_r0x00101f96;
            }
            goto LAB_00101fa1;
          }
          if (pOVar10 != (Object *)0x0) {
            cVar5 = RefCounted::unreference();
            pOVar11 = local_98;
joined_r0x00101f96:
            local_98 = pOVar11;
            if ((cVar5 != '\0') &&
               (cVar5 = predelete_handler(pOVar10), pOVar11 = local_98, cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
              pOVar11 = local_98;
            }
            goto LAB_00101fa1;
          }
        }
        if ((local_b8 == (Object *)0x0) || (*(uint *)(local_b8 + -8) < 2)) {
          iVar6 = (**(code **)(*plVar8 + 0x280))(plVar8,0);
          local_a8 = 0;
          if (iVar6 < 1) {
            String::parse_latin1((String *)&local_a8,"");
            pcVar12 = "Empty Scene Collection Source (ID: %d)";
          }
          else {
            String::parse_latin1((String *)&local_a8,"");
            pcVar12 = "Scene Collection Source (ID: %d)";
          }
          local_b0 = 0;
          String::parse_latin1((String *)&local_b0,pcVar12);
          TTR((String *)local_a0,(String *)&local_b0);
          vformat<int>((String *)&local_98,(int)(String *)local_a0);
          pOVar11 = local_98;
          if (local_b8 != local_98) {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
            local_b8 = pOVar11;
            local_98 = (Object *)0x0;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref(local_a0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          goto LAB_0010208b;
        }
      }
      if ((local_c0 == (Object *)0x0) && (*(Object **)(this + 0xa38) != (Object *)0x0)) {
        local_98 = (Object *)0x0;
        local_c0 = *(Object **)(this + 0xa38);
        cVar5 = RefCounted::reference();
        if (cVar5 == '\0') {
          local_c0 = (Object *)0x0;
        }
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_98);
      }
      ItemList::add_item(*(String **)(this + 0xa30),(CowData<char32_t> *)&local_b8,
                         SUB81(&local_c0,0));
      uVar1 = *(undefined8 *)(this + 0xa30);
      Variant::Variant((Variant *)local_78,*piVar13);
      ItemList::set_item_metadata((int)uVar1,(Variant *)0xffffffff);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      if (((local_c0 == (Object *)0x0) ||
          (cVar5 = RefCounted::unreference(), pOVar11 = local_c0, cVar5 == '\0')) ||
         (cVar5 = predelete_handler(local_c0), cVar5 == '\0')) {
        piVar13 = *(int **)(piVar13 + 2);
        if (piVar13 == (int *)0x0) break;
        goto LAB_00102200;
      }
      (**(code **)(*(long *)pOVar11 + 0x140))(pOVar11);
      Memory::free_static(pOVar11,false);
      piVar13 = *(int **)(piVar13 + 2);
    } while (piVar13 != (int *)0x0);
  }
  iVar6 = 0;
  if (-1 < param_1) {
    for (; iVar7 = ItemList::get_item_count(), iVar6 < iVar7; iVar6 = iVar6 + 1) {
      ItemList::get_item_metadata((int)(Variant *)local_78);
      iVar7 = Variant::operator_cast_to_int((Variant *)local_78);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (param_1 == iVar7) {
        ItemList::set_current((int)*(undefined8 *)(this + 0xa30));
        ItemList::ensure_current_is_visible();
        if (local_d0 != param_1) {
          plVar8 = *(long **)(this + 0xa30);
          iVar6 = ItemList::get_current();
          lVar9 = SceneStringNames::singleton + 0x260;
          Variant::Variant((Variant *)local_78,iVar6);
          local_58 = (undefined1  [16])0x0;
          local_60 = 0;
          local_88[0] = (Variant *)local_78;
          (**(code **)(*plVar8 + 0xd0))(plVar8,lVar9,local_88,1);
          if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        break;
      }
    }
  }
  iVar6 = ItemList::get_current();
  if ((iVar6 < 0) && (iVar6 = ItemList::get_item_count(), 0 < iVar6)) {
    ItemList::set_current((int)*(undefined8 *)(this + 0xa30));
    ItemList::get_item_metadata((int)(Variant *)local_78);
    iVar6 = Variant::operator_cast_to_int((Variant *)local_78);
    if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
    }
    plVar8 = *(long **)(this + 0xa30);
    if (local_d0 != iVar6) {
      iVar6 = ItemList::get_current();
      lVar9 = SceneStringNames::singleton + 0x260;
      Variant::Variant((Variant *)local_78,iVar6);
      local_58 = (undefined1  [16])0x0;
      local_60 = 0;
      local_88[0] = (Variant *)local_78;
      (**(code **)(*plVar8 + 0xd0))(plVar8,lVar9,local_88,1);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
    }
  }
  iVar6 = ItemList::get_current();
  _source_selected(this,iVar6);
  uVar1 = TilesEditorUtils::singleton;
  ItemList::get_current();
  TilesEditorUtils::set_sources_lists_current((int)uVar1);
  if (local_c8 != (long *)0x0) {
    do {
      plVar8 = local_c8;
      pvVar2 = (void *)*local_c8;
      if (pvVar2 == (void *)0x0) {
        if ((int)local_c8[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00102526;
        }
        break;
      }
      if (*(long **)((long)pvVar2 + 0x18) == local_c8) {
        lVar9 = *(long *)((long)pvVar2 + 8);
        lVar3 = *(long *)((long)pvVar2 + 0x10);
        *local_c8 = lVar9;
        if (pvVar2 == (void *)local_c8[1]) {
          local_c8[1] = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 8) = lVar9;
          lVar9 = *(long *)((long)pvVar2 + 8);
        }
        if (lVar9 != 0) {
          *(long *)(lVar9 + 0x10) = lVar3;
        }
        Memory::free_static(pvVar2,false);
        *(int *)(plVar8 + 2) = (int)plVar8[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
    } while ((int)local_c8[2] != 0);
    Memory::free_static(local_c8,false);
  }
LAB_00102526:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::_update_sources_list(int) */

void __thiscall TileSetEditor::_update_sources_list(TileSetEditor *this,int param_1)

{
  if (*(long *)(this + 0x9d0) != 0) {
    _update_sources_list(this,param_1);
    return;
  }
  return;
}



/* TileSetEditor::_source_delete_pressed() */

void __thiscall TileSetEditor::_source_delete_pressed(TileSetEditor *this)

{
  Variant *pVVar1;
  StringName *pSVar2;
  char cVar3;
  int iVar4;
  EditorUndoRedoManager *this_00;
  Variant *pVVar5;
  int iVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  Object *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) == 0) {
    _err_print_error("_source_delete_pressed","editor/plugins/tiles/tile_set_editor.cpp",0x113,
                     "Condition \"tile_set.is_null()\" is true.",0,0);
  }
  else {
    ItemList::get_current();
    iVar6 = (int)(Variant *)&local_a8;
    ItemList::get_item_metadata(iVar6);
    iVar4 = Variant::operator_cast_to_int((Variant *)&local_a8);
    if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
    }
    TileSet::get_source((int)&local_c8);
    this_00 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
    local_b8 = 0;
    String::parse_latin1((String *)&local_b8,"");
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"Remove source");
    TTR((String *)&local_b0,(String *)&local_c0);
    EditorUndoRedoManager::create_action(this_00,(String *)&local_b0,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
    StringName::StringName((StringName *)&local_b0,"remove_source",false);
    EditorUndoRedoManager::add_do_method<int>
              (this_00,*(Object **)(this + 0x9d0),(StringName *)&local_b0,iVar4);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    pOVar7 = local_c8;
    if (local_c8 != (Object *)0x0) {
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
        pOVar7 = (Object *)0x0;
      }
    }
    StringName::StringName((StringName *)&local_b0,"add_source",false);
    pSVar2 = *(StringName **)(this + 0x9d0);
    Variant::Variant(local_88,pOVar7);
    Variant::Variant(local_70,iVar4);
    local_58 = 0;
    local_50 = (undefined1  [16])0x0;
    local_a8 = local_88;
    pVStack_a0 = local_70;
    EditorUndoRedoManager::add_undo_methodp((Object *)this_00,pSVar2,(Variant **)&local_b0,iVar6);
    pVVar5 = (Variant *)local_40;
    do {
      pVVar1 = pVVar5 + -0x18;
      pVVar5 = pVVar5 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar5 != local_88);
    if ((StringName::configured != '\0') && (local_b0 != 0)) {
      StringName::unref();
    }
    if (pOVar7 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(pOVar7);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
    }
    EditorUndoRedoManager::commit_action(SUB81(this_00,0));
    if (*(long *)(this + 0x9d0) != 0) {
      _update_sources_list(this,-1);
    }
    if (local_c8 != (Object *)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
        cVar3 = predelete_handler(local_c8);
        if (cVar3 != '\0') {
          (**(code **)(*(long *)local_c8 + 0x140))(local_c8);
          Memory::free_static(local_c8,false);
        }
      }
    }
  }
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::_source_add_id_pressed(int) */

void __thiscall TileSetEditor::_source_add_id_pressed(TileSetEditor *this,int param_1)

{
  Variant *pVVar1;
  StringName *pSVar2;
  long *plVar3;
  code *pcVar4;
  long lVar5;
  String *pSVar6;
  char cVar7;
  int iVar8;
  Resource *this_00;
  Object *this_01;
  EditorFileDialog *this_02;
  CallableCustom *this_03;
  char *pcVar9;
  undefined8 uVar10;
  Variant *pVVar11;
  long in_FS_OFFSET;
  Object *local_d8;
  long *local_c8;
  long local_c0;
  long local_b8 [2];
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar10 = 0x125;
      pcVar9 = "Condition \"tile_set.is_null()\" is true.";
LAB_001031b1:
      _err_print_error("_source_add_id_pressed","editor/plugins/tiles/tile_set_editor.cpp",uVar10,
                       pcVar9,0,0);
      return;
    }
  }
  else if (param_1 == 0) {
    if (*(long *)(this + 0xa40) == 0) {
      this_02 = (EditorFileDialog *)operator_new(0x1108,"");
      EditorFileDialog::EditorFileDialog(this_02);
      postinitialize_handler((Object *)this_02);
      *(EditorFileDialog **)(this + 0xa40) = this_02;
      Node::add_child(this,this_02,0,0);
      EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xa40),1);
      plVar3 = *(long **)(this + 0xa40);
      pcVar4 = *(code **)(*plVar3 + 0x108);
      this_03 = (CallableCustom *)operator_new(0x48,"");
      CallableCustom::CallableCustom(this_03);
      *(undefined **)(this_03 + 0x20) = &_LC20;
      *(undefined1 (*) [16])(this_03 + 0x30) = (undefined1  [16])0x0;
      *(undefined ***)this_03 = &PTR_hash_001182f0;
      *(undefined8 *)(this_03 + 0x40) = 0;
      uVar10 = *(undefined8 *)(this + 0x60);
      *(undefined8 *)(this_03 + 0x10) = 0;
      *(undefined8 *)(this_03 + 0x30) = uVar10;
      *(code **)(this_03 + 0x38) = _load_texture_files;
      *(TileSetEditor **)(this_03 + 0x28) = this;
      CallableCustomMethodPointerBase::_setup((uint *)this_03,(int)this_03 + 0x28);
      *(char **)(this_03 + 0x20) = "TileSetEditor::_load_texture_files";
      Callable::Callable((Callable *)local_b8,this_03);
      StringName::StringName((StringName *)&local_c0,"files_selected",false);
      (*pcVar4)(plVar3,(StringName *)&local_c0,(Callable *)local_b8,0);
      if ((StringName::configured != '\0') && (local_c0 != 0)) {
        StringName::unref();
      }
      Callable::~Callable((Callable *)local_b8);
      local_c8 = (long *)0x0;
      local_b8[0] = 0;
      String::parse_latin1((String *)local_b8,"Texture2D");
      ResourceLoader::get_recognized_extensions_for_type((String *)local_b8,(List *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
      if (local_c8 != (long *)0x0) {
        for (lVar5 = *local_c8; lVar5 != 0; lVar5 = *(long *)(lVar5 + 8)) {
          pSVar6 = *(String **)(this + 0xa40);
          String::to_upper();
          operator+((char *)&local_c0,(String *)&_LC83);
          EditorFileDialog::add_filter(pSVar6,(String *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
        }
      }
      List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_c8);
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorFileDialog::popup_file_dialog();
      return;
    }
  }
  else if (param_1 == 1) {
    iVar8 = TileSet::get_next_source_id();
    this_00 = (Resource *)operator_new(0x290,"");
    Resource::Resource(this_00);
    *(code **)this_00 = EditorFileDialog::EditorFileDialog;
    *(undefined8 *)(this_00 + 0x240) = 0;
    *(undefined8 *)(this_00 + 0x250) = 0;
    *(undefined8 *)(this_00 + 0x280) = 2;
    *(undefined4 *)(this_00 + 0x288) = 1;
    this_00[0x28c] = (Resource)0x1;
    *(undefined1 (*) [16])(this_00 + 0x260) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(this_00 + 0x270) = (undefined1  [16])0x0;
    postinitialize_handler((Object *)this_00);
    cVar7 = RefCounted::init_ref();
    if (cVar7 == '\0') {
      this_00 = (Resource *)0x0;
    }
    this_01 = (Object *)EditorUndoRedoManager::get_singleton();
    local_c0 = 0;
    String::parse_latin1((String *)&local_c0,"");
    local_c8 = (long *)0x0;
    String::parse_latin1((String *)&local_c8,"Add atlas source");
    TTR((String *)local_b8,(String *)&local_c8);
    EditorUndoRedoManager::create_action(this_01,(String *)local_b8,0,0,0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
    if (this_00 == (Resource *)0x0) {
      local_d8 = (Object *)0x0;
    }
    else {
      cVar7 = RefCounted::reference();
      local_d8 = (Object *)0x0;
      if (cVar7 != '\0') {
        local_d8 = (Object *)this_00;
      }
    }
    StringName::StringName((StringName *)local_b8,"add_source",false);
    pSVar2 = *(StringName **)(this + 0x9d0);
    Variant::Variant(local_88,local_d8);
    Variant::Variant(local_70,iVar8);
    local_50 = (undefined1  [16])0x0;
    local_58 = 0;
    pVVar11 = (Variant *)local_40;
    local_a8 = local_88;
    pVStack_a0 = local_70;
    EditorUndoRedoManager::add_do_methodp(this_01,pSVar2,(Variant **)local_b8,(int)&local_a8);
    do {
      pVVar1 = pVVar11 + -0x18;
      pVVar11 = pVVar11 + -0x18;
      if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
        Variant::_clear_internal();
      }
    } while (pVVar11 != local_88);
    if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
      StringName::unref();
    }
    if (((local_d8 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
       (cVar7 = predelete_handler(local_d8), cVar7 != '\0')) {
      (**(code **)(*(long *)local_d8 + 0x140))(local_d8);
      Memory::free_static(local_d8,false);
    }
    StringName::StringName((StringName *)local_b8,"remove_source",false);
    EditorUndoRedoManager::add_undo_method<int>
              ((EditorUndoRedoManager *)this_01,*(Object **)(this + 0x9d0),(StringName *)local_b8,
               iVar8);
    if ((StringName::configured != '\0') && (local_b8[0] != 0)) {
      StringName::unref();
    }
    EditorUndoRedoManager::commit_action(SUB81(this_01,0));
    if (*(long *)(this + 0x9d0) != 0) {
      _update_sources_list(this,iVar8);
    }
    if (((this_00 == (Resource *)0x0) || (cVar7 = RefCounted::unreference(), cVar7 == '\0')) ||
       (cVar7 = predelete_handler((Object *)this_00), cVar7 == '\0')) {
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
    }
    else {
      (**(code **)(*(long *)this_00 + 0x140))(this_00);
      if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static(this_00,false);
        return;
      }
    }
  }
  else if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    uVar10 = 0x146;
    pcVar9 = "Method/function failed.";
    goto LAB_001031b1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::_set_source_sort(int) */

void __thiscall TileSetEditor::_set_source_sort(TileSetEditor *this,int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  String *pSVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_58;
  undefined8 local_50;
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  TilesEditorUtils::set_sorting_option((int)TilesEditorUtils::singleton);
  iVar3 = 0;
  do {
    iVar2 = MenuButton::get_popup();
    iVar5 = iVar3 + 1;
    PopupMenu::set_item_checked(iVar2,SUB41(iVar3,0));
    iVar3 = iVar5;
  } while (iVar5 != 4);
  iVar3 = ItemList::get_current();
  if (-1 < iVar3) {
    ItemList::get_current();
    ItemList::get_item_metadata((int)(Variant *)local_48);
    iVar3 = Variant::operator_cast_to_int((Variant *)local_48);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
    cVar1 = TileSet::has_source((int)*(undefined8 *)(this + 0x9d0));
    if (cVar1 != '\0') goto LAB_00103510;
  }
  iVar3 = (int)TileSet::INVALID_SOURCE;
LAB_00103510:
  if (*(long *)(this + 0x9d0) != 0) {
    _update_sources_list(this,iVar3);
  }
  if (this[0xa58] == (TileSetEditor)0x0) {
    pSVar4 = (String *)EditorSettings::get_singleton();
    Variant::Variant((Variant *)local_48,param_1);
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"tile_source_sort");
    local_58 = 0;
    String::parse_latin1((String *)&local_58,"editor_metadata");
    EditorSettings::set_project_metadata(pSVar4,(String *)&local_58,(Variant *)&local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
    }
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TileSetEditor::_notification(int) */

void __thiscall TileSetEditor::_notification(TileSetEditor *this,int param_1)

{
  Ref *pRVar1;
  StringName *pSVar2;
  undefined8 uVar3;
  char cVar4;
  TileSetEditor TVar5;
  int iVar6;
  Object *pOVar7;
  long in_FS_OFFSET;
  long local_40;
  Object *local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0x1f) {
    cVar4 = CanvasItem::is_visible_in_tree();
    if (cVar4 == '\0') {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        remove_expanded_editor(this);
        return;
      }
      goto LAB_00103c8c;
    }
  }
  else if (param_1 == 0x2d) {
    pRVar1 = *(Ref **)(this + 0xa10);
    if (_notification(int)::{lambda()#1}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#1}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#1}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_38);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
    pRVar1 = *(Ref **)(this + 0xa18);
    if (_notification(int)::{lambda()#2}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#2}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#2}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#2}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_38);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
    pRVar1 = *(Ref **)(this + 0xa20);
    if (_notification(int)::{lambda()#3}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#3}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#3}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#3}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_38);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
    pRVar1 = *(Ref **)(this + 0xa28);
    if (_notification(int)::{lambda()#4}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#4}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#4}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#4}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#4}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_38);
    Button::set_button_icon(pRVar1);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
    if (_notification(int)::{lambda()#5}::operator()()::sname == '\0') {
      iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#5}::operator()()::sname);
      if (iVar6 != 0) {
        _scs_create((char *)&_notification(int)::{lambda()#5}::operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,&_notification(int)::{lambda()#5}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&_notification(int)::{lambda()#5}::operator()()::sname);
      }
    }
    Control::get_editor_theme_icon((StringName *)&local_38);
    pOVar7 = *(Object **)(this + 0xa38);
    if (local_38 != pOVar7) {
      *(Object **)(this + 0xa38) = local_38;
      if (local_38 != (Object *)0x0) {
        cVar4 = RefCounted::reference();
        if (cVar4 == '\0') {
          *(undefined8 *)(this + 0xa38) = 0;
        }
      }
      if (pOVar7 != (Object *)0x0) {
        cVar4 = RefCounted::unreference();
        if (cVar4 != '\0') {
          cVar4 = predelete_handler(pOVar7);
          if (cVar4 != '\0') {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
      }
    }
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_38);
    pSVar2 = *(StringName **)(this + 0xa78);
    StringName::StringName((StringName *)&local_40,"Tree",false);
    Control::get_theme_stylebox((StringName *)&local_38,(StringName *)this);
    Control::add_theme_style_override(pSVar2,(Ref *)(SceneStringNames::singleton + 600));
    if (local_38 != (Object *)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar7 = local_38;
      if (cVar4 != '\0') {
        cVar4 = predelete_handler(local_38);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
          Memory::free_static(pOVar7,false);
        }
      }
    }
    if ((StringName::configured != '\0') && (local_40 != 0)) {
      StringName::unref();
    }
    if (*(long *)(this + 0x9d0) != 0) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        _update_sources_list(this,-1);
        return;
      }
      goto LAB_00103c8c;
    }
  }
  else if ((param_1 == 0x19) && (this[0x9d8] != (TileSetEditor)0x0)) {
    if (*(long *)(this + 0x9d0) == 0) {
      this[0x9c8] = (TileSetEditor)0x0;
    }
    else {
      Object::set_edited(SUB81(*(long *)(this + 0x9d0),0));
      this[0x9c8] = (TileSetEditor)0x0;
      if (*(long *)(this + 0x9d0) != 0) {
        local_38 = (Object *)0x0;
        pOVar7 = (Object *)
                 __dynamic_cast(*(long *)(this + 0x9d0),&Object::typeinfo,&Resource::typeinfo,0);
        uVar3 = EditorNode::singleton;
        if (pOVar7 != (Object *)0x0) {
          local_38 = pOVar7;
          cVar4 = RefCounted::reference();
          if (cVar4 == '\0') {
            local_38 = (Object *)0x0;
          }
        }
        TVar5 = (TileSetEditor)EditorNode::is_resource_read_only(uVar3,&local_38,0);
        this[0x9c8] = TVar5;
        if (local_38 != (Object *)0x0) {
          cVar4 = RefCounted::unreference();
          pOVar7 = local_38;
          if (cVar4 != '\0') {
            cVar4 = predelete_handler(local_38);
            if (cVar4 != '\0') {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
          }
        }
        if (*(long *)(this + 0x9d0) != 0) {
          _update_sources_list(this,-1);
        }
      }
    }
    _update_patterns_list(this);
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa28),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa20),0));
    this[0x9d8] = (TileSetEditor)0x0;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00103c8c:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::edit(Ref<TileSet>) */

void __thiscall TileSetEditor::edit(TileSetEditor *this,long *param_2)

{
  undefined8 uVar1;
  char cVar2;
  TileSetEditor TVar3;
  int iVar4;
  Object *pOVar5;
  String *pSVar6;
  Object *pOVar7;
  Callable *pCVar8;
  Callable *pCVar9;
  long in_FS_OFFSET;
  undefined8 local_90;
  Object *local_88 [2];
  int local_78 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*param_2 == 0) {
    pCVar8 = *(Callable **)(this + 0x9d0);
    TVar3 = (TileSetEditor)0x0;
    if (pCVar8 == (Callable *)0x0) {
      pCVar9 = (Callable *)0x0;
      TVar3 = (TileSetEditor)0x0;
      goto LAB_00103f05;
    }
LAB_00103e9f:
    create_custom_callable_function_pointer<TileSetEditor>
              ((TileSetEditor *)local_88,(char *)this,
               (_func_void *)"&TileSetEditor::_tile_set_changed");
    Resource::disconnect_changed(pCVar8);
    Callable::~Callable((Callable *)local_88);
    pOVar5 = (Object *)*param_2;
    pOVar7 = *(Object **)(this + 0x9d0);
    if (pOVar7 != pOVar5) {
      *(Object **)(this + 0x9d0) = pOVar5;
      if (pOVar5 != (Object *)0x0) goto LAB_00103d6e;
LAB_00103d82:
      if (((pOVar7 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar7), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      pOVar5 = *(Object **)(this + 0x9d0);
    }
    this[0x9c8] = TVar3;
    if (pOVar5 != (Object *)0x0) {
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa18),0));
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa28),0));
      BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa20),0));
      pCVar8 = *(Callable **)(this + 0x9d0);
      create_custom_callable_function_pointer<TileSetEditor>
                ((TileSetEditor *)local_88,(char *)this,
                 (_func_void *)"&TileSetEditor::_tile_set_changed");
      Resource::connect_changed(pCVar8,(uint)(TileSetEditor *)local_88);
      Callable::~Callable((Callable *)local_88);
      if (this[0xa58] == (TileSetEditor)0x0) {
        if (*(long *)(this + 0x9d0) != 0) {
          _update_sources_list(this,-1);
          goto LAB_00103e49;
        }
      }
      else {
        pSVar6 = (String *)EditorSettings::get_singleton();
        Variant::Variant((Variant *)local_78,0);
        local_88[0] = (Object *)0x0;
        String::parse_latin1((String *)local_88,"tile_source_sort");
        local_90 = 0;
        String::parse_latin1((String *)&local_90,"editor_metadata");
        EditorSettings::get_project_metadata((String *)local_58,pSVar6,(Variant *)&local_90);
        iVar4 = Variant::operator_cast_to_int((Variant *)local_58);
        _set_source_sort(this,iVar4);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        this[0xa58] = (TileSetEditor)0x0;
LAB_00103e49:
        if (*(long *)(this + 0x9d0) != 0) {
          ItemList::clear();
          if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
            _update_patterns_list(this);
            return;
          }
          goto LAB_001040dd;
        }
      }
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        _err_print_error("_update_patterns_list","editor/plugins/tiles/tile_set_editor.cpp",0x1b7,
                         "Condition \"tile_set.is_null()\" is true.",0,0);
        return;
      }
      goto LAB_001040dd;
    }
  }
  else {
    local_88[0] = (Object *)0x0;
    pOVar5 = (Object *)__dynamic_cast(*param_2,&Object::typeinfo,&Resource::typeinfo,0);
    uVar1 = EditorNode::singleton;
    if ((pOVar5 != (Object *)0x0) &&
       (local_88[0] = pOVar5, cVar2 = RefCounted::reference(), cVar2 == '\0')) {
      local_88[0] = (Object *)0x0;
    }
    TVar3 = (TileSetEditor)EditorNode::is_resource_read_only(uVar1,local_88,0);
    if (((local_88[0] != (Object *)0x0) &&
        (cVar2 = RefCounted::unreference(), pOVar5 = local_88[0], cVar2 != '\0')) &&
       (cVar2 = predelete_handler(local_88[0]), cVar2 != '\0')) {
      (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
      Memory::free_static(pOVar5,false);
    }
    pCVar9 = (Callable *)*param_2;
    pCVar8 = *(Callable **)(this + 0x9d0);
    if (pCVar8 != pCVar9) {
LAB_00103d55:
      if (pCVar8 != (Callable *)0x0) goto LAB_00103e9f;
      if (pCVar9 == (Callable *)0x0) {
        this[0x9c8] = TVar3;
        goto LAB_00103f18;
      }
      *(Callable **)(this + 0x9d0) = pCVar9;
      pOVar7 = (Object *)0x0;
LAB_00103d6e:
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0x9d0) = 0;
      }
      goto LAB_00103d82;
    }
LAB_00103f05:
    if (this[0x9c8] != TVar3) goto LAB_00103d55;
  }
LAB_00103f18:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001040dd:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::_patterns_item_list_gui_input(Ref<InputEvent> const&) */

void __thiscall TileSetEditor::_patterns_item_list_gui_input(TileSetEditor *this,Ref *param_1)

{
  Variant *pVVar1;
  int iVar2;
  StringName *pSVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  Object *pOVar7;
  String *pSVar8;
  EditorUndoRedoManager *this_00;
  Variant *pVVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_d0;
  Object *local_c8;
  long local_c0;
  Object *local_b8;
  long local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  uVar4 = EditorNode::singleton;
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) == 0) {
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_patterns_item_list_gui_input","editor/plugins/tiles/tile_set_editor.cpp",
                       0x198,"Condition \"tile_set.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    local_b8 = (Object *)0x0;
    pOVar7 = (Object *)
             __dynamic_cast(*(long *)(this + 0x9d0),&Object::typeinfo,&Resource::typeinfo,0);
    if ((pOVar7 != (Object *)0x0) &&
       (local_b8 = pOVar7, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
      local_b8 = (Object *)0x0;
    }
    cVar5 = EditorNode::is_resource_read_only(uVar4,(String *)&local_b8,0);
    if (((local_b8 != (Object *)0x0) &&
        (cVar6 = RefCounted::unreference(), pOVar7 = local_b8, cVar6 != '\0')) &&
       (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
      (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
      Memory::free_static(pOVar7,false);
    }
    if (cVar5 == '\0') {
      pSVar8 = (String *)EditorSettings::get_singleton();
      local_b8 = (Object *)0x0;
      String::parse_latin1((String *)&local_b8,"tiles_editor/delete");
      cVar5 = EditorSettings::is_shortcut(pSVar8,(String *)&local_b8);
      if (((cVar5 == '\0') || (cVar5 = InputEvent::is_pressed(), cVar5 == '\0')) ||
         (cVar5 = (**(code **)(**(long **)param_1 + 0x1c8))(), cVar5 != '\0')) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        ItemList::get_selected_items();
        this_00 = (EditorUndoRedoManager *)EditorUndoRedoManager::get_singleton();
        local_c8 = (Object *)0x0;
        String::parse_latin1((String *)&local_c8,"");
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"Remove TileSet patterns");
        TTR((String *)&local_c0,(String *)&local_d0);
        EditorUndoRedoManager::create_action(this_00,(String *)&local_c0,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
        if (local_b0 != 0) {
          lVar10 = 0;
          do {
            if (*(long *)(local_b0 + -8) <= lVar10) break;
            iVar2 = *(int *)(local_b0 + lVar10 * 4);
            StringName::StringName((StringName *)&local_c0,"remove_pattern",false);
            EditorUndoRedoManager::add_do_method<int>
                      (this_00,*(Object **)(this + 0x9d0),(StringName *)&local_c0,iVar2);
            if ((StringName::configured != '\0') && (local_c0 != 0)) {
              StringName::unref();
            }
            TileSet::get_pattern((int)(String *)&local_c8);
            StringName::StringName((StringName *)&local_c0,"add_pattern",false);
            pSVar3 = *(StringName **)(this + 0x9d0);
            Variant::Variant(local_88,local_c8);
            pVVar9 = (Variant *)local_40;
            Variant::Variant(local_70,iVar2);
            local_58 = 0;
            local_50 = (undefined1  [16])0x0;
            local_a8 = local_88;
            pVStack_a0 = local_70;
            EditorUndoRedoManager::add_undo_methodp
                      ((Object *)this_00,pSVar3,(Variant **)&local_c0,(int)&local_a8);
            do {
              pVVar1 = pVVar9 + -0x18;
              pVVar9 = pVVar9 + -0x18;
              if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                Variant::_clear_internal();
              }
            } while (pVVar9 != local_88);
            if ((StringName::configured != '\0') && (local_c0 != 0)) {
              StringName::unref();
            }
            if (((local_c8 != (Object *)0x0) &&
                (cVar5 = RefCounted::unreference(), pOVar7 = local_c8, cVar5 != '\0')) &&
               (cVar5 = predelete_handler(local_c8), cVar5 != '\0')) {
              (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
              Memory::free_static(pOVar7,false);
            }
            lVar10 = lVar10 + 1;
          } while (local_b0 != 0);
        }
        EditorUndoRedoManager::commit_action(SUB81(this_00,0));
        Control::accept_event();
        CowData<int>::_unref((CowData<int> *)&local_b0);
      }
    }
    if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* TileSetEditor::TileSetEditor() */

void __thiscall TileSetEditor::TileSetEditor(TileSetEditor *this)

{
  Variant *pVVar1;
  long lVar2;
  String *pSVar3;
  code *pcVar4;
  Vector2i *pVVar5;
  StringName *pSVar6;
  Object *pOVar7;
  MethodInfo *pMVar8;
  int iVar9;
  BoxContainer *this_00;
  TabBar *this_01;
  BoxContainer *pBVar10;
  SplitContainer *this_02;
  MenuButton *pMVar11;
  long *plVar12;
  ItemList *pIVar13;
  CallableCustom *pCVar14;
  BoxContainer *this_03;
  Button *this_04;
  undefined8 uVar15;
  AtlasMergingDialog *this_05;
  TileProxiesManagerDialog *this_06;
  Label *pLVar16;
  TileSetAtlasSourceEditor *this_07;
  TileSetScenesCollectionSourceEditor *this_08;
  PanelContainer *this_09;
  Variant *pVVar17;
  long in_FS_OFFSET;
  float fVar18;
  undefined8 local_168;
  undefined8 local_160;
  String local_158 [16];
  long local_148 [2];
  long local_138 [2];
  long local_128;
  undefined8 local_120;
  undefined1 local_118 [16];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8 [2];
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c0 [2];
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  undefined8 local_88 [3];
  int local_70 [2];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Control::Control((Control *)this);
  this[0x9c8] = (TileSetEditor)0x0;
  *(undefined ***)this = &PTR__initialize_classv_00117df8;
  *(undefined8 *)(this + 0x9d0) = 0;
  this[0x9d8] = (TileSetEditor)0x0;
  *(undefined8 *)(this + 0xa50) = 0;
  this[0xa58] = (TileSetEditor)0x1;
  this[0xa70] = (TileSetEditor)0x0;
  *(undefined8 *)(this + 0xa88) = 0;
  *(undefined8 *)(this + 0xa90) = 0;
  *(undefined8 *)(this + 0xa98) = 0;
  *(undefined1 (*) [16])(this + 0x9e0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0x9f0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa00) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa30) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa40) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa60) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xa78) = (undefined1  [16])0x0;
  singleton = this;
  Node::set_process_internal(SUB81(this,0));
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_00117708;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  Control::set_anchors_and_offsets_preset(this_00,0xf,0,0);
  this_01 = (TabBar *)operator_new(0xb58,"");
  TabBar::TabBar(this_01);
  postinitialize_handler((Object *)this_01);
  *(TabBar **)(this + 0x9f0) = this_01;
  TabBar::set_tab_alignment(this_01,1);
  TabBar::set_clip_tabs(SUB81(*(undefined8 *)(this + 0x9f0),0));
  pSVar3 = *(String **)(this + 0x9f0);
  local_128 = 0;
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"");
  local_148[0] = 0;
  String::parse_latin1((String *)local_148,"Tile Sources");
  TTR(local_158,(String *)local_148);
  TabBar::add_tab(pSVar3,local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_128);
  pSVar3 = *(String **)(this + 0x9f0);
  local_128 = 0;
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"");
  local_148[0] = 0;
  String::parse_latin1((String *)local_148,"Patterns");
  TTR(local_158,(String *)local_148);
  TabBar::add_tab(pSVar3,local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_158);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_128);
  plVar12 = *(long **)(this + 0x9f0);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<TileSetEditor,int>
            ((TileSetEditor *)&local_128,(char *)this,
             (_func_void_int *)"&TileSetEditor::_tab_changed");
  StringName::StringName((StringName *)local_138,"tab_changed",false);
  (*pcVar4)(plVar12,(String *)local_138,(Ref<Texture2D> *)&local_128,0);
  if ((StringName::configured != '\0') && (local_138[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_128);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,false);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00117390;
  postinitialize_handler((Object *)pBVar10);
  *(BoxContainer **)(this + 0x9e8) = pBVar10;
  Control::set_h_size_flags(pBVar10,3);
  Node::add_child(*(undefined8 *)(this + 0x9e8),*(undefined8 *)(this + 0x9f0),0,0);
  Node::add_child(this_00,*(undefined8 *)(this + 0x9e8),0,0);
  this_02 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_02,false);
  this_02[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_00117a80;
  postinitialize_handler((Object *)this_02);
  *(SplitContainer **)(this + 0x9e0) = this_02;
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Tiles");
  TTR((String *)local_148,(String *)local_138);
  Node::set_name((String *)this_02);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x9e0),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0x9e0),3);
  Node::add_child(this_00,*(undefined8 *)(this + 0x9e0),0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,true);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00117708;
  postinitialize_handler((Object *)pBVar10);
  Control::set_h_size_flags(pBVar10,3);
  Control::set_v_size_flags(pBVar10,3);
  Control::set_stretch_ratio(_LC108);
  fVar18 = (float)EditorScale::get_scale();
  local_a8 = (Variant *)CONCAT44(fVar18 * _LC109._4_4_,fVar18 * (float)_LC109);
  Control::set_custom_minimum_size((Vector2 *)pBVar10);
  Node::add_child(*(undefined8 *)(this + 0x9e0),pBVar10,0,0);
  pMVar11 = (MenuButton *)operator_new(0xc68,"");
  local_128 = 0;
  MenuButton::MenuButton(pMVar11,(String *)&local_128);
  postinitialize_handler((Object *)pMVar11);
  *(MenuButton **)(this + 0xa20) = pMVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa20),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xa20));
  pSVar3 = *(String **)(this + 0xa20);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Sort Sources");
  TTR((String *)local_148,(String *)local_138);
  Control::set_tooltip_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  plVar12 = (long *)MenuButton::get_popup();
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<TileSetEditor,int>
            ((TileSetEditor *)&local_128,(char *)this,
             (_func_void_int *)"&TileSetEditor::_set_source_sort");
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x240,(Ref<Texture2D> *)&local_128,0);
  Callable::~Callable((Callable *)&local_128);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Sort by ID (Ascending)");
  TTR((String *)local_148,(String *)local_138);
  PopupMenu::add_radio_check_item(plVar12,(String *)local_148,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Sort by ID (Descending)");
  TTR((String *)local_148,(String *)local_138);
  PopupMenu::add_radio_check_item(plVar12,(String *)local_148,1,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Sort by Name (Ascending)");
  TTR((String *)local_148,(String *)local_138);
  PopupMenu::add_radio_check_item(plVar12,(String *)local_148,2,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Sort by Name (Descending)");
  TTR((String *)local_148,(String *)local_138);
  PopupMenu::add_radio_check_item(plVar12,(String *)local_148,3,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  PopupMenu::set_item_checked((int)plVar12,false);
  pIVar13 = (ItemList *)operator_new(0xb80,"");
  ItemList::ItemList(pIVar13);
  postinitialize_handler((Object *)pIVar13);
  *(ItemList **)(this + 0xa30) = pIVar13;
  Node::set_auto_translate_mode(pIVar13,2);
  pVVar5 = *(Vector2i **)(this + 0xa30);
  fVar18 = (float)EditorScale::get_scale();
  local_b0 = CONCAT44(fVar18 * __LC116,fVar18 * __LC116);
  local_a8 = (Variant *)Vector2::operator_cast_to_Vector2i((Vector2 *)&local_b0);
  ItemList::set_fixed_icon_size(pVVar5);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xa30),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa30),3);
  pSVar6 = *(StringName **)(this + 0xa30);
  StringName::StringName((StringName *)&local_128,"ItemListSecondary",false);
  Control::set_theme_type_variation(pSVar6);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  plVar12 = *(long **)(this + 0xa30);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<TileSetEditor,int>
            ((TileSetEditor *)&local_128,(char *)this,
             (_func_void_int *)"&TileSetEditor::_source_selected");
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x260,(Ref<Texture2D> *)&local_128,0);
  Callable::~Callable((Callable *)&local_128);
  lVar2 = TilesEditorUtils::singleton;
  plVar12 = *(long **)(this + 0xa30);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  pCVar14 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar14);
  *(undefined **)(pCVar14 + 0x20) = &_LC20;
  *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar14 = &PTR_hash_00118530;
  *(undefined8 *)(pCVar14 + 0x40) = 0;
  uVar15 = *(undefined8 *)(lVar2 + 0x60);
  *(long *)(pCVar14 + 0x28) = lVar2;
  *(undefined8 *)(pCVar14 + 0x30) = uVar15;
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  *(code **)(pCVar14 + 0x38) = TilesEditorUtils::set_sources_lists_current;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
  *(char **)(pCVar14 + 0x20) = "TilesEditorUtils::set_sources_lists_current";
  Callable::Callable((Callable *)&local_128,pCVar14);
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x260,(Ref<Texture2D> *)&local_128,0);
  Callable::~Callable((Callable *)&local_128);
  lVar2 = TilesEditorUtils::singleton;
  plVar12 = *(long **)(this + 0xa30);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  pCVar14 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar14);
  *(undefined **)(pCVar14 + 0x20) = &_LC20;
  *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar14 = &PTR_hash_001185c0;
  *(undefined8 *)(pCVar14 + 0x40) = 0;
  uVar15 = *(undefined8 *)(lVar2 + 0x60);
  *(long *)(pCVar14 + 0x28) = lVar2;
  *(undefined8 *)(pCVar14 + 0x30) = uVar15;
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  *(code **)(pCVar14 + 0x38) = TilesEditorUtils::synchronize_sources_list;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
  *(char **)(pCVar14 + 0x20) = "TilesEditorUtils::synchronize_sources_list";
  Callable::Callable((Callable *)&local_128,pCVar14);
  pOVar7 = *(Object **)(this + 0xa20);
  Variant::Variant((Variant *)local_88,*(Object **)(this + 0xa30));
  pVVar17 = (Variant *)local_40;
  Variant::Variant((Variant *)local_70,pOVar7);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  iVar9 = (int)(Ref<Texture2D> *)&local_128;
  local_a8 = (Variant *)local_88;
  pVStack_a0 = (Variant *)local_70;
  Callable::bindp((Variant **)local_138,iVar9);
  do {
    pVVar1 = pVVar17 + -0x18;
    pVVar17 = pVVar17 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar17 != (Variant *)local_88);
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x18,(String *)local_138,0);
  Callable::~Callable((Callable *)local_138);
  Callable::~Callable((Callable *)&local_128);
  pMVar8 = *(MethodInfo **)(this + 0xa30);
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"sort_request");
  local_118 = (undefined1  [16])0x0;
  local_128 = 0;
  local_120 = 0;
  local_108 = 0;
  local_100 = 0;
  local_f8 = 6;
  local_f0 = 1;
  local_e8[0] = 0;
  local_d8 = 0;
  local_d0 = 0;
  local_c0[0] = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_128,(CowData *)local_138);
  Object::add_user_signal(pMVar8);
  CowData<int>::_unref((CowData<int> *)local_c0);
  CowData<Variant>::_unref((CowData<Variant> *)&local_d8);
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_e8);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_120);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  plVar12 = *(long **)(this + 0xa30);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<TileSetEditor,int>
            ((TileSetEditor *)&local_128,(char *)this,
             (_func_void_int *)"&TileSetEditor::_update_sources_list");
  Variant::Variant((Variant *)local_88,-1);
  local_70[0] = 0;
  local_70[1] = 0;
  local_68 = (undefined1  [16])0x0;
  local_a8 = (Variant *)local_88;
  Callable::bindp((Variant **)local_138,iVar9);
  if (Variant::needs_deinit[local_70[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_88[0]] != '\0') {
    Variant::_clear_internal();
  }
  StringName::StringName((StringName *)local_148,"sort_request",false);
  (*pcVar4)(plVar12,(String *)local_148,(String *)local_138,0);
  if ((StringName::configured != '\0') && (local_148[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_138);
  Callable::~Callable((Callable *)&local_128);
  (**(code **)(**(long **)(this + 0xa30) + 0x2c8))(*(long **)(this + 0xa30),1);
  plVar12 = *(long **)(this + 0xa30);
  pcVar4 = *(code **)(*plVar12 + 0x318);
  pCVar14 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar14);
  *(undefined **)(pCVar14 + 0x20) = &_LC20;
  *(TileSetEditor **)(pCVar14 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar14 = &PTR_hash_001186e0;
  *(undefined8 *)(pCVar14 + 0x40) = 0;
  uVar15 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  *(undefined8 *)(pCVar14 + 0x30) = uVar15;
  *(code **)(pCVar14 + 0x38) = _drop_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
  *(char **)(pCVar14 + 0x20) = "TileSetEditor::_drop_data_fw";
  Callable::Callable((Callable *)&local_128,pCVar14);
  Callable::bind<ItemList*>((ItemList *)local_138);
  pCVar14 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar14);
  *(undefined **)(pCVar14 + 0x20) = &_LC20;
  *(TileSetEditor **)(pCVar14 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar14 = &PTR_hash_00118650;
  *(undefined8 *)(pCVar14 + 0x40) = 0;
  uVar15 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  *(undefined8 *)(pCVar14 + 0x30) = uVar15;
  *(code **)(pCVar14 + 0x38) = _can_drop_data_fw;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
  *(char **)(pCVar14 + 0x20) = "TileSetEditor::_can_drop_data_fw";
  Callable::Callable((Callable *)local_148,pCVar14);
  Callable::bind<ItemList*>((ItemList *)local_158);
  local_168 = 0;
  local_160 = 0;
  (*pcVar4)(plVar12,(Callable *)&local_168,local_158,(String *)local_138);
  Callable::~Callable((Callable *)&local_168);
  Callable::~Callable((Callable *)local_158);
  Callable::~Callable((Callable *)local_148);
  Callable::~Callable((Callable *)local_138);
  Callable::~Callable((Callable *)&local_128);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xa30),0,0);
  this_03 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_03,false);
  this_03[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_03 = &PTR__initialize_classv_00117390;
  postinitialize_handler((Object *)this_03);
  BoxContainer::set_alignment(this_03,2);
  Node::add_child(pBVar10,this_03,0,0);
  this_04 = (Button *)operator_new(0xc10,"");
  local_128 = 0;
  Button::Button(this_04,(String *)&local_128);
  postinitialize_handler((Object *)this_04);
  *(Button **)(this + 0xa10) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  Control::set_theme_type_variation(*(StringName **)(this + 0xa10));
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xa10),0));
  plVar12 = *(long **)(this + 0xa10);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<TileSetEditor>
            ((TileSetEditor *)&local_128,(char *)this,
             (_func_void *)"&TileSetEditor::_source_delete_pressed");
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x238,(Ref<Texture2D> *)&local_128,0);
  Callable::~Callable((Callable *)&local_128);
  Node::add_child(this_03,*(undefined8 *)(this + 0xa10),0,0);
  pMVar11 = (MenuButton *)operator_new(0xc68,"");
  local_128 = 0;
  MenuButton::MenuButton(pMVar11,(String *)&local_128);
  postinitialize_handler((Object *)pMVar11);
  *(MenuButton **)(this + 0xa18) = pMVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa18),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xa18));
  uVar15 = MenuButton::get_popup();
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Atlas");
  TTR((String *)local_148,(String *)local_138);
  PopupMenu::add_item(uVar15,(String *)local_148,0xffffffff,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  iVar9 = MenuButton::get_popup();
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"A palette of tiles made from a texture.");
  TTR((String *)local_148,(String *)local_138);
  PopupMenu::set_item_tooltip(iVar9,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  uVar15 = MenuButton::get_popup();
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Scenes Collection");
  TTR((String *)local_148,(String *)local_138);
  PopupMenu::add_item(uVar15,(String *)local_148,0xffffffff,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  iVar9 = MenuButton::get_popup();
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1
            ((String *)local_138,
             "A collection of scenes that can be instantiated and placed as tiles.");
  TTR((String *)local_148,(String *)local_138);
  PopupMenu::set_item_tooltip(iVar9,(String *)0xffffffff);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  plVar12 = (long *)MenuButton::get_popup();
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<TileSetEditor,int>
            ((TileSetEditor *)&local_128,(char *)this,
             (_func_void_int *)"&TileSetEditor::_source_add_id_pressed");
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x240,(Ref<Texture2D> *)&local_128);
  Callable::~Callable((Callable *)&local_128);
  Node::add_child(this_03,*(undefined8 *)(this + 0xa18),0);
  pMVar11 = (MenuButton *)operator_new(0xc68,"");
  local_128 = 0;
  MenuButton::MenuButton(pMVar11,(String *)&local_128);
  postinitialize_handler((Object *)pMVar11);
  *(MenuButton **)(this + 0xa28) = pMVar11;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  Button::set_flat(SUB81(*(undefined8 *)(this + 0xa28),0));
  Control::set_theme_type_variation(*(StringName **)(this + 0xa28));
  uVar15 = MenuButton::get_popup();
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Open Atlas Merging Tool");
  TTR((String *)local_148,(String *)local_138);
  PopupMenu::add_item(uVar15,(String *)local_148,0xffffffff,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  uVar15 = MenuButton::get_popup();
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Manage Tile Proxies");
  TTR((String *)local_148,(String *)local_138);
  PopupMenu::add_item(uVar15,(String *)local_148,0xffffffff,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  plVar12 = (long *)MenuButton::get_popup();
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<TileSetEditor,int>
            ((TileSetEditor *)&local_128,(char *)this,
             (_func_void_int *)"&TileSetEditor::_sources_advanced_menu_id_pressed");
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x240,(Ref<Texture2D> *)&local_128,0);
  Callable::~Callable((Callable *)&local_128);
  Node::add_child(this_03,*(undefined8 *)(this + 0xa28),0,0);
  Node::add_child(this_03,*(undefined8 *)(this + 0xa20),0,0);
  this_05 = (AtlasMergingDialog *)operator_new(0xe20,"");
  AtlasMergingDialog::AtlasMergingDialog(this_05);
  postinitialize_handler((Object *)this_05);
  *(AtlasMergingDialog **)(this + 0xa48) = this_05;
  Node::add_child(this,this_05,0,0);
  this_06 = (TileProxiesManagerDialog *)operator_new(0xe28,"");
  TileProxiesManagerDialog::TileProxiesManagerDialog(this_06);
  postinitialize_handler((Object *)this_06);
  *(TileProxiesManagerDialog **)(this + 0xa50) = this_06;
  Node::add_child(this,this_06,0,0);
  pBVar10 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(pBVar10,true);
  pBVar10[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)pBVar10 = &PTR__initialize_classv_00117708;
  postinitialize_handler((Object *)pBVar10);
  Control::set_h_size_flags(pBVar10,3);
  Control::set_v_size_flags(pBVar10,3);
  Node::add_child(*(undefined8 *)(this + 0x9e0),pBVar10,0,0);
  pLVar16 = (Label *)operator_new(0xad8,"");
  local_128 = 0;
  Label::Label(pLVar16,(String *)&local_128);
  postinitialize_handler((Object *)pLVar16);
  *(Label **)(this + 0x9f8) = pLVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  pSVar3 = *(String **)(this + 0x9f8);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1
            ((String *)local_138,
             "No TileSet source selected. Select or create a TileSet source.\nYou can create a new source by using the Add button on the left or by dropping a tileset texture onto the source list."
            );
  TTR((String *)local_148,(String *)local_138);
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  Control::set_h_size_flags(*(undefined8 *)(this + 0x9f8),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0x9f8),3);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0x9f8),1);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0x9f8),1);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0x9f8),0,0);
  this_07 = (TileSetAtlasSourceEditor *)operator_new(0xc88,"");
  TileSetAtlasSourceEditor::TileSetAtlasSourceEditor(this_07);
  postinitialize_handler((Object *)this_07);
  *(TileSetAtlasSourceEditor **)(this + 0xa00) = this_07;
  Control::set_h_size_flags(this_07,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa00),3);
  plVar12 = *(long **)(this + 0xa00);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<TileSetEditor,int>
            ((TileSetEditor *)&local_128,(char *)this,
             (_func_void_int *)"&TileSetEditor::_update_sources_list");
  StringName::StringName((StringName *)local_138,"source_id_changed",false);
  (*pcVar4)(plVar12,(String *)local_138,(Ref<Texture2D> *)&local_128,0);
  if ((StringName::configured != '\0') && (local_138[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_128);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xa00),0,0);
  CanvasItem::hide();
  this_08 = (TileSetScenesCollectionSourceEditor *)operator_new(0xa78,"");
  TileSetScenesCollectionSourceEditor::TileSetScenesCollectionSourceEditor(this_08);
  postinitialize_handler((Object *)this_08);
  *(TileSetScenesCollectionSourceEditor **)(this + 0xa08) = this_08;
  Control::set_h_size_flags(this_08,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa08),3);
  plVar12 = *(long **)(this + 0xa08);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  create_custom_callable_function_pointer<TileSetEditor,int>
            ((TileSetEditor *)&local_128,(char *)this,
             (_func_void_int *)"&TileSetEditor::_update_sources_list");
  StringName::StringName((StringName *)local_138,"source_id_changed",false);
  (*pcVar4)(plVar12,(String *)local_138,(Ref<Texture2D> *)&local_128,0);
  if ((StringName::configured != '\0') && (local_138[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_128);
  Node::add_child(pBVar10,*(undefined8 *)(this + 0xa08),0,0);
  CanvasItem::hide();
  pIVar13 = (ItemList *)operator_new(0xb80,"");
  ItemList::ItemList(pIVar13);
  postinitialize_handler((Object *)pIVar13);
  *(ItemList **)(this + 0xa60) = pIVar13;
  Node::set_auto_translate_mode(pIVar13,2);
  ItemList::set_max_columns((int)*(undefined8 *)(this + 0xa60));
  ItemList::set_icon_mode(*(undefined8 *)(this + 0xa60),0);
  ItemList::set_fixed_column_width((int)*(undefined8 *)(this + 0xa60));
  ItemList::set_max_text_lines((int)*(undefined8 *)(this + 0xa60));
  pVVar5 = *(Vector2i **)(this + 0xa60);
  local_a8 = (Variant *)_LC136;
  local_88[0] = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_a8);
  ItemList::set_fixed_icon_size(pVVar5);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xa60),3);
  pSVar6 = *(StringName **)(this + 0xa60);
  StringName::StringName((StringName *)&local_128,"ItemListSecondary",false);
  Control::set_theme_type_variation(pSVar6);
  if ((StringName::configured != '\0') && (local_128 != 0)) {
    StringName::unref();
  }
  plVar12 = *(long **)(this + 0xa60);
  pcVar4 = *(code **)(*plVar12 + 0x108);
  pCVar14 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar14);
  *(undefined **)(pCVar14 + 0x20) = &_LC20;
  *(TileSetEditor **)(pCVar14 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar14 = &PTR_hash_00118770;
  *(undefined8 *)(pCVar14 + 0x40) = 0;
  uVar15 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  *(undefined8 *)(pCVar14 + 0x30) = uVar15;
  *(code **)(pCVar14 + 0x38) = _patterns_item_list_gui_input;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
  *(char **)(pCVar14 + 0x20) = "TileSetEditor::_patterns_item_list_gui_input";
  Callable::Callable((Callable *)&local_128,pCVar14);
  (*pcVar4)(plVar12,SceneStringNames::singleton + 0x28,(Ref<Texture2D> *)&local_128,0);
  Callable::~Callable((Callable *)&local_128);
  Node::add_child(this_00,*(undefined8 *)(this + 0xa60),0,0);
  CanvasItem::hide();
  pLVar16 = (Label *)operator_new(0xad8,"");
  local_128 = 0;
  Label::Label(pLVar16,(String *)&local_128);
  postinitialize_handler((Object *)pLVar16);
  *(Label **)(this + 0xa68) = pLVar16;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  pSVar3 = *(String **)(this + 0xa68);
  local_128 = 0;
  String::parse_latin1((String *)&local_128,"");
  local_138[0] = 0;
  String::parse_latin1((String *)local_138,"Add new patterns in the TileMap editing mode.");
  TTR((String *)local_148,(String *)local_138);
  Label::set_text(pSVar3);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_148);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_128);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xa68),1);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa68),8,0,0);
  Node::add_child(*(undefined8 *)(this + 0xa60),*(undefined8 *)(this + 0xa68),0,0);
  this_09 = (PanelContainer *)operator_new(0xa08,"");
  PanelContainer::PanelContainer(this_09);
  postinitialize_handler((Object *)this_09);
  *(PanelContainer **)(this + 0xa78) = this_09;
  Node::add_child(this,this_09,0,0);
  Control::set_anchors_and_offsets_preset(*(undefined8 *)(this + 0xa78),9,0,0);
  CanvasItem::hide();
  lVar2 = EditorNode::singleton + 0x430;
  pCVar14 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar14);
  *(undefined **)(pCVar14 + 0x20) = &_LC20;
  *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar14 = &PTR_hash_00118800;
  *(undefined8 *)(pCVar14 + 0x40) = 0;
  uVar15 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  *(undefined8 *)(pCVar14 + 0x30) = uVar15;
  *(code **)(pCVar14 + 0x38) = _move_tile_set_array_element;
  *(TileSetEditor **)(pCVar14 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
  *(char **)(pCVar14 + 0x20) = "TileSetEditor::_move_tile_set_array_element";
  Callable::Callable((Callable *)&local_128,pCVar14);
  if (TileSetEditor()::{lambda()#1}::operator()()::sname == '\0') {
    iVar9 = __cxa_guard_acquire(&TileSetEditor()::{lambda()#1}::operator()()::sname);
    if (iVar9 != 0) {
      _scs_create((char *)&TileSetEditor()::{lambda()#1}::operator()()::sname,true);
      __cxa_atexit(StringName::~StringName,&TileSetEditor()::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&TileSetEditor()::{lambda()#1}::operator()()::sname);
    }
  }
  EditorData::add_move_array_element_function
            (lVar2,&TileSetEditor()::{lambda()#1}::operator()()::sname,(Ref<Texture2D> *)&local_128)
  ;
  Callable::~Callable((Callable *)&local_128);
  lVar2 = EditorNode::singleton + 0x430;
  pCVar14 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar14);
  *(undefined **)(pCVar14 + 0x20) = &_LC20;
  *(undefined1 (*) [16])(pCVar14 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar14 = &PTR_hash_00118890;
  *(undefined8 *)(pCVar14 + 0x40) = 0;
  uVar15 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar14 + 0x10) = 0;
  *(undefined8 *)(pCVar14 + 0x30) = uVar15;
  *(code **)(pCVar14 + 0x38) = _undo_redo_inspector_callback;
  *(TileSetEditor **)(pCVar14 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar14,(int)pCVar14 + 0x28);
  *(char **)(pCVar14 + 0x20) = "TileSetEditor::_undo_redo_inspector_callback";
  Callable::Callable((Callable *)&local_128,pCVar14);
  EditorData::add_undo_redo_inspector_hook_callback(lVar2,(Ref<Texture2D> *)&local_128);
  Callable::~Callable((Callable *)&local_128);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::_can_drop_data_fw(Vector2 const&, Variant const&, Control*) const */

undefined4 __thiscall
TileSetEditor::_can_drop_data_fw
          (TileSetEditor *this,Vector2 *param_1,Variant *param_2,Control *param_3)

{
  char cVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  long in_FS_OFFSET;
  Variant local_88 [8];
  String local_80 [8];
  long local_78;
  long local_70;
  Variant local_68 [8];
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) == 0) {
    _err_print_error("_can_drop_data_fw","editor/plugins/tiles/tile_set_editor.cpp",0x42,
                     "Condition \"tile_set.is_null()\" is true. Returning: false",0,0);
  }
  else if ((this[0x9c8] == (TileSetEditor)0x0) && (*(Control **)(this + 0xa30) == param_3)) {
    Variant::operator_cast_to_Dictionary(local_88);
    Variant::Variant((Variant *)local_58,"type");
    uVar2 = Dictionary::has(local_88);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if ((char)uVar2 != '\0') {
      Variant::Variant((Variant *)local_58,"type");
      Dictionary::operator[](local_88);
      Variant::operator_cast_to_String(local_68);
      uVar2 = String::operator==((String *)local_68,"files");
      CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((char)uVar2 == '\0') {
        Dictionary::~Dictionary((Dictionary *)local_88);
        goto LAB_001063a2;
      }
      Variant::Variant((Variant *)local_58,"files");
      Dictionary::operator[](local_88);
      Variant::operator_cast_to_Vector(local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (local_60 == 0) {
LAB_0010660a:
        uVar2 = 0;
      }
      else {
        lVar3 = *(long *)(local_60 + -8);
        lVar4 = 0;
        if (lVar3 == 0) goto LAB_0010660a;
        while (lVar4 < lVar3) {
          EditorFileSystem::get_file_type(local_80);
          StringName::StringName((StringName *)&local_70,"Texture2D",false);
          StringName::StringName((StringName *)&local_78,local_80,false);
          cVar1 = ClassDB::is_parent_class((StringName *)&local_78,(StringName *)&local_70);
          if ((StringName::configured != '\0') &&
             (((local_78 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
              (local_70 != 0)))) {
            StringName::unref();
          }
          if (cVar1 == '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
            goto LAB_0010660a;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
          lVar4 = lVar4 + 1;
          if (local_60 == 0) break;
          lVar3 = *(long *)(local_60 + -8);
        }
      }
      CowData<String>::_unref((CowData<String> *)&local_60);
    }
    Dictionary::~Dictionary((Dictionary *)local_88);
    goto LAB_001063a5;
  }
LAB_001063a2:
  uVar2 = 0;
LAB_001063a5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* TileSetEditor::_undo_redo_inspector_callback(Object*, Object*, String const&, Variant const&) */

void TileSetEditor::_undo_redo_inspector_callback
               (Object *param_1,Object *param_2,String *param_3,Variant *param_4)

{
  code *pcVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  Object *pOVar7;
  long lVar8;
  long *plVar9;
  undefined8 uVar10;
  StringName *pSVar11;
  ulong uVar12;
  long lVar13;
  int iVar14;
  long in_FS_OFFSET;
  int local_104;
  long *local_a0;
  undefined8 local_98;
  String local_90 [8];
  undefined8 local_88;
  String local_80 [8];
  Object *local_78;
  long local_70;
  char local_68 [8];
  char *local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((param_2 == (Object *)0x0) ||
     (pOVar7 = (Object *)
               __dynamic_cast(param_2,&Object::typeinfo,&EditorUndoRedoManager::typeinfo,0),
     pOVar7 == (Object *)0x0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_undo_redo_inspector_callback","editor/plugins/tiles/tile_set_editor.cpp",
                       0x2a3,"Parameter \"undo_redo_man\" is null.",0,0);
      return;
    }
  }
  else {
    if ((param_3 != (String *)0x0) &&
       (lVar8 = __dynamic_cast(param_3,&Object::typeinfo,&TileSet::typeinfo,0), lVar8 != 0)) {
      String::split(local_68,SUB81(param_4,0),0x10d885);
      for (iVar14 = 0; iVar4 = TileSet::get_source_count(), iVar14 < iVar4; iVar14 = iVar14 + 1) {
        TileSet::get_source_id((int)lVar8);
        TileSet::get_source((int)(StringName *)&local_78);
        local_a0 = (long *)0x0;
        if (local_78 != (Object *)0x0) {
          plVar9 = (long *)__dynamic_cast(local_78,&Object::typeinfo,&TileSetAtlasSource::typeinfo,0
                                         );
          if (plVar9 == (long *)0x0) {
            cVar3 = RefCounted::unreference();
joined_r0x00106ec7:
            if (cVar3 != '\0') {
              plVar9 = (long *)0x0;
LAB_00106ed0:
              pOVar2 = local_78;
              cVar3 = predelete_handler(local_78);
              if (cVar3 != '\0') {
                (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                Memory::free_static(pOVar2,false);
              }
              if (plVar9 != (long *)0x0) goto LAB_00106857;
            }
          }
          else {
            local_70 = 0;
            local_a0 = plVar9;
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
              local_a0 = (long *)0x0;
              Ref<TileSetAtlasSource>::unref((Ref<TileSetAtlasSource> *)&local_70);
              if (local_78 == (Object *)0x0) goto LAB_001067b2;
              cVar3 = RefCounted::unreference();
              goto joined_r0x00106ec7;
            }
            Ref<TileSetAtlasSource>::unref((Ref<TileSetAtlasSource> *)&local_70);
            if ((local_78 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0'))
            goto LAB_00106ed0;
LAB_00106857:
            for (iVar4 = 0; iVar5 = (**(code **)(*plVar9 + 0x268))(plVar9), iVar4 < iVar5;
                iVar4 = iVar4 + 1) {
              uVar10 = (**(code **)(*plVar9 + 0x270))(plVar9,iVar4);
              for (local_104 = 0; iVar5 = (**(code **)(*plVar9 + 0x280))(plVar9,uVar10),
                  local_104 < iVar5; local_104 = local_104 + 1) {
                uVar6 = (**(code **)(*plVar9 + 0x288))(plVar9,uVar10,local_104);
                pSVar11 = (StringName *)TileSetAtlasSource::get_tile_data(plVar9,uVar10,uVar6);
                if (pSVar11 == (StringName *)0x0) {
                  _err_print_error("_undo_redo_inspector_callback",
                                   "editor/plugins/tiles/tile_set_editor.cpp",0x2b3,
                                   "Parameter \"tile_data\" is null.",0,0);
                  Ref<TileSetAtlasSource>::unref((Ref<TileSetAtlasSource> *)&local_a0);
                  CowData<String>::_unref((CowData<String> *)&local_60);
                  goto LAB_00106804;
                }
                if ((local_60 != (char *)0x0) && (*(long *)(local_60 + -8) == 2)) {
                  cVar3 = String::begins_with(local_60);
                  if (cVar3 != '\0') {
                    if (local_60 == (char *)0x0) {
LAB_00106f30:
                      lVar13 = 0;
                    }
                    else {
                      lVar13 = *(long *)(local_60 + -8);
                      if (0 < lVar13) {
                        String::trim_prefix((char *)&local_70);
                        cVar3 = String::is_valid_int();
                        if (cVar3 == '\0') {
LAB_00106eb0:
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                          goto LAB_00106935;
                        }
                        if (local_60 == (char *)0x0) {
LAB_00107006:
                          lVar13 = 0;
                        }
                        else {
                          lVar13 = *(long *)(local_60 + -8);
                          if (1 < lVar13) {
                            cVar3 = String::operator==((String *)(local_60 + 8),"mode");
                            if (cVar3 != '\0') {
                              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                              StringName::StringName((StringName *)&local_78,"terrain_set",false);
                              Object::get((StringName *)local_58,(bool *)pSVar11);
                              StringName::StringName((StringName *)&local_70,"terrain_set",false);
                              EditorUndoRedoManager::add_undo_property
                                        (pOVar7,pSVar11,(Variant *)&local_70);
                              if ((StringName::configured != '\0') && (local_70 != 0)) {
                                StringName::unref();
                              }
                              if (Variant::needs_deinit[local_58[0]] != '\0') {
                                Variant::_clear_internal();
                              }
                              if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
                                StringName::unref();
                              }
                              StringName::StringName((StringName *)&local_78,"terrain",false);
                              Object::get((StringName *)local_58,(bool *)pSVar11);
                              StringName::StringName((StringName *)&local_70,"terrain",false);
                              EditorUndoRedoManager::add_undo_property
                                        (pOVar7,pSVar11,(Variant *)&local_70);
                              if ((StringName::configured != '\0') && (local_70 != 0)) {
                                StringName::unref();
                              }
                              if (Variant::needs_deinit[local_58[0]] != '\0') {
                                Variant::_clear_internal();
                              }
                              if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
                                StringName::unref();
                              }
                              uVar12 = 0;
                              do {
                                while (cVar3 = TileData::is_valid_terrain_peering_bit
                                                         (pSVar11,uVar12 & 0xffffffff),
                                      cVar3 == '\0') {
                                  uVar12 = uVar12 + 1;
                                  if (uVar12 == 0x10) goto LAB_001068b8;
                                }
                                local_88 = 0;
                                String::parse_latin1
                                          ((String *)&local_88,
                                           (char *)(&TileSet::CELL_NEIGHBOR_ENUM_TO_TEXT)[uVar12]);
                                operator+((char *)local_80,(String *)"terrains_peering_bit/");
                                StringName::StringName((StringName *)&local_78,local_80,false);
                                Object::get((StringName *)local_58,(bool *)pSVar11);
                                local_98 = 0;
                                String::parse_latin1
                                          ((String *)&local_98,
                                           (char *)(&TileSet::CELL_NEIGHBOR_ENUM_TO_TEXT)[uVar12]);
                                operator+((char *)local_90,(String *)"terrains_peering_bit/");
                                StringName::StringName((StringName *)&local_70,local_90,false);
                                EditorUndoRedoManager::add_undo_property
                                          (pOVar7,pSVar11,(Variant *)&local_70);
                                if ((StringName::configured != '\0') && (local_70 != 0)) {
                                  StringName::unref();
                                }
                                CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
                                CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                                if (Variant::needs_deinit[local_58[0]] != '\0') {
                                  Variant::_clear_internal();
                                }
                                if ((StringName::configured != '\0') && (local_78 != (Object *)0x0))
                                {
                                  StringName::unref();
                                }
                                uVar12 = uVar12 + 1;
                                CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
                                CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                              } while (uVar12 != 0x10);
                              goto LAB_001068b8;
                            }
                            goto LAB_00106eb0;
                          }
                        }
LAB_00107009:
                        lVar8 = 1;
                        goto LAB_00106f50;
                      }
                    }
LAB_00106f33:
                    lVar8 = 0;
LAB_00106f50:
                    _err_print_index_error
                              ("get","./core/templates/cowdata.h",0xdb,lVar8,lVar13,"p_index",
                               "size()","",false,true);
                    _err_flush_stdout();
                    /* WARNING: Does not return */
                    pcVar1 = (code *)invalidInstructionException();
                    (*pcVar1)();
                  }
LAB_00106935:
                  if (((local_60 != (char *)0x0) && (*(long *)(local_60 + -8) == 2)) &&
                     (cVar3 = String::begins_with(local_60), cVar3 != '\0')) {
                    if (local_60 == (char *)0x0) goto LAB_00106f30;
                    lVar13 = *(long *)(local_60 + -8);
                    if (lVar13 < 1) goto LAB_00106f33;
                    String::trim_prefix((char *)&local_70);
                    cVar3 = String::is_valid_int();
                    if (cVar3 != '\0') {
                      if (local_60 == (char *)0x0) goto LAB_00107006;
                      lVar13 = *(long *)(local_60 + -8);
                      if (lVar13 < 2) goto LAB_00107009;
                      cVar3 = String::operator==((String *)(local_60 + 8),"type");
                      if (cVar3 != '\0') {
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                        if (local_60 == (char *)0x0) goto LAB_00106f30;
                        lVar13 = *(long *)(local_60 + -8);
                        if (0 < lVar13) {
                          String::trim_prefix((char *)&local_70);
                          String::is_valid_int();
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                          local_88 = 0;
                          String::parse_latin1((String *)&local_88,"custom_data_%d");
                          vformat<int>(local_80,(int)(String *)&local_88);
                          StringName::StringName((StringName *)&local_78,local_80,false);
                          Object::get((StringName *)local_58,(bool *)pSVar11);
                          local_98 = 0;
                          String::parse_latin1((String *)&local_98,"custom_data_%d");
                          vformat<int>(local_90,(int)(String *)&local_98);
                          StringName::StringName((StringName *)&local_70,local_90,false);
                          EditorUndoRedoManager::add_undo_property
                                    (pOVar7,pSVar11,(Variant *)&local_70);
                          if ((StringName::configured != '\0') && (local_70 != 0)) {
                            StringName::unref();
                          }
                          CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
                          if (Variant::needs_deinit[local_58[0]] != '\0') {
                            Variant::_clear_internal();
                          }
                          if ((StringName::configured != '\0') && (local_78 != (Object *)0x0)) {
                            StringName::unref();
                          }
                          CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
                          goto LAB_001068b8;
                        }
                        goto LAB_00106f33;
                      }
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
                  }
                }
LAB_001068b8:
              }
            }
          }
        }
LAB_001067b2:
        Ref<TileSetAtlasSource>::unref((Ref<TileSetAtlasSource> *)&local_a0);
      }
      CowData<String>::_unref((CowData<String> *)&local_60);
    }
LAB_00106804:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::_move_tile_set_array_element(Object*, Object*, String const&, int, int) */

void __thiscall
TileSetEditor::_move_tile_set_array_element
          (TileSetEditor *this,Object *param_1,Object *param_2,String *param_3,int param_4,
          int param_5)

{
  long lVar1;
  Variant *pVVar2;
  code *pcVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  EditorUndoRedoManager *this_00;
  List *pLVar11;
  long *plVar12;
  undefined8 uVar13;
  StringName *pSVar14;
  ulong uVar15;
  int iVar16;
  ulong uVar17;
  int iVar18;
  int iVar19;
  ulong uVar20;
  char *pcVar21;
  Variant *pVVar22;
  undefined4 *puVar23;
  int iVar24;
  long in_FS_OFFSET;
  StringName *local_1d0;
  StringName *local_1b8;
  int local_1a4;
  int local_170;
  int local_16c;
  undefined8 *local_140;
  long *local_138;
  undefined8 local_130;
  String local_128 [8];
  long local_120;
  long local_118;
  long local_110;
  char local_108 [8];
  char *local_100;
  Object *local_f8;
  undefined8 local_f0;
  StringName local_e8 [8];
  undefined4 local_e0;
  undefined8 local_d8;
  undefined4 local_d0;
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
  if ((param_1 == (Object *)0x0) ||
     (this_00 = (EditorUndoRedoManager *)
                __dynamic_cast(param_1,&Object::typeinfo,&EditorUndoRedoManager::typeinfo,0),
     this_00 == (EditorUndoRedoManager *)0x0)) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_move_tile_set_array_element","editor/plugins/tiles/tile_set_editor.cpp",
                       0x1d1,"Parameter \"undo_redo_man\" is null.",0,0);
      return;
    }
    goto LAB_00108ec5;
  }
  if ((param_2 != (Object *)0x0) &&
     (pLVar11 = (List *)__dynamic_cast(param_2,&Object::typeinfo,&TileSet::typeinfo,0),
     pLVar11 != (List *)0x0)) {
    local_f8 = (Object *)0x0;
    if (*(long *)param_3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)param_3);
    }
    String::split(local_108,SUB81((CowData<char32_t> *)&local_f8,0),0x10d885);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
    cVar5 = String::operator==(param_3,"occlusion_layer_");
    iVar10 = (int)pLVar11;
    if (cVar5 == '\0') {
      cVar5 = String::operator==(param_3,"physics_layer_");
      if (cVar5 != '\0') {
        local_1a4 = TileSet::get_physics_layers_count();
        goto LAB_00107171;
      }
      cVar5 = String::operator==(param_3,"terrain_set_");
      if (cVar5 != '\0') {
        local_1a4 = TileSet::get_terrain_sets_count();
        goto LAB_00107171;
      }
      if (((local_100 == (char *)0x0) || (*(long *)(local_100 + -8) < 2)) ||
         (cVar5 = String::begins_with(local_100), cVar5 == '\0')) {
LAB_0010734d:
        cVar5 = String::operator==(param_3,"navigation_layer_");
        if (cVar5 == '\0') {
          cVar5 = String::operator==(param_3,"custom_data_layer_");
          if (cVar5 == '\0') {
            _err_print_error("_move_tile_set_array_element",
                             "editor/plugins/tiles/tile_set_editor.cpp",0x1eb,
                             "Method/function failed.","Invalid array prefix for TileSet.",0,0);
LAB_001073d4:
            CowData<String>::_unref((CowData<String> *)&local_100);
            goto LAB_001073e1;
          }
          local_1a4 = TileSet::get_custom_data_layers_count();
        }
        else {
          local_1a4 = TileSet::get_navigation_layers_count();
        }
        goto LAB_00107171;
      }
      if (local_100 == (char *)0x0) goto LAB_00108ab3;
      uVar17 = *(ulong *)(local_100 + -8);
      if ((long)uVar17 < 1) goto LAB_00108ab6;
      String::trim_prefix((char *)&local_f8);
      cVar5 = String::is_valid_int();
      if (cVar5 == '\0') {
LAB_00108a1c:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        goto LAB_0010734d;
      }
      if (local_100 == (char *)0x0) {
LAB_00108d74:
        uVar17 = 0;
      }
      else {
        uVar17 = *(ulong *)(local_100 + -8);
        if (1 < (long)uVar17) {
          cVar5 = String::operator==((String *)(local_100 + 8),"terrain_");
          if (cVar5 != '\0') {
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            if (local_100 == (char *)0x0) goto LAB_00108ab3;
            uVar17 = *(ulong *)(local_100 + -8);
            if (0 < (long)uVar17) {
              String::trim_prefix((char *)&local_f8);
              String::to_int();
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
              local_1a4 = TileSet::get_terrains_count(iVar10);
              goto LAB_00107171;
            }
            goto LAB_00108ab6;
          }
          goto LAB_00108a1c;
        }
      }
LAB_00108d77:
      uVar15 = 1;
      goto LAB_001081fb;
    }
    local_1a4 = TileSet::get_occlusion_layers_count();
LAB_00107171:
    local_16c = param_5;
    iVar16 = param_5;
    if (param_4 < 0) {
      if (param_5 < 0) {
        cVar5 = String::operator==(param_3,"occlusion_layer_");
        if (cVar5 == '\0') {
          cVar5 = String::operator==(param_3,"physics_layer_");
          if (cVar5 == '\0') {
            local_16c = 0;
            local_1a4 = 0;
            goto LAB_00107e85;
          }
          iVar16 = TileSet::get_physics_layers_count();
          local_16c = 0;
          local_1a4 = 0;
LAB_00108aa5:
          pcVar21 = "remove_physics_layer";
          goto LAB_00107443;
        }
        iVar16 = TileSet::get_occlusion_layers_count();
        local_1a4 = 0;
        local_16c = 0;
      }
      else {
        cVar5 = String::operator==(param_3,"occlusion_layer_");
        if (cVar5 == '\0') {
          cVar5 = String::operator==(param_3,"physics_layer_");
          if (cVar5 != '\0') goto LAB_00108aa5;
          goto LAB_00107e85;
        }
      }
      pcVar21 = "remove_occlusion_layer";
      goto LAB_00107443;
    }
    iVar6 = local_1a4;
    local_16c = param_4;
    if (-1 < param_5) {
      if (param_5 < param_4) {
        local_16c = param_5;
      }
      iVar7 = param_4;
      if (param_4 < param_5) {
        iVar7 = param_5;
      }
      iVar6 = iVar7 + 1;
      if (local_1a4 <= iVar7 + 1) {
        iVar6 = local_1a4;
      }
    }
    local_1a4 = iVar6;
    cVar5 = String::operator==(param_3,"occlusion_layer_");
    if ((cVar5 == '\0') && (cVar5 = String::operator==(param_3,"physics_layer_"), cVar5 == '\0')) {
LAB_00107e85:
      cVar5 = String::operator==(param_3,"terrain_set_");
      if (cVar5 != '\0') {
        if (param_4 < 0) {
          if (param_5 < 0) {
            iVar16 = TileSet::get_terrain_sets_count();
          }
          pcVar21 = "remove_terrain_set";
          goto LAB_00107443;
        }
        goto LAB_001071c6;
      }
      if (((local_100 == (char *)0x0) || (*(long *)(local_100 + -8) < 2)) ||
         (cVar5 = String::begins_with(local_100), cVar5 == '\0')) {
LAB_00107eb9:
        cVar5 = String::operator==(param_3,"navigation_layer_");
        if (cVar5 == '\0') {
          cVar5 = String::operator==(param_3,"custom_data_layer_");
          if ((param_4 < 0) && (cVar5 != '\0')) {
            if (param_5 < 0) {
              iVar16 = TileSet::get_custom_data_layers_count();
            }
            pcVar21 = "remove_custom_data_layer";
            goto LAB_00107443;
          }
        }
        else if (param_4 < 0) {
          if (param_5 < 0) {
            iVar16 = TileSet::get_navigation_layers_count();
          }
          pcVar21 = "remove_navigation_layer";
LAB_00107443:
          StringName::StringName((StringName *)&local_f8,pcVar21,false);
          EditorUndoRedoManager::add_undo_method<int>
                    (this_00,(Object *)pLVar11,(StringName *)&local_f8,iVar16);
LAB_0010745f:
          if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
            StringName::unref();
          }
        }
        goto LAB_001071c6;
      }
      if (local_100 != (char *)0x0) {
        uVar17 = *(ulong *)(local_100 + -8);
        if (0 < (long)uVar17) {
          String::trim_prefix((char *)&local_f8);
          cVar5 = String::is_valid_int();
          if (cVar5 == '\0') {
LAB_00108b66:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
            goto LAB_00107eb9;
          }
          if (local_100 == (char *)0x0) goto LAB_00108d74;
          uVar17 = *(ulong *)(local_100 + -8);
          if ((long)uVar17 < 2) goto LAB_00108d77;
          cVar5 = String::operator==((String *)(local_100 + 8),"terrain_");
          if (cVar5 == '\0') goto LAB_00108b66;
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          if (local_100 == (char *)0x0) goto LAB_00108ab3;
          uVar17 = *(ulong *)(local_100 + -8);
          if ((long)uVar17 < 1) goto LAB_00108ab6;
          String::trim_prefix((char *)&local_f8);
          iVar16 = String::to_int();
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          if (-1 < param_4) goto LAB_001071c6;
          iVar6 = param_5;
          if (param_5 < 0) {
            iVar6 = TileSet::get_terrains_count(iVar10);
          }
          StringName::StringName((StringName *)&local_f8,"remove_terrain",false);
          Variant::Variant((Variant *)local_a8,iVar16);
          Variant::Variant(local_90,iVar6);
          local_70 = (undefined1  [16])0x0;
          local_78 = 0;
          pVVar22 = (Variant *)&local_60;
          local_c8 = (Variant *)local_a8;
          pVStack_c0 = local_90;
          EditorUndoRedoManager::add_undo_methodp
                    ((Object *)this_00,(StringName *)pLVar11,(Variant **)&local_f8,(int)&local_c8);
          do {
            pVVar2 = pVVar22 + -0x18;
            pVVar22 = pVVar22 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar22 != (Variant *)local_a8);
          goto LAB_0010745f;
        }
        goto LAB_00108ab6;
      }
LAB_00108ab3:
      uVar17 = 0;
LAB_00108ab6:
      uVar15 = 0;
LAB_001081fb:
      _err_print_index_error
                ("get","./core/templates/cowdata.h",0xdb,uVar15,uVar17,"p_index","size()","",false,
                 true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
LAB_001071c6:
    local_140 = (undefined8 *)0x0;
    Object::get_property_list(pLVar11,SUB81((List<PropertyInfo,DefaultAllocator> *)&local_140,0));
    if ((local_140 != (undefined8 *)0x0) &&
       (puVar23 = (undefined4 *)*local_140, puVar23 != (undefined4 *)0x0)) {
      do {
        local_f0 = 0;
        local_f8 = (Object *)CONCAT44(local_f8._4_4_,*puVar23);
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_f0,(CowData *)(puVar23 + 2));
        StringName::StringName(local_e8,(StringName *)(puVar23 + 4));
        local_e0 = puVar23[6];
        local_d8 = 0;
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_d8,(CowData *)(puVar23 + 8));
        local_d0 = puVar23[10];
        cVar5 = String::begins_with((String *)&local_f0);
        if (cVar5 != '\0') {
          String::trim_prefix((String *)&local_120);
          if (local_120 != 0) {
            uVar17 = *(ulong *)(local_120 + -8);
            if ((int)uVar17 != 0) {
              uVar20 = 0;
              uVar15 = 0;
              while (((int)uVar15 < (int)uVar17 + -1 && (uVar15 != uVar17))) {
                if ((long)uVar17 <= (long)uVar15) goto LAB_001081fb;
                lVar1 = uVar15 * 4;
                uVar15 = uVar15 + 1;
                if (9 < *(int *)(local_120 + lVar1) - 0x30U) break;
                uVar20 = uVar15 & 0xffffffff;
              }
              if ((int)uVar20 != 0) {
                String::left((int)(CowData<char32_t> *)&local_110);
                iVar16 = String::to_int();
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
                if ((local_16c <= iVar16) && (iVar16 < local_1a4)) {
                  StringName::StringName((StringName *)&local_118,(String *)&local_f0,false);
                  Object::get((StringName *)local_a8,(bool *)pLVar11);
                  StringName::StringName((StringName *)&local_110,(String *)&local_f0,false);
                  EditorUndoRedoManager::add_undo_property
                            ((Object *)this_00,(StringName *)pLVar11,(Variant *)&local_110);
                  if ((StringName::configured != '\0') && (local_110 != 0)) {
                    StringName::unref();
                  }
                  if (Variant::needs_deinit[local_a8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if ((StringName::configured != '\0') && (local_118 != 0)) {
                    StringName::unref();
                  }
                }
              }
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
        }
        PropertyInfo::~PropertyInfo((PropertyInfo *)&local_f8);
        puVar23 = *(undefined4 **)(puVar23 + 0xc);
      } while (puVar23 != (undefined4 *)0x0);
    }
    for (iVar16 = 0; iVar6 = TileSet::get_source_count(), iVar16 < iVar6; iVar16 = iVar16 + 1) {
      TileSet::get_source_id(iVar10);
      TileSet::get_source((int)(CowData<char32_t> *)&local_f8);
      local_138 = (long *)0x0;
      if (local_f8 != (Object *)0x0) {
        plVar12 = (long *)__dynamic_cast(local_f8,&Object::typeinfo,&TileSetAtlasSource::typeinfo);
        if (plVar12 == (long *)0x0) {
LAB_00107525:
          cVar5 = RefCounted::unreference();
          pOVar4 = local_f8;
          plVar12 = local_138;
          if ((cVar5 != '\0') &&
             (cVar5 = predelete_handler(local_f8), plVar12 = local_138, cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
        else {
          local_138 = plVar12;
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_138 = (long *)0x0;
          }
          plVar12 = local_138;
          if (local_f8 != (Object *)0x0) goto LAB_00107525;
        }
        iVar6 = 0;
        if (plVar12 != (long *)0x0) {
LAB_0010759e:
          iVar7 = (**(code **)(*plVar12 + 0x268))(plVar12);
          if (iVar6 < iVar7) {
            uVar13 = (**(code **)(*plVar12 + 0x270))(plVar12,iVar6);
            local_170 = 0;
LAB_001075f0:
            iVar7 = (**(code **)(*plVar12 + 0x280))(plVar12,uVar13);
            if (iVar7 <= local_170) goto LAB_001087c0;
            uVar8 = (**(code **)(*plVar12 + 0x288))(plVar12,uVar13,local_170);
            pSVar14 = (StringName *)TileSetAtlasSource::get_tile_data(plVar12,uVar13,uVar8);
            if (pSVar14 == (StringName *)0x0) {
              _err_print_error("_move_tile_set_array_element",
                               "editor/plugins/tiles/tile_set_editor.cpp",0x23c,
                               "Parameter \"tile_data\" is null.",0,0);
              Ref<TileSetAtlasSource>::unref((Ref<TileSetAtlasSource> *)&local_138);
              List<PropertyInfo,DefaultAllocator>::~List
                        ((List<PropertyInfo,DefaultAllocator> *)&local_140);
              goto LAB_001073d4;
            }
            cVar5 = String::operator==(param_3,"occlusion_layer_");
            if (cVar5 == '\0') {
              cVar5 = String::operator==(param_3,"physics_layer_");
              if (cVar5 != '\0') {
                if (local_1a4 <= local_16c) goto LAB_001076dc;
                iVar7 = local_16c;
                do {
                  local_120 = 0;
                  String::parse_latin1((String *)&local_120,"physics_layer_%d/polygons_count");
                  iVar18 = (int)(String *)&local_120;
                  vformat<int>((String *)&local_118,iVar18);
                  StringName::StringName((StringName *)&local_110,(String *)&local_118,false);
                  Object::get((StringName *)local_a8,(bool *)pSVar14);
                  local_130 = 0;
                  String::parse_latin1((String *)&local_130,"physics_layer_%d/polygons_count");
                  iVar19 = (int)(String *)&local_130;
                  vformat<int>(local_128,iVar19);
                  StringName::StringName((StringName *)&local_f8,local_128,false);
                  EditorUndoRedoManager::add_undo_property
                            ((Object *)this_00,pSVar14,(Variant *)&local_f8);
                  if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                  if (Variant::needs_deinit[local_a8[0]] != '\0') {
                    Variant::_clear_internal();
                  }
                  if ((StringName::configured != '\0') && (local_110 != 0)) {
                    StringName::unref();
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                  for (iVar24 = 0; iVar9 = TileData::get_collision_polygons_count((int)pSVar14),
                      iVar24 < iVar9; iVar24 = iVar24 + 1) {
                    local_120 = 0;
                    local_f8 = (Object *)0x10ce70;
                    local_f0 = 0x22;
                    String::parse_latin1((StrRange *)&local_120);
                    vformat<int,int>((String *)&local_118,iVar18,iVar7);
                    StringName::StringName((StringName *)&local_110,(String *)&local_118,false);
                    Object::get((StringName *)local_a8,(bool *)pSVar14);
                    local_f8 = (Object *)0x10ce70;
                    local_130 = 0;
                    local_f0 = 0x22;
                    String::parse_latin1((StrRange *)&local_130);
                    vformat<int,int>(local_128,iVar19,iVar7);
                    StringName::StringName((StringName *)&local_f8,local_128,false);
                    EditorUndoRedoManager::add_undo_property
                              ((Object *)this_00,pSVar14,(Variant *)&local_f8);
                    if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                    if (Variant::needs_deinit[local_a8[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_110 != 0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                    local_f8 = (Object *)0x10ce98;
                    local_120 = 0;
                    local_f0 = 0x23;
                    String::parse_latin1((StrRange *)&local_120);
                    vformat<int,int>((String *)&local_118,iVar18,iVar7);
                    StringName::StringName((StringName *)&local_110,(String *)&local_118,false);
                    Object::get((StringName *)local_a8,(bool *)pSVar14);
                    local_f8 = (Object *)0x10ce98;
                    local_130 = 0;
                    local_f0 = 0x23;
                    String::parse_latin1((StrRange *)&local_130);
                    vformat<int,int>(local_128,iVar19,iVar7);
                    StringName::StringName((StringName *)&local_f8,local_128,false);
                    EditorUndoRedoManager::add_undo_property
                              ((Object *)this_00,pSVar14,(Variant *)&local_f8);
                    if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                    if (Variant::needs_deinit[local_a8[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_110 != 0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                    local_f8 = (Object *)0x10cec0;
                    local_120 = 0;
                    local_f0 = 0x2a;
                    String::parse_latin1((StrRange *)&local_120);
                    vformat<int,int>((String *)&local_118,iVar18,iVar7);
                    StringName::StringName((StringName *)&local_110,(String *)&local_118,false);
                    Object::get((StringName *)local_a8,(bool *)pSVar14);
                    local_f8 = (Object *)0x10cec0;
                    local_130 = 0;
                    local_f0 = 0x2a;
                    String::parse_latin1((StrRange *)&local_130);
                    vformat<int,int>(local_128,iVar19,iVar7);
                    StringName::StringName((StringName *)&local_f8,local_128,false);
                    EditorUndoRedoManager::add_undo_property
                              ((Object *)this_00,pSVar14,(Variant *)&local_f8);
                    if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                    if (Variant::needs_deinit[local_a8[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_110 != 0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 != local_1a4);
                local_170 = local_170 + 1;
                goto LAB_001075f0;
              }
              cVar5 = String::operator==(param_3,"terrain_set_");
              if (cVar5 == '\0') {
                if (((local_100 != (char *)0x0) && (1 < *(long *)(local_100 + -8))) &&
                   (cVar5 = String::begins_with(local_100), cVar5 != '\0')) {
                  if (local_100 == (char *)0x0) goto LAB_00108ab3;
                  uVar17 = *(ulong *)(local_100 + -8);
                  if ((long)uVar17 < 1) goto LAB_00108ab6;
                  String::trim_prefix((char *)&local_f8);
                  cVar5 = String::is_valid_int();
                  if (cVar5 != '\0') {
                    if (local_100 == (char *)0x0) goto LAB_00108d74;
                    uVar17 = *(ulong *)(local_100 + -8);
                    if ((long)uVar17 < 2) goto LAB_00108d77;
                    cVar5 = String::operator==((String *)(local_100 + 8),"terrain_");
                    if (cVar5 != '\0') {
                      uVar17 = 0;
                      CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                      do {
                        while (cVar5 = TileData::is_valid_terrain_peering_bit
                                                 (pSVar14,uVar17 & 0xffffffff), cVar5 != '\0') {
                          local_120 = 0;
                          String::parse_latin1
                                    ((String *)&local_120,
                                     (char *)(&TileSet::CELL_NEIGHBOR_ENUM_TO_TEXT)[uVar17]);
                          operator+((char *)&local_118,(String *)"terrains_peering_bit/");
                          StringName::StringName
                                    ((StringName *)&local_110,(String *)&local_118,false);
                          Object::get((StringName *)local_a8,(bool *)pSVar14);
                          local_130 = 0;
                          String::parse_latin1
                                    ((String *)&local_130,
                                     (char *)(&TileSet::CELL_NEIGHBOR_ENUM_TO_TEXT)[uVar17]);
                          operator+((char *)local_128,(String *)"terrains_peering_bit/");
                          StringName::StringName((StringName *)&local_f8,local_128,false);
                          EditorUndoRedoManager::add_undo_property
                                    ((Object *)this_00,pSVar14,(Variant *)&local_f8);
                          if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                            StringName::unref();
                          }
                          CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                          if (Variant::needs_deinit[local_a8[0]] != '\0') {
                            Variant::_clear_internal();
                          }
                          if ((StringName::configured != '\0') && (local_110 != 0)) {
                            StringName::unref();
                          }
                          uVar17 = uVar17 + 1;
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                          CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                          if (uVar17 == 0x10) goto LAB_00108441;
                        }
                        uVar17 = uVar17 + 1;
                      } while (uVar17 != 0x10);
LAB_00108441:
                      local_170 = local_170 + 1;
                      goto LAB_001075f0;
                    }
                  }
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
                }
                cVar5 = String::operator==(param_3,"navigation_layer_");
                if (cVar5 == '\0') {
                  cVar5 = String::operator==(param_3,"custom_data_layer_");
                  if ((cVar5 == '\0') || (local_1a4 <= local_16c)) goto LAB_001076dc;
                  iVar7 = local_16c;
                  do {
                    local_1b8 = (StringName *)local_a8;
                    local_1d0 = (StringName *)&local_110;
                    local_120 = 0;
                    String::parse_latin1((String *)&local_120,"custom_data_%d");
                    vformat<int>((String *)&local_118,(int)(String *)&local_120);
                    StringName::StringName(local_1d0,(String *)&local_118,false);
                    Object::get(local_1b8,(bool *)pSVar14);
                    local_130 = 0;
                    String::parse_latin1((String *)&local_130,"custom_data_%d");
                    vformat<int>(local_128,(int)(String *)&local_130);
                    StringName::StringName((StringName *)&local_f8,local_128,false);
                    EditorUndoRedoManager::add_undo_property
                              ((Object *)this_00,pSVar14,(Variant *)&local_f8);
                    if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                    if (Variant::needs_deinit[local_a8[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_110 != 0)) {
                      StringName::unref();
                    }
                    iVar7 = iVar7 + 1;
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                  } while (iVar7 != local_1a4);
LAB_0010807d:
                  local_170 = local_170 + 1;
                  goto LAB_001075f0;
                }
                if (local_16c < local_1a4) {
                  iVar7 = local_16c;
                  do {
                    local_120 = 0;
                    String::parse_latin1((String *)&local_120,"navigation_layer_%d/polygon");
                    vformat<int>((String *)&local_118,(int)(String *)&local_120);
                    StringName::StringName((StringName *)&local_110,(String *)&local_118,false);
                    Object::get((StringName *)local_a8,(bool *)pSVar14);
                    local_130 = 0;
                    String::parse_latin1((String *)&local_130,"navigation_layer_%d/polygon");
                    vformat<int>(local_128,(int)(String *)&local_130);
                    StringName::StringName((StringName *)&local_f8,local_128,false);
                    EditorUndoRedoManager::add_undo_property
                              ((Object *)this_00,pSVar14,(Variant *)&local_f8);
                    if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                    if (Variant::needs_deinit[local_a8[0]] != '\0') {
                      Variant::_clear_internal();
                    }
                    if ((StringName::configured != '\0') && (local_110 != 0)) {
                      StringName::unref();
                    }
                    iVar7 = iVar7 + 1;
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                    CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                  } while (iVar7 != local_1a4);
                  goto LAB_0010807d;
                }
              }
              else {
                StringName::StringName((StringName *)&local_110,"terrain_set",false);
                Object::get((StringName *)local_a8,(bool *)pSVar14);
                StringName::StringName((StringName *)&local_f8,"terrain_set",false);
                EditorUndoRedoManager::add_undo_property
                          ((Object *)this_00,pSVar14,(Variant *)&local_f8);
                if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[local_a8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_110 != 0)) {
                  StringName::unref();
                }
                iVar7 = local_16c;
                if (local_16c < local_1a4) {
                  do {
                    uVar17 = 0;
                    do {
                      while (cVar5 = TileData::is_valid_terrain_peering_bit
                                               (pSVar14,uVar17 & 0xffffffff), cVar5 != '\0') {
                        local_120 = 0;
                        String::parse_latin1
                                  ((String *)&local_120,
                                   (char *)(&TileSet::CELL_NEIGHBOR_ENUM_TO_TEXT)[uVar17]);
                        operator+((char *)&local_118,(String *)"terrains_peering_bit/");
                        StringName::StringName((StringName *)&local_110,(String *)&local_118,false);
                        Object::get((StringName *)local_a8,(bool *)pSVar14);
                        local_130 = 0;
                        String::parse_latin1
                                  ((String *)&local_130,
                                   (char *)(&TileSet::CELL_NEIGHBOR_ENUM_TO_TEXT)[uVar17]);
                        operator+((char *)local_128,(String *)"terrains_peering_bit/");
                        StringName::StringName((StringName *)&local_f8,local_128,false);
                        EditorUndoRedoManager::add_undo_property
                                  ((Object *)this_00,pSVar14,(Variant *)&local_f8);
                        if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                          StringName::unref();
                        }
                        CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                        if (Variant::needs_deinit[local_a8[0]] != '\0') {
                          Variant::_clear_internal();
                        }
                        if ((StringName::configured != '\0') && (local_110 != 0)) {
                          StringName::unref();
                        }
                        uVar17 = uVar17 + 1;
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                        CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                        if (uVar17 == 0x10) goto LAB_0010875e;
                      }
                      uVar17 = uVar17 + 1;
                    } while (uVar17 != 0x10);
LAB_0010875e:
                    iVar7 = iVar7 + 1;
                  } while (iVar7 != local_1a4);
                }
              }
            }
            else if (local_16c < local_1a4) {
              iVar7 = local_16c;
              do {
                local_120 = 0;
                String::parse_latin1((String *)&local_120,"occlusion_layer_%d/polygon");
                vformat<int>((String *)&local_118,(int)(String *)&local_120);
                StringName::StringName((StringName *)&local_110,(String *)&local_118,false);
                Object::get((StringName *)local_a8,(bool *)pSVar14);
                local_130 = 0;
                String::parse_latin1((String *)&local_130,"occlusion_layer_%d/polygon");
                vformat<int>(local_128,(int)(String *)&local_130);
                StringName::StringName((StringName *)&local_f8,local_128,false);
                EditorUndoRedoManager::add_undo_property
                          ((Object *)this_00,pSVar14,(Variant *)&local_f8);
                if ((StringName::configured != '\0') && (local_f8 != (Object *)0x0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)local_128);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                if (Variant::needs_deinit[local_a8[0]] != '\0') {
                  Variant::_clear_internal();
                }
                if ((StringName::configured != '\0') && (local_110 != 0)) {
                  StringName::unref();
                }
                iVar7 = iVar7 + 1;
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
              } while (iVar7 != local_1a4);
              local_170 = local_170 + 1;
              goto LAB_001075f0;
            }
LAB_001076dc:
            local_170 = local_170 + 1;
            goto LAB_001075f0;
          }
        }
      }
      Ref<TileSetAtlasSource>::unref((Ref<TileSetAtlasSource> *)&local_138);
    }
    cVar5 = String::operator==(param_3,"occlusion_layer_");
    if (cVar5 != '\0') {
      if (-1 < param_4) {
        pcVar21 = "remove_occlusion_layer";
        if (-1 < param_5) {
          pcVar21 = "move_occlusion_layer";
          goto LAB_00108cd6;
        }
        goto LAB_00108dea;
      }
      StringName::StringName((StringName *)&local_f8,"add_occlusion_layer",false);
      param_4 = param_5;
      goto LAB_00108df6;
    }
    cVar5 = String::operator==(param_3,"physics_layer_");
    if (cVar5 == '\0') {
      cVar5 = String::operator==(param_3,"terrain_set_");
      if (cVar5 != '\0') {
        if (param_4 < 0) {
          StringName::StringName((StringName *)&local_f8,"add_terrain_set",false);
          param_4 = param_5;
          goto LAB_00108df6;
        }
        pcVar21 = "remove_terrain_set";
        if (param_5 < 0) goto LAB_00108dea;
        pcVar21 = "move_terrain_set";
        goto LAB_00108cd6;
      }
      if (((local_100 != (char *)0x0) && (1 < *(long *)(local_100 + -8))) &&
         (cVar5 = String::begins_with(local_100), cVar5 != '\0')) {
        if (local_100 == (char *)0x0) goto LAB_00108ab3;
        uVar17 = *(ulong *)(local_100 + -8);
        if ((long)uVar17 < 1) goto LAB_00108ab6;
        String::trim_prefix((char *)&local_f8);
        cVar5 = String::is_valid_int();
        if (cVar5 == '\0') {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
          goto LAB_00108f6b;
        }
        if (local_100 == (char *)0x0) goto LAB_00108d74;
        uVar17 = *(ulong *)(local_100 + -8);
        if ((long)uVar17 < 2) goto LAB_00108d77;
        cVar5 = String::operator==((String *)(local_100 + 8),"terrain_");
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        if (cVar5 == '\0') goto LAB_00108f6b;
        if (local_100 == (char *)0x0) goto LAB_00108ab3;
        uVar17 = *(ulong *)(local_100 + -8);
        if ((long)uVar17 < 1) goto LAB_00108ab6;
        String::trim_prefix((char *)&local_f8);
        iVar10 = String::to_int();
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f8);
        if (param_4 < 0) {
          StringName::StringName((StringName *)&local_f8,"add_terrain",false);
          goto LAB_00108ce5;
        }
        if (param_5 < 0) {
          StringName::StringName((StringName *)&local_f8,"remove_terrain",false);
          param_5 = param_4;
          goto LAB_00108ce5;
        }
        StringName::StringName((StringName *)&local_f8,"move_terrain",false);
        Variant::Variant((Variant *)local_a8,iVar10);
        Variant::Variant(local_90,param_4);
        Variant::Variant((Variant *)&local_78,param_5);
        local_58 = (undefined1  [16])0x0;
        pVVar22 = local_48;
        local_60 = 0;
        local_c8 = (Variant *)local_a8;
        pVStack_c0 = local_90;
        local_b8 = (Variant *)&local_78;
        EditorUndoRedoManager::add_do_methodp
                  ((Object *)this_00,(StringName *)pLVar11,(Variant **)&local_f8,(int)&local_c8);
        do {
          pVVar2 = pVVar22 + -0x18;
          pVVar22 = pVVar22 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar2] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar22 != (Variant *)local_a8);
        goto LAB_00108cf7;
      }
LAB_00108f6b:
      cVar5 = String::operator==(param_3,"navigation_layer_");
      if (cVar5 != '\0') {
        if (param_4 < 0) {
          StringName::StringName((StringName *)&local_f8,"add_navigation_layer",false);
          param_4 = param_5;
        }
        else {
          pcVar21 = "remove_navigation_layer";
          if (-1 < param_5) {
            pcVar21 = "move_navigation_layer";
            goto LAB_00108cd6;
          }
LAB_00108dea:
          StringName::StringName((StringName *)&local_f8,pcVar21,false);
        }
LAB_00108df6:
        EditorUndoRedoManager::add_do_method<int>
                  (this_00,(Object *)pLVar11,(StringName *)&local_f8,param_4);
        if (StringName::configured == '\0') goto LAB_00108d13;
        goto LAB_00108d00;
      }
      cVar5 = String::operator==(param_3,"custom_data_layer_");
      if (cVar5 != '\0') {
        if (-1 < param_4) {
          pcVar21 = "move_custom_data_layer";
          if (param_5 < 0) {
            pcVar21 = "remove_custom_data_layer";
            goto LAB_00108dea;
          }
          goto LAB_00108cd6;
        }
        StringName::StringName((StringName *)&local_f8,"add_custom_data_layer",false);
        param_4 = param_5;
        goto LAB_00108df6;
      }
    }
    else {
      if (param_4 < 0) {
        StringName::StringName((StringName *)&local_f8,"add_physics_layer",false);
        param_4 = param_5;
        goto LAB_00108df6;
      }
      pcVar21 = "remove_physics_layer";
      if (param_5 < 0) goto LAB_00108dea;
      pcVar21 = "move_physics_layer";
LAB_00108cd6:
      StringName::StringName((StringName *)&local_f8,pcVar21,false);
      iVar10 = param_4;
LAB_00108ce5:
      EditorUndoRedoManager::add_do_method<int,int>
                (this_00,(Object *)pLVar11,(StringName *)&local_f8,iVar10,param_5);
LAB_00108cf7:
      if (StringName::configured != '\0') {
LAB_00108d00:
        if (local_f8 != (Object *)0x0) {
          StringName::unref();
        }
      }
    }
LAB_00108d13:
    List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)&local_140);
    CowData<String>::_unref((CowData<String> *)&local_100);
  }
LAB_001073e1:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_00108ec5:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_001087c0:
  iVar6 = iVar6 + 1;
  goto LAB_0010759e;
}



/* CowData<Ref<TileSetAtlasSource> >::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<Ref<TileSetAtlasSource>>::_copy_on_write(CowData<Ref<TileSetAtlasSource>> *this)

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



/* TileSetEditor::_load_texture_files(Vector<String> const&) */

void __thiscall TileSetEditor::_load_texture_files(TileSetEditor *this,Vector *param_1)

{
  Variant *pVVar1;
  long lVar2;
  undefined8 *puVar3;
  StringName *pSVar4;
  String *pSVar5;
  char cVar6;
  int iVar7;
  Object *pOVar8;
  Resource *this_00;
  undefined8 uVar9;
  Object *pOVar10;
  long lVar11;
  long lVar12;
  Variant *pVVar13;
  long in_FS_OFFSET;
  long local_168;
  Object *local_160;
  int local_14c;
  CowData<Ref<TileSetAtlasSource>> *local_138;
  Object *local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  String local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0 [2];
  long local_c0;
  Object *local_b8;
  undefined8 local_b0;
  Variant *local_a8;
  Variant *pVStack_a0;
  int local_88 [6];
  undefined8 local_70;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_168 = *(long *)(param_1 + 8);
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  local_14c = (int)TileSet::INVALID_SOURCE;
  if ((local_168 != 0) && (lVar2 = local_168 + *(long *)(local_168 + -8) * 8, local_168 != lVar2)) {
    do {
      local_d0[0] = 0;
      local_b8 = (Object *)&_LC20;
      local_b0 = 0;
      String::parse_latin1((StrRange *)local_d0);
      ResourceLoader::load((String *)&local_b8,local_168,(StrRange *)local_d0,1,0);
      local_f8 = (Object *)0x0;
      if (local_b8 == (Object *)0x0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
LAB_00109b8a:
        pSVar5 = EditorNode::singleton;
        local_b8 = (Object *)0x0;
        String::parse_latin1((String *)&local_b8,"");
        local_d0[0] = 0;
        String::parse_latin1((String *)local_d0,"Warning!");
        TTR((String *)&local_d8,(String *)local_d0);
        local_e8 = 0;
        String::parse_latin1((String *)&local_e8,"");
        local_f0 = 0;
        String::parse_latin1((String *)&local_f0,"Invalid texture selected.");
        TTR(local_e0,(String *)&local_f0);
        EditorNode::show_warning(pSVar5,local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_f0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        Ref<Texture2D>::unref((Ref<Texture2D> *)&local_f8);
      }
      else {
        pOVar8 = (Object *)__dynamic_cast(local_b8,&Object::typeinfo,&Texture2D::typeinfo,0);
        if (pOVar8 == (Object *)0x0) {
LAB_00109474:
          cVar6 = RefCounted::unreference();
          pOVar8 = local_b8;
          if (cVar6 == '\0') goto LAB_00109484;
          cVar6 = predelete_handler(local_b8);
          local_160 = local_f8;
          if (cVar6 != '\0') {
            (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
            Memory::free_static(pOVar8,false);
          }
        }
        else {
          local_f8 = pOVar8;
          cVar6 = RefCounted::reference();
          if (cVar6 == '\0') {
            local_f8 = (Object *)0x0;
          }
          if (local_b8 != (Object *)0x0) goto LAB_00109474;
LAB_00109484:
          local_160 = local_f8;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
        if (local_160 == (Object *)0x0) goto LAB_00109b8a;
        local_14c = TileSet::get_next_source_id();
        this_00 = (Resource *)operator_new(0x2f8,"");
        Resource::Resource(this_00);
        *(undefined8 *)(this_00 + 0x240) = 0;
        *(code **)this_00 = TileSet::get_tile_size;
        uVar9 = _LC200;
        this_00[0x248] = (Resource)0x1;
        *(undefined8 *)(this_00 + 0x268) = uVar9;
        uVar9 = _LC84;
        *(undefined8 *)(this_00 + 0x250) = 0;
        *(undefined8 *)(this_00 + 0x298) = uVar9;
        *(undefined8 *)(this_00 + 0x2d8) = uVar9;
        *(undefined8 *)(this_00 + 600) = 0;
        *(undefined8 *)(this_00 + 0x260) = 0;
        *(undefined8 *)(this_00 + 0x2a8) = 0;
        this_00[0x2e0] = (Resource)0x1;
        *(undefined8 *)(this_00 + 0x2e8) = 0;
        this_00[0x2f0] = (Resource)0x0;
        *(undefined1 (*) [16])(this_00 + 0x278) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x288) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x2b8) = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x2c8) = (undefined1  [16])0x0;
        postinitialize_handler((Object *)this_00);
        cVar6 = RefCounted::init_ref();
        if (cVar6 == '\0') {
          this_00 = (Resource *)0x0;
        }
        local_b8 = local_160;
        cVar6 = RefCounted::reference();
        if (cVar6 == '\0') {
          local_b8 = (Object *)0x0;
        }
        TileSetAtlasSource::set_texture(this_00);
        if (((local_b8 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar8 = local_b8, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_b8), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
        uVar9 = TileSet::get_tile_size();
        TileSetAtlasSource::set_texture_region_size(this_00,uVar9);
        pOVar10 = (Object *)EditorUndoRedoManager::get_singleton();
        local_d0[0] = 0;
        local_b8 = (Object *)&_LC20;
        local_b0 = 0;
        String::parse_latin1((StrRange *)local_d0);
        local_b8 = (Object *)0x10db50;
        local_d8 = 0;
        local_b0 = 0x16;
        String::parse_latin1((StrRange *)&local_d8);
        TTR((String *)&local_b8,(String *)&local_d8);
        EditorUndoRedoManager::create_action(pOVar10,(String *)&local_b8,0,0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_d0);
        cVar6 = RefCounted::reference();
        pOVar8 = (Object *)0x0;
        if (cVar6 != '\0') {
          pOVar8 = (Object *)this_00;
        }
        StringName::StringName((StringName *)&local_b8,"add_source",false);
        pSVar4 = *(StringName **)(this + 0x9d0);
        Variant::Variant((Variant *)local_88,pOVar8);
        Variant::Variant((Variant *)&local_70,local_14c);
        pVVar13 = (Variant *)local_40;
        local_58 = 0;
        local_50 = (undefined1  [16])0x0;
        local_a8 = (Variant *)local_88;
        pVStack_a0 = (Variant *)&local_70;
        EditorUndoRedoManager::add_do_methodp(pOVar10,pSVar4,(Variant **)&local_b8,(int)&local_a8);
        do {
          pVVar1 = pVVar13 + -0x18;
          pVVar13 = pVVar13 + -0x18;
          if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
            Variant::_clear_internal();
          }
        } while (pVVar13 != (Variant *)local_88);
        if ((StringName::configured != '\0') && (local_b8 != (Object *)0x0)) {
          StringName::unref();
        }
        if (((pOVar8 != (Object *)0x0) && (cVar6 = RefCounted::unreference(), cVar6 != '\0')) &&
           (cVar6 = predelete_handler(pOVar8), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
        }
        StringName::StringName((StringName *)&local_b8,"remove_source",false);
        pSVar4 = *(StringName **)(this + 0x9d0);
        Variant::Variant((Variant *)local_88,local_14c);
        local_70 = 0;
        local_68 = (undefined1  [16])0x0;
        local_a8 = (Variant *)local_88;
        EditorUndoRedoManager::add_undo_methodp(pOVar10,pSVar4,(Variant **)&local_b8,(int)&local_a8)
        ;
        if (Variant::needs_deinit[(int)local_70] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_88[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured == '\0') || (local_b8 == (Object *)0x0)) {
          EditorUndoRedoManager::commit_action(SUB81(pOVar10,0));
        }
        else {
          StringName::unref();
          EditorUndoRedoManager::commit_action(SUB81(pOVar10,0));
        }
        cVar6 = RefCounted::reference();
        pOVar8 = (Object *)0x0;
        if (cVar6 != '\0') {
          pOVar8 = (Object *)this_00;
        }
        if (local_c0 == 0) {
          lVar11 = 1;
        }
        else {
          lVar11 = *(long *)(local_c0 + -8) + 1;
        }
        iVar7 = CowData<Ref<TileSetAtlasSource>>::resize<false>
                          ((CowData<Ref<TileSetAtlasSource>> *)&local_c0,lVar11);
        if (iVar7 == 0) {
          if (local_c0 != 0) {
            lVar11 = *(long *)(local_c0 + -8);
            lVar12 = lVar11 + -1;
            if (lVar12 < 0) goto LAB_00109d5a;
            CowData<Ref<TileSetAtlasSource>>::_copy_on_write
                      ((CowData<Ref<TileSetAtlasSource>> *)&local_c0);
            puVar3 = (undefined8 *)(local_c0 + lVar12 * 8);
            pOVar10 = (Object *)*puVar3;
            if (pOVar10 == pOVar8) goto LAB_00109a0d;
            *puVar3 = pOVar8;
            if (pOVar8 == (Object *)0x0) {
              if (((pOVar10 == (Object *)0x0) || (cVar6 = RefCounted::unreference(), cVar6 == '\0'))
                 || (cVar6 = predelete_handler(pOVar10), cVar6 == '\0')) goto LAB_00109923;
LAB_00109af9:
              (**(code **)(*(long *)pOVar10 + 0x140))(pOVar10);
              Memory::free_static(pOVar10,false);
              goto joined_r0x00109b13;
            }
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
              *puVar3 = 0;
              if (pOVar10 != (Object *)0x0) {
                cVar6 = RefCounted::unreference();
                goto joined_r0x00109caa;
              }
            }
            else if (pOVar10 != (Object *)0x0) {
              cVar6 = RefCounted::unreference();
joined_r0x00109caa:
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar10), cVar6 != '\0'))
              goto LAB_00109af9;
            }
            cVar6 = RefCounted::unreference();
            goto joined_r0x0010991d;
          }
          lVar12 = -1;
          lVar11 = 0;
LAB_00109d5a:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar12,lVar11,"p_index","size()","",
                     false,false);
joined_r0x00109b13:
          if (pOVar8 != (Object *)0x0) goto LAB_00109a16;
LAB_00109923:
          cVar6 = RefCounted::unreference();
          if (cVar6 == '\0') goto LAB_00109933;
LAB_00109a5d:
          cVar6 = predelete_handler((Object *)this_00);
          if (cVar6 == '\0') goto LAB_00109933;
          (**(code **)(*(long *)this_00 + 0x140))(this_00);
          Memory::free_static(this_00,false);
          cVar6 = RefCounted::unreference();
        }
        else {
          _err_print_error("push_back","./core/templates/vector.h",0x142,
                           "Condition \"err\" is true. Returning: true",0,0);
LAB_00109a0d:
          if (pOVar8 == (Object *)0x0) goto LAB_00109923;
LAB_00109a16:
          cVar6 = RefCounted::unreference();
joined_r0x0010991d:
          if ((cVar6 == '\0') || (cVar6 = predelete_handler(pOVar8), cVar6 == '\0'))
          goto LAB_00109923;
          (**(code **)(*(long *)pOVar8 + 0x140))(pOVar8);
          Memory::free_static(pOVar8,false);
          cVar6 = RefCounted::unreference();
          if (cVar6 != '\0') goto LAB_00109a5d;
LAB_00109933:
          cVar6 = RefCounted::unreference();
        }
        if ((cVar6 != '\0') && (cVar6 = predelete_handler(local_160), cVar6 != '\0')) {
          (**(code **)(*(long *)local_160 + 0x140))(local_160);
          Memory::free_static(local_160,false);
        }
      }
      local_168 = local_168 + 8;
    } while (lVar2 != local_168);
    if (local_c0 != 0) {
      TileSetAtlasSourceEditor::init_new_atlases(*(Vector **)(this + 0xa00));
    }
  }
  local_138 = (CowData<Ref<TileSetAtlasSource>> *)&local_c0;
  if (*(long *)(this + 0x9d0) != 0) {
    _update_sources_list(this,local_14c);
  }
  CowData<Ref<TileSetAtlasSource>>::_unref(local_138);
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TileSetEditor::_drop_data_fw(Vector2 const&, Variant const&, Control*) */

void __thiscall
TileSetEditor::_drop_data_fw(TileSetEditor *this,Vector2 *param_1,Variant *param_2,Control *param_3)

{
  char cVar1;
  long in_FS_OFFSET;
  Variant local_60 [8];
  Variant local_58 [8];
  CowData<String> local_50 [8];
  int local_48 [6];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0x9d0) == 0) {
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("_drop_data_fw","editor/plugins/tiles/tile_set_editor.cpp",0x33,
                       "Condition \"tile_set.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    cVar1 = _can_drop_data_fw(this,param_1,param_2,param_3);
    if ((cVar1 != '\0') && (param_3 == *(Control **)(this + 0xa30))) {
      Variant::operator_cast_to_Dictionary(local_60);
      Variant::Variant((Variant *)local_48,"files");
      Dictionary::operator[](local_60);
      Variant::operator_cast_to_Vector(local_58);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
        Variant::_clear_internal();
      }
      _load_texture_files(this,(Vector *)local_58);
      CowData<String>::_unref(local_50);
      Dictionary::~Dictionary((Dictionary *)local_60);
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
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
  return (uint)CONCAT71(0x118e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118d,(undefined4 *)param_1 == &get_class_ptr_static()::ptr);
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



/* TileSetEditor::is_class_ptr(void*) const */

uint __thiscall TileSetEditor::is_class_ptr(TileSetEditor *this,void *param_1)

{
  return (uint)CONCAT71(0x118d,(undefined4 *)param_1 == &Control::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118d,(undefined4 *)param_1 == &CanvasItem::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118d,(undefined4 *)param_1 == &Node::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* TileSourceInspectorPlugin::is_class_ptr(void*) const */

uint __thiscall
TileSourceInspectorPlugin::is_class_ptr(TileSourceInspectorPlugin *this,void *param_1)

{
  return (uint)CONCAT71(0x118c,(undefined4 *)param_1 ==
                               &EditorInspectorPlugin::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118b,(undefined4 *)param_1 == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118d,(undefined4 *)param_1 == &RefCounted::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x118e,(undefined4 *)param_1 == &Object::get_class_ptr_static()::ptr);
}



/* TileSourceInspectorPlugin::_getv(StringName const&, Variant&) const */

undefined8 TileSourceInspectorPlugin::_getv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TileSourceInspectorPlugin::_setv(StringName const&, Variant const&) */

undefined8 TileSourceInspectorPlugin::_setv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TileSourceInspectorPlugin::_validate_propertyv(PropertyInfo&) const */

void TileSourceInspectorPlugin::_validate_propertyv(PropertyInfo *param_1)

{
  return;
}



/* TileSourceInspectorPlugin::_property_can_revertv(StringName const&) const */

undefined8 TileSourceInspectorPlugin::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* TileSourceInspectorPlugin::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TileSourceInspectorPlugin::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* TileSourceInspectorPlugin::_notificationv(int, bool) */

void TileSourceInspectorPlugin::_notificationv(int param_1,bool param_2)

{
  return;
}



/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*> *this)

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



/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointerC<TileSetEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void, Object*,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*> *this)

{
  return;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TilesEditorUtils,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Ref<TileMapPattern>, Ref<Texture2D>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void, Object*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*>::get_argument_count
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<Control, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<Control,void>::get_argument_count
          (CallableCustomMethodPointer<Control,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void>::get_argument_count
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, Variant
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>::
get_argument_count(CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, int,
   int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>::
get_argument_count(CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 5;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&>::get_argument_count
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&> *this,bool *param_1
          )

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointerC<TileSetEditor, bool, Vector2 const&, Variant const&,
   Control*>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>::
get_argument_count(CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void, Object*, Object*>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*>::get_argument_count
          (CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*> *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,int>::get_argument_count
          (CallableCustomMethodPointer<TilesEditorUtils,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TileSetEditor, void, int>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,int>::get_argument_count
          (CallableCustomMethodPointer<TileSetEditor,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<TileSetEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void>::get_argument_count
          (CallableCustomMethodPointer<TileSetEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Ref<TileMapPattern>, Ref<Texture2D>
   >::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>>::
get_argument_count(CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Vector<String>
   const&>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&>::get_argument_count
          (CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&> *this,bool *param_1)

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



/* CallableCustomMethodPointer<TileSetEditor, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Ref<TileMapPattern>, Ref<Texture2D>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TilesEditorUtils,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void, Object*,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointerC<TileSetEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void> *this)

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



/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*> *this)

{
  operator_delete(this,0x48);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117230;
  Object::~Object((Object *)this);
  return;
}



/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
  *(undefined ***)this = &PTR__initialize_classv_00117230;
  Object::~Object((Object *)this);
  operator_delete(this,0x180);
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



/* TileSetEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 TileSetEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

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
  
  if ((code *)PTR__property_can_revert_0011e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* TileSetEditor::_property_can_revertv(StringName const&) const */

undefined8 TileSetEditor::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_0011e008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::is_class_ptr(void*) const */

uint HSplitContainer::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x118d,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118b,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void, Object*, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*>::get_object
          (CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*> *this)

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
      goto LAB_0010a80d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a80d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a80d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void, Object*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*>::get_object
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*> *this)

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
      goto LAB_0010a90d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010a90d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010a90d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Vector<String> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&>::get_object
          (CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&> *this)

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
      goto LAB_0010aa0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010aa0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010aa0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, Variant
   const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>::
get_object(CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>
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
      goto LAB_0010ab0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ab0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ab0d:
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
      goto LAB_0010ac0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ac0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ac0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, int,
   int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>::get_object
          (CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>
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
      goto LAB_0010ad0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ad0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ad0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Ref<InputEvent> const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&>::get_object
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&> *this)

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
      goto LAB_0010ae0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010ae0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010ae0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void>::get_object
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void> *this)

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
      goto LAB_0010af0d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010af0d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010af0d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>::get_object
          (CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0010b00d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b00d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b00d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetEditor, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,int>::get_object
          (CallableCustomMethodPointer<TileSetEditor,void,int> *this)

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
      goto LAB_0010b10d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b10d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b10d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointerC<TileSetEditor, bool, Vector2 const&, Variant const&,
   Control*>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>::get_object
          (CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>
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
      goto LAB_0010b20d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b20d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b20d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void>::get_object
          (CallableCustomMethodPointer<TileSetEditor,void> *this)

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
      goto LAB_0010b30d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b30d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b30d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Ref<TileMapPattern>, Ref<Texture2D>
   >::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>>::get_object
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>> *this)

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
      goto LAB_0010b40d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b40d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b40d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<TilesEditorUtils, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,int>::get_object
          (CallableCustomMethodPointer<TilesEditorUtils,void,int> *this)

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
      goto LAB_0010b50d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b50d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b50d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* TileSetEditor::_validate_propertyv(PropertyInfo&) const */

void TileSetEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011e010 == CanvasItem::_validate_property) {
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
  if ((code *)PTR__validate_property_0011e018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
  return;
}



/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */

void HSplitContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011e020 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
  return;
}



/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */

void HBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_0011e018 == Control::_validate_property) {
    return;
  }
  BoxContainer::_validate_property(param_1);
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
    uVar1 = (uint)CONCAT71(0x118d,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x118d,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x118d,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    if ((code *)PTR__set_0011e028 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* TileSetEditor::_setv(StringName const&, Variant const&) */

undefined8 TileSetEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_0011e028 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011e028 != CanvasItem::_set) {
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
    if ((code *)PTR__set_0011e028 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010baa8) */
/* TileSetEditor::_getv(StringName const&, Variant&) const */

undefined8 TileSetEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011e030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bb18) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011e030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bb88) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011e030 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bbf8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_0011e030 != CanvasItem::_get) &&
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
      if (StringName::configured == '\0') goto LAB_0010bc60;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bc60:
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
      if (StringName::configured == '\0') goto LAB_0010bcc0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bcc0:
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
      if (StringName::configured == '\0') goto LAB_0010bd20;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bd20:
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
      if (StringName::configured == '\0') goto LAB_0010bd90;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010bd90:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HSplitContainer::_notificationv(int, bool) */

void __thiscall HSplitContainer::_notificationv(HSplitContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011e038 != Container::_notification) {
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
  if ((code *)PTR__notification_0011e038 == Container::_notification) {
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
    if ((code *)PTR__notification_0011e040 != Container::_notification) {
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
  if ((code *)PTR__notification_0011e040 == Container::_notification) {
    return;
  }
  BoxContainer::_notification(iVar1);
  return;
}



/* VBoxContainer::_notificationv(int, bool) */

void __thiscall VBoxContainer::_notificationv(VBoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_0011e040 != Container::_notification) {
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
  if ((code *)PTR__notification_0011e040 == Container::_notification) {
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
LAB_0010c1c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c1c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_0010c22e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_0010c22e:
  return &_get_class_namev()::_class_name_static;
}



/* TileSetEditor::_get_class_namev() const */

undefined8 * TileSetEditor::_get_class_namev(void)

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
LAB_0010c2b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c2b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TileSetEditor");
      goto LAB_0010c31e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TileSetEditor");
LAB_0010c31e:
  return &_get_class_namev()::_class_name_static;
}



/* TileSourceInspectorPlugin::_get_class_namev() const */

undefined8 * TileSourceInspectorPlugin::_get_class_namev(void)

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
LAB_0010c3a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c3a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"TileSourceInspectorPlugin");
      goto LAB_0010c40e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"TileSourceInspectorPlugin");
LAB_0010c40e:
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
LAB_0010c483:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c483;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
      goto LAB_0010c4ee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"RefCounted");
LAB_0010c4ee:
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
LAB_0010c573:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c573;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010c5de;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010c5de:
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
LAB_0010c663:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c663;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010c6ce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010c6ce:
  return &_get_class_namev()::_class_name_static;
}



/* TileSetEditor::~TileSetEditor() */

void __thiscall TileSetEditor::~TileSetEditor(TileSetEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117df8;
  if (*(void **)(this + 0xa98) != (void *)0x0) {
    if (*(int *)(this + 0xa90) != 0) {
      *(undefined4 *)(this + 0xa90) = 0;
    }
    Memory::free_static(*(void **)(this + 0xa98),false);
  }
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x9d0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9d0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
        Control::~Control((Control *)this);
        return;
      }
    }
  }
  Control::~Control((Control *)this);
  return;
}



/* TileSetEditor::~TileSetEditor() */

void __thiscall TileSetEditor::~TileSetEditor(TileSetEditor *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_00117df8;
  if (*(void **)(this + 0xa98) != (void *)0x0) {
    if (*(int *)(this + 0xa90) != 0) {
      *(undefined4 *)(this + 0xa90) = 0;
    }
    Memory::free_static(*(void **)(this + 0xa98),false);
  }
  if (*(long *)(this + 0xa38) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xa38);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0x9d0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0x9d0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  Control::~Control((Control *)this);
  operator_delete(this,0xaa0);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined **)this = &Object::typeinfo;
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
      if (StringName::configured == '\0') goto LAB_0010d1df;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d1df:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(undefined **)this = &Object::typeinfo;
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
      if (StringName::configured == '\0') goto LAB_0010d38f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010d38f:
  Control::~Control((Control *)this);
  operator_delete(this,0xa70);
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



/* void EditorUndoRedoManager::add_undo_method<int>(Object*, StringName const&, int) */

void __thiscall
EditorUndoRedoManager::add_undo_method<int>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,int param_3)

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



/* void EditorUndoRedoManager::add_do_method<int>(Object*, StringName const&, int) */

void __thiscall
EditorUndoRedoManager::add_do_method<int>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,int param_3)

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



/* void EditorUndoRedoManager::add_do_method<int, int>(Object*, StringName const&, int, int) */

void __thiscall
EditorUndoRedoManager::add_do_method<int,int>
          (EditorUndoRedoManager *this,Object *param_1,StringName *param_2,int param_3,int param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
  long in_FS_OFFSET;
  Variant *local_a8;
  Variant *pVStack_a0;
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,param_4);
  pVVar2 = (Variant *)local_40;
  local_50 = (undefined1  [16])0x0;
  local_58 = 0;
  local_a8 = local_88;
  pVStack_a0 = local_70;
  EditorUndoRedoManager::add_do_methodp
            ((Object *)this,(StringName *)param_1,(Variant **)param_2,(int)&local_a8);
  do {
    pVVar1 = pVVar2 + -0x18;
    pVVar2 = pVVar2 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar2 != local_88);
  if (local_40[0] == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Callable create_custom_callable_function_pointer<TileSetEditor>(TileSetEditor*, char const*, void
   (TileSetEditor::*)()) */

TileSetEditor *
create_custom_callable_function_pointer<TileSetEditor>
          (TileSetEditor *param_1,char *param_2,_func_void *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC20;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_00118410;
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



/* Callable create_custom_callable_function_pointer<TileSetEditor, int>(TileSetEditor*, char const*,
   void (TileSetEditor::*)(int)) */

TileSetEditor *
create_custom_callable_function_pointer<TileSetEditor,int>
          (TileSetEditor *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC20;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_001184a0;
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



/* Callable Callable::bind<ItemList*>(ItemList*) const */

ItemList * Callable::bind<ItemList*>(ItemList *param_1)

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



/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

{
  PropertyInfo *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)this;
  if (plVar3 == (long *)0x0) {
    return;
  }
  do {
    this_00 = (PropertyInfo *)*plVar3;
    if (this_00 == (PropertyInfo *)0x0) {
      if ((int)plVar3[2] != 0) {
        _err_print_error("~List","./core/templates/list.h",0x316,
                         "Condition \"_data->size_cache\" is true.",0,0);
        return;
      }
      break;
    }
    if (*(long **)(this_00 + 0x40) == plVar3) {
      lVar2 = *(long *)(this_00 + 0x30);
      lVar1 = *(long *)(this_00 + 0x38);
      *plVar3 = lVar2;
      if (this_00 == (PropertyInfo *)plVar3[1]) {
        plVar3[1] = lVar1;
      }
      if (lVar1 != 0) {
        *(long *)(lVar1 + 0x30) = lVar2;
        lVar2 = *(long *)(this_00 + 0x30);
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x38) = lVar1;
      }
      PropertyInfo::~PropertyInfo(this_00);
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



/* TileSourceInspectorPlugin::_initialize_classv() */

void TileSourceInspectorPlugin::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (EditorInspectorPlugin::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Object");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"RefCounted");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        if ((code *)PTR__bind_methods_0011e058 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"RefCounted");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"EditorInspectorPlugin");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0011e048 != RefCounted::_bind_methods) {
        EditorInspectorPlugin::_bind_methods();
      }
      if ((code *)PTR__bind_compatibility_methods_0011e050 != Object::_bind_compatibility_methods) {
        EditorInspectorPlugin::_bind_compatibility_methods();
      }
      EditorInspectorPlugin::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"EditorInspectorPlugin");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"TileSourceInspectorPlugin");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010e718) */
/* String vformat<int>(String const&, int const) */

String * vformat<int>(String *param_1,int param_2)

{
  char cVar1;
  Variant *this;
  int in_EDX;
  undefined4 in_register_00000034;
  int iVar2;
  long in_FS_OFFSET;
  Array local_c0 [8];
  undefined8 local_b8 [8];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant((Variant *)local_78,in_EDX);
  local_60 = 0;
  local_58 = (undefined1  [16])0x0;
  Array::Array(local_c0);
  iVar2 = (int)local_c0;
  Array::resize(iVar2);
  this = (Variant *)Array::operator[](iVar2);
  Variant::operator=(this,(Variant *)local_78);
  String::sprintf((Array *)local_b8,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_b8[0];
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



/* WARNING: Removing unreachable block (ram,0x0010ea00) */
/* String vformat<int, int>(String const&, int const, int const) */

String * vformat<int,int>(String *param_1,int param_2,int param_3)

{
  Variant *pVVar1;
  Variant *pVVar2;
  int in_ECX;
  undefined4 in_register_00000034;
  int iVar3;
  long in_FS_OFFSET;
  Array local_d0 [8];
  undefined8 local_c8 [8];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  Variant::Variant(local_88,param_3);
  Variant::Variant(local_70,in_ECX);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,(bool *)CONCAT44(in_register_00000034,param_2));
  *(undefined8 *)param_1 = local_c8[0];
  local_c8[0] = 0;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
  pVVar2 = (Variant *)local_40;
  Array::~Array(local_d0);
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* TileSetEditor::get_class() const */

void TileSetEditor::get_class(void)

{
  long lVar1;
  long lVar2;
  char *__s;
  long in_RSI;
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"TileSetEditor");
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
        String::parse_latin1((StrRange *)in_RDI);
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
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"HSplitContainer");
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
        String::parse_latin1((StrRange *)in_RDI);
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



/* TileSourceInspectorPlugin::get_class() const */

void TileSourceInspectorPlugin::get_class(void)

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
  String *in_RDI;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(in_RSI + 8) == 0) {
    *(undefined8 *)in_RDI = 0;
    String::parse_latin1(in_RDI,"RefCounted");
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
        String::parse_latin1((StrRange *)in_RDI);
      }
    }
  }
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
LAB_0010f157:
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
      goto LAB_0010f157;
    }
    lVar2 = *(long *)(lVar2 + 8);
  } while( true );
}



/* Node::is_class(String const&) const */

undefined8 __thiscall Node::is_class(Node *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010f26b;
  }
  cVar4 = String::operator==(param_1,"Node");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010f26b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::is_class(String const&) const */

undefined8 __thiscall RefCounted::is_class(RefCounted *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010f3bb;
  }
  cVar4 = String::operator==(param_1,"RefCounted");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Object::is_class((Object *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010f3bb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPlugin::is_class(String const&) const */

undefined8 __thiscall EditorInspectorPlugin::is_class(EditorInspectorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010f50b;
  }
  cVar4 = String::operator==(param_1,"EditorInspectorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = RefCounted::is_class((RefCounted *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010f50b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSourceInspectorPlugin::is_class(String const&) const */

undefined8 __thiscall
TileSourceInspectorPlugin::is_class(TileSourceInspectorPlugin *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010f65b;
  }
  cVar4 = String::operator==(param_1,"TileSourceInspectorPlugin");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = EditorInspectorPlugin::is_class((EditorInspectorPlugin *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010f65b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */

void __thiscall
PropertyInfo::PropertyInfo
          (PropertyInfo *this,undefined4 param_2,CowData *param_3,undefined4 param_4,
          CowData *param_5,undefined4 param_6,StringName *param_7)

{
  long lVar1;
  long in_FS_OFFSET;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined8 *)(this + 8) = 0;
  lVar1 = *(long *)param_3;
  *(undefined4 *)this = param_2;
  if (lVar1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),param_3);
  }
  *(undefined4 *)(this + 0x18) = param_4;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x20),param_5);
  *(undefined4 *)(this + 0x28) = param_6;
  if (*(int *)(this + 0x18) == 0x11) {
    StringName::StringName((StringName *)&local_38,(String *)(this + 0x20),false);
    if (*(long *)(this + 0x10) == local_38) {
      if ((StringName::configured != '\0') && (local_38 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(long *)(this + 0x10) = local_38;
    }
    if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
  }
  else if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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
      goto LAB_0010fa9f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010fa9f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fa78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010fb50;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010fa9f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010fb50:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void>::call
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void> *this,Variant **param_1,
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
      goto LAB_0010fcaf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010fcaf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fc88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010fd60;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010fcaf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010fd60:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TileSetEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void>::call
          (CallableCustomMethodPointer<TileSetEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010febf;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010febf;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fe98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010ff70;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010febf:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010ff70:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TilesEditorUtils, void, Object*, Object*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*>::call
          (CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *pVVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  Object *pOVar8;
  uint uVar9;
  ulong *puVar10;
  code *UNRECOVERED_JUMPTABLE;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
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
    puVar10 = (ulong *)((ulong)uVar9 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar10 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00110178;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar10[1] == 0) goto LAB_00110178;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if ((uint)param_2 < 3) {
      if (param_2 == 2) {
        *(undefined4 *)param_4 = 0;
        if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
          UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar5 == '\0') {
LAB_001100cf:
          uVar4 = _LC54;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          pVVar3 = param_1[1];
          pOVar6 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_001100cf;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00110107:
          uVar4 = _LC55;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          pVVar3 = *param_1;
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar8 = Variant::operator_cast_to_Object_(pVVar3);
          if ((pOVar7 != (Object *)0x0) && (pOVar8 == (Object *)0x0)) goto LAB_00110107;
        }
        pOVar7 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110151. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar7,pOVar6);
          return;
        }
        goto LAB_0011028a;
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
LAB_00110178:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011028a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void, Object*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*>::call
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
      goto LAB_00110479;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar8[1] == 0) goto LAB_00110479;
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
LAB_001103d0:
          uVar3 = _LC55;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar6 == (Object *)0x0) && (pOVar5 != (Object *)0x0)) goto LAB_001103d0;
        }
        pOVar5 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110417. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar5);
          return;
        }
        goto LAB_0011052a;
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
LAB_00110479:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011052a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TilesEditorUtils, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,int>::call
          (CallableCustomMethodPointer<TilesEditorUtils,void,int> *this,Variant **param_1,
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
      goto LAB_001106e8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_001106e8;
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
        uVar3 = _LC56;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110697. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00110799;
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
LAB_001106e8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110799:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TileSetEditor, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,int>::call
          (CallableCustomMethodPointer<TileSetEditor,void,int> *this,Variant **param_1,int param_2,
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
      goto LAB_00110958;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_00110958;
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
        uVar3 = _LC56;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110907. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_00110a09;
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
LAB_00110958:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00110a09:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<TileSetEditor, void, Ref<InputEvent> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&>::call
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&> *this,
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
          goto LAB_00110ade;
        }
        if (param_2 == 0) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 1;
          goto LAB_00110ade;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar4 = _LC55;
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
LAB_00110bad:
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
              if (pOVar5 != (Object *)0x0) goto LAB_00110bad;
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
        goto LAB_00110ade;
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
  _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (String *)&local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_00110ade:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>
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
          goto LAB_00110e45;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_00110e45;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar4 == '\0') {
LAB_00110ecf:
          uVar3 = _LC57;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[2];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_00110ecf;
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
        uVar3 = _LC59;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        local_60 = Variant::operator_cast_to_Vector2(*param_1);
        (*pcVar10)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,pOVar5);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00110e45;
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
  _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_68,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref(local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_00110e45:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointerC<TileSetEditor, bool, Vector2 const&, Variant const&,
   Control*>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>::call
          (CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>
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
          goto LAB_001111b4;
        }
        if (param_2 != 3) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 3;
          goto LAB_001111b4;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],0x18);
        if (cVar4 == '\0') {
LAB_0011123c:
          uVar3 = _LC57;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = param_1[2];
          pOVar5 = Variant::operator_cast_to_Object_(this_00);
          pOVar6 = Variant::operator_cast_to_Object_(this_00);
          if (((pOVar6 == (Object *)0x0) ||
              (lVar7 = __dynamic_cast(pOVar6,&Object::typeinfo,&Control::typeinfo,0), lVar7 == 0))
             && (pOVar5 != (Object *)0x0)) goto LAB_0011123c;
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
        uVar3 = _LC59;
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
        goto LAB_001111b4;
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
  _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0xad,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_88,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref(local_98);
  CowData<char32_t>::_unref(local_a0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
LAB_001111b4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, int,
   int>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>::call
          (CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *pVVar3;
  undefined8 uVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  Object *pOVar8;
  Object *pOVar9;
  Object *pOVar10;
  uint uVar11;
  ulong *puVar12;
  code *pcVar13;
  long in_FS_OFFSET;
  bool bVar14;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Variant local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar11 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (Variant)0x0;
      LOCK();
      bVar14 = (char)ObjectDB::spin_lock == '\0';
      if (bVar14) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar14) break;
      do {
      } while ((char)ObjectDB::spin_lock != '\0');
    }
    puVar12 = (ulong *)((ulong)uVar11 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar12 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar12[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar13 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if (5 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 5;
          goto LAB_0011154c;
        }
        if (param_2 != 5) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 5;
          goto LAB_0011154c;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar13 & 1) != 0) {
          pcVar13 = *(code **)(pcVar13 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[4],2);
        uVar4 = _LC60;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[4]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],2);
        uVar4 = _LC61;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        iVar7 = Variant::operator_cast_to_int(param_1[3]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
        uVar4 = _LC62;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_String(local_48);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar5 == '\0') {
LAB_00111664:
          uVar4 = _LC54;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          pVVar3 = param_1[1];
          pOVar8 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar9 = Variant::operator_cast_to_Object_(pVVar3);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_00111664;
        }
        pOVar8 = Variant::operator_cast_to_Object_(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00111699:
          uVar4 = _LC55;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          pVVar3 = *param_1;
          pOVar9 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar10 = Variant::operator_cast_to_Object_(pVVar3);
          if ((pOVar9 != (Object *)0x0) && (pOVar10 == (Object *)0x0)) goto LAB_00111699;
        }
        pOVar9 = Variant::operator_cast_to_Object_(*param_1);
        (*pcVar13)((long *)(lVar1 + lVar2),pOVar9,pOVar8,local_48,iVar7,iVar6);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
        goto LAB_0011154c;
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
  _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_0011154c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, Variant
   const&>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>::call
          (CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Variant *pVVar3;
  undefined8 uVar4;
  char cVar5;
  Object *pOVar6;
  Object *pOVar7;
  Object *pOVar8;
  uint uVar9;
  ulong *puVar10;
  code *pcVar11;
  long in_FS_OFFSET;
  bool bVar12;
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar9 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar9 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_60[0] = (Variant)0x0;
      LOCK();
      bVar12 = (char)ObjectDB::spin_lock == '\0';
      if (bVar12) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar12) break;
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
        if (4 < (uint)param_2) {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 4;
          goto LAB_001118e4;
        }
        if (param_2 != 4) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 4;
          goto LAB_001118e4;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar11 & 1) != 0) {
          pcVar11 = *(code **)(pcVar11 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[3],0);
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = 3;
        }
        Variant::Variant((Variant *)local_58,param_1[3]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
        uVar4 = _LC62;
        if (cVar5 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        Variant::operator_cast_to_String(local_60);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        if (cVar5 == '\0') {
LAB_001119d4:
          uVar4 = _LC54;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          pVVar3 = param_1[1];
          pOVar6 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          if ((pOVar7 == (Object *)0x0) && (pOVar6 != (Object *)0x0)) goto LAB_001119d4;
        }
        pOVar6 = Variant::operator_cast_to_Object_(param_1[1]);
        cVar5 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar5 == '\0') {
LAB_00111a0d:
          uVar4 = _LC55;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar4;
        }
        else {
          pVVar3 = *param_1;
          pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
          pOVar8 = Variant::operator_cast_to_Object_(pVVar3);
          if ((pOVar7 != (Object *)0x0) && (pOVar8 == (Object *)0x0)) goto LAB_00111a0d;
        }
        pOVar7 = Variant::operator_cast_to_Object_(*param_1);
        (*pcVar11)((long *)(lVar1 + lVar2),pOVar7,pOVar6,local_60,(Variant *)local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_001118e4;
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
  local_68 = 0;
  String::parse_latin1((String *)&local_68,"\', can\'t call method.");
  uitos((ulong)local_78);
  operator+((char *)local_70,(String *)"Invalid Object id \'");
  String::operator+((String *)local_60,(String *)local_70);
  _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_60,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_001118e4:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
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
    if ((code *)PTR__bind_methods_0011e060 != Object::_bind_methods) {
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



/* HBoxContainer::_initialize_classv() */

void HBoxContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_0011e058 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011e068 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0011e070 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* TileSetEditor::_initialize_classv() */

void TileSetEditor::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Control::initialize_class()::initialized == '\0') {
      if (CanvasItem::initialize_class()::initialized == '\0') {
        if (Node::initialize_class()::initialized == '\0') {
          Object::initialize_class();
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Object");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Node");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          if ((code *)PTR__bind_methods_0011e058 != Node::_bind_methods) {
            Node::_bind_methods();
          }
          Node::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Node");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"CanvasItem");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        CanvasItem::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_0011e068 != Object::_bind_compatibility_methods)
        {
          CanvasItem::_bind_compatibility_methods();
        }
        CanvasItem::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"CanvasItem");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Control");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0011e078 != CanvasItem::_bind_methods) {
        Control::_bind_methods();
      }
      Control::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"Control");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"TileSetEditor");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
    initialize_class()::initialized = '\x01';
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::_initialize_classv() */

void HSplitContainer::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (SplitContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_0011e058 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011e068 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"SplitContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0011e080 != Container::_bind_methods) {
        SplitContainer::_bind_methods();
      }
      SplitContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"SplitContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"HSplitContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (BoxContainer::initialize_class()::initialized == '\0') {
      if (Container::initialize_class()::initialized == '\0') {
        if (Control::initialize_class()::initialized == '\0') {
          if (CanvasItem::initialize_class()::initialized == '\0') {
            if (Node::initialize_class()::initialized == '\0') {
              Object::initialize_class();
              local_50 = 0;
              String::parse_latin1((String *)&local_50,"Object");
              StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
              local_60 = 0;
              String::parse_latin1((String *)&local_60,"Node");
              StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
              ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
              if ((StringName::configured != '\0') && (local_58 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              if ((StringName::configured != '\0') && (local_48 != 0)) {
                StringName::unref();
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
              if ((code *)PTR__bind_methods_0011e058 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"CanvasItem");
            StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
            ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
            if ((StringName::configured != '\0') && (local_58 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
            if ((StringName::configured != '\0') && (local_48 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
            CanvasItem::_bind_methods();
            if ((code *)PTR__bind_compatibility_methods_0011e068 !=
                Object::_bind_compatibility_methods) {
              CanvasItem::_bind_compatibility_methods();
            }
            CanvasItem::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"CanvasItem");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Control");
          StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
          ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
          if ((StringName::configured != '\0') && (local_58 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          if ((StringName::configured != '\0') && (local_48 != 0)) {
            StringName::unref();
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
          Control::_bind_methods();
          Control::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Control");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"Container");
        StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
        if ((StringName::configured != '\0') && (local_58 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        if ((StringName::configured != '\0') && (local_48 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
        Container::_bind_methods();
        Container::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"Container");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"BoxContainer");
      StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_48 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((code *)PTR__bind_methods_0011e070 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"BoxContainer");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"VBoxContainer");
    StringName::StringName((StringName *)&local_58,(String *)&local_60,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_48);
    if ((StringName::configured != '\0') && (local_58 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
    if ((StringName::configured != '\0') && (local_48 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
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
        if (pvVar3 == (void *)0x0) goto LAB_0011335f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011335f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* Control::is_class(String const&) const */

undefined8 __thiscall Control::is_class(Control *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00113493;
  }
  cVar4 = String::operator==(param_1,"Control");
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
      if (cVar4 != '\0') goto LAB_00113493;
    }
    cVar4 = String::operator==(param_1,"CanvasItem");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Node::is_class((Node *)this,param_1);
        return uVar5;
      }
      goto LAB_0011359e;
    }
  }
LAB_00113493:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011359e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* TileSetEditor::is_class(String const&) const */

undefined8 __thiscall TileSetEditor::is_class(TileSetEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001136ab;
  }
  cVar4 = String::operator==(param_1,"TileSetEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001136ab:
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
    if (cVar4 != '\0') goto LAB_001137fb;
  }
  cVar4 = String::operator==(param_1,"Container");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Control::is_class((Control *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001137fb:
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
    if (cVar4 != '\0') goto LAB_00113923;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
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
      if (cVar4 != '\0') goto LAB_00113923;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00113a2e;
    }
  }
LAB_00113923:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113a2e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HSplitContainer::is_class(String const&) const */

undefined8 __thiscall HSplitContainer::is_class(HSplitContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00113b13;
  }
  cVar4 = String::operator==(param_1,"HSplitContainer");
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
      if (cVar4 != '\0') goto LAB_00113b13;
    }
    cVar4 = String::operator==(param_1,"SplitContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00113c1e;
    }
  }
LAB_00113b13:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113c1e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HBoxContainer::is_class(String const&) const */

undefined8 __thiscall HBoxContainer::is_class(HBoxContainer *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00113d03;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
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
      if (cVar4 != '\0') goto LAB_00113d03;
    }
    cVar4 = String::operator==(param_1,"BoxContainer");
    if (cVar4 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar5 = Container::is_class((Container *)this,param_1);
        return uVar5;
      }
      goto LAB_00113e0e;
    }
  }
LAB_00113d03:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113e0e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void Node::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  CowData<char32_t> local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = &_LC48;
  local_80 = 0;
  local_88 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC48;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"Node",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (undefined *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void RefCounted::_get_property_listv(List *param_1,bool param_2)

{
  undefined7 in_register_00000031;
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
  local_78 = "RefCounted";
  local_80 = 0;
  local_88 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "RefCounted";
  local_90 = 0;
  local_70 = 10;
  String::parse_latin1((StrRange *)&local_90);
  PropertyInfo::PropertyInfo
            ((PropertyInfo *)&local_78,0,(StrRange *)&local_90,0,(StrRange *)&local_88,0x80,
             &local_80);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)CONCAT71(in_register_00000031,param_2),
             (PropertyInfo *)&local_78);
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
  StringName::StringName((StringName *)&local_78,"RefCounted",false);
  ClassDB::get_property_list
            ((StringName *)&local_78,(List *)CONCAT71(in_register_00000031,param_2),true,
             (Object *)param_1);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* EditorInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
EditorInspectorPlugin::_get_property_listv(EditorInspectorPlugin *this,List *param_1,bool param_2)

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
    RefCounted::_get_property_listv((List *)this,SUB81(param_1,0));
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "EditorInspectorPlugin";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "EditorInspectorPlugin";
  local_90 = 0;
  local_70 = 0x15;
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
  StringName::StringName((StringName *)&local_78,"EditorInspectorPlugin",false);
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



/* TileSourceInspectorPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */

void __thiscall
TileSourceInspectorPlugin::_get_property_listv
          (TileSourceInspectorPlugin *this,List *param_1,bool param_2)

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
    EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "TileSourceInspectorPlugin";
  local_70 = 0x19;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "TileSourceInspectorPlugin";
  local_90 = 0;
  local_70 = 0x19;
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
  StringName::StringName((StringName *)&local_78,"TileSourceInspectorPlugin",false);
  ClassDB::get_property_list((StringName *)&local_78,param_1,true,(Object *)this);
  if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
    StringName::unref();
  }
  if (param_2) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorInspectorPlugin::_get_property_listv((EditorInspectorPlugin *)this,param_1,true);
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
  if ((code *)PTR__get_property_list_0011e088 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_0011e090 != CanvasItem::_get_property_list) {
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



/* TileSetEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall TileSetEditor::_get_property_listv(TileSetEditor *this,List *param_1,bool param_2)

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
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "TileSetEditor";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "TileSetEditor";
  local_90 = 0;
  local_70 = 0xd;
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
  StringName::StringName((StringName *)&local_78,"TileSetEditor",false);
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



/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Container::_get_property_listv(Container *this,List *param_1,bool param_2)

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
    Control::_get_property_listv((Control *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "Container";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Container";
  local_90 = 0;
  local_70 = 9;
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
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "SplitContainer";
  local_70 = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "SplitContainer";
  local_90 = 0;
  local_70 = 0xe;
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
    SplitContainer::_get_property_listv((SplitContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "HSplitContainer";
  local_70 = 0xf;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "HSplitContainer";
  local_90 = 0;
  local_70 = 0xf;
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



/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall BoxContainer::_get_property_listv(BoxContainer *this,List *param_1,bool param_2)

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
    Container::_get_property_listv((Container *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "BoxContainer";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "BoxContainer";
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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "HBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "HBoxContainer";
  local_90 = 0;
  local_70 = 0xd;
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



/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall VBoxContainer::_get_property_listv(VBoxContainer *this,List *param_1,bool param_2)

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
    BoxContainer::_get_property_listv((BoxContainer *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "VBoxContainer";
  local_70 = 0xd;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "VBoxContainer";
  local_90 = 0;
  local_70 = 0xd;
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



/* CallableCustomMethodPointer<TileSetEditor, void, Ref<TileMapPattern>, Ref<Texture2D>
   >::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>>::call
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>> *this,
          Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  ulong uVar4;
  undefined8 uVar5;
  char cVar6;
  Object *pOVar7;
  uint uVar8;
  ulong *puVar9;
  code *pcVar10;
  long in_FS_OFFSET;
  bool bVar11;
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  Object *local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar8 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar8 < (uint)ObjectDB::slot_max) {
    while( true ) {
      uVar4 = (ulong)local_48 >> 8;
      local_48 = (Object *)(uVar4 << 8);
      LOCK();
      bVar11 = (char)ObjectDB::spin_lock == '\0';
      if (bVar11) {
        ObjectDB::spin_lock._0_1_ = '\x01';
      }
      UNLOCK();
      if (bVar11) break;
      local_48 = (Object *)(uVar4 << 8);
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
          goto LAB_00115685;
        }
        if (param_2 != 2) {
          *(undefined4 *)param_4 = 4;
          *(undefined4 *)(param_4 + 8) = 2;
          goto LAB_00115685;
        }
        *(undefined4 *)param_4 = 0;
        if (((ulong)pcVar10 & 1) != 0) {
          pcVar10 = *(code **)(pcVar10 + *(long *)(lVar1 + lVar2) + -1);
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0x18);
        uVar5 = _LC54;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        local_50 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar3 = local_50;
        if (pOVar7 != local_50) {
          if (pOVar7 == (Object *)0x0) {
            if (local_50 != (Object *)0x0) {
              local_50 = (Object *)0x0;
              local_48 = pOVar3;
              goto LAB_00115780;
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&Texture2D::typeinfo,0);
            if (pOVar3 != pOVar7) {
              local_48 = pOVar3;
              local_50 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_50 = (Object *)0x0;
              }
LAB_00115780:
              Ref<Texture2D>::unref((Ref<Texture2D> *)&local_48);
            }
          }
        }
        cVar6 = Variant::can_convert_strict(*(undefined4 *)*param_1);
        uVar5 = _LC55;
        if (cVar6 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar5;
        }
        local_48 = (Object *)0x0;
        pOVar7 = (Object *)Variant::get_validated_object();
        pOVar3 = local_48;
        if (pOVar7 != local_48) {
          if (pOVar7 == (Object *)0x0) {
            if (local_48 != (Object *)0x0) {
              local_48 = (Object *)0x0;
LAB_00115810:
              cVar6 = RefCounted::unreference();
              if ((cVar6 != '\0') && (cVar6 = predelete_handler(pOVar3), cVar6 != '\0')) {
                (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                Memory::free_static(pOVar3,false);
              }
            }
          }
          else {
            pOVar7 = (Object *)__dynamic_cast(pOVar7,&Object::typeinfo,&TileMapPattern::typeinfo,0);
            if (pOVar3 != pOVar7) {
              local_48 = pOVar7;
              if ((pOVar7 != (Object *)0x0) && (cVar6 = RefCounted::reference(), cVar6 == '\0')) {
                local_48 = (Object *)0x0;
              }
              if (pOVar3 != (Object *)0x0) goto LAB_00115810;
            }
          }
        }
        (*pcVar10)((long *)(lVar1 + lVar2),(Ref<Texture2D> *)&local_48,&local_50);
        if (((local_48 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar3 = local_48, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_48), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        if (((local_50 != (Object *)0x0) &&
            (cVar6 = RefCounted::unreference(), pOVar3 = local_50, cVar6 != '\0')) &&
           (cVar6 = predelete_handler(local_50), cVar6 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        goto LAB_00115685;
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
  local_50 = (Object *)0x0;
  String::parse_latin1((String *)&local_50,"\', can\'t call method.");
  uitos((ulong)local_60);
  operator+((char *)local_58,(String *)"Invalid Object id \'");
  String::operator+((String *)&local_48,(String *)local_58);
  _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   (Ref<Texture2D> *)&local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00115685:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Ref<TileSet>::unref() */

void __thiscall Ref<TileSet>::unref(Ref<TileSet> *this)

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



/* WARNING: Removing unreachable block (ram,0x00115b00) */
/* TileSetEditor::_notificationv(int, bool) */

void __thiscall TileSetEditor::_notificationv(TileSetEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    _notification(this,param_1);
    if ((code *)PTR__notification_0011e098 != CanvasItem::_notification) {
      Control::_notification(iVar1);
    }
    CanvasItem::_notification(iVar1);
    Node::_notification(iVar1);
    return;
  }
  Node::_notification(iVar1);
  CanvasItem::_notification(iVar1);
  if ((code *)PTR__notification_0011e098 != CanvasItem::_notification) {
    Control::_notification(iVar1);
  }
  _notification(this,param_1);
  return;
}



/* Ref<TileSetAtlasSource>::unref() */

void __thiscall Ref<TileSetAtlasSource>::unref(Ref<TileSetAtlasSource> *this)

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
  CowData<char32_t> *pCVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  CowData<char32_t> *this_00;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    pCVar2 = *(CowData<char32_t> **)this;
    if (pCVar2 != (CowData<char32_t> *)0x0) {
      lVar3 = *(long *)(pCVar2 + -8);
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar5 = 0;
        this_00 = pCVar2;
        do {
          lVar5 = lVar5 + 1;
          CowData<char32_t>::_unref(this_00);
          this_00 = this_00 + 8;
        } while (lVar3 != lVar5);
      }
      Memory::free_static(pCVar2 + -0x10,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* CallableCustomMethodPointer<TileSetEditor, void, Vector<String> const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&>::call
          (CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&> *this,
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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  Variant local_48 [8];
  CowData<String> local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (Variant)0x0;
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
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x22);
            uVar3 = _LC190;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_Vector(local_48);
            (*pcVar7)((long *)(lVar1 + lVar2),local_48);
            CowData<String>::_unref(local_40);
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 1;
        }
        goto LAB_00115e1e;
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
  _err_print_error(&_LC53,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_48,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_48);
  CowData<char32_t>::_unref(local_58);
  CowData<char32_t>::_unref(local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
LAB_00115e1e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<Ref<TileSetAtlasSource> >::_unref() */

void __thiscall CowData<Ref<TileSetAtlasSource>>::_unref(CowData<Ref<TileSetAtlasSource>> *this)

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
LAB_0011600d:
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
            goto LAB_0011600d;
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



/* CowData<Ref<TileSetAtlasSource> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<TileSetAtlasSource>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<TileSetAtlasSource> >::_realloc(long) */

undefined8 __thiscall
CowData<Ref<TileSetAtlasSource>>::_realloc(CowData<Ref<TileSetAtlasSource>> *this,long param_1)

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
/* Error CowData<Ref<TileSetAtlasSource> >::resize<false>(long) */

undefined8 __thiscall
CowData<Ref<TileSetAtlasSource>>::resize<false>(CowData<Ref<TileSetAtlasSource>> *this,long param_1)

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
LAB_00116480:
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
  if (lVar11 == 0) goto LAB_00116480;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0011632a:
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
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0011632a;
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
    goto LAB_001162f0;
  }
  if (lVar11 == lVar8) {
LAB_001163fb:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_001162f0:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_001163db;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_001163fb;
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
LAB_001163db:
  puVar10[-1] = param_1;
  return 0;
}



/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

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
    if (*(long **)((long)pvVar1 + 0x38) == plVar4) {
      lVar3 = *(long *)((long)pvVar1 + 0x28);
      lVar2 = *(long *)((long)pvVar1 + 0x30);
      *plVar4 = lVar3;
      if (pvVar1 == (void *)plVar4[1]) {
        plVar4[1] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x28) = lVar3;
        lVar3 = *(long *)((long)pvVar1 + 0x28);
      }
      if (lVar3 != 0) {
        *(long *)(lVar3 + 0x30) = lVar2;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar1 + 0x18));
      CowData<String>::_unref((CowData<String> *)((long)pvVar1 + 0x10));
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



/* TileSourceInspectorPlugin::~TileSourceInspectorPlugin() */

void __thiscall
TileSourceInspectorPlugin::~TileSourceInspectorPlugin(TileSourceInspectorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &BoxContainer::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001166b4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001166b4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001166b4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001166b4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001166b4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001166b4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_00117230;
  Object::~Object((Object *)this);
  return;
}



/* TileSourceInspectorPlugin::~TileSourceInspectorPlugin() */

void __thiscall
TileSourceInspectorPlugin::~TileSourceInspectorPlugin(TileSourceInspectorPlugin *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(undefined **)this = &BoxContainer::typeinfo;
  if (bVar1) {
    if (*(long *)(this + 0x200) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001167b4;
    }
    if (*(long *)(this + 0x1e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001167b4;
    }
    if (*(long *)(this + 0x1d0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001167b4;
    }
    if (*(long *)(this + 0x1b8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001167b4;
    }
    if (*(long *)(this + 0x1a0) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_001167b4;
    }
    if (*(long *)(this + 0x188) != 0) {
      StringName::unref();
    }
  }
LAB_001167b4:
  List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
            ((List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *)(this + 0x180));
  *(undefined ***)this = &PTR__initialize_classv_00117230;
  Object::~Object((Object *)this);
  operator_delete(this,0x238);
  return;
}



/* TileSetEditor::singleton */

void TileSetEditor::_GLOBAL__sub_I_singleton(void)

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
  if (TileMap::base_property_helper == '\0') {
    TileMap::base_property_helper = '\x01';
    TileMap::base_property_helper._64_8_ = 0;
    TileMap::base_property_helper._0_16_ = (undefined1  [16])0x0;
    TileMap::base_property_helper._24_16_ = (undefined1  [16])0x0;
    TileMap::base_property_helper._40_16_ = (undefined1  [16])0x0;
    TileMap::base_property_helper._56_8_ = 2;
    __cxa_atexit(PropertyListHelper::~PropertyListHelper,TileMap::base_property_helper,&__dso_handle
                );
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
  if (EditorFileDialog::base_property_helper != '\0') {
    return;
  }
  EditorFileDialog::base_property_helper = 1;
  EditorFileDialog::base_property_helper._64_8_ = 0;
  EditorFileDialog::base_property_helper._56_8_ = 2;
  EditorFileDialog::base_property_helper._0_16_ = (undefined1  [16])0x0;
  EditorFileDialog::base_property_helper._24_16_ = (undefined1  [16])0x0;
  EditorFileDialog::base_property_helper._40_16_ = (undefined1  [16])0x0;
  __cxa_atexit(PropertyListHelper::~PropertyListHelper,EditorFileDialog::base_property_helper,
               &__dso_handle,uStack_8);
  return;
}



/* WARNING: Control flow encountered bad instruction data */
/* TileSourceInspectorPlugin::~TileSourceInspectorPlugin() */

void __thiscall
TileSourceInspectorPlugin::~TileSourceInspectorPlugin(TileSourceInspectorPlugin *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* List<EditorInspectorPlugin::AddedEditor, DefaultAllocator>::~List() */

void __thiscall
List<EditorInspectorPlugin::AddedEditor,DefaultAllocator>::~List
          (List<EditorInspectorPlugin::AddedEditor,DefaultAllocator> *this)

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
/* List<PropertyInfo, DefaultAllocator>::~List() */

void __thiscall
List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this)

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
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* TileSetEditor::~TileSetEditor() */

void __thiscall TileSetEditor::~TileSetEditor(TileSetEditor *this)

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
/* RefCounted::~RefCounted() */

void __thiscall RefCounted::~RefCounted(RefCounted *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetEditor, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Vector<String>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetEditor, void, Ref<TileMapPattern>, Ref<Texture2D>
   >::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<TileMapPattern>,Ref<Texture2D>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetEditor, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TilesEditorUtils, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TilesEditorUtils,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TilesEditorUtils, void, Object*,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TilesEditorUtils,void,Object*,Object*> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointerC<TileSetEditor, bool, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointerC() */

void __thiscall
CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointerC
          (CallableCustomMethodPointerC<TileSetEditor,bool,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetEditor, void, Vector2 const&, Variant const&,
   Control*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Vector2_const&,Variant_const&,Control*>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetEditor, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Ref<InputEvent>const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, int,
   int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,int,int>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSetEditor, void, Object*, Object*, String const&, Variant
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSetEditor,void,Object*,Object*,String_const&,Variant_const&>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void> *this)

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
/* CallableCustomMethodPointer<TileSourceInspectorPlugin, void,
   Object*>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<TileSourceInspectorPlugin,void,Object*> *this)

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



