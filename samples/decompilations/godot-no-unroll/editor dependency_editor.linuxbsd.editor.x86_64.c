
/* DependencyErrorDialog::custom_action(String const&) */

void DependencyErrorDialog::custom_action(String *param_1)

{
  EditorNode::fix_dependencies(EditorNode::singleton);
  return;
}



/* DependencyErrorDialog::ok_pressed() */

void __thiscall DependencyErrorDialog::ok_pressed(DependencyErrorDialog *this)

{
  if (*(int *)(this + 0xdc0) == 0) {
    EditorNode::load_scene(EditorNode::singleton,(bool)((char)this + -0x48),true,false,false);
    return;
  }
  if (*(int *)(this + 0xdc0) != 1) {
    return;
  }
  EditorNode::load_resource(EditorNode::singleton,(bool)((char)this + -0x48));
  return;
}



/* DependencyEditorOwners::_empty_clicked(Vector2 const&, MouseButton) */

void __thiscall
DependencyEditorOwners::_empty_clicked(undefined8 param_1,undefined8 param_2,int param_3)

{
  if (param_3 != 1) {
    return;
  }
  ItemList::deselect_all();
  return;
}



/* DependencyEditor::_update_file() */

void DependencyEditor::_update_file(void)

{
  EditorFileSystem::update_file(EditorFileSystem::singleton);
  return;
}



/* DependencyEditorOwners::DependencyEditorOwners() */

void __thiscall DependencyEditorOwners::DependencyEditorOwners(DependencyEditorOwners *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  PopupMenu *this_00;
  ItemList *this_01;
  CallableCustom *pCVar4;
  long in_FS_OFFSET;
  long local_60;
  DependencyEditorOwners local_58 [24];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AcceptDialog::AcceptDialog((AcceptDialog *)this);
  *(undefined8 *)(this + 0xdc0) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011c4c0;
  *(undefined1 (*) [16])(this + 0xdb0) = (undefined1  [16])0x0;
  this_00 = (PopupMenu *)operator_new(0xfe0,"");
  PopupMenu::PopupMenu(this_00);
  postinitialize_handler((Object *)this_00);
  *(PopupMenu **)(this + 0xdb8) = this_00;
  Node::add_child(this,this_00,0,0);
  plVar1 = *(long **)(this + 0xdb8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<DependencyEditorOwners,int>
            (local_58,(char *)this,(_func_void_int *)"&DependencyEditorOwners::_file_option");
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x240,local_58,0);
  Callable::~Callable((Callable *)local_58);
  this_01 = (ItemList *)operator_new(0xb80,"");
  ItemList::ItemList(this_01);
  postinitialize_handler((Object *)this_01);
  *(ItemList **)(this + 0xdb0) = this_01;
  Node::set_auto_translate_mode(this_01,2);
  ItemList::set_select_mode(*(undefined8 *)(this + 0xdb0),1);
  plVar1 = *(long **)(this + 0xdb0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar4 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar4);
  *(undefined **)(pCVar4 + 0x20) = &_LC11;
  *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar4 = &PTR_hash_0011d0e0;
  *(undefined8 *)(pCVar4 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar4 + 0x10) = 0;
  *(undefined8 *)(pCVar4 + 0x30) = uVar3;
  *(code **)(pCVar4 + 0x38) = _list_rmb_clicked;
  *(DependencyEditorOwners **)(pCVar4 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
  *(char **)(pCVar4 + 0x20) = "DependencyEditorOwners::_list_rmb_clicked";
  Callable::Callable((Callable *)local_58,pCVar4);
  StringName::StringName((StringName *)&local_60,"item_clicked",false);
  (*pcVar2)(plVar1,(StringName *)&local_60,local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xdb0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  create_custom_callable_function_pointer<DependencyEditorOwners,int>
            (local_58,(char *)this,(_func_void_int *)"&DependencyEditorOwners::_select_file");
  StringName::StringName((StringName *)&local_60,"item_activated",false);
  (*pcVar2)(plVar1,(StringName *)&local_60,local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  plVar1 = *(long **)(this + 0xdb0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar4 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar4);
  *(undefined **)(pCVar4 + 0x20) = &_LC11;
  *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar4 = &PTR_hash_0011d170;
  *(undefined8 *)(pCVar4 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar4 + 0x10) = 0;
  *(undefined8 *)(pCVar4 + 0x30) = uVar3;
  *(code **)(pCVar4 + 0x38) = _empty_clicked;
  *(DependencyEditorOwners **)(pCVar4 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
  *(char **)(pCVar4 + 0x20) = "DependencyEditorOwners::_empty_clicked";
  Callable::Callable((Callable *)local_58,pCVar4);
  StringName::StringName((StringName *)&local_60,"empty_clicked",false);
  (*pcVar2)(plVar1,(StringName *)&local_60,local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)local_58);
  ItemList::set_allow_rmb_select(SUB81(*(undefined8 *)(this + 0xdb0),0));
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xdb0),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyErrorDialog::DependencyErrorDialog() */

void __thiscall DependencyErrorDialog::DependencyErrorDialog(DependencyErrorDialog *this)

{
  String *pSVar1;
  BoxContainer *this_00;
  Tree *this_01;
  Label *this_02;
  undefined8 uVar2;
  long in_FS_OFFSET;
  float fVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined8 *)(this + 0xdb8) = 0;
  *(undefined ***)this = &PTR__initialize_classv_0011c9b0;
  *(undefined8 *)(this + 0xdd8) = 0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011bc58;
  postinitialize_handler((Object *)this_00);
  Node::add_child(this,this_00,0,0);
  this_01 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_01);
  postinitialize_handler((Object *)this_01);
  *(Tree **)(this + 0xdd8) = this_01;
  Node::set_auto_translate_mode(this_01,2);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xdd8),0));
  local_68 = "";
  local_70 = 0;
  uVar2 = *(undefined8 *)(this + 0xdd8);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Load failed due to missing dependencies:";
  local_78 = 0;
  local_60 = 0x28;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  VBoxContainer::add_margin_child((String *)this_00,(Control *)&local_68,SUB81(uVar2,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdd8),3);
  fVar3 = (float)EditorScale::get_scale();
  local_50 = CONCAT44(fVar3 * _LC26._4_4_,fVar3 * (float)_LC26);
  local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
  Window::set_min_size(this);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Open Anyway";
  local_78 = 0;
  local_60 = 0xb;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  AcceptDialog::set_ok_button_text(this,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Close";
  local_78 = 0;
  local_60 = 5;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  ConfirmationDialog::set_cancel_button_text(this,(String *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  this_02 = (Label *)operator_new(0xad8,"");
  local_68 = (char *)0x0;
  Label::Label(this_02,(String *)&local_68);
  postinitialize_handler((Object *)this_02);
  *(Label **)(this + 0xdd0) = this_02;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdd0),0,0);
  local_68 = "";
  local_70 = 0;
  pSVar1 = *(String **)(this + 0xdd0);
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Which action should be taken?";
  local_78 = 0;
  local_60 = 0x1d;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Label::set_text(pSVar1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  *(undefined4 *)(this + 0xdc0) = 1;
  local_68 = "fixdeps";
  local_70 = 0;
  local_60 = 7;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "";
  local_78 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_78);
  local_68 = "Fix Dependencies";
  local_80 = 0;
  local_60 = 0x10;
  String::parse_latin1((StrRange *)&local_80);
  TTR((String *)&local_68,(String *)&local_80);
  uVar2 = AcceptDialog::add_button((String *)this,SUB81((String *)&local_68,0),(String *)0x1);
  *(undefined8 *)(this + 0xdc8) = uVar2;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  local_68 = "";
  local_70 = 0;
  local_60 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_68 = "Errors loading!";
  local_78 = 0;
  local_60 = 0xf;
  String::parse_latin1((StrRange *)&local_78);
  TTR((String *)&local_68,(String *)&local_78);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyEditorOwners::_select_file(int) */

void DependencyEditorOwners::_select_file(int param_1)

{
  char cVar1;
  undefined4 in_register_0000003c;
  long in_FS_OFFSET;
  CowData<char32_t> aCStack_58 [8];
  String local_50 [8];
  undefined8 local_48;
  undefined1 local_40 [16];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::get_item_text((int)aCStack_58);
  ResourceLoader::get_resource_type(local_50);
  cVar1 = String::operator==(local_50,"PackedScene");
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  if (cVar1 == '\0') {
    EditorNode::load_resource(EditorNode::singleton,SUB81(aCStack_58,0));
  }
  else {
    EditorNode::open_request(EditorNode::singleton,SUB81(aCStack_58,0));
  }
  Window::hide();
  local_48 = 0;
  local_40 = (undefined1  [16])0x0;
  (**(code **)(*(long *)CONCAT44(in_register_0000003c,param_1) + 0xd0))
            ((long *)CONCAT44(in_register_0000003c,param_1),SceneStringNames::singleton + 0x268,0,0)
  ;
  if (Variant::needs_deinit[(int)local_48] != '\0') {
    Variant::_clear_internal();
  }
  CowData<char32_t>::_unref(aCStack_58);
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyEditorOwners::_file_option(int) */

void __thiscall DependencyEditorOwners::_file_option(DependencyEditorOwners *this,int param_1)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  long in_FS_OFFSET;
  long local_30;
  
  lVar3 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 == 0) {
    lVar5 = 0;
    ItemList::get_selected_items();
    while (local_30 != 0) {
      if (((*(long *)(local_30 + -8) <= lVar5) ||
          (iVar2 = *(int *)(local_30 + lVar5 * 4), iVar2 < 0)) ||
         (iVar4 = ItemList::get_item_count(), iVar4 <= iVar2)) {
        if (local_30 != 0) {
          LOCK();
          plVar1 = (long *)(local_30 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            Memory::free_static((void *)(local_30 + -0x10),false);
          }
        }
        break;
      }
      lVar5 = lVar5 + 1;
      _select_file((int)this);
    }
  }
  if (lVar3 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyRemoveDialog::DependencyRemoveDialog() */

void __thiscall DependencyRemoveDialog::DependencyRemoveDialog(DependencyRemoveDialog *this)

{
  Vector2 *pVVar1;
  BoxContainer *this_00;
  Label *pLVar2;
  ItemList *this_01;
  BoxContainer *this_02;
  Tree *this_03;
  undefined8 in_R8;
  undefined8 in_R9;
  long in_FS_OFFSET;
  float fVar3;
  undefined8 *puVar4;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  *(undefined8 *)(this + 0xe00) = 2;
  *(undefined ***)this = &PTR__initialize_classv_0011c738;
  *(undefined8 *)(this + 0xe10) = 0;
  *(undefined8 *)(this + 0xe20) = 0;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xde0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
  local_60 = 0;
  local_58 = "";
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Remove";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  AcceptDialog::set_ok_button_text(this,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011bc58;
  postinitialize_handler((Object *)this_00);
  Control::set_h_size_flags(this_00,3);
  Node::add_child(this,this_00,0,0);
  pLVar2 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(pLVar2,(String *)&local_58);
  postinitialize_handler((Object *)pLVar2);
  *(Label **)(this + 0xdb8) = pLVar2;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdb8),0,0);
  pLVar2 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(pLVar2,(String *)&local_58);
  postinitialize_handler((Object *)pLVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  StringName::StringName((StringName *)&local_58,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar2);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Files to be deleted:";
  local_68 = 0;
  local_50 = 0x14;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::set_text((String *)pLVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_00,pLVar2,0,0);
  this_01 = (ItemList *)operator_new(0xb80,"");
  ItemList::ItemList(this_01);
  postinitialize_handler((Object *)this_01);
  *(ItemList **)(this + 0xdd0) = this_01;
  Control::set_h_size_flags(this_01,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdd0),3);
  pVVar1 = *(Vector2 **)(this + 0xdd0);
  fVar3 = (float)EditorScale::get_scale();
  puVar4 = &local_48;
  local_48 = CONCAT44(fVar3 * _LC39._4_4_,fVar3 * (float)_LC39);
  Control::set_custom_minimum_size(pVVar1);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdd0),0,0,in_R8,in_R9,puVar4);
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,true);
  *(undefined ***)this_02 = &PTR__initialize_classv_0011bc58;
  this_02[0xa0c] = (BoxContainer)0x1;
  postinitialize_handler((Object *)this_02);
  *(BoxContainer **)(this + 0xdc8) = this_02;
  Control::set_h_size_flags(this_02,3);
  Control::set_v_size_flags(*(undefined8 *)(this + 0xdc8),3);
  Node::add_child(this_00,*(undefined8 *)(this + 0xdc8),0,0);
  pLVar2 = (Label *)operator_new(0xad8,"");
  local_58 = (char *)0x0;
  Label::Label(pLVar2,(String *)&local_58);
  postinitialize_handler((Object *)pLVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  StringName::StringName((StringName *)&local_58,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)pLVar2);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Dependencies of files to be deleted:";
  local_68 = 0;
  local_50 = 0x24;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::set_text((String *)pLVar2);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(*(undefined8 *)(this + 0xdc8),pLVar2,0,0);
  this_03 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_03);
  postinitialize_handler((Object *)this_03);
  *(Tree **)(this + 0xdc0) = this_03;
  Node::set_auto_translate_mode(this_03,2);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xdc0),0));
  pVVar1 = *(Vector2 **)(this + 0xdc0);
  fVar3 = (float)EditorScale::get_scale();
  local_48 = CONCAT44(fVar3 * _LC39._4_4_,fVar3 * (float)_LC39);
  Control::set_custom_minimum_size(pVVar1);
  Node::add_child(*(undefined8 *)(this + 0xdc8),*(undefined8 *)(this + 0xdc0),0,0);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Control::set_v_size_flags(*(undefined8 *)(this + 0xdc0),3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(*(undefined8 *)(this + 0xdc0));
}



/* DependencyEditor::DependencyEditor() */

void __thiscall DependencyEditor::DependencyEditor(DependencyEditor *this)

{
  undefined8 uVar1;
  long *plVar2;
  code *pcVar3;
  long lVar4;
  String *pSVar5;
  BoxContainer *this_00;
  Tree *this_01;
  CallableCustom *pCVar6;
  BoxContainer *this_02;
  Label *this_03;
  Button *this_04;
  MarginContainer *this_05;
  EditorFileDialog *this_06;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  AcceptDialog::AcceptDialog((AcceptDialog *)this);
  *(undefined ***)this = &PTR__initialize_classv_0011c248;
  *(undefined1 (*) [16])(this + 0xdb0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc0) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdd0) = (undefined1  [16])0x0;
  this_00 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_00,true);
  this_00[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_00 = &PTR__initialize_classv_0011bc58;
  postinitialize_handler((Object *)this_00);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Dependencies";
  local_68 = 0;
  local_50 = 0xc;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Node::set_name((String *)this_00);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this,this_00,0,0);
  this_01 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_01);
  postinitialize_handler((Object *)this_01);
  *(Tree **)(this + 0xdb0) = this_01;
  Node::set_auto_translate_mode(this_01,2);
  Tree::set_columns((int)*(undefined8 *)(this + 0xdb0));
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xdb0),0));
  local_58 = "";
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xdb0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Resource";
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Tree::set_column_title((int)uVar1,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xdb0),false);
  Tree::set_column_expand_ratio((int)*(undefined8 *)(this + 0xdb0),0);
  local_58 = "";
  local_60 = 0;
  uVar1 = *(undefined8 *)(this + 0xdb0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Path";
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Tree::set_column_title((int)uVar1,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xdb0),true);
  Tree::set_column_expand_ratio((int)*(undefined8 *)(this + 0xdb0),1);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xdb0),0));
  plVar2 = *(long **)(this + 0xdb0);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC11;
  *(DependencyEditor **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_0011cea0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar1;
  *(code **)(pCVar6 + 0x38) = _load_pressed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "DependencyEditor::_load_pressed";
  Callable::Callable((Callable *)&local_58,pCVar6);
  StringName::StringName((StringName *)&local_60,"button_clicked",false);
  (*pcVar3)(plVar2,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,false);
  this_02[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_0011b8e0;
  postinitialize_handler((Object *)this_02);
  this_03 = (Label *)operator_new(0xad8,"");
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Dependencies:";
  local_68 = 0;
  local_50 = 0xd;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Label::Label(this_03,(String *)&local_58);
  postinitialize_handler((Object *)this_03);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  StringName::StringName((StringName *)&local_58,"HeaderSmall",false);
  Control::set_theme_type_variation((StringName *)this_03);
  if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
    StringName::unref();
  }
  Node::add_child(this_02,this_03,0,0);
  BoxContainer::add_spacer(SUB81(this_02,0));
  this_04 = (Button *)operator_new(0xc10,"");
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Fix Broken";
  local_68 = 0;
  local_50 = 10;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Button::Button(this_04,(String *)&local_58);
  postinitialize_handler((Object *)this_04);
  *(Button **)(this + 0xdb8) = this_04;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this_02,*(undefined8 *)(this + 0xdb8),0,0);
  plVar2 = *(long **)(this + 0xdb8);
  pcVar3 = *(code **)(*plVar2 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined ***)pCVar6 = &PTR_hash_0011cf30;
  *(undefined8 *)(pCVar6 + 0x30) = uVar1;
  *(code **)(pCVar6 + 0x38) = _fix_all;
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined **)(pCVar6 + 0x20) = &_LC11;
  *(DependencyEditor **)(pCVar6 + 0x28) = this;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "DependencyEditor::_fix_all";
  Callable::Callable((Callable *)&local_58,pCVar6);
  (*pcVar3)(plVar2,SceneStringNames::singleton + 0x238,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  Node::add_child(this_00,this_02,0,0);
  this_05 = (MarginContainer *)operator_new(0xa10,"");
  MarginContainer::MarginContainer(this_05);
  postinitialize_handler((Object *)this_05);
  Control::set_v_size_flags(this_05,3);
  Node::add_child(this_05,*(undefined8 *)(this + 0xdb0),0,0);
  Node::add_child(this_00,this_05,0,0);
  local_58 = "";
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Dependency Editor";
  local_68 = 0;
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_06 = (EditorFileDialog *)operator_new(0x1108,"");
  EditorFileDialog::EditorFileDialog(this_06);
  postinitialize_handler((Object *)this_06);
  lVar4 = *(long *)this_06;
  *(EditorFileDialog **)(this + 0xdc0) = this_06;
  pcVar3 = *(code **)(lVar4 + 0x108);
  pCVar6 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar6);
  *(undefined **)(pCVar6 + 0x20) = &_LC11;
  *(DependencyEditor **)(pCVar6 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar6 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar6 = &PTR_hash_0011cfc0;
  *(undefined8 *)(pCVar6 + 0x40) = 0;
  uVar1 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar6 + 0x10) = 0;
  *(undefined8 *)(pCVar6 + 0x30) = uVar1;
  *(code **)(pCVar6 + 0x38) = _searched;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar6,(int)pCVar6 + 0x28);
  *(char **)(pCVar6 + 0x20) = "DependencyEditor::_searched";
  Callable::Callable((Callable *)&local_58,pCVar6);
  StringName::StringName((StringName *)&local_60,"file_selected",false);
  (*pcVar3)(this_06,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
  EditorFileDialog::set_file_mode(*(undefined8 *)(this + 0xdc0),0);
  local_58 = "";
  local_60 = 0;
  pSVar5 = *(String **)(this + 0xdc0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Search Replacement Resource:";
  local_68 = 0;
  local_50 = 0x1c;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Window::set_title(pSVar5);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    Node::add_child(this,*(undefined8 *)(this + 0xdc0),0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OrphanResourcesDialog::OrphanResourcesDialog() */

void __thiscall OrphanResourcesDialog::OrphanResourcesDialog(OrphanResourcesDialog *this)

{
  long *plVar1;
  code *pcVar2;
  undefined8 uVar3;
  ConfirmationDialog *this_00;
  DependencyEditor *this_01;
  CallableCustom *pCVar4;
  BoxContainer *this_02;
  Tree *this_03;
  long in_FS_OFFSET;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ConfirmationDialog::ConfirmationDialog((ConfirmationDialog *)this);
  local_58 = "";
  *(undefined ***)this = &PTR__initialize_classv_0011cc28;
  *(undefined1 (*) [16])(this + 0xdb8) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(this + 0xdc8) = (undefined1  [16])0x0;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Orphan Resource Explorer";
  local_68 = 0;
  local_50 = 0x18;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  this_00 = (ConfirmationDialog *)operator_new(0xdb8,"");
  ConfirmationDialog::ConfirmationDialog(this_00);
  postinitialize_handler((Object *)this_00);
  local_58 = "";
  *(ConfirmationDialog **)(this + 0xdc8) = this_00;
  local_60 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Delete";
  local_68 = 0;
  local_50 = 6;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  AcceptDialog::set_ok_button_text(this,(String *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Node::add_child(this,*(undefined8 *)(this + 0xdc8),0,0);
  this_01 = (DependencyEditor *)operator_new(0xde0,"");
  DependencyEditor::DependencyEditor(this_01);
  postinitialize_handler((Object *)this_01);
  *(DependencyEditor **)(this + 0xdb8) = this_01;
  Node::add_child(this,this_01,0,0);
  plVar1 = *(long **)(this + 0xdc8);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar4 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar4);
  *(undefined **)(pCVar4 + 0x20) = &_LC11;
  *(OrphanResourcesDialog **)(pCVar4 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar4 = &PTR_hash_0011d200;
  *(undefined8 *)(pCVar4 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar4 + 0x10) = 0;
  *(undefined8 *)(pCVar4 + 0x30) = uVar3;
  *(code **)(pCVar4 + 0x38) = _delete_confirm;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
  *(char **)(pCVar4 + 0x20) = "OrphanResourcesDialog::_delete_confirm";
  Callable::Callable((Callable *)&local_58,pCVar4);
  (*pcVar2)(plVar1,SceneStringNames::singleton + 0x268,(String *)&local_58,0);
  Callable::~Callable((Callable *)&local_58);
  AcceptDialog::set_hide_on_ok(SUB81(this,0));
  this_02 = (BoxContainer *)operator_new(0xa10,"");
  BoxContainer::BoxContainer(this_02,true);
  this_02[0xa0c] = (BoxContainer)0x1;
  *(undefined ***)this_02 = &PTR__initialize_classv_0011bc58;
  postinitialize_handler((Object *)this_02);
  Node::add_child(this,this_02,0,0);
  this_03 = (Tree *)operator_new(0xdc8,"");
  Tree::Tree(this_03);
  postinitialize_handler((Object *)this_03);
  *(Tree **)(this + 0xdc0) = this_03;
  Node::set_auto_translate_mode(this_03,2);
  Tree::set_columns((int)*(undefined8 *)(this + 0xdc0));
  Tree::set_column_titles_visible(SUB81(*(undefined8 *)(this + 0xdc0),0));
  uVar3 = *(undefined8 *)(this + 0xdc0);
  EditorScale::get_scale();
  Tree::set_column_custom_minimum_width((int)uVar3,1);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xdc0),false);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xdc0),false);
  Tree::set_column_expand((int)*(undefined8 *)(this + 0xdc0),true);
  Tree::set_column_clip_content((int)*(undefined8 *)(this + 0xdc0),true);
  local_58 = "";
  local_60 = 0;
  uVar3 = *(undefined8 *)(this + 0xdc0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Resource";
  local_68 = 0;
  local_50 = 8;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Tree::set_column_title((int)uVar3,(String *)0x0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  local_58 = "";
  local_60 = 0;
  uVar3 = *(undefined8 *)(this + 0xdc0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Owns";
  local_68 = 0;
  local_50 = 4;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  Tree::set_column_title((int)uVar3,(String *)0x1);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Tree::set_hide_root(SUB81(*(undefined8 *)(this + 0xdc0),0));
  local_58 = "";
  local_60 = 0;
  uVar3 = *(undefined8 *)(this + 0xdc0);
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_60);
  local_58 = "Resources Without Explicit Ownership:";
  local_68 = 0;
  local_50 = 0x25;
  String::parse_latin1((StrRange *)&local_68);
  TTR((String *)&local_58,(String *)&local_68);
  VBoxContainer::add_margin_child((String *)this_02,(Control *)&local_58,SUB81(uVar3,0));
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  plVar1 = *(long **)(this + 0xdc0);
  pcVar2 = *(code **)(*plVar1 + 0x108);
  pCVar4 = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(pCVar4);
  *(undefined **)(pCVar4 + 0x20) = &_LC11;
  *(OrphanResourcesDialog **)(pCVar4 + 0x28) = this;
  *(undefined1 (*) [16])(pCVar4 + 0x30) = (undefined1  [16])0x0;
  *(undefined ***)pCVar4 = &PTR_hash_0011d290;
  *(undefined8 *)(pCVar4 + 0x40) = 0;
  uVar3 = *(undefined8 *)(this + 0x60);
  *(undefined8 *)(pCVar4 + 0x10) = 0;
  *(undefined8 *)(pCVar4 + 0x30) = uVar3;
  *(code **)(pCVar4 + 0x38) = _button_pressed;
  CallableCustomMethodPointerBase::_setup((uint *)pCVar4,(int)pCVar4 + 0x28);
  *(char **)(pCVar4 + 0x20) = "OrphanResourcesDialog::_button_pressed";
  Callable::Callable((Callable *)&local_58,pCVar4);
  StringName::StringName((StringName *)&local_60,"button_clicked",false);
  (*pcVar2)(plVar1,(StrRange *)&local_60,(String *)&local_58,0);
  if ((StringName::configured != '\0') && (local_60 != 0)) {
    StringName::unref();
  }
  Callable::~Callable((Callable *)&local_58);
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



/* OrphanResourcesDialog::_find_to_delete(TreeItem*, List<String, DefaultAllocator>&) */

void __thiscall
OrphanResourcesDialog::_find_to_delete(OrphanResourcesDialog *this,TreeItem *param_1,List *param_2)

{
  long *plVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  TreeItem *pTVar5;
  CowData<char32_t> *this_00;
  undefined1 (*pauVar6) [16];
  long in_FS_OFFSET;
  Variant local_60 [8];
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_1 != (TreeItem *)0x0) {
    do {
      iVar3 = TreeItem::get_cell_mode((int)param_1);
      if ((iVar3 == 1) && (cVar2 = TreeItem::is_checked((int)param_1), cVar2 != '\0')) {
        TreeItem::get_metadata((int)local_58);
        Variant::operator_cast_to_String(local_60);
        if (*(long *)param_2 == 0) {
          pauVar6 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined1 (**) [16])param_2 = pauVar6;
          *(undefined4 *)pauVar6[1] = 0;
          *pauVar6 = (undefined1  [16])0x0;
        }
        this_00 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
        *(undefined1 (*) [16])this_00 = (undefined1  [16])0x0;
        *(undefined1 (*) [16])(this_00 + 0x10) = (undefined1  [16])0x0;
        CowData<char32_t>::_ref(this_00,(CowData *)local_60);
        plVar1 = *(long **)param_2;
        lVar4 = plVar1[1];
        *(undefined8 *)(this_00 + 8) = 0;
        *(long **)(this_00 + 0x18) = plVar1;
        *(long *)(this_00 + 0x10) = lVar4;
        if (lVar4 != 0) {
          *(CowData<char32_t> **)(lVar4 + 8) = this_00;
        }
        plVar1[1] = (long)this_00;
        if (*plVar1 == 0) {
          *plVar1 = (long)this_00;
        }
        *(int *)(plVar1 + 2) = (int)plVar1[2] + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
      }
      lVar4 = TreeItem::get_first_child();
      if (lVar4 != 0) {
        pTVar5 = (TreeItem *)TreeItem::get_first_child();
        _find_to_delete(this,pTVar5,param_2);
      }
      param_1 = (TreeItem *)TreeItem::get_next();
    } while (param_1 != (TreeItem *)0x0);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
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



/* DependencyErrorDialog::show(DependencyErrorDialog::Mode, String const&, Vector<String> const&) */

void __thiscall
DependencyErrorDialog::show
          (DependencyErrorDialog *this,undefined4 param_2,CowData *param_3,long param_4)

{
  code *pcVar1;
  int iVar2;
  String *pSVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined8 local_88;
  undefined8 local_80;
  char *local_78;
  char *local_70;
  Object *local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)(this + 0xdc0) = param_2;
  CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xdb8),param_3);
  String::get_file();
  local_58 = " ";
  local_70 = (char *)0x0;
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = "";
  local_80 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_58 = "Error loading:";
  local_88 = 0;
  local_50 = 0xe;
  String::parse_latin1((StrRange *)&local_88);
  TTR((String *)&local_78,(String *)&local_88);
  String::operator+((String *)&local_68,(String *)&local_78);
  String::operator+((String *)&local_58,(String *)&local_68);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  Tree::clear();
  iVar6 = Tree::create_item(*(TreeItem **)(this + 0xdd8),0);
  lVar8 = *(long *)(param_4 + 8);
  if (lVar8 != 0) {
    lVar11 = 0;
    do {
      if (*(long *)(lVar8 + -8) <= lVar11) break;
      local_78 = (char *)0x0;
      local_70 = (char *)0x0;
      local_58 = "Object";
      local_50 = 6;
      String::parse_latin1((StrRange *)&local_70);
      lVar8 = *(long *)(param_4 + 8);
      if (lVar8 == 0) {
LAB_00102720:
        lVar10 = 0;
LAB_00102723:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar1 = (code *)invalidInstructionException();
        (*pcVar1)();
      }
      lVar10 = *(long *)(lVar8 + -8);
      if (lVar10 <= lVar11) goto LAB_00102723;
      iVar2 = (int)(lVar11 * 8);
      String::get_slice((char *)&local_58,(int)lVar8 + iVar2);
      if (local_58 != (char *)0x0) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_58;
        local_58 = (char *)0x0;
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      lVar8 = *(long *)(param_4 + 8);
      if (lVar8 == 0) goto LAB_00102720;
      lVar10 = *(long *)(lVar8 + -8);
      if (lVar10 <= lVar11) goto LAB_00102723;
      iVar7 = String::get_slice_count((char *)(lVar8 + lVar11 * 8));
      if (0 < iVar7) {
        lVar8 = *(long *)(param_4 + 8);
        if (lVar8 == 0) goto LAB_00102720;
        lVar10 = *(long *)(lVar8 + -8);
        if (lVar10 <= lVar11) goto LAB_00102723;
        String::get_slice((char *)&local_58,(int)lVar8 + iVar2);
        if (local_70 != local_58) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          local_70 = local_58;
          local_58 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      }
      pSVar3 = EditorNode::singleton;
      local_58 = "";
      local_60 = 0;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_60);
      EditorNode::get_class_icon((String *)&local_68,pSVar3);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      uVar9 = Tree::create_item(*(TreeItem **)(this + 0xdd8),iVar6);
      local_58 = (char *)0x0;
      if (local_78 != (char *)0x0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_78);
      }
      TreeItem::set_text(uVar9,0,(String *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      TreeItem::set_icon((int)uVar9,(Ref *)0x0);
      if (local_68 != (Object *)0x0) {
        cVar5 = RefCounted::unreference();
        pOVar4 = local_68;
        if (cVar5 != '\0') {
          cVar5 = predelete_handler(local_68);
          if (cVar5 != '\0') {
            (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
            Memory::free_static(pOVar4,false);
          }
        }
      }
      lVar11 = lVar11 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
      lVar8 = *(long *)(param_4 + 8);
    } while (lVar8 != 0);
  }
  local_48 = 0;
  Window::popup_centered(this);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyEditor::_load_pressed(Object*, int, int, MouseButton) */

void __thiscall
DependencyEditor::_load_pressed
          (DependencyEditor *this,long param_1,undefined8 param_3,undefined8 param_4,int param_5)

{
  long *plVar1;
  String *pSVar2;
  long lVar3;
  long lVar4;
  char *pcVar5;
  long in_FS_OFFSET;
  String local_98 [8];
  CowData<char32_t> local_90 [8];
  String local_88 [8];
  undefined8 local_80;
  long *local_78;
  long local_70;
  char *local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 1) {
    if (param_1 != 0) {
      __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
    }
    TreeItem::get_text((int)(CowData<char32_t> *)&local_68);
    if (*(char **)(this + 0xdc8) != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdc8));
      pcVar5 = local_68;
      local_68 = (char *)0x0;
      *(char **)(this + 0xdc8) = pcVar5;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    pSVar2 = *(String **)(this + 0xdc0);
    String::get_file();
    local_80 = 0;
    local_68 = " ";
    local_60 = 1;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = "";
    local_78 = (long *)0x0;
    local_60 = 0;
    String::parse_latin1((StrRange *)&local_78);
    local_68 = "Search Replacement For:";
    local_70 = 0;
    local_60 = 0x17;
    String::parse_latin1((StrRange *)&local_70);
    TTR((String *)&local_68,(String *)&local_70);
    String::operator+(local_88,(String *)&local_68);
    String::operator+(local_98,local_88);
    Window::set_title(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref(local_90);
    pSVar2 = *(String **)(this + 0xdc0);
    String::get_base_dir();
    EditorFileDialog::set_current_dir(pSVar2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    EditorFileDialog::clear_filters();
    local_78 = (long *)0x0;
    TreeItem::get_metadata((int)local_58);
    Variant::operator_cast_to_String((Variant *)&local_68);
    ResourceLoader::get_recognized_extensions_for_type((String *)&local_68,(List *)&local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    if (local_78 != (long *)0x0) {
      for (lVar3 = *local_78; lVar3 != 0; lVar3 = *(long *)(lVar3 + 8)) {
        pSVar2 = *(String **)(this + 0xdc0);
        local_70 = 0;
        local_68 = "";
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_70);
        operator+((char *)&local_68,(String *)&_LC88);
        EditorFileDialog::add_filter(pSVar2,(String *)&local_68);
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
        lVar4 = local_70;
        if (local_70 != 0) {
          LOCK();
          plVar1 = (long *)(local_70 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void *)(lVar4 + -0x10),false);
          }
        }
      }
    }
    EditorFileDialog::popup_file_dialog();
    List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_78);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* DependencyEditor::_update_list() */

void __thiscall DependencyEditor::_update_list(DependencyEditor *this)

{
  long lVar1;
  StringName *pSVar2;
  String *pSVar3;
  Object *pOVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  CowData<char32_t> *pCVar10;
  undefined1 (*pauVar11) [16];
  long *plVar12;
  int iVar13;
  CowData *pCVar14;
  long in_FS_OFFSET;
  long *local_a0;
  Object *local_98;
  char *local_90;
  char *local_88;
  long local_80;
  Object *local_78;
  undefined8 local_70;
  char *local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_a0 = (long *)0x0;
  ResourceLoader::get_dependencies((String *)(this + 0xdd0),(List *)&local_a0,true);
  Tree::clear();
  plVar12 = *(long **)(this + 0xdd8);
  if (plVar12 != (long *)0x0) {
    do {
      pCVar10 = (CowData<char32_t> *)*plVar12;
      if (pCVar10 == (CowData<char32_t> *)0x0) goto LAB_00102c42;
      if (plVar12 == *(long **)(pCVar10 + 0x18)) {
        lVar8 = *(long *)(pCVar10 + 8);
        lVar1 = *(long *)(pCVar10 + 0x10);
        *plVar12 = lVar8;
        if (pCVar10 == (CowData<char32_t> *)plVar12[1]) {
          plVar12[1] = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 8) = lVar8;
          lVar8 = *(long *)(pCVar10 + 8);
        }
        if (lVar8 != 0) {
          *(long *)(lVar8 + 0x10) = lVar1;
        }
        CowData<char32_t>::_unref(pCVar10);
        Memory::free_static(pCVar10,false);
        *(int *)(plVar12 + 2) = (int)plVar12[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar12 = *(long **)(this + 0xdd8);
    } while ((int)plVar12[2] != 0);
    Memory::free_static(plVar12,false);
    *(undefined8 *)(this + 0xdd8) = 0;
  }
LAB_00102c42:
  iVar6 = Tree::create_item(*(TreeItem **)(this + 0xdb0),0);
  pSVar2 = *(StringName **)(this + 0xdb0);
  if ((_update_list()::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&_update_list()::{lambda()#2}::operator()()::sname), iVar7 != 0))
  {
    _scs_create((char *)&_update_list()::{lambda()#2}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_list()::{lambda()#2}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_list()::{lambda()#2}::operator()()::sname);
  }
  if ((_update_list()::{lambda()#1}::operator()()::sname == '\0') &&
     (iVar7 = __cxa_guard_acquire(&_update_list()::{lambda()#1}::operator()()::sname), iVar7 != 0))
  {
    _scs_create((char *)&_update_list()::{lambda()#1}::operator()()::sname,true);
    __cxa_atexit(StringName::~StringName,&_update_list()::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_update_list()::{lambda()#1}::operator()()::sname);
  }
  Control::get_theme_icon((StringName *)&local_98,pSVar2);
  if ((local_a0 != (long *)0x0) && (pCVar14 = (CowData *)*local_a0, pCVar14 != (CowData *)0x0)) {
    do {
      uVar9 = Tree::create_item(*(TreeItem **)(this + 0xdb0),iVar6);
      local_90 = (char *)0x0;
      local_88 = (char *)0x0;
      iVar7 = String::find((char *)pCVar14,0x10dd65);
      iVar13 = (int)pCVar14;
      if (iVar7 == -1) {
        if (local_90 != *(char **)pCVar14) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,pCVar14);
        }
        local_60 = 8;
        local_68 = "Resource";
        String::parse_latin1((StrRange *)&local_88);
      }
      else {
        String::get_slice((char *)&local_68,iVar13);
        if (local_90 != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          local_90 = local_68;
          local_68 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        String::get_slice((char *)&local_68,iVar13);
        if (local_88 != local_68) {
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          local_88 = local_68;
          local_68 = (char *)0x0;
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      }
      lVar8 = ResourceUID::text_to_id(ResourceUID::singleton);
      if (lVar8 == -1) {
LAB_00102e05:
        String::get_file();
        pSVar3 = EditorNode::singleton;
        local_70 = 0;
        local_68 = "";
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_70);
        EditorNode::get_class_icon((String *)&local_78,pSVar3);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        local_68 = (char *)0x0;
        if (local_80 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_80);
        }
        TreeItem::set_text(uVar9,0,(CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        iVar7 = (int)uVar9;
        TreeItem::set_icon(iVar7,(Ref *)0x0);
        Variant::Variant((Variant *)&local_58,(String *)&local_88);
        TreeItem::set_metadata(iVar7,(Variant *)0x0);
        if (Variant::needs_deinit[(int)local_58] != '\0') {
          Variant::_clear_internal();
        }
        local_68 = (char *)0x0;
        if (local_90 != (char *)0x0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_90);
        }
        TreeItem::set_text(uVar9,1,(CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        cVar5 = FileAccess::exists((String *)&local_90);
        if (cVar5 == '\0') {
          local_58 = __LC94;
          uStack_50 = __LC129;
          TreeItem::set_custom_color(iVar7,(Color *)0x1);
          if (*(long *)(this + 0xdd8) == 0) {
            pauVar11 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined1 (**) [16])(this + 0xdd8) = pauVar11;
            *(undefined4 *)pauVar11[1] = 0;
            *pauVar11 = (undefined1  [16])0x0;
          }
          pCVar10 = (CowData<char32_t> *)operator_new(0x20,DefaultAllocator::alloc);
          *(undefined1 (*) [16])pCVar10 = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pCVar10 + 0x10) = (undefined1  [16])0x0;
          CowData<char32_t>::_ref(pCVar10,(CowData *)&local_90);
          plVar12 = *(long **)(this + 0xdd8);
          lVar8 = plVar12[1];
          *(undefined8 *)(pCVar10 + 8) = 0;
          *(long **)(pCVar10 + 0x18) = plVar12;
          *(long *)(pCVar10 + 0x10) = lVar8;
          if (lVar8 != 0) {
            *(CowData<char32_t> **)(lVar8 + 8) = pCVar10;
          }
          plVar12[1] = (long)pCVar10;
          if (*plVar12 == 0) {
            *plVar12 = (long)pCVar10;
          }
          *(int *)(plVar12 + 2) = (int)plVar12[2] + 1;
        }
        local_70 = 0;
        local_68 = "";
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_70);
        TreeItem::add_button(iVar7,(Ref *)0x1,(int)(StringName *)&local_98,false,(String *)0x0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if (((local_78 != (Object *)0x0) &&
            (cVar5 = RefCounted::unreference(), pOVar4 = local_78, cVar5 != '\0')) &&
           (cVar5 = predelete_handler(local_78), cVar5 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      }
      else {
        cVar5 = ResourceUID::has_id((long)ResourceUID::singleton);
        if (cVar5 != '\0') {
          ResourceUID::get_id_path((long)&local_68);
          if (local_90 != local_68) {
LAB_00102ddc:
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
            local_90 = local_68;
            local_68 = (char *)0x0;
          }
LAB_00102dfd:
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          goto LAB_00102e05;
        }
        iVar7 = String::get_slice_count((char *)pCVar14);
        if (2 < iVar7) {
          String::get_slice((char *)&local_68,iVar13);
          if (local_90 != local_68) goto LAB_00102ddc;
          goto LAB_00102dfd;
        }
        _err_print_error("_update_list","editor/dependency_editor.cpp",0xc9,
                         "Invalid dependency UID and fallback path.",0,0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      }
      pCVar14 = *(CowData **)(pCVar14 + 8);
    } while (pCVar14 != (CowData *)0x0);
  }
  BaseButton::set_disabled(SUB81(*(undefined8 *)(this + 0xdb8),0));
  if (((local_98 != (Object *)0x0) && (cVar5 = RefCounted::unreference(), cVar5 != '\0')) &&
     (cVar5 = predelete_handler(local_98), cVar5 != '\0')) {
    (**(code **)(*(long *)local_98 + 0x140))(local_98);
    Memory::free_static(local_98,false);
  }
  List<String,DefaultAllocator>::~List((List<String,DefaultAllocator> *)&local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DependencyEditor::edit(String const&) */

void __thiscall DependencyEditor::edit(DependencyEditor *this,String *param_1)

{
  String *pSVar1;
  char cVar2;
  long in_FS_OFFSET;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  String local_78 [8];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xdd0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xdd0),(CowData *)param_1);
  }
  String::get_file();
  local_70 = 0;
  local_58 = " ";
  local_50 = 1;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = "";
  local_80 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_58 = "Dependencies For:";
  local_50 = 0x11;
  String::parse_latin1((StrRange *)&local_88);
  TTR(local_78,(String *)&local_88);
  String::operator+((String *)&local_68,local_78);
  String::operator+((String *)&local_58,(String *)&local_68);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  _update_list(this);
  Window::popup_centered_ratio(_LC96);
  cVar2 = EditorNode::is_scene_open(EditorNode::singleton);
  pSVar1 = EditorNode::singleton;
  if (cVar2 == '\0') {
    cVar2 = ResourceCache::has(param_1);
    pSVar1 = EditorNode::singleton;
    if (cVar2 != '\0') {
      local_58 = (char *)0x0;
      String::parse_latin1((String *)&local_58,"");
      local_60 = 0;
      String::parse_latin1((String *)&local_60,"Warning!");
      TTR((String *)&local_68,(String *)&local_60);
      String::get_file();
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"");
      local_90 = 0;
      String::parse_latin1
                ((String *)&local_90,
                 "Resource \'%s\' is in use.\nChanges will only take effect when reloaded.");
      TTR((String *)&local_80,(String *)&local_90);
      vformat<String>((StrRange *)&local_70,(StrRange *)&local_80,local_78);
      EditorNode::show_warning(pSVar1,(String *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
  }
  else {
    local_58 = "";
    local_60 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_60);
    local_68 = 0;
    local_58 = "Warning!";
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    TTR((String *)&local_70,(String *)&local_68);
    String::get_file();
    local_58 = "";
    local_88 = 0;
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_88);
    local_58 = 
    "Scene \'%s\' is currently being edited.\nChanges will only take effect when reloaded.";
    local_90 = 0;
    local_50 = 0x52;
    String::parse_latin1((StrRange *)&local_90);
    TTR((String *)&local_80,(String *)&local_90);
    vformat<String>((String *)&local_58,(StrRange *)&local_80,local_78);
    EditorNode::show_warning(pSVar1,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OrphanResourcesDialog::_button_pressed(Object*, int, int, MouseButton) */

void __thiscall
OrphanResourcesDialog::_button_pressed
          (OrphanResourcesDialog *this,long param_1,undefined8 param_3,undefined8 param_4,
          int param_5)

{
  long in_FS_OFFSET;
  Variant local_40 [8];
  int local_38 [6];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_5 == 1) {
    if (param_1 != 0) {
      __dynamic_cast(param_1,&Object::typeinfo,&TreeItem::typeinfo,0);
    }
    TreeItem::get_metadata((int)local_38);
    Variant::operator_cast_to_String(local_40);
    if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
    }
    DependencyEditor::edit(*(DependencyEditor **)(this + 0xdb8),(String *)local_40);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::initialize_class() [clone .part.0] */

void AcceptDialog::initialize_class(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  long local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
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
        if ((code *)PTR__bind_methods_00123010 != Node::_bind_methods) {
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
    local_68 = 0;
    local_58 = "Viewport";
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
  local_58 = "Window";
  local_68 = 0;
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
  if ((code *)_GLOBAL_OFFSET_TABLE_ != Window::_bind_methods) {
    AcceptDialog::_bind_methods();
  }
  if ((code *)PTR__bind_compatibility_methods_00123008 != Object::_bind_compatibility_methods) {
    AcceptDialog::_bind_compatibility_methods();
  }
  initialize_class()::initialized = 1;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OrphanResourcesDialog::ok_pressed() */

void __thiscall OrphanResourcesDialog::ok_pressed(OrphanResourcesDialog *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  TreeItem *pTVar4;
  long *plVar5;
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  String local_60 [8];
  char *local_58;
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  plVar5 = *(long **)(this + 0xdd0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    do {
      this_00 = (CowData<char32_t> *)*plVar5;
      if (this_00 == (CowData<char32_t> *)0x0) goto LAB_00103db2;
      if (*(long **)(this_00 + 0x18) == plVar5) {
        lVar3 = *(long *)(this_00 + 8);
        lVar1 = *(long *)(this_00 + 0x10);
        *plVar5 = lVar3;
        if (this_00 == (CowData<char32_t> *)plVar5[1]) {
          plVar5[1] = lVar1;
        }
        if (lVar1 != 0) {
          *(long *)(lVar1 + 8) = lVar3;
          lVar3 = *(long *)(this_00 + 8);
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar1;
        }
        CowData<char32_t>::_unref(this_00);
        Memory::free_static(this_00,false);
        *(int *)(plVar5 + 2) = (int)plVar5[2] + -1;
      }
      else {
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      }
      plVar5 = *(long **)(this + 0xdd0);
    } while ((int)plVar5[2] != 0);
    Memory::free_static(plVar5,false);
    *(undefined8 *)(this + 0xdd0) = 0;
  }
LAB_00103db2:
  pTVar4 = (TreeItem *)Tree::get_root();
  _find_to_delete(this,pTVar4,(List *)(this + 0xdd0));
  if ((*(long *)(this + 0xdd0) != 0) && (*(int *)(*(long *)(this + 0xdd0) + 0x10) != 0)) {
    uVar2 = *(undefined8 *)(this + 0xdc8);
    local_68 = 0;
    local_58 = "";
    local_50 = 0;
    String::parse_latin1((StrRange *)&local_68);
    local_58 = "Permanently delete %d item(s)? (No undo!)";
    local_70 = 0;
    local_50 = 0x29;
    String::parse_latin1((StrRange *)&local_70);
    TTR(local_60,(String *)&local_70);
    vformat<int>((String *)&local_58,(int)local_60);
    AcceptDialog::set_text(uVar2,(String *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    local_48 = 0;
    Window::popup_centered(*(Vector2i **)(this + 0xdc8));
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyRemoveDialog::_bind_methods() */

void DependencyRemoveDialog::_bind_methods(void)

{
  long *plVar1;
  long lVar2;
  code *pcVar3;
  int *piVar4;
  int *piVar5;
  long lVar6;
  long in_FS_OFFSET;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  long local_108;
  undefined8 local_100;
  char *local_f8;
  undefined8 local_f0;
  PropertyInfo local_e8 [48];
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
  local_108 = 0;
  local_110 = 0;
  local_b8 = "";
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_118 = 0;
  local_b8 = "obj";
  local_b0 = 3;
  String::parse_latin1((StrRange *)&local_118);
  PropertyInfo::PropertyInfo
            (local_e8,0x18,(StrRange *)&local_118,0,(StrRange *)&local_110,6,&local_108);
  local_100 = 0;
  local_b8 = "resource_removed";
  local_b0 = 0x10;
  String::parse_latin1((StrRange *)&local_100);
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_f8 = "DependencyRemoveDialog";
  local_120 = 0;
  local_f0 = 0x16;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
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
        lVar6 = 0;
        piVar5 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  PropertyInfo::~PropertyInfo(local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  local_108 = 0;
  local_b8 = "";
  local_110 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_b8 = "file";
  local_118 = 0;
  local_b0 = 4;
  String::parse_latin1((StrRange *)&local_118);
  PropertyInfo::PropertyInfo
            (local_e8,4,(StrRange *)&local_118,0,(StrRange *)&local_110,6,&local_108);
  local_b8 = "file_removed";
  local_100 = 0;
  local_b0 = 0xc;
  String::parse_latin1((StrRange *)&local_100);
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_f8 = "DependencyRemoveDialog";
  local_120 = 0;
  local_f0 = 0x16;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
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
        lVar6 = 0;
        piVar5 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  PropertyInfo::~PropertyInfo(local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  local_108 = 0;
  local_b8 = "";
  local_110 = 0;
  local_b0 = 0;
  String::parse_latin1((StrRange *)&local_110);
  local_b8 = "folder";
  local_118 = 0;
  local_b0 = 6;
  String::parse_latin1((StrRange *)&local_118);
  PropertyInfo::PropertyInfo
            (local_e8,4,(StrRange *)&local_118,0,(StrRange *)&local_110,6,&local_108);
  local_b8 = "folder_removed";
  local_100 = 0;
  local_b0 = 0xe;
  String::parse_latin1((StrRange *)&local_100);
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
  CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)&local_100);
  List<PropertyInfo,DefaultAllocator>::push_back
            ((List<PropertyInfo,DefaultAllocator> *)local_78,local_e8);
  local_f8 = "DependencyRemoveDialog";
  local_120 = 0;
  local_f0 = 0x16;
  String::parse_latin1((StrRange *)&local_120);
  StringName::StringName((StringName *)&local_f8,(String *)&local_120,false);
  ClassDB::add_signal((StringName *)&local_f8,(MethodInfo *)&local_b8);
  if ((StringName::configured != '\0') && (local_f8 != (char *)0x0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
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
        lVar6 = 0;
        piVar5 = piVar4;
        do {
          if (Variant::needs_deinit[*piVar5] != '\0') {
            Variant::_clear_internal();
          }
          lVar6 = lVar6 + 1;
          piVar5 = piVar5 + 6;
        } while (lVar2 != lVar6);
      }
      Memory::free_static(piVar4 + -4,false);
    }
  }
  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator> *)local_78);
  PropertyInfo::~PropertyInfo((PropertyInfo *)&local_b0);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_100);
  PropertyInfo::~PropertyInfo(local_e8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_118);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_110);
  if ((StringName::configured != '\0') && (local_108 != 0)) {
    StringName::unref();
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DependencyEditorOwners::_list_rmb_clicked(int, Vector2 const&, MouseButton) */

void __thiscall
DependencyEditorOwners::_list_rmb_clicked
          (DependencyEditorOwners *this,int param_1,undefined8 *param_2,int param_4)

{
  long *plVar1;
  Vector2i *pVVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long in_FS_OFFSET;
  undefined8 uVar8;
  String local_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  CowData<char32_t> local_80 [16];
  long local_70;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_4 == 2) {
    PopupMenu::clear(SUB81(*(undefined8 *)(this + 0xdb8),0));
    Window::reset_size();
    if (-1 < param_1) {
      ItemList::get_selected_items();
      for (lVar7 = 0; (local_70 != 0 && (lVar7 < *(long *)(local_70 + -8))); lVar7 = lVar7 + 1) {
        ItemList::get_item_text((int)local_80);
        ResourceLoader::get_resource_type((String *)&local_88);
        cVar4 = String::operator!=((String *)&local_88,"PackedScene");
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        CowData<char32_t>::_unref(local_80);
        lVar3 = local_70;
        if (cVar4 != '\0') {
          if (local_70 == 0) goto LAB_00104992;
          if (*(long *)(local_70 + -8) != 1) {
            LOCK();
            plVar1 = (long *)(local_70 + -0x10);
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
              local_70 = 0;
              Memory::free_static((void *)(lVar3 + -0x10),false);
            }
            goto LAB_00104992;
          }
          local_90 = 0;
          uVar8 = *(undefined8 *)(this + 0xdb8);
          String::parse_latin1((String *)&local_90,"");
          local_88 = 0;
          String::parse_latin1((String *)&local_88,"Open");
          TTR((String *)&local_98,(String *)&local_88);
          if ((_list_rmb_clicked(int,Vector2_const&,MouseButton)::{lambda()#2}::operator()()::sname
               == '\0') &&
             (iVar5 = __cxa_guard_acquire(&_list_rmb_clicked(int,Vector2_const&,MouseButton)::
                                           {lambda()#2}::operator()()::sname), iVar5 != 0)) {
            _scs_create((char *)&_list_rmb_clicked(int,Vector2_const&,MouseButton)::{lambda()#2}::
                                 operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_list_rmb_clicked(int,Vector2_const&,MouseButton)::{lambda()#2}::
                          operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_list_rmb_clicked(int,Vector2_const&,MouseButton)::{lambda()#2}::
                                 operator()()::sname);
          }
          Window::get_editor_theme_icon((StringName *)local_80);
          PopupMenu::add_icon_item(uVar8,local_80,(String *)&local_98,0,0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
          goto LAB_00104b69;
        }
      }
      uVar8 = *(undefined8 *)(this + 0xdb8);
      local_98 = 0;
      String::parse_latin1((String *)&local_98,"");
      if (local_70 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = *(uint *)(local_70 + -8);
      }
      local_90 = 0;
      String::parse_latin1((String *)&local_90,"Open Scenes");
      local_88 = 0;
      String::parse_latin1((String *)&local_88,"Open Scene");
      TTRN(local_a0,(String *)&local_88,(int)(String *)&local_90,(String *)(ulong)uVar6);
      if ((_list_rmb_clicked(int,Vector2_const&,MouseButton)::{lambda()#1}::operator()()::sname ==
           '\0') &&
         (iVar5 = __cxa_guard_acquire(&_list_rmb_clicked(int,Vector2_const&,MouseButton)::
                                       {lambda()#1}::operator()()::sname), iVar5 != 0)) {
        _scs_create((char *)&_list_rmb_clicked(int,Vector2_const&,MouseButton)::{lambda()#1}::
                             operator()()::sname,true);
        __cxa_atexit(StringName::~StringName,
                     &_list_rmb_clicked(int,Vector2_const&,MouseButton)::{lambda()#1}::operator()()
                      ::sname,&__dso_handle);
        __cxa_guard_release(&_list_rmb_clicked(int,Vector2_const&,MouseButton)::{lambda()#1}::
                             operator()()::sname);
      }
      Window::get_editor_theme_icon((StringName *)local_80);
      PopupMenu::add_icon_item(uVar8,local_80,local_a0,0,0);
      Ref<Texture2D>::unref((Ref<Texture2D> *)local_80);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
LAB_00104b69:
      lVar7 = local_70;
      if (local_70 != 0) {
        LOCK();
        plVar1 = (long *)(local_70 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_70 = 0;
          Memory::free_static((void *)(lVar7 + -0x10),false);
        }
      }
    }
    pVVar2 = *(Vector2i **)(this + 0xdb8);
    uVar8 = Control::get_screen_position();
    local_60 = CONCAT44((float)((ulong)*param_2 >> 0x20) + (float)((ulong)uVar8 >> 0x20),
                        (float)*param_2 + (float)uVar8);
    local_58 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_60);
    Window::set_position(pVVar2);
    Window::reset_size();
    local_58 = 0;
    local_50 = 0;
    (**(code **)(**(long **)(this + 0xdb8) + 0x240))(*(long **)(this + 0xdb8),&local_58);
  }
LAB_00104992:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyRemoveDialog::_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>
   const&) */

void __thiscall
DependencyRemoveDialog::_build_removed_dependency_tree(DependencyRemoveDialog *this,Vector *param_1)

{
  int *piVar1;
  uint uVar2;
  TreeItem *pTVar3;
  void *pvVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  ulong uVar13;
  String *pSVar14;
  Object *pOVar15;
  char cVar16;
  int iVar17;
  uint uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  long lVar24;
  CowData *pCVar25;
  int *piVar26;
  undefined8 *puVar27;
  long lVar28;
  long in_FS_OFFSET;
  String *local_f0;
  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
  *local_e0;
  Object *local_b8;
  undefined8 local_b0;
  Object *local_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 local_90;
  long local_88;
  long local_80;
  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
  local_78 [8];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  lVar28 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  Tree::clear();
  Tree::create_item(*(TreeItem **)(this + 0xdc0),0);
  lVar24 = *(long *)(param_1 + 8);
  local_50 = 2;
  local_70 = (undefined1  [16])0x0;
  local_60 = (undefined1  [16])0x0;
  puVar19 = (undefined8 *)0x0;
  if (lVar24 != 0) {
    do {
      if (*(long *)(lVar24 + -8) <= lVar28) break;
      local_98 = 0;
      pCVar25 = (CowData *)(lVar24 + lVar28 * 0x20);
      if (*(long *)pCVar25 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,pCVar25);
      }
      local_90 = 0;
      if (*(long *)(pCVar25 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,pCVar25 + 8);
      }
      local_88 = 0;
      if (*(long *)(pCVar25 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,pCVar25 + 0x10);
      }
      local_80 = 0;
      if (*(long *)(pCVar25 + 0x18) == 0) {
        if ((puVar19 != (undefined8 *)0x0) && (local_50._4_4_ != 0)) {
LAB_00105178:
          uVar2 = (&hash_table_size_primes)[local_50 & 0xffffffff];
          lVar24 = *(long *)(hash_table_size_primes_inv + (local_50 & 0xffffffff) * 8);
          uVar18 = String::hash();
          uVar13 = CONCAT44(0,uVar2);
          uVar20 = local_70._8_8_;
          uVar21 = 1;
          if (uVar18 != 0) {
            uVar21 = uVar18;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar21 * lVar24;
          auVar9._8_8_ = 0;
          auVar9._0_8_ = uVar13;
          lVar22 = SUB168(auVar5 * auVar9,8);
          uVar18 = *(uint *)(local_70._8_8_ + lVar22 * 4);
          iVar17 = SUB164(auVar5 * auVar9,8);
          if (uVar18 != 0) {
            uVar23 = 0;
            do {
              if ((uVar18 == uVar21) &&
                 (cVar16 = String::operator==((String *)(puVar19[lVar22] + 0x10),(String *)&local_88
                                             ), cVar16 != '\0')) goto LAB_00104f9b;
              uVar23 = uVar23 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)(iVar17 + 1) * lVar24;
              auVar10._8_8_ = 0;
              auVar10._0_8_ = uVar13;
              lVar22 = SUB168(auVar6 * auVar10,8);
              uVar18 = *(uint *)(uVar20 + lVar22 * 4);
              iVar17 = SUB164(auVar6 * auVar10,8);
            } while ((uVar18 != 0) &&
                    (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar18 * lVar24, auVar11._8_8_ = 0,
                    auVar11._0_8_ = uVar13, auVar8._8_8_ = 0,
                    auVar8._0_8_ = (ulong)((uVar2 + iVar17) - SUB164(auVar7 * auVar11,8)) * lVar24,
                    auVar12._8_8_ = 0, auVar12._0_8_ = uVar13, uVar23 <= SUB164(auVar8 * auVar12,8))
                    );
          }
          goto LAB_00104eb5;
        }
LAB_00104ecc:
        pTVar3 = *(TreeItem **)(this + 0xdc0);
        iVar17 = Tree::get_root();
        uVar20 = Tree::create_item(pTVar3,iVar17);
        local_a8 = (Object *)0x0;
        if (local_88 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_88);
        }
        TreeItem::set_text(uVar20,0,(CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if ((_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
             ::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar17 = __cxa_guard_acquire(&_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                                          ::{lambda()#3}::operator()()::sname), iVar17 != 0)) {
          _scs_create((char *)&_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                               ::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                        ::{lambda()#3}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                               ::{lambda()#3}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_a8);
        TreeItem::set_icon((int)uVar20,(Ref *)0x0);
        if (((local_a8 != (Object *)0x0) &&
            (cVar16 = RefCounted::unreference(), pOVar15 = local_a8, cVar16 != '\0')) &&
           (cVar16 = predelete_handler(local_a8), cVar16 != '\0')) {
          (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
          Memory::free_static(pOVar15,false);
        }
        puVar19 = (undefined8 *)
                  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                  ::operator[](local_78,(String *)&local_88);
        *puVar19 = uVar20;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,pCVar25 + 0x18);
        if ((puVar19 != (undefined8 *)0x0) && (local_50._4_4_ != 0)) goto LAB_00105178;
LAB_00104eb5:
        local_f0 = (String *)&local_80;
        if ((local_80 == 0) || (*(int *)(local_80 + -8) < 2)) goto LAB_00104ecc;
        local_a8 = (Object *)((ulong)local_a8 & 0xffffffff00000000);
        cVar16 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                 ::_lookup_pos(local_78,local_f0,(uint *)&local_a8);
        if (cVar16 == '\0') {
          pTVar3 = *(TreeItem **)(this + 0xdc0);
          iVar17 = Tree::get_root();
          uVar20 = Tree::create_item(pTVar3,iVar17);
          local_a8 = (Object *)0x0;
          if (local_80 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)local_f0);
          }
          TreeItem::set_text(uVar20,0,(CowData<char32_t> *)&local_a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          if ((_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
               ::{lambda()#1}::operator()()::sname == '\0') &&
             (iVar17 = __cxa_guard_acquire(&_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                                            ::{lambda()#1}::operator()()::sname), iVar17 != 0)) {
            _scs_create((char *)&_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                                 ::{lambda()#1}::operator()()::sname,true);
            __cxa_atexit(StringName::~StringName,
                         &_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                          ::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release(&_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                                 ::{lambda()#1}::operator()()::sname);
          }
          local_e0 = local_78;
          Control::get_editor_theme_icon((StringName *)&local_a8);
          TreeItem::set_icon((int)uVar20,(Ref *)0x0);
          Ref<Texture2D>::unref((Ref<Texture2D> *)&local_a8);
          puVar19 = (undefined8 *)
                    HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                    ::operator[](local_e0,local_f0);
          *puVar19 = uVar20;
        }
        local_e0 = local_78;
        pTVar3 = *(TreeItem **)(this + 0xdc0);
        puVar19 = (undefined8 *)
                  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                  ::operator[](local_e0,local_f0);
        uVar20 = Tree::create_item(pTVar3,(int)*puVar19);
        local_a8 = (Object *)0x0;
        if (local_88 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_88);
        }
        TreeItem::set_text(uVar20,0,(CowData<char32_t> *)&local_a8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if ((_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
             ::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar17 = __cxa_guard_acquire(&_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                                          ::{lambda()#2}::operator()()::sname), iVar17 != 0)) {
          _scs_create((char *)&_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                               ::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                        ::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_build_removed_dependency_tree(Vector<DependencyRemoveDialog::RemovedDependency>const&)
                               ::{lambda()#2}::operator()()::sname);
        }
        Control::get_editor_theme_icon((StringName *)&local_a8);
        TreeItem::set_icon((int)uVar20,(Ref *)0x0);
        if (((local_a8 != (Object *)0x0) &&
            (cVar16 = RefCounted::unreference(), pOVar15 = local_a8, cVar16 != '\0')) &&
           (cVar16 = predelete_handler(local_a8), cVar16 != '\0')) {
          (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
          Memory::free_static(pOVar15,false);
        }
        puVar19 = (undefined8 *)
                  HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                  ::operator[](local_e0,(String *)&local_88);
        *puVar19 = uVar20;
      }
LAB_00104f9b:
      pSVar14 = EditorNode::singleton;
      local_e0 = local_78;
      local_f0 = (String *)&local_80;
      local_a8 = (Object *)&_LC11;
      local_b0 = 0;
      local_a0 = 0;
      String::parse_latin1((StrRange *)&local_b0);
      EditorNode::get_class_icon((String *)&local_b8,pSVar14);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      pTVar3 = *(TreeItem **)(this + 0xdc0);
      puVar19 = (undefined8 *)
                HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
                ::operator[](local_e0,(String *)&local_88);
      uVar20 = Tree::create_item(pTVar3,(int)*puVar19);
      local_a8 = (Object *)0x0;
      if (local_98 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_a8,(CowData *)&local_98);
      }
      TreeItem::set_text(uVar20,0,(CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      TreeItem::set_icon((int)uVar20,(Ref *)0x0);
      if (((local_b8 != (Object *)0x0) &&
          (cVar16 = RefCounted::unreference(), pOVar15 = local_b8, cVar16 != '\0')) &&
         (cVar16 = predelete_handler(local_b8), cVar16 != '\0')) {
        (**(code **)(*(long *)pOVar15 + 0x140))(pOVar15);
        Memory::free_static(pOVar15,false);
      }
      lVar28 = lVar28 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_f0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      lVar24 = *(long *)(param_1 + 8);
      puVar19 = (undefined8 *)local_70._0_8_;
    } while (lVar24 != 0);
    if (puVar19 != (undefined8 *)0x0) {
      uVar20 = local_70._8_8_;
      if ((local_50._4_4_ != 0) && ((&hash_table_size_primes)[local_50 & 0xffffffff] != 0)) {
        piVar1 = (int *)(local_70._8_8_ +
                        (ulong)(uint)(&hash_table_size_primes)[local_50 & 0xffffffff] * 4);
        piVar26 = (int *)local_70._8_8_;
        puVar27 = puVar19;
        do {
          if (*piVar26 != 0) {
            pvVar4 = (void *)*puVar27;
            *piVar26 = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar4 + 0x10));
            Memory::free_static(pvVar4,false);
            *puVar27 = 0;
          }
          piVar26 = piVar26 + 1;
          puVar27 = puVar27 + 1;
        } while (piVar1 != piVar26);
      }
      Memory::free_static(puVar19,false);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        Memory::free_static((void *)uVar20,false);
        return;
      }
      goto LAB_001056f0;
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_001056f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyEditorOwners::_fill_owners(EditorFileSystemDirectory*) [clone .part.0] */

void __thiscall
DependencyEditorOwners::_fill_owners
          (DependencyEditorOwners *this,EditorFileSystemDirectory *param_1)

{
  char *__s;
  String *pSVar1;
  Object *pOVar2;
  char cVar3;
  int iVar4;
  EditorFileSystemDirectory *pEVar5;
  int iVar6;
  long lVar7;
  long in_FS_OFFSET;
  Object *local_88;
  long local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined1 local_68 [8];
  long local_60;
  char *local_58;
  size_t local_50;
  long local_40;
  
  iVar6 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = EditorFileSystemDirectory::get_subdir_count();
  if (0 < iVar4) {
    do {
      pEVar5 = (EditorFileSystemDirectory *)EditorFileSystemDirectory::get_subdir((int)param_1);
      if (pEVar5 != (EditorFileSystemDirectory *)0x0) {
        _fill_owners(this,pEVar5);
      }
      iVar6 = iVar6 + 1;
      iVar4 = EditorFileSystemDirectory::get_subdir_count();
    } while (iVar6 < iVar4);
  }
  iVar6 = 0;
  iVar4 = EditorFileSystemDirectory::get_file_count();
  if (0 < iVar4) {
    do {
      lVar7 = 0;
      EditorFileSystemDirectory::get_file_deps((int)local_68);
      if (local_60 != 0) {
        while (lVar7 < *(long *)(local_60 + -8)) {
          cVar3 = String::operator==((String *)(local_60 + lVar7 * 8),(String *)(this + 0xdc0));
          pSVar1 = EditorNode::singleton;
          if (cVar3 != '\0') {
            local_70 = 0;
            local_50 = 0;
            local_58 = "";
            String::parse_latin1((StrRange *)&local_70);
            EditorFileSystemDirectory::get_file_type((int)&local_80);
            if (local_80 == 0) {
              local_78 = 0;
            }
            else {
              __s = *(char **)(local_80 + 8);
              local_78 = 0;
              if (__s == (char *)0x0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(local_80 + 0x10))
                ;
              }
              else {
                local_50 = strlen(__s);
                local_58 = __s;
                String::parse_latin1((StrRange *)&local_78);
              }
            }
            EditorNode::get_class_icon((String *)&local_88,pSVar1);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            if ((StringName::configured != '\0') && (local_80 != 0)) {
              StringName::unref();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
            pSVar1 = *(String **)(this + 0xdb0);
            EditorFileSystemDirectory::get_file_path((int)(CowData<char32_t> *)&local_58);
            ItemList::add_item(pSVar1,(Ref *)&local_58,SUB81((String *)&local_88,0));
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
            if (((local_88 != (Object *)0x0) &&
                (cVar3 = RefCounted::unreference(), pOVar2 = local_88, cVar3 != '\0')) &&
               (cVar3 = predelete_handler(local_88), cVar3 != '\0')) {
              (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
              Memory::free_static(pOVar2,false);
              CowData<String>::_unref((CowData<String> *)&local_60);
              goto LAB_001057e1;
            }
            break;
          }
          lVar7 = lVar7 + 1;
          if (local_60 == 0) break;
        }
      }
      CowData<String>::_unref((CowData<String> *)&local_60);
LAB_001057e1:
      iVar6 = iVar6 + 1;
      iVar4 = EditorFileSystemDirectory::get_file_count();
    } while (iVar6 < iVar4);
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DependencyEditorOwners::_fill_owners(EditorFileSystemDirectory*) */

void __thiscall
DependencyEditorOwners::_fill_owners
          (DependencyEditorOwners *this,EditorFileSystemDirectory *param_1)

{
  if (param_1 != (EditorFileSystemDirectory *)0x0) {
    _fill_owners(this,param_1);
    return;
  }
  return;
}



/* DependencyEditorOwners::show(String const&) */

void __thiscall DependencyEditorOwners::show(DependencyEditorOwners *this,String *param_1)

{
  undefined4 uVar1;
  EditorFileSystemDirectory *pEVar2;
  long in_FS_OFFSET;
  undefined8 local_78;
  undefined8 local_70;
  String local_68 [8];
  CowData<char32_t> local_60 [8];
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (*(long *)(this + 0xdc0) != *(long *)param_1) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0xdc0),(CowData *)param_1);
  }
  ItemList::clear();
  pEVar2 = (EditorFileSystemDirectory *)EditorFileSystem::get_filesystem();
  if (pEVar2 != (EditorFileSystemDirectory *)0x0) {
    _fill_owners(this,pEVar2);
  }
  Window::popup_centered_ratio(_LC129);
  uVar1 = ItemList::get_item_count();
  String::get_file();
  local_58 = "";
  local_70 = 0;
  local_50 = 0;
  String::parse_latin1((StrRange *)&local_70);
  local_58 = "Owners of: %s (Total: %d)";
  local_78 = 0;
  local_50 = 0x19;
  String::parse_latin1((StrRange *)&local_78);
  TTR(local_68,(String *)&local_78);
  vformat<String,int>((CowData<char32_t> *)&local_58,local_68,local_60,uVar1);
  Window::set_title((String *)this);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_68);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref(local_60);
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OrphanResourcesDialog::_fill_owners(EditorFileSystemDirectory*, HashMap<String, int,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > >&, TreeItem*) [clone .part.0] */

char __thiscall
OrphanResourcesDialog::_fill_owners
          (OrphanResourcesDialog *this,EditorFileSystemDirectory *param_1,HashMap *param_2,
          TreeItem *param_3)

{
  String *pSVar1;
  uint uVar2;
  StringName *pSVar3;
  undefined8 uVar4;
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
  code *pcVar21;
  Object *pOVar22;
  char cVar23;
  char cVar24;
  int iVar25;
  uint uVar26;
  int iVar27;
  Object *pOVar28;
  EditorFileSystemDirectory *pEVar29;
  undefined8 uVar30;
  undefined4 *puVar31;
  uint uVar32;
  long lVar33;
  long lVar34;
  int iVar35;
  ulong uVar36;
  long lVar37;
  long lVar38;
  uint uVar39;
  long in_FS_OFFSET;
  CowData<char32_t> *local_d8;
  char local_9d;
  String local_98 [8];
  undefined8 local_90;
  Object *local_88;
  StringName local_80 [8];
  undefined8 local_78;
  undefined8 local_70;
  Object *local_68;
  long local_60;
  int local_58 [6];
  long local_40;
  
  iVar35 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_9d = '\0';
  iVar25 = EditorFileSystemDirectory::get_subdir_count();
  if (0 < iVar25) {
    do {
      iVar25 = (int)param_1;
      cVar23 = local_9d;
      if (param_3 == (TreeItem *)0x0) {
        pEVar29 = (EditorFileSystemDirectory *)EditorFileSystemDirectory::get_subdir(iVar25);
        if (pEVar29 != (EditorFileSystemDirectory *)0x0) {
          _fill_owners(this,pEVar29,param_2,(TreeItem *)0x0);
        }
      }
      else {
        pOVar28 = (Object *)Tree::create_item(*(TreeItem **)(this + 0xdc0),(int)param_3);
        EditorFileSystemDirectory::get_subdir(iVar25);
        EditorFileSystemDirectory::get_name();
        TreeItem::set_text(pOVar28,0,(CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        pSVar3 = *(StringName **)(this + 0xdc0);
        if ((_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
             ::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar27 = __cxa_guard_acquire(&_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                                          ::{lambda()#2}::operator()()::sname), iVar27 != 0)) {
          _scs_create((char *)&_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                               ::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                        ::{lambda()#2}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                               ::{lambda()#2}::operator()()::sname);
        }
        if ((_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
             ::{lambda()#1}::operator()()::sname == '\0') &&
           (iVar27 = __cxa_guard_acquire(&_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                                          ::{lambda()#1}::operator()()::sname), iVar27 != 0)) {
          _scs_create((char *)&_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                               ::{lambda()#1}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,
                       &_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                        ::{lambda()#1}::operator()()::sname,&__dso_handle);
          __cxa_guard_release(&_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                               ::{lambda()#1}::operator()()::sname);
        }
        Control::get_theme_icon((StringName *)&local_68,pSVar3);
        TreeItem::set_icon((int)pOVar28,(Ref *)0x0);
        if (((local_68 != (Object *)0x0) &&
            (cVar23 = RefCounted::unreference(), pOVar22 = local_68, cVar23 != '\0')) &&
           (cVar23 = predelete_handler(local_68), cVar23 != '\0')) {
          (**(code **)(*(long *)pOVar22 + 0x140))();
          Memory::free_static(pOVar22,false);
        }
        pEVar29 = (EditorFileSystemDirectory *)EditorFileSystemDirectory::get_subdir(iVar25);
        if (((pEVar29 == (EditorFileSystemDirectory *)0x0) ||
            (cVar23 = _fill_owners(this,pEVar29,param_2,(TreeItem *)pOVar28), cVar23 == '\0')) &&
           (cVar24 = predelete_handler(pOVar28), cVar23 = local_9d, cVar24 != '\0')) {
          (**(code **)(*(long *)pOVar28 + 0x140))(pOVar28);
          Memory::free_static(pOVar28,false);
        }
      }
      local_9d = cVar23;
      iVar35 = iVar35 + 1;
      iVar25 = EditorFileSystemDirectory::get_subdir_count();
    } while (iVar35 < iVar25);
  }
  iVar35 = 0;
  iVar25 = EditorFileSystemDirectory::get_file_count();
  if (0 < iVar25) {
    do {
      if (param_3 == (TreeItem *)0x0) {
        EditorFileSystemDirectory::get_file_deps((int)&local_68);
        for (lVar38 = 0; (local_60 != 0 && (lVar38 < *(long *)(local_60 + -8))); lVar38 = lVar38 + 1
            ) {
          if ((*(long *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0x2c) != 0)) {
            pSVar1 = (String *)(local_60 + lVar38 * 8);
            uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
            uVar36 = CONCAT44(0,uVar2);
            lVar37 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
            uVar26 = String::hash();
            uVar32 = 1;
            if (uVar26 != 0) {
              uVar32 = uVar26;
            }
            lVar33 = *(long *)(param_2 + 0x10);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar32 * lVar37;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar36;
            lVar34 = SUB168(auVar9 * auVar17,8);
            uVar26 = *(uint *)(lVar33 + lVar34 * 4);
            iVar25 = SUB164(auVar9 * auVar17,8);
            if (uVar26 != 0) {
              uVar39 = 0;
              do {
                if (uVar32 == uVar26) {
                  cVar23 = String::operator==((String *)
                                              (*(long *)(*(long *)(param_2 + 8) + lVar34 * 8) + 0x10
                                              ),pSVar1);
                  if (cVar23 != '\0') goto LAB_0010623d;
                  lVar33 = *(long *)(param_2 + 0x10);
                }
                uVar39 = uVar39 + 1;
                auVar10._8_8_ = 0;
                auVar10._0_8_ = (ulong)(iVar25 + 1) * lVar37;
                auVar18._8_8_ = 0;
                auVar18._0_8_ = uVar36;
                lVar34 = SUB168(auVar10 * auVar18,8);
                uVar26 = *(uint *)(lVar33 + lVar34 * 4);
                iVar25 = SUB164(auVar10 * auVar18,8);
              } while ((uVar26 != 0) &&
                      (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar26 * lVar37, auVar19._8_8_ = 0,
                      auVar19._0_8_ = uVar36, auVar12._8_8_ = 0,
                      auVar12._0_8_ =
                           (ulong)((uVar2 + iVar25) - SUB164(auVar11 * auVar19,8)) * lVar37,
                      auVar20._8_8_ = 0, auVar20._0_8_ = uVar36,
                      uVar39 <= SUB164(auVar12 * auVar20,8)));
            }
          }
          if (local_60 == 0) {
            lVar37 = 0;
LAB_00106496:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,lVar38,lVar37,"p_index","size()","",
                       false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar21 = (code *)invalidInstructionException();
            (*pcVar21)();
          }
          lVar37 = *(long *)(local_60 + -8);
          if (lVar37 <= lVar38) goto LAB_00106496;
          puVar31 = (undefined4 *)
                    HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
                    ::operator[]((HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
                                  *)param_2,(String *)(lVar38 * 8 + local_60));
          *puVar31 = 1;
LAB_0010623d:
        }
        CowData<String>::_unref((CowData<String> *)&local_60);
      }
      else {
        EditorFileSystemDirectory::get_file_path((int)local_98);
        if ((*(long *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0x2c) != 0)) {
          uVar2 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
          lVar38 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
          uVar26 = String::hash();
          uVar36 = CONCAT44(0,uVar2);
          lVar37 = *(long *)(param_2 + 0x10);
          uVar32 = 1;
          if (uVar26 != 0) {
            uVar32 = uVar26;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = (ulong)uVar32 * lVar38;
          auVar13._8_8_ = 0;
          auVar13._0_8_ = uVar36;
          lVar33 = SUB168(auVar5 * auVar13,8);
          uVar26 = *(uint *)(lVar37 + lVar33 * 4);
          iVar25 = SUB164(auVar5 * auVar13,8);
          if (uVar26 != 0) {
            uVar39 = 0;
            do {
              if (uVar26 == uVar32) {
                cVar23 = String::operator==((String *)
                                            (*(long *)(*(long *)(param_2 + 8) + lVar33 * 8) + 0x10),
                                            local_98);
                if (cVar23 != '\0') goto LAB_00106001;
                lVar37 = *(long *)(param_2 + 0x10);
              }
              uVar39 = uVar39 + 1;
              auVar6._8_8_ = 0;
              auVar6._0_8_ = (ulong)(iVar25 + 1) * lVar38;
              auVar14._8_8_ = 0;
              auVar14._0_8_ = uVar36;
              lVar33 = SUB168(auVar6 * auVar14,8);
              uVar26 = *(uint *)(lVar37 + lVar33 * 4);
              iVar25 = SUB164(auVar6 * auVar14,8);
            } while ((uVar26 != 0) &&
                    (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar26 * lVar38, auVar15._8_8_ = 0,
                    auVar15._0_8_ = uVar36, auVar8._8_8_ = 0,
                    auVar8._0_8_ = (ulong)((uVar2 + iVar25) - SUB164(auVar7 * auVar15,8)) * lVar38,
                    auVar16._8_8_ = 0, auVar16._0_8_ = uVar36, uVar39 <= SUB164(auVar8 * auVar16,8))
                    );
          }
        }
        uVar30 = Tree::create_item(*(TreeItem **)(this + 0xdc0),(int)param_3);
        TreeItem::set_cell_mode(uVar30,0,1);
        iVar25 = (int)(CowData<char32_t> *)&local_68;
        EditorFileSystemDirectory::get_file(iVar25);
        TreeItem::set_text(uVar30,0,(CowData<char32_t> *)&local_68);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        iVar27 = (int)uVar30;
        TreeItem::set_editable(iVar27,false);
        EditorFileSystemDirectory::get_file_type(iVar25);
        if (local_68 == (Object *)0x0) {
          local_90 = 0;
        }
        else {
          local_90 = 0;
          if (*(char **)(local_68 + 8) == (char *)0x0) {
            if (*(long *)(local_68 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_90,(CowData *)(local_68 + 0x10));
              goto LAB_00105eba;
            }
            if (StringName::configured == '\0') goto LAB_00105ed6;
          }
          else {
            String::parse_latin1((String *)&local_90,*(char **)(local_68 + 8));
LAB_00105eba:
            if ((StringName::configured == '\0') || (local_68 == (Object *)0x0)) goto LAB_00105ed6;
          }
          StringName::unref();
        }
LAB_00105ed6:
        pSVar1 = EditorNode::singleton;
        local_d8 = (CowData<char32_t> *)&local_90;
        local_70 = 0;
        local_68 = (Object *)&_LC11;
        local_60 = 0;
        String::parse_latin1((StrRange *)&local_70);
        EditorNode::get_class_icon((String *)&local_88,pSVar1);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        TreeItem::set_icon(iVar27,(Ref *)0x0);
        EditorFileSystemDirectory::get_file_deps(iVar25);
        if (local_60 == 0) {
          CowData<String>::_unref((CowData<String> *)&local_60);
          itos((long)&local_68);
          TreeItem::set_text(uVar30,1,(CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        }
        else {
          uVar4 = *(undefined8 *)(local_60 + -8);
          CowData<String>::_unref((CowData<String> *)&local_60);
          itos((long)&local_68);
          TreeItem::set_text(uVar30,1,(CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          if ((int)uVar4 != 0) {
            local_70 = 0;
            String::parse_latin1((String *)&local_70,"");
            local_78 = 0;
            String::parse_latin1((String *)&local_78,"Show Dependencies");
            TTR((String *)&local_68,(String *)&local_78);
            if ((_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                 ::{lambda()#3}::operator()()::sname == '\0') &&
               (iVar25 = __cxa_guard_acquire(&_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                                              ::{lambda()#3}::operator()()::sname), iVar25 != 0)) {
              _scs_create((char *)&_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                                   ::{lambda()#3}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                            ::{lambda()#3}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_fill_owners(EditorFileSystemDirectory*,HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>&,TreeItem*)
                                   ::{lambda()#3}::operator()()::sname);
            }
            Control::get_editor_theme_icon(local_80);
            TreeItem::add_button(iVar27,(Ref *)0x1,(int)local_80,true,(String *)0x0);
            Ref<Texture2D>::unref((Ref<Texture2D> *)local_80);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          }
        }
        Variant::Variant((Variant *)local_58,local_98);
        TreeItem::set_metadata(iVar27,(Variant *)0x0);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (((local_88 != (Object *)0x0) &&
            (cVar23 = RefCounted::unreference(), pOVar28 = local_88, cVar23 != '\0')) &&
           (cVar23 = predelete_handler(local_88), cVar23 != '\0')) {
          (**(code **)(*(long *)pOVar28 + 0x140))(pOVar28);
          Memory::free_static(pOVar28,false);
        }
        CowData<char32_t>::_unref(local_d8);
        local_9d = '\x01';
LAB_00106001:
        CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      }
      iVar35 = iVar35 + 1;
      iVar25 = EditorFileSystemDirectory::get_file_count();
    } while (iVar35 < iVar25);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_9d;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OrphanResourcesDialog::_fill_owners(EditorFileSystemDirectory*, HashMap<String, int,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > >&, TreeItem*) */

undefined8 __thiscall
OrphanResourcesDialog::_fill_owners
          (OrphanResourcesDialog *this,EditorFileSystemDirectory *param_1,HashMap *param_2,
          TreeItem *param_3)

{
  undefined8 uVar1;
  
  if (param_1 != (EditorFileSystemDirectory *)0x0) {
    uVar1 = _fill_owners(this,param_1,param_2,param_3);
    return uVar1;
  }
  return 0;
}



/* OrphanResourcesDialog::refresh() */

void __thiscall OrphanResourcesDialog::refresh(OrphanResourcesDialog *this)

{
  uint uVar1;
  EditorFileSystemDirectory *pEVar2;
  TreeItem *pTVar3;
  long lVar4;
  void *pvVar5;
  long in_FS_OFFSET;
  HashMap aHStack_58 [8];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_30 = 2;
  local_40 = (undefined1  [16])0x0;
  pEVar2 = (EditorFileSystemDirectory *)EditorFileSystem::get_filesystem();
  if (pEVar2 != (EditorFileSystemDirectory *)0x0) {
    _fill_owners(this,pEVar2,aHStack_58,(TreeItem *)0x0);
  }
  Tree::clear();
  pTVar3 = (TreeItem *)Tree::create_item(*(TreeItem **)(this + 0xdc0),0);
  pEVar2 = (EditorFileSystemDirectory *)EditorFileSystem::get_filesystem();
  if (pEVar2 != (EditorFileSystemDirectory *)0x0) {
    _fill_owners(this,pEVar2,aHStack_58,pTVar3);
  }
  if ((void *)local_50._0_8_ != (void *)0x0) {
    pvVar5 = (void *)local_50._0_8_;
    if (local_30._4_4_ != 0) {
      uVar1 = (&hash_table_size_primes)[local_30 & 0xffffffff];
      if (uVar1 == 0) {
        local_30 = local_30 & 0xffffffff;
        local_40 = (undefined1  [16])0x0;
      }
      else {
        lVar4 = 0;
        do {
          if (*(int *)(local_50._8_8_ + lVar4) != 0) {
            pvVar5 = *(void **)((long)pvVar5 + lVar4 * 2);
            *(int *)(local_50._8_8_ + lVar4) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x10));
            Memory::free_static(pvVar5,false);
            *(undefined8 *)(local_50._0_8_ + lVar4 * 2) = 0;
            pvVar5 = (void *)local_50._0_8_;
          }
          lVar4 = lVar4 + 4;
        } while (lVar4 != (ulong)uVar1 << 2);
        local_30 = local_30 & 0xffffffff;
        local_40 = (undefined1  [16])0x0;
        if (pvVar5 == (void *)0x0) goto LAB_001067b0;
      }
    }
    Memory::free_static(pvVar5,false);
    Memory::free_static((void *)local_50._8_8_,false);
  }
LAB_001067b0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OrphanResourcesDialog::show() */

void __thiscall OrphanResourcesDialog::show(OrphanResourcesDialog *this)

{
  refresh(this);
  Window::popup_centered_ratio(_LC96);
  return;
}



/* OrphanResourcesDialog::_delete_confirm() */

void __thiscall OrphanResourcesDialog::_delete_confirm(OrphanResourcesDialog *this)

{
  long *plVar1;
  code *pcVar2;
  Object *pOVar3;
  long lVar4;
  char cVar5;
  CowData *pCVar6;
  long in_FS_OFFSET;
  Object *local_40;
  long local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  DirAccess::create(&local_40);
  if ((*(long **)(this + 0xdd0) != (long *)0x0) &&
     (pCVar6 = (CowData *)**(long **)(this + 0xdd0), pCVar6 != (CowData *)0x0)) {
    do {
      pOVar3 = local_40;
      local_38 = 0;
      pcVar2 = *(code **)(*(long *)local_40 + 0x208);
      if (*(long *)pCVar6 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_38,pCVar6);
      }
      (*pcVar2)(pOVar3);
      lVar4 = local_38;
      if (local_38 != 0) {
        LOCK();
        plVar1 = (long *)(local_38 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_38 = 0;
          Memory::free_static((void *)(lVar4 + -0x10),false);
        }
      }
      EditorFileSystem::update_file(EditorFileSystem::singleton);
      pCVar6 = *(CowData **)(pCVar6 + 8);
    } while (pCVar6 != (CowData *)0x0);
  }
  refresh(this);
  if (local_40 != (Object *)0x0) {
    cVar5 = RefCounted::unreference();
    if (cVar5 != '\0') {
      cVar5 = predelete_handler(local_40);
      if (cVar5 != '\0') {
        (**(code **)(*(long *)local_40 + 0x140))(local_40);
        Memory::free_static(local_40,false);
      }
    }
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
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



/* DependencyRemoveDialog::_show_files_to_delete_list() */

void __thiscall DependencyRemoveDialog::_show_files_to_delete_list(DependencyRemoveDialog *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  char cVar4;
  long lVar5;
  long lVar6;
  long in_FS_OFFSET;
  long local_50;
  Object *local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  ItemList::clear();
  CowData<String>::_copy_on_write((CowData<String> *)(this + 0xe10));
  lVar5 = *(long *)(this + 0xe10);
  CowData<String>::_copy_on_write((CowData<String> *)(this + 0xe10));
  lVar6 = *(long *)(this + 0xe10);
  if (lVar6 != 0) {
    lVar6 = lVar6 + *(long *)(lVar6 + -8) * 8;
  }
  for (; lVar5 != lVar6; lVar5 = lVar5 + 8) {
    String::trim_prefix((char *)&local_50);
    local_48 = (Object *)0x0;
    ItemList::add_item(*(String **)(this + 0xdd0),(Ref *)&local_50,SUB81(&local_48,0));
    if (((local_48 != (Object *)0x0) &&
        (cVar4 = RefCounted::unreference(), pOVar3 = local_48, cVar4 != '\0')) &&
       (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
      (**(code **)(*(long *)pOVar3 + 0x140))();
      Memory::free_static(pOVar3,false);
    }
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
  }
  CowData<String>::_copy_on_write((CowData<String> *)(this + 0xe20));
  lVar5 = *(long *)(this + 0xe20);
  CowData<String>::_copy_on_write((CowData<String> *)(this + 0xe20));
  lVar6 = *(long *)(this + 0xe20);
  if (lVar6 != 0) {
    lVar6 = lVar6 + *(long *)(lVar6 + -8) * 8;
  }
  if (lVar5 != lVar6) {
    do {
      String::trim_prefix((char *)&local_50);
      local_48 = (Object *)0x0;
      ItemList::add_item(*(String **)(this + 0xdd0),(Ref *)&local_50,SUB81(&local_48,0));
      if (((local_48 != (Object *)0x0) &&
          (cVar4 = RefCounted::unreference(), pOVar3 = local_48, cVar4 != '\0')) &&
         (cVar4 = predelete_handler(local_48), cVar4 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))();
        Memory::free_static(pOVar3,false);
      }
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
      lVar5 = lVar5 + 8;
    } while (lVar6 != lVar5);
  }
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



/* DependencyRemoveDialog::_find_files_in_removed_folder(EditorFileSystemDirectory*, String const&)
   [clone .part.0] */

void __thiscall
DependencyRemoveDialog::_find_files_in_removed_folder
          (DependencyRemoveDialog *this,EditorFileSystemDirectory *param_1,String *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  int iVar13;
  uint uVar14;
  EditorFileSystemDirectory *pEVar15;
  CowData<char32_t> *this_00;
  uint uVar16;
  long lVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  long in_FS_OFFSET;
  long local_48;
  long local_40;
  
  iVar18 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar13 = EditorFileSystemDirectory::get_subdir_count();
  if (0 < iVar13) {
    do {
      pEVar15 = (EditorFileSystemDirectory *)EditorFileSystemDirectory::get_subdir((int)param_1);
      if (pEVar15 != (EditorFileSystemDirectory *)0x0) {
        _find_files_in_removed_folder(this,pEVar15,param_2);
      }
      iVar18 = iVar18 + 1;
      iVar13 = EditorFileSystemDirectory::get_subdir_count();
    } while (iVar18 < iVar13);
  }
  iVar18 = 0;
  iVar13 = EditorFileSystemDirectory::get_file_count();
  if (0 < iVar13) {
    do {
      EditorFileSystemDirectory::get_file_path((int)(String *)&local_48);
      if ((*(long *)(this + 0xde0) != 0) && (*(int *)(this + 0xe04) != 0)) {
        uVar2 = (&hash_table_size_primes)[*(uint *)(this + 0xe00)];
        uVar21 = CONCAT44(0,uVar2);
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xe00) * 8);
        uVar14 = String::hash();
        lVar20 = *(long *)(this + 0xde8);
        uVar16 = 1;
        if (uVar14 != 0) {
          uVar16 = uVar14;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar16 * lVar3;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar21;
        lVar17 = SUB168(auVar4 * auVar8,8);
        uVar14 = *(uint *)(lVar20 + lVar17 * 4);
        iVar13 = SUB164(auVar4 * auVar8,8);
        if (uVar14 != 0) {
          uVar19 = 0;
          do {
            if (uVar16 == uVar14) {
              cVar12 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0xde0) + lVar17 * 8) + 0x10),
                                          (String *)&local_48);
              if (cVar12 != '\0') {
                _err_print_error("_find_files_in_removed_folder","editor/dependency_editor.cpp",
                                 0x1a1,"Condition \"all_remove_files.has(file)\" is true.",0,0);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
                goto LAB_00107032;
              }
              lVar20 = *(long *)(this + 0xde8);
            }
            uVar19 = uVar19 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar13 + 1) * lVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar21;
            lVar17 = SUB168(auVar5 * auVar9,8);
            uVar14 = *(uint *)(lVar20 + lVar17 * 4);
            iVar13 = SUB164(auVar5 * auVar9,8);
          } while ((uVar14 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar14 * lVar3, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar21, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar2 + iVar13) - SUB164(auVar6 * auVar10,8)) * lVar3,
                  auVar11._8_8_ = 0, auVar11._0_8_ = uVar21, uVar19 <= SUB164(auVar7 * auVar11,8)));
        }
      }
      this_00 = (CowData<char32_t> *)
                HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                              *)(this + 0xdd8),(String *)&local_48);
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,(CowData *)param_2);
      }
      lVar3 = local_48;
      if (local_48 != 0) {
        LOCK();
        plVar1 = (long *)(local_48 + -0x10);
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          local_48 = 0;
          Memory::free_static((void *)(lVar3 + -0x10),false);
        }
      }
      iVar18 = iVar18 + 1;
      iVar13 = EditorFileSystemDirectory::get_file_count();
    } while (iVar18 < iVar13);
  }
LAB_00107032:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DependencyRemoveDialog::_find_files_in_removed_folder(EditorFileSystemDirectory*, String const&)
    */

void __thiscall
DependencyRemoveDialog::_find_files_in_removed_folder
          (DependencyRemoveDialog *this,EditorFileSystemDirectory *param_1,String *param_2)

{
  if (param_1 != (EditorFileSystemDirectory *)0x0) {
    _find_files_in_removed_folder(this,param_1,param_2);
    return;
  }
  return;
}



/* DependencyEditor::_searched(String const&) */

void __thiscall DependencyEditor::_searched(DependencyEditor *this,String *param_1)

{
  uint uVar1;
  CowData<char32_t> *this_00;
  long lVar2;
  void *pvVar3;
  long in_FS_OFFSET;
  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
  aHStack_58 [8];
  undefined1 local_50 [16];
  undefined1 local_40 [16];
  undefined8 local_30;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_50 = (undefined1  [16])0x0;
  local_40 = (undefined1  [16])0x0;
  local_30 = 2;
  this_00 = (CowData<char32_t> *)
            HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
            ::operator[](aHStack_58,(String *)(this + 0xdc8));
  if (*(long *)this_00 != *(long *)param_1) {
    CowData<char32_t>::_ref(this_00,(CowData *)param_1);
  }
  ResourceLoader::rename_dependencies((String *)(this + 0xdd0),(HashMap *)aHStack_58);
  _update_list(this);
  EditorFileSystem::update_file(EditorFileSystem::singleton);
  if ((void *)local_50._0_8_ != (void *)0x0) {
    pvVar3 = (void *)local_50._0_8_;
    if (local_30._4_4_ != 0) {
      uVar1 = (&hash_table_size_primes)[local_30 & 0xffffffff];
      if (uVar1 == 0) {
        local_30 = local_30 & 0xffffffff;
        local_40 = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(local_50._8_8_ + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(local_50._8_8_ + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            *(undefined8 *)(local_50._0_8_ + lVar2 * 2) = 0;
            pvVar3 = (void *)local_50._0_8_;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        local_30 = local_30 & 0xffffffff;
        local_40 = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_001071d0;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static((void *)local_50._8_8_,false);
  }
LAB_001071d0:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyEditor::_fix_and_find(EditorFileSystemDirectory*, HashMap<String, HashMap<String,
   String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > > > >&) */

void __thiscall
DependencyEditor::_fix_and_find
          (DependencyEditor *this,EditorFileSystemDirectory *param_1,HashMap *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  code *pcVar11;
  ulong uVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  EditorFileSystemDirectory *pEVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  uint uVar23;
  long in_FS_OFFSET;
  String local_a0 [8];
  long local_98;
  CowData<char32_t> local_90 [8];
  CowData<char32_t> local_88 [8];
  CowData<char32_t> local_80 [8];
  Vector<String> local_78 [8];
  long local_70;
  Vector<String> local_68 [8];
  long local_60;
  Vector<String> local_58 [8];
  long local_50 [2];
  long local_40;
  
  iVar20 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar14 = EditorFileSystemDirectory::get_subdir_count();
  if (0 < iVar14) {
    do {
      iVar20 = iVar20 + 1;
      pEVar16 = (EditorFileSystemDirectory *)EditorFileSystemDirectory::get_subdir((int)param_1);
      _fix_and_find(this,pEVar16,param_2);
      iVar14 = EditorFileSystemDirectory::get_subdir_count();
    } while (iVar20 < iVar14);
  }
  iVar20 = 0;
  iVar14 = EditorFileSystemDirectory::get_file_count();
  if (0 < iVar14) {
    do {
      EditorFileSystemDirectory::get_file((int)local_a0);
      if ((*(long *)(param_2 + 8) != 0) && (*(int *)(param_2 + 0x2c) != 0)) {
        uVar1 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
        lVar17 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
        uVar15 = String::hash();
        uVar12 = CONCAT44(0,uVar1);
        lVar22 = *(long *)(param_2 + 0x10);
        uVar18 = 1;
        if (uVar15 != 0) {
          uVar18 = uVar15;
        }
        auVar3._8_8_ = 0;
        auVar3._0_8_ = (ulong)uVar18 * lVar17;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar12;
        lVar19 = SUB168(auVar3 * auVar7,8);
        uVar15 = *(uint *)(lVar22 + lVar19 * 4);
        iVar14 = SUB164(auVar3 * auVar7,8);
        if (uVar15 != 0) {
          uVar23 = 0;
LAB_001073a1:
          if (uVar18 != uVar15) goto LAB_00107360;
          cVar13 = String::operator==((String *)
                                      (*(long *)(*(long *)(param_2 + 8) + lVar19 * 8) + 0x10),
                                      local_a0);
          if (cVar13 == '\0') {
            lVar22 = *(long *)(param_2 + 0x10);
            goto LAB_00107360;
          }
          EditorFileSystemDirectory::get_file_path((int)(CowData<char32_t> *)&local_98);
          lVar17 = HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>
                   ::operator[]((HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>
                                 *)param_2,local_a0);
          puVar2 = *(undefined8 **)(lVar17 + 0x18);
          while (puVar2 != (undefined8 *)0x0) {
            lVar17 = puVar2[3];
            if ((lVar17 == 0) || (*(uint *)(lVar17 + -8) < 2)) {
              if (lVar17 != local_98) {
                CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 3),(CowData *)&local_98);
              }
              puVar2 = (undefined8 *)*puVar2;
            }
            else {
              String::replace_first((char *)local_90,(char *)(puVar2 + 3));
              String::replace_first((char *)local_88,(char *)&local_98);
              String::replace_first((char *)local_80,(char *)(puVar2 + 2));
              lVar22 = 0;
              String::split((char *)local_78,SUB81(local_90,0),0x10df1c);
              Vector<String>::reverse(local_78);
              iVar21 = 0;
              String::split((char *)local_68,SUB81(local_88,0),0x10df1c);
              Vector<String>::reverse(local_68);
              String::split((char *)local_58,SUB81(local_80,0),0x10df1c);
              iVar14 = 0;
              Vector<String>::reverse(local_58);
              lVar17 = local_50[0];
              if (local_50[0] != 0) {
                do {
                  if (*(long *)(lVar17 + -8) <= lVar22) break;
                  if (((local_70 != 0) && (lVar22 < *(long *)(local_70 + -8))) &&
                     (cVar13 = String::operator==((String *)(lVar17 + lVar22 * 8),
                                                  (String *)(local_70 + lVar22 * 8)),
                     lVar17 = local_50[0], cVar13 != '\0')) {
                    iVar21 = iVar21 + 1;
                  }
                  if ((local_60 != 0) && (lVar22 < *(long *)(local_60 + -8))) {
                    if (lVar17 == 0) {
                      lVar19 = 0;
LAB_001076e6:
                      _err_print_index_error
                                ("get","./core/templates/cowdata.h",0xdb,lVar22,lVar19,"p_index",
                                 "size()","",false,true);
                      _err_flush_stdout();
                    /* WARNING: Does not return */
                      pcVar11 = (code *)invalidInstructionException();
                      (*pcVar11)();
                    }
                    lVar19 = *(long *)(lVar17 + -8);
                    if (lVar19 <= lVar22) goto LAB_001076e6;
                    cVar13 = String::operator==((String *)(lVar17 + lVar22 * 8),
                                                (String *)(local_60 + lVar22 * 8));
                    lVar17 = local_50[0];
                    if (cVar13 != '\0') {
                      iVar14 = iVar14 + 1;
                    }
                  }
                  lVar22 = lVar22 + 1;
                } while (lVar17 != 0);
                if ((iVar21 < iVar14) && (puVar2[3] != local_98)) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)(puVar2 + 3),(CowData *)&local_98);
                }
              }
              CowData<String>::_unref((CowData<String> *)local_50);
              CowData<String>::_unref((CowData<String> *)&local_60);
              CowData<String>::_unref((CowData<String> *)&local_70);
              CowData<char32_t>::_unref(local_80);
              CowData<char32_t>::_unref(local_88);
              CowData<char32_t>::_unref(local_90);
              puVar2 = (undefined8 *)*puVar2;
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
          goto LAB_001073e7;
        }
      }
LAB_001073dc:
      CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
LAB_001073e7:
      iVar20 = iVar20 + 1;
      iVar14 = EditorFileSystemDirectory::get_file_count();
    } while (iVar20 < iVar14);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00107360:
  uVar23 = uVar23 + 1;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = (ulong)(iVar14 + 1) * lVar17;
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar12;
  lVar19 = SUB168(auVar4 * auVar8,8);
  uVar15 = *(uint *)(lVar22 + lVar19 * 4);
  iVar14 = SUB164(auVar4 * auVar8,8);
  if ((uVar15 == 0) ||
     (auVar5._8_8_ = 0, auVar5._0_8_ = (ulong)uVar15 * lVar17, auVar9._8_8_ = 0,
     auVar9._0_8_ = uVar12, auVar6._8_8_ = 0,
     auVar6._0_8_ = (ulong)((uVar1 + iVar14) - SUB164(auVar5 * auVar9,8)) * lVar17,
     auVar10._8_8_ = 0, auVar10._0_8_ = uVar12, SUB164(auVar6 * auVar10,8) < uVar23))
  goto LAB_001073dc;
  goto LAB_001073a1;
}



/* DependencyEditor::_fix_all() */

void __thiscall DependencyEditor::_fix_all(DependencyEditor *this)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  ulong uVar10;
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  long lVar14;
  HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
  *pHVar15;
  StrRange *pSVar16;
  EditorFileSystemDirectory *pEVar17;
  CowData<char32_t> *this_00;
  int *piVar18;
  uint uVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  void *pvVar23;
  void *pvVar24;
  long lVar25;
  String *pSVar26;
  long *plVar27;
  uint uVar28;
  long in_FS_OFFSET;
  HashMap *local_e0;
  CowData<char32_t> local_b0 [8];
  HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>
  local_a8 [8];
  undefined1 local_a0 [16];
  undefined1 local_90 [16];
  undefined8 local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar14 = EditorFileSystem::get_filesystem();
  if (lVar14 == 0) goto LAB_00107ba9;
  local_a0 = (undefined1  [16])0x0;
  local_80 = _LC35;
  local_90 = (undefined1  [16])0x0;
  if ((*(long **)(this + 0xdd8) != (long *)0x0) &&
     (pSVar26 = (String *)**(long **)(this + 0xdd8), pSVar26 != (String *)0x0)) {
    do {
      String::get_file();
      if ((local_a0._0_8_ != 0) && (local_80._4_4_ != 0)) {
        uVar1 = (&hash_table_size_primes)[local_80 & 0xffffffff];
        lVar14 = *(long *)(hash_table_size_primes_inv + (local_80 & 0xffffffff) * 8);
        uVar13 = String::hash();
        uVar10 = CONCAT44(0,uVar1);
        uVar19 = 1;
        if (uVar13 != 0) {
          uVar19 = uVar13;
        }
        auVar2._8_8_ = 0;
        auVar2._0_8_ = (ulong)uVar19 * lVar14;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar10;
        lVar21 = SUB168(auVar2 * auVar6,8);
        uVar13 = *(uint *)(local_a0._8_8_ + lVar21 * 4);
        iVar20 = SUB164(auVar2 * auVar6,8);
        if (uVar13 != 0) {
          uVar28 = 0;
          lVar25 = local_a0._8_8_;
          do {
            if (uVar13 == uVar19) {
              cVar12 = String::operator==((String *)(*(long *)(local_a0._0_8_ + lVar21 * 8) + 0x10),
                                          (String *)local_b0);
              if (cVar12 != '\0') goto LAB_00107924;
              lVar25 = local_a0._8_8_;
            }
            uVar28 = uVar28 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)(iVar20 + 1) * lVar14;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar10;
            lVar21 = SUB168(auVar3 * auVar7,8);
            uVar13 = *(uint *)(lVar25 + lVar21 * 4);
            iVar20 = SUB164(auVar3 * auVar7,8);
          } while ((uVar13 != 0) &&
                  (auVar4._8_8_ = 0, auVar4._0_8_ = (ulong)uVar13 * lVar14, auVar8._8_8_ = 0,
                  auVar8._0_8_ = uVar10, auVar5._8_8_ = 0,
                  auVar5._0_8_ = (ulong)((uVar1 + iVar20) - SUB164(auVar4 * auVar8,8)) * lVar14,
                  auVar9._8_8_ = 0, auVar9._0_8_ = uVar10, uVar28 <= SUB164(auVar5 * auVar9,8)));
        }
      }
      local_70 = (undefined1  [16])0x0;
      local_50 = _LC35;
      local_60 = (undefined1  [16])0x0;
      pHVar15 = (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                 *)HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>
                   ::operator[](local_a8,(String *)local_b0);
      HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
      ::operator=(pHVar15,(HashMap *)&local_78);
LAB_00107924:
      pHVar15 = (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                 *)HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>
                   ::operator[](local_a8,(String *)local_b0);
      pSVar16 = (StrRange *)
                HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                ::operator[](pHVar15,pSVar26);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = local_70._8_8_;
      local_70 = auVar11 << 0x40;
      local_78 = &_LC11;
      String::parse_latin1(pSVar16);
      CowData<char32_t>::_unref(local_b0);
      pSVar26 = *(String **)(pSVar26 + 8);
    } while (pSVar26 != (String *)0x0);
  }
  local_e0 = (HashMap *)local_a8;
  pEVar17 = (EditorFileSystemDirectory *)EditorFileSystem::get_filesystem();
  _fix_and_find(this,pEVar17,local_e0);
  local_70 = (undefined1  [16])0x0;
  local_50 = _LC35;
  local_60 = (undefined1  [16])0x0;
  plVar27 = (long *)local_90._0_8_;
  if ((long *)local_90._0_8_ != (long *)0x0) {
    do {
      for (plVar22 = (long *)plVar27[6]; plVar22 != (long *)0x0; plVar22 = (long *)*plVar22) {
        while (((plVar22[3] == 0 || (*(uint *)(plVar22[3] + -8) < 2)) ||
               (this_00 = (CowData<char32_t> *)
                          HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                        *)&local_78,(String *)(plVar22 + 2)),
               *(long *)this_00 == plVar22[3]))) {
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) goto LAB_00107a22;
        }
        CowData<char32_t>::_ref(this_00,(CowData *)(plVar22 + 3));
      }
LAB_00107a22:
      plVar27 = (long *)*plVar27;
    } while (plVar27 != (long *)0x0);
    if (local_50._4_4_ == 0) {
      pvVar24 = (void *)local_70._0_8_;
      if ((void *)local_70._0_8_ != (void *)0x0) {
LAB_00107a46:
        Memory::free_static(pvVar24,false);
        Memory::free_static((void *)local_70._8_8_,false);
      }
    }
    else {
      ResourceLoader::rename_dependencies((String *)(this + 0xdd0),(HashMap *)&local_78);
      _update_list(this);
      EditorFileSystem::update_file(EditorFileSystem::singleton);
      if ((void *)local_70._0_8_ != (void *)0x0) {
        pvVar24 = (void *)local_70._0_8_;
        if (local_50._4_4_ != 0) {
          uVar1 = (&hash_table_size_primes)[local_50 & 0xffffffff];
          if (uVar1 == 0) {
            local_50 = local_50 & 0xffffffff;
            local_60 = (undefined1  [16])0x0;
          }
          else {
            lVar14 = 0;
            do {
              if (*(int *)(local_70._8_8_ + lVar14) != 0) {
                pvVar24 = *(void **)((long)pvVar24 + lVar14 * 2);
                *(int *)(local_70._8_8_ + lVar14) = 0;
                CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar24 + 0x18));
                CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar24 + 0x10));
                Memory::free_static(pvVar24,false);
                *(undefined8 *)(local_70._0_8_ + lVar14 * 2) = 0;
                pvVar24 = (void *)local_70._0_8_;
              }
              lVar14 = lVar14 + 4;
            } while ((ulong)uVar1 * 4 - lVar14 != 0);
            local_50 = local_50 & 0xffffffff;
            local_60 = (undefined1  [16])0x0;
            if (pvVar24 == (void *)0x0) goto LAB_00107a5c;
          }
        }
        goto LAB_00107a46;
      }
    }
  }
LAB_00107a5c:
  if ((void *)local_a0._0_8_ != (void *)0x0) {
    pvVar24 = (void *)local_a0._0_8_;
    if (local_80._4_4_ != 0) {
      uVar1 = (&hash_table_size_primes)[local_80 & 0xffffffff];
      if (uVar1 == 0) {
        local_80 = local_80 & 0xffffffff;
        local_90 = (undefined1  [16])0x0;
      }
      else {
        lVar14 = 0;
        do {
          if (*(int *)(local_a0._8_8_ + lVar14) != 0) {
            pvVar24 = *(void **)((long)pvVar24 + lVar14 * 2);
            *(int *)(local_a0._8_8_ + lVar14) = 0;
            pvVar23 = *(void **)((long)pvVar24 + 0x20);
            if (pvVar23 != (void *)0x0) {
              if (*(int *)((long)pvVar24 + 0x44) != 0) {
                uVar19 = (&hash_table_size_primes)[*(uint *)((long)pvVar24 + 0x40)];
                if (uVar19 == 0) {
                  *(undefined4 *)((long)pvVar24 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar24 + 0x30) = (undefined1  [16])0x0;
                }
                else {
                  lVar21 = 0;
                  do {
                    piVar18 = (int *)(*(long *)((long)pvVar24 + 0x28) + lVar21);
                    if (*piVar18 != 0) {
                      pvVar23 = *(void **)((long)pvVar23 + lVar21 * 2);
                      *piVar18 = 0;
                      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar23 + 0x18));
                      CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar23 + 0x10));
                      Memory::free_static(pvVar23,false);
                      pvVar23 = *(void **)((long)pvVar24 + 0x20);
                      *(undefined8 *)((long)pvVar23 + lVar21 * 2) = 0;
                    }
                    lVar21 = lVar21 + 4;
                  } while (lVar21 != (ulong)uVar19 * 4);
                  *(undefined4 *)((long)pvVar24 + 0x44) = 0;
                  *(undefined1 (*) [16])((long)pvVar24 + 0x30) = (undefined1  [16])0x0;
                  if (pvVar23 == (void *)0x0) goto LAB_00107b60;
                }
              }
              Memory::free_static(pvVar23,false);
              Memory::free_static(*(void **)((long)pvVar24 + 0x28),false);
            }
LAB_00107b60:
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar24 + 0x10));
            Memory::free_static(pvVar24,false);
            *(undefined8 *)(local_a0._0_8_ + lVar14 * 2) = 0;
            pvVar24 = (void *)local_a0._0_8_;
          }
          lVar14 = lVar14 + 4;
        } while ((ulong)uVar1 << 2 != lVar14);
        local_80 = local_80 & 0xffffffff;
        local_90 = (undefined1  [16])0x0;
        if (pvVar24 == (void *)0x0) goto LAB_00107ba9;
      }
    }
    Memory::free_static(pvVar24,false);
    Memory::free_static((void *)local_a0._8_8_,false);
  }
LAB_00107ba9:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<DependencyRemoveDialog::RemovedDependency>::_copy_on_write() [clone .isra.0] */

void __thiscall
CowData<DependencyRemoveDialog::RemovedDependency>::_copy_on_write
          (CowData<DependencyRemoveDialog::RemovedDependency> *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  CowData<char32_t> *this_01;
  ulong uVar4;
  CowData *pCVar5;
  long lVar6;
  long lVar7;
  
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
  if (lVar1 * 0x20 != 0) {
    uVar4 = lVar1 * 0x20 - 1;
    uVar4 = uVar4 | uVar4 >> 1;
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
    this_01 = (CowData<char32_t> *)(puVar3 + 2);
    lVar6 = 0;
    if (lVar1 != 0) {
      do {
        lVar7 = lVar6 + 1;
        pCVar5 = (CowData *)(lVar6 * 0x20 + *(long *)this);
        *(undefined8 *)this_01 = 0;
        CowData<char32_t>::_ref(this_01,pCVar5);
        *(undefined8 *)(this_01 + 8) = 0;
        CowData<char32_t>::_ref(this_01 + 8,pCVar5 + 8);
        *(undefined8 *)(this_01 + 0x10) = 0;
        CowData<char32_t>::_ref(this_01 + 0x10,pCVar5 + 0x10);
        this_00 = this_01 + 0x18;
        *(undefined8 *)(this_01 + 0x18) = 0;
        this_01 = this_01 + 0x20;
        CowData<char32_t>::_ref(this_00,pCVar5 + 0x18);
        lVar6 = lVar7;
      } while (lVar1 != lVar7);
    }
    _unref(this);
    *(CowData<char32_t> **)this = (CowData<char32_t> *)(puVar3 + 2);
    return;
  }
  _err_print_error("_copy_on_write","./core/templates/cowdata.h",0x13a,
                   "Parameter \"mem_new\" is null.",0,0);
  return;
}



/* DependencyRemoveDialog::ok_pressed() */

void __thiscall DependencyRemoveDialog::ok_pressed(DependencyRemoveDialog *this)

{
  CowData<String> *this_00;
  code *pcVar1;
  bool bVar2;
  char cVar3;
  int iVar4;
  long *plVar5;
  StringName *pSVar6;
  long lVar7;
  Vector *pVVar8;
  String *pSVar9;
  long lVar10;
  char *pcVar11;
  CowData *pCVar12;
  Object *pOVar13;
  String *this_01;
  long lVar14;
  long in_FS_OFFSET;
  String local_e0 [8];
  undefined8 local_d8;
  undefined8 local_d0;
  String local_c8 [8];
  undefined8 local_c0;
  undefined8 local_b8;
  Object *local_b0;
  undefined8 local_a8;
  long local_a0;
  char *local_98;
  long local_90;
  Variant *local_88 [2];
  int local_78 [6];
  undefined8 local_60;
  undefined1 local_58 [16];
  long local_40;
  
  plVar5 = *(long **)(this + 0xdf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar5 != (long *)0x0) {
    do {
      while( true ) {
        local_b8 = 0;
        if (plVar5[2] != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b8,(CowData *)(plVar5 + 2));
        }
        cVar3 = ResourceCache::has((String *)&local_b8);
        if (cVar3 != '\0') break;
LAB_00107f38:
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        plVar5 = (long *)*plVar5;
        if (plVar5 == (long *)0x0) goto LAB_00108110;
      }
      ResourceCache::get_ref((String *)&local_b0);
      pOVar13 = local_b0;
      if ((local_b0 != (Object *)0x0) && (cVar3 = RefCounted::reference(), cVar3 == '\0')) {
        pOVar13 = (Object *)0x0;
      }
      if ((ok_pressed()::{lambda()#1}::operator()()::sname == '\0') &&
         (iVar4 = __cxa_guard_acquire(&ok_pressed()::{lambda()#1}::operator()()::sname), iVar4 != 0)
         ) {
        _scs_create((char *)&ok_pressed()::{lambda()#1}::operator()()::sname,false);
        __cxa_atexit(StringName::~StringName,&ok_pressed()::{lambda()#1}::operator()()::sname,
                     &__dso_handle);
        __cxa_guard_release(&ok_pressed()::{lambda()#1}::operator()()::sname);
      }
      Variant::Variant((Variant *)local_78,pOVar13);
      local_60 = 0;
      local_58 = (undefined1  [16])0x0;
      local_88[0] = (Variant *)local_78;
      (**(code **)(*(long *)this + 0xd0))
                (this,&ok_pressed()::{lambda()#1}::operator()()::sname,local_88);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
        Variant::_clear_internal();
      }
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if (((pOVar13 != (Object *)0x0) && (cVar3 = RefCounted::unreference(), cVar3 != '\0')) &&
         (cVar3 = predelete_handler(pOVar13), cVar3 != '\0')) {
        (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
        Memory::free_static(pOVar13,false);
      }
      pOVar13 = local_b0;
      pcVar1 = *(code **)(*(long *)local_b0 + 0x188);
      local_a8 = 0;
      local_98 = "";
      local_90 = 0;
      String::parse_latin1((StrRange *)&local_a8);
      (*pcVar1)(pOVar13,(StrRange *)&local_a8,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      if (((local_b0 == (Object *)0x0) ||
          (cVar3 = RefCounted::unreference(), pOVar13 = local_b0, cVar3 == '\0')) ||
         (cVar3 = predelete_handler(local_b0), cVar3 == '\0')) goto LAB_00107f38;
      (**(code **)(*(long *)pOVar13 + 0x140))(pOVar13);
      Memory::free_static(pOVar13,false);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      plVar5 = (long *)*plVar5;
    } while (plVar5 != (long *)0x0);
  }
LAB_00108110:
  this_00 = (CowData<String> *)(this + 0xe20);
  CowData<String>::_copy_on_write(this_00);
  this_01 = *(String **)(this + 0xe20);
  CowData<String>::_copy_on_write(this_00);
  pSVar9 = *(String **)(this + 0xe20);
  if (pSVar9 != (String *)0x0) {
    pSVar9 = pSVar9 + *(long *)(pSVar9 + -8) * 8;
  }
  if (this_01 != pSVar9) {
    bVar2 = false;
    do {
      ProjectSettings::get_singleton();
      StringName::StringName((StringName *)&local_b0,"application/config/icon",false);
      ProjectSettings::get_setting_with_override((StringName *)local_78);
      Variant::operator_cast_to_String((Variant *)&local_a8);
      ResourceUID::ensure_path((String *)&local_98);
      cVar3 = String::operator==(this_01,(String *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
        Variant::_clear_internal();
      }
      if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
        StringName::unref();
      }
      if (cVar3 == '\0') {
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_b0,"application/run/main_scene",false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        Variant::operator_cast_to_String((Variant *)&local_a8);
        ResourceUID::ensure_path((String *)&local_98);
        cVar3 = String::operator==(this_01,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (cVar3 != '\0') {
          pSVar6 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant((Variant *)local_78,"");
          pcVar11 = "application/run/main_scene";
          goto LAB_001081c0;
        }
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_b0,"application/boot_splash/image",false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        Variant::operator_cast_to_String((Variant *)&local_a8);
        ResourceUID::ensure_path((String *)&local_98);
        cVar3 = String::operator==(this_01,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (cVar3 != '\0') {
          pSVar6 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant((Variant *)local_78,"");
          pcVar11 = "application/boot_splash/image";
          goto LAB_001081c0;
        }
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_b0,"rendering/environment/defaults/default_environment",
                   false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        Variant::operator_cast_to_String((Variant *)&local_a8);
        ResourceUID::ensure_path((String *)&local_98);
        cVar3 = String::operator==(this_01,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (cVar3 != '\0') {
          pSVar6 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant((Variant *)local_78,"");
          pcVar11 = "rendering/environment/defaults/default_environment";
          goto LAB_001081c0;
        }
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_b0,"display/mouse_cursor/custom_image",false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        Variant::operator_cast_to_String((Variant *)&local_a8);
        ResourceUID::ensure_path((String *)&local_98);
        cVar3 = String::operator==(this_01,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (cVar3 != '\0') {
          pSVar6 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant((Variant *)local_78,"");
          pcVar11 = "display/mouse_cursor/custom_image";
          goto LAB_00108c78;
        }
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_b0,"gui/theme/custom",false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        Variant::operator_cast_to_String((Variant *)&local_a8);
        ResourceUID::ensure_path((String *)&local_98);
        cVar3 = String::operator==(this_01,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (cVar3 != '\0') {
          pSVar6 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant((Variant *)local_78,"");
          pcVar11 = "gui/theme/custom";
          goto LAB_001081c0;
        }
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_b0,"gui/theme/custom_font",false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        Variant::operator_cast_to_String((Variant *)&local_a8);
        ResourceUID::ensure_path((String *)&local_98);
        cVar3 = String::operator==(this_01,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (cVar3 != '\0') {
          pSVar6 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant((Variant *)local_78,"");
          pcVar11 = "gui/theme/custom_font";
LAB_00108c78:
          StringName::StringName((StringName *)&local_98,pcVar11,false);
          Object::set(pSVar6,(Variant *)&local_98,(bool *)local_78);
          if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
            StringName::unref();
          }
          cVar3 = Variant::needs_deinit[local_78[0]];
          goto joined_r0x00108cbf;
        }
        ProjectSettings::get_singleton();
        StringName::StringName((StringName *)&local_b0,"audio/buses/default_bus_layout",false);
        ProjectSettings::get_setting_with_override((StringName *)local_78);
        Variant::operator_cast_to_String((Variant *)&local_a8);
        ResourceUID::ensure_path((String *)&local_98);
        cVar3 = String::operator==(this_01,(String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_b0 != (Object *)0x0)) {
          StringName::unref();
        }
        if (cVar3 != '\0') {
          pSVar6 = (StringName *)ProjectSettings::get_singleton();
          Variant::Variant((Variant *)local_78,"");
          pcVar11 = "audio/buses/default_bus_layout";
          goto LAB_00108c78;
        }
      }
      else {
        pSVar6 = (StringName *)ProjectSettings::get_singleton();
        Variant::Variant((Variant *)local_78,"");
        pcVar11 = "application/config/icon";
LAB_001081c0:
        StringName::StringName((StringName *)&local_98,pcVar11,false);
        Object::set(pSVar6,(Variant *)&local_98,(bool *)local_78);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        cVar3 = Variant::needs_deinit[local_78[0]];
joined_r0x00108cbf:
        if (cVar3 != '\0') {
          Variant::_clear_internal();
        }
        bVar2 = true;
      }
      String::replace_first((char *)&local_98,(char *)this_01);
      plVar5 = (long *)OS::get_singleton();
      (**(code **)(*plVar5 + 0x2b0))((StrRange *)&local_a8,plVar5);
      String::operator+(local_e0,(String *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      cVar3 = is_print_verbose_enabled();
      if (cVar3 != '\0') {
        operator+((char *)&local_a8,(String *)"Moving to trash: ");
        Variant::Variant((Variant *)local_78,(String *)&local_a8);
        stringify_variants((Variant *)&local_98);
        __print_line((String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      plVar5 = (long *)OS::get_singleton();
      if ((*(code **)(*plVar5 + 0x2c0) == OS::move_to_trash) ||
         (iVar4 = (**(code **)(*plVar5 + 0x2c0))(plVar5,local_e0), iVar4 != 0)) {
        local_a8 = 0;
        local_98 = "\n";
        local_90 = 1;
        String::parse_latin1((StrRange *)&local_a8);
        local_98 = "\n";
        local_c0 = 0;
        local_90 = 1;
        String::parse_latin1((StrRange *)&local_c0);
        local_d0 = 0;
        local_98 = "";
        local_90 = 0;
        String::parse_latin1((StrRange *)&local_d0);
        local_d8 = 0;
        local_98 = "Cannot remove:";
        local_90 = 0xe;
        String::parse_latin1((StrRange *)&local_d8);
        TTR(local_c8,(String *)&local_d8);
        String::operator+((String *)&local_b8,local_c8);
        String::operator+((String *)&local_b0,(String *)&local_b8);
        String::operator+((String *)&local_98,(String *)&local_b0);
        EditorNode::add_io_error((String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      else {
        local_98 = (char *)0x0;
        if (*(long *)this_01 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,(CowData *)this_01);
        }
        if ((ok_pressed()::{lambda()#2}::operator()()::sname == '\0') &&
           (iVar4 = __cxa_guard_acquire(&ok_pressed()::{lambda()#2}::operator()()::sname),
           iVar4 != 0)) {
          _scs_create((char *)&ok_pressed()::{lambda()#2}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&ok_pressed()::{lambda()#2}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&ok_pressed()::{lambda()#2}::operator()()::sname);
        }
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_58 = (undefined1  [16])0x0;
        local_60 = 0;
        local_88[0] = (Variant *)local_78;
        (**(code **)(*(long *)this + 0xd0))
                  (this,&ok_pressed()::{lambda()#2}::operator()()::sname,local_88,1);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      this_01 = this_01 + 8;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
    } while (pSVar9 != this_01);
    if (bVar2) {
      ProjectSettings::get_singleton();
      ProjectSettings::save();
    }
  }
  lVar7 = *(long *)(this + 0xe10);
  if ((lVar7 == 0) || (lVar10 = *(long *)(lVar7 + -8), lVar10 == 0)) {
    lVar7 = *(long *)(this + 0xe20);
    for (lVar10 = 0; (lVar7 != 0 && (lVar10 < *(long *)(lVar7 + -8))); lVar10 = lVar10 + 1) {
      EditorFileSystem::update_file(EditorFileSystem::singleton);
      lVar7 = *(long *)(this + 0xe20);
    }
  }
  else {
    lVar14 = 0;
    while (lVar14 < lVar10) {
      String::replace_first((char *)&local_98,(char *)(lVar7 + lVar14 * 8));
      plVar5 = (long *)OS::get_singleton();
      (**(code **)(*plVar5 + 0x2b0))((StrRange *)&local_a8,plVar5);
      String::operator+(local_e0,(String *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      cVar3 = is_print_verbose_enabled();
      if (cVar3 != '\0') {
        operator+((char *)&local_a8,(String *)"Moving to trash: ");
        Variant::Variant((Variant *)local_78,(String *)&local_a8);
        stringify_variants((Variant *)&local_98);
        __print_line((String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      plVar5 = (long *)OS::get_singleton();
      if ((*(code **)(*plVar5 + 0x2c0) == OS::move_to_trash) ||
         (iVar4 = (**(code **)(*plVar5 + 0x2c0))(plVar5,local_e0), iVar4 != 0)) {
        local_a8 = 0;
        String::parse_latin1((String *)&local_a8,"\n");
        if (*(long *)(this + 0xe10) == 0) goto LAB_001091b8;
        lVar7 = *(long *)(*(long *)(this + 0xe10) + -8);
        if (lVar7 <= lVar14) goto LAB_00109161;
        local_c0 = 0;
        String::parse_latin1((String *)&local_c0,"\n");
        local_d0 = 0;
        String::parse_latin1((String *)&local_d0,"");
        local_d8 = 0;
        String::parse_latin1((String *)&local_d8,"Cannot remove:");
        TTR(local_c8,(String *)&local_d8);
        String::operator+((String *)&local_b8,local_c8);
        String::operator+((String *)&local_b0,(String *)&local_b8);
        String::operator+((String *)&local_98,(String *)&local_b0);
        EditorNode::add_io_error((String *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_c8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
      }
      else {
        lVar10 = *(long *)(this + 0xe10);
        if (lVar10 == 0) {
LAB_001091b8:
          lVar7 = 0;
          goto LAB_00109161;
        }
        lVar7 = *(long *)(lVar10 + -8);
        if (lVar7 <= lVar14) goto LAB_00109161;
        local_98 = (char *)0x0;
        pCVar12 = (CowData *)(lVar10 + lVar14 * 8);
        if (*(long *)pCVar12 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_98,pCVar12);
        }
        if ((ok_pressed()::{lambda()#3}::operator()()::sname == '\0') &&
           (iVar4 = __cxa_guard_acquire(&ok_pressed()::{lambda()#3}::operator()()::sname),
           iVar4 != 0)) {
          _scs_create((char *)&ok_pressed()::{lambda()#3}::operator()()::sname,true);
          __cxa_atexit(StringName::~StringName,&ok_pressed()::{lambda()#3}::operator()()::sname,
                       &__dso_handle);
          __cxa_guard_release(&ok_pressed()::{lambda()#3}::operator()()::sname);
        }
        Variant::Variant((Variant *)local_78,(String *)&local_98);
        local_60 = 0;
        local_58 = (undefined1  [16])0x0;
        local_88[0] = (Variant *)local_78;
        (**(code **)(*(long *)this + 0xd0))
                  (this,&ok_pressed()::{lambda()#3}::operator()()::sname,local_88,1);
        if (Variant::needs_deinit[(int)local_60] != '\0') {
          Variant::_clear_internal();
        }
        if (Variant::needs_deinit[local_78[0]] != '\0') {
          Variant::_clear_internal();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
      }
      lVar14 = lVar14 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_e0);
      lVar7 = *(long *)(this + 0xe10);
      if (lVar7 == 0) break;
      lVar10 = *(long *)(lVar7 + -8);
    }
    EditorFileSystem::scan_changes();
  }
  EditorSettings::get_singleton();
  lVar14 = 0;
  EditorSettings::get_favorites();
  local_90 = 0;
  if (local_a0 != 0) {
    do {
      lVar7 = *(long *)(local_a0 + -8);
      if (lVar7 <= lVar14) {
        if (local_90 != 0) goto LAB_001092d7;
        lVar10 = 0;
        goto LAB_001092db;
      }
      lVar10 = lVar14 * 8;
      cVar3 = String::ends_with((char *)(local_a0 + lVar10));
      if (cVar3 != '\0') {
        if (local_a0 == 0) {
LAB_00109140:
          lVar7 = 0;
        }
        else {
          lVar7 = *(long *)(local_a0 + -8);
          if (lVar14 < lVar7) {
            lVar7 = CowData<String>::find
                              ((CowData<String> *)(this + 0xe10),(String *)(local_a0 + lVar10),0);
            goto joined_r0x0010907b;
          }
        }
        goto LAB_00109161;
      }
      if (local_a0 == 0) goto LAB_00109140;
      lVar7 = *(long *)(local_a0 + -8);
      if (lVar7 <= lVar14) goto LAB_00109161;
      lVar7 = CowData<String>::find(this_00,(String *)(local_a0 + lVar10),0);
joined_r0x0010907b:
      if (lVar7 == -1) {
        if (local_a0 == 0) goto LAB_00109140;
        lVar7 = *(long *)(local_a0 + -8);
        if (lVar7 <= lVar14) {
LAB_00109161:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar14,lVar7,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar1 = (code *)invalidInstructionException();
          (*pcVar1)();
        }
        local_b0 = (Object *)0x0;
        if (*(long *)(local_a0 + lVar10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)(local_a0 + lVar10));
        }
        Vector<String>::push_back((Vector<String> *)&local_98,(CowData<char32_t> *)&local_b0);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      }
      lVar14 = lVar14 + 1;
    } while (local_a0 != 0);
    if (local_90 != 0) {
      lVar7 = 0;
LAB_001092d7:
      lVar10 = *(long *)(local_90 + -8);
LAB_001092db:
      if (lVar10 < lVar7) {
        pVVar8 = (Vector *)EditorSettings::get_singleton();
        EditorSettings::set_favorites(pVVar8);
      }
    }
  }
  CowData<String>::_unref((CowData<String> *)&local_90);
  CowData<String>::_unref((CowData<String> *)&local_a0);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* Vector<DependencyRemoveDialog::RemovedDependency>::push_back(DependencyRemoveDialog::RemovedDependency)
   [clone .isra.0] */

void __thiscall
Vector<DependencyRemoveDialog::RemovedDependency>::push_back
          (Vector<DependencyRemoveDialog::RemovedDependency> *this,CowData *param_2)

{
  int iVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  long lVar3;
  
  if (*(long *)(this + 8) == 0) {
    lVar3 = 1;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8) + 1;
  }
  iVar1 = CowData<DependencyRemoveDialog::RemovedDependency>::resize<false>
                    ((CowData<DependencyRemoveDialog::RemovedDependency> *)(this + 8),lVar3);
  if (iVar1 != 0) {
    _err_print_error("push_back","./core/templates/vector.h",0x142,
                     "Condition \"err\" is true. Returning: true",0,0);
    return;
  }
  if (*(long *)(this + 8) == 0) {
    lVar2 = -1;
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(*(long *)(this + 8) + -8);
    lVar2 = lVar3 + -1;
    if (-1 < lVar2) {
      CowData<DependencyRemoveDialog::RemovedDependency>::_copy_on_write
                ((CowData<DependencyRemoveDialog::RemovedDependency> *)(this + 8));
      this_00 = (CowData<char32_t> *)(lVar2 * 0x20 + *(long *)(this + 8));
      if (*(long *)this_00 != *(long *)param_2) {
        CowData<char32_t>::_ref(this_00,param_2);
      }
      if (*(long *)(this_00 + 8) != *(long *)(param_2 + 8)) {
        CowData<char32_t>::_ref(this_00 + 8,param_2 + 8);
      }
      if (*(long *)(this_00 + 0x10) != *(long *)(param_2 + 0x10)) {
        CowData<char32_t>::_ref(this_00 + 0x10,param_2 + 0x10);
      }
      if (*(long *)(this_00 + 0x18) == *(long *)(param_2 + 0x18)) {
        return;
      }
      CowData<char32_t>::_ref(this_00 + 0x18,param_2 + 0x18);
      return;
    }
  }
  _err_print_index_error
            ("set","./core/templates/cowdata.h",0xcf,lVar2,lVar3,"p_index","size()","",false,false);
  return;
}



/* DependencyRemoveDialog::_find_localization_remaps_of_removed_files(Vector<DependencyRemoveDialog::RemovedDependency>&)
    */

void __thiscall
DependencyRemoveDialog::_find_localization_remaps_of_removed_files
          (DependencyRemoveDialog *this,Vector *param_1)

{
  StrRange *this_00;
  CowData<char32_t> *this_01;
  code *pcVar1;
  int iVar2;
  undefined1 auVar3 [16];
  char *pcVar4;
  char cVar5;
  int iVar6;
  String *pSVar7;
  Variant *pVVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long in_FS_OFFSET;
  int local_11c;
  Variant local_e8 [8];
  Array local_e0 [8];
  String local_d8 [8];
  long local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  String local_b8 [8];
  undefined8 local_b0;
  undefined8 local_a8;
  long local_a0;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  char *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  int local_58 [6];
  long local_40;
  
  plVar9 = *(long **)(this + 0xdf0);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (plVar9 != (long *)0x0) {
    do {
      pSVar7 = (String *)ProjectSettings::get_singleton();
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_98._8_8_;
      local_98 = auVar3 << 0x40;
      local_70 = 0x2e;
      local_78 = "internationalization/locale/translation_remaps";
      String::parse_latin1((StrRange *)local_98);
      cVar5 = ProjectSettings::has_setting(pSVar7);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
      if (cVar5 != '\0') {
        ProjectSettings::get_singleton();
        StringName::StringName
                  ((StringName *)&local_78,"internationalization/locale/translation_remaps",false);
        ProjectSettings::get_setting_with_override((StringName *)local_58);
        Variant::operator_cast_to_Dictionary(local_e8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
          StringName::unref();
        }
        pSVar7 = (String *)(plVar9 + 2);
        Variant::Variant((Variant *)local_58,pSVar7);
        cVar5 = Dictionary::has(local_e8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        if (cVar5 != '\0') {
          local_a8 = 0;
          local_98 = (undefined1  [16])0x0;
          local_88 = (undefined1  [16])0x0;
          String::parse_latin1((String *)&local_a8,"");
          local_b0 = 0;
          String::parse_latin1((String *)&local_b0,"Localization remap");
          TTR((String *)&local_78,(String *)&local_b0);
          if ((char *)local_98._0_8_ != local_78) {
            CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
            pcVar4 = local_78;
            local_78 = (char *)0x0;
            local_98._0_8_ = pcVar4;
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
          String::parse_latin1((String *)(local_98 + 8),"");
          if (local_88._0_8_ != plVar9[2]) {
            CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)pSVar7);
          }
          if (local_88._8_8_ != plVar9[3]) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(local_88 + 8),(CowData *)(plVar9 + 3));
          }
          RemovedDependency::RemovedDependency
                    ((RemovedDependency *)&local_78,(RemovedDependency *)local_98);
          Vector<DependencyRemoveDialog::RemovedDependency>::push_back
                    ((Vector<DependencyRemoveDialog::RemovedDependency> *)param_1,
                     (StringName *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)(local_88 + 8));
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
          CowData<char32_t>::_unref((CowData<char32_t> *)(local_98 + 8));
          CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
        }
        Dictionary::keys();
        for (local_11c = 0; iVar6 = Array::size(), local_11c < iVar6; local_11c = local_11c + 1) {
          iVar6 = (int)local_e0;
          Array::operator[](iVar6);
          Dictionary::operator[](local_e8);
          Variant::operator_cast_to_Vector((Variant *)&local_a8);
          for (lVar11 = 0; (local_a0 != 0 && (lVar11 < *(long *)(local_a0 + -8)));
              lVar11 = lVar11 + 1) {
            iVar2 = (int)lVar11 * 8;
            String::rfind_char((int)local_a0 + iVar2,0x3a);
            if (local_a0 == 0) {
LAB_00109b4e:
              lVar10 = 0;
LAB_00109b51:
              _err_print_index_error
                        ("get","./core/templates/cowdata.h",0xdb,lVar11,lVar10,"p_index","size()",""
                         ,false,true);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar1 = (code *)invalidInstructionException();
              (*pcVar1)();
            }
            lVar10 = *(long *)(local_a0 + -8);
            if (lVar10 <= lVar11) goto LAB_00109b51;
            String::substr((int)local_d8,(int)local_a0 + iVar2);
            cVar5 = String::operator==(local_d8,pSVar7);
            if (cVar5 != '\0') {
              if (local_a0 == 0) goto LAB_00109b4e;
              lVar10 = *(long *)(local_a0 + -8);
              if (lVar10 <= lVar11) goto LAB_00109b51;
              String::substr((int)(CowData *)&local_d0,(int)local_a0 + iVar2);
              local_b0 = 0;
              local_98 = (undefined1  [16])0x0;
              local_88 = (undefined1  [16])0x0;
              if (local_d0 != 0) {
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_b0,(CowData *)&local_d0);
              }
              pVVar8 = (Variant *)Array::operator[](iVar6);
              Variant::Variant((Variant *)local_58,pVVar8);
              local_78 = "";
              local_c0 = 0;
              local_70 = 0;
              String::parse_latin1((StrRange *)&local_c0);
              local_78 = "Localization remap for path \'%s\' and locale \'%s\'.";
              local_c8 = 0;
              local_70 = 0x31;
              String::parse_latin1((StrRange *)&local_c8);
              TTR(local_b8,(String *)&local_c8);
              vformat<Variant,String>
                        ((StringName *)&local_78,local_b8,(StringName *)local_58,
                         (CowData<char32_t> *)&local_b0);
              pcVar4 = local_78;
              if ((char *)local_98._0_8_ != local_78) {
                CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
                local_78 = (char *)0x0;
                local_98._0_8_ = pcVar4;
              }
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_b8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
              if (Variant::needs_deinit[local_58[0]] != '\0') {
                Variant::_clear_internal();
              }
              this_00 = (StrRange *)(local_98 + 8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
              local_78 = "";
              local_70 = 0;
              String::parse_latin1(this_00);
              if (local_88._0_8_ != plVar9[2]) {
                CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)pSVar7);
              }
              this_01 = (CowData<char32_t> *)(local_88 + 8);
              if (local_88._8_8_ != plVar9[3]) {
                CowData<char32_t>::_ref(this_01,(CowData *)(plVar9 + 3));
              }
              local_78 = (char *)0x0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)local_98);
              local_70 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)this_00);
              local_68 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_88);
              local_60 = 0;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)this_01);
              Vector<DependencyRemoveDialog::RemovedDependency>::push_back
                        ((Vector<DependencyRemoveDialog::RemovedDependency> *)param_1,
                         (StringName *)&local_78);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
              CowData<char32_t>::_unref(this_01);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
              CowData<char32_t>::_unref((CowData<char32_t> *)this_00);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_98);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_d0);
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)local_d8);
          }
          CowData<String>::_unref((CowData<String> *)&local_a0);
        }
        Array::~Array(local_e0);
        Dictionary::~Dictionary((Dictionary *)local_e8);
      }
      plVar9 = (long *)*plVar9;
    } while (plVar9 != (long *)0x0);
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyRemoveDialog::_find_all_removed_dependencies(EditorFileSystemDirectory*,
   Vector<DependencyRemoveDialog::RemovedDependency>&) [clone .part.0] */

void __thiscall
DependencyRemoveDialog::_find_all_removed_dependencies
          (DependencyRemoveDialog *this,EditorFileSystemDirectory *param_1,Vector *param_2)

{
  long lVar1;
  CowData<char32_t> *this_00;
  uint uVar2;
  long lVar3;
  char *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  code *pcVar12;
  ulong uVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  EditorFileSystemDirectory *pEVar17;
  CowData *pCVar18;
  uint uVar19;
  long lVar20;
  int iVar21;
  long lVar22;
  long lVar23;
  String *pSVar24;
  long lVar25;
  uint uVar26;
  long in_FS_OFFSET;
  int local_104;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined1 local_98 [8];
  long local_90;
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  char *local_68;
  size_t local_60;
  undefined8 local_58;
  undefined8 local_50 [2];
  long local_40;
  
  iVar21 = 0;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  iVar15 = EditorFileSystemDirectory::get_subdir_count();
  if (0 < iVar15) {
    do {
      pEVar17 = (EditorFileSystemDirectory *)EditorFileSystemDirectory::get_subdir((int)param_1);
      if (pEVar17 != (EditorFileSystemDirectory *)0x0) {
        _find_all_removed_dependencies(this,pEVar17,param_2);
      }
      iVar21 = iVar21 + 1;
      iVar15 = EditorFileSystemDirectory::get_subdir_count();
    } while (iVar21 < iVar15);
  }
  local_104 = 0;
  iVar15 = EditorFileSystemDirectory::get_file_count();
  if (iVar15 < 1) {
LAB_00109ecc:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
LAB_00109e65:
  EditorFileSystemDirectory::get_file_path((int)(String *)&local_b0);
  local_68 = (char *)((ulong)local_68 & 0xffffffff00000000);
  cVar14 = HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
           ::_lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          *)(this + 0xdd8),(String *)&local_b0,(uint *)&local_68);
  if (cVar14 == '\0') {
    EditorFileSystemDirectory::get_file_deps((int)local_98);
    lVar22 = 0;
    lVar23 = local_90;
joined_r0x00109f29:
    do {
      if ((lVar23 == 0) || (*(long *)(lVar23 + -8) <= lVar22)) goto LAB_0010a32d;
      if ((*(long *)(this + 0xde0) != 0) && (*(int *)(this + 0xe04) != 0)) {
        lVar1 = lVar22 * 8;
        pSVar24 = (String *)(lVar23 + lVar1);
        uVar2 = (&hash_table_size_primes)[*(uint *)(this + 0xe00)];
        lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0xe00) * 8);
        uVar16 = String::hash();
        uVar13 = CONCAT44(0,uVar2);
        lVar25 = *(long *)(this + 0xde8);
        uVar19 = 1;
        if (uVar16 != 0) {
          uVar19 = uVar16;
        }
        auVar4._8_8_ = 0;
        auVar4._0_8_ = (ulong)uVar19 * lVar3;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar13;
        lVar20 = SUB168(auVar4 * auVar8,8);
        uVar16 = *(uint *)(lVar25 + lVar20 * 4);
        iVar15 = SUB164(auVar4 * auVar8,8);
        lVar23 = local_90;
        if (uVar16 != 0) {
          uVar26 = 0;
          do {
            if (uVar16 == uVar19) {
              cVar14 = String::operator==((String *)
                                          (*(long *)(*(long *)(this + 0xde0) + lVar20 * 8) + 0x10),
                                          pSVar24);
              if (cVar14 != '\0') {
                local_88 = (undefined1  [16])0x0;
                local_78 = (undefined1  [16])0x0;
                lVar23 = local_b0;
                if (local_b0 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_88,(CowData *)&local_b0);
                  lVar23 = local_88._8_8_;
                }
                EditorFileSystemDirectory::get_file_type((int)&local_a8);
                if (local_a8 == 0) {
LAB_0010a379:
                  local_a0 = 0;
                }
                else {
                  __s = *(char **)(local_a8 + 8);
                  local_a0 = 0;
                  if (__s == (char *)0x0) {
                    if (*(long *)(local_a8 + 0x10) == 0) goto LAB_0010a379;
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_a0,(CowData *)(local_a8 + 0x10));
                  }
                  else {
                    local_60 = strlen(__s);
                    local_68 = __s;
                    String::parse_latin1((StrRange *)&local_a0);
                  }
                }
                if (lVar23 != local_a0) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)(local_88 + 8));
                  lVar23 = local_a0;
                  local_a0 = 0;
                  local_88._8_8_ = lVar23;
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
                if ((StringName::configured != '\0') && (local_a8 != 0)) {
                  StringName::unref();
                }
                if (local_90 == 0) {
LAB_0010a3b0:
                  lVar23 = 0;
LAB_0010a3b3:
                  _err_print_index_error
                            ("get","./core/templates/cowdata.h",0xdb,lVar22,lVar23,"p_index",
                             "size()","",false,true);
                  _err_flush_stdout();
                    /* WARNING: Does not return */
                  pcVar12 = (code *)invalidInstructionException();
                  (*pcVar12)();
                }
                lVar23 = *(long *)(local_90 + -8);
                if (lVar23 <= lVar22) goto LAB_0010a3b3;
                pSVar24 = (String *)(local_90 + lVar1);
                if (local_78._0_8_ != *(long *)pSVar24) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_78,(CowData *)pSVar24);
                  if (local_90 == 0) goto LAB_0010a3b0;
                  lVar23 = *(long *)(local_90 + -8);
                  if (lVar23 <= lVar22) goto LAB_0010a3b3;
                  pSVar24 = (String *)(local_90 + lVar1);
                }
                pCVar18 = (CowData *)
                          HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                                        *)(this + 0xdd8),pSVar24);
                this_00 = (CowData<char32_t> *)(local_78 + 8);
                lVar23 = *(long *)pCVar18;
                if (local_78._8_8_ != *(long *)pCVar18) {
                  CowData<char32_t>::_ref(this_00,pCVar18);
                  lVar23 = local_78._8_8_;
                }
                local_68 = (char *)0x0;
                if (local_88._0_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_88);
                }
                local_60 = 0;
                if (local_88._8_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(local_88 + 8));
                }
                local_58 = 0;
                if (local_78._0_8_ != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_78);
                }
                local_50[0] = 0;
                if (lVar23 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)this_00);
                }
                Vector<DependencyRemoveDialog::RemovedDependency>::push_back
                          ((Vector<DependencyRemoveDialog::RemovedDependency> *)param_2,
                           (CowData<char32_t> *)&local_68);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
                CowData<char32_t>::_unref(this_00);
                CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
                CowData<char32_t>::_unref((CowData<char32_t> *)(local_88 + 8));
                CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
                lVar23 = local_90;
                goto LAB_0010a320;
              }
              lVar25 = *(long *)(this + 0xde8);
            }
            uVar26 = uVar26 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)(iVar15 + 1) * lVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar13;
            lVar20 = SUB168(auVar5 * auVar9,8);
            uVar16 = *(uint *)(lVar25 + lVar20 * 4);
            iVar15 = SUB164(auVar5 * auVar9,8);
          } while ((uVar16 != 0) &&
                  (auVar6._8_8_ = 0, auVar6._0_8_ = (ulong)uVar16 * lVar3, auVar10._8_8_ = 0,
                  auVar10._0_8_ = uVar13, auVar7._8_8_ = 0,
                  auVar7._0_8_ = (ulong)((uVar2 + iVar15) - SUB164(auVar6 * auVar10,8)) * lVar3,
                  auVar11._8_8_ = 0, auVar11._0_8_ = uVar13, uVar26 <= SUB164(auVar7 * auVar11,8)));
          lVar22 = lVar22 + 1;
          lVar23 = local_90;
          goto joined_r0x00109f29;
        }
      }
LAB_0010a320:
      lVar22 = lVar22 + 1;
    } while( true );
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  goto LAB_00109eb7;
LAB_0010a32d:
  CowData<String>::_unref((CowData<String> *)&local_90);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
LAB_00109eb7:
  local_104 = local_104 + 1;
  iVar15 = EditorFileSystemDirectory::get_file_count();
  if (iVar15 <= local_104) goto LAB_00109ecc;
  goto LAB_00109e65;
}



/* DependencyRemoveDialog::_find_all_removed_dependencies(EditorFileSystemDirectory*,
   Vector<DependencyRemoveDialog::RemovedDependency>&) */

void __thiscall
DependencyRemoveDialog::_find_all_removed_dependencies
          (DependencyRemoveDialog *this,EditorFileSystemDirectory *param_1,Vector *param_2)

{
  if (param_1 != (EditorFileSystemDirectory *)0x0) {
    _find_all_removed_dependencies(this,param_1,param_2);
    return;
  }
  return;
}



/* DependencyRemoveDialog::show(Vector<String> const&, Vector<String> const&) */

void __thiscall
DependencyRemoveDialog::show(DependencyRemoveDialog *this,Vector *param_1,Vector *param_2)

{
  long lVar1;
  uint uVar2;
  void *pvVar3;
  String *pSVar4;
  code *pcVar5;
  char cVar6;
  CowData<char32_t> *this_00;
  EditorFileSystemDirectory *pEVar7;
  long lVar8;
  long lVar9;
  CowData *pCVar10;
  long lVar11;
  long in_FS_OFFSET;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined *local_68;
  long local_60 [2];
  undefined8 local_50;
  undefined8 local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 0xde0) != 0) && (*(int *)(this + 0xe04) != 0)) {
    uVar2 = (&hash_table_size_primes)[*(uint *)(this + 0xe00)];
    if (uVar2 != 0) {
      lVar8 = 0;
      do {
        if (*(int *)(*(long *)(this + 0xde8) + lVar8) != 0) {
          *(int *)(*(long *)(this + 0xde8) + lVar8) = 0;
          pvVar3 = *(void **)(*(long *)(this + 0xde0) + lVar8 * 2);
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x18));
          CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
          Memory::free_static(pvVar3,false);
          *(undefined8 *)(*(long *)(this + 0xde0) + lVar8 * 2) = 0;
        }
        lVar8 = lVar8 + 4;
      } while ((ulong)uVar2 << 2 != lVar8);
    }
    *(undefined4 *)(this + 0xe04) = 0;
    *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
  }
  if ((*(long *)(this + 0xe10) != 0) && (*(long *)(*(long *)(this + 0xe10) + -8) != 0)) {
    CowData<String>::_unref((CowData<String> *)(this + 0xe10));
  }
  if ((*(long *)(this + 0xe20) != 0) && (*(long *)(*(long *)(this + 0xe20) + -8) != 0)) {
    CowData<String>::_unref((CowData<String> *)(this + 0xe20));
  }
  Tree::clear();
  lVar8 = *(long *)(param_1 + 8);
  for (lVar9 = 0; (lVar8 != 0 && (lVar9 < *(long *)(lVar8 + -8))); lVar9 = lVar9 + 1) {
    lVar1 = lVar9 * 8;
    cVar6 = String::ends_with((char *)(lVar8 + lVar1));
    if (cVar6 == '\0') {
      local_70 = 0;
      local_68 = &_LC149;
      local_60[0] = 1;
      String::parse_latin1((StrRange *)&local_70);
      lVar8 = *(long *)(param_1 + 8);
      if (lVar8 == 0) goto LAB_0010a780;
      lVar11 = *(long *)(lVar8 + -8);
      if (lVar11 <= lVar9) goto LAB_0010a783;
      String::operator+((String *)&local_78,(String *)(lVar8 + lVar1));
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    }
    else {
      lVar8 = *(long *)(param_1 + 8);
      if (lVar8 == 0) goto LAB_0010a780;
      lVar11 = *(long *)(lVar8 + -8);
      if (lVar11 <= lVar9) goto LAB_0010a783;
      local_78 = 0;
      if (*(long *)(lVar8 + lVar1) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)(lVar8 + lVar1));
      }
    }
    pEVar7 = (EditorFileSystemDirectory *)
             EditorFileSystem::get_filesystem_path(EditorFileSystem::singleton);
    if (pEVar7 != (EditorFileSystemDirectory *)0x0) {
      _find_files_in_removed_folder(this,pEVar7,(String *)&local_78);
    }
    local_68 = (undefined *)0x0;
    if (local_78 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)&local_78);
    }
    Vector<String>::push_back((Vector<String> *)(this + 0xe08),(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
    lVar8 = *(long *)(param_1 + 8);
  }
  lVar9 = 0;
  lVar8 = *(long *)(param_2 + 8);
  while( true ) {
    if ((lVar8 == 0) || (*(long *)(lVar8 + -8) <= lVar9)) {
      _show_files_to_delete_list(this);
      local_60[0] = 0;
      pEVar7 = (EditorFileSystemDirectory *)EditorFileSystem::get_filesystem();
      if (pEVar7 != (EditorFileSystemDirectory *)0x0) {
        _find_all_removed_dependencies(this,pEVar7,(Vector *)&local_68);
      }
      _find_localization_remaps_of_removed_files(this,(Vector *)&local_68);
      Vector<DependencyRemoveDialog::RemovedDependency>::
      sort_custom<_DefaultComparator<DependencyRemoveDialog::RemovedDependency>,true>
                ((Vector<DependencyRemoveDialog::RemovedDependency> *)&local_68);
      if (local_60[0] == 0) {
        CanvasItem::hide();
        pSVar4 = *(String **)(this + 0xdb8);
        local_78 = 0;
        String::parse_latin1((String *)&local_78,"");
        local_80 = 0;
        String::parse_latin1
                  ((String *)&local_80,
                   "Remove the selected files from the project? (Cannot be undone.)\nDepending on your filesystem configuration, the files will either be moved to the system trash or deleted permanently."
                  );
        TTR((String *)&local_70,(String *)&local_80);
        Label::set_text(pSVar4);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        Window::reset_size();
        local_48 = 0;
        Window::popup_centered(this);
      }
      else {
        _build_removed_dependency_tree(this,(Vector *)&local_68);
        CanvasItem::show();
        pSVar4 = *(String **)(this + 0xdb8);
        local_78 = 0;
        String::parse_latin1((String *)&local_78,"");
        local_80 = 0;
        String::parse_latin1
                  ((String *)&local_80,
                   "The files being removed are required by other resources in order for them to work.\nRemove them anyway? (Cannot be undone.)\nDepending on your filesystem configuration, the files will either be moved to the system trash or deleted permanently."
                  );
        TTR((String *)&local_70,(String *)&local_80);
        Label::set_text(pSVar4);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_50 = _LC168;
        local_48 = Vector2::operator_cast_to_Vector2i((Vector2 *)&local_50);
        Window::popup_centered(this);
      }
      EditorFileSystem::scan_changes();
      CowData<DependencyRemoveDialog::RemovedDependency>::_unref
                ((CowData<DependencyRemoveDialog::RemovedDependency> *)local_60);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    local_68 = (undefined *)0x0;
    this_00 = (CowData<char32_t> *)
              HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
              ::operator[]((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                            *)(this + 0xdd8),(String *)(lVar8 + lVar9 * 8));
    if (*(long *)this_00 != 0) {
      CowData<char32_t>::_unref(this_00);
      *(undefined8 *)this_00 = 0;
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    lVar8 = *(long *)(param_2 + 8);
    if (lVar8 == 0) break;
    lVar11 = *(long *)(lVar8 + -8);
    if (lVar11 <= lVar9) goto LAB_0010a783;
    local_68 = (undefined *)0x0;
    pCVar10 = (CowData *)(lVar8 + lVar9 * 8);
    if (*(long *)pCVar10 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar10);
    }
    lVar9 = lVar9 + 1;
    Vector<String>::push_back((Vector<String> *)(this + 0xe18),(CowData<char32_t> *)&local_68);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    lVar8 = *(long *)(param_2 + 8);
  }
LAB_0010a780:
  lVar11 = 0;
LAB_0010a783:
  _err_print_index_error
            ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar11,"p_index","size()","",false,true);
  _err_flush_stdout();
                    /* WARNING: Does not return */
  pcVar5 = (code *)invalidInstructionException();
  (*pcVar5)();
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



/* OS::move_to_trash(String const&) */

undefined8 OS::move_to_trash(String *param_1)

{
  return 1;
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
  
  return (uint)CONCAT71(0x11d4,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d4,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d4,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d4,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
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



/* DependencyEditor::is_class_ptr(void*) const */

uint DependencyEditor::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11d4,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d3,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d4,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d4,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* DependencyEditor::_property_can_revertv(StringName const&) const */

undefined8 DependencyEditor::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* DependencyEditor::_property_get_revertv(StringName const&, Variant&) const */

undefined8 DependencyEditor::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DependencyEditorOwners::is_class_ptr(void*) const */

uint DependencyEditorOwners::is_class_ptr(void *param_1)

{
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  return (uint)CONCAT71(0x11d4,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d3,in_RSI == &get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d4,in_RSI == &Window::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d4,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
         (uint)CONCAT71(0x11d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
         CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
}



/* DependencyEditorOwners::_property_can_revertv(StringName const&) const */

undefined8 DependencyEditorOwners::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* DependencyEditorOwners::_property_get_revertv(StringName const&, Variant&) const */

undefined8 DependencyEditorOwners::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DependencyRemoveDialog::_property_can_revertv(StringName const&) const */

undefined8 DependencyRemoveDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* DependencyRemoveDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 DependencyRemoveDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* DependencyErrorDialog::_property_can_revertv(StringName const&) const */

undefined8 DependencyErrorDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* DependencyErrorDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 DependencyErrorDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* OrphanResourcesDialog::_property_can_revertv(StringName const&) const */

undefined8 OrphanResourcesDialog::_property_can_revertv(StringName *param_1)

{
  return 0;
}



/* OrphanResourcesDialog::_property_get_revertv(StringName const&, Variant&) const */

undefined8 OrphanResourcesDialog::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  return 0;
}



/* CallableCustomMethodPointer<OrphanResourcesDialog, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton> *this
          )

{
  return;
}



/* CallableCustomMethodPointer<OrphanResourcesDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OrphanResourcesDialog,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton> *this
          )

{
  return;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, int, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>
           *this)

{
  return;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int> *this)

{
  return;
}



/* CallableCustomMethodPointer<DependencyEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditor,void,String_const&> *this)

{
  return;
}



/* CallableCustomMethodPointer<DependencyEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditor,void> *this)

{
  return;
}



/* CallableCustomMethodPointer<DependencyEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton> *this)

{
  return;
}



/* CallableCustomMethodPointer<OrphanResourcesDialog, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton>::
get_argument_count(CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 4;
}



/* CallableCustomMethodPointer<OrphanResourcesDialog, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void>::get_argument_count
          (CallableCustomMethodPointer<OrphanResourcesDialog,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, Vector2 const&,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton>::
get_argument_count(CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 2;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, int, Vector2 const&,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>::
get_argument_count(CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>
                   *this,bool *param_1)

{
  *param_1 = true;
  return 3;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, int>::get_argument_count(bool&) const
    */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int>::get_argument_count
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<DependencyEditor, void, String const&>::get_argument_count(bool&)
   const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditor,void,String_const&>::get_argument_count
          (CallableCustomMethodPointer<DependencyEditor,void,String_const&> *this,bool *param_1)

{
  *param_1 = true;
  return 1;
}



/* CallableCustomMethodPointer<DependencyEditor, void>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditor,void>::get_argument_count
          (CallableCustomMethodPointer<DependencyEditor,void> *this,bool *param_1)

{
  *param_1 = true;
  return 0;
}



/* CallableCustomMethodPointer<DependencyEditor, void, Object*, int, int,
   MouseButton>::get_argument_count(bool&) const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton>::get_argument_count
          (CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton> *this,
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



/* CallableCustomMethodPointer<DependencyEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<DependencyEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditor,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<DependencyEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditor,void,String_const&> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, int, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>
           *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton> *this
          )

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OrphanResourcesDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OrphanResourcesDialog,void> *this)

{
  operator_delete(this,0x48);
  return;
}



/* CallableCustomMethodPointer<OrphanResourcesDialog, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton> *this
          )

{
  operator_delete(this,0x48);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011bfd0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* ConfirmationDialog::~ConfirmationDialog() */

void __thiscall ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011bfd0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdb8);
  return;
}



/* ConfirmationDialog::_getv(StringName const&, Variant&) const */

undefined8 ConfirmationDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00123018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DependencyEditor::_getv(StringName const&, Variant&) const */

undefined8 DependencyEditor::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00123018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DependencyEditorOwners::_getv(StringName const&, Variant&) const */

undefined8 DependencyEditorOwners::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00123018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DependencyRemoveDialog::_getv(StringName const&, Variant&) const */

undefined8 DependencyRemoveDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00123018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DependencyErrorDialog::_getv(StringName const&, Variant&) const */

undefined8 DependencyErrorDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00123018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* OrphanResourcesDialog::_getv(StringName const&, Variant&) const */

undefined8 OrphanResourcesDialog::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__get_00123018 != Object::_get) {
    uVar1 = Window::_get(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* ConfirmationDialog::_setv(StringName const&, Variant const&) */

undefined8 ConfirmationDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00123020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DependencyEditor::_setv(StringName const&, Variant const&) */

undefined8 DependencyEditor::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00123020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DependencyEditorOwners::_setv(StringName const&, Variant const&) */

undefined8 DependencyEditorOwners::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00123020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DependencyRemoveDialog::_setv(StringName const&, Variant const&) */

undefined8 DependencyRemoveDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00123020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* DependencyErrorDialog::_setv(StringName const&, Variant const&) */

undefined8 DependencyErrorDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00123020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* OrphanResourcesDialog::_setv(StringName const&, Variant const&) */

undefined8 OrphanResourcesDialog::_setv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__set_00123020 != Object::_set) {
    uVar1 = Window::_set(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00123028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_property_get_revertv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_get_revert_00123028 != Object::_property_get_revert) {
    uVar1 = Control::_property_get_revert(param_1,param_2);
    return uVar1;
  }
  return 0;
}



/* HBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 HBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00123030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* VBoxContainer::_property_can_revertv(StringName const&) const */

undefined8 VBoxContainer::_property_can_revertv(StringName *param_1)

{
  undefined8 uVar1;
  
  if ((code *)PTR__property_can_revert_00123030 != Object::_property_can_revert) {
    uVar1 = Control::_property_can_revert(param_1);
    return uVar1;
  }
  return 0;
}



/* DependencyErrorDialog::_get_class_namev() const */

undefined8 * DependencyErrorDialog::_get_class_namev(void)

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
LAB_0010b323:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010b323;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"DependencyErrorDialog");
      goto LAB_0010b38e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DependencyErrorDialog");
LAB_0010b38e:
  return &_get_class_namev()::_class_name_static;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, int, Vector2 const&,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>::get_object
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>
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
      goto LAB_0010b4bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b4bd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b4bd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, int>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int>::get_object
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int> *this)

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
      goto LAB_0010b5bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b5bd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b5bd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OrphanResourcesDialog, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void>::get_object
          (CallableCustomMethodPointer<OrphanResourcesDialog,void> *this)

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
      goto LAB_0010b6bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b6bd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b6bd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<DependencyEditor, void>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditor,void>::get_object
          (CallableCustomMethodPointer<DependencyEditor,void> *this)

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
      goto LAB_0010b7bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b7bd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b7bd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<OrphanResourcesDialog, void, Object*, int, int,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton> *this
          )

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
      goto LAB_0010b8bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b8bd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b8bd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<DependencyEditor, void, Object*, int, int, MouseButton>::get_object()
   const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton>::get_object
          (CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton> *this)

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
      goto LAB_0010b9bd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010b9bd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010b9bd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, Vector2 const&,
   MouseButton>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton>::get_object
          (CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton> *this
          )

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
      goto LAB_0010babd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010babd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010babd:
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}



/* CallableCustomMethodPointer<DependencyEditor, void, String const&>::get_object() const */

undefined8 __thiscall
CallableCustomMethodPointer<DependencyEditor,void,String_const&>::get_object
          (CallableCustomMethodPointer<DependencyEditor,void,String_const&> *this)

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
      goto LAB_0010bbbd;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] != 0) {
      uVar2 = *(undefined8 *)(*(long *)(this + 0x28) + 0x60);
      goto LAB_0010bbbd;
    }
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
  }
  uVar2 = 0;
LAB_0010bbbd:
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
  if ((code *)PTR__validate_property_00123038 == Control::_validate_property) {
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
  if ((code *)PTR__validate_property_00123038 == Control::_validate_property) {
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
    if ((code *)PTR__set_00123040 != CanvasItem::_set) {
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
    if ((code *)PTR__set_00123040 != CanvasItem::_set) {
      uVar1 = Control::_set(param_1,param_2);
      return uVar1;
    }
    uVar1 = 0;
  }
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010be88) */
/* VBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 VBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00123048 != CanvasItem::_get) &&
     (uVar1 = Control::_get(param_1,param_2), (char)uVar1 != '\0')) {
    return uVar1;
  }
  uVar1 = CanvasItem::_get(param_1,param_2);
  return uVar1;
}



/* WARNING: Removing unreachable block (ram,0x0010bef8) */
/* HBoxContainer::_getv(StringName const&, Variant&) const */

undefined8 HBoxContainer::_getv(StringName *param_1,Variant *param_2)

{
  undefined8 uVar1;
  
  if (((code *)PTR__get_00123048 != CanvasItem::_get) &&
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
    uVar1 = (uint)CONCAT71(0x11d4,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d5,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
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
    uVar1 = (uint)CONCAT71(0x11d4,in_RSI == &Container::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &BoxContainer::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &Control::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d5,in_RSI == &CanvasItem::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* DependencyEditorOwners::_validate_propertyv(PropertyInfo&) const */

void DependencyEditorOwners::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123050 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* DependencyErrorDialog::_validate_propertyv(PropertyInfo&) const */

void DependencyErrorDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123050 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* OrphanResourcesDialog::_validate_propertyv(PropertyInfo&) const */

void OrphanResourcesDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123050 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* DependencyRemoveDialog::_validate_propertyv(PropertyInfo&) const */

void DependencyRemoveDialog::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123050 == Viewport::_validate_property) {
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
  if ((code *)PTR__validate_property_00123050 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* DependencyEditor::_validate_propertyv(PropertyInfo&) const */

void DependencyEditor::_validate_propertyv(PropertyInfo *param_1)

{
  Node::_validate_property(param_1);
  Viewport::_validate_property(param_1);
  if ((code *)PTR__validate_property_00123050 == Viewport::_validate_property) {
    return;
  }
  Window::_validate_property(param_1);
  return;
}



/* DependencyRemoveDialog::is_class_ptr(void*) const */

uint DependencyRemoveDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11d4,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* OrphanResourcesDialog::is_class_ptr(void*) const */

uint OrphanResourcesDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11d4,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* DependencyErrorDialog::is_class_ptr(void*) const */

uint DependencyErrorDialog::is_class_ptr(void *param_1)

{
  uint uVar1;
  undefined4 in_EDX;
  undefined4 *in_RSI;
  
  uVar1 = 1;
  if (in_RSI != &get_class_ptr_static()::ptr) {
    uVar1 = (uint)CONCAT71(0x11d4,in_RSI == &AcceptDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &ConfirmationDialog::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &Window::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d4,in_RSI == &Viewport::get_class_ptr_static()::ptr) |
            (uint)CONCAT71(0x11d5,in_RSI == &Node::get_class_ptr_static()::ptr) |
            CONCAT31((int3)((uint)in_EDX >> 8),in_RSI == &Object::get_class_ptr_static()::ptr);
  }
  return uVar1;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Window::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c490;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c490:
  Control::~Control((Control *)this);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Window::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c4f0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c4f0:
  Control::~Control((Control *)this);
  return;
}



/* VBoxContainer::~VBoxContainer() */

void __thiscall VBoxContainer::~VBoxContainer(VBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Window::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c550;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c550:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* HBoxContainer::~HBoxContainer() */

void __thiscall HBoxContainer::~HBoxContainer(HBoxContainer *this)

{
  bool bVar1;
  
  bVar1 = StringName::configured != '\0';
  *(code **)this = Window::_notification;
  if (bVar1) {
    if (*(long *)(this + 0x9e8) != 0) {
      StringName::unref();
      if (StringName::configured == '\0') goto LAB_0010c5c0;
    }
    if (*(long *)(this + 0x9d0) != 0) {
      StringName::unref();
    }
  }
LAB_0010c5c0:
  Control::~Control((Control *)this);
  operator_delete(this,0xa10);
  return;
}



/* DependencyEditor::_notificationv(int, bool) */

void __thiscall DependencyEditor::_notificationv(DependencyEditor *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123058 != Window::_notification) {
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
  if ((code *)PTR__notification_00123058 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* DependencyEditorOwners::_notificationv(int, bool) */

void __thiscall
DependencyEditorOwners::_notificationv(DependencyEditorOwners *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123058 != Window::_notification) {
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
  if ((code *)PTR__notification_00123058 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* ConfirmationDialog::_notificationv(int, bool) */

void __thiscall
ConfirmationDialog::_notificationv(ConfirmationDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123058 != Window::_notification) {
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
  if ((code *)PTR__notification_00123058 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
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



/* OrphanResourcesDialog::_get_class_namev() const */

undefined8 * OrphanResourcesDialog::_get_class_namev(void)

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
LAB_0010c993:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010c993;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"OrphanResourcesDialog");
      goto LAB_0010c9fe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"OrphanResourcesDialog");
LAB_0010c9fe:
  return &_get_class_namev()::_class_name_static;
}



/* DependencyRemoveDialog::_get_class_namev() const */

undefined8 * DependencyRemoveDialog::_get_class_namev(void)

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
LAB_0010ca83:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ca83;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"DependencyRemoveDialog");
      goto LAB_0010caee;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DependencyRemoveDialog");
LAB_0010caee:
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
LAB_0010cb73:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cb73;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
      goto LAB_0010cbde;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"ConfirmationDialog");
LAB_0010cbde:
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
LAB_0010cc63:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cc63;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
      goto LAB_0010ccce;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"VBoxContainer");
LAB_0010ccce:
  return &_get_class_namev()::_class_name_static;
}



/* DependencyEditor::_get_class_namev() const */

undefined8 * DependencyEditor::_get_class_namev(void)

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
LAB_0010cd53:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cd53;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"DependencyEditor");
      goto LAB_0010cdbe;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DependencyEditor");
LAB_0010cdbe:
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
LAB_0010ce43:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010ce43;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
      goto LAB_0010ceae;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"HBoxContainer");
LAB_0010ceae:
  return &_get_class_namev()::_class_name_static;
}



/* DependencyEditorOwners::_get_class_namev() const */

undefined8 * DependencyEditorOwners::_get_class_namev(void)

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
LAB_0010cf33:
      return &_get_class_namev()::_class_name_static;
    }
    if (*(long *)(_get_class_namev()::_class_name_static + 0x10) != 0) {
      if (1 < *(uint *)(*(long *)(_get_class_namev()::_class_name_static + 0x10) + -8))
      goto LAB_0010cf33;
      StringName::assign_static_unique_class_name
                ((StringName *)&_get_class_namev()::_class_name_static,"DependencyEditorOwners");
      goto LAB_0010cf9e;
    }
  }
  StringName::assign_static_unique_class_name
            ((StringName *)&_get_class_namev()::_class_name_static,"DependencyEditorOwners");
LAB_0010cf9e:
  return &_get_class_namev()::_class_name_static;
}



/* DependencyRemoveDialog::_notificationv(int, bool) */

void __thiscall
DependencyRemoveDialog::_notificationv(DependencyRemoveDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123058 != Window::_notification) {
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
  if ((code *)PTR__notification_00123058 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* DependencyErrorDialog::_notificationv(int, bool) */

void __thiscall
DependencyErrorDialog::_notificationv(DependencyErrorDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123058 != Window::_notification) {
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
  if ((code *)PTR__notification_00123058 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
  return;
}



/* OrphanResourcesDialog::_notificationv(int, bool) */

void __thiscall
OrphanResourcesDialog::_notificationv(OrphanResourcesDialog *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123058 != Window::_notification) {
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
  if ((code *)PTR__notification_00123058 == Window::_notification) {
    return;
  }
  AcceptDialog::_notification(iVar1);
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



/* WARNING: Removing unreachable block (ram,0x0010d420) */
/* BoxContainer::_notificationv(int, bool) */

void __thiscall BoxContainer::_notificationv(BoxContainer *this,int param_1,bool param_2)

{
  int iVar1;
  
  iVar1 = (int)this;
  if (param_2) {
    if ((code *)PTR__notification_00123060 != Container::_notification) {
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
  if ((code *)PTR__notification_00123060 == Container::_notification) {
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



/* DependencyRemoveDialog::RemovedDependency::TEMPNAMEPLACEHOLDERVALUE(DependencyRemoveDialog::RemovedDependency
   const&) const */

undefined8 __thiscall
DependencyRemoveDialog::RemovedDependency::operator<
          (RemovedDependency *this,RemovedDependency *param_1)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (*(long *)(this + 0x18) == 0) {
    if (lVar1 == 0) goto LAB_0010d514;
    bVar6 = true;
    uVar4 = *(ulong *)(lVar1 + -8) & 0xffffffff;
    if ((int)*(ulong *)(lVar1 + -8) == 0) goto LAB_0010d514;
  }
  else {
    iVar2 = (int)*(undefined8 *)(*(long *)(this + 0x18) + -8);
    if (iVar2 == 0) {
      if ((lVar1 == 0) ||
         (uVar4 = *(ulong *)(lVar1 + -8) & 0xffffffff, (int)*(ulong *)(lVar1 + -8) == 0))
      goto LAB_0010d514;
      bVar6 = true;
    }
    else {
      if (lVar1 == 0) {
        if (iVar2 != 1) {
          return 1;
        }
        goto LAB_0010d514;
      }
      uVar4 = *(ulong *)(lVar1 + -8) & 0xffffffff;
      if ((int)*(ulong *)(lVar1 + -8) == 0) {
        if (iVar2 != 1) {
          return 1;
        }
        goto LAB_0010d514;
      }
      bVar6 = iVar2 == 1;
    }
  }
  bVar5 = (int)uVar4 == 1;
  if (bVar6 != bVar5) {
    return CONCAT71((int7)(uVar4 >> 8),bVar5);
  }
LAB_0010d514:
  uVar3 = String::operator<((String *)(this + 0x10),(String *)(param_1 + 0x10));
  return uVar3;
}



/* Callable create_custom_callable_function_pointer<DependencyEditorOwners,
   int>(DependencyEditorOwners*, char const*, void (DependencyEditorOwners::*)(int)) */

DependencyEditorOwners *
create_custom_callable_function_pointer<DependencyEditorOwners,int>
          (DependencyEditorOwners *param_1,char *param_2,_func_void_int *param_3)

{
  undefined8 uVar1;
  CallableCustom *this;
  undefined8 in_RCX;
  undefined8 in_R8;
  
  this = (CallableCustom *)operator_new(0x48,"");
  CallableCustom::CallableCustom(this);
  *(undefined **)(this + 0x20) = &_LC11;
  *(undefined1 (*) [16])(this + 0x30) = (undefined1  [16])0x0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR_hash_0011d050;
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



/* DependencyEditorOwners::~DependencyEditorOwners() */

void __thiscall DependencyEditorOwners::~DependencyEditorOwners(DependencyEditorOwners *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011c4c0;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdc0));
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* DependencyErrorDialog::~DependencyErrorDialog() */

void __thiscall DependencyErrorDialog::~DependencyErrorDialog(DependencyErrorDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011c9b0;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdb8));
  *(undefined ***)this = &PTR__initialize_classv_0011bfd0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0010e258) */
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



/* WARNING: Removing unreachable block (ram,0x0010e540) */
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



/* WARNING: Removing unreachable block (ram,0x0010e7f0) */
/* String vformat<Variant, String>(String const&, Variant const, String const) */

undefined8 *
vformat<Variant,String>(undefined8 *param_1,bool *param_2,Variant *param_3,String *param_4)

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



/* WARNING: Removing unreachable block (ram,0x0010ea68) */
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



/* CowData<char32_t>::_ref(CowData<char32_t> const&) */

void __thiscall CowData<char32_t>::_ref(CowData<char32_t> *this,CowData *param_1)

{
  if (*(long *)this != *(long *)param_1) {
    _ref(this,param_1);
    return;
  }
  return;
}



/* DependencyEditorOwners::get_class() const */

void DependencyEditorOwners::get_class(void)

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



/* DependencyEditor::get_class() const */

void DependencyEditor::get_class(void)

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



/* OrphanResourcesDialog::get_class() const */

void OrphanResourcesDialog::get_class(void)

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



/* DependencyErrorDialog::get_class() const */

void DependencyErrorDialog::get_class(void)

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



/* DependencyRemoveDialog::get_class() const */

void DependencyRemoveDialog::get_class(void)

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



/* DependencyRemoveDialog::RemovedDependency::RemovedDependency(DependencyRemoveDialog::RemovedDependency
   const&) */

void __thiscall
DependencyRemoveDialog::RemovedDependency::RemovedDependency
          (RemovedDependency *this,RemovedDependency *param_1)

{
  *(undefined8 *)this = 0;
  if (*(long *)param_1 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)this,(CowData *)param_1);
  }
  *(undefined8 *)(this + 8) = 0;
  if (*(long *)(param_1 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 8),(CowData *)(param_1 + 8));
  }
  *(undefined8 *)(this + 0x10) = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x10),(CowData *)(param_1 + 0x10));
  }
  *(undefined8 *)(this + 0x18) = 0;
  if (*(long *)(param_1 + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)(this + 0x18),(CowData *)(param_1 + 0x18));
    return;
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



/* CallableCustomMethodPointer<OrphanResourcesDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void>::call
          (CallableCustomMethodPointer<OrphanResourcesDialog,void> *this,Variant **param_1,
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
      goto LAB_0010f63f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f63f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f618. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f6f0;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f63f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC65,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f6f0:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<DependencyEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void>::call
          (CallableCustomMethodPointer<DependencyEditor,void> *this,Variant **param_1,int param_2,
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
      goto LAB_0010f84f;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar4[1] == 0) goto LAB_0010f84f;
    lVar1 = *(long *)(this + 0x28);
    UNRECOVERED_JUMPTABLE = *(code **)(this + 0x38);
    lVar2 = *(long *)(this + 0x40);
    if (param_2 == 0) {
      *(undefined4 *)param_4 = 0;
      if (((ulong)UNRECOVERED_JUMPTABLE & 1) != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *(long *)(lVar1 + lVar2) + -1);
      }
      if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010f828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),uVar5,UNRECOVERED_JUMPTABLE);
        return;
      }
      goto LAB_0010f900;
    }
    *(undefined4 *)param_4 = 3;
    *(undefined4 *)(param_4 + 8) = 0;
  }
  else {
    _err_print_error("get_instance","./core/object/object.h",0x418,
                     "Condition \"slot >= slot_max\" is true. Returning: nullptr",0,0);
LAB_0010f84f:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC65,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010f900:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int>::call
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int> *this,Variant **param_1,
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
      goto LAB_0010fac8;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar7[1] == 0) goto LAB_0010fac8;
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
        uVar3 = _LC66;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(*param_1);
        if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fa77. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),iVar5);
          return;
        }
        goto LAB_0010fb79;
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
LAB_0010fac8:
    local_40 = 0;
    String::parse_latin1((String *)&local_40,"\', can\'t call method.");
    uitos((ulong)local_50);
    operator+((char *)local_48,(String *)"Invalid Object id \'");
    String::operator+(local_38,(String *)local_48);
    _err_print_error(&_LC65,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010fb79:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<DependencyEditor, void, Object*, int, int, MouseButton>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton> *this,
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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
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
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_0010fde0;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_0010fde0;
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
        uVar3 = _LC67;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC68;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC69;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_0010fd68:
          uVar3 = _LC70;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_0010fd68;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x0010fdb9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0010feca;
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
LAB_0010fde0:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC65,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0010feca:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<OrphanResourcesDialog, void, Object*, int, int,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton>::call
          (CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton> *this
          ,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
  CowData<char32_t> local_60 [8];
  CowData<char32_t> local_58 [8];
  undefined8 local_50;
  String local_48 [8];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar10 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar10 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_48[0] = (String)0x0;
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
    puVar11 = (ulong *)((ulong)uVar10 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) != (*puVar11 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00110130;
    }
    ObjectDB::spin_lock._0_1_ = '\0';
    if (puVar11[1] == 0) goto LAB_00110130;
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
        uVar3 = _LC67;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        uVar7 = Variant::operator_cast_to_long(param_1[3]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
        uVar3 = _LC68;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar5 = Variant::operator_cast_to_int(param_1[2]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],2);
        uVar3 = _LC69;
        if (cVar4 == '\0') {
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        iVar6 = Variant::operator_cast_to_int(param_1[1]);
        cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,0x18);
        if (cVar4 == '\0') {
LAB_001100b8:
          uVar3 = _LC70;
          *(undefined4 *)param_4 = 2;
          *(undefined8 *)(param_4 + 4) = uVar3;
        }
        else {
          this_00 = *param_1;
          pOVar8 = Variant::operator_cast_to_Object_(this_00);
          pOVar9 = Variant::operator_cast_to_Object_(this_00);
          if ((pOVar9 == (Object *)0x0) && (pOVar8 != (Object *)0x0)) goto LAB_001100b8;
        }
        pOVar8 = Variant::operator_cast_to_Object_(*param_1);
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Could not recover jumptable at 0x00110109. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)((long *)(lVar1 + lVar2),pOVar8,iVar6,iVar5,uVar7 & 0xffffffff);
          return;
        }
        goto LAB_0011021a;
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
LAB_00110130:
    local_50 = 0;
    String::parse_latin1((String *)&local_50,"\', can\'t call method.");
    uitos((ulong)local_60);
    operator+((char *)local_58,(String *)"Invalid Object id \'");
    String::operator+(local_48,(String *)local_58);
    _err_print_error(&_LC65,"./core/object/callable_method_pointer.h",0x67,
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
LAB_0011021a:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, int, Vector2 const&,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>::call
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>
           *this,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong *puVar8;
  code *pcVar9;
  long in_FS_OFFSET;
  bool bVar10;
  CowData<char32_t> aCStack_58 [8];
  CowData<char32_t> local_50 [8];
  undefined8 local_48;
  String local_40 [8];
  undefined8 local_38;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar7 = (uint)*(ulong *)(this + 0x30) & 0xffffff;
  if (uVar7 < (uint)ObjectDB::slot_max) {
    while( true ) {
      local_40[0] = (String)0x0;
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
    puVar8 = (ulong *)((ulong)uVar7 * 0x10 + ObjectDB::object_slots);
    if ((*(ulong *)(this + 0x30) >> 0x18 & 0x7fffffffff) == (*puVar8 & 0x7fffffffff)) {
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] != 0) {
        lVar1 = *(long *)(this + 0x28);
        pcVar9 = *(code **)(this + 0x38);
        lVar2 = *(long *)(this + 0x40);
        if ((uint)param_2 < 4) {
          if (param_2 == 3) {
            *(undefined4 *)param_4 = 0;
            if (((ulong)pcVar9 & 1) != 0) {
              pcVar9 = *(code **)(pcVar9 + *(long *)(lVar1 + lVar2) + -1);
            }
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[2],2);
            uVar3 = _LC68;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            uVar6 = Variant::operator_cast_to_long(param_1[2]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)param_1[1],5);
            uVar3 = _LC71;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            local_38 = Variant::operator_cast_to_Vector2(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,2);
            uVar3 = _LC66;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            iVar5 = Variant::operator_cast_to_int(*param_1);
            (*pcVar9)((long *)(lVar1 + lVar2),iVar5,&local_38,uVar6 & 0xffffffff);
          }
          else {
            *(undefined4 *)param_4 = 4;
            *(undefined4 *)(param_4 + 8) = 3;
          }
        }
        else {
          *(undefined4 *)param_4 = 3;
          *(undefined4 *)(param_4 + 8) = 3;
        }
        goto LAB_001102e5;
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
  _err_print_error(&_LC65,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_40,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref(aCStack_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_001102e5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<DependencyEditorOwners, void, Vector2 const&,
   MouseButton>::call(Variant const**, int, Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton>::call
          (CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton> *this
          ,Variant **param_1,int param_2,Variant *param_3,CallError *param_4)

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
            uVar3 = _LC69;
            if (cVar4 == '\0') {
              *(undefined4 *)param_4 = 2;
              *(undefined8 *)(param_4 + 4) = uVar3;
            }
            uVar5 = Variant::operator_cast_to_long(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4 *)*param_1,5);
            uVar3 = _LC72;
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
        goto LAB_001105b5;
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
  _err_print_error(&_LC65,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_40,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_40);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref(aCStack_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
LAB_001105b5:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CallableCustomMethodPointer<DependencyEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void,String_const&>::call
          (CallableCustomMethodPointer<DependencyEditor,void,String_const&> *this,Variant **param_1,
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
            uVar3 = _LC73;
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
        goto LAB_0011084e;
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
  _err_print_error(&_LC65,"./core/object/callable_method_pointer.h",0x67,
                   "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.",
                   local_38,0,0);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_38);
  CowData<char32_t>::_unref(local_48);
  CowData<char32_t>::_unref(local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_40);
LAB_0011084e:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* DependencyErrorDialog::~DependencyErrorDialog() */

void __thiscall DependencyErrorDialog::~DependencyErrorDialog(DependencyErrorDialog *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011c9b0;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdb8));
  *(undefined ***)this = &PTR__initialize_classv_0011bfd0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xde0);
  return;
}



/* DependencyEditorOwners::~DependencyEditorOwners() */

void __thiscall DependencyEditorOwners::~DependencyEditorOwners(DependencyEditorOwners *this)

{
  *(undefined ***)this = &PTR__initialize_classv_0011c4c0;
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdc0));
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdc8);
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



/* OrphanResourcesDialog::~OrphanResourcesDialog() */

void __thiscall OrphanResourcesDialog::~OrphanResourcesDialog(OrphanResourcesDialog *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0xdd0);
  *(undefined ***)this = &PTR__initialize_classv_0011cc28;
  if (plVar3 != (long *)0x0) {
    do {
      this_00 = (CowData<char32_t> *)*plVar3;
      if (this_00 == (CowData<char32_t> *)0x0) {
        if ((int)plVar3[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00110c6d;
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
      plVar3 = *(long **)(this + 0xdd0);
    } while ((int)plVar3[2] != 0);
    Memory::free_static(plVar3,false);
  }
LAB_00110c6d:
  *(undefined ***)this = &PTR__initialize_classv_0011bfd0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* OrphanResourcesDialog::~OrphanResourcesDialog() */

void __thiscall OrphanResourcesDialog::~OrphanResourcesDialog(OrphanResourcesDialog *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0xdd0);
  *(undefined ***)this = &PTR__initialize_classv_0011cc28;
  if (plVar3 != (long *)0x0) {
    do {
      this_00 = (CowData<char32_t> *)*plVar3;
      if (this_00 == (CowData<char32_t> *)0x0) {
        if ((int)plVar3[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00110d91;
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
      plVar3 = *(long **)(this + 0xdd0);
    } while ((int)plVar3[2] != 0);
    Memory::free_static(plVar3,false);
  }
LAB_00110d91:
  *(undefined ***)this = &PTR__initialize_classv_0011bfd0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xdd8);
  return;
}



/* DependencyEditor::~DependencyEditor() */

void __thiscall DependencyEditor::~DependencyEditor(DependencyEditor *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0xdd8);
  *(undefined ***)this = &PTR__initialize_classv_0011c248;
  if (plVar3 != (long *)0x0) {
    do {
      this_00 = (CowData<char32_t> *)*plVar3;
      if (this_00 == (CowData<char32_t> *)0x0) {
        if ((int)plVar3[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00110ec1;
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
      plVar3 = *(long **)(this + 0xdd8);
    } while ((int)plVar3[2] != 0);
    Memory::free_static(plVar3,false);
  }
LAB_00110ec1:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdd0));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdc8));
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* DependencyEditor::~DependencyEditor() */

void __thiscall DependencyEditor::~DependencyEditor(DependencyEditor *this)

{
  CowData<char32_t> *this_00;
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = *(long **)(this + 0xdd8);
  *(undefined ***)this = &PTR__initialize_classv_0011c248;
  if (plVar3 != (long *)0x0) {
    do {
      this_00 = (CowData<char32_t> *)*plVar3;
      if (this_00 == (CowData<char32_t> *)0x0) {
        if ((int)plVar3[2] != 0) {
          _err_print_error("~List","./core/templates/list.h",0x316,
                           "Condition \"_data->size_cache\" is true.",0,0);
          goto LAB_00110ff1;
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
      plVar3 = *(long **)(this + 0xdd8);
    } while ((int)plVar3[2] != 0);
    Memory::free_static(plVar3,false);
  }
LAB_00110ff1:
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdd0));
  CowData<char32_t>::_unref((CowData<char32_t> *)(this + 0xdc8));
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xde0);
  return;
}



/* DependencyEditor::_initialize_classv() */

void DependencyEditor::_initialize_classv(void)

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
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      AcceptDialog::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xc;
    local_48 = "AcceptDialog";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "DependencyEditor";
    local_60 = 0;
    local_40 = 0x10;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyEditorOwners::_initialize_classv() */

void DependencyEditorOwners::_initialize_classv(void)

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
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      AcceptDialog::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xc;
    local_48 = "AcceptDialog";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "DependencyEditorOwners";
    local_60 = 0;
    local_40 = 0x16;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* ConfirmationDialog::_initialize_classv() */

void ConfirmationDialog::_initialize_classv(void)

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
    if (AcceptDialog::initialize_class()::initialized == '\0') {
      AcceptDialog::initialize_class();
    }
    local_58 = 0;
    local_40 = 0xc;
    local_48 = "AcceptDialog";
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "ConfirmationDialog";
    local_60 = 0;
    local_40 = 0x12;
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
    if ((code *)PTR__bind_methods_00123068 != AcceptDialog::_bind_methods) {
      ConfirmationDialog::_bind_methods();
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
              if ((code *)PTR__bind_methods_00123010 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00123070 !=
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
      if ((code *)PTR__bind_methods_00123078 != Container::_bind_methods) {
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



/* DependencyErrorDialog::_initialize_classv() */

void DependencyErrorDialog::_initialize_classv(void)

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
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      if (AcceptDialog::initialize_class()::initialized == '\0') {
        AcceptDialog::initialize_class();
      }
      local_58 = 0;
      local_40 = 0xc;
      local_48 = "AcceptDialog";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "ConfirmationDialog";
      local_60 = 0;
      local_40 = 0x12;
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
      if ((code *)PTR__bind_methods_00123068 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_48 = "ConfirmationDialog";
    local_58 = 0;
    local_40 = 0x12;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "DependencyErrorDialog";
    local_60 = 0;
    local_40 = 0x15;
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
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* OrphanResourcesDialog::_initialize_classv() */

void OrphanResourcesDialog::_initialize_classv(void)

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
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      if (AcceptDialog::initialize_class()::initialized == '\0') {
        AcceptDialog::initialize_class();
      }
      local_58 = 0;
      local_40 = 0xc;
      local_48 = "AcceptDialog";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "ConfirmationDialog";
      local_60 = 0;
      local_40 = 0x12;
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
      if ((code *)PTR__bind_methods_00123068 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_48 = "ConfirmationDialog";
    local_58 = 0;
    local_40 = 0x12;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "OrphanResourcesDialog";
    local_60 = 0;
    local_40 = 0x15;
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
    initialize_class()::initialized = '\x01';
  }
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
              if ((code *)PTR__bind_methods_00123010 != Node::_bind_methods) {
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
            if ((code *)PTR__bind_compatibility_methods_00123070 !=
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
      if ((code *)PTR__bind_methods_00123078 != Container::_bind_methods) {
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



/* SortArray<DependencyRemoveDialog::RemovedDependency,
   _DefaultComparator<DependencyRemoveDialog::RemovedDependency>, true>::adjust_heap(long, long,
   long, DependencyRemoveDialog::RemovedDependency, DependencyRemoveDialog::RemovedDependency*)
   const [clone .isra.0] */

void SortArray<DependencyRemoveDialog::RemovedDependency,_DefaultComparator<DependencyRemoveDialog::RemovedDependency>,true>
     ::adjust_heap(long param_1,long param_2,long param_3,CowData *param_4,long param_5)

{
  CowData *pCVar1;
  long lVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  CowData<char32_t> *pCVar7;
  CowData<char32_t> *pCVar8;
  long lVar9;
  long lVar10;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50 [2];
  long local_40;
  
  lVar9 = param_2 * 2 + 2;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  lVar10 = param_2;
  if (lVar9 < param_3) {
    do {
      lVar6 = lVar9 + -1;
      pCVar1 = (CowData *)(param_5 + (param_1 + lVar9) * 0x20);
      pCVar7 = (CowData<char32_t> *)((lVar6 + param_1) * 0x20 + param_5);
      lVar2 = *(long *)((CowData *)pCVar7 + 0x18);
      if ((*(long *)(pCVar1 + 0x18) == 0) ||
         (iVar5 = (int)*(undefined8 *)(*(long *)(pCVar1 + 0x18) + -8), iVar5 == 0)) {
        if ((lVar2 == 0) || ((iVar5 = (int)*(undefined8 *)(lVar2 + -8), iVar5 == 0 || (iVar5 == 1)))
           ) goto LAB_00112608;
LAB_001125e0:
        lVar6 = lVar9;
        lVar9 = lVar9 + 1;
        pCVar7 = (CowData<char32_t> *)pCVar1;
      }
      else if ((lVar2 == 0) || (iVar4 = (int)*(undefined8 *)(lVar2 + -8), iVar4 == 0)) {
        if (iVar5 == 1) goto LAB_00112608;
      }
      else {
        cVar3 = iVar4 == 1;
        if ((iVar5 == 1) == (bool)cVar3) {
LAB_00112608:
          cVar3 = String::operator<((String *)(pCVar1 + 0x10),(String *)((CowData *)pCVar7 + 0x10));
        }
        if (cVar3 == '\0') goto LAB_001125e0;
      }
      pCVar8 = (CowData<char32_t> *)(param_5 + (lVar10 + param_1) * 0x20);
      if (*(long *)pCVar8 != *(long *)pCVar7) {
        CowData<char32_t>::_ref(pCVar8,(CowData *)pCVar7);
      }
      if (*(long *)(pCVar8 + 8) != *(long *)((CowData *)pCVar7 + 8)) {
        CowData<char32_t>::_ref(pCVar8 + 8,(CowData *)pCVar7 + 8);
      }
      if (*(long *)(pCVar8 + 0x10) != *(long *)((CowData *)pCVar7 + 0x10)) {
        CowData<char32_t>::_ref(pCVar8 + 0x10,(CowData *)pCVar7 + 0x10);
      }
      if (*(long *)(pCVar8 + 0x18) != *(long *)((CowData *)pCVar7 + 0x18)) {
        CowData<char32_t>::_ref(pCVar8 + 0x18,(CowData *)pCVar7 + 0x18);
      }
      lVar9 = lVar9 * 2;
      lVar10 = lVar6;
    } while (lVar9 < param_3);
  }
  else {
    pCVar7 = (CowData<char32_t> *)(param_5 + (param_2 + param_1) * 0x20);
    lVar6 = param_2;
  }
  pCVar8 = pCVar7;
  if (param_3 == lVar9) {
    lVar6 = param_3 + -1;
    pCVar8 = (CowData<char32_t> *)((param_1 + lVar6) * 0x20 + param_5);
    if (*(long *)pCVar7 != *(long *)pCVar8) {
      CowData<char32_t>::_ref(pCVar7,(CowData *)pCVar8);
    }
    if (*(long *)(pCVar7 + 8) != *(long *)((CowData *)pCVar8 + 8)) {
      CowData<char32_t>::_ref(pCVar7 + 8,(CowData *)pCVar8 + 8);
    }
    if (*(long *)(pCVar7 + 0x10) != *(long *)((CowData *)pCVar8 + 0x10)) {
      CowData<char32_t>::_ref(pCVar7 + 0x10,(CowData *)pCVar8 + 0x10);
    }
    if (*(long *)(pCVar7 + 0x18) != *(long *)((CowData *)pCVar8 + 0x18)) {
      CowData<char32_t>::_ref(pCVar7 + 0x18,(CowData *)pCVar8 + 0x18);
    }
  }
  local_68 = 0;
  if (*(long *)param_4 != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,param_4);
  }
  local_60 = 0;
  if (*(long *)(param_4 + 8) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,param_4 + 8);
  }
  local_58 = 0;
  if (*(long *)(param_4 + 0x10) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,param_4 + 0x10);
  }
  local_50[0] = 0;
  if (*(long *)(param_4 + 0x18) != 0) {
    CowData<char32_t>::_ref((CowData<char32_t> *)local_50,param_4 + 0x18);
  }
  lVar9 = (lVar6 + -1) - (lVar6 + -1 >> 0x3f);
  do {
    if (lVar6 <= param_2) {
LAB_00112809:
      CowData<char32_t>::_ref(pCVar8,(CowData *)&local_68);
      CowData<char32_t>::_ref(pCVar8 + 8,(CowData *)&local_60);
      CowData<char32_t>::_ref(pCVar8 + 0x10,(CowData *)&local_58);
      CowData<char32_t>::_ref(pCVar8 + 0x18,(CowData *)local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    lVar10 = lVar9 >> 1;
    pCVar8 = (CowData<char32_t> *)(param_5 + (param_1 + lVar10) * 0x20);
    if ((*(long *)((CowData *)pCVar8 + 0x18) == 0) ||
       (iVar5 = (int)*(undefined8 *)(*(long *)((CowData *)pCVar8 + 0x18) + -8), iVar5 == 0)) {
      if ((local_50[0] != 0) &&
         ((iVar5 = (int)*(undefined8 *)(local_50[0] + -8), iVar5 != 0 && (iVar5 != 1)))) {
LAB_001127fe:
        pCVar8 = (CowData<char32_t> *)(param_5 + (param_1 + lVar6) * 0x20);
        goto LAB_00112809;
      }
LAB_00112890:
      cVar3 = String::operator<((String *)((CowData *)pCVar8 + 0x10),(String *)&local_58);
      if (cVar3 == '\0') {
        pCVar8 = (CowData<char32_t> *)(param_5 + (param_1 + lVar6) * 0x20);
        goto LAB_00112809;
      }
    }
    else if ((local_50[0] == 0) || (iVar4 = (int)*(undefined8 *)(local_50[0] + -8), iVar4 == 0)) {
      if (iVar5 == 1) goto LAB_00112890;
    }
    else {
      if ((iVar4 == 1) == (iVar5 == 1)) goto LAB_00112890;
      if (iVar4 != 1) goto LAB_001127fe;
    }
    pCVar7 = (CowData<char32_t> *)((lVar6 + param_1) * 0x20 + param_5);
    if (*(long *)pCVar7 != *(long *)pCVar8) {
      CowData<char32_t>::_ref(pCVar7,(CowData *)pCVar8);
    }
    if (*(long *)(pCVar7 + 8) != *(long *)((CowData *)pCVar8 + 8)) {
      CowData<char32_t>::_ref(pCVar7 + 8,(CowData *)pCVar8 + 8);
    }
    if (*(long *)(pCVar7 + 0x10) != *(long *)((CowData *)pCVar8 + 0x10)) {
      CowData<char32_t>::_ref(pCVar7 + 0x10,(CowData *)pCVar8 + 0x10);
    }
    if (*(long *)(pCVar7 + 0x18) != *(long *)((CowData *)pCVar8 + 0x18)) {
      CowData<char32_t>::_ref(pCVar7 + 0x18,(CowData *)pCVar8 + 0x18);
    }
    lVar9 = (lVar10 + -1) - (lVar10 + -1 >> 0x3f);
    lVar6 = lVar10;
  } while( true );
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
    if (cVar5 != '\0') goto LAB_00112a5b;
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
      if (cVar5 != '\0') goto LAB_00112a5b;
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar6 = String::operator==(param_1,"Object");
      return uVar6;
    }
  }
  else {
LAB_00112a5b:
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
    if (cVar5 != '\0') goto LAB_00112c5b;
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
      if (cVar5 != '\0') goto LAB_00112c5b;
    }
    cVar5 = String::operator==(param_1,"Viewport");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_00112d5e;
    }
  }
LAB_00112c5b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00112d5e:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* AcceptDialog::is_class(String const&) const */

undefined8 __thiscall AcceptDialog::is_class(AcceptDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00112e6b;
  }
  cVar4 = String::operator==(param_1,"AcceptDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = Window::is_class((Window *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00112e6b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyEditor::is_class(String const&) const */

undefined8 __thiscall DependencyEditor::is_class(DependencyEditor *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_00112fbb;
  }
  cVar4 = String::operator==(param_1,"DependencyEditor");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00112fbb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyEditorOwners::is_class(String const&) const */

undefined8 __thiscall DependencyEditorOwners::is_class(DependencyEditorOwners *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011310b;
  }
  cVar4 = String::operator==(param_1,"DependencyEditorOwners");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011310b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
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
    if (cVar4 != '\0') goto LAB_0011325b;
  }
  cVar4 = String::operator==(param_1,"ConfirmationDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = AcceptDialog::is_class((AcceptDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011325b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* OrphanResourcesDialog::is_class(String const&) const */

undefined8 __thiscall OrphanResourcesDialog::is_class(OrphanResourcesDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001133ab;
  }
  cVar4 = String::operator==(param_1,"OrphanResourcesDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001133ab:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyErrorDialog::is_class(String const&) const */

undefined8 __thiscall DependencyErrorDialog::is_class(DependencyErrorDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_001134fb;
  }
  cVar4 = String::operator==(param_1,"DependencyErrorDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_001134fb:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* DependencyRemoveDialog::is_class(String const&) const */

undefined8 __thiscall DependencyRemoveDialog::is_class(DependencyRemoveDialog *this,String *param_1)

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
    if (cVar4 != '\0') goto LAB_0011364b;
  }
  cVar4 = String::operator==(param_1,"DependencyRemoveDialog");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = ConfirmationDialog::is_class((ConfirmationDialog *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_0011364b:
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
    if (cVar5 != '\0') goto LAB_0011379b;
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
      if (cVar5 != '\0') goto LAB_0011379b;
    }
    cVar5 = String::operator==(param_1,"CanvasItem");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Node::is_class((Node *)this,param_1);
        return uVar6;
      }
      goto LAB_0011389e;
    }
  }
LAB_0011379b:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_0011389e:
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
    if (cVar5 != '\0') goto LAB_001139ab;
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
      if (cVar5 != '\0') goto LAB_001139ab;
    }
    cVar5 = String::operator==(param_1,"Container");
    if (cVar5 == '\0') {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        uVar6 = Control::is_class((Control *)this,param_1);
        return uVar6;
      }
      goto LAB_00113aae;
    }
  }
LAB_001139ab:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return 1;
  }
LAB_00113aae:
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
    if (cVar4 != '\0') goto LAB_00113bbb;
  }
  cVar4 = String::operator==(param_1,"VBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00113bbb:
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
    if (cVar4 != '\0') goto LAB_00113d0b;
  }
  cVar4 = String::operator==(param_1,"HBoxContainer");
  if (cVar4 == '\0') {
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      uVar5 = BoxContainer::is_class((BoxContainer *)this,param_1);
      return uVar5;
    }
  }
  else {
LAB_00113d0b:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SortArray<DependencyRemoveDialog::RemovedDependency,
   _DefaultComparator<DependencyRemoveDialog::RemovedDependency>, true>::introsort(long, long,
   DependencyRemoveDialog::RemovedDependency*, long) const [clone .isra.0] */

void SortArray<DependencyRemoveDialog::RemovedDependency,_DefaultComparator<DependencyRemoveDialog::RemovedDependency>,true>
     ::introsort(long param_1,long param_2,RemovedDependency *param_3,long param_4)

{
  CowData *pCVar1;
  RemovedDependency *pRVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  long lVar10;
  RemovedDependency *pRVar11;
  RemovedDependency *this;
  RemovedDependency *pRVar12;
  long lVar13;
  CowData<char32_t> *this_00;
  CowData<char32_t> *this_01;
  long lVar14;
  long in_FS_OFFSET;
  long local_e8;
  CowData<char32_t> *local_d8;
  long local_c8;
  CowData<char32_t> *local_b8;
  CowData<char32_t> *local_b0;
  long local_a8;
  CowData<char32_t> *local_a0;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 auStack_50 [2];
  long local_40;
  
  lVar13 = param_2 - param_1;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (0x10 < lVar13) {
    local_e8 = param_2;
    if (param_4 != 0) {
      pRVar11 = param_3 + param_1 * 0x20;
      local_c8 = param_2;
      local_a8 = param_4;
LAB_00113e57:
      local_a8 = local_a8 + -1;
      this = param_3 + ((lVar13 >> 1) + param_1) * 0x20;
      pRVar2 = param_3 + local_c8 * 0x20 + -0x20;
      cVar7 = DependencyRemoveDialog::RemovedDependency::operator<(pRVar11,this);
      if (cVar7 == '\0') {
        cVar7 = DependencyRemoveDialog::RemovedDependency::operator<(pRVar11,pRVar2);
        pRVar12 = pRVar11;
        if (cVar7 != '\0') goto LAB_00113ebd;
        cVar7 = DependencyRemoveDialog::RemovedDependency::operator<(this,pRVar2);
      }
      else {
        cVar7 = DependencyRemoveDialog::RemovedDependency::operator<(this,pRVar2);
        pRVar12 = this;
        if (cVar7 != '\0') goto LAB_00113ebd;
        cVar7 = DependencyRemoveDialog::RemovedDependency::operator<(pRVar11,pRVar2);
        this = pRVar11;
      }
      pRVar12 = this;
      if (cVar7 != '\0') {
        pRVar12 = pRVar2;
      }
LAB_00113ebd:
      local_88 = 0;
      if (*(long *)pRVar12 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_88,(CowData *)pRVar12);
      }
      local_80 = 0;
      if (*(long *)((CowData *)pRVar12 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_80,(CowData *)pRVar12 + 8);
      }
      local_78 = 0;
      if (*(long *)((CowData *)pRVar12 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_78,(CowData *)pRVar12 + 0x10);
      }
      local_70 = 0;
      lVar13 = *(long *)((CowData *)pRVar12 + 0x18);
      local_e8 = param_1;
      this_01 = (CowData<char32_t> *)(param_3 + param_1 * 0x20 + 0x10);
      lVar14 = local_c8;
      if (*(long *)((CowData *)pRVar12 + 0x18) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)pRVar12 + 0x18);
        lVar13 = local_70;
      }
LAB_00113f89:
      if ((*(long *)(this_01 + 8) == 0) ||
         (iVar8 = (int)*(undefined8 *)(*(long *)(this_01 + 8) + -8), iVar8 == 0)) {
        if ((lVar13 != 0) &&
           ((iVar8 = (int)*(undefined8 *)(lVar13 + -8), iVar8 != 0 && (iVar8 != 1))))
        goto LAB_00113fbc;
LAB_001142b0:
        cVar7 = String::operator<((String *)this_01,(String *)&local_78);
        lVar13 = local_70;
        if (cVar7 == '\0') goto LAB_00113fbc;
      }
      else if ((lVar13 == 0) || (iVar9 = (int)*(undefined8 *)(lVar13 + -8), iVar9 == 0)) {
        if (iVar8 == 1) goto LAB_001142b0;
      }
      else {
        if ((iVar8 == 1) == (iVar9 == 1)) goto LAB_001142b0;
        if (iVar9 != 1) goto LAB_00113fbc;
      }
      if (local_c8 + -1 == local_e8) {
        _err_print_error("partitioner","./core/templates/sort_array.h",0xb2,
                         "bad comparison function; sorting will be broken",0,0);
        lVar13 = local_70;
LAB_00113fbc:
        lVar14 = lVar14 + -1;
        this_00 = (CowData<char32_t> *)(param_3 + lVar14 * 0x20);
        do {
          lVar3 = *(long *)(this_00 + 0x18);
          if ((lVar13 == 0) || (iVar8 = (int)*(undefined8 *)(lVar13 + -8), iVar8 == 0)) {
            if ((lVar3 != 0) &&
               ((iVar8 = (int)*(undefined8 *)(lVar3 + -8), iVar8 != 0 && (iVar8 != 1))))
            goto joined_r0x0011403e;
LAB_001141f0:
            cVar7 = String::operator<((String *)&local_78,(String *)(this_00 + 0x10));
            lVar13 = local_70;
            if (cVar7 == '\0') goto joined_r0x0011403e;
          }
          else {
            lVar13 = local_70;
            if ((lVar3 == 0) || (iVar9 = (int)*(undefined8 *)(lVar3 + -8), iVar9 == 0)) {
              if (iVar8 == 1) goto LAB_001141f0;
            }
            else {
              if ((iVar9 == 1) == (iVar8 == 1)) goto LAB_001141f0;
              if (iVar9 != 1) goto joined_r0x0011403e;
            }
          }
          local_70 = lVar13;
          if (param_1 == lVar14) goto LAB_00114218;
          this_00 = this_00 + -0x20;
          lVar14 = lVar14 + -1;
        } while( true );
      }
      goto LAB_00113f7c;
    }
LAB_00114389:
    local_a0 = (CowData<char32_t> *)&local_70;
    local_b0 = (CowData<char32_t> *)&local_80;
    local_b8 = (CowData<char32_t> *)&local_88;
    local_d8 = (CowData<char32_t> *)&local_78;
    lVar14 = lVar13 + -2 >> 1;
    pRVar11 = param_3 + (lVar14 + param_1) * 0x20;
    while( true ) {
      local_68 = 0;
      if (*(long *)pRVar11 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pRVar11);
      }
      uStack_60 = 0;
      if (*(long *)((CowData *)pRVar11 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&uStack_60,(CowData *)pRVar11 + 8);
      }
      local_58 = 0;
      if (*(long *)((CowData *)pRVar11 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pRVar11 + 0x10);
      }
      auStack_50[0] = 0;
      if (*(long *)((CowData *)pRVar11 + 0x18) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)auStack_50,(CowData *)pRVar11 + 0x18);
      }
      pRVar11 = (RemovedDependency *)((CowData *)pRVar11 + -0x20);
      adjust_heap(param_1,lVar14,lVar13,(CowData<char32_t> *)&local_68,param_3);
      CowData<char32_t>::_unref((CowData<char32_t> *)auStack_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if (lVar14 == 0) break;
      lVar14 = lVar14 + -1;
    }
    pCVar1 = (CowData *)(param_3 + param_1 * 0x20);
    pRVar11 = param_3 + local_e8 * 0x20 + -0x20;
    lVar13 = (local_e8 + -1) - param_1;
    do {
      local_88 = 0;
      if (*(long *)pRVar11 != 0) {
        CowData<char32_t>::_ref(local_b8,(CowData *)pRVar11);
      }
      local_80 = 0;
      if (*(long *)((CowData<char32_t> *)pRVar11 + 8) != 0) {
        CowData<char32_t>::_ref(local_b0,(CowData *)((CowData<char32_t> *)pRVar11 + 8));
      }
      local_78 = 0;
      if (*(long *)((CowData<char32_t> *)pRVar11 + 0x10) != 0) {
        CowData<char32_t>::_ref(local_d8,(CowData *)((CowData<char32_t> *)pRVar11 + 0x10));
      }
      local_70 = 0;
      lVar14 = *(long *)((CowData<char32_t> *)pRVar11 + 0x18);
      if (*(long *)((CowData<char32_t> *)pRVar11 + 0x18) != 0) {
        CowData<char32_t>::_ref(local_a0,(CowData *)((CowData<char32_t> *)pRVar11 + 0x18));
        lVar14 = local_70;
      }
      if (*(long *)pRVar11 != *(long *)pCVar1) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pRVar11,pCVar1);
      }
      if (*(long *)((CowData<char32_t> *)pRVar11 + 8) != *(long *)(pCVar1 + 8)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pRVar11 + 8,pCVar1 + 8);
      }
      if (*(long *)((CowData<char32_t> *)pRVar11 + 0x10) != *(long *)(pCVar1 + 0x10)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pRVar11 + 0x10,pCVar1 + 0x10);
      }
      if (*(long *)((CowData<char32_t> *)pRVar11 + 0x18) != *(long *)(pCVar1 + 0x18)) {
        CowData<char32_t>::_ref((CowData<char32_t> *)pRVar11 + 0x18,pCVar1 + 0x18);
      }
      local_68 = 0;
      if (local_88 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)local_b8);
      }
      uStack_60 = 0;
      if (local_80 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&uStack_60,(CowData *)local_b0);
      }
      local_58 = 0;
      if (local_78 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)local_d8);
      }
      auStack_50[0] = 0;
      if (lVar14 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)auStack_50,(CowData *)local_a0);
      }
      pRVar11 = (RemovedDependency *)((CowData<char32_t> *)pRVar11 + -0x20);
      adjust_heap(param_1,0,lVar13,(CowData<char32_t> *)&local_68,param_3);
      CowData<char32_t>::_unref((CowData<char32_t> *)auStack_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      CowData<char32_t>::_unref(local_a0);
      CowData<char32_t>::_unref(local_d8);
      CowData<char32_t>::_unref(local_b0);
      CowData<char32_t>::_unref(local_b8);
      bVar6 = 1 < lVar13;
      lVar13 = lVar13 + -1;
    } while (bVar6);
  }
LAB_001146d8:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_00114218:
  _err_print_error("partitioner","./core/templates/sort_array.h",0xb9,
                   "bad comparison function; sorting will be broken",0,0);
joined_r0x0011403e:
  if (lVar14 <= local_e8) goto LAB_00114246;
  lVar13 = *(long *)(this_01 + -8);
  lVar4 = *(long *)(this_01 + -0x10);
  lVar3 = *(long *)(this_01 + 8);
  local_68 = *(undefined8 *)(this_01 + -0x10);
  uStack_60 = *(undefined8 *)(this_01 + -8);
  *(undefined1 (*) [16])(this_01 + -0x10) = (undefined1  [16])0x0;
  local_58 = *(undefined8 *)this_01;
  auStack_50[0] = *(undefined8 *)(this_01 + 8);
  lVar5 = *(long *)this_01;
  *(undefined1 (*) [16])this_01 = (undefined1  [16])0x0;
  lVar10 = *(long *)this_00;
  if (lVar10 != 0) {
    CowData<char32_t>::_unref(this_01 + -0x10);
    *(undefined8 *)(this_01 + -0x10) = *(undefined8 *)this_00;
    *(undefined8 *)this_00 = 0;
    lVar10 = *(long *)(this_01 + -8);
  }
  if (lVar10 != *(long *)(this_00 + 8)) {
    CowData<char32_t>::_unref(this_01 + -8);
    *(undefined8 *)(this_01 + -8) = *(undefined8 *)(this_00 + 8);
    *(undefined8 *)(this_00 + 8) = 0;
  }
  if (*(long *)this_01 != *(long *)(this_00 + 0x10)) {
    CowData<char32_t>::_unref(this_01);
    *(undefined8 *)this_01 = *(undefined8 *)(this_00 + 0x10);
    *(undefined8 *)(this_00 + 0x10) = 0;
  }
  if (*(long *)(this_01 + 8) != *(long *)(this_00 + 0x18)) {
    CowData<char32_t>::_unref(this_01 + 8);
    *(undefined8 *)(this_01 + 8) = *(undefined8 *)(this_00 + 0x18);
    *(undefined8 *)(this_00 + 0x18) = 0;
  }
  if (*(long *)this_00 != lVar4) {
    CowData<char32_t>::_unref(this_00);
    local_68 = 0;
    *(long *)this_00 = lVar4;
  }
  if (*(long *)(this_00 + 8) != lVar13) {
    CowData<char32_t>::_unref(this_00 + 8);
    uStack_60 = 0;
    *(long *)(this_00 + 8) = lVar13;
  }
  if (*(long *)(this_00 + 0x10) != lVar5) {
    CowData<char32_t>::_unref(this_00 + 0x10);
    *(long *)(this_00 + 0x10) = lVar5;
    local_58 = 0;
  }
  if (lVar3 != *(long *)(this_00 + 0x18)) {
    CowData<char32_t>::_unref(this_00 + 0x18);
    *(long *)(this_00 + 0x18) = lVar3;
    auStack_50[0] = 0;
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)auStack_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&uStack_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
LAB_00113f7c:
  lVar13 = local_70;
  local_e8 = local_e8 + 1;
  this_01 = this_01 + 0x20;
  goto LAB_00113f89;
LAB_00114246:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  introsort(local_e8,local_c8,param_3,local_a8);
  lVar13 = local_e8 - param_1;
  if (lVar13 < 0x11) goto LAB_001146d8;
  local_c8 = local_e8;
  if (local_a8 == 0) goto LAB_00114389;
  goto LAB_00113e57;
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
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0x38)];
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
        if (pvVar3 == (void *)0x0) goto LAB_0011482f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x20),false);
  }
LAB_0011482f:
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
  local_78 = &_LC100;
  local_88 = 0;
  local_90 = 0;
  local_70 = 4;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = &_LC100;
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
      goto LAB_001149ec;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001149ec:
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
      goto LAB_00114c51;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114c51:
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
      goto LAB_00114f01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00114f01:
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
  if ((code *)PTR__get_property_list_00123080 != Object::_get_property_list) {
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
      goto LAB_001151d1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001151d1:
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
  if ((code *)PTR__get_property_list_00123088 != CanvasItem::_get_property_list) {
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
      goto LAB_001154a1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001154a1:
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
      goto LAB_00115751;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115751:
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
      goto LAB_00115a01;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115a01:
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
      goto LAB_00115cb1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115cb1:
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
      goto LAB_00115f61;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00115f61:
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
  if ((code *)PTR__get_property_list_00123090 != Object::_get_property_list) {
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
      goto LAB_00116231;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116231:
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



/* DependencyEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
DependencyEditor::_get_property_listv(DependencyEditor *this,List *param_1,bool param_2)

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
  local_78 = "DependencyEditor";
  local_70 = 0x10;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DependencyEditor";
  local_98 = 0;
  local_70 = 0x10;
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
      goto LAB_001164e1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_001164e1:
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
  StringName::StringName((StringName *)&local_78,"DependencyEditor",false);
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



/* DependencyEditorOwners::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
DependencyEditorOwners::_get_property_listv(DependencyEditorOwners *this,List *param_1,bool param_2)

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
  local_78 = "DependencyEditorOwners";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DependencyEditorOwners";
  local_98 = 0;
  local_70 = 0x16;
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
      goto LAB_00116791;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116791:
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
  StringName::StringName((StringName *)&local_78,"DependencyEditorOwners",false);
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
      goto LAB_00116a41;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116a41:
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



/* OrphanResourcesDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
OrphanResourcesDialog::_get_property_listv(OrphanResourcesDialog *this,List *param_1,bool param_2)

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
  local_78 = "OrphanResourcesDialog";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "OrphanResourcesDialog";
  local_98 = 0;
  local_70 = 0x15;
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
      goto LAB_00116cf1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116cf1:
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
  StringName::StringName((StringName *)&local_78,"OrphanResourcesDialog",false);
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



/* DependencyErrorDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
DependencyErrorDialog::_get_property_listv(DependencyErrorDialog *this,List *param_1,bool param_2)

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
  local_78 = "DependencyErrorDialog";
  local_70 = 0x15;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DependencyErrorDialog";
  local_98 = 0;
  local_70 = 0x15;
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
      goto LAB_00116fa1;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00116fa1:
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
  StringName::StringName((StringName *)&local_78,"DependencyErrorDialog",false);
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



/* DependencyRemoveDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */

void __thiscall
DependencyRemoveDialog::_get_property_listv(DependencyRemoveDialog *this,List *param_1,bool param_2)

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
  local_78 = "DependencyRemoveDialog";
  local_70 = 0x16;
  String::parse_latin1((StrRange *)&local_90);
  local_78 = "DependencyRemoveDialog";
  local_98 = 0;
  local_70 = 0x16;
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
      goto LAB_00117251;
    }
  }
  local_50 = 0x80;
  StringName::operator=((StringName *)&local_68,(StringName *)&local_88);
LAB_00117251:
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
  StringName::StringName((StringName *)&local_78,"DependencyRemoveDialog",false);
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



/* DependencyRemoveDialog::_bind_methods() [clone .cold] */

void DependencyRemoveDialog::_bind_methods(void)

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



/* CowData<DependencyRemoveDialog::RemovedDependency>::_copy_on_write() [clone .isra.0] [clone
   .cold] */

void CowData<DependencyRemoveDialog::RemovedDependency>::_copy_on_write(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}



/* DependencyRemoveDialog::_initialize_classv() */

void DependencyRemoveDialog::_initialize_classv(void)

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
    if (ConfirmationDialog::initialize_class()::initialized == '\0') {
      if (AcceptDialog::initialize_class()::initialized == '\0') {
        AcceptDialog::initialize_class();
      }
      local_58 = 0;
      local_40 = 0xc;
      local_48 = "AcceptDialog";
      String::parse_latin1((StrRange *)&local_58);
      StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
      local_48 = "ConfirmationDialog";
      local_60 = 0;
      local_40 = 0x12;
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
      if ((code *)PTR__bind_methods_00123068 != AcceptDialog::_bind_methods) {
        ConfirmationDialog::_bind_methods();
      }
      ConfirmationDialog::initialize_class()::initialized = '\x01';
    }
    local_48 = "ConfirmationDialog";
    local_58 = 0;
    local_40 = 0x12;
    String::parse_latin1((StrRange *)&local_58);
    StringName::StringName((StringName *)&local_50,(String *)&local_58,false);
    local_48 = "DependencyRemoveDialog";
    local_60 = 0;
    local_40 = 0x16;
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
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
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



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_lookup_pos(String const&, unsigned
   int&) const */

undefined8 __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::_lookup_pos(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
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
    uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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



/* HashMap<String, HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > > > >::_lookup_pos(String const&,
   unsigned int&) const */

undefined8 __thiscall
HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>
::_lookup_pos(HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>
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
    uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
    uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
    uVar31 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
      if ((float)uVar31 * __LC122 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar31 = *(uint *)(this + 0x28);
        if (uVar31 == 0x1c) {
          pauVar26 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00118050;
        }
        uVar24 = (ulong)(uVar31 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar23 = (&hash_table_size_primes)[uVar31];
        if (uVar31 + 1 < 2) {
          uVar24 = 2;
        }
        uVar31 = (&hash_table_size_primes)[uVar24];
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
              uVar35 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
      uVar23 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
LAB_00118050:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar26[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* HashMap<String, int, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, int> > >::_lookup_pos(String const&, unsigned int&)
   const */

undefined8 __thiscall
HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
::_lookup_pos(HashMap<String,int,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,int>>>
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
    uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
  long local_58;
  undefined4 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_70 = 0;
  cVar21 = _lookup_pos(this,param_1,&local_70);
  if (cVar21 == '\0') {
    uVar31 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
      if ((float)uVar31 * __LC122 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar31 = *(uint *)(this + 0x28);
        if (uVar31 == 0x1c) {
          pauVar26 = (undefined1 (*) [16])0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_00118787;
        }
        uVar24 = (ulong)(uVar31 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar23 = (&hash_table_size_primes)[uVar31];
        if (uVar31 + 1 < 2) {
          uVar24 = 2;
        }
        uVar31 = (&hash_table_size_primes)[uVar24];
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
              uVar35 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
      local_58 = 0;
      local_68 = (undefined1  [16])0x0;
      if (*(long *)param_1 == 0) {
        local_50 = 0;
        pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
        *(undefined8 *)pauVar26[1] = 0;
        *pauVar26 = (undefined1  [16])0x0;
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
        lVar3 = local_58;
        uVar25 = local_68._0_8_;
        uVar33 = local_68._8_8_;
        local_50 = 0;
        pauVar26 = (undefined1 (*) [16])operator_new(0x20,"");
        *(undefined8 *)pauVar26[1] = 0;
        *(undefined8 *)*pauVar26 = uVar25;
        *(undefined8 *)(*pauVar26 + 8) = uVar33;
        if (lVar3 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar26 + 1),(CowData *)&local_58);
        }
      }
      *(undefined4 *)(pauVar26[1] + 8) = 0;
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
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
      uVar23 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
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
      *(undefined4 *)(pauVar26[1] + 8) = 0;
    }
  }
  else {
    pauVar26 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_70 * 8);
  }
LAB_00118787:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pauVar26[1] + 8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
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



/* DependencyRemoveDialog::~DependencyRemoveDialog() */

void __thiscall DependencyRemoveDialog::~DependencyRemoveDialog(DependencyRemoveDialog *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0011c738;
  CowData<String>::_unref((CowData<String> *)(this + 0xe20));
  CowData<String>::_unref((CowData<String> *)(this + 0xe10));
  pvVar3 = *(void **)(this + 0xde0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xe04) != 0) {
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xe00)];
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xe04) = 0;
        *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xde8) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0xde8) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0xde0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xe04) = 0;
        *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00118ab2;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xde8),false);
  }
LAB_00118ab2:
  *(undefined ***)this = &PTR__initialize_classv_0011bfd0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  return;
}



/* Vector<String>::reverse() */

void __thiscall Vector<String>::reverse(Vector<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)(this + 8);
  if (lVar3 == 0) {
    return;
  }
  lVar5 = 0;
  do {
    if (*(long *)(lVar3 + -8) / 2 <= lVar5) {
      return;
    }
    CowData<String>::_copy_on_write((CowData<String> *)(this + 8));
    lVar3 = *(long *)(this + 8);
    if (lVar3 == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = *(long *)(lVar3 + -8);
    }
    plVar2 = (long *)(lVar3 + -8 + (lVar4 - lVar5) * 8);
    plVar1 = (long *)(lVar3 + lVar5 * 8);
    lVar4 = *plVar1;
    *plVar1 = 0;
    if (*plVar2 != 0) {
      *plVar1 = *plVar2;
      *plVar2 = 0;
    }
    if (lVar4 != 0) {
      *plVar2 = lVar4;
    }
    lVar5 = lVar5 + 1;
  } while (lVar3 != 0);
  return;
}



/* DependencyRemoveDialog::~DependencyRemoveDialog() */

void __thiscall DependencyRemoveDialog::~DependencyRemoveDialog(DependencyRemoveDialog *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0011c738;
  CowData<String>::_unref((CowData<String> *)(this + 0xe20));
  CowData<String>::_unref((CowData<String> *)(this + 0xe10));
  pvVar3 = *(void **)(this + 0xde0);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0xe04) != 0) {
      uVar1 = (&hash_table_size_primes)[*(uint *)(this + 0xe00)];
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0xe04) = 0;
        *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0xde8) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0xde8) + lVar2) = 0;
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar3 + 0x10));
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0xde0);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0xe04) = 0;
        *(undefined1 (*) [16])(this + 0xdf0) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00118c82;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0xde8),false);
  }
LAB_00118c82:
  *(undefined ***)this = &PTR__initialize_classv_0011bfd0;
  AcceptDialog::~AcceptDialog((AcceptDialog *)this);
  operator_delete(this,0xe28);
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
LAB_00119060:
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
  if (lVar9 == 0) goto LAB_00119060;
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
    goto LAB_001190b6;
  }
  if (lVar9 == lVar5) {
LAB_00118fdb:
    puVar7 = *(undefined8 **)this;
    if (puVar7 == (undefined8 *)0x0) {
LAB_001190b6:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar4 = puVar7[-1];
    if (param_1 <= lVar4) goto LAB_00118f4f;
  }
  else {
    if (lVar4 != 0) {
      uVar3 = _realloc(this,lVar9);
      if ((int)uVar3 != 0) {
        return uVar3;
      }
      goto LAB_00118fdb;
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
LAB_00118f4f:
  puVar7[-1] = param_1;
  return 0;
}



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::_resize_and_rehash(unsigned int) */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::_resize_and_rehash
          (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
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
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::operator[](String const&) */

undefined1 * __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator[](HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
             *this,String *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
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
  undefined8 uVar13;
  char cVar14;
  uint uVar15;
  uint uVar16;
  undefined1 (*pauVar17) [16];
  undefined8 uVar18;
  void *__s_00;
  ulong uVar19;
  int iVar20;
  long lVar21;
  uint uVar22;
  uint uVar23;
  ulong uVar24;
  uint *puVar25;
  ulong uVar26;
  undefined1 (*pauVar27) [16];
  undefined1 (*pauVar28) [16];
  long in_FS_OFFSET;
  uint local_78;
  uint local_74;
  undefined8 local_70;
  undefined1 local_68 [16];
  long local_58;
  undefined8 local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_78 = 0;
  cVar14 = _lookup_pos(this,param_1,&local_78);
  if (cVar14 != '\0') {
    pauVar17 = *(undefined1 (**) [16])(*(long *)(this + 8) + (ulong)local_78 * 8);
    goto LAB_0011956f;
  }
  local_70 = 0;
  uVar16 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
  if (*(long *)(this + 8) == 0) {
    uVar26 = (ulong)uVar16;
    uVar19 = uVar26 * 4;
    uVar24 = uVar26 * 8;
    uVar18 = Memory::alloc_static(uVar19,false);
    *(undefined8 *)(this + 0x10) = uVar18;
    __s_00 = (void *)Memory::alloc_static(uVar24,false);
    *(void **)(this + 8) = __s_00;
    if (uVar16 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar24)) && (__s_00 < (void *)((long)__s + uVar19))) {
        uVar19 = 0;
        do {
          *(undefined4 *)((long)__s + uVar19 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar19 * 8) = 0;
          uVar19 = uVar19 + 1;
        } while (uVar26 != uVar19);
      }
      else {
        memset(__s,0,uVar19);
        memset(__s_00,0,uVar24);
      }
    }
  }
  local_74 = 0;
  cVar14 = _lookup_pos(this,param_1,&local_74);
  if (cVar14 == '\0') {
    if ((float)uVar16 * __LC122 < (float)(*(int *)(this + 0x2c) + 1)) {
      if (*(int *)(this + 0x28) == 0x1c) {
        pauVar17 = (undefined1 (*) [16])0x0;
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        goto LAB_00119563;
      }
      _resize_and_rehash(this,*(int *)(this + 0x28) + 1);
    }
    local_58 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(long *)param_1 == 0) {
      local_50[0] = 0;
      pauVar17 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar17[1] = 0;
      *pauVar17 = (undefined1  [16])0x0;
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)param_1);
      lVar2 = local_58;
      uVar18 = local_68._0_8_;
      uVar13 = local_68._8_8_;
      local_50[0] = 0;
      pauVar17 = (undefined1 (*) [16])operator_new(0x20,"");
      *(undefined8 *)pauVar17[1] = 0;
      *(undefined8 *)*pauVar17 = uVar18;
      *(undefined8 *)(*pauVar17 + 8) = uVar13;
      if (lVar2 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar17 + 1),(CowData *)&local_58);
      }
    }
    *(undefined8 *)(pauVar17[1] + 8) = 0;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    puVar1 = *(undefined8 **)(this + 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      *(undefined1 (**) [16])(this + 0x18) = pauVar17;
    }
    else {
      *puVar1 = pauVar17;
      *(undefined8 **)(*pauVar17 + 8) = puVar1;
    }
    *(undefined1 (**) [16])(this + 0x20) = pauVar17;
    uVar15 = String::hash();
    lVar2 = *(long *)(this + 0x10);
    uVar16 = 1;
    if (uVar15 != 0) {
      uVar16 = uVar15;
    }
    uVar24 = (ulong)uVar16;
    uVar15 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    uVar19 = CONCAT44(0,uVar15);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar24 * lVar3;
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar19;
    lVar21 = SUB168(auVar5 * auVar9,8);
    lVar4 = *(long *)(this + 8);
    puVar25 = (uint *)(lVar2 + lVar21 * 4);
    iVar20 = SUB164(auVar5 * auVar9,8);
    uVar22 = *puVar25;
    pauVar28 = pauVar17;
    if (uVar22 != 0) {
      uVar23 = 0;
      pauVar27 = pauVar17;
      do {
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)uVar22 * lVar3;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar19;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)((iVar20 + uVar15) - SUB164(auVar6 * auVar10,8)) * lVar3;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar19;
        uVar16 = SUB164(auVar7 * auVar11,8);
        pauVar28 = pauVar27;
        if (uVar16 < uVar23) {
          *puVar25 = (uint)uVar24;
          uVar24 = (ulong)uVar22;
          puVar1 = (undefined8 *)(lVar4 + lVar21 * 8);
          pauVar28 = (undefined1 (*) [16])*puVar1;
          *puVar1 = pauVar27;
          uVar23 = uVar16;
        }
        uVar16 = (uint)uVar24;
        uVar23 = uVar23 + 1;
        auVar8._8_8_ = 0;
        auVar8._0_8_ = (ulong)(iVar20 + 1) * lVar3;
        auVar12._8_8_ = 0;
        auVar12._0_8_ = uVar19;
        lVar21 = SUB168(auVar8 * auVar12,8);
        puVar25 = (uint *)(lVar2 + lVar21 * 4);
        iVar20 = SUB164(auVar8 * auVar12,8);
        uVar22 = *puVar25;
        pauVar27 = pauVar28;
      } while (uVar22 != 0);
    }
    *(undefined1 (**) [16])(lVar4 + lVar21 * 8) = pauVar28;
    *puVar25 = uVar16;
    *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
  }
  else {
    uVar19 = (ulong)local_74;
    pauVar17 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar19 * 8);
    if (*(long *)(pauVar17[1] + 8) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(pauVar17[1] + 8),(CowData *)&local_70);
      pauVar17 = *(undefined1 (**) [16])(*(long *)(this + 8) + uVar19 * 8);
    }
  }
LAB_00119563:
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
LAB_0011956f:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pauVar17[1] + 8;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >::insert(String const&, String const&,
   bool) */

String * HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
         ::insert(String *param_1,String *param_2,bool param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  char cVar12;
  uint uVar13;
  long *plVar14;
  undefined8 uVar15;
  void *__s_00;
  ulong uVar16;
  CowData *in_RCX;
  uint uVar17;
  int iVar18;
  undefined7 in_register_00000011;
  String *pSVar19;
  long lVar20;
  ulong uVar21;
  long *plVar22;
  uint uVar23;
  char in_R8B;
  uint uVar24;
  long lVar25;
  uint *puVar26;
  ulong uVar27;
  long in_FS_OFFSET;
  uint local_a8;
  long *local_90;
  uint local_6c;
  undefined1 local_68 [16];
  long local_58;
  long local_50 [2];
  long local_40;
  
  pSVar19 = (String *)CONCAT71(in_register_00000011,param_3);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar17 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
  if (*(long *)(param_2 + 8) == 0) {
    uVar27 = (ulong)uVar17;
    uVar16 = uVar27 * 4;
    uVar15 = Memory::alloc_static(uVar16,false);
    *(undefined8 *)(param_2 + 0x10) = uVar15;
    uVar21 = uVar27 * 8;
    __s_00 = (void *)Memory::alloc_static(uVar21,false);
    *(void **)(param_2 + 8) = __s_00;
    if (uVar17 != 0) {
      __s = *(void **)(param_2 + 0x10);
      if ((__s < (void *)(uVar21 + (long)__s_00)) && (__s_00 < (void *)((long)__s + uVar16))) {
        uVar16 = 0;
        do {
          *(undefined4 *)((long)__s + uVar16 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar16 * 8) = 0;
          uVar16 = uVar16 + 1;
        } while (uVar27 != uVar16);
      }
      else {
        memset(__s,0,uVar16);
        memset(__s_00,0,uVar21);
      }
    }
  }
  local_6c = 0;
  cVar12 = _lookup_pos((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                        *)param_2,pSVar19,&local_6c);
  if (cVar12 == '\0') {
    if ((float)uVar17 * __LC122 < (float)(*(int *)(param_2 + 0x2c) + 1)) {
      if (*(int *)(param_2 + 0x28) == 0x1c) {
        _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                         "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                         ,"Hash table maximum capacity reached, aborting insertion.",0,0);
        local_90 = (long *)0x0;
        goto LAB_001199a3;
      }
      _resize_and_rehash((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                          *)param_2,*(int *)(param_2 + 0x28) + 1);
    }
    local_58 = 0;
    local_68 = (undefined1  [16])0x0;
    if (*(long *)pSVar19 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pSVar19);
    }
    local_50[0] = 0;
    lVar25 = *(long *)in_RCX;
    if (*(long *)in_RCX != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)local_50,in_RCX);
      lVar25 = local_50[0];
    }
    local_90 = (long *)operator_new(0x20,"");
    local_90[2] = 0;
    *local_90 = local_68._0_8_;
    local_90[1] = local_68._8_8_;
    if (local_58 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_90 + 2),(CowData *)&local_58);
    }
    local_90[3] = 0;
    if (lVar25 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_90 + 3),(CowData *)local_50);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    puVar1 = *(undefined8 **)(param_2 + 0x20);
    if (puVar1 == (undefined8 *)0x0) {
      *(long **)(param_2 + 0x18) = local_90;
      *(long **)(param_2 + 0x20) = local_90;
    }
    else if (in_R8B == '\0') {
      *puVar1 = local_90;
      local_90[1] = (long)puVar1;
      *(long **)(param_2 + 0x20) = local_90;
    }
    else {
      lVar25 = *(long *)(param_2 + 0x18);
      *(long **)(lVar25 + 8) = local_90;
      *local_90 = lVar25;
      *(long **)(param_2 + 0x18) = local_90;
    }
    uVar13 = String::hash();
    lVar25 = *(long *)(param_2 + 8);
    uVar17 = 1;
    if (uVar13 != 0) {
      uVar17 = uVar13;
    }
    uVar21 = (ulong)uVar17;
    uVar13 = (&hash_table_size_primes)[*(uint *)(param_2 + 0x28)];
    uVar16 = CONCAT44(0,uVar13);
    lVar2 = *(long *)(param_2 + 0x10);
    lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(param_2 + 0x28) * 8);
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar21 * lVar3;
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar16;
    lVar20 = SUB168(auVar4 * auVar8,8);
    puVar26 = (uint *)(lVar2 + lVar20 * 4);
    iVar18 = SUB164(auVar4 * auVar8,8);
    uVar23 = *puVar26;
    plVar14 = local_90;
    if (uVar23 != 0) {
      uVar24 = 0;
      plVar22 = local_90;
      do {
        auVar5._8_8_ = 0;
        auVar5._0_8_ = (ulong)uVar23 * lVar3;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar16;
        auVar6._8_8_ = 0;
        auVar6._0_8_ = (ulong)((iVar18 + uVar13) - SUB164(auVar5 * auVar9,8)) * lVar3;
        auVar10._8_8_ = 0;
        auVar10._0_8_ = uVar16;
        local_a8 = SUB164(auVar6 * auVar10,8);
        plVar14 = plVar22;
        if (local_a8 < uVar24) {
          puVar1 = (undefined8 *)(lVar25 + lVar20 * 8);
          *puVar26 = (uint)uVar21;
          uVar21 = (ulong)uVar23;
          plVar14 = (long *)*puVar1;
          *puVar1 = plVar22;
          uVar24 = local_a8;
        }
        uVar17 = (uint)uVar21;
        uVar24 = uVar24 + 1;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = (ulong)(iVar18 + 1) * lVar3;
        auVar11._8_8_ = 0;
        auVar11._0_8_ = uVar16;
        lVar20 = SUB168(auVar7 * auVar11,8);
        puVar26 = (uint *)(lVar2 + lVar20 * 4);
        iVar18 = SUB164(auVar7 * auVar11,8);
        uVar23 = *puVar26;
        plVar22 = plVar14;
      } while (uVar23 != 0);
    }
    *(long **)(lVar25 + lVar20 * 8) = plVar14;
    *puVar26 = uVar17;
    *(int *)(param_2 + 0x2c) = *(int *)(param_2 + 0x2c) + 1;
  }
  else {
    uVar16 = (ulong)local_6c;
    local_90 = *(long **)(*(long *)(param_2 + 8) + uVar16 * 8);
    if (local_90[3] != *(long *)in_RCX) {
      CowData<char32_t>::_ref((CowData<char32_t> *)(local_90 + 3),in_RCX);
      local_90 = *(long **)(*(long *)(param_2 + 8) + uVar16 * 8);
    }
  }
LAB_001199a3:
  *(long **)param_1 = local_90;
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}



/* HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> >
   >::TEMPNAMEPLACEHOLDERVALUE(HashMap<String, String, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, String> > >
   const&) */

void __thiscall
HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
::operator=(HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
            *this,HashMap *param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar5;
  long lVar6;
  long in_FS_OFFSET;
  String aSStack_48 [8];
  long local_40;
  ulong uVar4;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (this != (HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
               *)param_1) {
    uVar5 = *(uint *)(this + 0x28);
    uVar3 = (&hash_table_size_primes)[uVar5];
    if ((*(int *)(this + 0x2c) != 0) && (*(long *)(this + 8) != 0)) {
      if (uVar3 != 0) {
        lVar6 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x10) + lVar6) != 0) {
            *(int *)(*(long *)(this + 0x10) + lVar6) = 0;
            pvVar2 = *(void **)(*(long *)(this + 8) + lVar6 * 2);
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x18));
            CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar2 + 0x10));
            Memory::free_static(pvVar2,false);
            *(undefined8 *)(*(long *)(this + 8) + lVar6 * 2) = 0;
          }
          lVar6 = lVar6 + 4;
        } while ((ulong)uVar3 << 2 != lVar6);
        uVar5 = *(uint *)(this + 0x28);
        uVar3 = (&hash_table_size_primes)[uVar5];
      }
      *(undefined4 *)(this + 0x2c) = 0;
      *(undefined1 (*) [16])(this + 0x18) = (undefined1  [16])0x0;
    }
    if (uVar3 < (uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x28)]) {
      if (uVar5 != 0x1c) {
        uVar4 = (ulong)uVar5;
        do {
          uVar3 = (int)uVar4 + 1;
          uVar4 = (ulong)uVar3;
          if ((uint)(&hash_table_size_primes)[*(uint *)(param_1 + 0x28)] <=
              (uint)(&hash_table_size_primes)[uVar4]) {
            if (uVar3 != uVar5) {
              if (*(long *)(this + 8) == 0) {
                *(uint *)(this + 0x28) = uVar3;
              }
              else {
                _resize_and_rehash(this,uVar3);
              }
            }
            goto LAB_00119c59;
          }
        } while (uVar3 != 0x1c);
      }
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
    }
LAB_00119c59:
    if (*(long *)(param_1 + 8) != 0) {
      for (puVar1 = *(undefined8 **)(param_1 + 0x18); puVar1 != (undefined8 *)0x0;
          puVar1 = (undefined8 *)*puVar1) {
        insert(aSStack_48,(String *)this,(bool)((char)puVar1 + '\x10'));
      }
    }
  }
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<String, HashMap<String, String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > >, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String, HashMap<String,
   String, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, String> > > > > >::operator[](String const&) */

undefined8 * __thiscall
HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>
::operator[](HashMap<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>>>>
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
  char cVar20;
  uint uVar21;
  uint uVar22;
  ulong uVar23;
  undefined8 uVar24;
  void *__s_00;
  undefined8 *puVar25;
  long lVar26;
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
  undefined8 *puVar39;
  undefined8 *puVar40;
  long in_FS_OFFSET;
  undefined8 local_118;
  undefined8 uStack_110;
  uint local_c0;
  uint local_bc;
  HashMap local_b8 [8];
  undefined1 local_b0 [16];
  undefined1 local_a0 [16];
  undefined8 local_90;
  undefined1 local_88 [16];
  long local_78 [2];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  ulong local_48;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  local_c0 = 0;
  cVar20 = _lookup_pos(this,param_1,&local_c0);
  if (cVar20 == '\0') {
    local_90 = 2;
    uVar31 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
    local_b0 = (undefined1  [16])0x0;
    local_a0 = (undefined1  [16])0x0;
    if (*(long *)(this + 8) == 0) {
      uVar32 = (ulong)uVar31;
      uVar23 = uVar32 * 4;
      uVar38 = uVar32 * 8;
      uVar24 = Memory::alloc_static(uVar23,false);
      *(undefined8 *)(this + 0x10) = uVar24;
      pvVar27 = (void *)Memory::alloc_static(uVar38,false);
      *(void **)(this + 8) = pvVar27;
      if (uVar31 != 0) {
        pvVar2 = *(void **)(this + 0x10);
        if ((pvVar2 < (void *)((long)pvVar27 + uVar38)) &&
           (pvVar27 < (void *)((long)pvVar2 + uVar23))) {
          uVar23 = 0;
          do {
            *(undefined4 *)((long)pvVar2 + uVar23 * 4) = 0;
            *(undefined8 *)((long)pvVar27 + uVar23 * 8) = 0;
            uVar23 = uVar23 + 1;
          } while (uVar32 != uVar23);
        }
        else {
          memset(pvVar2,0,uVar23);
          memset(pvVar27,0,uVar38);
        }
      }
    }
    local_bc = 0;
    cVar20 = _lookup_pos(this,param_1,&local_bc);
    if (cVar20 == '\0') {
      if ((float)uVar31 * __LC122 < (float)(*(int *)(this + 0x2c) + 1)) {
        uVar31 = *(uint *)(this + 0x28);
        if (uVar31 == 0x1c) {
          puVar25 = (undefined8 *)0x0;
          _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                           "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                           ,"Hash table maximum capacity reached, aborting insertion.",0,0);
          goto LAB_0011a2c3;
        }
        uVar23 = (ulong)(uVar31 + 1);
        *(undefined4 *)(this + 0x2c) = 0;
        uVar22 = (&hash_table_size_primes)[uVar31];
        if (uVar31 + 1 < 2) {
          uVar23 = 2;
        }
        uVar31 = (&hash_table_size_primes)[uVar23];
        uVar32 = (ulong)uVar31;
        *(int *)(this + 0x28) = (int)uVar23;
        pvVar27 = *(void **)(this + 8);
        uVar23 = uVar32 * 4;
        uVar38 = uVar32 * 8;
        pvVar2 = *(void **)(this + 0x10);
        uVar24 = Memory::alloc_static(uVar23,false);
        *(undefined8 *)(this + 0x10) = uVar24;
        __s_00 = (void *)Memory::alloc_static(uVar38,false);
        *(void **)(this + 8) = __s_00;
        if (uVar31 != 0) {
          __s = *(void **)(this + 0x10);
          if ((__s < (void *)((long)__s_00 + uVar38)) && (__s_00 < (void *)((long)__s + uVar23))) {
            uVar23 = 0;
            do {
              *(undefined4 *)((long)__s + uVar23 * 4) = 0;
              *(undefined8 *)((long)__s_00 + uVar23 * 8) = 0;
              uVar23 = uVar23 + 1;
            } while (uVar32 != uVar23);
          }
          else {
            memset(__s,0,uVar23);
            memset(__s_00,0,uVar38);
          }
        }
        if (uVar22 != 0) {
          uVar23 = 0;
          do {
            uVar31 = *(uint *)((long)pvVar2 + uVar23 * 4);
            if (uVar31 != 0) {
              lVar26 = *(long *)(this + 0x10);
              uVar36 = 0;
              uVar35 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
              uVar38 = CONCAT44(0,uVar35);
              lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
              auVar4._8_8_ = 0;
              auVar4._0_8_ = (ulong)uVar31 * lVar3;
              auVar12._8_8_ = 0;
              auVar12._0_8_ = uVar38;
              lVar29 = SUB168(auVar4 * auVar12,8);
              puVar34 = (uint *)(lVar26 + lVar29 * 4);
              iVar28 = SUB164(auVar4 * auVar12,8);
              uVar37 = *puVar34;
              uVar24 = *(undefined8 *)((long)pvVar27 + uVar23 * 8);
              while (uVar37 != 0) {
                auVar5._8_8_ = 0;
                auVar5._0_8_ = (ulong)uVar37 * lVar3;
                auVar13._8_8_ = 0;
                auVar13._0_8_ = uVar38;
                auVar6._8_8_ = 0;
                auVar6._0_8_ = (ulong)((uVar35 + iVar28) - SUB164(auVar5 * auVar13,8)) * lVar3;
                auVar14._8_8_ = 0;
                auVar14._0_8_ = uVar38;
                uVar21 = SUB164(auVar6 * auVar14,8);
                uVar33 = uVar24;
                if (uVar21 < uVar36) {
                  *puVar34 = uVar31;
                  puVar25 = (undefined8 *)((long)__s_00 + lVar29 * 8);
                  uVar33 = *puVar25;
                  *puVar25 = uVar24;
                  uVar31 = uVar37;
                  uVar36 = uVar21;
                }
                uVar36 = uVar36 + 1;
                auVar7._8_8_ = 0;
                auVar7._0_8_ = (ulong)(iVar28 + 1) * lVar3;
                auVar15._8_8_ = 0;
                auVar15._0_8_ = uVar38;
                lVar29 = SUB168(auVar7 * auVar15,8);
                puVar34 = (uint *)(lVar26 + lVar29 * 4);
                iVar28 = SUB164(auVar7 * auVar15,8);
                uVar24 = uVar33;
                uVar37 = *puVar34;
              }
              *(undefined8 *)((long)__s_00 + lVar29 * 8) = uVar24;
              *puVar34 = uVar31;
              *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
            }
            uVar23 = uVar23 + 1;
          } while (uVar22 != uVar23);
          Memory::free_static(pvVar27,false);
          Memory::free_static(pvVar2,false);
        }
      }
      local_78[0] = 0;
      local_88 = (undefined1  [16])0x0;
      if (*(long *)param_1 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_78,(CowData *)param_1);
      }
      lVar26 = local_78[0];
      auVar4 = local_88;
      local_48 = 0;
      uVar23 = 1;
      local_68 = (undefined1  [16])0x0;
      local_58 = (undefined1  [16])0x0;
      do {
        if (0x16 < (uint)(&hash_table_size_primes)[uVar23]) {
          local_48 = uVar23 & 0xffffffff;
          uVar23 = uVar23 & 0xffffffff;
          goto LAB_0011a0fa;
        }
        uVar23 = uVar23 + 1;
      } while (uVar23 != 0x1d);
      uVar23 = 0;
      _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                       "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0,0
                      );
LAB_0011a0fa:
      puVar25 = (undefined8 *)operator_new(0x48,"");
      local_118 = auVar4._0_8_;
      uStack_110 = auVar4._8_8_;
      puVar25[2] = 0;
      *puVar25 = local_118;
      puVar25[1] = uStack_110;
      if (lVar26 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)(puVar25 + 2),(CowData *)local_78);
      }
      puVar25[8] = 0;
      uVar31 = (&hash_table_size_primes)[uVar23];
      *(undefined1 (*) [16])(puVar25 + 4) = (undefined1  [16])0x0;
      lVar26 = 1;
      *(undefined1 (*) [16])(puVar25 + 6) = (undefined1  [16])0x0;
      if (5 < uVar31) {
        do {
          if (uVar31 <= (uint)(&hash_table_size_primes)[lVar26]) {
            *(int *)(puVar25 + 8) = (int)lVar26;
            goto LAB_0011a1a7;
          }
          lVar26 = lVar26 + 1;
        } while (lVar26 != 0x1d);
        _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                         "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.",0,0
                         ,0);
      }
LAB_0011a1a7:
      CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
      puVar40 = *(undefined8 **)(this + 0x20);
      if (puVar40 == (undefined8 *)0x0) {
        *(undefined8 **)(this + 0x18) = puVar25;
      }
      else {
        *puVar40 = puVar25;
        puVar25[1] = puVar40;
      }
      *(undefined8 **)(this + 0x20) = puVar25;
      uVar22 = String::hash();
      lVar26 = *(long *)(this + 0x10);
      uVar31 = 1;
      if (uVar22 != 0) {
        uVar31 = uVar22;
      }
      lVar3 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      uVar22 = (&hash_table_size_primes)[*(uint *)(this + 0x28)];
      uVar23 = CONCAT44(0,uVar22);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar31 * lVar3;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar23;
      lVar30 = SUB168(auVar8 * auVar16,8);
      lVar29 = *(long *)(this + 8);
      puVar34 = (uint *)(lVar26 + lVar30 * 4);
      iVar28 = SUB164(auVar8 * auVar16,8);
      uVar35 = *puVar34;
      puVar40 = puVar25;
      if (uVar35 != 0) {
        uVar37 = 0;
        puVar39 = puVar25;
        do {
          auVar9._8_8_ = 0;
          auVar9._0_8_ = (ulong)uVar35 * lVar3;
          auVar17._8_8_ = 0;
          auVar17._0_8_ = uVar23;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)((uVar22 + iVar28) - SUB164(auVar9 * auVar17,8)) * lVar3;
          auVar18._8_8_ = 0;
          auVar18._0_8_ = uVar23;
          uVar36 = SUB164(auVar10 * auVar18,8);
          puVar40 = puVar39;
          if (uVar36 < uVar37) {
            *puVar34 = uVar31;
            puVar1 = (undefined8 *)(lVar29 + lVar30 * 8);
            puVar40 = (undefined8 *)*puVar1;
            *puVar1 = puVar39;
            uVar37 = uVar36;
            uVar31 = uVar35;
          }
          uVar37 = uVar37 + 1;
          auVar11._8_8_ = 0;
          auVar11._0_8_ = (ulong)(iVar28 + 1) * lVar3;
          auVar19._8_8_ = 0;
          auVar19._0_8_ = uVar23;
          lVar30 = SUB168(auVar11 * auVar19,8);
          puVar34 = (uint *)(lVar26 + lVar30 * 4);
          iVar28 = SUB164(auVar11 * auVar19,8);
          uVar35 = *puVar34;
          puVar39 = puVar40;
        } while (uVar35 != 0);
      }
      *(undefined8 **)(lVar29 + lVar30 * 8) = puVar40;
      *puVar34 = uVar31;
      *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
    }
    else {
      uVar23 = (ulong)local_bc;
      HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
      ::operator=((HashMap<String,String,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,String>>>
                   *)(*(long *)(*(long *)(this + 8) + uVar23 * 8) + 0x18),local_b8);
      puVar25 = *(undefined8 **)(*(long *)(this + 8) + uVar23 * 8);
    }
  }
  else {
    puVar25 = *(undefined8 **)(*(long *)(this + 8) + (ulong)local_c0 * 8);
  }
LAB_0011a2c3:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar25 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<DependencyRemoveDialog::RemovedDependency>::_unref() */

void __thiscall
CowData<DependencyRemoveDialog::RemovedDependency>::_unref
          (CowData<DependencyRemoveDialog::RemovedDependency> *this)

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
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 3));
          if (plVar6[2] != 0) {
            LOCK();
            plVar2 = (long *)(plVar6[2] + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = plVar6[2];
              plVar6[2] = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          CowData<char32_t>::_unref((CowData<char32_t> *)(plVar6 + 1));
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
          plVar6 = plVar6 + 4;
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



/* void 
   Vector<DependencyRemoveDialog::RemovedDependency>::sort_custom<_DefaultComparator<DependencyRemoveDialog::RemovedDependency>,
   true>() */

void __thiscall
Vector<DependencyRemoveDialog::RemovedDependency>::
sort_custom<_DefaultComparator<DependencyRemoveDialog::RemovedDependency>,true>
          (Vector<DependencyRemoveDialog::RemovedDependency> *this)

{
  CowData *pCVar1;
  long lVar2;
  CowData<char32_t> *this_00;
  long lVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  int iVar7;
  CowData *pCVar8;
  long lVar9;
  CowData<char32_t> *this_01;
  CowData *pCVar10;
  CowData<char32_t> *pCVar11;
  long lVar12;
  long in_FS_OFFSET;
  RemovedDependency local_88 [8];
  CowData local_80 [8];
  CowData local_78 [8];
  CowData local_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  long local_50 [2];
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if ((*(long *)(this + 8) != 0) && (lVar2 = *(long *)(*(long *)(this + 8) + -8), lVar2 != 0)) {
    CowData<DependencyRemoveDialog::RemovedDependency>::_copy_on_write
              ((CowData<DependencyRemoveDialog::RemovedDependency> *)(this + 8));
    this_00 = *(CowData<char32_t> **)(this + 8);
    if (lVar2 == 1) {
      if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
        SortArray<DependencyRemoveDialog::RemovedDependency,_DefaultComparator<DependencyRemoveDialog::RemovedDependency>,true>
        ::introsort(0,1,(RemovedDependency *)this_00,0);
        return;
      }
      goto LAB_0011ae88;
    }
    lVar6 = 0;
    lVar12 = lVar2;
    do {
      lVar12 = lVar12 >> 1;
      lVar6 = lVar6 + 1;
    } while (lVar12 != 1);
    SortArray<DependencyRemoveDialog::RemovedDependency,_DefaultComparator<DependencyRemoveDialog::RemovedDependency>,true>
    ::introsort(0,lVar2,(RemovedDependency *)this_00,lVar6 * 2);
    if (0x10 < lVar2) {
      lVar12 = 1;
      pCVar11 = this_00;
      do {
        pCVar10 = (CowData *)(pCVar11 + 0x20);
        local_68 = 0;
        if (*(long *)pCVar10 != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar10);
        }
        local_60 = 0;
        if (*(long *)(pCVar11 + 0x28) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(pCVar11 + 0x28));
        }
        local_58 = 0;
        if (*(long *)(pCVar11 + 0x30) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(pCVar11 + 0x30));
        }
        local_50[0] = 0;
        if (*(long *)(pCVar11 + 0x38) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)(pCVar11 + 0x38));
        }
        cVar4 = DependencyRemoveDialog::RemovedDependency::operator<
                          ((RemovedDependency *)&local_68,this_00);
        pCVar8 = pCVar10;
        if (cVar4 == '\0') {
          DependencyRemoveDialog::RemovedDependency::RemovedDependency
                    (local_88,(RemovedDependency *)&local_68);
          while( true ) {
            pCVar1 = (CowData *)((CowData<char32_t> *)pCVar8 + -0x20);
            cVar4 = DependencyRemoveDialog::RemovedDependency::operator<(local_88,pCVar1);
            if (cVar4 == '\0') break;
            if (pCVar1 == (CowData *)this_00) {
              _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                               "bad comparison function; sorting will be broken",0,0);
              break;
            }
            CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8,pCVar1);
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)pCVar8 + 8,
                       (CowData *)((CowData<char32_t> *)pCVar8 + -0x18));
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)pCVar8 + 0x10,
                       (CowData *)((CowData<char32_t> *)pCVar8 + -0x10));
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)pCVar8 + 0x18,
                       (CowData *)((CowData<char32_t> *)pCVar8 + -8));
            pCVar8 = pCVar1;
          }
          CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8,(CowData *)local_88);
          CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8 + 8,local_80);
          CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8 + 0x10,local_78);
          CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8 + 0x18,local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
        }
        else {
          do {
            pCVar1 = (CowData *)((CowData<char32_t> *)pCVar8 + -0x20);
            if (*(long *)pCVar8 != *(long *)((CowData<char32_t> *)pCVar8 + -0x20)) {
              CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8,pCVar1);
            }
            if (*(long *)((CowData<char32_t> *)pCVar8 + 8) !=
                *(long *)((CowData<char32_t> *)pCVar8 + -0x18)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar8 + 8,
                         (CowData *)((CowData<char32_t> *)pCVar8 + -0x18));
            }
            if (*(long *)((CowData<char32_t> *)pCVar8 + 0x10) !=
                *(long *)((CowData<char32_t> *)pCVar8 + -0x10)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar8 + 0x10,
                         (CowData *)((CowData<char32_t> *)pCVar8 + -0x10));
            }
            if (*(long *)((CowData<char32_t> *)pCVar8 + 0x18) !=
                *(long *)((CowData<char32_t> *)pCVar8 + -8)) {
              CowData<char32_t>::_ref
                        ((CowData<char32_t> *)pCVar8 + 0x18,
                         (CowData *)((CowData<char32_t> *)pCVar8 + -8));
            }
            pCVar8 = pCVar1;
          } while (this_00 != (CowData<char32_t> *)pCVar1);
          CowData<char32_t>::_ref(this_00,(CowData *)&local_68);
          CowData<char32_t>::_ref(this_00 + 8,(CowData *)&local_60);
          CowData<char32_t>::_ref(this_00 + 0x10,(CowData *)&local_58);
          CowData<char32_t>::_ref(this_00 + 0x18,(CowData *)local_50);
        }
        lVar12 = lVar12 + 1;
        CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        pCVar11 = (CowData<char32_t> *)pCVar10;
      } while (lVar12 != 0x10);
      pCVar11 = this_00 + 0x200;
      lVar12 = 0x10;
LAB_0011a830:
      local_68 = 0;
      if (*(long *)pCVar11 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,(CowData *)pCVar11);
      }
      local_60 = 0;
      if (*(long *)((CowData *)pCVar11 + 8) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)pCVar11 + 8);
      }
      local_58 = 0;
      if (*(long *)((CowData *)pCVar11 + 0x10) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)pCVar11 + 0x10);
      }
      local_50[0] = 0;
      lVar6 = *(long *)((CowData *)pCVar11 + 0x18);
      if (*(long *)((CowData *)pCVar11 + 0x18) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)pCVar11 + 0x18);
        lVar6 = local_50[0];
      }
      pCVar10 = (CowData *)pCVar11 + -0x10;
      lVar9 = lVar12;
      do {
        lVar3 = *(long *)(pCVar10 + 8);
        if ((lVar6 == 0) || (iVar5 = (int)*(undefined8 *)(lVar6 + -8), iVar5 == 0)) {
          if ((lVar3 != 0) &&
             ((iVar5 = (int)*(undefined8 *)(lVar3 + -8), iVar5 != 0 && (iVar5 != 1))))
          goto LAB_0011a97e;
LAB_0011ab08:
          cVar4 = String::operator<((String *)&local_58,(String *)pCVar10);
          if (cVar4 == '\0') goto LAB_0011a97e;
        }
        else if ((lVar3 == 0) || (iVar7 = (int)*(undefined8 *)(lVar3 + -8), iVar7 == 0)) {
          if (iVar5 == 1) goto LAB_0011ab08;
        }
        else {
          if ((iVar5 == 1) == (iVar7 == 1)) goto LAB_0011ab08;
          if (iVar7 != 1) goto LAB_0011a97e;
        }
        if (lVar9 == 1) goto LAB_0011ab28;
        if (*(long *)(pCVar10 + 0x10) != *(long *)(pCVar10 + -0x10)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar10 + 0x10),pCVar10 + -0x10);
        }
        if (*(long *)(pCVar10 + 0x18) != *(long *)(pCVar10 + -8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar10 + 0x18),pCVar10 + -8);
        }
        if (*(long *)(pCVar10 + 0x20) != *(long *)pCVar10) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar10 + 0x20),pCVar10);
        }
        if (*(long *)(pCVar10 + 0x28) != *(long *)(pCVar10 + 8)) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(pCVar10 + 0x28),pCVar10 + 8);
        }
        pCVar10 = pCVar10 + -0x20;
        lVar9 = lVar9 + -1;
        lVar6 = local_50[0];
      } while( true );
    }
    lVar12 = 1;
    pCVar11 = this_00;
    do {
      pCVar10 = (CowData *)(pCVar11 + 0x20);
      local_68 = 0;
      if (*(long *)pCVar10 != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_68,pCVar10);
      }
      local_60 = 0;
      if (*(long *)(pCVar11 + 0x28) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_60,(CowData *)(pCVar11 + 0x28));
      }
      local_58 = 0;
      if (*(long *)(pCVar11 + 0x30) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)(pCVar11 + 0x30));
      }
      local_50[0] = 0;
      if (*(long *)(pCVar11 + 0x38) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)local_50,(CowData *)(pCVar11 + 0x38));
      }
      cVar4 = DependencyRemoveDialog::RemovedDependency::operator<
                        ((RemovedDependency *)&local_68,this_00);
      lVar6 = lVar12;
      pCVar8 = pCVar10;
      if (cVar4 == '\0') {
        DependencyRemoveDialog::RemovedDependency::RemovedDependency
                  (local_88,(RemovedDependency *)&local_68);
        while( true ) {
          lVar6 = lVar6 + -1;
          pCVar1 = (CowData *)((CowData<char32_t> *)pCVar8 + -0x20);
          cVar4 = DependencyRemoveDialog::RemovedDependency::operator<(local_88,pCVar1);
          if (cVar4 == '\0') break;
          if (lVar6 == 0) {
            _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                             "bad comparison function; sorting will be broken",0,0);
            break;
          }
          CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8,pCVar1);
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)pCVar8 + 8,
                     (CowData *)((CowData<char32_t> *)pCVar8 + -0x18));
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)pCVar8 + 0x10,
                     (CowData *)((CowData<char32_t> *)pCVar8 + -0x10));
          CowData<char32_t>::_ref
                    ((CowData<char32_t> *)pCVar8 + 0x18,
                     (CowData *)((CowData<char32_t> *)pCVar8 + -8));
          pCVar8 = pCVar1;
        }
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8,(CowData *)local_88);
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8 + 8,local_80);
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8 + 0x10,local_78);
        CowData<char32_t>::_ref((CowData<char32_t> *)pCVar8 + 0x18,local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_78);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_80);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_88);
      }
      else {
        do {
          if (*(long *)pCVar8 != *(long *)((CowData<char32_t> *)pCVar8 + -0x20)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)pCVar8,(CowData *)((CowData<char32_t> *)pCVar8 + -0x20))
            ;
          }
          if (*(long *)((CowData<char32_t> *)pCVar8 + 8) !=
              *(long *)((CowData<char32_t> *)pCVar8 + -0x18)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)pCVar8 + 8,
                       (CowData *)((CowData<char32_t> *)pCVar8 + -0x18));
          }
          if (*(long *)((CowData<char32_t> *)pCVar8 + 0x10) !=
              *(long *)((CowData<char32_t> *)pCVar8 + -0x10)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)pCVar8 + 0x10,
                       (CowData *)((CowData<char32_t> *)pCVar8 + -0x10));
          }
          if (*(long *)((CowData<char32_t> *)pCVar8 + 0x18) !=
              *(long *)((CowData<char32_t> *)pCVar8 + -8)) {
            CowData<char32_t>::_ref
                      ((CowData<char32_t> *)pCVar8 + 0x18,
                       (CowData *)((CowData<char32_t> *)pCVar8 + -8));
          }
          lVar6 = lVar6 + -1;
          pCVar8 = (CowData *)((CowData<char32_t> *)pCVar8 + -0x20);
        } while (lVar6 != 0);
        CowData<char32_t>::_ref(this_00,(CowData *)&local_68);
        CowData<char32_t>::_ref(this_00 + 8,(CowData *)&local_60);
        CowData<char32_t>::_ref(this_00 + 0x10,(CowData *)&local_58);
        CowData<char32_t>::_ref(this_00 + 0x18,(CowData *)local_50);
      }
      lVar12 = lVar12 + 1;
      CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      pCVar11 = (CowData<char32_t> *)pCVar10;
    } while (lVar2 != lVar12);
  }
LAB_0011a5dc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
LAB_0011ae88:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_0011ab28:
  _err_print_error("unguarded_linear_insert","./core/templates/sort_array.h",0xff,
                   "bad comparison function; sorting will be broken",0,0);
LAB_0011a97e:
  lVar12 = lVar12 + 1;
  pCVar11 = (CowData<char32_t> *)((CowData *)pCVar11 + 0x20);
  this_01 = this_00 + lVar9 * 0x20;
  CowData<char32_t>::_ref(this_01,(CowData *)&local_68);
  CowData<char32_t>::_ref(this_01 + 8,(CowData *)&local_60);
  CowData<char32_t>::_ref(this_01 + 0x10,(CowData *)&local_58);
  CowData<char32_t>::_ref(this_01 + 0x18,(CowData *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)local_50);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
  if (lVar2 == lVar12) goto LAB_0011a5dc;
  goto LAB_0011a830;
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



/* CowData<DependencyRemoveDialog::RemovedDependency>::_realloc(long) */

undefined8 __thiscall
CowData<DependencyRemoveDialog::RemovedDependency>::_realloc
          (CowData<DependencyRemoveDialog::RemovedDependency> *this,long param_1)

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
/* Error CowData<DependencyRemoveDialog::RemovedDependency>::resize<false>(long) */

undefined8 __thiscall
CowData<DependencyRemoveDialog::RemovedDependency>::resize<false>
          (CowData<DependencyRemoveDialog::RemovedDependency> *this,long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined1 (*pauVar3) [16];
  undefined1 (*pauVar4) [16];
  undefined8 uVar5;
  undefined8 *puVar6;
  CowData<char32_t> *this_00;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
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
    lVar8 = lVar7 * 0x20;
    if (lVar8 != 0) {
      uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      lVar8 = (uVar9 | uVar9 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x20 == 0) {
LAB_0011b220:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar9 = param_1 * 0x20 - 1;
  uVar9 = uVar9 >> 1 | uVar9;
  uVar9 = uVar9 | uVar9 >> 2;
  uVar9 = uVar9 | uVar9 >> 4;
  uVar9 = uVar9 | uVar9 >> 8;
  uVar9 = uVar9 | uVar9 >> 0x10;
  uVar9 = uVar9 | uVar9 >> 0x20;
  lVar10 = uVar9 + 1;
  if (lVar10 == 0) goto LAB_0011b220;
  uVar11 = param_1;
  if (param_1 <= lVar7) {
    while (lVar7 = *(long *)this, lVar7 != 0) {
      if (*(ulong *)(lVar7 + -8) <= uVar11) {
        if (lVar10 != lVar8) {
          uVar5 = _realloc(this,lVar10);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar7 = *(long *)this;
          if (lVar7 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar1 = (code *)invalidInstructionException();
            (*pcVar1)();
          }
        }
        *(long *)(lVar7 + -8) = param_1;
        return 0;
      }
      this_00 = (CowData<char32_t> *)(lVar7 + uVar11 * 0x20);
      CowData<char32_t>::_unref(this_00 + 0x18);
      CowData<char32_t>::_unref(this_00 + 0x10);
      CowData<char32_t>::_unref(this_00 + 8);
      CowData<char32_t>::_unref(this_00);
      uVar11 = uVar11 + 1;
    }
    goto LAB_0011b276;
  }
  if (lVar10 == lVar8) {
LAB_0011b18b:
    puVar6 = *(undefined8 **)this;
    if (puVar6 == (undefined8 *)0x0) {
LAB_0011b276:
                    /* WARNING: Does not return */
      pcVar1 = (code *)invalidInstructionException();
      (*pcVar1)();
    }
    lVar7 = puVar6[-1];
    if (param_1 <= lVar7) goto LAB_0011b0e0;
  }
  else {
    if (lVar7 != 0) {
      uVar5 = _realloc(this,lVar10);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_0011b18b;
    }
    puVar2 = (undefined8 *)Memory::alloc_static(uVar9 + 0x11,false);
    if (puVar2 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar6 = puVar2 + 2;
    *puVar2 = 1;
    puVar2[1] = 0;
    *(undefined8 **)this = puVar6;
    lVar7 = 0;
  }
  pauVar3 = (undefined1 (*) [16])(puVar6 + lVar7 * 4);
  do {
    *pauVar3 = (undefined1  [16])0x0;
    pauVar4 = pauVar3 + 2;
    pauVar3[1] = (undefined1  [16])0x0;
    pauVar3 = pauVar4;
  } while ((undefined1 (*) [16])(puVar6 + lVar7 * 4) + (param_1 - lVar7) * 2 != pauVar4);
LAB_0011b0e0:
  puVar6[-1] = param_1;
  return 0;
}



/* DependencyEditor::_searched(String const&) */

void DependencyEditor::_GLOBAL__sub_I__searched(void)

{
  undefined8 uStack_8;
  
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
/* DependencyRemoveDialog::~DependencyRemoveDialog() */

void __thiscall DependencyRemoveDialog::~DependencyRemoveDialog(DependencyRemoveDialog *this)

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
/* DependencyEditor::~DependencyEditor() */

void __thiscall DependencyEditor::~DependencyEditor(DependencyEditor *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* OrphanResourcesDialog::~OrphanResourcesDialog() */

void __thiscall OrphanResourcesDialog::~OrphanResourcesDialog(OrphanResourcesDialog *this)

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
/* DependencyRemoveDialog::RemovedDependency::RemovedDependency(DependencyRemoveDialog::RemovedDependency
   const&) */

void __thiscall
DependencyRemoveDialog::RemovedDependency::RemovedDependency
          (RemovedDependency *this,RemovedDependency *param_1)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DependencyErrorDialog::~DependencyErrorDialog() */

void __thiscall DependencyErrorDialog::~DependencyErrorDialog(DependencyErrorDialog *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* DependencyEditorOwners::~DependencyEditorOwners() */

void __thiscall DependencyEditorOwners::~DependencyEditorOwners(DependencyEditorOwners *this)

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
/* CallableCustomMethodPointer<DependencyEditor, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditor,void,Object*,int,int,MouseButton> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DependencyEditor, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditor,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DependencyEditor, void, String
   const&>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditor,void,String_const&>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditor,void,String_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DependencyEditorOwners, void, int>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DependencyEditorOwners, void, int, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditorOwners,void,int,Vector2_const&,MouseButton>
           *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<DependencyEditorOwners, void, Vector2 const&,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<DependencyEditorOwners,void,Vector2_const&,MouseButton> *this
          )

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OrphanResourcesDialog, void>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void>::~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OrphanResourcesDialog,void> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* CallableCustomMethodPointer<OrphanResourcesDialog, void, Object*, int, int,
   MouseButton>::~CallableCustomMethodPointer() */

void __thiscall
CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton>::
~CallableCustomMethodPointer
          (CallableCustomMethodPointer<OrphanResourcesDialog,void,Object*,int,int,MouseButton> *this
          )

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


