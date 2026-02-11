
/* AtlasMergingDialog::ok_pressed() */

void __thiscall AtlasMergingDialog::ok_pressed(AtlasMergingDialog *this)

{
  this[0xdbc] = (AtlasMergingDialog)0x0;
  EditorFileDialog::popup_file_dialog();
  return;
}



/* AtlasMergingDialog::cancel_pressed() */

void __thiscall AtlasMergingDialog::cancel_pressed(AtlasMergingDialog *this)

{
  int iVar1;
  
  EditorUndoRedoManager::get_singleton();
  if (0 < *(int *)(this + 0xdb8)) {
    iVar1 = 0;
    do {
      iVar1 = iVar1 + 1;
      EditorUndoRedoManager::undo();
    } while (iVar1 < *(int *)(this + 0xdb8));
  }
  *(undefined4 *)(this + 0xdb8) = 0;
  return;
}



/* AtlasMergingDialog::custom_action(String const&) */

void __thiscall AtlasMergingDialog::custom_action(AtlasMergingDialog *this,String *param_1)

{
  char cVar1;
  
  cVar1 = String::operator==(param_1,"merge");
  if (cVar1 == '\0') {
    return;
  }
  this[0xdbc] = (AtlasMergingDialog)0x1;
  EditorFileDialog::popup_file_dialog();
  return;
}



/* AtlasMergingDialog::_get(StringName const&, Variant&) const */

ulong __thiscall
AtlasMergingDialog::_get(AtlasMergingDialog *this,StringName *param_1,Variant *param_2)

{
  ulong uVar1;
  long in_FS_OFFSET;
  undefined4 local_38 [2];
  undefined8 local_30;
  undefined8 uStack_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"next_line_after_column");
  if ((char)uVar1 != '\0') {
    Variant::Variant((Variant *)local_38,*(int *)(this + 0xde0));
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    uVar1 = uVar1 & 0xff;
    *(undefined4 *)param_2 = local_38[0];
    *(undefined8 *)(param_2 + 8) = local_30;
    *(undefined8 *)(param_2 + 0x10) = uStack_28;
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* AtlasMergingDialog::AtlasMergingDialog() */

void __thiscall AtlasMergingDialog::AtlasMergingDialog(AtlasMergingDialog *this)

{
  Vector2i *pVVar1;
  StringName *pSVar2;
  long *plVar3;
  code *pcVar4;
  Object *pOVar5;
  String *pSVar6;
  undefined8 uVar7;
  SplitContainer *this_00;
  ItemList *this_01;
  CallableCustom *pCVar8;
  BoxContainer *this_02;
  Label *pLVar9;
  EditorPropertyInteger *this_03;
  TextureRect *this_04;
  EditorFileDialog *this_05;
  long in_FS_OFFSET;
  float fVar10;
  String local_88 [8];
  long local_80;
  long local_78 [2];
  long local_68 [3];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined4 *)(this + 0xdb8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0010cf10;
  this[0xdbc] = (AtlasMergingDialog)0x1;
  *(undefined8 *)(this + 0xdc0) = 0;
  *(undefined8 *)(this + 0xdc8) = 0;
  *(undefined4 *)(this + 0xde0) = 0x1e;
  *(undefined8 *)(this + 0xe18) = 0;
  *(undefined1 (*) [16])(this + 0xdd0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xe08) = (undefined1  [16])0x0;
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Atlas Merging");
  TTR((String *)&local_80,(String *)local_78);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Merge (Keep original Atlases)");
  TTR((String *)&local_80,(String *)local_78);
  AcceptDialog::set_ok_button_text(this,(String *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"merge");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"");
  local_80 = 0;
  String::parse_latin1((String *)&local_80,"Merge");
  TTR(local_88,(String *)&local_80);
  uVar7 = AcceptDialog::add_button((String *)this,SUB81(local_88,0),(String *)0x1);
  *(undefined8 *)(this + 0xe18) = uVar7;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe18),0));
  this_00 = (SplitContainer *)operator_new(0xa70,"");
  SplitContainer::SplitContainer(this_00,false);
  this_00[0xa68] = (SplitContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0010cb98;
  postinitialize_handler((Object *)this_00);
  Control::set_h_size_flags(this_00,3);
  Control::set_v_size_flags(this_00,3);
  Node::add_child(this,this_00,0,0);
  this_01 = (ItemList *)operator_new(0xb80,"");
  ItemList::ItemList(this_01);
  postinitialize_handler((Object *)this_01);
  *(ItemList **)(this + 0xde8) = this_01;
  Node::set_auto_translate_mode(this_01,2);
  pVVar1 = *(Vector2i **)(this + 0xde8);
  fVar10 = (float)EditorScale::get_scale();
  local_50 = CONCAT44(fVar10 * __LC24,fVar10 * __LC24);
  local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  ItemList::set_fixed_icon_size(pVVar1);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xde8),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xde8),3);
  (**(code **)(**(long **)(this + 0xde8) + 0x2c8))(*(long **)(this + 0xde8),3);
  local_48 = _LC25;
  Control::set_custom_minimum_size(*(Vector2 **)(this + 0xde8));
  ItemList::set_select_mode(*(undefined8 *)(this + 0xde8),1);
  pSVar2 = *(StringName **)(this + 0xde8);
  StringName::StringName((StringName *)local_68,"ItemListSecondary",false);
  Control::set_theme_type_variation(pSVar2);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  plVar3 = *(long **)(this + 0xde8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC20;
  *(AtlasMergingDialog **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_0010d188;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar7 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar7;
  *(code **)(pCVar8 + 0x38) = _update_texture;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "AtlasMergingDialog::_update_texture";
  Callable::Callable((Callable *)local_68,pCVar8);
  Callable::unbind((int)(String *)local_78);
  StringName::StringName((StringName *)&local_80,"multi_selected",false);
  (*pcVar4)(plVar3,(String *)&local_80,(String *)local_78,0);
  if ((StringName::configured != '\0') && (local_80 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_78);
  Callable::~Callable((Callable *)local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xde8),0,0);
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,true);
  this_02[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_0010c5a8;
  postinitialize_handler((Object *)this_02);
  Control::set_h_size_flags(this_02,3);
  (**(code **)(*(long *)this_02 + 0x2c8))(this_02,3);
  Node::add_child(this_00,this_02,0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar9,(String *)local_68);
  postinitialize_handler((Object *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Settings:");
  TTR((String *)&local_80,(String *)local_78);
  Label::set_text((String *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_02,pLVar9,0,0);
  this_03 = (EditorPropertyInteger *)operator_new(0xb60,"");
  EditorPropertyInteger::EditorPropertyInteger(this_03);
  postinitialize_handler((Object *)this_03);
  local_68[0] = 0;
  *(EditorPropertyInteger **)(this + 0xdf8) = this_03;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Next Line After Column");
  TTR((String *)&local_80,(String *)local_78);
  EditorProperty::set_label((String *)this_03);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  pOVar5 = *(Object **)(this + 0xdf8);
  StringName::StringName((StringName *)local_68,"next_line_after_column",false);
  EditorProperty::set_object_and_property(pOVar5,(StringName *)this);
  if ((StringName::configured != '\0') && (local_68[0] != 0)) {
    StringName::unref();
  }
  (**(code **)(**(long **)(this + 0xdf8) + 0x380))();
  plVar3 = *(long **)(this + 0xdf8);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar7 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar8 = &PTR_hash_0010d218;
  *(undefined8 *)(pCVar8 + 0x30) = uVar7;
  *(code **)(pCVar8 + 0x38) = _property_changed;
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined **)(pCVar8 + 0x20) = &_LC20;
  *(AtlasMergingDialog **)(pCVar8 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "AtlasMergingDialog::_property_changed";
  Callable::Callable((Callable *)local_68,pCVar8);
  StringName::StringName((StringName *)local_78,"property_changed",false);
  (*pcVar4)(plVar3,(String *)local_78,(String *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  Node::add_child(this_02,*(undefined8 *)(this + 0xdf8),0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar9,(String *)local_68);
  postinitialize_handler((Object *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Preview:");
  TTR((String *)&local_80,(String *)local_78);
  Label::set_text((String *)pLVar9);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_02,pLVar9,0,0);
  this_04 = (TextureRect *)operator_new(0x9e0,"");
  TextureRect::TextureRect(this_04);
  postinitialize_handler((Object *)this_04);
  *(TextureRect **)(this + 0xe00) = this_04;
  Control::set_h_size_flags(this_04,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe00),3);
  TextureRect::set_expand_mode(*(undefined8 *)(this + 0xe00),1);
  CanvasItem::hide();
  TextureRect::set_stretch_mode(*(undefined8 *)(this + 0xe00),5);
  Node::add_child(this_02,*(undefined8 *)(this + 0xe00),0,0);
  pLVar9 = (Label *)operator_new(0xad8,"");
  local_68[0] = 0;
  Label::Label(pLVar9,(String *)local_68);
  postinitialize_handler((Object *)pLVar9);
  *(Label **)(this + 0xe08) = pLVar9;
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Control::set_h_size_flags(*(undefined8 *)(this + 0xe08),3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xe08),3);
  Label::set_horizontal_alignment(*(undefined8 *)(this + 0xe08),1);
  Label::set_vertical_alignment(*(undefined8 *)(this + 0xe08),1);
  pSVar6 = *(String **)(this + 0xe08);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"Please select two atlases or more.");
  TTR((String *)&local_80,(String *)local_78);
  Label::set_text(pSVar6);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  Node::add_child(this_02,*(undefined8 *)(this + 0xe08),0,0);
  this_05 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_05);
  postinitialize_handler((Object *)this_05);
  *(EditorFileDialog **)(this + 0xe10) = this_05;
  EditorFileDialog::set_file_mode(this_05,4);
  pSVar6 = *(String **)(this + 0xe10);
  local_68[0] = 0;
  String::parse_latin1((String *)local_68,"");
  local_78[0] = 0;
  String::parse_latin1((String *)local_78,"*.png");
  EditorFileDialog::add_filter(pSVar6,(String *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  plVar3 = *(long **)(this + 0xe10);
  pcVar4 = *(code **)(*plVar3 + 0x108);
  pCVar8 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar8);
  *(undefined **)(pCVar8 + 0x20) = &_LC20;
  *(AtlasMergingDialog **)(pCVar8 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar8 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar8 = &PTR_hash_0010d2a8;
  *(undefined8 *)(pCVar8 + 0x40) = 0;
  uVar7 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar8 + 0x10) = 0;
  *(undefined8 *)(pCVar8 + 0x30) = uVar7;
  *(code **)(pCVar8 + 0x38) = _merge_confirmed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar8,(int)pCVar8 + 0x28);
  *(char **)(pCVar8 + 0x20) = "AtlasMergingDialog::_merge_confirmed";
  Callable::Callable((Callable *)local_68,pCVar8);
  StringName::StringName((StringName *)local_78,"file_selected",false);
  (*pcVar4)(plVar3,(String *)local_78,(String *)local_68,0);
  if ((StringName::configured != '\0') && (local_78[0] != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_68);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xe10),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AtlasMergingDialog::update_tile_set(Ref<TileSet>) */

void __thiscall AtlasMergingDialog::update_tile_set(AtlasMergingDialog *this,long *param_2)

{
  undefined8 uVar1;
  char cVar2;
  int iVar3;
  Object *pOVar4;
  Object *pOVar5;
  int iVar6;
  long in_FS_OFFSET;
  Object *local_98;
  CowData<char32_t> local_90 [8];
  undefined8 local_88;
  undefined8 local_80;
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  Object *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  pOVar4 = (Object *)*param_2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (pOVar4 == (Object *)0x0) {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      _err_print_error("update_tile_set","editor/plugins/tiles/atlas_merging_dialog.cpp",0x110,
                       "Condition \"p_tile_set.is_null()\" is true.",0,0);
      return;
    }
  }
  else {
    pOVar5 = *(Object **)(this + 0xdd8);
    if (pOVar4 != pOVar5) {
      *(Object **)(this + 0xdd8) = pOVar4;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0xdd8) = 0;
      }
      if (((pOVar5 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
        (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
        Memory::free_static(pOVar5,false);
      }
    }
    ItemList::clear();
    for (iVar6 = 0; iVar3 = TileSet::get_source_count(), iVar6 < iVar3; iVar6 = iVar6 + 1) {
      iVar3 = TileSet::get_source_id((int)*param_2);
      TileSet::get_source((int)(String *)&local_68);
      if (local_68 != (Object *)0x0) {
        pOVar4 = (Object *)
                 __dynamic_cast(local_68,&Object::typeinfo,&TileSetAtlasSource::typeinfo,0);
        if (pOVar4 == (Object *)0x0) {
          cVar2 = RefCounted::unreference();
          pOVar5 = local_68;
          if (cVar2 != '\0') {
            cVar2 = predelete_handler(local_68);
joined_r0x00101158:
            if (cVar2 != '\0') goto LAB_00101035;
          }
        }
        else {
          cVar2 = RefCounted::reference();
          if (cVar2 == '\0') {
            if ((local_68 != (Object *)0x0) &&
               (cVar2 = RefCounted::unreference(), pOVar5 = local_68, cVar2 != '\0')) {
              pOVar4 = (Object *)0x0;
              cVar2 = predelete_handler(local_68);
              goto joined_r0x00101158;
            }
          }
          else {
            if (((local_68 != (Object *)0x0) &&
                (cVar2 = RefCounted::unreference(), pOVar5 = local_68, cVar2 != '\0')) &&
               (cVar2 = predelete_handler(local_68), cVar2 != '\0')) {
LAB_00101035:
              (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
              Memory::free_static(pOVar5,false);
              if (pOVar4 == (Object *)0x0) goto LAB_00100d70;
            }
            TileSetAtlasSource::get_texture();
            if (local_98 != (Object *)0x0) {
              Resource::get_path();
              String::get_file();
              local_80 = 0;
              local_68 = (Object *)&_LC20;
              local_60 = 0;
              String::parse_latin1((StrRange *)&local_80);
              local_88 = 0;
              local_68 = (Object *)0x103ffc;
              local_60 = 0xb;
              String::parse_latin1((StrRange *)&local_88);
              TTR((String *)&local_68,(String *)&local_88);
              vformat<String,int>(local_90,(String *)&local_68,local_70,iVar3);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
              CowData<char32_t>::_unref(local_70);
              CowData<char32_t>::_unref(local_78);
              ItemList::add_item(*(String **)(this + 0xde8),local_90,SUB81(&local_98,0));
              uVar1 = *(undefined8 *)(this + 0xde8);
              Variant::Variant((Variant *)local_58,iVar3);
              ItemList::set_item_metadata((int)uVar1,(Variant *)0xffffffff);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              CowData<char32_t>::_unref(local_90);
              if (((local_98 != (Object *)0x0) &&
                  (cVar2 = RefCounted::unreference(), pOVar5 = local_98, cVar2 != '\0')) &&
                 (cVar2 = predelete_handler(local_98), cVar2 != '\0')) {
                (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
                Memory::free_static(pOVar5,false);
              }
            }
            cVar2 = RefCounted::unreference();
            if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar4), cVar2 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
        }
      }
LAB_00100d70:
    }
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe18),0));
    *(undefined4 *)(this + 0xdb8) = 0;
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
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



/* AtlasMergingDialog::_merge_confirmed(String const&) */

void __thiscall AtlasMergingDialog::_merge_confirmed(AtlasMergingDialog *this,String *param_1)

{
  Variant *pVVar1;
  long *plVar2;
  StringName *pSVar3;
  code *pcVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  Object *pOVar9;
  long lVar10;
  Object *pOVar11;
  Object *pOVar12;
  undefined8 *puVar13;
  int iVar14;
  int iVar15;
  Variant *pVVar16;
  undefined8 uVar17;
  Object *pOVar18;
  long in_FS_OFFSET;
  long local_310;
  long local_248;
  Object *local_240;
  long local_238;
  Object *local_230;
  String *local_228;
  long local_220;
  Variant *local_210;
  Variant *local_208 [2];
  Variant *local_1f8;
  Variant *pVStack_1f0;
  int local_1e0 [2];
  undefined1 local_1d8 [16];
  undefined8 local_1c8;
  undefined1 local_1c0 [16];
  Variant local_1b0 [8];
  Variant *local_1a8;
  Variant *pVStack_1a0;
  Variant *local_198;
  Variant *apVStack_190 [3];
  undefined8 local_178;
  undefined1 local_170 [16];
  Variant local_160 [8];
  Variant local_158 [24];
  Variant local_140 [24];
  undefined8 local_128;
  undefined1 local_120 [16];
  Variant local_110 [8];
  Variant *local_108 [3];
  Variant local_f0 [24];
  undefined8 local_d8;
  undefined1 local_d0 [16];
  Variant local_c0 [8];
  Variant *local_b8;
  Variant *pVStack_b0;
  int local_a0 [2];
  undefined1 local_98 [16];
  Variant local_88 [24];
  Variant local_70 [24];
  undefined8 local_58;
  undefined1 local_50 [16];
  long local_40 [2];
  
  local_40[0] = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xdc0) == 0) {
    _err_print_error("_merge_confirmed","editor/plugins/tiles/atlas_merging_dialog.cpp",0xb4,
                     "Condition \"merged.is_null()\" is true.",0,0);
    goto LAB_00101e9c;
  }
  TileSetAtlasSource::get_texture();
  if ((local_228 == (String *)0x0) ||
     (pOVar9 = (Object *)__dynamic_cast(local_228,&Object::typeinfo,&ImageTexture::typeinfo,0),
     pOVar9 == (Object *)0x0)) {
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_228);
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  cVar5 = RefCounted::reference();
  if (cVar5 == '\0') {
    pOVar9 = (Object *)0x0;
  }
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_228);
  (**(code **)(*(long *)pOVar9 + 0x210))((Ref<Texture2D> *)&local_228,pOVar9);
  Image::save_png(local_228);
  if ((local_228 != (String *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) {
    memdelete<Image>((Image *)local_228);
  }
  (*ResourceLoader::import)(param_1);
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"Texture2D");
  ResourceLoader::load((Ref<Texture2D> *)&local_230,param_1,(String *)&local_238,1,0);
  local_248 = 0;
  if (local_230 == (Object *)0x0) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
    uVar17 = *(undefined8 *)(this + 0xdc0);
    local_230 = (Object *)0x0;
  }
  else {
    lVar10 = __dynamic_cast(local_230,&Object::typeinfo,&Texture2D::typeinfo,0);
    if (lVar10 == 0) {
LAB_001014a8:
      cVar5 = RefCounted::unreference();
      if ((cVar5 != '\0') && (cVar5 = predelete_handler(local_230), cVar5 != '\0')) {
        (**(code **)(*(long *)local_230 + 0x140))(local_230);
        Memory::free_static(local_230,false);
      }
    }
    else {
      local_228 = (String *)0x0;
      local_248 = lVar10;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_248 = 0;
        lVar10 = 0;
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_228);
      if (local_230 != (Object *)0x0) goto LAB_001014a8;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
    uVar17 = *(undefined8 *)(this + 0xdc0);
    local_230 = (Object *)0x0;
    if (lVar10 != 0) {
      local_228 = (String *)0x0;
      local_230 = (Object *)lVar10;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') {
        local_230 = (Object *)0x0;
      }
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_228);
    }
  }
  TileSetAtlasSource::set_texture(uVar17,(Ref<Texture2D> *)&local_230);
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_230);
  pOVar11 = (Object *)EditorUndoRedoManager::get_singleton();
  local_230 = (Object *)0x0;
  String::parse_latin1((String *)&local_230,"");
  local_238 = 0;
  String::parse_latin1((String *)&local_238,"Merge TileSetAtlasSource");
  TTR((String *)&local_228,(String *)&local_238);
  EditorUndoRedoManager::create_action(pOVar11,(Ref<Texture2D> *)&local_228,0,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_238);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_230);
  iVar6 = TileSet::get_next_source_id();
  pOVar12 = *(Object **)(this + 0xdc0);
  if ((pOVar12 == (Object *)0x0) ||
     (local_228 = (String *)pOVar12, cVar5 = RefCounted::reference(), cVar5 == '\0')) {
    local_228 = (String *)0x0;
    pOVar12 = (Object *)0x0;
  }
  StringName::StringName((StringName *)&local_230,"add_source",false);
  pSVar3 = *(StringName **)(this + 0xdd8);
  Variant::Variant((Variant *)&local_1f8,pOVar12);
  Variant::Variant((Variant *)local_1e0,iVar6);
  local_1c0 = (undefined1  [16])0x0;
  pVVar16 = local_1b0;
  local_1c8 = 0;
  iVar14 = (int)(Variant *)&local_b8;
  local_b8 = (Variant *)&local_1f8;
  pVStack_b0 = (Variant *)local_1e0;
  EditorUndoRedoManager::add_do_methodp(pOVar11,pSVar3,(Variant **)&local_230,iVar14);
  do {
    pVVar1 = pVVar16 + -0x18;
    pVVar16 = pVVar16 + -0x18;
    if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
      Variant::_clear_internal();
    }
  } while (pVVar16 != (Variant *)&local_1f8);
  if ((StringName::configured != '\0') && (local_230 != (Object *)0x0)) {
    StringName::unref();
  }
  Ref<TileSetAtlasSource>::unref((Ref<TileSetAtlasSource> *)&local_228);
  StringName::StringName((StringName *)&local_228,"remove_source",false);
  pSVar3 = *(StringName **)(this + 0xdd8);
  Variant::Variant((Variant *)&local_b8,iVar6);
  local_a0[0] = 0;
  local_a0[1] = 0;
  local_98 = (undefined1  [16])0x0;
  local_108[0] = (Variant *)&local_b8;
  EditorUndoRedoManager::add_undo_methodp
            (pOVar11,pSVar3,(Variant **)&local_228,(int)(Variant *)local_108);
  if (Variant::needs_deinit[local_a0[0]] != '\0') {
    Variant::_clear_internal();
  }
  if (Variant::needs_deinit[(int)local_b8] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_228 != (String *)0x0)) {
    StringName::unref();
  }
  if ((this[0xdbc] != (AtlasMergingDialog)0x0) && (ItemList::get_selected_items(), local_220 != 0))
  {
    local_310 = 0;
    do {
      lVar10 = local_220;
      if (*(long *)(local_220 + -8) <= local_310) {
        LOCK();
        plVar2 = (long *)(local_220 + -0x10);
        *plVar2 = *plVar2 + -1;
        UNLOCK();
        if (*plVar2 == 0) {
          local_220 = 0;
          Memory::free_static((void *)(lVar10 + -0x10),false);
        }
        break;
      }
      iVar8 = (int)(Variant *)&local_1f8;
      ItemList::get_item_metadata(iVar8);
      iVar7 = Variant::operator_cast_to_int((Variant *)&local_1f8);
      if (Variant::needs_deinit[(int)local_1f8] != '\0') {
        Variant::_clear_internal();
      }
      TileSet::get_source((int)(Ref<Texture2D> *)&local_230);
      local_240 = (Object *)0x0;
      pOVar12 = local_230;
      if (local_230 != (Object *)0x0) {
        pOVar12 = (Object *)
                  __dynamic_cast(local_230,&Object::typeinfo,&TileSetAtlasSource::typeinfo,0);
        if (pOVar12 != (Object *)0x0) {
          local_240 = pOVar12;
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            local_240 = (Object *)0x0;
          }
          pOVar12 = local_240;
          if (local_230 == (Object *)0x0) goto LAB_0010195f;
        }
        cVar5 = RefCounted::unreference();
        pOVar18 = local_230;
        pOVar12 = local_240;
        if ((cVar5 != '\0') &&
           (cVar5 = predelete_handler(local_230), pOVar12 = local_240, cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar18 + 0x140))(pOVar18);
          Memory::free_static(pOVar18,false);
        }
      }
LAB_0010195f:
      StringName::StringName((StringName *)&local_230,"remove_source",false);
      pSVar3 = *(StringName **)(this + 0xdd8);
      Variant::Variant((Variant *)&local_1f8,iVar7);
      local_1e0[0] = 0;
      local_1e0[1] = 0;
      local_1d8 = (undefined1  [16])0x0;
      local_208[0] = (Variant *)&local_1f8;
      EditorUndoRedoManager::add_do_methodp
                (pOVar11,pSVar3,(Variant **)&local_230,(int)(Vector2i *)local_208);
      if (Variant::needs_deinit[local_1e0[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[(int)local_1f8] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_230 != (Object *)0x0)) {
        StringName::unref();
      }
      if ((pOVar12 == (Object *)0x0) ||
         (local_230 = pOVar12, cVar5 = RefCounted::reference(), pOVar18 = pOVar12, cVar5 == '\0')) {
        local_230 = (Object *)0x0;
        pOVar18 = (Object *)0x0;
      }
      StringName::StringName((StringName *)&local_238,"add_source",false);
      pSVar3 = *(StringName **)(this + 0xdd8);
      Variant::Variant((Variant *)&local_1a8,pOVar18);
      Variant::Variant((Variant *)apVStack_190,iVar7);
      local_178 = 0;
      local_170 = (undefined1  [16])0x0;
      pVVar16 = local_160;
      local_1f8 = (Variant *)&local_1a8;
      pVStack_1f0 = (Variant *)apVStack_190;
      EditorUndoRedoManager::add_undo_methodp(pOVar11,pSVar3,(Variant **)&local_238,iVar8);
      do {
        pVVar1 = pVVar16 + -0x18;
        pVVar16 = pVVar16 + -0x18;
        if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
          Variant::_clear_internal();
        }
      } while (pVVar16 != (Variant *)&local_1a8);
      if ((StringName::configured != '\0') && (local_238 != 0)) {
        StringName::unref();
      }
      iVar15 = 0;
      Ref<TileSetAtlasSource>::unref((Ref<TileSetAtlasSource> *)&local_230);
      iVar8 = (**(code **)(*(long *)pOVar12 + 0x268))(pOVar12);
      if (0 < iVar8) {
        do {
          local_210 = (Variant *)(**(code **)(*(long *)pOVar12 + 0x270))(pOVar12,iVar15);
          if (*(uint *)(this + 0xdc8) <= (uint)local_310) {
            _err_print_index_error
                      ("operator[]","./core/templates/local_vector.h",0xb2,local_310,
                       (ulong)*(uint *)(this + 0xdc8),"p_index","count","",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar4 = (code *)invalidInstructionException();
            (*pcVar4)();
          }
          puVar13 = (undefined8 *)
                    HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
                    ::operator[]((HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
                                  *)(local_310 * 0x30 + *(long *)(this + 0xdd0)),
                                 (Vector2i *)&local_210);
          StringName::StringName((StringName *)&local_230,"set_coords_level_tile_proxy",false);
          pSVar3 = *(StringName **)(this + 0xdd8);
          local_208[0] = local_210;
          local_1f8 = (Variant *)*puVar13;
          Variant::Variant((Variant *)&local_b8,iVar7);
          Variant::Variant((Variant *)local_a0,(Vector2i *)local_208);
          Variant::Variant(local_88,iVar6);
          Variant::Variant(local_70,(Vector2i *)&local_1f8);
          local_58 = 0;
          local_50 = (undefined1  [16])0x0;
          pVVar16 = (Variant *)local_40;
          local_1a8 = (Variant *)&local_b8;
          pVStack_1a0 = (Variant *)local_a0;
          local_198 = local_88;
          apVStack_190[0] = local_70;
          EditorUndoRedoManager::add_do_methodp
                    (pOVar11,pSVar3,(Variant **)&local_230,(int)(Variant *)&local_1a8);
          do {
            pVVar1 = pVVar16 + -0x18;
            pVVar16 = pVVar16 + -0x18;
            if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
              Variant::_clear_internal();
            }
          } while (pVVar16 != (Variant *)&local_b8);
          if ((StringName::configured != '\0') && (local_230 != (Object *)0x0)) {
            StringName::unref();
          }
          cVar5 = TileSet::has_coords_level_tile_proxy
                            (*(undefined8 *)(this + 0xdd8),iVar7,local_210);
          if (cVar5 == '\0') {
            StringName::StringName((StringName *)&local_230,"remove_coords_level_tile_proxy",false);
            pSVar3 = *(StringName **)(this + 0xdd8);
            local_1a8 = local_210;
            Variant::Variant((Variant *)local_108,iVar7);
            Variant::Variant(local_f0,(Vector2i *)&local_1a8);
            local_d0 = (undefined1  [16])0x0;
            pVVar16 = local_c0;
            local_d8 = 0;
            local_b8 = (Variant *)local_108;
            pVStack_b0 = local_f0;
            EditorUndoRedoManager::add_undo_methodp(pOVar11,pSVar3,(Variant **)&local_230,iVar14);
            do {
              pVVar1 = pVVar16 + -0x18;
              pVVar16 = pVVar16 + -0x18;
              if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                Variant::_clear_internal();
              }
            } while (pVVar16 != (Variant *)local_108);
            if ((StringName::configured != '\0') && (local_230 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          else {
            TileSet::get_coords_level_tile_proxy
                      ((String *)&local_238,*(undefined8 *)(this + 0xdd8),iVar7,local_210);
            iVar8 = (int)(String *)&local_238;
            pVVar16 = (Variant *)Array::operator[](iVar8);
            Variant::Variant((Variant *)&local_1a8,pVVar16);
            pVVar16 = (Variant *)Array::operator[](iVar8);
            Variant::Variant((Variant *)&local_1f8,pVVar16);
            StringName::StringName((StringName *)&local_230,"set_coords_level_tile_proxy",false);
            pSVar3 = *(StringName **)(this + 0xdd8);
            Variant::Variant(local_158,(Variant *)&local_1f8);
            Variant::Variant(local_140,(Variant *)&local_1a8);
            local_120 = (undefined1  [16])0x0;
            pVVar16 = local_110;
            local_128 = 0;
            local_b8 = local_158;
            pVStack_b0 = local_140;
            EditorUndoRedoManager::add_undo_methodp(pOVar11,pSVar3,(Variant **)&local_230,iVar14);
            do {
              pVVar1 = pVVar16 + -0x18;
              pVVar16 = pVVar16 + -0x18;
              if (Variant::needs_deinit[*(int *)pVVar1] != '\0') {
                Variant::_clear_internal();
              }
            } while (pVVar16 != local_158);
            if ((StringName::configured != '\0') && (local_230 != (Object *)0x0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[(int)local_1f8] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[(int)local_1a8] != '\0') {
              Variant::_clear_internal();
            }
            Array::~Array((Array *)&local_238);
          }
          iVar15 = iVar15 + 1;
          iVar8 = (**(code **)(*(long *)pOVar12 + 0x268))(pOVar12);
        } while (iVar15 < iVar8);
      }
      Ref<TileSetAtlasSource>::unref((Ref<TileSetAtlasSource> *)&local_240);
      local_310 = local_310 + 1;
    } while (local_220 != 0);
  }
  EditorUndoRedoManager::commit_action(SUB81(pOVar11,0));
  *(int *)(this + 0xdb8) = *(int *)(this + 0xdb8) + 1;
  Window::hide();
  Ref<Texture2D>::unref((Ref<Texture2D> *)&local_248);
  cVar5 = RefCounted::unreference();
  if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar9), cVar5 != '\0')) {
    (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
    Memory::free_static(pOVar9,false);
  }
LAB_00101e9c:
  if (local_40[0] != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* AtlasMergingDialog::_generate_merged(Vector<Ref<TileSetAtlasSource> > const&, int) [clone
   .part.0] */

void __thiscall
AtlasMergingDialog::_generate_merged(AtlasMergingDialog *this,Vector *param_1,int param_2)

{
  long *plVar1;
  undefined8 *puVar2;
  String *pSVar3;
  code *pcVar4;
  Object *pOVar5;
  uint uVar6;
  char cVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  void *pvVar16;
  Image *pIVar17;
  StringName *pSVar18;
  undefined8 uVar19;
  long lVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  uint uVar24;
  long *plVar25;
  int iVar26;
  long in_FS_OFFSET;
  float fVar27;
  float fVar28;
  undefined1 auVar29 [16];
  List *local_190;
  long local_160;
  Image *local_128;
  undefined8 *local_120;
  StringName local_118;
  undefined7 uStack_117;
  Image *local_110;
  long *local_108;
  long local_100;
  long local_f8;
  undefined4 local_f0;
  long local_e8;
  uint local_e0;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  ulong local_a8;
  long local_a0;
  undefined8 local_98;
  undefined8 local_90 [3];
  undefined1 local_78 [2] [16];
  ulong local_58;
  undefined1 local_50 [16];
  long local_40;
  
  lVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Image::create_empty(&local_128,1,1);
  lVar13 = *(long *)(param_1 + 8);
  local_c8 = 0;
  while (lVar13 != 0) {
    if (*(long *)(lVar13 + -8) <= lVar20) {
      local_c0 = 0;
      if (lVar13 == 0) goto LAB_00102309;
      local_160 = 0;
      iVar22 = 0;
      goto LAB_00102378;
    }
    uVar12 = TileSetAtlasSource::get_texture_region_size();
    iVar22 = (int)((ulong)uVar12 >> 0x20);
    if (iVar22 < local_c8._4_4_) {
      iVar22 = local_c8._4_4_;
    }
    if ((int)local_c8 < (int)uVar12) {
      local_c8._0_4_ = (int)uVar12;
    }
    lVar13 = *(long *)(param_1 + 8);
    lVar20 = lVar20 + 1;
    local_c8 = CONCAT44(iVar22,(int)local_c8);
  }
  local_c0 = 0;
  goto LAB_00102309;
LAB_00102a90:
  do {
    if (*(long *)(lVar13 + -8) <= local_160) break;
    puVar2 = (undefined8 *)(lVar13 + local_160 * 8);
    uVar21 = *(uint *)(this + 0xdc8);
    if (uVar21 <= (uint)local_160) {
LAB_0010283a:
      _err_print_index_error
                ("operator[]","./core/templates/local_vector.h",0xb2,local_160,(ulong)uVar21,
                 "p_index","count","",false,true);
      _err_flush_stdout();
                    /* WARNING: Does not return */
      pcVar4 = (code *)invalidInstructionException();
      (*pcVar4)();
    }
    plVar25 = *(long **)(local_160 * 0x30 + *(long *)(this + 0xdd0) + 0x18);
    if (plVar25 != (long *)0x0) {
      do {
        local_a8 = plVar25[2];
        iVar22 = 0;
        local_a0 = plVar25[3];
        while( true ) {
          iVar9 = (**(code **)(*(long *)*puVar2 + 0x280))((long *)*puVar2,local_a8);
          if (iVar9 <= iVar22) break;
          iVar9 = (**(code **)(*(long *)*puVar2 + 0x288))((long *)*puVar2,local_a8,iVar22);
          bVar8 = SUB81((List<PropertyInfo,DefaultAllocator> *)&local_120,0);
          if (iVar9 == 0) {
            uVar12 = *(undefined8 *)(this + 0xdc0);
            uVar19 = TileSetAtlasSource::get_tile_size_in_atlas(*puVar2,local_a8);
            TileSetAtlasSource::create_tile(uVar12,local_a0,uVar19);
            iVar9 = TileSetAtlasSource::get_tile_animation_frames_count(*puVar2,local_a8);
            TileSetAtlasSource::set_tile_animation_frames_count
                      (*(undefined8 *)(this + 0xdc0),local_a0,iVar9);
            if (0 < iVar9) {
              iVar26 = 0;
              do {
                uVar12 = *(undefined8 *)(this + 0xdc0);
                TileSetAtlasSource::get_tile_animation_frame_duration(*puVar2,local_a8,iVar26);
                iVar10 = iVar26 + 1;
                TileSetAtlasSource::set_tile_animation_frame_duration(uVar12,local_a0,iVar26);
                iVar26 = iVar10;
              } while (iVar9 != iVar10);
            }
            uVar12 = *(undefined8 *)(this + 0xdc0);
            TileSetAtlasSource::get_tile_animation_speed(*puVar2,local_a8);
            TileSetAtlasSource::set_tile_animation_speed(uVar12,local_a0);
            uVar12 = *(undefined8 *)(this + 0xdc0);
            uVar11 = TileSetAtlasSource::get_tile_animation_mode(*puVar2,local_a8);
            iVar26 = 0;
            TileSetAtlasSource::set_tile_animation_mode(uVar12,local_a0,uVar11);
            local_190 = (List *)TileSetAtlasSource::get_tile_data(*puVar2,local_a8,0);
            local_120 = (undefined8 *)0x0;
            Object::get_property_list(local_190,bVar8);
            uVar12 = *(undefined8 *)(this + 0xdc0);
          }
          else {
            iVar26 = TileSetAtlasSource::create_alternative_tile
                               (*(undefined8 *)(this + 0xdc0),local_a0,iVar22);
            local_190 = (List *)TileSetAtlasSource::get_tile_data(*puVar2,local_a8,iVar9);
            local_120 = (undefined8 *)0x0;
            Object::get_property_list(local_190,bVar8);
            uVar12 = *(undefined8 *)(this + 0xdc0);
            if (iVar26 == -1) {
              iVar26 = iVar9;
            }
          }
          pSVar18 = (StringName *)TileSetAtlasSource::get_tile_data(uVar12,local_a0,iVar26);
          if ((local_120 != (undefined8 *)0x0) &&
             (puVar23 = (undefined4 *)*local_120, puVar23 != (undefined4 *)0x0)) {
            do {
              while( true ) {
                local_100 = 0;
                local_108 = (long *)CONCAT44(local_108._4_4_,*puVar23);
                if (*(long *)(puVar23 + 2) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_100,(CowData *)(puVar23 + 2));
                }
                StringName::StringName((StringName *)&local_f8,(StringName *)(puVar23 + 4));
                local_f0 = puVar23[6];
                local_e8 = 0;
                if (*(long *)(puVar23 + 8) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_e8,(CowData *)(puVar23 + 8));
                }
                local_e0 = puVar23[10];
                if ((local_e0 & 2) == 0) break;
                StringName::StringName((StringName *)&local_110,(String *)&local_100,false);
                Object::get((StringName *)&local_98,(bool *)local_190);
                if ((StringName::configured != '\0') && (local_110 != (Image *)0x0)) {
                  StringName::unref();
                }
                StringName::StringName((StringName *)&local_110,(String *)&local_100,false);
                StringName::StringName(&local_118,"TileData",false);
                ClassDB::class_get_default_property_value
                          ((StringName *)local_78,&local_118,(bool *)&local_110);
                if (StringName::configured != '\0') {
                  if (CONCAT71(uStack_117,local_118) != 0) {
                    StringName::unref();
                    if (StringName::configured == '\0') goto LAB_00102cf4;
                  }
                  if (local_110 != (Image *)0x0) {
                    StringName::unref();
                  }
                }
LAB_00102cf4:
                if (local_78[0]._0_4_ != 0) {
                  local_50 = (undefined1  [16])0x0;
                  local_110 = (Image *)((ulong)local_110 & 0xffffffff00000000);
                  local_118 = (StringName)0x1;
                  local_58 = local_58 & 0xffffffff00000000;
                  Variant::evaluate((Operator *)&local_110,(Variant *)&local_98,(Variant *)local_78,
                                    (Variant *)&local_58,(bool *)&local_118);
                  bVar8 = Variant::operator_cast_to_bool((Variant *)&local_58);
                  if (Variant::needs_deinit[(int)local_58] != '\0') {
                    Variant::_clear_internal();
                  }
                  if (bVar8) {
                    if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
                      Variant::_clear_internal();
                    }
                    if (Variant::needs_deinit[(int)local_98] != '\0') {
                      Variant::_clear_internal();
                    }
                    break;
                  }
                }
                StringName::StringName((StringName *)&local_110,(String *)&local_100,false);
                Object::set(pSVar18,(Variant *)&local_110,(bool *)&local_98);
                if ((StringName::configured != '\0') && (local_110 != (Image *)0x0)) {
                  StringName::unref();
                }
                if (Variant::needs_deinit[(int)local_78[0]._0_4_] != '\0') {
                  Variant::_clear_internal();
                }
                if (Variant::needs_deinit[(int)local_98] != '\0') {
                  Variant::_clear_internal();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_e8);
                if ((StringName::configured != '\0') && (local_f8 != 0)) {
                  StringName::unref();
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
LAB_00102d94:
                puVar23 = *(undefined4 **)(puVar23 + 0xc);
                if (puVar23 == (undefined4 *)0x0) goto LAB_00102eb5;
              }
              lVar13 = local_e8;
              if (local_e8 != 0) {
                LOCK();
                plVar1 = (long *)(local_e8 + -0x10);
                *plVar1 = *plVar1 + -1;
                UNLOCK();
                if (*plVar1 == 0) {
                  local_e8 = 0;
                  Memory::free_static((void *)(lVar13 + -0x10),false);
                }
              }
              if ((StringName::configured != '\0') && (local_f8 != 0)) {
                StringName::unref();
              }
              lVar13 = local_100;
              if (local_100 == 0) goto LAB_00102d94;
              LOCK();
              plVar1 = (long *)(local_100 + -0x10);
              *plVar1 = *plVar1 + -1;
              UNLOCK();
              if (*plVar1 != 0) goto LAB_00102d94;
              local_100 = 0;
              Memory::free_static((void *)(lVar13 + -0x10),false);
              puVar23 = *(undefined4 **)(puVar23 + 0xc);
            } while (puVar23 != (undefined4 *)0x0);
          }
LAB_00102eb5:
          List<PropertyInfo,DefaultAllocator>::~List
                    ((List<PropertyInfo,DefaultAllocator> *)&local_120);
          iVar22 = iVar22 + 1;
        }
        plVar25 = (long *)*plVar25;
      } while (plVar25 != (long *)0x0);
      lVar13 = *(long *)(param_1 + 8);
    }
    local_160 = local_160 + 1;
  } while (lVar13 != 0);
LAB_00103141:
  if (local_128 != (Image *)0x0) {
    cVar7 = RefCounted::unreference();
    if (cVar7 != '\0') {
      memdelete<Image>(local_128);
    }
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00102378:
  do {
    lVar20 = *(long *)(lVar13 + -8);
    if (lVar20 <= local_160) {
      pSVar3 = *(String **)(this + 0xdc0);
      if (lVar20 < 1) goto LAB_0010230c;
      Resource::get_name();
      Resource::set_name(pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_108);
      uVar12 = *(undefined8 *)(this + 0xdc0);
      ImageTexture::create_from_image(&local_118);
      local_110 = (Image *)0x0;
      if (CONCAT71(uStack_117,local_118) != 0) {
        pIVar17 = (Image *)__dynamic_cast(CONCAT71(uStack_117,local_118),&Object::typeinfo,
                                          &Texture2D::typeinfo,0);
        if (pIVar17 != (Image *)0x0) {
          local_108 = (long *)0x0;
          local_110 = pIVar17;
          cVar7 = RefCounted::reference();
          if (cVar7 == '\0') {
            local_110 = (Image *)0x0;
          }
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_108);
        }
      }
      TileSetAtlasSource::set_texture(uVar12);
      Ref<Texture2D>::unref((Ref<Texture2D> *)&local_110);
      if (CONCAT71(uStack_117,local_118) != 0) {
        cVar7 = RefCounted::unreference();
        if (cVar7 != '\0') {
          pOVar5 = (Object *)CONCAT71(uStack_117,local_118);
          cVar7 = predelete_handler(pOVar5);
          if (cVar7 != '\0') {
            (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
            Memory::free_static(pOVar5,false);
          }
        }
      }
      local_160 = 0;
      TileSetAtlasSource::set_texture_region_size(*(undefined8 *)(this + 0xdc0),local_c8);
      lVar13 = *(long *)(param_1 + 8);
      if (lVar13 == 0) goto LAB_00103141;
      goto LAB_00102a90;
    }
    puVar2 = (undefined8 *)(lVar13 + local_160 * 8);
    TileSetAtlasSource::get_texture();
    (**(code **)(*local_108 + 0x210))((Rect2i *)&local_110);
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_108);
    iVar9 = Image::get_format();
    if (iVar9 != 5) {
      Image::convert(local_110,5);
    }
    uVar21 = *(uint *)(this + 0xdc8);
    pvVar16 = *(void **)(this + 0xdd0);
    if (uVar21 == *(uint *)(this + 0xdcc)) {
      uVar15 = (ulong)(uVar21 * 2);
      if (uVar21 * 2 == 0) {
        uVar15 = 1;
      }
      *(int *)(this + 0xdcc) = (int)uVar15;
      pvVar16 = (void *)Memory::realloc_static(pvVar16,uVar15 * 0x30,false);
      *(void **)(this + 0xdd0) = pvVar16;
      if (pvVar16 == (void *)0x0) {
        _err_print_error("push_back","./core/templates/local_vector.h",0x41,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar21 = *(uint *)(this + 0xdc8);
    }
    *(uint *)(this + 0xdc8) = uVar21 + 1;
    lVar13 = 1;
    *(undefined8 *)((long)pvVar16 + (ulong)uVar21 * 0x30 + 0x28) = 0;
    *(undefined1 (*) [16])((long)pvVar16 + (ulong)uVar21 * 0x30 + 8) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])((long)pvVar16 + (ulong)uVar21 * 0x30 + 0x18) = (undefined1  [16])0x0;
    do {
      if (0x16 < *(uint *)(hash_table_size_primes + lVar13 * 4)) {
        *(int *)((long)pvVar16 + (ulong)uVar21 * 0x30 + 0x28) = (int)lVar13;
        goto LAB_00102490;
      }
      lVar13 = lVar13 + 1;
    } while (lVar13 != 0x1d);
    _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                     "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0);
LAB_00102490:
    iVar26 = 0;
    uVar6 = 0;
    iVar9 = 0;
    while( true ) {
      iVar10 = (**(code **)(*(long *)*puVar2 + 0x268))();
      if (iVar10 <= iVar26) break;
      local_b8 = (**(code **)(*(long *)*puVar2 + 0x270))((long *)*puVar2,iVar26);
      local_58 = TileSetAtlasSource::get_tile_size_in_atlas(*puVar2,local_b8);
      uVar12 = Vector2i::operator+((Vector2i *)&local_b8,(Vector2i *)&local_58);
      iVar10 = (int)((ulong)uVar12 >> 0x20);
      if (iVar10 <= iVar9) {
        iVar10 = iVar9;
      }
      uVar21 = (uint)uVar12;
      if ((int)(uint)uVar12 <= (int)uVar6) {
        uVar21 = uVar6;
      }
      uVar12 = TileSetAtlasSource::get_tile_size_in_atlas(*puVar2,local_b8);
      local_98 = Vector2i::operator+((Vector2i *)&local_c0,(Vector2i *)&local_b8);
      local_90[0] = uVar12;
      uVar24 = 0;
      uVar6 = uVar21;
      while( true ) {
        iVar9 = TileSetAtlasSource::get_tile_animation_frames_count(*puVar2,local_b8);
        if (iVar9 <= (int)uVar24) break;
        uVar21 = uVar24 + 1;
        auVar29 = TileSetAtlasSource::get_tile_texture_region(*puVar2,local_b8,uVar24);
        local_78[0] = auVar29;
        local_b0 = Vector2i::operator*((Vector2i *)&local_98,(Vector2i *)&local_c8);
        if (uVar24 != 0) {
          local_a8 = (ulong)uVar24;
          local_58 = Vector2i::operator*((Vector2i *)(local_78[0] + 8),(Vector2i *)&local_a8);
          Vector2i::operator+=((Vector2i *)&local_b0,(Vector2i *)&local_58);
          if ((int)uVar6 < (int)uVar21) {
            uVar6 = uVar21;
          }
        }
        uVar12 = Vector2i::operator*((Vector2i *)local_90,(Vector2i *)&local_c8);
        local_50._0_8_ = uVar12;
        local_58 = local_b0;
        auVar29 = Rect2i::operator_cast_to_Rect2((Rect2i *)&local_58);
        fVar27 = auVar29._8_4_ + auVar29._0_4_;
        iVar9 = Image::get_width();
        if ((float)iVar9 < fVar27) {
LAB_00102634:
          pIVar17 = local_128;
          Image::get_height();
          iVar9 = Image::get_width();
          if (fVar27 <= (float)iVar9) {
            fVar27 = (float)iVar9;
          }
          Image::crop((int)pIVar17,(int)fVar27);
        }
        else {
          iVar9 = Image::get_height();
          if ((float)iVar9 < auVar29._12_4_ + auVar29._4_4_) goto LAB_00102634;
        }
        pIVar17 = local_128;
        fVar27 = auVar29._8_4_ * (float)_LC89;
        fVar28 = auVar29._12_4_ * _LC89._4_4_;
        local_a8 = Vector2i::operator/((Vector2i *)(local_78[0] + 8),2);
        uVar12 = Vector2i::operator_cast_to_Vector2((Vector2i *)&local_a8);
        local_d0 = CONCAT44((fVar28 + auVar29._4_4_) - (float)((ulong)uVar12 >> 0x20),
                            (fVar27 + auVar29._0_4_) - (float)uVar12);
        local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_d0);
        Image::blit_rect(pIVar17,(Rect2i *)&local_110,(Vector2i *)local_78);
        uVar24 = uVar21;
      }
      uVar21 = *(uint *)(this + 0xdc8);
      if (uVar21 <= (uint)local_160) goto LAB_0010283a;
      iVar26 = iVar26 + 1;
      puVar14 = (undefined8 *)
                HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
                ::operator[]((HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
                              *)(local_160 * 0x30 + *(long *)(this + 0xdd0)),(Vector2i *)&local_b8);
      *puVar14 = local_98;
      iVar9 = iVar10;
    }
    if (iVar22 < iVar9) {
      iVar22 = iVar9;
    }
    if ((int)(uVar6 + (int)local_c0) < param_2) {
      local_c0 = CONCAT44(local_c0._4_4_,uVar6 + (int)local_c0);
    }
    else {
      uVar21 = local_c0._4_4_ + iVar22;
      iVar22 = 0;
      local_c0 = (ulong)uVar21 << 0x20;
    }
    if (local_110 != (Image *)0x0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
        memdelete<Image>(local_110);
      }
    }
    lVar13 = *(long *)(param_1 + 8);
    local_160 = local_160 + 1;
  } while (lVar13 != 0);
LAB_00102309:
  lVar20 = 0;
LAB_0010230c:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,0,lVar20,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}



/* AtlasMergingDialog::_generate_merged(Vector<Ref<TileSetAtlasSource> > const&, int) */

void __thiscall
AtlasMergingDialog::_generate_merged(AtlasMergingDialog *this,Vector *param_1,int param_2)

{
  undefined8 uVar1;
  char cVar2;
  Resource *this_00;
  long lVar3;
  Resource *pRVar4;
  Object *pOVar5;
  Object *pOVar6;
  byte bVar7;
  
  bVar7 = 0;
  this_00 = (Resource *)operator_new(0x2f8,"");
  pRVar4 = this_00;
  for (lVar3 = 0x5f; lVar3 != 0; lVar3 = lVar3 + -1) {
    *(undefined8 *)pRVar4 = 0;
    pRVar4 = pRVar4 + (ulong)bVar7 * -0x10 + 8;
  }
  Resource::Resource(this_00);
  *(undefined8 *)(this_00 + 0x240) = 0;
  *(code **)this_00 = TextureRect::set_texture;
  uVar1 = _LC95;
  this_00[0x248] = (Resource)0x1;
  *(undefined8 *)(this_00 + 0x268) = uVar1;
  uVar1 = _LC68;
  *(undefined8 *)(this_00 + 0x250) = 0;
  *(undefined8 *)(this_00 + 600) = 0;
  *(undefined8 *)(this_00 + 0x260) = 0;
  *(undefined8 *)(this_00 + 0x298) = uVar1;
  *(undefined8 *)(this_00 + 0x2a8) = 0;
  *(undefined8 *)(this_00 + 0x2d8) = uVar1;
  this_00[0x2e0] = (Resource)0x1;
  *(undefined8 *)(this_00 + 0x2e8) = 0;
  this_00[0x2f0] = (Resource)0x0;
  *(undefined1 (*) [16])(this_00 + 0x278) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x288) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x2b8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this_00 + 0x2c8) = (undefined1  [16])0x0;
  postinitialize_handler((Object *)this_00);
  cVar2 = RefCounted::init_ref();
  if (cVar2 == '\0') {
    pOVar6 = *(Object **)(this + 0xdc0);
    if (pOVar6 == (Object *)0x0) goto LAB_00103313;
    *(undefined8 *)(this + 0xdc0) = 0;
    cVar2 = RefCounted::unreference();
    if (cVar2 == '\0') goto LAB_00103313;
    this_00 = (Resource *)0x0;
    cVar2 = predelete_handler(pOVar6);
    if (cVar2 == '\0') goto LAB_00103313;
LAB_001033fb:
    (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
    Memory::free_static(pOVar6,false);
    pOVar5 = (Object *)this_00;
    if (this_00 == (Resource *)0x0) goto LAB_00103313;
  }
  else {
    pOVar6 = *(Object **)(this + 0xdc0);
    pOVar5 = pOVar6;
    if (this_00 != (Resource *)pOVar6) {
      *(Resource **)(this + 0xdc0) = this_00;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
        *(undefined8 *)(this + 0xdc0) = 0;
      }
      pOVar5 = (Object *)this_00;
      if (((pOVar6 != (Object *)0x0) && (cVar2 = RefCounted::unreference(), cVar2 != '\0')) &&
         (cVar2 = predelete_handler(pOVar6), cVar2 != '\0')) goto LAB_001033fb;
    }
  }
  cVar2 = RefCounted::unreference();
  if ((cVar2 != '\0') && (cVar2 = predelete_handler(pOVar5), cVar2 != '\0')) {
    (**(code **)(*(long *)pOVar5 + 0x140))(pOVar5);
    Memory::free_static(pOVar5,false);
  }
LAB_00103313:
  LocalVector<HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>,unsigned_int,false,false>
  ::resize((LocalVector<HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>,unsigned_int,false,false>
            *)(this + 0xdc8),0);
  if ((*(long *)(param_1 + 8) != 0) && (1 < *(long *)(*(long *)(param_1 + 8) + -8))) {
    _generate_merged(this,param_1,param_2);
    return;
  }
  return;
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



/* AtlasMergingDialog::_update_texture() */

void __thiscall AtlasMergingDialog::_update_texture(AtlasMergingDialog *this)

{
  long *plVar1;
  undefined8 *puVar2;
  Object *pOVar3;
  Ref *pRVar4;
  char cVar5;
  int iVar6;
  Object *pOVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  Object *local_80 [2];
  long local_70;
  undefined8 local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_selected_items();
  if ((local_70 == 0) || (lVar9 = *(long *)(local_70 + -8), lVar9 < 2)) {
    local_60 = 0;
    _generate_merged(this,(Vector *)&local_68,*(int *)(this + 0xde0));
    local_68 = 0;
    TextureRect::set_texture(*(Ref **)(this + 0xe00));
    Ref<Texture2D>::unref((Ref<Texture2D> *)&local_68);
    CanvasItem::hide();
    CanvasItem::show();
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe18),0));
  }
  else {
    local_60 = 0;
    for (lVar8 = 0; lVar8 < lVar9; lVar8 = lVar8 + 1) {
      ItemList::get_item_metadata((int)(Variant *)local_58);
      Variant::operator_cast_to_int((Variant *)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      TileSet::get_source((int)(Ref<Texture2D> *)local_80);
      pOVar7 = local_80[0];
      if (((local_80[0] != (Object *)0x0) &&
          (pOVar7 = (Object *)
                    __dynamic_cast(local_80[0],&Object::typeinfo,&TileSetAtlasSource::typeinfo,0),
          pOVar7 != (Object *)0x0)) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
        pOVar7 = (Object *)0x0;
      }
      if (local_60 == 0) {
        lVar9 = 1;
      }
      else {
        lVar9 = *(long *)(local_60 + -8) + 1;
      }
      iVar6 = CowData<Ref<TileSetAtlasSource>>::resize<false>
                        ((CowData<Ref<TileSetAtlasSource>> *)&local_60,lVar9);
      if (iVar6 == 0) {
        if (local_60 == 0) {
          lVar10 = -1;
          lVar9 = 0;
LAB_001039f2:
          _err_print_index_error
                    ("set","./core/templates/cowdata.h",0xcf,lVar10,lVar9,"p_index","size()","",
                     false,false);
          goto joined_r0x00103770;
        }
        lVar9 = *(long *)(local_60 + -8);
        lVar10 = lVar9 + -1;
        if (lVar10 < 0) goto LAB_001039f2;
        CowData<Ref<TileSetAtlasSource>>::_copy_on_write
                  ((CowData<Ref<TileSetAtlasSource>> *)&local_60);
        puVar2 = (undefined8 *)(local_60 + lVar10 * 8);
        pOVar3 = (Object *)*puVar2;
        if (pOVar7 == pOVar3) goto joined_r0x00103770;
        *puVar2 = pOVar7;
        if (pOVar7 != (Object *)0x0) {
          cVar5 = RefCounted::reference();
          if (cVar5 == '\0') {
            *puVar2 = 0;
            if (pOVar3 != (Object *)0x0) {
              cVar5 = RefCounted::unreference();
              goto joined_r0x00103812;
            }
          }
          else if (pOVar3 != (Object *)0x0) {
            cVar5 = RefCounted::unreference();
joined_r0x00103812:
            if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar3), cVar5 != '\0'))
            goto LAB_001037d1;
          }
          cVar5 = RefCounted::unreference();
          goto joined_r0x0010370f;
        }
        if (((pOVar3 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
           (cVar5 = predelete_handler(pOVar3), cVar5 != '\0')) {
LAB_001037d1:
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
          goto joined_r0x00103770;
        }
      }
      else {
        _err_print_error("push_back","./core/templates/vector.h",0x142,
                         "Condition \"err\" is true. Returning: true",0,0);
joined_r0x00103770:
        if (pOVar7 != (Object *)0x0) {
          cVar5 = RefCounted::unreference();
joined_r0x0010370f:
          if ((cVar5 != '\0') && (cVar5 = predelete_handler(pOVar7), cVar5 != '\0')) {
            (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
            Memory::free_static(pOVar7,false);
          }
        }
      }
      if (((local_80[0] != (Object *)0x0) &&
          (cVar5 = RefCounted::unreference(), pOVar7 = local_80[0], cVar5 != '\0')) &&
         (cVar5 = predelete_handler(local_80[0]), cVar5 != '\0')) {
        (**(code **)(*(long *)pOVar7 + 0x140))(pOVar7);
        Memory::free_static(pOVar7,false);
      }
      if (local_70 == 0) break;
      lVar9 = *(long *)(local_70 + -8);
    }
    _generate_merged(this,(Vector *)&local_68,*(int *)(this + 0xde0));
    pRVar4 = *(Ref **)(this + 0xe00);
    TileSetAtlasSource::get_texture();
    TextureRect::set_texture(pRVar4);
    Ref<Texture2D>::unref((Ref<Texture2D> *)local_80);
    CanvasItem::show();
    CanvasItem::hide();
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xd88),0));
    BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xe18),0));
    CowData<Ref<TileSetAtlasSource>>::_unref((CowData<Ref<TileSetAtlasSource>> *)&local_60);
  }
  lVar9 = local_70;
  if (local_70 != 0) {
    LOCK();
    plVar1 = (long *)(local_70 + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      local_70 = 0;
      Memory::free_static((void *)(lVar9 + -0x10),false);
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AtlasMergingDialog::_set(StringName const&, Variant const&) */

undefined4 __thiscall
AtlasMergingDialog::_set(AtlasMergingDialog *this,StringName *param_1,Variant *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = StringName::operator==(param_1,"next_line_after_column");
  if ((char)uVar1 != '\0') {
    if (*(int *)param_2 == 2) {
      iVar2 = Variant::operator_cast_to_int(param_2);
      *(int *)(this + 0xde0) = iVar2;
      _update_texture(this);
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



/* AtlasMergingDialog::_notification(int) */

void __thiscall AtlasMergingDialog::_notification(AtlasMergingDialog *this,int param_1)

{
  char cVar1;
  
  if (param_1 != 0x1e) {
    return;
  }
  cVar1 = Window::is_visible();
  if (cVar1 == '\0') {
    return;
  }
  _update_texture(this);
  return;
}



/* AtlasMergingDialog::_property_changed(StringName const&, Variant const&, String const&, bool) */

void AtlasMergingDialog::_property_changed
               (StringName *param_1,Variant *param_2,String *param_3,bool param_4)

{
  char cVar1;
  int iVar2;
  
  cVar1 = StringName::operator==((StringName *)param_2,"next_line_after_column");
  if ((cVar1 != '\0') && (*(int *)param_3 == 2)) {
    iVar2 = Variant::operator_cast_to_int((Variant *)param_3);
    *(int *)(param_1 + 0xde0) = iVar2;
    _update_texture((AtlasMergingDialog *)param_1);
    return;
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
  
  return (uint)CONCAT71(0x10d4,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d4,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d4,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d4,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x10d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* AtlasMergingDialog::_property_can_revertv(StringName const&) const */

undefined8 AtlasMergingDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* AtlasMergingDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 AtlasMergingDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void, StringName const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AtlasMergingDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void, StringName const&, Variant const&, String
   const&, bool>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::get_argument_count
          (CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
           *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void>::get_argument_count
          (CallableCustomMethodPointer<AtlasMergingDialog,void> *this,bool *param_1)

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



/* CallableCustomMethodPointer<AtlasMergingDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AtlasMergingDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void, StringName const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
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



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00111008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* HSplitContainer::_property_can_revertv(StringName const&) const */

undefined8 HSplitContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00111008 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010c920;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0010c920;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00111010 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00111018 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
      Resource::~Resource((Resource *)this);
      return;
    }
  }
  Resource::~Resource((Resource *)this);
  return;
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
LAB_001041c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001041c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010422e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010422e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void>::get_object
          (CallableCustomMethodPointer<AtlasMergingDialog,void> *this)

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
      goto LAB_0010435d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010435d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010435d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void, StringName const&, Variant const&, String
   const&, bool>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::get_object(CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
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
      goto LAB_0010445d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010445d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010445d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&>::get_object
          (CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&> *this)

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
      goto LAB_0010455d;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010455d;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010455d:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* AtlasMergingDialog::_validate_propertyv(PropertyInfo&) const */

void AtlasMergingDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00111020 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_00111020 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */

void VBoxContainer::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  CanvasItem::_validate_property(param_1);
  Control::_validate_property(param_1);
  if ((code *)PTR__validate_property_00111028 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00111030 == Control::_validate_property) {
    return;
  }
  SplitContainer::_validate_property(param_1);
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
    uVar1 = (uint)CONCAT71(0x10d5,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d5,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d5,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d5,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x10d5,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d3,in_RSI == &SplitContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d5,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d5,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::_setv(StringName const&, Variant const&) */

undefined8 VBoxContainer::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  uVar1 = CanvasItem::_set(param_1,param_2);
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__set_00111038 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00111038 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00111040 != Window::_notification) {
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
  if ((code *)PTR__notification_00111040 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00104b08) */
/* HSplitContainer::_getv(StringName const&, Variant&) const */

undefined8 HSplitContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00111048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x00104b78) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00111048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* AtlasMergingDialog::is_class_ptr(void*) const */

uint AtlasMergingDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x10d4,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d4,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d4,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d4,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x10d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* AtlasMergingDialog::_getv(StringName const&, Variant&) const */

ulong __thiscall
AtlasMergingDialog::_getv(AtlasMergingDialog *this,StringName *param_1,Variant *param_2)

{
  uint uVar1;
  ulong uVar2;
  long in_FS_OFFSET;
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = StringName::operator==(param_1,"next_line_after_column");
  if ((char)uVar1 == '\0') {
    if ((code *)PTR__get_00111010 != Object::_get) {
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar2 = Window::_get((StringName *)this,(Variant *)param_1);
        return uVar2;
      }
      goto LAB_00104cfa;
    }
  }
  else {
    Variant::Variant((Variant *)local_48,*(int *)(this + 0xde0));
    if (Variant::needs_deinit[*(int *)param_2] != '\0') {
      Variant::_clear_internal();
    }
    *(undefined4 *)param_2 = local_48[0];
    *(undefined8 *)(param_2 + 8) = local_40;
    *(undefined8 *)(param_2 + 0x10) = uStack_38;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return (ulong)uVar1;
  }
LAB_00104cfa:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
      if (StringName::configured == '\0') goto LAB_00104d50;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104d50:
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
      if (StringName::configured == '\0') goto LAB_00104db0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_00104db0:
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
    if ((code *)PTR__notification_00111050 != Container::_notification) {
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
  if ((code *)PTR__notification_00111050 == Container::_notification) {
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
    if ((code *)PTR__notification_00111058 != Container::_notification) {
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
  if ((code *)PTR__notification_00111058 == Container::_notification) {
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



/* AtlasMergingDialog::_get_class_namev() const */

undefined8 * AtlasMergingDialog::_get_class_namev(void)

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
LAB_001050c3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001050c3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"AtlasMergingDialog");
      goto LAB_0010512e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"AtlasMergingDialog");
LAB_0010512e:
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
LAB_001051b3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001051b3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_0010521e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_0010521e:
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
LAB_001052a3:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_001052a3;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
      goto LAB_0010530e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HSplitContainer");
LAB_0010530e:
  return &_get_class_namev()::_class_name_static;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = predelete_handler;
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
      if (StringName::configured == '\0') goto LAB_0010540f;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010540f:
  Control::~Control((Control *)this);
  return;
}



/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

{
  Object *pOVar1;
  char cVar2;
  bool bVar3;
  
  *(code **)this = predelete_handler;
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
      if (StringName::configured == '\0') goto LAB_001055bf;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_001055bf:
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



/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

{
  long *plVar1;
  long lVar2;
  
  *(code **)this = Memory::free_static;
  if (*(long *)(this + 0x250) != 0) {
    LOCK();
    plVar1 = (long *)(*(long *)(this + 0x250) + -0x10);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      lVar2 = *(long *)(this + 0x250);
      *(undefined8 *)(this + 0x250) = 0;
      Memory::free_static((void *)(lVar2 + -0x10),false);
    }
  }
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x268);
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



/* WARNING: Removing unreachable block (ram,0x00105b50) */
/* String vformat<String, int>(String const&, String const, int const) */

undefined8 * vformat<String,int>(undefined8 *param_1,bool *param_2,String *param_3,int param_4)

{
  Variant *pVVar1;
  Variant *pVVar2;
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
  Variant::Variant(local_70,param_4);
  local_58 = 0;
  local_50 = (undefined1  [16])0x0;
  Array::Array(local_d0);
  iVar3 = (int)local_d0;
  Array::resize(iVar3);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_88);
  pVVar2 = (Variant *)Array::operator[](iVar3);
  Variant::operator=(pVVar2,local_70);
  String::sprintf((Array *)local_c8,param_2);
  *param_1 = local_c8[0];
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



/* AtlasMergingDialog::get_class() const */

void AtlasMergingDialog::get_class(void)

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



/* CallableCustomMethodPointer<AtlasMergingDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void>::call
          (CallableCustomMethodPointer<AtlasMergingDialog,void> *this,Variant **param_1,int param_2,
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
      goto LAB_001064df;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_001064df;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x001064b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_00106590;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_001064df:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC48,"./core/object/callable_method_pointer.h",0x67,
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
LAB_00106590:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void, StringName const&, Variant const&, String
   const&, bool>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::call(CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
       *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  CowData<char32_t> local_78 [8];
  CowData<char32_t> local_70 [8];
  undefined8 local_68;
  Variant local_60;
  undefined7 uStack_5f;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar5 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar5 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_60 = (Variant)0x0;
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
        if ((uint)param_2 < 5) {
          if (param_2 == 4) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar7 & 1) != 0) {
              pcVar7 = *(code **)(pcVar7 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[3],1);
            uVar3 = _LC49;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            bVar8 = Variant::operator_cast_to_bool(param_1[3]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],4);
            uVar3 = _LC50;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_String((Variant *)&local_68);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],0);
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = 1;
            }
            Variant::Variant((Variant *)local_58,param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x15);
            uVar3 = _LC52;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            Variant::operator_cast_to_StringName(&local_60);
            (*pcVar7)((long *)(lVar1 + lVar2),&local_60,(Variant *)local_58,(Variant *)&local_68,
                      bVar8);
            if ((StringName::configured != '\0') && (CONCAT71(uStack_5f,local_60) != 0)) {
              StringName::unref();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 4;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 4;
        }
        goto LAB_0010666c;
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
  String::operator+((String *)&local_60,(String *)local_70);
  _err_print_error(&_LC48,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   &local_60,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref(local_70);
  CowData<char32_t>::_unref(local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_0010666c:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<AtlasMergingDialog, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&>::call
          (CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&> *this,
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
            uVar3 = _LC53;
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
        goto LAB_001069ae;
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
  _err_print_error(&_LC48,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_001069ae:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
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
              if ((code *)PTR__bind_methods_00111070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00111060 !=
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
      if ((code *)PTR__bind_methods_00111068 != Container::_bind_methods) {
        BoxContainer::_bind_methods();
      }
      BoxContainer::initialize_class()::initialized = '\x01';
    }
    local_68 = 0;
    String::parse_latin1((String *)&local_68,"BoxContainer");
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
            if ((code *)PTR__bind_methods_00111070 != Node::_bind_methods) {
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
      if ((code *)PTR__bind_compatibility_methods_00111078 != Object::_bind_compatibility_methods) {
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
    if ((code *)PTR__bind_methods_00111080 != AcceptDialog::_bind_methods) {
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



/* AtlasMergingDialog::_initialize_classv() */

void AtlasMergingDialog::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_60;
  long local_58;
  undefined8 local_50;
  long local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      if (AcceptDialog::initialize_class()::initialized == '\0') {
        if (Window::initialize_class()::initialized == '\0') {
          if (Viewport::initialize_class()::initialized == '\0') {
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
              if ((code *)PTR__bind_methods_00111070 != Node::_bind_methods) {
                Node::_bind_methods();
              }
              Node::initialize_class()::initialized = '\x01';
            }
            local_50 = 0;
            String::parse_latin1((String *)&local_50,"Node");
            StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
            local_60 = 0;
            String::parse_latin1((String *)&local_60,"Viewport");
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
            Viewport::_bind_methods();
            Viewport::initialize_class()::initialized = '\x01';
          }
          local_50 = 0;
          String::parse_latin1((String *)&local_50,"Viewport");
          StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Window");
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
          Window::_bind_methods();
          Window::initialize_class()::initialized = '\x01';
        }
        local_50 = 0;
        String::parse_latin1((String *)&local_50,"Window");
        StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
        local_60 = 0;
        String::parse_latin1((String *)&local_60,"AcceptDialog");
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
        AcceptDialog::_bind_methods();
        if ((code *)PTR__bind_compatibility_methods_00111078 != Object::_bind_compatibility_methods)
        {
          AcceptDialog::_bind_compatibility_methods();
        }
        AcceptDialog::initialize_class()::initialized = '\x01';
      }
      local_50 = 0;
      String::parse_latin1((String *)&local_50,"AcceptDialog");
      StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"ConfirmationDialog");
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
      if ((code *)PTR__bind_methods_00111080 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"ConfirmationDialog");
    StringName::StringName((StringName *)&local_48,(String *)&local_50,false);
    local_60 = 0;
    String::parse_latin1((String *)&local_60,"AtlasMergingDialog");
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
              if ((code *)PTR__bind_methods_00111070 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00111060 !=
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
      if ((code *)PTR__bind_methods_00111088 != Container::_bind_methods) {
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
    if (cVar5 != '\0') goto LAB_0010831b;
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
      if (cVar5 != '\0') goto LAB_0010831b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_0010831b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::is_class(String const&) const */

undefined8 __thiscall AcceptDialog::is_class(AcceptDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001084f3;
  }
  cVar4 = String::operator==(param_1,"AcceptDialog");
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
      if (cVar4 != '\0') goto LAB_001084f3;
    }
    cVar4 = String::operator==(param_1,"Window");
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
        if (cVar4 != '\0') goto LAB_001084f3;
      }
      cVar4 = String::operator==(param_1,"Viewport");
      if (cVar4 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = Node::is_class((Node *)this,param_1);
          return uVar5;
        }
        goto LAB_0010868e;
      }
    }
  }
LAB_001084f3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0010868e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::is_class(String const&) const */

undefined8 __thiscall ConfirmationDialog::is_class(ConfirmationDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0010879b;
  }
  cVar4 = String::operator==(param_1,"ConfirmationDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0010879b:
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
    if (cVar4 != '\0') goto LAB_001088c3;
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
      if (cVar4 != '\0') goto LAB_001088c3;
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
        if (cVar4 != '\0') goto LAB_001088c3;
      }
      cVar4 = String::operator==(param_1,"CanvasItem");
      if (cVar4 == '\0') {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
          uVar5 = Node::is_class((Node *)this,param_1);
          return uVar5;
        }
        goto LAB_00108a5e;
      }
    }
  }
LAB_001088c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108a5e:
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
    if (cVar5 != '\0') goto LAB_00108b6b;
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
      if (cVar5 != '\0') goto LAB_00108b6b;
    }
    cVar5 = String::operator==(param_1,"BoxContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00108c6e;
    }
  }
LAB_00108b6b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108c6e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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
    if (cVar5 != '\0') goto LAB_00108d7b;
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
      if (cVar5 != '\0') goto LAB_00108d7b;
    }
    cVar5 = String::operator==(param_1,"SplitContainer");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Container::is_class((Container *)this,param_1);
        return uVar6;
      }
      goto LAB_00108e7e;
    }
  }
LAB_00108d7b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00108e7e:
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
        if (pvVar3 == (void *)0x0) goto LAB_00108f7f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_00108f7f:
  CowData<char32_t>::_unref((CowData<char32_t> *)this);
  return;
}



/* AtlasMergingDialog::is_class(String const&) const */

undefined8 __thiscall AtlasMergingDialog::is_class(AtlasMergingDialog *this,String *param_1)

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
    if (cVar5 != '\0') goto LAB_001090db;
  }
  cVar5 = String::operator==(param_1,"AtlasMergingDialog");
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
      if (cVar5 != '\0') goto LAB_001090db;
    }
    cVar5 = String::operator==(param_1,"ConfirmationDialog");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
        return uVar6;
      }
      goto LAB_001091de;
    }
  }
LAB_001090db:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_001091de:
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
  local_78 = &_LC55;
  local_80 = 0;
  local_88 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = &_LC55;
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



/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall Viewport::_get_property_listv(Viewport *this,List *param_1,bool param_2)

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
  local_78 = "Viewport";
  local_70 = 8;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "Viewport";
  local_90 = 0;
  local_70 = 8;
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
  if ((code *)PTR__get_property_list_00111090 != Object::_get_property_list) {
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
  if ((code *)PTR__get_property_list_00111098 != Object::_get_property_list) {
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
    Window::_get_property_listv((Window *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "AcceptDialog";
  local_70 = 0xc;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AcceptDialog";
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
    AcceptDialog::_get_property_listv((AcceptDialog *)this,param_1,false);
  }
  local_80 = 0;
  local_88 = 0;
  local_78 = "ConfirmationDialog";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "ConfirmationDialog";
  local_90 = 0;
  local_70 = 0x12;
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



/* AtlasMergingDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
AtlasMergingDialog::_get_property_listv(AtlasMergingDialog *this,List *param_1,bool param_2)

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
  local_78 = "AtlasMergingDialog";
  local_70 = 0x12;
  String::parse_latin1((StrRange *)&local_88);
  local_78 = "AtlasMergingDialog";
  local_90 = 0;
  local_70 = 0x12;
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
  StringName::StringName((StringName *)&local_78,"AtlasMergingDialog",false);
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
  if ((code *)PTR__get_property_list_001110a0 != CanvasItem::_get_property_list) {
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



/* LocalVector<HashMap<Vector2i, Vector2i, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, Vector2i> > >, unsigned int, false,
   false>::resize(unsigned int) */

void __thiscall
LocalVector<HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>,unsigned_int,false,false>
::resize(LocalVector<HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>,unsigned_int,false,false>
         *this,uint param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  int *piVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  uint uVar8;
  long lVar9;
  
  uVar8 = *(uint *)this;
  if (param_1 < uVar8) {
    lVar6 = (ulong)param_1 * 0x30;
    uVar8 = param_1;
    do {
      lVar9 = *(long *)(this + 8) + lVar6;
      pvVar7 = *(void **)(lVar9 + 8);
      if (pvVar7 != (void *)0x0) {
        if (*(int *)(lVar9 + 0x2c) != 0) {
          uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar9 + 0x28) * 4);
          if (uVar1 == 0) {
            *(undefined4 *)(lVar9 + 0x2c) = 0;
            *(undefined1 (*) [16])(lVar9 + 0x18) = (undefined1  [16])0x0;
          }
          else {
            lVar5 = 0;
            do {
              piVar4 = (int *)(*(long *)(lVar9 + 0x10) + lVar5);
              if (*piVar4 != 0) {
                *piVar4 = 0;
                Memory::free_static(*(void **)((long)pvVar7 + lVar5 * 2),false);
                pvVar7 = *(void **)(lVar9 + 8);
                *(undefined8 *)((long)pvVar7 + lVar5 * 2) = 0;
              }
              lVar5 = lVar5 + 4;
            } while (lVar5 != (ulong)uVar1 * 4);
            *(undefined4 *)(lVar9 + 0x2c) = 0;
            *(undefined1 (*) [16])(lVar9 + 0x18) = (undefined1  [16])0x0;
            if (pvVar7 == (void *)0x0) goto LAB_0010ab19;
          }
        }
        Memory::free_static(pvVar7,false);
        Memory::free_static(*(void **)(lVar9 + 0x10),false);
      }
LAB_0010ab19:
      uVar8 = uVar8 + 1;
      lVar6 = lVar6 + 0x30;
    } while (uVar8 < *(uint *)this);
  }
  else {
    if (param_1 <= uVar8) {
      return;
    }
    uVar1 = param_1 - 1;
    if (*(uint *)(this + 4) < param_1) {
      uVar8 = uVar1 >> 1 | uVar1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = (uVar8 | uVar8 >> 0x10) + 1;
      *(uint *)(this + 4) = uVar8;
      lVar6 = Memory::realloc_static(*(void **)(this + 8),(ulong)uVar8 * 0x30,false);
      *(long *)(this + 8) = lVar6;
      if (lVar6 == 0) {
        _err_print_error("resize","./core/templates/local_vector.h",0xa3,
                         "FATAL: Condition \"!data\" is true.","Out of memory",0,0);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar8 = *(uint *)this;
      if (param_1 <= uVar8) goto LAB_0010ab2b;
    }
    uVar3 = _LC68;
    lVar6 = *(long *)(this + 8);
    lVar9 = (ulong)uVar8 * 0x30 + lVar6;
    do {
      *(undefined8 *)(lVar9 + 0x28) = uVar3;
      lVar5 = lVar9 + 0x30;
      *(undefined1 (*) [16])(lVar9 + 8) = (undefined1  [16])0x0;
      *(undefined1 (*) [16])(lVar9 + 0x18) = (undefined1  [16])0x0;
      lVar9 = lVar5;
    } while (lVar6 + 0x30 + ((ulong)(uVar1 - uVar8) + (ulong)uVar8) * 0x30 != lVar5);
  }
LAB_0010ab2b:
  *(uint *)this = param_1;
  return;
}



/* AtlasMergingDialog::~AtlasMergingDialog() */

void __thiscall AtlasMergingDialog::~AtlasMergingDialog(AtlasMergingDialog *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010cf10;
  if (*(long *)(this + 0xdd8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdd8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdd0) != 0) {
    LocalVector<HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>,unsigned_int,false,false>
    ::resize((LocalVector<HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>,unsigned_int,false,false>
              *)(this + 0xdc8),0);
    if (*(void **)(this + 0xdd0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0xdd0),false);
    }
  }
  if (*(long *)(this + 0xdc0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdc0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010c920;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* AtlasMergingDialog::~AtlasMergingDialog() */

void __thiscall AtlasMergingDialog::~AtlasMergingDialog(AtlasMergingDialog *this)

{
  Object *pOVar1;
  char cVar2;
  
  *(undefined ***)this = &PTR__initialize_classv_0010cf10;
  if (*(long *)(this + 0xdd8) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdd8);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  if (*(long *)(this + 0xdd0) != 0) {
    LocalVector<HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>,unsigned_int,false,false>
    ::resize((LocalVector<HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>,unsigned_int,false,false>
              *)(this + 0xdc8),0);
    if (*(void **)(this + 0xdd0) != (void *)0x0) {
      Memory::free_static(*(void **)(this + 0xdd0),false);
    }
  }
  if (*(long *)(this + 0xdc0) != 0) {
    cVar2 = RefCounted::unreference();
    if (cVar2 != '\0') {
      pOVar1 = *(Object **)(this + 0xdc0);
      cVar2 = predelete_handler(pOVar1);
      if (cVar2 != '\0') {
        (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
        Memory::free_static(pOVar1,false);
      }
    }
  }
  *(undefined ***)this = &PTR__initialize_classv_0010c920;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe20);
  return;
}



/* HashMap<Vector2i, Vector2i, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, Vector2i> > >::_lookup_pos(Vector2i const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
::_lookup_pos(HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
              *this,Vector2i *param_1,uint *param_2)

{
  uint uVar1;
  ulong uVar2;
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
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  
  if ((*(long *)(this + 8) != 0) && (*(int *)(this + 0x2c) != 0)) {
    uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    uVar2 = *(ulong *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    uVar11 = (*(int *)param_1 * 0x16a88000 | (uint)(*(int *)param_1 * -0x3361d2af) >> 0x11) *
             0x1b873593 ^ 0x7f07c65;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64 ^
             (*(int *)(param_1 + 4) * 0x16a88000 |
             (uint)(*(int *)(param_1 + 4) * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar11 = (uVar11 << 0xd | uVar11 >> 0x13) * 5 + 0xe6546b64;
    uVar11 = (uVar11 >> 0x10 ^ uVar11) * -0x7a143595;
    uVar11 = (uVar11 ^ uVar11 >> 0xd) * -0x3d4d51cb;
    uVar17 = uVar11 ^ uVar11 >> 0x10;
    if (uVar11 == uVar11 >> 0x10) {
      uVar17 = 1;
      uVar14 = uVar2;
    }
    else {
      uVar14 = uVar17 * uVar2;
    }
    uVar16 = CONCAT44(0,uVar1);
    lVar18 = *(long *)(this + 0x10);
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar16;
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar14;
    lVar15 = SUB168(auVar3 * auVar7,8);
    uVar11 = *(uint *)(lVar18 + lVar15 * 4);
    uVar13 = SUB164(auVar3 * auVar7,8);
    if (uVar11 != 0) {
      uVar19 = 0;
      do {
        if (uVar17 == uVar11) {
          uVar12 = Vector2i::operator==
                             ((Vector2i *)(*(long *)(*(long *)(this + 8) + lVar15 * 8) + 0x10),
                              param_1);
          if ((char)uVar12 != '\0') {
            *param_2 = uVar13;
            return uVar12;
          }
          lVar18 = *(long *)(this + 0x10);
        }
        uVar19 = uVar19 + 1;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (uVar13 + 1) * uVar2;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar16;
        lVar15 = SUB168(auVar4 * auVar8,8);
        uVar11 = *(uint *)(lVar18 + lVar15 * 4);
        uVar13 = SUB164(auVar4 * auVar8,8);
      } while ((uVar11 != 0) &&
              (auVar5._8_8_ = 0, auVar5._0_8_ = uVar11 * uVar2, auVar9._8_8_ = 0,
              auVar9._0_8_ = uVar16, auVar6._8_8_ = 0,
              auVar6._0_8_ = ((uVar1 + uVar13) - SUB164(auVar5 * auVar9,8)) * uVar2,
              auVar10._8_8_ = 0, auVar10._0_8_ = uVar16, uVar19 <= SUB164(auVar6 * auVar10,8)));
    }
  }
  return 0;
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



/* void memdelete<Image>(Image*) */

void memdelete<Image>(Image *param_1)

{
  long *plVar1;
  long lVar2;
  char cVar3;
  
  cVar3 = predelete_handler((Object *)param_1);
  if (cVar3 == '\0') {
    return;
  }
  if (*(code **)(*(long *)param_1 + 0x140) == Image::~Image) {
    *(code **)param_1 = Memory::free_static;
    if (*(long *)(param_1 + 0x250) != 0) {
      LOCK();
      plVar1 = (long *)(*(long *)(param_1 + 0x250) + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x250);
        *(undefined8 *)(param_1 + 0x250) = 0;
        Memory::free_static((void *)(lVar2 + -0x10),false);
      }
    }
    Resource::~Resource((Resource *)param_1);
    Memory::free_static(param_1,false);
    return;
  }
  (**(code **)(*(long *)param_1 + 0x140))(param_1);
  Memory::free_static(param_1,false);
  return;
}



/* HashMap<Vector2i, Vector2i, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, Vector2i> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
::_resize_and_rehash
          (HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
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
/* HashMap<Vector2i, Vector2i, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, Vector2i> > >::insert(Vector2i const&, Vector2i
   const&, bool) */

Vector2i *
HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
::insert(Vector2i *param_1,Vector2i *param_2,bool param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
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
  undefined1 (*pauVar15) [16];
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined8 uVar20;
  void *__s_00;
  undefined8 *in_RCX;
  int iVar21;
  undefined7 in_register_00000011;
  Vector2i *pVVar22;
  long lVar23;
  ulong uVar24;
  char in_R8B;
  uint uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  ulong uVar28;
  long in_FS_OFFSET;
  uint local_a8;
  uint local_6c [5];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  pVVar22 = (Vector2i *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
  if (*(long *)(param_2 + 8) == 0) {
    uVar28 = (ulong)uVar17;
    uVar24 = uVar28 * 4;
    uVar20 = Memory::alloc_static(uVar24,false);
    *(undefined8 *)(param_2 + 0x10) = uVar20;
    uVar26 = uVar28 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar26,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar17 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)(uVar26 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar24))) {
        uVar24 = 0;
        do {
          *(undefined4 *)((long)__s + uVar24 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar24 * 8) = 0;
          uVar24 = uVar24 + 1;
        } while (uVar28 != uVar24);
      }
      else {
        memset(__s,0,uVar24);
        memset(__s_00,0,uVar26);
      }
    }
  }
  local_6c[0] = 0;
  cVar16 = _lookup_pos((HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
                        *)param_2,pVVar22,local_6c);
  if (cVar16 == '\0') {
    if ((float)uVar17 * __LC69 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
      if (*(int *)(param_2 + 0x28) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        pauVar19 = (undefined1 (*) [16])0x0;
        goto LAB_0010b665;
      }
      _resize_and_rehash((HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
                          *)param_2,*(int *)(param_2 + 0x28) + 1);
    }
    local_58 = *(undefined8 *)pVVar22;
    local_50 = *in_RCX;
    pauVar19 = (undefined1 (*) [16])operator_new(0x20,"");
    *pauVar19 = (undefined1  [16])0x0;
    *(undefined8 *)pauVar19[1] = local_58;
    *(undefined8 *)(pauVar19[1] + 8) = local_50;
    puVar3 = *(undefined8 **)(param_2 + 0x20);
    if (puVar3 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(param_2 + 0x18) = pauVar19;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauVar19;
    }
    else if (in_R8B == '\0') {
      *puVar3 = pauVar19;
      *(undefined8 **)(*pauVar19 + 8) = puVar3;
      *(undefined1 (**) [16])(param_2 + 0x20) = pauVar19;
    }
    else {
      lVar4 = *(long *)(param_2 + 0x18);
      *(undefined1 (**) [16])(lVar4 + 8) = pauVar19;
      *(long *)*pauVar19 = lVar4;
      *(undefined1 (**) [16])(param_2 + 0x18) = pauVar19;
    }
    uVar17 = (*(int *)pVVar22 * 0x16a88000 | (uint)(*(int *)pVVar22 * -0x3361d2af) >> 0x11) *
             0x1b873593 ^ 0x7f07c65;
    uVar17 = (uVar17 << 0xd | uVar17 >> 0x13) * 5 + 0xe6546b64 ^
             (*(int *)(pVVar22 + 4) * 0x16a88000 |
             (uint)(*(int *)(pVVar22 + 4) * -0x3361d2af) >> 0x11) * 0x1b873593;
    uVar17 = (uVar17 << 0xd | uVar17 >> 0x13) * 5 + 0xe6546b64;
    uVar17 = (uVar17 >> 0x10 ^ uVar17) * -0x7a143595;
    uVar18 = (uVar17 ^ uVar17 >> 0xd) * -0x3d4d51cb;
    uVar17 = uVar18 ^ uVar18 >> 0x10;
    if (uVar18 == uVar18 >> 0x10) {
      uVar24 = 1;
      uVar17 = 1;
    }
    else {
      uVar24 = (ulong)uVar17;
    }
    uVar25 = 0;
    lVar4 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(param_2 + 0x28) * 4);
    uVar26 = CONCAT44(0,uVar18);
    lVar5 = *(long *)(param_2 + 0x10);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar24 * lVar4;
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar26;
    lVar23 = SUB168(auVar7 * auVar11,8);
    lVar6 = *(long *)(param_2 + 8);
    puVar1 = (uint *)(lVar5 + lVar23 * 4);
    iVar21 = SUB164(auVar7 * auVar11,8);
    uVar2 = *puVar1;
    pauVar15 = pauVar19;
    while (uVar2 != 0) {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar2 * lVar4;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar26;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)((uVar18 + iVar21) - SUB164(auVar8 * auVar12,8)) * lVar4;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar26;
      local_a8 = SUB164(auVar9 * auVar13,8);
      pauVar27 = pauVar15;
      if (local_a8 < uVar25) {
        *puVar1 = uVar17;
        puVar3 = (undefined8 *)(lVar6 + lVar23 * 8);
        pauVar27 = (undefined1 (*) [16])*puVar3;
        *puVar3 = pauVar15;
        uVar17 = uVar2;
        uVar25 = local_a8;
      }
      uVar25 = uVar25 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)(iVar21 + 1) * lVar4;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = uVar26;
      lVar23 = SUB168(auVar10 * auVar14,8);
      puVar1 = (uint *)(lVar5 + lVar23 * 4);
      iVar21 = SUB164(auVar10 * auVar14,8);
      pauVar15 = pauVar27;
      uVar2 = *puVar1;
    }
    *(undefined1 (**) [16])(lVar6 + lVar23 * 8) = pauVar15;
    *puVar1 = uVar17;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  else {
    pauVar19 = *(undefined1 (**) [16])(*(long *)(param_2 + 8) + (ulong)local_6c[0] * 8);
    *(undefined8 *)(pauVar19[1] + 8) = *in_RCX;
  }
LAB_0010b665:
  *(undefined1 (**) [16])param_1 = pauVar19;
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<Vector2i, Vector2i, HashMapHasherDefault, HashMapComparatorDefault<Vector2i>,
   DefaultTypedAllocator<HashMapElement<Vector2i, Vector2i> > >::operator[](Vector2i const&) */

undefined1 * __thiscall
HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
::operator[](HashMap<Vector2i,Vector2i,HashMapHasherDefault,HashMapComparatorDefault<Vector2i>,DefaultTypedAllocator<HashMapElement<Vector2i,Vector2i>>>
             *this,Vector2i *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined8 *puVar3;
  long lVar4;
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
  undefined1 (*pauVar15) [16];
  char cVar16;
  uint uVar17;
  uint uVar18;
  undefined1 (*pauVar19) [16];
  undefined8 uVar20;
  void *__s_00;
  int iVar21;
  long lVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  long in_FS_OFFSET;
  uint local_98;
  uint local_70;
  uint local_6c [5];
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar16 = _lookup_pos(this,param_1,&local_70);
  if (cVar16 == '\0') {
    uVar17 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    if (*(long *)(this + 8) == 0) {
      uVar26 = (ulong)uVar17;
      uVar23 = uVar26 * 4;
      uVar25 = uVar26 * 8;
      uVar20 = Memory::alloc_static(uVar23,false);
      *(undefined8 *)(this + 0x10) = uVar20;
      __s_00 = (void *)Memory::alloc_static(uVar25,false);
      *(void **)(this + 8) = __s_00;
      if (uVar17 != 0) {
        __s = *(void **)(this + 0x10);
        if ((__s < (void *)((long)__s_00 + uVar25)) && (__s_00 < (void *)((long)__s + uVar23))) {
          uVar23 = 0;
          do {
            *(undefined4 *)((long)__s + uVar23 * 4) = 0;
            *(undefined8 *)((long)__s_00 + uVar23 * 8) = 0;
            uVar23 = uVar23 + 1;
          } while (uVar26 != uVar23);
        }
        else {
          memset(__s,0,uVar23);
          memset(__s_00,0,uVar25);
        }
      }
    }
    local_6c[0] = 0;
    cVar16 = _lookup_pos(this,param_1,local_6c);
    if (cVar16 == '\0') {
      if ((float)uVar17 * __LC69 < (float)(*(int *)(this + 0x2c) + 1)) {
        if (*(int *)(this + 0x28) == 0x1c) {
          pauVar19 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_0010ba5b;
        }
        _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
      }
      local_58 = *(undefined8 *)param_1;
      local_50 = 0;
      pauVar19 = (undefined1 (*) [16])operator_new(0x20,"");
      *pauVar19 = (undefined1  [16])0x0;
      *(undefined8 *)pauVar19[1] = local_58;
      *(undefined8 *)(pauVar19[1] + 8) = local_50;
      puVar3 = *(undefined8 **)(this + 0x20);
      if (puVar3 == (undefined8 *)0x0) {
        *(undefined1 (**) [16])(this + 0x18) = pauVar19;
      }
      else {
        *puVar3 = pauVar19;
        *(undefined8 **)(*pauVar19 + 8) = puVar3;
      }
      iVar21 = *(int *)param_1;
      *(undefined1 (**) [16])(this + 0x20) = pauVar19;
      uVar17 = (iVar21 * 0x16a88000 | (uint)(iVar21 * -0x3361d2af) >> 0x11) * 0x1b873593 ^ 0x7f07c65
      ;
      uVar17 = (uVar17 << 0xd | uVar17 >> 0x13) * 5 + 0xe6546b64 ^
               (*(int *)(param_1 + 4) * 0x16a88000 |
               (uint)(*(int *)(param_1 + 4) * -0x3361d2af) >> 0x11) * 0x1b873593;
      uVar17 = (uVar17 << 0xd | uVar17 >> 0x13) * 5 + 0xe6546b64;
      uVar17 = (uVar17 >> 0x10 ^ uVar17) * -0x7a143595;
      uVar18 = (uVar17 ^ uVar17 >> 0xd) * -0x3d4d51cb;
      uVar17 = uVar18 ^ uVar18 >> 0x10;
      if (uVar18 == uVar18 >> 0x10) {
        uVar23 = 1;
        uVar17 = 1;
      }
      else {
        uVar23 = (ulong)uVar17;
      }
      uVar24 = 0;
      lVar4 = *(long *)(this + 0x10);
      lVar5 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar18 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar25 = CONCAT44(0,uVar18);
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar23 * lVar5;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar25;
      lVar22 = SUB168(auVar7 * auVar11,8);
      lVar6 = *(long *)(this + 8);
      puVar1 = (uint *)(lVar4 + lVar22 * 4);
      iVar21 = SUB164(auVar7 * auVar11,8);
      uVar2 = *puVar1;
      pauVar15 = pauVar19;
      while (uVar2 != 0) {
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)uVar2 * lVar5;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar25;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = (ulong)((uVar18 + iVar21) - SUB164(auVar8 * auVar12,8)) * lVar5;
        auVar13._8_8_ = 0;
        auVar13._0_8_ = uVar25;
        local_98 = SUB164(auVar9 * auVar13,8);
        pauVar27 = pauVar15;
        if (local_98 < uVar24) {
          *puVar1 = uVar17;
          puVar3 = (undefined8 *)(lVar6 + lVar22 * 8);
          pauVar27 = (undefined1 (*) [16])*puVar3;
          *puVar3 = pauVar15;
          uVar17 = uVar2;
          uVar24 = local_98;
        }
        uVar24 = uVar24 + 1;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = (ulong)(iVar21 + 1) * lVar5;
        auVar14._8_8_ = 0;
        auVar14._0_8_ = uVar25;
        lVar22 = SUB168(auVar10 * auVar14,8);
        puVar1 = (uint *)(lVar4 + lVar22 * 4);
        iVar21 = SUB164(auVar10 * auVar14,8);
        pauVar15 = pauVar27;
        uVar2 = *puVar1;
      }
      *(undefined1 (**) [16])(lVar6 + lVar22 * 8) = pauVar15;
      *puVar1 = uVar17;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      pauVar19 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_6c[0] * 8);
      *(undefined8 *)(pauVar19[1] + 8) = 0;
    }
  }
  else {
    pauVar19 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_0010ba5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar19[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AtlasMergingDialog::_merge_confirmed(String const&) [clone .cold] */

void AtlasMergingDialog::_merge_confirmed(String *param_1)

{
  code *pcVar1;
  Ref<Texture2D> *unaff_RBX;
  
  Ref<Texture2D>::unref(unaff_RBX);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* CowData<Ref<TileSetAtlasSource> >::_copy_on_write() [clone .isra.0] [clone .cold] */

void CowData<Ref<TileSetAtlasSource>>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
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
LAB_0010bc3d:
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
            goto LAB_0010bc3d;
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
LAB_0010c090:
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
  if (lVar11 == 0) goto LAB_0010c090;
  if (param_1 <= lVar7) {
    lVar7 = *(long *)this;
    uVar9 = param_1;
    while (lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar9) {
LAB_0010bf3a:
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
        if (*(ulong *)(lVar7 + -8) <= uVar9) goto LAB_0010bf3a;
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
    goto LAB_0010bf00;
  }
  if (lVar11 == lVar8) {
LAB_0010c00b:
    puVar10 = *(undefined8 **)this;
    if (puVar10 == (undefined8 *)0x0) {
LAB_0010bf00:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar7 = puVar10[-1];
    if (param_1 <= lVar7) goto LAB_0010bfeb;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar11);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0010c00b;
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
LAB_0010bfeb:
  puVar10[-1] = param_1;
  return 0;
}



/* AtlasMergingDialog::_notificationv(int, bool) */

void __thiscall
AtlasMergingDialog::_notificationv(AtlasMergingDialog *this,int param_1,bool param_2)

{
  char cVar1;
  
  if (param_2) {
    if (param_1 == 0x1e) {
      cVar1 = Window::is_visible();
      if (cVar1 != '\0') {
        _update_texture(this);
      }
    }
    ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,true);
    return;
  }
  ConfirmationDialog::_notificationv((ConfirmationDialog *)this,param_1,false);
  if (param_1 == 0x1e) {
    cVar1 = Window::is_visible();
    if (cVar1 != '\0') {
      _update_texture(this);
      return;
    }
  }
  return;
}



/* AtlasMergingDialog::_setv(StringName const&, Variant const&) */

undefined8 __thiscall
AtlasMergingDialog::_setv(AtlasMergingDialog *this,StringName *param_1,Variant *param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (((code *)PTR__set_00111018 != Object::_set) &&
     (cVar1 = Window::_set((StringName *)this,(Variant *)param_1), cVar1 != '\0')) {
    return 1;
  }
  uVar3 = StringName::operator==(param_1,"next_line_after_column");
  if (((char)uVar3 != '\0') && (uVar3 = 0, *(int *)param_2 == 2)) {
    iVar2 = Variant::operator_cast_to_int(param_2);
    *(int *)(this + 0xde0) = iVar2;
    _update_texture(this);
    return 1;
  }
  return uVar3;
}



/* AtlasMergingDialog::_property_changed(StringName const&, Variant const&, String const&, bool) */

void AtlasMergingDialog::_GLOBAL__sub_I__property_changed(void)

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
/* HSplitContainer::~HSplitContainer() */

void __thiscall HSplitContainer::~HSplitContainer(HSplitContainer *this)

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
/* Image::~Image() */

void __thiscall Image::~Image(Image *this)

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
/* CallableCustomMethodPointer<AtlasMergingDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AtlasMergingDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AtlasMergingDialog, void, StringName const&, Variant const&, String
   const&, bool>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AtlasMergingDialog,void,StringName_const&,Variant_const&,String_const&,bool>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<AtlasMergingDialog, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<AtlasMergingDialog,void,String_const&> *this)

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
/* AtlasMergingDialog::~AtlasMergingDialog() */

void __thiscall AtlasMergingDialog::~AtlasMergingDialog(AtlasMergingDialog *this)

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


